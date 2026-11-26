/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, Stk3, float);
int FUN_0c064d5a(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d0b60(int, int, int, int, int, int, float);
int FUN_0c0e563e(int, int, int);
extern int FUN_0c0e82fc();
int FUN_0c16af78(int, int, int);
int FUN_0c16af86(int, int, int, int);
extern int FUN_0c16afb6();
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c131fac(int a4, int a5, int a6, int a7);
int FUN_0c0e6e78(int a4, int a5, int a6, int a7, float f4);
int FUN_0c16b5a6(int a4, int a5, int a6, int a7, float f4);

/* manual: the loop both branches of FUN_0c131fac run over the five pieces (obj+0xC8..0xD4): each axis of the
   piece's offset (0x0C2A156C - 0x0C2A15B4) times the sine of the frame counter (obj+0x1C, x12 degrees), as a 16-bit
   angle in the piece's words +0x78/+0x7C/+0x80. The original pushes the word's address before each sine call and
   pops it for the store; the generated C rebuilt it from the counter instead and stored at 0x78 + counter. */
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };

static void FUN_0c131fac_spin(int a4)
{
    int i, j, k;
    for (i = 4, j = 0xC; (unsigned int)i < 0x18; i += 4, j += 0xC) {
        float *a = (float *)(0xC2A156C + j), *b = (float *)(0xC2A15B4 + j);
        for (k = 0; k < 3; k++) {
            int p = *(int *)(a4 + 0xC4 + i);
            int w = *(short *)(a4 + 0x1C);
            float d = a[k] - b[k];
            float s = math_sin_angle16(((int)((((float)(w * 12) * 65536.0f) / 360.0f) + 0.5f)) & 0xFFFF);
            *(unsigned int *)(p + 0x78 + 4 * k) = ((int)((((d * s) * 65536.0f) / 360.0f) + 0.5f)) & 0xFFFF;
        }
    }
}

int FUN_0c131fac(int a4, int a5, int a6, int a7)
{
    int t0;
    int t91;
    int t105;
    int t1;
    int t88;
    int t92;
    int t106;
    float u14;
    float u54;
    float u20;
    float u59;
    float u60;
    int t56;
    float u21;
    int t16;
    int t82;
    int t73;
    int t62;
    int t42;
    int t33;
    int t23;
    int t87;
    int t96;
    int t49;
    int t8;
    int t103;
    int t102;
    int t89;
    int t86;
    int t47;
    int t5;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)(a4 + 0x14);
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -0.5f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 0.0f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.333333343f);
                t5 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t5 + 0x1);
                t8 = (short)(t5 + 0x1);
                if ((int)(short)(t5 + 0x1) < (int)0x3D) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    (((struct o7C_uint *)(t0))->v) = 0xE001;
                    *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
                    t8 = 0xD8;
                }
                return t8;
            }
            if (t1 == 3) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -2.74576283f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 5.62711859f);
                u14 = (((struct o74_float *)(t0))->v);
                (((struct o74_float *)(t0))->v) = (u14 + 3.72881365f);
                u20 = (u14 + 3.72881365f);
                FUN_0c131fac_spin(a4);
                t47 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t47 + 0x1);
                t49 = (short)(t47 + 0x1);
                if ((int)(short)(t47 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t49 = 0x14;
                }
                return t49;
            }
            return FUN_0c03f346(a4, a5, 0x0, a7);
        }
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -2.34545445f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + -2.36363626f);
        u54 = (((struct o74_float *)(t0))->v);
        (((struct o74_float *)(t0))->v) = (u54 + 2.0181818f);
        u59 = (u54 + 2.0181818f);
        FUN_0c131fac_spin(a4);
        t86 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t86 + 0x1);
        t96 = (short)(t86 + 0x1);
        if ((int)(short)(t86 + 0x1) >= (int)0x37) {
            t87 = *(signed char *)(a4 + 0x14);
            (((struct o14_uchar *)(a4))->v) = (t87 + 0x1);
            t88 = (t87 + 0x1);
            t91 = 0x4;
            t92 = 0xC;
            for (;;) {
                if ((unsigned int)t91 >= (unsigned int)0x18) {
                    break;
                }
                t89 = (0xC2A14DC + t92);
                t88 = ((*(int *)((((0xC4 + a4) + t91) + 0x0))) + 0x6C);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t88) = *(struct mv3 *)(t89); }
                t89 = (t92 + 0xC2A1524);
                t88 = ((*(int *)((((0xC4 + a4) + t91) + 0x0))) + 0x78);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t88) = *(struct mv3 *)(t89); }
                t91 = (t91 + 0x4);
                t92 = (t92 + 0xC);
            }
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
            t96 = 0xD8;
        }
        return t96;
    }
    (((struct o6C_float *)(t0))->v) = 179.0f;
    (((struct o70_float *)(t0))->v) = 139.0f;
    (((struct o74_float *)(t0))->v) = -99.0f;
    (((struct o7C_uint *)(t0))->v) = 0xDC73;
    t105 = 0x4;
    t106 = 0xC;
    for (;;) {
        if ((unsigned int)t105 >= (unsigned int)0x18) {
            break;
        }
        t103 = (0xC2A14DC + t106);
        t102 = ((*(int *)((((0xC4 + a4) + t105) + 0x0))) + 0x6C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t102) = *(struct mv3 *)(t103); }
        t103 = (t106 + 0xC2A1524);
        t102 = ((*(int *)((((0xC4 + a4) + t105) + 0x0))) + 0x78);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t102) = *(struct mv3 *)(t103); }
        t105 = (t105 + 0x4);
        t106 = (t106 + 0xC);
    }
    *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    return 0x14;
}

