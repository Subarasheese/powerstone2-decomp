/* Straight-line functions with calls and guards (batch gen_pz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c07053a(int, int, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2ab6(int, int);
extern int FUN_0c0c2d56();
int FUN_0c0c3054(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c148f08(int);
int FUN_0c14c1b4(int, int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c07b798(int a4, int a5, int a6, int a7);
int FUN_0c087a42(int a4, int a5, int a6);
int FUN_0c0d704c(int a4, int a5, int a6, int a7);
int FUN_0c0b5b8e(int a4, int a5, int a6);
int FUN_0c14914c(int a4, int a5, int a6);
int FUN_0c0a74ce(int a4, int a5, int a6);
int FUN_0c0dd674(int a4, int a5, int a6, int a7);

int FUN_0c07b798(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t18;
    int t1;
    int t16;

    if ((((((struct o22_short *)(a4))->v)) == 0) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    t2 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t2 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c085d0c))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t9 = *(int *)(((0x118 + a4) + 0x4));
        t10 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t9))->v) = 1.0f;
        (((struct o9C_float *)(t9))->v) = 1.0f;
        (((struct oA0_float *)(t10))->v) = 1.0f;
        (((struct o9C_float *)(t10))->v) = 1.0f;
        t11 = *(int *)(((0x118 + a4) + 0x4));
        t12 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t11))->v) = 1.0f;
        (((struct o98_float *)(t12))->v) = 1.0f;
        (((struct o94_float *)(t11))->v) = 1.0f;
        (((struct o94_float *)(t12))->v) = 1.0f;
        return FUN_0c037bf6(a4, t12, t11);
    }
    if (!((*(float *)0xC07B898) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t16 = (((struct o22_short *)(a4))->v), t16 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t18 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t18))->v) = ((*(signed char *)((t18 + 0x15))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c087a42(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        }
        return FUN_0c085d0c(a4);
    }
    if (!(10.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x1;
            if ((*(signed char *)((a4 + 0x3731))) == 0) {
                t1 = 0x0;
            }
            FUN_0c0c3054(((((struct o376C_int *)(a4))->v)), t0, t1);
            return FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
        }
        return 0x22;
    }
    return 0x8C;
}

int FUN_0c0d704c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        t2 = t1;
        if (t1 != 1) {
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                t1 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7);
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t2 = 0x3C;
            }
        }
        t1 = t2;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        FUN_0c187798(a4, a5, a6);
        *(unsigned int *)((a4 + 0x38)) = t0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0x0;
        (((struct oA4_uint *)(a4))->v) = 0x0;
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t0 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x0, (*(signed char *)((a4 + 0x1))));
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t2 = 0x3C;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0b5b8e(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t3;

    t0 = 0xF4;
    if (a5 == 0) {
        t0 = 0xE4;
    }
    t3 = *(int *)((a4 + t0));
    FUN_0c187798(a4, a5, a6);
    *(int *)((int)stk + 8) = 0x0;
    FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 8) + 0x4), ((0x38F8 + a4) + 0x1C), 0x0);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 50.0f);
    *(int *)((int)stk + 4) = 0x1;
    FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 4) + 0x8), ((0x38F8 + a4) + 0x1C), 0x1);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - 130.0f);
    *(int *)((int)stk + 0) = 0x2;
    return (FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 0) + 0xC), ((0x38F8 + a4) + 0x1C), 0x2));
}

int FUN_0c14914c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, a5, a6);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        FUN_0c148d04(a4, 0x0);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c042fe0();
    if (t0 != 0) {
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        t1 = *(short *)((a4 + 0x1C));
        if ((int)t1 <= 0) {
            t2 = FUN_0c148f08(a4);
            if (t2 != 0) {
                return FUN_0c148d64(a4, 0x4, 0x0);
            }
            return t2;
        }
        return t1;
    }
    return t0;
}

int FUN_0c0a74ce(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0xE);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c037bf6(a4, t2, t0);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 30.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        t1 = 0x3747;
    }
    return t1;
}

int FUN_0c0dd674(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, a5, a6);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}
