/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55525 TY55525;
typedef struct TY55551 TY55551;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY47532 TY47532;
typedef struct TY55547 TY55547;
typedef struct TY54011 TY54011;
typedef struct TY55519 TY55519;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55529 TY55529;
typedef struct TY55527 TY55527;
typedef struct TY55539 TY55539;
typedef struct TY52008 TY52008;
typedef struct TY55543 TY55543;
typedef struct TY55549 TY55549;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY47532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55525 {
TY55551* Typ;
NimStringDesc* Comment;
TY47532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55547* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55519* Sons;
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
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY55529 {
TNimType* m_type;
NI Counter;
TY55527* Data;
};
struct TY55539 {
NU8 K;
NU8 S;
NU8 Flags;
TY55551* T;
TY52008* R;
NI A;
};
struct TY55547 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55551* Typ;
TY54011* Name;
TY47532 Info;
TY55547* Owner;
NU32 Flags;
TY55529 Tab;
TY55525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55539 Loc;
TY55543* Annex;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY55551 {
  TY54005 Sup;
NU8 Kind;
TY55549* Sons;
TY55525* N;
NU8 Flags;
NU8 Callconv;
TY55547* Owner;
TY55547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55539 Loc;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55543 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55525* Path;
};
struct TY55519 {
  TGenericSeq Sup;
  TY55525* data[SEQ_DECL_SIZE];
};
struct TY55527 {
  TGenericSeq Sup;
  TY55547* data[SEQ_DECL_SIZE];
};
struct TY55549 {
  TGenericSeq Sup;
  TY55551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY55525*, Newnodei_55737)(NU8 Kind_55739, TY47532 Info_55740);
N_NIMCALL(NIM_BOOL, Cyclictreeaux_95101)(TY55525* N_95103, TY55525* S_95104);
N_NIMCALL(NIM_BOOL, Hasson_95046)(TY55525* Father_95048, TY55525* Son_95049);
N_NIMCALL(NI, Sonslen_55803)(TY55525* N_55805);
N_NIMCALL(void, Addson_55823)(TY55525* Father_55825, TY55525* Son_55826);
N_NIMCALL(void, Delson_55835)(TY55525* Father_55837, NI Idx_55838);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18647, NimStringDesc* B_18648);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_95035)(TY55525* A_95037, TY55525* B_95038);
N_NIMCALL(NU8, Getmagic_95013)(TY55525* Op_95015) {
NU8 Result_95690;
Result_95690 = 0;
switch ((*Op_95015).Kind) {
case ((NU8) 21):
case ((NU8) 49):
case ((NU8) 20):
case ((NU8) 22):
switch ((*(*Op_95015).KindU.S6.Sons->data[0]).Kind) {
case ((NU8) 3):
Result_95690 = (*(*(*Op_95015).KindU.S6.Sons->data[0]).KindU.S4.Sym).Magic;
break;
default:
Result_95690 = ((NU8) 0);
break;
}
break;
default:
Result_95690 = ((NU8) 0);
break;
}
return Result_95690;
}
N_NIMCALL(NIM_BOOL, Hasson_95046)(TY55525* Father_95048, TY55525* Son_95049) {
NIM_BOOL Result_95050;
NI I_95073;
NI HEX3Atmp_95096;
NI LOC1;
NI Res_95098;
Result_95050 = 0;
I_95073 = 0;
HEX3Atmp_95096 = 0;
LOC1 = Sonslen_55803(Father_95048);
HEX3Atmp_95096 = (NI32)(LOC1 - 1);
Res_95098 = 0;
Res_95098 = 0;
while (1) {
if (!(Res_95098 <= HEX3Atmp_95096)) goto LA2;
I_95073 = Res_95098;
if (!((*Father_95048).KindU.S6.Sons->data[I_95073] == Son_95049)) goto LA4;
Result_95050 = NIM_TRUE;
goto BeforeRet;
LA4: ;
Res_95098 += 1;
} LA2: ;
Result_95050 = NIM_FALSE;
BeforeRet: ;
return Result_95050;
}
N_NIMCALL(NIM_BOOL, Cyclictreeaux_95101)(TY55525* N_95103, TY55525* S_95104) {
NIM_BOOL Result_95105;
NIM_BOOL LOC5;
NI M_95117;
NI I_95137;
NI HEX3Atmp_95151;
NI LOC11;
NI Res_95153;
NIM_BOOL LOC14;
Result_95105 = 0;
if (!(N_95103 == NIM_NIL)) goto LA2;
Result_95105 = NIM_FALSE;
goto BeforeRet;
LA2: ;
LOC5 = Hasson_95046(S_95104, N_95103);
if (!LOC5) goto LA6;
Result_95105 = NIM_TRUE;
goto BeforeRet;
LA6: ;
M_95117 = 0;
M_95117 = Sonslen_55803(S_95104);
Addson_55823(S_95104, N_95103);
if (!!(((*N_95103).Kind >= ((NU8) 1) && (*N_95103).Kind <= ((NU8) 18)))) goto LA9;
I_95137 = 0;
HEX3Atmp_95151 = 0;
LOC11 = Sonslen_55803(N_95103);
HEX3Atmp_95151 = (NI32)(LOC11 - 1);
Res_95153 = 0;
Res_95153 = 0;
while (1) {
if (!(Res_95153 <= HEX3Atmp_95151)) goto LA12;
I_95137 = Res_95153;
LOC14 = Cyclictreeaux_95101((*N_95103).KindU.S6.Sons->data[I_95137], S_95104);
if (!LOC14) goto LA15;
Result_95105 = NIM_TRUE;
goto BeforeRet;
LA15: ;
Res_95153 += 1;
} LA12: ;
LA9: ;
Result_95105 = NIM_FALSE;
Delson_55835(S_95104, M_95117);
BeforeRet: ;
return Result_95105;
}
N_NIMCALL(NIM_BOOL, Cyclictree_95043)(TY55525* N_95045) {
NIM_BOOL Result_95159;
TY55525* S_95160;
Result_95159 = 0;
S_95160 = 0;
S_95160 = Newnodei_55737(((NU8) 1), (*N_95045).Info);
Result_95159 = Cyclictreeaux_95101(N_95045, S_95160);
return Result_95159;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18647, NimStringDesc* B_18648) {
NIM_BOOL Result_18649;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
Result_18649 = 0;
if (!(A_18647 == B_18648)) goto LA2;
Result_18649 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18647 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18648 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18649 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18647).Sup.len == (*B_18648).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18647).data)), ((NCSTRING) ((*B_18648).data)), ((int) ((NI32)((*A_18647).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18649 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18649;
}
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_95035)(TY55525* A_95037, TY55525* B_95038) {
NIM_BOOL Result_95165;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_95341;
NI HEX3Atmp_95367;
NI LOC15;
NI Res_95369;
NIM_BOOL LOC18;
Result_95165 = 0;
Result_95165 = NIM_FALSE;
if (!(A_95037 == B_95038)) goto LA2;
Result_95165 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_95037 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_95038 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_95037).Kind == (*B_95038).Kind);
LA7: ;
if (!LOC4) goto LA8;
switch ((*A_95037).Kind) {
case ((NU8) 3):
Result_95165 = ((*(*(*A_95037).KindU.S4.Sym).Name).Sup.Id == (*(*(*B_95038).KindU.S4.Sym).Name).Sup.Id);
break;
case ((NU8) 2):
Result_95165 = ((*(*A_95037).KindU.S5.Ident).Sup.Id == (*(*B_95038).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
Result_95165 = ((*A_95037).KindU.S1.Intval == (*B_95038).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
Result_95165 = (((NF) ((*A_95037).KindU.S2.Floatval)) == ((NF) ((*B_95038).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
Result_95165 = eqStrings((*A_95037).KindU.S3.Strval, (*B_95038).KindU.S3.Strval);
break;
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
Result_95165 = NIM_TRUE;
break;
default:
LOC11 = Sonslen_55803(A_95037);
LOC12 = Sonslen_55803(B_95038);
if (!(LOC11 == LOC12)) goto LA13;
I_95341 = 0;
HEX3Atmp_95367 = 0;
LOC15 = Sonslen_55803(A_95037);
HEX3Atmp_95367 = (NI32)(LOC15 - 1);
Res_95369 = 0;
Res_95369 = 0;
while (1) {
if (!(Res_95369 <= HEX3Atmp_95367)) goto LA16;
I_95341 = Res_95369;
LOC18 = Exprstructuralequivalent_95035((*A_95037).KindU.S6.Sons->data[I_95341], (*B_95038).KindU.S6.Sons->data[I_95341]);
if (!!(LOC18)) goto LA19;
goto BeforeRet;
LA19: ;
Res_95369 += 1;
} LA16: ;
Result_95165 = NIM_TRUE;
LA13: ;
break;
}
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
return Result_95165;
}
N_NIMCALL(NIM_BOOL, Isconstexpr_95016)(TY55525* N_95018) {
NIM_BOOL Result_95746;
NIM_BOOL LOC1;
Result_95746 = 0;
LOC1 = ((*N_95018).Kind >= ((NU8) 5) && (*N_95018).Kind <= ((NU8) 10) || (*N_95018).Kind >= ((NU8) 14) && (*N_95018).Kind <= ((NU8) 16) || (*N_95018).Kind >= ((NU8) 11) && (*N_95018).Kind <= ((NU8) 13) || (*N_95018).Kind == ((NU8) 18));
if (LOC1) goto LA2;
LOC1 = (((*N_95018).Flags &(1<<((((NU8) 4))&7)))!=0);
LA2: ;
Result_95746 = LOC1;
return Result_95746;
}
N_NOINLINE(void, treesInit)(void) {
}
