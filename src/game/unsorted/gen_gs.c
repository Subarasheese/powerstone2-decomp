/* Straight-line functions with calls and guards (batch gen_gs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o100_int { char p[0x100]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c036606(void);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03ea04(int, int);
extern int FUN_0c03f346();
int FUN_0c042fe0(void);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c06593a(int, int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07e420(int, int);
int FUN_0c0c3a60(int, int);
int FUN_0c0c3aac(int);
int FUN_0c0df294(int);
int FUN_0c0df2f0(int);
int FUN_0c0df30a(int);
int FUN_0c100780(int);
int FUN_0c104cc8(int);
int FUN_0c105cec(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1161f0(void);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d14(void);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(Stk3, float);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
float FUN_0c12b6dc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0df40c(int a4, int a5, int a6, int a7);
int FUN_0c033e3c(int a4, int a5, int a6, int a7);
int FUN_0c033a60(int a4, int a5, int a6, int a7);
int FUN_0c131c44(int a4, int a5, int a6, int a7);
int FUN_0c0c3ae8(int a4);
int FUN_0c105e8c(int a4, int a5, int a6, int a7);
int FUN_0c137f8e(int a4, int a5, int a6, int a7);

float FUN_0c12b6dc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register float F0;
    register float F2;
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
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_3 = a4;
    v0_5 = a5;
    v0_6 = a7;
    w0_3 = f4;
    v0_7 = *(signed char *)((v0_3 + 0x14));
    v0_4 = (v0_7);
    v0_1 = (0x14);
    v0_2 = (0xA);
    v0_0 = (0xC179AC0);
    v0_0 = (v0_3);
    v0_3 = (0x7);
    w0_0 = (65536.0f);
    if ((v0_7 == 0)) goto L_C12B748;
    if ((v0_4 == 1)) goto L_C12B786;
    if ((v0_4 == 2)) goto L_C12B79E;
    if ((v0_4 != 3)) goto L_C12B71C;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) == 0)) goto L_C12B968;
    L_C12BA98:;
    return F0;
    L_C12B968:;
    FUN_0c059e60((*(int *)((v0_0 + 0x10))), 0x24);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(v0_0))->v) = 0x4;
    v0_4 = (0x14);
    goto L_C12BA98;
    L_C12B71C:;
    if ((v0_4 != 4)) goto L_C12B724;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C12B98C;
    (((struct o14_uchar *)(v0_0))->v) = v0_3;
    L_C12B98C:;
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C12B99E;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(v0_0))->v) = 0x5;
    L_C12B99E:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_4 = (0x30);
    goto L_C12BA98;
    L_C12B724:;
    if ((v0_4 != 5)) goto L_C12B72C;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_4 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C12BA98;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x21F;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x21F;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = 1.0f;
    (((struct o1C_float *)(v0_2))->v) = 1.0f;
    (((struct o18_float *)(v0_2))->v) = 1.0f;
    (((struct o14_float *)(v0_2))->v) = 1.0f;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = 1.0f;
    (((struct o1C_float *)(v0_2))->v) = 1.0f;
    (((struct o18_float *)(v0_2))->v) = 1.0f;
    (((struct o14_float *)(v0_2))->v) = 1.0f;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = 0x6;
    v0_4 = (0x14);
    goto L_C12BA98;
    L_C12B72C:;
    if ((v0_4 != 6)) goto L_C12B734;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o20_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o1C_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o18_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o14_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    w0_0 = (((struct o20_float *)(v0_1))->v);
    (((struct o20_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o1C_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o18_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o14_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) != 0)) goto L_C12BA98;
    (((struct o14_uchar *)(v0_0))->v) = v0_3;
    v0_4 = (0x14);
    goto L_C12BA98;
    L_C12B734:;
    if ((v0_4 != 7)) goto L_C12B73C;
    v0_4 = ((FUN_0c03f346(v0_0, v0_5, 0x0, v0_6)));
    goto L_C12BA98;
    L_C12B73C:;
    goto L_C12BA98;
    L_C12B79E:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_4 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C12B7AE;
    goto L_C12BA98;
    L_C12B7AE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x380C)); }
    (((struct o4_float *)(((int)stk + 4)))->v) = (((((struct o4_float *)(((int)stk + 4)))->v)) + 200.0f);
    w0_5 = *(float *)((((int)stk + 4) + 0x0));
    w0_6 = (((struct o28_float *)(v0_0))->v);
    w0_4 = ((((((struct o4_float *)(((int)stk + 4)))->v)) - ((((struct o2C_float *)(v0_0))->v))));
    w0_1 = ((((((struct o8_float *)(((int)stk + 4)))->v)) - ((((struct o30_float *)(v0_0))->v))));
    w0_2 = ((w0_5 - w0_6));
    w0_3 = (9.99999997e-07f);
    FPUL_ = (0x43480000);
    if (((w0_5 - w0_6) != 0.0f)) goto L_C12B7F4;
    w0_2 = (w0_3);
    L_C12B7F4:;
    w0_5 = (0.0f);
    if ((w0_4 != 0.0f)) goto L_C12B7FE;
    w0_4 = (w0_3);
    L_C12B7FE:;
    if ((w0_1 != w0_5)) goto L_C12B804;
    w0_1 = (w0_3);
    L_C12B804:;
    w0_3 = (w0_1 * w0_1);
    w0_3 = w0_3 + w0_2 * w0_2;
    w0_3 = math_signed_sqrt(*(Stk3 *)(((int)stk + 4)), w0_3);
    v0_3 = ((math_atan_angle16(((-w0_3) / w0_4))));
    if ((!(0.0f > w0_4))) goto L_C12B828;
    v0_3 = ((v0_3 + 0x8000));
    L_C12B828:;
    v0_4 = (int)((int)(nlRand()) % (int)v0_2);
    *(unsigned int *)((v0_0 + 0x34)) = (-(unsigned short)(v0_3 + (int)(((float)((v0_4 + ((int)((int)(nlRand()) % (int)v0_2))) + 0x4B) * w0_0) / 360.0f)));
    v0_3 = ((math_atan_angle16(((-w0_1) / w0_2))));
    if ((!(0.0f > w0_2))) goto L_C12B87A;
    v0_3 = ((v0_3 + 0x8000));
    L_C12B87A:;
    v0_4 = (int)((int)(nlRand()) % (int)v0_2);
    v0_2 = (int)((int)(nlRand()) % (int)v0_2);
    *(unsigned int *)((v0_0 + 0x38)) = (unsigned short)(v0_3 + (int)(((float)((v0_4 + v0_2) + 0x4B) * w0_0) / 360.0f));
    v0_3 = ((unsigned short)(v0_3 + (int)(((float)((v0_4 + v0_2) + 0x4B) * w0_0) / 360.0f)));
    FPUL_ = ((int)(((float)((v0_4 + v0_2) + 0x4B) * w0_0) / 360.0f));
    *(unsigned int *)((v0_0 + 0x3C)) = (int)(float)((int)((int)(nlRand()) % (int)0x168));
    v0_2 = (int)((int)(nlRand()) % (int)v0_1);
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + 0x14000));
    *(float *)(((int)stk + 0)) = ((float)(v0_2 + 0x3C) * w0_0);
    w0_0 = ((float)(v0_2 + 0x3C) * w0_0);
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + 0x14000))));
    (((struct o50_float *)(v0_0))->v) = ((float)(v0_2 + 0x3C) * (math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + 0x14000))));
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + 0x14000));
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + 0x14000));
    w0_1 = ((float)(v0_2 + 0x3C) * w0_1);
    (((struct o54_float *)(v0_0))->v) = (w0_1 * w0_0);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    F0 = (w0_0);
    goto L_C12BA98;
    L_C12B786:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    if (((short)(v0_3 - 1) != 0)) goto L_C12B79E;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C12B79E;
    L_C12B748:;
    v0_3 = (int)((int)(nlRand()) % (int)v0_2);
    v0_4 = (int)((int)(nlRand()) % (int)v0_2);
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + (int)(((float)((v0_3 + v0_4) - 10) * w0_0) / 360.0f));
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FPUL_ = ((int)(((float)((v0_3 + v0_4) - 10) * w0_0) / 360.0f));
    goto L_C12B786;
}

int FUN_0c0df40c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c042fe0();
        if (t0 == 0) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 == 4) {
                            if ((*(short *)((a4 + 0x1E))) != 0) {
                                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                                if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (float)((*(short *)((a4 + 0x1E))) << 1));
                                } else {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (float)((*(short *)((a4 + 0x1E))) << 1));
                                }
                                if ((*(short *)((a4 + 0x1E))) == 0) {
                                    (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                                }
                            }
                            t1 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                            t2 = (short)(t1 - 1);
                            if ((int)(short)(t1 - 1) <= 0) {
                                (((struct o15_uchar *)(a4))->v) = 0x3;
                                (((struct o4C_float *)(a4))->v) = 0.0f;
                                (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                                (((struct o136_uchar *)(a4))->v) = 0x0;
                                (((struct o20_ushort *)(a4))->v) = 0x0;
                                t2 = 0x20;
                            }
                            t1 = t2;
                        } else {
                            t1 = t0;
                        }
                        return t1;
                    }
                    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.200000003f);
                    if (((((struct o4C_float *)(a4))->v)) > 5.5999999f) {
                        (((struct o4C_float *)(a4))->v) = 5.5999999f;
                    }
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - (int)((((((struct o4C_float *)(a4))->v)) * 26214.4004f) / 360.0f));
                    FUN_0c0df30a(a4);
                    t0 = *(signed char *)0xC54098D;
                    if (t0 == 11) {
                        (((struct o15_uchar *)(a4))->v) = 0x5;
                        return (FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, 0x0));
                    }
                    t1 = t0;
                    t0 = 0x0;
                    t2 = 0x0;
                    for (;;) {
                        if ((*(int *)(((0xC540D94 + t2) + 0x4))) != 0) {
                            t1 = (FUN_0c06593a(a4, (*(int *)(((0xC540D94 + t0) + 0x4)))));
                            if (t1 != 0) {
                                break;
                            }
                            t2 = (t2 + 0x4);
                            t0 = (t0 + 0x4);
                            if ((unsigned int)t2 >= (unsigned int)0x10) {
                                t1 = 0x20;
                                t3 = *(short *)((a4 + t1));
                                *(unsigned short *)((a4 + t1)) = (t3 + 0x1);
                                if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                                    t1 = 0x136;
                                    *(unsigned char *)((a4 + t1)) = 0x0;
                                    t1 = 0x20;
                                    *(unsigned short *)((a4 + t1)) = 0x0;
                                    t1 = (thunk_FUN_0c05abb2(0x43, (a4 + 0x28)));
                                    return FUN_0c0df2f0(a4);
                                }
                                return FUN_0c0df2f0(a4);
                            }
                            continue;
                        }
                        t2 = (t2 + 0x4);
                        t0 = (t0 + 0x4);
                        if ((unsigned int)t2 >= (unsigned int)0x10) {
                            t1 = 0x20;
                            t3 = *(short *)((a4 + t1));
                            *(unsigned short *)((a4 + t1)) = (t3 + 0x1);
                            if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                                t1 = 0x136;
                                *(unsigned char *)((a4 + t1)) = 0x0;
                                t1 = 0x20;
                                *(unsigned short *)((a4 + t1)) = 0x0;
                                t1 = (thunk_FUN_0c05abb2(0x43, (a4 + 0x28)));
                                return FUN_0c0df2f0(a4);
                            }
                            return FUN_0c0df2f0(a4);
                        }
                    }
                    (((struct o15_uchar *)(a4))->v) = 0x4;
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
                    FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                    t0 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                    if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
                        (((struct o136_uchar *)(a4))->v) = 0x0;
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
                    }
                    return FUN_0c0df2f0(a4);
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                    u0 = (((((struct o30_float *)(a4))->v)) + 10.0f);
                } else {
                    u0 = (((((struct o30_float *)(a4))->v)) - 10.0f);
                }
                (((struct o30_float *)(a4))->v) = u0;
                if ((*(short *)0xC540994) == 120) {
                    FUN_0c0df294(a4);
                }
                t0 = *(signed char *)0xC54098D;
                if (t0 != 9) {
                    return t0;
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                (((struct o136_uchar *)(a4))->v) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
                return FUN_0c059c7a(0x8, 0x0);
            }
            t0 = *(signed char *)0xC54098D;
            t1 = t0;
            if (t0 != 8) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t1 = 0x0;
            }
            return t1;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x58)); }
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)0xC54098D;
        t1 = t0;
        if (t0 != 8) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAA_uchar *)(a4))->v) = 0x1;
    (((struct oAB_uchar *)(a4))->v) = 0x8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0x28)); }
    (((struct o128_ushort *)(a4))->v) = 0x40;
    FUN_0c07e420(a4, 0x2);
    (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | 0x10);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    t0 = FUN_0c042fe0();
    if (t0 == 0) {
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (float)((*(short *)((a4 + 0x1E))) << 1));
                            } else {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (float)((*(short *)((a4 + 0x1E))) << 1));
                            }
                            if ((*(short *)((a4 + 0x1E))) == 0) {
                                (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                            }
                        }
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t2 = (short)(t1 - 1);
                        if ((int)(short)(t1 - 1) <= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x3;
                            (((struct o4C_float *)(a4))->v) = 0.0f;
                            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                            (((struct o136_uchar *)(a4))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x0;
                            t2 = 0x20;
                        }
                        t1 = t2;
                    } else {
                        t1 = t0;
                    }
                    return t1;
                }
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + 0.200000003f);
                if (((((struct o4C_float *)(a4))->v)) > 5.5999999f) {
                    (((struct o4C_float *)(a4))->v) = 5.5999999f;
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - (int)((((((struct o4C_float *)(a4))->v)) * 26214.4004f) / 360.0f));
                FUN_0c0df30a(a4);
                t0 = *(signed char *)0xC54098D;
                if (t0 == 11) {
                    (((struct o15_uchar *)(a4))->v) = 0x5;
                    return (FUN_0c05258e(0x2, 0x1E, 0x100, 0x1E, 0x0));
                }
                t1 = t0;
                t0 = 0x0;
                t2 = 0x0;
                for (;;) {
                    if ((*(int *)(((0xC540D94 + t2) + 0x4))) != 0) {
                        t1 = (FUN_0c06593a(a4, (*(int *)(((0xC540D94 + t0) + 0x4)))));
                        if (t1 != 0) {
                            break;
                        }
                        t2 = (t2 + 0x4);
                        t0 = (t0 + 0x4);
                        if ((unsigned int)t2 >= (unsigned int)0x10) {
                            t1 = 0x20;
                            t3 = *(short *)((a4 + t1));
                            *(unsigned short *)((a4 + t1)) = (t3 + 0x1);
                            if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                                t1 = 0x136;
                                *(unsigned char *)((a4 + t1)) = 0x0;
                                t1 = 0x20;
                                *(unsigned short *)((a4 + t1)) = 0x0;
                                t1 = (thunk_FUN_0c05abb2(0x43, (a4 + 0x28)));
                                return FUN_0c0df2f0(a4);
                            }
                            return FUN_0c0df2f0(a4);
                        }
                        continue;
                    }
                    t2 = (t2 + 0x4);
                    t0 = (t0 + 0x4);
                    if ((unsigned int)t2 >= (unsigned int)0x10) {
                        t1 = 0x20;
                        t3 = *(short *)((a4 + t1));
                        *(unsigned short *)((a4 + t1)) = (t3 + 0x1);
                        if ((int)(short)(t3 + 0x1) >= (int)0x3C) {
                            t1 = 0x136;
                            *(unsigned char *)((a4 + t1)) = 0x0;
                            t1 = 0x20;
                            *(unsigned short *)((a4 + t1)) = 0x0;
                            t1 = (thunk_FUN_0c05abb2(0x43, (a4 + 0x28)));
                            return FUN_0c0df2f0(a4);
                        }
                        return FUN_0c0df2f0(a4);
                    }
                }
                (((struct o15_uchar *)(a4))->v) = 0x4;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                *(unsigned short *)((a4 + 0x1E)) = 0x14;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x44, (a4 + 0x28));
                FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) >= (int)0x3C) {
                    (((struct o136_uchar *)(a4))->v) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
                }
                return FUN_0c0df2f0(a4);
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
                u0 = (((((struct o30_float *)(a4))->v)) + 10.0f);
            } else {
                u0 = (((((struct o30_float *)(a4))->v)) - 10.0f);
            }
            (((struct o30_float *)(a4))->v) = u0;
            if ((*(short *)0xC540994) == 120) {
                FUN_0c0df294(a4);
            }
            t0 = *(signed char *)0xC54098D;
            if (t0 != 9) {
                return t0;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct o136_uchar *)(a4))->v) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x43, (a4 + 0x28));
            return FUN_0c059c7a(0x8, 0x0);
        }
        t0 = *(signed char *)0xC54098D;
        t1 = t0;
        if (t0 != 8) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x58)); }
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    t0 = *(signed char *)0xC54098D;
    t1 = t0;
    if (t0 != 8) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c033e3c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.25f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.25f);
                t1 = 0x74;
                if (((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                t2 = t1;
            } else {
                if (t0 == 3) {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                    t1 = 0x8C;
                    if (!(((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -0.0f)) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t2 = t1;
                } else {
                    if (t0 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x2))) != 0) {
                            t1 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) % (int)0xA));
                        } else {
                            t1 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) / (int)0xA));
                        }
                        (((struct o20_ushort *)(a4))->v) = t1;
                        FUN_0c03733c(a4, (((((struct o20_short *)(a4))->v)) + 0x1A), (*(int *)0xC4B40D0));
                        t1 = (((struct oC4_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x31F;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110) + 0xC)); }
                        (((struct o18_float *)(t1))->v) = 1.0f;
                        (((struct o1C_float *)(t1))->v) = 0.5f;
                        (((struct o20_float *)(t1))->v) = 0.0f;
                        t1 = (((struct oC8_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x31F;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110) + 0xC)); }
                        (((struct o18_float *)(t1))->v) = 0.5f;
                        (((struct o1C_float *)(t1))->v) = 1.0f;
                        (((struct o20_float *)(t1))->v) = 0.0f;
                        (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = -5.0f;
                        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -5.0f;
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        t1 = *(signed char *)0xC541F41;
                        t4 = (unsigned char)t1;
                        if ((unsigned char)t1 != 3) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t1 = t4;
                    } else {
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = 0x74;
                            if (!(0.0f > ((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t0 = 0x15;
                            }
                            t4 = t0;
                        } else {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0250000004f);
                            t0 = 0x8C;
                            if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t0 = 0x14;
                            }
                            t4 = t0;
                        }
                        t1 = t4;
                    }
                    t2 = t1;
                }
            }
            t0 = t2;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.5f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA110) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 0.5f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x4B0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c033a60(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.25f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.25f);
                t1 = 0x74;
                if (((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -5.0f) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                t2 = t1;
            } else {
                if (t0 == 3) {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                    t1 = 0x8C;
                    if (!(((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > -0.0f)) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t2 = t1;
                } else {
                    if (t0 == 4) {
                        if ((*(short *)((a4 + 0x1E))) != 0) {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        }
                        if ((*(signed char *)((a4 + 0x2))) != 0) {
                            t1 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) % (int)0xA));
                        } else {
                            t1 = ((int)((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0x3C)) / (int)0xA));
                        }
                        *(unsigned short *)((a4 + 0x1C)) = t1;
                        FUN_0c03733c(a4, ((*(short *)((a4 + 0x1C))) + 0x1A), (*(int *)0xC4B40D0));
                        t1 = (((struct oC4_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x31F;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC) + 0xC)); }
                        (((struct o18_float *)(t1))->v) = 0.0f;
                        (((struct o1C_float *)(t1))->v) = 1.0f;
                        (((struct o20_float *)(t1))->v) = 0.5f;
                        t1 = (((struct oC8_int *)(a4))->v);
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x31F;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC) + 0xC)); }
                        (((struct o18_float *)(t1))->v) = 0.0f;
                        (((struct o1C_float *)(t1))->v) = 0.5f;
                        (((struct o20_float *)(t1))->v) = 1.0f;
                        (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = -5.0f;
                        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -5.0f;
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                        t1 = *(signed char *)0xC541F41;
                        t4 = (unsigned char)t1;
                        if ((unsigned char)t1 != 1) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t1 = t4;
                    } else {
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.25f);
                            t0 = 0x74;
                            if (!(0.0f > ((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t0 = 0x15;
                            }
                            t4 = t0;
                        } else {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0250000004f);
                            t0 = 0x8C;
                            if (!(-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t0 = 0x14;
                            }
                            t4 = t0;
                        }
                        t1 = t4;
                    }
                    t2 = t1;
                }
            }
            t0 = t2;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o20_float *)(t0))->v) = 0.5f;
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9FDC) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.5f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x4B0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c131c44(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register float u4;
    register int t5;
    register int t8;
    register int t9;
    register float u10;
    register int t13;
    register int t24;
    register int t33;
    register int t38;
    register int t40;
    register float t47;
    register int t49;
    register float t52;
    register int t54;
    register int t57;
    register int t65;
    register int t66;
    register int t6;
    register int t7;
    register float u11;
    register int t62;
    register int t63;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -4.39473677f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 7.26315784f);
                u4 = (((struct o74_float *)(t0))->v);
                (((struct o74_float *)(t0))->v) = (u4 + -2.75f);
                t5 = 0xC0300000;
                t8 = 0xC;
                t9 = 0x4;
                u10 = (u4 + -2.75f);
                for (;;) {
                    if ((unsigned int)t9 >= (unsigned int)0x18) {
                        break;
                    }
                    t7 = 0xC2A15B4;
                    t5 = 0xC2A156C;
                    t6 = (*(int *)((((0xC4 + a4) + t9) + 0x0)));
                    t5 = (t5 + t8);
                    t7 = (t7 + t8);
                    *(int *)((int)stk + 0) = (0x78 + t6);
                    *(unsigned int *)(((int)stk + 4)) = t5;
                    t13 = *(short *)((a4 + 0x1C));
                    t6 = t13;
                    u11 = ((*(float *)((t5 + 0x0))) - (*(float *)((t7 + 0x0))));
                    u10 = (math_sin_angle16(((int)(((((float)(((t13 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u11 = (u11 * u10);
                    t5 = (*(int *)((int)stk + 0)); /* manual: the address saved before the call */
                    u11 = (u11 * 65536.0f);
                    u11 = (u11 / 360.0f);
                    u11 = (u11 + 0.5f);
                    t6 = (int)u11;
                    t6 = (t6 & 0xFFFF);
                    *(unsigned int *)((t5 + 0x0)) = t6;
                    t6 = (*(int *)((((0xC4 + a4) + t9) + 0x0)));
                    *(int *)((int)stk + 0) = (0x7C + t6);
                    t5 = (*(int *)(((int)stk + 4)));
                    t24 = *(short *)((a4 + 0x1C));
                    t6 = t24;
                    u11 = (((((struct o4_float *)(t5))->v)) - ((((struct o4_float *)(t7))->v)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t24 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u11 = (u11 * u10);
                    t5 = (*(int *)((int)stk + 0)); /* manual: the address saved before the call */
                    u11 = (u11 * 65536.0f);
                    u11 = (u11 / 360.0f);
                    u11 = (u11 + 0.5f);
                    t6 = (int)u11;
                    t6 = (t6 & 0xFFFF);
                    *(unsigned int *)((t5 + 0x0)) = t6;
                    t6 = (*(int *)((((0xC4 + a4) + t9) + 0x0)));
                    *(int *)((int)stk + 0) = (0x80 + t6);
                    t5 = (*(int *)(((int)stk + 4)));
                    t33 = *(short *)((a4 + 0x1C));
                    t6 = t33;
                    u11 = (((((struct o8_float *)(t5))->v)) - ((((struct o8_float *)(t7))->v)));
                    u10 = (math_sin_angle16(((int)(((((float)(((t33 << 1) + t6) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u11 = (u11 * u10);
                    t5 = (*(int *)((int)stk + 0)); /* manual: the address saved before the call */
                    t9 = (t9 + 0x4);
                    t8 = (t8 + 0xC);
                    u11 = (u11 * 65536.0f);
                    u11 = (u11 / 360.0f);
                    u11 = (u11 + 0.5f);
                    t6 = (int)u11;
                    t6 = (t6 & 0xFFFF);
                    *(unsigned int *)((t5 + 0x0)) = t6;
                }
                t38 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t38 + 0x1);
                t40 = (short)(t38 + 0x1);
                if ((int)(short)(t38 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t40 = 0x14;
                }
                return t40;
            }
            return FUN_0c03f346(a4, a5, 0x4, a7);
        }
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -1.15909088f);
        t47 = math_sin_angle16(((int)(((((float)((int)((int)(((*(short *)((a4 + 0x1C))) << 2) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o70_float *)(t0))->v) = (_builtin_fabsf(t47) * 20.0f);
        (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + -1.2954545f);
        t49 = *(short *)((a4 + 0x1C));
        t52 = math_sin_angle16(((int)(((((float)((int)((int)(((t49 << 2) + t49) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t52) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t54 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t54 + 0x1);
        t57 = (short)(t54 + 0x1);
        if ((int)(short)(t54 + 0x1) < (int)0x2C) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0xA001;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
            t57 = 0xD8;
        }
        return t57;
    }
    (((struct o6C_float *)(t0))->v) = 91.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 160.0f;
    (((struct o7C_uint *)(t0))->v) = 0x8FA6;
    t65 = 0x4;
    t66 = 0xC;
    for (;;) {
        if ((unsigned int)t65 >= (unsigned int)0x18) {
            break;
        }
        t62 = 0xC4;
        t63 = t66;
        t63 = (t63 + 0xC2A14DC);
        t62 = (t62 + a4);
        t62 = (t62 + t65);
        t62 = (*(int *)((t62 + 0x0)));
        t62 = (t62 + 0x6C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t62) = *(struct mv3 *)(t63); }
        t62 = 0xC4;
        t63 = t66;
        t63 = (t63 + 0xC2A1524);
        t62 = (t62 + a4);
        t62 = (t62 + t65);
        t62 = (*(int *)((t62 + 0x0)));
        t62 = (t62 + 0x78);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t62) = *(struct mv3 *)(t63); }
        t65 = (t65 + 0x4);
        t66 = (t66 + 0xC);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0c3ae8(int a4)
{
    int stk[8];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC1C7268); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC1C7274); }
    v0_7 = *(signed char *)((v0_2 + 0x41C));
    v0_0 = ((unsigned char)v0_7);
    v0_6 = (0x4000);
    v0_1 = (v0_2);
    v0_2 = ((((short)v0_3 * (short)0x3938) + 0xC532498));
    v0_4 = (0xC2738B8);
    v0_5 = (0x0);
    v0_3 = ((((int)stk + 0) + 0x14));
    w0_0 = (0.0f);
    w0_1 = (-22.0f);
    if (((unsigned char)v0_7 == 0xC3)) goto L_C0C3B4E;
    if ((v0_0 == 71)) goto L_C0C3BA0;
    if ((v0_0 == 63)) goto L_C0C3C1A;
    if ((v0_0 != 37)) goto L_C0C3B42;
    if (((*(signed char *)((v0_2 + 0x3753))) != -1)) goto L_C0C3D84;
    v0_7 = (((struct o3818_short *)(v0_2))->v);
    v0_8 = ((unsigned short)v0_7);
    if (((unsigned short)v0_7 == 0x219)) goto L_C0C3CE6;
    if ((v0_8 == 0x341)) goto L_C0C3CE6;
    if ((v0_8 == 0x342)) goto L_C0C3CE6;
    if ((v0_8 != 0x343)) goto L_C0C3D84;
    L_C0C3CE6:;
    (((struct o28_float *)(v0_1))->v) = 17.0f;
    (((struct o2C_float *)(v0_1))->v) = w0_1;
    (((struct o30_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x34)) = v0_6;
    *(unsigned int *)((v0_1 + 0x38)) = v0_6;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_5;
    L_C0C3DEE:;
    (((struct oA4_uint *)(v0_1))->v) = ((*(int *)(((((*(signed char *)(((v0_4 + ((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34)) + 0x18))) << 2) + (0xC4 + v0_2)) + 0x0))) + 0x28);
    v0_1 = (((struct oC4_int *)(v0_1))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x6C)) = *(struct mv3 *)(v0_3); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x78)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
    L_C0C3E2E:;
    return v0_0;
    L_C0C3D84:;
    (((struct o28_float *)(v0_1))->v) = ((((struct o1C_float *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_4)))->v));
    (((struct o2C_float *)(v0_1))->v) = ((((struct o20_float *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_4)))->v));
    (((struct o30_float *)(v0_1))->v) = ((((struct o24_float *)((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_4)))->v));
    *(unsigned int *)((v0_1 + 0x34)) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_4) + 0x28)));
    *(unsigned int *)((v0_1 + 0x38)) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_4) + 0x2C)));
    *(unsigned int *)((v0_1 + 0x3C)) = (*(int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34) + v0_4) + 0x30)));
    goto L_C0C3DEE;
    L_C0C3B42:;
    if ((v0_0 != 67)) goto L_C0C3B4A;
    w0_0 = (6.0f);
    if (((*(signed char *)((v0_2 + 0x3753))) != -1)) goto L_C0C3D84;
    if (((unsigned short)((((struct o3818_short *)(v0_2))->v)) != 0x3AE)) goto L_C0C3D2C;
    v0_5 = (((struct o118_int *)(v0_2))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    w0_1 = (((struct o8C_float *)(v0_5))->v);
    w0_2 = (w0_1);
    if ((w0_0 > w0_1)) goto L_C0C3D2C;
    if ((40.0f > w0_2)) goto L_C0C3D56;
    L_C0C3D2C:;
    if (((*(signed char *)((v0_2 + 0x3753))) != -1)) goto L_C0C3D84;
    if (((unsigned short)((((struct o3818_short *)(v0_2))->v)) != 0x3AF)) goto L_C0C3D84;
    v0_5 = (((struct o118_int *)(v0_2))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    w0_1 = (((struct o8C_float *)(v0_5))->v);
    w0_2 = (w0_1);
    if ((w0_0 > w0_1)) goto L_C0C3D84;
    if ((!(39.0f > w0_2))) goto L_C0C3D84;
    L_C0C3D56:;
    v0_0 = ((FUN_0c0c3aac(v0_1)));
    goto L_C0C3E2E;
    L_C0C3B4A:;
    goto L_C0C3D84;
    L_C0C3C1A:;
    w0_2 = (-2.0f);
    if (((*(signed char *)((v0_2 + 0x3715))) != 36)) goto L_C0C3C46;
    (((struct o28_float *)(v0_1))->v) = w0_2;
    (((struct o2C_float *)(v0_1))->v) = w0_1;
    (((struct o30_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x34)) = v0_6;
    *(unsigned int *)((v0_1 + 0x38)) = 0xC000;
    *(unsigned int *)((v0_1 + 0x3C)) = v0_5;
    (((struct oA4_uint *)(v0_1))->v) = (((((struct oF4_int *)(v0_2))->v)) + 0x28);
    v0_0 = (0xA4);
    goto L_C0C3E2E;
    L_C0C3C46:;
    if (((*(signed char *)((v0_2 + 0x3753))) == -1)) goto L_C0C3C52;
    goto L_C0C3D84;
    L_C0C3C52:;
    v0_6 = (((struct o3818_short *)(v0_2))->v);
    v0_5 = ((unsigned short)v0_6);
    if (((unsigned short)v0_6 == 0)) goto L_C0C3C66;
    if ((v0_5 == 0x381)) goto L_C0C3C66;
    goto L_C0C3D84;
    L_C0C3C66:;
    (((struct o28_float *)(v0_1))->v) = -20.0f;
    (((struct o2C_float *)(v0_1))->v) = w0_2;
    (((struct o30_float *)(v0_1))->v) = w0_2;
    *(unsigned int *)((v0_1 + 0x34)) = 0xCE00;
    *(unsigned int *)((v0_1 + 0x38)) = 0xA200;
    *(unsigned int *)((v0_1 + 0x3C)) = 0x3100;
    goto L_C0C3DEE;
    L_C0C3BA0:;
    v0_3 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned char *)((v0_3 + 0x0)) = 0x1;
    (((struct o6C_float *)(v0_3))->v) = w0_0;
    (((struct o70_float *)(v0_3))->v) = -9.0f;
    (((struct o74_float *)(v0_3))->v) = 10.0f;
    (((struct o78_uint *)(v0_3))->v) = 0x800;
    (((struct o80_uint *)(v0_3))->v) = v0_5;
    (((struct o7C_uint *)(v0_3))->v) = v0_5;
    (((struct o68_uint *)(v0_3))->v) = (((((struct o100_int *)(v0_2))->v)) + 0x28);
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    *(unsigned char *)((v0_3 + 0x0)) = 0x1;
    (((struct o6C_float *)(v0_3))->v) = w0_0;
    (((struct o70_float *)(v0_3))->v) = -9.0f;
    (((struct o74_float *)(v0_3))->v) = 10.0f;
    (((struct o78_uint *)(v0_3))->v) = 0x800;
    (((struct o80_uint *)(v0_3))->v) = v0_5;
    (((struct o7C_uint *)(v0_3))->v) = v0_5;
    (((struct o68_uint *)(v0_3))->v) = (((((struct o10C_int *)(v0_2))->v)) + 0x28);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x28)) = *(struct mv3 *)((((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x3938) + 0xC5324C0)); }
    *(unsigned int *)((v0_1 + 0x3C)) = v0_5;
    *(unsigned int *)((v0_1 + 0x38)) = v0_5;
    *(unsigned int *)((v0_1 + 0x34)) = v0_5;
    goto L_C0C3E2E;
    L_C0C3B4E:;
    v0_0 = *(signed char *)((v0_1 + 0x424));
    v0_0 = ((FUN_0c0c3a60(v0_1, (*(signed char *)(((((v0_0 << 2) + v0_0) << 1) + 0xC278841))))));
    goto L_C0C3E2E;
}

