/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3824_short { char p[0x3824]; short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c038958(int, int);
int FUN_0c064f80(int);
int FUN_0c070642(int);
int FUN_0c07075c(int);
int FUN_0c071774(int);
int FUN_0c072c34(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c09e38c(int, int, int, int);
int FUN_0c09e8de(int, int, int, int);
int FUN_0c0b7562(int);
int FUN_0c0b7612(int);
int FUN_0c0b76e0(int);
int FUN_0c0b7bb2(int);
int FUN_0c0b7f88(int);
int FUN_0c0b81e4(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c177450(void);
int ai_clear_op_state(void);
int ai_script_branch(int, int);
int dbg_printf(int, ...);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlLocate(void);
int FUN_0c084d14(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0bfe78(int a4);
int FUN_0c0888b0(int a4);
int FUN_0c08cab0(int a4, int a5, int a6, int a7);
int FUN_0c0b8484(int a4, int a5, int a6, int a7);
int FUN_0c087138(int a4);
int FUN_0c0866c8(int a4);
int FUN_0c08a518(int a4);
int FUN_0c089ea8(int a4);
int FUN_0c089c64(int a4);
int FUN_0c08868c(int a4);
int FUN_0c0c0e34(int a4);
int FUN_0c0bdc7c(int a4, int a5);
int FUN_0c2bc09c(int a4);
int FUN_0c09e944(int a4, int a5, int a6, int a7);
int FUN_0c010080(int a4, int a5, int a6);
int FUN_0c0be1c0(int a4);
int FUN_0c2bc0d6(int a4);
int FUN_0c0bdf18(void);
int FUN_0c0f2fe8(int a4);
int FUN_0c2bc0f0(void);

int FUN_0c084d14(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    (((struct o3715_uchar *)(a4))->v) = 0x1F;
    t1 = (((struct o3768_int *)(a4))->v);
    if ((t1 != 0) && (t0 = *(signed char *)((t1 + 0x41C)), (unsigned char)t0 == 0xC7)) {
        FUN_0c081dfc(a4, a5, a6, a7);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((((((struct o3768_int *)(a4))->v)) + 0x28)); }
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -2.5f;
        t0 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
        u0 = (((struct o37C4_float *)(a4))->v);
        u1 = (((struct o28_float *)(a4))->v);
        u2 = (((struct o37CC_float *)(a4))->v);
        u3 = (((struct o30_float *)(a4))->v);
        u4 = ((u3 - u2) * (u3 - u2));
        u4 = u4 + ((u1 - u0)) * ((u1 - u0));
        (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u4));
        *(unsigned short *)((a4 + 0x1C)) = (int)((((((struct o50_float *)(a4))->v)) / ((((struct o5C_float *)(a4))->v))) * (1.0f + 1.0f));
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t0)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t0)) * ((((struct o3790_float *)(a4))->v))));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0x8, (t0), 0x0, 0x8);
        (((struct o3830_ushort *)(a4))->v) = 0x0;
        (((struct o374B_uchar *)(a4))->v) = 0x1;
        return FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c0bfe78(int a4)
{
    register int t42;

    if (400.0f > ((((struct o2C_float *)(a4))->v))) {
        if (((((struct o28_float *)(a4))->v)) > ((-((((struct o30_float *)(a4))->v))) + -100.0f)) {
            (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o28_float *)(a4))->v));
            (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
            (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 300.0f;
        } else {
            (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = -550.0f;
            (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
            (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o30_float *)(a4))->v));
        }
    } else {
        if (((((struct o28_float *)(a4))->v)) > ((-((((struct o30_float *)(a4))->v))) + -100.0f)) {
            (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o28_float *)(a4))->v));
            (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
            (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = -100.0f;
        } else {
            (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 50.0f;
            (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = 0.0f;
            (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o30_float *)(a4))->v));
        }
    }
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t42 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t42;
}

int FUN_0c0888b0(int a4)
{
    int stk[6];
    register int t11;
    register int t34;
    int t12;
    register int t13;
    int t14;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        if ((*(signed char *)((a4 + 0x3716))) == 1) {
            t11 = *(signed char *)((a4 + 0x3753));
            if (((t11 == -1) && (t12 = (((struct o3818_short *)(a4))->v), (unsigned short)t12 == 0x219)) || ((t13 = *(signed char *)((a4 + 0x2)), t13 == 10) && ((t11 == -1) && (t14 = (((struct o3818_short *)(a4))->v), (unsigned short)t14 == 4)))) {
                *(int *)((int)stk + 8) = 0x99;
                FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, 0x3, 0x99);
                (((struct o3747_uchar *)(a4))->v) = 0x4;
                (((struct o37A4_float *)(a4))->v) = 0.0f;
                (((struct o372D_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x14;
                (((struct o16_uchar *)(a4))->v) = 0x2;
                t34 = 0x16;
            } else {
                *(int *)((int)stk + 8) = 0x95;
                *(int *)((int)stk + 4) = 0x3;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x95, 0xFFFFFFFF, 0x3, 0x95);
                FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
                FUN_0c085eac(a4, 0x6);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x14;
                t34 = 0x22;
            }
        } else {
            *(int *)((int)stk + 8) = 0x95;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x95, 0xFFFFFFFF, 0x3, 0x95);
            FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
            FUN_0c085eac(a4, 0x6);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x14;
            t34 = 0x22;
        }
    } else {
        *(int *)((int)stk + 8) = 0x97;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x97, 0xFFFFFFFF, 0x3, 0x97);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x14;
        t34 = 0x22;
    }
    return t34;
}

