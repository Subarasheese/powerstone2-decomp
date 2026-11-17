/* game/player: functions 0C072C6C-0C0731C0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064f80(int);
int FUN_0c070320(int a4);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c072c6c(int a4);
int FUN_0c072ddc(int a4);
int FUN_0c072ff6(int a4);
int FUN_0c073068(int a4);
int FUN_0c07309e(int a4);
int FUN_0c0730ca(int a4);

int FUN_0c072c6c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
    } else {
        u0 = (((struct o3780_float *)(a4))->v);
        u1 = u0;
        if (!(200.0f > u0)) {
            u1 = 200.0f;
        }
        u0 = u1;
        if (u1 == 0.0f) {
            u0 = 0.00999999978f;
        }
        (((struct o3790_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v))) + -50.0f);
        *(unsigned int *)((a4 + 0x34)) = (unsigned short)((math_atan_angle16((((((struct o3790_float *)(a4))->v)) / u0))) + 0x4000);
        if ((int)(*(int *)((a4 + 0x34))) < (int)0x638E) {
            *(unsigned int *)((a4 + 0x34)) = 0x638E;
        }
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x34))))) * 25.0f);
        (((struct o3790_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x34))))) * 25.0f);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1D, 0xFFFFFFFF, 0x2, 0x1D);
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
        FUN_0c07e2f4(a4, 0x38);
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        (((struct o22_ushort *)(a4))->v) = 0x2;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c072ddc(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    FUN_0c037bf6(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            u0 = (((struct o0_float *)0xC073048)->v);
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0));
            (((struct o5C_float *)(a4))->v) = ((((struct oC_float *)0xC073048)->v));
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x0, 0x9, (t1), 0x0, 0x9);
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
        }
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    if (t0 != 1) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 8) {
                    if (t0 != 5) {
                        if ((t0 != 10) && (t0 != 14)) {
                            if (t0 != 11) {
                                if (t0 != 15) {
                                    t0 = *(signed char *)((a4 + 0x1));
                                    t1 = 0x8;
                                    t2 = (t0);
                                    t3 = t0;
                                    t0 = 0x8;
                                } else {
                                    t4 = *(signed char *)((a4 + 0x1));
                                    t1 = 0x10;
                                    t2 = (t4);
                                    t3 = t4;
                                    t0 = 0x10;
                                }
                                t4 = t1;
                                t1 = t2;
                                t2 = t3;
                                t3 = t0;
                            } else {
                                t0 = *(signed char *)((a4 + 0x1));
                                t4 = 0x9;
                                t1 = (t0);
                                t2 = t0;
                                t3 = 0x9;
                            }
                            t0 = t4;
                            t4 = t1;
                            t1 = t2;
                            t2 = t3;
                        } else {
                            t3 = *(signed char *)((a4 + 0x1));
                            t0 = 0x10;
                            t4 = (t3);
                            t1 = t3;
                            t2 = 0x10;
                        }
                        t3 = t0;
                        t0 = t4;
                        t4 = t1;
                        t1 = t2;
                    } else {
                        t2 = *(signed char *)((a4 + 0x1));
                        t3 = 0xF;
                        t0 = (t2);
                        t4 = t2;
                        t1 = 0xF;
                    }
                    t2 = t3;
                    t3 = t0;
                    t0 = t4;
                    t4 = t1;
                } else {
                    t1 = *(signed char *)((a4 + 0x1));
                    t2 = 0x1C;
                    t3 = (t1);
                    t0 = t1;
                    t4 = 0x1C;
                }
                t1 = t2;
                t2 = t3;
                t3 = t0;
                t0 = t4;
            } else {
                t4 = *(signed char *)((a4 + 0x1));
                t1 = 0x15;
                t2 = (t4);
                t3 = t4;
                t0 = 0x15;
            }
            t4 = t1;
            t1 = t2;
            t2 = t3;
            t3 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            t4 = 0x16;
            t1 = (t0);
            t2 = t0;
            t3 = 0x16;
        }
        t0 = t4;
        t4 = t1;
        t1 = t2;
        t2 = t3;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t0 = 0x13;
        t4 = (t3);
        t1 = t3;
        t2 = 0x13;
    }
    FUN_0c07e79c(a4, t1, 0x2, t2, t4, 0x2, t0);
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
    (((struct o15_uchar *)(a4))->v) = 0x3;
    return 0x15;
}

int FUN_0c072ff6(int a4)
{
    register int t2;

    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t2 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c073068(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if ((*(signed char *)((a4 + 0x2))) != 8) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    return FUN_0c070320(a4);
}

int FUN_0c07309e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c073068(a4);
            }
            return FUN_0c072ff6(a4);
        }
        return FUN_0c072ddc(a4);
    }
    return FUN_0c072c6c(a4);
}

int FUN_0c0730ca(int a4)
{
    register int t0;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xDC, 0xFFFFFFFF, 0x3, 0xDC);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xDD, 0xFFFFFFFF, 0x3, 0xDD);
        (((struct o37C8_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / 3.0f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / 3.0f);
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / 8.0f);
        if (((((struct o5C_float *)(a4))->v)) > 1.0f) {
            (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 16.0f);
        } else {
            (((struct o5C_float *)(a4))->v) = -2.0f;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    return 0x15;
}
