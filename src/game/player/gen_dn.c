/* Straight-line functions with calls and guards (batch gen_dn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o38F8_uint { char p[0x38F8]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a31ca(int);
int FUN_0c0a4f3a(int);
int FUN_0c11faa0(void);
int FUN_0c13ad68(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0a24b0(int a4);
int FUN_0c0a500c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a5454(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a5198(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a23c4(int a4);
int FUN_0c0423de(void);
int FUN_0c0a2698(int a4);
int FUN_0c0a2452(int a4);
int FUN_0c109c46(int a4);
int FUN_0c10c488(int a4);
int FUN_0c10c4d8(int a4);

int FUN_0c0a24b0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if (((((struct o4C_float *)(a4))->v)) > 10.0f) {
        (((struct o4C_float *)(a4))->v) = 10.0f;
    }
    if (-10.0f > ((((struct o4C_float *)(a4))->v))) {
        (((struct o4C_float *)(a4))->v) = -10.0f;
    }
    if (((((struct o50_float *)(a4))->v)) > 10.0f) {
        (((struct o50_float *)(a4))->v) = 10.0f;
    }
    if (-10.0f > ((((struct o50_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = -10.0f;
    }
    if (((((struct o54_float *)(a4))->v)) > 10.0f) {
        (((struct o54_float *)(a4))->v) = 10.0f;
    }
    if (-10.0f > ((((struct o54_float *)(a4))->v))) {
        (((struct o54_float *)(a4))->v) = -10.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = FUN_0c07eaf4(a4);
        t2 = *(short *)(((0xC5413E8 + ((short)t0 * (short)0x2F8)) + 0x0));
        (((struct o58_float *)(a4))->v) = ((math_sin_angle16((unsigned short)(t2 + t1))) * 1.0f);
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = ((math_cos_angle16((unsigned short)(t2 + t1))) * 1.0f);
    } else {
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        u0 = (((struct o4C_float *)(a4))->v);
        u1 = u0;
        if (0.0f > u0) {
            u1 = (-u0);
        }
        if (1.0f > u1) {
            (((struct o4C_float *)(a4))->v) = 0.0f;
        } else {
            u0 = (((struct o4C_float *)(a4))->v);
            if (u0 > 0.0f) {
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - 0.5f);
            } else {
                if (0.0f > u0) {
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.5f);
                }
            }
        }
        u0 = (((struct o50_float *)(a4))->v);
        u1 = u0;
        if (0.0f > u0) {
            u1 = (-u0);
        }
        if (1.0f > u1) {
            (((struct o50_float *)(a4))->v) = 0.0f;
        } else {
            u0 = (((struct o50_float *)(a4))->v);
            if (u0 > 0.0f) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 0.5f);
            } else {
                if (0.0f > u0) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 0.5f);
                }
            }
        }
        u0 = (((struct o54_float *)(a4))->v);
        u1 = u0;
        if (0.0f > u0) {
            u1 = (-u0);
        }
        if (1.0f > u1) {
            (((struct o54_float *)(a4))->v) = 0.0f;
        } else {
            u0 = (((struct o54_float *)(a4))->v);
            if (u0 > 0.0f) {
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.5f);
            } else {
                if (0.0f > u0) {
                    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 0.5f);
                }
            }
        }
    }
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 0xB4) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0x9, (t0), 0x0, 0x9);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        t1 = 0x5C;
    }
    return t1;
}

int FUN_0c0a500c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register float u6;
    register int t7;
    register int t8;
    register int t31;
    register int t45;
    register int t52;
    register int t53;
    register int t57;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t57 = t0;
            if (t0 == 2) {
                t1 = FUN_0c07ebd0(a4);
                if (t1 != 0) {
                    FUN_0c085cac(a4, 0x1, 0x1);
                    t3 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t3))->v) = 5.0f;
                    (((struct o94_float *)(t3))->v) = 5.0f;
                    t4 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t4))->v) = 5.0f;
                    (((struct o94_float *)(t4))->v) = 5.0f;
                } else {
                    FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
                    u6 = *(float *)0xC0A5260;
                    t7 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t7))->v) = u6;
                    (((struct o94_float *)(t7))->v) = u6;
                    t8 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t8))->v) = u6;
                    (((struct o94_float *)(t8))->v) = u6;
                }
                t57 = 0x94;
            }
        } else {
            if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 5) {
                FUN_0c059e60(a4, 0x20);
            }
            FUN_0c0a31ca(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            if (((*(int *)0xC542260) & 1) == 0) {
                FUN_0c0a4f3a(a4);
            }
            t31 = FUN_0c037bf6(a4);
            t57 = (unsigned char)t31;
            if ((unsigned char)t31 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t57 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c13ad68((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34));
        FUN_0c07d030(a4, 0x0);
        t45 = (((struct o38F8_int *)(a4))->v);
        (((struct o38F8_uint *)(a4))->v) = (t45 + 0x1);
        if ((t45 + 0x1) == 1) {
            FUN_0c059e60(a4, 0xA);
        }
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x17);
        t52 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t52))->v) = 5.0f;
        (((struct o94_float *)(t52))->v) = 5.0f;
        t53 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t53))->v) = 5.0f;
        (((struct o94_float *)(t53))->v) = 5.0f;
        FUN_0c0a31ca(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t57 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t57;
}

int FUN_0c0a5454(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register float u2;
    register int t3;
    register int t4;
    register int t16;
    register int t30;
    register int t37;
    register int t38;
    register int t39;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t39 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c085d0c(a4, a5, a6, a7);
                u2 = *(float *)0xC0A55DC;
                t3 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t3))->v) = u2;
                (((struct o94_float *)(t3))->v) = u2;
                t4 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t4))->v) = u2;
                (((struct o94_float *)(t4))->v) = u2;
                t39 = 0x94;
            }
        } else {
            if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 5) {
                FUN_0c059e60(a4, 0x20);
            }
            t16 = FUN_0c037bf6(a4);
            t39 = (unsigned char)t16;
            if ((unsigned char)t16 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t39 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c13ad68((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34));
        FUN_0c07d030(a4, 0x0);
        t30 = (((struct o38F8_int *)(a4))->v);
        (((struct o38F8_uint *)(a4))->v) = (t30 + 0x1);
        if ((t30 + 0x1) == 1) {
            FUN_0c059e60(a4, 0xA);
        }
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x16);
        t37 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t37))->v) = 5.0f;
        (((struct o94_float *)(t37))->v) = 5.0f;
        t38 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t38))->v) = 5.0f;
        (((struct o94_float *)(t38))->v) = 5.0f;
        t39 = 0x94;
    }
    return t39;
}

int FUN_0c0a5198(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register float u2;
    register int t3;
    register int t4;
    register int t16;
    register int t30;
    register int t37;
    register int t38;
    register int t39;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t39 = t0;
            if (t0 != 2) {
            } else {
                FUN_0c085d0c(a4, a5, a6, a7);
                u2 = *(float *)0xC0A5380;
                t3 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t3))->v) = u2;
                (((struct o94_float *)(t3))->v) = u2;
                t4 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t4))->v) = u2;
                (((struct o94_float *)(t4))->v) = u2;
                t39 = 0x94;
            }
        } else {
            if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 5) {
                FUN_0c059e60(a4, 0x20);
            }
            t16 = FUN_0c037bf6(a4);
            t39 = (unsigned char)t16;
            if ((unsigned char)t16 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t39 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c13ad68((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34));
        FUN_0c07d030(a4, 0x0);
        t30 = (((struct o38F8_int *)(a4))->v);
        (((struct o38F8_uint *)(a4))->v) = (t30 + 0x1);
        if ((t30 + 0x1) == 1) {
            FUN_0c059e60(a4, 0xA);
        }
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x17);
        t37 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t37))->v) = 5.0f;
        (((struct o94_float *)(t37))->v) = 5.0f;
        t38 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t38))->v) = 5.0f;
        (((struct o94_float *)(t38))->v) = 5.0f;
        t39 = 0x94;
    }
    return t39;
}

int FUN_0c0a23c4(int a4)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x13, (t0), 0x1, 0x13);
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
    FUN_0c059e60(a4, 0xA);
    FUN_0c059e60(a4, 0x25);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c0423de(void)
{
    register int t0;

    if ((*(signed char *)0xC3BD447) == 0) {
        t0 = 0x9;
        if ((*(signed char *)0xC542236) == 0) {
            t0 = 0x7;
        }
        (((struct o0_uchar *)0xC5421F9)->v) = t0;
        (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
        (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
        t0 = 0x0;
    } else {
        if ((*(signed char *)0xC54235E) == 2) {
            FUN_0c11faa0();
            (((struct o0_uchar *)0xC541F41)->v) = 0x7;
            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
            *(unsigned char *)0xC542264 = 0x1;
            t0 = 0x6C;
        } else {
            (((struct o0_uchar *)0xC5421F9)->v) = 0x6;
            (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
            (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
            t0 = 0x0;
        }
    }
    return t0;
}

int FUN_0c0a2698(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = *(signed char *)((a4 + 0x1));
            t0 = (FUN_0c07e79c(a4, t1, 0x0, 0xA, (t1), 0x0, 0xA));
        }
    }
    return t0;
}

int FUN_0c0a2452(int a4)
{
    register int t8;
    register int t11;

    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    }
    FUN_0c037bf6(a4);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t8 = *(short *)((a4 + 0x1C));
    t11 = t8;
    if (t8 == 18) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c07d030(a4, 0x2);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c109c46(int a4)
{
    (((struct o16_uchar *)(a4))->v) = 0x1;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    return 0x18;
}

int FUN_0c10c488(int a4)
{
    (((struct o15_uchar *)(a4))->v) = 0x1;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c10c4d8(int a4)
{
    (((struct o15_uchar *)(a4))->v) = 0x3;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}
