/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <errno.h>
#include <string.h>
typedef struct TY33221 TY33221;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10202 TY10202;
typedef struct TY10218 TY10218;
typedef struct TY10590 TY10590;
typedef struct TY10214 TY10214;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
typedef struct TY32378 TY32378;
typedef struct TY32515 TY32515;
typedef struct TY422 TY422;
typedef struct TY418 TY418;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY26595 TY26595;
typedef struct TY26593 TY26593;
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
struct TY10202 {
NI Refcount;
TNimType* Typ;
};
struct TY10218 {
NI Len;
NI Cap;
TY10202** D;
};
struct TY10214 {
NI Counter;
NI Max;
TY10210* Head;
TY10210** Data;
};
struct TY10588 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10590 {
TY10218 Zct;
TY10218 Decstack;
TY10214 Cycleroots;
TY10218 Tempstack;
TY10588 Stat;
};
typedef N_STDCALL_PTR(NCSTRING, TY26650) (void);
struct TY32378 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TY32515 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_STDCALL_PTR(NI32, TY26580) (NI Handle_26581, NCSTRING Buf_26582, NI32 Size_26583);
typedef N_STDCALL_PTR(NI32, TY26633) (NCSTRING Lpfilename_26634);
typedef N_STDCALL_PTR(NI32, TY26562) (NI32 Nbufferlength_26563, NCSTRING Lpbuffer_26564);
typedef N_STDCALL_PTR(NI32, TY26548) (void);
typedef N_STDCALL_PTR(NI32, TY26550) (NI32 Dwflags_26551, void* Lpsource_26552, NI32 Dwmessageid_26553, NI32 Dwlanguageid_26554, void* Lpbuffer_26555, NI32 Nsize_26556, void* Arguments_26557);
typedef N_STDCALL_PTR(void, TY26559) (void* P_26560);
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
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
typedef N_STDCALL_PTR(NI32, TY26569) (NCSTRING Pathname_26570, void* Security_26571);
typedef N_STDCALL_PTR(NCSTRING, TY26645) (void);
typedef N_STDCALL_PTR(NI32, TY26647) (NCSTRING Para1_26648);
typedef N_STDCALL_PTR(NI32, TY26576) (NCSTRING Lpname_26577, NCSTRING Lpvalue_26578);
struct TY26593 {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NIM_CHAR TY26606[260];
typedef NIM_CHAR TY26609[14];
struct TY26595 {
NI32 Dwfileattributes;
TY26593 Ftcreationtime;
TY26593 Ftlastaccesstime;
TY26593 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY26606 Cfilename;
TY26609 Calternatefilename;
};
typedef N_STDCALL_PTR(NI, TY26613) (NCSTRING Lpfilename_26614, TY26595* Lpfindfiledata_26616);
typedef N_STDCALL_PTR(void, TY26623) (NI Hfindfile_26624);
typedef N_STDCALL_PTR(void, TY26664) (NI32 Dwmilliseconds_26665);
typedef NI TY8214[8];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
struct TY33221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_12403, NI Len_12404);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11416, void* Src_11417);
static N_INLINE(TY10202*, Usrtocell_10622)(void* Usr_10624);
static N_INLINE(void, Rtladdzct_11256)(TY10202* C_11258);
N_NOINLINE(void, Addzct_10611)(TY10218* S_10614, TY10202* C_10615);
N_NIMCALL(TY33221*, nosparseCmdLine)(NimStringDesc* C_34434);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_16908);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17025, NI Newlen_17026);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_17035, NI Elemsize_17036);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_16904);
static N_INLINE(void, appendString)(NimStringDesc* Dest_16992, NimStringDesc* Src_16993);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_16982, NI Addlen_16983);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11422, void* Src_11423);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_32514, TY32515* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationFilename)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1347);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_16887);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17009, NIM_CHAR C_17010);
N_NIMCALL(NI, Searchextpos_32478)(NimStringDesc* S_32480);
N_NIMCALL(NimStringDesc*, Normext_32468)(NimStringDesc* Ext_32470);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_30004);
N_NIMCALL(void*, newObj)(TNimType* Typ_11907, NI Size_11908);
N_NIMCALL(void, raiseException)(E_Base* E_4604, NCSTRING Ename_4605);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_32203, NimStringDesc* Tail_32204);
N_NIMCALL(void, Rawcreatedir_34219)(NimStringDesc* Dir_34221);
N_NIMCALL(NI, Findenvvar_33402)(NimStringDesc* Key_33404);
N_NIMCALL(void, Getenvvarsc_33244)(void);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_23769, NimStringDesc* Prefix_23770);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_24227, NIM_CHAR Sub_24228, NI Start_24229);
N_NIMCALL(NimStringDesc*, Getenv_33425)(NimStringDesc* Key_33427);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_16847, NimStringDesc* B_16848);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_32865, NimStringDesc* Pathb_32866);
N_NIMCALL(NI, Cmp_1319)(NimStringDesc* X_1321, NimStringDesc* Y_1322);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_22595, NimStringDesc* B_22596);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_32377, TY32378* Result);
N_NIMCALL(NI64, ntDiffTime)(NI32 A_27435, NI32 B_27436);
N_NIMCALL(NI32, nosgetLastModificationTime)(NimStringDesc* File_31203);
N_NIMCALL(NI32, Wintimetounixtime_28261)(NI64 T_28263);
N_NIMCALL(NI64, Rdfiletime_26651)(TY26593 F_26653);
STRING_LITERAL(TMP190635, "", 0);
STRING_LITERAL(TMP190652, "C:\\", 3);
STRING_LITERAL(TMP190653, ".", 1);
STRING_LITERAL(TMP190654, "..\\", 3);
STRING_LITERAL(TMP190658, "unknown OS error", 16);
STRING_LITERAL(TMP190724, "APPDATA", 7);
STRING_LITERAL(TMP190725, "\\", 1);
NIM_BOOL Envcomputed_33220;
TY33221* Environment_33238;
extern TNimType* NTI33221; /* seq[string] */
extern TY10590 Gch_10608;
TY33221* Ownargv_35402;
extern TY26650 Dl_26649;
extern TY26580 Dl_26579;
extern TY26633 Dl_26632;
extern TY26562 Dl_26561;
extern TY26548 Dl_26547;
extern TY26550 Dl_26549;
extern TY26559 Dl_26558;
extern TNimType* NTI30017; /* ref EOS */
extern TNimType* NTI422; /* EOS */
extern TY26569 Dl_26568;
extern TY26645 Dl_26644;
extern TY26647 Dl_26646;
extern TY26576 Dl_26575;
extern TY26613 Dl_26612;
extern TY26623 Dl_26622;
extern TY26664 Dl_26663;
static N_INLINE(TY10202*, Usrtocell_10622)(void* Usr_10624) {
TY10202* Result_10625;
Result_10625 = 0;
Result_10625 = ((TY10202*) ((NI64)((NU64)(((NI) (Usr_10624))) - (NU64)(((NI) (((NI)sizeof(TY10202))))))));
return Result_10625;
}
static N_INLINE(void, Rtladdzct_11256)(TY10202* C_11258) {
Addzct_10611(&Gch_10608.Zct, C_11258);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11416, void* Src_11417) {
TY10202* C_11418;
TY10202* C_11419;
if (!!((Src_11417 == NIM_NIL))) goto LA2;
C_11418 = 0;
C_11418 = Usrtocell_10622(Src_11417);
(*C_11418).Refcount = (NI64)((NU64)((*C_11418).Refcount) + (NU64)(8));
LA2: ;
if (!!(((*Dest_11416) == NIM_NIL))) goto LA5;
C_11419 = 0;
C_11419 = Usrtocell_10622((*Dest_11416));
(*C_11419).Refcount = (NI64)((NU64)((*C_11419).Refcount) - (NU64)(8));
if (!((NU64)((*C_11419).Refcount) < (NU64)(8))) goto LA8;
Rtladdzct_11256(C_11419);
LA8: ;
LA5: ;
(*Dest_11416) = Src_11417;
}
N_NIMCALL(TY33221*, nosparseCmdLine)(NimStringDesc* C_34434) {
TY33221* Result_34436;
NI I_34453;
NimStringDesc* A_34454;
NIM_BOOL LOC3;
NIM_BOOL Inquote_34473;
NI J_34474;
NI K_34498;
NI HEX3Atmp_34622;
NI Res_34624;
Result_34436 = 0;
Result_34436 = (TY33221*) newSeq(NTI33221, 0);
I_34453 = 0;
I_34453 = 0;
A_34454 = 0;
A_34454 = copyString(((NimStringDesc*) &TMP190635));
while (1) {
A_34454 = setLengthStr(A_34454, 0);
while (1) {
LOC3 = ((NU8)(C_34434->data[I_34453]) == (NU8)(32));
if (LOC3) goto LA4;
LOC3 = ((NU8)(C_34434->data[I_34453]) == (NU8)(9));
LA4: ;
if (!LOC3) goto LA2;
I_34453 += 1;
} LA2: ;
if (!((NU8)(C_34434->data[I_34453]) == (NU8)(0))) goto LA6;
goto LA1;
LA6: ;
Inquote_34473 = 0;
Inquote_34473 = NIM_FALSE;
while (1) {
switch (((NU8)(C_34434->data[I_34453]))) {
case 0:
goto LA8;
break;
case 92:
J_34474 = 0;
J_34474 = I_34453;
while (1) {
if (!((NU8)(C_34434->data[J_34474]) == (NU8)(92))) goto LA9;
J_34474 += 1;
} LA9: ;
if (!((NU8)(C_34434->data[J_34474]) == (NU8)(34))) goto LA11;
K_34498 = 0;
HEX3Atmp_34622 = 0;
HEX3Atmp_34622 = (NI64)((NI64)(J_34474 - I_34453) / 2);
Res_34624 = 0;
Res_34624 = 1;
while (1) {
if (!(Res_34624 <= HEX3Atmp_34622)) goto LA13;
K_34498 = Res_34624;
A_34454 = addChar(A_34454, 92);
Res_34624 += 1;
} LA13: ;
if (!((NI64)((NI64)(J_34474 - I_34453) % 2) == 0)) goto LA15;
I_34453 = J_34474;
goto LA14;
LA15: ;
A_34454 = addChar(A_34454, 34);
I_34453 = (NI64)(J_34474 + 1);
LA14: ;
goto LA10;
LA11: ;
A_34454 = addChar(A_34454, C_34434->data[I_34453]);
I_34453 += 1;
LA10: ;
break;
case 34:
I_34453 += 1;
if (!!(Inquote_34473)) goto LA18;
Inquote_34473 = NIM_TRUE;
goto LA17;
LA18: ;
if (!((NU8)(C_34434->data[I_34453]) == (NU8)(34))) goto LA20;
A_34454 = addChar(A_34454, C_34434->data[I_34453]);
I_34453 += 1;
goto LA17;
LA20: ;
Inquote_34473 = NIM_FALSE;
goto LA8;
LA17: ;
break;
case 32:
case 9:
if (!!(Inquote_34473)) goto LA23;
goto LA8;
LA23: ;
A_34454 = addChar(A_34454, C_34434->data[I_34453]);
I_34453 += 1;
break;
default:
A_34454 = addChar(A_34454, C_34434->data[I_34453]);
I_34453 += 1;
break;
}
} LA8: ;
Result_34436 = (TY33221*) incrSeq(&(Result_34436)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_34436->data[Result_34436->Sup.len-1], copyString(A_34454));
} LA1: ;
return Result_34436;
}
N_NIMCALL(NI, nosparamCount)(void) {
NI Result_35405;
NCSTRING LOC4;
NimStringDesc* LOC5;
Result_35405 = 0;
if (!Ownargv_35402 == 0) goto LA2;
LOC4 = Dl_26649();
LOC5 = cstrToNimstr(LOC4);
asgnRefNoCycle((void**) &Ownargv_35402, nosparseCmdLine(LOC5));
LA2: ;
Result_35405 = (NI64)(Ownargv_35402->Sup.len - 1);
return Result_35405;
}
N_NIMCALL(NimStringDesc*, nosparamStr)(NI I_35426) {
NimStringDesc* Result_35427;
NCSTRING LOC4;
NimStringDesc* LOC5;
Result_35427 = 0;
if (!Ownargv_35402 == 0) goto LA2;
LOC4 = Dl_26649();
LOC5 = cstrToNimstr(LOC4);
asgnRefNoCycle((void**) &Ownargv_35402, nosparseCmdLine(LOC5));
LA2: ;
Result_35427 = copyString(Ownargv_35402->data[I_35426]);
goto BeforeRet;
BeforeRet: ;
return Result_35427;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_16992, NimStringDesc* Src_16993) {
memcpy(((NCSTRING) (&(*Dest_16992).data[((*Dest_16992).Sup.len)-0])), ((NCSTRING) ((*Src_16993).data)), ((NI32) ((NI64)((NI64)((*Src_16993).Sup.len + 1) * 1))));
(*Dest_16992).Sup.len += (*Src_16993).Sup.len;
}
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_30256) {
NimStringDesc* Result_30257;
NI Start_30258;
NIM_BOOL LOC4;
NI I_30407;
NIM_BOOL LOC10;
NIM_BOOL LOC11;
Result_30257 = 0;
Start_30258 = 0;
if (!((NU8)(Path_30256->data[0]) == (NU8)(47))) goto LA2;
Result_30257 = copyString(((NimStringDesc*) &TMP190652));
Start_30258 = 1;
goto LA1;
LA2: ;
LOC4 = ((NU8)(Path_30256->data[0]) == (NU8)(46));
if (!(LOC4)) goto LA5;
LOC4 = ((NU8)(Path_30256->data[1]) == (NU8)(47));
LA5: ;
if (!LOC4) goto LA6;
Result_30257 = copyString(((NimStringDesc*) &TMP190653));
Start_30258 = 2;
goto LA1;
LA6: ;
Result_30257 = copyString(((NimStringDesc*) &TMP190635));
Start_30258 = 0;
LA1: ;
I_30407 = 0;
I_30407 = Start_30258;
while (1) {
if (!(I_30407 < Path_30256->Sup.len)) goto LA8;
LOC11 = ((NU8)(Path_30256->data[I_30407]) == (NU8)(46));
if (!(LOC11)) goto LA12;
LOC11 = ((NU8)(Path_30256->data[(NI64)(I_30407 + 1)]) == (NU8)(46));
LA12: ;
LOC10 = LOC11;
if (!(LOC10)) goto LA13;
LOC10 = ((NU8)(Path_30256->data[(NI64)(I_30407 + 2)]) == (NU8)(47));
LA13: ;
if (!LOC10) goto LA14;
Result_30257 = resizeString(Result_30257, 3);
appendString(Result_30257, ((NimStringDesc*) &TMP190654));
I_30407 += 3;
goto LA9;
LA14: ;
if (!((NU8)(Path_30256->data[I_30407]) == (NU8)(47))) goto LA16;
Result_30257 = addChar(Result_30257, 92);
I_30407 += 1;
goto LA9;
LA16: ;
Result_30257 = addChar(Result_30257, Path_30256->data[I_30407]);
I_30407 += 1;
LA9: ;
} LA8: ;
return Result_30257;
}
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_32377, TY32378* Result) {
NI Seppos_32382;
NI I_32392;
NI HEX3Atmp_32408;
NI Res_32410;
memset((void*)Result, 0, sizeof((*Result)));
Seppos_32382 = 0;
Seppos_32382 = -1;
I_32392 = 0;
HEX3Atmp_32408 = 0;
HEX3Atmp_32408 = (NI64)(Path_32377->Sup.len - 1);
Res_32410 = 0;
Res_32410 = HEX3Atmp_32408;
while (1) {
if (!(0 <= Res_32410)) goto LA1;
I_32392 = Res_32410;
if (!(((NU8)(Path_32377->data[I_32392])) == ((NU8)(92)) || ((NU8)(Path_32377->data[I_32392])) == ((NU8)(47)))) goto LA3;
Seppos_32382 = I_32392;
goto LA1;
LA3: ;
Res_32410 -= 1;
} LA1: ;
if (!(0 <= Seppos_32382)) goto LA6;
unsureAsgnRef((void**) &(*Result).Head, copyStrLast(Path_32377, 0, (NI64)(Seppos_32382 - 1)));
unsureAsgnRef((void**) &(*Result).Tail, copyStr(Path_32377, (NI64)(Seppos_32382 + 1)));
goto LA5;
LA6: ;
unsureAsgnRef((void**) &(*Result).Head, copyString(((NimStringDesc*) &TMP190635)));
unsureAsgnRef((void**) &(*Result).Tail, copyString(Path_32377));
LA5: ;
}
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_32514, TY32515* Result) {
NIM_BOOL LOC2;
NI Seppos_32539;
NI Dotpos_32542;
NI I_32552;
NI HEX3Atmp_32574;
NI Res_32576;
NIM_BOOL LOC11;
memset((void*)Result, 0, sizeof((*Result)));
LOC2 = (Path_32514->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_32514->data[(NI64)(Path_32514->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Path_32514->data[(NI64)(Path_32514->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
unsureAsgnRef((void**) &(*Result).Dir, copyString(Path_32514));
unsureAsgnRef((void**) &(*Result).Name, copyString(((NimStringDesc*) &TMP190635)));
unsureAsgnRef((void**) &(*Result).Ext, copyString(((NimStringDesc*) &TMP190635)));
goto LA1;
LA4: ;
Seppos_32539 = 0;
Seppos_32539 = -1;
Dotpos_32542 = 0;
Dotpos_32542 = Path_32514->Sup.len;
I_32552 = 0;
HEX3Atmp_32574 = 0;
HEX3Atmp_32574 = (NI64)(Path_32514->Sup.len - 1);
Res_32576 = 0;
Res_32576 = HEX3Atmp_32574;
while (1) {
if (!(0 <= Res_32576)) goto LA6;
I_32552 = Res_32576;
if (!((NU8)(Path_32514->data[I_32552]) == (NU8)(46))) goto LA8;
LOC11 = (Dotpos_32542 == Path_32514->Sup.len);
if (!(LOC11)) goto LA12;
LOC11 = (0 < I_32552);
LA12: ;
if (!LOC11) goto LA13;
Dotpos_32542 = I_32552;
LA13: ;
goto LA7;
LA8: ;
if (!(((NU8)(Path_32514->data[I_32552])) == ((NU8)(92)) || ((NU8)(Path_32514->data[I_32552])) == ((NU8)(47)))) goto LA15;
Seppos_32539 = I_32552;
goto LA6;
goto LA7;
LA15: ;
LA7: ;
Res_32576 -= 1;
} LA6: ;
unsureAsgnRef((void**) &(*Result).Dir, copyStrLast(Path_32514, 0, (NI64)(Seppos_32539 - 1)));
unsureAsgnRef((void**) &(*Result).Name, copyStrLast(Path_32514, (NI64)(Seppos_32539 + 1), (NI64)(Dotpos_32542 - 1)));
unsureAsgnRef((void**) &(*Result).Ext, copyStr(Path_32514, Dotpos_32542));
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationFilename)(void) {
NimStringDesc* Result_36003;
NI32 Len_36004;
Result_36003 = 0;
Result_36003 = mnewString(256);
Len_36004 = 0;
Len_36004 = Dl_26579(0, Result_36003->data, ((NI32) 256));
Result_36003 = setLengthStr(Result_36003, ((NI) (Len_36004)));
return Result_36003;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void) {
NimStringDesc* Result_36203;
NimStringDesc* LOC1;
TY32515 LOC2;
Result_36203 = 0;
LOC1 = nosgetApplicationFilename();
nossplitFile(LOC1, &LOC2);
Result_36203 = copyString(LOC2.Dir);
return Result_36203;
}
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_30804) {
NIM_BOOL Result_30805;
NI32 A_30806;
Result_30805 = 0;
A_30806 = 0;
A_30806 = Dl_26632(Filename_30804->data);
if (!!((A_30806 == ((NI32) -1)))) goto LA2;
Result_30805 = ((NI32)(A_30806 & ((NI32) 16)) == ((NI32) 0));
LA2: ;
return Result_30805;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17009, NIM_CHAR C_17010) {
(*Dest_17009).data[((*Dest_17009).Sup.len)-0] = C_17010;
(*Dest_17009).data[((NI64)((*Dest_17009).Sup.len + 1))-0] = 0;
(*Dest_17009).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_32203, NimStringDesc* Tail_32204) {
NimStringDesc* Result_32205;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
Result_32205 = 0;
if (!(Head_32203->Sup.len == 0)) goto LA2;
Result_32205 = copyString(Tail_32204);
goto LA1;
LA2: ;
if (!(((NU8)(Head_32203->data[(NI64)(Head_32203->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Head_32203->data[(NI64)(Head_32203->Sup.len - 1)])) == ((NU8)(47)))) goto LA4;
if (!(((NU8)(Tail_32204->data[0])) == ((NU8)(92)) || ((NU8)(Tail_32204->data[0])) == ((NU8)(47)))) goto LA7;
LOC10 = copyStr(Tail_32204, 1);
LOC9 = rawNewString(Head_32203->Sup.len + LOC10->Sup.len + 0);
appendString(LOC9, Head_32203);
appendString(LOC9, LOC10);
Result_32205 = LOC9;
goto LA6;
LA7: ;
LOC11 = rawNewString(Head_32203->Sup.len + Tail_32204->Sup.len + 0);
appendString(LOC11, Head_32203);
appendString(LOC11, Tail_32204);
Result_32205 = LOC11;
LA6: ;
goto LA1;
LA4: ;
if (!(((NU8)(Tail_32204->data[0])) == ((NU8)(92)) || ((NU8)(Tail_32204->data[0])) == ((NU8)(47)))) goto LA13;
LOC15 = rawNewString(Head_32203->Sup.len + Tail_32204->Sup.len + 0);
appendString(LOC15, Head_32203);
appendString(LOC15, Tail_32204);
Result_32205 = LOC15;
goto LA12;
LA13: ;
LOC16 = rawNewString(Head_32203->Sup.len + Tail_32204->Sup.len + 1);
appendString(LOC16, Head_32203);
appendChar(LOC16, 92);
appendString(LOC16, Tail_32204);
Result_32205 = LOC16;
LA12: ;
LA1: ;
return Result_32205;
}
N_NIMCALL(NI, Searchextpos_32478)(NimStringDesc* S_32480) {
NI Result_32481;
NI I_32491;
NI HEX3Atmp_32507;
NI Res_32509;
Result_32481 = 0;
Result_32481 = -1;
I_32491 = 0;
HEX3Atmp_32507 = 0;
HEX3Atmp_32507 = (NI64)(S_32480->Sup.len - 1);
Res_32509 = 0;
Res_32509 = HEX3Atmp_32507;
while (1) {
if (!(1 <= Res_32509)) goto LA1;
I_32491 = Res_32509;
if (!((NU8)(S_32480->data[I_32491]) == (NU8)(46))) goto LA3;
Result_32481 = I_32491;
goto LA1;
goto LA2;
LA3: ;
if (!(((NU8)(S_32480->data[I_32491])) == ((NU8)(92)) || ((NU8)(S_32480->data[I_32491])) == ((NU8)(47)))) goto LA5;
goto LA1;
goto LA2;
LA5: ;
LA2: ;
Res_32509 -= 1;
} LA1: ;
return Result_32481;
}
N_NIMCALL(NimStringDesc*, Normext_32468)(NimStringDesc* Ext_32470) {
NimStringDesc* Result_32471;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
Result_32471 = 0;
LOC2 = ((Ext_32470) && (Ext_32470)->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = ((NU8)(Ext_32470->data[0]) == (NU8)(46));
LA3: ;
if (!LOC2) goto LA4;
Result_32471 = copyString(Ext_32470);
goto LA1;
LA4: ;
LOC6 = rawNewString(Ext_32470->Sup.len + 1);
appendChar(LOC6, 46);
appendString(LOC6, Ext_32470);
Result_32471 = LOC6;
LA1: ;
return Result_32471;
}
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_32820, NimStringDesc* Ext_32821) {
NimStringDesc* Result_32822;
NI Extpos_32823;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
Result_32822 = 0;
Extpos_32823 = 0;
Extpos_32823 = Searchextpos_32478(Filename_32820);
if (!(Extpos_32823 < 0)) goto LA2;
LOC5 = Normext_32468(Ext_32821);
LOC4 = rawNewString(Filename_32820->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_32820);
appendString(LOC4, LOC5);
Result_32822 = LOC4;
goto LA1;
LA2: ;
LOC7 = copyStrLast(Filename_32820, 0, (NI64)(Extpos_32823 - 1));
LOC8 = Normext_32468(Ext_32821);
LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
Result_32822 = LOC6;
LA1: ;
return Result_32822;
}
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_30004) {
NI32 Err_30009;
NCSTRING Msgbuf_30012;
NI32 LOC8;
NimStringDesc* M_30016;
TY422* E_30018;
TY422* E_30204;
NCSTRING LOC19;
TY422* E_30221;
TY422* E_30238;
if (!(Msg_30004->Sup.len == 0)) goto LA2;
Err_30009 = 0;
Err_30009 = Dl_26547();
if (!!((Err_30009 == ((NI32) 0)))) goto LA5;
Msgbuf_30012 = 0;
LOC8 = Dl_26549(((NI32) 4864), NIM_NIL, Err_30009, ((NI32) 0), ((void*) (&Msgbuf_30012)), ((NI32) 0), NIM_NIL);
if (!!((LOC8 == ((NI32) 0)))) goto LA9;
M_30016 = 0;
M_30016 = cstrToNimstr(Msgbuf_30012);
if (!!((Msgbuf_30012 == NIM_NIL))) goto LA12;
Dl_26558(((void*) (Msgbuf_30012)));
LA12: ;
E_30018 = 0;
E_30018 = (TY422*) newObj(NTI30017, sizeof(TY422));
(*E_30018).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_30018).Sup.Sup.Sup.message, copyString(M_30016));
raiseException((E_Base*)E_30018, "EOS");
LA9: ;
LA5: ;
if (!!((errno == ((NI32) 0)))) goto LA16;
E_30204 = 0;
E_30204 = (TY422*) newObj(NTI30017, sizeof(TY422));
(*E_30204).Sup.Sup.Sup.Sup.m_type = NTI422;
LOC19 = strerror(errno);
asgnRefNoCycle((void**) &(*E_30204).Sup.Sup.Sup.message, cstrToNimstr(LOC19));
raiseException((E_Base*)E_30204, "EOS");
goto LA15;
LA16: ;
E_30221 = 0;
E_30221 = (TY422*) newObj(NTI30017, sizeof(TY422));
(*E_30221).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_30221).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP190658)));
raiseException((E_Base*)E_30221, "EOS");
LA15: ;
goto LA1;
LA2: ;
E_30238 = 0;
E_30238 = (TY422*) newObj(NTI30017, sizeof(TY422));
(*E_30238).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_30238).Sup.Sup.Sup.message, copyString(Msg_30004));
raiseException((E_Base*)E_30238, "EOS");
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
NimStringDesc* Result_31810;
NI32 L_31812;
Result_31810 = 0;
Result_31810 = mnewString(512);
L_31812 = 0;
L_31812 = Dl_26561(((NI32) 512), Result_31810->data);
if (!(L_31812 == ((NI32) 0))) goto LA2;
nosOSError(((NimStringDesc*) &TMP190635));
LA2: ;
Result_31810 = setLengthStr(Result_31810, ((NI) (L_31812)));
return Result_31810;
}
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_32287, NI Parts_32287Len0) {
NimStringDesc* Result_32288;
NI I_32311;
NI HEX3Atmp_32313;
NI Res_32315;
Result_32288 = 0;
Result_32288 = copyString(Parts_32287[0]);
I_32311 = 0;
HEX3Atmp_32313 = 0;
HEX3Atmp_32313 = (Parts_32287Len0-1);
Res_32315 = 0;
Res_32315 = 1;
while (1) {
if (!(Res_32315 <= HEX3Atmp_32313)) goto LA1;
I_32311 = Res_32315;
Result_32288 = nosJoinPath(Result_32288, Parts_32287[I_32311]);
Res_32315 += 1;
} LA1: ;
return Result_32288;
}
N_NIMCALL(void, Rawcreatedir_34219)(NimStringDesc* Dir_34221) {
NIM_BOOL LOC2;
NI32 LOC3;
NI32 LOC5;
LOC3 = Dl_26568(Dir_34221->data, NIM_NIL);
LOC2 = (LOC3 == ((NI32) 0));
if (!(LOC2)) goto LA4;
LOC5 = Dl_26547();
LOC2 = !((LOC5 == ((NI32) 183)));
LA4: ;
if (!LOC2) goto LA6;
nosOSError(((NimStringDesc*) &TMP190635));
LA6: ;
}
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_34403) {
NI I_34413;
NI HEX3Atmp_34427;
NI Res_34429;
NimStringDesc* LOC5;
I_34413 = 0;
HEX3Atmp_34427 = 0;
HEX3Atmp_34427 = (NI64)(Dir_34403->Sup.len - 1);
Res_34429 = 0;
Res_34429 = 1;
while (1) {
if (!(Res_34429 <= HEX3Atmp_34427)) goto LA1;
I_34413 = Res_34429;
if (!(((NU8)(Dir_34403->data[I_34413])) == ((NU8)(92)) || ((NU8)(Dir_34403->data[I_34413])) == ((NU8)(47)))) goto LA3;
LOC5 = copyStrLast(Dir_34403, 0, (NI64)(I_34413 - 1));
Rawcreatedir_34219(LOC5);
LA3: ;
Res_34429 += 1;
} LA1: ;
Rawcreatedir_34219(Dir_34403);
}
N_NIMCALL(void, Getenvvarsc_33244)(void) {
NCSTRING Env_33246;
NCSTRING E_33247;
NCSTRING Eend_33248;
NimStringDesc* LOC8;
NI32 LOC12;
if (!!(Envcomputed_33220)) goto LA2;
Env_33246 = 0;
Env_33246 = Dl_26644();
E_33247 = 0;
E_33247 = Env_33246;
if (!(E_33247 == NIM_NIL)) goto LA5;
goto BeforeRet;
LA5: ;
while (1) {
Eend_33248 = 0;
Eend_33248 = strchr(E_33247, ((NI32) 0));
LOC8 = cstrToNimstr(E_33247);
Environment_33238 = (TY33221*) incrSeq(&(Environment_33238)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_33238->data[Environment_33238->Sup.len-1], copyString(LOC8));
E_33247 = ((NCSTRING) ((NI64)(((NI) (Eend_33248)) + 1)));
if (!((NU8)(Eend_33248[1]) == (NU8)(0))) goto LA10;
goto LA7;
LA10: ;
} LA7: ;
Envcomputed_33220 = NIM_TRUE;
LOC12 = Dl_26646(Env_33246);
LA2: ;
BeforeRet: ;
}
N_NIMCALL(NI, Findenvvar_33402)(NimStringDesc* Key_33404) {
NI Result_33405;
NimStringDesc* Temp_33410;
NimStringDesc* LOC1;
NI I_33418;
NI HEX3Atmp_33420;
NI Res_33422;
NIM_BOOL LOC4;
Result_33405 = 0;
Getenvvarsc_33244();
Temp_33410 = 0;
LOC1 = rawNewString(Key_33404->Sup.len + 1);
appendString(LOC1, Key_33404);
appendChar(LOC1, 61);
Temp_33410 = LOC1;
I_33418 = 0;
HEX3Atmp_33420 = 0;
HEX3Atmp_33420 = (Environment_33238->Sup.len-1);
Res_33422 = 0;
Res_33422 = 0;
while (1) {
if (!(Res_33422 <= HEX3Atmp_33420)) goto LA2;
I_33418 = Res_33422;
LOC4 = nsuStartsWith(Environment_33238->data[I_33418], Temp_33410);
if (!LOC4) goto LA5;
Result_33405 = I_33418;
goto BeforeRet;
LA5: ;
Res_33422 += 1;
} LA2: ;
Result_33405 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_33405;
}
N_NIMCALL(void, Putenv_33439)(NimStringDesc* Key_33441, NimStringDesc* Val_33442) {
NI Indx_33443;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NI32 LOC7;
Indx_33443 = 0;
Indx_33443 = Findenvvar_33402(Key_33441);
if (!(0 <= Indx_33443)) goto LA2;
LOC4 = rawNewString(Key_33441->Sup.len + Val_33442->Sup.len + 1);
appendString(LOC4, Key_33441);
appendChar(LOC4, 61);
appendString(LOC4, Val_33442);
asgnRefNoCycle((void**) &Environment_33238->data[Indx_33443], LOC4);
goto LA1;
LA2: ;
LOC5 = rawNewString(Key_33441->Sup.len + Val_33442->Sup.len + 1);
appendString(LOC5, Key_33441);
appendChar(LOC5, 61);
appendString(LOC5, Val_33442);
Environment_33238 = (TY33221*) incrSeq(&(Environment_33238)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_33238->data[Environment_33238->Sup.len-1], copyString(LOC5));
Indx_33443 = (Environment_33238->Sup.len-1);
LA1: ;
LOC7 = Dl_26575(Key_33441->data, Val_33442->data);
if (!(LOC7 == ((NI32) 0))) goto LA8;
nosOSError(((NimStringDesc*) &TMP190635));
LA8: ;
}
N_NIMCALL(NimStringDesc*, Getenv_33425)(NimStringDesc* Key_33427) {
NimStringDesc* Result_33428;
NI I_33429;
NI LOC4;
NCSTRING Env_33432;
Result_33428 = 0;
I_33429 = 0;
I_33429 = Findenvvar_33402(Key_33427);
if (!(0 <= I_33429)) goto LA2;
LOC4 = nsuFindChar(Environment_33238->data[I_33429], 61, 0);
Result_33428 = copyStr(Environment_33238->data[I_33429], (NI64)(LOC4 + 1));
goto BeforeRet;
goto LA1;
LA2: ;
Env_33432 = 0;
Env_33432 = getenv(Key_33427->data);
if (!(Env_33432 == NIM_NIL)) goto LA6;
Result_33428 = copyString(((NimStringDesc*) &TMP190635));
goto BeforeRet;
LA6: ;
Result_33428 = cstrToNimstr(Env_33432);
LA1: ;
BeforeRet: ;
return Result_33428;
}
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
NimStringDesc* Result_35203;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_35203 = 0;
LOC2 = Getenv_33425(((NimStringDesc*) &TMP190724));
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP190725));
Result_35203 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_35203;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_16847, NimStringDesc* B_16848) {
NIM_BOOL Result_16849;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
NI32 LOC11;
Result_16849 = 0;
if (!(A_16847 == B_16848)) goto LA2;
Result_16849 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_16847 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_16848 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_16849 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_16847).Sup.len == (*B_16848).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_16847).data)), ((NCSTRING) ((*B_16848).data)), ((NI32) ((NI64)((*A_16847).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_16849 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_16849;
}
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_32865, NimStringDesc* Pathb_32866) {
NI Result_32867;
Result_32867 = 0;
if (!NIM_FALSE) goto LA2;
Result_32867 = Cmp_1319(Patha_32865, Pathb_32866);
goto LA1;
LA2: ;
Result_32867 = nsuCmpIgnoreCase(Patha_32865, Pathb_32866);
LA1: ;
return Result_32867;
}
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_32870, NimStringDesc* Path2_32871) {
NIM_BOOL Result_32872;
TY26595 A_32873;
TY26595 B_32874;
NI Resa_32876;
NI Resb_32878;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NI LOC8;
Result_32872 = 0;
memset((void*)&A_32873, 0, sizeof(A_32873));
memset((void*)&B_32874, 0, sizeof(B_32874));
Resa_32876 = 0;
Resa_32876 = Dl_26612(Path1_32870->data, &A_32873);
Resb_32878 = 0;
Resb_32878 = Dl_26612(Path2_32871->data, &B_32874);
LOC2 = !((Resa_32876 == -1));
if (!(LOC2)) goto LA3;
LOC2 = !((Resb_32878 == -1));
LA3: ;
if (!LOC2) goto LA4;
LOC6 = cstrToNimstr(((NCSTRING) (A_32873.Cfilename)));
LOC7 = cstrToNimstr(((NCSTRING) (B_32874.Cfilename)));
Result_32872 = eqStrings(LOC6, LOC7);
goto LA1;
LA4: ;
LOC8 = noscmpPaths(Path1_32870, Path2_32871);
Result_32872 = (LOC8 == 0);
LA1: ;
if (!!((Resa_32876 == -1))) goto LA10;
Dl_26622(Resa_32876);
LA10: ;
if (!!((Resb_32878 == -1))) goto LA13;
Dl_26622(Resb_32878);
LA13: ;
return Result_32872;
}
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_32844, NimStringDesc* Ext_32845) {
NimStringDesc* Result_32846;
NI Extpos_32847;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_32846 = 0;
Extpos_32847 = 0;
Extpos_32847 = Searchextpos_32478(Filename_32844);
if (!(Extpos_32847 < 0)) goto LA2;
LOC5 = Normext_32468(Ext_32845);
LOC4 = rawNewString(Filename_32844->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_32844);
appendString(LOC4, LOC5);
Result_32846 = LOC4;
goto LA1;
LA2: ;
Result_32846 = copyString(Filename_32844);
LA1: ;
return Result_32846;
}
N_NIMCALL(NimStringDesc*, HEX2F_32318)(NimStringDesc* Head_32320, NimStringDesc* Tail_32321) {
NimStringDesc* Result_32322;
Result_32322 = 0;
Result_32322 = nosJoinPath(Head_32320, Tail_32321);
goto BeforeRet;
BeforeRet: ;
return Result_32322;
}
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_32585) {
NimStringDesc* Result_32586;
NIM_BOOL LOC2;
TY32378 LOC6;
Result_32586 = 0;
LOC2 = (Path_32585->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_32585->data[(NI64)(Path_32585->Sup.len - 1)])) == ((NU8)(92)) || ((NU8)(Path_32585->data[(NI64)(Path_32585->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
Result_32586 = copyString(((NimStringDesc*) &TMP190635));
goto LA1;
LA4: ;
nosSplitPath(Path_32585, &LOC6);
Result_32586 = copyString(LOC6.Tail);
LA1: ;
return Result_32586;
}
N_NIMCALL(NI32, nosgetLastModificationTime)(NimStringDesc* File_31203) {
NI32 Result_31204;
TY26595 F_31205;
NI H_31207;
NI64 LOC4;
Result_31204 = 0;
memset((void*)&F_31205, 0, sizeof(F_31205));
H_31207 = 0;
H_31207 = Dl_26612(File_31203->data, &F_31205);
if (!(H_31207 == -1)) goto LA2;
nosOSError(((NimStringDesc*) &TMP190635));
LA2: ;
LOC4 = Rdfiletime_26651(F_31205.Ftlastwritetime);
Result_31204 = Wintimetounixtime_28261(LOC4);
Dl_26622(H_31207);
return Result_31204;
}
N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* A_31803, NimStringDesc* B_31804) {
NIM_BOOL Result_31805;
NI32 LOC1;
NI32 LOC2;
NI64 LOC3;
Result_31805 = 0;
LOC1 = nosgetLastModificationTime(A_31803);
LOC2 = nosgetLastModificationTime(B_31804);
LOC3 = ntDiffTime(LOC1, LOC2);
Result_31805 = (0 < LOC3);
return Result_31805;
}
N_NIMCALL(void, nossleep)(NI Milsecs_36206) {
Dl_26663(((NI32) (Milsecs_36206)));
}
N_NOINLINE(void, osInit)(void) {
Envcomputed_33220 = NIM_FALSE;
asgnRefNoCycle((void**) &Environment_33238, (TY33221*) newSeq(NTI33221, 0));
}

