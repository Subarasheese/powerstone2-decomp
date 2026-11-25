/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c133644(int a4, int a5, int a6, int a7);
int FUN_0c15fcf8(int a4, int a5, int a6, int a7);
int FUN_0c13beec(int a4, int a5, int a6, int a7);
int FUN_0c048b7a(int a4, int a5, int a6, int a7);
int FUN_0c15363c(int a4, int a5, int a6, int a7);
int FUN_0c1670c4(int a4, int a5, int a6, int a7);
int FUN_0c16bd38(int a4, int a5, int a6, int a7);
int FUN_0c1332b4(int a4, int a5, int a6, int a7);
int FUN_0c12380c(int a4, int a5, int a6, int a7);
int FUN_0c12695c(int a4, int a5, int a6, int a7);
int FUN_0c13e824(int a4, int a5, int a6, int a7);
int FUN_0c14a4c0(int a4, int a5, int a6, int a7);
int FUN_0c14c5c8(int a4, int a5, int a6, int a7);
int FUN_0c14e7d8(int a4, int a5, int a6, int a7);
int FUN_0c0e648c(int a4, int a5, int a6, int a7);
int FUN_0c135b00(int a4, int a5, int a6, int a7, float f4);
int FUN_0c13dc4c(int a4, int a5, int a6, int a7);
int FUN_0c048fc6(int a4, int a5, int a6, int a7);

int FUN_0c133644(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t10;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1333CC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t0))->v) = 0.100000001f;
        (((struct o44_float *)(t0))->v) = 0.100000001f;
        (((struct o40_float *)(t0))->v) = 0.100000001f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t10 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t10));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x33, 0x0, 0x100, (~((int)0x1 << (int)t10)), 0x0, 0xF0);
        return FUN_0c07e2f4(t0, 0x62);
    }
    return t0;
}

int FUN_0c15fcf8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15FB90;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        t2 = 0x0;
        if (((int)(signed char)a4 >= 0) && ((int)(signed char)a4 <= (int)0x7)) {
            t2 = a4;
        }
        *(unsigned char *)((t0 + 0x2)) = t2;
        t3 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t3, ((signed char)t2 << 1), 0x12, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0x1F;
        (((struct o74_float *)(t3))->v) = 50.0f;
        (((struct o8C_float *)(t3))->v) = 0.125f;
        (((struct o88_float *)(t3))->v) = 0.125f;
        (((struct o84_float *)(t3))->v) = 0.125f;
        t3 = (((struct oC8_int *)(t0))->v);
        FUN_0c037498(t3, (((signed char)t2 << 1) + 0x1), 0x12, (*(int *)0xC4B40CC));
        *(unsigned char *)((t3 + 0x0)) = 0x1;
        *(unsigned short *)((t3 + 0x6)) = 0x21F;
        (((struct o74_float *)(t3))->v) = 51.0f;
        (((struct o8C_float *)(t3))->v) = 0.125f;
        (((struct o88_float *)(t3))->v) = 0.125f;
        (((struct o84_float *)(t3))->v) = 0.125f;
        (((struct o20_float *)(t3))->v) = 1.0f;
        (((struct o1C_float *)(t3))->v) = 1.0f;
        (((struct o18_float *)(t3))->v) = 1.0f;
        t1 = 0x18;
    }
    return t1;
}

int FUN_0c13beec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x1, 0x8, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t0 + 0x4)) = 0xC13BCA6;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u0 = (((struct o0_float *)0xC13C040)->v);
        (((struct o48_float *)(t0))->v) = u0;
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x400);
        u0 = (((struct o4_float *)0xC13C040)->v);
        (((struct oB0_float *)(t0))->v) = u0;
        (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x200);
        (((struct oB4_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 0.0f;
        (((struct oBC_float *)(t0))->v) = u0;
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t3) + 0x0))), 0x0, 0x7, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x0)) = 0x1;
            t2 = (t2 + 0x1);
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t3) + 0x0))) + 0x6)) = 0x31;
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)0x8) {
                break;
            }
        }
        t1 = 0x31;
    }
    return t1;
}

int FUN_0c048b7a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        t3 = 0xC1B7BA0;
        if ((*(signed char *)0xC5429A8) != 0) {
            t3 = 0xC1B7BE0;
        }
        FUN_0c037498(t2, 0x0, (*(int *)(((a6 << 2) + t3))), (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(((a5 * 0x34) + 0xC240A7C)); }
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = (((((struct o70_float *)(t2))->v)) - 20.0f);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 0.0f;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC048B0A;
        u0 = (((struct o0_float *)0xC048CAC)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o4_float *)0xC048CAC)->v));
        u0 = (((struct o8_float *)0xC048CAC)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct oC_float *)0xC048CAC)->v));
        t1 = 0x48;
    }
    return t1;
}

