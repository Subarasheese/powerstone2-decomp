/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0cff2e(int, int);
int FUN_0c0d04c4(int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlRand(void);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c12c728(int a4, int a5, int a6, int a7);
int FUN_0c0df9b0(int a4, int a5, int a6, int a7);
int FUN_0c15eb24(int a4, int a5, int a6, int a7, float f4);
int FUN_0c14da24(int a4, int a5, int a6, int a7);
int FUN_0c124f0c(int a4, int a5, int a6, int a7);
int FUN_0c163afc(int a4, int a5, int a6, int a7);
int FUN_0c1625ae(int a4, int a5, int a6, int a7);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c12c728(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t43;
    register int t5;
    register int t8;
    register int t16;
    register float u21;
    register float u22;
    register float u23;
    register float u24;
    register float t25;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t43 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12C8D0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), (t0 + 0x28));
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t5 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t5));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x32, 0x2, 0x100, (~((int)0x1 << (int)t5)), 0x0, 0x0);
        FUN_0c07e2f4(t0, 0x60);
        t8 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 20)) = t8;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 20))), 0x0, (*(int *)((((signed char)t8 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = 0xB4;
        *(unsigned short *)((t0 + 0x1E)) = 0x5;
        (((struct o14_uchar *)(t0))->v) = (*(signed char *)(((int)stk + 16)));
        (((struct o15_uchar *)(t0))->v) = 0x0;
        t16 = *(signed char *)(((int)stk + 16));
        if (t16 != 0) {
            t43 = t16;
            if (t16 != 1) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x8)) = *(struct mv3 *)((0x380C + a4)); }
                (((struct o4_float *)((((int)stk + 16) + 0x8)))->v) = (((((struct o4_float *)((((int)stk + 16) + 0x8)))->v)) - ((((struct o2C_float *)(t0))->v)));
                (((struct o8_float *)(((int)stk + 16)))->v) = (((((struct o8_float *)(((int)stk + 16)))->v)) - ((((struct o28_float *)(t0))->v)));
                u21 = (((struct o30_float *)(t0))->v);
                u22 = (((struct o8_float *)((((int)stk + 16) + 0x8)))->v);
                (((struct o8_float *)((((int)stk + 16) + 0x8)))->v) = (u22 - u21);
                u23 = (((struct o8_float *)(((int)stk + 16)))->v);
                u24 = ((u22 - u21) * (u22 - u21));
                u24 = u24 + u23 * u23;
                t25 = math_signed_sqrt(u24);
                t43 = math_atan2_angle16(t25, ((((struct o4_float *)((((int)stk + 16) + 0x8)))->v)));
                *(unsigned int *)((t0 + 0x34)) = (t43 - 0x4000);
            }
        } else {
            *(unsigned int *)((t0 + 0x34)) = (unsigned short)((*(int *)((t0 + 0x34))) + 0xF8E4);
            t43 = t16;
        }
    }
    return t43;
}

