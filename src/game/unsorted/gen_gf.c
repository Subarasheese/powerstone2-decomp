/* Straight-line functions with calls and guards (batch gen_gf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c169524(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c12d748(int a4, int a5, int a6, int a7);
int FUN_0c14b4b4(int a4, int a5, int a6, int a7);
void FUN_0c168fa8(int a4, int a5, int a6, int a7);
void FUN_0c0ee318(int a4, int a5, int a6, int a7);
int FUN_0c1415e0(int a4, int a5, int a6, int a7);
int FUN_0c168b14(int a4, int a5, int a6, int a7);
int FUN_0c0f085c(int a4, int a5, int a6, int a7);
int FUN_0c169b38(int a4, int a5, int a6, int a7);
int FUN_0c13c890(int a4, int a5, int a6, int a7);
int FUN_0c14a104(int a4, int a5, int a6, int a7);
int FUN_0c1254e8(int a4, int a5, int a6, int a7);
int FUN_0c0db188(int a4, int a5, int a6, int a7);

int FUN_0c12d748(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t10;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12D7F6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 0)) = t2;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 0))), 0x0, (*(int *)((((signed char)t2 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
        (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1E)) = 0xA;
        t10 = 0xA;
    }
    return t10;
}

int FUN_0c14b4b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;
    register int t7;
    register int t8;
    register float u10;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t13 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0xA, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned int *)((t0 + 0x4)) = 0xC14B584;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        t7 = nlRand();
        t8 = ((~(((~t7) + 0x1) & 0x3F)) + 0x1);
        if ((int)t7 >= 0) {
            t8 = (t7 & 0x3F);
        }
        u10 = *(float *)0xC14B5BC;
        (((struct o54_float *)(t0))->v) = ((math_cos_angle16(((t8 << 8) << 2))) * u10);
        (((struct o4C_float *)(t0))->v) = ((math_sin_angle16(((t8 << 8) << 2))) * u10);
        (((struct o50_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x38)) = ((t8 << 8) << 2);
        t13 = 0x50;
    }
    return t13;
}

void FUN_0c168fa8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t7;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t0 = 0x5;
    if (a7 != 0) {
        t0 = 0x1;
    }
    t2 = FUN_0c03f444(t0, 0x0, 0x2, a7);
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t2 + 0x4)) = 0xC168C20;
        *(unsigned char *)((t2 + 0x2)) = (*(int *)(((int)stk + 16)));
        if ((*(signed char *)((t2 + 0x2))) == 1) {
            FUN_0c07e3ae(t2, 0x54);
            t7 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 16)) = (~((int)0x1 << (int)t7));
            *(int *)((int)stk + 12) = 0x0;
            *(int *)((int)stk + 8) = 0x0;
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t7));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t7)), 0x0, 0x0);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 28)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x34)) = *(struct mv3 *)((*(int *)(((int)stk + 24)))); }
    }
}

void FUN_0c0ee318(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = 0x4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0EE148;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)(((int)stk + 4)) = 0xC1CD0D4;
        t1 = 0x0;
        t2 = 0x60;
        t3 = 0x0;
        for (;;) {
            t5 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t5, 0x0, t2, (*(int *)0xC4B410C));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x6)) = 0xF;
            t7 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t7 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x6C)) = *(struct mv3 *)(((t7 + 0xC) - 12)); }
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t1 >= (int)(*(int *)(((int)stk + 0)))) {
                break;
            }
        }
    }
}

int FUN_0c1415e0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t19;
    register int t1;
    register int t2;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t19 = t0;
    if (t0 != 0) {
        t1 = *(int *)(((int)stk + 0));
        t2 = (((struct oC4_int *)(t0))->v);
        t6 = *(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC));
        *(unsigned int *)(((int)stk + 12)) = (((t1 << 2) << 1) + 0xC2022D4);
        FUN_0c03744a(t2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((((t1 << 2) << 1) + 0xC2022D4) + 0x4))), t6);
        (((struct o68_uint *)(t2))->v) = ((*(int *)(((((*(int *)((((*(int *)(((int)stk + 0))) << 2) + 0xC2022E4))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x6C)) = *(struct mv3 *)(0xC2022EC); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x4001;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC141684;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = (*(short *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)(((int)stk + 4)));
        t19 = *(signed char *)((a4 + 0x3715));
        *(unsigned short *)((t0 + 0x1E)) = t19;
    }
    return t19;
}

int FUN_0c168b14(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC1689EC;
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e3ae(t0, 0x51);
                FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t1)), 0x0, 0xF0);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
            }
        } else {
            t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
            if (t0 != 0) {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned int *)((t0 + 0x4)) = 0xC1689EC;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
            }
        }
    }
    return FUN_0c03f346(a4);
}

int FUN_0c0f085c(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0F076C;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x31;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 100.0f);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 0.100000001f;
        (((struct o40_float *)(t0))->v) = 0.100000001f;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xC3, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
    }
    return t0;
}

int FUN_0c169b38(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC1699B8;
        *(unsigned char *)((t0 + 0x2)) = a5;
        thunk_FUN_0c058310((((((struct oCC_int *)(a4))->v)) + 0x28), (t0 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned int *)((t0 + 0x34)) = 0x1555;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x1, 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        return FUN_0c169524(t0, 0x29, 0x62);
    }
    return t0;
}

int FUN_0c13c890(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t12;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13C7C0;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53255C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)0xC54223C);
        t12 = 0x1B;
    }
    return t12;
}

int FUN_0c14a104(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t9;
    register int t6;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
        t9 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = a4;
            *(unsigned int *)((t1 + 0x4)) = 0xC149FF6;
            (((struct oAC_ushort *)(t1))->v) = 0x1F;
            (((struct oA9_uchar *)(t1))->v) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a5); }
            *(unsigned int *)((t1 + 0x34)) = 0xFFFFC000;
            *(unsigned int *)((t1 + 0x3C)) = 0x0;
            *(unsigned int *)((t1 + 0x38)) = 0x0;
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0xB, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
            t6 = (((struct oC4_int *)(t1))->v);
            *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x1400);
            *(unsigned short *)((t1 + 0x1C)) = (((t0 << 2) + t0) << 1);
            t9 = (((t0 << 2) + t0) << 1);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t9;
}

int FUN_0c1254e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t8;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t8 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), t1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC125582;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0x21F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC125582;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o48_float *)(t0))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t0))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        t8 = 0xB4;
    }
    return t8;
}

int FUN_0c0db188(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t10;
    register int t5;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0DB21C;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x28)); }
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t5 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t5, 0x6, 0x81, (*(int *)0xC4B410C));
        *(unsigned char *)((t5 + 0x0)) = 0x1;
        *(unsigned short *)((t5 + 0x6)) = 0xF;
        t7 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t7, 0x7, 0x81, (*(int *)0xC4B410C));
        *(unsigned char *)((t7 + 0x0)) = 0x1;
        *(unsigned short *)((t7 + 0x6)) = 0xF;
        t10 = 0xF;
    }
    return t10;
}
