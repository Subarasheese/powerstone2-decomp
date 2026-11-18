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

int FUN_0c131fac(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register int t8;
    register float u14;
    register int t15;
    register int t17;
    register int t18;
    register int t19;
    register float u20;
    register int t23;
    register int t33;
    register int t42;
    register int t47;
    register int t49;
    register float u54;
    register int t55;
    register int t57;
    register int t58;
    register float u59;
    register int t62;
    register int t73;
    register int t82;
    register int t86;
    register int t96;
    register int t87;
    register int t88;
    register int t91;
    register int t92;
    register int t105;
    register int t106;
    register int t16;
    register float u21;
    register int t56;
    register float u60;
    register int t89;
    register int t102;
    register int t103;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + -0.5f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 0.0f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.333333343f);
                t5 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t5 + 0x1);
                t8 = (short)(t5 + 0x1);
                if ((int)(short)(t5 + 0x1) < (int)0x3D) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
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
                t15 = 0x406EA4E2;
                t17 = 0xC2A1524;
                t18 = 0xC;
                t19 = 0x4;
                u20 = (u14 + 3.72881365f);
                for (;;) {
                    if ((unsigned int)t19 >= (unsigned int)0x18) {
                        break;
                    }
                    t17 = 0xC2A156C;
                    t16 = (*(int *)((((0xC4 + a4) + t19) + 0x0)));
                    t17 = (t17 + t18);
                    *(int *)((int)stk + 0) = (0x78 + t16);
                    *(unsigned int *)(((int)stk + 4)) = (0xC2A15B4 + t18);
                    t23 = *(short *)((a4 + 0x1C));
                    t16 = t23;
                    u21 = ((*(float *)((t17 + 0x0))) - (*(float *)(((0xC2A15B4 + t18) + 0x0))));
                    u20 = (math_sin_angle16(((int)(((((float)(((t23 << 1) + t16) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u21 = (u21 * u20);
                    t15 = (0x78 + t16);
                    u21 = (u21 * 65536.0f);
                    u21 = (u21 / 360.0f);
                    u21 = (u21 + 0.5f);
                    t16 = (int)u21;
                    t16 = (t16 & 0xFFFF);
                    *(unsigned int *)((t15 + 0x0)) = t16;
                    t16 = (*(int *)((((0xC4 + a4) + t19) + 0x0)));
                    *(int *)((int)stk + 0) = (0x7C + t16);
                    t15 = (*(int *)(((int)stk + 4)));
                    t33 = *(short *)((a4 + 0x1C));
                    t16 = t33;
                    u21 = (((((struct o4_float *)(t17))->v)) - ((((struct o4_float *)(t15))->v)));
                    u20 = (math_sin_angle16(((int)(((((float)(((t33 << 1) + t16) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u21 = (u21 * u20);
                    t15 = (0x7C + t16);
                    u21 = (u21 * 65536.0f);
                    u21 = (u21 / 360.0f);
                    u21 = (u21 + 0.5f);
                    t16 = (int)u21;
                    t16 = (t16 & 0xFFFF);
                    *(unsigned int *)((t15 + 0x0)) = t16;
                    t16 = (*(int *)((((0xC4 + a4) + t19) + 0x0)));
                    *(int *)((int)stk + 0) = (0x80 + t16);
                    t15 = (*(int *)(((int)stk + 4)));
                    t42 = *(short *)((a4 + 0x1C));
                    t16 = t42;
                    u21 = (((((struct o8_float *)(t17))->v)) - ((((struct o8_float *)(t15))->v)));
                    u20 = (math_sin_angle16(((int)(((((float)(((t42 << 1) + t16) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                    u21 = (u21 * u20);
                    t15 = (0x80 + t16);
                    t19 = (t19 + 0x4);
                    t18 = (t18 + 0xC);
                    u21 = (u21 * 65536.0f);
                    u21 = (u21 / 360.0f);
                    u21 = (u21 + 0.5f);
                    t16 = (int)u21;
                    t16 = (t16 & 0xFFFF);
                    *(unsigned int *)((t15 + 0x0)) = t16;
                }
                t47 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t47 + 0x1);
                t49 = (short)(t47 + 0x1);
                if ((int)(short)(t47 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
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
        t55 = 0x400129E4;
        t57 = 0xC;
        t58 = 0x4;
        u59 = (u54 + 2.0181818f);
        for (;;) {
            if ((unsigned int)t58 >= (unsigned int)0x18) {
                break;
            }
            t55 = 0xC2A156C;
            t56 = (*(int *)((((0xC4 + a4) + t58) + 0x0)));
            t55 = (t55 + t57);
            *(int *)((int)stk + 0) = (0x78 + t56);
            *(unsigned int *)(((int)stk + 8)) = t55;
            *(unsigned int *)(((int)stk + 4)) = (0xC2A15B4 + t57);
            t62 = *(short *)((a4 + 0x1C));
            t56 = t62;
            u60 = ((*(float *)((t55 + 0x0))) - (*(float *)(((0xC2A15B4 + t57) + 0x0))));
            u59 = (math_sin_angle16(((int)(((((float)(((t62 << 1) + t56) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
            u60 = (u60 * u59);
            t55 = (0x78 + t56);
            u60 = (u60 * 65536.0f);
            u60 = (u60 / 360.0f);
            u60 = (u60 + 0.5f);
            t56 = (int)u60;
            t56 = (t56 & 0xFFFF);
            *(unsigned int *)((t55 + 0x0)) = t56;
            t56 = (*(int *)((((0xC4 + a4) + t58) + 0x0)));
            *(int *)((int)stk + 0) = (0x7C + t56);
            t55 = (*(int *)(((int)stk + 8)));
            t73 = *(short *)((a4 + 0x1C));
            t56 = t73;
            u60 = (((((struct o4_float *)(t55))->v)) - ((((struct o4_float *)((*(int *)(((int)stk + 4)))))->v)));
            u59 = (math_sin_angle16(((int)(((((float)(((t73 << 1) + t56) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
            u60 = (u60 * u59);
            t55 = (0x7C + t56);
            u60 = (u60 * 65536.0f);
            u60 = (u60 / 360.0f);
            u60 = (u60 + 0.5f);
            t56 = (int)u60;
            t56 = (t56 & 0xFFFF);
            *(unsigned int *)((t55 + 0x0)) = t56;
            t56 = (*(int *)((((0xC4 + a4) + t58) + 0x0)));
            *(int *)((int)stk + 0) = (0x80 + t56);
            t55 = (*(int *)(((int)stk + 8)));
            t82 = *(short *)((a4 + 0x1C));
            t56 = t82;
            u60 = (((((struct o8_float *)(t55))->v)) - ((((struct o8_float *)((*(int *)(((int)stk + 4)))))->v)));
            u59 = (math_sin_angle16(((int)(((((float)(((t82 << 1) + t56) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
            u60 = (u60 * u59);
            t55 = (0x80 + t56);
            t58 = (t58 + 0x4);
            t57 = (t57 + 0xC);
            u60 = (u60 * 65536.0f);
            u60 = (u60 / 360.0f);
            u60 = (u60 + 0.5f);
            t56 = (int)u60;
            t56 = (t56 & 0xFFFF);
            *(unsigned int *)((t55 + 0x0)) = t56;
        }
        t86 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t86 + 0x1);
        t96 = (short)(t86 + 0x1);
        if ((int)(short)(t86 + 0x1) >= (int)0x37) {
            t87 = *(signed char *)((a4 + 0x14));
            (((struct o14_uchar *)(a4))->v) = (t87 + 0x1);
            t88 = (t87 + 0x1);
            t91 = 0x4;
            t92 = 0xC;
            for (;;) {
                if ((unsigned int)t91 >= (unsigned int)0x18) {
                    break;
                }
                t88 = 0xC4;
                t89 = 0xC2A14DC;
                t88 = (t88 + a4);
                t88 = (t88 + t91);
                t88 = (*(int *)((t88 + 0x0)));
                t89 = (t89 + t92);
                t88 = (t88 + 0x6C);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t88) = *(struct mv3 *)(t89); }
                t88 = 0xC4;
                t89 = t92;
                t89 = (t89 + 0xC2A1524);
                t88 = (t88 + a4);
                t88 = (t88 + t91);
                t88 = (*(int *)((t88 + 0x0)));
                t88 = (t88 + 0x78);
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
        t102 = 0xC4;
        t103 = 0xC2A14DC;
        t102 = (t102 + a4);
        t102 = (t102 + t105);
        t102 = (*(int *)((t102 + 0x0)));
        t103 = (t103 + t106);
        t102 = (t102 + 0x6C);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t102) = *(struct mv3 *)(t103); }
        t102 = 0xC4;
        t103 = t106;
        t103 = (t103 + 0xC2A1524);
        t102 = (t102 + a4);
        t102 = (t102 + t105);
        t102 = (*(int *)((t102 + 0x0)));
        t102 = (t102 + 0x78);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t102) = *(struct mv3 *)(t103); }
        t105 = (t105 + 0x4);
        t106 = (t106 + 0xC);
    }
    *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0e6e78(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_10 = a4;
    v0_8 = a5;
    v0_5 = a6;
    v0_6 = a7;
    w0_0 = f4;
    v0_11 = *(signed char *)((v0_10 + 0x14));
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
    if (((*(int *)(((((*(signed char *)((v0_0 + 0x1B))) << 2) + (0x41C + v0_9)) + 0x0))) != 0)) goto L_C0E6FBC;
    if (((*(int *)((v0_0 + 0x10))) == 0)) goto L_C0E6F78;
    v0_2 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    math_mat_get_translate(((*(int *)(((int)stk + 8))) + 0x64), (v0_2 + 0x28));
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    FUN_0c0c2d56((*(int *)((v0_0 + 0x10))), 0x2, 0x0);
    v0_2 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    FUN_0c0c2ab6((*(int *)(((int)stk + 8))), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    L_C0E6F78:;
    v0_2 = ((FUN_0c03f346(v0_0, v0_8, v0_5, v0_6)));
    goto L_C0E72BE;
    L_C0E6FBC:;
    v0_11 = *(signed char *)((v0_0 + 0x15));
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
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(v0_10); }
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    if (((*(int *)((v0_0 + 0x10))) != 0)) goto L_C0E710A;
    goto L_C0E72BE;
    L_C0E710A:;
    v0_2 = (0x24);
    if (((*(short *)((v0_7 + 0x0))) == ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C0E711A;
    goto L_C0E72BE;
    L_C0E711A:;
    v0_2 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    math_mat_get_translate(((*(int *)(((int)stk + 8))) + 0x64), (v0_2 + 0x28));
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    FUN_0c0c2d56((*(int *)((v0_0 + 0x10))), 0x2, 0x0);
    v0_2 = *(int *)((v0_0 + 0x10));
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_2 = ((FUN_0c0c2ab6((*(int *)(((int)stk + 8))), (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))))));
    L_C0E717C:;
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    goto L_C0E72BE;
    L_C0E7154:;
    if (((*(int *)((v0_0 + 0x10))) != 0)) goto L_C0E715E;
    goto L_C0E72BE;
    L_C0E715E:;
    v0_2 = (0x24);
    if (((*(short *)((v0_7 + 0x0))) != ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C0E717C;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = (v0_0 + 0x64);
    (((struct o12E_ushort *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    v0_2 = (0x12E);
    goto L_C0E72BE;
    L_C0E6FCE:;
    if ((v0_2 != 2)) goto L_C0E6FD6;
    v0_1 = *(signed char *)((0x15 + ((((struct o8C_int *)((((*(signed char *)((v0_0 + 0x2))) << 2) + (0x41C + v0_9))))->v))));
    v0_2 = (v0_1);
    if ((v0_1 == 3)) goto L_C0E719A;
    goto L_C0E72BE;
    L_C0E719A:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(v0_10); }
    *(unsigned short *)((v0_0 + 0x1C)) = 0x27;
    math_mat_get_translate((v0_0 + 0x64), (((int)stk + 8) + 0x4));
    v0_2 = ((thunk_FUN_0c05abb2(0x49, (((int)stk + 8) + 0x4))));
    goto L_C0E72BE;
    L_C0E6FD6:;
    if ((v0_2 != 3)) goto L_C0E6FDE;
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + 2.10387897f);
    w0_0 = (((struct o30_float *)(v0_0))->v);
    w0_1 = (((struct o54_float *)(v0_0))->v);
    (((struct o30_float *)(v0_0))->v) = (w0_0 + w0_1);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    w0_0 = ((w0_0 + w0_1));
    FPUL_ = (0x4006A5F4);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E72BE;
    (((struct o54_float *)(v0_0))->v) = -26.666666f;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = ((FUN_0c064d5a(v0_0, v0_3)));
    goto L_C0E72BE;
    L_C0E6FDE:;
    if ((v0_2 != 4)) goto L_C0E6FE6;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E72BE;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    (((struct o30_float *)(v0_0))->v) = ((((struct o8_float *)((v0_4 + (((v0_1 << 1) + v0_1) << 2))))->v));
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
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
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((v0_4 + (((v0_2 << 1) + v0_2) << 2))); }
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_2 = (0x15);
    goto L_C0E72BE;
    L_C0E6FEE:;
    goto L_C0E72BE;
    L_C0E6FF2:;
    v0_3 = *(signed char *)((0x17 + (*(int *)(((0x41C + v0_9) + ((*(signed char *)((v0_0 + 0x1B))) << 2))))));
    v0_2 = (v0_3);
    if ((v0_3 == 1)) goto L_C0E700A;
    goto L_C0E72BE;
    L_C0E700A:;
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_2 = ((v0_3 + 0x1));
    if ((((v0_3 + 0x1) & (*(signed char *)(((0x18 + (*(int *)(((((*(signed char *)(((0x1B + v0_0) + 0x0))) << 2) + (0x41C + v0_9)) + 0x0)))) + 0x0)))) != 0)) goto L_C0E702C;
    goto L_C0E72BE;
    L_C0E702C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned int *)((v0_0 + 0x10)) = v0_1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(v0_10); }
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c0e82fc))(v0_0, v0_8, v0_5, v0_6);
    v0_2 = ((int)((int)(nlRand()) % (int)0x3)) != 0;
    if (v0_2) goto L_C0E7068;
    v0_2 = ((FUN_0c0e563e(0x0, 0x3, 0xC1CC050)));
    L_C0E707E:;
    *(unsigned int *)((v0_0 + 0x10)) = v0_2;
    if ((v0_2 != 0)) goto L_C0E708A;
    goto L_C0E72BE;
    L_C0E708A:;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x10)))))->v) = (v0_0 + 0x64);
    (((struct o12E_ushort *)((*(int *)((v0_0 + 0x10)))))->v) = v0_1;
    *(unsigned short *)((v0_7 + 0x0)) = ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v));
    v0_2 = (0x24);
    goto L_C0E72BE;
    L_C0E7068:;
    *(int *)((int)stk + 4) = 0xC1CC00C;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    v0_2 = ((FUN_0c0d0b60(0x0, 0x3, 0x1, 0xC1CC050, 0xFFFFFFFF, 0xC1CC00C, w0_0)));
    goto L_C0E707E;
    L_C0E6EA8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((v0_4 + (((v0_2 << 1) + v0_2) << 2))); }
    v0_2 = (0x1B);
    v0_8 = (v0_3);
    if (((int)(*(signed char *)((v0_0 + 0x1B))) < 0)) goto L_C0E6EEC;
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
    *(unsigned int *)(((int)stk + 8)) = v0_10;
    FUN_0c0d04c4(((*(int *)(((int)stk + 8))) + 0x6), (v0_10 + 0x78));
    v0_2 = ((v0_2 + 0x1));
    goto L_C0E6F1E;
}

int FUN_0c16b5a6(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t6;
    register int t8;
    register int t10;
    register int t12;
    register int t13;
    register int t14;
    register int t16;
    register int t18;
    register int t19;
    register int t26;
    register int t28;
    register float u29;
    register int t30;
    register int t31;
    register int t33;
    register int t43;
    register float u44;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t52;
    register int t54;
    register int t56;
    register int t58;
    register int t77;
    register int t81;
    register int t83;
    register float u86;
    register int t88;
    register float u89;
    register int t90;
    register int t92;
    register int t94;
    register int t96;
    register int t98;
    register int t100;
    register int t111;
    register int t159;
    register int t163;
    register int t165;
    register float u168;
    register int t170;
    register float u171;
    register int t172;
    register int t174;
    register int t176;
    register int t178;
    register int t180;
    register int t182;
    register int t193;
    register int t212;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                if ((*(signed char *)((a4 + 0x15))) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    t6 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t6 + 0x6)) = ((*(short *)((t6 + 0x6))) | 0x210);
                    t8 = (((struct oD0_int *)(a4))->v);
                    *(unsigned short *)((t8 + 0x6)) = ((*(short *)((t8 + 0x6))) | 0x210);
                    t10 = (((struct oD4_int *)(a4))->v);
                    *(unsigned short *)((t10 + 0x6)) = ((*(short *)((t10 + 0x6))) | 0x210);
                    t12 = (((struct oD4_int *)(a4))->v);
                    (((struct o8C_float *)(t12))->v) = 1.0f;
                    (((struct o88_float *)(t12))->v) = 1.0f;
                    (((struct o84_float *)(t12))->v) = 1.0f;
                    t13 = *(int *)(((0xC4 + a4) + 0x8));
                    t14 = *(int *)(((0xC4 + a4) + 0x10));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x84)) = *(struct mv3 *)((t14 + 0x84)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t13)) = *(struct mv3 *)((t14 + 0x84)); }
                    t16 = (((struct oD4_int *)(a4))->v);
                    (((struct o20_float *)(t16))->v) = 1.0f;
                    (((struct o1C_float *)(t16))->v) = 1.0f;
                    (((struct o18_float *)(t16))->v) = 1.0f;
                    t18 = *(int *)(((0xC4 + a4) + 0x10));
                    t19 = *(int *)(((0xC4 + a4) + 0x8));
                    { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x14)) = *(struct mv4 *)((t18 + 0x14)); }
                    { struct mv4 { int w[4]; }; *(struct mv4 *)((t19 + 0x14)) = *(struct mv4 *)((t18 + 0x14)); }
                }
                t26 = (((struct oD4_int *)(a4))->v);
                (((struct o8C_float *)(t26))->v) = (((((struct o8C_float *)(t26))->v)) + 1.0f);
                t28 = (((struct oD4_int *)(a4))->v);
                u29 = (((struct o8C_float *)(t28))->v);
                (((struct o88_float *)(t28))->v) = u29;
                (((struct o84_float *)(t28))->v) = u29;
                t30 = *(int *)(((0xC4 + a4) + 0x8));
                t31 = *(int *)(((0xC4 + a4) + 0x10));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x84)) = *(struct mv3 *)((t31 + 0x84)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t30)) = *(struct mv3 *)((t31 + 0x84)); }
                t33 = (((struct oD4_int *)(a4))->v);
                (((struct o20_float *)(t33))->v) = (((((struct o20_float *)(t33))->v)) - 0.200000003f);
                if (!(((((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 0.0f)) {
                    (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t43 = (((struct oD4_int *)(a4))->v);
                u44 = (((struct o20_float *)(t43))->v);
                (((struct o1C_float *)(t43))->v) = u44;
                (((struct o18_float *)(t43))->v) = u44;
                t46 = *(int *)(((0xC4 + a4) + 0x10));
                t47 = *(int *)(((0xC4 + a4) + 0x8));
                { struct mv4 { int w[4]; }; *(struct mv4 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x14)) = *(struct mv4 *)((t46 + 0x14)); }
                { struct mv4 { int w[4]; }; *(struct mv4 *)((t47 + 0x14)) = *(struct mv4 *)((t46 + 0x14)); }
                t48 = (((struct oCC_int *)(a4))->v);
                (((struct o78_uint *)(t48))->v) = (((((struct o78_int *)(t48))->v)) + 0x71C);
                t50 = (((struct oCC_int *)(a4))->v);
                (((struct o7C_uint *)(t50))->v) = (((((struct o7C_int *)(t50))->v)) + 0x1C71);
                t52 = (((struct oD0_int *)(a4))->v);
                (((struct o78_uint *)(t52))->v) = (((((struct o78_int *)(t52))->v)) + 0x71C);
                t54 = (((struct oD0_int *)(a4))->v);
                (((struct o7C_uint *)(t54))->v) = (((((struct o7C_int *)(t54))->v)) + 0x1C71);
                t56 = (((struct oD4_int *)(a4))->v);
                (((struct o78_uint *)(t56))->v) = (((((struct o78_int *)(t56))->v)) + 0x71C);
                t58 = (((struct oD4_int *)(a4))->v);
                (((struct o7C_uint *)(t58))->v) = (((((struct o7C_int *)(t58))->v)) + 0x1C71);
                t212 = 0x7C;
            } else {
                t212 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
            }
            t77 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t77 - 1);
            if ((int)(short)(t77 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            t81 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t81))->v) = (((((struct o7C_int *)(t81))->v)) - 0x1555);
            t83 = (((struct oC8_int *)(a4))->v);
            u86 = 1.5f;
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                u86 = 1.0f;
            }
            (((struct o84_float *)(t83))->v) = u86;
            t88 = (((struct oC8_int *)(a4))->v);
            u89 = (((struct o84_float *)(t88))->v);
            (((struct o8C_float *)(t88))->v) = u89;
            (((struct o88_float *)(t88))->v) = u89;
            t90 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t90))->v) = (((((struct o78_int *)(t90))->v)) + 0x71C);
            t92 = (((struct oCC_int *)(a4))->v);
            (((struct o7C_uint *)(t92))->v) = (((((struct o7C_int *)(t92))->v)) + 0x1C71);
            t94 = (((struct oD0_int *)(a4))->v);
            (((struct o78_uint *)(t94))->v) = (((((struct o78_int *)(t94))->v)) + 0x71C);
            t96 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t96))->v) = (((((struct o7C_int *)(t96))->v)) + 0x1C71);
            t98 = (((struct oD4_int *)(a4))->v);
            (((struct o78_uint *)(t98))->v) = (((((struct o78_int *)(t98))->v)) + 0x71C);
            t100 = (((struct oD4_int *)(a4))->v);
            (((struct o7C_uint *)(t100))->v) = (((((struct o7C_int *)(t100))->v)) + 0x1C71);
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((((int (*)(int, float))(FUN_0c16afb6))(a4, f4)) * 0x3938) + 0xC5324C0)); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
            FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, *(Stk3 *)(((int)stk + 0)), 10.0f);
            t111 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
            if (t111 != 0) {
                FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t212 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 1.5f;
        (((struct o44_float *)(a4))->v) = 1.5f;
        (((struct o40_float *)(a4))->v) = 1.5f;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((((((struct oD4_int *)(a4))->v)) + 0x6)) = 0xF;
        FUN_0c16af78(a4, 0x2, 0x2);
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        t159 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t159 - 1);
        if ((int)(short)(t159 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t163 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t163))->v) = (((((struct o7C_int *)(t163))->v)) - 0x1555);
        t165 = (((struct oC8_int *)(a4))->v);
        u168 = 1.5f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            u168 = 1.0f;
        }
        (((struct o84_float *)(t165))->v) = u168;
        t170 = (((struct oC8_int *)(a4))->v);
        u171 = (((struct o84_float *)(t170))->v);
        (((struct o8C_float *)(t170))->v) = u171;
        (((struct o88_float *)(t170))->v) = u171;
        t172 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t172))->v) = (((((struct o78_int *)(t172))->v)) + 0x71C);
        t174 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t174))->v) = (((((struct o7C_int *)(t174))->v)) + 0x1C71);
        t176 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t176))->v) = (((((struct o78_int *)(t176))->v)) + 0x71C);
        t178 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t178))->v) = (((((struct o7C_int *)(t178))->v)) + 0x1C71);
        t180 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t180))->v) = (((((struct o78_int *)(t180))->v)) + 0x71C);
        t182 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t182))->v) = (((((struct o7C_int *)(t182))->v)) + 0x1C71);
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 13) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((((int (*)(int))(FUN_0c16afb6))(a4)) * 0x3938) + 0xC5324C0)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        FUN_0c0585a8(a4, ((int)stk + 0), 0x2D8, *(Stk3 *)(((int)stk + 0)), 10.0f);
        t193 = FUN_0c16af86(a4, 0x2, 0x2, 0x4);
        if (t193 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t212 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t212;
}
