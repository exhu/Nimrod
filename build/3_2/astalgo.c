/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY60220 TY60220;
typedef struct TY60218 TY60218;
typedef struct TY60216 TY60216;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55548 TY55548;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY54011 TY54011;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY55552 TY55552;
typedef struct TY47539 TY47539;
typedef struct TY55526 TY55526;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY11002 TY11002;
typedef struct TY11014 TY11014;
typedef struct TY11396 TY11396;
typedef struct TY11018 TY11018;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
typedef struct TY60076 TY60076;
typedef struct TY55564 TY55564;
typedef struct TY55562 TY55562;
typedef struct TY55560 TY55560;
typedef struct TY60104 TY60104;
typedef struct TY60106 TY60106;
typedef struct TY60089 TY60089;
typedef struct TY55570 TY55570;
typedef struct TY55568 TY55568;
typedef struct TY55566 TY55566;
typedef struct TY55520 TY55520;
typedef struct TY55550 TY55550;
typedef struct TY43013 TY43013;
struct TY60216 {
NI Key;
NI Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY60220 {
NI Counter;
TY60218* Data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY54005 {
  TNimObject Sup;
NI Id;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY47539 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
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
struct TY11002 {
NI Refcount;
TNimType* Typ;
};
struct TY11018 {
NI Len;
NI Cap;
TY11002** D;
};
struct TY11014 {
NI Counter;
NI Max;
TY11010* Head;
TY11010** Data;
};
struct TY11394 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11396 {
TY11018 Zct;
TY11018 Decstack;
TY11014 Cycleroots;
TY11018 Tempstack;
TY11394 Stat;
};
struct TY60076 {
NI H;
};
struct TY55560 {
TY54005* Key;
TNimObject* Val;
};
struct TY55564 {
NI Counter;
TY55562* Data;
};
struct TY60104 {
NI Tos;
TY60106* Stack;
};
struct TY60089 {
NI H;
TY54011* Name;
};
struct TY55566 {
TY54005* Key;
TY55526* Val;
};
struct TY55570 {
NI Counter;
TY55568* Data;
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
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
};
typedef NI TY9014[8];
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
};
struct TY60218 {
  TGenericSeq Sup;
  TY60216 data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY55562 {
  TGenericSeq Sup;
  TY55560 data[SEQ_DECL_SIZE];
};
struct TY60106 {
  TGenericSeq Sup;
  TY55530 data[SEQ_DECL_SIZE];
};
struct TY55568 {
  TGenericSeq Sup;
  TY55566 data[SEQ_DECL_SIZE];
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14604, NI Len_14605);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13426, void* Src_13427);
N_NIMCALL(NI, Nexttry_60210)(NI H_60212, NI Maxhash_60213);
N_NIMCALL(NIM_BOOL, Mustrehash_60206)(NI Length_60208, NI Counter_60209);
N_NIMCALL(void, Strtableenlarge_62298)(TY55530* T_62301);
N_NIMCALL(void, Strtablerawinsert_62261)(TY55528** Data_62264, TY55548* N_62265);
N_NIMCALL(void, Internalerror_47574)(TY47539 Info_47576, NimStringDesc* Errmsg_47577);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18999, NimStringDesc* Src_19000);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18889);
static N_INLINE(void, asgnRef)(void** Dest_13414, void* Src_13415);
static N_INLINE(void, Incref_13402)(TY11002* C_13404);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NIM_BOOL, Canbecycleroot_11816)(TY11002* C_11818);
static N_INLINE(void, Rtladdcycleroot_12452)(TY11002* C_12454);
N_NOINLINE(void, Incl_11280)(TY11014* S_11283, TY11002* Cell_11284);
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814);
static N_INLINE(void, Decref_13201)(TY11002* C_13203);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803);
N_NOINLINE(void, Addzct_11801)(TY11018* S_11804, TY11002* C_11805);
N_NIMCALL(TY55548*, Nextiter_60083)(TY60076* Ti_60086, TY55530* Tab_60087);
N_NIMCALL(NI, Iitablerawget_63077)(TY60220 T_63079, NI Key_63080);
N_NIMCALL(void, Iitablerawinsert_63095)(TY60218** Data_63098, NI Key_63099, NI Val_63100);
N_NIMCALL(NI, Idtablerawget_62708)(TY55564 T_62710, NI Key_62711);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
N_NIMCALL(void, Idtablerawinsert_62760)(TY55562** Data_62763, TY54005* Key_62764, TNimObject* Val_62765);
N_NIMCALL(TY55548*, Strtableget_60066)(TY55530* T_60068, TY54011* Name_60069);
N_NIMCALL(TY55548*, Nextidentiter_60098)(TY60089* Ti_60101, TY55530* Tab_60102);
N_NIMCALL(NI, Idnodetablerawget_62893)(TY55570 T_62895, TY54005* Key_62896);
N_NIMCALL(void, Idnodetablerawinsert_62920)(TY55568** Data_62923, TY54005* Key_62924, TY55526* Val_62925);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19203, NI Elemsize_19204, NI Newlen_19205);
N_NIMCALL(void, Initstrtable_55747)(TY55530* X_55750);
N_NIMCALL(NU8, Symtabadduniqueat_60140)(TY60104* Tab_60143, TY55548* E_60144, NI At_60145);
N_NIMCALL(void, Strtableadd_60061)(TY55530* T_60064, TY55548* N_60065);
N_NIMCALL(TY55548*, Lookupinrecord_60199)(TY55526* N_60201, TY54011* Field_60202);
static N_INLINE(TY55526*, Lastson_55810)(TY55526* N_55812);
STRING_LITERAL(TMP195609, "StrTableRawInsert: ", 19);
STRING_LITERAL(TMP196057, "getSymFromList", 14);
STRING_LITERAL(TMP196676, "lookupInRecord", 14);
STRING_LITERAL(TMP196677, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP196678, "lookupInRecord()", 16);
extern TNimType* NTI60218; /* TIIPairSeq */
extern TNimType* NTI55528; /* TSymSeq */
extern TY11396 Gch_11414;
extern TNimType* NTI55562; /* TIdPairSeq */
extern TNimType* NTI60106; /* seq[TStrTable] */
extern TNimType* NTI55568; /* TIdNodePairSeq */
N_NIMCALL(void, Initiitable_60225)(TY60220* X_60228) {
NI I_63074;
NI Res_63076;
(*X_60228).Counter = 0;
unsureAsgnRef((void**) &(*X_60228).Data, (TY60218*) newSeq(NTI60218, 8));
I_63074 = 0;
Res_63076 = 0;
Res_63076 = 0;
while (1) {
if (!(Res_63076 <= 7)) goto LA1;
I_63074 = Res_63076;
(*X_60228).Data->data[I_63074].Key = (IL64(-9223372036854775807) - IL64(1));
Res_63076 += 1;
} LA1: ;
}
N_NIMCALL(NI, Nexttry_60210)(NI H_60212, NI Maxhash_60213) {
NI Result_61829;
Result_61829 = 0;
Result_61829 = (NI64)((NI64)((NI64)(5 * H_60212) + 1) & Maxhash_60213);
return Result_61829;
}
N_NIMCALL(TY55548*, Strtableget_60066)(TY55530* T_60068, TY54011* Name_60069) {
TY55548* Result_62445;
NI H_62446;
Result_62445 = 0;
H_62446 = 0;
H_62446 = (NI64)((*Name_60069).H & ((*T_60068).Data->Sup.len-1));
while (1) {
Result_62445 = (*T_60068).Data->data[H_62446];
if (!(Result_62445 == NIM_NIL)) goto LA3;
goto LA1;
LA3: ;
if (!((*(*Result_62445).Name).Sup.Id == (*Name_60069).Sup.Id)) goto LA6;
goto LA1;
LA6: ;
H_62446 = Nexttry_60210(H_62446, ((*T_60068).Data->Sup.len-1));
} LA1: ;
return Result_62445;
}
N_NIMCALL(NIM_BOOL, Mustrehash_60206)(NI Length_60208, NI Counter_60209) {
NIM_BOOL Result_60526;
NIM_BOOL LOC1;
Result_60526 = 0;
LOC1 = ((NI64)(Length_60208 * 2) < (NI64)(Counter_60209 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI64)(Length_60208 - Counter_60209) < 4);
LA2: ;
Result_60526 = LOC1;
return Result_60526;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18999, NimStringDesc* Src_19000) {
memcpy(((NCSTRING) (&(*Dest_18999).data[((*Dest_18999).Sup.len)-0])), ((NCSTRING) ((*Src_19000).data)), ((int) ((NI64)((NI64)((*Src_19000).Sup.len + 1) * 1))));
(*Dest_18999).Sup.len += (*Src_19000).Sup.len;
}
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405) {
NI Result_8007;
Result_8007 = 0;
(*Memloc_3404) += X_3405;
Result_8007 = (*Memloc_3404);
return Result_8007;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11816)(TY11002* C_11818) {
NIM_BOOL Result_11819;
Result_11819 = 0;
Result_11819 = !((((*(*C_11818).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11819;
}
static N_INLINE(void, Rtladdcycleroot_12452)(TY11002* C_12454) {
Incl_11280(&Gch_11414.Cycleroots, C_12454);
}
static N_INLINE(void, Incref_13402)(TY11002* C_13404) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3401(&(*C_13404).Refcount, 8);
LOC3 = Canbecycleroot_11816(C_13404);
if (!LOC3) goto LA4;
Rtladdcycleroot_12452(C_13404);
LA4: ;
}
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814) {
TY11002* Result_11815;
Result_11815 = 0;
Result_11815 = ((TY11002*) ((NI64)((NU64)(((NI) (Usr_11814))) - (NU64)(((NI) (((NI)sizeof(TY11002))))))));
return Result_11815;
}
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410) {
NI Result_8206;
Result_8206 = 0;
(*Memloc_3409) -= X_3410;
Result_8206 = (*Memloc_3409);
return Result_8206;
}
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803) {
Addzct_11801(&Gch_11414.Zct, C_12803);
}
static N_INLINE(void, Decref_13201)(TY11002* C_13203) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3406(&(*C_13203).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12801(C_13203);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11816(C_13203);
if (!LOC5) goto LA6;
Rtladdcycleroot_12452(C_13203);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13414, void* Src_13415) {
TY11002* LOC4;
TY11002* LOC8;
if (!!((Src_13415 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11812(Src_13415);
Incref_13402(LOC4);
LA2: ;
if (!!(((*Dest_13414) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11812((*Dest_13414));
Decref_13201(LOC8);
LA6: ;
(*Dest_13414) = Src_13415;
}
N_NIMCALL(void, Strtablerawinsert_62261)(TY55528** Data_62264, TY55548* N_62265) {
NI H_62266;
NimStringDesc* LOC5;
H_62266 = 0;
H_62266 = (NI64)((*(*N_62265).Name).H & ((*Data_62264)->Sup.len-1));
while (1) {
if (!!(((*Data_62264)->data[H_62266] == NIM_NIL))) goto LA1;
if (!((*Data_62264)->data[H_62266] == N_62265)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString((*(*N_62265).Name).S->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP195609));
appendString(LOC5, (*(*N_62265).Name).S);
Internalerror_47574((*N_62265).Info, LOC5);
LA3: ;
H_62266 = Nexttry_60210(H_62266, ((*Data_62264)->Sup.len-1));
} LA1: ;
asgnRef((void**) &(*Data_62264)->data[H_62266], N_62265);
}
N_NIMCALL(void, Strtableenlarge_62298)(TY55530* T_62301) {
TY55528* N_62302;
NI I_62333;
NI HEX3Atmp_62355;
NI Res_62357;
TY55528* LOC5;
N_62302 = 0;
N_62302 = (TY55528*) newSeq(NTI55528, (NI64)((*T_62301).Data->Sup.len * 2));
I_62333 = 0;
HEX3Atmp_62355 = 0;
HEX3Atmp_62355 = ((*T_62301).Data->Sup.len-1);
Res_62357 = 0;
Res_62357 = 0;
while (1) {
if (!(Res_62357 <= HEX3Atmp_62355)) goto LA1;
I_62333 = Res_62357;
if (!!(((*T_62301).Data->data[I_62333] == NIM_NIL))) goto LA3;
Strtablerawinsert_62261(&N_62302, (*T_62301).Data->data[I_62333]);
LA3: ;
Res_62357 += 1;
} LA1: ;
LOC5 = 0;
LOC5 = (*T_62301).Data;
unsureAsgnRef((void**) &(*T_62301).Data, N_62302);
N_62302 = LOC5;
}
N_NIMCALL(void, Strtableadd_60061)(TY55530* T_60064, TY55548* N_60065) {
NIM_BOOL LOC2;
LOC2 = Mustrehash_60206((*T_60064).Data->Sup.len, (*T_60064).Counter);
if (!LOC2) goto LA3;
Strtableenlarge_62298(T_60064);
LA3: ;
Strtablerawinsert_62261(&(*T_60064).Data, N_60065);
(*T_60064).Counter += 1;
}
N_NIMCALL(TY55548*, Nextiter_60083)(TY60076* Ti_60086, TY55530* Tab_60087) {
TY55548* Result_62505;
Result_62505 = 0;
Result_62505 = NIM_NIL;
while (1) {
if (!((*Ti_60086).H <= ((*Tab_60087).Data->Sup.len-1))) goto LA1;
Result_62505 = (*Tab_60087).Data->data[(*Ti_60086).H];
(*Ti_60086).H += 1;
if (!!((Result_62505 == NIM_NIL))) goto LA3;
goto LA1;
LA3: ;
} LA1: ;
return Result_62505;
}
N_NIMCALL(TY55548*, Inittabiter_60078)(TY60076* Ti_60081, TY55530* Tab_60082) {
TY55548* Result_62497;
Result_62497 = 0;
(*Ti_60081).H = 0;
if (!((*Tab_60082).Counter == 0)) goto LA2;
Result_62497 = NIM_NIL;
goto LA1;
LA2: ;
Result_62497 = Nextiter_60083(Ti_60081, Tab_60082);
LA1: ;
return Result_62497;
}
N_NIMCALL(NI, Iitablerawget_63077)(TY60220 T_63079, NI Key_63080) {
NI Result_63081;
NI H_63082;
Result_63081 = 0;
H_63082 = 0;
H_63082 = (NI64)(Key_63080 & (T_63079.Data->Sup.len-1));
while (1) {
if (!!((T_63079.Data->data[H_63082].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA1;
if (!(T_63079.Data->data[H_63082].Key == Key_63080)) goto LA3;
Result_63081 = H_63082;
goto BeforeRet;
LA3: ;
H_63082 = Nexttry_60210(H_63082, (T_63079.Data->Sup.len-1));
} LA1: ;
Result_63081 = -1;
BeforeRet: ;
return Result_63081;
}
N_NIMCALL(void, Iitablerawinsert_63095)(TY60218** Data_63098, NI Key_63099, NI Val_63100) {
NI H_63101;
H_63101 = 0;
H_63101 = (NI64)(Key_63099 & ((*Data_63098)->Sup.len-1));
while (1) {
if (!!(((*Data_63098)->data[H_63101].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA1;
H_63101 = Nexttry_60210(H_63101, ((*Data_63098)->Sup.len-1));
} LA1: ;
(*Data_63098)->data[H_63101].Key = Key_63099;
(*Data_63098)->data[H_63101].Val = Val_63100;
}
N_NIMCALL(void, Iitableput_60233)(TY60220* T_60236, NI Key_60237, NI Val_60238) {
NI Index_63114;
NIM_BOOL LOC5;
TY60218* N_63129;
NI I_63160;
NI HEX3Atmp_63195;
NI Res_63197;
NI I_63169;
NI HEX3Atmp_63198;
NI Res_63200;
TY60218* LOC13;
Index_63114 = 0;
Index_63114 = Iitablerawget_63077((*T_60236), Key_60237);
if (!(0 <= Index_63114)) goto LA2;
(*T_60236).Data->data[Index_63114].Val = Val_60238;
goto LA1;
LA2: ;
LOC5 = Mustrehash_60206((*T_60236).Data->Sup.len, (*T_60236).Counter);
if (!LOC5) goto LA6;
N_63129 = 0;
N_63129 = (TY60218*) newSeq(NTI60218, (NI64)((*T_60236).Data->Sup.len * 2));
I_63160 = 0;
HEX3Atmp_63195 = 0;
HEX3Atmp_63195 = (N_63129->Sup.len-1);
Res_63197 = 0;
Res_63197 = 0;
while (1) {
if (!(Res_63197 <= HEX3Atmp_63195)) goto LA8;
I_63160 = Res_63197;
N_63129->data[I_63160].Key = (IL64(-9223372036854775807) - IL64(1));
Res_63197 += 1;
} LA8: ;
I_63169 = 0;
HEX3Atmp_63198 = 0;
HEX3Atmp_63198 = ((*T_60236).Data->Sup.len-1);
Res_63200 = 0;
Res_63200 = 0;
while (1) {
if (!(Res_63200 <= HEX3Atmp_63198)) goto LA9;
I_63169 = Res_63200;
if (!!(((*T_60236).Data->data[I_63169].Key == (IL64(-9223372036854775807) - IL64(1))))) goto LA11;
Iitablerawinsert_63095(&N_63129, (*T_60236).Data->data[I_63169].Key, (*T_60236).Data->data[I_63169].Val);
LA11: ;
Res_63200 += 1;
} LA9: ;
LOC13 = 0;
LOC13 = (*T_60236).Data;
unsureAsgnRef((void**) &(*T_60236).Data, N_63129);
N_63129 = LOC13;
LA6: ;
Iitablerawinsert_63095(&(*T_60236).Data, Key_60237, Val_60238);
(*T_60236).Counter += 1;
LA1: ;
}
N_NIMCALL(NI, Idtablerawget_62708)(TY55564 T_62710, NI Key_62711) {
NI Result_62712;
NI H_62713;
Result_62712 = 0;
H_62713 = 0;
H_62713 = (NI64)(Key_62711 & (T_62710.Data->Sup.len-1));
while (1) {
if (!!((T_62710.Data->data[H_62713].Key == NIM_NIL))) goto LA1;
if (!((*T_62710.Data->data[H_62713].Key).Id == Key_62711)) goto LA3;
Result_62712 = H_62713;
goto BeforeRet;
LA3: ;
H_62713 = Nexttry_60210(H_62713, (T_62710.Data->Sup.len-1));
} LA1: ;
Result_62712 = -1;
BeforeRet: ;
return Result_62712;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419) {
TY11002* C_13420;
NI LOC4;
TY11002* C_13422;
NI LOC9;
if (!!((Src_13419 == NIM_NIL))) goto LA2;
C_13420 = 0;
C_13420 = Usrtocell_11812(Src_13419);
LOC4 = Atomicinc_3401(&(*C_13420).Refcount, 8);
LA2: ;
if (!!(((*Dest_13418) == NIM_NIL))) goto LA6;
C_13422 = 0;
C_13422 = Usrtocell_11812((*Dest_13418));
LOC9 = Atomicdec_3406(&(*C_13422).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12801(C_13422);
LA10: ;
LA6: ;
(*Dest_13418) = Src_13419;
}
N_NIMCALL(void, Idtablerawinsert_62760)(TY55562** Data_62763, TY54005* Key_62764, TNimObject* Val_62765) {
NI H_62766;
H_62766 = 0;
H_62766 = (NI64)((*Key_62764).Id & ((*Data_62763)->Sup.len-1));
while (1) {
if (!!(((*Data_62763)->data[H_62766].Key == NIM_NIL))) goto LA1;
H_62766 = Nexttry_60210(H_62766, ((*Data_62763)->Sup.len-1));
} LA1: ;
asgnRefNoCycle((void**) &(*Data_62763)->data[H_62766].Key, Key_62764);
asgnRefNoCycle((void**) &(*Data_62763)->data[H_62766].Val, Val_62765);
}
N_NIMCALL(void, Idtableput_60171)(TY55564* T_60174, TY54005* Key_60175, TNimObject* Val_60176) {
NI Index_62797;
TY55562* N_62798;
NIM_BOOL LOC5;
NI I_62852;
NI HEX3Atmp_62887;
NI Res_62889;
TY55562* LOC12;
Index_62797 = 0;
N_62798 = 0;
Index_62797 = Idtablerawget_62708((*T_60174), (*Key_60175).Id);
if (!(0 <= Index_62797)) goto LA2;
asgnRefNoCycle((void**) &(*T_60174).Data->data[Index_62797].Val, Val_60176);
goto LA1;
LA2: ;
LOC5 = Mustrehash_60206((*T_60174).Data->Sup.len, (*T_60174).Counter);
if (!LOC5) goto LA6;
N_62798 = (TY55562*) newSeq(NTI55562, (NI64)((*T_60174).Data->Sup.len * 2));
I_62852 = 0;
HEX3Atmp_62887 = 0;
HEX3Atmp_62887 = ((*T_60174).Data->Sup.len-1);
Res_62889 = 0;
Res_62889 = 0;
while (1) {
if (!(Res_62889 <= HEX3Atmp_62887)) goto LA8;
I_62852 = Res_62889;
if (!!(((*T_60174).Data->data[I_62852].Key == NIM_NIL))) goto LA10;
Idtablerawinsert_62760(&N_62798, (*T_60174).Data->data[I_62852].Key, (*T_60174).Data->data[I_62852].Val);
LA10: ;
Res_62889 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_60174).Data;
unsureAsgnRef((void**) &(*T_60174).Data, N_62798);
N_62798 = LOC12;
LA6: ;
Idtablerawinsert_62760(&(*T_60174).Data, Key_60175, Val_60176);
(*T_60174).Counter += 1;
LA1: ;
}
N_NIMCALL(TNimObject*, Idtableget_60167)(TY55564 T_60169, NI Key_60170) {
TNimObject* Result_62756;
NI Index_62757;
Result_62756 = 0;
Index_62757 = 0;
Index_62757 = Idtablerawget_62708(T_60169, Key_60170);
if (!(0 <= Index_62757)) goto LA2;
Result_62756 = T_60169.Data->data[Index_62757].Val;
goto LA1;
LA2: ;
Result_62756 = NIM_NIL;
LA1: ;
return Result_62756;
}
N_NIMCALL(NI, Iitableget_60229)(TY60220 T_60231, NI Key_60232) {
NI Result_63091;
NI Index_63092;
Result_63091 = 0;
Index_63092 = 0;
Index_63092 = Iitablerawget_63077(T_60231, Key_60232);
if (!(0 <= Index_63092)) goto LA2;
Result_63091 = T_60231.Data->data[Index_63092].Val;
goto LA1;
LA2: ;
Result_63091 = (IL64(-9223372036854775807) - IL64(1));
LA1: ;
return Result_63091;
}
N_NIMCALL(void, Initsymtab_60108)(TY60104* Tab_60111) {
(*Tab_60111).Tos = 0;
unsureAsgnRef((void**) &(*Tab_60111).Stack, (TY60106*) newSeq(NTI60106, 0));
}
N_NIMCALL(TY55548*, Symtabget_60116)(TY60104 Tab_60118, TY54011* S_60119) {
TY55548* Result_62548;
NI I_62571;
NI HEX3Atmp_62583;
NI Res_62585;
Result_62548 = 0;
I_62571 = 0;
HEX3Atmp_62583 = 0;
HEX3Atmp_62583 = (NI64)(((NI) (Tab_60118.Tos)) - 1);
Res_62585 = 0;
Res_62585 = HEX3Atmp_62583;
while (1) {
if (!(0 <= Res_62585)) goto LA1;
I_62571 = Res_62585;
Result_62548 = Strtableget_60066(&Tab_60118.Stack->data[I_62571], S_60119);
if (!!((Result_62548 == NIM_NIL))) goto LA3;
goto BeforeRet;
LA3: ;
Res_62585 -= 1;
} LA1: ;
Result_62548 = NIM_NIL;
BeforeRet: ;
return Result_62548;
}
N_NIMCALL(TY55548*, Getmodule_60203)(TY55548* S_60205) {
TY55548* Result_60414;
NIM_BOOL LOC2;
Result_60414 = 0;
Result_60414 = S_60205;
while (1) {
LOC2 = !((Result_60414 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Result_60414).Kind == ((NU8) 6)));
LA3: ;
if (!LOC2) goto LA1;
Result_60414 = (*Result_60414).Owner;
} LA1: ;
return Result_60414;
}
N_NIMCALL(TY55548*, Nextidentiter_60098)(TY60089* Ti_60101, TY55530* Tab_60102) {
TY55548* Result_62474;
NI H_62475;
NI Start_62476;
Result_62474 = 0;
H_62475 = 0;
Start_62476 = 0;
H_62475 = (NI64)((*Ti_60101).H & ((*Tab_60102).Data->Sup.len-1));
Start_62476 = H_62475;
Result_62474 = (*Tab_60102).Data->data[H_62475];
while (1) {
if (!!((Result_62474 == NIM_NIL))) goto LA1;
if (!((*(*Result_62474).Name).Sup.Id == (*(*Ti_60101).Name).Sup.Id)) goto LA3;
goto LA1;
LA3: ;
H_62475 = Nexttry_60210(H_62475, ((*Tab_60102).Data->Sup.len-1));
if (!(H_62475 == Start_62476)) goto LA6;
Result_62474 = NIM_NIL;
goto LA1;
LA6: ;
Result_62474 = (*Tab_60102).Data->data[H_62475];
} LA1: ;
(*Ti_60101).H = Nexttry_60210(H_62475, ((*Tab_60102).Data->Sup.len-1));
return Result_62474;
}
N_NIMCALL(TY55548*, Initidentiter_60092)(TY60089* Ti_60095, TY55530* Tab_60096, TY54011* S_60097) {
TY55548* Result_62466;
Result_62466 = 0;
(*Ti_60095).H = (*S_60097).H;
unsureAsgnRef((void**) &(*Ti_60095).Name, S_60097);
if (!((*Tab_60096).Counter == 0)) goto LA2;
Result_62466 = NIM_NIL;
goto LA1;
LA2: ;
Result_62466 = Nextidentiter_60098(Ti_60095, Tab_60096);
LA1: ;
return Result_62466;
}
N_NIMCALL(NI, Idnodetablerawget_62893)(TY55570 T_62895, TY54005* Key_62896) {
NI Result_62897;
NI H_62898;
Result_62897 = 0;
H_62898 = 0;
H_62898 = (NI64)((*Key_62896).Id & (T_62895.Data->Sup.len-1));
while (1) {
if (!!((T_62895.Data->data[H_62898].Key == NIM_NIL))) goto LA1;
if (!((*T_62895.Data->data[H_62898].Key).Id == (*Key_62896).Id)) goto LA3;
Result_62897 = H_62898;
goto BeforeRet;
LA3: ;
H_62898 = Nexttry_60210(H_62898, (T_62895.Data->Sup.len-1));
} LA1: ;
Result_62897 = -1;
BeforeRet: ;
return Result_62897;
}
N_NIMCALL(TY55526*, Idnodetableget_60181)(TY55570 T_60183, TY54005* Key_60184) {
TY55526* Result_62916;
NI Index_62917;
Result_62916 = 0;
Index_62917 = 0;
Index_62917 = Idnodetablerawget_62893(T_60183, Key_60184);
if (!(0 <= Index_62917)) goto LA2;
Result_62916 = T_60183.Data->data[Index_62917].Val;
goto LA1;
LA2: ;
Result_62916 = NIM_NIL;
LA1: ;
return Result_62916;
}
N_NIMCALL(void, Idnodetablerawinsert_62920)(TY55568** Data_62923, TY54005* Key_62924, TY55526* Val_62925) {
NI H_62926;
H_62926 = 0;
H_62926 = (NI64)((*Key_62924).Id & ((*Data_62923)->Sup.len-1));
while (1) {
if (!!(((*Data_62923)->data[H_62926].Key == NIM_NIL))) goto LA1;
H_62926 = Nexttry_60210(H_62926, ((*Data_62923)->Sup.len-1));
} LA1: ;
asgnRefNoCycle((void**) &(*Data_62923)->data[H_62926].Key, Key_62924);
asgnRefNoCycle((void**) &(*Data_62923)->data[H_62926].Val, Val_62925);
}
N_NIMCALL(void, Idnodetableput_60185)(TY55570* T_60188, TY54005* Key_60189, TY55526* Val_60190) {
NI Index_62957;
NIM_BOOL LOC5;
TY55568* N_62981;
NI I_63012;
NI HEX3Atmp_63047;
NI Res_63049;
TY55568* LOC12;
Index_62957 = 0;
Index_62957 = Idnodetablerawget_62893((*T_60188), Key_60189);
if (!(0 <= Index_62957)) goto LA2;
asgnRefNoCycle((void**) &(*T_60188).Data->data[Index_62957].Val, Val_60190);
goto LA1;
LA2: ;
LOC5 = Mustrehash_60206((*T_60188).Data->Sup.len, (*T_60188).Counter);
if (!LOC5) goto LA6;
N_62981 = 0;
N_62981 = (TY55568*) newSeq(NTI55568, (NI64)((*T_60188).Data->Sup.len * 2));
I_63012 = 0;
HEX3Atmp_63047 = 0;
HEX3Atmp_63047 = ((*T_60188).Data->Sup.len-1);
Res_63049 = 0;
Res_63049 = 0;
while (1) {
if (!(Res_63049 <= HEX3Atmp_63047)) goto LA8;
I_63012 = Res_63049;
if (!!(((*T_60188).Data->data[I_63012].Key == NIM_NIL))) goto LA10;
Idnodetablerawinsert_62920(&N_62981, (*T_60188).Data->data[I_63012].Key, (*T_60188).Data->data[I_63012].Val);
LA10: ;
Res_63049 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_60188).Data;
unsureAsgnRef((void**) &(*T_60188).Data, N_62981);
N_62981 = LOC12;
LA6: ;
Idnodetablerawinsert_62920(&(*T_60188).Data, Key_60189, Val_60190);
(*T_60188).Counter += 1;
LA1: ;
}
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806) {
NI Result_56886;
Result_56886 = 0;
if (!(*N_55806).KindU.S6.Sons == 0) goto LA2;
Result_56886 = 0;
goto LA1;
LA2: ;
Result_56886 = (*N_55806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_56886;
}
N_NIMCALL(TY55548*, Getsymfromlist_60194)(TY55526* List_60196, TY54011* Ident_60197, NI Start_60198) {
TY55548* Result_60458;
NI I_60467;
NI HEX3Atmp_60515;
NI LOC1;
NI Res_60517;
Result_60458 = 0;
I_60467 = 0;
HEX3Atmp_60515 = 0;
LOC1 = Sonslen_55804(List_60196);
HEX3Atmp_60515 = (NI64)(LOC1 - 1);
Res_60517 = 0;
Res_60517 = Start_60198;
while (1) {
if (!(Res_60517 <= HEX3Atmp_60515)) goto LA2;
I_60467 = Res_60517;
if (!!(((*(*List_60196).KindU.S6.Sons->data[I_60467]).Kind == ((NU8) 3)))) goto LA4;
Internalerror_47574((*List_60196).Info, ((NimStringDesc*) &TMP196057));
LA4: ;
Result_60458 = (*(*List_60196).KindU.S6.Sons->data[I_60467]).KindU.S4.Sym;
if (!((*(*Result_60458).Name).Sup.Id == (*Ident_60197).Sup.Id)) goto LA7;
goto BeforeRet;
LA7: ;
Res_60517 += 1;
} LA2: ;
Result_60458 = NIM_NIL;
BeforeRet: ;
return Result_60458;
}
N_NIMCALL(TNimObject*, Idtableget_60163)(TY55564 T_60165, TY54005* Key_60166) {
TNimObject* Result_62748;
NI Index_62749;
Result_62748 = 0;
Index_62749 = 0;
Index_62749 = Idtablerawget_62708(T_60165, (*Key_60166).Id);
if (!(0 <= Index_62749)) goto LA2;
Result_62748 = T_60165.Data->data[Index_62749].Val;
goto LA1;
LA2: ;
Result_62748 = NIM_NIL;
LA1: ;
return Result_62748;
}
N_NIMCALL(void, Openscope_60146)(TY60104* Tab_60149) {
if (!((*Tab_60149).Stack->Sup.len <= ((NI) ((*Tab_60149).Tos)))) goto LA2;
(*Tab_60149).Stack = (TY60106*) setLengthSeq(&((*Tab_60149).Stack)->Sup, sizeof(TY55530), (NI64)(((NI) ((*Tab_60149).Tos)) + 1));
LA2: ;
Initstrtable_55747(&(*Tab_60149).Stack->data[(*Tab_60149).Tos]);
(*Tab_60149).Tos += 1;
}
N_NIMCALL(NU8, Symtabadduniqueat_60140)(TY60104* Tab_60143, TY55548* E_60144, NI At_60145) {
NU8 Result_62605;
TY55548* LOC2;
Result_62605 = 0;
LOC2 = 0;
LOC2 = Strtableget_60066(&(*Tab_60143).Stack->data[At_60145], (*E_60144).Name);
if (!!((LOC2 == NIM_NIL))) goto LA3;
Result_62605 = ((NU8) 0);
goto LA1;
LA3: ;
Strtableadd_60061(&(*Tab_60143).Stack->data[At_60145], E_60144);
Result_62605 = ((NU8) 1);
LA1: ;
return Result_62605;
}
N_NIMCALL(NU8, Symtabaddunique_60135)(TY60104* Tab_60138, TY55548* E_60139) {
NU8 Result_62623;
Result_62623 = 0;
Result_62623 = Symtabadduniqueat_60140(Tab_60138, E_60139, ((NI) ((NI64)(((NI) ((*Tab_60138).Tos)) - 1))));
return Result_62623;
}
N_NIMCALL(void, Rawclosescope_60150)(TY60104* Tab_60153) {
(*Tab_60153).Tos -= 1;
}
N_NIMCALL(void, Symtabaddat_60129)(TY60104* Tab_60132, TY55548* E_60133, NI At_60134) {
Strtableadd_60061(&(*Tab_60132).Stack->data[At_60134], E_60133);
}
N_NIMCALL(TY55548*, Symtablocalget_60120)(TY60104 Tab_60122, TY54011* S_60123) {
TY55548* Result_62543;
Result_62543 = 0;
Result_62543 = Strtableget_60066(&Tab_60122.Stack->data[(NI64)(((NI) (Tab_60122.Tos)) - 1)], S_60123);
return Result_62543;
}
N_NIMCALL(void, Symtabadd_60124)(TY60104* Tab_60127, TY55548* E_60128) {
Strtableadd_60061(&(*Tab_60127).Stack->data[(NI64)(((NI) ((*Tab_60127).Tos)) - 1)], E_60128);
}
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_60177)(TY55564 T_60179, TY54005* Key_60180) {
NIM_BOOL Result_62731;
NI Index_62732;
Result_62731 = 0;
Index_62732 = 0;
Index_62732 = Idtablerawget_62708(T_60179, (*Key_60180).Id);
if (!(0 <= Index_62732)) goto LA2;
Result_62731 = (T_60179.Data->data[Index_62732].Key == Key_60180);
goto LA1;
LA2: ;
Result_62731 = NIM_FALSE;
LA1: ;
return Result_62731;
}
static N_INLINE(TY55526*, Lastson_55810)(TY55526* N_55812) {
TY55526* Result_57825;
NI LOC1;
Result_57825 = 0;
LOC1 = Sonslen_55804(N_55812);
Result_57825 = (*N_55812).KindU.S6.Sons->data[(NI64)(LOC1 - 1)];
return Result_57825;
}
N_NIMCALL(TY55548*, Lookupinrecord_60199)(TY55526* N_60201, TY54011* Field_60202) {
TY55548* Result_60243;
NI I_60267;
NI HEX3Atmp_60405;
NI LOC1;
NI Res_60407;
NI I_60343;
NI HEX3Atmp_60408;
NI LOC12;
NI Res_60410;
TY55526* LOC14;
Result_60243 = 0;
Result_60243 = NIM_NIL;
switch ((*N_60201).Kind) {
case ((NU8) 113):
I_60267 = 0;
HEX3Atmp_60405 = 0;
LOC1 = Sonslen_55804(N_60201);
HEX3Atmp_60405 = (NI64)(LOC1 - 1);
Res_60407 = 0;
Res_60407 = 0;
while (1) {
if (!(Res_60407 <= HEX3Atmp_60405)) goto LA2;
I_60267 = Res_60407;
Result_60243 = Lookupinrecord_60199((*N_60201).KindU.S6.Sons->data[I_60267], Field_60202);
if (!!((Result_60243 == NIM_NIL))) goto LA4;
goto BeforeRet;
LA4: ;
Res_60407 += 1;
} LA2: ;
break;
case ((NU8) 114):
if (!!(((*(*N_60201).KindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA7;
Internalerror_47574((*N_60201).Info, ((NimStringDesc*) &TMP196676));
LA7: ;
Result_60243 = Lookupinrecord_60199((*N_60201).KindU.S6.Sons->data[0], Field_60202);
if (!!((Result_60243 == NIM_NIL))) goto LA10;
goto BeforeRet;
LA10: ;
I_60343 = 0;
HEX3Atmp_60408 = 0;
LOC12 = Sonslen_55804(N_60201);
HEX3Atmp_60408 = (NI64)(LOC12 - 1);
Res_60410 = 0;
Res_60410 = 1;
while (1) {
if (!(Res_60410 <= HEX3Atmp_60408)) goto LA13;
I_60343 = Res_60410;
switch ((*(*N_60201).KindU.S6.Sons->data[I_60343]).Kind) {
case ((NU8) 75):
case ((NU8) 78):
LOC14 = 0;
LOC14 = Lastson_55810((*N_60201).KindU.S6.Sons->data[I_60343]);
Result_60243 = Lookupinrecord_60199(LOC14, Field_60202);
if (!!((Result_60243 == NIM_NIL))) goto LA16;
goto BeforeRet;
LA16: ;
break;
default:
Internalerror_47574((*N_60201).Info, ((NimStringDesc*) &TMP196677));
break;
}
Res_60410 += 1;
} LA13: ;
break;
case ((NU8) 3):
if (!((*(*(*N_60201).KindU.S4.Sym).Name).Sup.Id == (*Field_60202).Sup.Id)) goto LA19;
Result_60243 = (*N_60201).KindU.S4.Sym;
LA19: ;
break;
default:
Internalerror_47574((*N_60201).Info, ((NimStringDesc*) &TMP196678));
break;
}
BeforeRet: ;
return Result_60243;
}
N_NOINLINE(void, astalgoInit)(void) {
}

