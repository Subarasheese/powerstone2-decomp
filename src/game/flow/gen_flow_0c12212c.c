/* game/flow: functions 0C12212C-0C1224CC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o80_short { char p[0x80]; short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c05aae4(int, int);
int FUN_0c14f824(int, int, int);
int FUN_0c1615b6(int, int, int, float);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(int);
int FUN_0c12212c(int a4, int a5, int a6);

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
    int t130;
    register int t132;
    register int t134;
    register int t136;
    register int t138;
    register float u141;
    register float u142;
    register float u143;
    register float t144;
    register int t146;
    register int t148;
    register int t150;
    register int t152;
    register int t154;
    register float t186;
    register float u189;
    register float t191;
    register float u194;
    register int t203;
    register int t213;
    register int t50;
    int t51;
    register int t68;
    int t69;
    register int t204;
    int t205;

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
            t213 = 0x404;
            if (((short)(t49 - 1) != 0) && ((t50 = *(signed char *)((a4 + 0x131)), t50 == 0) && (t51 = (((struct o404_int *)(a4))->v), t51 == 0))) {
            } else {
                FUN_0c05aae4(0xD0, (a4 + 0x28));
                *(unsigned short *)((a4 + 0x1C)) = 0x5;
                (((struct o14_uchar *)(a4))->v) = 0x4;
                t213 = 0x14;
            }
        } else {
            if (t40 == 3) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                t67 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t67 - 1);
                t213 = 0x404;
                if (((short)(t67 - 1) != 0) && ((t68 = *(signed char *)((a4 + 0x131)), t68 == 0) && (t69 = (((struct o404_int *)(a4))->v), t69 == 0))) {
                } else {
                    FUN_0c05aae4(0xD0, (a4 + 0x28));
                    *(unsigned short *)((a4 + 0x1C)) = 0x5;
                    (((struct o14_uchar *)(a4))->v) = 0x4;
                    t213 = 0x14;
                }
            } else {
                if (t40 == 4) {
                    FUN_0c1615b6(a4, (a4 + 0x28), 0x0, (1.0f + 1.0f));
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t213 = 0x14;
                } else {
                    t213 = t40;
                    if (t40 == 5) {
                        t213 = (FUN_0c03f346(a4));
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
                *(volatile int *)(((int)stk + 0));
                FUN_0c187798(t114);
                (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) + 100.0f);
                (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - ((((struct o28_float *)(a4))->v)));
                (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o2C_float *)(a4))->v)));
                (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o30_float *)(a4))->v)));
                if (((((struct o4_float *)(((int)stk + 0)))->v)) == 0.0f) {
                    (((struct o4_float *)(((int)stk + 0)))->v) = 9.99999997e-07f;
                }
                t130 = math_atan_angle16(((-((((struct o8_float *)((((int)stk + 0) + 0x4)))->v))) / ((((struct o4_float *)(((int)stk + 0)))->v))));
                t132 = (0xFFFF & t130);
                if (0.0f > ((((struct o4_float *)(((int)stk + 0)))->v))) {
                    t132 = ((0xFFFF & t130) + 0x8000);
                }
                t134 = *(int *)((a4 + 0x38));
                t136 = (unsigned short)((unsigned short)(0x4000 + t132) - t134);
                if (((unsigned short)((unsigned short)(0x4000 + t132) - t134) & 0x8000) != 0) {
                    t136 = ((unsigned short)((unsigned short)(0x4000 + t132) - t134) | 0xFFFF0000);
                }
                t138 = 0xFFFFFDDE;
                if ((int)t136 > 0) {
                    t138 = 0x222;
                }
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + t138);
                u141 = (((struct o8_float *)((((int)stk + 0) + 0x4)))->v);
                u142 = (((struct o4_float *)(((int)stk + 0)))->v);
                u143 = (u141 * u141);
                u143 = u143 + u142 * u142;
                t144 = math_signed_sqrt(u143);
                t146 = math_atan_angle16(((-t144) / ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))));
                t148 = t146;
                if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v))) {
                    t148 = (t146 + 0x8000);
                }
                t150 = *(int *)((a4 + 0x34));
                t152 = (unsigned short)((-(unsigned short)(0x4000 + t148)) - t150);
                if ((0x8000 & (unsigned short)((-(unsigned short)(0x4000 + t148)) - t150)) != 0) {
                    t152 = ((unsigned short)((-(unsigned short)(0x4000 + t148)) - t150) | 0xFFFF0000);
                }
                t154 = 0xFFFFFDDE;
                if ((int)t152 > 0) {
                    t154 = 0x222;
                }
                *(unsigned int *)((a4 + 0x34)) = (unsigned short)((*(int *)((a4 + 0x34))) + t154);
            }
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t186 = math_sin_angle16((*(int *)((a4 + 0x38))));
        u189 = (t186 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
        (((struct o4C_float *)(a4))->v) = (u189 * 20.0f);
        t191 = math_cos_angle16((*(int *)((a4 + 0x38))));
        u194 = (t191 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
        (((struct o54_float *)(a4))->v) = (u194 * 20.0f);
        (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * 20.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        t203 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t203 - 1);
        t213 = 0x404;
        if (((short)(t203 - 1) != 0) && ((t204 = *(signed char *)((a4 + 0x131)), t204 == 0) && (t205 = (((struct o404_int *)(a4))->v), t205 == 0))) {
        } else {
            FUN_0c05aae4(0xD0, (a4 + 0x28));
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = 0x4;
            t213 = 0x14;
        }
    }
    return t213;
}
