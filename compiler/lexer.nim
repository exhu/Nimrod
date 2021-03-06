#
#
#           The Nimrod Compiler
#        (c) Copyright 2013 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# This scanner is handwritten for efficiency. I used an elegant buffering
# scheme which I have not seen anywhere else:
# We guarantee that a whole line is in the buffer. Thus only when scanning
# the \n or \r character we have to check wether we need to read in the next 
# chunk. (\n or \r already need special handling for incrementing the line
# counter; choosing both \n and \r allows the scanner to properly read Unix,
# DOS or Macintosh text files, even when it is not the native format.

import 
  hashes, options, msgs, strutils, platform, idents, nimlexbase, llstream,
  wordrecg

const 
  MaxLineLength* = 80         # lines longer than this lead to a warning
  numChars*: TCharSet = {'0'..'9', 'a'..'z', 'A'..'Z'}
  SymChars*: TCharSet = {'a'..'z', 'A'..'Z', '0'..'9', '\x80'..'\xFF'}
  SymStartChars*: TCharSet = {'a'..'z', 'A'..'Z', '\x80'..'\xFF'}
  OpChars*: TCharSet = {'+', '-', '*', '/', '\\', '<', '>', '!', '?', '^', '.', 
    '|', '=', '%', '&', '$', '@', '~', ':', '\x80'..'\xFF'}

# don't forget to update the 'highlite' module if these charsets should change

type 
  TTokType* = enum 
    tkInvalid, tkEof,         # order is important here!
    tkSymbol, # keywords:
    tkAddr, tkAnd, tkAs, tkAsm, tkAtomic, 
    tkBind, tkBlock, tkBreak, tkCase, tkCast, 
    tkConst, tkContinue, tkConverter, tkDiscard, tkDistinct, tkDiv, tkDo,
    tkElif, tkElse, tkEnd, tkEnum, tkExcept, tkExport,
    tkFinally, tkFor, tkFrom,
    tkGeneric, tkIf, tkImport, tkIn, tkInclude, tkInterface, 
    tkIs, tkIsnot, tkIterator,
    tkLambda, tkLet,
    tkMacro, tkMethod, tkMixin, tkMod, tkNil, tkNot, tkNotin, 
    tkObject, tkOf, tkOr, tkOut, 
    tkProc, tkPtr, tkRaise, tkRef, tkReturn, tkShared, tkShl, tkShr, tkStatic,
    tkTemplate, 
    tkTry, tkTuple, tkType, tkVar, tkWhen, tkWhile, tkWith, tkWithout, tkXor,
    tkYield, # end of keywords
    tkIntLit, tkInt8Lit, tkInt16Lit, tkInt32Lit, tkInt64Lit,
    tkUIntLit, tkUInt8Lit, tkUInt16Lit, tkUInt32Lit, tkUInt64Lit,
    tkFloatLit, tkFloat32Lit, tkFloat64Lit, tkFloat128Lit,
    tkStrLit, tkRStrLit, tkTripleStrLit,
    tkGStrLit, tkGTripleStrLit, tkCharLit, tkParLe, tkParRi, tkBracketLe, 
    tkBracketRi, tkCurlyLe, tkCurlyRi, 
    tkBracketDotLe, tkBracketDotRi, # [. and  .]
    tkCurlyDotLe, tkCurlyDotRi, # {.  and  .}
    tkParDotLe, tkParDotRi,   # (. and .)
    tkComma, tkSemiColon,
    tkColon, tkColonColon, tkEquals, tkDot, tkDotDot,
    tkOpr, tkComment, tkAccent,
    tkSpaces, tkInfixOpr, tkPrefixOpr, tkPostfixOpr,
    
  TTokTypes* = set[TTokType]

