/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY37019 TY37019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY37013 TY37013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY37015 TY37015;
typedef struct TNimObject TNimObject;
typedef struct TY10202 TY10202;
typedef struct TY10214 TY10214;
typedef struct TY10590 TY10590;
typedef struct TY10218 TY10218;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY37019 {
TNimType* m_type;
TY37013* Head;
TY37013* Tail;
NI Counter;
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
struct TNimObject {
TNimType* m_type;
};
struct TY37013 {
  TNimObject Sup;
TY37013* Prev;
TY37013* Next;
};
struct TY37015 {
  TY37013 Sup;
NimStringDesc* Data;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8214[8];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_16847, NimStringDesc* B_16848);
N_NIMCALL(void, Prepend_37040)(TY37019* List_37043, TY37013* Entry_37044);
static N_INLINE(void, asgnRef)(void** Dest_11412, void* Src_11413);
static N_INLINE(void, Incref_11401)(TY10202* C_11403);
static N_INLINE(NIM_BOOL, Canbecycleroot_10626)(TY10202* C_10628);
static N_INLINE(void, Rtladdcycleroot_11252)(TY10202* C_11254);
N_NOINLINE(void, Incl_10474)(TY10214* S_10477, TY10202* Cell_10478);
static N_INLINE(TY10202*, Usrtocell_10622)(void* Usr_10624);
static N_INLINE(void, Decref_11260)(TY10202* C_11262);
static N_INLINE(void, Rtladdzct_11256)(TY10202* C_11258);
N_NOINLINE(void, Addzct_10611)(TY10218* S_10614, TY10202* C_10615);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11422, void* Src_11423);
N_NIMCALL(TY37015*, Newstrentry_37130)(NimStringDesc* Data_37132);
N_NIMCALL(void*, newObj)(TNimType* Typ_11907, NI Size_11908);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11416, void* Src_11417);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_16908);
N_NIMCALL(void, Append_37035)(TY37019* List_37038, TY37013* Entry_37039);
N_NIMCALL(NIM_BOOL, Contains_37159)(TY37019* List_37161, NimStringDesc* Data_37162);
N_NIMCALL(void, Appendstr_37061)(TY37019* List_37064, NimStringDesc* Data_37065);
extern TY10590 Gch_10608;
extern TNimType* NTI37017; /* PStrEntry */
extern TNimType* NTI37015; /* TStrEntry */
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
N_NIMCALL(NIM_BOOL, Contains_37159)(TY37019* List_37161, NimStringDesc* Data_37162) {
NIM_BOOL Result_37163;
TY37013* It_37164;
Result_37163 = 0;
It_37164 = 0;
It_37164 = (*List_37161).Head;
while (1) {
if (!!((It_37164 == NIM_NIL))) goto LA1;
if (!eqStrings((*((TY37015*) (It_37164))).Data, Data_37162)) goto LA3;
Result_37163 = NIM_TRUE;
goto BeforeRet;
LA3: ;
It_37164 = (*It_37164).Next;
} LA1: ;
BeforeRet: ;
return Result_37163;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_10626)(TY10202* C_10628) {
NIM_BOOL Result_10629;
Result_10629 = 0;
Result_10629 = !((((*(*C_10628).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_10629;
}
static N_INLINE(void, Rtladdcycleroot_11252)(TY10202* C_11254) {
Incl_10474(&Gch_10608.Cycleroots, C_11254);
}
static N_INLINE(void, Incref_11401)(TY10202* C_11403) {
NIM_BOOL LOC2;
(*C_11403).Refcount = (NI64)((NU64)((*C_11403).Refcount) + (NU64)(8));
LOC2 = Canbecycleroot_10626(C_11403);
if (!LOC2) goto LA3;
Rtladdcycleroot_11252(C_11403);
LA3: ;
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
static N_INLINE(void, Decref_11260)(TY10202* C_11262) {
NIM_BOOL LOC4;
(*C_11262).Refcount = (NI64)((NU64)((*C_11262).Refcount) - (NU64)(8));
if (!((NU64)((*C_11262).Refcount) < (NU64)(8))) goto LA2;
Rtladdzct_11256(C_11262);
goto LA1;
LA2: ;
LOC4 = Canbecycleroot_10626(C_11262);
if (!LOC4) goto LA5;
Rtladdcycleroot_11252(C_11262);
goto LA1;
LA5: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_11412, void* Src_11413) {
TY10202* LOC4;
TY10202* LOC8;
if (!!((Src_11413 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_10622(Src_11413);
Incref_11401(LOC4);
LA2: ;
if (!!(((*Dest_11412) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_10622((*Dest_11412));
Decref_11260(LOC8);
LA6: ;
(*Dest_11412) = Src_11413;
}
N_NIMCALL(void, Prepend_37040)(TY37019* List_37043, TY37013* Entry_37044) {
(*List_37043).Counter += 1;
asgnRef((void**) &(*Entry_37044).Prev, NIM_NIL);
asgnRef((void**) &(*Entry_37044).Next, (*List_37043).Head);
if (!!(((*List_37043).Head == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_37043).Head).Prev, Entry_37044);
LA2: ;
unsureAsgnRef((void**) &(*List_37043).Head, Entry_37044);
if (!((*List_37043).Tail == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_37043).Tail, Entry_37044);
LA5: ;
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
N_NIMCALL(TY37015*, Newstrentry_37130)(NimStringDesc* Data_37132) {
TY37015* Result_37133;
Result_37133 = 0;
Result_37133 = (TY37015*) newObj(NTI37017, sizeof(TY37015));
(*Result_37133).Sup.Sup.m_type = NTI37015;
asgnRefNoCycle((void**) &(*Result_37133).Data, copyString(Data_37132));
return Result_37133;
}
N_NIMCALL(void, Prependstr_37071)(TY37019* List_37074, NimStringDesc* Data_37075) {
TY37015* LOC1;
LOC1 = Newstrentry_37130(Data_37075);
Prepend_37040(List_37074, &LOC1->Sup);
}
N_NIMCALL(void, Append_37035)(TY37019* List_37038, TY37013* Entry_37039) {
(*List_37038).Counter += 1;
asgnRef((void**) &(*Entry_37039).Next, NIM_NIL);
asgnRef((void**) &(*Entry_37039).Prev, (*List_37038).Tail);
if (!!(((*List_37038).Tail == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_37038).Tail).Next, Entry_37039);
LA2: ;
unsureAsgnRef((void**) &(*List_37038).Tail, Entry_37039);
if (!((*List_37038).Head == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_37038).Head, Entry_37039);
LA5: ;
}
N_NIMCALL(void, Appendstr_37061)(TY37019* List_37064, NimStringDesc* Data_37065) {
TY37015* LOC1;
LOC1 = Newstrentry_37130(Data_37065);
Append_37035(List_37064, &LOC1->Sup);
}
N_NIMCALL(void, Initlinkedlist_37031)(TY37019* List_37034) {
(*List_37034).Counter = 0;
unsureAsgnRef((void**) &(*List_37034).Head, NIM_NIL);
unsureAsgnRef((void**) &(*List_37034).Tail, NIM_NIL);
}
N_NIMCALL(void, Remove_37045)(TY37019* List_37048, TY37013* Entry_37049) {
(*List_37048).Counter -= 1;
if (!(Entry_37049 == (*List_37048).Tail)) goto LA2;
unsureAsgnRef((void**) &(*List_37048).Tail, (*Entry_37049).Prev);
LA2: ;
if (!(Entry_37049 == (*List_37048).Head)) goto LA5;
unsureAsgnRef((void**) &(*List_37048).Head, (*Entry_37049).Next);
LA5: ;
if (!!(((*Entry_37049).Next == NIM_NIL))) goto LA8;
asgnRef((void**) &(*(*Entry_37049).Next).Prev, (*Entry_37049).Prev);
LA8: ;
if (!!(((*Entry_37049).Prev == NIM_NIL))) goto LA11;
asgnRef((void**) &(*(*Entry_37049).Prev).Next, (*Entry_37049).Next);
LA11: ;
}
N_NIMCALL(NIM_BOOL, Includestr_37066)(TY37019* List_37069, NimStringDesc* Data_37070) {
NIM_BOOL Result_37182;
NIM_BOOL LOC2;
Result_37182 = 0;
LOC2 = Contains_37159(&(*List_37069), Data_37070);
if (!LOC2) goto LA3;
Result_37182 = NIM_TRUE;
goto BeforeRet;
LA3: ;
Appendstr_37061(List_37069, Data_37070);
BeforeRet: ;
return Result_37182;
}
N_NOINLINE(void, listsInit)(void) {
}

