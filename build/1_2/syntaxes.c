/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49523 TY49523;
typedef struct TY85028 TY85028;
typedef struct TY74011 TY74011;
typedef struct TY70267 TY70267;
typedef struct TY70263 TY70263;
typedef struct TY68013 TY68013;
typedef struct TY49549 TY49549;
typedef struct TY41532 TY41532;
typedef struct TY49545 TY49545;
typedef struct TY48011 TY48011;
typedef struct TY49517 TY49517;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY69015 TY69015;
typedef struct TY70281 TY70281;
typedef struct TY49547 TY49547;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49541 TY49541;
typedef struct TY37013 TY37013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY85013[3];
typedef NimStringDesc* TY85017[4];
struct TY74011 {
TY70267* Lex;
TY70263* Tok;
};
struct TY85028 {
NU8 Skin;
TY74011 Parser;
};
struct TY41532 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY48005 {
  TNimObject Sup;
NI Id;
};
struct TY48011 {
  TY48005 Sup;
NimStringDesc* S;
TY48011* Next;
NI H;
};
typedef NimStringDesc* TY40349[1];
struct TY68013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY69015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY68013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY70267 {
  TY69015 Sup;
NimStringDesc* Filename;
TY70281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY70263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY48011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY70263* Next;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY70281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Rawmessage_41553)(NU8 Msg_41555, NimStringDesc* Arg_41556);
N_NIMCALL(void, Openparsers_85034)(TY85028* P_85037, NimStringDesc* Filename_85038, TY68013* Inputstream_85039);
N_NIMCALL(TY49523*, Parsepipe_85123)(NimStringDesc* Filename_85125, TY68013* Inputstream_85126);
N_NIMCALL(TY68013*, Llstreamopen_68032)(NimStringDesc* Filename_68034, NU8 Mode_68035);
N_NIMCALL(NimStringDesc*, Llstreamreadline_68048)(TY68013* S_68050);
N_NIMCALL(NI, Utf8bom_85077)(NimStringDesc* S_85079);
N_NIMCALL(NIM_BOOL, Containsshebang_85087)(NimStringDesc* S_85089, NI I_85090);
N_NIMCALL(void, Openparser_74018)(TY74011* P_74021, NimStringDesc* Filename_74022, TY68013* Inputstream_74023);
N_NIMCALL(TY68013*, Llstreamopen_68025)(NimStringDesc* Data_68027);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(TY49523*, Parseall_74014)(TY74011* P_74017);
N_NIMCALL(void, Closeparser_74024)(TY74011* P_74027);
N_NIMCALL(void, Llstreamclose_68040)(TY68013* S_68042);
N_NIMCALL(TY68013*, Evalpipe_85380)(TY85028* P_85383, TY49523* N_85384, NimStringDesc* Filename_85385, TY68013* Start_85386);
N_NIMCALL(NIM_BOOL, Identeq_48028)(TY48011* Id_48030, NimStringDesc* Name_48031);
N_NIMCALL(TY68013*, Applyfilter_85343)(TY85028* P_85346, TY49523* N_85347, NimStringDesc* Filename_85348, TY68013* Stdin_85349);
N_NIMCALL(TY48011*, Getcallee_85264)(TY49523* N_85266);
N_NIMCALL(NimStringDesc*, Rendertree_78042)(TY49523* N_78044, NU8 Renderflags_78047);
N_NIMCALL(NU8, Getfilter_85186)(TY48011* Ident_85188);
N_NIMCALL(NU8, Getparser_85225)(TY48011* Ident_85227);
N_NIMCALL(TY68013*, Filtertmpl_84001)(TY68013* Stdin_84003, NimStringDesc* Filename_84004, TY49523* Call_84005);
N_NIMCALL(TY68013*, Filterstrip_83009)(TY68013* Stdin_83011, NimStringDesc* Filename_83012, TY49523* Call_83013);
N_NIMCALL(TY68013*, Filterreplace_83004)(TY68013* Stdin_83006, NimStringDesc* Filename_83007, TY49523* Call_83008);
N_NIMCALL(void, Rawmessage_41557)(NU8 Msg_41559, NimStringDesc** Args_41561, NI Args_41561Len0);
N_NIMCALL(void, Messageout_41550)(NimStringDesc* S_41552);
N_NIMCALL(TY68013*, Llstreamopen_68028)(FILE** F_68031);
N_NIMCALL(TY49523*, Parseall_85044)(TY85028* P_85047);
N_NIMCALL(TY49523*, Parseall_76004)(TY74011* P_76007);
N_NIMCALL(void, Internalerror_41571)(NimStringDesc* Errmsg_41573);
N_NIMCALL(void, Closeparsers_85040)(TY85028* P_85043);
N_NIMCALL(TY49523*, Parsetoplevelstmt_74028)(TY74011* P_74031);
N_NIMCALL(TY49523*, Parsetoplevelstmt_76008)(TY74011* P_76011);
STRING_LITERAL(TMP85020, "standard", 8);
STRING_LITERAL(TMP85021, "braces", 6);
STRING_LITERAL(TMP85022, "endx", 4);
NIM_CONST TY85013 Parsernames_85012 = {((NimStringDesc*) &TMP85020),
((NimStringDesc*) &TMP85021),
((NimStringDesc*) &TMP85022)}
;
STRING_LITERAL(TMP85023, "none", 4);
STRING_LITERAL(TMP85024, "stdtmpl", 7);
STRING_LITERAL(TMP85025, "replace", 7);
STRING_LITERAL(TMP85026, "strip", 5);
NIM_CONST TY85017 Filternames_85016 = {((NimStringDesc*) &TMP85023),
((NimStringDesc*) &TMP85024),
((NimStringDesc*) &TMP85025),
((NimStringDesc*) &TMP85026)}
;
STRING_LITERAL(TMP190743, "|", 1);
STRING_LITERAL(TMP190865, "parser to implement", 19);
extern NI Gverbosity_40083;
N_NIMCALL(NI, Utf8bom_85077)(NimStringDesc* S_85079) {
NI Result_85080;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
Result_85080 = 0;
LOC3 = ((NU8)(S_85079->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(S_85079->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)(S_85079->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
Result_85080 = 3;
goto LA1;
LA6: ;
Result_85080 = 0;
LA1: ;
return Result_85080;
}
N_NIMCALL(NIM_BOOL, Containsshebang_85087)(NimStringDesc* S_85089, NI I_85090) {
NIM_BOOL Result_85091;
NIM_BOOL LOC2;
NI J_85096;
Result_85091 = 0;
LOC2 = ((NU8)(S_85089->data[I_85090]) == (NU8)(35));
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(S_85089->data[(NI64)(I_85090 + 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_85096 = 0;
J_85096 = (NI64)(I_85090 + 2);
while (1) {
if (!(((NU8)(S_85089->data[J_85096])) == ((NU8)(32)) || ((NU8)(S_85089->data[J_85096])) == ((NU8)(9)) || ((NU8)(S_85089->data[J_85096])) == ((NU8)(11)) || ((NU8)(S_85089->data[J_85096])) == ((NU8)(13)) || ((NU8)(S_85089->data[J_85096])) == ((NU8)(10)) || ((NU8)(S_85089->data[J_85096])) == ((NU8)(12)))) goto LA6;
J_85096 += 1;
} LA6: ;
Result_85091 = ((NU8)(S_85089->data[J_85096]) == (NU8)(47));
LA4: ;
return Result_85091;
}
N_NIMCALL(TY49523*, Parsepipe_85123)(NimStringDesc* Filename_85125, TY68013* Inputstream_85126) {
TY49523* Result_85127;
TY68013* S_85128;
NimStringDesc* Line_85140;
NI I_85141;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY74011 Q_85181;
NimStringDesc* LOC14;
TY68013* LOC15;
Result_85127 = 0;
S_85128 = 0;
S_85128 = Llstreamopen_68032(Filename_85125, ((NU8) 0));
if (!!((S_85128 == NIM_NIL))) goto LA2;
Line_85140 = 0;
Line_85140 = Llstreamreadline_68048(S_85128);
I_85141 = 0;
I_85141 = Utf8bom_85077(Line_85140);
LOC5 = Containsshebang_85087(Line_85140, I_85141);
if (!LOC5) goto LA6;
Line_85140 = Llstreamreadline_68048(S_85128);
I_85141 = 0;
LA6: ;
LOC9 = ((NU8)(Line_85140->data[I_85141]) == (NU8)(35));
if (!(LOC9)) goto LA10;
LOC9 = ((NU8)(Line_85140->data[(NI64)(I_85141 + 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
I_85141 += 2;
while (1) {
if (!(((NU8)(Line_85140->data[I_85141])) == ((NU8)(32)) || ((NU8)(Line_85140->data[I_85141])) == ((NU8)(9)) || ((NU8)(Line_85140->data[I_85141])) == ((NU8)(11)) || ((NU8)(Line_85140->data[I_85141])) == ((NU8)(13)) || ((NU8)(Line_85140->data[I_85141])) == ((NU8)(10)) || ((NU8)(Line_85140->data[I_85141])) == ((NU8)(12)))) goto LA13;
I_85141 += 1;
} LA13: ;
memset((void*)&Q_85181, 0, sizeof(Q_85181));
LOC14 = copyStr(Line_85140, I_85141);
LOC15 = Llstreamopen_68025(LOC14);
Openparser_74018(&Q_85181, Filename_85125, LOC15);
Result_85127 = Parseall_74014(&Q_85181);
Closeparser_74024(&Q_85181);
LA11: ;
Llstreamclose_68040(S_85128);
LA2: ;
return Result_85127;
}
N_NIMCALL(TY48011*, Getcallee_85264)(TY49523* N_85266) {
TY48011* Result_85267;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
Result_85267 = 0;
LOC2 = ((*N_85266).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
LOC2 = ((*(*N_85266).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
Result_85267 = (*(*N_85266).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_85266).Kind == ((NU8) 2))) goto LA6;
Result_85267 = (*N_85266).KindU.S5.Ident;
goto LA1;
LA6: ;
LOC8 = Rendertree_78042(N_85266, 0);
Rawmessage_41553(((NU8) 159), LOC8);
LA1: ;
return Result_85267;
}
N_NIMCALL(NU8, Getfilter_85186)(TY48011* Ident_85188) {
NU8 Result_85189;
NU8 I_85219;
NU8 Res_85222;
NIM_BOOL LOC3;
Result_85189 = 0;
I_85219 = 0;
Res_85222 = 0;
Res_85222 = ((NU8) 0);
while (1) {
if (!(Res_85222 <= ((NU8) 3))) goto LA1;
I_85219 = Res_85222;
LOC3 = Identeq_48028(Ident_85188, Filternames_85016[(I_85219)-0]);
if (!LOC3) goto LA4;
Result_85189 = I_85219;
goto BeforeRet;
LA4: ;
Res_85222 += 1;
} LA1: ;
Result_85189 = ((NU8) 0);
BeforeRet: ;
return Result_85189;
}
N_NIMCALL(NU8, Getparser_85225)(TY48011* Ident_85227) {
NU8 Result_85228;
NU8 I_85258;
NU8 Res_85261;
NIM_BOOL LOC3;
Result_85228 = 0;
I_85258 = 0;
Res_85261 = 0;
Res_85261 = ((NU8) 0);
while (1) {
if (!(Res_85261 <= ((NU8) 2))) goto LA1;
I_85258 = Res_85261;
LOC3 = Identeq_48028(Ident_85227, Parsernames_85012[(I_85258)-0]);
if (!LOC3) goto LA4;
Result_85228 = I_85258;
goto BeforeRet;
LA4: ;
Res_85261 += 1;
} LA1: ;
Rawmessage_41553(((NU8) 28), (*Ident_85227).S);
BeforeRet: ;
return Result_85228;
}
N_NIMCALL(TY68013*, Applyfilter_85343)(TY85028* P_85346, TY49523* N_85347, NimStringDesc* Filename_85348, TY68013* Stdin_85349) {
TY68013* Result_85350;
TY48011* Ident_85351;
NU8 F_85352;
TY40349 LOC7;
TY40349 LOC8;
Result_85350 = 0;
Ident_85351 = 0;
Ident_85351 = Getcallee_85264(N_85347);
F_85352 = 0;
F_85352 = Getfilter_85186(Ident_85351);
switch (F_85352) {
case ((NU8) 0):
(*P_85346).Skin = Getparser_85225(Ident_85351);
Result_85350 = Stdin_85349;
break;
case ((NU8) 1):
Result_85350 = Filtertmpl_84001(Stdin_85349, Filename_85348, N_85347);
break;
case ((NU8) 3):
Result_85350 = Filterstrip_83009(Stdin_85349, Filename_85348, N_85347);
break;
case ((NU8) 2):
Result_85350 = Filterreplace_83004(Stdin_85349, Filename_85348, N_85347);
break;
}
if (!!((F_85352 == ((NU8) 0)))) goto LA2;
if (!(2 <= Gverbosity_40083)) goto LA5;
Rawmessage_41557(((NU8) 231), LOC7, 0);
Messageout_41550((*Result_85350).S);
Rawmessage_41557(((NU8) 232), LOC8, 0);
LA5: ;
LA2: ;
return Result_85350;
}
N_NIMCALL(TY68013*, Evalpipe_85380)(TY85028* P_85383, TY49523* N_85384, NimStringDesc* Filename_85385, TY68013* Start_85386) {
TY68013* Result_85387;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_85475;
NI Res_85544;
Result_85387 = 0;
Result_85387 = Start_85386;
if (!(N_85384 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
LOC6 = ((*N_85384).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*N_85384).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
LOC5 = Identeq_48028((*(*N_85384).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP190743));
LA8: ;
if (!LOC5) goto LA9;
I_85475 = 0;
Res_85544 = 0;
Res_85544 = 1;
while (1) {
if (!(Res_85544 <= 2)) goto LA11;
I_85475 = Res_85544;
if (!((*(*N_85384).KindU.S6.Sons->data[I_85475]).Kind == ((NU8) 27))) goto LA13;
Result_85387 = Evalpipe_85380(P_85383, (*N_85384).KindU.S6.Sons->data[I_85475], Filename_85385, Result_85387);
goto LA12;
LA13: ;
Result_85387 = Applyfilter_85343(P_85383, (*N_85384).KindU.S6.Sons->data[I_85475], Filename_85385, Result_85387);
LA12: ;
Res_85544 += 1;
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_85384).Kind == ((NU8) 101))) goto LA15;
Result_85387 = Evalpipe_85380(P_85383, (*N_85384).KindU.S6.Sons->data[0], Filename_85385, Result_85387);
goto LA4;
LA15: ;
Result_85387 = Applyfilter_85343(P_85383, N_85384, Filename_85385, Result_85387);
LA4: ;
BeforeRet: ;
return Result_85387;
}
N_NIMCALL(void, Openparsers_85034)(TY85028* P_85037, NimStringDesc* Filename_85038, TY68013* Inputstream_85039) {
TY68013* S_85553;
TY49523* Pipe_85554;
S_85553 = 0;
(*P_85037).Skin = ((NU8) 0);
Pipe_85554 = 0;
Pipe_85554 = Parsepipe_85123(Filename_85038, Inputstream_85039);
if (!!((Pipe_85554 == NIM_NIL))) goto LA2;
S_85553 = Evalpipe_85380(P_85037, Pipe_85554, Filename_85038, Inputstream_85039);
goto LA1;
LA2: ;
S_85553 = Inputstream_85039;
LA1: ;
switch ((*P_85037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
Openparser_74018(&(*P_85037).Parser, Filename_85038, S_85553);
break;
}
}
N_NIMCALL(TY49523*, Parseall_85044)(TY85028* P_85047) {
TY49523* Result_85067;
Result_85067 = 0;
switch ((*P_85047).Skin) {
case ((NU8) 0):
Result_85067 = Parseall_74014(&(*P_85047).Parser);
break;
case ((NU8) 1):
Result_85067 = Parseall_76004(&(*P_85047).Parser);
break;
case ((NU8) 2):
Internalerror_41571(((NimStringDesc*) &TMP190865));
break;
}
return Result_85067;
}
N_NIMCALL(void, Closeparsers_85040)(TY85028* P_85043) {
Closeparser_74024(&(*P_85043).Parser);
}
N_NIMCALL(TY49523*, Parsefile_85031)(NimStringDesc* Filename_85033) {
TY49523* Result_85055;
TY85028 P_85056;
FILE* F_85057;
NIM_BOOL LOC2;
TY68013* LOC5;
Result_85055 = 0;
memset((void*)&P_85056, 0, sizeof(P_85056));
F_85057 = 0;
LOC2 = Open_3617(&F_85057, Filename_85033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
Rawmessage_41553(((NU8) 2), Filename_85033);
goto BeforeRet;
LA3: ;
LOC5 = Llstreamopen_68028(&F_85057);
Openparsers_85034(&P_85056, Filename_85033, LOC5);
Result_85055 = Parseall_85044(&P_85056);
Closeparsers_85040(&P_85056);
BeforeRet: ;
return Result_85055;
}
N_NIMCALL(TY49523*, Parsetoplevelstmt_85048)(TY85028* P_85051) {
TY49523* Result_85074;
Result_85074 = 0;
switch ((*P_85051).Skin) {
case ((NU8) 0):
Result_85074 = Parsetoplevelstmt_74028(&(*P_85051).Parser);
break;
case ((NU8) 1):
Result_85074 = Parsetoplevelstmt_76008(&(*P_85051).Parser);
break;
case ((NU8) 2):
Internalerror_41571(((NimStringDesc*) &TMP190865));
break;
}
return Result_85074;
}
N_NOINLINE(void, syntaxesInit)(void) {
}

