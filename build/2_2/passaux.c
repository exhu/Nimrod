/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY101006 TY101006;
typedef struct TY101002 TY101002;
typedef struct TY53545 TY53545;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY89031 TY89031;
typedef struct TY53523 TY53523;
typedef struct TY52005 TY52005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY53549 TY53549;
typedef struct TY52011 TY52011;
typedef struct TY45532 TY45532;
typedef struct TY53527 TY53527;
typedef struct TY53525 TY53525;
typedef struct TY53537 TY53537;
typedef struct TY50008 TY50008;
typedef struct TY53541 TY53541;
typedef struct TY53517 TY53517;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY37422 TY37422;
typedef struct TY89029 TY89029;
typedef struct TY57223 TY57223;
typedef struct TY57221 TY57221;
typedef struct TY57219 TY57219;
typedef struct TY53561 TY53561;
typedef struct TY53559 TY53559;
typedef struct TY53557 TY53557;
typedef struct TY53547 TY53547;
typedef struct TY41013 TY41013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
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
struct TY101002 {
  TNimObject Sup;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY41013 {
  TNimObject Sup;
TY41013* Prev;
TY41013* Next;
};
struct TY53541 {
  TY41013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY50008* Name;
TY53523* Path;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY53525 {
  TGenericSeq Sup;
  TY53545* data[SEQ_DECL_SIZE];
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
N_NIMCALL(void, Initpass_101031)(TY101006* P_101034);
N_NIMCALL(TY101002*, Verboseopen_183008)(TY53545* S_183010, NimStringDesc* Filename_183011);
N_NIMCALL(void, Rawmessage_45553)(NU8 Msg_45555, NimStringDesc* Arg_45556);
N_NIMCALL(TY53523*, Verboseprocess_183015)(TY101002* Context_183017, TY53523* N_183018);
N_NIMCALL(void, Internalerror_45571)(NimStringDesc* Errmsg_45573);
N_NIMCALL(void, Limessage_45562)(TY45532 Info_45564, NU8 Msg_45565, NimStringDesc* Arg_45566);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_17803);
N_NIMCALL(TY53523*, Cleanup_183039)(TY101002* C_183041, TY53523* N_183042);
N_NIMCALL(NI, Sonslen_53801)(TY53523* N_53803);
N_NIMCALL(TY53545*, Getmodule_57206)(TY53545* S_57208);
N_NIMCALL(NIM_BOOL, Astneeded_101041)(TY53545* S_101043);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11616, void* Src_11617);
static N_INLINE(TY10402*, Usrtocell_10822)(void* Usr_10824);
static N_INLINE(void, Rtladdzct_11456)(TY10402* C_11458);
N_NOINLINE(void, Addzct_10811)(TY10418* S_10814, TY10402* C_10815);
STRING_LITERAL(TMP193917, "logpass: context is not nil", 27);
extern NI Gverbosity_44083;
extern NI Gid_53690;
extern NU32 Gglobaloptions_44077;
extern TY10790 Gch_10808;
N_NIMCALL(TY101002*, Verboseopen_183008)(TY53545* S_183010, NimStringDesc* Filename_183011) {
TY101002* Result_183012;
Result_183012 = 0;
Result_183012 = NIM_NIL;
if (!(0 < Gverbosity_44083)) goto LA2;
Rawmessage_45553(((NU8) 230), (*(*S_183010).Name).S);
LA2: ;
return Result_183012;
}
N_NIMCALL(TY53523*, Verboseprocess_183015)(TY101002* Context_183017, TY53523* N_183018) {
TY53523* Result_183019;
NimStringDesc* LOC7;
Result_183019 = 0;
Result_183019 = N_183018;
if (!!((Context_183017 == NIM_NIL))) goto LA2;
Internalerror_45571(((NimStringDesc*) &TMP193917));
LA2: ;
if (!(Gverbosity_44083 == 3)) goto LA5;
LOC7 = nimIntToStr(Gid_53690);
Limessage_45562((*N_183018).Info, ((NU8) 230), LOC7);
LA5: ;
return Result_183019;
}
N_NIMCALL(TY101006, Verbosepass_183004)(void) {
TY101006 Result_183037;
memset((void*)&Result_183037, 0, sizeof(Result_183037));
Initpass_101031(&Result_183037);
Result_183037.Open = Verboseopen_183008;
Result_183037.Process = Verboseprocess_183015;
return Result_183037;
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
N_NIMCALL(TY53523*, Cleanup_183039)(TY101002* C_183041, TY53523* N_183042) {
TY53523* Result_183043;
TY53545* S_183044;
NI I_183078;
NI HEX3Atmp_183160;
NI LOC4;
NI Res_183162;
TY53523* LOC6;
NIM_BOOL LOC11;
TY53545* LOC12;
NIM_BOOL LOC14;
Result_183043 = 0;
S_183044 = 0;
Result_183043 = N_183042;
if (!((Gglobaloptions_44077 &(1<<((((NU8) 4))&31)))!=0)) goto LA2;
goto BeforeRet;
LA2: ;
switch ((*N_183042).Kind) {
case ((NU8) 101):
I_183078 = 0;
HEX3Atmp_183160 = 0;
LOC4 = Sonslen_53801(N_183042);
HEX3Atmp_183160 = (NI64)(LOC4 - 1);
Res_183162 = 0;
Res_183162 = 0;
while (1) {
if (!(Res_183162 <= HEX3Atmp_183160)) goto LA5;
I_183078 = Res_183162;
LOC6 = Cleanup_183039(C_183041, (*N_183042).KindU.S6.Sons->data[I_183078]);
Res_183162 += 1;
} LA5: ;
break;
case ((NU8) 69):
case ((NU8) 70):
if (!((*(*N_183042).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA8;
S_183044 = (*(*N_183042).KindU.S6.Sons->data[0]).KindU.S4.Sym;
LOC12 = Getmodule_57206(S_183044);
LOC11 = !((((*LOC12).Flags &(1<<((((NU8) 28))&31)))!=0));
if (!(LOC11)) goto LA13;
LOC14 = Astneeded_101041(S_183044);
LOC11 = !(LOC14);
LA13: ;
if (!LOC11) goto LA15;
asgnRefNoCycle((void**) &(*(*S_183044).Ast).KindU.S6.Sons->data[4], NIM_NIL);
LA15: ;
LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_183043;
}
N_NIMCALL(TY101006, Cleanuppass_183006)(void) {
TY101006 Result_183167;
memset((void*)&Result_183167, 0, sizeof(Result_183167));
Initpass_101031(&Result_183167);
Result_183167.Process = Cleanup_183039;
Result_183167.Close = Cleanup_183039;
return Result_183167;
}
N_NOINLINE(void, passauxInit)(void) {
}

