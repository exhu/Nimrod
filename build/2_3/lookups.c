/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY55548 TY55548;
typedef struct TY107012 TY107012;
typedef struct TY55526 TY55526;
typedef struct TY55552 TY55552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY47539 TY47539;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY60104 TY60104;
typedef struct TY60106 TY60106;
typedef struct TY55530 TY55530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY55528 TY55528;
typedef struct TY105002 TY105002;
typedef struct TNimObject TNimObject;
typedef struct TY107006 TY107006;
typedef struct TY55901 TY55901;
typedef struct TY55897 TY55897;
typedef struct TY55899 TY55899;
typedef struct TY43019 TY43019;
typedef struct TY43013 TY43013;
typedef struct TY54005 TY54005;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55544 TY55544;
typedef struct TY108004 TY108004;
typedef struct TY60089 TY60089;
typedef struct TY60076 TY60076;
typedef struct TY55550 TY55550;
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
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY60104 {
NI Tos;
TY60106* Stack;
};
struct TNimObject {
TNimType* m_type;
};
struct TY105002 {
  TNimObject Sup;
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
struct TY60089 {
NI H;
TY54011* Name;
};
struct TY108004 {
NI Stackptr;
TY60089 It;
TY55548* M;
NU8 Mode;
};
struct TY60076 {
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY107006 {
TY55548* Owner;
TY55548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY9014[16];
struct TY55897 {
TY55897* Next;
NI Key;
TY9014 Bits;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
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
N_NIMCALL(TY55548*, Lookup_108245)(TY107012* C_108247, TY55526* N_108248);
N_NIMCALL(TY55548*, Symtabget_60116)(TY60104 Tab_60118, TY54011* S_60119);
N_NIMCALL(void, Limessage_47569)(TY47539 Info_47571, NU8 Msg_47572, NimStringDesc* Arg_47573);
N_NIMCALL(void, Internalerror_47574)(TY47539 Info_47576, NimStringDesc* Errmsg_47577);
N_NIMCALL(NIM_BOOL, Intsetcontains_55911)(TY55901 S_55913, NI Key_55914);
N_NIMCALL(void, Loadstub_93070)(TY55548* S_93072);
N_NIMCALL(TY55548*, Initidentiter_60092)(TY60089* Ti_60095, TY55530* Tab_60096, TY54011* S_60097);
N_NIMCALL(TY55548*, Qualifiedlookup_108322)(TY107012* C_108324, TY55526* N_108325, NU8 Flags_108327);
N_NIMCALL(TY55548*, Strtableget_60066)(TY55530* T_60068, TY54011* Name_60069);
N_NIMCALL(NimStringDesc*, Rendertree_85042)(TY55526* N_85044, NU8 Renderflags_85047);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13426, void* Src_13427);
N_NIMCALL(TY55548*, Initoverloaditer_108734)(TY108004* O_108737, TY107012* C_108738, TY55526* N_108739);
N_NIMCALL(TY55548*, Nextoverloaditer_109063)(TY108004* O_109066, TY107012* C_109067, TY55526* N_109068);
N_NIMCALL(TY55548*, Nextidentiter_60098)(TY60089* Ti_60101, TY55530* Tab_60102);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(NU8, Symtabaddunique_60135)(TY60104* Tab_60138, TY55548* E_60139);
N_NIMCALL(NU8, Symtabadduniqueat_60140)(TY60104* Tab_60143, TY55548* E_60144, NI At_60145);
N_NIMCALL(void, Internalerror_47578)(NimStringDesc* Errmsg_47580);
N_NIMCALL(TY55548*, Inittabiter_60078)(TY60076* Ti_60081, TY55530* Tab_60082);
N_NIMCALL(NimStringDesc*, Getsymrepr_108014)(TY55548* S_108016);
N_NIMCALL(NimStringDesc*, Getprocheader_97018)(TY55548* Sym_97020);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18912);
N_NIMCALL(TY55548*, Nextiter_60083)(TY60076* Ti_60086, TY55530* Tab_60087);
N_NIMCALL(void, Rawclosescope_60150)(TY60104* Tab_60153);
N_NIMCALL(void, Adddecl_108114)(TY107012* C_108116, TY55548* Sym_108117);
N_NIMCALL(void, Addinterfacedeclaux_108143)(TY107012* C_108145, TY55548* Sym_108146);
N_NIMCALL(void, Strtableadd_60061)(TY55530* T_60064, TY55548* N_60065);
N_NIMCALL(TY55548*, Getcurrowner_107107)(void);
N_NIMCALL(void, Addoverloadablesymat_108196)(TY107012* C_108198, TY55548* Fn_108199, NI At_108200);
N_NIMCALL(void, Symtabaddat_60129)(TY60104* Tab_60132, TY55548* E_60133, NI At_60134);
N_NIMCALL(void, Adddeclat_108128)(TY107012* C_108130, TY55548* Sym_108131, NI At_108132);
STRING_LITERAL(TMP195927, "lookUp", 6);
STRING_LITERAL(TMP196116, "CloseScope", 10);
STRING_LITERAL(TMP196142, "AddInterfaceDeclAux", 19);
STRING_LITERAL(TMP196169, "addOverloadableSymAt", 20);
N_NIMCALL(TY55548*, Lookup_108245)(TY107012* C_108247, TY55526* N_108248) {
TY55548* Result_108249;
NIM_BOOL LOC5;
Result_108249 = 0;
switch ((*N_108248).Kind) {
case ((NU8) 43):
Result_108249 = Lookup_108245(C_108247, (*N_108248).KindU.S6.Sons->data[0]);
break;
case ((NU8) 3):
Result_108249 = (*N_108248).KindU.S4.Sym;
break;
case ((NU8) 2):
Result_108249 = Symtabget_60116((*C_108247).Tab, (*N_108248).KindU.S5.Ident);
if (!(Result_108249 == NIM_NIL)) goto LA2;
Limessage_47569((*N_108248).Info, ((NU8) 58), (*(*N_108248).KindU.S5.Ident).S);
LA2: ;
break;
default:
Internalerror_47574((*N_108248).Info, ((NimStringDesc*) &TMP195927));
break;
}
LOC5 = Intsetcontains_55911((*C_108247).Ambiguoussymbols, (*Result_108249).Sup.Id);
if (!LOC5) goto LA6;
Limessage_47569((*N_108248).Info, ((NU8) 59), (*(*Result_108249).Name).S);
LA6: ;
if (!((*Result_108249).Kind == ((NU8) 20))) goto LA9;
Loadstub_93070(Result_108249);
LA9: ;
return Result_108249;
}
N_NIMCALL(TY55548*, Qualifiedlookup_108322)(TY107012* C_108324, TY55526* N_108325, NU8 Flags_108327) {
TY55548* Result_108328;
NIM_BOOL LOC2;
NIM_BOOL LOC6;
NIM_BOOL LOC11;
TY55548* M_108456;
NIM_BOOL LOC16;
TY54011* Ident_108477;
NIM_BOOL LOC23;
NIM_BOOL LOC34;
NimStringDesc* LOC40;
NIM_BOOL LOC42;
Result_108328 = 0;
switch ((*N_108325).Kind) {
case ((NU8) 2):
Result_108328 = Symtabget_60116((*C_108324).Tab, (*N_108325).KindU.S5.Ident);
LOC2 = (Result_108328 == NIM_NIL);
if (!(LOC2)) goto LA3;
LOC2 = ((Flags_108327 &(1<<((((NU8) 1))&7)))!=0);
LA3: ;
if (!LOC2) goto LA4;
Limessage_47569((*N_108325).Info, ((NU8) 58), (*(*N_108325).KindU.S5.Ident).S);
goto LA1;
LA4: ;
LOC6 = ((Flags_108327 &(1<<((((NU8) 0))&7)))!=0);
if (!(LOC6)) goto LA7;
LOC6 = Intsetcontains_55911((*C_108324).Ambiguoussymbols, (*Result_108328).Sup.Id);
LA7: ;
if (!LOC6) goto LA8;
Limessage_47569((*N_108325).Info, ((NU8) 59), (*(*N_108325).KindU.S5.Ident).S);
goto LA1;
LA8: ;
LA1: ;
break;
case ((NU8) 3):
Result_108328 = (*N_108325).KindU.S4.Sym;
LOC11 = ((Flags_108327 &(1<<((((NU8) 0))&7)))!=0);
if (!(LOC11)) goto LA12;
LOC11 = Intsetcontains_55911((*C_108324).Ambiguoussymbols, (*Result_108328).Sup.Id);
LA12: ;
if (!LOC11) goto LA13;
Limessage_47569((*N_108325).Info, ((NU8) 59), (*(*(*N_108325).KindU.S4.Sym).Name).S);
LA13: ;
break;
case ((NU8) 36):
Result_108328 = NIM_NIL;
M_108456 = 0;
M_108456 = Qualifiedlookup_108322(C_108324, (*N_108325).KindU.S6.Sons->data[0], (Flags_108327 & 2));
LOC16 = !((M_108456 == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = ((*M_108456).Kind == ((NU8) 6));
LA17: ;
if (!LOC16) goto LA18;
Ident_108477 = 0;
Ident_108477 = NIM_NIL;
if (!((*(*N_108325).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA21;
Ident_108477 = (*(*N_108325).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA20;
LA21: ;
LOC23 = ((*(*N_108325).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC23)) goto LA24;
LOC23 = ((*(*(*N_108325).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA24: ;
if (!LOC23) goto LA25;
Ident_108477 = (*(*(*N_108325).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA20;
LA25: ;
LA20: ;
if (!!((Ident_108477 == NIM_NIL))) goto LA28;
if (!(M_108456 == (*C_108324).Module)) goto LA31;
Result_108328 = Strtableget_60066(&(*C_108324).Tab.Stack->data[1], Ident_108477);
goto LA30;
LA31: ;
Result_108328 = Strtableget_60066(&(*M_108456).Tab, Ident_108477);
LA30: ;
LOC34 = (Result_108328 == NIM_NIL);
if (!(LOC34)) goto LA35;
LOC34 = ((Flags_108327 &(1<<((((NU8) 1))&7)))!=0);
LA35: ;
if (!LOC34) goto LA36;
Limessage_47569((*(*N_108325).KindU.S6.Sons->data[1]).Info, ((NU8) 58), (*Ident_108477).S);
LA36: ;
goto LA27;
LA28: ;
if (!((Flags_108327 &(1<<((((NU8) 1))&7)))!=0)) goto LA38;
LOC40 = 0;
LOC40 = Rendertree_85042((*N_108325).KindU.S6.Sons->data[1], 0);
Limessage_47569((*(*N_108325).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC40);
goto LA27;
LA38: ;
LA27: ;
LA18: ;
break;
case ((NU8) 43):
Result_108328 = Qualifiedlookup_108322(C_108324, (*N_108325).KindU.S6.Sons->data[0], Flags_108327);
break;
default:
Result_108328 = NIM_NIL;
break;
}
LOC42 = !((Result_108328 == NIM_NIL));
if (!(LOC42)) goto LA43;
LOC42 = ((*Result_108328).Kind == ((NU8) 20));
LA43: ;
if (!LOC42) goto LA44;
Loadstub_93070(Result_108328);
LA44: ;
return Result_108328;
}
N_NIMCALL(TY55548*, Initoverloaditer_108734)(TY108004* O_108737, TY107012* C_108738, TY55526* N_108739) {
TY55548* Result_108740;
TY54011* Ident_108741;
NIM_BOOL LOC6;
NIM_BOOL LOC13;
NimStringDesc* LOC23;
NIM_BOOL LOC25;
Result_108740 = 0;
Ident_108741 = 0;
Result_108740 = NIM_NIL;
switch ((*N_108739).Kind) {
case ((NU8) 2):
(*O_108737).Stackptr = ((NI) ((*C_108738).Tab.Tos));
(*O_108737).Mode = ((NU8) 1);
while (1) {
if (!(Result_108740 == NIM_NIL)) goto LA1;
(*O_108737).Stackptr -= 1;
if (!((*O_108737).Stackptr < 0)) goto LA3;
goto LA1;
LA3: ;
Result_108740 = Initidentiter_60092(&(*O_108737).It, &(*C_108738).Tab.Stack->data[(*O_108737).Stackptr], (*N_108739).KindU.S5.Ident);
} LA1: ;
break;
case ((NU8) 3):
Result_108740 = (*N_108739).KindU.S4.Sym;
(*O_108737).Mode = ((NU8) 0);
break;
case ((NU8) 36):
(*O_108737).Mode = ((NU8) 3);
unsureAsgnRef((void**) &(*O_108737).M, Qualifiedlookup_108322(C_108738, (*N_108739).KindU.S6.Sons->data[0], 2));
LOC6 = !(((*O_108737).M == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*O_108737).M).Kind == ((NU8) 6));
LA7: ;
if (!LOC6) goto LA8;
Ident_108741 = NIM_NIL;
if (!((*(*N_108739).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA11;
Ident_108741 = (*(*N_108739).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA10;
LA11: ;
LOC13 = ((*(*N_108739).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC13)) goto LA14;
LOC13 = ((*(*(*N_108739).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA14: ;
if (!LOC13) goto LA15;
Ident_108741 = (*(*(*N_108739).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA10;
LA15: ;
LA10: ;
if (!!((Ident_108741 == NIM_NIL))) goto LA18;
if (!((*O_108737).M == (*C_108738).Module)) goto LA21;
Result_108740 = Initidentiter_60092(&(*O_108737).It, &(*C_108738).Tab.Stack->data[1], Ident_108741);
(*O_108737).Mode = ((NU8) 2);
goto LA20;
LA21: ;
Result_108740 = Initidentiter_60092(&(*O_108737).It, &(*(*O_108737).M).Tab, Ident_108741);
LA20: ;
goto LA17;
LA18: ;
LOC23 = 0;
LOC23 = Rendertree_85042((*N_108739).KindU.S6.Sons->data[1], 0);
Limessage_47569((*(*N_108739).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC23);
LA17: ;
LA8: ;
break;
case ((NU8) 43):
Result_108740 = Initoverloaditer_108734(O_108737, C_108738, (*N_108739).KindU.S6.Sons->data[0]);
break;
case ((NU8) 46):
(*O_108737).Mode = ((NU8) 4);
Result_108740 = (*(*N_108739).KindU.S6.Sons->data[0]).KindU.S4.Sym;
(*O_108737).Stackptr = 1;
break;
default:
break;
}
LOC25 = !((Result_108740 == NIM_NIL));
if (!(LOC25)) goto LA26;
LOC25 = ((*Result_108740).Kind == ((NU8) 20));
LA26: ;
if (!LOC25) goto LA27;
Loadstub_93070(Result_108740);
LA27: ;
return Result_108740;
}
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
N_NIMCALL(TY55548*, Nextoverloaditer_109063)(TY108004* O_109066, TY107012* C_109067, TY55526* N_109068) {
TY55548* Result_109069;
NI LOC11;
NIM_BOOL LOC15;
Result_109069 = 0;
switch ((*O_109066).Mode) {
case ((NU8) 0):
Result_109069 = NIM_NIL;
break;
case ((NU8) 1):
if (!((*N_109068).Kind == ((NU8) 43))) goto LA2;
Result_109069 = Nextoverloaditer_109063(O_109066, C_109067, (*N_109068).KindU.S6.Sons->data[0]);
goto LA1;
LA2: ;
if (!(0 <= (*O_109066).Stackptr)) goto LA4;
Result_109069 = Nextidentiter_60098(&(*O_109066).It, &(*C_109067).Tab.Stack->data[(*O_109066).Stackptr]);
while (1) {
if (!(Result_109069 == NIM_NIL)) goto LA6;
(*O_109066).Stackptr -= 1;
if (!((*O_109066).Stackptr < 0)) goto LA8;
goto LA6;
LA8: ;
Result_109069 = Initidentiter_60092(&(*O_109066).It, &(*C_109067).Tab.Stack->data[(*O_109066).Stackptr], (*O_109066).It.Name);
} LA6: ;
goto LA1;
LA4: ;
Result_109069 = NIM_NIL;
LA1: ;
break;
case ((NU8) 2):
Result_109069 = Nextidentiter_60098(&(*O_109066).It, &(*C_109067).Tab.Stack->data[1]);
break;
case ((NU8) 3):
Result_109069 = Nextidentiter_60098(&(*O_109066).It, &(*(*O_109066).M).Tab);
break;
case ((NU8) 4):
LOC11 = Sonslen_55804(N_109068);
if (!((*O_109066).Stackptr < LOC11)) goto LA12;
Result_109069 = (*(*N_109068).KindU.S6.Sons->data[(*O_109066).Stackptr]).KindU.S4.Sym;
(*O_109066).Stackptr += 1;
goto LA10;
LA12: ;
Result_109069 = NIM_NIL;
LA10: ;
break;
}
LOC15 = !((Result_109069 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = ((*Result_109069).Kind == ((NU8) 20));
LA16: ;
if (!LOC15) goto LA17;
Loadstub_93070(Result_109069);
LA17: ;
return Result_109069;
}
N_NIMCALL(void, Adddecl_108114)(TY107012* C_108116, TY55548* Sym_108117) {
NU8 LOC2;
LOC2 = Symtabaddunique_60135(&(*C_108116).Tab, Sym_108117);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_47569((*Sym_108117).Info, ((NU8) 37), (*(*Sym_108117).Name).S);
LA3: ;
}
N_NIMCALL(void, Adddeclat_108128)(TY107012* C_108130, TY55548* Sym_108131, NI At_108132) {
NU8 LOC2;
LOC2 = Symtabadduniqueat_60140(&(*C_108130).Tab, Sym_108131, At_108132);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_47569((*Sym_108131).Info, ((NU8) 37), (*(*Sym_108131).Name).S);
LA3: ;
}
N_NIMCALL(NimStringDesc*, Getsymrepr_108014)(TY55548* S_108016) {
NimStringDesc* Result_108017;
Result_108017 = 0;
switch ((*S_108016).Kind) {
case ((NU8) 10):
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 12):
Result_108017 = Getprocheader_97018(S_108016);
break;
default:
Result_108017 = copyString((*(*S_108016).Name).S);
break;
}
return Result_108017;
}
N_NIMCALL(void, Closescope_108018)(TY60104* Tab_108021) {
TY60076 It_108022;
TY55548* S_108023;
NimStringDesc* LOC8;
NIM_BOOL LOC9;
NimStringDesc* LOC16;
memset((void*)&It_108022, 0, sizeof(It_108022));
S_108023 = 0;
if (!((*Tab_108021).Stack->Sup.len < ((NI) ((*Tab_108021).Tos)))) goto LA2;
Internalerror_47578(((NimStringDesc*) &TMP196116));
LA2: ;
S_108023 = Inittabiter_60078(&It_108022, &(*Tab_108021).Stack->data[(NI32)(((NI) ((*Tab_108021).Tos)) - 1)]);
while (1) {
if (!!((S_108023 == NIM_NIL))) goto LA4;
if (!(((*S_108023).Flags &(1<<((((NU8) 6))&31)))!=0)) goto LA6;
LOC8 = 0;
LOC8 = Getsymrepr_108014(S_108023);
Limessage_47569((*S_108023).Info, ((NU8) 135), LOC8);
goto LA5;
LA6: ;
LOC9 = ((150994944 & (*S_108023).Flags) == 0);
if (!(LOC9)) goto LA10;
LOC9 = (((*S_108023).Options &(1<<((((NU8) 12))&31)))!=0);
LA10: ;
if (!LOC9) goto LA11;
if (!!(((151520256 &(1<<(((*S_108023).Kind)&31)))!=0))) goto LA14;
LOC16 = 0;
LOC16 = Getsymrepr_108014(S_108023);
Limessage_47569((*S_108023).Info, ((NU8) 227), LOC16);
LA14: ;
goto LA5;
LA11: ;
LA5: ;
S_108023 = Nextiter_60083(&It_108022, &(*Tab_108021).Stack->data[(NI32)(((NI) ((*Tab_108021).Tos)) - 1)]);
} LA4: ;
Rawclosescope_60150(Tab_108021);
}
N_NIMCALL(void, Addinterfacedeclaux_108143)(TY107012* C_108145, TY55548* Sym_108146) {
TY55548* LOC8;
if (!(((*Sym_108146).Flags &(1<<((((NU8) 3))&31)))!=0)) goto LA2;
if (!((*C_108145).Module == NIM_NIL)) goto LA5;
Internalerror_47574((*Sym_108146).Info, ((NimStringDesc*) &TMP196142));
LA5: ;
Strtableadd_60061(&(*(*C_108145).Module).Tab, Sym_108146);
LA2: ;
LOC8 = 0;
LOC8 = Getcurrowner_107107();
if (!((*LOC8).Kind == ((NU8) 6))) goto LA9;
(*Sym_108146).Flags |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
LA9: ;
}
N_NIMCALL(void, Addinterfacedecl_108236)(TY107012* C_108238, TY55548* Sym_108239) {
Adddecl_108114(C_108238, Sym_108239);
Addinterfacedeclaux_108143(C_108238, Sym_108239);
}
N_NIMCALL(void, Addoverloadablesymat_108196)(TY107012* C_108198, TY55548* Fn_108199, NI At_108200) {
TY55548* Check_108212;
NIM_BOOL LOC5;
if (!!(((1077673984 &(1<<(((*Fn_108199).Kind)&31)))!=0))) goto LA2;
Internalerror_47574((*Fn_108199).Info, ((NimStringDesc*) &TMP196169));
LA2: ;
Check_108212 = 0;
Check_108212 = Strtableget_60066(&(*C_108198).Tab.Stack->data[At_108200], (*Fn_108199).Name);
LOC5 = !((Check_108212 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !(((1077673984 &(1<<(((*Check_108212).Kind)&31)))!=0));
LA6: ;
if (!LOC5) goto LA7;
Limessage_47569((*Fn_108199).Info, ((NU8) 37), (*(*Fn_108199).Name).S);
LA7: ;
Symtabaddat_60129(&(*C_108198).Tab, Fn_108199, At_108200);
}
N_NIMCALL(void, Addinterfaceoverloadablesymat_108240)(TY107012* C_108242, TY55548* Sym_108243, NI At_108244) {
Addoverloadablesymat_108196(C_108242, Sym_108243, ((NI) (At_108244)));
Addinterfacedeclaux_108143(C_108242, Sym_108243);
}
N_NIMCALL(void, Addinterfacedeclat_108191)(TY107012* C_108193, TY55548* Sym_108194, NI At_108195) {
Adddeclat_108128(C_108193, Sym_108194, At_108195);
Addinterfacedeclaux_108143(C_108193, Sym_108194);
}
N_NOINLINE(void, lookupsInit)(void) {
}

