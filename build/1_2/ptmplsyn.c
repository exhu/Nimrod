/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY68013 TY68013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49523 TY49523;
typedef struct TY84009 TY84009;
typedef struct TY41532 TY41532;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49549 TY49549;
typedef struct TY49545 TY49545;
typedef struct TY48011 TY48011;
typedef struct TY49517 TY49517;
typedef struct TY48005 TY48005;
typedef struct TY49547 TY49547;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49541 TY49541;
typedef struct TY37013 TY37013;
typedef NU8 TY20402[32];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY41532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY84009 {
TY68013* Inp;
NU8 State;
TY41532 Info;
NI Indent;
NI Par;
NimStringDesc* X;
TY68013* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY68013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY49523 {
TY49549* Typ;
NimStringDesc* Comment;
TY41532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY49545* Sym;
} S4;
struct {TY48011* Ident;
} S5;
struct {TY49517* Sons;
} S6;
} KindU;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY48005 {
  TNimObject Sup;
NI Id;
};
struct TY49537 {
NU8 K;
NU8 S;
NU8 Flags;
TY49549* T;
TY46008* R;
NI A;
};
struct TY49549 {
  TY48005 Sup;
NU8 Kind;
TY49547* Sons;
TY49523* N;
NU8 Flags;
NU8 Callconv;
TY49545* Owner;
TY49545* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY49537 Loc;
};
struct TY49527 {
TNimType* m_type;
NI Counter;
TY49525* Data;
};
struct TY49545 {
  TY48005 Sup;
NU8 Kind;
NU8 Magic;
TY49549* Typ;
TY48011* Name;
TY41532 Info;
TY49545* Owner;
NU32 Flags;
TY49527 Tab;
TY49523* Ast;
NU32 Options;
NI Position;
NI Offset;
TY49537 Loc;
TY49541* Annex;
};
struct TY48011 {
  TY48005 Sup;
NimStringDesc* S;
TY48011* Next;
NI H;
};
struct TY46008 {
  TNimObject Sup;
TY46008* Left;
TY46008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY37013 {
  TNimObject Sup;
TY37013* Prev;
TY37013* Next;
};
struct TY49541 {
  TY37013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY46008* Name;
TY49523* Path;
};
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY41532, Newlineinfo_41574)(NimStringDesc* Filename_41576, NI Line_41577, NI Col_41578);
N_NIMCALL(TY68013*, Llstreamopen_68025)(NimStringDesc* Data_68027);
N_NIMCALL(NIM_CHAR, Chararg_83014)(TY49523* N_83016, NimStringDesc* Name_83017, NI Pos_83018, NIM_CHAR Default_83019);
N_NIMCALL(NimStringDesc*, Strarg_83020)(TY49523* N_83022, NimStringDesc* Name_83023, NI Pos_83024, NimStringDesc* Default_83025);
N_NIMCALL(NIM_BOOL, Llstreamatend_68071)(TY68013* S_68073);
N_NIMCALL(NimStringDesc*, Llstreamreadline_68048)(TY68013* S_68050);
N_NIMCALL(void, Parseline_84032)(TY84009* P_84035);
N_NIMCALL(void, Newline_84026)(TY84009* P_84029);
N_NIMCALL(void, Llstreamwrite_68054)(TY68013* S_68056, NimStringDesc* Data_68057);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_23750, NIM_CHAR C_23751);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_16908);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NU8, Whichkeyword_66468)(NimStringDesc* Id_66470);
N_NIMCALL(void, Limessage_41562)(TY41532 Info_41564, NU8 Msg_41565, NimStringDesc* Arg_41566);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_23450, NI Len_23451);
N_NIMCALL(void, Llstreamwrite_68058)(TY68013* S_68060, NIM_CHAR Data_68061);
N_NIMCALL(void, Llstreamclose_68040)(TY68013* S_68042);
NIM_CONST TY20402 Patternchars_84024 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP190833, "", 0);
STRING_LITERAL(TMP190834, "subschar", 8);
STRING_LITERAL(TMP190835, "metachar", 8);
STRING_LITERAL(TMP190836, "emit", 4);
STRING_LITERAL(TMP190837, "result.add", 10);
STRING_LITERAL(TMP190838, "conc", 4);
STRING_LITERAL(TMP190839, " & ", 3);
STRING_LITERAL(TMP190840, "tostring", 8);
STRING_LITERAL(TMP190841, "$", 1);
STRING_LITERAL(TMP190842, "\015\012", 2);
STRING_LITERAL(TMP190843, "end", 3);
STRING_LITERAL(TMP190844, "#end", 4);
STRING_LITERAL(TMP190845, "\"", 1);
STRING_LITERAL(TMP190846, "(\"", 2);
STRING_LITERAL(TMP190847, "\\x", 2);
STRING_LITERAL(TMP190848, "\\\\", 2);
STRING_LITERAL(TMP190849, "\\\'", 2);
STRING_LITERAL(TMP190850, "\\\"", 2);
STRING_LITERAL(TMP190851, "}", 1);
STRING_LITERAL(TMP190852, "\\n\"", 3);
N_NIMCALL(void, Newline_84026)(TY84009* P_84029) {
NimStringDesc* LOC1;
LOC1 = nsuRepeatChar((*P_84029).Par, 41);
Llstreamwrite_68054((*P_84029).Outp, LOC1);
(*P_84029).Par = 0;
if (!(((NI16) 1) < (*P_84029).Info.Line)) goto LA3;
Llstreamwrite_68054((*P_84029).Outp, ((NimStringDesc*) &TMP190842));
LA3: ;
}
N_NIMCALL(void, Parseline_84032)(TY84009* P_84035) {
NI D_84036;
NI J_84037;
NI Curly_84038;
NimStringDesc* Keyw_84039;
NIM_BOOL LOC3;
NU8 LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NimStringDesc* LOC17;
NimStringDesc* LOC18;
NimStringDesc* LOC19;
NimStringDesc* LOC20;
NimStringDesc* LOC21;
NimStringDesc* LOC22;
NimStringDesc* LOC23;
NimStringDesc* LOC25;
D_84036 = 0;
J_84037 = 0;
Curly_84038 = 0;
Keyw_84039 = 0;
J_84037 = 0;
while (1) {
if (!((NU8)((*P_84035).X->data[J_84037]) == (NU8)(32))) goto LA1;
J_84037 += 1;
} LA1: ;
LOC3 = ((NU8)((*P_84035).X->data[0]) == (NU8)((*P_84035).Nimdirective));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)((*P_84035).X->data[1]) == (NU8)(33));
LA4: ;
if (!LOC3) goto LA5;
Newline_84026(P_84035);
goto LA2;
LA5: ;
if (!((NU8)((*P_84035).X->data[J_84037]) == (NU8)((*P_84035).Nimdirective))) goto LA7;
Newline_84026(P_84035);
J_84037 += 1;
while (1) {
if (!((NU8)((*P_84035).X->data[J_84037]) == (NU8)(32))) goto LA9;
J_84037 += 1;
} LA9: ;
D_84036 = J_84037;
Keyw_84039 = copyString(((NimStringDesc*) &TMP190833));
while (1) {
if (!(((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(97)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(122)) || ((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(65)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(90)) || ((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(48)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(57)) || ((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(128)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(255)) || ((NU8)((*P_84035).X->data[J_84037])) == ((NU8)(46)) || ((NU8)((*P_84035).X->data[J_84037])) == ((NU8)(95)))) goto LA10;
Keyw_84039 = addChar(Keyw_84039, (*P_84035).X->data[J_84037]);
J_84037 += 1;
} LA10: ;
LOC11 = Whichkeyword_66468(Keyw_84039);
switch (LOC11) {
case ((NU8) 19):
if (!(2 <= (*P_84035).Indent)) goto LA13;
(*P_84035).Indent -= 2;
goto LA12;
LA13: ;
(*P_84035).Info.Col = ((NI16) (J_84037));
Limessage_41562((*P_84035).Info, ((NU8) 159), ((NimStringDesc*) &TMP190843));
LA12: ;
LOC15 = nsuRepeatChar((*P_84035).Indent, 32);
Llstreamwrite_68054((*P_84035).Outp, LOC15);
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190844));
break;
case ((NU8) 26):
case ((NU8) 58):
case ((NU8) 54):
case ((NU8) 59):
case ((NU8) 23):
case ((NU8) 7):
case ((NU8) 9):
case ((NU8) 46):
case ((NU8) 33):
case ((NU8) 13):
case ((NU8) 36):
case ((NU8) 53):
case ((NU8) 37):
LOC16 = nsuRepeatChar((*P_84035).Indent, 32);
Llstreamwrite_68054((*P_84035).Outp, LOC16);
LOC17 = copyStr((*P_84035).X, D_84036);
Llstreamwrite_68054((*P_84035).Outp, LOC17);
(*P_84035).Indent += 2;
break;
case ((NU8) 17):
case ((NU8) 43):
case ((NU8) 18):
case ((NU8) 21):
case ((NU8) 22):
LOC18 = nsuRepeatChar((NI64)((*P_84035).Indent - 2), 32);
Llstreamwrite_68054((*P_84035).Outp, LOC18);
LOC19 = copyStr((*P_84035).X, D_84036);
Llstreamwrite_68054((*P_84035).Outp, LOC19);
break;
default:
LOC20 = nsuRepeatChar((*P_84035).Indent, 32);
Llstreamwrite_68054((*P_84035).Outp, LOC20);
LOC21 = copyStr((*P_84035).X, D_84036);
Llstreamwrite_68054((*P_84035).Outp, LOC21);
break;
}
(*P_84035).State = ((NU8) 0);
goto LA2;
LA7: ;
J_84037 = 0;
switch ((*P_84035).State) {
case ((NU8) 1):
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Conc);
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190842));
LOC22 = nsuRepeatChar((NI64)((*P_84035).Indent + 2), 32);
Llstreamwrite_68054((*P_84035).Outp, LOC22);
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190845));
break;
case ((NU8) 0):
Newline_84026(P_84035);
LOC23 = nsuRepeatChar((*P_84035).Indent, 32);
Llstreamwrite_68054((*P_84035).Outp, LOC23);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Emit);
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190846));
(*P_84035).Par += 1;
break;
}
(*P_84035).State = ((NU8) 1);
while (1) {
switch (((NU8)((*P_84035).X->data[J_84037]))) {
case 0:
goto LA24;
break;
case 1 ... 31:
case 128 ... 255:
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190847));
LOC25 = nsuToHex(((NI64) (((NU8)((*P_84035).X->data[J_84037])))), 2);
Llstreamwrite_68054((*P_84035).Outp, LOC25);
J_84037 += 1;
break;
case 92:
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190848));
J_84037 += 1;
break;
case 39:
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190849));
J_84037 += 1;
break;
case 34:
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190850));
J_84037 += 1;
break;
default:
if (!((NU8)((*P_84035).X->data[J_84037]) == (NU8)((*P_84035).Subschar))) goto LA27;
J_84037 += 1;
switch (((NU8)((*P_84035).X->data[J_84037]))) {
case 123:
(*P_84035).Info.Col = ((NI16) (J_84037));
Llstreamwrite_68058((*P_84035).Outp, 34);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Conc);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Tostr);
Llstreamwrite_68058((*P_84035).Outp, 40);
J_84037 += 1;
Curly_84038 = 0;
while (1) {
switch (((NU8)((*P_84035).X->data[J_84037]))) {
case 0:
Limessage_41562((*P_84035).Info, ((NU8) 182), ((NimStringDesc*) &TMP190851));
break;
case 123:
J_84037 += 1;
Curly_84038 += 1;
Llstreamwrite_68058((*P_84035).Outp, 123);
break;
case 125:
J_84037 += 1;
if (!(Curly_84038 == 0)) goto LA31;
goto LA29;
LA31: ;
if (!(0 < Curly_84038)) goto LA34;
Curly_84038 -= 1;
LA34: ;
Llstreamwrite_68058((*P_84035).Outp, 125);
break;
default:
Llstreamwrite_68058((*P_84035).Outp, (*P_84035).X->data[J_84037]);
J_84037 += 1;
break;
}
} LA29: ;
Llstreamwrite_68058((*P_84035).Outp, 41);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Conc);
Llstreamwrite_68058((*P_84035).Outp, 34);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
Llstreamwrite_68058((*P_84035).Outp, 34);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Conc);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Tostr);
Llstreamwrite_68058((*P_84035).Outp, 40);
while (1) {
if (!(((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(97)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(122)) || ((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(65)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(90)) || ((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(48)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(57)) || ((NU8)((*P_84035).X->data[J_84037])) >= ((NU8)(128)) && ((NU8)((*P_84035).X->data[J_84037])) <= ((NU8)(255)) || ((NU8)((*P_84035).X->data[J_84037])) == ((NU8)(46)) || ((NU8)((*P_84035).X->data[J_84037])) == ((NU8)(95)))) goto LA36;
Llstreamwrite_68058((*P_84035).Outp, (*P_84035).X->data[J_84037]);
J_84037 += 1;
} LA36: ;
Llstreamwrite_68058((*P_84035).Outp, 41);
Llstreamwrite_68054((*P_84035).Outp, (*P_84035).Conc);
Llstreamwrite_68058((*P_84035).Outp, 34);
break;
default:
if (!((NU8)((*P_84035).X->data[J_84037]) == (NU8)((*P_84035).Subschar))) goto LA38;
Llstreamwrite_68058((*P_84035).Outp, (*P_84035).Subschar);
J_84037 += 1;
goto LA37;
LA38: ;
(*P_84035).Info.Col = ((NI16) (J_84037));
Limessage_41562((*P_84035).Info, ((NU8) 164), ((NimStringDesc*) &TMP190841));
LA37: ;
break;
}
goto LA26;
LA27: ;
Llstreamwrite_68058((*P_84035).Outp, (*P_84035).X->data[J_84037]);
J_84037 += 1;
LA26: ;
break;
}
} LA24: ;
Llstreamwrite_68054((*P_84035).Outp, ((NimStringDesc*) &TMP190852));
LA2: ;
}
N_NIMCALL(TY68013*, Filtertmpl_84001)(TY68013* Stdin_84003, NimStringDesc* Filename_84004, TY49523* Call_84005) {
TY68013* Result_84350;
TY84009 P_84351;
NIM_BOOL LOC2;
Result_84350 = 0;
memset((void*)&P_84351, 0, sizeof(P_84351));
P_84351.Info = Newlineinfo_41574(Filename_84004, 0, 0);
P_84351.Outp = Llstreamopen_68025(((NimStringDesc*) &TMP190833));
P_84351.Inp = Stdin_84003;
P_84351.Subschar = Chararg_83014(Call_84005, ((NimStringDesc*) &TMP190834), 1, 36);
P_84351.Nimdirective = Chararg_83014(Call_84005, ((NimStringDesc*) &TMP190835), 2, 35);
P_84351.Emit = Strarg_83020(Call_84005, ((NimStringDesc*) &TMP190836), 3, ((NimStringDesc*) &TMP190837));
P_84351.Conc = Strarg_83020(Call_84005, ((NimStringDesc*) &TMP190838), 4, ((NimStringDesc*) &TMP190839));
P_84351.Tostr = Strarg_83020(Call_84005, ((NimStringDesc*) &TMP190840), 5, ((NimStringDesc*) &TMP190841));
while (1) {
LOC2 = Llstreamatend_68071(P_84351.Inp);
if (!!(LOC2)) goto LA1;
P_84351.X = Llstreamreadline_68048(P_84351.Inp);
P_84351.Info.Line = (NI16)(P_84351.Info.Line + ((NI16) 1));
Parseline_84032(&P_84351);
} LA1: ;
Newline_84026(&P_84351);
Result_84350 = P_84351.Outp;
Llstreamclose_68040(P_84351.Inp);
return Result_84350;
}
N_NOINLINE(void, ptmplsynInit)(void) {
}

