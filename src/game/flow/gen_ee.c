/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_short { char p[0x80]; short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c05aae4(int, int);
int FUN_0c14f824(int, int, int);
int FUN_0c1501f2(int, int, int, float, float, float, float);
int FUN_0c1615b6(int, int, int, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int FUN_0c122960(int a4, float f4);
int FUN_0c12212c(int a4, int a5, int a6);

int FUN_0c122960(int a4, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t11;
    register int t13;
    register int t15;
    register int t25;
    register int t61;
    register float u180;
    register int t92;
    int t106;
    register int t108;
    register int t110;
    register int t112;
    register int t114;
    register float u117;
    register float u118;
    register float u119;
    register float t120;
    register int t122;
    register int t124;
    register int t126;
    register int t128;
    register int t130;
    register float u167;
    register float t186;
    register float u189;
    register float t191;
    register float u194;
    register int t203;
    register int t209;
    register int t211;
    int t71;
    int t204;
    register int t232;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
    if ((short)(t1 - 1) == 0) {
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    }
    if ((*(signed char *)(((0x41C + a4) + 0x0))) != 0) {
        if (((int)((int)((*(signed char *)(((0x41C + a4) + 0x0))) + ((((struct o22_short *)(a4))->v))) % (int)0xA)) == 0) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            t11 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t11))->v) = (((((struct o84_float *)(t11))->v)) + 0.100000001f);
            t13 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t13))->v) = (((((struct o88_float *)(t13))->v)) + 0.100000001f);
            t15 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t15))->v) = (((((struct o8C_float *)(t15))->v)) + 0.100000001f);
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        t25 = *(signed char *)(((0x41C + a4) + 0x0));
        (((struct o41C_uchar *)(a4))->v) = (t25 - 1);
        if ((signed char)(t25 - 1) == 0) {
            (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.20000005f;
            (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.20000005f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.699999988f;
        }
        if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x14)) == 0) {
            if ((int)(*(int *)0xC532488) <= (int)0x14) {
            } else {
                FUN_0c1501f2((a4 + 0x28), 0x9, 0x1, 1.0f, 1.0f, 1.0f, 1.60000002f);
            }
        }
    } else {
        t61 = *(signed char *)(((0x41C + a4) + 0x1));
        *(unsigned char *)(((0x41C + a4) + 0x1)) = (t61 + 0x1);
        if ((((signed char)(t61 + 0x1) + ((((struct o22_short *)(a4))->v))) & 3) != 0) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        }
        if ((((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xA)) == 0) && (t71 = *(int *)0xC532488, (int)t71 > (int)0x14)) {
            FUN_0c1501f2((a4 + 0x28), 0x9, 0x1, 1.0f, 1.0f, 1.0f, 1.60000002f);
        }
    }
    u180 = 35.0f;
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) != 0) {
    } else {
        t92 = *(short *)((a4 + 0x1C));
        if ((int)t92 < (int)0x7) {
        } else {
            if ((int)t92 >= (int)0x28) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
                *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((((int)stk + 0) + 0x0))) - ((((struct o28_float *)(a4))->v)));
                (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o2C_float *)(a4))->v)));
                (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(((int)stk + 0)))->v)) - ((((struct o30_float *)(a4))->v)));
                (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) + 100.0f);
                if ((*(float *)((((int)stk + 0) + 0x0))) == 0.0f) {
                    *(float *)((((int)stk + 0) + 0x0)) = 9.99999997e-07f;
                }
                t106 = ((int (*)(Stk3, float))(math_atan_angle16))(*(Stk3 *)(((int)stk + 0)), ((-((((struct o8_float *)(((int)stk + 0)))->v))) / (*(float *)((((int)stk + 0) + 0x0)))));
                t108 = (0xFFFF & t106);
                if (0.0f > (*(float *)((((int)stk + 0) + 0x0)))) {
                    t108 = ((0xFFFF & t106) + 0x8000);
                }
                t110 = *(int *)((a4 + 0x38));
                t112 = (unsigned short)((unsigned short)(0x4000 + t108) - t110);
                if (((unsigned short)((unsigned short)(0x4000 + t108) - t110) & 0x8000) != 0) {
                    t112 = ((unsigned short)((unsigned short)(0x4000 + t108) - t110) | 0xFFFF0000);
                }
                t114 = 0xFFFFFDDE;
                if ((int)t112 > 0) {
                    t114 = 0x222;
                }
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t114);
                u117 = (((struct o8_float *)(((int)stk + 0)))->v);
                u118 = *(float *)((((int)stk + 0) + 0x0));
                u119 = (u117 * u117);
                u119 = u119 + u118 * u118;
                t120 = math_signed_sqrt(u119);
                t122 = ((int (*)(float))(math_atan_angle16))(((-t120) / ((((struct o4_float *)(((int)stk + 0)))->v))));
                t124 = t122;
                if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
                    t124 = (t122 + 0x8000);
                }
                t126 = *(int *)((a4 + 0x34));
                t128 = (unsigned short)((-(unsigned short)(0x4000 + t124)) - t126);
                if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t124)) - t126)) != 0) {
                    t128 = ((unsigned short)((-(unsigned short)(0x4000 + t124)) - t126) | 0xFFFF0000);
                }
                t130 = 0xFFFFFDDE;
                if ((int)t128 > 0) {
                    t130 = 0x222;
                }
                *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t130);
            }
        }
        u167 = 35.0f;
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x2))) == 0) {
            u167 = 20.0f;
        }
        u180 = u167;
    }
    t186 = math_sin_angle16((*(int *)((a4 + 0x38))));
    u189 = (t186 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
    (((struct o4C_float *)(a4))->v) = (u189 * u180);
    t191 = math_cos_angle16((*(int *)((a4 + 0x38))));
    u194 = (t191 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
    (((struct o54_float *)(a4))->v) = (u194 * u180);
    (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * u180));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    t203 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t203 + 0x1);
    if (((int)(short)(t203 + 0x1) < (int)0xB4) && (t204 = *(signed char *)((a4 + 0x131)), t204 == 0)) {
        t209 = *(short *)((a4 + 0x1C));
        t232 = t209;
        if ((int)t209 > (int)0xA) {
            t211 = (((struct o404_int *)(a4))->v);
            t232 = t211;
            if (t211 != 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o14_uchar *)(a4))->v) = 0x4;
                FUN_0c05aae4(0xD0, (a4 + 0x28));
                FUN_0c1615b6(a4, (a4 + 0x28), 0x0, (1.0f + 1.0f));
                t232 = (FUN_0c03f346(a4));
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o14_uchar *)(a4))->v) = 0x4;
        FUN_0c05aae4(0xD0, (a4 + 0x28));
        FUN_0c1615b6(a4, (a4 + 0x28), 0x0, (1.0f + 1.0f));
        t232 = (FUN_0c03f346(a4));
    }
    return t232;
}