const 
  tokKeywordLow* = succ(tkSymbol)
  tokKeywordHigh* = pred(tkIntLit)
  TokTypeToStr*: array[TTokType, string] = ["tkInvalid", "[EOF]", 
    "tkSymbol",
    "addr", "and", "as", "asm", "atomic", 
    "bind", "block", "break", "case", "cast", 
    "const", "continue", "converter", "discard", "distinct", "div", "do",
    "elif", "else", "end", "enum", "except", "export",
    "finally", "for", "from", "generic", "if", 
    "import", "in", "include", "interface", "is", "isnot", "iterator",
    "lambda", "let", 
    "macro", "method", "mixin", "mod", 
    "nil", "not", "notin", "object", "of", "or", 
    "out", "proc", "ptr", "raise", "ref", "return", 
    "shared", "shl", "shr", "static",
    "template", 
    "try", "tuple", "type", "var", "when", "while", "with", "without", "xor",
    "yield",
    "tkIntLit", "tkInt8Lit", "tkInt16Lit", "tkInt32Lit", "tkInt64Lit",
    "tkUIntLit", "tkUInt8Lit", "tkUInt16Lit", "tkUInt32Lit", "tkUInt64Lit",
    "tkFloatLit", "tkFloat32Lit", "tkFloat64Lit", "tkFloat128Lit",
    "tkStrLit", "tkRStrLit",
    "tkTripleStrLit", "tkGStrLit", "tkGTripleStrLit", "tkCharLit", "(", 
    ")", "[", "]", "{", "}", "[.", ".]", "{.", ".}", "(.", ".)",
    ",", ";",
    ":", "::", "=", ".", "..",
    "tkOpr", "tkComment", "`",
    "tkSpaces", "tkInfixOpr",
    "tkPrefixOpr", "tkPostfixOpr"]

type 
  TNumericalBase* = enum 
    base10,                   # base10 is listed as the first element,
                              # so that it is the correct default value
    base2, base8, base16
  TToken* = object            # a Nimrod token
    tokType*: TTokType        # the type of the token
    indent*: int              # the indentation; != -1 if the token has been
                              # preceeded with indentation
    ident*: PIdent            # the parsed identifier
    iNumber*: BiggestInt      # the parsed integer literal
    fNumber*: BiggestFloat    # the parsed floating point literal
    base*: TNumericalBase     # the numerical base; only valid for int
                              # or float literals
    literal*: string          # the parsed (string) literal; and
                              # documentation comments are here too
  
  TLexer* = object of TBaseLexer
    fileIdx*: int32
    indentAhead*: int         # if > 0 an indendation has already been read
                              # this is needed because scanning comments
                              # needs so much look-ahead
  

var gLinesCompiled*: int  # all lines that have been compiled

proc isKeyword*(kind: TTokType): bool
proc openLexer*(lex: var TLexer, fileidx: int32, inputstream: PLLStream)
proc rawGetTok*(L: var TLexer, tok: var TToken)
  # reads in the next token into tok and skips it
proc getColumn*(L: TLexer): int
proc getLineInfo*(L: TLexer): TLineInfo
proc closeLexer*(lex: var TLexer)
proc PrintTok*(tok: TToken)
proc tokToStr*(tok: TToken): string

proc openLexer*(lex: var TLexer, filename: string, inputstream: PLLStream) =
  OpenLexer(lex, filename.fileInfoIdx, inputStream)

proc lexMessage*(L: TLexer, msg: TMsgKind, arg = "")

proc isKeyword(kind: TTokType): bool = 
  result = (kind >= tokKeywordLow) and (kind <= tokKeywordHigh)

proc isNimrodIdentifier*(s: string): bool =
  if s[0] in SymStartChars:
    var i = 1
    while i < s.len:
      if s[i] == '_': 
        inc(i)
        if s[i] notin SymChars: return
      if s[i] notin SymChars: return
      inc(i)
    result = true

proc tokToStr*(tok: TToken): string = 
  case tok.tokType
  of tkIntLit..tkInt64Lit: result = $tok.iNumber
  of tkFloatLit..tkFloat64Lit: result = $tok.fNumber
  of tkInvalid, tkStrLit..tkCharLit, tkComment: result = tok.literal
  of tkParLe..tkColon, tkEof, tkAccent: 
    result = tokTypeToStr[tok.tokType]
  else:
    if tok.ident != nil:
      result = tok.ident.s
    else: 
      InternalError("tokToStr")
      result = ""
  
proc prettyTok*(tok: TToken): string =
  if IsKeyword(tok.tokType): result = "keyword " & tok.ident.s
  else: result = tokToStr(tok)
  
