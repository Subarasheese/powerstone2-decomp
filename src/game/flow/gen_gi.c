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
int FUN_0c192138(int a4);
int FUN_0c05d280(int a4);
int FUN_0c183de8(int a4);
int FUN_0c184c60(int a4, int a5, int a6, int a7);

void FUN_0c120e9e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0xA0, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC120E24;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
    }
}



void FUN_0c120da2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x1C, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC120D12;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
    }
}

int FUN_0c11f56c(void)
{
    int stk[7];

    (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
    (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
    FUN_0c03eff6();
    FUN_0c036de8(0x12);
    FUN_0c059c54(0x12);
    FUN_0c03ea04(0xD, 0x0);
    FUN_0c120362();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC201894); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2018A0); }
    return (FUN_0c120504(0x2, 0xE, (((int)stk + 0) + 0xC), ((int)stk + 0)));
}

int FUN_0c150d1e(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t6 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1F, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC150C68;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        t6 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t6;
    }
    return t6;
}

int FUN_0c1512a0(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t6;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t6 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1A, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC151000;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        t6 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t6;
    }
    return t6;
}


int FUN_0c10726e(void)
{
    int stk[2];
    register int t2;
    register int t3;

    bgm_stop_slot(0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC473CA8) = *(struct mv3 *)(0xC290AC0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC473CB4) = *(struct mv3 *)(0xC290AD8); }
    FUN_0c115120(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    t2 = (((struct o0_int *)0xC5325B0)->v);
    (((struct o98_float *)(t2))->v) = 8.0f;
    (((struct o94_float *)(t2))->v) = 8.0f;
    t3 = (((struct o4_int *)0xC5325B0)->v);
    (((struct o98_float *)(t3))->v) = 8.0f;
    (((struct o94_float *)(t3))->v) = 8.0f;
    FUN_0c056e44(0x23, 0x7);
    return FUN_0c106510();
}

int FUN_0c11f1ac(void)
{
    int stk[7];

    (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
    (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
    FUN_0c03f0aa();
    FUN_0c036de8(0x1D);
    FUN_0c059c54(0x12);
    FUN_0c1202f8();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC20184C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC201858); }
    return (FUN_0c120504(0x1, 0xD, (((int)stk + 0) + 0xC), ((int)stk + 0)));
}

int FUN_0c0306de(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c030412(a4);
    if (t0 != 0) {
        *(volatile int *)((a4 + 0x78));
        t0 = FUN_0c030436();
        if (t0 != 0) {
            FUN_0c03069a(a4);
            (((struct o7C_uint *)(a4))->v) = 0x2;
            *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

void FUN_0c0b62e0(int a4)
{
    register int t2;

    (((struct o20_ushort *)(a4))->v) = ((int)((unsigned int)(nlRand()) % (unsigned int)0x5));
    t2 = (((struct o20_short *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0x38F8 + a4) + 0x1C)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + 0xC1C68C8)); }
}



int math_mat_transform_vector(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(a5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    nlCalcVector((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}

int FUN_0c0582de(int a4, int a5)
{
    int stk[5];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(a5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    nlCalcPoint((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))));
    return (nlPopMatrix(0x1));
}





int FUN_0c05d280(int a4)
{
    int t1;

    if (((*(signed char *)0xC542255) == 0) && (t1 = *(signed char *)0xC542254, t1 == 0)) {
        return FUN_0c05d90c((*(signed char *)((a4 + 0x9))));
    }
    return FUN_0c05d1a0((*(signed char *)((a4 + 0x9))));
}