int FUN_0c0df9b0(int a4, int a5, int a6, int a7)
{
    int stk[21];
    int t10;

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R11;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_0 = (v0_0);
    if (((*(signed char *)0xC54223C) == 1)) goto L_C0DF9D4;
    v0_2 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_3)));
    L_C0DFB44:;
    return v0_2;
    L_C0DF9D4:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x0);
    if ((v0_3 == 0)) goto L_C0DF9E6;
    if ((v0_2 == 1)) goto L_C0DFA88;
    goto L_C0DFB44;
    L_C0DFA88:;
    t10 = *(short *)((v0_0 + 0x1C));
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x10);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x14) + 0x30);
    (((struct o30_float *)((((int)stk + 0) + 0x14)))->v) = ((float)(0x3 & t10) * 0.125f);
    (((struct o20_float *)((((int)stk + 0) + 0x14)))->v) = ((float)(0x3 & t10) * 0.125f);
    (((struct o10_float *)((((int)stk + 0) + 0x14)))->v) = ((float)(0x3 & t10) * 0.125f);
    (((struct o14_float *)(((int)stk + 0)))->v) = ((float)(0x3 & t10) * 0.125f);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x14) + 0x8);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x14) + 0x18);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x14) + 0x38);
    w0_0 = (((struct o14_float *)(((int)stk + 0)))->v);
    (((struct o38_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    (((struct o28_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    (((struct o18_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    v0_2 = *(int *)(((int)stk + 0));
    w0_0 = ((float)(((0xC & t10) >> 1) >> 1) * 0.125f);
    (((struct o4_float *)(((((int)stk + 0) + 0x14) + 0x28)))->v) = (1.0f - w0_0);
    (((struct o4_float *)(((((int)stk + 0) + 0x14) + 0x20)))->v) = (1.0f - w0_0);
    (((struct o4_float *)(v0_2))->v) = (1.0f - w0_0);
    (((struct o4_float *)((((int)stk + 0) + 0x14)))->v) = (1.0f - w0_0);
    v0_2 = *(int *)(((int)stk + 8));
    v0_3 = *(int *)(((int)stk + 16));
    v0_4 = *(int *)(((int)stk + 12));
    (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v) = ((1.0f - w0_0) + -0.125f);
    (((struct o4_float *)(v0_2))->v) = ((1.0f - w0_0) + -0.125f);
    (((struct o4_float *)(v0_4))->v) = ((1.0f - w0_0) + -0.125f);
    (((struct o4_float *)(v0_3))->v) = ((1.0f - w0_0) + -0.125f);
    FUN_0c0cff2e((*(int *)((((((struct oC4_int *)(v0_0))->v)) + 0x8))), (((int)stk + 0) + 0x14));
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_3 = *(short *)((v0_0 + 0x1E));
    v0_2 = (v0_3);
    if (((int)v0_3 > 0)) goto L_C0DFB44;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_3);
    if (((int)v0_3 < (int)0x10)) goto L_C0DFB44;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    v0_2 = (v0_1);
    goto L_C0DFB44;
    L_C0DF9E6:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_3);
    if (((int)v0_3 >= (int)0x10)) goto L_C0DFA18;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((0xC1CA31C + (((v0_2 << 1) + v0_2) << 2))); }
    v0_2 = (v0_1);
    L_C0DFA34:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_2 = (0xC0D04C4);
    v0_2 = (v0_1);
    L_C0DFA80:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0DFA68;
    goto L_C0DFA88;
    L_C0DFA68:;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_3 + 0x6), (v0_3 + 0x78));
    v0_2 = ((v0_2 + 0x1));
    goto L_C0DFA80;
    L_C0DFA18:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((((((v0_2 - 16) << 1) + (v0_2 - 16)) << 2) + 0xC1CA364)); }
    v0_2 = (0x8);
    goto L_C0DFA34;
}

int FUN_0c15eb24(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.000312499993f);
                        t0 = 0x40;
                        if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC2038D0) + 0x8))) + 0x186);
                            (((struct o20_ushort *)(a4))->v) = (*(int *)(((0xC2038D0 + ((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C)) + 0xC)));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC203924); }
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x20;
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * (math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13))));
                (((struct o40_float *)(a4))->v) = ((((u0 * 0.200000003f)) + 1.0f) / 320.0f);
                t0 = *(short *)((a4 + 0x1C));
                t2 = t0;
                if ((int)t0 > 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 20.0f) * 16384.0f));
            (((struct o40_float *)(a4))->v) = ((1.0f - ((u0 * 1.0f))) / 320.0f);
            t1 = *(short *)((a4 + 0x1C));
            t2 = t1;
            if ((int)t1 <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o44_float *)(a4))->v) = 0.00312500005f;
            t2 = 0x44;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c14da24(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t1;
    int t0;
    int t24;
    int t34;
    int t3;
    float u17;
    float u22;
    int t26;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
        t34 = t1;
        if (t1 == 0) {
        } else {
            t3 = (int)((int)(nlRand()) % (int)0xE);
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), t3, 0x51, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1;
            (((struct o1_uchar *)(t1))->v) = (*(signed char *)(a4 + 0x1));
            (((struct o2_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 16)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0x1F;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            (((struct o4_uint *)(t1))->v) = 0xC14D830;
            (((struct o10_uint *)(t1))->v) = a4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1 + 0x34) = *(struct mv3 *)(a4 + 0x34); }
            (((struct o38_uint *)(t1))->v) = (((((struct o38_int *)(t1))->v)) + (*(int *)(((t0 << 2) + 0xC2A2760))));
            (((struct o58_float *)(t1))->v) = 50.0f;
            u17 = ((((struct o28_float *)(a4))->v)) + (math_sin_angle16(((((struct o38_int *)(t1))->v)))) * ((((struct o58_float *)(t1))->v));
            (((struct o28_float *)(t1))->v) = u17;
            u22 = ((((struct o30_float *)(a4))->v)) + (math_cos_angle16(((((struct o38_int *)(t1))->v)))) * ((((struct o58_float *)(t1))->v));
            (((struct o30_float *)(t1))->v) = u22;
            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
            (((struct o40_float *)(t1))->v) = 0.5f;
            (((struct o44_float *)(t1))->v) = 0.5f;
            (((struct o48_float *)(t1))->v) = 0.5f;
            (((struct o1C_ushort *)(t1))->v) = 0xA;
            (((struct o1E_ushort *)(t1))->v) = 0x14;
            t24 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t24 = (t0 & 0x1);
            }
            (((struct o1B_uchar *)(t1))->v) = t24;
            if ((signed char)t24 != 0) {
                t26 = *(signed char *)(t1 + 0x1);
                FUN_0c064d24(t1, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t26)), 0x0, 0xF0);
                FUN_0c07e2f4(t1, 0x62);
            }
            (((struct o12E_ushort *)(t1))->v) = 0x0;
            t34 = 0x12E;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x8) continue;
        break;
    }
    return t34;
}



