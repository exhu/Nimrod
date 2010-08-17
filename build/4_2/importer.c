/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY53523 TY53523;
typedef struct TY103012 TY103012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY53549 TY53549;
typedef struct TY45532 TY45532;
typedef struct TY53545 TY53545;
typedef struct TY52011 TY52011;
typedef struct TY53517 TY53517;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53527 TY53527;
typedef struct TY53525 TY53525;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY53541 TY53541;
typedef struct TY57079 TY57079;
typedef struct TY101002 TY101002;
typedef struct TY103006 TY103006;
typedef struct TY57107 TY57107;
typedef struct TY57109 TY57109;
typedef struct TY53898 TY53898;
typedef struct TY53894 TY53894;
typedef struct TY53896 TY53896;
typedef struct TY41019 TY41019;
typedef struct TY41013 TY41013;
typedef struct TY53547 TY53547;
typedef struct TY57092 TY57092;
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
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
};
struct TY53527 {
TNimType* m_type;
NI Counter;
TY53525* Data;
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
typedef N_NIMCALL_PTR(TY53545*, TY101044) (NimStringDesc* Filename_101045);
struct TY57079 {
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
struct TY101002 {
  TNimObject Sup;
};
struct TY57107 {
NI Tos;
TY57109* Stack;
};
struct TY53898 {
NI Counter;
NI Max;
TY53894* Head;
TY53896* Data;
};
struct TY41019 {
TNimType* m_type;
TY41013* Head;
TY41013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY53523*, TY103032) (TY103012* C_103033, TY53523* N_103034);
typedef N_NIMCALL_PTR(TY53523*, TY103037) (TY103012* C_103038, TY53523* N_103039);
struct TY103012 {
  TY101002 Sup;
TY53545* Module;
TY103006* P;
NI Instcounter;
TY53523* Generics;
NI Lastgenericidx;
TY57107 Tab;
TY53898 Ambiguoussymbols;
TY53525* Converters;
TY41019 Optionstack;
TY41019 Libs;
NIM_BOOL Fromcache;
TY103032 Semconstexpr;
TY103037 Semexpr;
TY53898 Includedfiles;
NimStringDesc* Filename;
TY53527 Userpragmas;
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
struct TY57092 {
NI H;
TY52011* Name;
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
struct TY103006 {
TY53545* Owner;
TY53545* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8414[8];
struct TY53894 {
TY53894* Next;
NI Key;
TY8414 Bits;
};
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY53517 {
  TGenericSeq Sup;
  TY53523* data[SEQ_DECL_SIZE];
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
};
struct TY57109 {
  TGenericSeq Sup;
  TY53527 data[SEQ_DECL_SIZE];
};
struct TY53896 {
  TGenericSeq Sup;
  TY53894* data[SEQ_DECL_SIZE];
};
struct TY53547 {
  TGenericSeq Sup;
  TY53549* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, Sonslen_53801)(TY53523* N_53803);
N_NIMCALL(NimStringDesc*, Getmodulefile_106013)(TY53523* N_106015);
N_NIMCALL(NimStringDesc*, Findmodule_106016)(TY45532 Info_106018, NimStringDesc* Modulename_106019);
N_NIMCALL(NimStringDesc*, Findfile_44088)(NimStringDesc* F_44090);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_37044, NimStringDesc* Ext_37045);
N_NIMCALL(void, Limessage_45562)(TY45532 Info_45564, NU8 Msg_45565, NimStringDesc* Arg_45566);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_34856);
N_NIMCALL(void, Internalerror_45567)(TY45532 Info_45569, NimStringDesc* Errmsg_45570);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Adddecl_104026)(TY103012* C_104028, TY53545* Sym_104029);
N_NIMCALL(void, Importallsymbols_106009)(TY103012* C_106011, TY53545* Frommod_106012);
N_NIMCALL(TY53545*, Inittabiter_57081)(TY57079* Ti_57084, TY53527* Tab_57085);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_18179, TNimType* Typ_18180);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(void, Rawimportsymbol_106061)(TY103012* C_106063, TY53545* S_106064);
N_NIMCALL(TY53545*, Strtableget_57069)(TY53527* T_57071, TY52011* Name_57072);
N_NIMCALL(void, Intsetincl_53912)(TY53898* S_53915, NI Key_53916);
N_NIMCALL(void, Strtableadd_57064)(TY53527* T_57067, TY53545* N_57068);
N_NIMCALL(TY53545*, Initidentiter_57095)(TY57092* Ti_57098, TY53527* Tab_57099, TY52011* S_57100);
N_NIMCALL(TY53545*, Nextidentiter_57101)(TY57092* Ti_57104, TY53527* Tab_57105);
N_NIMCALL(void, Addconverter_103058)(TY103012* C_103060, TY53545* Conv_103061);
N_NIMCALL(TY53545*, Nextiter_57086)(TY57079* Ti_57089, TY53527* Tab_57090);
N_NIMCALL(void, Checkminsonslen_103103)(TY53523* N_103105, NI Length_103106);
N_NIMCALL(TY53523*, Newsymnode_53732)(TY53545* Sym_53734);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(void, Importsymbol_106220)(TY103012* C_106222, TY53523* Ident_106223, TY53545* Frommod_106224);
N_NIMCALL(void, Loadstub_89070)(TY53545* S_89072);
STRING_LITERAL(TMP194185, "nim", 3);
STRING_LITERAL(TMP194186, "getModuleFile()", 15);
STRING_LITERAL(TMP194187, "", 0);
STRING_LITERAL(TMP194188, "importAllSymbols: ", 18);
STRING_LITERAL(TMP194189, "rawImportSymbol", 15);
STRING_LITERAL(TMP194191, "importSymbol", 12);
STRING_LITERAL(TMP194192, "importSymbol: 2", 15);
STRING_LITERAL(TMP194193, "importSymbol: 3", 15);
extern TY101044 Gimportmodule_101047;
extern TNimType* NTI53174; /* TSymKind */
extern TY10790 Gch_10808;
N_NIMCALL(NimStringDesc*, Findmodule_106016)(TY45532 Info_106018, NimStringDesc* Modulename_106019) {
NimStringDesc* Result_106020;
NimStringDesc* LOC1;
Result_106020 = 0;
LOC1 = nosaddFileExt(Modulename_106019, ((NimStringDesc*) &TMP194185));
Result_106020 = Findfile_44088(LOC1);
if (!((Result_106020) && (Result_106020)->Sup.len == 0)) goto LA3;
Limessage_45562(Info_106018, ((NU8) 2), Modulename_106019);
LA3: ;
return Result_106020;
}
N_NIMCALL(NimStringDesc*, Getmodulefile_106013)(TY53523* N_106015) {
NimStringDesc* Result_106024;
NimStringDesc* LOC1;
Result_106024 = 0;
switch ((*N_106015).Kind) {
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 16):
LOC1 = nosUnixToNativePath((*N_106015).KindU.S3.Strval);
Result_106024 = Findmodule_106016((*N_106015).Info, LOC1);
break;
case ((NU8) 2):
Result_106024 = Findmodule_106016((*N_106015).Info, (*(*N_106015).KindU.S5.Ident).S);
break;
case ((NU8) 3):
Result_106024 = Findmodule_106016((*N_106015).Info, (*(*(*N_106015).KindU.S4.Sym).Name).S);
break;
default:
Internalerror_45567((*N_106015).Info, ((NimStringDesc*) &TMP194186));
Result_106024 = copyString(((NimStringDesc*) &TMP194187));
break;
}
return Result_106024;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI64)((NI64)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
N_NIMCALL(void, Rawimportsymbol_106061)(TY103012* C_106063, TY53545* S_106064) {
TY53545* Copy_106065;
TY53545* Check_106066;
NIM_BOOL LOC2;
TY53549* Etyp_106103;
NI J_106138;
NI HEX3Atmp_106211;
NI LOC15;
NI Res_106213;
TY53545* E_106163;
TY57092 It_106173;
Copy_106065 = 0;
Copy_106065 = S_106064;
Check_106066 = 0;
Check_106066 = Strtableget_57069(&(*C_106063).Tab.Stack->data[0], (*S_106064).Name);
LOC2 = !((Check_106066 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Check_106066).Sup.Id == (*Copy_106065).Sup.Id));
LA3: ;
if (!LOC2) goto LA4;
if (!!(((269824 &(1<<(((*S_106064).Kind)&31)))!=0))) goto LA7;
Intsetincl_53912(&(*C_106063).Ambiguoussymbols, (*Copy_106065).Sup.Id);
Intsetincl_53912(&(*C_106063).Ambiguoussymbols, (*Check_106066).Sup.Id);
LA7: ;
LA4: ;
Strtableadd_57064(&(*C_106063).Tab.Stack->data[0], Copy_106065);
if (!((*S_106064).Kind == ((NU8) 6))) goto LA10;
Etyp_106103 = 0;
Etyp_106103 = (*S_106064).Typ;
if (!((16386 &(IL64(1)<<(((*Etyp_106103).Kind)&IL64(63))))!=0)) goto LA13;
J_106138 = 0;
HEX3Atmp_106211 = 0;
LOC15 = Sonslen_53801((*Etyp_106103).N);
HEX3Atmp_106211 = (NI64)(LOC15 - 1);
Res_106213 = 0;
Res_106213 = 0;
while (1) {
if (!(Res_106213 <= HEX3Atmp_106211)) goto LA16;
J_106138 = Res_106213;
E_106163 = 0;
E_106163 = (*(*(*Etyp_106103).N).KindU.S6.Sons->data[J_106138]).KindU.S4.Sym;
if (!!(((*E_106163).Kind == ((NU8) 16)))) goto LA18;
Internalerror_45567((*S_106064).Info, ((NimStringDesc*) &TMP194189));
LA18: ;
memset((void*)&It_106173, 0, sizeof(It_106173));
Check_106066 = Initidentiter_57095(&It_106173, &(*C_106063).Tab.Stack->data[0], (*E_106163).Name);
while (1) {
if (!!((Check_106066 == NIM_NIL))) goto LA20;
if (!((*Check_106066).Sup.Id == (*E_106163).Sup.Id)) goto LA22;
E_106163 = NIM_NIL;
goto LA20;
LA22: ;
Check_106066 = Nextidentiter_57101(&It_106173, &(*C_106063).Tab.Stack->data[0]);
} LA20: ;
if (!!((E_106163 == NIM_NIL))) goto LA25;
Rawimportsymbol_106061(C_106063, E_106163);
LA25: ;
Res_106213 += 1;
} LA16: ;
LA13: ;
goto LA9;
LA10: ;
if (!((*S_106064).Kind == ((NU8) 12))) goto LA27;
Addconverter_103058(C_106063, S_106064);
goto LA9;
LA27: ;
LA9: ;
}
N_NIMCALL(void, Importallsymbols_106009)(TY103012* C_106011, TY53545* Frommod_106012) {
TY57079 I_106312;
TY53545* S_106314;
NimStringDesc* LOC11;
memset((void*)&I_106312, 0, sizeof(I_106312));
S_106314 = 0;
S_106314 = Inittabiter_57081(&I_106312, &(*Frommod_106012).Tab);
while (1) {
if (!!((S_106314 == NIM_NIL))) goto LA1;
if (!!(((*S_106314).Kind == ((NU8) 18)))) goto LA3;
if (!!(((*S_106314).Kind == ((NU8) 16)))) goto LA6;
if (!!(((1081280 &(1<<(((*S_106314).Kind)&31)))!=0))) goto LA9;
LOC11 = rawNewString(reprEnum((*S_106314).Kind, NTI53174)->Sup.len + 18);
appendString(LOC11, ((NimStringDesc*) &TMP194188));
appendString(LOC11, reprEnum((*S_106314).Kind, NTI53174));
Internalerror_45567((*S_106314).Info, LOC11);
LA9: ;
Rawimportsymbol_106061(C_106011, S_106314);
LA6: ;
LA3: ;
S_106314 = Nextiter_57086(&I_106312, &(*Frommod_106012).Tab);
} LA1: ;
}
N_NIMCALL(TY53523*, Evalimport_106001)(TY103012* C_106003, TY53523* N_106004) {
TY53523* Result_106377;
NI I_106385;
NI HEX3Atmp_106424;
NI LOC1;
NI Res_106426;
NimStringDesc* F_106398;
TY53545* M_106399;
Result_106377 = 0;
Result_106377 = N_106004;
I_106385 = 0;
HEX3Atmp_106424 = 0;
LOC1 = Sonslen_53801(N_106004);
HEX3Atmp_106424 = (NI64)(LOC1 - 1);
Res_106426 = 0;
Res_106426 = 0;
while (1) {
if (!(Res_106426 <= HEX3Atmp_106424)) goto LA2;
I_106385 = Res_106426;
F_106398 = 0;
F_106398 = Getmodulefile_106013((*N_106004).KindU.S6.Sons->data[I_106385]);
M_106399 = 0;
M_106399 = Gimportmodule_101047(F_106398);
if (!(((*M_106399).Flags &(1<<((((NU8) 22))&31)))!=0)) goto LA4;
Limessage_45562((*(*N_106004).KindU.S6.Sons->data[I_106385]).Info, ((NU8) 213), (*(*M_106399).Name).S);
LA4: ;
Adddecl_104026(C_106003, M_106399);
Importallsymbols_106009(C_106003, M_106399);
Res_106426 += 1;
} LA2: ;
return Result_106377;
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
N_NIMCALL(void, Importsymbol_106220)(TY103012* C_106222, TY53523* Ident_106223, TY53545* Frommod_106224) {
TY53545* S_106246;
TY57092 It_106290;
TY53545* E_106292;
if (!!(((*Ident_106223).Kind == ((NU8) 2)))) goto LA2;
Internalerror_45567((*Ident_106223).Info, ((NimStringDesc*) &TMP194191));
LA2: ;
S_106246 = 0;
S_106246 = Strtableget_57069(&(*Frommod_106224).Tab, (*Ident_106223).KindU.S5.Ident);
if (!(S_106246 == NIM_NIL)) goto LA5;
Limessage_45562((*Ident_106223).Info, ((NU8) 58), (*(*Ident_106223).KindU.S5.Ident).S);
LA5: ;
if (!((*S_106246).Kind == ((NU8) 20))) goto LA8;
Loadstub_89070(S_106246);
LA8: ;
if (!!(((1081280 &(1<<(((*S_106246).Kind)&31)))!=0))) goto LA11;
Internalerror_45567((*Ident_106223).Info, ((NimStringDesc*) &TMP194192));
LA11: ;
switch ((*S_106246).Kind) {
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 12):
memset((void*)&It_106290, 0, sizeof(It_106290));
E_106292 = 0;
E_106292 = Initidentiter_57095(&It_106290, &(*Frommod_106224).Tab, (*S_106246).Name);
while (1) {
if (!!((E_106292 == NIM_NIL))) goto LA13;
if (!!(((*(*E_106292).Name).Sup.Id == (*(*S_106246).Name).Sup.Id))) goto LA15;
Internalerror_45567((*Ident_106223).Info, ((NimStringDesc*) &TMP194193));
LA15: ;
Rawimportsymbol_106061(C_106222, E_106292);
E_106292 = Nextidentiter_57101(&It_106290, &(*Frommod_106224).Tab);
} LA13: ;
break;
default:
Rawimportsymbol_106061(C_106222, S_106246);
break;
}
}
N_NIMCALL(TY53523*, Evalfrom_106005)(TY103012* C_106007, TY53523* N_106008) {
TY53523* Result_106433;
NimStringDesc* F_106446;
TY53545* M_106447;
NI I_106467;
NI HEX3Atmp_106481;
NI LOC1;
NI Res_106483;
Result_106433 = 0;
Result_106433 = N_106008;
Checkminsonslen_103103(N_106008, 2);
F_106446 = 0;
F_106446 = Getmodulefile_106013((*N_106008).KindU.S6.Sons->data[0]);
M_106447 = 0;
M_106447 = Gimportmodule_101047(F_106446);
asgnRefNoCycle((void**) &(*N_106008).KindU.S6.Sons->data[0], Newsymnode_53732(M_106447));
Adddecl_104026(C_106007, M_106447);
I_106467 = 0;
HEX3Atmp_106481 = 0;
LOC1 = Sonslen_53801(N_106008);
HEX3Atmp_106481 = (NI64)(LOC1 - 1);
Res_106483 = 0;
Res_106483 = 1;
while (1) {
if (!(Res_106483 <= HEX3Atmp_106481)) goto LA2;
I_106467 = Res_106483;
Importsymbol_106220(C_106007, (*N_106008).KindU.S6.Sons->data[I_106467], M_106447);
Res_106483 += 1;
} LA2: ;
return Result_106433;
}
N_NOINLINE(void, importerInit)(void) {
}