proc PrintTok*(tok: TToken) = 
  write(stdout, TokTypeToStr[tok.tokType])
  write(stdout, " ")
  writeln(stdout, tokToStr(tok))

var dummyIdent: PIdent

proc initToken*(L: var TToken) = 
  L.TokType = tkInvalid
  L.iNumber = 0
  L.Indent = 0
  L.literal = ""
  L.fNumber = 0.0
  L.base = base10
  L.ident = dummyIdent

proc fillToken(L: var TToken) = 
  L.TokType = tkInvalid
  L.iNumber = 0
  L.Indent = 0
  setLen(L.literal, 0)
  L.fNumber = 0.0
  L.base = base10
  L.ident = dummyIdent
  
proc openLexer(lex: var TLexer, fileIdx: int32, inputstream: PLLStream) = 
  openBaseLexer(lex, inputstream)
  lex.fileIdx = fileIdx
  lex.indentAhead = - 1
  inc(lex.Linenumber, inputstream.lineOffset) 

proc closeLexer(lex: var TLexer) = 
  inc(gLinesCompiled, lex.LineNumber)
  closeBaseLexer(lex)

proc getColumn(L: TLexer): int = 
  result = getColNumber(L, L.bufPos)

proc getLineInfo(L: TLexer): TLineInfo = 
  result = newLineInfo(L.fileIdx, L.linenumber, getColNumber(L, L.bufpos))

proc lexMessage(L: TLexer, msg: TMsgKind, arg = "") = 
  msgs.Message(getLineInfo(L), msg, arg)

proc lexMessagePos(L: var TLexer, msg: TMsgKind, pos: int, arg = "") = 
  var info = newLineInfo(L.fileIdx, L.linenumber, pos - L.lineStart)
  msgs.Message(info, msg, arg)

proc matchUnderscoreChars(L: var TLexer, tok: var TToken, chars: TCharSet) = 
  var pos = L.bufpos              # use registers for pos, buf
  var buf = L.buf
  while true: 
    if buf[pos] in chars: 
      add(tok.literal, buf[pos])
      Inc(pos)
    else: 
      break 
    if buf[pos] == '_': 
      if buf[pos+1] notin chars: 
        lexMessage(L, errInvalidToken, "_")
        break
      add(tok.literal, '_')
      Inc(pos)
  L.bufPos = pos

proc matchTwoChars(L: TLexer, first: Char, second: TCharSet): bool = 
  result = (L.buf[L.bufpos] == first) and (L.buf[L.bufpos + 1] in Second)

proc isFloatLiteral(s: string): bool =
  for i in countup(0, len(s) - 1):
    if s[i] in {'.', 'e', 'E'}:
      return true
  result = false

