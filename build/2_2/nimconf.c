/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY76135 TY76135;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY73267 TY73267;
typedef struct TY72015 TY72015;
typedef struct TNimObject TNimObject;
typedef struct TY71013 TY71013;
typedef struct TY73281 TY73281;
typedef struct TY73263 TY73263;
typedef struct TY52011 TY52011;
typedef struct TY52005 TY52005;
typedef struct TY45532 TY45532;
struct TGenericSeq {
NI len;
NI space;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY72015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY71013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY73267 {
  TY72015 Sup;
NimStringDesc* Filename;
TY73281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY73263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY52011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY73263* Next;
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
struct TY45532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
typedef NimStringDesc* TY70066[3];
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY71013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY76135 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct TY73281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NimStringDesc*, Getprefixdir_44107)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17047, NimStringDesc* B_17048);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_36403, NimStringDesc* Tail_36404);
N_NIMCALL(void, Loadspecialconfig_76007)(NimStringDesc* Configfilename_76009);
N_NIMCALL(void, Readconfigfile_76447)(NimStringDesc* Filename_76449);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(TY71013*, Llstreamopen_71032)(NimStringDesc* Filename_71034, NU8 Mode_71035);
N_NIMCALL(void, Openlexer_73298)(TY73267* Lex_73301, NimStringDesc* Filename_73302, TY71013* Inputstream_73303);
N_NIMCALL(void, Conftok_76329)(TY73267* L_76332, TY73263* Tok_76333);
N_NIMCALL(void, Ppgettok_76010)(TY73267* L_76013, TY73263* Tok_76014);
N_NIMCALL(void, Rawgettok_73304)(TY73267* L_73307, TY73263* Tok_73309);
N_NIMCALL(void, Parsedirective_76284)(TY73267* L_76287, TY73263* Tok_76288);
N_NIMCALL(NU8, Whichkeyword_69465)(TY52011* Id_69467);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17403, NI Elemsize_17404, NI Newlen_17405);
N_NIMCALL(NIM_BOOL, Evalppif_76120)(TY73267* L_76123, TY73263* Tok_76124);
N_NIMCALL(NIM_BOOL, Parseexpr_76054)(TY73267* L_76057, TY73263* Tok_76058);
N_NIMCALL(NIM_BOOL, Parseandexpr_76090)(TY73267* L_76093, TY73263* Tok_76094);
N_NIMCALL(NIM_BOOL, Parseatom_76059)(TY73267* L_76062, TY73263* Tok_76063);
N_NIMCALL(void, Lexmessage_73326)(TY73267* L_73328, NU8 Msg_73329, NimStringDesc* Arg_73330);
N_NIMCALL(NIM_BOOL, Isdefined_61059)(TY52011* Symbol_61061);
N_NIMCALL(void, Jumptodirective_76176)(TY73267* L_76179, TY73263* Tok_76180, NU8 Dest_76181);
N_NIMCALL(void, Doelse_76182)(TY73267* L_76185, TY73263* Tok_76186);
N_NIMCALL(void, Doelif_76198)(TY73267* L_76201, TY73263* Tok_76202);
N_NIMCALL(void, Doend_76153)(TY73267* L_76156, TY73263* Tok_76157);
N_NIMCALL(void, Messageout_45550)(NimStringDesc* S_45552);
N_NIMCALL(NimStringDesc*, Toktostr_73323)(TY73263* Tok_73325);
N_NIMCALL(void, Putenv_37639)(NimStringDesc* Key_37641, NimStringDesc* Val_37642);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, Getenv_37625)(NimStringDesc* Key_37627);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(void, Parseassignment_76371)(TY73267* L_76374, TY73263* Tok_76375);
N_NIMCALL(TY52011*, Getident_52016)(NimStringDesc* Identifier_52018);
N_NIMCALL(TY45532, Getlineinfo_73313)(TY73267* L_73315);
N_NIMCALL(void, Checksymbol_76346)(TY73267* L_76348, TY73263* Tok_76349);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_17182, NI Addlen_17183);
N_NIMCALL(void, Processswitch_70012)(NimStringDesc* Switch_70014, NimStringDesc* Arg_70015, NU8 Pass_70016, TY45532 Info_70017);
N_NIMCALL(void, Closelexer_73316)(TY73267* Lex_73319);
N_NIMCALL(void, Rawmessage_45553)(NU8 Msg_45555, NimStringDesc* Arg_45556);
N_NIMCALL(NimStringDesc*, Getconfigpath_76507)(NimStringDesc* Filename_76509);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_35003);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_36487, NI Parts_36487Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37020, NimStringDesc* Ext_37021);
STRING_LITERAL(TMP193677, "/usr", 4);
STRING_LITERAL(TMP193678, "/usr/lib/nimrod", 15);
STRING_LITERAL(TMP193679, "/usr/local", 10);
STRING_LITERAL(TMP193680, "/usr/local/lib/nimrod", 21);
STRING_LITERAL(TMP193681, "lib", 3);
STRING_LITERAL(TMP193707, "@", 1);
STRING_LITERAL(TMP193708, "\')\'", 3);
STRING_LITERAL(TMP193709, "\':\'", 3);
STRING_LITERAL(TMP193710, "@if", 3);
STRING_LITERAL(TMP193711, "@end", 4);
STRING_LITERAL(TMP193713, "-", 1);
STRING_LITERAL(TMP193714, "--", 2);
STRING_LITERAL(TMP193715, "", 0);
STRING_LITERAL(TMP193716, "\']\'", 3);
STRING_LITERAL(TMP193717, "&", 1);
STRING_LITERAL(TMP193720, "config", 6);
STRING_LITERAL(TMP193721, "/etc/", 5);
STRING_LITERAL(TMP193722, "nimrod.cfg", 10);
STRING_LITERAL(TMP193723, "cfg", 3);
TY76135* Condstack_76136;
extern TNimType* NTI76135; /* seq[bool] */
extern TY10790 Gch_10808;
extern NimStringDesc* Libpath_44110;
extern NU32 Gglobaloptions_44077;
extern TNimType* NTI73267; /* TLexer */
extern TNimType* NTI73261; /* PToken */
extern TNimType* NTI73263; /* TToken */
extern NI Gverbosity_44083;
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
N_NIMCALL(void, Ppgettok_76010)(TY73267* L_76013, TY73263* Tok_76014) {
NIM_BOOL LOC2;
NIM_BOOL LOC3;
NIM_BOOL LOC4;
Rawgettok_73304(L_76013, Tok_76014);
while (1) {
LOC4 = ((*Tok_76014).Toktype == ((NU8) 102));
if (LOC4) goto LA5;
LOC4 = ((*Tok_76014).Toktype == ((NU8) 103));
LA5: ;
LOC3 = LOC4;
if (LOC3) goto LA6;
LOC3 = ((*Tok_76014).Toktype == ((NU8) 104));
LA6: ;
LOC2 = LOC3;
if (LOC2) goto LA7;
LOC2 = ((*Tok_76014).Toktype == ((NU8) 100));
LA7: ;
if (!LOC2) goto LA1;
Rawgettok_73304(L_76013, Tok_76014);
} LA1: ;
}
N_NIMCALL(NIM_BOOL, Parseatom_76059)(TY73267* L_76062, TY73263* Tok_76063) {
NIM_BOOL Result_76064;
NIM_BOOL LOC9;
Result_76064 = 0;
if (!((*Tok_76063).Toktype == ((NU8) 80))) goto LA2;
Ppgettok_76010(L_76062, Tok_76063);
Result_76064 = Parseexpr_76054(L_76062, Tok_76063);
if (!((*Tok_76063).Toktype == ((NU8) 81))) goto LA5;
Ppgettok_76010(L_76062, Tok_76063);
goto LA4;
LA5: ;
Lexmessage_73326(&(*L_76062), ((NU8) 21), ((NimStringDesc*) &TMP193708));
LA4: ;
goto LA1;
LA2: ;
if (!((*(*Tok_76063).Ident).Sup.Id == 40)) goto LA7;
Ppgettok_76010(L_76062, Tok_76063);
LOC9 = Parseatom_76059(L_76062, Tok_76063);
Result_76064 = !(LOC9);
goto LA1;
LA7: ;
Result_76064 = Isdefined_61059((*Tok_76063).Ident);
Ppgettok_76010(L_76062, Tok_76063);
LA1: ;
return Result_76064;
}
N_NIMCALL(NIM_BOOL, Parseandexpr_76090)(TY73267* L_76093, TY73263* Tok_76094) {
NIM_BOOL Result_76095;
NIM_BOOL B_76096;
NIM_BOOL LOC2;
Result_76095 = 0;
B_76096 = 0;
Result_76095 = Parseatom_76059(L_76093, Tok_76094);
while (1) {
if (!((*(*Tok_76094).Ident).Sup.Id == 2)) goto LA1;
Ppgettok_76010(L_76093, Tok_76094);
B_76096 = Parseatom_76059(L_76093, Tok_76094);
LOC2 = Result_76095;
if (!(LOC2)) goto LA3;
LOC2 = B_76096;
LA3: ;
Result_76095 = LOC2;
} LA1: ;
return Result_76095;
}
N_NIMCALL(NIM_BOOL, Parseexpr_76054)(TY73267* L_76057, TY73263* Tok_76058) {
NIM_BOOL Result_76110;
NIM_BOOL B_76111;
NIM_BOOL LOC2;
Result_76110 = 0;
B_76111 = 0;
Result_76110 = Parseandexpr_76090(L_76057, Tok_76058);
while (1) {
if (!((*(*Tok_76058).Ident).Sup.Id == 44)) goto LA1;
Ppgettok_76010(L_76057, Tok_76058);
B_76111 = Parseandexpr_76090(L_76057, Tok_76058);
LOC2 = Result_76110;
if (LOC2) goto LA3;
LOC2 = B_76111;
LA3: ;
Result_76110 = LOC2;
} LA1: ;
return Result_76110;
}
N_NIMCALL(NIM_BOOL, Evalppif_76120)(TY73267* L_76123, TY73263* Tok_76124) {
NIM_BOOL Result_76125;
Result_76125 = 0;
Ppgettok_76010(L_76123, Tok_76124);
Result_76125 = Parseexpr_76054(L_76123, Tok_76124);
if (!((*Tok_76124).Toktype == ((NU8) 94))) goto LA2;
Ppgettok_76010(L_76123, Tok_76124);
goto LA1;
LA2: ;
Lexmessage_73326(&(*L_76123), ((NU8) 21), ((NimStringDesc*) &TMP193709));
LA1: ;
return Result_76125;
}
N_NIMCALL(void, Doelse_76182)(TY73267* L_76185, TY73263* Tok_76186) {
if (!((Condstack_76136->Sup.len-1) < 0)) goto LA2;
Lexmessage_73326(&(*L_76185), ((NU8) 21), ((NimStringDesc*) &TMP193710));
LA2: ;
Ppgettok_76010(L_76185, Tok_76186);
if (!((*Tok_76186).Toktype == ((NU8) 94))) goto LA5;
Ppgettok_76010(L_76185, Tok_76186);
LA5: ;
if (!Condstack_76136->data[(Condstack_76136->Sup.len-1)]) goto LA8;
Jumptodirective_76176(L_76185, Tok_76186, ((NU8) 0));
LA8: ;
}
N_NIMCALL(void, Doelif_76198)(TY73267* L_76201, TY73263* Tok_76202) {
NIM_BOOL Res_76203;
NIM_BOOL LOC5;
Res_76203 = 0;
if (!((Condstack_76136->Sup.len-1) < 0)) goto LA2;
Lexmessage_73326(&(*L_76201), ((NU8) 21), ((NimStringDesc*) &TMP193710));
LA2: ;
Res_76203 = Evalppif_76120(L_76201, Tok_76202);
LOC5 = Condstack_76136->data[(Condstack_76136->Sup.len-1)];
if (LOC5) goto LA6;
LOC5 = !(Res_76203);
LA6: ;
if (!LOC5) goto LA7;
Jumptodirective_76176(L_76201, Tok_76202, ((NU8) 1));
goto LA4;
LA7: ;
Condstack_76136->data[(Condstack_76136->Sup.len-1)] = NIM_TRUE;
LA4: ;
}
N_NIMCALL(void, Doend_76153)(TY73267* L_76156, TY73263* Tok_76157) {
if (!((Condstack_76136->Sup.len-1) < 0)) goto LA2;
Lexmessage_73326(&(*L_76156), ((NU8) 21), ((NimStringDesc*) &TMP193710));
LA2: ;
Ppgettok_76010(L_76156, Tok_76157);
Condstack_76136 = (TY76135*) setLengthSeq(&(Condstack_76136)->Sup, sizeof(NIM_BOOL), (Condstack_76136->Sup.len-1));
}
N_NIMCALL(void, Jumptodirective_76176)(TY73267* L_76179, TY73263* Tok_76180, NU8 Dest_76181) {
NI Nestedifs_76212;
NIM_BOOL LOC3;
NU8 LOC7;
NIM_BOOL LOC9;
NIM_BOOL LOC14;
Nestedifs_76212 = 0;
Nestedifs_76212 = 0;
while (1) {
LOC3 = !(((*Tok_76180).Ident == NIM_NIL));
if (!(LOC3)) goto LA4;
LOC3 = eqStrings((*(*Tok_76180).Ident).S, ((NimStringDesc*) &TMP193707));
LA4: ;
if (!LOC3) goto LA5;
Ppgettok_76010(L_76179, Tok_76180);
LOC7 = Whichkeyword_69465((*Tok_76180).Ident);
switch (LOC7) {
case ((NU8) 26):
Nestedifs_76212 += 1;
break;
case ((NU8) 18):
LOC9 = (Dest_76181 == ((NU8) 1));
if (!(LOC9)) goto LA10;
LOC9 = (Nestedifs_76212 == 0);
LA10: ;
if (!LOC9) goto LA11;
Doelse_76182(L_76179, Tok_76180);
goto LA1;
LA11: ;
break;
case ((NU8) 17):
LOC14 = (Dest_76181 == ((NU8) 1));
if (!(LOC14)) goto LA15;
LOC14 = (Nestedifs_76212 == 0);
LA15: ;
if (!LOC14) goto LA16;
Doelif_76198(L_76179, Tok_76180);
goto LA1;
LA16: ;
break;
case ((NU8) 19):
if (!(Nestedifs_76212 == 0)) goto LA19;
Doend_76153(L_76179, Tok_76180);
goto LA1;
LA19: ;
if (!(0 < Nestedifs_76212)) goto LA22;
Nestedifs_76212 -= 1;
LA22: ;
break;
default:
break;
}
Ppgettok_76010(L_76179, Tok_76180);
goto LA2;
LA5: ;
if (!((*Tok_76180).Toktype == ((NU8) 1))) goto LA24;
Lexmessage_73326(&(*L_76179), ((NU8) 21), ((NimStringDesc*) &TMP193711));
goto LA2;
LA24: ;
Ppgettok_76010(L_76179, Tok_76180);
LA2: ;
} LA1: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI64)((NI64)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
N_NIMCALL(void, Parsedirective_76284)(TY73267* L_76287, TY73263* Tok_76288) {
NIM_BOOL Res_76289;
NimStringDesc* Key_76290;
NU8 LOC1;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC12;
NimStringDesc* LOC13;
Res_76289 = 0;
Key_76290 = 0;
Ppgettok_76010(L_76287, Tok_76288);
LOC1 = Whichkeyword_69465((*Tok_76288).Ident);
switch (LOC1) {
case ((NU8) 26):
Condstack_76136 = (TY76135*) setLengthSeq(&(Condstack_76136)->Sup, sizeof(NIM_BOOL), (NI64)(Condstack_76136->Sup.len + 1));
Res_76289 = Evalppif_76120(L_76287, Tok_76288);
Condstack_76136->data[(Condstack_76136->Sup.len-1)] = Res_76289;
if (!!(Res_76289)) goto LA3;
Jumptodirective_76176(L_76287, Tok_76288, ((NU8) 1));
LA3: ;
break;
case ((NU8) 17):
Doelif_76198(L_76287, Tok_76288);
break;
case ((NU8) 18):
Doelse_76182(L_76287, Tok_76288);
break;
case ((NU8) 19):
Doend_76153(L_76287, Tok_76288);
break;
case ((NU8) 215):
Ppgettok_76010(L_76287, Tok_76288);
LOC5 = Toktostr_73323(Tok_76288);
Messageout_45550(LOC5);
Ppgettok_76010(L_76287, Tok_76288);
break;
case ((NU8) 216):
Ppgettok_76010(L_76287, Tok_76288);
Key_76290 = Toktostr_73323(Tok_76288);
Ppgettok_76010(L_76287, Tok_76288);
LOC6 = Toktostr_73323(Tok_76288);
Putenv_37639(Key_76290, LOC6);
Ppgettok_76010(L_76287, Tok_76288);
break;
case ((NU8) 217):
Ppgettok_76010(L_76287, Tok_76288);
Key_76290 = Toktostr_73323(Tok_76288);
Ppgettok_76010(L_76287, Tok_76288);
LOC8 = Toktostr_73323(Tok_76288);
LOC9 = Getenv_37625(Key_76290);
LOC7 = rawNewString(LOC8->Sup.len + LOC9->Sup.len + 0);
appendString(LOC7, LOC8);
appendString(LOC7, LOC9);
Putenv_37639(Key_76290, LOC7);
Ppgettok_76010(L_76287, Tok_76288);
break;
case ((NU8) 218):
Ppgettok_76010(L_76287, Tok_76288);
Key_76290 = Toktostr_73323(Tok_76288);
Ppgettok_76010(L_76287, Tok_76288);
LOC11 = Getenv_37625(Key_76290);
LOC12 = Toktostr_73323(Tok_76288);
LOC10 = rawNewString(LOC11->Sup.len + LOC12->Sup.len + 0);
appendString(LOC10, LOC11);
appendString(LOC10, LOC12);
Putenv_37639(Key_76290, LOC10);
Ppgettok_76010(L_76287, Tok_76288);
break;
default:
LOC13 = Toktostr_73323(Tok_76288);
Lexmessage_73326(&(*L_76287), ((NU8) 28), LOC13);
break;
}
}
N_NIMCALL(void, Conftok_76329)(TY73267* L_76332, TY73263* Tok_76333) {
NIM_BOOL LOC2;
Ppgettok_76010(L_76332, Tok_76333);
while (1) {
LOC2 = !(((*Tok_76333).Ident == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = eqStrings((*(*Tok_76333).Ident).S, ((NimStringDesc*) &TMP193707));
LA3: ;
if (!LOC2) goto LA1;
Parsedirective_76284(L_76332, Tok_76333);
} LA1: ;
}
N_NIMCALL(void, Checksymbol_76346)(TY73267* L_76348, TY73263* Tok_76349) {
NimStringDesc* LOC4;
if (!!(((*Tok_76349).Toktype >= ((NU8) 2) && (*Tok_76349).Toktype <= ((NU8) 65) || (*Tok_76349).Toktype >= ((NU8) 74) && (*Tok_76349).Toktype <= ((NU8) 76)))) goto LA2;
LOC4 = Toktostr_73323(Tok_76349);
Lexmessage_73326(L_76348, ((NU8) 19), LOC4);
LA2: ;
}
N_NIMCALL(void, Parseassignment_76371)(TY73267* L_76374, TY73263* Tok_76375) {
NimStringDesc* S_76376;
NimStringDesc* Val_76377;
TY45532 Info_76378;
NIM_BOOL LOC2;
TY52011* LOC3;
TY52011* LOC5;
NimStringDesc* LOC9;
NimStringDesc* LOC13;
NIM_BOOL LOC18;
NimStringDesc* LOC25;
NIM_BOOL LOC27;
TY52011* LOC29;
NimStringDesc* LOC30;
S_76376 = 0;
Val_76377 = 0;
memset((void*)&Info_76378, 0, sizeof(Info_76378));
LOC3 = Getident_52016(((NimStringDesc*) &TMP193713));
LOC2 = ((*(*Tok_76375).Ident).Sup.Id == (*LOC3).Sup.Id);
if (LOC2) goto LA4;
LOC5 = Getident_52016(((NimStringDesc*) &TMP193714));
LOC2 = ((*(*Tok_76375).Ident).Sup.Id == (*LOC5).Sup.Id);
LA4: ;
if (!LOC2) goto LA6;
Conftok_76329(L_76374, Tok_76375);
LA6: ;
Info_76378 = Getlineinfo_73313(&(*L_76374));
Checksymbol_76346(&(*L_76374), Tok_76375);
S_76376 = Toktostr_73323(Tok_76375);
Conftok_76329(L_76374, Tok_76375);
Val_76377 = copyString(((NimStringDesc*) &TMP193715));
while (1) {
if (!((*Tok_76375).Toktype == ((NU8) 96))) goto LA8;
S_76376 = addChar(S_76376, 46);
Conftok_76329(L_76374, Tok_76375);
Checksymbol_76346(&(*L_76374), Tok_76375);
LOC9 = Toktostr_73323(Tok_76375);
S_76376 = resizeString(S_76376, LOC9->Sup.len + 0);
appendString(S_76376, LOC9);
Conftok_76329(L_76374, Tok_76375);
} LA8: ;
if (!((*Tok_76375).Toktype == ((NU8) 82))) goto LA11;
Conftok_76329(L_76374, Tok_76375);
Checksymbol_76346(&(*L_76374), Tok_76375);
LOC13 = Toktostr_73323(Tok_76375);
Val_76377 = resizeString(Val_76377, LOC13->Sup.len + 0);
appendString(Val_76377, LOC13);
Conftok_76329(L_76374, Tok_76375);
if (!((*Tok_76375).Toktype == ((NU8) 83))) goto LA15;
Conftok_76329(L_76374, Tok_76375);
goto LA14;
LA15: ;
Lexmessage_73326(&(*L_76374), ((NU8) 21), ((NimStringDesc*) &TMP193716));
LA14: ;
Val_76377 = addChar(Val_76377, 93);
LA11: ;
LOC18 = ((*Tok_76375).Toktype == ((NU8) 94));
if (LOC18) goto LA19;
LOC18 = ((*Tok_76375).Toktype == ((NU8) 95));
LA19: ;
if (!LOC18) goto LA20;
if (!(0 < Val_76377->Sup.len)) goto LA23;
Val_76377 = addChar(Val_76377, 58);
LA23: ;
Conftok_76329(L_76374, Tok_76375);
Checksymbol_76346(&(*L_76374), Tok_76375);
LOC25 = Toktostr_73323(Tok_76375);
Val_76377 = resizeString(Val_76377, LOC25->Sup.len + 0);
appendString(Val_76377, LOC25);
Conftok_76329(L_76374, Tok_76375);
while (1) {
LOC27 = !(((*Tok_76375).Ident == NIM_NIL));
if (!(LOC27)) goto LA28;
LOC29 = Getident_52016(((NimStringDesc*) &TMP193717));
LOC27 = ((*(*Tok_76375).Ident).Sup.Id == (*LOC29).Sup.Id);
LA28: ;
if (!LOC27) goto LA26;
Conftok_76329(L_76374, Tok_76375);
Checksymbol_76346(&(*L_76374), Tok_76375);
LOC30 = Toktostr_73323(Tok_76375);
Val_76377 = resizeString(Val_76377, LOC30->Sup.len + 0);
appendString(Val_76377, LOC30);
Conftok_76329(L_76374, Tok_76375);
} LA26: ;
LA20: ;
Processswitch_70012(S_76376, Val_76377, ((NU8) 2), Info_76378);
}
N_NIMCALL(void, Readconfigfile_76447)(NimStringDesc* Filename_76449) {
TY73267 L_76450;
TY73263* Tok_76451;
TY71013* Stream_76452;
memset((void*)&L_76450, 0, sizeof(L_76450));
L_76450.Sup.Sup.m_type = NTI73267;
Tok_76451 = 0;
Stream_76452 = 0;
Tok_76451 = (TY73263*) newObj(NTI73261, sizeof(TY73263));
(*Tok_76451).m_type = NTI73263;
Stream_76452 = Llstreamopen_71032(Filename_76449, ((NU8) 0));
if (!!((Stream_76452 == NIM_NIL))) goto LA2;
Openlexer_73298(&L_76450, Filename_76449, Stream_76452);
(*Tok_76451).Toktype = ((NU8) 1);
Conftok_76329(&L_76450, Tok_76451);
while (1) {
if (!!(((*Tok_76451).Toktype == ((NU8) 1)))) goto LA4;
Parseassignment_76371(&L_76450, Tok_76451);
} LA4: ;
if (!(0 < Condstack_76136->Sup.len)) goto LA6;
Lexmessage_73326(&L_76450, ((NU8) 21), ((NimStringDesc*) &TMP193711));
LA6: ;
Closelexer_73316(&L_76450);
if (!(1 <= Gverbosity_44083)) goto LA9;
Rawmessage_45553(((NU8) 233), Filename_76449);
LA9: ;
LA2: ;
}
N_NIMCALL(NimStringDesc*, Getconfigpath_76507)(NimStringDesc* Filename_76509) {
NimStringDesc* Result_76510;
NimStringDesc* LOC1;
NIM_BOOL LOC3;
TY70066 LOC6;
NIM_BOOL LOC8;
NimStringDesc* LOC11;
Result_76510 = 0;
LOC1 = nosgetConfigDir();
Result_76510 = nosJoinPath(LOC1, Filename_76509);
LOC3 = nosexistsFile(Result_76510);
if (!!(LOC3)) goto LA4;
LOC6[0] = Getprefixdir_44107();
LOC6[1] = copyString(((NimStringDesc*) &TMP193720));
LOC6[2] = copyString(Filename_76509);
Result_76510 = nosJoinPathOpenArray(LOC6, 3);
LOC8 = nosexistsFile(Result_76510);
if (!!(LOC8)) goto LA9;
LOC11 = rawNewString(Filename_76509->Sup.len + 5);
appendString(LOC11, ((NimStringDesc*) &TMP193721));
appendString(LOC11, Filename_76509);
Result_76510 = LOC11;
LA9: ;
LA4: ;
return Result_76510;
}
N_NIMCALL(void, Loadspecialconfig_76007)(NimStringDesc* Configfilename_76009) {
NimStringDesc* LOC4;
if (!!(((Gglobaloptions_44077 &(1<<((((NU8) 16))&31)))!=0))) goto LA2;
LOC4 = Getconfigpath_76507(Configfilename_76009);
Readconfigfile_76447(LOC4);
LA2: ;
}
N_NIMCALL(void, Loadconfig_76004)(NimStringDesc* Project_76006) {
NimStringDesc* Conffile_76540;
NimStringDesc* Prefix_76541;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Conffile_76540 = 0;
Prefix_76541 = 0;
if (!((Libpath_44110) && (Libpath_44110)->Sup.len == 0)) goto LA2;
Prefix_76541 = Getprefixdir_44107();
if (!eqStrings(Prefix_76541, ((NimStringDesc*) &TMP193677))) goto LA5;
asgnRefNoCycle((void**) &Libpath_44110, copyString(((NimStringDesc*) &TMP193678)));
goto LA4;
LA5: ;
if (!eqStrings(Prefix_76541, ((NimStringDesc*) &TMP193679))) goto LA7;
asgnRefNoCycle((void**) &Libpath_44110, copyString(((NimStringDesc*) &TMP193680)));
goto LA4;
LA7: ;
asgnRefNoCycle((void**) &Libpath_44110, nosJoinPath(Prefix_76541, ((NimStringDesc*) &TMP193681)));
LA4: ;
LA2: ;
Loadspecialconfig_76007(((NimStringDesc*) &TMP193722));
LOC10 = !(((Gglobaloptions_44077 &(1<<((((NU8) 17))&31)))!=0));
if (!(LOC10)) goto LA11;
LOC10 = !(((Project_76006) && (Project_76006)->Sup.len == 0));
LA11: ;
if (!LOC10) goto LA12;
Conffile_76540 = nosChangeFileExt(Project_76006, ((NimStringDesc*) &TMP193723));
LOC15 = nosexistsFile(Conffile_76540);
if (!LOC15) goto LA16;
Readconfigfile_76447(Conffile_76540);
LA16: ;
LA12: ;
}
N_NOINLINE(void, nimconfInit)(void) {
asgnRefNoCycle((void**) &Condstack_76136, (TY76135*) newSeq(NTI76135, 0));
}

