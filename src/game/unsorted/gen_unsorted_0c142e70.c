/* game/unsorted: functions 0C142E70-0C143FE0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int a4, int a5, int a6, int a7);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int FUN_0c0582de(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
extern int FUN_0c150010();
int FUN_0c15aed8(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c142e70(int a4, int a5);
int FUN_0c14304a(int a4);
int FUN_0c143074(int a4, int a5);
int FUN_0c143608(int a4, int a5, int a6);
int FUN_0c143814(int a4, int a5, int a6);
int FUN_0c143932(int a4);
int FUN_0c143b12(int a4, int a5, int a6, int a7);
int FUN_0c143b36(int a4, float f4);
int FUN_0c143b4a(int a4, float f4);

int FUN_0c142e70(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t3;
    register int t46;
    register int t7;
    register int t9;
    register int t11;
    register int t15;
    register int t17;
    register int t19;
    register int t22;
    register int t24;
    register float u25;
    register float u26;
    register float u27;
    register float t28;
    register float u32;
    register int t44;
    register int t12;

    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t46 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t7 = 0x0;
        for (;;) {
            if ((int)t7 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t9 = *(int *)((((t7 << 2) + (0xC4 + t3)) + 0x0));
            *(unsigned short *)((t9 + 0x6)) = 0x1F;
            t11 = ((int (*)(int, int, int))(FUN_0c187798))(t7, t9, 0xC202560);
            t7 = (t12 + 0x1);
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC143118;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        t15 = ((int (*)(int, int, int))(FUN_0c187798))(t7, 0x0, 0xC202560);
        t17 = *(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC202528))) << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned int *)(((int)stk + 16)) = ((((a5 & 0x1) << 1) + (a5 & 0x1)) << 2);
        t19 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c0582de((t3 + 0x28), (t17 + 0x28));
        *(volatile int *)(((int)stk + 16));
        t22 = ((int (*)(void))(FUN_0c187798))();
        math_mat_transform_vector((((int)stk + 16) + 0x4), (t17 + 0x28));
        t24 = ((int (*)(void))(FUN_0c187798))();
        u25 = *(float *)(((int)stk + 20));
        u26 = *(float *)(((int)stk + 28));
        u27 = (u26 * u26);
        u27 = u27 + u25 * u25;
        t28 = math_signed_sqrt(u27);
        *(unsigned int *)((t3 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 20))), (*(float *)(((int)stk + 28)))));
        u32 = *(float *)(((int)stk + 24));
        if (t28 == 0.0f) {
            if (!(0.0f > u32)) {
                *(unsigned int *)((t3 + 0x34)) = 0xFFFFC000;
            } else {
                *(unsigned int *)((t3 + 0x34)) = 0x4000;
            }
        } else {
            *(unsigned int *)((t3 + 0x34)) = (math_atan_angle16(((-u32) / t28)));
        }
        FUN_0c07e2f4(t3, 0x62);
        *(int *)((int)stk + 12) = 0xFFFFFEF0;
        *(int *)((int)stk + 8) = 0x0;
        t44 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~(((int)0x1 << (int)t44) | 0x100));
        *(int *)((int)stk + 0) = 0x100;
        t46 = (FUN_0c064d24(t3, 0x1, 0x41, 0x0, 0x100, (~(((int)0x1 << (int)t44) | 0x100)), 0x0, 0xFFFFFEF0));
    }
    return t46;
}

int FUN_0c14304a(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t0 = 0x15;
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x2D;
        t0 = 0x2D;
    }
    return t0;
}

int FUN_0c143074(int a4, int a5)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = (0x20);
    v0_0 = (v0_1);
    if ((((((struct o20_short *)(v0_1))->v)) == 0)) goto L_C14308C;
    *(unsigned short *)((v0_0 + v0_3)) = ((*(short *)((v0_0 + v0_3))) - 1);
    L_C1430DA:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_3 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C1430EA;
    L_C1430E6:;
    v0_3 = ((FUN_0c14304a(v0_0)));
    L_C1430EA:;
    return v0_3;
    L_C14308C:;
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C1430DA;
    v0_3 = ((int (*)(int, int))(FUN_0c187798))(v0_1, v0_2);
    w0_1 = FUN_0c17c450((((int)stk + 0) + 0xC));
    w0_0 = (w0_1);
    if ((w0_1 == 0.0f)) goto L_C1430DA;
    v0_1 = ((int (*)(int, int))(FUN_0c187798))(v0_1, v0_2);
    w0_1 = FUN_0c17c450(((int)stk + 0));
    w0_0 = (w0_1);
    if ((w0_1 == 0.0f)) goto L_C1430DA;
    w0_1 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
    w0_0 = (w0_1);
    if ((-0.5f > w0_1)) goto L_C1430E6;
    goto L_C1430DA;
}

int FUN_0c143608(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register float u2;
    register float u3;
    register float u4;
    register float t5;
    register float u10;
    register float t21;
    register float t23;
    register float t24;
    register int t27;
    register int t29;
    register int t30;
    register int t38;
    register int t45;
    register int t46;
    register int t54;
    register int t61;
    register int t62;
    register int t70;
    register int t77;
    register int t78;
    register int t86;
    register int t93;
    register int t102;
    register float u106;
    register float u107;
    register float u108;
    register float t109;
    register float u114;
    register float t125;
    register float t127;
    register float t128;
    register int t131;
    register int t133;
    register int t134;
    register int t142;
    register int t149;
    register int t150;
    register int t158;
    register int t165;
    register int t166;
    register int t174;
    register int t181;
    register int t182;
    register int t190;
    register int t197;
    register int t200;
    int t16;
    int t120;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t200 = t0;
        if (t0 != 1) {
        } else {
            FUN_0c0e2390((((int)stk + 0) + 0xC), (a4 + 0x28), (0x41C + a4));
            u2 = *(float *)(((int)stk + 12));
            u3 = *(float *)(((int)stk + 20));
            u4 = (u3 * u3);
            u4 = u4 + u2 * u2;
            t5 = math_signed_sqrt(u4);
            *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
            u10 = t5;
            if (t5 == 0.0f) {
                u10 = 9.99999975e-06f;
            }
            *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / u10)));
            FUN_0c187798();
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t16 = *(signed char *)((a4 + 0x132)), t16 == 0)) {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    FUN_0c187798();
                    t21 = FUN_0c17c450((((int)stk + 0) + 0xC));
                    if (t21 != 0.0f) {
                        FUN_0c187798();
                        t23 = FUN_0c17c450(((int)stk + 0));
                        if (t23 != 0.0f) {
                            t24 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
                            if (-0.0871559978f > t24) {
                                FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x4B, (a4 + 0x28));
                                t27 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                                t200 = (FUN_0c03f346(a4));
                            } else {
                                t29 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t29 + 0x1);
                                if ((int)(short)(t29 + 0x1) <= (int)0xA) {
                                    t30 = (((struct oC8_int *)(a4))->v);
                                    (((struct o8C_float *)(t30))->v) = (((((struct o8C_float *)(t30))->v)) + 0.100000001f);
                                }
                                t38 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t38 - 1);
                                if ((int)(short)(t38 - 1) <= 0) {
                                    t200 = (FUN_0c03f346(a4));
                                } else {
                                    t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                                }
                            }
                        } else {
                            t45 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t45 + 0x1);
                            if ((int)(short)(t45 + 0x1) <= (int)0xA) {
                                t46 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t46))->v) = (((((struct o8C_float *)(t46))->v)) + 0.100000001f);
                            }
                            t54 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t54 - 1);
                            if ((int)(short)(t54 - 1) <= 0) {
                                t200 = (FUN_0c03f346(a4));
                            } else {
                                t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                            }
                        }
                    } else {
                        t61 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t61 + 0x1);
                        if ((int)(short)(t61 + 0x1) <= (int)0xA) {
                            t62 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t62))->v) = (((((struct o8C_float *)(t62))->v)) + 0.100000001f);
                        }
                        t70 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t70 - 1);
                        if ((int)(short)(t70 - 1) <= 0) {
                            t200 = (FUN_0c03f346(a4));
                        } else {
                            t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                        }
                    }
                } else {
                    t77 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t77 + 0x1);
                    if ((int)(short)(t77 + 0x1) <= (int)0xA) {
                        t78 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t78))->v) = (((((struct o8C_float *)(t78))->v)) + 0.100000001f);
                    }
                    t86 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t86 - 1);
                    if ((int)(short)(t86 - 1) <= 0) {
                        t200 = (FUN_0c03f346(a4));
                    } else {
                        t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                    }
                }
            } else {
                t93 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                t200 = (FUN_0c03f346(a4));
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t102 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        FUN_0c187798();
        FUN_0c0e2390((((int)stk + 0) + 0xC), (a4 + 0x28), (0x41C + a4));
        u106 = *(float *)(((int)stk + 12));
        u107 = *(float *)(((int)stk + 20));
        u108 = (u107 * u107);
        u108 = u108 + u106 * u106;
        t109 = math_signed_sqrt(u108);
        *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
        u114 = t109;
        if (t109 == 0.0f) {
            u114 = 9.99999975e-06f;
        }
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / u114)));
        FUN_0c187798();
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t120 = *(signed char *)((a4 + 0x132)), t120 == 0)) {
            if (((((struct o404_int *)(a4))->v)) != 0) {
                FUN_0c187798();
                t125 = FUN_0c17c450((((int)stk + 0) + 0xC));
                if (t125 != 0.0f) {
                    FUN_0c187798();
                    t127 = FUN_0c17c450(((int)stk + 0));
                    if (t127 != 0.0f) {
                        t128 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
                        if (-0.0871559978f > t128) {
                            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x4B, (a4 + 0x28));
                            t131 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                            t200 = (FUN_0c03f346(a4));
                        } else {
                            t133 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t133 + 0x1);
                            if ((int)(short)(t133 + 0x1) <= (int)0xA) {
                                t134 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t134))->v) = (((((struct o8C_float *)(t134))->v)) + 0.100000001f);
                            }
                            t142 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t142 - 1);
                            if ((int)(short)(t142 - 1) <= 0) {
                                t200 = (FUN_0c03f346(a4));
                            } else {
                                t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                            }
                        }
                    } else {
                        t149 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t149 + 0x1);
                        if ((int)(short)(t149 + 0x1) <= (int)0xA) {
                            t150 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t150))->v) = (((((struct o8C_float *)(t150))->v)) + 0.100000001f);
                        }
                        t158 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t158 - 1);
                        if ((int)(short)(t158 - 1) <= 0) {
                            t200 = (FUN_0c03f346(a4));
                        } else {
                            t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                        }
                    }
                } else {
                    t165 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t165 + 0x1);
                    if ((int)(short)(t165 + 0x1) <= (int)0xA) {
                        t166 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t166))->v) = (((((struct o8C_float *)(t166))->v)) + 0.100000001f);
                    }
                    t174 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t174 - 1);
                    if ((int)(short)(t174 - 1) <= 0) {
                        t200 = (FUN_0c03f346(a4));
                    } else {
                        t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                    }
                }
            } else {
                t181 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t181 + 0x1);
                if ((int)(short)(t181 + 0x1) <= (int)0xA) {
                    t182 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t182))->v) = (((((struct o8C_float *)(t182))->v)) + 0.100000001f);
                }
                t190 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t190 - 1);
                if ((int)(short)(t190 - 1) <= 0) {
                    t200 = (FUN_0c03f346(a4));
                } else {
                    t200 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                }
            }
        } else {
            t197 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
            t200 = (FUN_0c03f346(a4));
        }
    }
    return t200;
}

int FUN_0c143814(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)(((a6 << 2) + 0xC2A2330));
    FUN_0c179ac0();
    u0 = (((struct o8_float *)0xC143958)->v);
    u1 = (((struct o10_float *)0xC143958)->v);
    t1 = t0;
    t2 = (-(int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * ((((struct o0_float *)0xC143958)->v))) / ((((struct o4_float *)0xC143958)->v))));
    t3 = t0;
    for (;;) {
        t5 = FUN_0c037320((*(int *)((t1 + 0x0))), (*(int *)((((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC) + 0x4))));
        t6 = FUN_0c03f444(0x5, 0x0, t5);
        t4 = t6;
        if (t6 != 0) {
            FUN_0c03733c(t6, (*(int *)((t3 + 0x0))), (*(int *)((((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC) + 0x4))));
            *(unsigned int *)((t6 + 0x4)) = 0xC143932;
            *(unsigned char *)((t6 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t6))->v) = 0x1F;
            (((struct oA9_uchar *)(t6))->v) = 0x21;
            u2 = (((struct o4_float *)(t3))->v);
            (((struct o48_float *)(t6))->v) = u2;
            (((struct o44_float *)(t6))->v) = u2;
            (((struct o40_float *)(t6))->v) = u2;
            FUN_0c187798();
            (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + ((((struct o8_float *)(t3))->v)));
            (((struct o4C_float *)(t6))->v) = ((math_cos_angle16(t2)) * u1);
            (((struct o54_float *)(t6))->v) = ((math_sin_angle16(t2)) * u1);
            (((struct o50_float *)(t6))->v) = u0;
            t5 = FUN_0c15aed8((t6 + 0x28));
            *(unsigned int *)((t6 + 0x38)) = t2;
            t4 = t5;
        }
        t1 = (t1 + 0xC);
        t2 = (t2 + 0x1555);
        t3 = (t3 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)(t0 + 0x48)) {
            break;
        }
    }
    return t4;
}

int FUN_0c143932(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + -1.0f);
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x2D8);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x38E);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = *(short *)((a4 + 0x1C));
        if ((int)t0 <= 0) {
            return FUN_0c03f346(a4);
        }
        return t0;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        t1 = 0x28;
    }
    return t1;
}

int FUN_0c143b12(int a4, int a5, int a6, int a7)
{
    return FUN_0c037498(a5, (a6 + a7), 0x8, (*(int *)((((a4 << 2) << 1) + 0xC4B40E0))));
}

int FUN_0c143b36(int a4, float f4)
{
    register float u1;

    (((struct o84_float *)(a4))->v) = (((((struct o84_float *)(a4))->v)) + f4);
    u1 = (((struct o84_float *)(a4))->v);
    (((struct o8C_float *)(a4))->v) = u1;
    (((struct o88_float *)(a4))->v) = u1;
    return 0x88;
}

int FUN_0c143b4a(int a4, float f4)
{
    register float u0;

    u0 = (((struct o18_float *)(a4))->v);
    (((struct o18_float *)(a4))->v) = (u0 - f4);
    if (0.0f > (u0 - f4)) {
        (((struct o18_float *)(a4))->v) = 0.0f;
    }
    u0 = (((struct o18_float *)(a4))->v);
    (((struct o20_float *)(a4))->v) = u0;
    (((struct o1C_float *)(a4))->v) = u0;
    return 0x1C;
}