proc GetNumber(L: var TLexer): TToken = 
  var 
    pos, endpos: int
    xi: biggestInt
  # get the base:
  result.tokType = tkIntLit   # int literal until we know better
  result.literal = ""
  result.base = base10        # BUGFIX
  pos = L.bufpos     # make sure the literal is correct for error messages:
  var eallowed = false
  if L.buf[pos] == '0' and L.buf[pos+1] in {'X', 'x'}:
    matchUnderscoreChars(L, result, {'A'..'F', 'a'..'f', '0'..'9', 'X', 'x'})
  else:
    matchUnderscoreChars(L, result, {'0'..'9', 'b', 'B', 'o', 'c', 'C'})
    eallowed = true
  if (L.buf[L.bufpos] == '.') and (L.buf[L.bufpos + 1] in {'0'..'9'}): 
    add(result.literal, '.')
    inc(L.bufpos)
    matchUnderscoreChars(L, result, {'0'..'9'})
    eallowed = true
  if eallowed and L.buf[L.bufpos] in {'e', 'E'}: 
    add(result.literal, 'e')
    inc(L.bufpos)
    if L.buf[L.bufpos] in {'+', '-'}: 
      add(result.literal, L.buf[L.bufpos])
      inc(L.bufpos)
    matchUnderscoreChars(L, result, {'0'..'9'})
  endpos = L.bufpos
  if L.buf[endpos] in {'\'', 'f', 'F', 'i', 'I', 'u', 'U'}:
    if L.buf[endpos] == '\'': inc(endpos)
    L.bufpos = pos            # restore position
    case L.buf[endpos]
    of 'f', 'F': 
      inc(endpos)
      if (L.buf[endpos] == '3') and (L.buf[endpos + 1] == '2'):
        result.tokType = tkFloat32Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '6') and (L.buf[endpos + 1] == '4'):
        result.tokType = tkFloat64Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '1') and
           (L.buf[endpos + 1] == '2') and
           (L.buf[endpos + 2] == '8'):
        result.tokType = tkFloat128Lit
        inc(endpos, 3)
      else: 
        lexMessage(L, errInvalidNumber, result.literal & "'f" & L.buf[endpos])
    of 'i', 'I': 
      inc(endpos)
      if (L.buf[endpos] == '6') and (L.buf[endpos + 1] == '4'): 
        result.tokType = tkInt64Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '3') and (L.buf[endpos + 1] == '2'): 
        result.tokType = tkInt32Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '1') and (L.buf[endpos + 1] == '6'): 
        result.tokType = tkInt16Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '8'): 
        result.tokType = tkInt8Lit
        inc(endpos)
      else: 
        lexMessage(L, errInvalidNumber, result.literal & "'i" & L.buf[endpos])
    of 'u', 'U':
      inc(endpos)
      if (L.buf[endpos] == '6') and (L.buf[endpos + 1] == '4'): 
        result.tokType = tkUInt64Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '3') and (L.buf[endpos + 1] == '2'): 
        result.tokType = tkUInt32Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '1') and (L.buf[endpos + 1] == '6'): 
        result.tokType = tkUInt16Lit
        inc(endpos, 2)
      elif (L.buf[endpos] == '8'): 
        result.tokType = tkUInt8Lit
        inc(endpos)
      else:
        result.tokType = tkUIntLit
    else: lexMessage(L, errInvalidNumber, result.literal & "'" & L.buf[endpos])
  else:
    L.bufpos = pos            # restore position
  try: 
    if (L.buf[pos] == '0') and
        (L.buf[pos + 1] in {'x', 'X', 'b', 'B', 'o', 'O', 'c', 'C'}): 
      inc(pos, 2)
      xi = 0                  # it may be a base prefix
      case L.buf[pos - 1]     # now look at the optional type suffix:
      of 'b', 'B': 
        result.base = base2
        while true: 
          case L.buf[pos]
          of 'A'..'Z', 'a'..'z', '2'..'9', '.': 
            lexMessage(L, errInvalidNumber, result.literal)
            inc(pos)
          of '_': 
            if L.buf[pos+1] notin {'0'..'1'}: 
              lexMessage(L, errInvalidToken, "_")
              break
            inc(pos)
          of '0', '1': 
            xi = `shl`(xi, 1) or (ord(L.buf[pos]) - ord('0'))
            inc(pos)
          else: break 
      of 'o', 'c', 'C': 
        result.base = base8
        while true: 
          case L.buf[pos]
          of 'A'..'Z', 'a'..'z', '8'..'9', '.': 
            lexMessage(L, errInvalidNumber, result.literal)
            inc(pos)
          of '_': 
            if L.buf[pos+1] notin {'0'..'7'}:
              lexMessage(L, errInvalidToken, "_")
              break
            inc(pos)
          of '0'..'7': 
            xi = `shl`(xi, 3) or (ord(L.buf[pos]) - ord('0'))
            inc(pos)
          else: break 
      of 'O': 
        lexMessage(L, errInvalidNumber, result.literal)
      of 'x', 'X': 
        result.base = base16
        while true: 
          case L.buf[pos]
          of 'G'..'Z', 'g'..'z': 
            lexMessage(L, errInvalidNumber, result.literal)
            inc(pos)
          of '_': 
            if L.buf[pos+1] notin {'0'..'9', 'a'..'f', 'A'..'F'}: 
              lexMessage(L, errInvalidToken, "_")
              break
            inc(pos)
          of '0'..'9': 
            xi = `shl`(xi, 4) or (ord(L.buf[pos]) - ord('0'))
            inc(pos)
          of 'a'..'f': 
            xi = `shl`(xi, 4) or (ord(L.buf[pos]) - ord('a') + 10)
            inc(pos)
          of 'A'..'F': 
            xi = `shl`(xi, 4) or (ord(L.buf[pos]) - ord('A') + 10)
            inc(pos)
          else: break 
      else: InternalError(getLineInfo(L), "getNumber")
      case result.tokType
      of tkIntLit, tkInt64Lit: result.iNumber = xi
      of tkInt8Lit: result.iNumber = biggestInt(int8(toU8(int(xi))))
      of tkInt16Lit: result.iNumber = biggestInt(toU16(int(xi)))
      of tkInt32Lit: result.iNumber = biggestInt(toU32(xi))
      of tkUIntLit, tkUInt64Lit: result.iNumber = xi
      of tkUInt8Lit: result.iNumber = biggestInt(int8(toU8(int(xi))))
      of tkUInt16Lit: result.iNumber = biggestInt(toU16(int(xi)))
      of tkUInt32Lit: result.iNumber = biggestInt(toU32(xi))
      of tkFloat32Lit: 
        result.fNumber = (cast[PFloat32](addr(xi)))[] 
        # note: this code is endian neutral!
        # XXX: Test this on big endian machine!
      of tkFloat64Lit: result.fNumber = (cast[PFloat64](addr(xi)))[] 
      else: InternalError(getLineInfo(L), "getNumber")
    elif isFloatLiteral(result.literal) or (result.tokType == tkFloat32Lit) or
        (result.tokType == tkFloat64Lit): 
      result.fnumber = parseFloat(result.literal)
      if result.tokType == tkIntLit: result.tokType = tkFloatLit
    else: 
      result.iNumber = ParseBiggestInt(result.literal)
      if (result.iNumber < low(int32)) or (result.iNumber > high(int32)): 
        if result.tokType == tkIntLit: 
          result.tokType = tkInt64Lit
        elif result.tokType != tkInt64Lit: 
          lexMessage(L, errInvalidNumber, result.literal)
  except EInvalidValue:
    lexMessage(L, errInvalidNumber, result.literal)
  except EOverflow, EOutOfRange:
    lexMessage(L, errNumberOutOfRange, result.literal)
  L.bufpos = endpos

