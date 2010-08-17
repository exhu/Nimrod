/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY41019 TY41019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY41013 TY41013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY43008 TY43008;
typedef struct TY37422 TY37422;
typedef struct TY36578 TY36578;
typedef struct TY41015 TY41015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY43006 TY43006;
typedef struct TY43004 TY43004;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
typedef NimStringDesc* TY44349[1];
struct TY36578 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY41013 {
  TNimObject Sup;
TY41013* Prev;
TY41013* Next;
};
struct TY41015 {
  TY41013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY46018[4];
typedef NimStringDesc* TY70066[3];
struct E_Base {
  TNimObject Sup;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
E_Base* exc;
NI status;
jmp_buf context;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY43004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY43008 {
  TNimObject Sup;
NI Counter;
TY43006* Data;
NU8 Mode;
};
struct TY37422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY43006 {
  TGenericSeq Sup;
  TY43004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
N_NIMCALL(TY43008*, Newstringtable_43019)(NimStringDesc** Keyvaluepairs_43022, NI Keyvaluepairs_43022Len0, NU8 Mode_43023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_36577, TY36578* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void);
N_NIMCALL(NimStringDesc*, Rawfindfile_44290)(NimStringDesc* F_44292);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_35003);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_36403, NimStringDesc* Tail_36404);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_22448);
N_NIMCALL(NimStringDesc*, Shortendir_44198)(NimStringDesc* Dir_44200);
N_NIMCALL(NimStringDesc*, Getprefixdir_44107)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_23769, NimStringDesc* Prefix_23770);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_36487, NI Parts_36487Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37020, NimStringDesc* Ext_37021);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_44221)(NimStringDesc* Path_44223);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_38603);
N_NIMCALL(void, raiseException)(E_Base* E_4604, NCSTRING Ename_4605);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17403, NI Elemsize_17404, NI Newlen_17405);
N_NIMCALL(NimStringDesc*, Get_43029)(TY43008* T_43031, NimStringDesc* Key_43032);
N_NIMCALL(void, Put_43024)(TY43008* T_43026, NimStringDesc* Key_43027, NimStringDesc* Val_43028);
N_NIMCALL(NIM_BOOL, Haskey_43033)(TY43008* T_43035, NimStringDesc* Key_43036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_22595, NimStringDesc* B_22596);
N_NIMCALL(void, Writeln_44285)(FILE* F_44288, NimStringDesc* X_44289);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
NIM_CONST NU32 Checksoptions_44072 = 1022;
STRING_LITERAL(TMP44087, "", 0);
STRING_LITERAL(TMP193653, "nimcache", 8);
STRING_LITERAL(TMP193659, "cannot create directory: ", 25);
STRING_LITERAL(TMP195493, "\012", 1);
NU32 Goptions_44075;
NU32 Gglobaloptions_44077;
NI8 Gexitcode_44078;
TY41019 Searchpaths_44079;
extern TNimType* NTI41019; /* TLinkedList */
NimStringDesc* Outfile_44080;
extern TY10790 Gch_10808;
NimStringDesc* Gindexfile_44081;
NU8 Gcmd_44082;
NI Gverbosity_44083;
NI Gnumberofprocessors_44084;
TY43008* Gconfigvars_44109;
NimStringDesc* Libpath_44110;
NimStringDesc* Projectpath_44111;
NIM_BOOL Gkeepcomments_44112;
TY37422* Gimplicitmods_44129;
extern TNimType* NTI37422; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
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
N_NIMCALL(NimStringDesc*, Getprefixdir_44107)(void) {
NimStringDesc* Result_44197;
NimStringDesc* LOC1;
TY36578 LOC2;
Result_44197 = 0;
LOC1 = nosgetApplicationDir();
nosSplitPath(LOC1, &LOC2);
Result_44197 = copyString(LOC2.Head);
return Result_44197;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_44290)(NimStringDesc* F_44292) {
NimStringDesc* Result_44293;
NIM_BOOL LOC2;
TY41015* It_44294;
NIM_BOOL LOC7;
Result_44293 = 0;
LOC2 = nosexistsFile(F_44292);
if (!LOC2) goto LA3;
Result_44293 = copyString(F_44292);
goto LA1;
LA3: ;
It_44294 = 0;
It_44294 = ((TY41015*) (Searchpaths_44079.Head));
while (1) {
if (!!((It_44294 == NIM_NIL))) goto LA5;
Result_44293 = nosJoinPath((*It_44294).Data, F_44292);
LOC7 = nosexistsFile(Result_44293);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_44294 = ((TY41015*) ((*It_44294).Sup.Next));
} LA5: ;
Result_44293 = copyString(((NimStringDesc*) &TMP44087));
LA1: ;
BeforeRet: ;
return Result_44293;
}
N_NIMCALL(NimStringDesc*, Findfile_44088)(NimStringDesc* F_44090) {
NimStringDesc* Result_44310;
NimStringDesc* LOC4;
Result_44310 = 0;
Result_44310 = Rawfindfile_44290(F_44090);
if (!(Result_44310->Sup.len == 0)) goto LA2;
LOC4 = nsuToLowerStr(F_44090);
Result_44310 = Rawfindfile_44290(LOC4);
LA2: ;
return Result_44310;
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
N_NIMCALL(NimStringDesc*, Shortendir_44198)(NimStringDesc* Dir_44200) {
NimStringDesc* Result_44201;
NimStringDesc* Prefix_44206;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_44201 = 0;
Prefix_44206 = 0;
LOC2 = Getprefixdir_44107();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
Prefix_44206 = LOC1;
LOC4 = nsuStartsWith(Dir_44200, Prefix_44206);
if (!LOC4) goto LA5;
Result_44201 = copyStr(Dir_44200, Prefix_44206->Sup.len);
goto BeforeRet;
LA5: ;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 47);
Prefix_44206 = LOC7;
LOC10 = nsuStartsWith(Dir_44200, Prefix_44206);
if (!LOC10) goto LA11;
Result_44201 = copyStr(Dir_44200, Prefix_44206->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = rawNewString(Projectpath_44111->Sup.len + 1);
appendString(LOC13, Projectpath_44111);
appendChar(LOC13, 47);
Prefix_44206 = LOC13;
LOC15 = nsuStartsWith(Dir_44200, Prefix_44206);
if (!LOC15) goto LA16;
Result_44201 = copyStr(Dir_44200, Prefix_44206->Sup.len);
goto BeforeRet;
LA16: ;
Result_44201 = copyString(Dir_44200);
BeforeRet: ;
return Result_44201;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_44103)(NimStringDesc* Path_44105, NimStringDesc* Ext_44106) {
NimStringDesc* Result_44239;
TY36578 LOC1;
NimStringDesc* Head_44240;
NimStringDesc* Tail_44241;
NimStringDesc* LOC5;
TY46018 LOC6;
Result_44239 = 0;
nosSplitPath(Path_44105, &LOC1);
Head_44240 = 0;
Head_44240 = copyString(LOC1.Head);
Tail_44241 = 0;
Tail_44241 = copyString(LOC1.Tail);
if (!(0 < Head_44240->Sup.len)) goto LA3;
LOC5 = rawNewString(Head_44240->Sup.len + 1);
appendString(LOC5, Head_44240);
appendChar(LOC5, 47);
Head_44240 = Shortendir_44198(LOC5);
LA3: ;
LOC6[0] = copyString(Projectpath_44111);
LOC6[1] = copyString(((NimStringDesc*) &TMP193653));
LOC6[2] = copyString(Head_44240);
LOC6[3] = nosChangeFileExt(Tail_44241, Ext_44106);
Result_44239 = nosJoinPathOpenArray(LOC6, 4);
return Result_44239;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_44221)(NimStringDesc* Path_44223) {
NimStringDesc* Result_44224;
NIM_BOOL LOC2;
Result_44224 = 0;
LOC2 = (0 < Path_44223->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_44223->data[(NI64)(Path_44223->Sup.len - 1)]) == (NU8)(47));
LA3: ;
if (!LOC2) goto LA4;
Result_44224 = copyStrLast(Path_44223, 0, (NI64)(Path_44223->Sup.len - 2));
goto LA1;
LA4: ;
Result_44224 = copyString(Path_44223);
LA1: ;
return Result_44224;
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_44099)(NimStringDesc* F_44101, NIM_BOOL Createsubdir_44102) {
NimStringDesc* Result_44258;
TY36578 LOC1;
NimStringDesc* Head_44259;
NimStringDesc* Tail_44260;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_44273;
TY70066 LOC7;
TSafePoint TMP193658;
NimStringDesc* LOC11;
Result_44258 = 0;
nosSplitPath(F_44101, &LOC1);
Head_44259 = 0;
Head_44259 = copyString(LOC1.Head);
Tail_44260 = 0;
Tail_44260 = copyString(LOC1.Tail);
if (!(0 < Head_44259->Sup.len)) goto LA3;
LOC5 = rawNewString(Head_44259->Sup.len + 1);
appendString(LOC5, Head_44259);
appendChar(LOC5, 47);
LOC6 = Shortendir_44198(LOC5);
Head_44259 = Removetrailingdirsep_44221(LOC6);
LA3: ;
Subdir_44273 = 0;
LOC7[0] = copyString(Projectpath_44111);
LOC7[1] = copyString(((NimStringDesc*) &TMP193653));
LOC7[2] = copyString(Head_44259);
Subdir_44273 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_44102) goto LA9;
TMP193658.prev = excHandler;
excHandler = &TMP193658;
TMP193658.status = setjmp(TMP193658.context);
if (TMP193658.status == 0) {
noscreateDir(Subdir_44273);
} else {
if ((TMP193658.exc->Sup.m_type == NTI422)) {
LOC11 = rawNewString(Subdir_44273->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP193659));
appendString(LOC11, Subdir_44273);
Writeln_44285(stdout, LOC11);
exit(1);
TMP193658.status = 0;}
}
excHandler = excHandler->prev;
if (TMP193658.status != 0) { raiseException(TMP193658.exc, TMP193658.exc->name); }
LA9: ;
Result_44258 = nosJoinPath(Subdir_44273, Tail_44260);
return Result_44258;
}
N_NIMCALL(void, Addimplicitmod_44140)(NimStringDesc* Filename_44142) {
NI Length_44172;
Length_44172 = 0;
Length_44172 = Gimplicitmods_44129->Sup.len;
Gimplicitmods_44129 = (TY37422*) setLengthSeq(&(Gimplicitmods_44129)->Sup, sizeof(NimStringDesc*), (NI64)(Length_44172 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_44129->data[Length_44172], copyString(Filename_44142));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_44133)(NimStringDesc* Key_44135) {
NimStringDesc* Result_44159;
Result_44159 = 0;
Result_44159 = Get_43029(Gconfigvars_44109, Key_44135);
return Result_44159;
}
N_NIMCALL(void, Setconfigvar_44136)(NimStringDesc* Key_44138, NimStringDesc* Val_44139) {
Put_43024(Gconfigvars_44109, Key_44138, Val_44139);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_44130)(NimStringDesc* Key_44132) {
NIM_BOOL Result_44155;
Result_44155 = 0;
Result_44155 = Haskey_43033(Gconfigvars_44109, Key_44132);
return Result_44155;
}
N_NIMCALL(NimStringDesc*, Getoutfile_44143)(NimStringDesc* Filename_44145, NimStringDesc* Ext_44146) {
NimStringDesc* Result_44168;
Result_44168 = 0;
if (!!(((Outfile_44080) && (Outfile_44080)->Sup.len == 0))) goto LA2;
Result_44168 = copyString(Outfile_44080);
goto LA1;
LA2: ;
Result_44168 = nosChangeFileExt(Filename_44145, Ext_44146);
LA1: ;
return Result_44168;
}
N_NIMCALL(NI, Binarystrsearch_44147)(NimStringDesc** X_44150, NI X_44150Len0, NimStringDesc* Y_44151) {
NI Result_44320;
NI A_44321;
NI B_44332;
NI Mid_44335;
NI C_44336;
Result_44320 = 0;
A_44321 = 0;
A_44321 = 0;
B_44332 = 0;
B_44332 = (NI64)(X_44150Len0 - 1);
while (1) {
if (!(A_44321 <= B_44332)) goto LA1;
Mid_44335 = 0;
Mid_44335 = (NI64)((NI64)(A_44321 + B_44332) / 2);
C_44336 = 0;
C_44336 = nsuCmpIgnoreCase(X_44150[Mid_44335], Y_44151);
if (!(C_44336 < 0)) goto LA3;
A_44321 = (NI64)(Mid_44335 + 1);
goto LA2;
LA3: ;
if (!(0 < C_44336)) goto LA5;
B_44332 = (NI64)(Mid_44335 - 1);
goto LA2;
LA5: ;
Result_44320 = Mid_44335;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_44320 = -1;
BeforeRet: ;
return Result_44320;
}
N_NIMCALL(void, Writeln_44285)(FILE* F_44288, NimStringDesc* X_44289) {
Write_3658(F_44288, X_44289);
Write_3658(F_44288, ((NimStringDesc*) &TMP195493));
}
N_NOINLINE(void, optionsInit)(void) {
TY44349 LOC1;
Goptions_44075 = 105022;
Gglobaloptions_44077 = 8;
Searchpaths_44079.m_type = NTI41019;
asgnRefNoCycle((void**) &Outfile_44080, copyString(((NimStringDesc*) &TMP44087)));
asgnRefNoCycle((void**) &Gindexfile_44081, copyString(((NimStringDesc*) &TMP44087)));
Gcmd_44082 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_44110, copyString(((NimStringDesc*) &TMP44087)));
asgnRefNoCycle((void**) &Projectpath_44111, copyString(((NimStringDesc*) &TMP44087)));
Gkeepcomments_44112 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_44129, (TY37422*) newSeq(NTI37422, 0));
asgnRefNoCycle((void**) &Gconfigvars_44109, Newstringtable_43019(LOC1, 0, ((NU8) 2)));
}