int FUN_0c105e8c(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t6;
    register int t16;
    register int t25;
    register int t21;
    register int t29;
    register int t68;
    register int t74;
    register int t75;
    register int t76;
    register int t89;
    register int t92;
    register int t96;
    register int t40;
    register int t52;
    register int t62;
    register int t109;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t6 = *(signed char *)((a4 + 0x17));
                    if (t6 != 0) {
                        if (t6 != 1) {
                            if (t6 != 2) {
                                return t6;
                            }
                            t16 = *(signed char *)((a4 + 0x18));
                            if (t16 != 0) {
                                if (t16 != 1) {
                                    if (t16 != 2) {
                                        t25 = t16;
                                        if (t16 != 3) {
                                        } else {
                                            t21 = FUN_0c05f22c(0x3FCF);
                                            t25 = t21;
                                            if (t21 != 0) {
                                                (((struct o16_uchar *)(a4))->v) = 0x4;
                                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                                t25 = 0x17;
                                            }
                                        }
                                        return t25;
                                    }
                                    t29 = FUN_0c117d54();
                                    if ((int)t29 < 0) {
                                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                        return FUN_0c117e76();
                                    }
                                    return t29;
                                }
                                if ((*(signed char *)0xC535BAD) == 1) {
                                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                    (((struct o19_uchar *)(a4))->v) = 0x0;
                                    t40 = 0x19;
                                } else {
                                    if (((((struct o22_short *)(a4))->v)) == 100) {
                                        *(int *)((int)stk + 0) = 0x1;
                                        FUN_0c117a6e(0x1);
                                    }
                                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                                    t40 = 0x22;
                                }
                                return t40;
                            }
                            (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x0));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC5324C0) = *(struct mv3 *)(0xC290A60); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC5324CC) = *(struct mv3 *)(0xC290A78); }
                            *(unsigned char *)0xC535BAC = 0x1;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC473CA8) = *(struct mv3 *)(0xC290A6C); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC473CB4) = *(struct mv3 *)(0xC290A84); }
                            FUN_0c115120(0x9, 0xC290A60, 0xC290A78, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            (((struct o22_ushort *)(a4))->v) = 0x0;
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                            (((struct o19_uchar *)(a4))->v) = 0x0;
                            return 0x19;
                        }
                        if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x2D) {
                            FUN_0c059c7a(0x18, 0x1);
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            (((struct o18_uchar *)(a4))->v) = 0x0;
                            t52 = 0x18;
                        } else {
                            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                            t52 = 0x22;
                        }
                        return t52;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x2D) {
                        FUN_0c059c7a(0x18, 0x1);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        t62 = 0x18;
                    } else {
                        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                        t62 = 0x22;
                    }
                    return t62;
                }
                if (t0 == 4) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return 0x16;
                }
                if (t0 == 5) {
                    if ((unsigned int)0xC473D04 < (unsigned int)0xC474004) {
                        t68 = 0xC473D04;
                        for (;;) {
                            if (((*(int *)((t68 + 0x0))) & 0x1000) != 0) {
                                break;
                            }
                            t68 = (t68 + 0x4);
                            if ((unsigned int)t68 >= (unsigned int)0xC474004) {
                                (((struct o16_uchar *)(a4))->v) = 0x7;
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                return 0x17;
                            }
                        }
                        (((struct o16_uchar *)(a4))->v) = 0x6;
                    } else {
                        (((struct o16_uchar *)(a4))->v) = 0x7;
                    }
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    return 0x17;
                }
                if (t0 == 6) {
                    t74 = *(signed char *)((a4 + 0x17));
                    if (t74 != 0) {
                        if (t74 != 1) {
                            if (t74 != 2) {
                                return t74;
                            }
                            t75 = FUN_0c104cc8(0x3FCF);
                            if (t75 != 0) {
                                return FUN_0c105cec(a4);
                            }
                            return t75;
                        }
                        t76 = FUN_0c117d54();
                        if ((int)t76 < 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            return FUN_0c117e76();
                        }
                        return t76;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(int *)((int)stk + 0) = 0x50;
                    return (FUN_0c117944(0x50));
                }
                if (t0 == 7) {
                    return FUN_0c105cec(a4);
                }
                return t0;
            }
            *(unsigned int *)(((int)stk + 4)) = 0xC539708;
            *(unsigned char *)0xC53970A = 0x0;
            FUN_0c06780e(0x4);
            FUN_0c03ea04(0xB, 0x0);
            FUN_0c036606();
            FUN_0c06785c();
            FUN_0c03ea04(0xB, 0x0);
            (((struct oA8_uchar *)((*(int *)(((int)stk + 4)))))->v) = 0x0;
            *(unsigned char *)0xC535BAC = 0x0;
            FUN_0c05b052(0x2D, 0x1);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            return 0x17;
        }
        t89 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
        t92 = t89;
        if (t89 != 99) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            t92 = (FUN_0c117a6e(0xFFFFFFFF));
        }
        return t92;
    }
    t96 = *(signed char *)((a4 + 0x17));
    if (t96 != 0) {
        t109 = t96;
        if (t96 != 1) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t109 = 0x17;
        }
    } else {
        FUN_0c100780(0x1);
        *(unsigned int *)0xC474718 = 0x0;
        (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
        (((struct o8_uint *)0xC474B8C)->v) = (FUN_0c11791c());
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c117a6e(0xFFFFFFFF);
        (((struct oC_uint *)0xC474B8C)->v) = (FUN_0c117d14());
        FUN_0c059c7a(0x19, 0x1);
        *(unsigned int *)((a4 + 0x10)) = (FUN_0c1161f0());
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t109 = 0x17;
    }
    return t109;
}

int FUN_0c137f8e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register float u0;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 == 1) {
            t4 = *(short *)((a4 + 0x1C));
            if (((int)t4 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t0 = (((struct o8_int *)0xC2A19CC)->v), (int)t4 <= (int)t0)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
            }
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A19A8); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A199C); }
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t1 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x25);
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x24);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A199C); }
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A199C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2A19B4); }
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A199C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2A19C0); }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = ((math_sin_angle16(((((struct o20_int *)0xC2A19CC)->v)))) * ((((struct o28_float *)0xC2A19CC)->v)));
    (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = ((math_sin_angle16((-((((struct o20_int *)0xC2A19CC)->v))))) * ((((struct o28_float *)0xC2A19CC)->v)));
    (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = ((math_sin_angle16(((((struct o24_int *)0xC2A19CC)->v)))) * ((((struct o2C_float *)0xC2A19CC)->v)));
    (((struct o78_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = ((math_sin_angle16((-((((struct o24_int *)0xC2A19CC)->v))))) * ((((struct o2C_float *)0xC2A19CC)->v)));
    (((struct o78_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t2 = (((struct o8_int *)0xC2A19CC)->v), (int)t0 <= (int)t2)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
    }
    if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A19A8); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A199C); }
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t3 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t3)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
