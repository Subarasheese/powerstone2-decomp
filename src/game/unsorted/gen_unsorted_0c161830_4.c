/* game/unsorted: functions 0C161830-0C163134, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
extern int FUN_0c03f346();
int FUN_0c059df2(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c1512a0(int, int);
int FUN_0c16328c(int, int, int, float);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
int FUN_0c17c130(int, int, int);
int FUN_0c1629b0(int a4, int a5, int a6, int a7);

int FUN_0c1629b0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    int t3;
    int t4;
    register int t5;
    int t6;
    int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;

    t8 = *(signed char *)((a4 + 0x14));
    if (t8 != 0) {
        if (t8 != 1) {
            return t8;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            if ((*(short *)((a4 + 0x1E))) == 0) {
                (((struct o12E_ushort *)(a4))->v) = 0xF0;
            }
        }
        t8 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
        if ((int)(short)(t8 - 1) <= 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t8 = *(signed char *)((a4 + 0x15));
        if (t8 != 0) {
            if (t8 != 1) {
                return t8;
            }
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = *(signed char *)((a4 + 0x132)), t0 == 0)) {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4B);
                    FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, (1.0f + 1.0f));
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) <= (int)0xA) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.200000003f);
                }
                return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            }
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            FUN_0c1512a0(0xA, (a4 + 0x28));
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t1 = *(signed char *)((a4 + 0x132)), t1 == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0))) {
            if ((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) && (t3 = *(int *)0xC532488, (int)t3 > (int)0x14)) {
                FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, ((((struct o60_float *)(a4))->v)));
            }
            if (((((struct o22_short *)(a4))->v)) != 0) {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            } else {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
                u0 = (((struct o4C_float *)(a4))->v);
                u1 = (((struct o54_float *)(a4))->v);
                u2 = (u1 * u1);
                u2 = u2 + u0 * u0;
                u0 = math_signed_sqrt(u2);
                *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
                u1 = u0;
                if (u0 == 0.0f) {
                    u1 = 9.99999975e-06f;
                }
                *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-((((struct o50_float *)(a4))->v))) / u1)));
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        u0 = (((struct o4C_float *)(a4))->v);
        u1 = (((struct o54_float *)(a4))->v);
        u2 = (u1 * u1);
        u2 = u2 + u0 * u0;
        u0 = math_signed_sqrt(u2);
        *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o50_float *)(a4))->v)) / u0)));
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0xF;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = -16.5f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0xF;
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            if ((*(short *)((a4 + 0x1E))) == 0) {
                (((struct o12E_ushort *)(a4))->v) = 0xF0;
            }
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t4 = *(signed char *)((a4 + 0x132)), t4 == 0)) {
                if (((((struct o404_int *)(a4))->v)) != 0) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4B);
                    FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, (1.0f + 1.0f));
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) <= (int)0xA) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.200000003f);
                }
                return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            }
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        t0 = FUN_0c064ee4(a4, 0x2);
        if (t0 != 0) {
            FUN_0c1512a0(0xA, (a4 + 0x28));
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t5 = *(signed char *)((a4 + 0x132)), t5 == 0) && (t6 = (((struct o404_int *)(a4))->v), t6 == 0))) {
            if ((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) && (t7 = *(int *)0xC532488, (int)t7 > (int)0x14)) {
                FUN_0c150010((a4 + 0x28), 1.0f, 1.0f, 1.0f, ((((struct o60_float *)(a4))->v)));
            }
            if (((((struct o22_short *)(a4))->v)) != 0) {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            } else {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((struct o5C_float *)(a4))->v)));
                u0 = (((struct o4C_float *)(a4))->v);
                u1 = (((struct o54_float *)(a4))->v);
                u2 = (u1 * u1);
                u2 = u2 + u0 * u0;
                u0 = math_signed_sqrt(u2);
                *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v))));
                u1 = u0;
                if (u0 == 0.0f) {
                    u1 = 9.99999975e-06f;
                }
                *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16(((-((((struct o50_float *)(a4))->v))) / u1)));
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
    }
    FUN_0c16328c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x2, 0.200000003f);
    return ((int (*)(int))(FUN_0c03f346))(a4);
}
