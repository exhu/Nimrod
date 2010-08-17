/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY53898 TY53898;
typedef struct TY53894 TY53894;
typedef struct TY53896 TY53896;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53561 TY53561;
typedef struct TY53559 TY53559;
typedef struct TY53557 TY53557;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TY53527 TY53527;
typedef struct TY53525 TY53525;
typedef struct TY53545 TY53545;
typedef struct TY53523 TY53523;
typedef struct TY53549 TY53549;
typedef struct TY45532 TY45532;
typedef struct TY52011 TY52011;
typedef struct TY53517 TY53517;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY53547 TY53547;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY53541 TY53541;
typedef struct TY53567 TY53567;
typedef struct TY53565 TY53565;
typedef struct TY53563 TY53563;
typedef struct TY53573 TY53573;
typedef struct TY53571 TY53571;
typedef struct TY53569 TY53569;
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
typedef NimStringDesc* TY53016[10];
struct TY53898 {
NI Counter;
NI Max;
TY53894* Head;
TY53896* Data;
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
struct TY53557 {
TY52005* Key;
TNimObject* Val;
};
struct TY53561 {
NI Counter;
TY53559* Data;
};
struct TY53527 {
TNimType* m_type;
NI Counter;
TY53525* Data;
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
struct TNimObject {
TNimType* m_type;
};
struct TY52005 {
  TNimObject Sup;
NI Id;
};
typedef NI TY8414[16];
struct TY53894 {
TY53894* Next;
NI Key;
TY8414 Bits;
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
struct TY53563 {
TY52005* Key;
TY53523* Val;
};
struct TY53567 {
NI Counter;
TY53565* Data;
};
struct TY53569 {
NI H;
TY53523* Key;
NI Val;
};
struct TY53573 {
NI Counter;
TY53571* Data;
};
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
};
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
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
struct TY53896 {
  TGenericSeq Sup;
  TY53894* data[SEQ_DECL_SIZE];
};
struct TY53559 {
  TGenericSeq Sup;
  TY53557 data[SEQ_DECL_SIZE];
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
};
struct TY53517 {
  TGenericSeq Sup;
  TY53523* data[SEQ_DECL_SIZE];
};
struct TY53547 {
  TGenericSeq Sup;
  TY53549* data[SEQ_DECL_SIZE];
};
struct TY53565 {
  TGenericSeq Sup;
  TY53563 data[SEQ_DECL_SIZE];
};
struct TY53571 {
  TGenericSeq Sup;
  TY53569 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Intsetinit_53922)(TY53898* S_53925);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(TY53523*, Newnode_53708)(NU8 Kind_53710);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_17235, NI Elemsize_17236);
N_NIMCALL(NI, Sonslen_53801)(TY53523* N_53803);
N_NIMCALL(NIM_BOOL, Intsetcontainsorincl_53926)(TY53898* S_53929, NI Key_53930);
N_NIMCALL(TY53894*, Intsetget_56083)(TY53898 T_56085, NI Key_56086);
N_NIMCALL(NI, Nexttry_56062)(NI H_56064, NI Maxhash_56065);
N_NIMCALL(void, Intsetincl_53912)(TY53898* S_53915, NI Key_53916);
N_NIMCALL(TY53894*, Intsetput_56194)(TY53898* T_56197, NI Key_56198);
N_NIMCALL(NIM_BOOL, Mustrehash_56051)(NI Length_56053, NI Counter_56054);
N_NIMCALL(void, Intsetenlarge_56142)(TY53898* T_56145);
N_NIMCALL(void, Intsetrawinsert_56103)(TY53898 T_56105, TY53896** Data_56107, TY53894* Desc_56108);
static N_INLINE(void, asgnRef)(void** Dest_11612, void* Src_11613);
static N_INLINE(void, Incref_11601)(TY10402* C_11603);
static N_INLINE(NIM_BOOL, Canbecycleroot_10826)(TY10402* C_10828);
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(void, Decref_11460)(TY10402* C_11462);
N_NIMCALL(void, Internalerror_45571)(NimStringDesc* Errmsg_45573);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_17803);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(NI, Getid_53691)(void);
N_NIMCALL(void, Registerid_53932)(TY52005* Id_53934);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, genericSeqAssign)(void* Dest_18039, void* Src_18040, TNimType* Mt_18041);
N_NIMCALL(void, Newsons_53813)(TY53523* Father_53815, NI Length_53816);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17403, NI Elemsize_17404, NI Newlen_17405);
N_NIMCALL(TY53523*, Copytree_53856)(TY53523* Src_53858);
N_NIMCALL(NI, Sonslen_53804)(TY53549* N_53806);
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_17011, NimStringDesc* B_17012);
N_NIMCALL(void, Internalerror_45567)(TY45532 Info_45569, NimStringDesc* Errmsg_45570);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17047, NimStringDesc* B_17048);
N_NIMCALL(TY53523*, Newintnode_53711)(NU8 Kind_53713, NI64 Intval_53714);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_17867);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF X_17860);
N_NIMCALL(void, genericAssign)(void* Dest_17965, void* Src_17966, TNimType* Mt_17967);
N_NIMCALL(TY53549*, Newtype_53704)(NU8 Kind_53706, TY53545* Owner_53707);
N_NIMCALL(void, Assigntype_53777)(TY53549* Dest_53779, TY53549* Src_53780);
N_NIMCALL(void, Newsons_53817)(TY53549* Father_53819, NI Length_53820);
N_NIMCALL(TY53545*, Newsym_53699)(NU8 Symkind_53701, TY52011* Name_53702, TY53545* Owner_53703);
N_NIMCALL(void, objectInit)(void* Dest_18062, TNimType* Typ_18063);
N_NIMCALL(TY45532, Unknownlineinfo_45536)(void);
N_NIMCALL(void, Copystrtable_53781)(TY53527* Dest_53784, TY53527* Src_53785);
N_NIMCALL(void, Addson_53821)(TY53523* Father_53823, TY53523* Son_53824);
STRING_LITERAL(TMP53019, "", 0);
STRING_LITERAL(TMP53020, "stdcall", 7);
STRING_LITERAL(TMP53021, "cdecl", 5);
STRING_LITERAL(TMP53022, "safecall", 8);
STRING_LITERAL(TMP53023, "syscall", 7);
STRING_LITERAL(TMP53024, "inline", 6);
STRING_LITERAL(TMP53025, "noinline", 8);
STRING_LITERAL(TMP53026, "fastcall", 8);
STRING_LITERAL(TMP53027, "closure", 7);
STRING_LITERAL(TMP53028, "noconv", 6);
NIM_CONST TY53016 Callingconvtostr_53015 = {((NimStringDesc*) &TMP53019),
((NimStringDesc*) &TMP53020),
((NimStringDesc*) &TMP53021),
((NimStringDesc*) &TMP53022),
((NimStringDesc*) &TMP53023),
((NimStringDesc*) &TMP53024),
((NimStringDesc*) &TMP53025),
((NimStringDesc*) &TMP53026),
((NimStringDesc*) &TMP53027),
((NimStringDesc*) &TMP53028)}
;
NIM_CONST NU32 Overloadablesyms_53669 = 1967104;
NIM_CONST NU64 Generictypes_53671 = IL64(6192449487634432);
NIM_CONST NU64 Structuralequivtypes_53673 = IL64(3459042737507008512);
NIM_CONST NU64 Concretetypes_53675 = IL64(450641162819076096);
NIM_CONST NU64 Constantdatatypes_53677 = IL64(14293651161088);
NIM_CONST NU32 Exportablesymkinds_53679 = IL64(3229552640);
NIM_CONST NU8 Persistentnodeflags_53681 = 30;
STRING_LITERAL(TMP193887, "ID already used: ", 17);
STRING_LITERAL(TMP193949, "leValue", 7);
STRING_LITERAL(TMP193950, "SameValue", 9);
STRING_LITERAL(TMP193966, "getInt", 6);
STRING_LITERAL(TMP193967, "getFloat", 8);
STRING_LITERAL(TMP193968, "getStr", 6);
STRING_LITERAL(TMP193970, "getStrOrChar", 12);
STRING_LITERAL(TMP194037, "valueToString", 13);
NI Gid_53690;
TY53898 Usedids_53935;
extern TNimType* NTI53896; /* TTrunkSeq */
extern TNimType* NTI53559; /* TIdPairSeq */
extern TNimType* NTI53525; /* TSymSeq */
extern TNimType* NTI53513; /* PNode */
extern TNimType* NTI53517; /* TNodeSeq */
extern TY10790 Gch_10808;
extern TNimType* NTI53892; /* PTrunk */
extern TNimType* NTI53547; /* TTypeSeq */
extern TNimType* NTI53519; /* PType */
extern TNimType* NTI53549; /* TType */
extern TNimType* NTI53565; /* TIdNodePairSeq */
extern TNimType* NTI53557; /* TIdPair */
extern TNimType* NTI53521; /* PSym */
extern TNimType* NTI53545; /* TSym */
extern NU32 Goptions_44075;
extern TNimType* NTI53537; /* TLoc */
extern TNimType* NTI53571; /* TNodePairSeq */
N_NIMCALL(void, Intsetinit_53922)(TY53898* S_53925) {
unsureAsgnRef((void**) &(*S_53925).Data, (TY53896*) newSeq(NTI53896, 8));
(*S_53925).Max = 7;
(*S_53925).Counter = 0;
unsureAsgnRef((void**) &(*S_53925).Head, NIM_NIL);
}
N_NIMCALL(void, Initidtable_53752)(TY53561* X_53755) {
(*X_53755).Counter = 0;
unsureAsgnRef((void**) &(*X_53755).Data, (TY53559*) newSeq(NTI53559, 8));
}
N_NIMCALL(void, Initstrtable_53744)(TY53527* X_53747) {
(*X_53747).Counter = 0;
unsureAsgnRef((void**) &(*X_53747).Data, (TY53525*) newSeq(NTI53525, 8));
}
N_NIMCALL(TY53523*, Newnode_53708)(NU8 Kind_53710) {
TY53523* Result_54476;
Result_54476 = 0;
Result_54476 = (TY53523*) newObj(NTI53513, sizeof(TY53523));
(*Result_54476).Kind = Kind_53710;
(*Result_54476).Info.Fileindex = ((NI32) -1);
(*Result_54476).Info.Col = ((NI16) -1);
(*Result_54476).Info.Line = ((NI16) -1);
return Result_54476;
}
N_NIMCALL(void, Setid_53693)(NI Id_53695) {
Gid_53690 = ((Gid_53690 >= (NI32)(Id_53695 + 1)) ? Gid_53690 : (NI32)(Id_53695 + 1));
}
N_NIMCALL(TY53523*, Newnodei_53735)(NU8 Kind_53737, TY45532 Info_53738) {
TY53523* Result_54586;
Result_54586 = 0;
Result_54586 = Newnode_53708(Kind_53737);
(*Result_54586).Info = Info_53738;
return Result_54586;
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
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617) {
TY10402* C_11618;
TY10402* C_11619;
if (!!((Src_11617 == NIM_NIL))) goto LA2;
C_11618 = 0;
C_11618 = Usrtocell_10822(Src_11617);
(*C_11618).Refcount = (NI32)((NU32)((*C_11618).Refcount) + (NU32)(8));
LA2: ;
if (!!(((*Dest_11616) == NIM_NIL))) goto LA5;
C_11619 = 0;
C_11619 = Usrtocell_10822((*Dest_11616));
(*C_11619).Refcount = (NI32)((NU32)((*C_11619).Refcount) - (NU32)(8));
if (!((NU32)((*C_11619).Refcount) < (NU32)(8))) goto LA8;
Rtladdzct_11456(C_11619);
LA8: ;
LA5: ;
(*Dest_11616) = Src_11617;
}
N_NIMCALL(void, Addson_53821)(TY53523* Father_53823, TY53523* Son_53824) {
if (!(*Father_53823).KindU.S6.Sons == 0) goto LA2;
asgnRefNoCycle((void**) &(*Father_53823).KindU.S6.Sons, (TY53517*) newSeq(NTI53517, 0));
LA2: ;
(*Father_53823).KindU.S6.Sons = (TY53517*) incrSeq(&((*Father_53823).KindU.S6.Sons)->Sup, sizeof(TY53523*));
asgnRefNoCycle((void**) &(*Father_53823).KindU.S6.Sons->data[(*Father_53823).KindU.S6.Sons->Sup.len-1], Son_53824);
}
N_NIMCALL(NI, Sonslen_53801)(TY53523* N_53803) {
NI Result_54901;
Result_54901 = 0;
if (!(*N_53803).KindU.S6.Sons == 0) goto LA2;
Result_54901 = 0;
goto LA1;
LA2: ;
Result_54901 = (*N_53803).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_54901;
}
N_NIMCALL(TY53523*, Lastson_53807)(TY53523* N_53809) {
TY53523* Result_55699;
NI LOC1;
Result_55699 = 0;
LOC1 = Sonslen_53801(N_53809);
Result_55699 = (*N_53809).KindU.S6.Sons->data[(NI32)(LOC1 - 1)];
return Result_55699;
}
N_NIMCALL(NI, Getid_53691)(void) {
NI Result_53954;
Result_53954 = 0;
Result_53954 = Gid_53690;
Gid_53690 += 1;
return Result_53954;
}
N_NIMCALL(NI, Nexttry_56062)(NI H_56064, NI Maxhash_56065) {
NI Result_56066;
Result_56066 = 0;
Result_56066 = (NI32)((NI32)((NI32)(5 * H_56064) + 1) & Maxhash_56065);
return Result_56066;
}
N_NIMCALL(TY53894*, Intsetget_56083)(TY53898 T_56085, NI Key_56086) {
TY53894* Result_56087;
NI H_56088;
Result_56087 = 0;
H_56088 = 0;
H_56088 = (NI32)(Key_56086 & T_56085.Max);
while (1) {
if (!!((T_56085.Data->data[H_56088] == NIM_NIL))) goto LA1;
if (!((*T_56085.Data->data[H_56088]).Key == Key_56086)) goto LA3;
Result_56087 = T_56085.Data->data[H_56088];
goto BeforeRet;
LA3: ;
H_56088 = Nexttry_56062(H_56088, T_56085.Max);
} LA1: ;
Result_56087 = NIM_NIL;
BeforeRet: ;
return Result_56087;
}
N_NIMCALL(NIM_BOOL, Mustrehash_56051)(NI Length_56053, NI Counter_56054) {
NIM_BOOL Result_56055;
NIM_BOOL LOC1;
Result_56055 = 0;
LOC1 = ((NI32)(Length_56053 * 2) < (NI32)(Counter_56054 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI32)(Length_56053 - Counter_56054) < 4);
LA2: ;
Result_56055 = LOC1;
return Result_56055;
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
N_NIMCALL(void, Intsetrawinsert_56103)(TY53898 T_56105, TY53896** Data_56107, TY53894* Desc_56108) {
NI H_56109;
H_56109 = 0;
H_56109 = (NI32)((*Desc_56108).Key & T_56105.Max);
while (1) {
if (!!(((*Data_56107)->data[H_56109] == NIM_NIL))) goto LA1;
H_56109 = Nexttry_56062(H_56109, T_56105.Max);
} LA1: ;
asgnRef((void**) &(*Data_56107)->data[H_56109], Desc_56108);
}
N_NIMCALL(void, Intsetenlarge_56142)(TY53898* T_56145) {
TY53896* N_56146;
NI Oldmax_56147;
NI I_56167;
NI Res_56191;
TY53896* LOC5;
N_56146 = 0;
Oldmax_56147 = 0;
Oldmax_56147 = (*T_56145).Max;
(*T_56145).Max = (NI32)((NI32)((NI32)((*T_56145).Max + 1) * 2) - 1);
N_56146 = (TY53896*) newSeq(NTI53896, (NI32)((*T_56145).Max + 1));
I_56167 = 0;
Res_56191 = 0;
Res_56191 = 0;
while (1) {
if (!(Res_56191 <= Oldmax_56147)) goto LA1;
I_56167 = Res_56191;
if (!!(((*T_56145).Data->data[I_56167] == NIM_NIL))) goto LA3;
Intsetrawinsert_56103((*T_56145), &N_56146, (*T_56145).Data->data[I_56167]);
LA3: ;
Res_56191 += 1;
} LA1: ;
LOC5 = (*T_56145).Data;
unsureAsgnRef((void**) &(*T_56145).Data, N_56146);
N_56146 = LOC5;
}
N_NIMCALL(TY53894*, Intsetput_56194)(TY53898* T_56197, NI Key_56198) {
TY53894* Result_56199;
NI H_56200;
NIM_BOOL LOC6;
Result_56199 = 0;
H_56200 = 0;
H_56200 = (NI32)(Key_56198 & (*T_56197).Max);
while (1) {
if (!!(((*T_56197).Data->data[H_56200] == NIM_NIL))) goto LA1;
if (!((*(*T_56197).Data->data[H_56200]).Key == Key_56198)) goto LA3;
Result_56199 = (*T_56197).Data->data[H_56200];
goto BeforeRet;
LA3: ;
H_56200 = Nexttry_56062(H_56200, (*T_56197).Max);
} LA1: ;
LOC6 = Mustrehash_56051((NI32)((*T_56197).Max + 1), (*T_56197).Counter);
if (!LOC6) goto LA7;
Intsetenlarge_56142(T_56197);
LA7: ;
(*T_56197).Counter += 1;
H_56200 = (NI32)(Key_56198 & (*T_56197).Max);
while (1) {
if (!!(((*T_56197).Data->data[H_56200] == NIM_NIL))) goto LA9;
H_56200 = Nexttry_56062(H_56200, (*T_56197).Max);
} LA9: ;
Result_56199 = (TY53894*) newObj(NTI53892, sizeof(TY53894));
asgnRef((void**) &(*Result_56199).Next, (*T_56197).Head);
(*Result_56199).Key = Key_56198;
unsureAsgnRef((void**) &(*T_56197).Head, Result_56199);
asgnRef((void**) &(*T_56197).Data->data[H_56200], Result_56199);
BeforeRet: ;
return Result_56199;
}
N_NIMCALL(void, Intsetincl_53912)(TY53898* S_53915, NI Key_53916) {
NI U_56290;
TY53894* T_56291;
U_56290 = 0;
T_56291 = 0;
T_56291 = Intsetput_56194(S_53915, (NI32)((NU32)(Key_53916) >> (NU32)(9)));
U_56290 = (NI32)(Key_53916 & 511);
(*T_56291).Bits[((NI32)((NU32)(U_56290) >> (NU32)(5)))-0] = (NI32)((*T_56291).Bits[((NI32)((NU32)(U_56290) >> (NU32)(5)))-0] | (NI32)((NU32)(1) << (NU32)((NI32)(U_56290 & 31))));
}
N_NIMCALL(NIM_BOOL, Intsetcontainsorincl_53926)(TY53898* S_53929, NI Key_53930) {
NIM_BOOL Result_56315;
NI U_56316;
TY53894* T_56317;
Result_56315 = 0;
U_56316 = 0;
T_56317 = 0;
T_56317 = Intsetget_56083((*S_53929), (NI32)((NU32)(Key_53930) >> (NU32)(9)));
if (!!((T_56317 == NIM_NIL))) goto LA2;
U_56316 = (NI32)(Key_53930 & 511);
Result_56315 = !(((NI32)((*T_56317).Bits[((NI32)((NU32)(U_56316) >> (NU32)(5)))-0] & (NI32)((NU32)(1) << (NU32)((NI32)(U_56316 & 31)))) == 0));
if (!!(Result_56315)) goto LA5;
(*T_56317).Bits[((NI32)((NU32)(U_56316) >> (NU32)(5)))-0] = (NI32)((*T_56317).Bits[((NI32)((NU32)(U_56316) >> (NU32)(5)))-0] | (NI32)((NU32)(1) << (NU32)((NI32)(U_56316 & 31))));
LA5: ;
goto LA1;
LA2: ;
Intsetincl_53912(S_53929, Key_53930);
Result_56315 = NIM_FALSE;
LA1: ;
return Result_56315;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI32)((NI32)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
N_NIMCALL(void, Registerid_53932)(TY52005* Id_53934) {
NIM_BOOL LOC5;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
if (!NIM_FALSE) goto LA2;
LOC5 = ((*Id_53934).Id == -1);
if (LOC5) goto LA6;
LOC5 = Intsetcontainsorincl_53926(&Usedids_53935, (*Id_53934).Id);
LA6: ;
if (!LOC5) goto LA7;
LOC10 = nimIntToStr((*Id_53934).Id);
LOC9 = rawNewString(LOC10->Sup.len + 17);
appendString(LOC9, ((NimStringDesc*) &TMP193887));
appendString(LOC9, LOC10);
Internalerror_45571(LOC9);
LA7: ;
LA2: ;
}
N_NIMCALL(void, Addson_53825)(TY53549* Father_53827, TY53549* Son_53828) {
if (!(*Father_53827).Sons == 0) goto LA2;
asgnRef((void**) &(*Father_53827).Sons, (TY53547*) newSeq(NTI53547, 0));
LA2: ;
(*Father_53827).Sons = (TY53547*) incrSeq(&((*Father_53827).Sons)->Sup, sizeof(TY53549*));
asgnRef((void**) &(*Father_53827).Sons->data[(*Father_53827).Sons->Sup.len-1], Son_53828);
}
N_NIMCALL(void, Idsynchronizationpoint_53696)(NI Idrange_53698) {
Gid_53690 = (NI32)((NI32)((NI32)((NI32)(Gid_53690 / Idrange_53698) + 1) * Idrange_53698) + 1);
}
N_NIMCALL(NIM_BOOL, Intsetcontains_53908)(TY53898 S_53910, NI Key_53911) {
NIM_BOOL Result_56269;
NI U_56270;
TY53894* T_56271;
Result_56269 = 0;
U_56270 = 0;
T_56271 = 0;
T_56271 = Intsetget_56083(S_53910, (NI32)((NU32)(Key_53911) >> (NU32)(9)));
if (!!((T_56271 == NIM_NIL))) goto LA2;
U_56270 = (NI32)(Key_53911 & 511);
Result_56269 = !(((NI32)((*T_56271).Bits[((NI32)((NU32)(U_56270) >> (NU32)(5)))-0] & (NI32)((NU32)(1) << (NU32)((NI32)(U_56270 & 31)))) == 0));
goto LA1;
LA2: ;
Result_56269 = NIM_FALSE;
LA1: ;
return Result_56269;
}
N_NIMCALL(TY53523*, Newsymnode_53732)(TY53545* Sym_53734) {
TY53523* Result_54569;
Result_54569 = 0;
Result_54569 = Newnode_53708(((NU8) 3));
asgnRef((void**) &(*Result_54569).KindU.S4.Sym, Sym_53734);
asgnRef((void**) &(*Result_54569).Typ, (*Sym_53734).Typ);
(*Result_54569).Info = (*Sym_53734).Info;
return Result_54569;
}
N_NIMCALL(TY53523*, Newnodeit_53739)(NU8 Kind_53741, TY45532 Info_53742, TY53549* Typ_53743) {
TY53523* Result_54592;
Result_54592 = 0;
Result_54592 = Newnode_53708(Kind_53741);
(*Result_54592).Info = Info_53742;
asgnRef((void**) &(*Result_54592).Typ, Typ_53743);
return Result_54592;
}
N_NIMCALL(TY53549*, Newtype_53704)(NU8 Kind_53706, TY53545* Owner_53707) {
TY53549* Result_54597;
Result_54597 = 0;
Result_54597 = (TY53549*) newObj(NTI53519, sizeof(TY53549));
(*Result_54597).Sup.Sup.m_type = NTI53549;
(*Result_54597).Kind = Kind_53706;
asgnRef((void**) &(*Result_54597).Owner, Owner_53707);
(*Result_54597).Size = -1;
(*Result_54597).Align = 2;
(*Result_54597).Sup.Id = Getid_53691();
if (!NIM_FALSE) goto LA2;
Registerid_53932(&Result_54597->Sup);
LA2: ;
return Result_54597;
}
N_NIMCALL(void, Newsons_53813)(TY53523* Father_53815, NI Length_53816) {
if (!(*Father_53815).KindU.S6.Sons == 0) goto LA2;
asgnRefNoCycle((void**) &(*Father_53815).KindU.S6.Sons, (TY53517*) newSeq(NTI53517, 0));
LA2: ;
(*Father_53815).KindU.S6.Sons = (TY53517*) setLengthSeq(&((*Father_53815).KindU.S6.Sons)->Sup, sizeof(TY53523*), (NI32)((*Father_53815).KindU.S6.Sons->Sup.len + Length_53816));
}
N_NIMCALL(TY53523*, Copytree_53856)(TY53523* Src_53858) {
TY53523* Result_55504;
NI LOC4;
NI I_55665;
NI HEX3Atmp_55691;
NI LOC5;
NI Res_55693;
Result_55504 = 0;
if (!(Src_53858 == NIM_NIL)) goto LA2;
Result_55504 = NIM_NIL;
goto BeforeRet;
LA2: ;
Result_55504 = Newnode_53708((*Src_53858).Kind);
(*Result_55504).Info = (*Src_53858).Info;
asgnRef((void**) &(*Result_55504).Typ, (*Src_53858).Typ);
(*Result_55504).Flags = ((*Src_53858).Flags & 30);
switch ((*Src_53858).Kind) {
case ((NU8) 5) ... ((NU8) 10):
(*Result_55504).KindU.S1.Intval = (*Src_53858).KindU.S1.Intval;
break;
case ((NU8) 11):
case ((NU8) 12):
case ((NU8) 13):
(*Result_55504).KindU.S2.Floatval = (*Src_53858).KindU.S2.Floatval;
break;
case ((NU8) 3):
asgnRef((void**) &(*Result_55504).KindU.S4.Sym, (*Src_53858).KindU.S4.Sym);
break;
case ((NU8) 2):
asgnRefNoCycle((void**) &(*Result_55504).KindU.S5.Ident, (*Src_53858).KindU.S5.Ident);
break;
case ((NU8) 14) ... ((NU8) 16):
asgnRefNoCycle((void**) &(*Result_55504).KindU.S3.Strval, copyString((*Src_53858).KindU.S3.Strval));
break;
default:
genericSeqAssign(&(*Result_55504).KindU.S6.Sons, NIM_NIL, NTI53517);
LOC4 = Sonslen_53801(Src_53858);
Newsons_53813(Result_55504, LOC4);
I_55665 = 0;
HEX3Atmp_55691 = 0;
LOC5 = Sonslen_53801(Src_53858);
HEX3Atmp_55691 = (NI32)(LOC5 - 1);
Res_55693 = 0;
Res_55693 = 0;
while (1) {
if (!(Res_55693 <= HEX3Atmp_55691)) goto LA6;
I_55665 = Res_55693;
asgnRefNoCycle((void**) &(*Result_55504).KindU.S6.Sons->data[I_55665], Copytree_53856((*Src_53858).KindU.S6.Sons->data[I_55665]));
Res_55693 += 1;
} LA6: ;
break;
}
BeforeRet: ;
return Result_55504;
}
N_NIMCALL(void, Initidnodetable_53760)(TY53567* X_53763) {
(*X_53763).Counter = 0;
unsureAsgnRef((void**) &(*X_53763).Data, (TY53565*) newSeq(NTI53565, 8));
}
N_NIMCALL(TY53523*, Copynode_53853)(TY53523* Src_53855) {
TY53523* Result_55359;
Result_55359 = 0;
if (!(Src_53855 == NIM_NIL)) goto LA2;
Result_55359 = NIM_NIL;
goto BeforeRet;
LA2: ;
Result_55359 = Newnode_53708((*Src_53855).Kind);
(*Result_55359).Info = (*Src_53855).Info;
asgnRef((void**) &(*Result_55359).Typ, (*Src_53855).Typ);
(*Result_55359).Flags = ((*Src_53855).Flags & 30);
switch ((*Src_53855).Kind) {
case ((NU8) 5) ... ((NU8) 10):
(*Result_55359).KindU.S1.Intval = (*Src_53855).KindU.S1.Intval;
break;
case ((NU8) 11):
case ((NU8) 12):
case ((NU8) 13):
(*Result_55359).KindU.S2.Floatval = (*Src_53855).KindU.S2.Floatval;
break;
case ((NU8) 3):
asgnRef((void**) &(*Result_55359).KindU.S4.Sym, (*Src_53855).KindU.S4.Sym);
break;
case ((NU8) 2):
asgnRefNoCycle((void**) &(*Result_55359).KindU.S5.Ident, (*Src_53855).KindU.S5.Ident);
break;
case ((NU8) 14) ... ((NU8) 16):
asgnRefNoCycle((void**) &(*Result_55359).KindU.S3.Strval, copyString((*Src_53855).KindU.S3.Strval));
break;
default:
break;
}
BeforeRet: ;
return Result_55359;
}
N_NIMCALL(NI, Sonslen_53804)(TY53549* N_53806) {
NI Result_54765;
Result_54765 = 0;
if (!(*N_53806).Sons == 0) goto LA2;
Result_54765 = 0;
goto LA1;
LA2: ;
Result_54765 = (*N_53806).Sons->Sup.len;
LA1: ;
return Result_54765;
}
N_NIMCALL(TY53549*, Lastson_53810)(TY53549* N_53812) {
TY53549* Result_55715;
NI LOC1;
Result_55715 = 0;
LOC1 = Sonslen_53804(N_53812);
Result_55715 = (*N_53812).Sons->data[(NI32)(LOC1 - 1)];
return Result_55715;
}
N_NIMCALL(TY53523*, Newintnode_53711)(NU8 Kind_53713, NI64 Intval_53714) {
TY53523* Result_54496;
Result_54496 = 0;
Result_54496 = Newnode_53708(Kind_53713);
(*Result_54496).KindU.S1.Intval = Intval_53714;
return Result_54496;
}
N_NIMCALL(void, Discardsons_53859)(TY53523* Father_53861) {
genericSeqAssign(&(*Father_53861).KindU.S6.Sons, NIM_NIL, NTI53517);
}
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_17011, NimStringDesc* B_17012) {
NI Result_17013;
int LOC10;
Result_17013 = 0;
if (!(A_17011 == B_17012)) goto LA2;
Result_17013 = 0;
goto BeforeRet;
LA2: ;
if (!(A_17011 == NIM_NIL)) goto LA5;
Result_17013 = -1;
goto BeforeRet;
LA5: ;
if (!(B_17012 == NIM_NIL)) goto LA8;
Result_17013 = 1;
goto BeforeRet;
LA8: ;
LOC10 = strcmp(((NCSTRING) ((*A_17011).data)), ((NCSTRING) ((*B_17012).data)));
Result_17013 = ((NI) (LOC10));
goto BeforeRet;
BeforeRet: ;
return Result_17013;
}
N_NIMCALL(NIM_BOOL, Levalue_53868)(TY53523* A_53870, TY53523* B_53871) {
NIM_BOOL Result_53979;
Result_53979 = 0;
Result_53979 = NIM_FALSE;
switch ((*A_53870).Kind) {
case ((NU8) 5) ... ((NU8) 10):
if (!((*B_53871).Kind >= ((NU8) 5) && (*B_53871).Kind <= ((NU8) 10))) goto LA2;
Result_53979 = ((*A_53870).KindU.S1.Intval <= (*B_53871).KindU.S1.Intval);
LA2: ;
break;
case ((NU8) 11) ... ((NU8) 13):
if (!((*B_53871).Kind >= ((NU8) 11) && (*B_53871).Kind <= ((NU8) 13))) goto LA5;
Result_53979 = (((NF) ((*A_53870).KindU.S2.Floatval)) <= ((NF) ((*B_53871).KindU.S2.Floatval)));
LA5: ;
break;
case ((NU8) 14) ... ((NU8) 16):
if (!((*B_53871).Kind >= ((NU8) 14) && (*B_53871).Kind <= ((NU8) 16))) goto LA8;
Result_53979 = (cmpStrings((*A_53870).KindU.S3.Strval, (*B_53871).KindU.S3.Strval) <= 0);
LA8: ;
break;
default:
Internalerror_45567((*A_53870).Info, ((NimStringDesc*) &TMP193949));
break;
}
return Result_53979;
}
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
LOC11 = memcmp(((NCSTRING) ((*A_17047).data)), ((NCSTRING) ((*B_17048).data)), ((int) ((NI32)((*A_17047).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17049 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_17049;
}
N_NIMCALL(NIM_BOOL, Samevalue_53864)(TY53523* A_53866, TY53523* B_53867) {
NIM_BOOL Result_54094;
Result_54094 = 0;
Result_54094 = NIM_FALSE;
switch ((*A_53866).Kind) {
case ((NU8) 5) ... ((NU8) 10):
if (!((*B_53867).Kind >= ((NU8) 5) && (*B_53867).Kind <= ((NU8) 10))) goto LA2;
Result_54094 = ((*A_53866).KindU.S1.Intval == (*B_53867).KindU.S1.Intval);
LA2: ;
break;
case ((NU8) 11) ... ((NU8) 13):
if (!((*B_53867).Kind >= ((NU8) 11) && (*B_53867).Kind <= ((NU8) 13))) goto LA5;
Result_54094 = (((NF) ((*A_53866).KindU.S2.Floatval)) == ((NF) ((*B_53867).KindU.S2.Floatval)));
LA5: ;
break;
case ((NU8) 14) ... ((NU8) 16):
if (!((*B_53867).Kind >= ((NU8) 14) && (*B_53867).Kind <= ((NU8) 16))) goto LA8;
Result_54094 = eqStrings((*A_53866).KindU.S3.Strval, (*B_53867).KindU.S3.Strval);
LA8: ;
break;
default:
Internalerror_45567((*A_53866).Info, ((NimStringDesc*) &TMP193950));
break;
}
return Result_54094;
}
N_NIMCALL(TY53523*, Newinttypenode_53715)(NU8 Kind_53717, NI64 Intval_53718, TY53549* Typ_53719) {
TY53523* Result_54514;
Result_54514 = 0;
Result_54514 = Newintnode_53711(Kind_53717, Intval_53718);
asgnRef((void**) &(*Result_54514).Typ, Typ_53719);
return Result_54514;
}
N_NIMCALL(void, Delson_53833)(TY53523* Father_53835, NI Idx_53836) {
NI Length_55293;
NI I_55301;
NI HEX3Atmp_55351;
NI Res_55353;
if (!(*Father_53835).KindU.S6.Sons == 0) goto LA2;
goto BeforeRet;
LA2: ;
Length_55293 = 0;
Length_55293 = Sonslen_53801(Father_53835);
I_55301 = 0;
HEX3Atmp_55351 = 0;
HEX3Atmp_55351 = (NI32)(Length_55293 - 2);
Res_55353 = 0;
Res_55353 = Idx_53836;
while (1) {
if (!(Res_55353 <= HEX3Atmp_55351)) goto LA4;
I_55301 = Res_55353;
asgnRefNoCycle((void**) &(*Father_53835).KindU.S6.Sons->data[I_55301], (*Father_53835).KindU.S6.Sons->data[(NI32)(I_55301 + 1)]);
Res_55353 += 1;
} LA4: ;
(*Father_53835).KindU.S6.Sons = (TY53517*) setLengthSeq(&((*Father_53835).KindU.S6.Sons)->Sup, sizeof(TY53523*), (NI32)(Length_55293 - 1));
BeforeRet: ;
}
N_NIMCALL(TY53523*, Newstrnode_53724)(NU8 Kind_53726, NimStringDesc* Strval_53727) {
TY53523* Result_54536;
Result_54536 = 0;
Result_54536 = Newnode_53708(Kind_53726);
asgnRefNoCycle((void**) &(*Result_54536).KindU.S3.Strval, copyString(Strval_53727));
return Result_54536;
}
N_NIMCALL(NI64, Getint_55971)(TY53523* A_55973) {
NI64 Result_55974;
Result_55974 = 0;
switch ((*A_55973).Kind) {
case ((NU8) 6) ... ((NU8) 10):
Result_55974 = (*A_55973).KindU.S1.Intval;
break;
default:
Internalerror_45567((*A_55973).Info, ((NimStringDesc*) &TMP193966));
Result_55974 = 0;
break;
}
return Result_55974;
}
N_NIMCALL(TY53523*, Newfloatnode_53720)(NU8 Kind_53722, NF64 Floatval_53723) {
TY53523* Result_54519;
Result_54519 = 0;
Result_54519 = Newnode_53708(Kind_53722);
(*Result_54519).KindU.S2.Floatval = Floatval_53723;
return Result_54519;
}
N_NIMCALL(NF64, Getfloat_55987)(TY53523* A_55989) {
NF64 Result_55990;
Result_55990 = 0;
switch ((*A_55989).Kind) {
case ((NU8) 11) ... ((NU8) 13):
Result_55990 = (*A_55989).KindU.S2.Floatval;
break;
default:
Internalerror_45567((*A_55989).Info, ((NimStringDesc*) &TMP193967));
Result_55990 = 0.000000;
break;
}
return Result_55990;
}
N_NIMCALL(NimStringDesc*, Getstr_56003)(TY53523* A_56005) {
NimStringDesc* Result_56006;
Result_56006 = 0;
switch ((*A_56005).Kind) {
case ((NU8) 14) ... ((NU8) 16):
Result_56006 = copyString((*A_56005).KindU.S3.Strval);
break;
default:
Internalerror_45567((*A_56005).Info, ((NimStringDesc*) &TMP193968));
Result_56006 = copyString(((NimStringDesc*) &TMP53019));
break;
}
return Result_56006;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210) {
(*Dest_17209).data[((*Dest_17209).Sup.len)-0] = C_17210;
(*Dest_17209).data[((NI32)((*Dest_17209).Sup.len + 1))-0] = 0;
(*Dest_17209).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Getstrorchar_56019)(TY53523* A_56021) {
NimStringDesc* Result_56022;
NimStringDesc* LOC1;
Result_56022 = 0;
switch ((*A_56021).Kind) {
case ((NU8) 14) ... ((NU8) 16):
Result_56022 = copyString((*A_56021).KindU.S3.Strval);
break;
case ((NU8) 5):
LOC1 = rawNewString(1);
appendChar(LOC1, ((NIM_CHAR) (((NI) (((NI) ((*A_56021).KindU.S1.Intval)))))));
appendString(LOC1, ((NimStringDesc*) &TMP53019));
Result_56022 = LOC1;
break;
default:
Internalerror_45567((*A_56021).Info, ((NimStringDesc*) &TMP193970));
Result_56022 = copyString(((NimStringDesc*) &TMP53019));
break;
}
return Result_56022;
}
N_NIMCALL(NimStringDesc*, Valuetostring_53872)(TY53523* A_53874) {
NimStringDesc* Result_54208;
Result_54208 = 0;
switch ((*A_53874).Kind) {
case ((NU8) 5) ... ((NU8) 10):
Result_54208 = nimInt64ToStr((*A_53874).KindU.S1.Intval);
break;
case ((NU8) 11):
case ((NU8) 12):
case ((NU8) 13):
Result_54208 = nimFloatToStr(((NF) ((*A_53874).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
Result_54208 = copyString((*A_53874).KindU.S3.Strval);
break;
default:
Internalerror_45567((*A_53874).Info, ((NimStringDesc*) &TMP194037));
Result_54208 = copyString(((NimStringDesc*) &TMP53019));
break;
}
return Result_54208;
}
N_NIMCALL(TY53523*, Newidentnode_53728)(TY52011* Ident_53730, TY45532 Info_53731) {
TY53523* Result_54553;
Result_54553 = 0;
Result_54553 = Newnode_53708(((NU8) 2));
asgnRefNoCycle((void**) &(*Result_54553).KindU.S5.Ident, Ident_53730);
(*Result_54553).Info = Info_53731;
return Result_54553;
}
N_NIMCALL(void, Copyidtable_53796)(TY53561* Dest_53799, TY53561 Src_53800) {
NI I_54353;
NI HEX3Atmp_54355;
NI Res_54357;
(*Dest_53799).Counter = Src_53800.Counter;
if (!Src_53800.Data == 0) goto LA2;
goto BeforeRet;
LA2: ;
unsureAsgnRef((void**) &(*Dest_53799).Data, (TY53559*) newSeq(NTI53559, Src_53800.Data->Sup.len));
I_54353 = 0;
HEX3Atmp_54355 = 0;
HEX3Atmp_54355 = (Src_53800.Data->Sup.len-1);
Res_54357 = 0;
Res_54357 = 0;
while (1) {
if (!(Res_54357 <= HEX3Atmp_54355)) goto LA4;
I_54353 = Res_54357;
genericAssign((void*)&(*Dest_53799).Data->data[I_54353], (void*)&Src_53800.Data->data[I_54353], NTI53557);
Res_54357 += 1;
} LA4: ;
BeforeRet: ;
}
N_NIMCALL(void, Newsons_53817)(TY53549* Father_53819, NI Length_53820) {
if (!(*Father_53819).Sons == 0) goto LA2;
asgnRef((void**) &(*Father_53819).Sons, (TY53547*) newSeq(NTI53547, 0));
LA2: ;
(*Father_53819).Sons = (TY53547*) setLengthSeq(&((*Father_53819).Sons)->Sup, sizeof(TY53549*), (NI32)((*Father_53819).Sons->Sup.len + Length_53820));
}
N_NIMCALL(void, Assigntype_53777)(TY53549* Dest_53779, TY53549* Src_53780) {
NI LOC1;
NI I_54624;
NI HEX3Atmp_54626;
NI LOC2;
NI Res_54628;
(*Dest_53779).Kind = (*Src_53780).Kind;
(*Dest_53779).Flags = (*Src_53780).Flags;
(*Dest_53779).Callconv = (*Src_53780).Callconv;
asgnRefNoCycle((void**) &(*Dest_53779).N, (*Src_53780).N);
(*Dest_53779).Size = (*Src_53780).Size;
(*Dest_53779).Align = (*Src_53780).Align;
(*Dest_53779).Containerid = (*Src_53780).Containerid;
LOC1 = Sonslen_53804(Src_53780);
Newsons_53817(Dest_53779, LOC1);
I_54624 = 0;
HEX3Atmp_54626 = 0;
LOC2 = Sonslen_53804(Src_53780);
HEX3Atmp_54626 = (NI32)(LOC2 - 1);
Res_54628 = 0;
Res_54628 = 0;
while (1) {
if (!(Res_54628 <= HEX3Atmp_54626)) goto LA3;
I_54624 = Res_54628;
asgnRef((void**) &(*Dest_53779).Sons->data[I_54624], (*Src_53780).Sons->data[I_54624]);
Res_54628 += 1;
} LA3: ;
}
N_NIMCALL(TY53549*, Copytype_53768)(TY53549* T_53770, TY53545* Owner_53771, NIM_BOOL Keepid_53772) {
TY53549* Result_54636;
Result_54636 = 0;
Result_54636 = Newtype_53704((*T_53770).Kind, Owner_53771);
Assigntype_53777(Result_54636, T_53770);
if (!Keepid_53772) goto LA2;
(*Result_54636).Sup.Id = (*T_53770).Sup.Id;
goto LA1;
LA2: ;
(*Result_54636).Sup.Id = Getid_53691();
if (!NIM_FALSE) goto LA5;
Registerid_53932(&Result_54636->Sup);
LA5: ;
LA1: ;
asgnRef((void**) &(*Result_54636).Sym, (*T_53770).Sym);
return Result_54636;
}
N_NIMCALL(TY53545*, Newsym_53699)(NU8 Symkind_53701, TY52011* Name_53702, TY53545* Owner_53703) {
TY53545* Result_54648;
Result_54648 = 0;
Result_54648 = (TY53545*) newObj(NTI53521, sizeof(TY53545));
objectInit(Result_54648, NTI53545);
asgnRefNoCycle((void**) &(*Result_54648).Name, Name_53702);
(*Result_54648).Kind = Symkind_53701;
(*Result_54648).Flags = 0;
(*Result_54648).Info = Unknownlineinfo_45536();
(*Result_54648).Options = Goptions_44075;
asgnRef((void**) &(*Result_54648).Owner, Owner_53703);
(*Result_54648).Offset = -1;
(*Result_54648).Sup.Id = Getid_53691();
if (!NIM_FALSE) goto LA2;
Registerid_53932(&Result_54648->Sup);
LA2: ;
return Result_54648;
}
N_NIMCALL(void, Copystrtable_53781)(TY53527* Dest_53784, TY53527* Src_53785) {
NI I_54304;
NI HEX3Atmp_54306;
NI Res_54308;
(*Dest_53784).Counter = (*Src_53785).Counter;
if (!(*Src_53785).Data == 0) goto LA2;
goto BeforeRet;
LA2: ;
(*Dest_53784).Data = (TY53525*) setLengthSeq(&((*Dest_53784).Data)->Sup, sizeof(TY53545*), (*Src_53785).Data->Sup.len);
I_54304 = 0;
HEX3Atmp_54306 = 0;
HEX3Atmp_54306 = ((*Src_53785).Data->Sup.len-1);
Res_54308 = 0;
Res_54308 = 0;
while (1) {
if (!(Res_54308 <= HEX3Atmp_54306)) goto LA4;
I_54304 = Res_54308;
asgnRef((void**) &(*Dest_53784).Data->data[I_54304], (*Src_53785).Data->data[I_54304]);
Res_54308 += 1;
} LA4: ;
BeforeRet: ;
}
N_NIMCALL(TY53545*, Copysym_53773)(TY53545* S_53775, NIM_BOOL Keepid_53776) {
TY53545* Result_54641;
Result_54641 = 0;
Result_54641 = Newsym_53699((*S_53775).Kind, (*S_53775).Name, (*S_53775).Owner);
asgnRefNoCycle((void**) &(*Result_54641).Ast, NIM_NIL);
(*Result_54641).Info = (*S_53775).Info;
asgnRef((void**) &(*Result_54641).Typ, (*S_53775).Typ);
if (!Keepid_53776) goto LA2;
(*Result_54641).Sup.Id = (*S_53775).Sup.Id;
goto LA1;
LA2: ;
(*Result_54641).Sup.Id = Getid_53691();
if (!NIM_FALSE) goto LA5;
Registerid_53932(&Result_54641->Sup);
LA5: ;
LA1: ;
(*Result_54641).Flags = (*S_53775).Flags;
(*Result_54641).Magic = (*S_53775).Magic;
Copystrtable_53781(&(*Result_54641).Tab, &(*S_53775).Tab);
(*Result_54641).Options = (*S_53775).Options;
(*Result_54641).Position = (*S_53775).Position;
genericAssign((void*)&(*Result_54641).Loc, (void*)&(*S_53775).Loc, NTI53537);
asgnRefNoCycle((void**) &(*Result_54641).Annex, (*S_53775).Annex);
return Result_54641;
}
N_NIMCALL(void, Add_54990)(TY53523* Father_54992, TY53523* Son_54993) {
if (!(*Father_54992).KindU.S6.Sons == 0) goto LA2;
asgnRefNoCycle((void**) &(*Father_54992).KindU.S6.Sons, (TY53517*) newSeq(NTI53517, 0));
LA2: ;
(*Father_54992).KindU.S6.Sons = (TY53517*) incrSeq(&((*Father_54992).KindU.S6.Sons)->Sup, sizeof(TY53523*));
asgnRefNoCycle((void**) &(*Father_54992).KindU.S6.Sons->data[(*Father_54992).KindU.S6.Sons->Sup.len-1], Son_54993);
}
N_NIMCALL(void, Addsonifnotnil_53829)(TY53523* Father_53831, TY53523* N_53832) {
if (!!((N_53832 == NIM_NIL))) goto LA2;
Addson_53821(Father_53831, N_53832);
LA2: ;
}
N_NIMCALL(void, Intsetexcl_53917)(TY53898* S_53920, NI Key_53921) {
NI U_56297;
TY53894* T_56298;
U_56297 = 0;
T_56298 = 0;
T_56298 = Intsetget_56083((*S_53920), (NI32)((NU32)(Key_53921) >> (NU32)(9)));
if (!!((T_56298 == NIM_NIL))) goto LA2;
U_56297 = (NI32)(Key_53921 & 511);
(*T_56298).Bits[((NI32)((NU32)(U_56297) >> (NU32)(5)))-0] = (NI32)((*T_56298).Bits[((NI32)((NU32)(U_56297) >> (NU32)(5)))-0] & (NI32)((NU32) ~((NI32)((NU32)(1) << (NU32)((NI32)(U_56297 & 31))))));
LA2: ;
}
N_NIMCALL(void, Initnodetable_53764)(TY53573* X_53767) {
(*X_53767).Counter = 0;
unsureAsgnRef((void**) &(*X_53767).Data, (TY53571*) newSeq(NTI53571, 8));
}
N_NOINLINE(void, astInit)(void) {
if (!NIM_FALSE) goto LA2;
Intsetinit_53922(&Usedids_53935);
LA2: ;
}