proc handleHexChar(L: var TLexer, xi: var int) = 
  case L.buf[L.bufpos]
  of '0'..'9': 
    xi = (xi shl 4) or (ord(L.buf[L.bufpos]) - ord('0'))
    inc(L.bufpos)
  of 'a'..'f': 
    xi = (xi shl 4) or (ord(L.buf[L.bufpos]) - ord('a') + 10)
    inc(L.bufpos)
  of 'A'..'F': 
    xi = (xi shl 4) or (ord(L.buf[L.bufpos]) - ord('A') + 10)
    inc(L.bufpos)
  else: nil

proc handleDecChars(L: var TLexer, xi: var int) = 
  while L.buf[L.bufpos] in {'0'..'9'}: 
    xi = (xi * 10) + (ord(L.buf[L.bufpos]) - ord('0'))
    inc(L.bufpos)

proc getEscapedChar(L: var TLexer, tok: var TToken) = 
  inc(L.bufpos)               # skip '\'
  case L.buf[L.bufpos]
  of 'n', 'N': 
    if tok.toktype == tkCharLit: lexMessage(L, errNnotAllowedInCharacter)
    add(tok.literal, tnl)
    Inc(L.bufpos)
  of 'r', 'R', 'c', 'C': 
    add(tok.literal, CR)
    Inc(L.bufpos)
  of 'l', 'L': 
    add(tok.literal, LF)
    Inc(L.bufpos)
  of 'f', 'F': 
    add(tok.literal, FF)
    inc(L.bufpos)
  of 'e', 'E': 
    add(tok.literal, ESC)
    Inc(L.bufpos)
  of 'a', 'A': 
    add(tok.literal, BEL)
    Inc(L.bufpos)
  of 'b', 'B': 
    add(tok.literal, BACKSPACE)
    Inc(L.bufpos)
  of 'v', 'V': 
    add(tok.literal, VT)
    Inc(L.bufpos)
  of 't', 'T': 
    add(tok.literal, Tabulator)
    Inc(L.bufpos)
  of '\'', '\"': 
    add(tok.literal, L.buf[L.bufpos])
    Inc(L.bufpos)
  of '\\': 
    add(tok.literal, '\\')
    Inc(L.bufpos)
  of 'x', 'X': 
    inc(L.bufpos)
    var xi = 0
    handleHexChar(L, xi)
    handleHexChar(L, xi)
    add(tok.literal, Chr(xi))
  of '0'..'9': 
    if matchTwoChars(L, '0', {'0'..'9'}): 
      lexMessage(L, warnOctalEscape)
    var xi = 0
    handleDecChars(L, xi)
    if (xi <= 255): add(tok.literal, Chr(xi))
    else: lexMessage(L, errInvalidCharacterConstant)
  else: lexMessage(L, errInvalidCharacterConstant)