int FUN_0c08cab0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x8;
    (((struct o3735_uchar *)(a4))->v) = 0x1;
    (((struct o372D_uchar *)(a4))->v) = 0x0;
    t1 = FUN_0c07ebd0(a4);
    if ((t1 != 0) && (t0 = *(signed char *)((a4 + 0x3731)), t0 == 2)) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
    }
    t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x41C))) * (unsigned short)0x34) + 0xC2738BE))) << 2) + 0xC2595BC)))))(a4, a5, a6, a7);
    (((struct o15_uchar *)(a4))->v) = (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((((((struct o376C_int *)(a4))->v)) + 0x41C))) * (unsigned short)0x34) + 0xC2738BE)));
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        if ((*(signed char *)((0xC2596C4 + ((unsigned char)(*(signed char *)((a4 + 0x3721))) << 2)))) != 99) {
            FUN_0c038958(a4, (*(signed char *)(((((unsigned char)(*(signed char *)((a4 + 0x3721))) << 2) + 0xC2596C4) + 0x0))));
        }
        t0 = 0x1;
    } else {
        if ((*(signed char *)(((((unsigned char)(*(signed char *)((a4 + 0x3721))) << 2) + 0xC2596C4) + 0x1))) != 99) {
            FUN_0c038958(a4, (*(signed char *)(((((unsigned char)(*(signed char *)((a4 + 0x3721))) << 2) + 0xC2596C4) + 0x1))));
        }
        t0 = 0x2;
    }
    (((struct o18_uchar *)(a4))->v) = t0;
    return 0x18;
}

int FUN_0c0b8484(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D6D0)))))(a4, a5, a6, a7);
            }
                break;
            case 4:
            {
                FUN_0c0b7612(a4);
            }
                break;
            case 6:
            {
                FUN_0c070642(a4);
            }
                break;
            case 8:
            {
                FUN_0c07075c(a4);
            }
                break;
            case 10:
            {
                FUN_0c0b76e0(a4);
            }
                break;
            case 12:
            {
                FUN_0c0b7562(a4);
            }
                break;
            case 14:
            {
                FUN_0c0b7bb2(a4);
            }
                break;
            case 16:
            {
                FUN_0c0b7f88(a4);
            }
                break;
            case 18:
            {
                FUN_0c071774(a4);
            }
                break;
            case 24:
            {
                FUN_0c0b7f88(a4);
            }
                break;
            case 26:
            {
                FUN_0c0b81e4(a4);
            }
                break;
            default:
            {
                FUN_0c072c34(a4);
            }
                break;
        }
    } else {
        t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D6D0)))))(a4, a5, a6, a7);
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
    return 0x94;
}

int FUN_0c087138(int a4)
{
    int stk[6];
    register int t16;
    register int t21;
    register float u18;
    register int t13;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x3;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x3, 0xFFFFFFFF, 0x3, 0x3);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o22_ushort *)(a4))->v) = 0x0;
        t13 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x7;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x7, 0xFFFFFFFF, 0x3, 0x7);
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1E)) = 0xD;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t13 = 0x17;
    }
    *(unsigned char *)((a4 + t13)) = 0x0;
    t16 = *(signed char *)((a4 + 0x3721));
    t21 = (unsigned char)t16;
    if ((unsigned char)t16 == 23) {
        (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + 30.0f);
        u18 = *(float *)0xC087258;
        if (((((struct o160_float *)(a4))->v)) > u18) {
            (((struct o160_float *)(a4))->v) = u18;
        }
        t21 = 0x160;
    }
    return t21;
}

int FUN_0c0866c8(int a4)
{
    register int t12;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1E, 0xFFFFFFFF, 0x3, 0x1E);
        FUN_0c085eac(a4, 0x6);
        (((struct o22_ushort *)(a4))->v) = 0x1E;
        t12 = 0x0;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1F, 0xFFFFFFFF, 0x3, 0x1F);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / 8.0f);
        if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        }
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 16.0f);
        FUN_0c085eac(a4, 0x6);
        (((struct o20_ushort *)(a4))->v) = 0x32;
        (((struct o22_ushort *)(a4))->v) = 0x1E;
        t12 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t12;
    return FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
}

