/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY53545 TY53545;
typedef struct TY103012 TY103012;
typedef struct TY53523 TY53523;
typedef struct TY53549 TY53549;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY45532 TY45532;
typedef struct TY52011 TY52011;
typedef struct TY53517 TY53517;
typedef struct TY57107 TY57107;
typedef struct TY57109 TY57109;
typedef struct TY53527 TY53527;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53525 TY53525;
typedef struct TY101002 TY101002;
typedef struct TNimObject TNimObject;
typedef struct TY103006 TY103006;
typedef struct TY53898 TY53898;
typedef struct TY53894 TY53894;
typedef struct TY53896 TY53896;
typedef struct TY41019 TY41019;
typedef struct TY41013 TY41013;
typedef struct TY52005 TY52005;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY53541 TY53541;
typedef struct TY104004 TY104004;
typedef struct TY57092 TY57092;
typedef struct TY57079 TY57079;
typedef struct TY53547 TY53547;
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
struct TY53527 {
TNimType* m_type;
NI Counter;
TY53525* Data;
};
struct TY57107 {
NI Tos;
TY57109* Stack;
};
struct TNimObject {
TNimType* m_type;
};
struct TY101002 {
  TNimObject Sup;
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
struct TY57092 {
NI H;
TY52011* Name;
};
struct TY104004 {
NI Stackptr;
TY57092 It;
TY53545* M;
NU8 Mode;
};
struct TY57079 {
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY103006 {
TY53545* Owner;
TY53545* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8414[16];
struct TY53894 {
TY53894* Next;
NI Key;
TY8414 Bits;
};
struct TY41013 {
  TNimObject Sup;
TY41013* Prev;
TY41013* Next;
};
struct TY50008 {
  TNimObject Sup;
TY50008* Left;
TY50008* Right;
NI Length;
NimStringDesc* Data;
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
N_NIMCALL(TY53545*, Lookup_104049)(TY103012* C_104051, TY53523* N_104052);
N_NIMCALL(TY53545*, Symtabget_57119)(TY57107 Tab_57121, TY52011* S_57122);
N_NIMCALL(void, Limessage_45562)(TY45532 Info_45564, NU8 Msg_45565, NimStringDesc* Arg_45566);
N_NIMCALL(void, Internalerror_45567)(TY45532 Info_45569, NimStringDesc* Errmsg_45570);
N_NIMCALL(NIM_BOOL, Intsetcontains_53908)(TY53898 S_53910, NI Key_53911);
N_NIMCALL(void, Loadstub_89070)(TY53545* S_89072);
N_NIMCALL(TY53545*, Initidentiter_57095)(TY57092* Ti_57098, TY53527* Tab_57099, TY52011* S_57100);
N_NIMCALL(TY53545*, Qualifiedlookup_104053)(TY103012* C_104055, TY53523* N_104056, NIM_BOOL Ambiguouscheck_104057);
N_NIMCALL(TY53545*, Strtableget_57069)(TY53527* T_57071, TY52011* Name_57072);
N_NIMCALL(NimStringDesc*, Rendertree_81042)(TY53523* N_81044, NU8 Renderflags_81047);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(TY53545*, Initoverloaditer_104058)(TY104004* O_104061, TY103012* C_104062, TY53523* N_104063);
N_NIMCALL(TY53545*, Nextoverloaditer_104064)(TY104004* O_104067, TY103012* C_104068, TY53523* N_104069);
N_NIMCALL(TY53545*, Nextidentiter_57101)(TY57092* Ti_57104, TY53527* Tab_57105);
N_NIMCALL(NI, Sonslen_53801)(TY53523* N_53803);
N_NIMCALL(NU8, Symtabaddunique_57138)(TY57107* Tab_57141, TY53545* E_57142);
N_NIMCALL(NU8, Symtabadduniqueat_57143)(TY57107* Tab_57146, TY53545* E_57147, NI At_57148);
N_NIMCALL(void, Internalerror_45571)(NimStringDesc* Errmsg_45573);
N_NIMCALL(TY53545*, Inittabiter_57081)(TY57079* Ti_57084, TY53527* Tab_57085);
N_NIMCALL(NimStringDesc*, Getsymrepr_104014)(TY53545* S_104016);
N_NIMCALL(NimStringDesc*, Getprocheader_93018)(TY53545* Sym_93020);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(TY53545*, Nextiter_57086)(TY57079* Ti_57089, TY53527* Tab_57090);
N_NIMCALL(void, Rawclosescope_57153)(TY57107* Tab_57156);
N_NIMCALL(void, Adddecl_104026)(TY103012* C_104028, TY53545* Sym_104029);
N_NIMCALL(void, Addinterfacedeclaux_104198)(TY103012* C_104200, TY53545* Sym_104201);
N_NIMCALL(void, Strtableadd_57064)(TY53527* T_57067, TY53545* N_57068);
N_NIMCALL(TY53545*, Getcurrowner_103107)(void);
N_NIMCALL(void, Addoverloadablesymat_104035)(TY103012* C_104037, TY53545* Fn_104038, NI At_104039);
N_NIMCALL(void, Symtabaddat_57132)(TY57107* Tab_57135, TY53545* E_57136, NI At_57137);
N_NIMCALL(void, Adddeclat_104030)(TY103012* C_104032, TY53545* Sym_104033, NI At_104034);
STRING_LITERAL(TMP193926, "lookUp", 6);
STRING_LITERAL(TMP194115, "CloseScope", 10);
STRING_LITERAL(TMP194145, "AddInterfaceDeclAux", 19);
STRING_LITERAL(TMP194172, "addOverloadableSymAt", 20);
N_NIMCALL(TY53545*, Lookup_104049)(TY103012* C_104051, TY53523* N_104052) {
TY53545* Result_104304;
NIM_BOOL LOC5;
Result_104304 = 0;
switch ((*N_104052).Kind) {
case ((NU8) 43):
Result_104304 = Lookup_104049(C_104051, (*N_104052).KindU.S6.Sons->data[0]);
break;
case ((NU8) 3):
Result_104304 = (*N_104052).KindU.S4.Sym;
break;
case ((NU8) 2):
Result_104304 = Symtabget_57119((*C_104051).Tab, (*N_104052).KindU.S5.Ident);
if (!(Result_104304 == NIM_NIL)) goto LA2;
Limessage_45562((*N_104052).Info, ((NU8) 58), (*(*N_104052).KindU.S5.Ident).S);
LA2: ;
break;
default:
Internalerror_45567((*N_104052).Info, ((NimStringDesc*) &TMP193926));
break;
}
LOC5 = Intsetcontains_53908((*C_104051).Ambiguoussymbols, (*Result_104304).Sup.Id);
if (!LOC5) goto LA6;
Limessage_45562((*N_104052).Info, ((NU8) 59), (*(*Result_104304).Name).S);
LA6: ;
if (!((*Result_104304).Kind == ((NU8) 20))) goto LA9;
Loadstub_89070(Result_104304);
LA9: ;
return Result_104304;
}
N_NIMCALL(TY53545*, Qualifiedlookup_104053)(TY103012* C_104055, TY53523* N_104056, NIM_BOOL Ambiguouscheck_104057) {
TY53545* Result_104378;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
TY53545* M_104462;
NIM_BOOL LOC14;
TY52011* Ident_104483;
NIM_BOOL LOC21;
NimStringDesc* LOC34;
NIM_BOOL LOC36;
Result_104378 = 0;
switch ((*N_104056).Kind) {
case ((NU8) 2):
Result_104378 = Symtabget_57119((*C_104055).Tab, (*N_104056).KindU.S5.Ident);
if (!(Result_104378 == NIM_NIL)) goto LA2;
Limessage_45562((*N_104056).Info, ((NU8) 58), (*(*N_104056).KindU.S5.Ident).S);
goto LA1;
LA2: ;
LOC4 = Ambiguouscheck_104057;
if (!(LOC4)) goto LA5;
LOC4 = Intsetcontains_53908((*C_104055).Ambiguoussymbols, (*Result_104378).Sup.Id);
LA5: ;
if (!LOC4) goto LA6;
Limessage_45562((*N_104056).Info, ((NU8) 59), (*(*N_104056).KindU.S5.Ident).S);
goto LA1;
LA6: ;
LA1: ;
break;
case ((NU8) 3):
Result_104378 = (*N_104056).KindU.S4.Sym;
LOC9 = Ambiguouscheck_104057;
if (!(LOC9)) goto LA10;
LOC9 = Intsetcontains_53908((*C_104055).Ambiguoussymbols, (*Result_104378).Sup.Id);
LA10: ;
if (!LOC9) goto LA11;
Limessage_45562((*N_104056).Info, ((NU8) 59), (*(*(*N_104056).KindU.S4.Sym).Name).S);
LA11: ;
break;
case ((NU8) 36):
Result_104378 = NIM_NIL;
M_104462 = 0;
M_104462 = Qualifiedlookup_104053(C_104055, (*N_104056).KindU.S6.Sons->data[0], NIM_FALSE);
LOC14 = !((M_104462 == NIM_NIL));
if (!(LOC14)) goto LA15;
LOC14 = ((*M_104462).Kind == ((NU8) 18));
LA15: ;
if (!LOC14) goto LA16;
Ident_104483 = 0;
Ident_104483 = NIM_NIL;
if (!((*(*N_104056).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA19;
Ident_104483 = (*(*N_104056).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA18;
LA19: ;
LOC21 = ((*(*N_104056).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC21)) goto LA22;
LOC21 = ((*(*(*N_104056).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA22: ;
if (!LOC21) goto LA23;
Ident_104483 = (*(*(*N_104056).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA18;
LA23: ;
LA18: ;
if (!!((Ident_104483 == NIM_NIL))) goto LA26;
if (!(M_104462 == (*C_104055).Module)) goto LA29;
Result_104378 = Strtableget_57069(&(*C_104055).Tab.Stack->data[1], Ident_104483);
goto LA28;
LA29: ;
Result_104378 = Strtableget_57069(&(*M_104462).Tab, Ident_104483);
LA28: ;
if (!(Result_104378 == NIM_NIL)) goto LA32;
Limessage_45562((*(*N_104056).KindU.S6.Sons->data[1]).Info, ((NU8) 58), (*Ident_104483).S);
LA32: ;
goto LA25;
LA26: ;
LOC34 = Rendertree_81042((*N_104056).KindU.S6.Sons->data[1], 0);
Limessage_45562((*(*N_104056).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC34);
LA25: ;
LA16: ;
break;
case ((NU8) 43):
Result_104378 = Qualifiedlookup_104053(C_104055, (*N_104056).KindU.S6.Sons->data[0], Ambiguouscheck_104057);
break;
default:
Result_104378 = NIM_NIL;
break;
}
LOC36 = !((Result_104378 == NIM_NIL));
if (!(LOC36)) goto LA37;
LOC36 = ((*Result_104378).Kind == ((NU8) 20));
LA37: ;
if (!LOC36) goto LA38;
Loadstub_89070(Result_104378);
LA38: ;
return Result_104378;
}
N_NIMCALL(TY53545*, Initoverloaditer_104058)(TY104004* O_104061, TY103012* C_104062, TY53523* N_104063) {
TY53545* Result_104724;
TY52011* Ident_104725;
NIM_BOOL LOC6;
NIM_BOOL LOC13;
NimStringDesc* LOC23;
NIM_BOOL LOC25;
Result_104724 = 0;
Ident_104725 = 0;
Result_104724 = NIM_NIL;
switch ((*N_104063).Kind) {
case ((NU8) 2):
(*O_104061).Stackptr = ((NI) ((*C_104062).Tab.Tos));
(*O_104061).Mode = ((NU8) 1);
while (1) {
if (!(Result_104724 == NIM_NIL)) goto LA1;
(*O_104061).Stackptr -= 1;
if (!((*O_104061).Stackptr < 0)) goto LA3;
goto LA1;
LA3: ;
Result_104724 = Initidentiter_57095(&(*O_104061).It, &(*C_104062).Tab.Stack->data[(*O_104061).Stackptr], (*N_104063).KindU.S5.Ident);
} LA1: ;
break;
case ((NU8) 3):
Result_104724 = (*N_104063).KindU.S4.Sym;
(*O_104061).Mode = ((NU8) 0);
break;
case ((NU8) 36):
(*O_104061).Mode = ((NU8) 3);
unsureAsgnRef((void**) &(*O_104061).M, Qualifiedlookup_104053(C_104062, (*N_104063).KindU.S6.Sons->data[0], NIM_FALSE));
LOC6 = !(((*O_104061).M == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*O_104061).M).Kind == ((NU8) 18));
LA7: ;
if (!LOC6) goto LA8;
Ident_104725 = NIM_NIL;
if (!((*(*N_104063).KindU.S6.Sons->data[1]).Kind == ((NU8) 2))) goto LA11;
Ident_104725 = (*(*N_104063).KindU.S6.Sons->data[1]).KindU.S5.Ident;
goto LA10;
LA11: ;
LOC13 = ((*(*N_104063).KindU.S6.Sons->data[1]).Kind == ((NU8) 43));
if (!(LOC13)) goto LA14;
LOC13 = ((*(*(*N_104063).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA14: ;
if (!LOC13) goto LA15;
Ident_104725 = (*(*(*N_104063).KindU.S6.Sons->data[1]).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA10;
LA15: ;
LA10: ;
if (!!((Ident_104725 == NIM_NIL))) goto LA18;
if (!((*O_104061).M == (*C_104062).Module)) goto LA21;
Result_104724 = Initidentiter_57095(&(*O_104061).It, &(*C_104062).Tab.Stack->data[1], Ident_104725);
(*O_104061).Mode = ((NU8) 2);
goto LA20;
LA21: ;
Result_104724 = Initidentiter_57095(&(*O_104061).It, &(*(*O_104061).M).Tab, Ident_104725);
LA20: ;
goto LA17;
LA18: ;
LOC23 = Rendertree_81042((*N_104063).KindU.S6.Sons->data[1], 0);
Limessage_45562((*(*N_104063).KindU.S6.Sons->data[1]).Info, ((NU8) 19), LOC23);
LA17: ;
LA8: ;
break;
case ((NU8) 43):
Result_104724 = Initoverloaditer_104058(O_104061, C_104062, (*N_104063).KindU.S6.Sons->data[0]);
break;
case ((NU8) 46):
(*O_104061).Mode = ((NU8) 4);
Result_104724 = (*(*N_104063).KindU.S6.Sons->data[0]).KindU.S4.Sym;
(*O_104061).Stackptr = 1;
break;
default:
break;
}
LOC25 = !((Result_104724 == NIM_NIL));
if (!(LOC25)) goto LA26;
LOC25 = ((*Result_104724).Kind == ((NU8) 20));
LA26: ;
if (!LOC25) goto LA27;
Loadstub_89070(Result_104724);
LA27: ;
return Result_104724;
}
N_NIMCALL(TY53545*, Nextoverloaditer_104064)(TY104004* O_104067, TY103012* C_104068, TY53523* N_104069) {
TY53545* Result_105052;
NI LOC11;
NIM_BOOL LOC15;
Result_105052 = 0;
switch ((*O_104067).Mode) {
case ((NU8) 0):
Result_105052 = NIM_NIL;
break;
case ((NU8) 1):
if (!((*N_104069).Kind == ((NU8) 43))) goto LA2;
Result_105052 = Nextoverloaditer_104064(O_104067, C_104068, (*N_104069).KindU.S6.Sons->data[0]);
goto LA1;
LA2: ;
if (!(0 <= (*O_104067).Stackptr)) goto LA4;
Result_105052 = Nextidentiter_57101(&(*O_104067).It, &(*C_104068).Tab.Stack->data[(*O_104067).Stackptr]);
while (1) {
if (!(Result_105052 == NIM_NIL)) goto LA6;
(*O_104067).Stackptr -= 1;
if (!((*O_104067).Stackptr < 0)) goto LA8;
goto LA6;
LA8: ;
Result_105052 = Initidentiter_57095(&(*O_104067).It, &(*C_104068).Tab.Stack->data[(*O_104067).Stackptr], (*O_104067).It.Name);
} LA6: ;
goto LA1;
LA4: ;
Result_105052 = NIM_NIL;
LA1: ;
break;
case ((NU8) 2):
Result_105052 = Nextidentiter_57101(&(*O_104067).It, &(*C_104068).Tab.Stack->data[1]);
break;
case ((NU8) 3):
Result_105052 = Nextidentiter_57101(&(*O_104067).It, &(*(*O_104067).M).Tab);
break;
case ((NU8) 4):
LOC11 = Sonslen_53801(N_104069);
if (!((*O_104067).Stackptr < LOC11)) goto LA12;
Result_105052 = (*(*N_104069).KindU.S6.Sons->data[(*O_104067).Stackptr]).KindU.S4.Sym;
(*O_104067).Stackptr += 1;
goto LA10;
LA12: ;
Result_105052 = NIM_NIL;
LA10: ;
break;
}
LOC15 = !((Result_105052 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = ((*Result_105052).Kind == ((NU8) 20));
LA16: ;
if (!LOC15) goto LA17;
Loadstub_89070(Result_105052);
LA17: ;
return Result_105052;
}
N_NIMCALL(void, Adddecl_104026)(TY103012* C_104028, TY53545* Sym_104029) {
NU8 LOC2;
LOC2 = Symtabaddunique_57138(&(*C_104028).Tab, Sym_104029);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_45562((*Sym_104029).Info, ((NU8) 37), (*(*Sym_104029).Name).S);
LA3: ;
}
N_NIMCALL(void, Adddeclat_104030)(TY103012* C_104032, TY53545* Sym_104033, NI At_104034) {
NU8 LOC2;
LOC2 = Symtabadduniqueat_57143(&(*C_104032).Tab, Sym_104033, At_104034);
if (!(LOC2 == ((NU8) 0))) goto LA3;
Limessage_45562((*Sym_104033).Info, ((NU8) 37), (*(*Sym_104033).Name).S);
LA3: ;
}
N_NIMCALL(NimStringDesc*, Getsymrepr_104014)(TY53545* S_104016) {
NimStringDesc* Result_104073;
Result_104073 = 0;
switch ((*S_104016).Kind) {
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 12):
case ((NU8) 11):
Result_104073 = Getprocheader_93018(S_104016);
break;
default:
Result_104073 = copyString((*(*S_104016).Name).S);
break;
}
return Result_104073;
}
N_NIMCALL(void, Closescope_104017)(TY57107* Tab_104020) {
TY57079 It_104078;
TY53545* S_104079;
NimStringDesc* LOC8;
NIM_BOOL LOC9;
NimStringDesc* LOC16;
memset((void*)&It_104078, 0, sizeof(It_104078));
S_104079 = 0;
if (!((*Tab_104020).Stack->Sup.len < ((NI) ((*Tab_104020).Tos)))) goto LA2;
Internalerror_45571(((NimStringDesc*) &TMP194115));
LA2: ;
S_104079 = Inittabiter_57081(&It_104078, &(*Tab_104020).Stack->data[(NI32)(((NI) ((*Tab_104020).Tos)) - 1)]);
while (1) {
if (!!((S_104079 == NIM_NIL))) goto LA4;
if (!(((*S_104079).Flags &(1<<((((NU8) 6))&31)))!=0)) goto LA6;
LOC8 = Getsymrepr_104014(S_104079);
Limessage_45562((*S_104079).Info, ((NU8) 135), LOC8);
goto LA5;
LA6: ;
LOC9 = ((9 & (*S_104079).Flags) == 0);
if (!(LOC9)) goto LA10;
LOC9 = (((*S_104079).Options &(1<<((((NU8) 12))&31)))!=0);
LA10: ;
if (!LOC9) goto LA11;
if (!!(((132105 &(1<<(((*S_104079).Kind)&31)))!=0))) goto LA14;
LOC16 = Getsymrepr_104014(S_104079);
Limessage_45562((*S_104079).Info, ((NU8) 225), LOC16);
LA14: ;
goto LA5;
LA11: ;
LA5: ;
S_104079 = Nextiter_57086(&It_104078, &(*Tab_104020).Stack->data[(NI32)(((NI) ((*Tab_104020).Tos)) - 1)]);
} LA4: ;
Rawclosescope_57153(Tab_104020);
}
N_NIMCALL(void, Addinterfacedeclaux_104198)(TY103012* C_104200, TY53545* Sym_104201) {
TY53545* LOC8;
if (!(((*Sym_104201).Flags &(1<<((((NU8) 3))&31)))!=0)) goto LA2;
if (!((*C_104200).Module == NIM_NIL)) goto LA5;
Internalerror_45567((*Sym_104201).Info, ((NimStringDesc*) &TMP194145));
LA5: ;
Strtableadd_57064(&(*(*C_104200).Module).Tab, Sym_104201);
LA2: ;
LOC8 = Getcurrowner_103107();
if (!((*LOC8).Kind == ((NU8) 18))) goto LA9;
(*Sym_104201).Flags |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
LA9: ;
}
N_NIMCALL(void, Addinterfacedecl_104040)(TY103012* C_104042, TY53545* Sym_104043) {
Adddecl_104026(C_104042, Sym_104043);
Addinterfacedeclaux_104198(C_104042, Sym_104043);
}
N_NIMCALL(void, Addoverloadablesymat_104035)(TY103012* C_104037, TY53545* Fn_104038, NI At_104039) {
TY53545* Check_104267;
NIM_BOOL LOC5;
if (!!(((269824 &(1<<(((*Fn_104038).Kind)&31)))!=0))) goto LA2;
Internalerror_45567((*Fn_104038).Info, ((NimStringDesc*) &TMP194172));
LA2: ;
Check_104267 = 0;
Check_104267 = Strtableget_57069(&(*C_104037).Tab.Stack->data[At_104039], (*Fn_104038).Name);
LOC5 = !((Check_104267 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !(((269824 &(1<<(((*Check_104267).Kind)&31)))!=0));
LA6: ;
if (!LOC5) goto LA7;
Limessage_45562((*Fn_104038).Info, ((NU8) 37), (*(*Fn_104038).Name).S);
LA7: ;
Symtabaddat_57132(&(*C_104037).Tab, Fn_104038, At_104039);
}
N_NIMCALL(void, Addinterfaceoverloadablesymat_104044)(TY103012* C_104046, TY53545* Sym_104047, NI At_104048) {
Addoverloadablesymat_104035(C_104046, Sym_104047, ((NI) (At_104048)));
Addinterfacedeclaux_104198(C_104046, Sym_104047);
}
N_NIMCALL(void, Addinterfacedeclat_104246)(TY103012* C_104248, TY53545* Sym_104249, NI At_104250) {
Adddeclat_104030(C_104248, Sym_104249, At_104250);
Addinterfacedeclaux_104198(C_104248, Sym_104249);
}
N_NOINLINE(void, lookupsInit)(void) {
}

