/* game/flow: functions 0C0F8430-0C0F9496, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0527e6(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c0f7944(void);
int FUN_0c0f7a38(void);
int FUN_0c0f7c1c(void);
int FUN_0c0f7f08(void);
int FUN_0c0f804c(void);
int FUN_0c0f821a(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c0f8430(int a4);
int FUN_0c0f886e(int a4, int a5);
int FUN_0c0f8920(int a4, int a5, int a6, int a7);
int FUN_0c0f89a6(int a4, int a5, int a6);
int FUN_0c0f8abe(void);
int FUN_0c0f8b6c(int a4, int a5, int a6, int a7);
int FUN_0c0f8c10(int a4);
int FUN_0c0f8ca0(int a4, int a5, int a6, int a7);
int FUN_0c0f8d64(int a4);
int FUN_0c0f8dfc(int a4);
int FUN_0c0f90cc(void);
int FUN_0c0f9116(void);
int FUN_0c0f916a(void);
void FUN_0c0f91d4(void);

int FUN_0c0f8430(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xE, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xE, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F8298;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c0f886e(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t1 = FUN_0c037320(0x9, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t8 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x9, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((((((struct oD4_int *)(t2))->v)) + 0x0)) = 0x0;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0F84C0;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o22_ushort *)(t2))->v) = (*(int *)(((int)stk + 0)));
        t8 = 0x22;
    }
    return t8;
}

int FUN_0c0f8920(int a4, int a5, int a6, int a7)
{
    register float u0;

    u0 = *(float *)0xC0F8A18;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct oB0_float *)(a4))->v) = u0;
        } else {
            (((struct oB0_float *)(a4))->v) = 0.0f;
        }
    }
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - (u0 / (float)(*(short *)((a4 + 0x1C)))));
        if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
            (((struct oB0_float *)(a4))->v) = 0.0f;
        }
    } else {
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + (u0 / (float)(*(short *)((a4 + 0x1C)))));
        if (!(u0 > ((((struct oB0_float *)(a4))->v)))) {
            (((struct oB0_float *)(a4))->v) = u0;
        }
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)((((struct o22_short *)(a4))->v))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return 0x22;
}

int FUN_0c0f89a6(int a4, int a5, int a6)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t9;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t1 = FUN_0c037320(0x14, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t9 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x14, (*(int *)0xC4B410C));
        *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x40F;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t2 + 0x4)) = 0xC0F8920;
        *(unsigned short *)((t2 + 0x1C)) = (*(int *)(((int)stk + 0)));
        (((struct o22_ushort *)(t2))->v) = (*(int *)(((int)stk + 4)));
        t9 = 0x22;
    }
    return t9;
}

int FUN_0c0f8abe(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t8;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320((*(int *)((0xC1FB520 + (t0 << 2)))), (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t8 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, (*(int *)((0xC1FB520 + (t0 << 2)))), (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t4))->v) = 0x1;
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t4 + 0x4)) = 0xC0F8A38;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t8 = t0;
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return t8;
}

int FUN_0c0f8b6c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB0_float *)(a4))->v) = 1.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0121666668f);
                    if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
                        return FUN_0c03f346(a4, 0xC541F43, a6, a7);
                    }
                    return 0xB0;
                }
                t1 = 0x22;
                if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)((((struct o22_short *)(a4))->v))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0022499999f);
            t1 = 0xB0;
            if (!(((((struct oB0_float *)(a4))->v)) > (*(float *)0xC0F8C80))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        return t2;
    }
    t1 = t0;
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0x6) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0f8c10(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x14, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x14, (*(int *)0xC4B410C));
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x40F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F8B6C;
        (((struct o22_ushort *)(t1))->v) = a4;
        t0 = 0x22;
    }
    return t0;
}

int FUN_0c0f8ca0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = a5;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC1FB528 + ((*(signed char *)((a4 + 0x2))) << 1))));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
        if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c03f346(a4, t1, a6, a7);
        }
        u0 = (((struct oBC_float *)(a4))->v);
        (((struct oB8_float *)(a4))->v) = u0;
        (((struct oB4_float *)(a4))->v) = u0;
        return 0xB4;
    }
    t2 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
    if ((int)(short)(t2 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, t1, a6);
        t1 = 0x2;
        if ((*(signed char *)((t0 + 0x2))) != 0) {
            t1 = 0x1;
        }
        return thunk_FUN_0c05abb2(t1, 0x0);
    }
    return (short)(t2 - 1);
}

int FUN_0c0f8d64(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xE, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0xE, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F8CA0;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c0f8dfc(int a4)
{
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o28_float *)(a4))->v) = ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x80)) - 64) * 32.0f);
        u0 = -1400.0f;
        u0 = u0 + 32.0f * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x80)) - 64));
        (((struct o30_float *)(a4))->v) = u0;
        u0 = 500.0f;
        u0 = u0 + 32.0f * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x80)) - 64));
        (((struct o2C_float *)(a4))->v) = u0;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 40.0f);
    return 0x2C;
}

int FUN_0c0f90cc(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1D, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x1D, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x21;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F8EA8;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0f9116(void)
{
    register int t4;
    int t2;

    *(unsigned char *)0xC5421DE = ((*(signed char *)0xC5421DE) + 0x1);
    t4 = 0x14;
    if (((*(signed char *)0xC5429A8) == 0) && (t2 = *(signed char *)0xC5421DE, (t2 & 1) != 0)) {
        t4 = 0x15;
    }
    return FUN_0c059c7a(t4, 0x0);
}

int FUN_0c0f916a(void)
{
    int stk[2];

    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    (((struct o2_uchar *)0xC541F42)->v) = 0x0;
    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
    FUN_0c03eff6();
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    FUN_0c036de8(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c05a292(0xB, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    return FUN_0c0527e6();
}

void FUN_0c0f91d4(void)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t10;
    register int t20;
    register int t32;
    register int t48;
    register int t58;
    register int t76;
    register int t77;
    register int t92;
    register int t104;
    register int t105;
    register int t116;
    register int t123;
    register int t139;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned int)(unsigned char)t0 >= (unsigned int)0x11) {
        return;
    }
    switch (((unsigned char)t0 << 1)) {
        case 0:
        {
            t2 = ((int (*)(int, int))(FUN_0c03ea04))(0x5, 0x0);
            *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
            FUN_0c0f7944();
            FUN_0c0f7a38();
            FUN_0c0f8c10(0xA);
            (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            t10 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t10 - 1);
            if ((int)(short)(t10 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f821a((*(int *)(((((unsigned char)(*(signed char *)0xC541F43) - 1) << 2) + 0xC1FB544))), 0x3C);
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 2:
        {
            t20 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t20 - 1);
            if ((int)(short)(t20 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f821a((*(int *)(((((unsigned char)(*(signed char *)0xC541F43) - 1) << 2) + 0xC1FB544))), 0x3C);
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        case 14:
        case 16:
        {
            t32 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t32 - 1);
            if ((int)(short)(t32 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f821a((*(int *)(((((unsigned char)(*(signed char *)0xC541F43) - 1) << 2) + 0xC1FB544))), 0x3C);
                if ((unsigned char)(*(signed char *)0xC541F43) != 5) {
                } else {
                    FUN_0c0f9116();
                }
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 18:
        {
            t48 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t48 - 1);
            if ((int)(short)(t48 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f886e(0x0, 0xC);
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 20:
        {
            t58 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t58 - 1);
            if ((int)(short)(t58 - 1) > 0) {
            } else {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f8abe();
                FUN_0c0f89a6(0x0, ((*(short *)0xC541F4E) - 45), 0xC);
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 22:
        {
            if ((*(short *)0xC541F4E) == 45) {
                FUN_0c0573cc(0xFF000000, 0x0, 0x2C);
            }
            t76 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t76 - 1);
            if ((int)(short)(t76 - 1) > 0) {
            } else {
                t77 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c03ea04))(0x5, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f7c1c();
                FUN_0c0f8430(0x0);
                FUN_0c0f8430(0x1);
                FUN_0c0f8430(0x2);
                FUN_0c0f886e(0x1, 0xE);
                (((struct o8_uint *)0xC542440)->v) = 0xFFFFFFFF;
                (((struct o4_uint *)0xC542440)->v) = 0xFFFFFFFF;
                (((struct o0_uint *)0xC542440)->v) = 0xFFFFFFFF;
                FUN_0c0573c0(0xFF000000, 0x0, 0x3C);
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 24:
        {
            t92 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t92 - 1);
            if ((int)(short)(t92 - 1) <= 0) {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 26:
        {
            if ((*(short *)0xC541F4E) == 32) {
                FUN_0c0573cc(0xFF000000, 0x0, 0x1E);
            }
            t104 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t104 - 1);
            if ((int)(short)(t104 - 1) <= 0) {
                t105 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c03ea04))(0x5, 0x2, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f7f08();
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        case 28:
        {
            t116 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t116 - 1);
            if ((int)(short)(t116 - 1) <= 0) {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f804c();
                FUN_0c0f90cc();
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
                FUN_0c056e44(0x22, 0x2);
    return;
            }
            return;
        }
        case 30:
        {
            t123 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t123 - 1);
            if ((int)(short)(t123 - 1) <= 0) {
                *(unsigned short *)0xC541F4E = (*(short *)((0xC1FB288 + ((unsigned char)(*(signed char *)0xC541F43) << 1))));
                FUN_0c0f886e(0x2, 0x11);
                (((struct o2_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            return;
        }
        default:
        {
            if ((*(short *)0xC541F4E) == 32) {
                FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
            }
            t139 = *(short *)0xC541F4E;
            *(unsigned short *)0xC541F4E = (t139 - 1);
            if ((int)(short)(t139 - 1) <= 0) {
                (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
                (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                (((struct o1_uchar *)0xC541F41)->v) = 0x0;
            }
            return;
        }
    }
}
