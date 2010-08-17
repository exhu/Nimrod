/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY43008 TY43008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY43006 TY43006;
typedef struct TY43004 TY43004;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TNimObject {
TNimType* m_type;
};
struct TY43004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY43008 {
  TNimObject Sup;
NI Counter;
TY43006* Data;
NU8 Mode;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY10788 Stat;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY43006 {
  TGenericSeq Sup;
  TY43004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(void, Put_43024)(TY43008* T_43026, NimStringDesc* Key_43027, NimStringDesc* Val_43028);
N_NIMCALL(NI, Rawget_43142)(TY43008* T_43144, NimStringDesc* Key_43145);
N_NIMCALL(NI, Myhash_43105)(TY43008* T_43107, NimStringDesc* Key_43108);
N_NIMCALL(NI, Gethashstr_42031)(NimStringDesc* S_42033);
N_NIMCALL(NI, Gethashstrci_42034)(NimStringDesc* S_42036);
N_NIMCALL(NI, Getnormalizedhash_42037)(NimStringDesc* S_42039);
N_NIMCALL(NIM_BOOL, Mycmp_43110)(TY43008* T_43112, NimStringDesc* A_43113, NimStringDesc* B_43114);
N_NIMCALL(NI, Cmp_1319)(NimStringDesc* X_1321, NimStringDesc* Y_1322);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_22595, NimStringDesc* B_22596);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_22638, NimStringDesc* B_22639);
N_NIMCALL(NI, Nexttry_43137)(NI H_43139, NI Maxhash_43140);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NIM_BOOL, Mustrehash_43122)(NI Length_43124, NI Counter_43125);
N_NIMCALL(void, Enlarge_43173)(TY43008* T_43175);
N_NIMCALL(void, Rawinsert_43164)(TY43008* T_43166, TY43006** Data_43168, NimStringDesc* Key_43169, NimStringDesc* Val_43170);
STRING_LITERAL(TMP193673, "", 0);
extern TNimType* NTI43010; /* PStringTable */
extern TNimType* NTI43008; /* TStringTable */
extern TNimType* NTI43006; /* TKeyValuePairSeq */
extern TY10790 Gch_10808;
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824) {
TY10402* Result_10825;
Result_10825 = 0;
Result_10825 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_10824))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
return Result_10825;
}
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458) {
Addzct_10811(&Gch_10808.Zct, C_11458);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617) {
TY10402* C_11618;
TY10402* C_11619;
if (!!((Src_11617 == NIM_NIL))) goto LA2;
C_11618 = 0;
C_11618 = Usrtocell_10822(Src_11617);
(*C_11618).Refcount = (NI64)((NU64)((*C_11618).Refcount) + (NU64)(8));
LA2: ;
if (!!(((*Dest_11616) == NIM_NIL))) goto LA5;
C_11619 = 0;
C_11619 = Usrtocell_10822((*Dest_11616));
(*C_11619).Refcount = (NI64)((NU64)((*C_11619).Refcount) - (NU64)(8));
if (!((NU64)((*C_11619).Refcount) < (NU64)(8))) goto LA8;
Rtladdzct_11456(C_11619);
LA8: ;
LA5: ;
(*Dest_11616) = Src_11617;
}
N_NIMCALL(NI, Myhash_43105)(TY43008* T_43107, NimStringDesc* Key_43108) {
NI Result_43109;
Result_43109 = 0;
switch ((*T_43107).Mode) {
case ((NU8) 0):
Result_43109 = Gethashstr_42031(Key_43108);
break;
case ((NU8) 1):
Result_43109 = Gethashstrci_42034(Key_43108);
break;
case ((NU8) 2):
Result_43109 = Getnormalizedhash_42037(Key_43108);
break;
}
return Result_43109;
}
N_NIMCALL(NIM_BOOL, Mycmp_43110)(TY43008* T_43112, NimStringDesc* A_43113, NimStringDesc* B_43114) {
NIM_BOOL Result_43115;
NI LOC1;
NI LOC2;
NI LOC3;
Result_43115 = 0;
switch ((*T_43112).Mode) {
case ((NU8) 0):
LOC1 = Cmp_1319(A_43113, B_43114);
Result_43115 = (LOC1 == 0);
break;
case ((NU8) 1):
LOC2 = nsuCmpIgnoreCase(A_43113, B_43114);
Result_43115 = (LOC2 == 0);
break;
case ((NU8) 2):
LOC3 = nsuCmpIgnoreStyle(A_43113, B_43114);
Result_43115 = (LOC3 == 0);
break;
}
return Result_43115;
}
N_NIMCALL(NI, Nexttry_43137)(NI H_43139, NI Maxhash_43140) {
NI Result_43141;
Result_43141 = 0;
Result_43141 = (NI64)((NI64)((NI64)(5 * H_43139) + 1) & Maxhash_43140);
return Result_43141;
}
N_NIMCALL(NI, Rawget_43142)(TY43008* T_43144, NimStringDesc* Key_43145) {
NI Result_43146;
NI H_43147;
NI LOC1;
NIM_BOOL LOC4;
Result_43146 = 0;
H_43147 = 0;
LOC1 = Myhash_43105(T_43144, Key_43145);
H_43147 = (NI64)(LOC1 & ((*T_43144).Data->Sup.len-1));
while (1) {
if (!!((*T_43144).Data->data[H_43147].Key == 0)) goto LA2;
LOC4 = Mycmp_43110(T_43144, (*T_43144).Data->data[H_43147].Key, Key_43145);
if (!LOC4) goto LA5;
Result_43146 = H_43147;
goto BeforeRet;
LA5: ;
H_43147 = Nexttry_43137(H_43147, ((*T_43144).Data->Sup.len-1));
} LA2: ;
Result_43146 = -1;
BeforeRet: ;
return Result_43146;
}
N_NIMCALL(NIM_BOOL, Mustrehash_43122)(NI Length_43124, NI Counter_43125) {
NIM_BOOL Result_43126;
NIM_BOOL LOC1;
Result_43126 = 0;
LOC1 = ((NI64)(Length_43124 * 2) < (NI64)(Counter_43125 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI64)(Length_43124 - Counter_43125) < 4);
LA2: ;
Result_43126 = LOC1;
return Result_43126;
}
N_NIMCALL(void, Rawinsert_43164)(TY43008* T_43166, TY43006** Data_43168, NimStringDesc* Key_43169, NimStringDesc* Val_43170) {
NI H_43171;
NI LOC1;
H_43171 = 0;
LOC1 = Myhash_43105(T_43166, Key_43169);
H_43171 = (NI64)(LOC1 & ((*Data_43168)->Sup.len-1));
while (1) {
if (!!((*Data_43168)->data[H_43171].Key == 0)) goto LA2;
H_43171 = Nexttry_43137(H_43171, ((*Data_43168)->Sup.len-1));
} LA2: ;
asgnRefNoCycle((void**) &(*Data_43168)->data[H_43171].Key, copyString(Key_43169));
asgnRefNoCycle((void**) &(*Data_43168)->data[H_43171].Val, copyString(Val_43170));
}
N_NIMCALL(void, Enlarge_43173)(TY43008* T_43175) {
TY43006* N_43176;
NI I_43221;
NI HEX3Atmp_43233;
NI Res_43235;
TY43006* LOC5;
N_43176 = 0;
N_43176 = (TY43006*) newSeq(NTI43006, (NI64)((*T_43175).Data->Sup.len * 2));
I_43221 = 0;
HEX3Atmp_43233 = 0;
HEX3Atmp_43233 = ((*T_43175).Data->Sup.len-1);
Res_43235 = 0;
Res_43235 = 0;
while (1) {
if (!(Res_43235 <= HEX3Atmp_43233)) goto LA1;
I_43221 = Res_43235;
if (!!((*T_43175).Data->data[I_43221].Key == 0)) goto LA3;
Rawinsert_43164(T_43175, &N_43176, (*T_43175).Data->data[I_43221].Key, (*T_43175).Data->data[I_43221].Val);
LA3: ;
Res_43235 += 1;
} LA1: ;
LOC5 = (*T_43175).Data;
asgnRefNoCycle((void**) &(*T_43175).Data, N_43176);
N_43176 = LOC5;
}
N_NIMCALL(void, Put_43024)(TY43008* T_43026, NimStringDesc* Key_43027, NimStringDesc* Val_43028) {
NI Index_43243;
NIM_BOOL LOC5;
Index_43243 = 0;
Index_43243 = Rawget_43142(T_43026, Key_43027);
if (!(0 <= Index_43243)) goto LA2;
asgnRefNoCycle((void**) &(*T_43026).Data->data[Index_43243].Val, copyString(Val_43028));
goto LA1;
LA2: ;
LOC5 = Mustrehash_43122((*T_43026).Data->Sup.len, (*T_43026).Counter);
if (!LOC5) goto LA6;
Enlarge_43173(T_43026);
LA6: ;
Rawinsert_43164(T_43026, &(*T_43026).Data, Key_43027, Val_43028);
(*T_43026).Counter += 1;
LA1: ;
}
N_NIMCALL(TY43008*, Newstringtable_43019)(NimStringDesc** Keyvaluepairs_43022, NI Keyvaluepairs_43022Len0, NU8 Mode_43023) {
TY43008* Result_43061;
NI I_43089;
Result_43061 = 0;
Result_43061 = (TY43008*) newObj(NTI43010, sizeof(TY43008));
(*Result_43061).Sup.m_type = NTI43008;
(*Result_43061).Mode = Mode_43023;
(*Result_43061).Counter = 0;
asgnRefNoCycle((void**) &(*Result_43061).Data, (TY43006*) newSeq(NTI43006, 64));
I_43089 = 0;
I_43089 = 0;
while (1) {
if (!(I_43089 < (Keyvaluepairs_43022Len0-1))) goto LA1;
Put_43024(Result_43061, Keyvaluepairs_43022[I_43089], Keyvaluepairs_43022[(NI64)(I_43089 + 1)]);
I_43089 += 2;
} LA1: ;
return Result_43061;
}
N_NIMCALL(NimStringDesc*, Get_43029)(TY43008* T_43031, NimStringDesc* Key_43032) {
NimStringDesc* Result_43153;
NI Index_43154;
Result_43153 = 0;
Index_43154 = 0;
Index_43154 = Rawget_43142(T_43031, Key_43032);
if (!(0 <= Index_43154)) goto LA2;
Result_43153 = copyString((*T_43031).Data->data[Index_43154].Val);
goto LA1;
LA2: ;
Result_43153 = copyString(((NimStringDesc*) &TMP193673));
LA1: ;
return Result_43153;
}
N_NIMCALL(NIM_BOOL, Haskey_43033)(TY43008* T_43035, NimStringDesc* Key_43036) {
NIM_BOOL Result_43161;
NI LOC1;
Result_43161 = 0;
LOC1 = Rawget_43142(T_43035, Key_43036);
Result_43161 = (0 <= LOC1);
return Result_43161;
}
N_NOINLINE(void, nstrtabsInit)(void) {
}

