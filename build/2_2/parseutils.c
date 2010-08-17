/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct EOverflow EOverflow;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY428 TY428;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef NU8 TY20402[32];
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
struct TY428 {
  TY416 Sup;
};
struct EOverflow {
  TY428 Sup;
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
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_20849, NI64* Number_20851, NI Start_20852);
N_NIMCALL(NI, Rawparseint_20748)(NimStringDesc* S_20750, NI64* B_20752, NI Start_20753);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 A_5579, NI64 B_5580);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
static N_INLINE(NI64, subInt64)(NI64 A_5538, NI64 B_5539);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, raiseException)(E_Base* E_4604, NCSTRING Ename_4605);
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* S_20888, NF64* Number_20890, NI Start_20891);
NIM_CONST TY20402 Whitespace_20401 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY20402 Identchars_20403 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY20402 Identstartchars_20405 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP193656, "overflow", 8);
extern TNimType* NTI5491; /* ref EOverflow */
extern TNimType* NTI432; /* EOverflow */
extern TY10790 Gch_10808;
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604) {
NI Result_5605;
NIM_BOOL LOC2;
Result_5605 = 0;
Result_5605 = (NI64)((NU64)(A_5603) + (NU64)(B_5604));
LOC2 = (0 <= (NI64)(Result_5605 ^ A_5603));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5605 ^ B_5604));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5605;
}
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI64)((NU64)(A_5803) - (NU64)(B_5804));
LOC2 = (0 <= (NI64)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5805 ^ (NI64)((NU64) ~(B_5804))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
static N_INLINE(NI64, subInt64)(NI64 A_5538, NI64 B_5539) {
NI64 Result_5540;
NIM_BOOL LOC2;
Result_5540 = 0;
Result_5540 = (NI64)((NU64)(A_5538) - (NU64)(B_5539));
LOC2 = (0 <= (Result_5540 ^ A_5538));
if (LOC2) goto LA3;
LOC2 = (0 <= (Result_5540 ^ ~(B_5539)));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5540;
}
N_NIMCALL(NI, Rawparseint_20748)(NimStringDesc* S_20750, NI64* B_20752, NI Start_20753) {
NI Result_20754;
NI64 Sign_20755;
NI I_20756;
Result_20754 = 0;
Sign_20755 = 0;
Sign_20755 = -1;
I_20756 = 0;
I_20756 = Start_20753;
if (!((NU8)(S_20750->data[I_20756]) == (NU8)(43))) goto LA2;
I_20756 = addInt(I_20756, 1);
goto LA1;
LA2: ;
if (!((NU8)(S_20750->data[I_20756]) == (NU8)(45))) goto LA4;
I_20756 = addInt(I_20756, 1);
Sign_20755 = 1;
goto LA1;
LA4: ;
LA1: ;
if (!(((NU8)(S_20750->data[I_20756])) >= ((NU8)(48)) && ((NU8)(S_20750->data[I_20756])) <= ((NU8)(57)))) goto LA7;
(*B_20752) = 0;
while (1) {
if (!(((NU8)(S_20750->data[I_20756])) >= ((NU8)(48)) && ((NU8)(S_20750->data[I_20756])) <= ((NU8)(57)))) goto LA9;
(*B_20752) = subInt64(mulInt64((*B_20752), 10), ((NI64) (subInt(((NU8)(S_20750->data[I_20756])), 48))));
I_20756 = addInt(I_20756, 1);
while (1) {
if (!((NU8)(S_20750->data[I_20756]) == (NU8)(95))) goto LA10;
I_20756 = addInt(I_20756, 1);
} LA10: ;
} LA9: ;
(*B_20752) = mulInt64((*B_20752), Sign_20755);
Result_20754 = subInt(I_20756, Start_20753);
LA7: ;
return Result_20754;
}
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* S_20849, NI64* Number_20851, NI Start_20852) {
NI Result_20853;
Result_20853 = 0;
Result_20853 = Rawparseint_20748(S_20849, Number_20851, Start_20852);
return Result_20853;
}
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
N_NIMCALL(NI, npuParseInt)(NimStringDesc* S_20856, NI* Number_20858, NI Start_20859) {
NI Result_20860;
NI64 Res_20861;
NIM_BOOL LOC2;
NIM_BOOL LOC4;
EOverflow* E_20870;
Result_20860 = 0;
Res_20861 = 0;
Result_20860 = npuParseBiggestInt(S_20856, &Res_20861, Start_20859);
LOC2 = NIM_FALSE;
if (!(LOC2)) goto LA3;
LOC4 = (Res_20861 < (IL64(-9223372036854775807) - IL64(1)));
if (LOC4) goto LA5;
LOC4 = (IL64(9223372036854775807) < Res_20861);
LA5: ;
LOC2 = LOC4;
LA3: ;
if (!LOC2) goto LA6;
E_20870 = 0;
E_20870 = (EOverflow*) newObj(NTI5491, sizeof(EOverflow));
(*E_20870).Sup.Sup.Sup.Sup.m_type = NTI432;
asgnRefNoCycle((void**) &(*E_20870).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP193656)));
raiseException((E_Base*)E_20870, "EOverflow");
goto LA1;
LA6: ;
(*Number_20858) = ((NI) (Res_20861));
LA1: ;
return Result_20860;
}
N_NIMCALL(NI, npuParseBiggestFloat)(NimStringDesc* S_20888, NF64* Number_20890, NI Start_20891) {
NI Result_20892;
NF Esign_20893;
NF Sign_20894;
NI I_20895;
NI Exponent_20896;
NI Flags_20897;
NIM_BOOL LOC7;
NIM_BOOL LOC12;
NIM_BOOL LOC17;
NIM_BOOL LOC25;
NIM_BOOL LOC30;
NIM_BOOL LOC35;
NF Hd_21022;
NF Hd_21197;
NI J_21220;
NI Res_21229;
Result_20892 = 0;
Esign_20893 = 0;
Esign_20893 = 1.00000;
Sign_20894 = 0;
Sign_20894 = 1.00000;
I_20895 = 0;
I_20895 = Start_20891;
Exponent_20896 = 0;
Flags_20897 = 0;
(*Number_20890) = 0.000000;
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(43))) goto LA2;
I_20895 += 1;
goto LA1;
LA2: ;
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(45))) goto LA4;
Sign_20894 = -1.00000;
I_20895 += 1;
goto LA1;
LA4: ;
LA1: ;
LOC7 = ((NU8)(S_20888->data[I_20895]) == (NU8)(78));
if (LOC7) goto LA8;
LOC7 = ((NU8)(S_20888->data[I_20895]) == (NU8)(110));
LA8: ;
if (!LOC7) goto LA9;
LOC12 = ((NU8)(S_20888->data[(NI64)(I_20895 + 1)]) == (NU8)(65));
if (LOC12) goto LA13;
LOC12 = ((NU8)(S_20888->data[(NI64)(I_20895 + 1)]) == (NU8)(97));
LA13: ;
if (!LOC12) goto LA14;
LOC17 = ((NU8)(S_20888->data[(NI64)(I_20895 + 2)]) == (NU8)(78));
if (LOC17) goto LA18;
LOC17 = ((NU8)(S_20888->data[(NI64)(I_20895 + 2)]) == (NU8)(110));
LA18: ;
if (!LOC17) goto LA19;
if (!!((((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) >= ((NU8)(97)) && ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) <= ((NU8)(122)) || ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) >= ((NU8)(65)) && ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) <= ((NU8)(90)) || ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) >= ((NU8)(48)) && ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) <= ((NU8)(57)) || ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) == ((NU8)(95))))) goto LA22;
(*Number_20890) = NAN;
Result_20892 = (NI64)((NI64)(I_20895 + 3) - Start_20891);
goto BeforeRet;
LA22: ;
LA19: ;
LA14: ;
Result_20892 = 0;
goto BeforeRet;
LA9: ;
LOC25 = ((NU8)(S_20888->data[I_20895]) == (NU8)(73));
if (LOC25) goto LA26;
LOC25 = ((NU8)(S_20888->data[I_20895]) == (NU8)(105));
LA26: ;
if (!LOC25) goto LA27;
LOC30 = ((NU8)(S_20888->data[(NI64)(I_20895 + 1)]) == (NU8)(78));
if (LOC30) goto LA31;
LOC30 = ((NU8)(S_20888->data[(NI64)(I_20895 + 1)]) == (NU8)(110));
LA31: ;
if (!LOC30) goto LA32;
LOC35 = ((NU8)(S_20888->data[(NI64)(I_20895 + 2)]) == (NU8)(70));
if (LOC35) goto LA36;
LOC35 = ((NU8)(S_20888->data[(NI64)(I_20895 + 2)]) == (NU8)(102));
LA36: ;
if (!LOC35) goto LA37;
if (!!((((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) >= ((NU8)(97)) && ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) <= ((NU8)(122)) || ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) >= ((NU8)(65)) && ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) <= ((NU8)(90)) || ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) >= ((NU8)(48)) && ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) <= ((NU8)(57)) || ((NU8)(S_20888->data[(NI64)(I_20895 + 3)])) == ((NU8)(95))))) goto LA40;
(*Number_20890) = ((NF64) ((INF * Sign_20894)));
Result_20892 = (NI64)((NI64)(I_20895 + 3) - Start_20891);
goto BeforeRet;
LA40: ;
LA37: ;
LA32: ;
Result_20892 = 0;
goto BeforeRet;
LA27: ;
while (1) {
if (!(((NU8)(S_20888->data[I_20895])) >= ((NU8)(48)) && ((NU8)(S_20888->data[I_20895])) <= ((NU8)(57)))) goto LA42;
Flags_20897 = (NI64)(Flags_20897 | 1);
(*Number_20890) = ((NF64) (((((NF) ((*Number_20890))) * 10.0000) + ((double) ((NI64)(((NU8)(S_20888->data[I_20895])) - 48))))));
I_20895 += 1;
while (1) {
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(95))) goto LA43;
I_20895 += 1;
} LA43: ;
} LA42: ;
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(46))) goto LA45;
Hd_21022 = 0;
Hd_21022 = 1.00000;
I_20895 += 1;
while (1) {
if (!(((NU8)(S_20888->data[I_20895])) >= ((NU8)(48)) && ((NU8)(S_20888->data[I_20895])) <= ((NU8)(57)))) goto LA47;
Flags_20897 = (NI64)(Flags_20897 | 2);
(*Number_20890) = ((NF64) (((((NF) ((*Number_20890))) * 10.0000) + ((double) ((NI64)(((NU8)(S_20888->data[I_20895])) - 48))))));
Hd_21022 = (Hd_21022 * 10.0000);
I_20895 += 1;
while (1) {
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(95))) goto LA48;
I_20895 += 1;
} LA48: ;
} LA47: ;
(*Number_20890) = ((NF64) ((((NF) ((*Number_20890))) / Hd_21022)));
LA45: ;
if (!(Flags_20897 == 0)) goto LA50;
Result_20892 = 0;
goto BeforeRet;
LA50: ;
if (!(((NU8)(S_20888->data[I_20895])) == ((NU8)(101)) || ((NU8)(S_20888->data[I_20895])) == ((NU8)(69)))) goto LA53;
I_20895 += 1;
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(43))) goto LA56;
I_20895 += 1;
goto LA55;
LA56: ;
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(45))) goto LA58;
Esign_20893 = -1.00000;
I_20895 += 1;
goto LA55;
LA58: ;
LA55: ;
if (!!((((NU8)(S_20888->data[I_20895])) >= ((NU8)(48)) && ((NU8)(S_20888->data[I_20895])) <= ((NU8)(57))))) goto LA61;
Result_20892 = 0;
goto BeforeRet;
LA61: ;
while (1) {
if (!(((NU8)(S_20888->data[I_20895])) >= ((NU8)(48)) && ((NU8)(S_20888->data[I_20895])) <= ((NU8)(57)))) goto LA63;
Exponent_20896 = (NI64)((NI64)((NI64)(Exponent_20896 * 10) + ((NU8)(S_20888->data[I_20895]))) - 48);
I_20895 += 1;
while (1) {
if (!((NU8)(S_20888->data[I_20895]) == (NU8)(95))) goto LA64;
I_20895 += 1;
} LA64: ;
} LA63: ;
LA53: ;
Hd_21197 = 0;
Hd_21197 = 1.00000;
J_21220 = 0;
Res_21229 = 0;
Res_21229 = 1;
while (1) {
if (!(Res_21229 <= Exponent_20896)) goto LA65;
J_21220 = Res_21229;
Hd_21197 = (Hd_21197 * 10.0000);
Res_21229 += 1;
} LA65: ;
if (!(0.000000 < Esign_20893)) goto LA67;
(*Number_20890) = ((NF64) ((((NF) ((*Number_20890))) * Hd_21197)));
goto LA66;
LA67: ;
(*Number_20890) = ((NF64) ((((NF) ((*Number_20890))) / Hd_21197)));
LA66: ;
(*Number_20890) = ((NF64) ((((NF) ((*Number_20890))) * Sign_20894)));
Result_20892 = (NI64)(I_20895 - Start_20891);
BeforeRet: ;
return Result_20892;
}
N_NIMCALL(NI, npuParseFloat)(NimStringDesc* S_21234, NF* Number_21236, NI Start_21237) {
NI Result_21238;
NF64 Bf_21239;
Result_21238 = 0;
Bf_21239 = 0;
Result_21238 = npuParseBiggestFloat(S_21234, &Bf_21239, Start_21237);
(*Number_21236) = ((NF) (Bf_21239));
return Result_21238;
}
N_NOINLINE(void, parseutilsInit)(void) {
}

