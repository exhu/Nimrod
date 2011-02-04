/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <errno.h>
#include <string.h>
typedef struct TY35021 TY35021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY34337 TY34337;
typedef struct TY34461 TY34461;
typedef struct TY422 TY422;
typedef struct TY418 TY418;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY28595 TY28595;
typedef struct TY28593 TY28593;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY11194 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11196 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
TY11194 Stat;
};
typedef N_STDCALL_PTR(NCSTRING, TY28650) (void);
struct TY34337 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TY34461 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_STDCALL_PTR(NI32, TY28580) (NI Handle_28581, NCSTRING Buf_28582, NI32 Size_28583);
typedef N_STDCALL_PTR(NCSTRING, TY28645) (void);
typedef N_STDCALL_PTR(NI32, TY28647) (NCSTRING Para1_28648);
typedef N_STDCALL_PTR(NI32, TY28633) (NCSTRING Lpfilename_28634);
typedef N_STDCALL_PTR(NI32, TY28562) (NI32 Nbufferlength_28563, NCSTRING Lpbuffer_28564);
typedef N_STDCALL_PTR(NI32, TY28548) (void);
typedef N_STDCALL_PTR(NI32, TY28550) (NI32 Dwflags_28551, void* Lpsource_28552, NI32 Dwmessageid_28553, NI32 Dwlanguageid_28554, void* Lpbuffer_28555, NI32 Nsize_28556, void* Arguments_28557);
typedef N_STDCALL_PTR(void, TY28559) (void* P_28560);
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TY416 {
  E_Base Sup;
};
struct TY418 {
  TY416 Sup;
};
struct TY422 {
  TY418 Sup;
};
typedef N_STDCALL_PTR(NI32, TY28569) (NCSTRING Pathname_28570, void* Security_28571);
typedef N_STDCALL_PTR(NI32, TY28576) (NCSTRING Lpname_28577, NCSTRING Lpvalue_28578);
struct TY28593 {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NIM_CHAR TY28606[260];
typedef NIM_CHAR TY28609[14];
struct TY28595 {
NI32 Dwfileattributes;
TY28593 Ftcreationtime;
TY28593 Ftlastaccesstime;
TY28593 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY28606 Cfilename;
TY28609 Calternatefilename;
};
typedef N_STDCALL_PTR(NI, TY28613) (NCSTRING Lpfilename_28614, TY28595* Lpfindfiledata_28616);
typedef N_STDCALL_PTR(void, TY28623) (NI Hfindfile_28624);
typedef N_STDCALL_PTR(void, TY28664) (NI32 Dwmilliseconds_28665);
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY35021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3401)(NI* Memloc_3404, NI X_3405);
static N_INLINE(NI, Atomicdec_3406)(NI* Memloc_3409, NI X_3410);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(TY35021*, nosparseCmdLine)(NimStringDesc* C_36232);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18832, NI Newlen_18833);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18708);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18789, NI Addlen_18790);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_34460, TY34461* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(NimStringDesc*, Getenv_35218)(NimStringDesc* Key_35220);
N_NIMCALL(NI, Findenvvar_35201)(NimStringDesc* Key_35203);
N_NIMCALL(void, Getenvvarsc_35044)(void);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25848, NimStringDesc* Prefix_25849);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26216, NIM_CHAR Sub_26217, NI Start_26218);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_34203, NimStringDesc* Tail_34204);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_34336, TY34337* Result);
N_NIMCALL(NI, Searchextpos_34427)(NimStringDesc* S_34429);
N_NIMCALL(NimStringDesc*, Normext_34421)(NimStringDesc* Ext_34423);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_32004);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
N_NIMCALL(void, raiseException)(E_Base* E_5804, NCSTRING Ename_5805);
N_NIMCALL(void, Rawcreatedir_36012)(NimStringDesc* Dir_36014);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18649, NimStringDesc* B_18650);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_34645, NimStringDesc* Pathb_34646);
N_NIMCALL(NI, Cmp_1327)(NimStringDesc* X_1329, NimStringDesc* Y_1330);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
N_NIMCALL(NI64, ntDiffTime)(NI32 A_29435, NI32 B_29436);
N_NIMCALL(NI32, nosgetLastModificationTime)(NimStringDesc* File_33203);
N_NIMCALL(NI32, Wintimetounixtime_30261)(NI64 T_30263);
N_NIMCALL(NI64, Rdfiletime_28651)(TY28593 F_28653);
STRING_LITERAL(TMP192623, "", 0);
STRING_LITERAL(TMP192640, "C:\\", 3);
STRING_LITERAL(TMP192641, ".", 1);
STRING_LITERAL(TMP192642, "..\\", 3);
STRING_LITERAL(TMP192646, "USERPROFILE", 11);
STRING_LITERAL(TMP192647, "\\", 1);
STRING_LITERAL(TMP192650, "unknown OS error", 16);
STRING_LITERAL(TMP192723, "APPDATA", 7);
NIM_BOOL Envcomputed_35020;
TY35021* Environment_35038;
extern TNimType* NTI35021; /* seq[string] */
extern TY11196 Gch_11214;
TY35021* Ownargv_37202;
extern TY28650 Dl_28649;
extern TY28580 Dl_28579;
extern TY28645 Dl_28644;
extern TY28647 Dl_28646;
extern TY28633 Dl_28632;
extern TY28562 Dl_28561;
extern TY28548 Dl_28547;
extern TY28550 Dl_28549;
extern TY28559 Dl_28558;
extern TNimType* NTI32017; /* ref EOS */
extern TNimType* NTI422; /* EOS */
extern TY28569 Dl_28568;
extern TY28576 Dl_28575;
extern TY28613 Dl_28612;
extern TY28623 Dl_28622;
extern TY28664 Dl_28663;
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11214.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3401(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3406(&(*C_13222).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(TY35021*, nosparseCmdLine)(NimStringDesc* C_36232) {
TY35021* Result_36234;
NI I_36251;
NimStringDesc* A_36252;
NIM_BOOL LOC3;
NIM_BOOL Inquote_36271;
NI J_36272;
NI K_36297;
NI HEX3Atmp_36419;
NI Res_36421;
Result_36234 = 0;
Result_36234 = (TY35021*) newSeq(NTI35021, 0);
I_36251 = 0;
I_36251 = 0;
A_36252 = 0;
A_36252 = copyString(((NimStringDesc*) &TMP192623));
while (1) {
A_36252 = setLengthStr(A_36252, 0);
while (1) {
LOC3 = ((NU8)(C_36232->data[I_36251]) == (NU8)(32));
if (LOC3) goto LA4;
LOC3 = ((NU8)(C_36232->data[I_36251]) == (NU8)(9));
LA4: ;
if (!LOC3) goto LA2;
I_36251 += 1;
} LA2: ;
if (!((NU8)(C_36232->data[I_36251]) == (NU8)(0))) goto LA6;
goto LA1;
LA6: ;
Inquote_36271 = 0;
Inquote_36271 = NIM_FALSE;
while (1) {
switch (((NU8)(C_36232->data[I_36251]))) {
case 0:
goto LA8;
break;
case 92:
J_36272 = 0;
J_36272 = I_36251;
while (1) {
if (!((NU8)(C_36232->data[J_36272]) == (NU8)(92))) goto LA9;
J_36272 += 1;
} LA9: ;
if (!((NU8)(C_36232->data[J_36272]) == (NU8)(34))) goto LA11;
K_36297 = 0;
HEX3Atmp_36419 = 0;
HEX3Atmp_36419 = (NI32)((NI32)(J_36272 - I_36251) / 2);
Res_36421 = 0;
Res_36421 = 1;
while (1) {
if (!(Res_36421 <= HEX3Atmp_36419)) goto LA13;
K_36297 = Res_36421;
A_36252 = addChar(A_36252, 92);
Res_36421 += 1;
} LA13: ;
if (!((NI32)((NI32)(J_36272 - I_36251) % 2) == 0)) goto LA15;
I_36251 = J_36272;
goto LA14;
LA15: ;
A_36252 = addChar(A_36252, 34);
I_36251 = (NI32)(J_36272 + 1);
LA14: ;
goto LA10;
LA11: ;
A_36252 = addChar(A_36252, C_36232->data[I_36251]);
I_36251 += 1;
LA10: ;
break;
case 34:
I_36251 += 1;
if (!!(Inquote_36271)) goto LA18;
Inquote_36271 = NIM_TRUE;
goto LA17;
LA18: ;
if (!((NU8)(C_36232->data[I_36251]) == (NU8)(34))) goto LA20;
A_36252 = addChar(A_36252, C_36232->data[I_36251]);
I_36251 += 1;
goto LA17;
LA20: ;
Inquote_36271 = NIM_FALSE;
goto LA8;
LA17: ;
break;
case 32:
case 9:
if (!!(Inquote_36271)) goto LA23;
goto LA8;
LA23: ;
A_36252 = addChar(A_36252, C_36232->data[I_36251]);
I_36251 += 1;
break;
default:
A_36252 = addChar(A_36252, C_36232->data[I_36251]);
I_36251 += 1;
break;
}
} LA8: ;
Result_36234 = (TY35021*) incrSeq(&(Result_36234)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_36234->data[Result_36234->Sup.len-1], copyString(A_36252));
} LA1: ;
return Result_36234;
}
N_NIMCALL(NI, nosparamCount)(void) {
NI Result_37205;
NCSTRING LOC4;
NimStringDesc* LOC5;
Result_37205 = 0;
if (!Ownargv_37202 == 0) goto LA2;
LOC4 = Dl_28649();
LOC5 = 0;
LOC5 = cstrToNimstr(LOC4);
asgnRefNoCycle((void**) &Ownargv_37202, nosparseCmdLine(LOC5));
LA2: ;
Result_37205 = (NI32)(Ownargv_37202->Sup.len - 1);
return Result_37205;
}
N_NIMCALL(NimStringDesc*, nosparamStr)(NI I_37226) {
NimStringDesc* Result_37227;
NCSTRING LOC4;
NimStringDesc* LOC5;
Result_37227 = 0;
if (!Ownargv_37202 == 0) goto LA2;
LOC4 = Dl_28649();
LOC5 = 0;
LOC5 = cstrToNimstr(LOC4);
asgnRefNoCycle((void**) &Ownargv_37202, nosparseCmdLine(LOC5));
LA2: ;
Result_37227 = copyString(Ownargv_37202->data[I_37226]);
goto BeforeRet;
BeforeRet: ;
return Result_37227;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((NI32) ((NI32)((NI32)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_32256) {
NimStringDesc* Result_32257;
NI Start_32258;
NIM_BOOL LOC4;
NI I_32407;
NIM_BOOL LOC10;
NIM_BOOL LOC11;
Result_32257 = 0;
Start_32258 = 0;
if (!((NU8)(Path_32256->data[0]) == (NU8)(47))) goto LA2;
Result_32257 = copyString(((NimStringDesc*) &TMP192640));
Start_32258 = 1;
goto LA1;
LA2: ;
LOC4 = ((NU8)(Path_32256->data[0]) == (NU8)(46));
if (!(LOC4)) goto LA5;
LOC4 = ((NU8)(Path_32256->data[1]) == (NU8)(47));
LA5: ;
if (!LOC4) goto LA6;
Result_32257 = copyString(((NimStringDesc*) &TMP192641));
Start_32258 = 2;
goto LA1;
LA6: ;
Result_32257 = copyString(((NimStringDesc*) &TMP192623));
Start_32258 = 0;
LA1: ;
I_32407 = 0;
I_32407 = Start_32258;
while (1) {
if (!(I_32407 < Path_32256->Sup.len)) goto LA8;
LOC11 = ((NU8)(Path_32256->data[I_32407]) == (NU8)(46));
if (!(LOC11)) goto LA12;
LOC11 = ((NU8)(Path_32256->data[(NI32)(I_32407 + 1)]) == (NU8)(46));
LA12: ;
LOC10 = LOC11;
if (!(LOC10)) goto LA13;
LOC10 = ((NU8)(Path_32256->data[(NI32)(I_32407 + 2)]) == (NU8)(47));
LA13: ;
if (!LOC10) goto LA14;
Result_32257 = resizeString(Result_32257, 3);
appendString(Result_32257, ((NimStringDesc*) &TMP192642));
I_32407 += 3;
goto LA9;
LA14: ;
if (!((NU8)(Path_32256->data[I_32407]) == (NU8)(47))) goto LA16;
Result_32257 = addChar(Result_32257, 92);
I_32407 += 1;
goto LA9;
LA16: ;
Result_32257 = addChar(Result_32257, Path_32256->data[I_32407]);
I_32407 += 1;
LA9: ;
} LA8: ;
return Result_32257;
}
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_34336, TY34337* Result) {
NI Seppos_34341;
NI I_34351;
NI HEX3Atmp_34366;
NI Res_34368;
memset((void*)Result, 0, sizeof((*Result)));
Seppos_34341 = 0;
Seppos_34341 = -1;
I_34351 = 0;
HEX3Atmp_34366 = 0;
HEX3Atmp_34366 = (NI32)(Path_34336->Sup.len - 1);
Res_34368 = 0;
Res_34368 = HEX3Atmp_34366;
while (1) {
if (!(0 <= Res_34368)) goto LA1;
I_34351 = Res_34368;
if (!(((NU8)(Path_34336->data[I_34351])) == ((NU8)(92)) || ((NU8)(Path_34336->data[I_34351])) == ((NU8)(47)))) goto LA3;
Seppos_34341 = I_34351;
goto LA1;
LA3: ;
Res_34368 -= 1;
} LA1: ;
if (!(0 <= Seppos_34341)) goto LA6;
unsureAsgnRef((void**) &(*Result).Head, copyStrLast(Path_34336, 0, (NI32)(Seppos_34341 - 1)));
unsureAsgnRef((void**) &(*Result).Tail, copyStr(Path_34336, (NI32)(Seppos_34341 + 1)));
goto LA5;
LA6: ;
unsureAsgnRef((void**) &(*Result).Head, copyString(((NimStringDesc*) &TMP192623)));
unsureAsgnRef((void**) &(*Result).Tail, copyString(Path_34336));
LA5: ;
}
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_34460, TY34461* Result) {
NIM_BOOL LOC2;
NI Seppos_34485;
NI Dotpos_34488;
NI I_34498;
NI HEX3Atmp_34521;
NI Res_34523;
NIM_BOOL LOC11;
memset((void*)Result, 0, sizeof((*Result)));
LOC2 = (Path_34460->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_34460->data[(NI32)(Path_34460->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Path_34460->data[(NI32)(Path_34460->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
unsureAsgnRef((void**) &(*Result).Dir, copyString(Path_34460));
unsureAsgnRef((void**) &(*Result).Name, copyString(((NimStringDesc*) &TMP192623)));
unsureAsgnRef((void**) &(*Result).Ext, copyString(((NimStringDesc*) &TMP192623)));
goto LA1;
LA4: ;
Seppos_34485 = 0;
Seppos_34485 = -1;
Dotpos_34488 = 0;
Dotpos_34488 = Path_34460->Sup.len;
I_34498 = 0;
HEX3Atmp_34521 = 0;
HEX3Atmp_34521 = (NI32)(Path_34460->Sup.len - 1);
Res_34523 = 0;
Res_34523 = HEX3Atmp_34521;
while (1) {
if (!(0 <= Res_34523)) goto LA6;
I_34498 = Res_34523;
if (!((NU8)(Path_34460->data[I_34498]) == (NU8)(46))) goto LA8;
LOC11 = (Dotpos_34488 == Path_34460->Sup.len);
if (!(LOC11)) goto LA12;
LOC11 = (0 < I_34498);
LA12: ;
if (!LOC11) goto LA13;
Dotpos_34488 = I_34498;
LA13: ;
goto LA7;
LA8: ;
if (!(((NU8)(Path_34460->data[I_34498])) == ((NU8)(92)) || ((NU8)(Path_34460->data[I_34498])) == ((NU8)(47)))) goto LA15;
Seppos_34485 = I_34498;
goto LA6;
goto LA7;
LA15: ;
LA7: ;
Res_34523 -= 1;
} LA6: ;
unsureAsgnRef((void**) &(*Result).Dir, copyStrLast(Path_34460, 0, (NI32)(Seppos_34485 - 1)));
unsureAsgnRef((void**) &(*Result).Name, copyStrLast(Path_34460, (NI32)(Seppos_34485 + 1), (NI32)(Dotpos_34488 - 1)));
unsureAsgnRef((void**) &(*Result).Ext, copyStr(Path_34460, Dotpos_34488));
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
NimStringDesc* Result_37803;
NI32 Len_37804;
Result_37803 = 0;
Result_37803 = mnewString(256);
Len_37804 = 0;
Len_37804 = Dl_28579(0, Result_37803->data, ((NI32) 256));
Result_37803 = setLengthStr(Result_37803, ((NI) (Len_37804)));
return Result_37803;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void) {
NimStringDesc* Result_38006;
NimStringDesc* LOC1;
TY34461 LOC2;
Result_38006 = 0;
LOC1 = 0;
LOC1 = nosgetAppFilename();
memset((void*)&LOC2, 0, sizeof(LOC2));
nossplitFile(LOC1, &LOC2);
Result_38006 = copyString(LOC2.Dir);
return Result_38006;
}
N_NIMCALL(void, Getenvvarsc_35044)(void) {
NCSTRING Env_35046;
NCSTRING E_35047;
NCSTRING Eend_35048;
NimStringDesc* LOC8;
NI32 LOC12;
if (!!(Envcomputed_35020)) goto LA2;
Env_35046 = 0;
Env_35046 = Dl_28644();
E_35047 = 0;
E_35047 = Env_35046;
if (!(E_35047 == NIM_NIL)) goto LA5;
goto BeforeRet;
LA5: ;
while (1) {
Eend_35048 = 0;
Eend_35048 = strchr(E_35047, ((NI32) 0));
LOC8 = 0;
LOC8 = cstrToNimstr(E_35047);
Environment_35038 = (TY35021*) incrSeq(&(Environment_35038)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_35038->data[Environment_35038->Sup.len-1], copyString(LOC8));
E_35047 = ((NCSTRING) ((NI32)(((NI) (Eend_35048)) + 1)));
if (!((NU8)(Eend_35048[1]) == (NU8)(0))) goto LA10;
goto LA7;
LA10: ;
} LA7: ;
Envcomputed_35020 = NIM_TRUE;
LOC12 = Dl_28646(Env_35046);
LA2: ;
BeforeRet: ;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI32)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NI, Findenvvar_35201)(NimStringDesc* Key_35203) {
NI Result_35204;
NimStringDesc* Temp_35205;
NimStringDesc* LOC1;
NI I_35214;
NI HEX3Atmp_35215;
NI Res_35217;
NIM_BOOL LOC4;
Result_35204 = 0;
Getenvvarsc_35044();
Temp_35205 = 0;
LOC1 = 0;
LOC1 = rawNewString(Key_35203->Sup.len + 1);
appendString(LOC1, Key_35203);
appendChar(LOC1, 61);
Temp_35205 = LOC1;
I_35214 = 0;
HEX3Atmp_35215 = 0;
HEX3Atmp_35215 = (Environment_35038->Sup.len-1);
Res_35217 = 0;
Res_35217 = 0;
while (1) {
if (!(Res_35217 <= HEX3Atmp_35215)) goto LA2;
I_35214 = Res_35217;
LOC4 = nsuStartsWith(Environment_35038->data[I_35214], Temp_35205);
if (!LOC4) goto LA5;
Result_35204 = I_35214;
goto BeforeRet;
LA5: ;
Res_35217 += 1;
} LA2: ;
Result_35204 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_35204;
}
N_NIMCALL(NimStringDesc*, Getenv_35218)(NimStringDesc* Key_35220) {
NimStringDesc* Result_35221;
NI I_35222;
NI LOC4;
NCSTRING Env_35225;
Result_35221 = 0;
I_35222 = 0;
I_35222 = Findenvvar_35201(Key_35220);
if (!(0 <= I_35222)) goto LA2;
LOC4 = nsuFindChar(Environment_35038->data[I_35222], 61, 0);
Result_35221 = copyStr(Environment_35038->data[I_35222], (NI32)(LOC4 + 1));
goto BeforeRet;
goto LA1;
LA2: ;
Env_35225 = 0;
Env_35225 = getenv(Key_35220->data);
if (!(Env_35225 == NIM_NIL)) goto LA6;
Result_35221 = copyString(((NimStringDesc*) &TMP192623));
goto BeforeRet;
LA6: ;
Result_35221 = cstrToNimstr(Env_35225);
LA1: ;
BeforeRet: ;
return Result_35221;
}
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
NimStringDesc* Result_36833;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_36833 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_35218(((NimStringDesc*) &TMP192646));
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP192647));
Result_36833 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_36833;
}
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_34203, NimStringDesc* Tail_34204) {
NimStringDesc* Result_34205;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
Result_34205 = 0;
if (!(Head_34203->Sup.len == 0)) goto LA2;
Result_34205 = copyString(Tail_34204);
goto LA1;
LA2: ;
if (!(((NU8)(Head_34203->data[(NI32)(Head_34203->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Head_34203->data[(NI32)(Head_34203->Sup.len - 1)])) == ((NU8)(47)))) goto LA4;
if (!(((NU8)(Tail_34204->data[0])) == ((NU8)(92)) || ((NU8)(Tail_34204->data[0])) == ((NU8)(47)))) goto LA7;
LOC9 = 0;
LOC10 = 0;
LOC10 = copyStr(Tail_34204, 1);
LOC9 = rawNewString(Head_34203->Sup.len + LOC10->Sup.len + 0);
appendString(LOC9, Head_34203);
appendString(LOC9, LOC10);
Result_34205 = LOC9;
goto LA6;
LA7: ;
LOC11 = 0;
LOC11 = rawNewString(Head_34203->Sup.len + Tail_34204->Sup.len + 0);
appendString(LOC11, Head_34203);
appendString(LOC11, Tail_34204);
Result_34205 = LOC11;
LA6: ;
goto LA1;
LA4: ;
if (!(((NU8)(Tail_34204->data[0])) == ((NU8)(92)) || ((NU8)(Tail_34204->data[0])) == ((NU8)(47)))) goto LA13;
LOC15 = 0;
LOC15 = rawNewString(Head_34203->Sup.len + Tail_34204->Sup.len + 0);
appendString(LOC15, Head_34203);
appendString(LOC15, Tail_34204);
Result_34205 = LOC15;
goto LA12;
LA13: ;
LOC16 = 0;
LOC16 = rawNewString(Head_34203->Sup.len + Tail_34204->Sup.len + 1);
appendString(LOC16, Head_34203);
appendChar(LOC16, 92);
appendString(LOC16, Tail_34204);
Result_34205 = LOC16;
LA12: ;
LA1: ;
return Result_34205;
}
N_NIMCALL(NimStringDesc*, HEX2F_34280)(NimStringDesc* Head_34282, NimStringDesc* Tail_34283) {
NimStringDesc* Result_34284;
Result_34284 = 0;
Result_34284 = nosJoinPath(Head_34282, Tail_34283);
goto BeforeRet;
BeforeRet: ;
return Result_34284;
}
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_34530) {
NimStringDesc* Result_34531;
NIM_BOOL LOC2;
TY34337 LOC6;
Result_34531 = 0;
LOC2 = (Path_34530->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_34530->data[(NI32)(Path_34530->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Path_34530->data[(NI32)(Path_34530->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
Result_34531 = copyString(((NimStringDesc*) &TMP192623));
goto LA1;
LA4: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
nosSplitPath(Path_34530, &LOC6);
Result_34531 = copyString(LOC6.Tail);
LA1: ;
return Result_34531;
}
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_32803) {
NIM_BOOL Result_32804;
NI32 A_32805;
Result_32804 = 0;
A_32805 = 0;
A_32805 = Dl_28632(Filename_32803->data);
if (!!((A_32805 == ((NI32) -1)))) goto LA2;
Result_32804 = ((NI32)(A_32805 & ((NI32) 16)) == ((NI32) 0));
LA2: ;
return Result_32804;
}
N_NIMCALL(NI, Searchextpos_34427)(NimStringDesc* S_34429) {
NI Result_34430;
NI I_34440;
NI HEX3Atmp_34455;
NI Res_34457;
Result_34430 = 0;
Result_34430 = -1;
I_34440 = 0;
HEX3Atmp_34455 = 0;
HEX3Atmp_34455 = (NI32)(S_34429->Sup.len - 1);
Res_34457 = 0;
Res_34457 = HEX3Atmp_34455;
while (1) {
if (!(1 <= Res_34457)) goto LA1;
I_34440 = Res_34457;
if (!((NU8)(S_34429->data[I_34440]) == (NU8)(46))) goto LA3;
Result_34430 = I_34440;
goto LA1;
goto LA2;
LA3: ;
if (!(((NU8)(S_34429->data[I_34440])) == ((NU8)(92)) || ((NU8)(S_34429->data[I_34440])) == ((NU8)(47)))) goto LA5;
goto LA1;
goto LA2;
LA5: ;
LA2: ;
Res_34457 -= 1;
} LA1: ;
return Result_34430;
}
N_NIMCALL(NimStringDesc*, Normext_34421)(NimStringDesc* Ext_34423) {
NimStringDesc* Result_34424;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
Result_34424 = 0;
LOC2 = ((Ext_34423) && (Ext_34423)->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = ((NU8)(Ext_34423->data[0]) == (NU8)(46));
LA3: ;
if (!LOC2) goto LA4;
Result_34424 = copyString(Ext_34423);
goto LA1;
LA4: ;
LOC6 = 0;
LOC6 = rawNewString(Ext_34423->Sup.len + 1);
appendChar(LOC6, 46);
appendString(LOC6, Ext_34423);
Result_34424 = LOC6;
LA1: ;
return Result_34424;
}
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_34620, NimStringDesc* Ext_34621) {
NimStringDesc* Result_34622;
NI Extpos_34623;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
Result_34622 = 0;
Extpos_34623 = 0;
Extpos_34623 = Searchextpos_34427(Filename_34620);
if (!(Extpos_34623 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_34421(Ext_34621);
LOC4 = rawNewString(Filename_34620->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_34620);
appendString(LOC4, LOC5);
Result_34622 = LOC4;
goto LA1;
LA2: ;
LOC6 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Filename_34620, 0, (NI32)(Extpos_34623 - 1));
LOC8 = 0;
LOC8 = Normext_34421(Ext_34621);
LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
Result_34622 = LOC6;
LA1: ;
return Result_34622;
}
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_32004) {
NI32 Err_32009;
NCSTRING Msgbuf_32012;
NI32 LOC8;
NimStringDesc* M_32016;
TY422* E_32018;
TY422* E_32204;
NCSTRING LOC19;
TY422* E_32221;
TY422* E_32238;
if (!(Msg_32004->Sup.len == 0)) goto LA2;
Err_32009 = 0;
Err_32009 = Dl_28547();
if (!!((Err_32009 == ((NI32) 0)))) goto LA5;
Msgbuf_32012 = 0;
LOC8 = Dl_28549(((NI32) 4864), NIM_NIL, Err_32009, ((NI32) 0), ((void*) (&Msgbuf_32012)), ((NI32) 0), NIM_NIL);
if (!!((LOC8 == ((NI32) 0)))) goto LA9;
M_32016 = 0;
M_32016 = cstrToNimstr(Msgbuf_32012);
if (!!((Msgbuf_32012 == NIM_NIL))) goto LA12;
Dl_28558(((void*) (Msgbuf_32012)));
LA12: ;
E_32018 = 0;
E_32018 = (TY422*) newObj(NTI32017, sizeof(TY422));
(*E_32018).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_32018).Sup.Sup.Sup.message, copyString(M_32016));
raiseException((E_Base*)E_32018, "EOS");
LA9: ;
LA5: ;
if (!!((errno == ((NI32) 0)))) goto LA16;
E_32204 = 0;
E_32204 = (TY422*) newObj(NTI32017, sizeof(TY422));
(*E_32204).Sup.Sup.Sup.Sup.m_type = NTI422;
LOC19 = strerror(errno);
asgnRefNoCycle((void**) &(*E_32204).Sup.Sup.Sup.message, cstrToNimstr(LOC19));
raiseException((E_Base*)E_32204, "EOS");
goto LA15;
LA16: ;
E_32221 = 0;
E_32221 = (TY422*) newObj(NTI32017, sizeof(TY422));
(*E_32221).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_32221).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP192650)));
raiseException((E_Base*)E_32221, "EOS");
LA15: ;
goto LA1;
LA2: ;
E_32238 = 0;
E_32238 = (TY422*) newObj(NTI32017, sizeof(TY422));
(*E_32238).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_32238).Sup.Sup.Sup.message, copyString(Msg_32004));
raiseException((E_Base*)E_32238, "EOS");
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
NimStringDesc* Result_33812;
NI32 L_33814;
Result_33812 = 0;
Result_33812 = mnewString(512);
L_33814 = 0;
L_33814 = Dl_28561(((NI32) 512), Result_33812->data);
if (!(L_33814 == ((NI32) 0))) goto LA2;
nosOSError(((NimStringDesc*) &TMP192623));
LA2: ;
Result_33812 = setLengthStr(Result_33812, ((NI) (L_33814)));
return Result_33812;
}
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_34251, NI Parts_34251Len0) {
NimStringDesc* Result_34252;
NI I_34276;
NI HEX3Atmp_34277;
NI Res_34279;
Result_34252 = 0;
Result_34252 = copyString(Parts_34251[0]);
I_34276 = 0;
HEX3Atmp_34277 = 0;
HEX3Atmp_34277 = (Parts_34251Len0-1);
Res_34279 = 0;
Res_34279 = 1;
while (1) {
if (!(Res_34279 <= HEX3Atmp_34277)) goto LA1;
I_34276 = Res_34279;
Result_34252 = nosJoinPath(Result_34252, Parts_34251[I_34276]);
Res_34279 += 1;
} LA1: ;
return Result_34252;
}
N_NIMCALL(void, Rawcreatedir_36012)(NimStringDesc* Dir_36014) {
NIM_BOOL LOC2;
NI32 LOC3;
NI32 LOC5;
LOC3 = Dl_28568(Dir_36014->data, NIM_NIL);
LOC2 = (LOC3 == ((NI32) 0));
if (!(LOC2)) goto LA4;
LOC5 = Dl_28547();
LOC2 = !((LOC5 == ((NI32) 183)));
LA4: ;
if (!LOC2) goto LA6;
nosOSError(((NimStringDesc*) &TMP192623));
LA6: ;
}
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_36203) {
NI I_36214;
NI HEX3Atmp_36227;
NI Res_36229;
NimStringDesc* LOC5;
I_36214 = 0;
HEX3Atmp_36227 = 0;
HEX3Atmp_36227 = (NI32)(Dir_36203->Sup.len - 1);
Res_36229 = 0;
Res_36229 = 1;
while (1) {
if (!(Res_36229 <= HEX3Atmp_36227)) goto LA1;
I_36214 = Res_36229;
if (!(((NU8)(Dir_36203->data[I_36214])) == ((NU8)(92)) || ((NU8)(Dir_36203->data[I_36214])) == ((NU8)(47)))) goto LA3;
LOC5 = 0;
LOC5 = copyStrLast(Dir_36203, 0, (NI32)(I_36214 - 1));
Rawcreatedir_36012(LOC5);
LA3: ;
Res_36229 += 1;
} LA1: ;
Rawcreatedir_36012(Dir_36203);
}
N_NIMCALL(void, Putenv_35232)(NimStringDesc* Key_35234, NimStringDesc* Val_35235) {
NI Indx_35236;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NI32 LOC7;
Indx_35236 = 0;
Indx_35236 = Findenvvar_35201(Key_35234);
if (!(0 <= Indx_35236)) goto LA2;
LOC4 = 0;
LOC4 = rawNewString(Key_35234->Sup.len + Val_35235->Sup.len + 1);
appendString(LOC4, Key_35234);
appendChar(LOC4, 61);
appendString(LOC4, Val_35235);
asgnRefNoCycle((void**) &Environment_35038->data[Indx_35236], LOC4);
goto LA1;
LA2: ;
LOC5 = 0;
LOC5 = rawNewString(Key_35234->Sup.len + Val_35235->Sup.len + 1);
appendString(LOC5, Key_35234);
appendChar(LOC5, 61);
appendString(LOC5, Val_35235);
Environment_35038 = (TY35021*) incrSeq(&(Environment_35038)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_35038->data[Environment_35038->Sup.len-1], copyString(LOC5));
Indx_35236 = (Environment_35038->Sup.len-1);
LA1: ;
LOC7 = Dl_28575(Key_35234->data, Val_35235->data);
if (!(LOC7 == ((NI32) 0))) goto LA8;
nosOSError(((NimStringDesc*) &TMP192623));
LA8: ;
}
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
NimStringDesc* Result_37003;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_37003 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_35218(((NimStringDesc*) &TMP192723));
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP192647));
Result_37003 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_37003;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18649, NimStringDesc* B_18650) {
NIM_BOOL Result_18651;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
NI32 LOC11;
Result_18651 = 0;
if (!(A_18649 == B_18650)) goto LA2;
Result_18651 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18649 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18650 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18651 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18649).Sup.len == (*B_18650).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18649).data)), ((NCSTRING) ((*B_18650).data)), ((NI32) ((NI32)((*A_18649).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18651 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18651;
}
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_34645, NimStringDesc* Pathb_34646) {
NI Result_34647;
Result_34647 = 0;
if (!NIM_FALSE) goto LA2;
Result_34647 = Cmp_1327(Patha_34645, Pathb_34646);
goto LA1;
LA2: ;
Result_34647 = nsuCmpIgnoreCase(Patha_34645, Pathb_34646);
LA1: ;
return Result_34647;
}
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_34650, NimStringDesc* Path2_34651) {
NIM_BOOL Result_34652;
TY28595 A_34653;
TY28595 B_34654;
NI Resa_34656;
NI Resb_34658;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NI LOC8;
Result_34652 = 0;
memset((void*)&A_34653, 0, sizeof(A_34653));
memset((void*)&B_34654, 0, sizeof(B_34654));
Resa_34656 = 0;
Resa_34656 = Dl_28612(Path1_34650->data, &A_34653);
Resb_34658 = 0;
Resb_34658 = Dl_28612(Path2_34651->data, &B_34654);
LOC2 = !((Resa_34656 == -1));
if (!(LOC2)) goto LA3;
LOC2 = !((Resb_34658 == -1));
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
LOC6 = cstrToNimstr(((NCSTRING) (A_34653.Cfilename)));
LOC7 = 0;
LOC7 = cstrToNimstr(((NCSTRING) (B_34654.Cfilename)));
Result_34652 = eqStrings(LOC6, LOC7);
goto LA1;
LA4: ;
LOC8 = noscmpPaths(Path1_34650, Path2_34651);
Result_34652 = (LOC8 == 0);
LA1: ;
if (!!((Resa_34656 == -1))) goto LA10;
Dl_28622(Resa_34656);
LA10: ;
if (!!((Resb_34658 == -1))) goto LA13;
Dl_28622(Resb_34658);
LA13: ;
return Result_34652;
}
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_34630, NimStringDesc* Ext_34631) {
NimStringDesc* Result_34632;
NI Extpos_34633;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_34632 = 0;
Extpos_34633 = 0;
Extpos_34633 = Searchextpos_34427(Filename_34630);
if (!(Extpos_34633 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_34421(Ext_34631);
LOC4 = rawNewString(Filename_34630->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_34630);
appendString(LOC4, LOC5);
Result_34632 = LOC4;
goto LA1;
LA2: ;
Result_34632 = copyString(Filename_34630);
LA1: ;
return Result_34632;
}
N_NIMCALL(NI32, nosgetLastModificationTime)(NimStringDesc* File_33203) {
NI32 Result_33204;
TY28595 F_33205;
NI H_33207;
NI64 LOC4;
Result_33204 = 0;
memset((void*)&F_33205, 0, sizeof(F_33205));
H_33207 = 0;
H_33207 = Dl_28612(File_33203->data, &F_33205);
if (!(H_33207 == -1)) goto LA2;
nosOSError(((NimStringDesc*) &TMP192623));
LA2: ;
LOC4 = Rdfiletime_28651(F_33205.Ftlastwritetime);
Result_33204 = Wintimetounixtime_30261(LOC4);
Dl_28622(H_33207);
return Result_33204;
}
N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* A_33803, NimStringDesc* B_33804) {
NIM_BOOL Result_33805;
NI32 LOC1;
NI32 LOC2;
NI64 LOC3;
Result_33805 = 0;
LOC1 = nosgetLastModificationTime(A_33803);
LOC2 = nosgetLastModificationTime(B_33804);
LOC3 = ntDiffTime(LOC1, LOC2);
Result_33805 = (0 < LOC3);
return Result_33805;
}
N_NIMCALL(void, nossleep)(NI Milsecs_38012) {
Dl_28663(((NI32) (Milsecs_38012)));
}
N_NOINLINE(void, osInit)(void) {
Envcomputed_35020 = NIM_FALSE;
asgnRefNoCycle((void**) &Environment_35038, (TY35021*) newSeq(NTI35021, 0));
}

