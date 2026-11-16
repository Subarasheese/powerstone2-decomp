/* Straight-line functions with calls and guards (batch gen_gr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o404_int { char p[0x404]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c1125a0(int);
int FUN_0c1126b6(void);
int FUN_0c1171f0(int);
int FUN_0c130e70(int, int, int);
int FUN_0c131556(int, int);
int FUN_0c13bc42(int);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c13bca6(int a4, int a5, int a6, int a7);
int FUN_0c03379e(int a4, float f4, float f5, float f6);
int FUN_0c1126de(int a4, int a5, int a6, int a7);
int FUN_0c130640(int a4, int a5, int a6, int a7);

int FUN_0c13bca6(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R13;
    register float F0;
    register float F1;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_4);
    v0_5 = (0xC179BF0);
    v0_1 = (0xC179670);
    v0_0 = (v0_0);
    v0_1 = (0x0);
    w0_0 = (10.0f);
    if ((v0_4 == 0)) goto L_C13BCDC;
    if ((v0_2 == 1)) goto L_C13BD90;
    v0_2 = ((FUN_0c03f346(v0_0, v0_3, a6, a7)));
    L_C13BEBE:;
    return v0_2;
    L_C13BD90:;
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C13BE06;
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13BE06;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (v0_1);
    w0_1 = (1.0f);
    L_C13BDFE:;
    if (!(((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v))))) goto L_C13BE06;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    (((struct o90_float *)(v0_3))->v) = ((math_sin_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o98_float *)(v0_3))->v) = ((math_cos_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o9C_uint *)(v0_3))->v) = (short)(int)(((((struct o90_float *)(v0_3))->v)) / w0_0);
    w0_2 = (((struct o98_float *)(v0_3))->v);
    (((struct oA4_uint *)(v0_3))->v) = (short)(int)(w0_2 / w0_0);
    v0_2 = ((v0_2 + 0x1));
    FPUL_ = ((int)(w0_2 / w0_0));
    goto L_C13BDFE;
    L_C13BE06:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - 0.0199999996f);
    v0_2 = (0xB0);
    w0_0 = (0.0f);
    FPUL_ = (0x3CA3D70A);
    if ((((((struct oB0_float *)(v0_0))->v)) > 0.0f)) goto L_C13BE24;
    *(float *)((v0_0 + v0_2)) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    L_C13BE24:;
    v0_5 = (0xC17C110);
    v0_1 = (v0_1);
    w0_0 = (0.100000001f);
    L_C13BE98:;
    if (((int)v0_1 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13BE44;
    FUN_0c13bc42(v0_0);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13BEBE;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_2 = (0x14);
    goto L_C13BEBE;
    L_C13BE44:;
    v0_2 = *(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0));
    math_vec3_accumulate((v0_2 + 0x6C), (0x90 + v0_2));
    *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(v0_2))->v));
    *(float *)(((int)stk + 4)) = (float)((((struct oA0_int *)(v0_2))->v));
    *(float *)(((int)stk + 8)) = (float)((((struct oA4_int *)(v0_2))->v));
    math_vec3_accumulate((0x90 + v0_2), ((int)stk + 0));
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_0);
    w0_1 = (((struct o8C_float *)(v0_2))->v);
    (((struct o88_float *)(v0_2))->v) = w0_1;
    (((struct o84_float *)(v0_2))->v) = w0_1;
    v0_1 = ((v0_1 + 0x1));
    goto L_C13BE98;
    L_C13BCDC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    v0_2 = (v0_1);
    w0_2 = ((1.0f + 1.0f));
    w0_3 = (150.0f);
    w0_1 = (20.0f);
    L_C13BD84:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13BD20;
    *(unsigned short *)((v0_0 + 0x1E)) = 0xA;
    goto L_C13BD90;
    L_C13BD20:;
    v0_3 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    (((struct o6C_float *)(v0_3))->v) = ((math_sin_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_3);
    (((struct o74_float *)(v0_3))->v) = ((math_cos_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_3);
    (((struct o90_float *)(v0_3))->v) = ((math_sin_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o98_float *)(v0_3))->v) = ((math_cos_angle16(((((v0_2 << 8) << 2) << 2) << 1))) * w0_1);
    (((struct o94_float *)(v0_3))->v) = w0_2;
    (((struct o9C_uint *)(v0_3))->v) = (short)(int)(((((struct o90_float *)(v0_3))->v)) / w0_0);
    w0_4 = (((struct o98_float *)(v0_3))->v);
    (((struct oA4_uint *)(v0_3))->v) = (short)(int)(w0_4 / w0_0);
    v0_2 = ((v0_2 + 0x1));
    FPUL_ = ((int)(w0_4 / w0_0));
    goto L_C13BD84;
}

int FUN_0c03379e(int a4, float f4, float f5, float f6)
{
    register int t64;
    register int t66;
    register int t69;
    register int t70;
    register int t75;
    register int t77;
    register int t80;
    register int t81;
    register int t82;

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
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C0337D0;
    if ((v0_1 == 1)) goto L_C0337EE;
    return FUN_0c03f346(v0_0, R5, v0_2, R7);
    L_C0337EE:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0250000004f);
    w0_2 = (-0.0f);
    if ((v0_3 == 0)) goto L_C03382A;
    if ((v0_1 == 1)) goto L_C0338D0;
    if ((v0_1 != 2)) goto L_C03380E;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_1 = (0x74);
    if ((((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > -5.0f)) goto L_C0339CA;
    L_C033998:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    L_C0339CA:;
    return v0_1;
    L_C03380E:;
    if ((v0_1 != 3)) goto L_C033816;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (0x8C);
    if ((((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)) > w0_2)) goto L_C0339CA;
    goto L_C033998;
    L_C033816:;
    if ((v0_1 != 4)) goto L_C03381E;
    v0_2 = *(signed char *)0xC541F41;
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 != 3)) goto L_C033998;
    goto L_C0339CA;
    L_C03381E:;
    if ((v0_1 != 5)) goto L_C033826;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_1 = (0x74);
    if ((0.0f > ((((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0339CA;
    goto L_C033998;
    L_C033826:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_1 = (0x8C);
    if ((w0_2 > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0339CA;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C0339CA;
    L_C0338D0:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0339CA;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_2;
    goto L_C033998;
    L_C03382A:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C03383A;
    goto L_C0339CA;
    L_C03383A:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x31F;
    *(volatile signed char *)((v0_0 + 0x2));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_0, v0_1, v0_2);
    *(volatile signed char *)((t64 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t64, t66);
    (((struct o18_float *)(t69))->v) = 1.0f;
    (((struct o1C_float *)(t69))->v) = 0.5f;
    (((struct o20_float *)(t69))->v) = 0.0f;
    v0_0 = (((struct oC8_int *)(t70))->v);
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    *(unsigned short *)((v0_0 + 0x6)) = 0x31F;
    *(volatile signed char *)((t70 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t70, v0_0);
    *(volatile signed char *)((t75 + 0x2));
    v0_0 = ((int (*)(int, int))(FUN_0c187798))(t75, t77);
    (((struct o18_float *)(t80))->v) = f5;
    (((struct o1C_float *)(t80))->v) = f6;
    (((struct o20_float *)(t80))->v) = f4;
    *(unsigned short *)((t82 + 0x1C)) = t81;
    v0_0 = (t82);
    goto L_C033998;
    L_C0337D0:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0337EE;
}

int FUN_0c1126de(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x2));
            if ((t1 != 3) && (t1 != 2)) {
                t2 = t1;
                if ((t1 != 0) && (t1 != 1)) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104e6a((*(short *)((a4 + 0x1C))), 0x1));
                    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                    t1 = FUN_0c104d70();
                    if (t1 == 0) {
                        t1 = FUN_0c104db8();
                        t3 = t1;
                        if (t1 != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x1;
                            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                            FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            t3 = 0x0;
                        }
                        t1 = t3;
                    } else {
                        FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        t1 = 0x0;
                    }
                    t2 = t1;
                }
                t1 = t2;
            } else {
                t2 = FUN_0c05f22c(0x3FCF);
                t3 = t2;
                if (t2 == 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t3 = 0x14;
                }
                t1 = t3;
            }
            return t1;
        }
        if (t0 == 2) {
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0xA) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                (((struct o14_uchar *)((*(int *)0xC474C18)))->v) = 0x63;
                *(unsigned int *)0xC474C18 = 0x0;
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    t1 = (((struct o22_short *)(a4))->v);
                    if ((*(signed char *)((a4 + 0x2))) == 0) {
                        FUN_0c05a080(0x1C, 0x0);
                        *(unsigned int *)(((t1 << 2) + 0xC473D04)) = ((*(int *)(((t1 << 2) + 0xC473D04))) | 0x20);
                    } else {
                        FUN_0c05a080(0x1D, 0x0);
                        *(unsigned int *)(((t1 << 2) + 0xC473D04)) = ((*(int *)(((t1 << 2) + 0xC473D04))) & 0xFFFFFFDF);
                    }
                    t1 = 0xC473D04;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t1 = 0x14;
                }
                t2 = t1;
            }
            return t2;
        }
        if (t0 == 10) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = t0;
        if (t0 == 99) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B410C;
    switch (t0) {
    case 0:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x10, 0x4, t1);
        t0 = *(int *)0xC4B410C;
        t1 = 0x9;
        if ((*(signed char *)0xC5429A8) == 1) {
            t1 = 0xA;
        }
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), t1, 0x3, t0);
        *(unsigned int *)0xC474C18 = (FUN_0c1126b6());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
        break;
    case 1:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x11, 0x4, t1);
        *(unsigned int *)0xC474C18 = (FUN_0c1126b6());
        *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
        break;
    case 2:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xA, t1);
        break;
    case 3:
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x12, 0x4, t1);
        break;
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 3) && (t0 != 2)) {
        t1 = t0;
        if ((t0 != 0) && (t0 != 1)) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (FUN_0c104e6a((*(short *)((a4 + 0x1C))), 0x1));
            *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
            t0 = FUN_0c104d70();
            if (t0 == 0) {
                t0 = FUN_0c104db8();
                t2 = t0;
                if (t0 != 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    *(unsigned char *)(((*(int *)0xC474C18) + 0x2)) = (*(short *)((a4 + 0x1C)));
                    FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    t2 = 0x0;
                }
                t0 = t2;
            } else {
                FUN_0c1125a0((*(short *)((a4 + 0x1C))));
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c05f22c(0x3FCF);
        t2 = t1;
        if (t1 == 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c130640(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;

    t3 = *(signed char *)((a4 + 0x14));
    t4 = *(int *)((a4 + 0x10));
    if (t3 != 0) {
        if (t3 == 1) {
            t3 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
            if (((int)(short)(t3 - 1) > 0) && ((t0 = *(signed char *)((t4 + 0x3715)), t0 == 26) && (t1 = *(signed char *)((t4 + 0x371C)), t1 != 0))) {
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                if (0.0f > ((((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                    (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                }
                t0 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o20_float *)(t0))->v) = u0;
                (((struct o1C_float *)(t0))->v) = u0;
                return 0x1C;
            }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            if (0x0 == 0) {
                FUN_0c131556((a4 + 0x28), (*(signed char *)((a4 + 0x1))));
            }
            FUN_0c130e70(a4, (a4 + 0x28), 0x4);
            FUN_0c064d24(a4, 0x1, 0x35, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
            return FUN_0c07e2f4(a4, 0x65);
        }
        t0 = *(short *)((a4 + 0x1C));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = t1;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xA) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 + 0x1);
    }
    if ((((((struct o404_int *)(a4))->v)) == 0) && (t2 = *(signed char *)((a4 + 0x131)), t2 == 0)) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = 0x2;
            return 0x14;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0700000003f);
        if (((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.5f) {
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.5f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.150000006f);
        if (((((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = (((struct o18_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    return FUN_0c130e70(a4, (a4 + 0x28), 0x3);
}
