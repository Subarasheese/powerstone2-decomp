/* Straight-line functions with calls and guards (batch gen_mm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o414_int { char p[0x414]; int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c01cd2c(int);
int FUN_0c01cd40(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05a080(int, int);
int FUN_0c064f80(int);
int FUN_0c070320(int);
int FUN_0c073d64(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085f66(int);
int FUN_0c0b4f06(int, int);
float FUN_0c0bb2e0(int, int, float);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c104cc8(int);
int FUN_0c10b6e4(int);
int FUN_0c10befc(int);
int FUN_0c1171f0(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e20c(int);
int FUN_0c14f824(int, int);
int FUN_0c16f210(int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0871fa(int a4);
int FUN_0c08ce34(int a4);
int FUN_0c0b9216(int a4);
int FUN_0c0de528(int a4, int a5, int a6, int a7);
int FUN_0c0fcbee(int a4);
int FUN_0c1089c0(int a4, int a5, int a6, int a7);
int FUN_0c14199c(int a4);
int FUN_0c15bc68(int a4);
int FUN_0c01c81e(int a4, int a5, int a6);
int FUN_0c041124(void);
int FUN_0c0739c8(int a4, int a5, int a6, int a7);
int FUN_0c10c01e(int a4);


int FUN_0c08ce34(int a4)
{
    int stk[5];
    int t0;
    register float u7;
    register int t35;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return (FUN_0c085cac(a4, 0x6, 0x0));
    }
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
    *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
    u7 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u7 != 7) {
        if ((int)u7 != 8) {
            if ((int)u7 != 9) {
                if ((int)u7 != 10) {
                } else {
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 60.0f);
                    FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
                }
            } else {
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 20.0f);
                FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
            }
        } else {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 10.0f);
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
        }
    } else {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
    }
    t35 = FUN_0c037bf6(a4);
    if ((unsigned char)t35 != 0) {
        return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    FUN_0c070320(a4);
    return (FUN_0c038362(a4));
}

int FUN_0c0b9216(int a4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c037bf6(a4);
    }
    t0 = *(signed char *)((a4 + 0x17));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 != 3) {
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x6, 0x36, (t0), 0x6, 0x36);
            }
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x32, (t0), 0x6, 0x32);
        FUN_0c059e60(a4, 0x12);
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
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0de528(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) == 0) {
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 30.0f);
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x5;
            FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t1 = t0;
                t1 = (t1 << 2);
                t1 = (t1 + (0xC4 + a4));
                t1 = (*(int *)((t1 + 0x0)));
                FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
                t0 = (t0 + 0x1);
            }
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 20.0f);
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
            FUN_0c0e2700((a4 + 0x28), 0x0, 0x0, 0x0);
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x2C;
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}

int FUN_0c0fcbee(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        t2 = t0;
        if (t0 != 1) {
        } else {
            if ((*(int *)((0xC1FB62C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB62C))), (*(int *)0xC4B410C));
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            if ((*(int *)((0xC1FB66C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB66C))), (*(int *)0xC4B410C));
            } else {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            t2 = 0xA8;
        }
        t0 = t2;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        if ((*(int *)((0xC1FB62C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB62C))), (*(int *)0xC4B410C));
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if ((*(int *)((0xC1FB66C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB66C))), (*(int *)0xC4B410C));
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t0 = 0xA8;
    }
    return t0;
}

int FUN_0c1089c0(int a4, int a5, int a6, int a7)
{
    int stk[192];
    register int t49;
    register int t0;
    register int t1;
    register int t4;
    register int t23;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t18;
    register int t31;
    register int t32;
    register int t33;

    t49 = 0xFFFFFFFF;
    if (((int)a4 >= 0) && ((int)a4 <= (int)0x78)) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if (((*(short *)(((((((t0 << 2) << 1) - t0) * 0xE) + 0xC29620E) + 0x6))) & 0x20) != 0) {
                t4 = (t1 << 2);
                t1 = (t1 + 0x1);
                *(unsigned int *)((0xC473058 + t4)) = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0x78) {
                break;
            }
        }
        t23 = 0x0;
        if ((int)t1 > 0) {
            t10 = 0xC473058;
            t11 = 0xC473058;
            t12 = 0x0;
            t13 = 0x0;
            for (;;) {
                t12 = (t12 + 0x1);
                if ((*(signed char *)(((((a4 + 0x1) * 0x34) + 0xC2738B8) + 0x3))) == (*(signed char *)((((((*(int *)((t10 + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3)))) {
                    t18 = (t13 << 2);
                    t13 = (t13 + 0x1);
                    *(unsigned int *)((((int)stk + 0) + t18)) = (*(int *)((t11 + 0x0)));
                }
                t11 = (t11 + 0x4);
                t10 = (t10 + 0x4);
                if ((int)t12 >= (int)t1) {
                    break;
                }
            }
            t23 = t13;
        }
        t49 = 0xFFFFFFFF;
        if ((int)t23 > 0) {
            t31 = (int)((int)(FUN_0c179ac0()) % (int)t23);
            t32 = *(int *)((((int)stk + 0) + (t31 << 2)));
            t49 = t32;
            if (t32 == a4) {
                t33 = (t31 + 0x1);
                if ((int)(t31 + 0x1) >= (int)t23) {
                    t33 = 0x0;
                }
                t49 = (*(int *)((((int)stk + 0) + (t33 << 2))));
            }
        }
    }
    return t49;
}

int FUN_0c14199c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x276);
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.125f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0625f);
        if (!(((((struct o44_float *)(a4))->v)) > 0.5f)) {
            return FUN_0c03f346(a4);
        }
        return 0x44;
    }
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.200000003f);
    t0 = 0x44;
    if (!(1.0f > ((((struct o44_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c15bc68(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if (1.0f > ((((struct o40_float *)(a4))->v))) {
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0399999991f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0399999991f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0399999991f);
    }
    u0 = math_sin_angle16((*(short *)((a4 + 0x1E))));
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + (int)(((float)(((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 0x6) * 65536.0f) / 360.0f));
    u1 = math_sin_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u3 = ((((struct o28_float *)(a4))->v));
    u3 = u3 + u2 * u1;
    (((struct o28_float *)(a4))->v) = u3;
    u1 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u0 = ((((struct o30_float *)(a4))->v));
    u0 = u0 + u2 * u1;
    (((struct o30_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2.5f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c01c81e(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    v0_0 = a5;
    v0_4 = a6;
    *(unsigned char *)(((int)stk + 0)) = v0_0;
    v0_0 = ((unsigned char)v0_4);
    v0_2 = ((((int)stk + 0) + 0x4));
    v0_1 = (v0_3);
    v0_3 = ((((int)stk + 0) + 0x4));
    if (((((((unsigned char)v0_4 == 2)) ? 1 : 0) | ((((unsigned char)v0_4 == 0)) ? 1 : 0)) == 0)) goto L_C01C852;
    *(unsigned int *)((v0_3 + 0x0)) = 0x2000;
    v0_3 = (0x1000);
    L_C01C858:;
    *(unsigned int *)((v0_2 + 0x4)) = v0_3;
    v0_4 = (short)(FUN_0c01cd2c((*(int *)((v0_2 + 0x0))))) == 0;
    v0_3 = (0xC30504A);
    if (v0_4) goto L_C01C86A;
    v0_2 = (0x14);
    L_C01C894:;
    *(unsigned short *)((v0_3 + 0x0)) = v0_2;
    if (((int)v0_0 >= (int)0x2)) goto L_C01C8F2;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C01C8FC;
    *(unsigned char *)((v0_1 + 0x0)) = (*(signed char *)(((int)stk + 0)));
    L_C01C902:;
    v0_0 = (0x1);
    L_C01C904:;
    return v0_0;
    L_C01C8FC:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) - 1);
    goto L_C01C902;
    L_C01C8F2:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C01C8FC;
    L_C01C8F8:;
    v0_0 = (0x0);
    goto L_C01C904;
    L_C01C86A:;
    v0_4 = (short)(FUN_0c01cd2c((*(int *)((v0_2 + 0x4))))) == 0;
    if (v0_4) goto L_C01C87A;
    *(unsigned short *)((v0_3 + 0x0)) = 0x14;
    L_C01C8A6:;
    v0_3 = ((unsigned char)(*(signed char *)(((int)stk + 0))));
    if (((int)v0_0 >= (int)0x2)) goto L_C01C8BE;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) != v0_3)) goto L_C01C8C6;
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    goto L_C01C902;
    L_C01C8C6:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    goto L_C01C902;
    L_C01C8BE:;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x0))) == v0_3)) goto L_C01C8F8;
    goto L_C01C8C6;
    L_C01C87A:;
    if (((*(short *)((v0_3 + 0x0))) == 0)) goto L_C01C888;
    *(unsigned short *)((v0_3 + 0x0)) = ((*(short *)((v0_3 + 0x0))) - 1);
    goto L_C01C8F8;
    L_C01C888:;
    v0_4 = (short)(FUN_0c01cd40((*(int *)((v0_2 + 0x0))))) == 0;
    if (v0_4) goto L_C01C898;
    v0_2 = (0xA);
    goto L_C01C894;
    L_C01C898:;
    v0_2 = (short)(FUN_0c01cd40((*(int *)((v0_2 + 0x4))))) == 0;
    if (v0_2) goto L_C01C8F8;
    *(unsigned short *)((v0_3 + 0x0)) = 0xA;
    goto L_C01C8A6;
    L_C01C852:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x800;
    v0_3 = (0x400);
    goto L_C01C858;
}

int FUN_0c041124(void)
{
    register int t3;
    int t4;
    register int t5;
    register int t31;
    register int t0;
    register int t1;
    register int t6;
    register int t18;
    int t19;
    register int t61;
    int t47;
    int t51;

    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x4) {
            break;
        }
        t0 = 0x3714;
        t6 = (t3 * 0x3938);
        t6 = (t6 + 0xC532498);
        if ((((*(signed char *)((t6 + t0)))) != 0) && ((t18 = *(signed char *)((t6 + 0x2)), t0 = t18, t0 != 12) && (t19 = *(signed char *)((t6 + 0x2)), t0 = t19, t0 != 13))) {
            t0 = 0x160;
            t1 = (t3 * 0x3938);
            t1 = (t1 + 0xC532498);
            if (((*(float *)((t1 + t0)))) > (0.0f)) {
                t1 = 0x1;
                t1 = ((int)t1 << (int)t3);
                t4 = (t4 | t1);
                t5 = (t5 + 0x1);
            }
        }
        t3 = (t3 + 0x1);
    }
    if ((*(signed char *)0xC54235E) != 0) {
        t31 = *(signed char *)0xC542363;
        if (((unsigned char)(*(signed char *)0xC3BD447) & t4) == 0) {
            (((struct o9_uchar *)0xC542230)->v) = ((*(signed char *)0xC542239) | ((int)0x1 << (int)(signed char)t31));
            t61 = 0x1;
        } else {
            t61 = 0x0;
            if (!(((((struct o160_float *)((0xC532498 + ((short)(signed char)t31 * (short)0x3938))))->v)) > 0.0f)) {
                (((struct o9_uchar *)0xC542230)->v) = ((*(signed char *)0xC542239) | t4);
                t61 = 0x1;
            }
        }
    } else {
        if (((int)((((struct o0_short *)0xC542230)->v)) <= 0) && (t47 = *(signed char *)0xC5421FA, t47 == 99)) {
            (((struct o9_uchar *)0xC542230)->v) = ((*(signed char *)0xC542239) | 0x20);
            t61 = 0x1;
        } else {
            t61 = 0x0;
            if (((int)t5 > (int)0x2) && (t51 = *(signed char *)0xC3BD447, ((unsigned char)t51 & t4) != 0)) {
            } else {
                (((struct o9_uchar *)0xC542230)->v) = ((*(signed char *)0xC542239) | t4);
                t61 = 0x1;
            }
        }
    }
    return t61;
}

int FUN_0c0739c8(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a5 + 0x0))) == 0) {
        t2 = *(signed char *)((a5 + 0x2));
        if (t2 != 12) {
            if ((*(signed char *)((a5 + 0x2))) == 13) {
                return FUN_0c0b4f06(a4, a5);
            }
            return FUN_0c073d64(a4, a5, a6, a7);
        }
        return t2;
    }
    (((struct o418_uint *)(a5))->v) = ((((struct o414_int *)(a4))->v));
    t2 = *(short *)((((((struct o414_int *)(a4))->v)) + 0x2));
    t3 = *(signed char *)0xC542363;
    u0 = (float)t2;
    if ((int)t3 >= 0) {
        t4 = *(signed char *)0xC54235E;
        if (t4 == 1) {
            u1 = (float)t2;
            if ((*(signed char *)((a5 + 0x1))) == t3) {
                if (((((struct o414_int *)(a4))->v)) == ((*(int *)((0xC25ACBC + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA0)) {
                    u2 = (FUN_0c0bb2e0((((short)(*(signed char *)((a5 + 0x1))) * (short)0x3938) + 0xC532498), ((*(signed char *)((a4 + 0x2))) & 0x3), (float)t2));
                } else {
                    u2 = (FUN_0c0bb2e0((((short)(*(signed char *)((a5 + 0x1))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))), (float)t2));
                }
                u1 = u2;
            }
            u2 = u1;
        } else {
            u1 = (float)t2;
            if ((t4 == 2) && ((t0 = *(signed char *)0xC54223C, t0 == 1) && (t1 = *(signed char *)((a5 + 0x1)), t1 == t3))) {
                u1 = (FUN_0c0bb2e0((((short)(*(signed char *)((a5 + 0x1))) * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))), (float)t2));
            }
            u2 = u1;
        }
        u0 = u2;
    }
    (((struct o160_float *)(a5))->v) = (((((struct o160_float *)(a5))->v)) - u0);
    if (0.0f > ((((struct o160_float *)(a5))->v))) {
        (((struct o160_float *)(a5))->v) = 0.0f;
    }
    return 0x160;
}

int FUN_0c10c01e(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                t0 = *(signed char *)((a4 + 0x16));
                if (t0 != 0) {
                    if (t0 != 1) {
                        if (t0 != 2) {
                            return t0;
                        }
                        t0 = FUN_0c104cc8(0x3FCF);
                        if (t0 != 0) {
                            FUN_0c11e20c(0x5F);
                            return FUN_0c10b6e4(a4);
                        }
                        return t0;
                    }
                    t0 = FUN_0c117d54();
                    t1 = t0;
                    if ((int)t0 < 0) {
                        FUN_0c117e76();
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t1 = 0x16;
                    }
                    return t1;
                }
                *(volatile int *)0xC29DF4C;
                FUN_0c117944(0x85);
                FUN_0c05a080(0x1E, 0x0);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return 0x16;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                if ((*(short *)((a4 + 0x1E))) == 1) {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    return 0x16;
                }
                return FUN_0c10b6e4(a4);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        t1 = t0;
        if ((int)t0 < 0) {
            FUN_0c117e76();
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c10befc(a4);
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
