/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY53545 TY53545;
typedef struct TY53549 TY53549;
typedef struct TY53527 TY53527;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53525 TY53525;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY52011 TY52011;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TY45532 TY45532;
typedef struct TY53523 TY53523;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY53541 TY53541;
typedef struct TY53547 TY53547;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY57107 TY57107;
typedef struct TY53517 TY53517;
typedef struct TY41013 TY41013;
typedef struct TY57109 TY57109;
typedef TY53549* TY98027[40];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY53527 {
TNimType* m_type;
NI Counter;
TY53525* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY52005 {
  TNimObject Sup;
NI Id;
};
struct TY45532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY53537 {
NU8 K;
NU8 S;
NU8 Flags;
TY53549* T;
TY50008* R;
NI A;
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
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
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
struct TY50008 {
  TNimObject Sup;
TY50008* Left;
TY50008* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY57107 {
NI Tos;
TY57109* Stack;
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
};
struct TY53547 {
  TGenericSeq Sup;
  TY53549* data[SEQ_DECL_SIZE];
};
struct TY53517 {
  TGenericSeq Sup;
  TY53523* data[SEQ_DECL_SIZE];
};
struct TY57109 {
  TGenericSeq Sup;
  TY53527 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initstrtable_53744)(TY53527* X_53747);
N_NIMCALL(TY53549*, Systypefromname_98073)(NimStringDesc* Name_98075);
N_NIMCALL(TY53545*, Getsyssym_98024)(NimStringDesc* Name_98026);
N_NIMCALL(TY53545*, Strtableget_57069)(TY53527* T_57071, TY52011* Name_57072);
N_NIMCALL(TY52011*, Getident_52016)(NimStringDesc* Identifier_52018);
N_NIMCALL(void, Rawmessage_45553)(NU8 Msg_45555, NimStringDesc* Arg_45556);
N_NIMCALL(void, Loadstub_89070)(TY53545* S_89072);
N_NIMCALL(TY53549*, Newsystype_98044)(NU8 Kind_98046, NI Size_98047);
N_NIMCALL(TY53549*, Newtype_53704)(NU8 Kind_53706, TY53545* Owner_53707);
N_NIMCALL(void, Internalerror_45571)(NimStringDesc* Errmsg_45573);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_18179, TNimType* Typ_18180);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
static N_INLINE(void, asgnRef)(void** Dest_11612, void* Src_11613);
static N_INLINE(void, Incref_11601)(TY10402* C_11603);
static N_INLINE(NIM_BOOL, Canbecycleroot_10826)(TY10402* C_10828);
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Decref_11460)(TY10402* C_11462);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(void, Strtableadd_57064)(TY53527* T_57067, TY53545* N_57068);
N_NIMCALL(TY52011*, Getident_52019)(NimStringDesc* Identifier_52021, NI H_52022);
N_NIMCALL(NI, Getnormalizedhash_42037)(NimStringDesc* S_42039);
STRING_LITERAL(TMP193979, "int", 3);
STRING_LITERAL(TMP193980, "int8", 4);
STRING_LITERAL(TMP193981, "int16", 5);
STRING_LITERAL(TMP193982, "int32", 5);
STRING_LITERAL(TMP193983, "int64", 5);
STRING_LITERAL(TMP193984, "float", 5);
STRING_LITERAL(TMP193985, "float32", 7);
STRING_LITERAL(TMP193986, "float64", 7);
STRING_LITERAL(TMP193987, "bool", 4);
STRING_LITERAL(TMP193988, "char", 4);
STRING_LITERAL(TMP193989, "string", 6);
STRING_LITERAL(TMP193990, "cstring", 7);
STRING_LITERAL(TMP193991, "pointer", 7);
STRING_LITERAL(TMP193992, "request for typekind: ", 22);
STRING_LITERAL(TMP193993, "wanted: ", 8);
STRING_LITERAL(TMP193994, " got: ", 6);
STRING_LITERAL(TMP193995, "type not found: ", 16);
TY53545* Systemmodule_98004;
TY98027 Gsystypes_98028;
TY53527 Compilerprocs_98029;
extern TNimType* NTI53527; /* TStrTable */
extern NI Ptrsize_49572;
extern TNimType* NTI53162; /* TTypeKind */
extern TY10790 Gch_10808;
extern TY53527 Rodcompilerprocs_89059;
N_NIMCALL(TY53545*, Getsyssym_98024)(NimStringDesc* Name_98026) {
TY53545* Result_98052;
TY52011* LOC1;
Result_98052 = 0;
LOC1 = Getident_52016(Name_98026);
Result_98052 = Strtableget_57069(&(*Systemmodule_98004).Tab, LOC1);
if (!(Result_98052 == NIM_NIL)) goto LA3;
Rawmessage_45553(((NU8) 61), Name_98026);
LA3: ;
if (!((*Result_98052).Kind == ((NU8) 20))) goto LA6;
Loadstub_89070(Result_98052);
LA6: ;
return Result_98052;
}
N_NIMCALL(TY53549*, Systypefromname_98073)(NimStringDesc* Name_98075) {
TY53549* Result_98076;
TY53545* LOC1;
Result_98076 = 0;
LOC1 = Getsyssym_98024(Name_98075);
Result_98076 = (*LOC1).Typ;
return Result_98076;
}
N_NIMCALL(TY53549*, Newsystype_98044)(NU8 Kind_98046, NI Size_98047) {
TY53549* Result_98048;
Result_98048 = 0;
Result_98048 = Newtype_53704(Kind_98046, Systemmodule_98004);
(*Result_98048).Size = ((NI64) (Size_98047));
(*Result_98048).Align = Size_98047;
return Result_98048;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI32)((NI32)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
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
N_NIMCALL(TY53549*, Getsystype_98008)(NU8 Kind_98010) {
TY53549* Result_98080;
NimStringDesc* LOC4;
NimStringDesc* LOC8;
NimStringDesc* LOC12;
Result_98080 = 0;
Result_98080 = Gsystypes_98028[(Kind_98010)-0];
if (!(Result_98080 == NIM_NIL)) goto LA2;
switch (Kind_98010) {
case ((NU8) 31):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193979));
break;
case ((NU8) 32):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193980));
break;
case ((NU8) 33):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193981));
break;
case ((NU8) 34):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193982));
break;
case ((NU8) 35):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193983));
break;
case ((NU8) 36):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193984));
break;
case ((NU8) 37):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193985));
break;
case ((NU8) 38):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193986));
break;
case ((NU8) 1):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193987));
break;
case ((NU8) 2):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193988));
break;
case ((NU8) 28):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193989));
break;
case ((NU8) 29):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193990));
break;
case ((NU8) 26):
Result_98080 = Systypefromname_98073(((NimStringDesc*) &TMP193991));
break;
case ((NU8) 5):
Result_98080 = Newsystype_98044(((NU8) 5), Ptrsize_49572);
break;
default:
LOC4 = rawNewString(reprEnum(Kind_98010, NTI53162)->Sup.len + 22);
appendString(LOC4, ((NimStringDesc*) &TMP193992));
appendString(LOC4, reprEnum(Kind_98010, NTI53162));
Internalerror_45571(LOC4);
break;
}
asgnRef((void**) &Gsystypes_98028[(Kind_98010)-0], Result_98080);
LA2: ;
if (!!(((*Result_98080).Kind == Kind_98010))) goto LA6;
LOC8 = rawNewString(reprEnum(Kind_98010, NTI53162)->Sup.len + reprEnum((*Result_98080).Kind, NTI53162)->Sup.len + 14);
appendString(LOC8, ((NimStringDesc*) &TMP193993));
appendString(LOC8, reprEnum(Kind_98010, NTI53162));
appendString(LOC8, ((NimStringDesc*) &TMP193994));
appendString(LOC8, reprEnum((*Result_98080).Kind, NTI53162));
Internalerror_45571(LOC8);
LA6: ;
if (!(Result_98080 == NIM_NIL)) goto LA10;
LOC12 = rawNewString(reprEnum(Kind_98010, NTI53162)->Sup.len + 16);
appendString(LOC12, ((NimStringDesc*) &TMP193995));
appendString(LOC12, reprEnum(Kind_98010, NTI53162));
Internalerror_45571(LOC12);
LA10: ;
return Result_98080;
}
N_NIMCALL(void, Registercompilerproc_98014)(TY53545* S_98016) {
Strtableadd_57064(&Compilerprocs_98029, S_98016);
}
N_NIMCALL(void, Initsystem_98017)(TY57107* Tab_98020) {
}
N_NIMCALL(TY53545*, Getcompilerproc_98011)(NimStringDesc* Name_98013) {
TY53545* Result_98187;
TY52011* Ident_98188;
NI LOC1;
Result_98187 = 0;
Ident_98188 = 0;
LOC1 = Getnormalizedhash_42037(Name_98013);
Ident_98188 = Getident_52019(Name_98013, LOC1);
Result_98187 = Strtableget_57069(&Compilerprocs_98029, Ident_98188);
if (!(Result_98187 == NIM_NIL)) goto LA3;
Result_98187 = Strtableget_57069(&Rodcompilerprocs_89059, Ident_98188);
if (!!((Result_98187 == NIM_NIL))) goto LA6;
Strtableadd_57064(&Compilerprocs_98029, Result_98187);
if (!((*Result_98187).Kind == ((NU8) 20))) goto LA9;
Loadstub_89070(Result_98187);
LA9: ;
LA6: ;
LA3: ;
return Result_98187;
}
N_NOINLINE(void, magicsysInit)(void) {
Compilerprocs_98029.m_type = NTI53527;
Initstrtable_53744(&Compilerprocs_98029);
}

