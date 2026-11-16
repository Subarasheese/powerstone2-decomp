/* Straight-line functions with calls and guards (batch gen_pe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o41F_uchar { char p[0x41F]; unsigned char v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c016244(void);
int FUN_0c01626a(void);
int FUN_0c016a88(void);
int FUN_0c017e48(void);
int FUN_0c017ee8(void);
int FUN_0c035bc6(int);
int FUN_0c035c1a(int, int, int, int);
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c0377b2(int);
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c03ea04(int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c073ed0(int, int, int);
int FUN_0c074602(int);
int FUN_0c074c0c(int);
int FUN_0c07c5dc(int, int, int, float);
int FUN_0c07d15c(int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0ae748(int);
int FUN_0c0ae750(int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c241a(int, int, int, float);
int FUN_0c0c2c30(int);
int FUN_0c0c3054(int, int, int);
int FUN_0c0d04b4(int);
int FUN_0c0d6106(void);
int FUN_0c1006a2(void);
int FUN_0c100712(void);
int FUN_0c107310(int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c161128(int);
int thunk_FUN_0c0167cc(int, int);
int thunk_FUN_0c0385e0(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c10af74(float);
int thunk_FUN_0c10c9ce(void);
int thunk_FUN_0c10f4b2(float);
int thunk_FUN_0c114c34(void);
int FUN_0c091a44(int a4, int a5, int a6);
int FUN_0c0758c8(int a4);
int FUN_0c0a5d88(int a4, int a5, int a6);
int FUN_0c1723b4(int a4, int a5, int a6);
int FUN_0c087ae8(int a4, int a5, int a6);
int FUN_0c0aee88(int a4, int a5, int a6);
int FUN_0c0abea8(int a4, int a5, int a6);
int FUN_0c0d6230(int a4);
int FUN_0c0abc6c(int a4, int a5, int a6);
int FUN_0c0b7fc0(int a4, int a5, int a6);
int FUN_0c0751e4(int a4, int a5, int a6);
int FUN_0c0e0562(int a4);
int FUN_0c072782(int a4, int a5, int a6);
int FUN_0c0176ba(void);
int FUN_0c074c80(int a4, float f4);
int FUN_0c100604(int a4, int a5, int a6, float f4);
void FUN_0c0c3010(int a4, int a5, int a6, float f4);
int FUN_0c0367e0(int a4, int a5, int a6, int a7);

int FUN_0c091a44(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4, a5, a6);
    FUN_0c038362(a4);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 28) {
        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0xA);
    }
    if ((*(short *)((a4 + 0x1C))) == 33) {
        FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0x3);
    }
    if ((*(short *)((a4 + 0x1C))) == 49) {
        t0 = (((struct o3770_int *)(a4))->v);
        (((struct o16_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x16))) + 0x1);
        FUN_0c073566(a4, 0x34);
        FUN_0c05258e(0x2, 0x14, 0x400, 0xF, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 72) {
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0758c8(int a4)
{
    register int t0;
    register int t1;

    FUN_0c074602(a4);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2D, 0xFFFFFFFF, 0x4, 0x2D);
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
    FUN_0c037bf6(a4, t1, t0);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    FUN_0c161128((*(signed char *)((a4 + 0x1))));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0a5d88(int a4, int a5, int a6)
{
    int stk[5];
    register int t10;
    register int t22;

    FUN_0c037bf6(a4, a5, a6);
    if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == (*(float *)0xC0A5EA4)) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532594))) + 0x28), ((int)stk + 0));
        FUN_0c14f238(((int)stk + 0), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x1);
        t10 = (((struct o3770_int *)(a4))->v);
        (((struct o15_uchar *)(t10))->v) = ((*(signed char *)((t10 + 0x15))) + 0x1);
        FUN_0c073566(a4, 0x29);
        FUN_0c07363a(a4, 0x29);
    }
    FUN_0c038362(a4);
    t22 = 0x3770;
    if (((((struct o3770_int *)(a4))->v)) != 0) {
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t22 = 0x374B;
    }
    return t22;
}

int FUN_0c1723b4(int a4, int a5, int a6)
{
    register int t2;

    if ((*(signed char *)((a5 + 0x45))) == 0) {
        (((struct o48_uint *)(a5))->v) = (((((struct o48_int *)(a5))->v)) + 0x1);
        t2 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t2 == 0x80) {
            (((struct o48_uint *)(a5))->v) = 0x0;
        }
        FUN_0c038362(a4);
        if ((unsigned char)(*(signed char *)((0x84 + ((((struct o118_int *)(a4))->v))))) == 64) {
            (((struct o48_uint *)(a5))->v) = 0x0;
            (((struct o45_uchar *)(a5))->v) = 0x1;
        }
        if (((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > ((((struct o4C_float *)(a5))->v))) {
            (((struct o4C_float *)(a5))->v) = ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v));
        }
        return thunk_FUN_0c0385e0(a4);
    }
    return 0x45;
}

int FUN_0c087ae8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c085f66(a4);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        }
        (((struct o50_float *)(a4))->v) = 0.0f;
        return FUN_0c085d0c(a4);
    }
    if (!((*(float *)0xC087BA0) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
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

int FUN_0c0aee88(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x6, (t0), 0x2, 0x6);
        (((struct o5C_float *)(a4))->v) = (((((struct o37A0_float *)(a4))->v)) * 3.0f);
        (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 9.0f));
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        FUN_0c0ae748(a4);
    }
    FUN_0c038362(a4);
    return FUN_0c0ae750(a4, 0x0);
}

int FUN_0c0abea8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x13, (t0), 0x2, 0x13);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, ((((struct oC_float *)0xC0ABFC0)->v)), ((((struct o8_float *)0xC0ABFC0)->v)), ((((struct o4_float *)0xC0ABFC0)->v)), ((((struct o0_float *)0xC0ABFC0)->v)));
        (((struct o131_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0d6230(int a4)
{
    int stk[2];
    register int t9;
    register int t10;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C8254)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1C8260)));
    *(unsigned short *)0xC540996 = 0x0;
    FUN_0c0d6106();
    if ((*(signed char *)0xC54098D) != 11) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t9 = *(signed char *)0xC542237;
    t10 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t9 << 2) << 1) + t9) << 2) + 0xC286D34) + (((t10 << 1) + t10) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0abc6c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, ((((struct oC_float *)0xC0ABD50)->v)), ((((struct o8_float *)0xC0ABD50)->v)), ((((struct o4_float *)0xC0ABD50)->v)), ((((struct o0_float *)0xC0ABD50)->v)));
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0b7fc0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, ((((struct oC_float *)0xC0B80A4)->v)), ((((struct o8_float *)0xC0B80A4)->v)), ((((struct o4_float *)0xC0B80A4)->v)), ((((struct o0_float *)0xC0B80A4)->v)));
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0751e4(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;

    FUN_0c037bf6(a4, a5, a6);
    t2 = *(signed char *)((a4 + 0x373F));
    if (((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x3715))) == 8) && ((t0 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x15)), t0 == 8) && (t1 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x17)), (int)t1 < (int)0x2))) {
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c073ed0((((short)t2 * (short)0x3938) + 0xC532498), (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD18) + 0x898));
    }
    return 0x20;
}

int FUN_0c0e0562(int a4)
{
    register int t9;
    register int t2;

    t9 = 0x0;
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        t2 = FUN_0c07d15c(a4);
        t9 = 0x0;
        if (t2 != 0) {
            *(unsigned char *)((a4 + 0x1)) = (t2 - 1);
            FUN_0c073ed0(a4, (t2 - 1), ((*(int *)(((((*(signed char *)0xC542237) + 0x10) << 2) + 0xC25ACBC))) + 0xC8));
            t9 = 0x1;
        }
    }
    return t9;
}

int FUN_0c072782(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x0, (t0), 0x2, 0x0);
        FUN_0c081dfc(a4);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0176ba(void)
{
    int t0;
    register int t1;

    t1 = FUN_0c01626a();
    if ((t1 != 0) && (t0 = *(signed char *)0xC304C24, t0 != 0)) {
        if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
            return FUN_0c016a88();
        }
        t0 = FUN_0c016244();
        if (t0 == 0) {
            return FUN_0c017ee8();
        }
        thunk_FUN_0c0167cc(0xC304C24, 0xC304CA4);
        return FUN_0c017e48();
    }
    return t1;
}

int FUN_0c074c80(int a4, float f4)
{
    register int t8;

    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        t8 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x12));
        if (((0xC & (unsigned char)t8) != 12) && ((0x20 & (unsigned char)t8) == 0)) {
            if ((*(signed char *)((a4 + 0x371C))) == 0) {
                if ((*(signed char *)((a4 + 0x374D))) != 0) {
                    return FUN_0c074c0c(a4);
                }
                return 0x374D;
            }
            return 0x371C;
        }
        return FUN_0c074c0c(a4);
    }
    return FUN_0c07c5dc(a4, (*(signed char *)((a4 + 0x374D))), 0x1, f4);
}

int FUN_0c100604(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                                return (unsigned char)t0;
                            }
                            return FUN_0c100712();
                        }
                        return FUN_0c1006a2();
                    }
                    return thunk_FUN_0c114c34();
                }
                return thunk_FUN_0c10f4b2(f4);
            }
            return thunk_FUN_0c10c9ce();
        }
        return thunk_FUN_0c10af74(f4);
    }
    return FUN_0c107310(a4, a5, a6);
}

void FUN_0c0c3010(int a4, int a5, int a6, float f4)
{
    if (a4 != 0) {
        if ((*(signed char *)((a4 + 0x0))) == 9) {
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o41D_uchar *)(a4))->v) = 0x7;
            (((struct o41F_uchar *)(a4))->v) = a6;
            *(unsigned char *)((a4 + 0x1)) = a5;
            FUN_0c0c241a(a4, a5, a6, f4);
            FUN_0c0c2c30(a4);
    return;
        }
        return;
    }
}

int FUN_0c0367e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC4B4160) == 0) {
        FUN_0c035c1a(0x18, (*(int *)0xC4B40D8), a6, a7);
        t0 = *(int *)0xC4B40D8;
        FUN_0c0377b2(t0);
        t1 = FUN_0c035bc6(0x19);
        FUN_0c035c44(0xCB00000, t1);
        t1 = FUN_0c035d74(t0, 0x7D, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4160 = 0x1;
        t0 = t1;
    }
    return t0;
}