int FUN_0c0e6e78(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];

    int v0_0;
    int v0_2;
    int v0_1;
    int v0_10;
    int R1008;
    int v0_3;
    float w0_0;
    int v0_11;
    float w0_1;
    float F2;
    float F3;
    int T_;
    int R3;
    int R2;
    int R1;
    int v0_6;
    int v0_5;
    int FPUL_;
    int v0_7;
    int v0_4;
    int v0_8;
    int v0_9;
    R1008 = *(int *)((int)stk + 8);
    v0_10 = a4;
    v0_8 = a5;
    v0_5 = a6;
    v0_6 = a7;
    w0_0 = f4;
    v0_11 = *(signed char *)(v0_10 + 0x14);
    v0_2 = (v0_11);
    v0_9 = (0xC540978);
    v0_7 = ((0x41C + v0_10));
    v0_1 = (0x0);
    v0_0 = (v0_10);
    v0_3 = (0xC1CC05C);
    v0_4 = (0xC1CC02C);
    if ((v0_11 == 0)) goto L_C0E6EA8;
    if ((v0_2 == 1)) goto L_C0E6F26;
    L_C0E72BE:;
    return v0_2;
    L_C0E6F26:;
    v0_2 = (0xC058310);
    if (((*(int *)(((((*(signed char *)(v0_0 + 0x1B)) << 2) + (0x41C + v0_9)) + 0x0))) != 0)) goto L_C0E6FBC;
    if ((((((struct o10_int *)(v0_0))->v)) == 0)) goto L_C0E6F78;
    v0_2 = (((struct o10_int *)(v0_0))->v);
    R1008 = v0_2;
    math_mat_get_translate(((R1008) + 0x64), (v0_2 + 0x28));
    (((struct oA4_uint *)(((((struct o10_int *)(v0_0))->v))))->v) = v0_1;
    FUN_0c0c2d56(((((struct o10_int *)(v0_0))->v)), 0x2, 0x0);
    v0_2 = (((struct o10_int *)(v0_0))->v);
    R1008 = v0_2;
    FUN_0c0c2ab6((R1008), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(v0_2 + 0x41C)) * (unsigned short)0x34) + 0xC2738CB))));
    (((struct o10_uint *)(v0_0))->v) = v0_1;
    L_C0E6F78:;
    v0_2 = ((FUN_0c03f346(v0_0, v0_8, v0_5, v0_6)));
    goto L_C0E72BE;
    L_C0E6FBC:;
    v0_11 = *(signed char *)(v0_0 + 0x15);
    v0_2 = (v0_11);
    v0_10 = (0xC1CC044);
    if ((v0_11 == 0)) goto L_C0E6FF2;
    if ((v0_2 != 1)) goto L_C0E6FCE;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 10.5f);
    v0_2 = (0x2C);
    w0_0 = (60.0f);
    FPUL_ = (0x41280000);
    if ((60.0f > ((((struct o2C_float *)(v0_0))->v)))) goto L_C0E7154;
    *(float *)((v0_0 + v0_2)) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x4C) = *(struct mv3 *)(v0_10); }
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_2 = (0x15);
    if ((((((struct o10_int *)(v0_0))->v)) != 0)) goto L_C0E710A;
    goto L_C0E72BE;
    L_C0E710A:;
    v0_2 = (0x24);
    if (((*(short *)(v0_7)) == ((((struct o24_short *)(((((struct o10_int *)(v0_0))->v))))->v)))) goto L_C0E711A;
    goto L_C0E72BE;
    L_C0E711A:;
    v0_2 = (((struct o10_int *)(v0_0))->v);
    R1008 = v0_2;
    math_mat_get_translate(((R1008) + 0x64), (v0_2 + 0x28));
    (((struct oA4_uint *)(((((struct o10_int *)(v0_0))->v))))->v) = v0_1;
    FUN_0c0c2d56(((((struct o10_int *)(v0_0))->v)), 0x2, 0x0);
    v0_2 = (((struct o10_int *)(v0_0))->v);
    R1008 = v0_2;
    v0_2 = ((FUN_0c0c2ab6((R1008), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(v0_2 + 0x41C)) * (unsigned short)0x34) + 0xC2738CB))))));
    L_C0E717C:;
    (((struct o10_uint *)(v0_0))->v) = v0_1;
    goto L_C0E72BE;
    L_C0E7154:;
    if ((((((struct o10_int *)(v0_0))->v)) != 0)) goto L_C0E715E;
    goto L_C0E72BE;
    L_C0E715E:;
    v0_2 = (0x24);
    if (((*(short *)(v0_7)) != ((((struct o24_short *)(((((struct o10_int *)(v0_0))->v))))->v)))) goto L_C0E717C;
    (((struct oA4_uint *)(((((struct o10_int *)(v0_0))->v))))->v) = (v0_0 + 0x64);
    (((struct o12E_ushort *)(((((struct o10_int *)(v0_0))->v))))->v) = v0_1;
    v0_2 = (0x12E);
    goto L_C0E72BE;
    L_C0E6FCE:;
    if ((v0_2 != 2)) goto L_C0E6FD6;
    v0_1 = *(signed char *)((0x15 + ((((struct o8C_int *)((((*(signed char *)(v0_0 + 0x2)) << 2) + (0x41C + v0_9))))->v))));
    v0_2 = (v0_1);
    if ((v0_1 == 3)) goto L_C0E719A;
    goto L_C0E72BE;
    L_C0E719A:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x4C) = *(struct mv3 *)(v0_10); }
    (((struct o1C_ushort *)(v0_0))->v) = 0x27;
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 8) + 0x4));
    v0_2 = ((thunk_FUN_0c05abb2(0x49, (((int)stk + 8) + 0x4))));
    goto L_C0E72BE;
    L_C0E6FD6:;
    if ((v0_2 != 3)) goto L_C0E6FDE;
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + 2.10387897f);
    w0_0 = (((struct o30_float *)(v0_0))->v);
    w0_1 = (((struct o54_float *)(v0_0))->v);
    (((struct o30_float *)(v0_0))->v) = (w0_0 + w0_1);
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    w0_0 = ((w0_0 + w0_1));
    FPUL_ = (0x4006A5F4);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E72BE;
    (((struct o54_float *)(v0_0))->v) = -26.666666f;
    (((struct o1C_ushort *)(v0_0))->v) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_2 = ((FUN_0c064d5a(v0_0, v0_3)));
    goto L_C0E72BE;
    L_C0E6FDE:;
    if ((v0_2 != 4)) goto L_C0E6FE6;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E72BE;
    v0_1 = *(signed char *)(v0_0 + 0x2);
    (((struct o30_float *)(v0_0))->v) = ((((struct o8_float *)((v0_4 + (((v0_1 << 1) + v0_1) << 2))))->v));
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_2 = ((FUN_0c064d5a(v0_0, (v0_3 + 0xC))));
    goto L_C0E72BE;
    L_C0E6FE6:;
    if ((v0_2 != 5)) goto L_C0E6FEE;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 5.25f);
    w0_1 = (((struct o2C_float *)(v0_0))->v);
    v0_2 = (0x2C);
    w0_0 = (w0_1);
    FPUL_ = (0x40A80000);
    if ((w0_1 > -150.0f)) goto L_C0E72BE;
    v0_2 = *(signed char *)(v0_0 + 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x28) = *(struct mv3 *)((v0_4 + (((v0_2 << 1) + v0_2) << 2))); }
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_2 = (0x15);
    goto L_C0E72BE;
    L_C0E6FEE:;
    goto L_C0E72BE;
    L_C0E6FF2:;
    v0_3 = *(signed char *)((0x17 + (*(int *)(((0x41C + v0_9) + ((*(signed char *)(v0_0 + 0x1B)) << 2))))));
    v0_2 = (v0_3);
    if ((v0_3 == 1)) goto L_C0E700A;
    goto L_C0E72BE;
    L_C0E700A:;
    v0_3 = *(signed char *)(v0_0 + 0x2);
    v0_2 = (v0_3 + 0x1);
    if ((((v0_3 + 0x1) & (*(signed char *)(((0x18 + (*(int *)(((((*(signed char *)(((0x1B + v0_0) + 0x0))) << 2) + (0x41C + v0_9)) + 0x0)))) + 0x0)))) != 0)) goto L_C0E702C;
    goto L_C0E72BE;
    L_C0E702C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    (((struct o10_uint *)(v0_0))->v) = v0_1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x4C) = *(struct mv3 *)(v0_10); }
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c0e82fc))(v0_0, v0_8, v0_5, v0_6);
    v0_2 = ((int)((int)(nlRand()) % (int)0x3)) != 0;
    if (v0_2) goto L_C0E7068;
    v0_2 = ((FUN_0c0e563e(0x0, 0x3, 0xC1CC050)));
    L_C0E707E:;
    (((struct o10_uint *)(v0_0))->v) = v0_2;
    if ((v0_2 != 0)) goto L_C0E708A;
    goto L_C0E72BE;
    L_C0E708A:;
    (((struct oA4_uint *)(((((struct o10_int *)(v0_0))->v))))->v) = (v0_0 + 0x64);
    (((struct o12E_ushort *)(((((struct o10_int *)(v0_0))->v))))->v) = v0_1;
    *(unsigned short *)(v0_7) = ((((struct o24_short *)(((((struct o10_int *)(v0_0))->v))))->v));
    v0_2 = (0x24);
    goto L_C0E72BE;
    L_C0E7068:;
    v0_2 = ((FUN_0c0d0b60(0x0, 0x3, 0x1, 0xC1CC050, 0xFFFFFFFF, 0xC1CC00C, w0_0)));
    goto L_C0E707E;
    L_C0E6EA8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x14)) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = *(signed char *)(v0_0 + 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x28) = *(struct mv3 *)((v0_4 + (((v0_2 << 1) + v0_2) << 2))); }
    v0_2 = (0x1B);
    v0_8 = (v0_3);
    if (((int)(*(signed char *)(v0_0 + 0x1B)) < 0)) goto L_C0E6EEC;
    (((struct oA4_uint *)(v0_0))->v) = ((*(int *)(((((*(signed char *)((v0_0 + v0_2))) << 2) + (0x41C + v0_9)) + 0x0))) + 0x64);
    L_C0E6EEC:;
    FUN_0c064d5a(v0_0, (v0_8 + 0xC));
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_2 = (v0_1);
    L_C0E6F1E:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0E6F04;
    goto L_C0E6F26;
    L_C0E6F04:;
    v0_10 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    R1008 = v0_10;
    FUN_0c0d04c4(((R1008) + 0x6), (v0_10 + 0x78));
    v0_2 = (v0_2 + 0x1);
    goto L_C0E6F1E;
}

