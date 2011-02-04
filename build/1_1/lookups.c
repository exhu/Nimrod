/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY51548 TY51548;
typedef struct TY104012 TY104012;
typedef struct TY51526 TY51526;
typedef struct TY51552 TY51552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY43539 TY43539;
typedef struct TY50011 TY50011;
typedef struct TY51520 TY51520;
typedef struct TY56104 TY56104;
typedef struct TY56106 TY56106;
typedef struct TY51530 TY51530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51528 TY51528;
typedef struct TY102002 TY102002;
typedef struct TNimObject TNimObject;
typedef struct TY104006 TY104006;
typedef struct TY51901 TY51901;
typedef struct TY51897 TY51897;
typedef struct TY51899 TY51899;
typedef struct TY39019 TY39019;
typedef struct TY39013 TY39013;
typedef struct TY50005 TY50005;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY105004 TY105004;
typedef struct TY56089 TY56089;
typedef struct TY56076 TY56076;
typedef struct TY51550 TY51550;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY43539 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY51526 {
TY51552* Typ;
NimStringDesc* Comment;
TY43539 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY51548* Sym;
} S4;
struct {TY50011* Ident;
} S5;
struct {TY51520* Sons;
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
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
};
struct TY56104 {
NI Tos;
TY56106* Stack;
};
struct TNimObject {
TNimType* m_type;
};
struct TY102002 {
  TNimObject Sup;
};
struct TY51901 {
NI Counter;
NI Max;
TY51897* Head;
TY51899* Data;
};
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY51526*, TY104032) (TY104012* C_104033, TY51526* N_104034);
typedef N_NIMCALL_PTR(TY51526*, TY104037) (TY104012* C_104038, TY51526* N_104039);
struct TY104012 {
  TY102002 Sup;
TY51548* Module;
TY104006* P;
NI Instcounter;
TY51526* Generics;
NI Lastgenericidx;
TY56104 Tab;
TY51901 Ambiguoussymbols;
TY51528* Converters;
TY39019 Optionstack;
TY39019 Libs;
NIM_BOOL Fromcache;
TY104032 Semconstexpr;
TY104037 Semexpr;
TY51901 Includedfiles;
NimStringDesc* Filename;
TY51530 Userpragmas;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
struct TY51540 {
NU8 K;
NU8 S;
NU8 Flags;
TY51552* T;
TY48008* R;
NI A;
};
struct TY51548 {
  TY50005 Sup;
NU8 Kind;
NU8 Magic;
TY51552* Typ;
TY50011* Name;
TY43539 Info;
TY51548* Owner;
NU32 Flags;
TY51530 Tab;
TY51526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY51540 Loc;
TY51544* Annex;
};
struct TY56089 {
NI H;
TY50011* Name;
};
struct TY105004 {
NI Stackptr;
TY56089 It;
TY51548* M;
NU8 Mode;
};
struct TY56076 {
NI H;
};
struct TY51552 {
  TY50005 Sup;
NU8 Kind;
TY51550* Sons;
TY51526* N;
NU8 Flags;
NU8 Callconv;
TY51548* Owner;
TY51548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY51540 Loc;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY104006 {
TY51548* Owner;
TY51548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8814[16];
struct TY51897 {
TY51897* Next;
NI Key;
TY8814 Bits;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY51544 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51526* Path;
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY56106 {
  TGenericSeq Sup;
  TY51530 data[SEQ_DECL_SIZE];
};
struct TY51899 {
  TGenericSeq Sup;
  TY51897* data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY51548*, Lookup_105245)(TY104012* C_105247, TY51526* N_105248);
N_NIMCALL(TY51548*, Symtabget_56116)(TY56104 Tab_56118, TY50011* S_56119);
N_NIMCALL(void, Limessage_43569)(TY43539 Info_43571, NU8 Msg_43572, NimStringDesc* Arg_43573);
N_NIMCALL(void, Internalerror_43574)(TY43539 Info_43576, NimStringDesc* Errmsg_43577);
N_NIMCALL(NIM_BOOL, Intsetcontains_51911)(TY51901 S_51913, NI Key_51914);
N_NIMCALL(void, Loadstub_90070)(TY51548* S_90072);
N_NIMCALL(TY51548*, Initidentiter_56092)(TY56089* Ti_56095, TY51530* Tab_56096, TY50011* S_56097);
N_NIMCALL(TY51548*, Qualifiedlookup_105322)(TY104012* C_105324, TY51526* N_105325, NU8 Flags_105327);
N_NIMCALL(TY51548*, Strtableget_56066)(TY51530* T_56068, TY50011* Name_56069);
N_NIMCALL(NimStringDesc*, Rendertree_82042)(TY51526* N_82044, NU8 Renderflags_82047);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(TY51548*, Initoverloaditer_105734)(TY105004* O_105737, TY104012* C_105738, TY51526* N_105739);
N_NIMCALL(TY51548*, Nextoverloaditer_106063)(TY105004* O_106066, TY104012* C_106067, TY51526* N_106068);
N_NIMCALL(TY51548*, Nextidentiter_56098)(TY56089* Ti_56101, TY51530* Tab_56102);
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806);
N_NIMCALL(NU8, Symtabaddunique_56135)(TY56104* Tab_56138, TY51548* E_56139);
N_NIMCALL(NU8, Symtabadduniqueat_56140)(TY56104* Tab_56143, TY51548* E_56144, NI At_56145);
N_NIMCALL(void, Internalerror_43578)(NimStringDesc* Errmsg_43580);
N_NIMCALL(TY51548*, Inittabiter_56078)(TY56076* Ti_56081, TY51530* Tab_56082);
N_NIMCALL(NimStringDesc*, Getsymrepr_105014)(TY51548* S_105016);
N_NIMCALL(NimStringDesc*, Getprocheader_94018)(TY51548* Sym_94020);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(TY51548*, Nextiter_56083)(TY56076* Ti_56086, TY51530* Tab_56087);
N_NIMCALL(void, Rawclosescope_56150)(TY56104* Tab_56153);
N_NIMCALL(void, Adddecl_105114)(TY104012* C_105116, TY51548* Sym_105117);
N_NIMCALL(void, Addinterfacedeclaux_105143)(TY104012* C_105145, TY51548* Sym_105146);
N_NIMCALL(void, Strtableadd_56061)(TY51530* T_56064, TY51548* N_56065);
N_NIMCALL(TY51548*, Getcurrowner_104107)(void);
N_NIMCALL(void, Addoverloadablesymat_105196)(TY104012* C_105198, TY51548* Fn_105199, NI At_105200);
N_NIMCALL(void, Symtabaddat_56129)(TY56104* Tab_56132, TY51548* E_56133, NI At_56134);
N_NIMCALL(void, Adddeclat_105128)(TY104012* C_105130, TY51548* Sym_105131, NI At_105132);
STRING_LITERAL(TMP192932, "lookUp", 6);
STRING_LITERAL(TMP193121, "CloseScope", 10);
STRING_LITERAL(TMP193147, "AddInterfaceDeclAux", 19);
STRING_LITERAL(TMP193174, "addOverloadableSymAt", 20);
N_NIMCALL(TY51548*, Lookup_105245)(TY104012* C_105247, TY51526* N_105248) {
TY51548* Result_105249;
NIM_BOOL LOC5;
Result_105249 = 0;
switch ((*N_105248).Kind) {
case ((NU8) 43):
Result_105249 = Lookup_105245(C_105247, (*N_105248).KindU.S6.Sons->data[0]);
break;
case ((NU8) 3):
Result_105249 = (*N_105248).KindU.S4.Sym;
break;
case ((NU8) 2):
Result_105249 = Symtabget_56116((*C_105247).Tab, (*N_105248).KindU.S5.Ident);
if (!(Result_105249 == NIM_NIL)) goto LA2;
Limessage_43569((*N_105248).Info, ((NU8) 58), (*(*N_105248).KindU.S5.Ident).S);
LA2: ;
break;
default:
Internalerror_43574((*N_105248).Info, ((NimStringDesc*) &TMP192932));
break;
}
LOC5 = Intsetcontains_51911((*C_105247).Ambiguoussymbols, (*Result_105249).Sup.Id);
if (!LOC5) goto LA6;
Limessage_43569((*N_105248).Info, ((NU8) 59), (*(*Result_105249).Name).S);
LA6: ;
if (!((*Result_105249).Kind == ((NU8) 20))) goto LA9;
Loadstub_90070(Result_105249);
LA9: ;
return Result_105249;
}
N_NIMCALL(TY51548*, Qualifiedlookup_105322)(TY104012* C_105324, TY51526* N_105325, NU8 Flags_105327) {
TY51548* Result_105328;
NIM_BOOL LOC2;
NIM_BOOL LOC6;
NIM_BOOL LOC11;
TY51548* M_105456;
NIM_BOOL LOC16;
TY50011* Ident_105477;
NIM_BOOL LOC23;
NIM_BOOL LOC34;
NimStringDesc* LOC40;
NIM_BOOL LOC42;
Result_105328 = 0;
switch ((*N_105325).Kind) {
case ((NU8) 2):
Result_105328 = Symtabget_56116((*C_105324).Tab, (*N_105325).KindU.S5.Ident);
LOC2 = (Result_105328 == NIM_NIL);
if (!(LOC2)) goto LA3;
LOC2 = ((Flags_105327 &(1<<((((NU8) 1))&7)))!=0);
LA3: ;
if (!LOC2) goto LA4;
Limessage_43569((*N_105325).Info, ((NU8) 58), (*(*N_105325).KindU.S5.Ident).S);
goto LA1;
LA4: ;
LOC6 = ((Flags_105327 &(1<<((((NU8) 0))&7)))!=0);
if (!(LOC6)) goto LA7;
LOC6 = Intsetcontains_51911((*C_105324).Ambiguoussymbols, (*Result_105328).Sup.Id);
LA7: ;
if (!LOC6) goto LA8;
Limessage_43569((*N_105325).Info, ((NU8) 59), (*(*N_105325).KindU.S5.Ident).S);
goto LA1;
LA8: ;
LA1: ;
break;
case ((NU8) 3):
Result_105328 = (*N_105325).KindU.S4.Sym;
LOC11 = ((Flags_105327 &(1<<((((NU8) 0))&7)))!=0);
if (!(LOC11)) goto LA12;
LOC11 = Intsetcontains_51911((*C_105324).Ambiguoussymbols, (*Result_105328).Sup.Id);
LA12: ;
if (!LOC11) goto LA13;
Limessage_43569((*N_105325).Info, ((NU8) 59), (*(*(*N_105325).KindU.S4.Sym).Name).S);
LA13: ;
break;
case ((NU8) 36):
Result_105328 = NIM_NIL;
M_105456 = 0;
M_105456 = Qualifiedlookup_105322(C_105324, (*N_105325).KindU.S6.Sons->data[0], (Flags_105327 & 2));
LOC16 = !((M_105456 == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = ((*M_105456).Kind == ((NU8) 6));
LA17: ;
if (!LOC16) goto LA18;
Ident_105477 = 0;
Ident_105477 = NIM_NIL;
if (!((*(*N_105325).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA21;
Ident_105477 = (*(*N_105325).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA20;
LA21: ;
LOC23 = ((*(*N_105325).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC23)) goto LA24;
LOC23 = ((*(*(*N_105325).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA24: ;
if (!LOC23) goto LA25;
Ident_105477 = (*(*(*N_105325).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA20;
LA25: ;
LA20: ;
if (!!((Ident_105477 == NIM_NIL))) goto LA28;
if (!(M_105456 == (*C_105324).Module)) goto LA31;
Result_105328 = Strtableget_56066(&(*C_105324).Tab.Stack->data[1], Ident_105477);
goto LA30;
LA31: ;
Result_105328 = Strtableget_56066(&(*M_105456).Tab, Ident_105477);
LA30: ;
LOC34 = (Result_105328 == NIM_NIL);
if (!(LOC34)) goto LA35;
LOC34 = ((Flags_105327 &(1<<((((NU8) 1))&7)))!=0);
LA35: ;
if (!LOC34) goto LA36;
Limessage_43569((*(*N_105325).KindU.S6.Sons->data[1]).Info, ((NU8) 58), (*Ident_105477).S);
LA36: ;
goto LA27;
LA28: ;
if (!((Flags_105327 &(1<<((((NU8) 1))&7)))!=0)) goto LA38;
LOC40 = 0;
LOC40 = Rendertree_82042((*N_105325).KindU.S6.Sons->data[1], 0);
Limessage_43569((*(*N_105325).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC40);
goto LA27;
LA38: ;
LA27: ;
LA18: ;
break;
case ((NU8) 43):
Result_105328 = Qualifiedlookup_105322(C_105324, (*N_105325).KindU.S6.Sons->data[0], Flags_105327);
break;
default:
Result_105328 = NIM_NIL;
break;
}
LOC42 = !((Result_105328 == NIM_NIL));
if (!(LOC42)) goto LA43;
LOC42 = ((*Result_105328).Kind == ((NU8) 20));
LA43: ;
if (!LOC42) goto LA44;
Loadstub_90070(Result_105328);
LA44: ;
return Result_105328;
}
N_NIMCALL(TY51548*, Initoverloaditer_105734)(TY105004* O_105737, TY104012* C_105738, TY51526* N_105739) {
TY51548* Result_105740;
TY50011* Ident_105741;
NIM_BOOL LOC6;
NIM_BOOL LOC13;
NimStringDesc* LOC23;
NIM_BOOL LOC25;
Result_105740 = 0;
Ident_105741 = 0;
Result_105740 = NIM_NIL;
switch ((*N_105739).Kind) {
case ((NU8) 2):
(*O_105737).Stackptr = ((NI) ((*C_105738).Tab.Tos));
(*O_105737).Mode = ((NU8) 1);
while (1) {
if (!(Result_105740 == NIM_NIL)) goto LA1;
(*O_105737).Stackptr -= 1;
if (!((*O_105737).Stackptr < 0)) goto LA3;
goto LA1;
LA3: ;
Result_105740 = Initidentiter_56092(&(*O_105737).It, &(*C_105738).Tab.Stack->data[(*O_105737).Stackptr], (*N_105739).KindU.S5.Ident);
} LA1: ;
break;
case ((NU8) 3):
Result_105740 = (*N_105739).KindU.S4.Sym;
(*O_105737).Mode = ((NU8) 0);
break;
case ((NU8) 36):
(*O_105737).Mode = ((NU8) 3);
unsureAsgnRef((void**) &(*O_105737).M, Qualifiedlookup_105322(C_105738, (*N_105739).KindU.S6.Sons->data[0], 2));
LOC6 = !(((*O_105737).M == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*O_105737).M).Kind == ((NU8) 6));
LA7: ;
if (!LOC6) goto LA8;
Ident_105741 = NIM_NIL;
if (!((*(*N_105739).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA11;
Ident_105741 = (*(*N_105739).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA10;
LA11: ;
LOC13 = ((*(*N_105739).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC13)) goto LA14;
LOC13 = ((*(*(*N_105739).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA14: ;
if (!LOC13) goto LA15;
Ident_105741 = (*(*(*N_105739).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA10;
LA15: ;
LA10: ;
if (!!((Ident_105741 == NIM_NIL))) goto LA18;
if (!((*O_105737).M == (*C_105738).Module)) goto LA21;
Result_105740 = Initidentiter_56092(&(*O_105737).It, &(*C_105738).Tab.Stack->data[1], Ident_105741);
(*O_105737).Mode = ((NU8) 2);
goto LA20;
LA21: ;
Result_105740 = Initidentiter_56092(&(*O_105737).It, &(*(*O_105737).M).Tab, Ident_105741);
LA20: ;
goto LA17;
LA18: ;
LOC23 = 0;
LOC23 = Rendertree_82042((*N_105739).KindU.S6.Sons->data[1], 0);
Limessage_43569((*(*N_105739).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC23);
LA17: ;
LA8: ;
break;
case ((NU8) 43):
Result_105740 = Initoverloaditer_105734(O_105737, C_105738, (*N_105739).KindU.S6.Sons->data[0]);
break;
case ((NU8) 46):
(*O_105737).Mode = ((NU8) 4);
Result_105740 = (*(*N_105739).KindU.S6.Sons->data[0]).KindU.S4.Sym;
(*O_105737).Stackptr = 1;
break;
default:
break;
}
LOC25 = !((Result_105740 == NIM_NIL));
if (!(LOC25)) goto LA26;
LOC25 = ((*Result_105740).Kind == ((NU8) 20));
LA26: ;
if (!LOC25) goto LA27;
Loadstub_90070(Result_105740);
LA27: ;
return Result_105740;
}
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806) {
NI Result_52886;
Result_52886 = 0;
if (!(*N_51806).KindU.S6.Sons == 0) goto LA2;
Result_52886 = 0;
goto LA1;
LA2: ;
Result_52886 = (*N_51806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_52886;
}
N_NIMCALL(TY51548*, Nextoverloaditer_106063)(TY105004* O_106066, TY104012* C_106067, TY51526* N_106068) {
TY51548* Result_106069;
NI LOC11;
NIM_BOOL LOC15;
Result_106069 = 0;
switch ((*O_106066).Mode) {
case ((NU8) 0):
Result_106069 = NIM_NIL;
break;
case ((NU8) 1):
if (!((*N_106068).Kind == ((NU8) 43))) goto LA2;
Result_106069 = Nextoverloaditer_106063(O_106066, C_106067, (*N_106068).KindU.S6.Sons->data[0]);
goto LA1;
LA2: ;
if (!(0 <= (*O_106066).Stackptr)) goto LA4;
Result_106069 = Nextidentiter_56098(&(*O_106066).It, &(*C_106067).Tab.Stack->data[(*O_106066).Stackptr]);
while (1) {
if (!(Result_106069 == NIM_NIL)) goto LA6;
(*O_106066).Stackptr -= 1;
if (!((*O_106066).Stackptr < 0)) goto LA8;
goto LA6;
LA8: ;
Result_106069 = Initidentiter_56092(&(*O_106066).It, &(*C_106067).Tab.Stack->data[(*O_106066).Stackptr], (*O_106066).It.Name);
} LA6: ;
goto LA1;
LA4: ;
Result_106069 = NIM_NIL;
LA1: ;
break;
case ((NU8) 2):
Result_106069 = Nextidentiter_56098(&(*O_106066).It, &(*C_106067).Tab.Stack->data[1]);
break;
case ((NU8) 3):
Result_106069 = Nextidentiter_56098(&(*O_106066).It, &(*(*O_106066).M).Tab);
break;
case ((NU8) 4):
LOC11 = Sonslen_51804(N_106068);
if (!((*O_106066).Stackptr < LOC11)) goto LA12;
Result_106069 = (*(*N_106068).KindU.S6.Sons->data[(*O_106066).Stackptr]).KindU.S4.Sym;
(*O_106066).Stackptr += 1;
goto LA10;
LA12: ;
Result_106069 = NIM_NIL;
LA10: ;
break;
}
LOC15 = !((Result_106069 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = ((*Result_106069).Kind == ((NU8) 20));
LA16: ;
if (!LOC15) goto LA17;
Loadstub_90070(Result_106069);
LA17: ;
return Result_106069;
}
N_NIMCALL(void, Adddecl_105114)(TY104012* C_105116, TY51548* Sym_105117) {
NU8 LOC2;
LOC2 = Symtabaddunique_56135(&(*C_105116).Tab, Sym_105117);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_43569((*Sym_105117).Info, ((NU8) 37), (*(*Sym_105117).Name).S);
LA3: ;
}
N_NIMCALL(void, Adddeclat_105128)(TY104012* C_105130, TY51548* Sym_105131, NI At_105132) {
NU8 LOC2;
LOC2 = Symtabadduniqueat_56140(&(*C_105130).Tab, Sym_105131, At_105132);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_43569((*Sym_105131).Info, ((NU8) 37), (*(*Sym_105131).Name).S);
LA3: ;
}
N_NIMCALL(NimStringDesc*, Getsymrepr_105014)(TY51548* S_105016) {
NimStringDesc* Result_105017;
Result_105017 = 0;
switch ((*S_105016).Kind) {
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 12):
Result_105017 = Getprocheader_94018(S_105016);
break;
default:
Result_105017 = copyString((*(*S_105016).Name).S);
break;
}
return Result_105017;
}
N_NIMCALL(void, Closescope_105018)(TY56104* Tab_105021) {
TY56076 It_105022;
TY51548* S_105023;
NimStringDesc* LOC8;
NIM_BOOL LOC9;
NimStringDesc* LOC16;
memset((void*)&It_105022, 0, sizeof(It_105022));
S_105023 = 0;
if (!((*Tab_105021).Stack->Sup.len < ((NI) ((*Tab_105021).Tos)))) goto LA2;
Internalerror_43578(((NimStringDesc*) &TMP193121));
LA2: ;
S_105023 = Inittabiter_56078(&It_105022, &(*Tab_105021).Stack->data[(NI32)(((NI) ((*Tab_105021).Tos)) - 1)]);
while (1) {
if (!!((S_105023 == NIM_NIL))) goto LA4;
if (!(((*S_105023).Flags &(1<<((((NU8) 6))&31)))!=0)) goto LA6;
LOC8 = 0;
LOC8 = Getsymrepr_105014(S_105023);
Limessage_43569((*S_105023).Info, ((NU8) 135), LOC8);
goto LA5;
LA6: ;
LOC9 = ((9 & (*S_105023).Flags) == 0);
if (!(LOC9)) goto LA10;
LOC9 = (((*S_105023).Options &(1<<((((NU8) 12))&31)))!=0);
LA10: ;
if (!LOC9) goto LA11;
if (!!(((264201 &(1<<(((*S_105023).Kind)&31)))!=0))) goto LA14;
LOC16 = 0;
LOC16 = Getsymrepr_105014(S_105023);
Limessage_43569((*S_105023).Info, ((NU8) 227), LOC16);
LA14: ;
goto LA5;
LA11: ;
LA5: ;
S_105023 = Nextiter_56083(&It_105022, &(*Tab_105021).Stack->data[(NI32)(((NI) ((*Tab_105021).Tos)) - 1)]);
} LA4: ;
Rawclosescope_56150(Tab_105021);
}
N_NIMCALL(void, Addinterfacedeclaux_105143)(TY104012* C_105145, TY51548* Sym_105146) {
TY51548* LOC8;
if (!(((*Sym_105146).Flags &(1<<((((NU8) 3))&31)))!=0)) goto LA2;
if (!((*C_105145).Module == NIM_NIL)) goto LA5;
Internalerror_43574((*Sym_105146).Info, ((NimStringDesc*) &TMP193147));
LA5: ;
Strtableadd_56061(&(*(*C_105145).Module).Tab, Sym_105146);
LA2: ;
LOC8 = 0;
LOC8 = Getcurrowner_104107();
if (!((*LOC8).Kind == ((NU8) 6))) goto LA9;
(*Sym_105146).Flags |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
LA9: ;
}
N_NIMCALL(void, Addinterfacedecl_105236)(TY104012* C_105238, TY51548* Sym_105239) {
Adddecl_105114(C_105238, Sym_105239);
Addinterfacedeclaux_105143(C_105238, Sym_105239);
}
N_NIMCALL(void, Addoverloadablesymat_105196)(TY104012* C_105198, TY51548* Fn_105199, NI At_105200) {
TY51548* Check_105212;
NIM_BOOL LOC5;
if (!!(((15424 &(1<<(((*Fn_105199).Kind)&31)))!=0))) goto LA2;
Internalerror_43574((*Fn_105199).Info, ((NimStringDesc*) &TMP193174));
LA2: ;
Check_105212 = 0;
Check_105212 = Strtableget_56066(&(*C_105198).Tab.Stack->data[At_105200], (*Fn_105199).Name);
LOC5 = !((Check_105212 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !(((15424 &(1<<(((*Check_105212).Kind)&31)))!=0));
LA6: ;
if (!LOC5) goto LA7;
Limessage_43569((*Fn_105199).Info, ((NU8) 37), (*(*Fn_105199).Name).S);
LA7: ;
Symtabaddat_56129(&(*C_105198).Tab, Fn_105199, At_105200);
}
N_NIMCALL(void, Addinterfaceoverloadablesymat_105240)(TY104012* C_105242, TY51548* Sym_105243, NI At_105244) {
Addoverloadablesymat_105196(C_105242, Sym_105243, ((NI) (At_105244)));
Addinterfacedeclaux_105143(C_105242, Sym_105243);
}
N_NIMCALL(void, Addinterfacedeclat_105191)(TY104012* C_105193, TY51548* Sym_105194, NI At_105195) {
Adddeclat_105128(C_105193, Sym_105194, At_105195);
Addinterfacedeclaux_105143(C_105193, Sym_105194);
}
N_NOINLINE(void, lookupsInit)(void) {
}

