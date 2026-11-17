/* game/player: functions 0C0A06CC-0C0A104A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c070320(int);
int FUN_0c073566(int, int, float);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f566(void);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a0cfc(int);
int FUN_0c0a0d68(int, int, int, int);
int FUN_0c0a0ec0(int);
int FUN_0c13187c(int);
int FUN_0c13241a(int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c0a06cc(int a4);
int FUN_0c0a0702(int a4);
int FUN_0c0a083a(int a4, float f4);
int FUN_0c0a0906(int a4);
int FUN_0c0a09f0(int a4);
int FUN_0c0a0b0a(int a4, float f4);
int FUN_0c0a0c04(int a4);
int FUN_0c0a0dea(int a4, int a5, int a6, int a7);
int FUN_0c0a0e02(int a4, int a5, int a6);
int FUN_0c0a0efc(int a4, int a5, int a6);
int FUN_0c0a0f18(int a4);

int FUN_0c0a06cc(int a4)
{
    register int t0;

    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x1;
    }
    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x0;
    }
    return 0x63;
}

int FUN_0c0a0702(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x2, 0x11, (t1), 0x2, 0x11);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x4, 0x5E, 0xFFFFFFFF, 0x4, 0x5E);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    FUN_0c07d086(a4, 0x0, 0.0f);
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0a083a(int a4, float f4)
{
    int stk[9];
    register float u1;
    register int t30;
    register int t31;
    register int t32;
    register int t35;

    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u1 != 29) {
        if ((int)u1 != 59) {
        } else {
            FUN_0c073566(a4, 0x17, f4);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), (((int)stk + 12) + 0x4));
            FUN_0c14f238((((int)stk + 12) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
        }
    } else {
        FUN_0c073566(a4, 0x11, f4);
        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), (((int)stk + 12) + 0x4));
        FUN_0c14f238((((int)stk + 12) + 0x4), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
    }
    t30 = FUN_0c037bf6(a4);
    if ((unsigned char)t30 != 0) {
        *(int *)((int)stk + 8) = 0x12;
        *(int *)((int)stk + 4) = 0x2;
        t31 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t31;
        t32 = t31;
        *(int *)((int)stk + 0) = t32;
        FUN_0c07e79c(a4, t31, 0x2, 0x12, t32, 0x2, 0x12);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o37A4_float *)(a4))->v) = 0.0f;
        t35 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t35))->v) = ((*(signed char *)((t35 + 0x15))) + 0x1);
        return 0x15;
    }
    FUN_0c038362(a4);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    return 0x374B;
}

int FUN_0c0a0906(int a4)
{
    register int t0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    return FUN_0c070320(a4);
}

int FUN_0c0a09f0(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x5, 0x2, (t1), 0x5, 0x2);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x8, 0xFFFFFFFF, 0x5, 0x8);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    FUN_0c07d086(a4, 0x0, (*(float *)0xC0A0B50));
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0a0b0a(int a4, float f4)
{
    int stk[6];
    register float u1;
    register int t3;
    register int t57;
    register int t60;
    register int t64;

    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u1 != 42) {
        if ((int)u1 != 70) {
            if ((int)u1 != 99) {
                if ((int)u1 != 110) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t3 = (((struct o3770_int *)(a4))->v);
                    (((struct o15_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x15))) + 0x1);
                }
            } else {
                FUN_0c073566(a4, 0x32, f4);
                FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
                thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
                FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
            }
        } else {
            FUN_0c073566(a4, 0x31, f4);
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
            FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
        }
    } else {
        FUN_0c073566(a4, 0x30, f4);
        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
        FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
    }
    t57 = FUN_0c037bf6(a4);
    if ((unsigned char)t57 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0A0CA0);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t60 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t60))->v) = ((*(signed char *)((t60 + 0x15))) + 0x1);
        t64 = 0x15;
    } else {
        FUN_0c038362(a4);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t64 = 0x374B;
    }
    return t64;
}

int FUN_0c0a0c04(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
        }
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    return 0x50;
}

int FUN_0c0a0dea(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3728));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c0a0cfc(a4);
        }
        return FUN_0c0a0d68(a4, a5, a6, a7);
    }
    return FUN_0c0a0cfc(a4);
}

int FUN_0c0a0e02(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x17))) != 0) {
        FUN_0c13241a(a4, a5);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x0, (t0), 0x6, 0x0);
        *(unsigned short *)((a4 + 0x1C)) = 0x32;
    } else {
        FUN_0c13187c(a4);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x1, (t0), 0x6, 0x1);
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0a0efc(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0a0ec0(a4);
    }
    return FUN_0c0a0e02(a4, a5, a6);
}

int FUN_0c0a0f18(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        FUN_0c037bf6(a4);
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 == 1) {
            if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 0x8E) {
                return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
            }
            return 0x8C;
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
            }
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x3, (t0), 0x6, 0x3);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
    } else {
        if ((*(signed char *)((a4 + 0x371C))) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x2;
            t2 = (t0);
            t3 = t0;
            t0 = 0x2;
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            t1 = 0x8;
            t2 = (t3);
            t0 = 0x8;
        }
        FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c037bf6(a4);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