int FUN_0c15363c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC153710;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC2034DC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC2034F4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2034E8); }
        *(unsigned int *)((t0 + 0x10)) = a4;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x14, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x78)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o8C_float *)(t2))->v) = (*(float *)0xC153780);
        t2 = 0x1;
        t3 = 0x4;
        for (;;) {
            t4 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c037498(t4, 0x0, 0x15, (*(int *)0xC4B40CC));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            *(unsigned short *)((t4 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((int)(signed char)t2 >= (int)0x4) {
                break;
            }
        }
        t1 = 0x21F;
    }
    return t1;
}

int FUN_0c1670c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    t1 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t2 = 0x0;
    if (t1 != 0) {
        FUN_0c07e3ae(t1, 0x34);
        FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, (t0), (t0), 0xFFFFFFF0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)(a6); }
        u0 = (((struct o0_float *)0xC1671D0)->v);
        (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        (((struct o50_float *)(t1))->v) = 0.0f;
        u0 = (((struct oC_float *)0xC1671D0)->v);
        (((struct o58_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
        (((struct o5C_float *)(t1))->v) = 0.0f;
        (((struct o60_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC2A3498); }
        t2 = t1;
    }
    return t2;
}


int FUN_0c1332b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u2;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1330CC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u2 = *(float *)0xC133410;
        (((struct o48_float *)(t0))->v) = u2;
        (((struct o44_float *)(t0))->v) = u2;
        (((struct o40_float *)(t0))->v) = u2;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
        FUN_0c064d24(t0, 0x1, 0x33, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0);
        return FUN_0c07e2f4(t0, 0x61);
    }
    return t0;
}

int FUN_0c12380c(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t9;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12360C;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 250.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        t4 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t4, (*(signed char *)((t0 + 0x2))), 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0x21F;
        (((struct o18_float *)(t4))->v) = 1.0f;
        (((struct o20_float *)(t4))->v) = 1.0f;
        (((struct o1C_float *)(t4))->v) = 1.0f;
        (((struct o8C_float *)(t4))->v) = 0.0f;
        (((struct o88_float *)(t4))->v) = 0.0f;
        (((struct o84_float *)(t4))->v) = 0.0f;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t9 = 0x0;
    }
    return t9;
}

int FUN_0c12695c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c03f444(0x5, 0x1, 0x3, a7);
    t1 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = 0xC4;
            t4 = t2;
            t4 = (t4 << 2);
            t5 = t2;
            t3 = (t3 + t0);
            t4 = (t4 + t3);
            t3 = 0xC201B20;
            t5 = (t5 << 2);
            t4 = (*(int *)((t4 + 0x0)));
            t5 = (t5 << 1);
            t5 = (t5 + t3);
            FUN_0c03744a(t4, (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4))), (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t5 = t4;
            t3 = (*(short *)(((t2 << 1) + 0xC201B86)));
            *(unsigned char *)((t4 + 0x0)) = t3;
            t3 = (t2 << 1);
            t4 = (((t2 << 1) << 1) + t3);
            t3 = 0xC201B38;
            t6 = ((t4 << 2) + t3);
            t3 = 0xC187798;
            t5 = (t5 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t5) = *(struct mv3 *)(t6); }
            t2 = (t2 + 0x1);
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC126A28;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        t2 = *(short *)0xC201B80;
        *(unsigned short *)((t0 + 0x1C)) = t2;
        t1 = t2;
    }
    return t1;
}

int FUN_0c13e824(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t15;
    register int t3;
    register int t4;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13E6C8;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t4) + 0x0))), 0x0, 0x6, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t4) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t4) + 0x0))) + 0x6)) = 0xF;
            t12 = *(int *)((((0xC4 + t0) + t4) + 0x0));
            t4 = (t4 + 0x4);
            (((struct o7C_uint *)(t12))->v) = ((*(int *)((a4 + 0x38))) + t3);
            t3 = (t3 + 0x8000);
            if ((unsigned int)t4 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x10)) = a4;
        t15 = 0x7C;
    }
    return t15;
}

int FUN_0c14a4c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t14;
    register int t1;
    register int t2;
    register int t3;
    register int t9;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3, a7);
    t14 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0xC202A68;
        t3 = 0x0;
        for (;;) {
            t9 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t9, (*(signed char *)((t2 + 0x0))), (*(signed char *)((t2 + 0x1))), (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t1 = (t1 + 0x1);
            (((struct o8C_float *)(t9))->v) = 0.0f;
            (((struct o88_float *)(t9))->v) = 0.0f;
            (((struct o84_float *)(t9))->v) = 0.0f;
            (((struct o20_float *)(t9))->v) = 1.0f;
            (((struct o1C_float *)(t9))->v) = 1.0f;
            (((struct o18_float *)(t9))->v) = 1.0f;
            t2 = (t2 + 0x14);
            *(unsigned short *)((t9 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x3) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC14A58A;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC202A50); }
        (((struct o22_ushort *)(t0))->v) = (a5 - 13);
        t14 = 0x22;
    }
    return t14;
}

