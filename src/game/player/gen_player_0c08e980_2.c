/* game/player: functions 0C08E980-0C08FA98, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3850_short { char p[0x3850]; short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07053a(int, int, float);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c085204(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c08e980(int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08ea6c(int a4);
int FUN_0c08eb3e(int a4);
int FUN_0c08eb60(int a4);
int FUN_0c08ec28(int a4);
int FUN_0c08ef58(int a4);
int FUN_0c08ef84(int a4);
int FUN_0c08f2b2(int a4);
int FUN_0c08f434(int a4);
int FUN_0c08f50c(int a4);
int FUN_0c08f678(int a4);
int FUN_0c08f780(int a4);

int FUN_0c08ea6c(int a4)
{
    int t0;
    register int t1;
    register int t2;

    FUN_0c037bf6(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t1 = FUN_0c07d1fc(a4);
            if (t1 == 0) {
                if (t0 == 2) {
                    return FUN_0c085cac(a4, 0x6, 0x0);
                }
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
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return 0x15;
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
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
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c08eb3e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c08eb60(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c08eb3e(a4);
        }
        return FUN_0c08ea6c(a4);
    }
    return FUN_0c08e980(a4);
}

int FUN_0c08ec28(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c0819c2(a4, 0x9F4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = -25.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
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
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c08ef58(int a4)
{
    register int t1;

    FUN_0c0819c2(a4, 0x71C);
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c08ef84(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c08f2b2(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)((a4 + 0x1C));
    if (((int)(short)t0 < (int)0x14) && ((short)t0 != 0)) {
        t0 = FUN_0c07d774(a4);
        t1 = *(int *)((a4 + 0x38));
        t2 = *(short *)((a4 + 0x1C));
        t3 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t3 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)t2)));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c08f434(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)(((((struct o3850_short *)(a4))->v)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, (*(float *)0xC08F58C));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c08f50c(int a4)
{
    int stk[5];
    int t9;
    register int t13;
    register int t14;
    register int t15;
    register int t21;
    register int t29;
    register int t30;
    register int t27;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t9 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t9 != 0) && (t9 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t13 = FUN_0c07d1fc(a4);
        if (t13 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            *(int *)((int)stk + 12) = 0x8;
            *(int *)((int)stk + 8) = 0x2;
            t14 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t14;
            t15 = t14;
            *(int *)((int)stk + 4) = t15;
            FUN_0c07e79c(a4, t14, 0x2, 0x8, t15, 0x2, 0x8);
            (((struct o446_uchar *)(a4))->v) = 0x0;
            (((struct o447_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                *(int *)((int)stk + 12) = 0xC1C5F74;
                *(int *)((int)stk + 8) = 0xC1C5F68;
                *(int *)((int)stk + 4) = 0x52;
                *(int *)((int)stk + 0) = 0x30;
                t27 = (FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x30, 0x52, 0xC1C5F68, 0xC1C5F74));
            } else {
                *(int *)((int)stk + 12) = 0xC1C5F8C;
                *(int *)((int)stk + 8) = 0xC1C5F80;
                *(int *)((int)stk + 4) = 0x52;
                *(int *)((int)stk + 0) = 0x30;
                t21 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t21;
                t27 = (FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t21 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x30, 0x52, 0xC1C5F80, 0xC1C5F8C));
            }
            return t27;
        }
        t29 = FUN_0c037bf6(a4);
        if ((unsigned char)t29 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t29;
    }
    t30 = FUN_0c037bf6(a4);
    if ((unsigned char)t30 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t30;
}

int FUN_0c08f678(int a4)
{
    int t0;

    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c08f780(int a4)
{
    int stk[5];
    register int t8;
    register int t21;
    register int t37;
    register int t41;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 10) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5FD4;
            *(int *)((int)stk + 8) = 0xC1C5FC8;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1A;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0xA, 0x1, 0x1A, 0x42, 0xC1C5FC8, 0xC1C5FD4);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5FEC;
            *(int *)((int)stk + 8) = 0xC1C5FE0;
            *(int *)((int)stk + 4) = 0x42;
            *(int *)((int)stk + 0) = 0x1A;
            t8 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t8;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x7, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t8 << 2))))))->v)) + 0x0))), 0x1A, 0x42, 0xC1C5FE0, 0xC1C5FEC);
        }
    } else {
        if (((((struct o20_short *)(a4))->v)) == 14) {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                *(int *)((int)stk + 12) = 0xC1C5F74;
                *(int *)((int)stk + 8) = 0xC1C5F68;
                *(int *)((int)stk + 4) = 0x52;
                *(int *)((int)stk + 0) = 0x1C;
                FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x1C, 0x52, 0xC1C5F68, 0xC1C5F74);
            } else {
                *(int *)((int)stk + 12) = 0xC1C5F8C;
                *(int *)((int)stk + 8) = 0xC1C5F80;
                *(int *)((int)stk + 4) = 0x52;
                *(int *)((int)stk + 0) = 0x1C;
                t21 = *(signed char *)((a4 + 0x1));
                (((struct o10_uchar *)(((int)stk + 0)))->v) = t21;
                FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((0xC4B40FC + (t21 << 2))))))->v)) + 0x0))), 0x1C, 0x52, 0xC1C5F80, 0xC1C5F8C);
            }
        }
    }
    t37 = FUN_0c037bf6(a4);
    if ((unsigned char)t37 != 0) {
        (((struct o447_uchar *)(a4))->v) = 0x0;
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t41 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t41 != 0) {
        if (t41 != 1) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t41;
    }
    return t41;
}
