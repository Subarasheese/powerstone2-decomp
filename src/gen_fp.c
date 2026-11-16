/* Straight-line functions with calls and guards (batch gen_fp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o114_int { char p[0x114]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2EC_short { char p[0x2EC]; short v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3832_short { char p[0x3832]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o425_uchar { char p[0x425]; unsigned char v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_uchar { char p[0x84]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA6_uchar { char p[0xA6]; unsigned char v; };
struct oA8_float { char p[0xA8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c01cc56(int, int);
int FUN_0c02b3ba(float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b50c(float);
int FUN_0c0379f4(int, int, int);
int FUN_0c037a3c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05aaf6(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c081dfc(int);
int FUN_0c081ee8(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0bb6ac(int);
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int);
int FUN_0c0bb994(int);
int FUN_0c0bc25e(void);
int FUN_0c0c241a(int);
int FUN_0c0c2c30(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0c3258(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c158824(int);
int FUN_0c17c130(int, int, int);
extern int FUN_0c18778c();
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int thunk_FUN_0c03f346();
int thunk_FUN_0c05abb2(int, int);
int FUN_0c037bf6(int a4, int a5, int a6);
int FUN_0c0c2d56(int a4, int a5, int a6, int a7);
int FUN_0c1589d6(int a4, int a5, int a6, float f4);
int FUN_0c082032(int a4, int a5);
int FUN_0c0c14a6(int a4, float f4);
int FUN_0c0ea298(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c0f71b8(int a4);
int FUN_0c0f99bc(int a4);
int FUN_0c01c004(int a4, int a5, int a6, int a7);

int FUN_0c037bf6(int a4, int a5, int a6)
{
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t131;
    register int t134;
    register float u135;
    register float u136;
    register int t52;
    register int t59;
    register int t61;
    register int t76;
    register int t79;
    register int t0;
    int t1;
    register int t7;
    register int t8;
    register int t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register int t133;
    register float u128;
    register float u129;
    int t83;
    register float u121;
    register float u122;
    int t96;
    register float u114;
    register float u115;
    register int t146;
    register int t148;
    register int t149;
    register int t150;
    register int t151;
    register float u152;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = 0x0;
    t6 = 0x0;
    for (;;) {
        if ((int)t5 < (int)((((struct o114_int *)(a4))->v))) {
            t1 = 0x118;
            t9 = t5;
            t9 = (t9 << 2);
            t1 = (t1 + a4);
            t9 = (t9 + t1);
            t9 = (*(int *)((t9 + 0x0)));
            t1 = (*(signed char *)(((t9 + 0x7E) + 0x0)));
            if ((int)t1 < 0) {
                t2 = 0xC4B4524;
                t8 = (*(int *)((t2 + 0x0)));
                t2 = 0xC4C0568;
                t7 = (*(int *)((t2 + 0x0)));
            } else {
                t2 = t9;
                t2 = (t2 + 0x7E);
                t2 = (*(signed char *)((t2 + 0x0)));
                t3 = 0xC4B4528;
                t2 = (t2 << 2);
                t8 = (*(int *)((t3 + t2)));
                t3 = 0xC4C0558;
                t7 = (*(int *)((t3 + t2)));
            }
            u12 = ((((struct o90_float *)(t9))->v));
            for (;;) {
                u14 = 1.0f;
                if (u12 > u14) {
                    u13 = u14;
                } else {
                    u13 = u12;
                }
                t1 = t9;
                t2 = t9;
                t2 = (t2 + 0x74);
                u11 = ((((struct o8C_float *)(t9))->v));
                t1 = (t1 + 0x78);
                t2 = (*(short *)((t2 + 0x0)));
                u12 = (u12 - u14);
                u11 = (u11 + u13);
                t3 = (*(int *)((t8 + 0x4)));
                t2 = (t2 + (*(short *)((t1 + 0x0))));
                t4 = t2;
                t2 = (t2 - 1);
                (((struct o8C_float *)(t9))->v) = u11;
                u10 = ((((struct o94_float *)(t9))->v));
                t4 = (t4 << 2);
                u11 = 0.0f;
                t4 = (t4 << 1);
                u10 = (u10 - u13);
                t2 = (t2 << 2);
                t2 = (t2 << 1);
                t4 = (t4 + t3);
                (((struct o94_float *)(t9))->v) = u10;
                u10 = ((((struct o94_float *)(t9))->v));
                t2 = (t2 + t3);
                t131 = t0;
                t134 = t4;
                u135 = u10;
                u136 = u11;
                if (u10 > u11) {
                    t133 = t3;
                } else {
                    t3 = 0x80;
                    if (((unsigned char)(*(signed char *)((t4 + 0x5))) & t3) != 0) {
                        t2 = t9;
                        t2 = (t2 + 0x74);
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        t3 = t9;
                        *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                        t2 = t9;
                        t2 = (t2 + 0x78);
                        *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                        t52 = *(int *)((t4 + 0x0));
                        t4 = t9;
                        t4 = (t4 + 0x74);
                        *(unsigned short *)((t1 + 0x0)) = t52;
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        t4 = (*(short *)((t4 + 0x0)));
                        u10 = ((((struct o94_float *)(t9))->v));
                        t4 = (t4 + (*(short *)((t1 + 0x0))));
                        t2 = (*(int *)((t8 + 0x4)));
                        t4 = (t4 << 2);
                        u10 = (-u10);
                        t4 = (t4 << 1);
                        (((struct o8C_float *)(t9))->v) = u10;
                        t4 = (t4 + t2);
                        t2 = t8;
                        t59 = FUN_0c0379f4(t2, t3, t4);
                        t2 = 0x0;
                        for (;;) {
                            t1 = t9;
                            t1 = (t1 + 0x78);
                            if ((int)t2 >= (int)(*(short *)((t1 + 0x0)))) {
                                break;
                            }
                            t1 = t9;
                            t1 = (t1 + 0x74);
                            t61 = *(short *)((t1 + 0x0));
                            t1 = (*(int *)((t8 + 0x4)));
                            t0 = 0x8C;
                            t59 = (*(signed char *)((((((t61 + t2) << 2) << 1) + t1) + 0x4)));
                            t0 = (t0 + t9);
                            u10 = (*(float *)((t0 + 0x0)));
                            t2 = (t2 + 0x1);
                            t1 = (unsigned char)t59;
                            u11 = (float)t1;
                            u10 = (u10 + u11);
                            *(float *)((t0 + 0x0)) = u10;
                        }
                        u11 = ((((struct o8C_float *)(t9))->v));
                        t2 = (int)u11;
                        (((struct oA6_uchar *)(t9))->v) = 0x0;
                        for (;;) {
                            t1 = ((((struct oA4_short *)(t9))->v));
                            t1 = (unsigned short)t1;
                            t1 = (t1 + (unsigned char)(*(signed char *)((t9 + 0xA6))));
                            t1 = (t1 << 2);
                            t1 = (t1 + (*(int *)((t7 + 0x4))));
                            if ((int)((unsigned char)(*(signed char *)((t1 + 0x2))) + 0x1) >= (int)t2) {
                                break;
                            }
                            (((struct oA6_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0xA6))) + 0x1);
                        }
                        t1 = (*(signed char *)((t9 + 0xA6)));
                        t1 = (unsigned char)t1;
                        t76 = ((unsigned short)((((struct oA4_short *)(t9))->v)) + t1);
                        t1 = (*(int *)((t7 + 0x4)));
                        t1 = (unsigned char)(*(signed char *)((((t76 << 2) + t1) + 0x2)));
                        t79 = t1;
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        u11 = (float)t79;
                        u11 = (u11 + u14);
                        (((struct oA8_float *)(t9))->v) = u11;
                        *(unsigned short *)((t1 + 0x0)) = ((*(short *)((t1 + 0x0))) + 0x1);
                        t1 = 0x80;
                        (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) | t1);
                        t6 = (t6 | t1);
                        u129 = u11;
                    } else {
                        t1 = t9;
                        t1 = (t1 + 0x78);
                        if (((*(short *)((t1 + 0x0))) != 0) && (t83 = *(signed char *)((t2 + 0x5)), ((unsigned char)t83 & 64) != 0)) {
                            t2 = t9;
                            t2 = (t2 + 0x74);
                            *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                            t2 = t9;
                            t2 = (t2 + 0x78);
                            *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                            t2 = t9;
                            t2 = (t2 + 0x68);
                            t1 = (*(int *)((t2 + 0x4)));
                            *(unsigned int *)((t2 + 0x8)) = t1;
                            t2 = t9;
                            t2 = (t2 + 0x68);
                            *(unsigned int *)((t2 + 0x4)) = (*(int *)((t2 + 0x0)));
                            t1 = 0x40;
                            u11 = ((((struct o94_float *)(t9))->v));
                            u11 = (u11 + u13);
                            (((struct o94_float *)(t9))->v) = u11;
                            u10 = ((((struct o8C_float *)(t9))->v));
                            u10 = (u10 - u13);
                            (((struct o8C_float *)(t9))->v) = u10;
                            (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) | t1);
                            t6 = (t6 | t1);
                            t131 = t0;
                            t133 = t3;
                            t134 = t4;
                            u121 = u10;
                            u122 = u11;
                        } else {
                            t1 = t9;
                            t1 = (t1 + 0x78);
                            if (((*(short *)((t1 + 0x0))) == 0) && (t96 = *(signed char *)((t4 + 0x5)), ((unsigned char)t96 & 64) != 0)) {
                                t3 = t9;
                                t2 = t8;
                                FUN_0c0379f4(t2, t3, t4);
                                t2 = t9;
                                t2 = (t2 + 0x74);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t2 = t9;
                                t2 = (t2 + 0x78);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t1 = 0x40;
                                u11 = ((((struct o94_float *)(t9))->v));
                                u11 = (u11 + u13);
                                (((struct o94_float *)(t9))->v) = u11;
                                u10 = ((((struct o8C_float *)(t9))->v));
                                u10 = (u10 - u13);
                                (((struct o8C_float *)(t9))->v) = u10;
                                (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) | t1);
                                t6 = (t6 | t1);
                                u114 = u10;
                                u115 = u11;
                            } else {
                                t3 = t9;
                                t2 = t8;
                                FUN_0c0379f4(t2, t3, t4);
                                t2 = t9;
                                t2 = (t2 + 0x74);
                                t1 = t9;
                                t1 = (t1 + 0x78);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t2 = t9;
                                t2 = (t2 + 0x78);
                                *(unsigned short *)((t2 + 0x2)) = (*(short *)((t2 + 0x0)));
                                t2 = 0x40;
                                *(unsigned short *)((t1 + 0x0)) = ((*(short *)((t1 + 0x0))) + 0x1);
                                t1 = (*(signed char *)((t9 + (t2 + 0x44))));
                                t1 = (unsigned char)t1;
                                if ((t1 & t2) != 0) {
                                    t1 = 0x84;
                                    t1 = (t1 + 0x3B);
                                    (((struct o84_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0x84))) & t1);
                                }
                            }
                            u121 = u114;
                            u122 = u115;
                        }
                        u128 = u121;
                        u129 = u122;
                    }
                    u135 = u128;
                    u136 = u129;
                }
                u10 = u135;
                u11 = u136;
                t0 = t131;
                t3 = t133;
                t4 = t134;
                u11 = ((((struct oA8_float *)(t9))->v));
                u10 = ((((struct o8C_float *)(t9))->v));
                if (u10 > u11) {
                    t3 = t9;
                    (((struct oA6_uchar *)(t9))->v) = ((*(signed char *)((t9 + 0xA6))) + 0x1);
                    t4 = ((((struct oA4_short *)(t9))->v));
                    t1 = (*(signed char *)((t9 + 0xA6)));
                    t4 = (unsigned short)t4;
                    t1 = (unsigned char)t1;
                    t4 = (t4 + t1);
                    t1 = (*(int *)((t7 + 0x4)));
                    t4 = (t4 << 2);
                    t4 = (t4 + t1);
                    t2 = a4;
                    FUN_0c037a3c(t2, t3, t4);
                } else {
                    t146 = t0;
                    t148 = t1;
                    t149 = t2;
                    t150 = t3;
                    t151 = t4;
                    u152 = u10;
                }
                u10 = u152;
                u11 = 0.0f;
                t0 = t146;
                t1 = t148;
                t2 = t149;
                t3 = t150;
                t4 = t151;
                if (u12 > u11) continue;
                break;
            }
            t5 = (t5 + 0x1);
            continue;
        }
        break;
    }
    return t6;
}

int FUN_0c0c2d56(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R0;
    register int R1;
    register int R2;
    register int R9;
    register float F2;
    register float F3;
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
    register int v0_8;
    v0_3 = a4;
    v0_5 = a5;
    v0_2 = a6;
    v0_6 = a7;
    *(unsigned char *)(((int)stk + 0)) = v0_5;
    v0_7 = (v0_2);
    v0_0 = (v0_3);
    if ((v0_3 != 0)) goto L_C0C2D70;
    L_C0C3002:;
    return R0;
    L_C0C2D70:;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    (((struct o17_uchar *)(v0_0))->v) = 0x0;
    (((struct o41D_uchar *)(v0_0))->v) = (*(signed char *)(((int)stk + 0)));
    v0_2 = *(signed char *)((v0_0 + 0x41C));
    R0 = ((unsigned char)v0_2);
    v0_1 = (0xC059DF2);
    v0_4 = (0x0);
    if (((unsigned char)v0_2 == 0xC4)) goto L_C0C2D9E;
    if ((R0 == 12)) goto L_C0C2DB4;
    if (!((R0 == 41))) goto L_C0C2DFA;
    if (((*(signed char *)((v0_0 + 0x41D))) != 5)) goto L_C0C2DF4;
    (((struct oAC_ushort *)(v0_0))->v) = 0x21F;
    (((struct oBC_float *)(v0_0))->v) = 1.0f;
    (((struct oB8_float *)(v0_0))->v) = 1.0f;
    (((struct oB4_float *)(v0_0))->v) = 1.0f;
    goto L_C0C2DFA;
    L_C0C2DFA:;
    FUN_0c0c241a(v0_0);
    FUN_0c0c2c30(v0_0);
    v0_6 = *(signed char *)(((int)stk + 0));
    R0 = (v0_6);
    v0_3 = (0xC532498);
    v0_5 = (0xC532498);
    v0_2 = (0x1);
    if (((unsigned int)v0_6 < (unsigned int)0xC)) goto L_C0C2E14;
    goto L_C0C3002;
    L_C0C2E14:;
    v0_6 = (R0 << 1);
    R0 = ((R0 << 1));
    switch (v0_6) { case 0: goto L_C0C2E40; case 2: goto L_C0C2E40; case 4: goto L_C0C2E44; case 6: goto L_C0C2E44; case 8: goto L_C0C2E7C; case 10: goto L_C0C2EB0; case 12: goto L_C0C2EBC; case 14: goto L_C0C2F84; case 16: goto L_C0C2F84; case 18: goto L_C0C2F8C; case 20: goto L_C0C2F8C; case 22: goto L_C0C2F8C; }
    L_C0C2F8C:;
    v0_8 = *(signed char *)((v0_0 + 0x1));
    v0_6 = (v0_8);
    if (((signed char)v0_8 == -1)) goto L_C0C2FDA;
    v0_8 = (0x3938);
    if (((*(signed char *)(((((short)(signed char)v0_6 * (short)0x3938) + v0_3) + 0x3721))) != (*(signed char *)((v0_0 + 0x41C))))) goto L_C0C2FDA;
    if ((((((struct o3832_short *)((((short)(signed char)v0_6 * (short)v0_8) + v0_3)))->v)) != ((((struct o24_short *)(v0_0))->v)))) goto L_C0C2FDA;
    v0_8 = *(signed char *)((v0_0 + 0x1));
    (((struct o372E_uchar *)((v0_3 + ((short)v0_8 * (short)0x3938))))->v) = v0_2;
    (((struct o3721_uchar *)((v0_5 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938))))->v) = v0_4;
    v0_3 = ((v0_3 + ((short)v0_8 * (short)0x3938)));
    L_C0C2FDA:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_7;
    (((struct o12A_ushort *)(v0_0))->v) = v0_4;
    (((struct o12C_ushort *)(v0_0))->v) = v0_4;
    (((struct o12E_ushort *)(v0_0))->v) = v0_4;
    (((struct oA4_uint *)(v0_0))->v) = v0_4;
    v0_3 = *(signed char *)((v0_0 + 0x41C));
    R0 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 != 13)) goto L_C0C3002;
    R0 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))(v0_1))((*(signed char *)((v0_0 + 0x1))), 0x46, v0_2, v0_6, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    goto L_C0C3002;
    L_C0C2F84:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_7;
    R0 = (v0_7);
    goto L_C0C3002;
    L_C0C2EBC:;
    v0_7 = *(signed char *)((v0_0 + 0x1));
    v0_6 = (v0_7);
    if (((signed char)v0_7 == -1)) goto L_C0C2F08;
    v0_8 = (0x3938);
    if (((*(signed char *)((((short)(signed char)v0_6 * (short)0x3938) + 0xC535BB9))) != (*(signed char *)((v0_0 + 0x41C))))) goto L_C0C2F08;
    if (((*(short *)((((short)(signed char)v0_6 * (short)v0_8) + 0xC535CCA))) != ((((struct o24_short *)(v0_0))->v)))) goto L_C0C2F08;
    v0_7 = *(signed char *)((v0_0 + 0x1));
    (((struct o372E_uchar *)((v0_3 + ((short)v0_7 * (short)0x3938))))->v) = v0_2;
    (((struct o3721_uchar *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_5)))->v) = v0_4;
    v0_3 = ((v0_3 + ((short)v0_7 * (short)0x3938)));
    L_C0C2F08:;
    (((struct oA4_uint *)(v0_0))->v) = v0_4;
    *(volatile signed char *)((v0_0 + 0x1));
    FUN_0c187798(v0_3, v0_5, v0_2);
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 180.0f);
    (((struct o425_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x425))) + 0x1);
    v0_3 = *(signed char *)((v0_0 + 0x41C));
    R0 = ((unsigned char)v0_3);
    FPUL_ = (0x43340000);
    if (((unsigned char)v0_3 != 41)) goto L_C0C3002;
    R0 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))(v0_1))((*(signed char *)((v0_0 + 0x1))), 0x62, v0_2, v0_6, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    goto L_C0C3002;
    L_C0C2EB0:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_7;
    (((struct oAA_uchar *)(v0_0))->v) = v0_4;
    R0 = (0xAA);
    goto L_C0C3002;
    L_C0C2E7C:;
    *(unsigned char *)((v0_0 + 0x1)) = v0_7;
    (((struct oAA_uchar *)(v0_0))->v) = v0_4;
    v0_1 = *(signed char *)((v0_0 + 0x41C));
    R0 = (0x41C);
    v0_3 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 0xC3)) goto L_C0C2E9C;
    if ((v0_3 == 0xC8)) goto L_C0C2E9C;
    goto L_C0C3002;
    L_C0C2E9C:;
    (((struct o420_ushort *)(v0_0))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + R0))) * (unsigned short)0x34) + 0xC2738D2)));
    R0 = (0x420);
    goto L_C0C3002;
    L_C0C2E44:;
    if (((unsigned char)(*(signed char *)((v0_0 + 0x41C))) != 0xC2)) goto L_C0C2E72;
    *(unsigned int *)((v0_0 + 0x3C)) = v0_4;
    *(unsigned int *)((v0_0 + 0x34)) = v0_4;
    v0_3 = (0xC5410FC);
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C0C2E6A;
    *(unsigned int *)((v0_0 + 0x38)) = (unsigned short)(((((struct o2EC_short *)(v0_3))->v)) + 0x8000);
    L_C0C2E76:;
    (((struct oA4_uint *)(v0_0))->v) = v0_4;
    R0 = (0xA4);
    goto L_C0C3002;
    L_C0C2E6A:;
    *(unsigned int *)((v0_0 + 0x38)) = ((((struct o2EC_int *)(v0_3))->v));
    goto L_C0C2E76;
    L_C0C2E72:;
    *(unsigned int *)((v0_0 + 0x3C)) = v0_4;
    *(unsigned int *)((v0_0 + 0x34)) = v0_4;
    goto L_C0C2E76;
    L_C0C2E40:;
    goto L_C0C3002;
    L_C0C2DF4:;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    goto L_C0C2DFA;
    L_C0C2DB4:;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x43);
    goto L_C0C2DFA;
    L_C0C2D9E:;
    if (((*(signed char *)((v0_0 + 0x41D))) == 6)) goto L_C0C2DAA;
    goto L_C0C2F84;
    L_C0C2DAA:;
    (((struct o41D_uchar *)(v0_0))->v) = 0x2;
    goto L_C0C2F84;
}

int FUN_0c1589d6(int a4, int a5, int a6, float f4)
{
    int stk[1];
    register int t77;

    register int R1;
    register int R2;
    register int R3;
    register float F2;
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
    register float w0_0;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    w0_0 = f4;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_6 = (v0_5);
    v0_3 = (0x1);
    v0_4 = (0xC17C2F0);
    v0_4 = (0xC2A2A64);
    v0_7 = (0xC17C130);
    v0_0 = (v0_0);
    if ((v0_5 == 0)) goto L_C158A50;
    if ((v0_6 == 1)) goto L_C158AD0;
    if ((v0_6 != 2)) goto L_C158A02;
    L_C158B0E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    v0_3 = (0x10);
    L_C158B2A:;
    if (!((v0_3 != 0))) goto L_C158B2E;
    FUN_0c158824(v0_0);
    v0_3 = ((v0_3 - 1));
    goto L_C158B2A;
    L_C158B2E:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158B78;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    L_C158C5C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_6 = ((v0_1 - 1));
    return v0_6;
    L_C158B78:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C158B80:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c0e2390((v0_0 + 0x4C), (v0_4 + 0x18), (v0_4 + 0xC));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) / (1.0f + 1.0f));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) / (1.0f + 1.0f));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) / (1.0f + 1.0f));
    *(unsigned short *)((v0_0 + 0x1C)) = 0x2;
    w0_0 = ((1.0f + 1.0f));
    L_C158BB6:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158BEC;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    goto L_C158C5C;
    L_C158BEC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C158BF4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c0e2390((v0_0 + 0x4C), (v0_4 + 0x24), (v0_4 + 0x18));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) / 3.0f);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) / 3.0f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) / 3.0f);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3;
    w0_0 = (3.0f);
    L_C158C2A:;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158C64;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_1 + 0x84), (v0_0 + 0x4C));
    goto L_C158C5C;
    L_C158C64:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C158C6C:;
    return ((int (*)(int, int, int))(FUN_0c03f346))(v0_0, v0_1, v0_2);
    L_C158A02:;
    if ((v0_6 != 3)) goto L_C158A0A;
    goto L_C158B2E;
    L_C158A0A:;
    if ((v0_6 != 4)) goto L_C158A12;
    goto L_C158B80;
    L_C158A12:;
    if ((v0_6 != 5)) goto L_C158A1A;
    goto L_C158BB6;
    L_C158A1A:;
    if ((v0_6 != 6)) goto L_C158A22;
    goto L_C158BF4;
    L_C158A22:;
    if ((v0_6 != 7)) goto L_C158A2A;
    goto L_C158C2A;
    L_C158A2A:;
    goto L_C158C6C;
    L_C158AD0:;
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_5 + 0x84), (v0_0 + 0x4C));
    v0_5 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    FUN_0c17c130(((*(int *)(((int)stk + 0))) + 0x84), (v0_5 + 0x84), (v0_0 + 0x4C));
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C158B06;
    goto L_C158C5C;
    L_C158B06:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C158B0E;
    L_C158A50:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_3;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = 0x0;
    *(volatile int *)((v0_0 + 0xC4));
    v0_5 = ((int (*)(int, int, int))(FUN_0c187798))(0xC2A2A94, v0_1, v0_2);
    *(volatile int *)((v0_0 + 0xC8));
    v0_5 = ((int (*)(int))(FUN_0c187798))(t77);
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    *(unsigned short *)((((((struct oC8_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    FUN_0c0e2390((v0_0 + 0x4C), (v0_4 + 0xC), v0_4);
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) / 5.0f);
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) / 5.0f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) / 5.0f);
    w0_0 = (5.0f);
    goto L_C158AD0;
}


int FUN_0c0c14a6(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = (((struct o0_int *)0xC47245C)->v);
    (((struct o0_uint *)0xC47245C)->v) = (t0 + 0x2);
    t1 = *(short *)((((t0 + 0x2) - 2) + 0x0));
    t0 = FUN_0c0bb994(a4);
    t2 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    if ((unsigned char)t2 != 0) {
        if ((unsigned char)t2 != 1) {
            if ((unsigned char)t2 != 2) {
                if ((unsigned char)t2 == 3) {
                    (((struct o4_ushort *)0xC47245C)->v) = 0x0;
                    t3 = *(signed char *)0xC472462;
                    *(unsigned char *)(((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t3 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
                    t3 = (unsigned char)t2;
                } else {
                    if ((unsigned char)t2 == 4) {
                        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
                        t4 = FUN_0c0bb73e(a4);
                        (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((int)((int)(short)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x50)) / (int)0x14));
                        t5 = (((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v);
                        if (t5 != 0) {
                            if (t5 != 1) {
                                if (t5 != 2) {
                                    if (t5 != 3) {
                                    } else {
                                        t5 = FUN_0c0bb70c((0xFFFFE000 + t4));
                                        t6 = (FUN_0c0bb70c((0x6000 + t4)));
                                        t7 = t5;
                                    }
                                    t5 = t6;
                                    t6 = t7;
                                } else {
                                    t7 = FUN_0c0bb70c(t4);
                                    t5 = (FUN_0c0bb70c((0x8000 + t4)));
                                    t6 = t7;
                                }
                                t7 = t5;
                                t5 = t6;
                            } else {
                                t6 = FUN_0c0bb70c((0x2000 + t4));
                                t7 = (FUN_0c0bb70c((0xA000 + t4)));
                                t5 = t6;
                            }
                            t6 = t7;
                            t7 = t5;
                        } else {
                            t5 = FUN_0c0bb70c(t4);
                            t6 = (FUN_0c0bb70c((0x8000 + t4)));
                            t7 = t5;
                        }
                        if ((int)(short)t1 < (int)((short)t0 - 10)) {
                            (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t7);
                        } else {
                            if ((int)(short)t1 > (int)((short)t0 + 0xA)) {
                                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t6);
                            } else {
                                (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | (FUN_0c0bb70c(t4)));
                                t4 = *(signed char *)0xC472462;
                                *(unsigned char *)(((((unsigned short)(unsigned char)t4 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t4 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
                            }
                        }
                        t4 = 0x42C;
                    } else {
                        t5 = (unsigned char)t2;
                        if ((unsigned char)t2 == 5) {
                            (((struct o4_ushort *)0xC47245C)->v) = 0x1;
                            t2 = FUN_0c0bc25e();
                            *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
                            t5 = t2;
                        }
                        t4 = t5;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                (((struct o4_ushort *)0xC47245C)->v) = 0x0;
                t3 = FUN_0c0bb73e(a4);
                (((struct o26_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((int)((int)(short)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x50)) / (int)0x14));
                t4 = (((struct o26_short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v);
                if (t4 != 0) {
                    if (t4 != 1) {
                        if (t4 != 2) {
                            t5 = t4;
                            if (t4 != 3) {
                            } else {
                                t4 = FUN_0c0bb70c((0xFFFFE000 + t3));
                                t6 = FUN_0c0bb70c((0x6000 + t3));
                                t5 = t6;
                                t7 = t6;
                                t6 = t4;
                            }
                            t4 = t5;
                            t5 = t7;
                            t7 = t6;
                        } else {
                            t6 = FUN_0c0bb70c(t3);
                            t8 = FUN_0c0bb70c((0x8000 + t3));
                            t4 = t8;
                            t5 = t8;
                            t7 = t6;
                        }
                        t6 = t4;
                        t4 = t5;
                        t5 = t7;
                    } else {
                        t7 = FUN_0c0bb70c((0x2000 + t3));
                        t8 = FUN_0c0bb70c((0xA000 + t3));
                        t6 = t8;
                        t4 = t8;
                        t5 = t7;
                    }
                    t7 = t6;
                    t6 = t4;
                    t4 = t5;
                } else {
                    t5 = FUN_0c0bb70c(t3);
                    t8 = FUN_0c0bb70c((0x8000 + t3));
                    t7 = t8;
                    t6 = t8;
                    t4 = t5;
                }
                t3 = t7;
                if ((int)(short)t1 < (int)((short)t0 - 10)) {
                    (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t4);
                    t3 = 0x42C;
                }
                t4 = t3;
                if ((int)(short)t1 > (int)((short)t0 + 0xA)) {
                    (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t6);
                    t4 = 0x42C;
                }
                t0 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
                t2 = t4;
            }
            t0 = t2;
        } else {
            (((struct o4_ushort *)0xC47245C)->v) = 0x0;
            t1 = *(signed char *)0xC472462;
            t2 = *(short *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x18));
            *(unsigned short *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = (t2 - 1);
            if ((unsigned short)(t2 - 1) != 0) {
            } else {
                t1 = *(signed char *)0xC472462;
                *(unsigned char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
            }
            t0 = (unsigned short)(t2 - 1);
        }
        t1 = t0;
    } else {
        (((struct o4_ushort *)0xC47245C)->v) = 0x0;
        *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x18)) = 0x1;
        t0 = *(signed char *)((a4 + 0x3715));
        if (t0 != 21) {
            t2 = *(signed char *)0xC472462;
            *(unsigned char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)t2 * (unsigned short)0x264) + 0xC471ACC) + 0x0))) + 0x1);
        } else {
            *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x0)) = 0x4;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0ea298(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{

    register int R1;
    register int R2;
    register int R3;
    int R6;
    int R7;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    R6 = a6;
    R7 = a7;
    w0_0 = f4;
    w0_2 = f5;
    w0_1 = f6;
    v0_0 = R13;
    v0_2 = *(signed char *)((v0_1 + 0x14));
    v0_3 = (v0_2);
    R13 = (0xC059CFC);
    v0_0 = (v0_1);
    if ((v0_2 == 0)) goto L_C0EA2B2;
    if ((v0_3 == 1)) goto L_C0EA2DC;
    v0_1 = (*(signed char *)((v0_0 + 0x2))) != 0;
    if (v0_1) goto L_C0EA528;
    v0_1 = (0x4E);
    v0_2 = ((v0_0 + 0x28));
    L_C0EA52E:;
    thunk_FUN_0c05abb2(v0_1, v0_2);
    return FUN_0c03f346(v0_0);
    L_C0EA528:;
    v0_1 = (0x4B);
    v0_2 = ((v0_0 + 0x28));
    goto L_C0EA52E;
    L_C0EA2DC:;
    v0_2 = (*(signed char *)((v0_0 + 0x2))) == 0;
    v0_1 = (0x0);
    w0_2 = (3.0f);
    if (v0_2) goto L_C0EA2EC;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C0EA480;
    if ((v0_3 == 1)) goto L_C0EA4A4;
    if ((v0_3 == 2)) goto L_C0EA4BE;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + w0_2);
    v0_2 = 350.0f > ((((struct o30_float *)(v0_0))->v));
    v0_3 = (0x30);
    w0_0 = (350.0f);
    if (v0_2) goto L_C0EA500;
    *(float *)((v0_0 + v0_3)) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    L_C0EA4F8:;
    v0_1 = thunk_FUN_0c05abb2(0x48, (v0_0 + 0x28));
    v0_3 = (v0_1);
    L_C0EA500:;
    v0_2 = *(signed char *)0xC54098D;
    v0_1 = (v0_2);
    if (((int)v0_2 < (int)0xD)) goto L_C0EA53E;
    v0_3 = (0xE);
    if (((int)v0_1 > (int)0xE)) goto L_C0EA53E;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (0x14);
    L_C0EA53E:;
    return v0_3;
    L_C0EA4BE:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - w0_2);
    v0_1 = ((((struct o28_float *)(v0_0))->v)) > -150.0f;
    v0_3 = (0x28);
    w0_0 = (-150.0f);
    if (v0_1) goto L_C0EA500;
    *(float *)((v0_0 + v0_3)) = w0_0;
    L_C0EA4D4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0EA4F8;
    L_C0EA4A4:;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - w0_2);
    v0_1 = ((((struct o30_float *)(v0_0))->v)) > 150.0f;
    v0_3 = (0x30);
    w0_0 = (150.0f);
    if (v0_1) goto L_C0EA500;
    v0_3 = (0x30);
    L_C0EA4BA:;
    *(float *)((v0_0 + v0_3)) = w0_0;
    goto L_C0EA4D4;
    L_C0EA480:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + w0_2);
    v0_1 = 250.0f > ((((struct o28_float *)(v0_0))->v));
    v0_3 = (0x28);
    w0_0 = (250.0f);
    if (v0_1) goto L_C0EA500;
    goto L_C0EA4BA;
    L_C0EA2EC:;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_4);
    v0_2 = (0x78);
    R6 = (0x2);
    R7 = (0x4);
    w0_0 = ((1.0f + 1.0f));
    w0_1 = (0.0f);
    if ((v0_4 == 0)) goto L_C0EA30C;
    if ((v0_3 == 1)) goto L_C0EA328;
    if ((v0_3 == 2)) goto L_C0EA3B4;
    v0_4 = ((((struct o20_short *)(v0_0))->v)) == 0;
    v0_3 = (0x20);
    if (v0_4) goto L_C0EA43C;
    v0_3 = ((*(short *)((v0_0 + v0_3))) & R6) == 0;
    if (v0_3) goto L_C0EA404;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_3))->v) = (((((struct o6C_float *)(v0_3))->v)) + w0_0);
    L_C0EA410:;
    v0_3 = (((((struct o20_short *)(v0_0))->v)) & R7) == 0;
    if (v0_3) goto L_C0EA426;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = (((((struct o74_float *)(v0_3))->v)) + w0_0);
    L_C0EA432:;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    L_C0EA448:;
    v0_4 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_4 + 0x1);
    v0_3 = ((short)((v0_4 + 0x1) - 1));
    if (((int)(short)((v0_4 + 0x1) - 1) < (int)v0_2)) goto L_C0EA500;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    L_C0EA45A:;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    v0_1 = thunk_FUN_0c05abb2(0x4D, (v0_0 + 0x28));
    v0_3 = (v0_1);
    goto L_C0EA500;
    L_C0EA426:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = (((((struct o74_float *)(v0_3))->v)) - w0_0);
    goto L_C0EA432;
    L_C0EA404:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_3))->v) = (((((struct o6C_float *)(v0_3))->v)) - w0_0);
    goto L_C0EA410;
    L_C0EA43C:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = w0_1;
    (((struct o6C_float *)(v0_3))->v) = w0_1;
    R6 = (v0_3);
    goto L_C0EA448;
    L_C0EA3B4:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + w0_2);
    v0_1 = !(4300.0f > ((((struct o2C_float *)(v0_0))->v)));
    v0_3 = (0x2C);
    w0_0 = (4300.0f);
    if (v0_1) goto L_C0EA3CC;
    goto L_C0EA500;
    L_C0EA3CC:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o2C_float *)(v0_0))->v) = w0_0;
    thunk_FUN_0c05abb2(0x4E, (v0_0 + 0x28));
    (((struct o20_ushort *)(v0_0))->v) = 0x14;
    v0_3 = (0x20);
    goto L_C0EA500;
    L_C0EA328:;
    v0_4 = ((((struct o20_short *)(v0_0))->v)) == 0;
    v0_3 = (0x20);
    if (v0_4) goto L_C0EA38C;
    v0_3 = ((*(short *)((v0_0 + v0_3))) & R6) == 0;
    if (v0_3) goto L_C0EA344;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_3))->v) = (((((struct o6C_float *)(v0_3))->v)) + w0_0);
    L_C0EA350:;
    v0_3 = (((((struct o20_short *)(v0_0))->v)) & R7) == 0;
    if (v0_3) goto L_C0EA366;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = (((((struct o74_float *)(v0_3))->v)) + w0_0);
    L_C0EA372:;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    L_C0EA398:;
    v0_4 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_4 + 0x1);
    v0_3 = ((short)((v0_4 + 0x1) - 1));
    if (((int)(short)((v0_4 + 0x1) - 1) >= (int)v0_2)) goto L_C0EA3AA;
    goto L_C0EA500;
    L_C0EA3AA:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0EA45A;
    L_C0EA366:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = (((((struct o74_float *)(v0_3))->v)) - w0_0);
    goto L_C0EA372;
    L_C0EA344:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_3))->v) = (((((struct o6C_float *)(v0_3))->v)) - w0_0);
    goto L_C0EA350;
    L_C0EA38C:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_3))->v) = w0_1;
    (((struct o6C_float *)(v0_3))->v) = w0_1;
    R6 = (v0_3);
    goto L_C0EA398;
    L_C0EA30C:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - w0_2);
    v0_1 = !(((((struct o2C_float *)(v0_0))->v)) > 3400.0f);
    v0_3 = (0x2C);
    w0_0 = (3400.0f);
    if (v0_1) goto L_C0EA324;
    goto L_C0EA500;
    L_C0EA324:;
    goto L_C0EA3CC;
    L_C0EA2B2:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1;
    v0_1 = (*(signed char *)((v0_0 + 0x2))) != 0;
    if (v0_1) goto L_C0EA2D2;
    v0_1 = (0x4D);
    v0_2 = ((v0_0 + 0x28));
    L_C0EA2D8:;
    thunk_FUN_0c05abb2(v0_1, v0_2);
    goto L_C0EA2DC;
    L_C0EA2D2:;
    v0_1 = (0x48);
    v0_2 = ((v0_0 + 0x28));
    goto L_C0EA2D8;
}

int FUN_0c0f71b8(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t1 = (((struct oD8_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        t1 = (((struct oD4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        *(volatile int *)((a4 + 0xD8));
        t1 = ((int (*)(int))(FUN_0c18778c))(a4);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1FB1D4);
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    t1 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t1 = *(signed char *)((a4 + 0x15));
    switch (t1) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x10);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x100;
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 5);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
            }
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        break;
    }
    if (((*(signed char *)((a4 + 0x15))) != (*(signed char *)((a4 + 0x16)))) && (t0 = *(signed char *)((a4 + 0x15)), t0 == 1)) {
        (((struct o17_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x17));
    t1 = t0;
    if (t0 == 0) {
    } else {
        if (t0 == 1) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x3);
            if ((int)((((struct o22_short *)(a4))->v)) > (int)0x40) {
                (((struct o22_ushort *)(a4))->v) = 0x40;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB1F0)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB1F0)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB1F0)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            t2 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x40) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(volatile int *)((a4 + 0xD8));
                t2 = (((int (*)(int, int, int, float, float))(FUN_0c18778c))(0xC1FB1EC, 0xC1FB1FC, 0x40, ((float)t0 / 64.0f), u0));
            }
            t0 = t2;
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t2 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o10_float *)0xC1FB1F0)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o14_float *)0xC1FB1F0)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB1F0)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o18_float *)0xC1FB1F0)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            t0 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(volatile int *)((a4 + 0xD8));
                t0 = (((int (*)(int, int, float, float))(FUN_0c18778c))(0xC1FB1EC, 0xC1FB1FC, ((float)t2 / 64.0f), u0));
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0f99bc(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xFF;
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t1 = (((struct oD8_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        t1 = (((struct oD4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x400);
        *(volatile int *)((a4 + 0xD8));
        t1 = ((int (*)(int))(FUN_0c18778c))(a4);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1FB588);
    t1 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    t1 = (((struct oCC_int *)(a4))->v);
    (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x12);
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t1 = *(signed char *)((a4 + 0x15));
    switch (t1) {
    case 0:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((int)(*(short *)((a4 + 0x1C))) < 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
        }
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x8);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x100;
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 8);
        (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
        if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
            (((struct o14_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
            }
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        break;
    }
    if (((*(signed char *)((a4 + 0x15))) != (*(signed char *)((a4 + 0x16)))) && (t0 = *(signed char *)((a4 + 0x15)), t0 == 1)) {
        (((struct o17_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x17));
    t1 = t0;
    if (t0 == 0) {
    } else {
        if (t0 == 1) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x3);
            if ((int)((((struct o22_short *)(a4))->v)) > (int)0x40) {
                (((struct o22_ushort *)(a4))->v) = 0x40;
            }
            t0 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o10_float *)0xC1FB5A4)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o14_float *)0xC1FB5A4)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t0 / 64.0f)) * ((((((struct o18_float *)0xC1FB5A4)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            t2 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x40) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(volatile int *)((a4 + 0xD8));
                t2 = (((int (*)(int, int, int, float, float))(FUN_0c18778c))(0xC1FB5A0, 0xC1FB5B0, 0x40, ((float)t0 / 64.0f), u0));
            }
            t0 = t2;
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t2 = (((struct o22_short *)(a4))->v);
            u0 = (((struct o0_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o10_float *)0xC1FB5A4)->v)) - u0));
            (((struct o18_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o4_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o14_float *)0xC1FB5A4)->v)) - u0));
            (((struct o1C_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            u0 = (((struct o8_float *)0xC1FB5A4)->v);
            u1 = u0;
            u1 = u1 + (((float)t2 / 64.0f)) * ((((((struct o18_float *)0xC1FB5A4)->v)) - u0));
            (((struct o20_float *)(((((struct oD8_int *)(a4))->v))))->v) = u1;
            t0 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(volatile int *)((a4 + 0xD8));
                t0 = (((int (*)(int, int, float, float))(FUN_0c18778c))(0xC1FB5A0, 0xC1FB5B0, ((float)t2 / 64.0f), u0));
            }
        }
        t1 = t0;
    }
    return t1;
}