int FUN_0c08a518(int a4)
{
    int stk[6];
    register float u9;
    register int t17;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x94;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x94, 0xFFFFFFFF, 0x3, 0x94);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        t17 = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x16;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x16, 0xFFFFFFFF, 0x2, 0x16);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        u9 = (((struct o0_float *)0xC08A65C)->v);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u9);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u9);
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC08A65C)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o10_float *)0xC08A65C)->v));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t17 = 0x1;
    }
    (((struct o16_uchar *)(a4))->v) = t17;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c089ea8(int a4)
{
    int stk[5];
    register int t15;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x91;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x91, 0xFFFFFFFF, 0x3, 0x91);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t15 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x93;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x93, 0xFFFFFFFF, 0x3, 0x93);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        *(unsigned short *)((a4 + 0x1E)) = 0x11;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t15 = 0x17;
    }
    *(unsigned char *)((a4 + t15)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c089c64(int a4)
{
    int stk[5];
    register int t15;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xB6;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB6, 0xFFFFFFFF, 0x3, 0xB6);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t15 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xB7;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB7, 0xFFFFFFFF, 0x3, 0xB7);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t15 = 0x17;
    }
    return t15;
}

int FUN_0c08868c(int a4)
{
    int stk[5];

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x79;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x79, 0xFFFFFFFF, 0x3, 0x79);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x7A;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x7A, 0xFFFFFFFF, 0x3, 0x7A);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    return FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
}

int FUN_0c0c0e34(int a4)
{
    register int t0;
    float u4;
    register int t7;

    t0 = *(signed char *)0xC472462;
    if (((int)(short)(int)(((((struct o2C_float *)(a4))->v)) - ((((struct o2C_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v))) <= 0) && (u4 = (((struct o50_float *)(a4))->v), !(1.0f > u4))) {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        t7 = 0x50;
    } else {
        *(unsigned int *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
        ai_clear_op_state();
        (((struct o4_ushort *)0xC47245C)->v) = 0x1;
        t7 = 0x1;
    }
    return t7;
}

int FUN_0c0bdc7c(int a4, int a5)
{
    register int t10;

    if ((*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AED))) == 0) {
        ai_script_branch(a4, a5);
    }
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    t10 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t10;
}

int FUN_0c2bc09c(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = a4;
    if (((unsigned short)a4 != 0) && (((unsigned short)a4 != 1) && (((unsigned short)a4 != 2) && (((unsigned short)a4 != 3) && ((unsigned short)a4 != 4))))) {
        t1 = 0x2;
    }
    t2 = *(volatile signed char *)0xFFD80004;
    t3 = *(volatile signed char *)0xFFD80004;
    *(volatile unsigned char *)0xFFD80004 = (t3 & 0xFB);
    t4 = *(volatile short *)0xFFD80028;
    *(volatile unsigned short *)0xFFD80028 = ((t4 & 0xFFFFFFF8) | t1);
    *(volatile unsigned char *)0xFFD80004 = t2;
    return (t3 & 0xFB);
}

int FUN_0c09e944(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x3728));
    if ((t0 != 0) && (t0 == 5)) {
        FUN_0c09e8de(a4, a5, a6, a7);
    } else {
        FUN_0c09e38c(a4, a5, a6, a7);
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c010080(int a4, int a5, int a6)
{
    nlLocate();
    dbg_printf(0xC1A3DA8, ((*(int *)(((a6 << 2) + 0xC20AF40)))), a6);
    return FUN_0c177450();
}

int FUN_0c0be1c0(int a4)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = ((((struct o3824_short *)(((((struct o3760_int *)(a4))->v))))->v));
    return 0xC471AEE;
}

int FUN_0c2bc0d6(int a4)
{
    register int t0;
    register int t1;

    t0 = *(volatile signed char *)0xFFD80004;
    t1 = *(volatile signed char *)0xFFD80004;
    *(volatile unsigned char *)0xFFD80004 = (t1 & 0xFB);
    *(volatile unsigned int *)0xFFD80020 = 0xFFFFFFFF;
    *(volatile unsigned int *)0xFFD80024 = (-a4);
    *(volatile unsigned char *)0xFFD80004 = t0;
    return (t1 & 0xFB);
}

int FUN_0c0bdf18(void)
{
    *(unsigned char *)(((0xC471AEC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c0f2fe8(int a4)
{
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c2bc0f0(void)
{
    register int t0;

    t0 = *(volatile int *)0xFFD80024;
    return (0xFFFFFFFF - t0);
}
