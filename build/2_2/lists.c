/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY43019 TY43019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY43013 TY43013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY43015 TY43015;
typedef struct TNimObject TNimObject;
typedef struct TY11002 TY11002;
typedef struct TY11014 TY11014;
typedef struct TY11396 TY11396;
typedef struct TY11018 TY11018;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
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
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY43015 {
  TY43013 Sup;
NimStringDesc* Data;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY9014[8];
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18849, NimStringDesc* B_18850);
N_NIMCALL(void, Prepend_43040)(TY43019* List_43043, TY43013* Entry_43044);
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
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13426, void* Src_13427);
N_NIMCALL(TY43015*, Newstrentry_43130)(NimStringDesc* Data_43132);
N_NIMCALL(void*, newObj)(TNimType* Typ_14110, NI Size_14111);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18912);
N_NIMCALL(void, Append_43035)(TY43019* List_43038, TY43013* Entry_43039);
N_NIMCALL(NIM_BOOL, Contains_43159)(TY43019* List_43161, NimStringDesc* Data_43162);
N_NIMCALL(void, Appendstr_43061)(TY43019* List_43064, NimStringDesc* Data_43065);
extern TY11396 Gch_11414;
extern TNimType* NTI43017; /* PStrEntry */
extern TNimType* NTI43015; /* TStrEntry */
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18849, NimStringDesc* B_18850) {
NIM_BOOL Result_18851;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
Result_18851 = 0;
if (!(A_18849 == B_18850)) goto LA2;
Result_18851 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18849 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18850 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18851 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18849).Sup.len == (*B_18850).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18849).data)), ((NCSTRING) ((*B_18850).data)), ((int) ((NI64)((*A_18849).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18851 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18851;
}
N_NIMCALL(NIM_BOOL, Contains_43159)(TY43019* List_43161, NimStringDesc* Data_43162) {
NIM_BOOL Result_43163;
TY43013* It_43164;
Result_43163 = 0;
It_43164 = 0;
It_43164 = (*List_43161).Head;
while (1) {
if (!!((It_43164 == NIM_NIL))) goto LA1;
if (!eqStrings((*((TY43015*) (It_43164))).Data, Data_43162)) goto LA3;
Result_43163 = NIM_TRUE;
goto BeforeRet;
LA3: ;
It_43164 = (*It_43164).Next;
} LA1: ;
BeforeRet: ;
return Result_43163;
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
N_NIMCALL(void, Prepend_43040)(TY43019* List_43043, TY43013* Entry_43044) {
(*List_43043).Counter += 1;
asgnRef((void**) &(*Entry_43044).Prev, NIM_NIL);
asgnRef((void**) &(*Entry_43044).Next, (*List_43043).Head);
if (!!(((*List_43043).Head == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_43043).Head).Prev, Entry_43044);
LA2: ;
unsureAsgnRef((void**) &(*List_43043).Head, Entry_43044);
if (!((*List_43043).Tail == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_43043).Tail, Entry_43044);
LA5: ;
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
N_NIMCALL(TY43015*, Newstrentry_43130)(NimStringDesc* Data_43132) {
TY43015* Result_43133;
Result_43133 = 0;
Result_43133 = (TY43015*) newObj(NTI43017, sizeof(TY43015));
(*Result_43133).Sup.Sup.m_type = NTI43015;
asgnRefNoCycle((void**) &(*Result_43133).Data, copyString(Data_43132));
return Result_43133;
}
N_NIMCALL(void, Prependstr_43071)(TY43019* List_43074, NimStringDesc* Data_43075) {
TY43015* LOC1;
LOC1 = 0;
LOC1 = Newstrentry_43130(Data_43075);
Prepend_43040(List_43074, &LOC1->Sup);
}
N_NIMCALL(void, Append_43035)(TY43019* List_43038, TY43013* Entry_43039) {
(*List_43038).Counter += 1;
asgnRef((void**) &(*Entry_43039).Next, NIM_NIL);
asgnRef((void**) &(*Entry_43039).Prev, (*List_43038).Tail);
if (!!(((*List_43038).Tail == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_43038).Tail).Next, Entry_43039);
LA2: ;
unsureAsgnRef((void**) &(*List_43038).Tail, Entry_43039);
if (!((*List_43038).Head == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_43038).Head, Entry_43039);
LA5: ;
}
N_NIMCALL(void, Appendstr_43061)(TY43019* List_43064, NimStringDesc* Data_43065) {
TY43015* LOC1;
LOC1 = 0;
LOC1 = Newstrentry_43130(Data_43065);
Append_43035(List_43064, &LOC1->Sup);
}
N_NIMCALL(void, Initlinkedlist_43031)(TY43019* List_43034) {
(*List_43034).Counter = 0;
unsureAsgnRef((void**) &(*List_43034).Head, NIM_NIL);
unsureAsgnRef((void**) &(*List_43034).Tail, NIM_NIL);
}
N_NIMCALL(void, Remove_43045)(TY43019* List_43048, TY43013* Entry_43049) {
(*List_43048).Counter -= 1;
if (!(Entry_43049 == (*List_43048).Tail)) goto LA2;
unsureAsgnRef((void**) &(*List_43048).Tail, (*Entry_43049).Prev);
LA2: ;
if (!(Entry_43049 == (*List_43048).Head)) goto LA5;
unsureAsgnRef((void**) &(*List_43048).Head, (*Entry_43049).Next);
LA5: ;
if (!!(((*Entry_43049).Next == NIM_NIL))) goto LA8;
asgnRef((void**) &(*(*Entry_43049).Next).Prev, (*Entry_43049).Prev);
LA8: ;
if (!!(((*Entry_43049).Prev == NIM_NIL))) goto LA11;
asgnRef((void**) &(*(*Entry_43049).Prev).Next, (*Entry_43049).Next);
LA11: ;
}
N_NIMCALL(NIM_BOOL, Includestr_43066)(TY43019* List_43069, NimStringDesc* Data_43070) {
NIM_BOOL Result_43181;
NIM_BOOL LOC2;
Result_43181 = 0;
LOC2 = Contains_43159(&(*List_43069), Data_43070);
if (!LOC2) goto LA3;
Result_43181 = NIM_TRUE;
goto BeforeRet;
LA3: ;
Appendstr_43061(List_43069, Data_43070);
BeforeRet: ;
return Result_43181;
}
N_NOINLINE(void, listsInit)(void) {
}

