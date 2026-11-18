/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
void FUN_0c15d92e(int a4);
void FUN_0c15ecc6(int a4);
int FUN_0c1281a8(int a4, int a5);
int FUN_0c12be34(int a4);
int FUN_0c13187c(int a4);
int FUN_0c12c388(int a4);
int FUN_0c1615b6(int a4, int a5, int a6, float f4);
int FUN_0c161128(int a4);
int FUN_0c16ab9e(int a4, int a5);

void FUN_0c15d92e(int a4)
{
    register int t2;
    register float u12;

    FUN_0c037320(0x2D, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t2 != 0) {
        *(unsigned int *)((t2 + 0x4)) = 0xC15D83A;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x10)) = a4;
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x2D, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0xF;
        (((struct oA4_uint *)(t2))->v) = (((((struct oCC_int *)((((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
        (((struct o30_float *)(t2))->v) = 0.0f;
        (((struct o28_float *)(t2))->v) = 0.0f;
        u12 = (((struct o378C_float *)((0xC532498 + ((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938))))->v);
        (((struct o2C_float *)(t2))->v) = (-(u12 * 100.0f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x40)) = *(struct mv3 *)((a4 + 0x40)); }
    }
}

void FUN_0c15ecc6(int a4)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (t0 * 0x1C);
        t2 = *(int *)((((t0 * 0x1C) + 0xC2038D0) + 0x0));
        t3 = FUN_0c037320(t2, (*(int *)0xC4B4114));
        t4 = FUN_0c03f444(0x8, 0x0, t3);
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t4))->v) = 0x1F;
            (((struct oA9_uchar *)(t4))->v) = 0x21;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t4 + 0x4)) = 0xC15EB24;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = *(int *)(((int)stk + 4));
            *(unsigned short *)((t4 + 0x1C)) = (((*(short *)(((t7 + 0xC2038D0) + 0x4))) + (*(short *)(((t7 + 0xC2038D0) + 0x8)))) + (*(int *)(((int)stk + 0))));
            (((struct o20_ushort *)(t4))->v) = (*(int *)(((t7 + 0xC2038D0) + 0xC)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)(((t7 + 0xC2038D0) + 0x10)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x40)) = *(struct mv3 *)(0xC203924); }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
}

int FUN_0c1281a8(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t17;
    register int t15;
    register float u11;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t17 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12825A;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            u11 = ((((struct o0_float *)0xC1282B4)->v));
        } else {
            u11 = ((((struct o4_float *)0xC1282B4)->v));
        }
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x1F;
        t15 = (((struct oC4_int *)(t3))->v);
        (((struct o88_float *)(t15))->v) = u11;
        (((struct o84_float *)(t15))->v) = u11;
        (((struct o8C_float *)(((((struct oC4_int *)(t3))->v))))->v) = 0.0f;
        t17 = 0x8C;
    }
    return t17;
}

int FUN_0c12be34(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC12BEE6;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c03733c(t1, 0x3, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t1))->v) = ((((((struct o168_float *)(a4))->v)) + (float)(*(signed char *)((a4 + 0x1)))) + ((((struct o0_float *)0xC12BF78)->v)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u0 = (((struct o4_float *)0xC12BF78)->v);
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x20F;
        t0 = 0x20F;
    }
    return t0;
}

int FUN_0c13187c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xC, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xC, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o14_uchar *)(t1))->v) = 0x0;
        (((struct o15_uchar *)(t1))->v) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        *(unsigned short *)((t1 + 0x1E)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(0xC2A148C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(0xC2A14A4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A1498); }
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA4_uint *)(t1))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        *(unsigned int *)((t1 + 0x4)) = 0xC131798;
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1;
        t0 = 0x1;
    }
    return t0;
}

int FUN_0c12c388(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC12C420;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x4, (*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u0 = *(float *)0xC12C4A0;
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1F;
        t0 = 0x1F;
    }
    return t0;
}

int FUN_0c1615b6(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t2;
    register int t12;
    register float u8;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c037320(0x9, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t12 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0x4)) = 0xC161578;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        u8 = *(float *)(((int)stk + 8));
        (((struct o48_float *)(t2))->v) = u8;
        (((struct o44_float *)(t2))->v) = u8;
        (((struct o40_float *)(t2))->v) = u8;
        *(unsigned short *)((t2 + 0x1C)) = 0x4;
        *(unsigned short *)((t2 + 0x1E)) = 0x0;
        t10 = (((struct oC4_int *)(t2))->v);
        FUN_0c03744a(t10, 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t10 + 0x0)) = 0x1;
        *(unsigned short *)((t10 + 0x6)) = 0xF;
        t12 = 0xF;
    }
    return t12;
}

int FUN_0c161128(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t10;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t1 = FUN_0c037320(0x8, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t10 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x8, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x41F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC1611BA;
        *(unsigned int *)((t2 + 0x10)) = (((short)(*(signed char *)(((int)stk + 0))) * (short)0x3938) + 0xC532498);
        (((struct oB0_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((t2 + 0x34)) = 0x4000;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x40)) = *(struct mv3 *)(0xC2039F8); }
        (((struct oA4_uint *)(t2))->v) = (((((struct oC4_int *)((0xC532498 + ((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938))))->v)) + 0x28);
        (((struct o2C_float *)(t2))->v) = (*(float *)0xC16126C);
        t10 = 0x2C;
    }
    return t10;
}

int FUN_0c16ab9e(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)(((a5 << 2) + 0xC203B78))), (*(int *)0xC4B40D8));
    t1 = FUN_0c03f444(0x1, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)(((a5 << 2) + 0xC203B78))), (*(int *)0xC4B40D8));
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC16AA88;
        *(unsigned char *)((t1 + 0x2)) = a5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oAA_uchar *)(t1))->v) = 0x1;
        (((struct oAB_uchar *)(t1))->v) = 0x2;
        t0 = 0xAB;
    }
    return t0;
}
