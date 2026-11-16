/* Straight-line functions with calls and guards (batch gen_my): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o430_short { char p[0x430]; short v; };
struct o430_ushort { char p[0x430]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0f2034(void);
int FUN_0c16e9cc(int);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c131678(int a4, int a5);
int FUN_0c13d748(int a4, int a5);
int FUN_0c083cf0(int a4, int a5, int a6, int a7, float f4);
int FUN_0c12df3c(int a4);
int FUN_0c14ada0(int a4, int a5, int a6, int a7, int a8, float f4);
int FUN_0c14d34c(int a4, int a5);
int FUN_0c16ea1e(int a4);

int FUN_0c131678(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c03f444(0x5, 0x0, 0x1);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t0 + 0x4)) = 0xC131644;
            FUN_0c187798();
            FUN_0c187798();
            FUN_0c187798();
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0xD;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            *(unsigned short *)((t0 + 0x1C)) = 0x0;
            *(unsigned short *)((t0 + 0x1E)) = a5;
            (((struct o20_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x3753)));
            (((struct o22_ushort *)(t0))->v) = ((((struct o3818_short *)(a4))->v));
            t3 = (((struct oC4_int *)(t0))->v);
            FUN_0c03744a(t3, 0x0, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0xF;
            FUN_0c187798();
            (((struct o7C_uint *)(t3))->v) = 0x0;
            (((struct o80_uint *)(t3))->v) = 0x0;
            (((struct o78_uint *)(t3))->v) = 0x0;
            (((struct o74_float *)(t3))->v) = 0.0f;
            (((struct o70_float *)(t3))->v) = 0.0f;
            (((struct o6C_float *)(t3))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x10)) = a4;
            (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
            t1 = 0xA4;
        }
    }
    return t1;
}

int FUN_0c13d748(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t25;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t25 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D66E;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        t15 = 0x1555;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            t15 = 0xFFFFEAAB;
        }
        *(unsigned int *)((t3 + 0x34)) = t15;
        nlUnitMatrix();
        nlRotateAY((*(int *)((t3 + 0x38))));
        nlRotateAX((*(int *)((t3 + 0x34))));
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        *(float *)(((int)stk + 12)) = (*(float *)0xC13D890);
        nlCalcPoint((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        math_vec3_accumulate((t3 + 0x28), (((int)stk + 0) + 0x4));
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t25 = 0xA9;
    }
    return t25;
}

int FUN_0c083cf0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    float u0;

    t1 = *(signed char *)0xC542237;
    if (t1 != 2) {
        if (t1 == 6) {
            t1 = FUN_0c0f2034();
            if (t1 != 0) {
                t1 = *(short *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8));
                t2 = (unsigned short)((-t1) + 0x5000);
                if ((int)(unsigned short)((-t1) + 0x5000) < 0) {
                    t2 = ((unsigned short)((-t1) + 0x5000) + 0x1FFF);
                }
                (((struct o42C_ushort *)(a4))->v) = (*(short *)((((((int)t2 >> 13) & 0x7) << 1) + 0xC2594F4)));
                *(unsigned int *)((a4 + 0x38)) = 0x8000;
                if (((*(signed char *)((a4 + 0x3715))) != 5) && ((u0 = (((struct o30_float *)(a4))->v), 1900.0f > u0) && (u0 > 1100.0f))) {
                    (((struct o430_ushort *)(a4))->v) = (((((struct o430_short *)(a4))->v)) | 0x100);
                }
            }
        }
        return 0x0;
    }
    if (((*(signed char *)((a4 + 0x3715))) == 0) && (t0 = *(signed char *)0xC54098D, t0 == 6)) {
        (((struct o3717_uchar *)(a4))->v) = 0x17;
        (((struct o3718_uchar *)(a4))->v) = 0x6;
        FUN_0c085cac(a4, 0x17, 0x6, a7);
        return 0x1;
    }
    return 0x0;
}

int FUN_0c12df3c(int a4)
{
    register int t0;
    register int t13;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t13 = t0;
    if (t0 != 0) {
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x2, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t1 + 0x6)) = 0x21F;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12E04C;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        (((struct o68_uint *)(t1))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 0.0f);
        (((struct o20_float *)(t1))->v) = 0.0f;
        (((struct o1C_float *)(t1))->v) = 0.0f;
        (((struct o18_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t13 = 0x0;
    }
    return t13;
}

int FUN_0c14ada0(int a4, int a5, int a6, int a7, int a8, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        FUN_0c187798();
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct o18_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC14AEAE;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = a7;
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned short *)((t0 + 0x1C)) = a6;
        if ((int)a5 < 0) {
            (((struct o44_float *)(t0))->v) = f4;
            u0 = (((struct o0_float *)0xC14AEEC)->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            t1 = 0x40;
        } else {
            (((struct o48_float *)(t0))->v) = f4;
            (((struct o44_float *)(t0))->v) = f4;
            (((struct o40_float *)(t0))->v) = f4;
            u0 = (((struct o4_float *)0xC14AEEC)->v);
            if (a5 == 0) {
                (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - u0);
                *(unsigned int *)((t0 + 0x3C)) = 0xFFFFC000;
                t1 = 0x2C;
            } else {
                t1 = a5;
                if (a5 == 1) {
                    (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - u0);
                    *(unsigned int *)((t0 + 0x3C)) = 0x4000;
                    t1 = 0x2C;
                }
            }
        }
    }
    return t1;
}

int FUN_0c14d34c(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x3, 0x47, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14D1DC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((0xC5324D0 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))));
        (((struct o48_float *)(t0))->v) = 1.79999995f;
        (((struct o44_float *)(t0))->v) = 1.79999995f;
        (((struct o40_float *)(t0))->v) = 1.79999995f;
        FUN_0c187798();
        (((struct o4C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + -1200.0f);
        (((struct o50_float *)(t0))->v) = -15.0f;
        (((struct o5C_float *)(t0))->v) = -0.800000012f;
        *(unsigned short *)((t0 + 0x1C)) = 0x64;
        FUN_0c064d24(t0, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0);
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        return FUN_0c07e2f4(t0, 0x61);
    }
    return t0;
}

int FUN_0c16ea1e(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c16e9cc(a4);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 * 0.899999976f);
            (((struct o48_float *)(a4))->v) = (u0 * 0.899999976f);
            (((struct o44_float *)(a4))->v) = (u0 * 0.899999976f);
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                return FUN_0c03f346(a4);
            }
            return 0x20;
        }
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0x20;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0xA;
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x28;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
