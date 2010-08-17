/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY191404 TY191404;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct TNimObject {
TNimType* m_type;
};
struct TY191404 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY20402[32];
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11622, void* Src_11623);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(NI, Paramcount_39628)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_24283)(NimStringDesc* S_24285);
N_NIMCALL(NimStringDesc*, Paramstr_39603)(NI I_39605);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17087);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17225, NI Newlen_17226);
N_NIMCALL(void, Handleshortoption_191693)(TY191404* P_191696);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NI, Parseword_191607)(NimStringDesc* S_191609, NI I_191610, NimStringDesc** W_191612, TY20402 Delim_191614);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_22981, NIM_BOOL Leading_22982, NIM_BOOL Trailing_22983);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1752, NI First_1753, NI Last_1754);
STRING_LITERAL(TMP193642, "", 0);
static NIM_CONST TY20402 TMP193645 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;static NIM_CONST TY20402 TMP193646 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;extern TNimType* NTI191404; /* TOptParser */
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((int) ((NI32)((NI32)((*Src_17193).Sup.len + 1) * 1))));
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_17209, NIM_CHAR C_17210) {
(*Dest_17209).data[((*Dest_17209).Sup.len)-0] = C_17210;
(*Dest_17209).data[((NI32)((*Dest_17209).Sup.len + 1))-0] = 0;
(*Dest_17209).Sup.len += 1;
}
N_NIMCALL(void, Initoptparser_191415)(NimStringDesc* Cmdline_191417, TY191404* Result) {
NI I_191441;
NI HEX3Atmp_191602;
NI Res_191604;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
memset((void*)Result, 0, sizeof((*Result)));
(*Result).Sup.m_type = NTI191404;
(*Result).Pos = 0;
(*Result).Inshortstate = NIM_FALSE;
if (!!(((Cmdline_191417) && (Cmdline_191417)->Sup.len == 0))) goto LA2;
unsureAsgnRef((void**) &(*Result).Cmd, copyString(Cmdline_191417));
goto LA1;
LA2: ;
unsureAsgnRef((void**) &(*Result).Cmd, copyString(((NimStringDesc*) &TMP193642)));
I_191441 = 0;
HEX3Atmp_191602 = 0;
HEX3Atmp_191602 = Paramcount_39628();
Res_191604 = 0;
Res_191604 = 1;
while (1) {
if (!(Res_191604 <= HEX3Atmp_191602)) goto LA4;
I_191441 = Res_191604;
LOC6 = Paramstr_39603(I_191441);
LOC7 = Quoteifcontainswhite_24283(LOC6);
LOC5 = rawNewString((*Result).Cmd->Sup.len + LOC7->Sup.len + 1);
appendString(LOC5, (*Result).Cmd);
appendString(LOC5, LOC7);
appendChar(LOC5, 32);
unsureAsgnRef((void**) &(*Result).Cmd, LOC5);
Res_191604 += 1;
} LA4: ;
LA1: ;
(*Result).Kind = ((NU8) 0);
unsureAsgnRef((void**) &(*Result).Key, copyString(((NimStringDesc*) &TMP193642)));
unsureAsgnRef((void**) &(*Result).Val, copyString(((NimStringDesc*) &TMP193642)));
}
N_NIMCALL(NI, Parseword_191607)(NimStringDesc* S_191609, NI I_191610, NimStringDesc** W_191612, TY20402 Delim_191614) {
NI Result_191615;
Result_191615 = 0;
Result_191615 = I_191610;
if (!((NU8)(S_191609->data[Result_191615]) == (NU8)(34))) goto LA2;
Result_191615 += 1;
while (1) {
if (!!((((NU8)(S_191609->data[Result_191615])) == ((NU8)(0)) || ((NU8)(S_191609->data[Result_191615])) == ((NU8)(34))))) goto LA4;
(*W_191612) = addChar((*W_191612), S_191609->data[Result_191615]);
Result_191615 += 1;
} LA4: ;
if (!((NU8)(S_191609->data[Result_191615]) == (NU8)(34))) goto LA6;
Result_191615 += 1;
LA6: ;
goto LA1;
LA2: ;
while (1) {
if (!!(((Delim_191614[((NU8)(S_191609->data[Result_191615]))/8] &(1<<(((NU8)(S_191609->data[Result_191615]))%8)))!=0))) goto LA8;
(*W_191612) = addChar((*W_191612), S_191609->data[Result_191615]);
Result_191615 += 1;
} LA8: ;
LA1: ;
return Result_191615;
}
N_NIMCALL(void, Handleshortoption_191693)(TY191404* P_191696) {
NI I_191697;
I_191697 = 0;
I_191697 = (*P_191696).Pos;
(*P_191696).Kind = ((NU8) 3);
(*P_191696).Key = addChar((*P_191696).Key, (*P_191696).Cmd->data[I_191697]);
I_191697 += 1;
(*P_191696).Inshortstate = NIM_TRUE;
while (1) {
if (!(((NU8)((*P_191696).Cmd->data[I_191697])) == ((NU8)(9)) || ((NU8)((*P_191696).Cmd->data[I_191697])) == ((NU8)(32)))) goto LA1;
I_191697 += 1;
(*P_191696).Inshortstate = NIM_FALSE;
} LA1: ;
if (!(((NU8)((*P_191696).Cmd->data[I_191697])) == ((NU8)(58)) || ((NU8)((*P_191696).Cmd->data[I_191697])) == ((NU8)(61)))) goto LA3;
I_191697 += 1;
(*P_191696).Inshortstate = NIM_FALSE;
while (1) {
if (!(((NU8)((*P_191696).Cmd->data[I_191697])) == ((NU8)(9)) || ((NU8)((*P_191696).Cmd->data[I_191697])) == ((NU8)(32)))) goto LA5;
I_191697 += 1;
} LA5: ;
I_191697 = Parseword_191607((*P_191696).Cmd, I_191697, &(*P_191696).Val, TMP193645);
LA3: ;
if (!((NU8)((*P_191696).Cmd->data[I_191697]) == (NU8)(0))) goto LA7;
(*P_191696).Inshortstate = NIM_FALSE;
LA7: ;
(*P_191696).Pos = I_191697;
}
N_NIMCALL(void, nponext)(TY191404* P_191790) {
NI I_191791;
I_191791 = 0;
I_191791 = (*P_191790).Pos;
while (1) {
if (!(((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(9)) || ((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(32)))) goto LA1;
I_191791 += 1;
} LA1: ;
(*P_191790).Pos = I_191791;
(*P_191790).Key = setLengthStr((*P_191790).Key, 0);
(*P_191790).Val = setLengthStr((*P_191790).Val, 0);
if (!(*P_191790).Inshortstate) goto LA3;
Handleshortoption_191693(P_191790);
goto BeforeRet;
LA3: ;
switch (((NU8)((*P_191790).Cmd->data[I_191791]))) {
case 0:
(*P_191790).Kind = ((NU8) 0);
break;
case 45:
I_191791 += 1;
if (!((NU8)((*P_191790).Cmd->data[I_191791]) == (NU8)(45))) goto LA6;
(*P_191790).Kind = ((NU8) 2);
I_191791 += 1;
I_191791 = Parseword_191607((*P_191790).Cmd, I_191791, &(*P_191790).Key, TMP193646);
while (1) {
if (!(((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(9)) || ((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(32)))) goto LA8;
I_191791 += 1;
} LA8: ;
if (!(((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(58)) || ((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(61)))) goto LA10;
I_191791 += 1;
while (1) {
if (!(((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(9)) || ((NU8)((*P_191790).Cmd->data[I_191791])) == ((NU8)(32)))) goto LA12;
I_191791 += 1;
} LA12: ;
(*P_191790).Pos = Parseword_191607((*P_191790).Cmd, I_191791, &(*P_191790).Val, TMP193645);
goto LA9;
LA10: ;
(*P_191790).Pos = I_191791;
LA9: ;
goto LA5;
LA6: ;
(*P_191790).Pos = I_191791;
Handleshortoption_191693(P_191790);
LA5: ;
break;
default:
(*P_191790).Kind = ((NU8) 1);
(*P_191790).Pos = Parseword_191607((*P_191790).Cmd, I_191791, &(*P_191790).Key, TMP193645);
break;
}
BeforeRet: ;
}
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY191404* P_191923) {
NimStringDesc* Result_191924;
NimStringDesc* LOC1;
Result_191924 = 0;
LOC1 = copyStrLast((*P_191923).Cmd, (*P_191923).Pos, (NI32)((*P_191923).Cmd->Sup.len - 1));
Result_191924 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
return Result_191924;
}
N_NOINLINE(void, parseoptInit)(void) {
}

