/* Straight-line functions with calls and guards (batch gen_hl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o404_int { char p[0x404]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c059e0e(int, int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c150010();
int FUN_0c17c130(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(void);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int FUN_0c143608(int a4, int a5, int a6);
int FUN_0c0c89f0(int a4, int a5, int a6, int a7);

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

int FUN_0c0c89f0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x41F))) != 0) {
        t3 = *(signed char *)((a4 + 0x15));
        if (t3 != 0) {
            if (t3 != 1) {
            } else {
                if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
                    (((struct o125_uchar *)(a4))->v) = 0x0;
                }
            }
        } else {
            t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t3 != 0) && ((signed char)t3 != 1)) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C7))));
                FUN_0c0c213c(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        t3 = *(signed char *)((a4 + 0x15));
        switch (t3) {
        case 0:
            t0 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t0 != 0) && (((signed char)t0 != 1) && (t1 = *(signed char *)((a4 + 0x16)), t1 == 0))) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, 0x82);
                FUN_0c0c213c(a4);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x17))) != 1) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t3 != 0) && (((signed char)t3 != 1) && (t0 = *(signed char *)((a4 + 0x16)), t0 == 1))) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, 0xA2);
                FUN_0c0c213c(a4);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x17))) == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            t3 = *(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t3 != 0) && ((signed char)t3 != 1)) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                FUN_0c07e328(a4, 0xA3);
                FUN_0c0c213c(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 3:
            if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x134))) != 0) {
            } else {
                (((struct o125_uchar *)(a4))->v) = 0x0;
            }
            break;
        }
    }
    if ((*(signed char *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t0 = FUN_0c0c283a(a4);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t2 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