proc newString(s: cstring, len: int): string =
  ## XXX, how come there is no support for this?
  result = newString(len)
  for i in 0 .. <len:
    result[i] = s[i]

proc HandleCRLF(L: var TLexer, pos: int): int =
  template registerLine =
    let col = L.getColNumber(pos)
    
    if col > MaxLineLength:
      lexMessagePos(L, hintLineTooLong, pos)

    if optEmbedOrigSrc in gGlobalOptions:
      let lineStart = cast[TAddress](L.buf) + L.lineStart
      let line = newString(cast[cstring](lineStart), col)
      addSourceLine(L.fileIdx, line)
  
  case L.buf[pos]
  of CR:
    registerLine()
    result = nimlexbase.HandleCR(L, pos)
  of LF:
    registerLine()
    result = nimlexbase.HandleLF(L, pos)
  else: result = pos
  
proc getString(L: var TLexer, tok: var TToken, rawMode: bool) = 
  var pos = L.bufPos + 1          # skip "
  var buf = L.buf                 # put `buf` in a register
  var line = L.linenumber         # save linenumber for better error message
  if buf[pos] == '\"' and buf[pos+1] == '\"': 
    tok.tokType = tkTripleStrLit # long string literal:
    inc(pos, 2)               # skip ""
    # skip leading newline:
    pos = HandleCRLF(L, pos)
    buf = L.buf
    while true: 
      case buf[pos]
      of '\"': 
        if buf[pos+1] == '\"' and buf[pos+2] == '\"' and
            buf[pos+3] != '\"': 
          L.bufpos = pos + 3 # skip the three """
          break 
        add(tok.literal, '\"')
        Inc(pos)
      of CR, LF: 
        pos = HandleCRLF(L, pos)
        buf = L.buf
        add(tok.literal, tnl)
      of nimlexbase.EndOfFile: 
        var line2 = L.linenumber
        L.LineNumber = line
        lexMessagePos(L, errClosingTripleQuoteExpected, L.lineStart)
        L.LineNumber = line2
        break 
      else: 
        add(tok.literal, buf[pos])
        Inc(pos)
  else: 
    # ordinary string literal
    if rawMode: tok.tokType = tkRStrLit
    else: tok.tokType = tkStrLit
    while true: 
      var c = buf[pos]
      if c == '\"': 
        if rawMode and buf[pos+1] == '\"':
          inc(pos, 2)
          add(tok.literal, '"')
        else:
          inc(pos) # skip '"'
          break
      elif c in {CR, LF, nimlexbase.EndOfFile}: 
        lexMessage(L, errClosingQuoteExpected)
        break 
      elif (c == '\\') and not rawMode: 
        L.bufPos = pos
        getEscapedChar(L, tok)
        pos = L.bufPos
      else: 
        add(tok.literal, c)
        Inc(pos)
    L.bufpos = pos

