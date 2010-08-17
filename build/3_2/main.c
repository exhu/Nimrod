/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY189208 TY189208;
typedef struct TY189206 TY189206;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY53545 TY53545;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY41019 TY41019;
typedef struct TY41013 TY41013;
typedef struct TY36715 TY36715;
typedef struct TY53523 TY53523;
typedef struct TY89031 TY89031;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TY53549 TY53549;
typedef struct TY52011 TY52011;
typedef struct TY45532 TY45532;
typedef struct TY53527 TY53527;
typedef struct TY53525 TY53525;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY53541 TY53541;
typedef struct TY71013 TY71013;
typedef struct TY101006 TY101006;
typedef struct TY101002 TY101002;
typedef struct TY73267 TY73267;
typedef struct TY72015 TY72015;
typedef struct TY73281 TY73281;
typedef struct TY73263 TY73263;
typedef struct TY53517 TY53517;
typedef struct TY37422 TY37422;
typedef struct TY89029 TY89029;
typedef struct TY57223 TY57223;
typedef struct TY57221 TY57221;
typedef struct TY57219 TY57219;
typedef struct TY53561 TY53561;
typedef struct TY53559 TY53559;
typedef struct TY53557 TY53557;
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
struct TY189206 {
NimStringDesc* Filename;
TY53545* Module;
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
struct TY41019 {
TNimType* m_type;
TY41013* Head;
TY41013* Tail;
NI Counter;
};
struct TY36715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_NIMCALL_PTR(TY53523*, TY101048) (NimStringDesc* Filename_101049);
typedef N_NIMCALL_PTR(TY53545*, TY101044) (NimStringDesc* Filename_101045);
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
struct TY52011 {
  TY52005 Sup;
NimStringDesc* S;
TY52011* Next;
NI H;
};
typedef N_NIMCALL_PTR(TY101002*, TY101007) (TY53545* Module_101008, NimStringDesc* Filename_101009);
typedef N_NIMCALL_PTR(TY101002*, TY101012) (TY53545* Module_101013, NimStringDesc* Filename_101014, TY89031* Rd_101015);
typedef N_NIMCALL_PTR(TY53523*, TY101018) (TY101002* P_101019, TY53523* N_101020);
typedef N_NIMCALL_PTR(TY53523*, TY101023) (TY101002* P_101024, TY53523* Toplevelstmt_101025);
struct TY101006 {
TY101007 Open;
TY101012 Opencached;
TY101018 Close;
TY101023 Process;
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
typedef NI TY8414[8];
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
struct TY57219 {
NI Key;
NI Val;
};
struct TY57223 {
NI Counter;
TY57221* Data;
};
struct TY89029 {
NI Lastidxkey;
NI Lastidxval;
TY57223 Tab;
TY50008* R;
NI Offset;
};
struct TY53557 {
TY52005* Key;
TNimObject* Val;
};
struct TY53561 {
NI Counter;
TY53559* Data;
};
struct TY89031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY37422* Moddeps;
TY37422* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY89029 Index;
TY89029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY53561 Syms;
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
struct TY71013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY101002 {
  TNimObject Sup;
};
struct TY189208 {
  TGenericSeq Sup;
  TY189206 data[SEQ_DECL_SIZE];
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
};
struct TY73281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY53517 {
  TGenericSeq Sup;
  TY53523* data[SEQ_DECL_SIZE];
};
struct TY37422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY57221 {
  TGenericSeq Sup;
  TY57219 data[SEQ_DECL_SIZE];
};
struct TY53559 {
  TGenericSeq Sup;
  TY53557 data[SEQ_DECL_SIZE];
};
struct TY53547 {
  TGenericSeq Sup;
  TY53549* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(void, Appendstr_41061)(TY41019* List_41064, NimStringDesc* Data_41065);
N_NIMCALL(void, Prependstr_41071)(TY41019* List_41074, NimStringDesc* Data_41075);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_36714, TY36715* Result);
N_NIMCALL(void, Setid_53693)(NI Id_53695);
N_NIMCALL(TY53523*, Parsefile_88031)(NimStringDesc* Filename_88033);
N_NIMCALL(TY53545*, Importmodule_189327)(NimStringDesc* Filename_189329);
N_NIMCALL(TY53545*, Getmodule_189256)(NimStringDesc* Filename_189258);
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_37070, NimStringDesc* Path2_37071);
N_NIMCALL(TY53545*, Compilemodule_189322)(NimStringDesc* Filename_189324, NIM_BOOL Ismainfile_189325, NIM_BOOL Issystemfile_189326);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_37044, NimStringDesc* Ext_37045);
N_NIMCALL(TY53545*, Newmodule_189289)(NimStringDesc* Filename_189291);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(void, objectInit)(void* Dest_18062, TNimType* Typ_18063);
N_NIMCALL(TY52011*, Getident_52016)(NimStringDesc* Identifier_52018);
N_NIMCALL(NIM_BOOL, Isnimrodidentifier_73357)(NimStringDesc* S_73359);
N_NIMCALL(void, Rawmessage_45553)(NU8 Msg_45555, NimStringDesc* Arg_45556);
static N_INLINE(void, asgnRef)(void** Dest_11612, void* Src_11613);
static N_INLINE(void, Incref_11601)(TY10402* C_11603);
static N_INLINE(NIM_BOOL, Canbecycleroot_10826)(TY10402* C_10828);
static N_INLINE(void, Rtladdcycleroot_11452)(TY10402* C_11454);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(void, Decref_11460)(TY10402* C_11462);
N_NIMCALL(TY45532, Newlineinfo_45574)(NimStringDesc* Filename_45576, NI Line_45577, NI Col_45578);
N_NIMCALL(void, Initstrtable_53744)(TY53527* X_53747);
N_NIMCALL(void, Registermodule_189229)(NimStringDesc* Filename_189231, TY53545* Module_189232);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17403, NI Elemsize_17404, NI Newlen_17405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Strtableadd_57064)(TY53527* T_57067, TY53545* N_57068);
N_NIMCALL(TY89031*, Handlesymbolfile_89060)(TY53545* Module_89062, NimStringDesc* Filename_89063);
N_NIMCALL(void, Internalerror_45571)(NimStringDesc* Errmsg_45573);
N_NIMCALL(NI, Getid_53691)(void);
N_NIMCALL(void, Processmodule_101035)(TY53545* Module_101037, NimStringDesc* Filename_101038, TY71013* Stream_101039, TY89031* Rd_101040);
N_NIMCALL(void, Limessage_45562)(TY45532 Info_45564, NU8 Msg_45565, NimStringDesc* Arg_45566);
N_NIMCALL(NU8, Whichkeyword_69468)(NimStringDesc* Id_69470);
N_NIMCALL(void, Wantfile_189713)(NimStringDesc* Filename_189715);
N_NIMCALL(void, Commandcompiletoc_189436)(NimStringDesc* Filename_189438);
N_NIMCALL(void, Semanticpasses_189408)(void);
N_NIMCALL(void, Registerpass_101028)(TY101006* P_101030);
N_NIMCALL(TY101006, Verbosepass_183004)(void);
N_NIMCALL(TY101006, Sempass_121001)(void);
N_NIMCALL(TY101006, Transfpass_185005)(void);
N_NIMCALL(TY101006, Cgenpass_156201)(void);
N_NIMCALL(TY101006, Rodwritepass_107001)(void);
N_NIMCALL(void, Compileproject_189405)(NimStringDesc* Filename_189407);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_36403, NimStringDesc* Tail_36404);
N_NIMCALL(void, Callccompiler_67370)(NimStringDesc* Projectfile_67372);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37020, NimStringDesc* Ext_37021);
N_NIMCALL(void, Commandcompiletoecmascript_189601)(NimStringDesc* Filename_189603);
N_NIMCALL(void, Settarget_49574)(NU8 O_49576, NU8 C_49577);
N_NIMCALL(void, Initdefines_61049)(void);
N_NIMCALL(TY101006, Ecmasgenpass_175004)(void);
N_NIMCALL(void, Commandpretty_189643)(NimStringDesc* Filename_189645);
N_NIMCALL(void, Rendermodule_81035)(TY53523* N_81037, NimStringDesc* Filename_81038, NU8 Renderflags_81041);
N_NIMCALL(NimStringDesc*, Getoutfile_44143)(NimStringDesc* Filename_44145, NimStringDesc* Ext_44146);
N_NIMCALL(void, Loadspecialconfig_76007)(NimStringDesc* Configfilename_76009);
N_NIMCALL(void, Commanddoc_151001)(NimStringDesc* Filename_151003);
N_NIMCALL(void, Commandrst2html_151004)(NimStringDesc* Filename_151006);
N_NIMCALL(void, Commandrst2tex_151007)(NimStringDesc* Filename_151009);
N_NIMCALL(void, Commandgendepend_189410)(NimStringDesc* Filename_189412);
N_NIMCALL(TY101006, Gendependpass_184004)(void);
N_NIMCALL(TY101006, Cleanuppass_183006)(void);
N_NIMCALL(void, Generatedot_184006)(NimStringDesc* Project_184008);
N_NIMCALL(void, Execexternalprogram_67373)(NimStringDesc* Cmd_67375);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(void, Listsymbols_61062)(void);
N_NIMCALL(void, Commandcheck_189433)(NimStringDesc* Filename_189435);
N_NIMCALL(void, Commandscan_189666)(NimStringDesc* Filename_189668);
N_NIMCALL(TY71013*, Llstreamopen_71032)(NimStringDesc* Filename_71034, NU8 Mode_71035);
N_NIMCALL(void, Openlexer_73298)(TY73267* Lex_73301, NimStringDesc* Filename_73302, TY71013* Inputstream_73303);
N_NIMCALL(void, Rawgettok_73304)(TY73267* L_73307, TY73263* Tok_73309);
N_NIMCALL(void, Printtok_73320)(TY73263* Tok_73322);
N_NIMCALL(void, Closelexer_73316)(TY73267* Lex_73319);
N_NIMCALL(void, Messageout_45550)(NimStringDesc* S_45552);
N_NIMCALL(void, Commandinteractive_189616)(void);
N_NIMCALL(TY101006, Evalpass_111046)(void);
N_NIMCALL(TY71013*, Llstreamopenstdin_71038)(void);
STRING_LITERAL(TMP193859, "nim", 3);
STRING_LITERAL(TMP193912, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP193914, "command line", 12);
STRING_LITERAL(TMP193915, "", 0);
STRING_LITERAL(TMP194860, "system", 6);
STRING_LITERAL(TMP195078, "pretty.nim", 10);
STRING_LITERAL(TMP195079, "nimdoc.cfg", 10);
STRING_LITERAL(TMP195466, "nimdoc.tex.cfg", 14);
STRING_LITERAL(TMP195474, "dot -Tpng -o", 12);
STRING_LITERAL(TMP195475, "png", 3);
STRING_LITERAL(TMP195476, "dot", 3);
STRING_LITERAL(TMP195478, "Beware: Indentation tokens depend on the parser\'s state!", 56);
STRING_LITERAL(TMP195479, "stdin", 5);
TY189208* Compmods_189227;
extern TNimType* NTI189208; /* TFileModuleMap */
extern TY10790 Gch_10808;
extern TY41019 Searchpaths_44079;
extern NimStringDesc* Libpath_44110;
extern TY101048 Gincludefile_101051;
extern TY101044 Gimportmodule_101047;
extern TNimType* NTI53521; /* PSym */
extern TNimType* NTI53545; /* TSym */
extern NU8 Gcmd_44082;
extern NU32 Gglobaloptions_44077;
extern TNimType* NTI73267; /* TLexer */
extern TNimType* NTI73261; /* PToken */
extern TNimType* NTI73263; /* TToken */
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
N_NIMCALL(TY53545*, Getmodule_189256)(NimStringDesc* Filename_189258) {
TY53545* Result_189259;
NI I_189282;
NI HEX3Atmp_189284;
NI Res_189286;
NIM_BOOL LOC3;
Result_189259 = 0;
I_189282 = 0;
HEX3Atmp_189284 = 0;
HEX3Atmp_189284 = (Compmods_189227->Sup.len-1);
Res_189286 = 0;
Res_189286 = 0;
while (1) {
if (!(Res_189286 <= HEX3Atmp_189284)) goto LA1;
I_189282 = Res_189286;
LOC3 = nossameFile(Compmods_189227->data[I_189282].Filename, Filename_189258);
if (!LOC3) goto LA4;
Result_189259 = Compmods_189227->data[I_189282].Module;
goto BeforeRet;
LA4: ;
Res_189286 += 1;
} LA1: ;
BeforeRet: ;
return Result_189259;
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
(*C_11603).Refcount = (NI64)((NU64)((*C_11603).Refcount) + (NU64)(8));
LOC2 = Canbecycleroot_10826(C_11603);
if (!LOC2) goto LA3;
Rtladdcycleroot_11452(C_11603);
LA3: ;
}
static N_INLINE(void, Decref_11460)(TY10402* C_11462) {
NIM_BOOL LOC4;
(*C_11462).Refcount = (NI64)((NU64)((*C_11462).Refcount) - (NU64)(8));
if (!((NU64)((*C_11462).Refcount) < (NU64)(8))) goto LA2;
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
N_NIMCALL(void, Registermodule_189229)(NimStringDesc* Filename_189231, TY53545* Module_189232) {
NI Length_189243;
Length_189243 = 0;
Length_189243 = Compmods_189227->Sup.len;
Compmods_189227 = (TY189208*) setLengthSeq(&(Compmods_189227)->Sup, sizeof(TY189206), (NI64)(Length_189243 + 1));
asgnRefNoCycle((void**) &Compmods_189227->data[Length_189243].Filename, copyString(Filename_189231));
asgnRef((void**) &Compmods_189227->data[Length_189243].Module, Module_189232);
}
N_NIMCALL(TY53545*, Newmodule_189289)(NimStringDesc* Filename_189291) {
TY53545* Result_189292;
TY36715 LOC1;
NIM_BOOL LOC3;
Result_189292 = 0;
Result_189292 = (TY53545*) newObj(NTI53521, sizeof(TY53545));
objectInit(Result_189292, NTI53545);
(*Result_189292).Sup.Id = -1;
(*Result_189292).Kind = ((NU8) 18);
nossplitFile(Filename_189291, &LOC1);
asgnRefNoCycle((void**) &(*Result_189292).Name, Getident_52016(LOC1.Name));
LOC3 = Isnimrodidentifier_73357((*(*Result_189292).Name).S);
if (!!(LOC3)) goto LA4;
Rawmessage_45553(((NU8) 19), (*(*Result_189292).Name).S);
LA4: ;
asgnRef((void**) &(*Result_189292).Owner, Result_189292);
(*Result_189292).Info = Newlineinfo_45574(Filename_189291, 1, 1);
(*Result_189292).Flags |=(1<<((NI32)(((NU8) 0))%(sizeof(NI32)*8)));
Initstrtable_53744(&(*Result_189292).Tab);
Registermodule_189229(Filename_189291, Result_189292);
Strtableadd_57064(&(*Result_189292).Tab, Result_189292);
return Result_189292;
}
N_NIMCALL(TY53545*, Compilemodule_189322)(NimStringDesc* Filename_189324, NIM_BOOL Ismainfile_189325, NIM_BOOL Issystemfile_189326) {
TY53545* Result_189358;
TY89031* Rd_189359;
NimStringDesc* F_189360;
NIM_BOOL LOC8;
Result_189358 = 0;
Rd_189359 = 0;
Rd_189359 = NIM_NIL;
F_189360 = 0;
F_189360 = nosaddFileExt(Filename_189324, ((NimStringDesc*) &TMP193859));
Result_189358 = Newmodule_189289(Filename_189324);
if (!Ismainfile_189325) goto LA2;
(*Result_189358).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LA2: ;
if (!Issystemfile_189326) goto LA5;
(*Result_189358).Flags |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
LA5: ;
LOC8 = (Gcmd_44082 == ((NU8) 1));
if (LOC8) goto LA9;
LOC8 = (Gcmd_44082 == ((NU8) 2));
LA9: ;
if (!LOC8) goto LA10;
Rd_189359 = Handlesymbolfile_89060(Result_189358, F_189360);
if (!((*Result_189358).Sup.Id < 0)) goto LA13;
Internalerror_45571(((NimStringDesc*) &TMP193912));
LA13: ;
goto LA7;
LA10: ;
(*Result_189358).Sup.Id = Getid_53691();
LA7: ;
Processmodule_101035(Result_189358, F_189360, NIM_NIL, Rd_189359);
return Result_189358;
}
N_NIMCALL(TY53545*, Importmodule_189327)(NimStringDesc* Filename_189329) {
TY53545* Result_189330;
Result_189330 = 0;
Result_189330 = Getmodule_189256(Filename_189329);
if (!(Result_189330 == NIM_NIL)) goto LA2;
Result_189330 = Compilemodule_189322(Filename_189329, NIM_FALSE, NIM_FALSE);
goto LA1;
LA2: ;
if (!(((*Result_189330).Flags &(1<<((((NU8) 16))&31)))!=0)) goto LA4;
Limessage_45562((*Result_189330).Info, ((NU8) 37), (*(*Result_189330).Name).S);
goto LA1;
LA4: ;
LA1: ;
return Result_189330;
}
N_NIMCALL(void, Wantfile_189713)(NimStringDesc* Filename_189715) {
TY45532 LOC4;
if (!((Filename_189715) && (Filename_189715)->Sup.len == 0)) goto LA2;
LOC4 = Newlineinfo_45574(((NimStringDesc*) &TMP193914), 1, 1);
Limessage_45562(LOC4, ((NU8) 181), ((NimStringDesc*) &TMP193915));
LA2: ;
}
N_NIMCALL(void, Semanticpasses_189408)(void) {
TY101006 LOC1;
TY101006 LOC2;
TY101006 LOC3;
LOC1 = Verbosepass_183004();
Registerpass_101028(&LOC1);
LOC2 = Sempass_121001();
Registerpass_101028(&LOC2);
LOC3 = Transfpass_185005();
Registerpass_101028(&LOC3);
}
N_NIMCALL(void, Compileproject_189405)(NimStringDesc* Filename_189407) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
TY53545* LOC3;
NimStringDesc* LOC4;
TY53545* LOC5;
LOC1 = nosaddFileExt(((NimStringDesc*) &TMP194860), ((NimStringDesc*) &TMP193859));
LOC2 = nosJoinPath(Libpath_44110, LOC1);
LOC3 = Compilemodule_189322(LOC2, NIM_FALSE, NIM_TRUE);
LOC4 = nosaddFileExt(Filename_189407, ((NimStringDesc*) &TMP193859));
LOC5 = Compilemodule_189322(LOC4, NIM_TRUE, NIM_FALSE);
}
N_NIMCALL(void, Commandcompiletoc_189436)(NimStringDesc* Filename_189438) {
TY101006 LOC1;
TY101006 LOC2;
NimStringDesc* LOC6;
Semanticpasses_189408();
LOC1 = Cgenpass_156201();
Registerpass_101028(&LOC1);
LOC2 = Rodwritepass_107001();
Registerpass_101028(&LOC2);
Compileproject_189405(Filename_189438);
if (!!((Gcmd_44082 == ((NU8) 17)))) goto LA4;
LOC6 = nosChangeFileExt(Filename_189438, ((NimStringDesc*) &TMP193915));
Callccompiler_67370(LOC6);
LA4: ;
}
N_NIMCALL(void, Commandcompiletoecmascript_189601)(NimStringDesc* Filename_189603) {
TY101006 LOC1;
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_49574(((NU8) 20), ((NU8) 11));
Initdefines_61049();
Semanticpasses_189408();
LOC1 = Ecmasgenpass_175004();
Registerpass_101028(&LOC1);
Compileproject_189405(Filename_189603);
}
N_NIMCALL(void, Commandpretty_189643)(NimStringDesc* Filename_189645) {
TY53523* Module_189646;
NimStringDesc* LOC1;
NimStringDesc* LOC5;
Module_189646 = 0;
LOC1 = nosaddFileExt(Filename_189645, ((NimStringDesc*) &TMP193859));
Module_189646 = Parsefile_88031(LOC1);
if (!!((Module_189646 == NIM_NIL))) goto LA3;
LOC5 = Getoutfile_44143(Filename_189645, ((NimStringDesc*) &TMP195078));
Rendermodule_81035(Module_189646, LOC5, 0);
LA3: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI64)((NI64)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210) {
(*Dest_17209).data[((*Dest_17209).Sup.len)-0] = C_17210;
(*Dest_17209).data[((NI64)((*Dest_17209).Sup.len + 1))-0] = 0;
(*Dest_17209).Sup.len += 1;
}
N_NIMCALL(void, Commandgendepend_189410)(NimStringDesc* Filename_189412) {
TY101006 LOC1;
TY101006 LOC2;
NimStringDesc* LOC3;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Semanticpasses_189408();
LOC1 = Gendependpass_184004();
Registerpass_101028(&LOC1);
LOC2 = Cleanuppass_183006();
Registerpass_101028(&LOC2);
Compileproject_189405(Filename_189412);
Generatedot_184006(Filename_189412);
LOC4 = nosChangeFileExt(Filename_189412, ((NimStringDesc*) &TMP195475));
LOC5 = nosChangeFileExt(Filename_189412, ((NimStringDesc*) &TMP195476));
LOC3 = rawNewString(LOC4->Sup.len + LOC5->Sup.len + 13);
appendString(LOC3, ((NimStringDesc*) &TMP195474));
appendString(LOC3, LOC4);
appendChar(LOC3, 32);
appendString(LOC3, LOC5);
Execexternalprogram_67373(LOC3);
}
N_NIMCALL(void, Commandcheck_189433)(NimStringDesc* Filename_189435) {
Semanticpasses_189408();
Compileproject_189405(Filename_189435);
}
N_NIMCALL(void, Commandscan_189666)(NimStringDesc* Filename_189668) {
NimStringDesc* F_189669;
TY71013* Stream_189670;
TY73267 L_189682;
TY73263* Tok_189683;
F_189669 = 0;
F_189669 = nosaddFileExt(Filename_189668, ((NimStringDesc*) &TMP193859));
Stream_189670 = 0;
Stream_189670 = Llstreamopen_71032(F_189669, ((NU8) 0));
if (!!((Stream_189670 == NIM_NIL))) goto LA2;
memset((void*)&L_189682, 0, sizeof(L_189682));
L_189682.Sup.Sup.m_type = NTI73267;
Tok_189683 = 0;
Tok_189683 = (TY73263*) newObj(NTI73261, sizeof(TY73263));
(*Tok_189683).m_type = NTI73263;
Openlexer_73298(&L_189682, F_189669, Stream_189670);
while (1) {
Rawgettok_73304(&L_189682, Tok_189683);
Printtok_73320(Tok_189683);
if (!((*Tok_189683).Toktype == ((NU8) 1))) goto LA6;
goto LA4;
LA6: ;
} LA4: ;
Closelexer_73316(&L_189682);
goto LA1;
LA2: ;
Rawmessage_45553(((NU8) 2), F_189669);
LA1: ;
}
N_NIMCALL(void, Commandinteractive_189616)(void) {
TY101006 LOC1;
TY101006 LOC2;
TY101006 LOC3;
TY101006 LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
TY53545* LOC7;
TY53545* M_189630;
TY71013* LOC8;
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_49574(((NU8) 21), ((NU8) 12));
Initdefines_61049();
LOC1 = Verbosepass_183004();
Registerpass_101028(&LOC1);
LOC2 = Sempass_121001();
Registerpass_101028(&LOC2);
LOC3 = Transfpass_185005();
Registerpass_101028(&LOC3);
LOC4 = Evalpass_111046();
Registerpass_101028(&LOC4);
LOC5 = nosaddFileExt(((NimStringDesc*) &TMP194860), ((NimStringDesc*) &TMP193859));
LOC6 = nosJoinPath(Libpath_44110, LOC5);
LOC7 = Compilemodule_189322(LOC6, NIM_FALSE, NIM_TRUE);
M_189630 = 0;
M_189630 = Newmodule_189289(((NimStringDesc*) &TMP195479));
(*M_189630).Sup.Id = Getid_53691();
(*M_189630).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LOC8 = Llstreamopenstdin_71038();
Processmodule_101035(M_189630, ((NimStringDesc*) &TMP195479), LOC8, NIM_NIL);
}
N_NIMCALL(void, Maincommand_189201)(NimStringDesc* Cmd_189203, NimStringDesc* Filename_189204) {
TY36715 LOC4;
NU8 LOC5;
NimStringDesc* LOC6;
TY53523* LOC7;
Appendstr_41061(&Searchpaths_44079, Libpath_44110);
if (!!(((Filename_189204) && (Filename_189204)->Sup.len == 0))) goto LA2;
nossplitFile(Filename_189204, &LOC4);
Prependstr_41071(&Searchpaths_44079, LOC4.Dir);
LA2: ;
Setid_53693(100);
Gincludefile_101051 = Parsefile_88031;
Gimportmodule_101047 = Importmodule_189327;
LOC5 = Whichkeyword_69468(Cmd_189203);
switch (LOC5) {
case ((NU8) 107):
case ((NU8) 200):
case ((NU8) 176):
case ((NU8) 192):
Gcmd_44082 = ((NU8) 1);
Wantfile_189713(Filename_189204);
Commandcompiletoc_189436(Filename_189204);
break;
case ((NU8) 179):
Gcmd_44082 = ((NU8) 17);
Wantfile_189713(Filename_189204);
Rawmessage_45553(((NU8) 176), Cmd_189203);
break;
case ((NU8) 201):
Gcmd_44082 = ((NU8) 2);
Wantfile_189713(Filename_189204);
Commandcompiletoc_189436(Filename_189204);
break;
case ((NU8) 202):
Gcmd_44082 = ((NU8) 3);
Wantfile_189713(Filename_189204);
Commandcompiletoecmascript_189601(Filename_189204);
break;
case ((NU8) 203):
Gcmd_44082 = ((NU8) 4);
Wantfile_189713(Filename_189204);
Rawmessage_45553(((NU8) 176), Cmd_189203);
break;
case ((NU8) 204):
Gcmd_44082 = ((NU8) 6);
Wantfile_189713(Filename_189204);
Commandpretty_189643(Filename_189204);
break;
case ((NU8) 205):
Gcmd_44082 = ((NU8) 7);
Loadspecialconfig_76007(((NimStringDesc*) &TMP195079));
Wantfile_189713(Filename_189204);
Commanddoc_151001(Filename_189204);
break;
case ((NU8) 212):
Gcmd_44082 = ((NU8) 14);
Loadspecialconfig_76007(((NimStringDesc*) &TMP195079));
Wantfile_189713(Filename_189204);
Commandrst2html_151004(Filename_189204);
break;
case ((NU8) 213):
Gcmd_44082 = ((NU8) 15);
Loadspecialconfig_76007(((NimStringDesc*) &TMP195466));
Wantfile_189713(Filename_189204);
Commandrst2tex_151007(Filename_189204);
break;
case ((NU8) 206):
Gcmd_44082 = ((NU8) 8);
Wantfile_189713(Filename_189204);
Commandgendepend_189410(Filename_189204);
break;
case ((NU8) 207):
Gcmd_44082 = ((NU8) 9);
Listsymbols_61062();
break;
case ((NU8) 208):
Gcmd_44082 = ((NU8) 10);
Wantfile_189713(Filename_189204);
Commandcheck_189433(Filename_189204);
break;
case ((NU8) 209):
Gcmd_44082 = ((NU8) 11);
Wantfile_189713(Filename_189204);
LOC6 = nosaddFileExt(Filename_189204, ((NimStringDesc*) &TMP193859));
LOC7 = Parsefile_88031(LOC6);
break;
case ((NU8) 210):
Gcmd_44082 = ((NU8) 12);
Wantfile_189713(Filename_189204);
Commandscan_189666(Filename_189204);
Messageout_45550(((NimStringDesc*) &TMP195478));
break;
case ((NU8) 214):
Gcmd_44082 = ((NU8) 16);
Commandinteractive_189616();
break;
default:
Rawmessage_45553(((NU8) 176), Cmd_189203);
break;
}
}
N_NOINLINE(void, mainInit)(void) {
asgnRefNoCycle((void**) &Compmods_189227, (TY189208*) newSeq(NTI189208, 0));
}

