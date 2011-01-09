/* Generated by Nimrod Compiler v0.8.10 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY43019 TY43019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY43013 TY43013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11190 TY11190;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11188 TY11188;
typedef struct TY45008 TY45008;
typedef struct TY39422 TY39422;
typedef struct TY38578 TY38578;
typedef struct TY43015 TY43015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY45006 TY45006;
typedef struct TY45004 TY45004;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY43019 {
TNimType* m_type;
TY43013* Head;
TY43013* Tail;
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
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11188 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11190 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY11188 Stat;
};
typedef NimStringDesc* TY46349[1];
struct TY38578 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY43015 {
  TY43013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY48018[4];
typedef NimStringDesc* TY72066[3];
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY45004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY45008 {
  TNimObject Sup;
NI Counter;
TY45006* Data;
NU8 Mode;
};
struct TY39422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY45006 {
  TGenericSeq Sup;
  TY45004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18708);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(TY45008*, Newstringtable_45019)(NimStringDesc** Keyvaluepairs_45022, NI Keyvaluepairs_45022Len0, NU8 Mode_45023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38577, TY38578* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void);
N_NIMCALL(NimStringDesc*, Rawfindfile_46290)(NimStringDesc* F_46292);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_37003);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24448);
N_NIMCALL(NimStringDesc*, Shortendir_46198)(NimStringDesc* Dir_46200);
N_NIMCALL(NimStringDesc*, Getprefixdir_46107)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18687);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25769, NimStringDesc* Prefix_25770);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_38487, NI Parts_38487Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_39020, NimStringDesc* Ext_39021);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_46221)(NimStringDesc* Path_46223);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_4635);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_40603);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11074)(TY10814* S_11077, TY10802* Cell_11078);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(NimStringDesc*, Get_45029)(TY45008* T_45031, NimStringDesc* Key_45032);
N_NIMCALL(void, Put_45024)(TY45008* T_45026, NimStringDesc* Key_45027, NimStringDesc* Val_45028);
N_NIMCALL(NIM_BOOL, Haskey_45033)(TY45008* T_45035, NimStringDesc* Key_45036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24595, NimStringDesc* B_24596);
N_NIMCALL(void, Writeln_46285)(FILE* F_46288, NimStringDesc* X_46289);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
NIM_CONST NU32 Checksoptions_46072 = 1022;
STRING_LITERAL(TMP46087, "", 0);
STRING_LITERAL(TMP196653, "nimcache", 8);
STRING_LITERAL(TMP196665, "cannot create directory: ", 25);
STRING_LITERAL(TMP198503, "\012", 1);
NU32 Goptions_46075;
NU32 Gglobaloptions_46077;
NI8 Gexitcode_46078;
TY43019 Searchpaths_46079;
extern TNimType* NTI43019; /* TLinkedList */
NimStringDesc* Outfile_46080;
extern TY11190 Gch_11210;
NimStringDesc* Gindexfile_46081;
NU8 Gcmd_46082;
NI Gverbosity_46083;
NI Gnumberofprocessors_46084;
TY45008* Gconfigvars_46109;
NimStringDesc* Libpath_46110;
NimStringDesc* Projectpath_46111;
NIM_BOOL Gkeepcomments_46112;
TY39422* Gimplicitmods_46129;
extern TNimType* NTI39422; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_4632;
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7607;
Result_7607 = 0;
(*Memloc_3004) += X_3005;
Result_7607 = (*Memloc_3004);
return Result_7607;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7806;
Result_7806 = 0;
(*Memloc_3009) -= X_3010;
Result_7806 = (*Memloc_3009);
return Result_7806;
}
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11210.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3001(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3006(&(*C_13222).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(NimStringDesc*, Getprefixdir_46107)(void) {
NimStringDesc* Result_46197;
NimStringDesc* LOC1;
TY38578 LOC2;
Result_46197 = 0;
LOC1 = 0;
LOC1 = nosgetApplicationDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_46197 = copyString(LOC2.Head);
return Result_46197;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_46290)(NimStringDesc* F_46292) {
NimStringDesc* Result_46293;
NIM_BOOL LOC2;
TY43015* It_46294;
NIM_BOOL LOC7;
Result_46293 = 0;
LOC2 = nosexistsFile(F_46292);
if (!LOC2) goto LA3;
Result_46293 = copyString(F_46292);
goto LA1;
LA3: ;
It_46294 = 0;
It_46294 = ((TY43015*) (Searchpaths_46079.Head));
while (1) {
if (!!((It_46294 == NIM_NIL))) goto LA5;
Result_46293 = nosJoinPath((*It_46294).Data, F_46292);
LOC7 = nosexistsFile(Result_46293);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_46294 = ((TY43015*) ((*It_46294).Sup.Next));
} LA5: ;
Result_46293 = copyString(((NimStringDesc*) &TMP46087));
LA1: ;
BeforeRet: ;
return Result_46293;
}
N_NIMCALL(NimStringDesc*, Findfile_46088)(NimStringDesc* F_46090) {
NimStringDesc* Result_46310;
NimStringDesc* LOC4;
Result_46310 = 0;
Result_46310 = Rawfindfile_46290(F_46090);
if (!(Result_46310->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_46090);
Result_46310 = Rawfindfile_46290(LOC4);
LA2: ;
return Result_46310;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18792, NimStringDesc* Src_18793) {
memcpy(((NCSTRING) (&(*Dest_18792).data[((*Dest_18792).Sup.len)-0])), ((NCSTRING) ((*Src_18793).data)), ((int) ((NI32)((NI32)((*Src_18793).Sup.len + 1) * 1))));
(*Dest_18792).Sup.len += (*Src_18793).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18809, NIM_CHAR C_18810) {
(*Dest_18809).data[((*Dest_18809).Sup.len)-0] = C_18810;
(*Dest_18809).data[((NI32)((*Dest_18809).Sup.len + 1))-0] = 0;
(*Dest_18809).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_46198)(NimStringDesc* Dir_46200) {
NimStringDesc* Result_46201;
NimStringDesc* Prefix_46206;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_46201 = 0;
Prefix_46206 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_46107();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
Prefix_46206 = LOC1;
LOC4 = nsuStartsWith(Dir_46200, Prefix_46206);
if (!LOC4) goto LA5;
Result_46201 = copyStr(Dir_46200, Prefix_46206->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 47);
Prefix_46206 = LOC7;
LOC10 = nsuStartsWith(Dir_46200, Prefix_46206);
if (!LOC10) goto LA11;
Result_46201 = copyStr(Dir_46200, Prefix_46206->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_46111->Sup.len + 1);
appendString(LOC13, Projectpath_46111);
appendChar(LOC13, 47);
Prefix_46206 = LOC13;
LOC15 = nsuStartsWith(Dir_46200, Prefix_46206);
if (!LOC15) goto LA16;
Result_46201 = copyStr(Dir_46200, Prefix_46206->Sup.len);
goto BeforeRet;
LA16: ;
Result_46201 = copyString(Dir_46200);
BeforeRet: ;
return Result_46201;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_46103)(NimStringDesc* Path_46105, NimStringDesc* Ext_46106) {
NimStringDesc* Result_46239;
TY38578 LOC1;
NimStringDesc* Head_46240;
NimStringDesc* Tail_46241;
NimStringDesc* LOC5;
TY48018 LOC6;
Result_46239 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_46105, &LOC1);
Head_46240 = 0;
Head_46240 = copyString(LOC1.Head);
Tail_46241 = 0;
Tail_46241 = copyString(LOC1.Tail);
if (!(0 < Head_46240->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_46240->Sup.len + 1);
appendString(LOC5, Head_46240);
appendChar(LOC5, 47);
Head_46240 = Shortendir_46198(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_46111);
LOC6[1] = copyString(((NimStringDesc*) &TMP196653));
LOC6[2] = copyString(Head_46240);
LOC6[3] = nosChangeFileExt(Tail_46241, Ext_46106);
Result_46239 = nosJoinPathOpenArray(LOC6, 4);
return Result_46239;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_46221)(NimStringDesc* Path_46223) {
NimStringDesc* Result_46224;
NIM_BOOL LOC2;
Result_46224 = 0;
LOC2 = (0 < Path_46223->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_46223->data[(NI32)(Path_46223->Sup.len - 1)]) == (NU8)(47));
LA3: ;
if (!LOC2) goto LA4;
Result_46224 = copyStrLast(Path_46223, 0, (NI32)(Path_46223->Sup.len - 2));
goto LA1;
LA4: ;
Result_46224 = copyString(Path_46223);
LA1: ;
return Result_46224;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_4635) {
(*S_4635).prev = excHandler;
excHandler = S_4635;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20604;
Result_20604 = 0;
Result_20604 = Currexception_4632;
return Result_20604;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11074(&Gch_11210.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_13003).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_4632, (*Currexception_4632).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_46099)(NimStringDesc* F_46101, NIM_BOOL Createsubdir_46102) {
NimStringDesc* Result_46258;
TY38578 LOC1;
NimStringDesc* Head_46259;
NimStringDesc* Tail_46260;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_46273;
TY72066 LOC7;
TSafePoint TMP196664;
NimStringDesc* LOC11;
Result_46258 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_46101, &LOC1);
Head_46259 = 0;
Head_46259 = copyString(LOC1.Head);
Tail_46260 = 0;
Tail_46260 = copyString(LOC1.Tail);
if (!(0 < Head_46259->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_46259->Sup.len + 1);
appendString(LOC5, Head_46259);
appendChar(LOC5, 47);
LOC6 = 0;
LOC6 = Shortendir_46198(LOC5);
Head_46259 = Removetrailingdirsep_46221(LOC6);
LA3: ;
Subdir_46273 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_46111);
LOC7[1] = copyString(((NimStringDesc*) &TMP196653));
LOC7[2] = copyString(Head_46259);
Subdir_46273 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_46102) goto LA9;
pushSafePoint(&TMP196664);
TMP196664.status = setjmp(TMP196664.context);
if (TMP196664.status == 0) {
noscreateDir(Subdir_46273);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_46273->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP196665));
appendString(LOC11, Subdir_46273);
Writeln_46285(stdout, LOC11);
exit(1);
TMP196664.status = 0;popCurrentException();}
}
if (TMP196664.status != 0) reraiseException();
LA9: ;
Result_46258 = nosJoinPath(Subdir_46273, Tail_46260);
return Result_46258;
}
N_NIMCALL(void, Addimplicitmod_46140)(NimStringDesc* Filename_46142) {
NI Length_46172;
Length_46172 = 0;
Length_46172 = Gimplicitmods_46129->Sup.len;
Gimplicitmods_46129 = (TY39422*) setLengthSeq(&(Gimplicitmods_46129)->Sup, sizeof(NimStringDesc*), (NI32)(Length_46172 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_46129->data[Length_46172], copyString(Filename_46142));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_46133)(NimStringDesc* Key_46135) {
NimStringDesc* Result_46159;
Result_46159 = 0;
Result_46159 = Get_45029(Gconfigvars_46109, Key_46135);
return Result_46159;
}
N_NIMCALL(void, Setconfigvar_46136)(NimStringDesc* Key_46138, NimStringDesc* Val_46139) {
Put_45024(Gconfigvars_46109, Key_46138, Val_46139);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_46130)(NimStringDesc* Key_46132) {
NIM_BOOL Result_46155;
Result_46155 = 0;
Result_46155 = Haskey_45033(Gconfigvars_46109, Key_46132);
return Result_46155;
}
N_NIMCALL(NimStringDesc*, Getoutfile_46143)(NimStringDesc* Filename_46145, NimStringDesc* Ext_46146) {
NimStringDesc* Result_46168;
Result_46168 = 0;
if (!!(((Outfile_46080) && (Outfile_46080)->Sup.len == 0))) goto LA2;
Result_46168 = copyString(Outfile_46080);
goto LA1;
LA2: ;
Result_46168 = nosChangeFileExt(Filename_46145, Ext_46146);
LA1: ;
return Result_46168;
}
N_NIMCALL(NI, Binarystrsearch_46147)(NimStringDesc** X_46150, NI X_46150Len0, NimStringDesc* Y_46151) {
NI Result_46320;
NI A_46321;
NI B_46332;
NI Mid_46335;
NI C_46336;
Result_46320 = 0;
A_46321 = 0;
A_46321 = 0;
B_46332 = 0;
B_46332 = (NI32)(X_46150Len0 - 1);
while (1) {
if (!(A_46321 <= B_46332)) goto LA1;
Mid_46335 = 0;
Mid_46335 = (NI32)((NI32)(A_46321 + B_46332) / 2);
C_46336 = 0;
C_46336 = nsuCmpIgnoreCase(X_46150[Mid_46335], Y_46151);
if (!(C_46336 < 0)) goto LA3;
A_46321 = (NI32)(Mid_46335 + 1);
goto LA2;
LA3: ;
if (!(0 < C_46336)) goto LA5;
B_46332 = (NI32)(Mid_46335 - 1);
goto LA2;
LA5: ;
Result_46320 = Mid_46335;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_46320 = -1;
BeforeRet: ;
return Result_46320;
}
N_NIMCALL(void, Writeln_46285)(FILE* F_46288, NimStringDesc* X_46289) {
Write_3658(F_46288, X_46289);
Write_3658(F_46288, ((NimStringDesc*) &TMP198503));
}
N_NOINLINE(void, optionsInit)(void) {
TY46349 LOC1;
Goptions_46075 = 105022;
Gglobaloptions_46077 = 8;
Searchpaths_46079.m_type = NTI43019;
asgnRefNoCycle((void**) &Outfile_46080, copyString(((NimStringDesc*) &TMP46087)));
asgnRefNoCycle((void**) &Gindexfile_46081, copyString(((NimStringDesc*) &TMP46087)));
Gcmd_46082 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_46110, copyString(((NimStringDesc*) &TMP46087)));
asgnRefNoCycle((void**) &Projectpath_46111, copyString(((NimStringDesc*) &TMP46087)));
Gkeepcomments_46112 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_46129, (TY39422*) newSeq(NTI39422, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_46109, Newstringtable_45019(LOC1, 0, ((NU8) 2)));
}
