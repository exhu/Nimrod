/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY53561 TY53561;
typedef struct TY53559 TY53559;
typedef struct TY53557 TY53557;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY53549 TY53549;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53547 TY53547;
typedef struct TY53523 TY53523;
typedef struct TY53545 TY53545;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY45532 TY45532;
typedef struct TY52011 TY52011;
typedef struct TY53517 TY53517;
typedef struct TY53527 TY53527;
typedef struct TY53525 TY53525;
typedef struct TY53541 TY53541;
typedef struct TY41013 TY41013;
struct TY53557 {
TY52005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY53561 {
NI Counter;
TY53559* Data;
};
typedef TY53561 TY154023[40];
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
struct TY52005 {
  TNimObject Sup;
NI Id;
};
struct TY53537 {
NU8 K;
NU8 S;
NU8 Flags;
TY53549* T;
TY50008* R;
NI A;
};
struct TY53549 {
  TY52005 Sup;
NU8 Kind;
TY53547* Sons;
TY53523* N;
NU8 Flags;
NU8 Callconv;
TY53545* Owner;
TY53545* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY53537 Loc;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY45532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY53523 {
TY53549* Typ;
NimStringDesc* Comment;
TY45532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY53545* Sym;
} S4;
struct {TY52011* Ident;
} S5;
struct {TY53517* Sons;
} S6;
} KindU;
};
struct TY53527 {
TNimType* m_type;
NI Counter;
TY53525* Data;
};
struct TY53545 {
  TY52005 Sup;
NU8 Kind;
NU8 Magic;
TY53549* Typ;
TY52011* Name;
TY45532 Info;
TY53545* Owner;
NU32 Flags;
TY53527 Tab;
TY53523* Ast;
NU32 Options;
NI Position;
NI Offset;
TY53537 Loc;
TY53541* Annex;
};
struct TY50008 {
  TNimObject Sup;
TY50008* Left;
TY50008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
};
struct TY41013 {
  TNimObject Sup;
TY41013* Prev;
TY41013* Next;
};
struct TY53541 {
  TY41013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY50008* Name;
TY53523* Path;
};
struct TY53559 {
  TGenericSeq Sup;
  TY53557 data[SEQ_DECL_SIZE];
};
struct TY53547 {
  TGenericSeq Sup;
  TY53549* data[SEQ_DECL_SIZE];
};
struct TY53517 {
  TGenericSeq Sup;
  TY53523* data[SEQ_DECL_SIZE];
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Inittypetables_154025)(void);
N_NIMCALL(void, Initidtable_53752)(TY53561* X_53755);
N_NIMCALL(TNimObject*, Idtableget_57166)(TY53561 T_57168, TY52005* Key_57169);
N_NIMCALL(void, Idtableput_57174)(TY53561* T_57177, TY52005* Key_57178, TNimObject* Val_57179);
N_NIMCALL(TY53549*, Getuniquetype_154020)(TY53549* Key_154022);
N_NIMCALL(TY53549*, Lastson_53810)(TY53549* N_53812);
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_57180)(TY53561 T_57182, TY52005* Key_57183);
N_NIMCALL(NIM_BOOL, Sametype_93048)(TY53549* X_93050, TY53549* Y_93051);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, App_50031)(TY50008** A_50034, TY50008* B_50035);
N_NIMCALL(TY50008*, Torope_50046)(NimStringDesc* S_50048);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17225, NI Newlen_17226);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_23450, NI Len_23451);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_17182, NI Addlen_17183);
N_NIMCALL(NimStringDesc*, Tocchar_154007)(NIM_CHAR C_154009);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_23043);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR X_17928);
STRING_LITERAL(TMP194298, "c\"", 2);
STRING_LITERAL(TMP194299, "\\00\"", 4);
STRING_LITERAL(TMP194301, "\"", 1);
STRING_LITERAL(TMP194302, "\012", 1);
TY154023 Gtypetable_154024;
N_NIMCALL(void, Inittypetables_154025)(void) {
NU8 I_154056;
NU8 Res_154060;
I_154056 = 0;
Res_154060 = 0;
Res_154060 = ((NU8) 0);
while (1) {
if (!(Res_154060 <= ((NU8) 39))) goto LA1;
I_154056 = Res_154060;
Initidtable_53752(&Gtypetable_154024[(I_154056)-0]);
Res_154060 += 1;
} LA1: ;
}
N_NIMCALL(TY53549*, Getuniquetype_154020)(TY53549* Key_154022) {
TY53549* Result_154066;
TY53549* T_154067;
NU8 K_154068;
TNimObject* LOC4;
TY53549* LOC8;
NIM_BOOL LOC10;
NI H_154114;
NI HEX3Atmp_154128;
NI Res_154130;
NIM_BOOL LOC15;
Result_154066 = 0;
T_154067 = 0;
K_154068 = 0;
Result_154066 = Key_154022;
if (!(Key_154022 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
K_154068 = (*Key_154022).Kind;
switch (K_154068) {
case ((NU8) 17):
case ((NU8) 14):
LOC4 = Idtableget_57166(Gtypetable_154024[(K_154068)-0], &Key_154022->Sup);
Result_154066 = ((TY53549*) (LOC4));
if (!(Result_154066 == NIM_NIL)) goto LA6;
Idtableput_57174(&Gtypetable_154024[(K_154068)-0], &Key_154022->Sup, &Key_154022->Sup.Sup);
Result_154066 = Key_154022;
LA6: ;
break;
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 15):
LOC8 = Lastson_53810(Key_154022);
Result_154066 = Getuniquetype_154020(LOC8);
break;
case ((NU8) 25):
break;
default:
LOC10 = Idtablehasobjectaskey_57180(Gtypetable_154024[(K_154068)-0], &Key_154022->Sup);
if (!LOC10) goto LA11;
goto BeforeRet;
LA11: ;
H_154114 = 0;
HEX3Atmp_154128 = 0;
HEX3Atmp_154128 = (Gtypetable_154024[(K_154068)-0].Data->Sup.len-1);
Res_154130 = 0;
Res_154130 = 0;
while (1) {
if (!(Res_154130 <= HEX3Atmp_154128)) goto LA13;
H_154114 = Res_154130;
T_154067 = ((TY53549*) (Gtypetable_154024[(K_154068)-0].Data->data[H_154114].Key));
LOC15 = !((T_154067 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = Sametype_93048(T_154067, Key_154022);
LA16: ;
if (!LOC15) goto LA17;
Result_154066 = T_154067;
goto BeforeRet;
LA17: ;
Res_154130 += 1;
} LA13: ;
Idtableput_57174(&Gtypetable_154024[(K_154068)-0], &Key_154022->Sup, &Key_154022->Sup.Sup);
break;
}
BeforeRet: ;
return Result_154066;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI32)((NI32)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
N_NIMCALL(TY50008*, Makellvmstring_154013)(NimStringDesc* S_154015) {
TY50008* Result_154224;
NimStringDesc* Res_154226;
NI I_154236;
NI HEX3Atmp_154247;
NI Res_154249;
TY50008* LOC5;
NimStringDesc* LOC6;
TY50008* LOC7;
Result_154224 = 0;
Res_154226 = 0;
Result_154224 = NIM_NIL;
Res_154226 = copyString(((NimStringDesc*) &TMP194298));
I_154236 = 0;
HEX3Atmp_154247 = 0;
HEX3Atmp_154247 = (NI32)((NI32)(S_154015->Sup.len + 0) - 1);
Res_154249 = 0;
Res_154249 = 0;
while (1) {
if (!(Res_154249 <= HEX3Atmp_154247)) goto LA1;
I_154236 = Res_154249;
if (!((NI32)((NI32)((NI32)(I_154236 - 0) + 1) % 64) == 0)) goto LA3;
LOC5 = Torope_50046(Res_154226);
App_50031(&Result_154224, LOC5);
Res_154226 = setLengthStr(Res_154226, 0);
LA3: ;
switch (((NU8)(S_154015->data[I_154236]))) {
case 0 ... 31:
case 128 ... 255:
case 34:
case 92:
Res_154226 = addChar(Res_154226, 92);
LOC6 = nsuToHex(((NI64) (((NU8)(S_154015->data[I_154236])))), 2);
Res_154226 = resizeString(Res_154226, LOC6->Sup.len + 0);
appendString(Res_154226, LOC6);
break;
default:
Res_154226 = addChar(Res_154226, S_154015->data[I_154236]);
break;
}
Res_154249 += 1;
} LA1: ;
Res_154226 = resizeString(Res_154226, 4);
appendString(Res_154226, ((NimStringDesc*) &TMP194299));
LOC7 = Torope_50046(Res_154226);
App_50031(&Result_154224, LOC7);
return Result_154224;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210) {
(*Dest_17209).data[((*Dest_17209).Sup.len)-0] = C_17210;
(*Dest_17209).data[((NI32)((*Dest_17209).Sup.len + 1))-0] = 0;
(*Dest_17209).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Tocchar_154007)(NIM_CHAR C_154009) {
NimStringDesc* Result_154180;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Result_154180 = 0;
switch (((NU8)(C_154009))) {
case 0 ... 31:
case 128 ... 255:
LOC2 = nsuToOctal(C_154009);
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendChar(LOC1, 92);
appendString(LOC1, LOC2);
Result_154180 = LOC1;
break;
case 39:
case 34:
case 92:
LOC3 = rawNewString(2);
appendChar(LOC3, 92);
appendChar(LOC3, C_154009);
Result_154180 = LOC3;
break;
default:
Result_154180 = nimCharToStr(C_154009);
break;
}
return Result_154180;
}
N_NIMCALL(TY50008*, Makecstring_154010)(NimStringDesc* S_154012) {
TY50008* Result_154198;
NimStringDesc* Res_154200;
NI I_154210;
NI HEX3Atmp_154216;
NI Res_154218;
TY50008* LOC5;
NimStringDesc* LOC6;
TY50008* LOC7;
Result_154198 = 0;
Res_154200 = 0;
Result_154198 = NIM_NIL;
Res_154200 = copyString(((NimStringDesc*) &TMP194301));
I_154210 = 0;
HEX3Atmp_154216 = 0;
HEX3Atmp_154216 = (NI32)((NI32)(S_154012->Sup.len + 0) - 1);
Res_154218 = 0;
Res_154218 = 0;
while (1) {
if (!(Res_154218 <= HEX3Atmp_154216)) goto LA1;
I_154210 = Res_154218;
if (!((NI32)((NI32)((NI32)(I_154210 - 0) + 1) % 64) == 0)) goto LA3;
Res_154200 = addChar(Res_154200, 34);
Res_154200 = resizeString(Res_154200, 1);
appendString(Res_154200, ((NimStringDesc*) &TMP194302));
LOC5 = Torope_50046(Res_154200);
App_50031(&Result_154198, LOC5);
Res_154200 = setLengthStr(Res_154200, 1);
Res_154200->data[0] = 34;
LA3: ;
LOC6 = Tocchar_154007(S_154012->data[I_154210]);
Res_154200 = resizeString(Res_154200, LOC6->Sup.len + 0);
appendString(Res_154200, LOC6);
Res_154218 += 1;
} LA1: ;
Res_154200 = addChar(Res_154200, 34);
LOC7 = Torope_50046(Res_154200);
App_50031(&Result_154198, LOC7);
return Result_154198;
}
N_NOINLINE(void, ccgutilsInit)(void) {
Inittypetables_154025();
}

