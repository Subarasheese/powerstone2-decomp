/* Straight-line functions with calls and guards (batch gen_hc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0cff96(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0dd3dc(int);
int FUN_0c0dd3ec(int);
int FUN_0c1171f0(int);
float math_sin_angle16(int);
int FUN_0c0dd428(int a4, int a5, int a6, int a7);
int FUN_0c03379e(int a4);
int FUN_0c03350c(int a4);
int FUN_0c035426(int a4, int a5, int a6, int a7, float f4);
void FUN_0c11383a(int a4, int a5, int a6, int a7);
int FUN_0c11cdfc(int a4, int a5, int a6, int a7);

int FUN_0c0dd428(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t3;
    register int t9;
    register int t10;
    register float u17;
    register int t19;
    register int t20;
    register int t24;
    register float u31;
    register int t33;
    register int t34;
    register int t37;
    register int t38;
    register float u45;
    register int t48;
    register int t68;
    register float u75;
    register int t78;
    register int t100;
    register int t104;
    register int t109;
    register int t113;
    register int t119;
    register int t120;
    register float u127;
    register int t129;
    register int t130;
    register int t134;
    register float u141;
    register int t143;
    register int t144;
    register int t147;
    register int t148;
    register float u155;
    register int t158;
    register int t177;
    register float u184;
    register int t187;
    register int t208;
    register int t108;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        t3 = *(signed char *)((a4 + 0x15));
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    return t3;
                }
                t9 = *(signed char *)((a4 + 0x16));
                if (t9 != 0) {
                    if (t9 != 1) {
                        return t9;
                    }
                    t10 = *(signed char *)((a4 + 0x2));
                    u17 = ((((struct o8_float *)(((((t10 << 1) + t10) << 2) + 0xC1CA094)))->v));
                    u17 = u17 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                    (((struct o30_float *)(a4))->v) = u17;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t19 = *(short *)((a4 + 0x1C));
                    if ((int)t19 <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t20 = *(signed char *)((a4 + 0x2));
                        (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t20 << 1) + t20) << 2))))->v));
                        return FUN_0c0dd3dc(a4);
                    }
                    return t19;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t24 = *(signed char *)((a4 + 0x2));
                u31 = ((((struct o8_float *)(((((t24 << 1) + t24) << 2) + 0xC1CA094)))->v));
                u31 = u31 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u31;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                t33 = *(short *)((a4 + 0x1C));
                if ((int)t33 <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t34 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t34 << 1) + t34) << 2))))->v));
                    return FUN_0c0dd3dc(a4);
                }
                return t33;
            }
            t37 = *(signed char *)((a4 + 0x16));
            if (t37 != 0) {
                if (t37 != 1) {
                } else {
                    t38 = *(signed char *)((a4 + 0x2));
                    u45 = ((((struct o8_float *)(((((t38 << 1) + t38) << 2) + 0xC1CA094)))->v));
                    u45 = u45 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                    (((struct o30_float *)(a4))->v) = u45;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t48 = *(signed char *)((a4 + 0x2));
                        (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t48 << 1) + t48) << 2))))->v));
                    }
                }
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                t68 = *(signed char *)((a4 + 0x2));
                u75 = ((((struct o8_float *)(((((t68 << 1) + t68) << 2) + 0xC1CA094)))->v));
                u75 = u75 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u75;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t78 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t78 << 1) + t78) << 2))))->v));
                }
            }
            return FUN_0c0dd3ec(a4);
        }
        FUN_0c0dd3ec(a4);
        t100 = 0x15;
        if ((*(signed char *)((a4 + 0x15))) != 0) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
            t100 = (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
        }
        return t100;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t104 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CA094 + (((t104 << 1) + t104) << 2))); }
    FUN_0c0dd3dc(a4);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t109 = 0x0;
    for (;;) {
        if ((int)t109 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t108 = t109;
        t108 = (t108 << 2);
        t108 = (t108 + (0xC4 + a4));
        t108 = (*(int *)((t108 + 0x0)));
        FUN_0c0d04c4((t108 + 0x6), (t108 + 0x78));
        t109 = (t109 + 0x1);
    }
    t113 = *(signed char *)((a4 + 0x15));
    if (t113 != 0) {
        if (t113 != 1) {
            if (t113 != 2) {
                return t113;
            }
            t119 = *(signed char *)((a4 + 0x16));
            if (t119 != 0) {
                if (t119 != 1) {
                    return t119;
                }
                t120 = *(signed char *)((a4 + 0x2));
                u127 = ((((struct o8_float *)(((((t120 << 1) + t120) << 2) + 0xC1CA094)))->v));
                u127 = u127 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u127;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                t129 = *(short *)((a4 + 0x1C));
                if ((int)t129 <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t130 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t130 << 1) + t130) << 2))))->v));
                    return FUN_0c0dd3dc(a4);
                }
                return t129;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t134 = *(signed char *)((a4 + 0x2));
            u141 = ((((struct o8_float *)(((((t134 << 1) + t134) << 2) + 0xC1CA094)))->v));
            u141 = u141 + (((float)(*(short *)((a4 + 0x1C))) / 2.5f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
            (((struct o30_float *)(a4))->v) = u141;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            t143 = *(short *)((a4 + 0x1C));
            if ((int)t143 <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t144 = *(signed char *)((a4 + 0x2));
                (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t144 << 1) + t144) << 2))))->v));
                return FUN_0c0dd3dc(a4);
            }
            return t143;
        }
        t147 = *(signed char *)((a4 + 0x16));
        if (t147 != 0) {
            if (t147 != 1) {
            } else {
                t148 = *(signed char *)((a4 + 0x2));
                u155 = ((((struct o8_float *)(((((t148 << 1) + t148) << 2) + 0xC1CA094)))->v));
                u155 = u155 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                (((struct o30_float *)(a4))->v) = u155;
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t158 = *(signed char *)((a4 + 0x2));
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t158 << 1) + t158) << 2))))->v));
                }
            }
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            t177 = *(signed char *)((a4 + 0x2));
            u184 = ((((struct o8_float *)(((((t177 << 1) + t177) << 2) + 0xC1CA094)))->v));
            u184 = u184 + (((float)(*(short *)((a4 + 0x1C))) / 10.0f)) * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
            (((struct o30_float *)(a4))->v) = u184;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t187 = *(signed char *)((a4 + 0x2));
                (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t187 << 1) + t187) << 2))))->v));
            }
        }
        return FUN_0c0dd3ec(a4);
    }
    FUN_0c0dd3ec(a4);
    t208 = 0x15;
    if ((*(signed char *)((a4 + 0x15))) != 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        t208 = (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
    }
    return t208;
}

int FUN_0c03379e(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x1);
    if ((v0_3 == 0)) goto L_C0337D0;
    if ((v0_2 == 1)) goto L_C0337EE;
    return FUN_0c03f346(v0_0, R5, v0_1, R7);
    L_C0337EE:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0250000004f);
    w0_2 = (-0.0f);
    if ((v0_3 == 0)) goto L_C03382A;
    if ((v0_2 == 1)) goto L_C0338D0;
    if ((v0_2 != 2)) goto L_C03380E;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_2 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > -5.0f)) goto L_C0339CA;
    L_C033998:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C0339CA:;
    return v0_2;
    L_C03380E:;
    if ((v0_2 != 3)) goto L_C033816;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_2 = (0x8C);
    if ((((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > w0_2)) goto L_C0339CA;
    goto L_C033998;
    L_C033816:;
    if ((v0_2 != 4)) goto L_C03381E;
    v0_1 = *(signed char *)0xC541F41;
    v0_2 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 != 3)) goto L_C033998;
    goto L_C0339CA;
    L_C03381E:;
    if ((v0_2 != 5)) goto L_C033826;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_2 = (0x74);
    if ((0.0f > ((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0339CA;
    goto L_C033998;
    L_C033826:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_2 = (0x8C);
    if ((w0_2 > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0339CA;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C0339CA;
    L_C0338D0:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0339CA;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_1;
    goto L_C033998;
    L_C03382A:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C03383A;
    goto L_C0339CA;
    L_C03383A:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9EA8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9EA8) + 0xC)); }
    (((struct o18_float *)(v0_2))->v) = 1.0f;
    (((struct o1C_float *)(v0_2))->v) = 0.5f;
    (((struct o20_float *)(v0_2))->v) = 0.0f;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9EA8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9EA8) + 0xC)); }
    (((struct o18_float *)(v0_2))->v) = 0.5f;
    (((struct o1C_float *)(v0_2))->v) = 1.0f;
    (((struct o20_float *)(v0_2))->v) = 0.0f;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C033998;
    L_C0337D0:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0337EE;
}

int FUN_0c03350c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R8;
    register int R11;
    register int R12;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (0x1);
    if ((v0_3 == 0)) goto L_C033520;
    if ((v0_2 == 1)) goto L_C03353E;
    return FUN_0c03f346(v0_0, R5, v0_1, R7);
    L_C03353E:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0250000004f);
    w0_2 = (-0.0f);
    if ((v0_3 == 0)) goto L_C033598;
    if ((v0_2 == 1)) goto L_C03363E;
    if ((v0_2 != 2)) goto L_C03355E;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_2 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > -5.0f)) goto L_C033730;
    L_C0336FE:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C033730:;
    return v0_2;
    L_C03355E:;
    if ((v0_2 != 3)) goto L_C033566;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_2 = (0x8C);
    if ((((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > w0_2)) goto L_C033730;
    goto L_C0336FE;
    L_C033566:;
    if ((v0_2 != 4)) goto L_C03356E;
    v0_1 = *(signed char *)0xC541F41;
    v0_2 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 != 1)) goto L_C0336FE;
    goto L_C033730;
    L_C03356E:;
    if ((v0_2 != 5)) goto L_C033576;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_2 = (0x74);
    if ((0.0f > ((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C033730;
    goto L_C0336FE;
    L_C033576:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_2 = (0x8C);
    if ((w0_2 > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C033730;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C033730;
    L_C03363E:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C033730;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_1;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_1;
    goto L_C0336FE;
    L_C033598:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C0335A8;
    goto L_C033730;
    L_C0335A8:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9D58)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9D58) + 0xC)); }
    (((struct o18_float *)(v0_2))->v) = 0.0f;
    (((struct o1C_float *)(v0_2))->v) = 1.0f;
    (((struct o20_float *)(v0_2))->v) = 0.5f;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_2 + 0x0)) = 0x0;
    *(unsigned short *)((v0_2 + 0x6)) = 0x31F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_2 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9D58)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_2)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_0 + 0x2))) * (short)0x1C) + 0xC1A9D58) + 0xC)); }
    (((struct o18_float *)(v0_2))->v) = 0.0f;
    (((struct o1C_float *)(v0_2))->v) = 0.5f;
    (((struct o20_float *)(v0_2))->v) = 1.0f;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C0336FE;
    L_C033520:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C03353E;
}

int FUN_0c035426(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

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
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0299999993f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t2 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                } else {
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t0 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
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
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA474) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

void FUN_0c11383a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
            return;
        }
        if (t0 == 2) {
            t1 = *(int *)0xC474770;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((((t1 << 1) + t1) << 2) + 0xC291570)); }
            return;
        }
        if (t0 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
            for (;;) {
                t2 = ((0xC4 + a4) + t1);
                t1 = (t1 + 0x4);
                (((struct o90_float *)((*(int *)((t2 + 0x0)))))->v) = -18.75f;
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                FUN_0c03f346(a4, t2, a6, a7);
    return;
            }
            return;
        }
        if (t0 == 11) {
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
                t1 = (t1 + 0x4);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                FUN_0c03f346(a4, t2, a6, a7);
    return;
            }
            return;
        }
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0xC, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xF, 0xC, (*(int *)0xC4B410C));
    t0 = *(int *)0xC4B410C;
    t1 = 0x3;
    if ((int)(*(signed char *)0xC542B8A) >= (int)0x1) {
        t1 = 0x1;
    }
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), t1, 0xA, t0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2915B8); }
    t0 = *(int *)0xC4B410C;
    t1 = 0x3;
    if ((*(signed char *)0xC542B8A) == 2) {
        t1 = 0x2;
    }
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), t1, 0xA, t0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC29160C); }
    t0 = *(int *)0xC474770;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC291570)); }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 300.0f);
        (((struct o90_float *)(t1))->v) = 18.75f;
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
}

int FUN_0c11cdfc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 99) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return t0;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(short *)((a4 + 0x1C))) < (int)0x64) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x64, 0x0);
        }
        FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC29232C);
        FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC292344);
        FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC29235C);
        FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), 0xC292374);
        FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC29238C);
        FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923A4);
        FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923BC);
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0x65) && ((int)t0 <= (int)0xC8)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0xC8, 0x64);
        }
        t0 = *(short *)((a4 + 0x1C));
        t1 = t0;
        if ((int)t0 < (int)0xC8) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c03733c(a4, 0x20, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oC8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oCC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oD0_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oD4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oD8_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oDC_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(short *)((a4 + 0x1C))) < (int)0x64) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x64, 0x0);
    }
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC29232C);
    FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC292344);
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC29235C);
    FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), 0xC292374);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC29238C);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923A4);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923BC);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x65) && ((int)t0 <= (int)0xC8)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0xC8, 0x64);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 < (int)0xC8) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
