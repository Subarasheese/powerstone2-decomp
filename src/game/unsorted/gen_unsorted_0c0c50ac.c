/* game/unsorted: functions 0C0C50AC-0C0C57BC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o420_short { char p[0x420]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c059df2(int, int);
extern int FUN_0c07e328();
int FUN_0c0c213c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0c50ac(int a4, int a5, int a6, int a7);
int FUN_0c0c51d4(int a4);
int FUN_0c0c5286(int a4);
int FUN_0c0c5326(int a4, int a5, int a6, int a7);

int FUN_0c0c50ac(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
    (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFF0;
    FUN_0c0c25c4(a4);
    FUN_0c179ac0();
    u0 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    (((struct o4C_float *)(a4))->v) = (-(u0 * 5.0f));
    (((struct o50_float *)(a4))->v) = 10.0f;
    u0 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    (((struct o54_float *)(a4))->v) = (-(u0 * 5.0f));
    (((struct o58_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 180.0f);
    (((struct o5C_float *)(a4))->v) = -2.0f;
    (((struct o60_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 180.0f);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o426_ushort *)(a4))->v) = 0x0;
    t1 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t1 != 34) {
        if ((unsigned char)t1 != 13) {
            if ((unsigned char)t1 != 41) {
                t2 = (unsigned char)t1;
                if ((unsigned char)t1 != 69) {
                } else {
                    *(unsigned int *)((a4 + 0x3C)) = 0x0;
                    *(unsigned int *)((a4 + 0x38)) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = 0x0;
                    (((struct o50_float *)(a4))->v) = 20.0f;
                    t2 = 0x50;
                }
                return t2;
            }
            return FUN_0c059df2((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))), 0x62);
        }
        return FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x46);
    }
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    return (unsigned char)t1;
}

int FUN_0c0c51d4(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c0c2ce4(a4);
        if (t0 != 0) {
            if (((((struct o420_short *)(a4))->v)) != 0) {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                if ((short)(t0 + 0x1) == 2) {
                    if ((int)(*(signed char *)((a4 + 0x425))) > (int)0x3) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        return 0x0;
                    }
                    return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
                }
                u0 = ((((struct o50_float *)(a4))->v));
                u0 *= -0.5f;
                (((struct o50_float *)(a4))->v) = u0;
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                t0 = *(signed char *)((a4 + 0x41C));
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 != 69) {
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x16C);
                    t0 = *(int *)((a4 + 0x3C));
                    *(unsigned int *)((a4 + 0x3C)) = (t0 + 0x222);
                    t1 = (t0 + 0x222);
                }
                return t1;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            return 0x0;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(signed char *)((a4 + 0x41C));
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 69) {
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x16C);
        t0 = *(int *)((a4 + 0x3C));
        *(unsigned int *)((a4 + 0x3C)) = (t0 + 0x222);
        t1 = (t0 + 0x222);
    }
    return t1;
}

int FUN_0c0c5286(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x1E) {
        return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
    }
    return (short)(t0 + 0x1);
}

int FUN_0c0c5326(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x15));
    switch (t1) {
    case 0:
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134));
        if ((t1 != 0) && ((signed char)t1 != 1)) {
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            t2 = ((int (*)(int, int))(FUN_0c07e328))(a4, t1);
            FUN_0c0c213c(a4);
            t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3721));
            if (((unsigned char)t1 != 20) && ((unsigned char)t1 != 21)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            } else {
                if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x16))) != 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x2;
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
        }
        break;
    case 1:
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
            (((struct o125_uchar *)(a4))->v) = 0x0;
        }
        break;
    case 2:
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x131))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0xD;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    case 3:
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t1 = 0xA9;
            if ((unsigned char)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3721))) == 20) {
                t1 = 0xA8;
            }
            t2 = ((int (*)(int, int, int))(FUN_0c07e328))(a4, t1, a6);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    }
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