int FUN_0c1625ae(int a4, int a5, int a6, int a7)
{
    int stk[6];
    int t18;
    int t25;
    int t9;
    int t22;
    int t21;
    float u23;
    float u10;
    float u6;
    int t13;
    int t15;
    int t53;
    int t40;

    *(unsigned int *)(((int)stk + 0)) = a4;
    if ((unsigned int)a5 >= (unsigned int)0x2710) {
    } else {
        t9 = 0x4;
        u10 = 21.0f;
        if ((unsigned int)a5 >= (unsigned int)0x3E8) {
        } else {
            t9 = 0x3;
            u6 = 22.0f;
            if ((unsigned int)a5 >= (unsigned int)0x64) {
            } else {
                t9 = 0x1;
                if ((unsigned int)a5 >= (unsigned int)0xA) {
                    t9 = 0x2;
                }
                u6 = 11.0f;
            }
            u10 = u6;
        }
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = ((int)((unsigned int)a5 / (unsigned int)0x3E8));
        t13 = (int)((unsigned int)a5 % (unsigned int)0x3E8);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((int)((unsigned int)t13 / (unsigned int)0x64));
        t15 = (int)((unsigned int)t13 % (unsigned int)0x64);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = ((int)((unsigned int)t15 / (unsigned int)0xA));
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((int)((unsigned int)t15 % (unsigned int)0xA));
        t18 = FUN_0c03f444(0x5, 0x0, t9, a7);
        t40 = t18;
        if (t18 != 0) {
            (((struct o1_uchar *)(t18))->v) = 0xFFFFFFFF;
            (((struct o4_uint *)(t18))->v) = 0xC162560;
            (((struct oA8_uchar *)(t18))->v) = 0x1;
            (((struct oAC_ushort *)(t18))->v) = 0x21;
            (((struct oA9_uchar *)(t18))->v) = 0x21;
            (((struct o48_float *)(t18))->v) = 1.0f;
            (((struct o44_float *)(t18))->v) = 1.0f;
            (((struct o40_float *)(t18))->v) = 1.0f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t18 + 0x28) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
            (((struct o2C_float *)(t18))->v) = (((((struct o2C_float *)(t18))->v)) + 55.0f);
            (((struct o1C_ushort *)(t18))->v) = 0x64;
            if ((int)t9 > 0) {
                t21 = 0x0;
                t22 = 0x0;
                u23 = u10;
                for (;;) {
                    t25 = *(int *)((((0xC4 + t18) + t22) + 0x0));
                    FUN_0c03744a(t25, 0x0, (*(int *)((((*(int *)(((((int)stk + 0) + 0x4) + t22))) << 2) + 0xC2A2E38))), (*(int *)0xC4B40D0));
                    *(unsigned char *)(t25) = 0x1;
                    (((struct o6_ushort *)(t25))->v) = 0x30;
                    (((struct o8C_float *)(t25))->v) = 2.20000005f;
                    (((struct o88_float *)(t25))->v) = 2.20000005f;
                    (((struct o84_float *)(t25))->v) = 2.20000005f;
                    (((struct o6C_float *)(t25))->v) = u23;
                    u23 = (u23 - 22.0f);
                    (((struct o70_float *)(t25))->v) = 0.0f;
                    t21 = (t21 + 0x1);
                    (((struct o74_float *)(t25))->v) = 0.0f;
                    t22 = (t22 + 0x4);
                    if ((int)t21 >= (int)t9) {
                        break;
                    }
                }
            }
            (((struct o1C_ushort *)(t18))->v) = 0xE;
            t40 = 0xE;
        }
        t53 = t40;
    }
    return t53;
}