int FUN_0c14c5c8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t17;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t17 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x9, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        FUN_0c03744a(((((struct oC8_int *)(t0))->v)), 0x9, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned int *)((t0 + 0x4)) = 0xC14C692;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - 110.599998f);
        FUN_0c07e2f4(t0, 0x7);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC202C30); }
        t17 = (FUN_0c064d24(t0, 0x1, 0x24, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xFFFFFFF0));
    }
    return t17;
}

int FUN_0c14e7d8(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t16;
    register int t14;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14E730;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        if ((*(signed char *)(((int)stk + 0))) != 0) {
            *(unsigned int *)((t0 + 0x34)) = 0x1C00;
        }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t0 + 0x28));
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x21F;
        t14 = (((struct oC4_int *)(t0))->v);
        (((struct o20_float *)(t14))->v) = 1.0f;
        (((struct o1C_float *)(t14))->v) = 1.0f;
        (((struct o18_float *)(t14))->v) = 1.0f;
        t15 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t15))->v) = 0.100000001f;
        (((struct o88_float *)(t15))->v) = 0.100000001f;
        (((struct o84_float *)(t15))->v) = 0.100000001f;
        t16 = 0x84;
    }
    return t16;
}

int FUN_0c0e648c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t8;
    register int t2;
    register int t4;

    t0 = *(int *)0xC540DD4;
    t1 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t8 = 0x0;
    if (t1 != 0) {
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + t1) + t2) + 0x0));
            FUN_0c03744a(t4, 0x0, 0x55, (*(int *)0xC4B410C));
            t2 = (t2 + 0x4);
            *(unsigned short *)((t4 + 0x6)) = 0xF;
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = 0xC0E6168;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o48_float *)(t1))->v) = 0.5f;
        (((struct o44_float *)(t1))->v) = 0.5f;
        (((struct o40_float *)(t1))->v) = 0.5f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(0xC1CBDD0); }
        FUN_0c0582de((t1 + 0x28), (t0 + 0x64));
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o41C_ushort *)(t1))->v) = ((((struct o24_short *)(a4))->v));
        t8 = t1;
    }
    return t8;
}

int FUN_0c135b00(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t18;
    register float u6;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 8)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t18 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC135C10;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        u6 = *(float *)(((int)stk + 8));
        (((struct o48_float *)(t0))->v) = u6;
        (((struct o44_float *)(t0))->v) = u6;
        (((struct o40_float *)(t0))->v) = u6;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        t18 = *(short *)(((int)stk + 16));
        *(unsigned short *)((t0 + 0x1C)) = t18;
    }
    return t18;
}

int FUN_0c13dc4c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t14;
    register float u3;
    register int t5;
    register int t6;
    register int t12;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13DBE2;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u3 = *(float *)0xC13DDA8;
        (((struct o48_float *)(t0))->v) = u3;
        (((struct o44_float *)(t0))->v) = u3;
        (((struct o40_float *)(t0))->v) = u3;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x34)) = 0x4000;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x34)));
        *(unsigned int *)((t0 + 0x3C)) = 0x4000;
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t6) + 0x0))), 0x0, 0x5, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x6)) = 0xF;
            t12 = *(int *)((((0xC4 + t0) + t6) + 0x0));
            t6 = (t6 + 0x4);
            (((struct o78_uint *)(t12))->v) = t5;
            t5 = (t5 + 0x8000);
            if ((unsigned int)t6 >= (unsigned int)0x8) {
                break;
            }
        }
        t14 = 0x78;
    }
    return t14;
}

int FUN_0c048fc6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, (a5 + 0x11), (*(int *)0xC4B410C));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(((a5 * 0x34) + 0xC240A7C)); }
        (((struct o6C_float *)(t2))->v) = 0.0f;
        (((struct o70_float *)(t2))->v) = (((((struct o70_float *)(t2))->v)) - 20.0f);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 0.0f;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC048B0A;
        u0 = (((struct o0_float *)0xC0490A0)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o2C_float *)0xC0490A0)->v));
        u0 = (((struct o8_float *)0xC0490A0)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct oC_float *)0xC0490A0)->v));
        t1 = 0x48;
    }
    return t1;
}
