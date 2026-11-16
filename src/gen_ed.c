/* Straight-line functions with calls and guards (batch gen_ed): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o100_int { char p[0x100]; int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c01e9e4(void);
int FUN_0c03744a(int, int, int, int);
int FUN_0c0392d4(int, int, int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03afdc(int);
int FUN_0c03c5c0(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(void);
int FUN_0c03f346(int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0584b0(int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05ab04(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c07e420(int, int);
int FUN_0c0d04c4(int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c10b0a0(int, int);
int FUN_0c10b182(int, int);
int FUN_0c1171f0(int);
int FUN_0c1512a0(int, int);
int FUN_0c15aed8(int);
int FUN_0c17b1a0(int);
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(void);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3i_sub(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlStoreMatrix(int);
int nlTranslateV(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e5b60(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c10b270(int a4);
int FUN_0c03934e(int a4);
int FUN_0c01d294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c0e5b60(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    int R12;
    register float F2;
    register float F3;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_6 = a4;
    v0_3 = a5;
    w0_2 = f6;
    v0_7 = *(signed char *)((v0_6 + 0x14));
    v0_4 = (v0_7);
    v0_5 = ((0x41C + v0_6));
    v0_2 = (0x14);
    R12 = (0x1);
    v0_1 = (0x0);
    v0_0 = (v0_6);
    if ((v0_7 == 0)) goto L_C0E5B94;
    if ((v0_4 == 1)) goto L_C0E5BD6;
    L_C0E5F6E:;
    return v0_4;
    L_C0E5BD6:;
    v0_7 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_7);
    v0_6 = (0xC540DD4);
    w0_2 = (10.0f);
    w0_0 = (0.5f);
    w0_1 = (0.0f);
    if ((v0_7 == 0)) goto L_C0E5C0E;
    if ((v0_4 == 1)) goto L_C0E5C64;
    if ((v0_4 == 2)) goto L_C0E5CAE;
    if ((v0_4 != 3)) goto L_C0E5BFA;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_1 = *(signed char *)((v0_0 + 0x2));
    w0_3 = 3000.0f;
    w0_3 = w0_3 + 200.0f * (float)v0_1;
    w0_1 = (200.0f);
    w0_2 = (3000.0f);
    FPUL_ = (v0_1);
    if ((!(((((struct o2C_float *)(v0_0))->v)) > w0_3))) goto L_C0E5D5C;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    w0_2 = w0_2;
    w0_2 = w0_2 + w0_1 * (float)v0_1;
    (((struct o2C_float *)(v0_0))->v) = w0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    FPUL_ = (v0_1);
    L_C0E5D5C:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    v0_1 = *(short *)((v0_0 + 0x1C));
    w0_1 = w0_0;
    w0_1 = w0_1 + w0_0 * (float)(v0_1 & R12);
    (((struct o88_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_1;
    v0_4 = (0x88);
    w0_0 = (w0_0);
    FPUL_ = ((v0_1 & R12));
    goto L_C0E5F6E;
    L_C0E5BFA:;
    if ((v0_4 != 4)) goto L_C0E5C02;
    if (!(((*(short *)((v0_5 + 0x0))) == ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v))))) goto L_C0E5F68;
    v0_4 = (0x15);
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) > (int)R12)) goto L_C0E5DBE;
    goto L_C0E5F6E;
    L_C0E5F68:;
    v0_4 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, v0_3, a6, a7)));
    goto L_C0E5F6E;
    L_C0E5DBE:;
    *(unsigned char *)((v0_0 + v0_4)) = ((*(signed char *)((v0_0 + v0_4))) + 0x1);
    (((struct o54_float *)(v0_0))->v) = w0_1;
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o4C_float *)(v0_0))->v) = w0_1;
    (((struct o5C_float *)(v0_0))->v) = -0.300000012f;
    w0_1 = (((struct o30_float *)((*(int *)((v0_0 + 0x10)))))->v);
    w0_0 = math_cos_angle16(((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x471C));
    w0_1 = w0_1;
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o30_float *)(v0_0))->v) = w0_1;
    w0_1 = (((struct o28_float *)((*(int *)((v0_0 + 0x10)))))->v);
    w0_0 = math_sin_angle16(((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x471C));
    w0_1 = w0_1;
    w0_1 = w0_1 + 150.0f * w0_0;
    (((struct o28_float *)(v0_0))->v) = w0_1;
    *(unsigned int *)((v0_0 + 0x34)) = 0x8000;
    (((struct o126_uchar *)(v0_0))->v) = v0_1;
    FUN_0c07e420(v0_0, 0x3);
    (((struct o12A_ushort *)(v0_0))->v) = 0xF;
    (((struct o136_uchar *)(v0_0))->v) = v0_1;
    v0_4 = (0x136);
    goto L_C0E5F6E;
    L_C0E5C02:;
    if ((v0_4 != 5)) goto L_C0E5C0A;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    v0_2 = *(short *)((v0_0 + 0x1C));
    w0_2 = w0_0;
    w0_2 = w0_2 + w0_0 * (float)(v0_2 & R12);
    (((struct o88_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_2;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_4 = (0x50);
    w0_0 = (-30.0f);
    FPUL_ = ((v0_2 & R12));
    if ((((((struct o50_float *)(v0_0))->v)) > -30.0f)) goto L_C0E5E68;
    *(float *)((v0_0 + v0_4)) = w0_0;
    L_C0E5E68:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    if (((*(int *)((v0_0 + 0x10))) == 0)) goto L_C0E5F18;
    if (((*(short *)((v0_5 + 0x0))) == ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C0E5EB4;
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    L_C0E5F18:;
    v0_1 = (FUN_0c064ee4(v0_0, 0x2)) == 0;
    if (v0_1) goto L_C0E5F32;
    FUN_0c1512a0(0x4, (v0_0 + 0x28));
    goto L_C0E5F68;
    L_C0E5F32:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C0E5F4C;
    if (((*(signed char *)((v0_0 + 0x132))) != 0)) goto L_C0E5F4C;
    v0_1 = FUN_0c064f80(v0_0);
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E5F6E;
    L_C0E5F4C:;
    FUN_0c15aed8((v0_0 + 0x28));
    if ((((*(signed char *)((v0_0 + 0x2))) & R12) == 0)) goto L_C0E5F60;
    v0_6 = (0xD1);
    L_C0E5F62:;
    FUN_0c05ab04(v0_6);
    goto L_C0E5F68;
    L_C0E5F60:;
    v0_6 = (0xD0);
    goto L_C0E5F62;
    L_C0E5EB4:;
    *(float *)(((int)stk + 4)) = (((((struct o28_float *)((*(int *)((v0_0 + 0x10)))))->v)) - ((((struct o28_float *)(v0_0))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o30_float *)((*(int *)((v0_0 + 0x10)))))->v)) - ((((struct o30_float *)(v0_0))->v)));
    *(float *)(((int)stk + 8)) = w0_1;
    FUN_0c17c450((((int)stk + 0) + 0x4));
    math_vec3_mul_xyz((((int)stk + 0) + 0x4), 1.0f, 1.0f, 1.0f);
    (((struct o4C_float *)(v0_0))->v) = (*(float *)(((int)stk + 4)));
    (((struct o54_float *)(v0_0))->v) = (*(float *)(((int)stk + 12)));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    goto L_C0E5F18;
    L_C0E5C0A:;
    goto L_C0E5F6E;
    L_C0E5CAE:;
    if (((*(int *)((v0_6 + 0x0))) != 0)) goto L_C0E5CB8;
    goto L_C0E5F68;
    L_C0E5CB8:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_4 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C0E5CC8;
    goto L_C0E5F6E;
    L_C0E5CC8:;
    thunk_FUN_0c05abb2(0x44, (v0_0 + 0x28));
    (((struct o50_float *)(v0_0))->v) = w0_2;
    (((struct o5C_float *)(v0_0))->v) = 0.300000012f;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    math_mat_get_translate((v0_0 + 0x64), (v0_0 + 0x28));
    (((struct oA4_uint *)(v0_0))->v) = v0_1;
    (((struct o12A_ushort *)(v0_0))->v) = 0xF;
    (((struct o136_uchar *)(v0_0))->v) = v0_1;
    L_C0E5D00:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = (0x15);
    goto L_C0E5F6E;
    L_C0E5C64:;
    if (((*(int *)((v0_6 + 0x0))) != 0)) goto L_C0E5C6E;
    goto L_C0E5F68;
    L_C0E5C6E:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)(((int)stk + 0)) = v0_1;
    w0_0 = (((struct o5C_float *)(v0_0))->v);
    w0_1 = (((float)v0_1 / 20.0f) * (math_sin_angle16(((*(short *)(((int)stk + 0))) << 13))));
    w0_0 = w0_0;
    w0_0 = w0_0 + w0_2 * w0_1;
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    w0_0 = (w0_2);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0E5CA6;
    goto L_C0E5F6E;
    L_C0E5CA6:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    goto L_C0E5D00;
    L_C0E5C0E:;
    if (((*(int *)((v0_6 + 0x0))) != 0)) goto L_C0E5C18;
    goto L_C0E5F68;
    L_C0E5C18:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 5.0f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    FPUL_ = (0x40A00000);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0E5C36;
    goto L_C0E5F6E;
    L_C0E5C36:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o2C_float *)(v0_0))->v));
    goto L_C0E5D00;
    L_C0E5B94:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = R12;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0x3;
    v0_4 = (v0_1);
    L_C0E5BCE:;
    if (((int)v0_4 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0E5BB4;
    goto L_C0E5BD6;
    L_C0E5BB4:;
    v0_6 = *(int *)((((v0_4 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_6 + 0x6), (v0_6 + 0x78));
    v0_4 = ((v0_4 + 0x1));
    goto L_C0E5BCE;
}

int FUN_0c10b270(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC474404;
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 == 1) {
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            t2 = 0x8;
            t3 = 0xC290BC8;
            for (;;) {
                FUN_0c17c130(((*(int *)((t2 + (0xC4 + a4)))) + 0x6C), t3, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t3 = (t3 + 0xC);
                t2 = (t2 + 0x4);
                if ((unsigned int)t3 >= (unsigned int)0xC290C28) {
                    break;
                }
            }
            FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
            t2 = 0x30;
            t3 = 0xC290C28;
            for (;;) {
                FUN_0c17c130(((*(int *)((t2 + (0xC4 + a4)))) + 0x6C), t3, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t3 = (t3 + 0xC);
                t2 = (t2 + 0x4);
                if ((unsigned int)t3 >= (unsigned int)0xC290C40) {
                    break;
                }
            }
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 + 0x1);
            t3 = (short)(t2 + 0x1);
            if ((int)(short)(t2 + 0x1) < (int)0x10) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t3 = 0x0;
            }
            return t3;
        }
        if (t1 == 2) {
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            return FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
        }
        if (t1 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = 25.0f;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            t0 = *(int *)0xC474404;
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            t0 = 0x8;
            t2 = 0xC290BC8;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C28) {
                    break;
                }
            }
            FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
            t0 = 0x30;
            t2 = 0xC290C28;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C40) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4);
            }
            return (short)(t0 + 0x1);
        }
        if (t1 == 11) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
            t0 = *(int *)0xC474404;
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
            } else {
                t2 = (*(short *)((a4 + 0x1C)));
                t3 = (*(int *)((((((*(int *)((((t0 << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
            }
            FUN_0c10b0a0(a4, (t2 * t3));
            t0 = 0x8;
            t2 = 0xC290BC8;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C28) {
                    break;
                }
            }
            FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
            t0 = 0x30;
            t2 = 0xC290C28;
            for (;;) {
                FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t2, (((((struct oC4_int *)(a4))->v)) + 0x6C));
                t2 = (t2 + 0xC);
                t0 = (t0 + 0x4);
                if ((unsigned int)t2 >= (unsigned int)0xC290C40) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                return FUN_0c03f346(a4);
            }
            return (short)(t0 + 0x1);
        }
        t0 = t1;
        if (t1 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t0 = 0x14;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xE, 0xD, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xA, 0x2, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0xEC));
    FUN_0c187798();
    FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
    *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
    *(volatile int *)((a4 + 0xF0));
    FUN_0c187798();
    FUN_0c03744a(((((struct o100_int *)(a4))->v)), 0x7, 0x4, (*(int *)0xC4B410C));
    *(volatile int *)((a4 + 0x100));
    FUN_0c187798();
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 400.0f);
    (((struct o90_float *)(t0))->v) = -25.0f;
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC290C4C, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC290C58, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC290C64, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    FUN_0c17c130(((*(int *)(((0xC4 + a4) + 0x3C))) + 0x6C), 0xC290C40, (((((struct oC4_int *)(a4))->v)) + 0x6C));
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        t0 = (*(short *)((a4 + 0x1C)));
        t1 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x4)));
    } else {
        t0 = (*(short *)((a4 + 0x1C)));
        t1 = (*(int *)((((((*(int *)(((((*(int *)0xC474404) << 2) + 0xC474410) + 0x0))) << 2) << 1) + 0xC29D7D0) + 0x0)));
    }
    FUN_0c10b0a0(a4, (t0 * t1));
    t0 = 0x8;
    t1 = 0xC290BC8;
    for (;;) {
        FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t1, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        t1 = (t1 + 0xC);
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC290C28) {
            break;
        }
    }
    FUN_0c10b182(a4, (*(short *)((a4 + 0x1C))));
    t0 = 0x30;
    t1 = 0xC290C28;
    for (;;) {
        FUN_0c17c130(((*(int *)((t0 + (0xC4 + a4)))) + 0x6C), t1, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        t1 = (t1 + 0xC);
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC290C40) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) < (int)0x10) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c03934e(int a4)
{
    int stk[30];
    register int t0;
    register int t330;
    register int t2;
    register int t5;
    register int t315;
    register int t8;
    register int t132;
    register int t11;
    register int t13;
    register float t36;
    register float u37;
    register float u39;
    register float u50;
    register float u51;
    register int t85;
    register int t89;
    register int t142;
    register int t144;
    register int t161;
    register int t163;
    int t167;
    register int t168;
    register int t169;
    register int t171;
    register float t194;
    register float u195;
    register float u197;
    register float u208;
    register float u209;
    register int t243;
    register int t247;
    register int t301;
    register int t290;
    int t9;
    register int t10;
    register float u12;
    register int t141;
    register int t157;
    register int t158;
    register float u170;

    t0 = *(signed char *)((a4 + 0x2));
    t330 = t0;
    if ((int)t0 >= (int)(*(int *)0xC1B6CF4)) {
    } else {
        t2 = *(signed char *)((a4 + 0x2));
        t5 = *(int *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC20EFA0 + ((t2 << 2) << 1))) + 0x0));
        t315 = ((t2 << 2) << 1);
        if (t5 == 0) {
        } else {
            FUN_0c17b4b0(0x1);
            t8 = *(signed char *)((0xC3BD880 + ((*(signed char *)((a4 + 0x1))) << 2)));
            if (t8 != 0) {
                if (t8 != 1) {
                    t132 = t8;
                    if (t8 == 2) {
                        t11 = t5;
                        for (;;) {
                            t13 = *(signed char *)((t11 + 0x0));
                            if (t13 != -1) {
                                t10 = (FUN_0c0392d4(a4, (*(signed char *)((t11 + 0x1))), (*(short *)((t11 + 0x2)))));
                                if ((*(signed char *)((a4 + 0x375B))) != 0) {
                                } else {
                                    t9 = (*(signed char *)0xC54208F);
                                    if (t9 != 0) {
                                    } else {
                                        t9 = (*(signed char *)0xC542092);
                                        if (t9 != 0) {
                                        } else {
                                            math_mat_get_translate((t10 + 0x28), (((int)stk + 0) + 0x6C));
                                            math_mat_get_translate(((((struct o68_int *)(t10))->v)), (((int)stk + 0) + 0x60));
                                            t9 = 0xC187798;
                                            FUN_0c187798();
                                            t9 = 0xC058204;
                                            u12 = ((((struct o8_float *)(t11))->v));
                                            math_vec3_mul_xyz((((int)stk + 0) + 0x54), u12, u12, u12);
                                            FUN_0c17c130((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                            t9 = 0xC17B1A0;
                                            FUN_0c17b1a0(((((struct o68_int *)(t10))->v)));
                                            nlInvertMatrix(0x0);
                                            t9 = 0xC17A870;
                                            nlCalcPoint((((int)stk + 0) + 0x6C), (t10 + 0x6C));
                                            nlStoreMatrix((((int)stk + 0) + 0x14));
                                            t36 = FUN_0c0e2340((t10 + 0x6C));
                                            u37 = t36;
                                            if (t36 == 0.0f) {
                                                u37 = 9.99999975e-05f;
                                            }
                                            u39 = (((struct o4_float *)(t11))->v);
                                            t9 = 0xC187798;
                                            (((struct o6C_float *)(t10))->v) = (((((struct o6C_float *)(t10))->v)) * (u39 / u37));
                                            (((struct o70_float *)(t10))->v) = (((((struct o70_float *)(t10))->v)) * (u39 / u37));
                                            (((struct o74_float *)(t10))->v) = (((((struct o74_float *)(t10))->v)) * (u39 / u37));
                                            FUN_0c187798();
                                            if (((((struct o74_float *)(t10))->v)) == 0.0f) {
                                                (((struct o74_float *)(t10))->v) = 9.99999975e-05f;
                                            }
                                            t9 = 0xC1795A0;
                                            t9 = 0xC1794E0;
                                            (((struct o7C_uint *)(t10))->v) = (math_atan2_angle16(((((struct o6C_float *)(t10))->v)), ((((struct o74_float *)(t10))->v))));
                                            u12 = ((((struct o6C_float *)(t10))->v));
                                            u50 = (((struct o74_float *)(t10))->v);
                                            *(float *)(((int)stk + 4)) = u50;
                                            u51 = (u50 * u50);
                                            u51 = u51 + u12 * u12;
                                            u12 = (math_signed_sqrt(u51));
                                            if (u12 == 0.0f) {
                                                u12 = 9.99999975e-05f;
                                            }
                                            t9 = 0xC179500;
                                            t9 = 0x8000;
                                            (((struct o78_uint *)(t10))->v) = (math_atan_angle16(((-((((struct o70_float *)(t10))->v))) / u12)));
                                            if (((*(int *)(((int)stk + 8))) & t9) != 0) {
                                                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | 0xFFFF0000);
                                            } else {
                                                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) & 0x7FFF);
                                            }
                                            t9 = 0x8000;
                                            if (((*(int *)(((int)stk + 12))) & t9) != 0) {
                                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | 0xFFFF0000);
                                            } else {
                                                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0x7FFF);
                                            }
                                            t9 = 0x8000;
                                            if ((((((struct o78_int *)(t10))->v)) & t9) != 0) {
                                                (((struct o78_uint *)(t10))->v) = (((((struct o78_int *)(t10))->v)) | 0xFFFF0000);
                                            } else {
                                                (((struct o78_uint *)(t10))->v) = (((((struct o78_int *)(t10))->v)) & 0x7FFF);
                                            }
                                            t9 = 0x8000;
                                            if ((((((struct o7C_int *)(t10))->v)) & t9) != 0) {
                                                (((struct o7C_uint *)(t10))->v) = (((((struct o7C_int *)(t10))->v)) | 0xFFFF0000);
                                            } else {
                                                (((struct o7C_uint *)(t10))->v) = (((((struct o7C_int *)(t10))->v)) & 0x7FFF);
                                            }
                                            t9 = 0xC0583D6;
                                            math_vec3i_sub((((int)stk + 0) + 0x8), (t10 + 0x78), (((int)stk + 0) + 0x8));
                                            t85 = *(int *)((t11 + 0xC));
                                            t9 = 0xC0584B0;
                                            *(unsigned int *)(((int)stk + 0)) = t85;
                                            FUN_0c0584b0((*(int *)(((int)stk + 12))), (t10 + 0x7C), (*(int *)(((int)stk + 0))), (unsigned short)(-t85));
                                            t89 = *(int *)((t11 + 0xC));
                                            *(unsigned int *)(((int)stk + 0)) = t89;
                                            FUN_0c0584b0((*(int *)(((int)stk + 8))), (t10 + 0x78), (*(int *)(((int)stk + 0))), (unsigned short)(-t89));
                                            t9 = 0xC17B1A0;
                                            FUN_0c17b1a0(((((struct o68_int *)(t10))->v)));
                                            nlTranslateV((t10 + 0x6C));
                                            t9 = 0xC17BC90;
                                            nlRotateAY(((((struct o7C_int *)(t10))->v)));
                                            t9 = 0xC17BAE0;
                                            nlRotateAX(((((struct o78_int *)(t10))->v)));
                                            nlStoreMatrix((t10 + 0x28));
                                            math_mat_get_translate((t10 + 0x28), (((int)stk + 0) + 0x6C));
                                            *(float *)(((int)stk + 88)) = 0.0f;
                                            *(float *)(((int)stk + 84)) = 0.0f;
                                            t9 = 0xC0582DE;
                                            *(float *)(((int)stk + 92)) = (-(((((struct o4_float *)(t11))->v)) * 1.0f));
                                            FUN_0c0582de((((int)stk + 0) + 0x54), (t10 + 0x28));
                                            FUN_0c0e2390((((int)stk + 0) + 0x54), (((int)stk + 0) + 0x60), (((int)stk + 0) + 0x54));
                                            FUN_0c17c130((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                            t9 = 0xC17B1A0;
                                            FUN_0c17b1a0((((int)stk + 0) + 0x14));
                                            nlCalcPoint((((int)stk + 0) + 0x6C), (t10 + 0x6C));
                                        }
                                    }
                                }
                                FUN_0c17b1a0(((((struct o68_int *)(t10))->v)));
                                nlTranslateV((t10 + 0x6C));
                                t9 = 0xC17BC90;
                                nlRotateAY(((((struct o7C_int *)(t10))->v)));
                                t9 = 0xC17BAE0;
                                nlRotateAX(((((struct o78_int *)(t10))->v)));
                                nlStoreMatrix((t10 + 0x28));
                                t11 = (t11 + 0x10);
                                t9 = 0xFFF0;
                                *(unsigned short *)((t10 + 0x6)) = ((*(short *)((t10 + 0x6))) & t9);
                                continue;
                            }
                            break;
                        }
                        t132 = t13;
                    }
                    t290 = t132;
                } else {
                    t142 = 0xC3BD880;
                    t144 = t5;
                    for (;;) {
                        if ((*(signed char *)((t144 + 0x0))) == -1) {
                            break;
                        }
                        t141 = (*(signed char *)((t144 + 0x0)));
                        if (t141 == 0) {
                            t142 = a4;
                            t168 = FUN_0c0392d4(t142, (*(signed char *)((t144 + 0x1))), (*(short *)((t144 + 0x2))));
                            t142 = t168;
                            t142 = (t142 + 0x28);
                            math_mat_get_translate(t142, (((int)stk + 0) + 0x6C));
                            t142 = ((((struct o68_int *)(t168))->v));
                            math_mat_get_translate(t142, (((int)stk + 0) + 0x60));
                            t142 = ((int)stk + 0);
                            t142 = (t142 + 0x6C);
                            FUN_0c0e2390(t142, (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x60));
                            t142 = ((int)stk + 0);
                            t142 = (t142 + 0x6C);
                            (((struct o4_float *)(t144))->v) = (FUN_0c0e2340(t142));
                            *(unsigned char *)((t144 + 0x0)) = 0x1;
                        } else {
                            t157 = t141;
                            t158 = t142;
                        }
                        t144 = (t144 + 0x10);
                        t141 = t157;
                        t142 = t158;
                    }
                    t161 = *(signed char *)((a4 + 0x1));
                    *(unsigned char *)((0xC3BD880 + (t161 << 2))) = ((*(signed char *)((0xC3BD880 + (t161 << 2)))) + 0x1);
                    t163 = *(signed char *)((a4 + 0x2));
                    t167 = (0xC20EFA0 + ((t163 << 2) << 1));
                    t169 = (*(int *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC20EFA0 + ((t163 << 2) << 1))) + 0x0)));
                    for (;;) {
                        t171 = *(signed char *)((t169 + 0x0));
                        if (t171 != -1) {
                            t168 = (FUN_0c0392d4(a4, (*(signed char *)((t169 + 0x1))), (*(short *)((t169 + 0x2)))));
                            if ((*(signed char *)((a4 + 0x375B))) != 0) {
                            } else {
                                t167 = (*(signed char *)0xC54208F);
                                if (t167 != 0) {
                                } else {
                                    t167 = (*(signed char *)0xC542092);
                                    if (t167 != 0) {
                                    } else {
                                        math_mat_get_translate((t168 + 0x28), (((int)stk + 0) + 0x6C));
                                        math_mat_get_translate(((((struct o68_int *)(t168))->v)), (((int)stk + 0) + 0x60));
                                        t167 = 0xC187798;
                                        FUN_0c187798();
                                        t167 = 0xC058204;
                                        u170 = ((((struct o8_float *)(t169))->v));
                                        math_vec3_mul_xyz((((int)stk + 0) + 0x54), u170, u170, u170);
                                        FUN_0c17c130((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                        t167 = 0xC17B1A0;
                                        FUN_0c17b1a0(((((struct o68_int *)(t168))->v)));
                                        nlInvertMatrix(0x0);
                                        t167 = 0xC17A870;
                                        nlCalcPoint((((int)stk + 0) + 0x6C), (t168 + 0x6C));
                                        nlStoreMatrix((((int)stk + 0) + 0x14));
                                        t194 = FUN_0c0e2340((t168 + 0x6C));
                                        u195 = t194;
                                        if (t194 == 0.0f) {
                                            u195 = 9.99999975e-05f;
                                        }
                                        u197 = (((struct o4_float *)(t169))->v);
                                        t167 = 0xC187798;
                                        (((struct o6C_float *)(t168))->v) = (((((struct o6C_float *)(t168))->v)) * (u197 / u195));
                                        (((struct o70_float *)(t168))->v) = (((((struct o70_float *)(t168))->v)) * (u197 / u195));
                                        (((struct o74_float *)(t168))->v) = (((((struct o74_float *)(t168))->v)) * (u197 / u195));
                                        FUN_0c187798();
                                        if (((((struct o74_float *)(t168))->v)) == 0.0f) {
                                            (((struct o74_float *)(t168))->v) = 9.99999975e-05f;
                                        }
                                        t167 = 0xC1795A0;
                                        t167 = 0xC1794E0;
                                        (((struct o7C_uint *)(t168))->v) = (math_atan2_angle16(((((struct o6C_float *)(t168))->v)), ((((struct o74_float *)(t168))->v))));
                                        u170 = ((((struct o6C_float *)(t168))->v));
                                        u208 = (((struct o74_float *)(t168))->v);
                                        *(float *)(((int)stk + 4)) = u208;
                                        u209 = (u208 * u208);
                                        u209 = u209 + u170 * u170;
                                        u170 = (math_signed_sqrt(u209));
                                        if (u170 == 0.0f) {
                                            u170 = 9.99999975e-05f;
                                        }
                                        t167 = 0xC179500;
                                        t167 = 0x8000;
                                        (((struct o78_uint *)(t168))->v) = (math_atan_angle16(((-((((struct o70_float *)(t168))->v))) / u170)));
                                        if (((*(int *)(((int)stk + 8))) & t167) != 0) {
                                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) | 0xFFFF0000);
                                        } else {
                                            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) & 0x7FFF);
                                        }
                                        t167 = 0x8000;
                                        if (((*(int *)(((int)stk + 12))) & t167) != 0) {
                                            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | 0xFFFF0000);
                                        } else {
                                            *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) & 0x7FFF);
                                        }
                                        t167 = 0x8000;
                                        if ((((((struct o78_int *)(t168))->v)) & t167) != 0) {
                                            (((struct o78_uint *)(t168))->v) = (((((struct o78_int *)(t168))->v)) | 0xFFFF0000);
                                        } else {
                                            (((struct o78_uint *)(t168))->v) = (((((struct o78_int *)(t168))->v)) & 0x7FFF);
                                        }
                                        t167 = 0x8000;
                                        if ((((((struct o7C_int *)(t168))->v)) & t167) != 0) {
                                            (((struct o7C_uint *)(t168))->v) = (((((struct o7C_int *)(t168))->v)) | 0xFFFF0000);
                                        } else {
                                            (((struct o7C_uint *)(t168))->v) = (((((struct o7C_int *)(t168))->v)) & 0x7FFF);
                                        }
                                        t167 = 0xC0583D6;
                                        math_vec3i_sub((((int)stk + 0) + 0x8), (t168 + 0x78), (((int)stk + 0) + 0x8));
                                        t243 = *(int *)((t169 + 0xC));
                                        t167 = 0xC0584B0;
                                        *(unsigned int *)(((int)stk + 0)) = t243;
                                        FUN_0c0584b0((*(int *)(((int)stk + 12))), (t168 + 0x7C), (*(int *)(((int)stk + 0))), (unsigned short)(-t243));
                                        t247 = *(int *)((t169 + 0xC));
                                        *(unsigned int *)(((int)stk + 0)) = t247;
                                        FUN_0c0584b0((*(int *)(((int)stk + 8))), (t168 + 0x78), (*(int *)(((int)stk + 0))), (unsigned short)(-t247));
                                        t167 = 0xC17B1A0;
                                        FUN_0c17b1a0(((((struct o68_int *)(t168))->v)));
                                        nlTranslateV((t168 + 0x6C));
                                        t167 = 0xC17BC90;
                                        nlRotateAY(((((struct o7C_int *)(t168))->v)));
                                        t167 = 0xC17BAE0;
                                        nlRotateAX(((((struct o78_int *)(t168))->v)));
                                        nlStoreMatrix((t168 + 0x28));
                                        math_mat_get_translate((t168 + 0x28), (((int)stk + 0) + 0x6C));
                                        *(float *)(((int)stk + 88)) = 0.0f;
                                        *(float *)(((int)stk + 84)) = 0.0f;
                                        t167 = 0xC0582DE;
                                        *(float *)(((int)stk + 92)) = (-(((((struct o4_float *)(t169))->v)) * 1.0f));
                                        FUN_0c0582de((((int)stk + 0) + 0x54), (t168 + 0x28));
                                        FUN_0c0e2390((((int)stk + 0) + 0x54), (((int)stk + 0) + 0x60), (((int)stk + 0) + 0x54));
                                        FUN_0c17c130((((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x6C), (((int)stk + 0) + 0x54));
                                        t167 = 0xC17B1A0;
                                        FUN_0c17b1a0((((int)stk + 0) + 0x14));
                                        nlCalcPoint((((int)stk + 0) + 0x6C), (t168 + 0x6C));
                                    }
                                }
                            }
                            FUN_0c17b1a0(((((struct o68_int *)(t168))->v)));
                            nlTranslateV((t168 + 0x6C));
                            t167 = 0xC17BC90;
                            nlRotateAY(((((struct o7C_int *)(t168))->v)));
                            t167 = 0xC17BAE0;
                            nlRotateAX(((((struct o78_int *)(t168))->v)));
                            nlStoreMatrix((t168 + 0x28));
                            t169 = (t169 + 0x10);
                            t167 = 0xFFF0;
                            *(unsigned short *)((t168 + 0x6)) = ((*(short *)((t168 + 0x6))) & t167);
                            continue;
                        }
                        break;
                    }
                    t290 = t171;
                }
                t315 = t290;
            } else {
                t301 = *(signed char *)((a4 + 0x1));
                *(unsigned char *)(((0xC3BD880 + (t301 << 2)) + 0x0)) = ((*(signed char *)(((0xC3BD880 + (t301 << 2)) + 0x0))) + 0x1);
                t315 = (t301 << 2);
            }
        }
        t330 = t315;
    }
    return t330;
}

int FUN_0c01d294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (((struct o0_int *)0xC305050)->v);
    t1 = (((struct o4_int *)0xC305050)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t2 = FUN_0c03c5c0(0x0, t1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t2 == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x4;
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                        *(unsigned char *)0xC30B6FD = 0x0;
                    } else {
                        if (t2 == -1) {
                        } else {
                            if (((((struct o14_int *)0xC305050)->v)) == 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            }
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                        }
                    }
                    t2 = 0x0;
                } else {
                    if (t0 == 4) {
                        if (t1 != 0) {
                            if (t1 != 1) {
                                if (t1 != 2) {
                                    t3 = 0x0;
                                    if (t1 != 3) {
                                    } else {
                                        t4 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t4 - 1);
                                        t5 = 0x0;
                                        if ((int)(short)(t4 - 1) > 0) {
                                        } else {
                                            FUN_0c01e9e4();
                                            t5 = 0x1;
                                        }
                                        t3 = t5;
                                    }
                                    t4 = t3;
                                } else {
                                    t3 = *(short *)0xC30EF6C;
                                    *(unsigned short *)0xC30EF6C = (t3 - 1);
                                    if ((int)(short)(t3 - 1) > 0) {
                                        t3 = FUN_0c01cd2c(0x101);
                                        if ((short)t3 == 0) {
                                        } else {
                                            *(unsigned short *)0xC30EF6C = 0x14;
                                            FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                    } else {
                                        *(unsigned short *)0xC30EF6C = 0x14;
                                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    }
                                    t4 = 0x0;
                                }
                                t3 = t4;
                            } else {
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x32);
                                    (((struct oC_uint *)0xC305050)->v) = 0x32;
                                    *(unsigned short *)0xC30EF6C = 0x14C;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                t3 = 0x0;
                            }
                            t4 = t3;
                        } else {
                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                            *(unsigned short *)0xC30EF6C = 0xC;
                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                            t4 = 0x0;
                        }
                        t3 = t4;
                    } else {
                        if (t0 == 99) {
                            switch (t1) {
                            case 0:
                                FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                *(unsigned short *)0xC30EF6C = 0xC;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                (((struct o8_uint *)0xC305050)->v) = 0x1;
                                break;
                            case 1:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    FUN_0c018e74(0x3E);
                                    (((struct oC_uint *)0xC305050)->v) = 0x3E;
                                    *(unsigned short *)0xC30EF6C = 0x20;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 2:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 3:
                                t4 = FUN_0c01cd2c(0x101);
                                if ((short)t4 == 0) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    (((struct o14_uint *)0xC305050)->v) = 0x1;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                }
                                break;
                            case 4:
                                t4 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t4 - 1);
                                if ((int)(short)(t4 - 1) > 0) {
                                } else {
                                    (((struct o0_uint *)0xC305050)->v) = 0x1;
                                    (((struct o8_uint *)0xC305050)->v) = 0x0;
                                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                                }
                                break;
                            }
                            t4 = 0x0;
                        } else {
                            t5 = 0x0;
                            if (t0 == 100) {
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                if (t1 != 4) {
                                                    if (t1 != 5) {
                                                        if (t1 != 6) {
                                                        } else {
                                                            t0 = *(short *)0xC30EF6C;
                                                            *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                            if ((int)(short)(t0 - 1) <= 0) {
                                                                (((struct o0_uint *)0xC305050)->v) = 0x1;
                                                                (((struct o8_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o4_uint *)0xC305050)->v) = 0x0;
                                                                (((struct o14_uint *)0xC305050)->v) = 0x1;
                                                            }
                                                        }
                                                        t0 = 0x0;
                                                    } else {
                                                        t5 = *(short *)0xC30EF6C;
                                                        *(unsigned short *)0xC30EF6C = (t5 - 1);
                                                        t0 = 0x0;
                                                        if ((int)(short)(t5 - 1) <= 0) {
                                                            t5 = 0xFFFFFFFD;
                                                            if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            } else {
                                                                FUN_0c018e74(0x22);
                                                                (((struct oC_uint *)0xC305050)->v) = 0x22;
                                                                *(unsigned short *)0xC30EF6C = 0x98;
                                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                                t5 = 0x0;
                                                            }
                                                            t0 = t5;
                                                        }
                                                    }
                                                    t5 = t0;
                                                } else {
                                                    t0 = *(short *)0xC30EF6C;
                                                    *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                    if ((int)(short)(t0 - 1) <= 0) {
                                                        if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                                                            t0 = 0x14;
                                                        } else {
                                                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                                            t0 = 0xC;
                                                        }
                                                        *(unsigned short *)0xC30EF6C = t0;
                                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                    }
                                                    t5 = 0x0;
                                                }
                                                t0 = t5;
                                            } else {
                                                FUN_0c01c714(0xC305058, 0x1, 0x2);
                                                t5 = FUN_0c01cd2c(0x101);
                                                if ((short)t5 != 0) {
                                                    FUN_0c05aab6(0x0, 0x3);
                                                    *(unsigned short *)0xC30EF6C = 0x10;
                                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                }
                                                t0 = 0x0;
                                            }
                                            t5 = t0;
                                        } else {
                                            t0 = *(short *)0xC30EF6C;
                                            *(unsigned short *)0xC30EF6C = (t0 - 1);
                                            if ((int)(short)(t0 - 1) <= 0) {
                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                            }
                                            t5 = 0x0;
                                        }
                                        t0 = t5;
                                    } else {
                                        t5 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t5 - 1);
                                        if ((int)(short)(t5 - 1) <= 0) {
                                            FUN_0c018e9c(0x41, 0xC305058);
                                            (((struct oC_uint *)0xC305050)->v) = 0x41;
                                            *(unsigned short *)0xC30EF6C = 0x20;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t0 = 0x0;
                                    }
                                    t5 = t0;
                                } else {
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    (((struct o8_uint *)0xC305050)->v) = 0x1;
                                    t5 = 0x0;
                                }
                            }
                            t4 = t5;
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = FUN_0c03c7ec();
                if (t2 == 0) {
                    t3 = 0x0;
                    for (;;) {
                        if ((*(signed char *)((0xC30999E + t3))) != (unsigned char)(*(signed char *)(((0xC83C306 + t3) + 0x0)))) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            (((struct o0_uint *)0xC305050)->v) = 0x3;
                            FUN_0c01d094();
                            return 0x0;
                        }
                    }
                    if (((((struct o14_int *)0xC305050)->v)) == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    if (t2 == -1) {
                    } else {
                        if (((((struct o14_int *)0xC305050)->v)) != 0) {
                            (((struct o0_uint *)0xC305050)->v) = 0x64;
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x63;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
                t0 = 0x0;
            }
            t2 = t0;
        } else {
            t0 = FUN_0c03add8(0xC30EF6C, t1, a6, a7);
            if ((int)t0 < 0) {
            } else {
                if ((t0 & 0x1) == 0) {
                    if (((((struct o14_int *)0xC305050)->v)) != 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    t1 = FUN_0c03afdc(t0);
                    if ((int)t1 < 0) {
                    } else {
                        if ((t1 & 0x1) == 0) {
                            if (((((struct o14_int *)0xC305050)->v)) != 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            }
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x2;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
            }
            t2 = 0x0;
        }
        t0 = t2;
    } else {
        if ((*(signed char *)0xC30B6FD) == 0) {
            (((struct o0_uint *)0xC305050)->v) = 0x3;
        } else {
            (((struct o0_uint *)0xC305050)->v) = 0x1;
        }
        (((struct o14_uint *)0xC305050)->v) = 0x0;
        (((struct oC_uint *)0xC305050)->v) = 0x22;
        t0 = 0x0;
    }
    return t0;
}
