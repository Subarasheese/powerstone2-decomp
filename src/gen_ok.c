/* Straight-line functions with calls and guards (batch gen_ok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3751_uchar { char p[0x3751]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o3822_short { char p[0x3822]; short v; };
struct o3822_ushort { char p[0x3822]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c067734(int);
int FUN_0c0733d2(int);
int FUN_0c0741b4(int);
int FUN_0c07429a(int);
int FUN_0c074768(int);
int FUN_0c07487e(int);
int FUN_0c074c80(int, int, int, int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c081ee8(int, int);
int FUN_0c085cac(int, int, int);
extern int FUN_0c085d0c();
int FUN_0c0c30a8(int, int, int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0b8e2e(int a4, int a5, int a6, int a7);
int FUN_0c06b2d2(int a4, int a5, int a6);
int FUN_0c074ce8(int a4);

int FUN_0c0b8e2e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t0 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                return ((int (*)(int))(FUN_0c085d0c))(a4);
            }
            return FUN_0c038362(a4);
        }
        t0 = (((struct o3770_int *)(a4))->v);
        (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 10.0f);
            (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 10.0f);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x1D, (t0), 0x2, 0x1D);
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
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x3, 0xDF, 0xFFFFFFFF, 0x3, 0xDF);
            t0 = (((struct o3770_int *)(a4))->v);
            t1 = *(int *)(((t0 + 0x118) + 0x4));
            t2 = (((struct o118_int *)(t0))->v);
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t0 = (((struct o3770_int *)(a4))->v);
            t1 = *(int *)(((t0 + 0x118) + 0x4));
            t2 = (((struct o118_int *)(t0))->v);
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        } else {
            FUN_0c07d086(a4, 0x0, 0.0f);
            FUN_0c038362(a4);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                t2 = 0x445;
            }
            t0 = t2;
        }
        return t0;
    }
    return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
}

int FUN_0c06b2d2(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t11;
    register int t12;
    register int t23;
    register int t28;
    register int t30;
    register int t31;
    register int t33;
    register int t44;
    register int t49;
    register int t51;
    register int t52;
    register int t54;
    register int t66;
    register int t1;
    register int t2;
    register int t80;
    register int t70;

    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && ((t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 72) || (t2 = *(signed char *)((t0 + 0x41C)), (unsigned char)t2 == 70))) {
        *(volatile int *)((a4 + 0x3768));
        FUN_0c187798(t0, a5, a6);
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            if (!(((((struct o2C_float *)(a4))->v)) > (((((struct o37C8_float *)(a4))->v)) + 50.0f))) {
                t11 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
                if (t11 != 0) {
                    t12 = (((struct o3768_int *)(a4))->v);
                    *(unsigned int *)(((int)stk + 4)) = t12;
                    FUN_0c11f9c8((*(signed char *)((a4 + 0x1))), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + 0x41C))), ((((struct o24_short *)(t12))->v)));
                    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
                }
                (((struct o3717_uchar *)(a4))->v) = 0x40;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                t80 = (FUN_0c085cac(a4, 0x40, 0x0));
            } else {
                t23 = FUN_0c07d666((a4 + 0x28), (0x37C4 + a4));
                (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t23)) * ((((struct o3790_float *)(a4))->v))));
                (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t23)) * ((((struct o3790_float *)(a4))->v))));
                t28 = *(int *)((a4 + 0x38));
                t30 = *(int *)((((((struct o3768_int *)(a4))->v)) + 0x38));
                t31 = *(short *)((a4 + 0x1C));
                t33 = (unsigned short)(t28 - t30);
                if ((0x8000 & (unsigned short)(t28 - t30)) != 0) {
                    t33 = ((unsigned short)(t28 - t30) | 0xFFFF0000);
                }
                t80 = (int)((int)t33 / (int)t31);
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t80);
            }
        } else {
            t44 = FUN_0c07d666((a4 + 0x28), (0x37C4 + a4));
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t44)) * ((((struct o3790_float *)(a4))->v))));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t44)) * ((((struct o3790_float *)(a4))->v))));
            t49 = *(int *)((a4 + 0x38));
            t51 = *(int *)((((((struct o3768_int *)(a4))->v)) + 0x38));
            t52 = *(short *)((a4 + 0x1C));
            t54 = (unsigned short)(t49 - t51);
            if ((0x8000 & (unsigned short)(t49 - t51)) != 0) {
                t54 = ((unsigned short)(t49 - t51) | 0xFFFF0000);
            }
            t80 = (int)((int)t54 / (int)t52);
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t80);
        }
    } else {
        t80 = 0x50;
        if (!(0.0f > ((((struct o50_float *)(a4))->v)))) {
        } else {
            t66 = FUN_0c07ecc6(a4, 0x0, 0x0);
            *(unsigned int *)(((int)stk + 0)) = t66;
            t80 = t66;
            if (t66 == 0) {
            } else {
                if ((*(int *)(((int)stk + 0))) == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x1;
                    t70 = 0x1;
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t70 = 0x0;
                }
                t80 = (FUN_0c085cac(a4, 0x6, t70));
            }
        }
    }
    return t80;
}

int FUN_0c074ce8(int a4)
{
    int stk[4];
    register float u1;
    register int t34;
    register int t40;
    int t7;
    register int t8;
    int t14;
    int t35;

    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    u1 = (((struct o378C_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u1;
    (((struct o44_float *)(a4))->v) = u1;
    (((struct o40_float *)(a4))->v) = u1;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o3726_uchar *)(a4))->v) = 0x0;
    (((struct o3751_uchar *)(a4))->v) = 0x0;
    (((struct o3822_ushort *)(a4))->v) = 0x29;
    FUN_0c067734(a4);
    (((struct o445_uchar *)(a4))->v) = 0x1;
    (((struct o446_uchar *)(a4))->v) = 0x1;
    (((struct o447_uchar *)(a4))->v) = 0x1;
    if ((*(signed char *)((a4 + 0x371D))) == 1) {
        (((struct o371D_uchar *)(a4))->v) = 0x0;
    }
    if (((*(signed char *)((a4 + 0x371C))) != 0) && (t7 = (((struct o418_int *)(a4))->v), t8 = *(signed char *)((0x12 + t7)), ((unsigned char)t8 & 32) == 0)) {
    } else {
        FUN_0c081dfc(a4);
    }
    if (((*(signed char *)((a4 + 0x371C))) != 0) && (t14 = *(signed char *)((a4 + 0x3721)), t14 != 0)) {
        if (((*(signed char *)((0xC2738C9 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) & 2) != 0) {
            FUN_0c081dfc(a4);
        }
    }
    FUN_0c07429a(a4);
    FUN_0c0741b4(a4);
    FUN_0c07487e(a4);
    FUN_0c074c80(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    FUN_0c0733d2(a4);
    *(int *)((int)stk + 12) = a4;
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
    }
    t34 = FUN_0c074768(a4);
    if ((t34 != 0) && (t35 = *(signed char *)((a4 + 0x3751)), t35 == 0)) {
        (((struct o3751_uchar *)(a4))->v) = 0x5;
    }
    t40 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3739))) << 2) + 0xC2592A4)))))(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24));
    if (((((struct o3822_short *)(a4))->v)) != 0) {
        (((struct o3822_ushort *)(a4))->v) = (((((struct o3822_short *)(a4))->v)) - 1);
    }
    return 0x3822;
}
