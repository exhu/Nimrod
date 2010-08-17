/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY41019 TY41019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY41013 TY41013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY41015 TY41015;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY41019 {
TNimType* m_type;
TY41013* Head;
TY41013* Tail;
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
struct TY41013 {
  TNimObject Sup;
TY41013* Prev;
TY41013* Next;
};
struct TY41015 {
  TY41013 Sup;
NimStringDesc* Data;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17047, NimStringDesc* B_17048);
N_NIMCALL(void, Prepend_41040)(TY41019* List_41043, TY41013* Entry_41044);
static N_INLINE(void, asgnRef)(void** Dest_11612, void* Src_11613);
static N_INLINE(void, Incref_11601)(TY10402* C_11603);
static N_INLINE(NIM_BOOL, Canbecycleroot_10826)(TY10402* C_10828);
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Decref_11460)(TY10402* C_11462);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(TY41015*, Newstrentry_41130)(NimStringDesc* Data_41132);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Append_41035)(TY41019* List_41038, TY41013* Entry_41039);
N_NIMCALL(NIM_BOOL, Contains_41159)(TY41019* List_41161, NimStringDesc* Data_41162);
N_NIMCALL(void, Appendstr_41061)(TY41019* List_41064, NimStringDesc* Data_41065);
extern TY10790 Gch_10808;
extern TNimType* NTI41017; /* PStrEntry */
extern TNimType* NTI41015; /* TStrEntry */
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17047, NimStringDesc* B_17048) {
NIM_BOOL Result_17049;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
Result_17049 = 0;
if (!(A_17047 == B_17048)) goto LA2;
Result_17049 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_17047 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_17048 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_17049 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_17047).Sup.len == (*B_17048).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_17047).data)), ((NCSTRING) ((*B_17048).data)), ((int) ((NI64)((*A_17047).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17049 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_17049;
}
N_NIMCALL(NIM_BOOL, Contains_41159)(TY41019* List_41161, NimStringDesc* Data_41162) {
NIM_BOOL Result_41163;
TY41013* It_41164;
Result_41163 = 0;
It_41164 = 0;
It_41164 = (*List_41161).Head;
while (1) {
if (!!((It_41164 == NIM_NIL))) goto LA1;
if (!eqStrings((*((TY41015*) (It_41164))).Data, Data_41162)) goto LA3;
Result_41163 = NIM_TRUE;
goto BeforeRet;
LA3: ;
It_41164 = (*It_41164).Next;
} LA1: ;
BeforeRet: ;
return Result_41163;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_10826)(TY10402* C_10828) {
NIM_BOOL Result_10829;
Result_10829 = 0;
Result_10829 = !((((*(*C_10828).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_10829;
}
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454) {
Incl_10674(&Gch_10808.Cycleroots, C_11454);
}
static N_INLINE(void, Incref_11601)(TY10402* C_11603) {
NIM_BOOL LOC2;
(*C_11603).Refcount = (NI64)((NU64)((*C_11603).Refcount) + (NU64)(8));
LOC2 = Canbecycleroot_10826(C_11603);
if (!LOC2) goto LA3;
Rtladdcycleroot_11452(C_11603);
LA3: ;
}
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824) {
TY10402* Result_10825;
Result_10825 = 0;
Result_10825 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_10824))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
return Result_10825;
}
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458) {
Addzct_10811(&Gch_10808.Zct, C_11458);
}
static N_INLINE(void, Decref_11460)(TY10402* C_11462) {
NIM_BOOL LOC4;
(*C_11462).Refcount = (NI64)((NU64)((*C_11462).Refcount) - (NU64)(8));
if (!((NU64)((*C_11462).Refcount) < (NU64)(8))) goto LA2;
Rtladdzct_11456(C_11462);
goto LA1;
LA2: ;
LOC4 = Canbecycleroot_10826(C_11462);
if (!LOC4) goto LA5;
Rtladdcycleroot_11452(C_11462);
goto LA1;
LA5: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_11612, void* Src_11613) {
TY10402* LOC4;
TY10402* LOC8;
if (!!((Src_11613 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_10822(Src_11613);
Incref_11601(LOC4);
LA2: ;
if (!!(((*Dest_11612) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_10822((*Dest_11612));
Decref_11460(LOC8);
LA6: ;
(*Dest_11612) = Src_11613;
}
N_NIMCALL(void, Prepend_41040)(TY41019* List_41043, TY41013* Entry_41044) {
(*List_41043).Counter += 1;
asgnRef((void**) &(*Entry_41044).Prev, NIM_NIL);
asgnRef((void**) &(*Entry_41044).Next, (*List_41043).Head);
if (!!(((*List_41043).Head == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_41043).Head).Prev, Entry_41044);
LA2: ;
unsureAsgnRef((void**) &(*List_41043).Head, Entry_41044);
if (!((*List_41043).Tail == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_41043).Tail, Entry_41044);
LA5: ;
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
N_NIMCALL(TY41015*, Newstrentry_41130)(NimStringDesc* Data_41132) {
TY41015* Result_41133;
Result_41133 = 0;
Result_41133 = (TY41015*) newObj(NTI41017, sizeof(TY41015));
(*Result_41133).Sup.Sup.m_type = NTI41015;
asgnRefNoCycle((void**) &(*Result_41133).Data, copyString(Data_41132));
return Result_41133;
}
N_NIMCALL(void, Prependstr_41071)(TY41019* List_41074, NimStringDesc* Data_41075) {
TY41015* LOC1;
LOC1 = Newstrentry_41130(Data_41075);
Prepend_41040(List_41074, &LOC1->Sup);
}
N_NIMCALL(void, Append_41035)(TY41019* List_41038, TY41013* Entry_41039) {
(*List_41038).Counter += 1;
asgnRef((void**) &(*Entry_41039).Next, NIM_NIL);
asgnRef((void**) &(*Entry_41039).Prev, (*List_41038).Tail);
if (!!(((*List_41038).Tail == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_41038).Tail).Next, Entry_41039);
LA2: ;
unsureAsgnRef((void**) &(*List_41038).Tail, Entry_41039);
if (!((*List_41038).Head == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_41038).Head, Entry_41039);
LA5: ;
}
N_NIMCALL(void, Appendstr_41061)(TY41019* List_41064, NimStringDesc* Data_41065) {
TY41015* LOC1;
LOC1 = Newstrentry_41130(Data_41065);
Append_41035(List_41064, &LOC1->Sup);
}
N_NIMCALL(void, Initlinkedlist_41031)(TY41019* List_41034) {
(*List_41034).Counter = 0;
unsureAsgnRef((void**) &(*List_41034).Head, NIM_NIL);
unsureAsgnRef((void**) &(*List_41034).Tail, NIM_NIL);
}
N_NIMCALL(void, Remove_41045)(TY41019* List_41048, TY41013* Entry_41049) {
(*List_41048).Counter -= 1;
if (!(Entry_41049 == (*List_41048).Tail)) goto LA2;
unsureAsgnRef((void**) &(*List_41048).Tail, (*Entry_41049).Prev);
LA2: ;
if (!(Entry_41049 == (*List_41048).Head)) goto LA5;
unsureAsgnRef((void**) &(*List_41048).Head, (*Entry_41049).Next);
LA5: ;
if (!!(((*Entry_41049).Next == NIM_NIL))) goto LA8;
asgnRef((void**) &(*(*Entry_41049).Next).Prev, (*Entry_41049).Prev);
LA8: ;
if (!!(((*Entry_41049).Prev == NIM_NIL))) goto LA11;
asgnRef((void**) &(*(*Entry_41049).Prev).Next, (*Entry_41049).Next);
LA11: ;
}
N_NIMCALL(NIM_BOOL, Includestr_41066)(TY41019* List_41069, NimStringDesc* Data_41070) {
NIM_BOOL Result_41182;
NIM_BOOL LOC2;
Result_41182 = 0;
LOC2 = Contains_41159(&(*List_41069), Data_41070);
if (!LOC2) goto LA3;
Result_41182 = NIM_TRUE;
goto BeforeRet;
LA3: ;
Appendstr_41061(List_41069, Data_41070);
BeforeRet: ;
return Result_41182;
}
N_NOINLINE(void, listsInit)(void) {
}

