/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY49573 TY49573;
typedef struct TY49523 TY49523;
typedef struct TY49571 TY49571;
typedef struct TY49569 TY49569;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49549 TY49549;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY41532 TY41532;
typedef struct TY49545 TY49545;
typedef struct TY48011 TY48011;
typedef struct TY49517 TY49517;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49527 TY49527;
typedef struct TY49525 TY49525;
typedef struct TY49537 TY49537;
typedef struct TY46008 TY46008;
typedef struct TY49541 TY49541;
typedef struct TY10202 TY10202;
typedef struct TY10218 TY10218;
typedef struct TY10590 TY10590;
typedef struct TY10214 TY10214;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
typedef struct TY49547 TY49547;
typedef struct TY37013 TY37013;
struct TY49569 {
NI H;
TY49523* Key;
NI Val;
};
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
struct TY49527 {
TNimType* m_type;
NI Counter;
TY49525* Data;
};
struct TY49537 {
NU8 K;
NU8 S;
NU8 Flags;
TY49549* T;
TY46008* R;
NI A;
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
struct TY49573 {
NI Counter;
TY49571* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY10202 {
NI Refcount;
TNimType* Typ;
};
struct TY10218 {
NI Len;
NI Cap;
TY10202** D;
};
struct TY10214 {
NI Counter;
NI Max;
TY10210* Head;
TY10210** Data;
};
struct TY10588 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10590 {
TY10218 Zct;
TY10218 Decstack;
TY10214 Cycleroots;
TY10218 Tempstack;
TY10588 Stat;
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
typedef NI TY8214[8];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
struct TY49571 {
  TGenericSeq Sup;
  TY49569 data[SEQ_DECL_SIZE];
};
struct TY49517 {
  TGenericSeq Sup;
  TY49523* data[SEQ_DECL_SIZE];
};
struct TY49525 {
  TGenericSeq Sup;
  TY49545* data[SEQ_DECL_SIZE];
};
struct TY49547 {
  TGenericSeq Sup;
  TY49549* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, Hashtree_99029)(TY49523* N_99031);
N_NIMCALL(NI, Conchash_38040)(NI H_38042, NI Val_38043);
N_NIMCALL(NI, Gethashstr_38031)(NimStringDesc* S_38033);
N_NIMCALL(NI, Sonslen_49801)(TY49523* N_49803);
N_NIMCALL(NI, Nodetablerawget_99413)(TY49573 T_99415, NI K_99416, TY49523* Key_99417);
N_NIMCALL(NIM_BOOL, Treesequivalent_99202)(TY49523* A_99204, TY49523* B_99205);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_16847, NimStringDesc* B_16848);
N_NIMCALL(NIM_BOOL, Sametypeornil_90052)(TY49549* A_90054, TY49549* B_90055);
N_NIMCALL(NI, Nexttry_53213)(NI H_53215, NI Maxhash_53216);
N_NIMCALL(NIM_BOOL, Mustrehash_53209)(NI Length_53211, NI Counter_53212);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12403, NI Len_12404);
N_NIMCALL(void, Nodetablerawinsert_99442)(TY49571** Data_99445, NI K_99446, TY49523* Key_99447, NI Val_99448);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11416, void* Src_11417);
static N_INLINE(TY10202*, Usrtocell_10622)(void* Usr_10624);
static N_INLINE(void, Rtladdzct_11256)(TY10202* C_11258);
N_NOINLINE(void, Addzct_10611)(TY10218* S_10614, TY10202* C_10615);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11422, void* Src_11423);
extern TNimType* NTI49571; /* TNodePairSeq */
extern TY10590 Gch_10608;
N_NIMCALL(NI, Hashtree_99029)(TY49523* N_99031) {
NI Result_99032;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI LOC14;
NI I_99183;
NI HEX3Atmp_99197;
NI LOC15;
NI Res_99199;
NI LOC17;
Result_99032 = 0;
Result_99032 = 0;
if (!(N_99031 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
Result_99032 = (*N_99031).Kind;
switch ((*N_99031).Kind) {
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
break;
case ((NU8) 2):
Result_99032 = Conchash_38040(Result_99032, (*(*N_99031).KindU.S5.Ident).H);
break;
case ((NU8) 3):
Result_99032 = Conchash_38040(Result_99032, (*(*(*N_99031).KindU.S4.Sym).Name).H);
break;
case ((NU8) 5) ... ((NU8) 10):
LOC5 = ((IL64(-9223372036854775807) - IL64(1)) <= (*N_99031).KindU.S1.Intval);
if (!(LOC5)) goto LA6;
LOC5 = ((*N_99031).KindU.S1.Intval <= IL64(9223372036854775807));
LA6: ;
if (!LOC5) goto LA7;
Result_99032 = Conchash_38040(Result_99032, ((NI) ((*N_99031).KindU.S1.Intval)));
LA7: ;
break;
case ((NU8) 11) ... ((NU8) 13):
LOC10 = (-1.00000e+006 <= ((NF) ((*N_99031).KindU.S2.Floatval)));
if (!(LOC10)) goto LA11;
LOC10 = (((NF) ((*N_99031).KindU.S2.Floatval)) <= 1.00000e+006);
LA11: ;
if (!LOC10) goto LA12;
Result_99032 = Conchash_38040(Result_99032, float64ToInt32(((NF) ((*N_99031).KindU.S2.Floatval))));
LA12: ;
break;
case ((NU8) 14) ... ((NU8) 16):
LOC14 = Gethashstr_38031((*N_99031).KindU.S3.Strval);
Result_99032 = Conchash_38040(Result_99032, LOC14);
break;
default:
I_99183 = 0;
HEX3Atmp_99197 = 0;
LOC15 = Sonslen_49801(N_99031);
HEX3Atmp_99197 = (NI64)(LOC15 - 1);
Res_99199 = 0;
Res_99199 = 0;
while (1) {
if (!(Res_99199 <= HEX3Atmp_99197)) goto LA16;
I_99183 = Res_99199;
LOC17 = Hashtree_99029((*N_99031).KindU.S6.Sons->data[I_99183]);
Result_99032 = Conchash_38040(Result_99032, LOC17);
Res_99199 += 1;
} LA16: ;
break;
}
BeforeRet: ;
return Result_99032;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_16847, NimStringDesc* B_16848) {
NIM_BOOL Result_16849;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
NI32 LOC11;
Result_16849 = 0;
if (!(A_16847 == B_16848)) goto LA2;
Result_16849 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_16847 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_16848 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_16849 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_16847).Sup.len == (*B_16848).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_16847).data)), ((NCSTRING) ((*B_16848).data)), ((NI32) ((NI64)((*A_16847).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_16849 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_16849;
}
N_NIMCALL(NIM_BOOL, Treesequivalent_99202)(TY49523* A_99204, TY49523* B_99205) {
NIM_BOOL Result_99206;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_99382;
NI HEX3Atmp_99408;
NI LOC15;
NI Res_99410;
NIM_BOOL LOC18;
Result_99206 = 0;
Result_99206 = NIM_FALSE;
if (!(A_99204 == B_99205)) goto LA2;
Result_99206 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_99204 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_99205 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_99204).Kind == (*B_99205).Kind);
LA7: ;
if (!LOC4) goto LA8;
switch ((*A_99204).Kind) {
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
Result_99206 = NIM_TRUE;
break;
case ((NU8) 3):
Result_99206 = ((*(*A_99204).KindU.S4.Sym).Sup.Id == (*(*B_99205).KindU.S4.Sym).Sup.Id);
break;
case ((NU8) 2):
Result_99206 = ((*(*A_99204).KindU.S5.Ident).Sup.Id == (*(*B_99205).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
Result_99206 = ((*A_99204).KindU.S1.Intval == (*B_99205).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
Result_99206 = (((NF) ((*A_99204).KindU.S2.Floatval)) == ((NF) ((*B_99205).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
Result_99206 = eqStrings((*A_99204).KindU.S3.Strval, (*B_99205).KindU.S3.Strval);
break;
default:
LOC11 = Sonslen_49801(A_99204);
LOC12 = Sonslen_49801(B_99205);
if (!(LOC11 == LOC12)) goto LA13;
I_99382 = 0;
HEX3Atmp_99408 = 0;
LOC15 = Sonslen_49801(A_99204);
HEX3Atmp_99408 = (NI64)(LOC15 - 1);
Res_99410 = 0;
Res_99410 = 0;
while (1) {
if (!(Res_99410 <= HEX3Atmp_99408)) goto LA16;
I_99382 = Res_99410;
LOC18 = Treesequivalent_99202((*A_99204).KindU.S6.Sons->data[I_99382], (*B_99205).KindU.S6.Sons->data[I_99382]);
if (!!(LOC18)) goto LA19;
goto BeforeRet;
LA19: ;
Res_99410 += 1;
} LA16: ;
Result_99206 = NIM_TRUE;
LA13: ;
break;
}
if (!Result_99206) goto LA22;
Result_99206 = Sametypeornil_90052((*A_99204).Typ, (*B_99205).Typ);
LA22: ;
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
return Result_99206;
}
N_NIMCALL(NI, Nodetablerawget_99413)(TY49573 T_99415, NI K_99416, TY49523* Key_99417) {
NI Result_99418;
NI H_99419;
NIM_BOOL LOC3;
Result_99418 = 0;
H_99419 = 0;
H_99419 = (NI64)(K_99416 & (T_99415.Data->Sup.len-1));
while (1) {
if (!!((T_99415.Data->data[H_99419].Key == NIM_NIL))) goto LA1;
LOC3 = (T_99415.Data->data[H_99419].H == K_99416);
if (!(LOC3)) goto LA4;
LOC3 = Treesequivalent_99202(T_99415.Data->data[H_99419].Key, Key_99417);
LA4: ;
if (!LOC3) goto LA5;
Result_99418 = H_99419;
goto BeforeRet;
LA5: ;
H_99419 = Nexttry_53213(H_99419, (T_99415.Data->Sup.len-1));
} LA1: ;
Result_99418 = -1;
BeforeRet: ;
return Result_99418;
}
static N_INLINE(TY10202*, Usrtocell_10622)(void* Usr_10624) {
TY10202* Result_10625;
Result_10625 = 0;
Result_10625 = ((TY10202*) ((NI64)((NU64)(((NI) (Usr_10624))) - (NU64)(((NI) (((NI)sizeof(TY10202))))))));
return Result_10625;
}
static N_INLINE(void, Rtladdzct_11256)(TY10202* C_11258) {
Addzct_10611(&Gch_10608.Zct, C_11258);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11416, void* Src_11417) {
TY10202* C_11418;
TY10202* C_11419;
if (!!((Src_11417 == NIM_NIL))) goto LA2;
C_11418 = 0;
C_11418 = Usrtocell_10622(Src_11417);
(*C_11418).Refcount = (NI64)((NU64)((*C_11418).Refcount) + (NU64)(8));
LA2: ;
if (!!(((*Dest_11416) == NIM_NIL))) goto LA5;
C_11419 = 0;
C_11419 = Usrtocell_10622((*Dest_11416));
(*C_11419).Refcount = (NI64)((NU64)((*C_11419).Refcount) - (NU64)(8));
if (!((NU64)((*C_11419).Refcount) < (NU64)(8))) goto LA8;
Rtladdzct_11256(C_11419);
LA8: ;
LA5: ;
(*Dest_11416) = Src_11417;
}
N_NIMCALL(void, Nodetablerawinsert_99442)(TY49571** Data_99445, NI K_99446, TY49523* Key_99447, NI Val_99448) {
NI H_99449;
H_99449 = 0;
H_99449 = (NI64)(K_99446 & ((*Data_99445)->Sup.len-1));
while (1) {
if (!!(((*Data_99445)->data[H_99449].Key == NIM_NIL))) goto LA1;
H_99449 = Nexttry_53213(H_99449, ((*Data_99445)->Sup.len-1));
} LA1: ;
(*Data_99445)->data[H_99449].H = K_99446;
asgnRefNoCycle((void**) &(*Data_99445)->data[H_99449].Key, Key_99447);
(*Data_99445)->data[H_99449].Val = Val_99448;
}
N_NIMCALL(NI, Nodetabletestorset_99023)(TY49573* T_99026, TY49523* Key_99027, NI Val_99028) {
NI Result_99581;
NI Index_99582;
TY49571* N_99583;
NI K_99584;
NIM_BOOL LOC5;
NI I_99637;
NI HEX3Atmp_99673;
NI Res_99675;
TY49571* LOC12;
Result_99581 = 0;
Index_99582 = 0;
N_99583 = 0;
K_99584 = 0;
K_99584 = Hashtree_99029(Key_99027);
Index_99582 = Nodetablerawget_99413((*T_99026), K_99584, Key_99027);
if (!(0 <= Index_99582)) goto LA2;
Result_99581 = (*T_99026).Data->data[Index_99582].Val;
goto LA1;
LA2: ;
LOC5 = Mustrehash_53209((*T_99026).Data->Sup.len, (*T_99026).Counter);
if (!LOC5) goto LA6;
N_99583 = (TY49571*) newSeq(NTI49571, (NI64)((*T_99026).Data->Sup.len * 2));
I_99637 = 0;
HEX3Atmp_99673 = 0;
HEX3Atmp_99673 = ((*T_99026).Data->Sup.len-1);
Res_99675 = 0;
Res_99675 = 0;
while (1) {
if (!(Res_99675 <= HEX3Atmp_99673)) goto LA8;
I_99637 = Res_99675;
if (!!(((*T_99026).Data->data[I_99637].Key == NIM_NIL))) goto LA10;
Nodetablerawinsert_99442(&N_99583, (*T_99026).Data->data[I_99637].H, (*T_99026).Data->data[I_99637].Key, (*T_99026).Data->data[I_99637].Val);
LA10: ;
Res_99675 += 1;
} LA8: ;
LOC12 = (*T_99026).Data;
unsureAsgnRef((void**) &(*T_99026).Data, N_99583);
N_99583 = LOC12;
LA6: ;
Nodetablerawinsert_99442(&(*T_99026).Data, K_99584, Key_99027, Val_99028);
Result_99581 = Val_99028;
(*T_99026).Counter += 1;
LA1: ;
return Result_99581;
}
N_NOINLINE(void, treetabInit)(void) {
}

