/* game/unsorted: functions 0C0EEA6C-0C0EEDCE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
int math_vec3_accumulate(int, int);
int FUN_0c0eea6c(int a4, int a5, int a6, int a7);

int FUN_0c0eea6c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    float u1;
    register float u2;
    float u3;
    register float u4;
    register float u5;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
        if ((int)(short)(t2 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x3C);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) ^ 0x1);
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0166666675f);
            (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.0166666675f);
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0166666675f);
            if (0.0f > ((((struct oB4_float *)(a4))->v))) {
                (((struct oB4_float *)(a4))->v) = 0.0f;
            }
            if (0.0f > ((((struct oB8_float *)(a4))->v))) {
                (((struct oB8_float *)(a4))->v) = 0.0f;
            }
            if (0.0f > ((((struct oBC_float *)(a4))->v))) {
                (((struct oBC_float *)(a4))->v) = 0.0f;
            }
        } else {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.0166666675f);
            (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) + 0.0166666675f);
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0166666675f);
            if (((((struct oB4_float *)(a4))->v)) > 1.0f) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
            }
            if (((((struct oB8_float *)(a4))->v)) > 1.0f) {
                (((struct oB8_float *)(a4))->v) = 1.0f;
            }
            if (((((struct oBC_float *)(a4))->v)) > 1.0f) {
                (((struct oBC_float *)(a4))->v) = 1.0f;
            }
        }
        u4 = *(float *)((0xC1CD234 + ((*(signed char *)((a4 + 0x2))) << 2)));
        u5 = (((struct o28_float *)(a4))->v);
        if (!(-1500.0f > u5) && (!(u5 > 1500.0f) && ((u0 = (((struct o30_float *)(a4))->v), !(-1500.0f > u0)) && (u1 = (((struct o30_float *)(a4))->v), !(u1 > 1500.0f))))) {
            if (!((u4 + -50.0f) > ((((struct o2C_float *)(a4))->v)))) {
                if (((((struct o2C_float *)(a4))->v)) > (u4 + 800.0f)) {
                    (((struct o28_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
                    (((struct o30_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
                    (((struct o2C_float *)(a4))->v) = ((u4 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC8))) + 200.0f);
                }
            } else {
                (((struct o28_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
                (((struct o30_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
                (((struct o2C_float *)(a4))->v) = ((u4 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC8))) + 200.0f);
            }
        } else {
            (((struct o28_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
            (((struct o30_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
            (((struct o2C_float *)(a4))->v) = ((u4 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC8))) + 200.0f);
        }
        t2 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t2 - 1);
        if ((int)(short)(t2 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
            t2 = (int)((int)(FUN_0c179ac0()) % (int)0x3);
            if (t2 != 0) {
                if (t2 != 1) {
                    t2 = FUN_0c179ac0();
                    t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                    if ((int)t2 >= 0) {
                        t3 = (t2 & 0x1);
                    }
                    u0 = 0.100000001f;
                    if (t3 != 0) {
                        u0 = -0.100000001f;
                    }
                    t2 = 0x60;
                    u1 = u0;
                } else {
                    t3 = FUN_0c179ac0();
                    t4 = ((~(((~t3) + 0x1) & 0x1)) + 0x1);
                    if ((int)t3 >= 0) {
                        t4 = (t3 & 0x1);
                    }
                    u0 = 0.150000006f;
                    if (t4 != 0) {
                        u0 = -0.100000001f;
                    }
                    t2 = 0x5C;
                    u1 = u0;
                }
                t3 = t2;
                u0 = u1;
            } else {
                t2 = FUN_0c179ac0();
                t4 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t4 = (t2 & 0x1);
                }
                u1 = 0.100000001f;
                if (t4 != 0) {
                    u1 = -0.100000001f;
                }
                t3 = 0x58;
                u0 = u1;
            }
            *(float *)((a4 + t3)) = u0;
        }
        if (((((struct o4C_float *)(a4))->v)) > 4.0f) {
            (((struct o4C_float *)(a4))->v) = 4.0f;
        }
        if (((((struct o50_float *)(a4))->v)) > (1.0f + 1.0f)) {
            (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
        }
        if (((((struct o54_float *)(a4))->v)) > 4.0f) {
            (((struct o54_float *)(a4))->v) = 4.0f;
        }
        if (-4.0f > ((((struct o4C_float *)(a4))->v))) {
            (((struct o4C_float *)(a4))->v) = -4.0f;
        }
        if (-2.0f > ((((struct o50_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = -2.0f;
        }
        if (-4.0f > ((((struct o54_float *)(a4))->v))) {
            (((struct o54_float *)(a4))->v) = -4.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t2 = *(signed char *)((a4 + 0x2));
        t3 = t2;
        if ((t2 != 0) && ((t2 == 1) && (t0 = *(signed char *)0xC54098D, (int)t0 >= (int)0xC))) {
            t2 = 0xE;
            if ((int)t0 <= (int)0xE) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t2 = 0x14;
            }
            t3 = t2;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC1CD234 + ((*(signed char *)((a4 + 0x2))) << 2))));
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        *(unsigned int *)((a4 + 0x10)) = (*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94)));
    }
    (((struct oAC_ushort *)(a4))->v) = 0x31;
    *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x3C);
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
    (((struct oBC_float *)(a4))->v) = 1.0f;
    (((struct oB8_float *)(a4))->v) = 1.0f;
    (((struct oB4_float *)(a4))->v) = 1.0f;
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0x14)) + 0x3C);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) ^ 0x1);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0166666675f);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.0166666675f);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0166666675f);
        if (0.0f > ((((struct oB4_float *)(a4))->v))) {
            (((struct oB4_float *)(a4))->v) = 0.0f;
        }
        if (0.0f > ((((struct oB8_float *)(a4))->v))) {
            (((struct oB8_float *)(a4))->v) = 0.0f;
        }
        if (0.0f > ((((struct oBC_float *)(a4))->v))) {
            (((struct oBC_float *)(a4))->v) = 0.0f;
        }
    } else {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.0166666675f);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) + 0.0166666675f);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0166666675f);
        if (((((struct oB4_float *)(a4))->v)) > 1.0f) {
            (((struct oB4_float *)(a4))->v) = 1.0f;
        }
        if (((((struct oB8_float *)(a4))->v)) > 1.0f) {
            (((struct oB8_float *)(a4))->v) = 1.0f;
        }
        if (((((struct oBC_float *)(a4))->v)) > 1.0f) {
            (((struct oBC_float *)(a4))->v) = 1.0f;
        }
    }
    u0 = *(float *)((0xC1CD234 + ((*(signed char *)((a4 + 0x2))) << 2)));
    u1 = (((struct o28_float *)(a4))->v);
    if (!(-1500.0f > u1) && (!(u1 > 1500.0f) && ((u2 = (((struct o30_float *)(a4))->v), !(-1500.0f > u2)) && (u3 = (((struct o30_float *)(a4))->v), !(u3 > 1500.0f))))) {
        if (!((u0 + -50.0f) > ((((struct o2C_float *)(a4))->v)))) {
            if (((((struct o2C_float *)(a4))->v)) > (u0 + 800.0f)) {
                (((struct o28_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
                (((struct o30_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
                (((struct o2C_float *)(a4))->v) = ((u0 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC8))) + 200.0f);
            }
        } else {
            (((struct o28_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
            (((struct o30_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
            (((struct o2C_float *)(a4))->v) = ((u0 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC8))) + 200.0f);
        }
    } else {
        (((struct o28_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
        (((struct o30_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) + -100.0f);
        (((struct o2C_float *)(a4))->v) = ((u0 + (float)((int)((int)(FUN_0c179ac0()) % (int)0xC8))) + 200.0f);
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x3);
        if (t0 != 0) {
            if (t0 != 1) {
                t0 = FUN_0c179ac0();
                t2 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                if ((int)t0 >= 0) {
                    t2 = (t0 & 0x1);
                }
                u0 = 0.100000001f;
                if (t2 != 0) {
                    u0 = -0.100000001f;
                }
                t0 = 0x60;
                u1 = u0;
            } else {
                t2 = FUN_0c179ac0();
                t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x1);
                }
                u0 = 0.150000006f;
                if (t3 != 0) {
                    u0 = -0.100000001f;
                }
                t0 = 0x5C;
                u1 = u0;
            }
            t2 = t0;
            u0 = u1;
        } else {
            t0 = FUN_0c179ac0();
            t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t3 = (t0 & 0x1);
            }
            u1 = 0.100000001f;
            if (t3 != 0) {
                u1 = -0.100000001f;
            }
            t2 = 0x58;
            u0 = u1;
        }
        *(float *)((a4 + t2)) = u0;
    }
    if (((((struct o4C_float *)(a4))->v)) > 4.0f) {
        (((struct o4C_float *)(a4))->v) = 4.0f;
    }
    if (((((struct o50_float *)(a4))->v)) > (1.0f + 1.0f)) {
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
    }
    if (((((struct o54_float *)(a4))->v)) > 4.0f) {
        (((struct o54_float *)(a4))->v) = 4.0f;
    }
    if (-4.0f > ((((struct o4C_float *)(a4))->v))) {
        (((struct o4C_float *)(a4))->v) = -4.0f;
    }
    if (-2.0f > ((((struct o50_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = -2.0f;
    }
    if (-4.0f > ((((struct o54_float *)(a4))->v))) {
        (((struct o54_float *)(a4))->v) = -4.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = *(signed char *)((a4 + 0x2));
    t2 = t0;
    if ((t0 != 0) && ((t0 == 1) && (t1 = *(signed char *)0xC54098D, (int)t1 >= (int)0xC))) {
        t0 = 0xE;
        if ((int)t1 <= (int)0xE) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t0 = 0x14;
        }
        t2 = t0;
    }
    return t2;
}
