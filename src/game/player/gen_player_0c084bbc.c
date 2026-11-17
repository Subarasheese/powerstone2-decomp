/* game/player: functions 0C084BBC-0C08549E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o404_int { char p[0x404]; int v; };
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
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c084bbc(int a4, int a5, int a6, int a7);
int FUN_0c08515a(int a4, int a5);
int FUN_0c085204(int a4, float f4);
int FUN_0c085256(int a4, int a5);
int FUN_0c085398(int a4, int a5, int a6, int a7);

int FUN_0c084bbc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u14;
    register int t24;
    register int t25;
    register int t1;
    register int t2;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x1E;
    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && ((t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 72) || (t2 = *(signed char *)((t0 + 0x41C)), (unsigned char)t2 == 70))) {
        FUN_0c081dfc(a4, a5, a6, a7);
        (((struct o15_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 12)));
        *(volatile int *)((a4 + 0x3768));
        FUN_0c187798();
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -2.5f;
        t7 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
        u8 = (((struct o37C4_float *)(a4))->v);
        u9 = (((struct o28_float *)(a4))->v);
        u10 = (((struct o37CC_float *)(a4))->v);
        u11 = (((struct o30_float *)(a4))->v);
        u14 = ((u11 - u10) * (u11 - u10));
        u14 = u14 + ((u9 - u8)) * ((u9 - u8));
        (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u14));
        *(unsigned short *)((a4 + 0x1C)) = (int)((((((struct o50_float *)(a4))->v)) / ((((struct o5C_float *)(a4))->v))) * (1.0f + 1.0f));
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t7)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t7)) * ((((struct o3790_float *)(a4))->v))));
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x0;
        t24 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t24;
        t25 = t24;
        *(int *)((int)stk + 0) = t25;
        return (FUN_0c07e79c(a4, t24, 0x0, 0x8, t25, 0x0, 0x8));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c08515a(int a4, int a5)
{
    register int t1;
    register int t2;
    int t7;
    register int t8;

    t1 = 0x404;
    t2 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t2 == 0) {
            t1 = 0x0;
            return t1;
        }
        if (((*(int *)((t2 + 0x4))) != 0) && (t7 = *(int *)((t2 + 0x4)), t1 = t7, t8 = *(signed char *)((t1 + 0x0)), t1 = t8, t1 == 9)) {
            t1 = (FUN_0c0c30a8((*(int *)((t2 + 0x4))), a5, a4));
            if (t1 != 0) {
                break;
            }
            t2 = (*(int *)((t2 + 0x0)));
            continue;
        }
        t2 = (*(int *)((t2 + 0x0)));
    }
    return t2;
}

int FUN_0c085204(int a4, float f4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c08515a(a4, 0x3);
    t11 = 0x1;
    if (t0 != 0) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)((*(int *)((t0 + 0x4)))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * f4)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)((*(int *)((t0 + 0x4)))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * f4)));
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c085256(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x3768;
    if (((((struct o3768_int *)(a4))->v)) == 0) {
    } else {
        t1 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        t0 = t1;
        if (t1 == 0) {
        } else {
            if ((*(signed char *)(((((*(signed char *)((((((struct o3768_int *)(a4))->v)) + 0x424))) << 2) << 1) + 0xC27890B))) == 0) {
                if (a5 != 0) {
                    if (a5 != 1) {
                        if (a5 != 2) {
                            if (a5 != 3) {
                                t1 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x8, 0xFFFFFFFF, 0x2, 0x8));
                            } else {
                                t1 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0xB, 0xFFFFFFFF, 0x2, 0xB));
                            }
                            t3 = t1;
                        } else {
                            t3 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0xA, 0xFFFFFFFF, 0x2, 0xA));
                        }
                        t1 = t3;
                    } else {
                        t1 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x9, 0xFFFFFFFF, 0x2, 0x9));
                    }
                    t3 = t1;
                } else {
                    t3 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x8, 0xFFFFFFFF, 0x2, 0x8));
                }
                t1 = t3;
            } else {
                if (a5 != 0) {
                    if (a5 != 1) {
                        if (a5 != 2) {
                            if (a5 != 3) {
                                t3 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2D, 0xFFFFFFFF, 0x2, 0x2D));
                            } else {
                                t3 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x30, 0xFFFFFFFF, 0x2, 0x30));
                            }
                            t1 = t3;
                        } else {
                            t1 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2F, 0xFFFFFFFF, 0x2, 0x2F));
                        }
                        t3 = t1;
                    } else {
                        t3 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2E, 0xFFFFFFFF, 0x2, 0x2E));
                    }
                    t1 = t3;
                } else {
                    t1 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2D, 0xFFFFFFFF, 0x2, 0x2D));
                }
            }
            t0 = t1;
        }
    }
    return t0;
}

int FUN_0c085398(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t3;
    register int t40;
    register int t41;
    register int t42;
    register int t43;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x23;
    FUN_0c081dfc(a4, a5, a6, a7);
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3724_uchar *)(a4))->v) = 0x0;
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t3 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t3 != 0) {
            if ((*(signed char *)(((int)stk + 0))) == 0) {
                *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 10.0f)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f)));
        }
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
        FUN_0c085256(a4, 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
    } else {
        FUN_0c085256(a4, 0x1);
    }
    t40 = *(int *)(((0x118 + a4) + 0x4));
    t41 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t40))->v) = 1.0f;
    (((struct o9C_float *)(t40))->v) = 1.0f;
    (((struct oA0_float *)(t41))->v) = 1.0f;
    (((struct o9C_float *)(t41))->v) = 1.0f;
    t42 = *(int *)(((0x118 + a4) + 0x4));
    t43 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t42))->v) = 1.0f;
    (((struct o98_float *)(t43))->v) = 1.0f;
    (((struct o94_float *)(t42))->v) = 1.0f;
    (((struct o94_float *)(t43))->v) = 1.0f;
    return 0x94;
}
