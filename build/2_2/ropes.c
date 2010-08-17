/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50008 TY50008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY50445 TY50445;
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
struct TNimObject {
TNimType* m_type;
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
struct TY50008 {
  TNimObject Sup;
TY50008* Left;
TY50008* Right;
NI Length;
NimStringDesc* Data;
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
typedef TY50008* TY50446[1];
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY50445 {
  TGenericSeq Sup;
  TY50008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1347);
N_NIMCALL(void, Newrecropetostr_50427)(NimStringDesc** Result_50430, NI* Resultlen_50432, TY50008* R_50433);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12603, NI Len_12604);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_17235, NI Elemsize_17236);
N_NIMCALL(TY50008*, Insertincache_50241)(NimStringDesc* S_50243, TY50008* Tree_50244);
N_NIMCALL(TY50008*, Newrope_50105)(NimStringDesc* Data_50107);
N_NIMCALL(TY50008*, Splay_50179)(NimStringDesc* S_50181, TY50008* Tree_50182, NI* Cmpres_50184);
N_NIMCALL(NI, Cmp_1319)(NimStringDesc* X_1321, NimStringDesc* Y_1322);
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_17011, NimStringDesc* B_17012);
N_NIMCALL(TY50008*, Con_50019)(TY50008* A_50021, NimStringDesc* B_50022);
N_NIMCALL(TY50008*, Con_50015)(TY50008* A_50017, TY50008* B_50018);
N_NIMCALL(TY50008*, Torope_50046)(NimStringDesc* S_50048);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(void, App_50036)(TY50008** A_50039, NimStringDesc* B_50040);
N_NIMCALL(void, App_50031)(TY50008** A_50034, TY50008* B_50035);
N_NIMCALL(void, Internalerror_45571)(NimStringDesc* Errmsg_45573);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_17803);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_17867);
N_NIMCALL(TY50008*, Ropef_50069)(NimStringDesc* Frmt_50071, TY50008** Args_50073, NI Args_50073Len0);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF X_17860);
N_NIMCALL(int, Crcfromfile_48029)(NimStringDesc* Filename_48031);
N_NIMCALL(int, Crcfromrope_51052)(TY50008* R_51054);
N_NIMCALL(int, Newcrcfromropeaux_50968)(TY50008* R_50970, int Startval_50971);
N_NIMCALL(int, Updatecrc32_48018)(NIM_CHAR Val_48020, int Crc_48021);
N_NIMCALL(void, Writerope_50058)(TY50008* Head_50060, NimStringDesc* Filename_50061);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Newwriteroperec_50666)(FILE** F_50669, TY50008* C_50670);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
N_NIMCALL(void, Rawmessage_45553)(NU8 Msg_45555, NimStringDesc* Arg_45556);
N_NIMCALL(TY50008*, Pop_50466)(TY50445** S_50471);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_17403, NI Elemsize_17404, NI Newlen_17405);
STRING_LITERAL(TMP193892, "", 0);
STRING_LITERAL(TMP194232, "$", 1);
STRING_LITERAL(TMP194233, "ropes: invalid format string $", 30);
TY50008* Cache_50126;
NI Misses_50127;
NI Hits_50128;
TY50008* N_50129;
extern TNimType* NTI50006; /* PRope */
extern TY10790 Gch_10808;
extern TNimType* NTI50008; /* TRope */
extern TNimType* NTI50445; /* seq[PRope] */
extern NimStringDesc* Tnl_49573;
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
N_NIMCALL(void, Newrecropetostr_50427)(NimStringDesc** Result_50430, NI* Resultlen_50432, TY50008* R_50433) {
TY50445* Stack_50448;
TY50446 LOC1;
TY50008* It_50497;
Stack_50448 = 0;
Stack_50448 = (TY50445*) newSeq(NTI50445, 1);
LOC1[0] = R_50433;
asgnRefNoCycle((void**) &Stack_50448->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_50448->Sup.len)) goto LA2;
It_50497 = 0;
It_50497 = Pop_50466(&Stack_50448);
while (1) {
if (!((*It_50497).Data == NIM_NIL)) goto LA3;
Stack_50448 = (TY50445*) incrSeq(&(Stack_50448)->Sup, sizeof(TY50008*));
asgnRefNoCycle((void**) &Stack_50448->data[Stack_50448->Sup.len-1], (*It_50497).Right);
It_50497 = (*It_50497).Left;
} LA3: ;
memcpy(((void*) (&(*Result_50430)->data[(*Resultlen_50432)])), ((void*) (&(*It_50497).Data->data[0])), (*It_50497).Length);
(*Resultlen_50432) += (*It_50497).Length;
} LA2: ;
}
N_NIMCALL(NimStringDesc*, Ropetostr_50066)(TY50008* P_50068) {
NimStringDesc* Result_50539;
NI Resultlen_50551;
Result_50539 = 0;
if (!(P_50068 == NIM_NIL)) goto LA2;
Result_50539 = copyString(((NimStringDesc*) &TMP193892));
goto LA1;
LA2: ;
Result_50539 = mnewString((*P_50068).Length);
Resultlen_50551 = 0;
Resultlen_50551 = 0;
Newrecropetostr_50427(&Result_50539, &Resultlen_50551, P_50068);
LA1: ;
return Result_50539;
}
N_NIMCALL(TY50008*, Newrope_50105)(NimStringDesc* Data_50107) {
TY50008* Result_50108;
Result_50108 = 0;
Result_50108 = (TY50008*) newObj(NTI50006, sizeof(TY50008));
(*Result_50108).Sup.m_type = NTI50008;
if (!!((Data_50107 == NIM_NIL))) goto LA2;
(*Result_50108).Length = Data_50107->Sup.len;
asgnRefNoCycle((void**) &(*Result_50108).Data, copyString(Data_50107));
LA2: ;
return Result_50108;
}
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_17011, NimStringDesc* B_17012) {
NI Result_17013;
int LOC10;
Result_17013 = 0;
if (!(A_17011 == B_17012)) goto LA2;
Result_17013 = 0;
goto BeforeRet;
LA2: ;
if (!(A_17011 == NIM_NIL)) goto LA5;
Result_17013 = -1;
goto BeforeRet;
LA5: ;
if (!(B_17012 == NIM_NIL)) goto LA8;
Result_17013 = 1;
goto BeforeRet;
LA8: ;
LOC10 = strcmp(((NCSTRING) ((*A_17011).data)), ((NCSTRING) ((*B_17012).data)));
Result_17013 = ((NI) (LOC10));
goto BeforeRet;
BeforeRet: ;
return Result_17013;
}
N_NIMCALL(TY50008*, Splay_50179)(NimStringDesc* S_50181, TY50008* Tree_50182, NI* Cmpres_50184) {
TY50008* Result_50185;
NI C_50186;
TY50008* T_50187;
TY50008* Le_50188;
TY50008* R_50189;
NIM_BOOL LOC6;
TY50008* Y_50203;
NIM_BOOL LOC16;
TY50008* Y_50228;
Result_50185 = 0;
C_50186 = 0;
T_50187 = 0;
T_50187 = Tree_50182;
asgnRefNoCycle((void**) &(*N_50129).Left, NIM_NIL);
asgnRefNoCycle((void**) &(*N_50129).Right, NIM_NIL);
Le_50188 = 0;
Le_50188 = N_50129;
R_50189 = 0;
R_50189 = N_50129;
while (1) {
C_50186 = Cmp_1319(S_50181, (*T_50187).Data);
if (!(C_50186 < 0)) goto LA3;
LOC6 = !(((*T_50187).Left == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = (cmpStrings(S_50181, (*(*T_50187).Left).Data) < 0);
LA7: ;
if (!LOC6) goto LA8;
Y_50203 = 0;
Y_50203 = (*T_50187).Left;
asgnRefNoCycle((void**) &(*T_50187).Left, (*Y_50203).Right);
asgnRefNoCycle((void**) &(*Y_50203).Right, T_50187);
T_50187 = Y_50203;
LA8: ;
if (!((*T_50187).Left == NIM_NIL)) goto LA11;
goto LA1;
LA11: ;
asgnRefNoCycle((void**) &(*R_50189).Left, T_50187);
R_50189 = T_50187;
T_50187 = (*T_50187).Left;
goto LA2;
LA3: ;
if (!(0 < C_50186)) goto LA13;
LOC16 = !(((*T_50187).Right == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = (cmpStrings((*(*T_50187).Right).Data, S_50181) < 0);
LA17: ;
if (!LOC16) goto LA18;
Y_50228 = 0;
Y_50228 = (*T_50187).Right;
asgnRefNoCycle((void**) &(*T_50187).Right, (*Y_50228).Left);
asgnRefNoCycle((void**) &(*Y_50228).Left, T_50187);
T_50187 = Y_50228;
LA18: ;
if (!((*T_50187).Right == NIM_NIL)) goto LA21;
goto LA1;
LA21: ;
asgnRefNoCycle((void**) &(*Le_50188).Right, T_50187);
Le_50188 = T_50187;
T_50187 = (*T_50187).Right;
goto LA2;
LA13: ;
goto LA1;
LA2: ;
} LA1: ;
(*Cmpres_50184) = C_50186;
asgnRefNoCycle((void**) &(*Le_50188).Right, (*T_50187).Left);
asgnRefNoCycle((void**) &(*R_50189).Left, (*T_50187).Right);
asgnRefNoCycle((void**) &(*T_50187).Left, (*N_50129).Right);
asgnRefNoCycle((void**) &(*T_50187).Right, (*N_50129).Left);
Result_50185 = T_50187;
return Result_50185;
}
N_NIMCALL(TY50008*, Insertincache_50241)(NimStringDesc* S_50243, TY50008* Tree_50244) {
TY50008* Result_50245;
TY50008* T_50246;
NI Cmp_50270;
Result_50245 = 0;
T_50246 = 0;
T_50246 = Tree_50244;
if (!(T_50246 == NIM_NIL)) goto LA2;
Result_50245 = Newrope_50105(S_50243);
if (!NIM_FALSE) goto LA5;
Misses_50127 += 1;
LA5: ;
goto BeforeRet;
LA2: ;
Cmp_50270 = 0;
T_50246 = Splay_50179(S_50243, T_50246, &Cmp_50270);
if (!(Cmp_50270 == 0)) goto LA8;
Result_50245 = T_50246;
if (!NIM_FALSE) goto LA11;
Hits_50128 += 1;
LA11: ;
goto LA7;
LA8: ;
if (!NIM_FALSE) goto LA14;
Misses_50127 += 1;
LA14: ;
Result_50245 = Newrope_50105(S_50243);
if (!(Cmp_50270 < 0)) goto LA17;
asgnRefNoCycle((void**) &(*Result_50245).Left, (*T_50246).Left);
asgnRefNoCycle((void**) &(*Result_50245).Right, T_50246);
asgnRefNoCycle((void**) &(*T_50246).Left, NIM_NIL);
goto LA16;
LA17: ;
asgnRefNoCycle((void**) &(*Result_50245).Right, (*T_50246).Right);
asgnRefNoCycle((void**) &(*Result_50245).Left, T_50246);
asgnRefNoCycle((void**) &(*T_50246).Right, NIM_NIL);
LA16: ;
LA7: ;
BeforeRet: ;
return Result_50245;
}
N_NIMCALL(TY50008*, Torope_50046)(NimStringDesc* S_50048) {
TY50008* Result_50318;
Result_50318 = 0;
if (!((S_50048) && (S_50048)->Sup.len == 0)) goto LA2;
Result_50318 = NIM_NIL;
goto LA1;
LA2: ;
if (!NIM_TRUE) goto LA4;
Result_50318 = Insertincache_50241(S_50048, Cache_50126);
asgnRefNoCycle((void**) &Cache_50126, Result_50318);
goto LA1;
LA4: ;
Result_50318 = Newrope_50105(S_50048);
LA1: ;
return Result_50318;
}
N_NIMCALL(TY50008*, Con_50015)(TY50008* A_50017, TY50008* B_50018) {
TY50008* Result_50558;
Result_50558 = 0;
if (!(A_50017 == NIM_NIL)) goto LA2;
Result_50558 = B_50018;
goto LA1;
LA2: ;
if (!(B_50018 == NIM_NIL)) goto LA4;
Result_50558 = A_50017;
goto LA1;
LA4: ;
Result_50558 = Newrope_50105(NIM_NIL);
(*Result_50558).Length = (NI64)((*A_50017).Length + (*B_50018).Length);
asgnRefNoCycle((void**) &(*Result_50558).Left, A_50017);
asgnRefNoCycle((void**) &(*Result_50558).Right, B_50018);
LA1: ;
return Result_50558;
}
N_NIMCALL(TY50008*, Con_50019)(TY50008* A_50021, NimStringDesc* B_50022) {
TY50008* Result_50585;
TY50008* LOC1;
Result_50585 = 0;
LOC1 = Torope_50046(B_50022);
Result_50585 = Con_50015(A_50021, LOC1);
return Result_50585;
}
N_NIMCALL(void, App_50036)(TY50008** A_50039, NimStringDesc* B_50040) {
unsureAsgnRef((void**) &(*A_50039), Con_50019((*A_50039), B_50040));
}
N_NIMCALL(void, App_50031)(TY50008** A_50034, TY50008* B_50035) {
unsureAsgnRef((void**) &(*A_50034), Con_50015((*A_50034), B_50035));
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
N_NIMCALL(TY50008*, Ropef_50069)(NimStringDesc* Frmt_50071, TY50008** Args_50073, NI Args_50073Len0) {
TY50008* Result_50765;
NI I_50766;
NI J_50767;
NI Length_50768;
NI Start_50769;
NI Num_50770;
NIM_BOOL LOC7;
NimStringDesc* LOC14;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NimStringDesc* LOC24;
Result_50765 = 0;
I_50766 = 0;
J_50767 = 0;
Length_50768 = 0;
Start_50769 = 0;
Num_50770 = 0;
I_50766 = 0;
Length_50768 = Frmt_50071->Sup.len;
Result_50765 = NIM_NIL;
Num_50770 = 0;
while (1) {
if (!(I_50766 <= (NI64)(Length_50768 - 1))) goto LA1;
if (!((NU8)(Frmt_50071->data[I_50766]) == (NU8)(36))) goto LA3;
I_50766 += 1;
switch (((NU8)(Frmt_50071->data[I_50766]))) {
case 36:
App_50036(&Result_50765, ((NimStringDesc*) &TMP194232));
I_50766 += 1;
break;
case 35:
I_50766 += 1;
App_50031(&Result_50765, Args_50073[Num_50770]);
Num_50770 += 1;
break;
case 48 ... 57:
J_50767 = 0;
while (1) {
J_50767 = (NI64)((NI64)((NI64)(J_50767 * 10) + ((NU8)(Frmt_50071->data[I_50766]))) - 48);
I_50766 += 1;
LOC7 = ((NI64)((NI64)(Length_50768 + 0) - 1) < I_50766);
if (LOC7) goto LA8;
LOC7 = !((((NU8)(Frmt_50071->data[I_50766])) >= ((NU8)(48)) && ((NU8)(Frmt_50071->data[I_50766])) <= ((NU8)(57))));
LA8: ;
if (!LOC7) goto LA9;
goto LA5;
LA9: ;
} LA5: ;
Num_50770 = J_50767;
if (!((NI64)((Args_50073Len0-1) + 1) < J_50767)) goto LA12;
LOC15 = nimIntToStr(J_50767);
LOC14 = rawNewString(LOC15->Sup.len + 30);
appendString(LOC14, ((NimStringDesc*) &TMP194233));
appendString(LOC14, LOC15);
Internalerror_45571(LOC14);
LA12: ;
App_50031(&Result_50765, Args_50073[(NI64)(J_50767 - 1)]);
break;
case 78:
case 110:
App_50036(&Result_50765, Tnl_49573);
I_50766 += 1;
break;
default:
LOC16 = rawNewString(31);
appendString(LOC16, ((NimStringDesc*) &TMP194233));
appendChar(LOC16, Frmt_50071->data[I_50766]);
Internalerror_45571(LOC16);
break;
}
LA3: ;
Start_50769 = I_50766;
while (1) {
if (!(I_50766 <= (NI64)(Length_50768 - 1))) goto LA17;
if (!!(((NU8)(Frmt_50071->data[I_50766]) == (NU8)(36)))) goto LA19;
I_50766 += 1;
goto LA18;
LA19: ;
goto LA17;
LA18: ;
} LA17: ;
if (!(Start_50769 <= (NI64)(I_50766 - 1))) goto LA22;
LOC24 = copyStrLast(Frmt_50071, Start_50769, (NI64)(I_50766 - 1));
App_50036(&Result_50765, LOC24);
LA22: ;
} LA1: ;
return Result_50765;
}
N_NIMCALL(TY50008*, Torope_50052)(NI64 I_50054) {
TY50008* Result_50628;
NimStringDesc* LOC1;
Result_50628 = 0;
LOC1 = nimInt64ToStr(I_50054);
Result_50628 = Torope_50046(LOC1);
return Result_50628;
}
N_NIMCALL(void, Appf_50074)(TY50008** C_50077, NimStringDesc* Frmt_50078, TY50008** Args_50080, NI Args_50080Len0) {
TY50008* LOC1;
LOC1 = Ropef_50069(Frmt_50078, Args_50080, Args_50080Len0);
App_50031(C_50077, LOC1);
}
N_NIMCALL(TY50008*, Con_50023)(NimStringDesc* A_50025, TY50008* B_50026) {
TY50008* Result_50590;
TY50008* LOC1;
Result_50590 = 0;
LOC1 = Torope_50046(A_50025);
Result_50590 = Con_50015(LOC1, B_50026);
return Result_50590;
}
N_NIMCALL(void, Prepend_50041)(TY50008** A_50044, TY50008* B_50045) {
unsureAsgnRef((void**) &(*A_50044), Con_50015(B_50045, (*A_50044)));
}
N_NIMCALL(TY50008*, Toropef_50049)(NF64 R_50051) {
TY50008* Result_50634;
NimStringDesc* LOC1;
Result_50634 = 0;
LOC1 = nimFloatToStr(((NF) (R_50051)));
Result_50634 = Torope_50046(LOC1);
return Result_50634;
}
N_NIMCALL(int, Newcrcfromropeaux_50968)(TY50008* R_50970, int Startval_50971) {
int Result_50972;
TY50445* Stack_50987;
TY50446 LOC1;
TY50008* It_51012;
NI I_51031;
NI L_51034;
Result_50972 = 0;
Stack_50987 = 0;
Stack_50987 = (TY50445*) newSeq(NTI50445, 1);
LOC1[0] = R_50970;
asgnRefNoCycle((void**) &Stack_50987->data[0], LOC1[0]);
Result_50972 = Startval_50971;
while (1) {
if (!(0 < Stack_50987->Sup.len)) goto LA2;
It_51012 = 0;
It_51012 = Pop_50466(&Stack_50987);
while (1) {
if (!((*It_51012).Data == NIM_NIL)) goto LA3;
Stack_50987 = (TY50445*) incrSeq(&(Stack_50987)->Sup, sizeof(TY50008*));
asgnRefNoCycle((void**) &Stack_50987->data[Stack_50987->Sup.len-1], (*It_51012).Right);
It_51012 = (*It_51012).Left;
} LA3: ;
I_51031 = 0;
I_51031 = 0;
L_51034 = 0;
L_51034 = (*It_51012).Data->Sup.len;
while (1) {
if (!(I_51031 < L_51034)) goto LA4;
Result_50972 = Updatecrc32_48018((*It_51012).Data->data[I_51031], Result_50972);
I_51031 += 1;
} LA4: ;
} LA2: ;
return Result_50972;
}
N_NIMCALL(int, Crcfromrope_51052)(TY50008* R_51054) {
int Result_51055;
Result_51055 = 0;
Result_51055 = Newcrcfromropeaux_50968(R_51054, ((NI32) -1));
return Result_51055;
}
N_NIMCALL(void, Newwriteroperec_50666)(FILE** F_50669, TY50008* C_50670) {
TY50445* Stack_50685;
TY50446 LOC1;
TY50008* It_50710;
Stack_50685 = 0;
Stack_50685 = (TY50445*) newSeq(NTI50445, 1);
LOC1[0] = C_50670;
asgnRefNoCycle((void**) &Stack_50685->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_50685->Sup.len)) goto LA2;
It_50710 = 0;
It_50710 = Pop_50466(&Stack_50685);
while (1) {
if (!((*It_50710).Data == NIM_NIL)) goto LA3;
Stack_50685 = (TY50445*) incrSeq(&(Stack_50685)->Sup, sizeof(TY50008*));
asgnRefNoCycle((void**) &Stack_50685->data[Stack_50685->Sup.len-1], (*It_50710).Right);
It_50710 = (*It_50710).Left;
} LA3: ;
Write_3658((*F_50669), (*It_50710).Data);
} LA2: ;
}
N_NIMCALL(void, Writerope_50058)(TY50008* Head_50060, NimStringDesc* Filename_50061) {
FILE* F_50746;
NIM_BOOL LOC2;
F_50746 = 0;
LOC2 = Open_3617(&F_50746, Filename_50061, ((NU8) 1), -1);
if (!LOC2) goto LA3;
if (!!((Head_50060 == NIM_NIL))) goto LA6;
Newwriteroperec_50666(&F_50746, Head_50060);
LA6: ;
fclose(F_50746);
goto LA1;
LA3: ;
Rawmessage_45553(((NU8) 2), Filename_50061);
LA1: ;
}
N_NIMCALL(NIM_BOOL, Writeropeifnotequal_50062)(TY50008* R_50064, NimStringDesc* Filename_50065) {
NIM_BOOL Result_51060;
int C_51061;
int LOC2;
Result_51060 = 0;
C_51061 = 0;
C_51061 = Crcfromfile_48029(Filename_50065);
LOC2 = Crcfromrope_51052(R_50064);
if (!!((C_51061 == LOC2))) goto LA3;
Writerope_50058(R_50064, Filename_50065);
Result_51060 = NIM_TRUE;
goto LA1;
LA3: ;
Result_51060 = NIM_FALSE;
LA1: ;
return Result_51060;
}
N_NIMCALL(NI, Ropelen_50055)(TY50008* A_50057) {
NI Result_50093;
Result_50093 = 0;
if (!(A_50057 == NIM_NIL)) goto LA2;
Result_50093 = 0;
goto LA1;
LA2: ;
Result_50093 = (*A_50057).Length;
LA1: ;
return Result_50093;
}
N_NIMCALL(TY50008*, Pop_50466)(TY50445** S_50471) {
TY50008* Result_50472;
NI L_50483;
Result_50472 = 0;
L_50483 = 0;
L_50483 = (NI64)((*S_50471)->Sup.len - 1);
Result_50472 = (*S_50471)->data[L_50483];
(*S_50471) = (TY50445*) setLengthSeq(&((*S_50471))->Sup, sizeof(TY50008*), L_50483);
return Result_50472;
}
N_NOINLINE(void, ropesInit)(void) {
asgnRefNoCycle((void**) &N_50129, (TY50008*) newObj(NTI50006, sizeof(TY50008)));
(*N_50129).Sup.m_type = NTI50008;
}