proc getCharacter(L: var TLexer, tok: var TToken) = 
  Inc(L.bufpos)               # skip '
  var c = L.buf[L.bufpos]
  case c
  of '\0'..Pred(' '), '\'': lexMessage(L, errInvalidCharacterConstant)
  of '\\': getEscapedChar(L, tok)
  else: 
    tok.literal = $c
    Inc(L.bufpos)
  if L.buf[L.bufpos] != '\'': lexMessage(L, errMissingFinalQuote)
  inc(L.bufpos)               # skip '
  
proc getSymbol(L: var TLexer, tok: var TToken) = 
  var h: THash = 0
  var pos = L.bufpos
  var buf = L.buf
  while true: 
    var c = buf[pos]
    case c
    of 'a'..'z', '0'..'9', '\x80'..'\xFF': 
      h = h !& ord(c)
    of 'A'..'Z': 
      c = chr(ord(c) + (ord('a') - ord('A'))) # toLower()
      h = h !& ord(c)
    of '_':
      if buf[pos+1] notin SymChars: 
        lexMessage(L, errInvalidToken, "_")
        break
    else: break 
    Inc(pos)
  h = !$h
  tok.ident = getIdent(addr(L.buf[L.bufpos]), pos - L.bufpos, h)
  L.bufpos = pos
  if (tok.ident.id < ord(tokKeywordLow) - ord(tkSymbol)) or
      (tok.ident.id > ord(tokKeywordHigh) - ord(tkSymbol)): 
    tok.tokType = tkSymbol
  else: 
    tok.tokType = TTokType(tok.ident.id + ord(tkSymbol))
  
proc endOperator(L: var TLexer, tok: var TToken, pos: int,
                 hash: THash) {.inline.} = 
  var h = !$hash
  tok.ident = getIdent(addr(L.buf[L.bufpos]), pos - L.bufpos, h)
  if (tok.ident.id < oprLow) or (tok.ident.id > oprHigh): tok.tokType = tkOpr
  else: tok.tokType = TTokType(tok.ident.id - oprLow + ord(tkColon))
  L.bufpos = pos
  
proc getOperator(L: var TLexer, tok: var TToken) = 
  var pos = L.bufpos
  var buf = L.buf
  var h: THash = 0
  while true: 
    var c = buf[pos]
    if c notin OpChars: break
    h = h !& Ord(c)
    Inc(pos)
  endOperator(L, tok, pos, h)

proc scanComment(L: var TLexer, tok: var TToken) = 
  var pos = L.bufpos
  var buf = L.buf 
  # a comment ends if the next line does not start with the # on the same
  # column after only whitespace
  tok.tokType = tkComment
  # iNumber contains the number of '\n' in the token
  tok.iNumber = 0
  var col = getColNumber(L, pos)
  while true:
    var lastBackslash = -1
    while buf[pos] notin {CR, LF, nimlexbase.EndOfFile}:
      if buf[pos] == '\\': lastBackslash = pos+1
      add(tok.literal, buf[pos])
      inc(pos)
    if lastBackslash > 0:
      # a backslash is a continuation character if only followed by spaces
      # plus a newline:
      while buf[lastBackslash] == ' ': inc(lastBackslash)
      if buf[lastBackslash] notin {CR, LF, nimlexbase.EndOfFile}:
        # false positive:
        lastBackslash = -1

    pos = handleCRLF(L, pos)
    buf = L.buf
    var indent = 0
    while buf[pos] == ' ': 
      inc(pos)
      inc(indent)
    if buf[pos] == '#' and (col == indent or lastBackslash > 0):
      tok.literal.add "\n"
      col = indent
      inc tok.iNumber
    else:
      if buf[pos] > ' ': 
        L.indentAhead = indent
      break
  L.bufpos = pos

proc skip(L: var TLexer, tok: var TToken) =
  var pos = L.bufpos
  var buf = L.buf
  while true:
    case buf[pos]
    of ' ':
      Inc(pos)
    of Tabulator:
      lexMessagePos(L, errTabulatorsAreNotAllowed, pos)
      inc(pos)
    of CR, LF:
      pos = HandleCRLF(L, pos)
      buf = L.buf
      var indent = 0
      while buf[pos] == ' ':
        Inc(pos)
        Inc(indent)
      if buf[pos] > ' ':
        tok.indent = indent
        break
    else:
      break                   # EndOfFile also leaves the loop
  L.bufpos = pos

