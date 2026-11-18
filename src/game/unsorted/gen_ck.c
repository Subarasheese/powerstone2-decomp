/* Straight-line functions with calls and guards (batch gen_ck): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07e328(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085eac(int, int);
int FUN_0c085f66(int);
int FUN_0c085ffa(int, int);
int FUN_0c08c10c(int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int, float);
int FUN_0c0c57e0(int, int, int);
int FUN_0c0c5a88(int);
int math_vec3_accumulate(int, int);
int FUN_0c08c33e(int a4, int a5, int a6);
int FUN_0c08c1fe(int a4, int a5, int a6);
int FUN_0c0c848c(int a4, int a5, int a6);
int FUN_0c08a862(int a4, int a5, int a6);
int FUN_0c08af52(int a4, int a5, int a6);
int FUN_0c089d48(int a4, int a5, int a6);
int FUN_0c08875c(int a4, int a5, int a6);
int FUN_0c08b5ee(int a4, int a5, int a6);
int FUN_0c089670(int a4, int a5, int a6);

int FUN_0c08c33e(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register float u0;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!(9.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t0 = (((struct o20_short *)(a4))->v), t0 == 0)) {
        FUN_0c08c10c(a4, 0x23);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(13.0f > u0) && !(u0 > 24.0f)) {
        t0 = FUN_0c085ffa(a4, 0x280);
        if (t0 != 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xED, 0xFFFFFFFF, 0x3, 0xED);
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
            FUN_0c085eac(a4, 0x6);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return 0x17;
        }
        return FUN_0c038362(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c08c1fe(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    float u0;
    register float u1;

    t1 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t1 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    if (!(((((struct o0_float *)0xC08C38C)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t0 = (((struct o20_short *)(a4))->v), t0 == 0)) {
        FUN_0c08c10c(a4, 0x20);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(((((struct o4_float *)0xC08C38C)->v)) > u1) && (u0 = (((struct o8_float *)0xC08C38C)->v), !(u1 > u0))) {
        t0 = FUN_0c085ffa(a4, 0x280);
        if (t0 != 0) {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xEC, 0xFFFFFFFF, 0x3, 0xEC);
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
            FUN_0c085eac(a4, 0x6);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return 0x17;
        }
        return FUN_0c038362(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0c848c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c0c2ce4(a4);
            if (t0 != 0) {
                if (t0 == 2) {
                    t0 = 0x3;
                    t1 = (*(signed char *)((a4 + 0x1)));
                } else {
                    t0 = 0x9;
                    t1 = (*(signed char *)((a4 + 0x1)));
                }
                return FUN_0c0c2d56(a4, t0, t1);
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        if (((((struct o404_int *)(a4))->v)) == 0) {
            t0 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                t0 = FUN_0c0c2ce4(a4);
                if (t0 != 2) {
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0C8638);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    return 0x15;
                }
                return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
            }
            *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
            return FUN_0c0c5a88(a4);
        }
        t0 = FUN_0c0c2ce4(a4);
        if (t0 != 2) {
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC0C8638);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
        return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
    }
    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c0c57e0(a4, a5, a6);
    FUN_0c0c2ab6(a4, 0x4F);
    FUN_0c07e328(a4, 0xAE);
    (((struct o12A_ushort *)(a4))->v) = ((~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) & 0xF);
    (((struct o22_ushort *)(a4))->v) = 0xB4;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c08a862(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c037bf6(a4, a5, a6);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
    } else {
        FUN_0c037bf6(a4, a5, a6);
        if (!(30.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t0 = FUN_0c085f66(a4);
            if (t0 == 0) {
                FUN_0c081dfc(a4);
                (((struct o50_float *)(a4))->v) = 0.0f;
                return FUN_0c085d0c(a4);
            }
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            (((struct o50_float *)(a4))->v) = -0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t1 = FUN_0c085f66(a4);
            if (t1 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c08af52(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c037bf6(a4, a5, a6);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
    } else {
        FUN_0c037bf6(a4, a5, a6);
        if (!(30.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t0 = FUN_0c085f66(a4);
            if (t0 == 0) {
                FUN_0c081dfc(a4);
                (((struct o50_float *)(a4))->v) = 0.0f;
                return FUN_0c085d0c(a4);
            }
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t1 = FUN_0c085f66(a4);
            if (t1 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c089d48(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c037bf6(a4, a5, a6);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
    } else {
        FUN_0c037bf6(a4, a5, a6);
        if (!(((((struct o0_float *)0xC089E84)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t0 = FUN_0c085f66(a4);
            if (t0 == 0) {
                FUN_0c081dfc(a4);
                (((struct o50_float *)(a4))->v) = 0.0f;
                return FUN_0c085d0c(a4);
            }
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            (((struct o50_float *)(a4))->v) = ((((struct o14_float *)0xC089E84)->v));
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t1 = FUN_0c085f66(a4);
            if (t1 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c08875c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c037bf6(a4, a5, a6);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
    } else {
        FUN_0c037bf6(a4, a5, a6);
        if (!((*(float *)0xC088890) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t0 = FUN_0c085f66(a4);
            if (t0 == 0) {
                FUN_0c081dfc(a4);
                (((struct o50_float *)(a4))->v) = 0.0f;
                return FUN_0c085d0c(a4);
            }
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t1 = FUN_0c085f66(a4);
            if (t1 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c08b5ee(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c037bf6(a4, a5, a6);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
    } else {
        FUN_0c037bf6(a4, a5, a6);
        if (!(41.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            t0 = FUN_0c085f66(a4);
            if (t0 == 0) {
                FUN_0c081dfc(a4);
                (((struct o50_float *)(a4))->v) = 0.0f;
                return FUN_0c085d0c(a4);
            }
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        }
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t1 = FUN_0c085f66(a4);
            if (t1 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c089670(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t2;
    register int t10;
    register int t15;
    register int t18;
    register int t26;
    register int t20;
    register int t21;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t1 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t1 != 0) {
                t2 = FUN_0c085f66(a4);
                if (t2 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085d0c(a4);
            }
            return (unsigned char)t1;
        }
        FUN_0c037bf6(a4, a5, a6);
        t10 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
        t15 = (short)(t10 - 1);
        if ((int)(short)(t10 - 1) <= 0) {
            *(int *)((int)stk + 8) = 0x84;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x84, 0xFFFFFFFF, 0x3, 0x84);
            FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t15 = 0x17;
        }
        return t15;
    }
    t18 = FUN_0c037bf6(a4, a5, a6);
    t26 = (unsigned char)t18;
    if ((unsigned char)t18 != 0) {
        *(int *)((int)stk + 8) = 0x10;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x10, 0xFFFFFFFF, 0x3, 0x10);
        t20 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t20))->v) = 20.0f;
        (((struct o94_float *)(t20))->v) = 20.0f;
        t21 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t21))->v) = 20.0f;
        (((struct o94_float *)(t21))->v) = 20.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0, 20.0f);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t26 = 0x17;
    }
    return t26;
}
