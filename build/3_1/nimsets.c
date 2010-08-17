/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY53523 TY53523;
typedef struct TY53549 TY53549;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY45532 TY45532;
typedef struct TY53545 TY53545;
typedef struct TY52011 TY52011;
typedef struct TY53517 TY53517;
typedef struct TY99008 TY99008;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53547 TY53547;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY53527 TY53527;
typedef struct TY53525 TY53525;
typedef struct TY53541 TY53541;
typedef struct TY41013 TY41013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY50008 {
  TNimObject Sup;
TY50008* Left;
TY50008* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
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
struct TY53517 {
  TGenericSeq Sup;
  TY53523* data[SEQ_DECL_SIZE];
};
struct TY99008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct TY53547 {
  TGenericSeq Sup;
  TY53549* data[SEQ_DECL_SIZE];
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Internalerror_45567)(TY45532 Info_45569, NimStringDesc* Errmsg_45570);
N_NIMCALL(NI, Sonslen_53801)(TY53523* N_53803);
N_NIMCALL(NIM_BOOL, Levalue_53868)(TY53523* A_53870, TY53523* B_53871);
N_NIMCALL(NIM_BOOL, Samevalue_53864)(TY53523* A_53866, TY53523* B_53867);
N_NIMCALL(TY53523*, Nodesetop_100706)(TY53523* A_100708, TY53523* B_100709, NU8 Op_100710);
N_NIMCALL(void, Tobitset_100001)(TY53523* S_100003, TY99008** B_100005);
N_NIMCALL(NI64, Firstord_93001)(TY53549* T_93003);
N_NIMCALL(void, Bitsetinit_99010)(TY99008** B_99013, NI Length_99014);
N_NIMCALL(NI64, Getsize_93113)(TY53549* Typ_93115);
N_NIMCALL(NI64, Getordvalue_93107)(TY53523* N_93109);
N_NIMCALL(void, Bitsetincl_99035)(TY99008** X_99038, NI64 Elem_99039);
N_NIMCALL(void, Bitsetunion_99015)(TY99008** X_99018, TY99008* Y_99019);
N_NIMCALL(void, Bitsetdiff_99020)(TY99008** X_99023, TY99008* Y_99024);
N_NIMCALL(void, Bitsetsymdiff_99025)(TY99008** X_99028, TY99008* Y_99029);
N_NIMCALL(void, Bitsetintersect_99030)(TY99008** X_99033, TY99008* Y_99034);
N_NIMCALL(TY53523*, Totreeset_100644)(TY99008* S_100646, TY53549* Settype_100647, TY45532 Info_100648);
N_NIMCALL(TY53523*, Newnodei_53735)(NU8 Kind_53737, TY45532 Info_53738);
static N_INLINE(void, asgnRef)(void** Dest_11612, void* Src_11613);
static N_INLINE(void, Incref_11601)(TY10402* C_11603);
static N_INLINE(NIM_BOOL, Canbecycleroot_10826)(TY10402* C_10828);
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Decref_11460)(TY10402* C_11462);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NIM_BOOL, Bitsetin_99045)(TY99008* X_99047, NI64 E_99048);
N_NIMCALL(void, Addson_53821)(TY53523* Father_53823, TY53523* Son_53824);
N_NIMCALL(TY53523*, Newinttypenode_53715)(NU8 Kind_53717, NI64 Intval_53718, TY53549* Typ_53719);
N_NIMCALL(NIM_BOOL, Bitsetcontains_99053)(TY99008* X_99055, TY99008* Y_99056);
N_NIMCALL(NIM_BOOL, Bitsetequals_99049)(TY99008* X_99051, TY99008* Y_99052);
STRING_LITERAL(TMP193948, "inSet", 5);
extern TY10790 Gch_10808;
N_NIMCALL(NIM_BOOL, Inset_100010)(TY53523* S_100012, TY53523* Elem_100013) {
NIM_BOOL Result_100057;
NI I_100089;
NI HEX3Atmp_100172;
NI LOC4;
NI Res_100174;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Result_100057 = 0;
if (!!(((*S_100012).Kind == ((NU8) 31)))) goto LA2;
Internalerror_45567((*S_100012).Info, ((NimStringDesc*) &TMP193948));
LA2: ;
I_100089 = 0;
HEX3Atmp_100172 = 0;
LOC4 = Sonslen_53801(S_100012);
HEX3Atmp_100172 = (NI32)(LOC4 - 1);
Res_100174 = 0;
Res_100174 = 0;
while (1) {
if (!(Res_100174 <= HEX3Atmp_100172)) goto LA5;
I_100089 = Res_100174;
if (!((*(*S_100012).KindU.S6.Sons->data[I_100089]).Kind == ((NU8) 35))) goto LA7;
LOC10 = Levalue_53868((*(*S_100012).KindU.S6.Sons->data[I_100089]).KindU.S6.Sons->data[0], Elem_100013);
if (!(LOC10)) goto LA11;
LOC10 = Levalue_53868(Elem_100013, (*(*S_100012).KindU.S6.Sons->data[I_100089]).KindU.S6.Sons->data[1]);
LA11: ;
if (!LOC10) goto LA12;
Result_100057 = NIM_TRUE;
goto BeforeRet;
LA12: ;
goto LA6;
LA7: ;
LOC15 = Samevalue_53864((*S_100012).KindU.S6.Sons->data[I_100089], Elem_100013);
if (!LOC15) goto LA16;
Result_100057 = NIM_TRUE;
goto BeforeRet;
LA16: ;
LA6: ;
Res_100174 += 1;
} LA5: ;
Result_100057 = NIM_FALSE;
BeforeRet: ;
return Result_100057;
}
N_NIMCALL(void, Tobitset_100001)(TY53523* S_100003, TY99008** B_100005) {
NI64 First_100528;
NI64 J_100529;
NI64 LOC1;
NI I_100537;
NI HEX3Atmp_100635;
NI LOC2;
NI Res_100637;
NI64 LOC8;
NI64 LOC9;
First_100528 = 0;
J_100529 = 0;
First_100528 = Firstord_93001((*(*S_100003).Typ).Sons->data[0]);
LOC1 = Getsize_93113((*S_100003).Typ);
Bitsetinit_99010(B_100005, ((NI) (LOC1)));
I_100537 = 0;
HEX3Atmp_100635 = 0;
LOC2 = Sonslen_53801(S_100003);
HEX3Atmp_100635 = (NI32)(LOC2 - 1);
Res_100637 = 0;
Res_100637 = 0;
while (1) {
if (!(Res_100637 <= HEX3Atmp_100635)) goto LA3;
I_100537 = Res_100637;
if (!((*(*S_100003).KindU.S6.Sons->data[I_100537]).Kind == ((NU8) 35))) goto LA5;
J_100529 = Getordvalue_93107((*(*S_100003).KindU.S6.Sons->data[I_100537]).KindU.S6.Sons->data[0]);
while (1) {
LOC8 = Getordvalue_93107((*(*S_100003).KindU.S6.Sons->data[I_100537]).KindU.S6.Sons->data[1]);
if (!(J_100529 <= LOC8)) goto LA7;
Bitsetincl_99035(B_100005, (NI64)(J_100529 - First_100528));
J_100529 += 1;
} LA7: ;
goto LA4;
LA5: ;
LOC9 = Getordvalue_93107((*S_100003).KindU.S6.Sons->data[I_100537]);
Bitsetincl_99035(B_100005, (NI64)(LOC9 - First_100528));
LA4: ;
Res_100637 += 1;
} LA3: ;
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
(*C_11603).Refcount = (NI32)((NU32)((*C_11603).Refcount) + (NU32)(8));
LOC2 = Canbecycleroot_10826(C_11603);
if (!LOC2) goto LA3;
Rtladdcycleroot_11452(C_11603);
LA3: ;
}
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824) {
TY10402* Result_10825;
Result_10825 = 0;
Result_10825 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_10824))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
return Result_10825;
}
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458) {
Addzct_10811(&Gch_10808.Zct, C_11458);
}
static N_INLINE(void, Decref_11460)(TY10402* C_11462) {
NIM_BOOL LOC4;
(*C_11462).Refcount = (NI32)((NU32)((*C_11462).Refcount) - (NU32)(8));
if (!((NU32)((*C_11462).Refcount) < (NU32)(8))) goto LA2;
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
N_NIMCALL(TY53523*, Totreeset_100644)(TY99008* S_100646, TY53549* Settype_100647, TY45532 Info_100648) {
TY53523* Result_100649;
NI64 A_100650;
NI64 B_100651;
NI64 E_100652;
NI64 First_100653;
TY53549* Elemtype_100654;
TY53523* N_100655;
NIM_BOOL LOC3;
NIM_BOOL LOC8;
NIM_BOOL LOC10;
TY53523* LOC16;
TY53523* LOC17;
TY53523* LOC18;
Result_100649 = 0;
A_100650 = 0;
B_100651 = 0;
E_100652 = 0;
First_100653 = 0;
Elemtype_100654 = 0;
N_100655 = 0;
Elemtype_100654 = (*Settype_100647).Sons->data[0];
First_100653 = Firstord_93001(Elemtype_100654);
Result_100649 = Newnodei_53735(((NU8) 31), Info_100648);
asgnRef((void**) &(*Result_100649).Typ, Settype_100647);
(*Result_100649).Info = Info_100648;
E_100652 = 0;
while (1) {
if (!(E_100652 < ((NI64) ((NI32)((S_100646->Sup.len-1) * 8))))) goto LA1;
LOC3 = Bitsetin_99045(S_100646, E_100652);
if (!LOC3) goto LA4;
A_100650 = E_100652;
B_100651 = E_100652;
while (1) {
B_100651 += 1;
LOC8 = (((NI64) ((NI32)((S_100646->Sup.len-1) * 8))) < B_100651);
if (LOC8) goto LA9;
LOC10 = Bitsetin_99045(S_100646, B_100651);
LOC8 = !(LOC10);
LA9: ;
if (!LOC8) goto LA11;
goto LA6;
LA11: ;
} LA6: ;
B_100651 -= 1;
if (!(A_100650 == B_100651)) goto LA14;
LOC16 = Newinttypenode_53715(((NU8) 6), (NI64)(A_100650 + First_100653), Elemtype_100654);
Addson_53821(Result_100649, LOC16);
goto LA13;
LA14: ;
N_100655 = Newnodei_53735(((NU8) 35), Info_100648);
asgnRef((void**) &(*N_100655).Typ, Elemtype_100654);
LOC17 = Newinttypenode_53715(((NU8) 6), (NI64)(A_100650 + First_100653), Elemtype_100654);
Addson_53821(N_100655, LOC17);
LOC18 = Newinttypenode_53715(((NU8) 6), (NI64)(B_100651 + First_100653), Elemtype_100654);
Addson_53821(N_100655, LOC18);
Addson_53821(Result_100649, N_100655);
LA13: ;
E_100652 = B_100651;
LA4: ;
E_100652 += 1;
} LA1: ;
return Result_100649;
}
N_NIMCALL(TY53523*, Nodesetop_100706)(TY53523* A_100708, TY53523* B_100709, NU8 Op_100710) {
TY53523* Result_100711;
TY99008* X_100712;
TY99008* Y_100713;
Result_100711 = 0;
X_100712 = 0;
Y_100713 = 0;
Tobitset_100001(A_100708, &X_100712);
Tobitset_100001(B_100709, &Y_100713);
switch (Op_100710) {
case ((NU8) 0):
Bitsetunion_99015(&X_100712, Y_100713);
break;
case ((NU8) 1):
Bitsetdiff_99020(&X_100712, Y_100713);
break;
case ((NU8) 2):
Bitsetsymdiff_99025(&X_100712, Y_100713);
break;
case ((NU8) 3):
Bitsetintersect_99030(&X_100712, Y_100713);
break;
}
Result_100711 = Totreeset_100644(X_100712, (*A_100708).Typ, (*A_100708).Info);
return Result_100711;
}
N_NIMCALL(TY53523*, Diffsets_100030)(TY53523* A_100032, TY53523* B_100033) {
TY53523* Result_100729;
Result_100729 = 0;
Result_100729 = Nodesetop_100706(A_100032, B_100033, ((NU8) 1));
return Result_100729;
}
N_NIMCALL(NI64, Cardset_100050)(TY53523* S_100052) {
NI64 Result_100761;
NI I_100769;
NI HEX3Atmp_100852;
NI LOC1;
NI Res_100854;
NI64 LOC6;
NI64 LOC7;
Result_100761 = 0;
Result_100761 = 0;
I_100769 = 0;
HEX3Atmp_100852 = 0;
LOC1 = Sonslen_53801(S_100052);
HEX3Atmp_100852 = (NI32)(LOC1 - 1);
Res_100854 = 0;
Res_100854 = 0;
while (1) {
if (!(Res_100854 <= HEX3Atmp_100852)) goto LA2;
I_100769 = Res_100854;
if (!((*(*S_100052).KindU.S6.Sons->data[I_100769]).Kind == ((NU8) 35))) goto LA4;
LOC6 = Getordvalue_93107((*(*S_100052).KindU.S6.Sons->data[I_100769]).KindU.S6.Sons->data[1]);
LOC7 = Getordvalue_93107((*(*S_100052).KindU.S6.Sons->data[I_100769]).KindU.S6.Sons->data[0]);
Result_100761 = (NI64)((NI64)((NI64)(Result_100761 + LOC6) - LOC7) + 1);
goto LA3;
LA4: ;
Result_100761 += 1;
LA3: ;
Res_100854 += 1;
} LA2: ;
return Result_100761;
}
N_NIMCALL(NIM_BOOL, Containssets_100042)(TY53523* A_100044, TY53523* B_100045) {
NIM_BOOL Result_100744;
TY99008* X_100745;
TY99008* Y_100746;
Result_100744 = 0;
X_100745 = 0;
Y_100746 = 0;
Tobitset_100001(A_100044, &X_100745);
Tobitset_100001(B_100045, &Y_100746);
Result_100744 = Bitsetcontains_99053(X_100745, Y_100746);
return Result_100744;
}
N_NIMCALL(NIM_BOOL, Equalsets_100046)(TY53523* A_100048, TY53523* B_100049) {
NIM_BOOL Result_100753;
TY99008* X_100754;
TY99008* Y_100755;
Result_100753 = 0;
X_100754 = 0;
Y_100755 = 0;
Tobitset_100001(A_100048, &X_100754);
Tobitset_100001(B_100049, &Y_100755);
Result_100753 = Bitsetequals_99049(X_100754, Y_100755);
return Result_100753;
}
N_NIMCALL(TY53523*, Intersectsets_100034)(TY53523* A_100036, TY53523* B_100037) {
TY53523* Result_100734;
Result_100734 = 0;
Result_100734 = Nodesetop_100706(A_100036, B_100037, ((NU8) 3));
return Result_100734;
}
N_NIMCALL(TY53523*, Unionsets_100026)(TY53523* A_100028, TY53523* B_100029) {
TY53523* Result_100724;
Result_100724 = 0;
Result_100724 = Nodesetop_100706(A_100028, B_100029, ((NU8) 0));
return Result_100724;
}
N_NIMCALL(TY53523*, Symdiffsets_100038)(TY53523* A_100040, TY53523* B_100041) {
TY53523* Result_100739;
Result_100739 = 0;
Result_100739 = Nodesetop_100706(A_100040, B_100041, ((NU8) 2));
return Result_100739;
}
N_NIMCALL(NIM_BOOL, Overlap_100006)(TY53523* A_100008, TY53523* B_100009) {
NIM_BOOL Result_100181;
NIM_BOOL LOC7;
NIM_BOOL LOC8;
NIM_BOOL LOC11;
NIM_BOOL LOC13;
NIM_BOOL LOC18;
Result_100181 = 0;
if (!((*A_100008).Kind == ((NU8) 35))) goto LA2;
if (!((*B_100009).Kind == ((NU8) 35))) goto LA5;
LOC8 = Levalue_53868((*A_100008).KindU.S6.Sons->data[0], (*B_100009).KindU.S6.Sons->data[1]);
if (!(LOC8)) goto LA9;
LOC8 = Levalue_53868((*B_100009).KindU.S6.Sons->data[1], (*A_100008).KindU.S6.Sons->data[1]);
LA9: ;
LOC7 = LOC8;
if (LOC7) goto LA10;
LOC11 = Levalue_53868((*A_100008).KindU.S6.Sons->data[0], (*B_100009).KindU.S6.Sons->data[0]);
if (!(LOC11)) goto LA12;
LOC11 = Levalue_53868((*B_100009).KindU.S6.Sons->data[0], (*A_100008).KindU.S6.Sons->data[1]);
LA12: ;
LOC7 = LOC11;
LA10: ;
Result_100181 = LOC7;
goto LA4;
LA5: ;
LOC13 = Levalue_53868((*A_100008).KindU.S6.Sons->data[0], B_100009);
if (!(LOC13)) goto LA14;
LOC13 = Levalue_53868(B_100009, (*A_100008).KindU.S6.Sons->data[1]);
LA14: ;
Result_100181 = LOC13;
LA4: ;
goto LA1;
LA2: ;
if (!((*B_100009).Kind == ((NU8) 35))) goto LA16;
LOC18 = Levalue_53868((*B_100009).KindU.S6.Sons->data[0], A_100008);
if (!(LOC18)) goto LA19;
LOC18 = Levalue_53868(A_100008, (*B_100009).KindU.S6.Sons->data[1]);
LA19: ;
Result_100181 = LOC18;
goto LA15;
LA16: ;
Result_100181 = Samevalue_53864(A_100008, B_100009);
LA15: ;
LA1: ;
return Result_100181;
}
N_NIMCALL(NIM_BOOL, Emptyrange_100019)(TY53523* A_100021, TY53523* B_100022) {
NIM_BOOL Result_100909;
NIM_BOOL LOC1;
Result_100909 = 0;
LOC1 = Levalue_53868(A_100021, B_100022);
Result_100909 = !(LOC1);
return Result_100909;
}
N_NOINLINE(void, nimsetsInit)(void) {
}