proc rawGetTok(L: var TLexer, tok: var TToken) =
  fillToken(tok)
  if L.indentAhead >= 0:
    tok.indent = L.indentAhead
    L.indentAhead = -1
  else:
    tok.indent = -1
  skip(L, tok)
  var c = L.buf[L.bufpos]
  if c in SymStartChars - {'r', 'R', 'l'}:
    getSymbol(L, tok)
  else:
    case c
    of '#': 
      scanComment(L, tok)
    of '*':
      # '*:' is unfortunately a special case, because it is two tokens in 
      # 'var v*: int'.
      if L.buf[L.bufpos+1] == ':' and L.buf[L.bufpos+2] notin OpChars:
        var h = 0 !& ord('*')
        endOperator(L, tok, L.bufpos+1, h)
      else:
        getOperator(L, tok)
    of ',':
      tok.toktype = tkComma
      Inc(L.bufpos)
    of 'l': 
      # if we parsed exactly one character and its a small L (l), this
      # is treated as a warning because it may be confused with the number 1
      if L.buf[L.bufpos+1] notin (SymChars + {'_'}):
        lexMessage(L, warnSmallLshouldNotBeUsed)
      getSymbol(L, tok)
    of 'r', 'R':
      if L.buf[L.bufPos + 1] == '\"': 
        Inc(L.bufPos)
        getString(L, tok, true)
      else: 
        getSymbol(L, tok)
    of '(': 
      Inc(L.bufpos)
      if L.buf[L.bufPos] == '.' and L.buf[L.bufPos+1] != '.': 
        tok.toktype = tkParDotLe
        Inc(L.bufpos)
      else: 
        tok.toktype = tkParLe
    of ')': 
      tok.toktype = tkParRi
      Inc(L.bufpos)
    of '[': 
      Inc(L.bufpos)
      if L.buf[L.bufPos] == '.' and L.buf[L.bufPos+1] != '.':
        tok.toktype = tkBracketDotLe
        Inc(L.bufpos)
      else:
        tok.toktype = tkBracketLe
    of ']':
      tok.toktype = tkBracketRi
      Inc(L.bufpos)
    of '.':
      if L.buf[L.bufPos+1] == ']': 
        tok.tokType = tkBracketDotRi
        Inc(L.bufpos, 2)
      elif L.buf[L.bufPos+1] == '}': 
        tok.tokType = tkCurlyDotRi
        Inc(L.bufpos, 2)
      elif L.buf[L.bufPos+1] == ')': 
        tok.tokType = tkParDotRi
        Inc(L.bufpos, 2)
      else: 
        getOperator(L, tok)
    of '{': 
      Inc(L.bufpos)
      if L.buf[L.bufPos] == '.' and L.buf[L.bufPos+1] != '.':
        tok.toktype = tkCurlyDotLe
        Inc(L.bufpos)
      else: 
        tok.toktype = tkCurlyLe
    of '}': 
      tok.toktype = tkCurlyRi
      Inc(L.bufpos)
    of ';': 
      tok.toktype = tkSemiColon
      Inc(L.bufpos)
    of '`': 
      tok.tokType = tkAccent
      Inc(L.bufpos)
    of '\"': 
      # check for extended raw string literal:
      var rawMode = L.bufpos > 0 and L.buf[L.bufpos-1] in SymChars
      getString(L, tok, rawMode)
      if rawMode:
        # tkRStrLit -> tkGStrLit
        # tkTripleStrLit -> tkGTripleStrLit
        inc(tok.tokType, 2)
    of '\'':
      tok.tokType = tkCharLit
      getCharacter(L, tok)
      tok.tokType = tkCharLit
    of '0'..'9':
      tok = getNumber(L)
    else:
      if c in OpChars: 
        getOperator(L, tok)
      elif c == nimlexbase.EndOfFile:
        tok.toktype = tkEof
        tok.indent = 0
      else:
        tok.literal = $c
        tok.tokType = tkInvalid
        lexMessage(L, errInvalidToken, c & " (\\" & $(ord(c)) & ')')
        Inc(L.bufpos)
  
dummyIdent = getIdent("")
