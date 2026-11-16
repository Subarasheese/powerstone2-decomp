/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o24_short { char p[0x24]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o46C_int { char p[0x46C]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0100a2(int, int, int, int);
int FUN_0c0221b0(void);
int FUN_0c02d88a(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05b2b0(void);
int FUN_0c11b708(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c187798(int);
int FUN_0c187a88(int, int, int);
int FUN_0c187d24(int, int);
int FUN_0c187d74(int, int);
int FUN_0c187d88(int);
int gdFsReinit(int);
int FUN_0c132698(int a4, int a5, int a6, int a7);
int FUN_0c11bae2(int a4, int a5, int a6);
int FUN_0c15fa88(int a4);
int FUN_0c15be1e(int a4, int a5, int a6, int a7);
int FUN_0c0163c4(int a4, int a5, int a6, int a7);
int FUN_0c010220(int a4, int a5, int a6, int a7);
int FUN_0c0222a4(int a4, int a5, int a6);
int FUN_0c0392d4(int a4, int a5, int a6);

int FUN_0c132698(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x8) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.200000003f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.200000003f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.200000003f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
        return 0x20;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c11bae2(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t2;
    register int t12;
    register int t7;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t12 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC11B708;
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned short *)((t2 + 0x1E)) = (*(int *)(((int)stk + 16)));
        FUN_0c11b708(t2, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16), *(int *)((int)stk + 16 + 20), *(int *)((int)stk + 16 + 24), *(int *)((int)stk + 16 + 28));
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x8);
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0x18);
        *(int *)((int)stk + 4) = 0x64;
        t7 = (*(int *)0xC2920C8);
        *(int *)((int)stk + 0) = t7;
        t12 = (FUN_0c15b478(0xFFFFFFFF, (t2 + 0x64), t2, (*(int *)((((((struct o46C_int *)((*(int *)0xC4B410C)))->v)) + 0x0))), t7, 0x64, (((int)stk + 12) + 0x18), (((int)stk + 16) + 0x8)));
    }
    return t12;
}

int FUN_0c15fa88(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t3 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC15FB04;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c187798(t3);
        FUN_0c187798(t0);
        FUN_0c187798(t1);
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x1;
        t0 = (((struct oC4_int *)(t2))->v);
        FUN_0c03744a(t0, 0x0, 0x4E, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        t4 = 0xF;
    }
    return t4;
}

int FUN_0c15be1e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(int *)((a4 + 0x10));
    if (((int)(*(signed char *)((t2 + 0x41D))) < (int)0x9) && (t0 = (((struct o24_short *)(t2))->v), t1 = (((struct o22_short *)(a4))->v), t0 == t1)) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0x3;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) >= (int)(*(short *)((a4 + 0x1C)))) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x18, (*(int *)0xC4B40CC));
        }
        return 0x20;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0163c4(int a4, int a5, int a6, int a7)
{
    int stk[34];
    register int t0;
    register int t1;
    register int t3;
    register int t13;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c187d88(a4);
    t1 = FUN_0c187d88(a5);
    if ((int)(t1 + t0) > (int)(*(int *)(((int)stk + 0)))) {
        t3 = *(int *)(((int)stk + 0));
        *(unsigned char *)((a5 + ((((int)((unsigned int)((int)((unsigned int)(t3 - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t3 - t0))) ? 1u : 0u))) >> 1) << 1))) = 0x0;
    }
    t13 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 0)) = (t13 + a4);
    FUN_0c187d74((((int)stk + 0) + 0x8), (t13 + a4));
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x0;
    FUN_0c187d24(a4, a5);
    FUN_0c187d24(a4, (((int)stk + 0) + 0x8));
    return (FUN_0c187d88(a5));
}

int FUN_0c010220(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    int t6;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)(((a5 << 2) + 0xC20AFD8));
    (((struct o0_uint *)0xC304404)->v) = t0;
    for (;;) {
        t2 = FUN_0c0100a2(t0, (*(int *)(((int)stk + 4))), ((int)stk + 0), a7);
        if (t2 == 0) {
            return (*(int *)(((int)stk + 0)));
        }
        (((struct o4_uint *)0xC304404)->v) = (((((struct o4_int *)0xC304404)->v)) + 0x1);
        t6 = t5;
        for (;;) {
            t6 = (gdFsReinit(t6));
            if (t6 == 0) {
                break;
            }
            if ((t6 != -23) && ((t6 != -5) && (t6 != -33))) continue;
            FUN_0c05b2b0();
            FUN_0c02d88a();
            for (;;) {
            }
        }
    }
}


int FUN_0c0392d4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x371A));
    if (a5 != 0) {
        t1 = (((t0 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
        if (a5 != 1) {
            t1 = (((0x21E4 + (0x444 + a4)) + (t0 * 0x2D0)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
            if (a5 != 2) {
                t1 = (((0x2784 + (0x444 + a4)) + (t0 * 0x2D0)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
                if (a5 != 3) {
                    t1 = (((0x2D24 + (0x444 + a4)) + (t0 * 0x2D0)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
                    if (a5 != 4) {
                        t1 = 0x0;
                    }
                }
            }
        }
        t0 = t1;
    } else {
        t0 = (*(int *)(((0xC4 + a4) + (a6 << 2))));
    }
    return t0;
}
