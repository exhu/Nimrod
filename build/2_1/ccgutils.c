/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55564 TY55564;
typedef struct TY55562 TY55562;
typedef struct TY55560 TY55560;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55552 TY55552;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55550 TY55550;
typedef struct TY55526 TY55526;
typedef struct TY55548 TY55548;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY47539 TY47539;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55544 TY55544;
typedef struct TY43013 TY43013;
struct TY55560 {
TY54005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY55564 {
NI Counter;
TY55562* Data;
};
typedef TY55564 TY158023[40];
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
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
};
struct TY55552 {
  TY54005 Sup;
NU8 Kind;
TY55550* Sons;
TY55526* N;
NU8 Flags;
NU8 Callconv;
TY55548* Owner;
TY55548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55540 Loc;
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
struct TY47539 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55526 {
TY55552* Typ;
NimStringDesc* Comment;
TY47539 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55548* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55520* Sons;
} S6;
} KindU;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY55548 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55552* Typ;
TY54011* Name;
TY47539 Info;
TY55548* Owner;
NU32 Flags;
TY55530 Tab;
TY55526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55540 Loc;
TY55544* Annex;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
};
struct TY55562 {
  TGenericSeq Sup;
  TY55560 data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Inittypetables_158025)(void);
N_NIMCALL(void, Initidtable_55755)(TY55564* X_55758);
N_NIMCALL(TNimObject*, Idtableget_60163)(TY55564 T_60165, TY54005* Key_60166);
N_NIMCALL(void, Idtableput_60171)(TY55564* T_60174, TY54005* Key_60175, TNimObject* Val_60176);
N_NIMCALL(TY55552*, Getuniquetype_158020)(TY55552* Key_158022);
static N_INLINE(TY55552*, Lastson_55813)(TY55552* N_55815);
static N_INLINE(NI, Sonslen_55807)(TY55552* N_55809);
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_60177)(TY55564 T_60179, TY54005* Key_60180);
N_NIMCALL(NIM_BOOL, Sametype_97048)(TY55552* X_97050, TY55552* Y_97051);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18912);
N_NIMCALL(void, App_52031)(TY52008** A_52034, TY52008* B_52035);
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_19032, NI Newlen_19033);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_25410, NI Len_25411);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18999, NimStringDesc* Src_19000);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18989, NI Addlen_18990);
N_NIMCALL(NimStringDesc*, Tocchar_158007)(NIM_CHAR C_158009);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_19016, NIM_CHAR C_19017);
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_25036);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18889);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR X_19734);
STRING_LITERAL(TMP196292, "c\"", 2);
STRING_LITERAL(TMP196293, "\\00\"", 4);
STRING_LITERAL(TMP196295, "\"", 1);
STRING_LITERAL(TMP196296, "\012", 1);
TY158023 Gtypetable_158024;
N_NIMCALL(void, Inittypetables_158025)(void) {
NU8 I_158057;
NU8 Res_158060;
I_158057 = 0;
Res_158060 = 0;
Res_158060 = ((NU8) 0);
while (1) {
if (!(Res_158060 <= ((NU8) 39))) goto LA1;
I_158057 = Res_158060;
Initidtable_55755(&Gtypetable_158024[(I_158057)-0]);
Res_158060 += 1;
} LA1: ;
}
static N_INLINE(NI, Sonslen_55807)(TY55552* N_55809) {
NI Result_56750;
Result_56750 = 0;
if (!(*N_55809).Sons == 0) goto LA2;
Result_56750 = 0;
goto LA1;
LA2: ;
Result_56750 = (*N_55809).Sons->Sup.len;
LA1: ;
return Result_56750;
}
static N_INLINE(TY55552*, Lastson_55813)(TY55552* N_55815) {
TY55552* Result_57841;
NI LOC1;
Result_57841 = 0;
LOC1 = Sonslen_55807(N_55815);
Result_57841 = (*N_55815).Sons->data[(NI32)(LOC1 - 1)];
return Result_57841;
}
N_NIMCALL(TY55552*, Getuniquetype_158020)(TY55552* Key_158022) {
TY55552* Result_158064;
TY55552* T_158065;
NU8 K_158066;
TNimObject* LOC4;
TY55552* LOC8;
NIM_BOOL LOC10;
NI H_158113;
NI HEX3Atmp_158126;
NI Res_158128;
NIM_BOOL LOC15;
Result_158064 = 0;
T_158065 = 0;
K_158066 = 0;
Result_158064 = Key_158022;
if (!(Key_158022 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
K_158066 = (*Key_158022).Kind;
switch (K_158066) {
case ((NU8) 17):
case ((NU8) 14):
LOC4 = 0;
LOC4 = Idtableget_60163(Gtypetable_158024[(K_158066)-0], &Key_158022->Sup);
Result_158064 = ((TY55552*) (LOC4));
if (!(Result_158064 == NIM_NIL)) goto LA6;
Idtableput_60171(&Gtypetable_158024[(K_158066)-0], &Key_158022->Sup, &Key_158022->Sup.Sup);
Result_158064 = Key_158022;
LA6: ;
break;
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 15):
LOC8 = 0;
LOC8 = Lastson_55813(Key_158022);
Result_158064 = Getuniquetype_158020(LOC8);
break;
case ((NU8) 25):
break;
default:
LOC10 = Idtablehasobjectaskey_60177(Gtypetable_158024[(K_158066)-0], &Key_158022->Sup);
if (!LOC10) goto LA11;
goto BeforeRet;
LA11: ;
H_158113 = 0;
HEX3Atmp_158126 = 0;
HEX3Atmp_158126 = (Gtypetable_158024[(K_158066)-0].Data->Sup.len-1);
Res_158128 = 0;
Res_158128 = 0;
while (1) {
if (!(Res_158128 <= HEX3Atmp_158126)) goto LA13;
H_158113 = Res_158128;
T_158065 = ((TY55552*) (Gtypetable_158024[(K_158066)-0].Data->data[H_158113].Key));
LOC15 = !((T_158065 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = Sametype_97048(T_158065, Key_158022);
LA16: ;
if (!LOC15) goto LA17;
Result_158064 = T_158065;
goto BeforeRet;
LA17: ;
Res_158128 += 1;
} LA13: ;
Idtableput_60171(&Gtypetable_158024[(K_158066)-0], &Key_158022->Sup, &Key_158022->Sup.Sup);
break;
}
BeforeRet: ;
return Result_158064;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18999, NimStringDesc* Src_19000) {
memcpy(((NCSTRING) (&(*Dest_18999).data[((*Dest_18999).Sup.len)-0])), ((NCSTRING) ((*Src_19000).data)), ((int) ((NI32)((NI32)((*Src_19000).Sup.len + 1) * 1))));
(*Dest_18999).Sup.len += (*Src_19000).Sup.len;
}
N_NIMCALL(TY52008*, Makellvmstring_158013)(NimStringDesc* S_158015) {
TY52008* Result_158206;
NimStringDesc* Res_158208;
NI I_158219;
NI HEX3Atmp_158229;
NI Res_158231;
TY52008* LOC5;
NimStringDesc* LOC6;
TY52008* LOC7;
Result_158206 = 0;
Res_158208 = 0;
Result_158206 = NIM_NIL;
Res_158208 = copyString(((NimStringDesc*) &TMP196292));
I_158219 = 0;
HEX3Atmp_158229 = 0;
HEX3Atmp_158229 = (NI32)((NI32)(S_158015->Sup.len + 0) - 1);
Res_158231 = 0;
Res_158231 = 0;
while (1) {
if (!(Res_158231 <= HEX3Atmp_158229)) goto LA1;
I_158219 = Res_158231;
if (!((NI32)((NI32)((NI32)(I_158219 - 0) + 1) % 64) == 0)) goto LA3;
LOC5 = 0;
LOC5 = Torope_52046(Res_158208);
App_52031(&Result_158206, LOC5);
Res_158208 = setLengthStr(Res_158208, 0);
LA3: ;
switch (((NU8)(S_158015->data[I_158219]))) {
case 0 ... 31:
case 128 ... 255:
case 34:
case 92:
Res_158208 = addChar(Res_158208, 92);
LOC6 = 0;
LOC6 = nsuToHex(((NI64) (((NU8)(S_158015->data[I_158219])))), 2);
Res_158208 = resizeString(Res_158208, LOC6->Sup.len + 0);
appendString(Res_158208, LOC6);
break;
default:
Res_158208 = addChar(Res_158208, S_158015->data[I_158219]);
break;
}
Res_158231 += 1;
} LA1: ;
Res_158208 = resizeString(Res_158208, 4);
appendString(Res_158208, ((NimStringDesc*) &TMP196293));
LOC7 = 0;
LOC7 = Torope_52046(Res_158208);
App_52031(&Result_158206, LOC7);
return Result_158206;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_19016, NIM_CHAR C_19017) {
(*Dest_19016).data[((*Dest_19016).Sup.len)-0] = C_19017;
(*Dest_19016).data[((NI32)((*Dest_19016).Sup.len + 1))-0] = 0;
(*Dest_19016).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Tocchar_158007)(NIM_CHAR C_158009) {
NimStringDesc* Result_158176;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Result_158176 = 0;
switch (((NU8)(C_158009))) {
case 0 ... 31:
case 128 ... 255:
LOC1 = 0;
LOC2 = 0;
LOC2 = nsuToOctal(C_158009);
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendChar(LOC1, 92);
appendString(LOC1, LOC2);
Result_158176 = LOC1;
break;
case 39:
case 34:
case 92:
LOC3 = 0;
LOC3 = rawNewString(2);
appendChar(LOC3, 92);
appendChar(LOC3, C_158009);
Result_158176 = LOC3;
break;
default:
Result_158176 = nimCharToStr(C_158009);
break;
}
return Result_158176;
}
N_NIMCALL(TY52008*, Makecstring_158010)(NimStringDesc* S_158012) {
TY52008* Result_158182;
NimStringDesc* Res_158184;
NI I_158195;
NI HEX3Atmp_158200;
NI Res_158202;
TY52008* LOC5;
NimStringDesc* LOC6;
TY52008* LOC7;
Result_158182 = 0;
Res_158184 = 0;
Result_158182 = NIM_NIL;
Res_158184 = copyString(((NimStringDesc*) &TMP196295));
I_158195 = 0;
HEX3Atmp_158200 = 0;
HEX3Atmp_158200 = (NI32)((NI32)(S_158012->Sup.len + 0) - 1);
Res_158202 = 0;
Res_158202 = 0;
while (1) {
if (!(Res_158202 <= HEX3Atmp_158200)) goto LA1;
I_158195 = Res_158202;
if (!((NI32)((NI32)((NI32)(I_158195 - 0) + 1) % 64) == 0)) goto LA3;
Res_158184 = addChar(Res_158184, 34);
Res_158184 = resizeString(Res_158184, 1);
appendString(Res_158184, ((NimStringDesc*) &TMP196296));
LOC5 = 0;
LOC5 = Torope_52046(Res_158184);
App_52031(&Result_158182, LOC5);
Res_158184 = setLengthStr(Res_158184, 1);
Res_158184->data[0] = 34;
LA3: ;
LOC6 = 0;
LOC6 = Tocchar_158007(S_158012->data[I_158195]);
Res_158184 = resizeString(Res_158184, LOC6->Sup.len + 0);
appendString(Res_158184, LOC6);
Res_158202 += 1;
} LA1: ;
Res_158184 = addChar(Res_158184, 34);
LOC7 = 0;
LOC7 = Torope_52046(Res_158184);
App_52031(&Result_158182, LOC7);
return Result_158182;
}
N_NOINLINE(void, ccgutilsInit)(void) {
Inittypetables_158025();
}

