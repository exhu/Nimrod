/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
typedef struct TY37422 TY37422;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY444 TY444;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY36578 TY36578;
typedef struct TY36715 TY36715;
typedef struct TY422 TY422;
typedef struct TY418 TY418;
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
struct TY444 {
  TY416 Sup;
};
struct TY36578 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TY36715 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
struct TY418 {
  TY416 Sup;
};
struct TY422 {
  TY418 Sup;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY37422 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_17104);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, raiseException)(E_Base* E_4604, NCSTRING Ename_4605);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_36714, TY36715* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationFilename)(void);
N_NIMCALL(NimStringDesc*, Getapplaux_39801)(NimStringDesc* Procpath_39803);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1347);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17225, NI Newlen_17226);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NI, Searchextpos_36678)(NimStringDesc* S_36680);
N_NIMCALL(NimStringDesc*, Normext_36668)(NimStringDesc* Ext_36670);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_34604);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_36403, NimStringDesc* Tail_36404);
N_NIMCALL(void, Rawcreatedir_38423)(NimStringDesc* Dir_38425);
N_NIMCALL(NI, Findenvvar_37602)(NimStringDesc* Key_37604);
N_NIMCALL(void, Getenvvarsc_37442)(void);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_17235, NI Elemsize_17236);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_23769, NimStringDesc* Prefix_23770);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_24227, NIM_CHAR Sub_24228, NI Start_24229);
N_NIMCALL(NimStringDesc*, Getenv_37625)(NimStringDesc* Key_37627);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_37065, NimStringDesc* Pathb_37066);
N_NIMCALL(NI, Cmp_1319)(NimStringDesc* X_1321, NimStringDesc* Y_1322);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_22595, NimStringDesc* B_22596);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_36577, TY36578* Result);
N_NIMCALL(NI64, ntDiffTime)(NI A_26635, NI B_26636);
N_NIMCALL(NI, nosgetLastModificationTime)(NimStringDesc* File_35403);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
STRING_LITERAL(TMP193644, "invalid index", 13);
STRING_LITERAL(TMP193648, "", 0);
STRING_LITERAL(TMP193649, "/proc/self/exe", 14);
STRING_LITERAL(TMP193652, "unknown OS error", 16);
STRING_LITERAL(TMP193718, "HOME", 4);
STRING_LITERAL(TMP193719, "/.config/", 9);
NIM_BOOL Envcomputed_37421;
TY37422* Environment_37439;
extern TNimType* NTI37422; /* seq[string] */
extern TY10790 Gch_10808;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType* NTI39611; /* ref EInvalidIndex */
extern TNimType* NTI444; /* EInvalidIndex */
extern TNimType* NTI34803; /* ref EOS */
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
N_NIMCALL(NI, Paramcount_39628)(void) {
NI Result_39630;
Result_39630 = 0;
Result_39630 = (NI64)(((NI) (cmdCount)) - 1);
goto BeforeRet;
BeforeRet: ;
return Result_39630;
}
N_NIMCALL(NimStringDesc*, Paramstr_39603)(NI I_39605) {
NimStringDesc* Result_39606;
NIM_BOOL LOC2;
TY444* E_39612;
Result_39606 = 0;
LOC2 = (I_39605 < ((NI) (cmdCount)));
if (!(LOC2)) goto LA3;
LOC2 = (0 <= I_39605);
LA3: ;
if (!LOC2) goto LA4;
Result_39606 = cstrToNimstr(cmdLine[(I_39605)-0]);
goto BeforeRet;
LA4: ;
E_39612 = 0;
E_39612 = (TY444*) newObj(NTI39611, sizeof(TY444));
(*E_39612).Sup.Sup.Sup.m_type = NTI444;
asgnRefNoCycle((void**) &(*E_39612).Sup.Sup.message, copyString(((NimStringDesc*) &TMP193644)));
raiseException((E_Base*)E_39612, "EInvalidIndex");
BeforeRet: ;
return Result_39606;
}
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_34856) {
NimStringDesc* Result_34857;
Result_34857 = 0;
Result_34857 = copyString(Path_34856);
return Result_34857;
}
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_36577, TY36578* Result) {
NI Seppos_36582;
NI I_36592;
NI HEX3Atmp_36608;
NI Res_36610;
memset((void*)Result, 0, sizeof((*Result)));
Seppos_36582 = 0;
Seppos_36582 = -1;
I_36592 = 0;
HEX3Atmp_36608 = 0;
HEX3Atmp_36608 = (NI64)(Path_36577->Sup.len - 1);
Res_36610 = 0;
Res_36610 = HEX3Atmp_36608;
while (1) {
if (!(0 <= Res_36610)) goto LA1;
I_36592 = Res_36610;
if (!(((NU8)(Path_36577->data[I_36592])) == ((NU8)(47)) || ((NU8)(Path_36577->data[I_36592])) == ((NU8)(47)))) goto LA3;
Seppos_36582 = I_36592;
goto LA1;
LA3: ;
Res_36610 -= 1;
} LA1: ;
if (!(0 <= Seppos_36582)) goto LA6;
unsureAsgnRef((void**) &(*Result).Head, copyStrLast(Path_36577, 0, (NI64)(Seppos_36582 - 1)));
unsureAsgnRef((void**) &(*Result).Tail, copyStr(Path_36577, (NI64)(Seppos_36582 + 1)));
goto LA5;
LA6: ;
unsureAsgnRef((void**) &(*Result).Head, copyString(((NimStringDesc*) &TMP193648)));
unsureAsgnRef((void**) &(*Result).Tail, copyString(Path_36577));
LA5: ;
}
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_36714, TY36715* Result) {
NIM_BOOL LOC2;
NI Seppos_36739;
NI Dotpos_36742;
NI I_36752;
NI HEX3Atmp_36774;
NI Res_36776;
NIM_BOOL LOC11;
memset((void*)Result, 0, sizeof((*Result)));
LOC2 = (Path_36714->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_36714->data[(NI64)(Path_36714->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Path_36714->data[(NI64)(Path_36714->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
unsureAsgnRef((void**) &(*Result).Dir, copyString(Path_36714));
unsureAsgnRef((void**) &(*Result).Name, copyString(((NimStringDesc*) &TMP193648)));
unsureAsgnRef((void**) &(*Result).Ext, copyString(((NimStringDesc*) &TMP193648)));
goto LA1;
LA4: ;
Seppos_36739 = 0;
Seppos_36739 = -1;
Dotpos_36742 = 0;
Dotpos_36742 = Path_36714->Sup.len;
I_36752 = 0;
HEX3Atmp_36774 = 0;
HEX3Atmp_36774 = (NI64)(Path_36714->Sup.len - 1);
Res_36776 = 0;
Res_36776 = HEX3Atmp_36774;
while (1) {
if (!(0 <= Res_36776)) goto LA6;
I_36752 = Res_36776;
if (!((NU8)(Path_36714->data[I_36752]) == (NU8)(46))) goto LA8;
LOC11 = (Dotpos_36742 == Path_36714->Sup.len);
if (!(LOC11)) goto LA12;
LOC11 = (0 < I_36752);
LA12: ;
if (!LOC11) goto LA13;
Dotpos_36742 = I_36752;
LA13: ;
goto LA7;
LA8: ;
if (!(((NU8)(Path_36714->data[I_36752])) == ((NU8)(47)) || ((NU8)(Path_36714->data[I_36752])) == ((NU8)(47)))) goto LA15;
Seppos_36739 = I_36752;
goto LA6;
goto LA7;
LA15: ;
LA7: ;
Res_36776 -= 1;
} LA6: ;
unsureAsgnRef((void**) &(*Result).Dir, copyStrLast(Path_36714, 0, (NI64)(Seppos_36739 - 1)));
unsureAsgnRef((void**) &(*Result).Name, copyStrLast(Path_36714, (NI64)(Seppos_36739 + 1), (NI64)(Dotpos_36742 - 1)));
unsureAsgnRef((void**) &(*Result).Ext, copyStr(Path_36714, Dotpos_36742));
LA1: ;
}
N_NIMCALL(NimStringDesc*, Getapplaux_39801)(NimStringDesc* Procpath_39803) {
NimStringDesc* Result_39804;
NI Len_39805;
Result_39804 = 0;
Result_39804 = mnewString(256);
Len_39805 = 0;
Len_39805 = readlink(Procpath_39803->data, Result_39804->data, 256);
if (!(256 < Len_39805)) goto LA2;
Result_39804 = mnewString((NI64)(Len_39805 + 1));
Len_39805 = readlink(Procpath_39803->data, Result_39804->data, Len_39805);
LA2: ;
Result_39804 = setLengthStr(Result_39804, Len_39805);
return Result_39804;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationFilename)(void) {
NimStringDesc* Result_40203;
Result_40203 = 0;
Result_40203 = Getapplaux_39801(((NimStringDesc*) &TMP193649));
return Result_40203;
}
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void) {
NimStringDesc* Result_40403;
NimStringDesc* LOC1;
TY36715 LOC2;
Result_40403 = 0;
LOC1 = nosgetApplicationFilename();
nossplitFile(LOC1, &LOC2);
Result_40403 = copyString(LOC2.Dir);
return Result_40403;
}
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_35003) {
NIM_BOOL Result_35004;
struct stat Res_35005;
NIM_BOOL LOC1;
int LOC2;
Result_35004 = 0;
memset((void*)&Res_35005, 0, sizeof(Res_35005));
LOC2 = stat(Filename_35003->data, &Res_35005);
LOC1 = (((NI32) 0) <= LOC2);
if (!(LOC1)) goto LA3;
LOC1 = S_ISREG(Res_35005.st_mode);
LA3: ;
Result_35004 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_35004;
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
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_36403, NimStringDesc* Tail_36404) {
NimStringDesc* Result_36405;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
Result_36405 = 0;
if (!(Head_36403->Sup.len == 0)) goto LA2;
Result_36405 = copyString(Tail_36404);
goto LA1;
LA2: ;
if (!(((NU8)(Head_36403->data[(NI64)(Head_36403->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Head_36403->data[(NI64)(Head_36403->Sup.len - 1)])) == ((NU8)(47)))) goto LA4;
if (!(((NU8)(Tail_36404->data[0])) == ((NU8)(47)) || ((NU8)(Tail_36404->data[0])) == ((NU8)(47)))) goto LA7;
LOC10 = copyStr(Tail_36404, 1);
LOC9 = rawNewString(Head_36403->Sup.len + LOC10->Sup.len + 0);
appendString(LOC9, Head_36403);
appendString(LOC9, LOC10);
Result_36405 = LOC9;
goto LA6;
LA7: ;
LOC11 = rawNewString(Head_36403->Sup.len + Tail_36404->Sup.len + 0);
appendString(LOC11, Head_36403);
appendString(LOC11, Tail_36404);
Result_36405 = LOC11;
LA6: ;
goto LA1;
LA4: ;
if (!(((NU8)(Tail_36404->data[0])) == ((NU8)(47)) || ((NU8)(Tail_36404->data[0])) == ((NU8)(47)))) goto LA13;
LOC15 = rawNewString(Head_36403->Sup.len + Tail_36404->Sup.len + 0);
appendString(LOC15, Head_36403);
appendString(LOC15, Tail_36404);
Result_36405 = LOC15;
goto LA12;
LA13: ;
LOC16 = rawNewString(Head_36403->Sup.len + Tail_36404->Sup.len + 1);
appendString(LOC16, Head_36403);
appendChar(LOC16, 47);
appendString(LOC16, Tail_36404);
Result_36405 = LOC16;
LA12: ;
LA1: ;
return Result_36405;
}
N_NIMCALL(NI, Searchextpos_36678)(NimStringDesc* S_36680) {
NI Result_36681;
NI I_36691;
NI HEX3Atmp_36707;
NI Res_36709;
Result_36681 = 0;
Result_36681 = -1;
I_36691 = 0;
HEX3Atmp_36707 = 0;
HEX3Atmp_36707 = (NI64)(S_36680->Sup.len - 1);
Res_36709 = 0;
Res_36709 = HEX3Atmp_36707;
while (1) {
if (!(1 <= Res_36709)) goto LA1;
I_36691 = Res_36709;
if (!((NU8)(S_36680->data[I_36691]) == (NU8)(46))) goto LA3;
Result_36681 = I_36691;
goto LA1;
goto LA2;
LA3: ;
if (!(((NU8)(S_36680->data[I_36691])) == ((NU8)(47)) || ((NU8)(S_36680->data[I_36691])) == ((NU8)(47)))) goto LA5;
goto LA1;
goto LA2;
LA5: ;
LA2: ;
Res_36709 -= 1;
} LA1: ;
return Result_36681;
}
N_NIMCALL(NimStringDesc*, Normext_36668)(NimStringDesc* Ext_36670) {
NimStringDesc* Result_36671;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
Result_36671 = 0;
LOC2 = ((Ext_36670) && (Ext_36670)->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = ((NU8)(Ext_36670->data[0]) == (NU8)(46));
LA3: ;
if (!LOC2) goto LA4;
Result_36671 = copyString(Ext_36670);
goto LA1;
LA4: ;
LOC6 = rawNewString(Ext_36670->Sup.len + 1);
appendChar(LOC6, 46);
appendString(LOC6, Ext_36670);
Result_36671 = LOC6;
LA1: ;
return Result_36671;
}
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37020, NimStringDesc* Ext_37021) {
NimStringDesc* Result_37022;
NI Extpos_37023;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
Result_37022 = 0;
Extpos_37023 = 0;
Extpos_37023 = Searchextpos_36678(Filename_37020);
if (!(Extpos_37023 < 0)) goto LA2;
LOC5 = Normext_36668(Ext_37021);
LOC4 = rawNewString(Filename_37020->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_37020);
appendString(LOC4, LOC5);
Result_37022 = LOC4;
goto LA1;
LA2: ;
LOC7 = copyStrLast(Filename_37020, 0, (NI64)(Extpos_37023 - 1));
LOC8 = Normext_36668(Ext_37021);
LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
Result_37022 = LOC6;
LA1: ;
return Result_37022;
}
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_34604) {
TY422* E_34804;
NCSTRING LOC8;
TY422* E_34821;
TY422* E_34838;
if (!(Msg_34604->Sup.len == 0)) goto LA2;
if (!!((errno == ((NI32) 0)))) goto LA5;
E_34804 = 0;
E_34804 = (TY422*) newObj(NTI34803, sizeof(TY422));
(*E_34804).Sup.Sup.Sup.Sup.m_type = NTI422;
LOC8 = strerror(errno);
asgnRefNoCycle((void**) &(*E_34804).Sup.Sup.Sup.message, cstrToNimstr(LOC8));
raiseException((E_Base*)E_34804, "EOS");
goto LA4;
LA5: ;
E_34821 = 0;
E_34821 = (TY422*) newObj(NTI34803, sizeof(TY422));
(*E_34821).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_34821).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP193652)));
raiseException((E_Base*)E_34821, "EOS");
LA4: ;
goto LA1;
LA2: ;
E_34838 = 0;
E_34838 = (TY422*) newObj(NTI34803, sizeof(TY422));
(*E_34838).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_34838).Sup.Sup.Sup.message, copyString(Msg_34604));
raiseException((E_Base*)E_34838, "EOS");
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
NimStringDesc* Result_36010;
NCSTRING LOC2;
NI LOC5;
Result_36010 = 0;
Result_36010 = mnewString(512);
LOC2 = getcwd(Result_36010->data, 512);
if (!!((LOC2 == NIM_NIL))) goto LA3;
LOC5 = strlen(Result_36010->data);
Result_36010 = setLengthStr(Result_36010, LOC5);
goto LA1;
LA3: ;
nosOSError(((NimStringDesc*) &TMP193648));
LA1: ;
return Result_36010;
}
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_36487, NI Parts_36487Len0) {
NimStringDesc* Result_36488;
NI I_36511;
NI HEX3Atmp_36513;
NI Res_36515;
Result_36488 = 0;
Result_36488 = copyString(Parts_36487[0]);
I_36511 = 0;
HEX3Atmp_36513 = 0;
HEX3Atmp_36513 = (Parts_36487Len0-1);
Res_36515 = 0;
Res_36515 = 1;
while (1) {
if (!(Res_36515 <= HEX3Atmp_36513)) goto LA1;
I_36511 = Res_36515;
Result_36488 = nosJoinPath(Result_36488, Parts_36487[I_36511]);
Res_36515 += 1;
} LA1: ;
return Result_36488;
}
N_NIMCALL(void, Rawcreatedir_38423)(NimStringDesc* Dir_38425) {
NIM_BOOL LOC2;
int LOC3;
LOC3 = mkdir(Dir_38425->data, 457);
LOC2 = !((LOC3 == ((NI32) 0)));
if (!(LOC2)) goto LA4;
LOC2 = !((errno == EEXIST));
LA4: ;
if (!LOC2) goto LA5;
nosOSError(((NimStringDesc*) &TMP193648));
LA5: ;
}
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_38603) {
NI I_38613;
NI HEX3Atmp_38627;
NI Res_38629;
NimStringDesc* LOC5;
I_38613 = 0;
HEX3Atmp_38627 = 0;
HEX3Atmp_38627 = (NI64)(Dir_38603->Sup.len - 1);
Res_38629 = 0;
Res_38629 = 1;
while (1) {
if (!(Res_38629 <= HEX3Atmp_38627)) goto LA1;
I_38613 = Res_38629;
if (!(((NU8)(Dir_38603->data[I_38613])) == ((NU8)(47)) || ((NU8)(Dir_38603->data[I_38613])) == ((NU8)(47)))) goto LA3;
LOC5 = copyStrLast(Dir_38603, 0, (NI64)(I_38613 - 1));
Rawcreatedir_38423(LOC5);
LA3: ;
Res_38629 += 1;
} LA1: ;
Rawcreatedir_38423(Dir_38603);
}
N_NIMCALL(void, Getenvvarsc_37442)(void) {
NI I_37444;
NimStringDesc* LOC8;
if (!!(Envcomputed_37421)) goto LA2;
I_37444 = 0;
I_37444 = 0;
while (1) {
if (!(environ[(I_37444)-0] == NIM_NIL)) goto LA6;
goto LA4;
LA6: ;
LOC8 = cstrToNimstr(environ[(I_37444)-0]);
Environment_37439 = (TY37422*) incrSeq(&(Environment_37439)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_37439->data[Environment_37439->Sup.len-1], copyString(LOC8));
I_37444 += 1;
} LA4: ;
Envcomputed_37421 = NIM_TRUE;
LA2: ;
}
N_NIMCALL(NI, Findenvvar_37602)(NimStringDesc* Key_37604) {
NI Result_37605;
NimStringDesc* Temp_37610;
NimStringDesc* LOC1;
NI I_37618;
NI HEX3Atmp_37620;
NI Res_37622;
NIM_BOOL LOC4;
Result_37605 = 0;
Getenvvarsc_37442();
Temp_37610 = 0;
LOC1 = rawNewString(Key_37604->Sup.len + 1);
appendString(LOC1, Key_37604);
appendChar(LOC1, 61);
Temp_37610 = LOC1;
I_37618 = 0;
HEX3Atmp_37620 = 0;
HEX3Atmp_37620 = (Environment_37439->Sup.len-1);
Res_37622 = 0;
Res_37622 = 0;
while (1) {
if (!(Res_37622 <= HEX3Atmp_37620)) goto LA2;
I_37618 = Res_37622;
LOC4 = nsuStartsWith(Environment_37439->data[I_37618], Temp_37610);
if (!LOC4) goto LA5;
Result_37605 = I_37618;
goto BeforeRet;
LA5: ;
Res_37622 += 1;
} LA2: ;
Result_37605 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_37605;
}
N_NIMCALL(void, Putenv_37639)(NimStringDesc* Key_37641, NimStringDesc* Val_37642) {
NI Indx_37643;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
int LOC7;
Indx_37643 = 0;
Indx_37643 = Findenvvar_37602(Key_37641);
if (!(0 <= Indx_37643)) goto LA2;
LOC4 = rawNewString(Key_37641->Sup.len + Val_37642->Sup.len + 1);
appendString(LOC4, Key_37641);
appendChar(LOC4, 61);
appendString(LOC4, Val_37642);
asgnRefNoCycle((void**) &Environment_37439->data[Indx_37643], LOC4);
goto LA1;
LA2: ;
LOC5 = rawNewString(Key_37641->Sup.len + Val_37642->Sup.len + 1);
appendString(LOC5, Key_37641);
appendChar(LOC5, 61);
appendString(LOC5, Val_37642);
Environment_37439 = (TY37422*) incrSeq(&(Environment_37439)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_37439->data[Environment_37439->Sup.len-1], copyString(LOC5));
Indx_37643 = (Environment_37439->Sup.len-1);
LA1: ;
LOC7 = putenv(Environment_37439->data[Indx_37643]->data);
if (!!((LOC7 == ((NI32) 0)))) goto LA8;
nosOSError(((NimStringDesc*) &TMP193648));
LA8: ;
}
N_NIMCALL(NimStringDesc*, Getenv_37625)(NimStringDesc* Key_37627) {
NimStringDesc* Result_37628;
NI I_37629;
NI LOC4;
NCSTRING Env_37632;
Result_37628 = 0;
I_37629 = 0;
I_37629 = Findenvvar_37602(Key_37627);
if (!(0 <= I_37629)) goto LA2;
LOC4 = nsuFindChar(Environment_37439->data[I_37629], 61, 0);
Result_37628 = copyStr(Environment_37439->data[I_37629], (NI64)(LOC4 + 1));
goto BeforeRet;
goto LA1;
LA2: ;
Env_37632 = 0;
Env_37632 = getenv(Key_37627->data);
if (!(Env_37632 == NIM_NIL)) goto LA6;
Result_37628 = copyString(((NimStringDesc*) &TMP193648));
goto BeforeRet;
LA6: ;
Result_37628 = cstrToNimstr(Env_37632);
LA1: ;
BeforeRet: ;
return Result_37628;
}
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
NimStringDesc* Result_39403;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_39403 = 0;
LOC2 = Getenv_37625(((NimStringDesc*) &TMP193718));
LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP193719));
Result_39403 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_39403;
}
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_37065, NimStringDesc* Pathb_37066) {
NI Result_37067;
Result_37067 = 0;
if (!NIM_TRUE) goto LA2;
Result_37067 = Cmp_1319(Patha_37065, Pathb_37066);
goto LA1;
LA2: ;
Result_37067 = nsuCmpIgnoreCase(Patha_37065, Pathb_37066);
LA1: ;
return Result_37067;
}
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_37070, NimStringDesc* Path2_37071) {
NIM_BOOL Result_37072;
struct stat A_37073;
struct stat B_37074;
NIM_BOOL LOC2;
int LOC3;
int LOC5;
NI LOC8;
NIM_BOOL LOC9;
Result_37072 = 0;
memset((void*)&A_37073, 0, sizeof(A_37073));
memset((void*)&B_37074, 0, sizeof(B_37074));
LOC3 = stat(Path1_37070->data, &A_37073);
LOC2 = (LOC3 < ((NI32) 0));
if (LOC2) goto LA4;
LOC5 = stat(Path2_37071->data, &B_37074);
LOC2 = (LOC5 < ((NI32) 0));
LA4: ;
if (!LOC2) goto LA6;
LOC8 = noscmpPaths(Path1_37070, Path2_37071);
Result_37072 = (LOC8 == 0);
goto LA1;
LA6: ;
LOC9 = (A_37073.st_dev == B_37074.st_dev);
if (!(LOC9)) goto LA10;
LOC9 = (A_37073.st_ino == B_37074.st_ino);
LA10: ;
Result_37072 = LOC9;
LA1: ;
return Result_37072;
}
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_37044, NimStringDesc* Ext_37045) {
NimStringDesc* Result_37046;
NI Extpos_37047;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_37046 = 0;
Extpos_37047 = 0;
Extpos_37047 = Searchextpos_36678(Filename_37044);
if (!(Extpos_37047 < 0)) goto LA2;
LOC5 = Normext_36668(Ext_37045);
LOC4 = rawNewString(Filename_37044->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_37044);
appendString(LOC4, LOC5);
Result_37046 = LOC4;
goto LA1;
LA2: ;
Result_37046 = copyString(Filename_37044);
LA1: ;
return Result_37046;
}
N_NIMCALL(NimStringDesc*, HEX2F_36518)(NimStringDesc* Head_36520, NimStringDesc* Tail_36521) {
NimStringDesc* Result_36522;
Result_36522 = 0;
Result_36522 = nosJoinPath(Head_36520, Tail_36521);
goto BeforeRet;
BeforeRet: ;
return Result_36522;
}
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_36785) {
NimStringDesc* Result_36786;
NIM_BOOL LOC2;
TY36578 LOC6;
Result_36786 = 0;
LOC2 = (Path_36785->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_36785->data[(NI64)(Path_36785->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Path_36785->data[(NI64)(Path_36785->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
Result_36786 = copyString(((NimStringDesc*) &TMP193648));
goto LA1;
LA4: ;
nosSplitPath(Path_36785, &LOC6);
Result_36786 = copyString(LOC6.Tail);
LA1: ;
return Result_36786;
}
N_NIMCALL(NI, nosgetLastModificationTime)(NimStringDesc* File_35403) {
NI Result_35404;
struct stat Res_35405;
int LOC2;
Result_35404 = 0;
memset((void*)&Res_35405, 0, sizeof(Res_35405));
LOC2 = stat(File_35403->data, &Res_35405);
if (!(LOC2 < ((NI32) 0))) goto LA3;
nosOSError(((NimStringDesc*) &TMP193648));
LA3: ;
Result_35404 = Res_35405.st_mtime;
goto BeforeRet;
BeforeRet: ;
return Result_35404;
}
N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* A_36003, NimStringDesc* B_36004) {
NIM_BOOL Result_36005;
NI LOC1;
NI LOC2;
NI64 LOC3;
Result_36005 = 0;
LOC1 = nosgetLastModificationTime(A_36003);
LOC2 = nosgetLastModificationTime(B_36004);
LOC3 = ntDiffTime(LOC1, LOC2);
Result_36005 = (0 < LOC3);
return Result_36005;
}
N_NIMCALL(TY37422*, nosparseCmdLine)(NimStringDesc* C_38634) {
TY37422* Result_38636;
NI I_38653;
NimStringDesc* A_38654;
NIM_BOOL LOC3;
NIM_CHAR Delim_38671;
NIM_BOOL LOC6;
Result_38636 = 0;
Result_38636 = (TY37422*) newSeq(NTI37422, 0);
I_38653 = 0;
I_38653 = 0;
A_38654 = 0;
A_38654 = copyString(((NimStringDesc*) &TMP193648));
while (1) {
A_38654 = setLengthStr(A_38654, 0);
while (1) {
LOC3 = ((NU8)(C_38634->data[I_38653]) == (NU8)(32));
if (LOC3) goto LA4;
LOC3 = ((NU8)(C_38634->data[I_38653]) == (NU8)(9));
LA4: ;
if (!LOC3) goto LA2;
I_38653 += 1;
} LA2: ;
switch (((NU8)(C_38634->data[I_38653]))) {
case 39:
case 34:
Delim_38671 = 0;
Delim_38671 = C_38634->data[I_38653];
I_38653 += 1;
while (1) {
LOC6 = !(((NU8)(C_38634->data[I_38653]) == (NU8)(0)));
if (!(LOC6)) goto LA7;
LOC6 = !(((NU8)(C_38634->data[I_38653]) == (NU8)(Delim_38671)));
LA7: ;
if (!LOC6) goto LA5;
A_38654 = addChar(A_38654, C_38634->data[I_38653]);
I_38653 += 1;
} LA5: ;
if (!!(((NU8)(C_38634->data[I_38653]) == (NU8)(0)))) goto LA9;
I_38653 += 1;
LA9: ;
break;
case 0:
goto LA1;
break;
default:
while (1) {
if (!((NU8)(32) < (NU8)(C_38634->data[I_38653]))) goto LA11;
A_38654 = addChar(A_38654, C_38634->data[I_38653]);
I_38653 += 1;
} LA11: ;
break;
}
Result_38636 = (TY37422*) incrSeq(&(Result_38636)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_38636->data[Result_38636->Sup.len-1], copyString(A_38654));
} LA1: ;
return Result_38636;
}
N_NIMCALL(void, nossleep)(NI Milsecs_40406) {
struct timespec A_40407;
struct timespec B_40408;
int LOC1;
memset((void*)&A_40407, 0, sizeof(A_40407));
memset((void*)&B_40408, 0, sizeof(B_40408));
A_40407.tv_sec = ((NI) ((NI64)(Milsecs_40406 / 1000)));
A_40407.tv_nsec = (NI64)((NI64)(Milsecs_40406 % 1000) * 1000);
LOC1 = nanosleep(&A_40407, &B_40408);
}
N_NOINLINE(void, osInit)(void) {
Envcomputed_37421 = NIM_FALSE;
asgnRefNoCycle((void**) &Environment_37439, (TY37422*) newSeq(NTI37422, 0));
}

