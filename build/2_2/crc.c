/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NI TY50040[256];
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
static N_INLINE(int, Updatecrc32_50018)(NIM_CHAR Val_50020, int Crc_50021);
static N_INLINE(int, Updatecrc32_50014)(NI8 Val_50016, int Crc_50017);
N_NIMCALL(NIM_BOOL, Open_4017)(FILE** F_4020, NimStringDesc* Filename_4021, NU8 Mode_4022, NI Bufsize_4023);
N_NOCONV(void*, Alloc_2350)(NI Size_2352);
N_NIMCALL(NI, Readbuffer_4122)(FILE* F_4124, void* Buffer_4125, NI Len_4126);
N_NOCONV(void, Dealloc_2360)(void* P_2362);
NIM_CONST TY50040 Crc32table_50039 = {0,
1996959894,
-301047508,
-1727442502,
124634137,
1886057615,
-379345611,
-1637575261,
249268274,
2044508324,
-522852066,
-1747789432,
162941995,
2125561021,
-407360249,
-1866523247,
498536548,
1789927666,
-205950648,
-2067906082,
450548861,
1843258603,
-187386543,
-2083289657,
325883990,
1684777152,
-43845254,
-1973040660,
335633487,
1661365465,
-99664541,
-1928851979,
997073096,
1281953886,
-715111964,
-1570279054,
1006888145,
1258607687,
-770865667,
-1526024853,
901097722,
1119000684,
-608450090,
-1396901568,
853044451,
1172266101,
-589951537,
-1412350631,
651767980,
1373503546,
-925412992,
-1076862698,
565507253,
1454621731,
-809855591,
-1195530993,
671266974,
1594198024,
-972236366,
-1324619484,
795835527,
1483230225,
-1050600021,
-1234817731,
1994146192,
31158534,
-1731059524,
-271249366,
1907459465,
112637215,
-1614814043,
-390540237,
2013776290,
251722036,
-1777751922,
-519137256,
2137656763,
141376813,
-1855689577,
-429695999,
1802195444,
476864866,
-2056965928,
-228458418,
1812370925,
453092731,
-2113342271,
-183516073,
1706088902,
314042704,
-1950435094,
-54949764,
1658658271,
366619977,
-1932296973,
-69972891,
1303535960,
984961486,
-1547960204,
-725929758,
1256170817,
1037604311,
-1529756563,
-740887301,
1131014506,
879679996,
-1385723834,
-631195440,
1141124467,
855842277,
-1442165665,
-586318647,
1342533948,
654459306,
-1106571248,
-921952122,
1466479909,
544179635,
-1184443383,
-832445281,
1591671054,
702138776,
-1328506846,
-942167884,
1504918807,
783551873,
-1212326853,
-1061524307,
-306674912,
-1698712650,
62317068,
1957810842,
-355121351,
-1647151185,
81470997,
1943803523,
-480048366,
-1805370492,
225274430,
2053790376,
-468791541,
-1828061283,
167816743,
2097651377,
-267414716,
-2029476910,
503444072,
1762050814,
-144550051,
-2140837941,
426522225,
1852507879,
-19653770,
-1982649376,
282753626,
1742555852,
-105259153,
-1900089351,
397917763,
1622183637,
-690576408,
-1580100738,
953729732,
1340076626,
-776247311,
-1497606297,
1068828381,
1219638859,
-670225446,
-1358292148,
906185462,
1090812512,
-547295293,
-1469587627,
829329135,
1181335161,
-882789492,
-1134132454,
628085408,
1382605366,
-871598187,
-1156888829,
570562233,
1426400815,
-977650754,
-1296233688,
733239954,
1555261956,
-1026031705,
-1244606671,
752459403,
1541320221,
-1687895376,
-328994266,
1969922972,
40735498,
-1677130071,
-351390145,
1913087877,
83908371,
-1782625662,
-491226604,
2075208622,
213261112,
-1831694693,
-438977011,
2094854071,
198958881,
-2032938284,
-237706686,
1759359992,
534414190,
-2118248755,
-155638181,
1873836001,
414664567,
-2012718362,
-15766928,
1711684554,
285281116,
-1889165569,
-127750551,
1634467795,
376229701,
-1609899400,
-686959890,
1308918612,
956543938,
-1486412191,
-799009033,
1231636301,
1047427035,
-1362007478,
-640263460,
1088359270,
936918000,
-1447252397,
-558129467,
1202900863,
817233897,
-1111625188,
-893730166,
1404277552,
615818150,
-1160759803,
-841546093,
1423857449,
601450431,
-1285129682,
-1000256840,
1567103746,
711928724,
-1274298825,
-1022587231,
1510334235,
755167117}
;
static N_INLINE(int, Updatecrc32_50014)(NI8 Val_50016, int Crc_50017) {
int Result_50048;
Result_50048 = 0;
Result_50048 = (NI32)(((int) (Crc32table_50039[((NI64)((NI64)(((NI) (Crc_50017)) ^ (NI64)(((NI) (Val_50016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_50017) >> (NU32)(((NI32) 8))));
return Result_50048;
}
static N_INLINE(int, Updatecrc32_50018)(NIM_CHAR Val_50020, int Crc_50021) {
int Result_50053;
Result_50053 = 0;
Result_50053 = Updatecrc32_50014(((NI8) (((NU8)(Val_50020)))), Crc_50021);
return Result_50053;
}
N_NIMCALL(int, HEX3EHEX3C_50092)(int C_50094, NimStringDesc* S_50095) {
int Result_50096;
NI I_50107;
NI HEX3Atmp_50108;
NI Res_50110;
Result_50096 = 0;
Result_50096 = C_50094;
I_50107 = 0;
HEX3Atmp_50108 = 0;
HEX3Atmp_50108 = (NI64)(S_50095->Sup.len - 1);
Res_50110 = 0;
Res_50110 = 0;
while (1) {
if (!(Res_50110 <= HEX3Atmp_50108)) goto LA1;
I_50107 = Res_50110;
Result_50096 = Updatecrc32_50018(S_50095->data[I_50107], Result_50096);
Res_50110 += 1;
} LA1: ;
return Result_50096;
}
N_NIMCALL(int, Crcfromfile_50029)(NimStringDesc* Filename_50031) {
int Result_50137;
FILE* Bin_50139;
void* Buf_50140;
NI Readbytes_50141;
NI8* P_50142;
NIM_BOOL LOC2;
NI I_50152;
NI HEX3Atmp_50155;
NI Res_50157;
Result_50137 = 0;
Bin_50139 = 0;
Buf_50140 = 0;
Readbytes_50141 = 0;
P_50142 = 0;
Result_50137 = ((NI32) -1);
LOC2 = Open_4017(&Bin_50139, Filename_50031, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
goto BeforeRet;
LA3: ;
Buf_50140 = Alloc_2350(8192);
P_50142 = ((NI8*) (Buf_50140));
while (1) {
Readbytes_50141 = Readbuffer_4122(Bin_50139, Buf_50140, 8192);
I_50152 = 0;
HEX3Atmp_50155 = 0;
HEX3Atmp_50155 = (NI64)(Readbytes_50141 - 1);
Res_50157 = 0;
Res_50157 = 0;
while (1) {
if (!(Res_50157 <= HEX3Atmp_50155)) goto LA6;
I_50152 = Res_50157;
Result_50137 = Updatecrc32_50014(P_50142[(I_50152)-0], Result_50137);
Res_50157 += 1;
} LA6: ;
if (!!((Readbytes_50141 == 8192))) goto LA8;
goto LA5;
LA8: ;
} LA5: ;
Dealloc_2360(Buf_50140);
fclose(Bin_50139);
BeforeRet: ;
return Result_50137;
}
N_NOINLINE(void, crcInit)(void) {
}

