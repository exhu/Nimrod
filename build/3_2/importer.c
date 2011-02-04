/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY55526 TY55526;
typedef struct TY107012 TY107012;
typedef struct TY55552 TY55552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY47539 TY47539;
typedef struct TY55548 TY55548;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY60076 TY60076;
typedef struct TY105002 TY105002;
typedef struct TY107006 TY107006;
typedef struct TY60104 TY60104;
typedef struct TY60106 TY60106;
typedef struct TY55901 TY55901;
typedef struct TY55897 TY55897;
typedef struct TY55899 TY55899;
typedef struct TY43019 TY43019;
typedef struct TY43013 TY43013;
typedef struct TY55550 TY55550;
typedef struct TY60089 TY60089;
typedef struct TY11002 TY11002;
typedef struct TY11018 TY11018;
typedef struct TY11396 TY11396;
typedef struct TY11014 TY11014;
typedef struct TY11010 TY11010;
typedef struct TY11394 TY11394;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY47539 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
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
typedef N_NIMCALL_PTR(TY55548*, TY105044) (NimStringDesc* Filename_105045);
struct TY60076 {
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
struct TY105002 {
  TNimObject Sup;
};
struct TY60104 {
NI Tos;
TY60106* Stack;
};
struct TY55901 {
NI Counter;
NI Max;
TY55897* Head;
TY55899* Data;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY55526*, TY107032) (TY107012* C_107033, TY55526* N_107034);
typedef N_NIMCALL_PTR(TY55526*, TY107037) (TY107012* C_107038, TY55526* N_107039);
struct TY107012 {
  TY105002 Sup;
TY55548* Module;
TY107006* P;
NI Instcounter;
TY55526* Generics;
NI Lastgenericidx;
TY60104 Tab;
TY55901 Ambiguoussymbols;
TY55528* Converters;
TY43019 Optionstack;
TY43019 Libs;
NIM_BOOL Fromcache;
TY107032 Semconstexpr;
TY107037 Semexpr;
TY55901 Includedfiles;
NimStringDesc* Filename;
TY55530 Userpragmas;
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
struct TY60089 {
NI H;
TY54011* Name;
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
struct TY107006 {
TY55548* Owner;
TY55548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY9014[8];
struct TY55897 {
TY55897* Next;
NI Key;
TY9014 Bits;
};
struct TY11010 {
TY11010* Next;
NI Key;
TY9014 Bits;
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY60106 {
  TGenericSeq Sup;
  TY55530 data[SEQ_DECL_SIZE];
};
struct TY55899 {
  TGenericSeq Sup;
  TY55897* data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(NimStringDesc*, Getmodulefile_110013)(TY55526* N_110015);
N_NIMCALL(NimStringDesc*, Findmodule_110016)(TY47539 Info_110018, NimStringDesc* Modulename_110019);
N_NIMCALL(NimStringDesc*, Findfile_46090)(NimStringDesc* F_46092);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_38830, NimStringDesc* Ext_38831);
N_NIMCALL(void, Limessage_47569)(TY47539 Info_47571, NU8 Msg_47572, NimStringDesc* Arg_47573);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_36856);
N_NIMCALL(void, Internalerror_47574)(TY47539 Info_47576, NimStringDesc* Errmsg_47577);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18912);
N_NIMCALL(void, Adddecl_108114)(TY107012* C_108116, TY55548* Sym_108117);
N_NIMCALL(void, Importallsymbols_110009)(TY107012* C_110011, TY55548* Frommod_110012);
N_NIMCALL(TY55548*, Inittabiter_60078)(TY60076* Ti_60081, TY55530* Tab_60082);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18999, NimStringDesc* Src_19000);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19971, TNimType* Typ_19972);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18889);
N_NIMCALL(void, Rawimportsymbol_110061)(TY107012* C_110063, TY55548* S_110064);
N_NIMCALL(TY55548*, Strtableget_60066)(TY55530* T_60068, TY54011* Name_60069);
N_NIMCALL(void, Intsetincl_55915)(TY55901* S_55918, NI Key_55919);
N_NIMCALL(void, Strtableadd_60061)(TY55530* T_60064, TY55548* N_60065);
N_NIMCALL(TY55548*, Initidentiter_60092)(TY60089* Ti_60095, TY55530* Tab_60096, TY54011* S_60097);
N_NIMCALL(TY55548*, Nextidentiter_60098)(TY60089* Ti_60101, TY55530* Tab_60102);
N_NIMCALL(void, Addconverter_107058)(TY107012* C_107060, TY55548* Conv_107061);
N_NIMCALL(TY55548*, Nextiter_60083)(TY60076* Ti_60086, TY55530* Tab_60087);
N_NIMCALL(void, Checkminsonslen_107103)(TY55526* N_107105, NI Length_107106);
N_NIMCALL(TY55526*, Newsymnode_55735)(TY55548* Sym_55737);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13418, void* Src_13419);
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12801)(TY11002* C_12803);
N_NOINLINE(void, Addzct_11801)(TY11018* S_11804, TY11002* C_11805);
N_NIMCALL(void, Importsymbol_110213)(TY107012* C_110215, TY55526* Ident_110216, TY55548* Frommod_110217);
N_NIMCALL(void, Loadstub_93070)(TY55548* S_93072);
STRING_LITERAL(TMP196180, "nim", 3);
STRING_LITERAL(TMP196181, "getModuleFile()", 15);
STRING_LITERAL(TMP196182, "", 0);
STRING_LITERAL(TMP196183, "importAllSymbols: ", 18);
STRING_LITERAL(TMP196184, "rawImportSymbol", 15);
STRING_LITERAL(TMP196186, "importSymbol", 12);
STRING_LITERAL(TMP196187, "importSymbol: 2", 15);
STRING_LITERAL(TMP196188, "importSymbol: 3", 15);
extern TY105044 Gimportmodule_105047;
extern TNimType* NTI55174; /* TSymKind */
extern TY11396 Gch_11414;
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
N_NIMCALL(NimStringDesc*, Findmodule_110016)(TY47539 Info_110018, NimStringDesc* Modulename_110019) {
NimStringDesc* Result_110020;
NimStringDesc* LOC1;
Result_110020 = 0;
LOC1 = 0;
LOC1 = nosaddFileExt(Modulename_110019, ((NimStringDesc*) &TMP196180));
Result_110020 = Findfile_46090(LOC1);
if (!((Result_110020) && (Result_110020)->Sup.len == 0)) goto LA3;
Limessage_47569(Info_110018, ((NU8) 2), Modulename_110019);
LA3: ;
return Result_110020;
}
N_NIMCALL(NimStringDesc*, Getmodulefile_110013)(TY55526* N_110015) {
NimStringDesc* Result_110024;
NimStringDesc* LOC1;
Result_110024 = 0;
switch ((*N_110015).Kind) {
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 16):
LOC1 = 0;
LOC1 = nosUnixToNativePath((*N_110015).KindU.S3.Strval);
Result_110024 = Findmodule_110016((*N_110015).Info, LOC1);
break;
case ((NU8) 2):
Result_110024 = Findmodule_110016((*N_110015).Info, (*(*N_110015).KindU.S5.Ident).S);
break;
case ((NU8) 3):
Result_110024 = Findmodule_110016((*N_110015).Info, (*(*(*N_110015).KindU.S4.Sym).Name).S);
break;
default:
Internalerror_47574((*N_110015).Info, ((NimStringDesc*) &TMP196181));
Result_110024 = copyString(((NimStringDesc*) &TMP196182));
break;
}
return Result_110024;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18999, NimStringDesc* Src_19000) {
memcpy(((NCSTRING) (&(*Dest_18999).data[((*Dest_18999).Sup.len)-0])), ((NCSTRING) ((*Src_19000).data)), ((int) ((NI64)((NI64)((*Src_19000).Sup.len + 1) * 1))));
(*Dest_18999).Sup.len += (*Src_19000).Sup.len;
}
N_NIMCALL(void, Rawimportsymbol_110061)(TY107012* C_110063, TY55548* S_110064) {
TY55548* Copy_110065;
TY55548* Check_110066;
NIM_BOOL LOC2;
TY55552* Etyp_110103;
NI J_110139;
NI HEX3Atmp_110210;
NI LOC15;
NI Res_110212;
TY55548* E_110164;
TY60089 It_110174;
Copy_110065 = 0;
Copy_110065 = S_110064;
Check_110066 = 0;
Check_110066 = Strtableget_60066(&(*C_110063).Tab.Stack->data[0], (*S_110064).Name);
LOC2 = !((Check_110066 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Check_110066).Sup.Id == (*Copy_110065).Sup.Id));
LA3: ;
if (!LOC2) goto LA4;
if (!!(((15424 &(1<<(((*S_110064).Kind)&31)))!=0))) goto LA7;
Intsetincl_55915(&(*C_110063).Ambiguoussymbols, (*Copy_110065).Sup.Id);
Intsetincl_55915(&(*C_110063).Ambiguoussymbols, (*Check_110066).Sup.Id);
LA7: ;
LA4: ;
Strtableadd_60061(&(*C_110063).Tab.Stack->data[0], Copy_110065);
if (!((*S_110064).Kind == ((NU8) 7))) goto LA10;
Etyp_110103 = 0;
Etyp_110103 = (*S_110064).Typ;
if (!((16386 &(IL64(1)<<(((*Etyp_110103).Kind)&IL64(63))))!=0)) goto LA13;
J_110139 = 0;
HEX3Atmp_110210 = 0;
LOC15 = Sonslen_55804((*Etyp_110103).N);
HEX3Atmp_110210 = (NI64)(LOC15 - 1);
Res_110212 = 0;
Res_110212 = 0;
while (1) {
if (!(Res_110212 <= HEX3Atmp_110210)) goto LA16;
J_110139 = Res_110212;
E_110164 = 0;
E_110164 = (*(*(*Etyp_110103).N).KindU.S6.Sons->data[J_110139]).KindU.S4.Sym;
if (!!(((*E_110164).Kind == ((NU8) 17)))) goto LA18;
Internalerror_47574((*S_110064).Info, ((NimStringDesc*) &TMP196184));
LA18: ;
memset((void*)&It_110174, 0, sizeof(It_110174));
Check_110066 = Initidentiter_60092(&It_110174, &(*C_110063).Tab.Stack->data[0], (*E_110164).Name);
while (1) {
if (!!((Check_110066 == NIM_NIL))) goto LA20;
if (!((*Check_110066).Sup.Id == (*E_110164).Sup.Id)) goto LA22;
E_110164 = NIM_NIL;
goto LA20;
LA22: ;
Check_110066 = Nextidentiter_60098(&It_110174, &(*C_110063).Tab.Stack->data[0]);
} LA20: ;
if (!!((E_110164 == NIM_NIL))) goto LA25;
Rawimportsymbol_110061(C_110063, E_110164);
LA25: ;
Res_110212 += 1;
} LA16: ;
LA13: ;
goto LA9;
LA10: ;
if (!((*S_110064).Kind == ((NU8) 13))) goto LA27;
Addconverter_107058(C_110063, S_110064);
goto LA9;
LA27: ;
LA9: ;
}
N_NIMCALL(void, Importallsymbols_110009)(TY107012* C_110011, TY55548* Frommod_110012) {
TY60076 I_110304;
TY55548* S_110306;
NimStringDesc* LOC11;
memset((void*)&I_110304, 0, sizeof(I_110304));
S_110306 = 0;
S_110306 = Inittabiter_60078(&I_110304, &(*Frommod_110012).Tab);
while (1) {
if (!!((S_110306 == NIM_NIL))) goto LA1;
if (!!(((*S_110306).Kind == ((NU8) 6)))) goto LA3;
if (!!(((*S_110306).Kind == ((NU8) 17)))) goto LA6;
if (!!(((1113984 &(1<<(((*S_110306).Kind)&31)))!=0))) goto LA9;
LOC11 = 0;
LOC11 = rawNewString(reprEnum((*S_110306).Kind, NTI55174)->Sup.len + 18);
appendString(LOC11, ((NimStringDesc*) &TMP196183));
appendString(LOC11, reprEnum((*S_110306).Kind, NTI55174));
Internalerror_47574((*S_110306).Info, LOC11);
LA9: ;
Rawimportsymbol_110061(C_110011, S_110306);
LA6: ;
LA3: ;
S_110306 = Nextiter_60083(&I_110304, &(*Frommod_110012).Tab);
} LA1: ;
}
N_NIMCALL(TY55526*, Evalimport_110001)(TY107012* C_110003, TY55526* N_110004) {
TY55526* Result_110360;
NI I_110369;
NI HEX3Atmp_110407;
NI LOC1;
NI Res_110409;
NimStringDesc* F_110382;
TY55548* M_110383;
Result_110360 = 0;
Result_110360 = N_110004;
I_110369 = 0;
HEX3Atmp_110407 = 0;
LOC1 = Sonslen_55804(N_110004);
HEX3Atmp_110407 = (NI64)(LOC1 - 1);
Res_110409 = 0;
Res_110409 = 0;
while (1) {
if (!(Res_110409 <= HEX3Atmp_110407)) goto LA2;
I_110369 = Res_110409;
F_110382 = 0;
F_110382 = Getmodulefile_110013((*N_110004).KindU.S6.Sons->data[I_110369]);
M_110383 = 0;
M_110383 = Gimportmodule_105047(F_110382);
if (!(((*M_110383).Flags &(1<<((((NU8) 22))&31)))!=0)) goto LA4;
Limessage_47569((*(*N_110004).KindU.S6.Sons->data[I_110369]).Info, ((NU8) 215), (*(*M_110383).Name).S);
LA4: ;
Adddecl_108114(C_110003, M_110383);
Importallsymbols_110009(C_110003, M_110383);
Res_110409 += 1;
} LA2: ;
return Result_110360;
}
static N_INLINE(TY11002*, Usrtocell_11812)(void* Usr_11814) {
TY11002* Result_11815;
Result_11815 = 0;
Result_11815 = ((TY11002*) ((NI64)((NU64)(((NI) (Usr_11814))) - (NU64)(((NI) (((NI)sizeof(TY11002))))))));
return Result_11815;
}
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405) {
NI Result_8007;
Result_8007 = 0;
(*Memloc_3404) += X_3405;
Result_8007 = (*Memloc_3404);
return Result_8007;
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
N_NIMCALL(void, Importsymbol_110213)(TY107012* C_110215, TY55526* Ident_110216, TY55548* Frommod_110217) {
TY55548* S_110239;
TY60089 It_110283;
TY55548* E_110285;
if (!!(((*Ident_110216).Kind == ((NU8) 2)))) goto LA2;
Internalerror_47574((*Ident_110216).Info, ((NimStringDesc*) &TMP196186));
LA2: ;
S_110239 = 0;
S_110239 = Strtableget_60066(&(*Frommod_110217).Tab, (*Ident_110216).KindU.S5.Ident);
if (!(S_110239 == NIM_NIL)) goto LA5;
Limessage_47569((*Ident_110216).Info, ((NU8) 58), (*(*Ident_110216).KindU.S5.Ident).S);
LA5: ;
if (!((*S_110239).Kind == ((NU8) 20))) goto LA8;
Loadstub_93070(S_110239);
LA8: ;
if (!!(((1113984 &(1<<(((*S_110239).Kind)&31)))!=0))) goto LA11;
Internalerror_47574((*Ident_110216).Info, ((NimStringDesc*) &TMP196187));
LA11: ;
switch ((*S_110239).Kind) {
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 12):
case ((NU8) 14):
case ((NU8) 15):
case ((NU8) 13):
memset((void*)&It_110283, 0, sizeof(It_110283));
E_110285 = 0;
E_110285 = Initidentiter_60092(&It_110283, &(*Frommod_110217).Tab, (*S_110239).Name);
while (1) {
if (!!((E_110285 == NIM_NIL))) goto LA13;
if (!!(((*(*E_110285).Name).Sup.Id == (*(*S_110239).Name).Sup.Id))) goto LA15;
Internalerror_47574((*Ident_110216).Info, ((NimStringDesc*) &TMP196188));
LA15: ;
Rawimportsymbol_110061(C_110215, E_110285);
E_110285 = Nextidentiter_60098(&It_110283, &(*Frommod_110217).Tab);
} LA13: ;
break;
default:
Rawimportsymbol_110061(C_110215, S_110239);
break;
}
}
N_NIMCALL(TY55526*, Evalfrom_110005)(TY107012* C_110007, TY55526* N_110008) {
TY55526* Result_110414;
NimStringDesc* F_110427;
TY55548* M_110428;
NI I_110449;
NI HEX3Atmp_110462;
NI LOC1;
NI Res_110464;
Result_110414 = 0;
Result_110414 = N_110008;
Checkminsonslen_107103(N_110008, 2);
F_110427 = 0;
F_110427 = Getmodulefile_110013((*N_110008).KindU.S6.Sons->data[0]);
M_110428 = 0;
M_110428 = Gimportmodule_105047(F_110427);
asgnRefNoCycle((void**) &(*N_110008).KindU.S6.Sons->data[0], Newsymnode_55735(M_110428));
Adddecl_108114(C_110007, M_110428);
I_110449 = 0;
HEX3Atmp_110462 = 0;
LOC1 = Sonslen_55804(N_110008);
HEX3Atmp_110462 = (NI64)(LOC1 - 1);
Res_110464 = 0;
Res_110464 = 1;
while (1) {
if (!(Res_110464 <= HEX3Atmp_110462)) goto LA2;
I_110449 = Res_110464;
Importsymbol_110213(C_110007, (*N_110008).KindU.S6.Sons->data[I_110449], M_110428);
Res_110464 += 1;
} LA2: ;
return Result_110414;
}
N_NOINLINE(void, importerInit)(void) {
}

