/* game/player: functions 0C0A87D4-0C0A99C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1650_uint { char p[0x1650]; unsigned int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059ef6(int, int);
int FUN_0c07053a(int, int, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a9454(int);
int FUN_0c0a954c(int);
int FUN_0c13f14c(int, int);
int FUN_0c14f824(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a87d4(int a4);
int FUN_0c0a89dc(int a4);
int FUN_0c0a8a20(int a4);
int FUN_0c0a8a42(int a4, int a5, int a6, int a7);
int FUN_0c0a8c84(int a4);
int FUN_0c0a8cea(int a4);
int FUN_0c0a8de0(int a4);
int FUN_0c0a8ef8(int a4, int a5, int a6);
int FUN_0c0a908c(int a4);
int FUN_0c0a90b8(int a4);
int FUN_0c0a91ce(int a4, int a5, int a6, int a7);
int FUN_0c0a940c(int a4);
int FUN_0c0a961a(int a4);
int FUN_0c0a963c(int a4, int a5, int a6, int a7);

int FUN_0c0a87d4(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o50_float *)(a4))->v) = -20.0f;
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c0a89dc(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = *(signed char *)((a4 + 0x1));
        t1 = (FUN_0c07e79c(a4, t0, 0x2, 0x5, (t0), 0x2, 0x5));
    }
    return t1;
}

int FUN_0c0a8a20(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a8a42(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0a8a20(a4);
            }
            return FUN_0c0a89dc(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A8850))(a4, a5, a6, a7);
    }
    return FUN_0c0a87d4(a4);
}

int FUN_0c0a8c84(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0a8cea(int a4)
{
    register int t0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o15_uchar *)(a4))->v) = 0x2;
            return 0x15;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o15_uchar *)(a4))->v) = 0x2;
    return 0x15;
}

int FUN_0c0a8de0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x13, (t0), 0x2, 0x13);
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
        FUN_0c037bf6(a4);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x0);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        t0 = 0x54;
        u0 = 15.0f;
        if ((*(signed char *)((a4 + 0x2))) != 4) {
            t0 = 0x2C;
            u0 = 30.0f;
        }
        FUN_0c07053a(a4, t0, u0);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o1650_uint *)(a4))->v) = 0x1555;
        t1 = 0x1650;
    }
    return t1;
}

int FUN_0c0a8ef8(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_1 = a6;
    v0_0 = (v0_0);
    if ((((*(int *)0xC542260) & 3) != 0)) goto L_C0A8F14;
    FUN_0c14f824((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), v0_1);
    L_C0A8F14:;
    if ((((*(int *)0xC542260) & 1) != 0)) goto L_C0A8F24;
    FUN_0c13f14c(v0_0, 0x1);
    L_C0A8F24:;
    FUN_0c07da48(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = (unsigned char)(FUN_0c037bf6(v0_0)) != 0;
    if (v0_1) goto L_C0A8F5E;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) == 0)) goto L_C0A8F5E;
    L_C0A9084:;
    return v0_2;
    L_C0A8F5E:;
    v0_1 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_1) goto L_C0A9000;
    *(int *)((int)stk + 8) = 0x14;
    *(int *)((int)stk + 4) = 0x2;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_2 = v0_1;
    *(int *)((int)stk + 0) = v0_2;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x14, v0_2, 0x2, 0x14);
    (((struct o1650_uint *)(v0_0))->v) = 0x0;
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) * 0.5f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) * 0.5f);
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = 0x1;
    v0_2 = (0x17);
    goto L_C0A9084;
    L_C0A9000:;
    *(int *)((int)stk + 8) = 0x15;
    *(int *)((int)stk + 4) = 0x2;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_2 = v0_1;
    *(int *)((int)stk + 0) = v0_2;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x15, v0_2, 0x2, 0x15);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x14;
    w0_0 = (((struct o0_float *)0xC0A9164)->v);
    (((struct o58_float *)(v0_0))->v) = (-(((((struct o4C_float *)(v0_0))->v)) / w0_0));
    (((struct o60_float *)(v0_0))->v) = (-(((((struct o54_float *)(v0_0))->v)) / w0_0));
    (((struct o50_float *)(v0_0))->v) = ((((struct o4_float *)0xC0A9164)->v));
    (((struct o5C_float *)(v0_0))->v) = ((((struct o8_float *)0xC0A9164)->v));
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(int *)(((0x118 + v0_0) + 0x4));
    (((struct oA0_float *)(v0_2))->v) = 1.0f;
    (((struct o9C_float *)(v0_2))->v) = 1.0f;
    (((struct oA0_float *)(v0_1))->v) = 1.0f;
    (((struct o9C_float *)(v0_1))->v) = 1.0f;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 1.0f;
    (((struct o98_float *)(v0_2))->v) = 1.0f;
    (((struct o94_float *)(v0_1))->v) = 1.0f;
    (((struct o94_float *)(v0_2))->v) = 1.0f;
    (((struct o15_uchar *)(v0_0))->v) = 0x3;
    v0_2 = (0x15);
    goto L_C0A9084;
}

int FUN_0c0a908c(int a4)
{
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t1;
}

int FUN_0c0a90b8(int a4)
{
    register int t0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x14, (t0), 0x2, 0x14);
            (((struct o1650_uint *)(a4))->v) = 0x0;
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 5.0f;
            (((struct o94_float *)(t0))->v) = 5.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o17_uchar *)(a4))->v) = 0x1;
            return 0x17;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x14, (t0), 0x2, 0x14);
    (((struct o1650_uint *)(a4))->v) = 0x0;
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 5.0f;
    (((struct o94_float *)(t0))->v) = 5.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
    (((struct o15_uchar *)(a4))->v) = 0x2;
    (((struct o17_uchar *)(a4))->v) = 0x1;
    return 0x17;
}

int FUN_0c0a91ce(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    return FUN_0c0a90b8(a4);
                }
                return FUN_0c0a908c(a4);
            }
            return FUN_0c0a8ef8(a4, a5, a6);
        }
        return FUN_0c0a8de0(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0a8cea(a4);
            }
            return FUN_0c0a8c84(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A8B60))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A8A7C))(a4, a5, a6, a7);
}

int FUN_0c0a940c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a961a(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a963c(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return FUN_0c0a961a(a4);
            }
            return FUN_0c0a954c(a4);
        }
        return FUN_0c0a9454(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0a940c(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0A93CE))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A932C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A9234))(a4, a5, a6, a7);
}
