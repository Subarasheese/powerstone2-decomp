/* Straight-line functions with calls and guards (batch gen_gc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c1116a8(int, int, int);
int FUN_0c16af78(int, int, int);
int FUN_0c187a88(int, int, int);
int nlRand(void);
int FUN_0c152570(int a4, int a5, int a6, int a7);
int FUN_0c16b2cc(int a4, int a5, int a6, int a7);
int FUN_0c1362e4(int a4, int a5, int a6, int a7);
void FUN_0c16944a(int a4, int a5, int a6, int a7);
int FUN_0c0d9b62(int a4, int a5, int a6, int a7);
int FUN_0c14a7c0(int a4, int a5, int a6, int a7);
int FUN_0c127068(int a4, int a5, int a6, int a7);
void FUN_0c15f60a(int a4, int a5, int a6, int a7);
int FUN_0c1117a0(int a4, int a5, int a6);
void FUN_0c12764c(int a4, int a5, int a6, int a7);
int FUN_0c0f70cc(int a4, int a5, int a6, int a7);
int FUN_0c0f98ce(int a4, int a5, int a6, int a7);
int FUN_0c1312e2(int a4, int a5, int a6, int a7);
int FUN_0c136208(int a4, int a5, int a6, int a7);
int FUN_0c162488(int a4, int a5, int a6, int a7);

int FUN_0c152570(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t1;
    register int t2;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x1, 0xA, a7);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152AD4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + t0) + t2) + 0x0));
            FUN_0c03744a(t4, 0x2, 0x23, (*(int *)0xC4B40CC));
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            *(unsigned short *)((t4 + 0x6)) = 0x11;
            (((struct o18_float *)(t4))->v) = 1.0f;
            (((struct o1C_float *)(t4))->v) = 1.0f;
            t1 = (t1 + 0x1);
            (((struct o20_float *)(t4))->v) = 1.0f;
            (((struct o24_float *)(t4))->v) = (1.0f + 1.0f);
            t2 = (t2 + 0x4);
            if ((int)(signed char)t1 >= (int)0xA) {
                break;
            }
        }
        t6 = 0x24;
    }
    return t6;
}

int FUN_0c16b2cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t15;
    register float u8;
    register int t13;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t15 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC16B224;
        *(unsigned char *)((t0 + 0x2)) = a5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        FUN_0c16af78(t0, 0x4, 0x3);
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((0x41C + t0) + 0x1))), 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u8 = *(float *)0xC16B3FC;
        (((struct o4C_float *)(t0))->v) = (-(((((struct o4C_float *)(a4))->v)) * u8));
        (((struct o54_float *)(t0))->v) = (-(((((struct o54_float *)(a4))->v)) * u8));
        (((struct o50_float *)(t0))->v) = (-(((((struct o50_float *)(a4))->v)) * u8));
        t13 = (int)((int)(nlRand()) % (int)0x33);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + (float)((-t13) + 0x32));
        t15 = ((-t13) + 0x32);
    }
    return t15;
}

int FUN_0c1362e4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t10;
    register float u2;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x2, 0x1, a7);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC13648E;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u2 = *(float *)0xC136418;
        (((struct o48_float *)(t0))->v) = u2;
        (((struct o44_float *)(t0))->v) = u2;
        (((struct o40_float *)(t0))->v) = u2;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        t7 = (((struct oC4_int *)(t0))->v);
        *(unsigned char *)((t7 + 0x0)) = 0x1;
        *(unsigned short *)((t7 + 0x6)) = 0x1F;
        FUN_0c187a88((((0x90 + t7) + 0x4) & 0xFFFFFFF8), (*(int *)((t7 + 0x8))), 0x698);
        *(unsigned int *)((t7 + 0x8)) = (((0x90 + t7) + 0x4) & 0xFFFFFFF8);
        (((struct o8C_float *)(t7))->v) = 1.0f;
        (((struct o88_float *)(t7))->v) = 1.0f;
        (((struct o84_float *)(t7))->v) = 1.0f;
        t10 = 0x84;
    }
    return t10;
}


int FUN_0c0d9b62(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;

    t0 = FUN_0c03f444(0x2, 0x0, 0x1, a7);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0D9B1C;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((a4 + 0x40)); }
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        if (a5 != 0) {
            if (a5 != 1) {
            } else {
                FUN_0c064d24(t0, 0x2, 0xD, 0x1, 0x10, 0x0, 0x0, 0x0);
            }
        } else {
            FUN_0c064d24(t0, 0x2, 0xC, 0x1, 0x10, 0x0, 0x0, 0x0);
        }
        (((struct o12E_ushort *)(t0))->v) = 0xFFFFFFFF;
        (((struct o12C_ushort *)(t0))->v) = 0xC00;
        (((struct o12A_ushort *)(t0))->v) = 0x0;
        t13 = 0x12A;
    }
    return t13;
}

int FUN_0c14a7c0(int a4, int a5, int a6, int a7)
{
    register float u0;
    register int t1;
    register int t2;
    register int t13;
    register int t3;
    register int t4;

    u0 = *(float *)0xC14A8CC;
    t1 = 0x2;
    for (;;) {
        t2 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
        t13 = t2;
        if (t2 != 0) {
            t3 = nlRand();
            t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
            if ((int)t3 >= 0) {
                t4 = (t3 & 0x1);
            }
            FUN_0c03744a(((((struct oC4_int *)(t2))->v)), (t4 + 0x2), 0x9, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t2 + 0x2)) = 0xD;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            *(unsigned int *)((t2 + 0x4)) = 0xC14A878;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) + u0);
            t13 = 0x30;
        }
        t1 = (t1 - 0x1);
        if (t1 == 0) {
            break;
        }
    }
    return t13;
}

int FUN_0c127068(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;
    register int t1;
    register float u10;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t13 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), t1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC12711E;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 300.0f);
        u10 = (((struct o0_float *)0xC1271B8)->v);
        (((struct o48_float *)(t0))->v) = u10;
        (((struct o44_float *)(t0))->v) = u10;
        (((struct o40_float *)(t0))->v) = u10;
        (((struct o70_float *)(((((struct oC8_int *)(t0))->v))))->v) = ((((struct o4_float *)0xC1271B8)->v));
        t13 = 0x70;
    }
    return t13;
}

void FUN_0c15f60a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((((a4 << 2) << 2) + 0xC203930));
    t1 = FUN_0c03f444(0x8, 0x0, 0x7, a7);
    if (t1 != 0) {
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, t0, (*(int *)0xC4B4114));
        *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x400);
        (((struct o14_float *)(t2))->v) = 1.0f;
        t2 = 0x4;
        for (;;) {
            t3 = *(int *)((((0xC4 + t1) + t2) + 0x0));
            FUN_0c03744a(t3, 0x1, t0, (*(int *)0xC4B4114));
            t2 = (t2 + 0x4);
            *(unsigned short *)((t3 + 0x6)) = 0x1F;
            if ((unsigned int)t2 > (unsigned int)0x18) {
                break;
            }
        }
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC15F4BC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(((((a4 << 2) << 2) + 0xC203930) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x40)) = *(struct mv3 *)(0xC203960); }
    }
}

int FUN_0c1117a0(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                if (t0 != 4) {
                    return t0;
                }
                t1 = FUN_0c1116a8(a4, a5, a6);
                if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                    return FUN_0c03f346(a4);
                }
                return t1;
            }
            return FUN_0c1116a8(a4, a5, a6);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC291344); }
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    t0 = 0x0;
    if ((int)(*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) >= 0) {
        t0 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

void FUN_0c12764c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), 0x2, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC127700;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC127700;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t0))->v) = ((((struct o168_float *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(((((a5 << 1) + a5) << 2) + 0xC201C04)); }
    }
}

int FUN_0c0f70cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3, a7);
    t1 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t3) + 0x0))), 0x0, t2, (*(int *)0xC4B410C));
            t4 = 0xC4;
            t5 = t2;
            t4 = (t4 + t0);
            t4 = (t4 + t3);
            t4 = (*(int *)((t4 + 0x0)));
            t3 = ((t2 << 1) + t5);
            t5 = 0xC187798;
            t4 = (t4 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)(((t3 << 2) + 0xC1FB1B0)); }
            t2 = (t2 + 0x1);
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F6D16;
        (((struct o28_float *)(t0))->v) = 0.1875f;
        (((struct o2C_float *)(t0))->v) = 0.3046875f;
        (((struct o30_float *)(t0))->v) = -5.0f;
        (((struct o44_float *)(t0))->v) = 0.125f;
        (((struct o40_float *)(t0))->v) = 0.125f;
        (((struct o48_float *)(t0))->v) = 0.00156250002f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t1 = 0xA9;
    }
    return t1;
}

int FUN_0c0f98ce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3, a7);
    t1 = t0;
    if (t0 != 0) {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t3) + 0x0))), 0x0, t2, (*(int *)0xC4B410C));
            t4 = 0xC4;
            t5 = t2;
            t4 = (t4 + t0);
            t4 = (t4 + t3);
            t4 = (*(int *)((t4 + 0x0)));
            t3 = ((t2 << 1) + t5);
            t5 = 0xC187798;
            t4 = (t4 + 0x6C);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)(((t3 << 2) + 0xC1FB564)); }
            t2 = (t2 + 0x1);
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F94CC;
        (((struct o28_float *)(t0))->v) = 0.1875f;
        (((struct o2C_float *)(t0))->v) = 0.3046875f;
        (((struct o30_float *)(t0))->v) = -5.0f;
        (((struct o44_float *)(t0))->v) = 0.125f;
        (((struct o40_float *)(t0))->v) = 0.125f;
        (((struct o48_float *)(t0))->v) = 0.00156250002f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t1 = 0xA9;
    }
    return t1;
}

int FUN_0c1312e2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t9;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xE38);
        *(unsigned int *)((t0 + 0x3C)) = (*(int *)((a4 + 0x3C)));
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x38)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC131258;
        t5 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t5, 0x1, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t5)) = *(struct mv3 *)(0xC2A13DC); }
        (((struct o78_uint *)(t5))->v) = 0x0;
        (((struct o80_uint *)(t5))->v) = 0x0;
        (((struct o7C_uint *)(t5))->v) = 0xFFFFC000;
        (((struct o70_float *)(t5))->v) = 100.0f;
        t9 = 0x70;
    }
    return t9;
}

int FUN_0c136208(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC136108;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t0))->v) = 0.400000006f;
        (((struct o44_float *)(t0))->v) = 0.400000006f;
        (((struct o40_float *)(t0))->v) = 0.400000006f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC201EB0); }
        return FUN_0c0582de((t0 + 0x28), (((((struct oE4_int *)((*(int *)((t0 + 0x10)))))->v)) + 0x28));
    }
    return t0;
}

int FUN_0c162488(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t9;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC162348;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x46;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t7 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t7, 0x0, 0x29, (*(int *)0xC4B40D0));
        *(unsigned char *)((t7 + 0x0)) = 0x1;
        *(unsigned short *)((t7 + 0x6)) = 0x23F;
        (((struct o8C_float *)(t7))->v) = 4.0f;
        (((struct o88_float *)(t7))->v) = 4.0f;
        (((struct o84_float *)(t7))->v) = 4.0f;
        (((struct o18_float *)(t7))->v) = 1.0f;
        (((struct o20_float *)(t7))->v) = 0.200000003f;
        (((struct o1C_float *)(t7))->v) = 0.200000003f;
        t9 = 0x1C;
    }
    return t9;
}
