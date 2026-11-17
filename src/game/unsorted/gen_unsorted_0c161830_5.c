/* game/unsorted: functions 0C161830-0C163134, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c059df2(int, int);
extern int FUN_0c150010();
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2220(int, int);
int FUN_0c0e2390(int, int, int);
float FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c162dac(int a4, int a5, int a6);

int FUN_0c162dac(int a4, int a5, int a6)
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
    register float u108;
    register float u109;
    register float u110;
    register float t111;
    register float u116;
    register float t127;
    register float t129;
    register float t130;
    register int t133;
    register int t135;
    register int t136;
    register int t144;
    register int t151;
    register int t152;
    register int t160;
    register int t167;
    register int t168;
    register int t176;
    register int t183;
    register int t184;
    register int t192;
    register int t199;
    register int t202;
    int t16;
    int t122;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t202 = t0;
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
                                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4B);
                                t27 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                                t202 = (FUN_0c03f346(a4));
                            } else {
                                t29 = *(short *)((a4 + 0x1E));
                                *(unsigned short *)((a4 + 0x1E)) = (t29 + 0x1);
                                if ((int)(short)(t29 + 0x1) <= (int)0xA) {
                                    t30 = (((struct oC8_int *)(a4))->v);
                                    (((struct o8C_float *)(t30))->v) = (((((struct o8C_float *)(t30))->v)) + 0.200000003f);
                                }
                                t38 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t38 - 1);
                                if ((int)(short)(t38 - 1) <= 0) {
                                    t202 = (FUN_0c03f346(a4));
                                } else {
                                    t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                                }
                            }
                        } else {
                            t45 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t45 + 0x1);
                            if ((int)(short)(t45 + 0x1) <= (int)0xA) {
                                t46 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t46))->v) = (((((struct o8C_float *)(t46))->v)) + 0.200000003f);
                            }
                            t54 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t54 - 1);
                            if ((int)(short)(t54 - 1) <= 0) {
                                t202 = (FUN_0c03f346(a4));
                            } else {
                                t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                            }
                        }
                    } else {
                        t61 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t61 + 0x1);
                        if ((int)(short)(t61 + 0x1) <= (int)0xA) {
                            t62 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t62))->v) = (((((struct o8C_float *)(t62))->v)) + 0.200000003f);
                        }
                        t70 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t70 - 1);
                        if ((int)(short)(t70 - 1) <= 0) {
                            t202 = (FUN_0c03f346(a4));
                        } else {
                            t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                        }
                    }
                } else {
                    t77 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t77 + 0x1);
                    if ((int)(short)(t77 + 0x1) <= (int)0xA) {
                        t78 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t78))->v) = (((((struct o8C_float *)(t78))->v)) + 0.200000003f);
                    }
                    t86 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t86 - 1);
                    if ((int)(short)(t86 - 1) <= 0) {
                        t202 = (FUN_0c03f346(a4));
                    } else {
                        t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                    }
                }
            } else {
                t93 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                t202 = (FUN_0c03f346(a4));
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t102 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
        (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -5.5f;
        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        FUN_0c187798();
        FUN_0c0e2390((0x41C + a4), (0x41C + a4), (a4 + 0x4C));
        FUN_0c0e2390((((int)stk + 0) + 0xC), (a4 + 0x28), (0x41C + a4));
        u108 = *(float *)(((int)stk + 12));
        u109 = *(float *)(((int)stk + 20));
        u110 = (u109 * u109);
        u110 = u110 + u108 * u108;
        t111 = math_signed_sqrt(u110);
        *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
        u116 = t111;
        if (t111 == 0.0f) {
            u116 = 9.99999975e-06f;
        }
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / u116)));
        FUN_0c187798();
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t122 = *(signed char *)((a4 + 0x132)), t122 == 0)) {
            if (((((struct o404_int *)(a4))->v)) != 0) {
                FUN_0c187798();
                t127 = FUN_0c17c450((((int)stk + 0) + 0xC));
                if (t127 != 0.0f) {
                    FUN_0c187798();
                    t129 = FUN_0c17c450(((int)stk + 0));
                    if (t129 != 0.0f) {
                        t130 = FUN_0c0e2220((((int)stk + 0) + 0xC), ((int)stk + 0));
                        if (-0.0871559978f > t130) {
                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4B);
                            t133 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                            t202 = (FUN_0c03f346(a4));
                        } else {
                            t135 = *(short *)((a4 + 0x1E));
                            *(unsigned short *)((a4 + 0x1E)) = (t135 + 0x1);
                            if ((int)(short)(t135 + 0x1) <= (int)0xA) {
                                t136 = (((struct oC8_int *)(a4))->v);
                                (((struct o8C_float *)(t136))->v) = (((((struct o8C_float *)(t136))->v)) + 0.200000003f);
                            }
                            t144 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t144 - 1);
                            if ((int)(short)(t144 - 1) <= 0) {
                                t202 = (FUN_0c03f346(a4));
                            } else {
                                t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                            }
                        }
                    } else {
                        t151 = *(short *)((a4 + 0x1E));
                        *(unsigned short *)((a4 + 0x1E)) = (t151 + 0x1);
                        if ((int)(short)(t151 + 0x1) <= (int)0xA) {
                            t152 = (((struct oC8_int *)(a4))->v);
                            (((struct o8C_float *)(t152))->v) = (((((struct o8C_float *)(t152))->v)) + 0.200000003f);
                        }
                        t160 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t160 - 1);
                        if ((int)(short)(t160 - 1) <= 0) {
                            t202 = (FUN_0c03f346(a4));
                        } else {
                            t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                        }
                    }
                } else {
                    t167 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t167 + 0x1);
                    if ((int)(short)(t167 + 0x1) <= (int)0xA) {
                        t168 = (((struct oC8_int *)(a4))->v);
                        (((struct o8C_float *)(t168))->v) = (((((struct o8C_float *)(t168))->v)) + 0.200000003f);
                    }
                    t176 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t176 - 1);
                    if ((int)(short)(t176 - 1) <= 0) {
                        t202 = (FUN_0c03f346(a4));
                    } else {
                        t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                    }
                }
            } else {
                t183 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t183 + 0x1);
                if ((int)(short)(t183 + 0x1) <= (int)0xA) {
                    t184 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t184))->v) = (((((struct o8C_float *)(t184))->v)) + 0.200000003f);
                }
                t192 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t192 - 1);
                if ((int)(short)(t192 - 1) <= 0) {
                    t202 = (FUN_0c03f346(a4));
                } else {
                    t202 = (FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C)));
                }
            }
        } else {
            t199 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
            t202 = (FUN_0c03f346(a4));
        }
    }
    return t202;
}
