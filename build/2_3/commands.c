/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49036 TY49036;
typedef struct TY49448 TY49448;
typedef struct TY45532 TY45532;
typedef struct TY41019 TY41019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY41013 TY41013;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TNimObject TNimObject;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY70066[3];
struct TY49036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY49036 TY49054[21];
struct TY49448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY49448 TY49461[12];
struct TY45532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
typedef NimStringDesc* TY46018[4];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY41019 {
TNimType* m_type;
TY41013* Head;
TY41013* Tail;
NI Counter;
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
typedef NimStringDesc* TY45494[13];
typedef NimStringDesc* TY45474[15];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY41013 {
  TNimObject Sup;
TY41013* Prev;
TY41013* Next;
};
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(void, Messageout_45550)(NimStringDesc* S_45552);
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_70061)(void);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_22965, NimStringDesc** A_22967, NI A_22967Len0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(NU8, Whichkeyword_69468)(NimStringDesc* Id_69470);
N_NIMCALL(void, Expectarg_70268)(NimStringDesc* Switch_70270, NimStringDesc* Arg_70271, NU8 Pass_70272, TY45532 Info_70273);
N_NIMCALL(void, Limessage_45562)(TY45532 Info_45564, NU8 Msg_45565, NimStringDesc* Arg_45566);
N_NIMCALL(NimStringDesc*, Processpath_70403)(NimStringDesc* Path_70405);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_34856);
N_NIMCALL(NimStringDesc*, Getprefixdir_44107)(void);
N_NIMCALL(NIM_BOOL, Contains_41159)(TY41019* List_41161, NimStringDesc* Data_41162);
N_NIMCALL(void, Prependstr_41071)(TY41019* List_41074, NimStringDesc* Data_41075);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(void, Definesymbol_61053)(NimStringDesc* Symbol_61055);
N_NIMCALL(void, Undefsymbol_61056)(NimStringDesc* Symbol_61058);
N_NIMCALL(void, Processcompile_70411)(NimStringDesc* Filename_70413);
N_NIMCALL(NimStringDesc*, Findfile_44088)(NimStringDesc* F_44090);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37020, NimStringDesc* Ext_37021);
N_NIMCALL(void, Addexternalfiletocompile_67355)(NimStringDesc* Filename_67357);
N_NIMCALL(void, Addfiletolink_67358)(NimStringDesc* Filename_67360);
N_NIMCALL(NimStringDesc*, Completecfilepath_67344)(NimStringDesc* Cfile_67346, NIM_BOOL Createsubdir_67347);
N_NIMCALL(void, Expectnoarg_70274)(NimStringDesc* Switch_70276, NimStringDesc* Arg_70277, NU8 Pass_70278, TY45532 Info_70279);
N_NIMCALL(void, Processonoffswitch_70216)(NU32 Op_70218, NimStringDesc* Arg_70219, NU8 Pass_70220, TY45532 Info_70221);
N_NIMCALL(void, Processspecificnote_70280)(NimStringDesc* Arg_70282, NU8 State_70283, NU8 Pass_70284, TY45532 Info_70285);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(void, Invalidcmdlineoption_70133)(NU8 Pass_70135, NimStringDesc* Switch_70136, TY45532 Info_70137);
N_NIMCALL(NI, Findstr_69471)(NimStringDesc** A_69474, NI A_69474Len0, NimStringDesc* S_69475);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(void, Processonoffswitchg_70242)(NU32 Op_70244, NimStringDesc* Arg_70245, NU8 Pass_70246, TY45532 Info_70247);
N_NIMCALL(void, Listsymbols_61062)(void);
N_NIMCALL(void, Addcompileoption_67361)(NimStringDesc* Option_67363);
N_NIMCALL(void, Addlinkoption_67364)(NimStringDesc* Option_67366);
N_NIMCALL(void, Addimplicitmod_44140)(NimStringDesc* Filename_44142);
N_NIMCALL(NU8, Nametoos_49564)(NimStringDesc* Name_49566);
N_NIMCALL(void, Settarget_49574)(NU8 O_49576, NU8 C_49577);
N_NIMCALL(void, Initdefines_61049)(void);
N_NIMCALL(NU8, Nametocpu_49567)(NimStringDesc* Name_49569);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_23504);
N_NIMCALL(void, Writeversioninfo_70115)(NU8 Pass_70117);
N_NIMCALL(void, Writeadvancedusage_70091)(NU8 Pass_70093);
N_NIMCALL(void, Helponerror_70079)(NU8 Pass_70081);
N_NIMCALL(void, Splitswitch_70138)(NimStringDesc* Switch_70140, NimStringDesc** Cmd_70142, NimStringDesc** Arg_70143, NU8 Pass_70144, TY45532 Info_70145);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(void, Putenv_37639)(NimStringDesc* Key_37641, NimStringDesc* Val_37642);
N_NIMCALL(void, Setcc_67381)(NimStringDesc* Ccname_67383);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_24227, NIM_CHAR Sub_24228, NI Start_24229);
N_NIMCALL(void, Setconfigvar_44136)(NimStringDesc* Key_44138, NimStringDesc* Val_44139);
STRING_LITERAL(TMP193635, "Nimrod Compiler Version $1 (2010-08-17) [$2: $3]\012Copyright (c) "
"2004-2010 by Andreas Rumpf\012", 90);
STRING_LITERAL(TMP193636, "0.8.9", 5);
extern NIM_CONST TY49054 Os_49053;
extern NIM_CONST TY49461 Cpu_49460;
STRING_LITERAL(TMP193637, "Usage::\012  nimrod command [options] inputfile [arguments]\012Comman"
"d::\012  compile, c                compile project with default cod"
"e generator (C)\012  compileToC, cc            compile project with"
" C code generator\012  run                       compile the projec"
"t in memory and run it\012  doc                       generate the "
"documentation for inputfile\012  rst2html                  converts"
" a reStructuredText file to HTML\012  rst2tex                   con"
"verts a reStructuredText file to TeX\012Arguments:\012  arguments are "
"passed to the program being run (if --run option is selected)\012Op"
"tions:\012  -p, --path:PATH           add path to search paths\012  -o"
", --out:FILE            set the output filename\012  -d, --define:S"
"YMBOL       define a conditional symbol\012  -u, --undef:SYMBOL    "
"    undefine a conditional symbol\012  -f, --forceBuild          fo"
"rce rebuilding of all modules\012  --stackTrace:on|off       turn s"
"tack tracing on|off\012  --lineTrace:on|off        turn line tracin"
"g on|off\012  --debugger:on|off         turn Embedded Nimrod Debugg"
"er on|off\012  -x, --checks:on|off       turn all runtime checks on"
"|off\012  --objChecks:on|off        turn obj conversion checks on|o"
"ff\012  --fieldChecks:on|off      turn case variant field checks on"
"|off\012  --rangeChecks:on|off      turn range checks on|off\012  --bo"
"undChecks:on|off      turn bound checks on|off\012  --overflowCheck"
"s:on|off   turn int over-/underflow checks on|off\012  -a, --assert"
"ions:on|off   turn assertions on|off\012  --floatChecks:on|off     "
" turn all floating point (NaN/Inf) checks on|off\012  --nanChecks:o"
"n|off        turn NaN checks on|off\012  --infChecks:on|off        "
"turn Inf checks on|off\012  --deadCodeElim:on|off     whole program"
" dead code elimination on|off\012  --opt:none|speed|size     optimi"
"ze not at all or for speed|size\012  --app:console|gui|lib     gene"
"rate a console|GUI application|dynamic library\012  -r, --run      "
"           run the compiled program with given arguments\012  --adv"
"anced                show advanced command line switches\012  -h, -"
"-help                show this help\012", 2019);
STRING_LITERAL(TMP193647, "nimrod", 6);
STRING_LITERAL(TMP193650, "lib", 3);
STRING_LITERAL(TMP193651, "", 0);
STRING_LITERAL(TMP193660, "boehmgc", 7);
STRING_LITERAL(TMP193661, "nogc", 4);
extern NIM_CONST TY45494 Hintstostr_45493;
extern NIM_CONST TY45474 Warningstostr_45473;
STRING_LITERAL(TMP193662, "endb", 4);
STRING_LITERAL(TMP193663, "profiler", 8);
STRING_LITERAL(TMP193664, "guiapp", 6);
STRING_LITERAL(TMP193665, "library", 7);
STRING_LITERAL(TMP193669, "Advanced commands::\012  pretty                    pretty print th"
"e inputfile\012  genDepend                 generate a DOT file cont"
"aining the\012                            module dependency graph\012 "
" listDef                   list all defined conditionals and exi"
"t\012  check                     checks the project for syntax and "
"semantic\012  parse                     parses a single file (for d"
"ebugging Nimrod)\012Advanced options:\012  -w, --warnings:on|off     t"
"urn all warnings on|off\012  --warning[X]:on|off       turn specifi"
"c warning X on|off\012  --hints:on|off            turn all hints on"
"|off\012  --hint[X]:on|off          turn specific hint X on|off\012  -"
"-lib:PATH                set the system library path\012  -c, --com"
"pileOnly         compile only; do not assemble or link\012  --noLin"
"king               compile but do not link\012  --noMain           "
"       do not generate a main procedure\012  --genScript           "
"    generate a compile script (in the \'nimcache\'\012               "
"             subdirectory named \'compile_$project$scriptext\')\012  "
"--os:SYMBOL               set the target operating system (cross"
"-compilation)\012  --cpu:SYMBOL              set the target process"
"or (cross-compilation)\012  --debuginfo               enables debug"
" information\012  -t, --passc:OPTION        pass an option to the C"
" compiler\012  -l, --passl:OPTION        pass an option to the link"
"er\012  --genMapping              generate a mapping file containin"
"g\012                            (Nimrod, mangled) identifier pairs"
"\012  --lineDir:on|off          generation of #line directive on|of"
"f\012  --checkpoints:on|off      turn checkpoints on|off; for debug"
"ging Nimrod\012  --skipCfg                 do not read the general "
"configuration file\012  --skipProjCfg             do not read the p"
"roject\'s configuration file\012  --gc:refc|boehm|none      use Nimr"
"od\'s native GC|Boehm GC|no GC\012  --index:FILE              use FI"
"LE to generate a documenation index file\012  --putenv:key=value   "
"     set an environment variable\012  --listCmd                 lis"
"t the commands used to execute external programs\012  --parallelBui"
"ld=0|1|...   perform a parallel build\012                          "
"  value = number of processors (0 for auto-detect)\012  --verbosity"
":0|1|2|3       set Nimrod\'s verbosity level (0 is default)\012  -v,"
" --version             show detailed version information\012", 2296);
NIM_BOOL Helpwritten_70076;
NIM_BOOL Versionwritten_70077;
NIM_BOOL Advhelpwritten_70078;
extern NU8 Hostos_49563;
extern NU8 Hostcpu_49561;
extern NimStringDesc* Libpath_44110;
extern TY41019 Searchpaths_44079;
extern NimStringDesc* Outfile_44080;
extern TY10790 Gch_10808;
extern NU32 Gglobaloptions_44077;
extern NU32 Goptions_44075;
extern NU32 Gnotes_45539;
extern NimStringDesc* Gindexfile_44081;
extern NU8 Targetcpu_49560;
extern NU8 Targetos_49562;
extern NI Gverbosity_44083;
extern NI Gnumberofprocessors_44084;
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI32)((NI32)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_70061)(void) {
NimStringDesc* Result_70063;
NimStringDesc* LOC1;
TY70066 LOC2;
NimStringDesc* LOC3;
Result_70063 = 0;
LOC2[0] = copyString(((NimStringDesc*) &TMP193636));
LOC2[1] = copyString(Os_49053[(Hostos_49563)-1].Name);
LOC2[2] = copyString(Cpu_49460[(Hostcpu_49561)-1].Name);
LOC3 = nsuFormatOpenArray(((NimStringDesc*) &TMP193635), LOC2, 3);
LOC1 = rawNewString(LOC3->Sup.len + 2019);
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &TMP193637));
Result_70063 = LOC1;
return Result_70063;
}
N_NIMCALL(void, Writecommandlineusage_70001)(void) {
NimStringDesc* LOC4;
if (!!(Helpwritten_70076)) goto LA2;
LOC4 = Getcommandlinedesc_70061();
Messageout_45550(LOC4);
Helpwritten_70076 = NIM_TRUE;
LA2: ;
}
N_NIMCALL(void, Expectarg_70268)(NimStringDesc* Switch_70270, NimStringDesc* Arg_70271, NU8 Pass_70272, TY45532 Info_70273) {
if (!((Arg_70271) && (Arg_70271)->Sup.len == 0)) goto LA2;
Limessage_45562(Info_70273, ((NU8) 42), Switch_70270);
LA2: ;
}
N_NIMCALL(NimStringDesc*, Processpath_70403)(NimStringDesc* Path_70405) {
NimStringDesc* Result_70406;
TY46018 LOC1;
NimStringDesc* LOC2;
Result_70406 = 0;
LOC1[0] = copyString(((NimStringDesc*) &TMP193647));
LOC1[1] = Getprefixdir_44107();
LOC1[2] = copyString(((NimStringDesc*) &TMP193650));
LOC1[3] = copyString(Libpath_44110);
LOC2 = nsuFormatOpenArray(Path_70405, LOC1, 4);
Result_70406 = nosUnixToNativePath(LOC2);
return Result_70406;
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
N_NIMCALL(void, Processcompile_70411)(NimStringDesc* Filename_70413) {
NimStringDesc* Found_70414;
NimStringDesc* Trunc_70415;
NimStringDesc* LOC4;
Found_70414 = 0;
Found_70414 = Findfile_44088(Filename_70413);
if (!((Found_70414) && (Found_70414)->Sup.len == 0)) goto LA2;
Found_70414 = copyString(Filename_70413);
LA2: ;
Trunc_70415 = 0;
Trunc_70415 = nosChangeFileExt(Found_70414, ((NimStringDesc*) &TMP193651));
Addexternalfiletocompile_67355(Found_70414);
LOC4 = Completecfilepath_67344(Trunc_70415, NIM_FALSE);
Addfiletolink_67358(LOC4);
}
N_NIMCALL(void, Expectnoarg_70274)(NimStringDesc* Switch_70276, NimStringDesc* Arg_70277, NU8 Pass_70278, TY45532 Info_70279) {
if (!!(((Arg_70277) && (Arg_70277)->Sup.len == 0))) goto LA2;
Limessage_45562(Info_70279, ((NU8) 43), Switch_70276);
LA2: ;
}
N_NIMCALL(void, Processonoffswitch_70216)(NU32 Op_70218, NimStringDesc* Arg_70219, NU8 Pass_70220, TY45532 Info_70221) {
NU8 LOC1;
LOC1 = Whichkeyword_69468(Arg_70219);
switch (LOC1) {
case ((NU8) 125):
Goptions_44075 = (Goptions_44075 | Op_70218);
break;
case ((NU8) 126):
Goptions_44075 = (Goptions_44075 & ~ Op_70218);
break;
default:
Limessage_45562(Info_70221, ((NU8) 47), Arg_70219);
break;
}
}
N_NIMCALL(void, Invalidcmdlineoption_70133)(NU8 Pass_70135, NimStringDesc* Switch_70136, TY45532 Info_70137) {
Limessage_45562(Info_70137, ((NU8) 41), Switch_70136);
}
N_NIMCALL(void, Processspecificnote_70280)(NimStringDesc* Arg_70282, NU8 State_70283, NU8 Pass_70284, TY45532 Info_70285) {
NimStringDesc* Id_70286;
NI I_70287;
NU8 N_70288;
NIM_BOOL LOC2;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI X_70362;
NI X_70370;
NimStringDesc* LOC23;
NU8 LOC24;
Id_70286 = 0;
Id_70286 = copyString(((NimStringDesc*) &TMP193651));
I_70287 = 0;
I_70287 = 0;
N_70288 = 0;
N_70288 = ((NU8) 222);
while (1) {
LOC2 = (I_70287 < (NI32)(Arg_70282->Sup.len + 0));
if (!(LOC2)) goto LA3;
LOC2 = !(((NU8)(Arg_70282->data[I_70287]) == (NU8)(93)));
LA3: ;
if (!LOC2) goto LA1;
Id_70286 = addChar(Id_70286, Arg_70282->data[I_70287]);
I_70287 += 1;
} LA1: ;
LOC5 = (I_70287 < (NI32)(Arg_70282->Sup.len + 0));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Arg_70282->data[I_70287]) == (NU8)(93));
LA6: ;
if (!LOC5) goto LA7;
I_70287 += 1;
goto LA4;
LA7: ;
Invalidcmdlineoption_70133(Pass_70284, Arg_70282, Info_70285);
LA4: ;
LOC10 = (I_70287 < (NI32)(Arg_70282->Sup.len + 0));
if (!(LOC10)) goto LA11;
LOC10 = (((NU8)(Arg_70282->data[I_70287])) == ((NU8)(58)) || ((NU8)(Arg_70282->data[I_70287])) == ((NU8)(61)));
LA11: ;
if (!LOC10) goto LA12;
I_70287 += 1;
goto LA9;
LA12: ;
Invalidcmdlineoption_70133(Pass_70284, Arg_70282, Info_70285);
LA9: ;
if (!(State_70283 == ((NU8) 96))) goto LA15;
X_70362 = 0;
X_70362 = Findstr_69471(Hintstostr_45493, 13, Id_70286);
if (!(0 <= X_70362)) goto LA18;
N_70288 = ((NU8) (((NU8) ((NI32)(X_70362 + 222)))));
goto LA17;
LA18: ;
Invalidcmdlineoption_70133(Pass_70284, Arg_70282, Info_70285);
LA17: ;
goto LA14;
LA15: ;
X_70370 = 0;
X_70370 = Findstr_69471(Warningstostr_45473, 15, Id_70286);
if (!(0 <= X_70370)) goto LA21;
N_70288 = ((NU8) (((NU8) ((NI32)(X_70370 + 207)))));
goto LA20;
LA21: ;
Invalidcmdlineoption_70133(Pass_70284, Arg_70282, Info_70285);
LA20: ;
LA14: ;
LOC23 = copyStr(Arg_70282, I_70287);
LOC24 = Whichkeyword_69468(LOC23);
switch (LOC24) {
case ((NU8) 125):
Gnotes_45539 |=(1<<((NI32)((((NU8) (N_70288))-207))%(sizeof(NI32)*8)));
break;
case ((NU8) 126):
Gnotes_45539 &= ~(1 << ((NI32)((((NU8) (N_70288))-207)) % (sizeof(NI32)*8)));
break;
default:
Limessage_45562(Info_70285, ((NU8) 47), Arg_70282);
break;
}
}
N_NIMCALL(void, Processonoffswitchg_70242)(NU32 Op_70244, NimStringDesc* Arg_70245, NU8 Pass_70246, TY45532 Info_70247) {
NU8 LOC1;
LOC1 = Whichkeyword_69468(Arg_70245);
switch (LOC1) {
case ((NU8) 125):
Gglobaloptions_44077 = (Gglobaloptions_44077 | Op_70244);
break;
case ((NU8) 126):
Gglobaloptions_44077 = (Gglobaloptions_44077 & ~ Op_70244);
break;
default:
Limessage_45562(Info_70247, ((NU8) 47), Arg_70245);
break;
}
}
N_NIMCALL(void, Writeversioninfo_70115)(NU8 Pass_70117) {
NIM_BOOL LOC2;
TY70066 LOC6;
NimStringDesc* LOC7;
LOC2 = (Pass_70117 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Versionwritten_70077);
LA3: ;
if (!LOC2) goto LA4;
Versionwritten_70077 = NIM_TRUE;
Helpwritten_70076 = NIM_TRUE;
LOC6[0] = copyString(((NimStringDesc*) &TMP193636));
LOC6[1] = copyString(Os_49053[(Hostos_49563)-1].Name);
LOC6[2] = copyString(Cpu_49460[(Hostcpu_49561)-1].Name);
LOC7 = nsuFormatOpenArray(((NimStringDesc*) &TMP193635), LOC6, 3);
Messageout_45550(LOC7);
exit(0);
LA4: ;
}
N_NIMCALL(void, Writeadvancedusage_70091)(NU8 Pass_70093) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
TY70066 LOC7;
NimStringDesc* LOC8;
LOC2 = (Pass_70093 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Advhelpwritten_70078);
LA3: ;
if (!LOC2) goto LA4;
LOC7[0] = copyString(((NimStringDesc*) &TMP193636));
LOC7[1] = copyString(Os_49053[(Hostos_49563)-1].Name);
LOC7[2] = copyString(Cpu_49460[(Hostcpu_49561)-1].Name);
LOC8 = nsuFormatOpenArray(((NimStringDesc*) &TMP193635), LOC7, 3);
LOC6 = rawNewString(LOC8->Sup.len + 2296);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP193669));
Messageout_45550(LOC6);
Advhelpwritten_70078 = NIM_TRUE;
Helpwritten_70076 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Helponerror_70079)(NU8 Pass_70081) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
LOC2 = (Pass_70081 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Helpwritten_70076);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = Getcommandlinedesc_70061();
Messageout_45550(LOC6);
Helpwritten_70076 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Splitswitch_70138)(NimStringDesc* Switch_70140, NimStringDesc** Cmd_70142, NimStringDesc** Arg_70143, NU8 Pass_70144, TY45532 Info_70145) {
NI I_70146;
NIM_BOOL LOC2;
NIM_BOOL LOC7;
unsureAsgnRef((void**) &(*Cmd_70142), copyString(((NimStringDesc*) &TMP193651)));
I_70146 = 0;
I_70146 = 0;
LOC2 = (I_70146 < Switch_70140->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Switch_70140->data[I_70146]) == (NU8)(45));
LA3: ;
if (!LOC2) goto LA4;
I_70146 += 1;
LA4: ;
LOC7 = (I_70146 < Switch_70140->Sup.len);
if (!(LOC7)) goto LA8;
LOC7 = ((NU8)(Switch_70140->data[I_70146]) == (NU8)(45));
LA8: ;
if (!LOC7) goto LA9;
I_70146 += 1;
LA9: ;
while (1) {
if (!(I_70146 < Switch_70140->Sup.len)) goto LA11;
switch (((NU8)(Switch_70140->data[I_70146]))) {
case 97 ... 122:
case 65 ... 90:
case 48 ... 57:
case 95:
case 46:
(*Cmd_70142) = addChar((*Cmd_70142), Switch_70140->data[I_70146]);
break;
default:
goto LA11;
break;
}
I_70146 += 1;
} LA11: ;
if (!(Switch_70140->Sup.len <= I_70146)) goto LA13;
unsureAsgnRef((void**) &(*Arg_70143), copyString(((NimStringDesc*) &TMP193651)));
goto LA12;
LA13: ;
if (!(((NU8)(Switch_70140->data[I_70146])) == ((NU8)(58)) || ((NU8)(Switch_70140->data[I_70146])) == ((NU8)(61)) || ((NU8)(Switch_70140->data[I_70146])) == ((NU8)(91)))) goto LA15;
unsureAsgnRef((void**) &(*Arg_70143), copyStr(Switch_70140, (NI32)(I_70146 + 1)));
goto LA12;
LA15: ;
Invalidcmdlineoption_70133(Pass_70144, Switch_70140, Info_70145);
LA12: ;
}
N_NIMCALL(void, Processswitch_70012)(NimStringDesc* Switch_70014, NimStringDesc* Arg_70015, NU8 Pass_70016, TY45532 Info_70017) {
NU8 Theos_70422;
NU8 Cpu_70423;
NimStringDesc* Key_70424;
NimStringDesc* Val_70425;
NimStringDesc* Path_70426;
NU8 LOC1;
NIM_BOOL LOC3;
NU8 LOC12;
NU8 LOC19;
NU8 LOC20;
NI LOC52;
Theos_70422 = 0;
Cpu_70423 = 0;
Key_70424 = 0;
Val_70425 = 0;
Path_70426 = 0;
LOC1 = Whichkeyword_69468(Switch_70014);
switch (LOC1) {
case ((NU8) 143):
case ((NU8) 144):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Path_70426 = Processpath_70403(Arg_70015);
LOC3 = Contains_41159(&Searchpaths_44079, Path_70426);
if (!!(LOC3)) goto LA4;
Prependstr_41071(&Searchpaths_44079, Path_70426);
LA4: ;
break;
case ((NU8) 45):
case ((NU8) 161):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
asgnRefNoCycle((void**) &Outfile_44080, copyString(Arg_70015));
break;
case ((NU8) 100):
case ((NU8) 145):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Definesymbol_61053(Arg_70015);
break;
case ((NU8) 101):
case ((NU8) 146):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Undefsymbol_61056(Arg_70015);
break;
case ((NU8) 107):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!((6 &(1<<((Pass_70016)&7)))!=0)) goto LA7;
Processcompile_70411(Arg_70015);
LA7: ;
break;
case ((NU8) 106):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!((6 &(1<<((Pass_70016)&7)))!=0)) goto LA10;
Addfiletolink_67358(Arg_70015);
LA10: ;
break;
case ((NU8) 147):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 9))%(sizeof(NI32)*8)));
break;
case ((NU8) 148):
case ((NU8) 176):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
break;
case ((NU8) 149):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 7))%(sizeof(NI32)*8)));
break;
case ((NU8) 196):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 18))%(sizeof(NI32)*8)));
break;
case ((NU8) 150):
case ((NU8) 151):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 1))%(sizeof(NI32)*8)));
break;
case ((NU8) 156):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
LOC12 = Whichkeyword_69468(Arg_70015);
switch (LOC12) {
case ((NU8) 158):
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 2))%(sizeof(NI32)*8)));
Gglobaloptions_44077 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Definesymbol_61053(((NimStringDesc*) &TMP193660));
break;
case ((NU8) 157):
Gglobaloptions_44077 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 3))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Gglobaloptions_44077 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Gglobaloptions_44077 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Definesymbol_61053(((NimStringDesc*) &TMP193661));
break;
default:
Limessage_45562(Info_70017, ((NU8) 48), Arg_70015);
break;
}
break;
case ((NU8) 136):
case ((NU8) 137):
Processonoffswitch_70216(524288, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 95):
Processspecificnote_70280(Arg_70015, ((NU8) 95), Pass_70016, Info_70017);
break;
case ((NU8) 96):
Processspecificnote_70280(Arg_70015, ((NU8) 96), Pass_70016, Info_70017);
break;
case ((NU8) 138):
Processonoffswitch_70216(1048576, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 195):
Processonoffswitch_70216(2048, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 103):
Processonoffswitch_70216(8388608, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 104):
Processonoffswitch_70216(256, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 114):
Processonoffswitch_70216(512, Arg_70015, Pass_70016, Info_70017);
if (!((Goptions_44075 &(1<<((((NU8) 17))&31)))!=0)) goto LA14;
Definesymbol_61053(((NimStringDesc*) &TMP193662));
goto LA13;
LA14: ;
Undefsymbol_61056(((NimStringDesc*) &TMP193662));
LA13: ;
break;
case ((NU8) 74):
Processonoffswitch_70216(4096, Arg_70015, Pass_70016, Info_70017);
if (!((Goptions_44075 &(1<<((((NU8) 20))&31)))!=0)) goto LA17;
Definesymbol_61053(((NimStringDesc*) &TMP193663));
goto LA16;
LA17: ;
Undefsymbol_61056(((NimStringDesc*) &TMP193663));
LA16: ;
break;
case ((NU8) 127):
case ((NU8) 187):
Processonoffswitch_70216(IL64(4261609472), Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 132):
Processonoffswitch_70216(IL64(2147549184), Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 134):
Processonoffswitch_70216(65536, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 133):
Processonoffswitch_70216(IL64(2147483648), Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 75):
Processonoffswitch_70216(33554432, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 186):
Processonoffswitch_70216(67108864, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 128):
Processonoffswitch_70216(134217728, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 129):
Processonoffswitch_70216(268435456, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 130):
Processonoffswitch_70216(536870912, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 102):
Processonoffswitch_70216(262144, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 135):
case ((NU8) 159):
Processonoffswitch_70216(131072, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 152):
Processonoffswitchg_70242(268435456, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 160):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
LOC19 = Whichkeyword_69468(Arg_70015);
switch (LOC19) {
case ((NU8) 140):
Goptions_44075 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
Goptions_44075 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
case ((NU8) 141):
Goptions_44075 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_44075 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Goptions_44075 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_44075 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
default:
Limessage_45562(Info_70017, ((NU8) 49), Arg_70015);
break;
}
break;
case ((NU8) 162):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
LOC20 = Whichkeyword_69468(Arg_70015);
switch (LOC20) {
case ((NU8) 164):
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 11))%(sizeof(NI32)*8)));
Definesymbol_61053(((NimStringDesc*) &TMP193664));
break;
case ((NU8) 163):
Gglobaloptions_44077 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
break;
case ((NU8) 89):
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 10))%(sizeof(NI32)*8)));
Gglobaloptions_44077 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
Definesymbol_61053(((NimStringDesc*) &TMP193665));
break;
default:
Limessage_45562(Info_70017, ((NU8) 50), Arg_70015);
break;
}
break;
case ((NU8) 207):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!((6 &(1<<((Pass_70016)&7)))!=0)) goto LA22;
Listsymbols_61062();
LA22: ;
break;
case ((NU8) 165):
case ((NU8) 166):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!((6 &(1<<((Pass_70016)&7)))!=0)) goto LA25;
Addcompileoption_67361(Arg_70015);
LA25: ;
break;
case ((NU8) 167):
case ((NU8) 168):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!((6 &(1<<((Pass_70016)&7)))!=0)) goto LA28;
Addlinkoption_67364(Arg_70015);
LA28: ;
break;
case ((NU8) 199):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!((6 &(1<<((Pass_70016)&7)))!=0)) goto LA31;
asgnRefNoCycle((void**) &Gindexfile_44081, copyString(Arg_70015));
LA31: ;
break;
case ((NU8) 28):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Addimplicitmod_44140(Arg_70015);
break;
case ((NU8) 169):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
break;
case ((NU8) 171):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
break;
case ((NU8) 172):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!(Pass_70016 == ((NU8) 0))) goto LA34;
Theos_70422 = Nametoos_49564(Arg_70015);
if (!(Theos_70422 == ((NU8) 0))) goto LA37;
Limessage_45562(Info_70017, ((NU8) 51), Arg_70015);
LA37: ;
if (!!((Theos_70422 == Hostos_49563))) goto LA40;
Settarget_49574(Theos_70422, Targetcpu_49560);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_61049();
LA40: ;
LA34: ;
break;
case ((NU8) 173):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
if (!(Pass_70016 == ((NU8) 0))) goto LA43;
Cpu_70423 = Nametocpu_49567(Arg_70015);
if (!(Cpu_70423 == ((NU8) 0))) goto LA46;
Limessage_45562(Info_70017, ((NU8) 52), Arg_70015);
LA46: ;
if (!!((Cpu_70423 == Hostcpu_49561))) goto LA49;
Settarget_49574(Targetos_49562, Cpu_70423);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_61049();
LA49: ;
LA43: ;
break;
case ((NU8) 179):
case ((NU8) 180):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 181):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gverbosity_44083 = nsuParseInt(Arg_70015);
break;
case ((NU8) 105):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gnumberofprocessors_44084 = nsuParseInt(Arg_70015);
break;
case ((NU8) 188):
case ((NU8) 182):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Writeversioninfo_70115(Pass_70016);
break;
case ((NU8) 189):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Writeadvancedusage_70091(Pass_70016);
break;
case ((NU8) 183):
case ((NU8) 184):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Helponerror_70079(Pass_70016);
break;
case ((NU8) 185):
Processonoffswitchg_70242(8388608, Arg_70015, Pass_70016, Info_70017);
break;
case ((NU8) 190):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
break;
case ((NU8) 191):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 17))%(sizeof(NI32)*8)));
break;
case ((NU8) 193):
Expectnoarg_70274(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Gglobaloptions_44077 |=(1<<((NI32)(((NU8) 12))%(sizeof(NI32)*8)));
break;
case ((NU8) 89):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
asgnRefNoCycle((void**) &Libpath_44110, Processpath_70403(Arg_70015));
break;
case ((NU8) 216):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Splitswitch_70138(Arg_70015, &Key_70424, &Val_70425, Pass_70016, Info_70017);
Putenv_37639(Key_70424, Val_70425);
break;
case ((NU8) 192):
Expectarg_70268(Switch_70014, Arg_70015, Pass_70016, Info_70017);
Setcc_67381(Arg_70015);
break;
default:
LOC52 = nsuFindChar(Switch_70014, 46, 0);
if (!(0 <= LOC52)) goto LA53;
Setconfigvar_44136(Switch_70014, Arg_70015);
goto LA51;
LA53: ;
Invalidcmdlineoption_70133(Pass_70016, Switch_70014, Info_70017);
LA51: ;
break;
}
}
N_NOINLINE(void, commandsInit)(void) {
}

