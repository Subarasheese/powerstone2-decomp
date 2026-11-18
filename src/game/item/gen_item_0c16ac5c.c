/* game/item: functions 0C16AC5C-0C16BD10, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058542(int, float);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c0e2240(int, int);
int FUN_0c187798(void);
int FUN_0c16ac5c(int a4);
int FUN_0c16ad22(int a4, int a5, int a6, int a7);
int FUN_0c16af78(int a4, int a5, int a6);
int FUN_0c16af86(int a4, int a5, int a6, int a7);
int FUN_0c16afb6(int a4, float f4);
int FUN_0c16b01e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c16b224(int a4, int a5, int a6, int a7);


int FUN_0c16ad22(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x4;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t0 = *(int *)((a4 + 0x38));
                    *(unsigned int *)((a4 + 0x38)) = (t0 - 546);
                    (((struct o4C_float *)(a4))->v) = ((math_cos_angle16((t0 - 546))) * 5.0f);
                    (((struct o54_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xC16);
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x93E);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.00999999978f);
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.00999999978f);
                    t0 = 0x40;
                    if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = *(int *)((a4 + 0x38));
            *(unsigned int *)((a4 + 0x38)) = (t0 - 546);
            (((struct o4C_float *)(a4))->v) = ((math_cos_angle16((t0 - 546))) * 5.0f);
            (((struct o54_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xC16);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x93E);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        t0 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t0 - 546);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16((t0 - 546))) * 5.0f);
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xC16);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x93E);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.00999999978f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00999999978f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
        t0 = 0x40;
        if (1.0f > ((((struct o40_float *)(a4))->v))) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(signed char *)((a4 + 0x2))) * 7864320.0f) / 360.0f);
    (((struct o40_float *)(a4))->v) = 0.300000012f;
    (((struct o44_float *)(a4))->v) = 0.300000012f;
    (((struct o48_float *)(a4))->v) = 0.300000012f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c16af78(int a4, int a5, int a6)
{
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
    return a6;
}

int FUN_0c16af86(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c16afb6(int a4, float f4)
{
    register int t1;
    register int t2;
    register int t3;
    register float u5;
    register float u6;
    register int t13;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    u5 = f4;
    u6 = (*(float *)0xC16B048);
    for (;;) {
        if ((*(signed char *)((a4 + 0x1))) != (*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x1)))) {
            t1 = a4;
            t1 = (t1 + 0x28);
            u5 = ((FUN_0c0e2240(t1, (((t3 * 0x3938) + 0xC532498) + 0x28))));
            if (!(u5 > u6)) {
                u6 = u5;
                t2 = t3;
            }
        } else {
            t13 = t1;
        }
        t3 = (t3 + 0x1);
        t1 = t13;
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return t2;
}

int FUN_0c16b01e(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = *(signed char *)((a4 + 0x15));
            switch (t0) {
            case 0:
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.100000001f);
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                if (!(1.0f > ((((struct oBC_float *)(a4))->v)))) {
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    (((struct o20_ushort *)(a4))->v) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 1:
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 2:
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                    (((struct oB8_float *)(a4))->v) = 0.0f;
                    (((struct oB4_float *)(a4))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                break;
            }
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
            (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = FUN_0c16af86(a4, 0x4, 0x0, 0x7);
            if (t0 != 0) {
                FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x9, (*(int *)0xC4B40CC));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x231;
        (((struct o48_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (*(int *)((0xC203BA4 + ((*(signed char *)(((0x41C + a4) + 0x2))) << 2)))));
        FUN_0c16af78(a4, 0x4, 0x0);
        FUN_0c058542(a4, 15.0f);
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.5f;
        (((struct o44_float *)(a4))->v) = 0.5f;
        (((struct o40_float *)(a4))->v) = 0.5f;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((t0 << 2) + t0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
        t1 = 0x12A;
    }
    return t1;
}

int FUN_0c16b224(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = FUN_0c16af86(a4, 0x4, 0x3, 0x6);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x43, (*(int *)0xC4B40CC));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
