/* game/unsorted: functions 0C07A08C-0C07AC5E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3751_uchar { char p[0x3751]; unsigned char v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o418_int { char p[0x418]; int v; };
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
int FUN_0c038362(int);
int FUN_0c038980(int);
int FUN_0c05253c(int, int, int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c05a02e(int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c06817c(int);
int FUN_0c073adc(int);
int FUN_0c073eb8(int, int, int);
int FUN_0c08e382(int);
int FUN_0c074602(int);
int FUN_0c074808(int);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a6aa(int);
int FUN_0c07aabc(int, int, int);
int FUN_0c07bdd0(int, int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c150be8(int, int);
int FUN_0c15173c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2340(int);
int FUN_0c187798(int);
int FUN_0c07a08c(int a4);
int FUN_0c07a0f4(int a4);
int FUN_0c07a208(int a4);
int FUN_0c07a286(int a4);
int FUN_0c07a354(int a4, int a5, int a6, int a7);
int FUN_0c07a388(int a4);
int FUN_0c07a428(int a4);
int FUN_0c07a52e(int a4);
int FUN_0c07a5c4(int a4);
int FUN_0c07a5f8(int a4);
int FUN_0c07a62c(int a4);
int FUN_0c07a65c(int a4, int a5, int a6, int a7);
int FUN_0c07a70c(int a4);
int FUN_0c07a7a8(int a4);
int FUN_0c07a7d8(int a4);
int FUN_0c07a85e(int a4);
int FUN_0c07aa24(int a4);
int FUN_0c07abec(int a4);
int FUN_0c07ac3a(int a4, int a5, int a6);

int FUN_0c07a08c(int a4)
{
    int stk[3];
    register float t6;

    *(float *)(((int)stk + 0)) = (((((struct o37C4_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v)));
    *(float *)(((int)stk + 4)) = (((((struct o37C8_float *)(a4))->v)) - ((((struct o2C_float *)(a4))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o37CC_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v)));
    t6 = FUN_0c0e2340(((int)stk + 0));
    return (((t6 > 2000.0f)) ? 1 : 0);
}

int FUN_0c07a0f4(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t10;
    register float u12;
    register float u20;
    register float u28;
    register int t40;

    *(int *)((int)stk + 0) = ((int)stk + 4);
    t0 = FUN_0c073adc(a4);
    t1 = FUN_0c065b96(a4, t0, 0x4000, ((int)stk + 4), 0.0f);
    if (t1 != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        FUN_0c05a02e((*(signed char *)((a4 + 0x1))));
        FUN_0c15173c((a4 + 0x28), (*(int *)(((int)stk + 4))));
        FUN_0c038980(a4);
        FUN_0c07bdd0(a4, 0xB);
        t10 = *(int *)(((int)stk + 4));
        if ((((t10 + 0x2000) & 0xC000) != 0) && (((t10 + 0x2000) & 0xC000) != 0x8000)) {
            if ((((t10 + 0x2000) & 0xC000) == 0x4000) || (((t10 + 0x2000) & 0xC000) == 0xC000)) {
                u12 = ((((struct o4C_float *)(a4))->v));
                u12 *= -1.0f;
                (((struct o4C_float *)(a4))->v) = u12;
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * 1.0f);
            }
        } else {
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * 1.0f);
            u20 = ((((struct o54_float *)(a4))->v));
            u20 *= -1.0f;
            (((struct o54_float *)(a4))->v) = u20;
        }
        t40 = 0x1;
    } else {
        t40 = 0x0;
        if (((((struct o17C_float *)(a4))->v)) != 0.0f) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            u28 = ((((struct o50_float *)(a4))->v));
            u28 *= -1.0f;
            (((struct o50_float *)(a4))->v) = u28;
            FUN_0c07db58(a4);
            FUN_0c08e382(a4);
            if ((*(signed char *)((a4 + 0x135))) != 2) {
                FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
            }
            t40 = 0x1;
        }
    }
    return t40;
}


int FUN_0c07a286(int a4)
{
    int t0;
    register int t1;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) > 0) {
        t1 = FUN_0c07a0f4(a4);
        if ((t1 != 0) && (t0 = *(short *)((a4 + 0x1E)), (int)t0 <= 0)) {
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        } else {
            t0 = FUN_0c07a08c(a4);
            if (t0 != 0) {
                (((struct o5C_float *)(a4))->v) = -2.0f;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
        }
    } else {
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c07a354(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC07A2DE))(a4, a5, a6, a7);
        }
        return FUN_0c07a286(a4);
    }
    return FUN_0c07a208(a4);
}

int FUN_0c07a388(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    (((struct o50_float *)(a4))->v) = (*(float *)((0xC1C5E9C + (((t0 << 1) + t0) << 2))));
    t0 = *(signed char *)((a4 + 0x2));
    (((struct o37C4_float *)(a4))->v) = ((((struct o4_float *)(((((t0 << 1) + t0) << 2) + 0xC1C5E9C)))->v));
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o37C4_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o37C4_float *)(a4))->v)));
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x2));
    (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)((0xC1C5E9C + (((t0 << 1) + t0) << 2))))->v));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x21, 0xFFFFFFFF, 0x5, 0x21);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o374B_uchar *)(a4))->v) = 0x5;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c07a428(int a4)
{
    register int t0;

    t0 = FUN_0c075328(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c073eb8(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0x190));
    }
    FUN_0c037bf6(a4);
    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0xC000);
            FUN_0c07a6aa(a4);
        }
    } else {
        if ((*(short *)((a4 + 0x1C))) == 0) {
            FUN_0c073eb8(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0x190));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x2) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0xC000);
            return FUN_0c085cac(a4, 0xE, 0x0);
        }
        (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC07A5AC)->v));
        (((struct o37C4_float *)(a4))->v) = ((((struct o4_float *)0xC07A5AC)->v));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o37C4_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o37C4_float *)(a4))->v)));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c07a52e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c07a428(a4);
    }
    return FUN_0c07a388(a4);
}

int FUN_0c07a5c4(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c08e382(a4);
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return (FUN_0c074808(a4));
}

int FUN_0c07a5f8(int a4)
{
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x58, 0xFFFFFFFF, 0x4, 0x58);
    FUN_0c07ec9a(a4);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c07a62c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        FUN_0c08e382(a4);
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return (unsigned char)t0;
}

int FUN_0c07a65c(int a4, int a5, int a6, int a7)
{
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    if ((*(signed char *)((a4 + 0x135))) != 2) {
        FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o3739_uchar *)(a4))->v) = 0x11;
    return ((int (*)(int, int, int, int))(0xC07A6B6))(a4, a5, a6, a7);
}

int FUN_0c07a70c(int a4)
{
    register int t0;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((*(short *)((a4 + 0x1E))) != 0) {
            FUN_0c037bf6(a4);
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        return (t0 - 1);
    }
    FUN_0c037bf6(a4);
    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        FUN_0c08e382(a4);
        return FUN_0c085cac(a4, 0xE, 0x0);
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3B, 0xFFFFFFFF, 0x4, 0x3B);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c07a7a8(int a4)
{
    register int t1;

    FUN_0c038362(a4);
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        FUN_0c08e382(a4);
        return FUN_0c085cac(a4, 0xE, 0x0);
    }
    return (unsigned char)t1;
}

int FUN_0c07a7d8(int a4)
{
    register int t0;
    register int t2;

    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c07a7a8(a4);
        }
    } else {
        FUN_0c07a70c(a4);
    }
    t0 = 0x16;
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        if (((((struct o20_short *)(a4))->v)) == 0) {
            t0 = (FUN_0c074808(a4));
        } else {
            t2 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t2 - 1);
            t0 = 0x20;
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o3751_uchar *)(a4))->v) = 0x0;
                t0 = 0x3751;
            }
        }
    }
    return t0;
}

int FUN_0c07a85e(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c074602(a4);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    t1 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8));
    t2 = 0x27;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    t3 = 0x28;
                    if ((unsigned char)t1 != 4) {
                        if ((unsigned char)t1 != 5) {
                            t4 = 0x30;
                            if ((unsigned char)t1 != 6) {
                                t4 = 0x27;
                            }
                            t1 = t4;
                        } else {
                            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                            t1 = 0x18;
                        }
                        t3 = t1;
                    }
                    t1 = t3;
                } else {
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                    (((struct o372C_uchar *)(a4))->v) = 0x1;
                    t1 = 0x31;
                }
                t3 = t1;
            } else {
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                t3 = 0x27;
            }
            t1 = t3;
        } else {
            (((struct o372C_uchar *)(a4))->v) = 0x1;
            t1 = 0x31;
        }
        t2 = t1;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, (unsigned char)t2, 0xFFFFFFFF, 0x4, (unsigned char)t2);
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
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f) && (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0)) {
        FUN_0c06817c(a4);
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c07aa24(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2C, 0xFFFFFFFF, 0x4, 0x2C);
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
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c074602(a4);
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC07AB20)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC07AB20)->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + ((((struct o8_float *)0xC07AB20)->v)));
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c07abec(int a4)
{
    register int t4;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            return FUN_0c085cac(a4, 0xE, 0x1);
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c07ac3a(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c07abec(a4);
        }
        return FUN_0c07aabc(a4, a5, a6);
    }
    return FUN_0c07aa24(a4);
}


