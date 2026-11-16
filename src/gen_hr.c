/* Straight-line functions with calls and guards (batch gen_hr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1FC_int { char p[0x1FC]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o200_int { char p[0x200]; int v; };
struct o228_float { char p[0x228]; float v; };
struct o22C_float { char p[0x22C]; float v; };
struct o230_float { char p[0x230]; float v; };
struct o240_int { char p[0x240]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oEC_float { char p[0xEC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c052cf8(int, int, int);
int FUN_0c0532be(int);
int FUN_0c0533a4(int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0ae750(int, int);
int FUN_0c142a58(int, int, int, int, int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0537d4(int a4);
int FUN_0c0aef2c(int a4);
int FUN_0c12409c(int a4, int a5, int a6, int a7);
int FUN_0c070c7c(int a4, float f4);
int FUN_0c121ba8(int a4, int a5);
int FUN_0c15dd90(int a4);
int FUN_0c162146(int a4, int a5, int a6);

int FUN_0c0537d4(int a4)
{
    int stk[30];
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t21;

    FUN_0c0533a4(a4);
    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((((struct o240_int *)(a4))->v)) + 0x0))) + ((((struct o228_float *)(a4))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((((struct o240_int *)(a4))->v))))->v)) + ((((struct o22C_float *)(a4))->v)));
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((((struct o240_int *)(a4))->v))))->v)) + ((((struct o230_float *)(a4))->v)));
    t10 = 0x0;
    t11 = 0x1;
    for (;;) {
        t12 = FUN_0c0532be(t10);
        if (t12 != 0) {
            t15 = ((((t11 << 1) + t11) << 2) + ((int)stk + 0));
            t11 = (t11 + 0x1);
            *(float *)((t15 + 0x0)) = ((((struct o28_float *)(((t10 * 0x3938) + 0xC532498)))->v));
            (((struct o4_float *)(t15))->v) = (((((struct o2C_float *)(((t10 * 0x3938) + 0xC532498)))->v)) + -50.0f);
            (((struct o8_float *)(t15))->v) = ((((struct o30_float *)(((t10 * 0x3938) + 0xC532498)))->v));
            *(float *)((((((t11 << 1) + t11) << 2) + ((int)stk + 0)) + 0x0)) = ((((struct o28_float *)(((t10 * 0x3938) + 0xC532498)))->v));
            t21 = ((((t11 << 1) + t11) << 2) + ((int)stk + 0));
            t11 = (t11 + 0x1);
            (((struct o4_float *)(t21))->v) = (((((struct o2C_float *)(((t10 * 0x3938) + 0xC532498)))->v)) + 200.0f);
            (((struct o8_float *)(t21))->v) = ((((struct o30_float *)(((t10 * 0x3938) + 0xC532498)))->v));
        }
        t10 = (t10 + 0x1);
        if ((int)t10 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x18)) = 0x3E8;
    FUN_0c052cf8(a4, t11, ((int)stk + 0));
    (((struct oC_float *)((0xBC + a4)))->v) = (((((struct oC_float *)((0xBC + a4)))->v)) + ((((((struct oBC_float *)(a4))->v)) - ((((struct oC_float *)((0xBC + a4)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct o4_float *)(((0xBC + a4) + 0xC)))->v) = (((((struct o4_float *)(((0xBC + a4) + 0xC)))->v)) + ((((((struct o4_float *)((0xBC + a4)))->v)) - ((((struct o4_float *)(((0xBC + a4) + 0xC)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct o8_float *)(((0xBC + a4) + 0xC)))->v) = (((((struct o8_float *)(((0xBC + a4) + 0xC)))->v)) + ((((((struct o8_float *)((0xBC + a4)))->v)) - ((((struct o8_float *)(((0xBC + a4) + 0xC)))->v))) / (float)(((((struct o1FC_int *)(a4))->v)) + 0x1)));
    (((struct oC_float *)((0xEC + a4)))->v) = (((((struct oC_float *)((0xEC + a4)))->v)) + ((((((struct oEC_float *)(a4))->v)) - ((((struct oC_float *)((0xEC + a4)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    (((struct o4_float *)(((0xEC + a4) + 0xC)))->v) = (((((struct o4_float *)(((0xEC + a4) + 0xC)))->v)) + ((((((struct o4_float *)((0xEC + a4)))->v)) - ((((struct o4_float *)(((0xEC + a4) + 0xC)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    (((struct o8_float *)(((0xEC + a4) + 0xC)))->v) = (((((struct o8_float *)(((0xEC + a4) + 0xC)))->v)) + ((((((struct o8_float *)((0xEC + a4)))->v)) - ((((struct o8_float *)(((0xEC + a4) + 0xC)))->v))) / (float)(((((struct o200_int *)(a4))->v)) + 0x1)));
    return 0x8;
}


int FUN_0c12409c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;

    t8 = (((struct oC4_int *)(a4))->v);
    t9 = *(signed char *)((a4 + 0x15));
    if (t9 != 0) {
        if (t9 == 1) {
            (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o7C_uint *)(t8))->v) = (((((struct o7C_int *)(t8))->v)) + (*(int *)((a4 + 0x38))));
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) + 5.0f));
            (((struct o6C_float *)(t8))->v) = ((math_cos_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
            (((struct o74_float *)(t8))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
            if (((((struct o18_float *)(t8))->v)) > 0.0f) {
                u0 = (((struct o18_float *)(t8))->v);
                (((struct o18_float *)(t8))->v) = (u0 - 0.0399999991f);
                if (0.0f > (u0 - 0.0399999991f)) {
                    (((struct o18_float *)(t8))->v) = 0.0f;
                }
                u0 = (((struct o18_float *)(t8))->v);
                (((struct o20_float *)(t8))->v) = u0;
                (((struct o1C_float *)(t8))->v) = u0;
            }
            t10 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t10 - 1);
            t11 = (short)(t10 - 1);
            if ((short)(t10 - 1) == 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t11 = 0x15;
            }
            return t11;
        }
        if (t9 == 2) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t9;
    }
    (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) + ((((struct o50_float *)(a4))->v)));
    t9 = (((struct o7C_int *)(t8))->v);
    t10 = *(int *)((a4 + 0x38));
    (((struct o7C_uint *)(t8))->v) = (t9 + t10);
    (((struct o6C_float *)(t8))->v) = ((math_cos_angle16(((-(t9 + t10)) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
    (((struct o74_float *)(t8))->v) = ((math_sin_angle16(((-((((struct o7C_int *)(t8))->v))) + 0x10000))) * ((((struct o4C_float *)(a4))->v)));
    if (((((struct o4C_float *)(a4))->v)) > ((((struct o54_float *)(a4))->v))) {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 5.0f);
    }
    if (1.0f > ((((struct o18_float *)(t8))->v))) {
        (((struct o18_float *)(t8))->v) = (((((struct o18_float *)(t8))->v)) + (((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 1.0f) / 30.0f));
        if (((((struct o18_float *)(t8))->v)) > 1.0f) {
            (((struct o18_float *)(t8))->v) = 1.0f;
        }
        u0 = (((struct o18_float *)(t8))->v);
        (((struct o20_float *)(t8))->v) = u0;
        (((struct o1C_float *)(t8))->v) = u0;
    }
    t8 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
    t9 = 0x15;
    if (((short)(t8 - 1) != 0) && ((t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26) && (((t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x375A + t2)), t3 == 1) || (t4 = *(int *)((a4 + 0x10)), t5 = *(signed char *)((0x375A + t4)), t5 == 4)) && (t6 = *(int *)((a4 + 0x10)), t7 = *(signed char *)((t6 + 0x15)), (int)t7 <= (int)0x2)))) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        t9 = 0x19;
    }
    return t9;
}

int FUN_0c070c7c(int a4, float f4)
{
    register int t0;
    register int t1;
    float u0;
    register float u1;

    if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
        t0 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
        if ((t0 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
            u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
            u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
            u1 = math_signed_sqrt(u0);
            if (200.0f > u1) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
            }
        }
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 180.0f);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x6, (t0), 0x2, 0x6);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            t0 = 0x9;
            if ((*(signed char *)((a4 + 0x2))) != 15) {
                t0 = 0x7;
            }
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, t0, (t1), 0x2, (t0));
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
            FUN_0c07daea(a4, t1, t0);
            (((struct o15_uchar *)(a4))->v) = 0x5;
            return 0x15;
        }
        return FUN_0c038362(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c121ba8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
        t1 = *(signed char *)(((0x3 + a4) + 0x0));
        (((struct o6C_float *)(t0))->v) = ((*(float *)(((t1 << 2) + 0xC201A60))) - (*(float *)(((t1 << 2) + 0xC201A58))));
        (((struct o70_float *)(t0))->v) = (*(float *)0xC201A68);
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
        t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0));
    u0 = 0.75f;
    u0 = u0 + 0.25f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
    (((struct o18_float *)(t0))->v) = u0;
    (((struct o20_float *)(t0))->v) = u0;
    (((struct o1C_float *)(t0))->v) = u0;
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t0 = 0x15;
        } else {
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 - 0.0500000007f);
            if (1.0f > (u0 - 0.0500000007f)) {
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
            t1 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
            u0 = ((((((struct o40_float *)(a4))->v)) + -1.0f) * ((((struct o4_float *)0xC121E44)->v)));
            u0 = -u0;
            (((struct o88_float *)(t1))->v) = (u0 + 1.0f);
            (((struct o84_float *)(t1))->v) = (u0 + 1.0f);
            t0 = 0x84;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)((a4 + 0x3))) != (*(signed char *)0xC4759E8)) {
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t0 = 0x15;
        } else {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
            u0 = (((struct o0_float *)0xC121E44)->v);
            if (((((struct o40_float *)(a4))->v)) > u0) {
                (((struct o40_float *)(a4))->v) = u0;
            }
            (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
            t2 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
            u0 = ((((((struct o40_float *)(a4))->v)) + -1.0f) * ((((struct o4_float *)0xC121E44)->v)));
            u0 = -u0;
            (((struct o88_float *)(t2))->v) = (u0 + 1.0f);
            (((struct o84_float *)(t2))->v) = (u0 + 1.0f);
            t0 = 0x84;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c15dd90(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t16;
    register int t17;
    register int t21;
    register int t23;
    register int t24;
    register int t28;
    register int t32;
    register int t33;
    register int t35;
    register int t36;
    register int t44;
    register int t40;
    register int t42;
    register int t52;
    register int t53;
    register int t57;
    register int t61;
    register int t46;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)0xC5429A8;
        t2 = *(int *)(((((t0 << 2) + t0) << 2) + 0xC20375C));
        t6 = t2;
        if (t1 != 0) {
            t6 = (t2 + 0x8);
            if (t1 == 1) {
                t6 = (t2 + 0x4);
            }
        }
        t8 = *(int *)0xC4B4114;
        t9 = t6;
        if ((int)t6 >= (int)0xA) {
            t9 = (t6 + 0x6);
        }
        t11 = FUN_0c037320(t9, t8);
        t12 = FUN_0c03f444(0x8, 0x0, t11);
        if (t12 != 0) {
            FUN_0c03733c(t12, t9, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t12))->v) = 0x1F;
            (((struct oA9_uchar *)(t12))->v) = 0x21;
            *(unsigned char *)((t12 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t12 + 0x4)) = 0xC15DA24;
            *(unsigned char *)((t12 + 0x2)) = t0;
            (((struct o20_ushort *)(t12))->v) = a4;
            *(unsigned short *)((t12 + 0x1C)) = ((*(short *)((((((t0 << 2) + t0) << 2) + 0xC20375C) + 0x4))) + a4);
            t16 = ((int (*)(int))(FUN_0c187798))(((((t0 << 2) + t0) << 2) + 0xC20375C));
            t17 = ((int (*)(void))(FUN_0c187798))();
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t21 = *(signed char *)0xC5421DF;
    if (t21 != 1) {
        if (t21 != 2) {
            t23 = FUN_0c037320(0x12, (*(int *)0xC4B4114));
            t24 = FUN_0c03f444(0x8, 0x0, t23);
            t46 = t24;
            if (t24 != 0) {
                FUN_0c03733c(t24, 0x12, (*(int *)0xC4B4114));
                (((struct oAC_ushort *)(t24))->v) = 0x1F;
                (((struct oA9_uchar *)(t24))->v) = 0x21;
                *(unsigned char *)((t24 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t24 + 0x4)) = 0xC15DB86;
                *(unsigned char *)((t24 + 0x2)) = 0x0;
                (((struct o20_ushort *)(t24))->v) = a4;
                *(unsigned short *)((t24 + 0x1C)) = ((*(short *)0xC2037B0) + a4);
                t28 = ((int (*)(int))(FUN_0c187798))(0xC2037AC);
                t46 = (((int (*)(void))(FUN_0c187798))());
            }
        } else {
            t32 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 4)) = (((t32 << 2) + t32) << 2);
                t33 = *(int *)((((((t32 << 2) + t32) << 2) + 0xC2037C0) + 0x0));
                *(unsigned int *)(((int)stk + 0)) = t33;
                t35 = FUN_0c037320(t33, (*(int *)0xC4B4114));
                t36 = FUN_0c03f444(0x8, 0x0, t35);
                t44 = t36;
                if (t36 != 0) {
                    FUN_0c03733c(t36, (*(int *)(((int)stk + 0))), (*(int *)0xC4B4114));
                    (((struct oAC_ushort *)(t36))->v) = 0x1F;
                    (((struct oA9_uchar *)(t36))->v) = 0x21;
                    *(unsigned char *)((t36 + 0x1)) = 0xFFFFFFFF;
                    *(unsigned int *)((t36 + 0x4)) = 0xC15DB86;
                    *(unsigned char *)((t36 + 0x2)) = (t32 + 0x1);
                    (((struct o20_ushort *)(t36))->v) = a4;
                    t40 = *(int *)(((int)stk + 4));
                    *(unsigned short *)((t36 + 0x1C)) = ((*(short *)(((t40 + 0xC2037C0) + 0x4))) + a4);
                    t42 = ((int (*)(int))(FUN_0c187798))((t40 + 0xC2037C0));
                    t44 = (((int (*)(void))(FUN_0c187798))());
                }
                t32 = (t32 + 0x1);
                if ((unsigned int)t32 >= (unsigned int)0x3) {
                    break;
                }
            }
            t46 = t44;
        }
        t61 = t46;
    } else {
        t52 = FUN_0c037320(0x12, (*(int *)0xC4B4114));
        t53 = FUN_0c03f444(0x8, 0x0, t52);
        t61 = t53;
        if (t53 != 0) {
            FUN_0c03733c(t53, 0x12, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t53))->v) = 0x1F;
            (((struct oA9_uchar *)(t53))->v) = 0x21;
            *(unsigned char *)((t53 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t53 + 0x4)) = 0xC15DB86;
            *(unsigned char *)((t53 + 0x2)) = 0x0;
            (((struct o20_ushort *)(t53))->v) = a4;
            *(unsigned short *)((t53 + 0x1C)) = ((*(short *)0xC2037B0) + a4);
            t57 = ((int (*)(int))(FUN_0c187798))(0xC2037AC);
            t61 = (((int (*)(void))(FUN_0c187798))());
        }
    }
    return t61;
}

int FUN_0c162146(int a4, int a5, int a6)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t24;
    register int t25;
    register int t29;
    register int t46;
    register int t58;
    register int t49;
    register int t50;
    register int t51;
    register int t64;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = *(int *)(((int)stk + 0));
    t1 = *(int *)0xC4B40CC;
    if (t0 != 0) {
        if (t0 != 1) {
            t64 = 0x0;
            if (t0 == 2) {
                t2 = FUN_0c037320(0xF, t1);
                t64 = 0x0;
                if ((int)t2 >= 0) {
                    t3 = FUN_0c03f444(0x5, 0x0, t2);
                    t64 = 0x0;
                    if (t3 != 0) {
                        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned int *)((t3 + 0x4)) = 0xC161DA4;
                        *(unsigned char *)((t3 + 0x2)) = (*(int *)(((int)stk + 0)));
                        (((struct oA8_uchar *)(t3))->v) = 0x1;
                        (((struct oAC_ushort *)(t3))->v) = 0xF;
                        (((struct oA9_uchar *)(t3))->v) = 0x21;
                        *(unsigned int *)((t3 + 0x10)) = a4;
                        (((struct o48_float *)(t3))->v) = 1.20000005f;
                        (((struct o44_float *)(t3))->v) = 1.20000005f;
                        (((struct o40_float *)(t3))->v) = 1.20000005f;
                        (((struct o30_float *)(t3))->v) = 0.0f;
                        (((struct o2C_float *)(t3))->v) = 0.0f;
                        (((struct o28_float *)(t3))->v) = 0.0f;
                        *(unsigned int *)((t3 + 0x34)) = 0x0;
                        *(unsigned int *)((t3 + 0x38)) = 0x0;
                        *(unsigned int *)((t3 + 0x3C)) = 0x0;
                        t7 = (((struct oC4_int *)(t3))->v);
                        FUN_0c03744a(t7, 0x0, 0xF, (*(int *)0xC4B40CC));
                        *(unsigned char *)((t7 + 0x0)) = 0x1;
                        *(unsigned short *)((t7 + 0x6)) = 0xF;
                        (((struct o8C_float *)(t7))->v) = 1.0f;
                        (((struct o88_float *)(t7))->v) = 1.0f;
                        (((struct o84_float *)(t7))->v) = 1.0f;
                        t64 = t3;
                    }
                }
            }
        } else {
            t24 = FUN_0c037320(0x10, t1);
            t64 = 0x0;
            if ((int)t24 >= 0) {
                t25 = FUN_0c03f444(0x5, 0x0, t24);
                t64 = 0x0;
                if (t25 != 0) {
                    *(unsigned char *)((t25 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t25 + 0x4)) = 0xC161DA4;
                    *(unsigned char *)((t25 + 0x2)) = (*(int *)(((int)stk + 0)));
                    (((struct oA8_uchar *)(t25))->v) = 0x1;
                    (((struct oAC_ushort *)(t25))->v) = 0x3F;
                    (((struct oA9_uchar *)(t25))->v) = 0x21;
                    *(unsigned int *)((t25 + 0x10)) = a4;
                    (((struct o48_float *)(t25))->v) = 2.4000001f;
                    (((struct o44_float *)(t25))->v) = 2.4000001f;
                    (((struct o40_float *)(t25))->v) = 2.4000001f;
                    (((struct o30_float *)(t25))->v) = 0.0f;
                    (((struct o2C_float *)(t25))->v) = 0.0f;
                    (((struct o28_float *)(t25))->v) = 0.0f;
                    *(unsigned int *)((t25 + 0x34)) = 0x0;
                    *(unsigned int *)((t25 + 0x38)) = 0x0;
                    *(unsigned int *)((t25 + 0x3C)) = 0x0;
                    t29 = (((struct oC4_int *)(t25))->v);
                    FUN_0c03744a(t29, 0x0, 0x10, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t29 + 0x0)) = 0x1;
                    *(unsigned short *)((t29 + 0x6)) = 0xF;
                    (((struct o8C_float *)(t29))->v) = 1.0f;
                    (((struct o88_float *)(t29))->v) = 1.0f;
                    (((struct o84_float *)(t29))->v) = 1.0f;
                    t64 = t25;
                }
            }
        }
    } else {
        t46 = FUN_0c03f444(0x5, 0x0, 0x3);
        t58 = 0x0;
        if (t46 != 0) {
            *(unsigned char *)((t46 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t46 + 0x4)) = 0xC161DA4;
            *(unsigned char *)((t46 + 0x2)) = (*(int *)(((int)stk + 0)));
            (((struct oA8_uchar *)(t46))->v) = 0x1;
            (((struct oAC_ushort *)(t46))->v) = 0xF;
            (((struct oA9_uchar *)(t46))->v) = 0x21;
            *(unsigned int *)((t46 + 0x10)) = a4;
            (((struct o48_float *)(t46))->v) = 1.0f;
            (((struct o44_float *)(t46))->v) = 1.0f;
            (((struct o40_float *)(t46))->v) = 1.0f;
            (((struct o30_float *)(t46))->v) = 0.0f;
            (((struct o2C_float *)(t46))->v) = 0.0f;
            (((struct o28_float *)(t46))->v) = 0.0f;
            *(unsigned int *)((t46 + 0x34)) = 0x0;
            *(unsigned int *)((t46 + 0x38)) = 0x0;
            *(unsigned int *)((t46 + 0x3C)) = 0x0;
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t49 = 0x28;
            t50 = 0xF;
            t51 = a4;
            for (;;) {
                if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)0xC) {
                    break;
                }
                t51 = 0xC4;
                t50 = (*(int *)(((int)stk + 0)));
                t51 = (t51 + t46);
                t51 = (t51 + t50);
                t51 = (*(int *)((t51 + 0x0)));
                t49 = (FUN_0c03744a(t51, 0x0, 0x45, (*(int *)0xC4B40CC)));
                *(unsigned char *)((t51 + 0x0)) = 0x1;
                t49 = 0x3F;
                *(unsigned short *)((t51 + 0x6)) = t49;
                t49 = 0x8C;
                *(float *)((t51 + t49)) = (1.0f + 1.0f);
                t49 = (t49 - 4);
                *(float *)((t51 + t49)) = (1.0f + 1.0f);
                t49 = (t49 - 4);
                *(float *)((t51 + t49)) = (1.0f + 1.0f);
                t49 = 0x68;
                *(unsigned int *)((t51 + t49)) = 0x0;
                t50 = (*(int *)(((int)stk + 0)));
                t50 = (t50 + 0x4);
                *(unsigned int *)(((int)stk + 0)) = t50;
            }
            t58 = t46;
        }
        t64 = t58;
    }
    return t64;
}
