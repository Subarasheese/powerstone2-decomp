/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c07c19c(int);
int FUN_0c07e420(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0dfb68(int);
int FUN_0c166fac(int, int, int, int);
int FUN_0c167e80(int, int, int);
int FUN_0c169f4a(int, int, int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c7d5a(int a4);
int FUN_0c169bda(int a4, int a5, int a6, int a7);
int FUN_0c0dc598(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0dfdec(int a4, int a5, int a6, int a7);

int FUN_0c0c7d5a(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register float t10;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u18;
    register float u19;
    register float u20;
    register float u26;
    register float u28;
    register float t30;
    register float u31;
    register float u33;
    register float u34;
    register float t47;
    register float u49;
    register float u50;
    register float u51;
    register float t53;
    register float u55;
    register float u56;
    register float u57;
    register float u62;
    register float u64;
    register float t66;
    register float u67;
    register float u69;
    register float u70;
    register int t83;
    register int t8;
    register float u21;
    register float u22;
    register int t45;
    register float u58;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        t83 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
    } else {
        t5 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t5 != 41) {
            if ((unsigned char)t5 != 42) {
            } else {
                FUN_0c187798(0x31C);
                if ((unsigned short)((((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == t8) {
                    t10 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u12 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u13 = (t10 * u12);
                    u14 = (*(float *)(((int)stk + 0)));
                    u14 = u14 + 155.0f * u13;
                    *(float *)(((int)stk + 0)) = u14;
                    u21 = 122.0f;
                    u22 = 155.0f;
                } else {
                    t16 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u18 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u19 = (t16 * u18);
                    u20 = (*(float *)(((int)stk + 0)));
                    u20 = u20 + 159.0f * u19;
                    *(float *)(((int)stk + 0)) = u20;
                    u21 = 129.0f;
                    u22 = 159.0f;
                }
                u26 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u28 = (*(float *)(((int)stk + 4)));
                u28 = u28 + u21 * u26;
                *(float *)(((int)stk + 4)) = u28;
                t30 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u31 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u33 = (t30 * u31);
                u34 = (*(float *)(((int)stk + 8)));
                u34 = u34 + u22 * u33;
                *(float *)(((int)stk + 8)) = u34;
                FUN_0c167e80((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34));
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x69);
            }
        } else {
            FUN_0c187798(0x31C);
            if ((unsigned short)((((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == t45) {
                t47 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u49 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u50 = (t47 * u49);
                u51 = (*(float *)(((int)stk + 0)));
                u51 = u51 + 119.0f * u50;
                *(float *)(((int)stk + 0)) = u51;
                u58 = 122.0f;
            } else {
                t53 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u55 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u56 = (t53 * u55);
                u57 = (*(float *)(((int)stk + 0)));
                u57 = u57 + 119.0f * u56;
                *(float *)(((int)stk + 0)) = u57;
                u58 = 129.0f;
            }
            u62 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
            u64 = (*(float *)(((int)stk + 4)));
            u64 = u64 + u58 * u62;
            *(float *)(((int)stk + 4)) = u64;
            t66 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
            u67 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
            u69 = (t66 * u67);
            u70 = (*(float *)(((int)stk + 8)));
            u70 = u70 + 119.0f * u69;
            *(float *)(((int)stk + 8)) = u70;
            FUN_0c166fac((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), (*(signed char *)((a4 + 0x41F))));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x63);
        }
        FUN_0c0c213c(a4);
        FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t83 = 0x376C;
    }
    return t83;
}

int FUN_0c169bda(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R12;
    register int R13;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_5 = a7;
    v0_6 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_6);
    v0_1 = (v0_0);
    v0_0 = (0xB4);
    if ((v0_6 == 0)) goto L_C169BFA;
    if ((v0_2 == 1)) goto L_C169C0C;
    v0_2 = ((FUN_0c03f346(v0_1, v0_3, v0_4, v0_5)));
    L_C169D92:;
    return v0_2;
    L_C169C0C:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C169C1E;
    (((struct o14_uchar *)(v0_1))->v) = 0x63;
    L_C169C1E:;
    v0_3 = *(signed char *)((v0_1 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (1.0f);
    w0_1 = (0.100000001f);
    if ((v0_3 == 0)) goto L_C169C60;
    if ((v0_2 == 1)) goto L_C169C98;
    if (!((v0_2 == 2))) goto L_C169D10;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) - 0.0500000007f);
    w0_0 = (((struct o8C_float *)(((((struct oC4_int *)(v0_1))->v))))->v);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    FPUL_ = (0x3D4CCCCD);
    if ((w0_0 > 0.0f)) goto L_C169D00;
    (((struct o8C_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = w0_1;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    goto L_C169D00;
    L_C169D10:;
    v0_2 = (0x15);
    if (((int)(*(signed char *)((v0_1 + 0x15))) < (int)0x1)) goto L_C169D92;
    v0_3 = *(short *)((v0_1 + 0x1E));
    *(unsigned short *)((v0_1 + 0x1E)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C169D92;
    *(unsigned short *)((v0_1 + 0x1E)) = v0_0;
    *(float *)(((int)stk + 0)) = ((((((struct o28_float *)(v0_1))->v)) + (float)((int)((int)(FUN_0c179ac0()) % (int)0x33))) + -50.0f);
    *(float *)(((int)stk + 4)) = ((((((struct o2C_float *)(v0_1))->v)) + (float)((int)((int)(FUN_0c179ac0()) % (int)0x33))) + -50.0f);
    *(float *)(((int)stk + 8)) = ((((((struct o30_float *)(v0_1))->v)) + (float)((int)((int)(FUN_0c179ac0()) % (int)0x33))) + -50.0f);
    v0_2 = ((FUN_0c169f4a(v0_1, 0x0, ((int)stk + 0))));
    goto L_C169D92;
    L_C169D00:;
    v0_3 = (((struct oC4_int *)(v0_1))->v);
    w0_0 = (((struct o8C_float *)(v0_3))->v);
    (((struct o88_float *)(v0_3))->v) = w0_0;
    v0_2 = (0x84);
    v0_3 = (v0_3);
    w0_0 = (w0_0);
    L_C169D0E:;
    *(float *)((v0_3 + v0_2)) = w0_0;
    goto L_C169D10;
    L_C169C98:;
    v0_2 = (((struct oC8_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_1);
    if ((w0_0 > ((((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v)))) goto L_C169CC0;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    L_C169CC0:;
    v0_3 = (((struct oC8_int *)(v0_1))->v);
    w0_0 = (((struct o8C_float *)(v0_3))->v);
    (((struct o88_float *)(v0_3))->v) = w0_0;
    v0_2 = (0x84);
    v0_3 = (v0_3);
    w0_0 = (w0_0);
    goto L_C169D0E;
    L_C169C60:;
    v0_2 = (((struct oC4_int *)(v0_1))->v);
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_1);
    if ((w0_0 > ((((struct o8C_float *)(((((struct oC4_int *)(v0_1))->v))))->v)))) goto L_C169C88;
    (((struct o8C_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    L_C169C88:;
    v0_3 = (((struct oC4_int *)(v0_1))->v);
    w0_0 = (((struct o8C_float *)(v0_3))->v);
    (((struct o88_float *)(v0_3))->v) = w0_0;
    v0_2 = (0x84);
    v0_3 = (v0_3);
    w0_0 = (w0_0);
    goto L_C169D0E;
    L_C169BFA:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    *(unsigned short *)((v0_1 + 0x1E)) = 0x0;
    goto L_C169C0C;
}

int FUN_0c0dc598(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFC000;
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x49, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1F;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x8000;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t4 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        t4 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        t4 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t4))->v) = 1.0f;
        (((struct o88_float *)(t4))->v) = 1.0f;
        (((struct o84_float *)(t4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(volatile int *)((a4 + 0xC4));
    *(volatile short *)((a4 + 0x1C));
    t4 = ((int (*)(int))(FUN_0c187798))(0xC540978);
    t4 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) - 0.0f);
    t4 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t4))->v) = (((((struct o7C_int *)(t4))->v)) + 0xB6);
    *(volatile int *)((a4 + 0xC8));
    *(volatile short *)((a4 + 0x1C));
    t4 = ((int (*)(int, int))(FUN_0c187798))(t0, 0xB6);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1000.0f);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + t1);
    *(volatile int *)((a4 + 0xCC));
    *(volatile short *)((a4 + 0x1C));
    t0 = ((int (*)(int, int))(FUN_0c187798))(t2, t1);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 2000.0f);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + t3);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 & 0x3);
    return (t0 & 0x3);
}

int FUN_0c0dfdec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o16_uchar *)(a4))->v) = 0xFFFFFFFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 750.0f);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        FUN_0c07e420(a4, 0x9);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0xC4 + a4));
            t0 = (*(int *)((t0 + 0x0)));
            FUN_0c0d04c4((t0 + 0x6), (t0 + 0x78));
            t1 = (t1 + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 75.0f);
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t0 = *(short *)((a4 + 0x1C));
                    t1 = t0;
                    if ((int)t0 <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                }
                return t1;
            }
            t0 = FUN_0c0dfb68(a4);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                thunk_FUN_0c05abb2(0x47, (a4 + 0x28));
                return FUN_0c07c19c(0xF);
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 8.33333302f);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = FUN_0c0dfb68(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
            *(unsigned short *)((a4 + 0x1C)) = (int)(((float)((-(*(short *)((a4 + 0x1C)))) + 0x5A) / 90.0f) * 10.0f);
            thunk_FUN_0c05abb2(0x47, (a4 + 0x28));
            return FUN_0c07c19c(0xF);
        }
        return t0;
    }
    if (!(3600.0f > ((((struct o28_float *)((*(int *)0xC540D94)))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x5A;
        return thunk_FUN_0c05abb2(0x46, (a4 + 0x28));
    }
    return 0x28;
}