int FUN_0c12212c(int a4, int a5, int a6)
{
    int stk[4];
    register int t2;
    register int t4;
    register int t6;
    register int t9;
    register int t26;
    int t40;
    register int t49;
    register int t67;
    register int t114;
    int t129;
    register int t131;
    register int t133;
    register int t135;
    register int t137;
    register float u140;
    register float u141;
    register float u142;
    register float t143;
    register int t145;
    register int t147;
    register int t149;
    register int t151;
    register int t153;
    register float t185;
    register float u188;
    register float t190;
    register float u193;
    register int t202;
    register int t212;
    register int t50;
    int t51;
    register int t68;
    int t69;
    register int t203;
    int t204;

    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    if ((*(signed char *)(((0x41C + a4) + 0x0))) != 0) {
        t2 = (((struct oC8_int *)(a4))->v);
        (((struct o84_float *)(t2))->v) = (((((struct o84_float *)(t2))->v)) + 0.200000003f);
        t4 = (((struct oC8_int *)(a4))->v);
        (((struct o88_float *)(t4))->v) = (((((struct o88_float *)(t4))->v)) + 0.200000003f);
        t6 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t6))->v) = (((((struct o8C_float *)(t6))->v)) + 0.100000001f);
        (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) - 1);
    } else {
        t9 = *(signed char *)(((0x41C + a4) + 0x1));
        *(unsigned char *)(((0x41C + a4) + 0x1)) = (t9 + 0x1);
        if (((signed char)((t9 + 0x1) - 1) & 1) != 0) {
            (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.699999988f;
            (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.699999988f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.20000005f;
        } else {
            (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.29999995f;
            (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.29999995f;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.800000012f;
        }
    }
    t26 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t26))->v) = (unsigned short)(((((struct o80_short *)(t26))->v)) + 0x38E);
    if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x6)) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    t40 = *(signed char *)((a4 + 0x14));
    if ((t40 != 0) && (t40 != 1)) {
        if (t40 == 2) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t49 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t49 - 1);
            t212 = 0x404;
            if (((short)(t49 - 1) != 0) && ((t50 = *(signed char *)((a4 + 0x131)), t50 == 0) && (t51 = (((struct o404_int *)(a4))->v), t51 == 0))) {
            } else {
                FUN_0c05aae4(0xD0, (a4 + 0x28));
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                (((struct o14_uchar *)(a4))->v) = 0x4;
                t212 = 0x14;
            }
        } else {
            if (t40 == 3) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                t67 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t67 - 1);
                t212 = 0x404;
                if (((short)(t67 - 1) != 0) && ((t68 = *(signed char *)((a4 + 0x131)), t68 == 0) && (t69 = (((struct o404_int *)(a4))->v), t69 == 0))) {
                } else {
                    FUN_0c05aae4(0xD0, (a4 + 0x28));
                    *(unsigned short *)((a4 + 0x1C)) = 0x5;
                    (((struct o14_uchar *)(a4))->v) = 0x4;
                    t212 = 0x14;
                }
            } else {
                if (t40 == 4) {
                    FUN_0c1615b6(a4, (a4 + 0x28), 0x0, (1.0f + 1.0f));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t212 = 0x14;
                } else {
                    t212 = t40;
                    if (t40 == 5) {
                        t212 = (FUN_0c03f346(a4));
                    }
                }
            }
        }
    } else {
        t114 = (((struct o20_short *)(a4))->v);
        if ((int)t114 < (int)0x7) {
        } else {
            if ((int)t114 >= (int)0x28) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x380C)); }
                (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) + 100.0f);
                (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v)));
                (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o2C_float *)(a4))->v)));
                (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o30_float *)(a4))->v)));
                if (((((struct o4_float *)(((int)stk + 0)))->v)) == 0.0f) {
                    (((struct o4_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
                }
                t129 = math_atan_angle16(((-((((struct o8_float *)((((int)stk + 0) + 0x4)))->v))) / ((((struct o4_float *)(((int)stk + 0)))->v))));
                t131 = (0xFFFF & t129);
                if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
                    t131 = ((0xFFFF & t129) + 0x8000);
                }
                t133 = *(int *)((a4 + 0x38));
                t135 = (unsigned short)((unsigned short)(0x4000 + t131) - t133);
                if (((unsigned short)((unsigned short)(0x4000 + t131) - t133) & 0x8000) != 0) {
                    t135 = ((unsigned short)((unsigned short)(0x4000 + t131) - t133) | 0xFFFF0000);
                }
                t137 = 0xFFFFFDDE;
                if ((int)t135 > 0) {
                    t137 = 0x222;
                }
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t137);
                u140 = (((struct o8_float *)((((int)stk + 0) + 0x4)))->v);
                u141 = (((struct o4_float *)(((int)stk + 0)))->v);
                u142 = (u140 * u140);
                u142 = u142 + u141 * u141;
                t143 = math_signed_sqrt(u142);
                t145 = math_atan_angle16(((-t143) / ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))));
                t147 = t145;
                if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))) {
                    t147 = (t145 + 0x8000);
                }
                t149 = *(int *)((a4 + 0x34));
                t151 = (unsigned short)((-(unsigned short)(0x4000 + t147)) - t149);
                if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t147)) - t149)) != 0) {
                    t151 = ((unsigned short)((-(unsigned short)(0x4000 + t147)) - t149) | 0xFFFF0000);
                }
                t153 = 0xFFFFFDDE;
                if ((int)t151 > 0) {
                    t153 = 0x222;
                }
                *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t153);
            }
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t185 = math_sin_angle16((*(int *)((a4 + 0x38))));
        u188 = (t185 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
        (((struct o4C_float *)(a4))->v) = (u188 * 20.0f);
        t190 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u193 = (t190 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
        (((struct o54_float *)(a4))->v) = (u193 * 20.0f);
        (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * 20.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        t202 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t202 - 1);
        t212 = 0x404;
        if (((short)(t202 - 1) != 0) && ((t203 = *(signed char *)((a4 + 0x131)), t203 == 0) && (t204 = (((struct o404_int *)(a4))->v), t204 == 0))) {
        } else {
            FUN_0c05aae4(0xD0, (a4 + 0x28));
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = 0x4;
            t212 = 0x14;
        }
    }
    return t212;
}
