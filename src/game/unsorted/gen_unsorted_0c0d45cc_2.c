/* game/unsorted: functions 0C0D45CC-0C0D5220, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int);
int FUN_0c042fe0(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0d45cc(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0d4672(int a4);
int FUN_0c0d5030(int a4, int a5, int a6, int a7);

int FUN_0c0d4672(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c07ebd0((((short)t0 * (short)0x3938) + 0xC532498));
    if (t1 != 0) {
        t1 = *(short *)((0xC5413E8 + ((short)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))) * (short)0x2F8)));
        t2 = FUN_0c07eaf4((((short)t0 * (short)0x3938) + 0xC532498));
        t3 = *(int *)((a4 + 0x38));
        t4 = (unsigned short)((unsigned short)(t1 + t2) - t3);
        if ((0x8000 & (unsigned short)((unsigned short)(t1 + t2) - t3)) != 0) {
            t4 = ((unsigned short)((unsigned short)(t1 + t2) - t3) | 0xFFFF0000);
        }
        if ((int)t4 <= (int)0xFFFFFEEF) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x111);
        } else {
            if ((int)t4 >= (int)0x111) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x111);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1));
            }
        }
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t1 = 0x1;
    } else {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        t1 = 0x0;
    }
    (((struct o19_uchar *)(a4))->v) = t1;
    t1 = FUN_0c0c2ce4(a4);
    if (t1 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    if (!(((((struct o2C_float *)(a4))->v)) > (*(float *)0xC541098))) {
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
        t1 = 0xFFFFFFFF;
    } else {
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = ((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))) - (*(int *)((a4 + 0x38))));
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c0d5030(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        t4 = FUN_0c042fe0();
        if (t4 == 0) {
            t4 = *(signed char *)((a4 + 0x41D));
            if ((t4 != 9) && ((t4 != 10) && ((t4 != 6) && (t4 != 7)))) {
                (((struct oBC_float *)(a4))->v) = 1.0f;
                (((struct oB8_float *)(a4))->v) = 1.0f;
                (((struct oB4_float *)(a4))->v) = 1.0f;
                return 0xB4;
            }
            FUN_0c0d45cc(a4);
            t4 = *(signed char *)((a4 + 0x19));
            FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), (((((t4 << 1) + t4) << 2) << 2) + 0xC1C8010));
            if ((*(signed char *)((a4 + 0x19))) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((((((struct o20_short *)(a4))->v)) & 15) == 0) {
                    thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
                }
            } else {
                t4 = *(signed char *)((a4 + 0x19));
                if ((t4 == 0) && (t0 = *(signed char *)((a4 + 0x1A)), t4 != t0)) {
                    thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
                }
            }
        } else {
            FUN_0c0d45cc(a4);
            t0 = *(signed char *)((a4 + 0x19));
            FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), (((((t0 << 1) + t0) << 2) << 2) + 0xC1C8010));
            if ((*(signed char *)((a4 + 0x19))) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((((((struct o20_short *)(a4))->v)) & 15) == 0) {
                    thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
                }
            } else {
                t0 = *(signed char *)((a4 + 0x19));
                if ((t0 == 0) && (t1 = *(signed char *)((a4 + 0x1A)), t0 != t1)) {
                    thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
                }
            }
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned char *)((a4 + 0x3)) = 0x0;
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        (((struct o41C_uchar *)(a4))->v) = 0xC7;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
        (((struct o126_uchar *)(a4))->v) = 0x1;
        FUN_0c0c212c(a4);
        (((struct o5C_float *)(a4))->v) = -2.0f;
        FUN_0c187798();
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = FUN_0c042fe0();
        if (t0 == 0) {
            t0 = *(signed char *)((a4 + 0x41D));
            if ((t0 != 9) && ((t0 != 10) && ((t0 != 6) && (t0 != 7)))) {
                (((struct oBC_float *)(a4))->v) = 1.0f;
                (((struct oB8_float *)(a4))->v) = 1.0f;
                (((struct oB4_float *)(a4))->v) = 1.0f;
                return 0xB4;
            }
            FUN_0c0d45cc(a4);
            t0 = *(signed char *)((a4 + 0x19));
            FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), (((((t0 << 1) + t0) << 2) << 2) + 0xC1C8010));
            if ((*(signed char *)((a4 + 0x19))) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((((((struct o20_short *)(a4))->v)) & 15) == 0) {
                    thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
                }
            } else {
                t0 = *(signed char *)((a4 + 0x19));
                if ((t0 == 0) && (t2 = *(signed char *)((a4 + 0x1A)), t0 != t2)) {
                    thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
                }
            }
        } else {
            FUN_0c0d45cc(a4);
            t0 = *(signed char *)((a4 + 0x19));
            FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), (((((t0 << 1) + t0) << 2) << 2) + 0xC1C8010));
            if ((*(signed char *)((a4 + 0x19))) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((((((struct o20_short *)(a4))->v)) & 15) == 0) {
                    thunk_FUN_0c05abb2(0x4B, (a4 + 0x28));
                }
            } else {
                t0 = *(signed char *)((a4 + 0x19));
                if ((t0 == 0) && (t3 = *(signed char *)((a4 + 0x1A)), t0 != t3)) {
                    thunk_FUN_0c05abb2(0x4C, (a4 + 0x28));
                }
            }
        }
    }
    (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x19)));
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && (t0 != 10)))) {
                                if (t0 != 11) {
                                    return t0;
                                }
                                return FUN_0c03f346(a4);
                            }
                            return ((int (*)(int, int, int, int))(0xC0D4D24))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC0D4BAC))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0D4AD0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0D4A30))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0D4984))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0D4894))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0D47E0))(a4, a5, a6, a7);
}
