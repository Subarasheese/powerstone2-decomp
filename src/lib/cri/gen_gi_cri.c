/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int ADXT_ExecServer(void);
int FUN_0c030412(int);
int FUN_0c030436(void);
int FUN_0c03069a(int);
int FUN_0c036de8(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f444(int, int, int, int);
int FUN_0c056e44(int, int);
int FUN_0c059c54(int);
int FUN_0c05d1a0(int);
int FUN_0c05d90c(int);
int FUN_0c106510(void);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1202f8(void);
int FUN_0c120362(void);
int FUN_0c120504(int, int, int, int);
int FUN_0c183280(void);
int FUN_0c18329e(void);
int FUN_0c18422a(void);
int FUN_0c187a88(int, int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c18c9fc(void);
int FUN_0c18d420(void);
int FUN_0c191f2c(void);
int FUN_0c191f5a(int);
int FUN_0c1a2184(void);
int FUN_0c2d80c4(int, int);
int FUN_0c2d8152(int);
int FUN_0c2d815a(int, int);
int FUN_0c2d8d90(void);
int bgm_stop_slot(int);
int fmcalccrc(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
int syCfgGetIndividualID(int);
int thunk_FUN_0c03e08c(int, int);
int thunk_FUN_0c2c2156(int, int, int);
int thunk_FUN_0c2c5908(void);
void FUN_0c120e9e(int a4, int a5, int a6, int a7);
int FUN_0c2d80f8(int a4, int a5);
int FUN_0c2d817c(int a4, int a5);
int fmMngReadData(int a4);
int FUN_0c03e096(int a4, int a5, int a6);
void FUN_0c120da2(int a4, int a5, int a6, int a7);
int FUN_0c11f56c(void);
int FUN_0c150d1e(int a4, int a5, int a6, int a7);
int FUN_0c1512a0(int a4, int a5, int a6, int a7);
int FUN_0c2d8590(int a4, int a5);
int FUN_0c10726e(void);
int FUN_0c11f1ac(void);
int FUN_0c0306de(int a4, int a5);
void FUN_0c0b62e0(int a4);
int FUN_0c1920f8(int a4);
int FUN_0c2d8322(int a4, int a5);
int FUN_0c03e438(int a4, int a5, int a6, int a7);
int math_mat_transform_vector(int a4, int a5);
int FUN_0c0582de(int a4, int a5);
int FUN_0c03e2a4(int a4, int a5, int a6, int a7);
int ADXT_DiscardSmpl(int a4);
int FUN_0c03e46a(int a4, int a5, int a6, int a7);
int FUN_0c192138(int a4);
int FUN_0c05d280(int a4);
int FUN_0c183de8(int a4);
int FUN_0c184c60(int a4, int a5, int a6, int a7);


int ADXT_DiscardSmpl(int a4)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x72))) == 0) {
        return 0x0;
    }
    *(volatile int *)((a4 + 0xC));
    t2 = thunk_FUN_0c2c5908();
    ADXT_ExecServer();
    return t2;
}


