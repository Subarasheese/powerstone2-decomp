/* Straight-line functions with calls and guards (batch gen_mi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c04340c(void);
int FUN_0c155b7c(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


/* manual: per-player HUD/cursor state machine (state byte a4[0x14], 0-7, else tail call FUN_0c03f346): score digits, the 10-pointer +5/-50/+1 sweeps and the two level blocks as loops; 87 cases (43 dev, 44 holdout), 1054 of 1054 instructions */
int FUN_0c155b7c(int a4, int a5, int a6, int a7)
{
    int t1;
    int t0;
    int t2;
    int qa0;
    int i;
    int p;

    qa0 = 0xC4B40D4;
    if ((int)(*(signed char *)(a4 + 0x14)) <= (int)0x2) {
    } else {
        if ((*(signed char *)((0x3720 + (((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498)))) != 0) {
        } else {
            t0 = FUN_0c04340c();
            if (t0 == 0) {
            } else {
                if ((*(signed char *)0xC542361) != 0) {
                } else {
                    t1 = 0x0;
                    t2 = 0x989680;
                    for (i = 0; i < 7; i++) {
                        t0 = (int)((unsigned int)((int)((unsigned int)(*(int *)((((short)(*(signed char *)(a4 + 0x2)) * (short)0x98) + 0xC541CFC))) / (unsigned int)t2)) % (unsigned int)0xA);
                        t2 = (int)((unsigned int)t2 / (unsigned int)0xA);
                        if ((t0 == 0) && (t1 == 0)) {
                        } else {
                            p = *(int *)(a4 + 0xDC + (i << 2));
                            FUN_0c037498(p, (t0 + 0x1), 0x11, (*(int *)qa0));
                            *(unsigned char *)(p) = 0x1;
                            t1 = 0x1;
                        }
                    }
                    t0 = (((struct oF8_int *)(a4))->v);
                    FUN_0c037498(t0, (((int)((unsigned int)(*(int *)((((short)(*(signed char *)(a4 + 0x2)) * (short)0x98) + 0xC541CFC))) % (unsigned int)0xA)) + 0x1), 0x11, (*(int *)qa0));
                    *(unsigned char *)(t0) = 0x1;
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                }
            }
        }
    }
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o1C_ushort *)(a4))->v) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t2 = 0x14;
            }
            return t2;
        }
        if (t0 == 2) {
            for (i = 0; i < 10; i++) {
                t1 = *(int *)(a4 + ((i == 0) ? 0xC4 : ((i == 9) ? 0x108 : (0xD8 + (i << 2)))));
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
            }
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                t1 = (((struct o104_int *)(a4))->v);
                *(unsigned char *)(t1) = 0x0;
                (((struct o84_float *)(t1))->v) = 0.5f;
                (((struct o88_float *)(t1))->v) = 0.5f;
                (((struct o18_float *)(t1))->v) = 0.0f;
                (((struct o1C_float *)(t1))->v) = 0.0f;
                (((struct o20_float *)(t1))->v) = 0.0f;
                (((struct o1C_ushort *)(a4))->v) = 0x3C;
                (((struct o1E_ushort *)(a4))->v) = 0x1;
                for (i = 0; i < 9; i++) {
                    *(unsigned short *)((*(int *)(a4 + ((i == 0) ? 0xC4 : (0xD8 + (i << 2))))) + 0x6) = 0x1;
                }
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t2 = 0x14;
            }
            return t2;
        }
        if (t0 == 3) {
            for (i = 0; i < 2; i++) {
                if ((int)(*(signed char *)((0x374D + (((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498)))) > i) {
                    t1 = *(int *)(a4 + 0xC8 + (i << 2));
                    FUN_0c037498(t1, ((*(signed char *)(((((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498) + 0x374E + i))) + 0x3), 0x10, (*(int *)qa0));
                    *(unsigned char *)(t1) = 0x1;
                    t1 = *(int *)(a4 + 0xFC + (i << 2));
                    if (((*(int *)0xC542260) & 0x1) != 0) {
                        *(unsigned char *)(t1) = 0x1;
                    } else {
                        *(unsigned char *)(t1) = 0x0;
                    }
                    if (((*(int *)0xC542260) & 2) != 0) {
                        (((struct o84_float *)(t1))->v) = 1.0f;
                        (((struct o88_float *)(t1))->v) = 1.0f;
                    } else {
                        (((struct o84_float *)(t1))->v) = 0.699999988f;
                        (((struct o88_float *)(t1))->v) = 0.699999988f;
                    }
                    (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x666);
                } else {
                    *(unsigned char *)(*(int *)(a4 + 0xC8 + (i << 2))) = 0x0;
                    *(unsigned char *)(*(int *)(a4 + 0xFC + (i << 2))) = 0x0;
                }
            }
            if ((*(signed char *)((0x374D + (((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498)))) == 2) {
                if (((((struct o1E_short *)(a4))->v)) != 0) {
                    t1 = (((struct o104_int *)(a4))->v);
                    *(unsigned char *)(t1) = 0x1;
                    (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00333333318f);
                    (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.00333333318f);
                    (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) + 0.0166666675f);
                    (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.0166666675f);
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.0166666675f);
                    t1 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        (((struct o1C_ushort *)(a4))->v) = 0x3C;
                        (((struct o1E_ushort *)(a4))->v) = 0x0;
                    }
                } else {
                    t1 = (((struct o104_int *)(a4))->v);
                    *(unsigned char *)(t1) = 0x1;
                    (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) - 0.00333333318f);
                    (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) - 0.00333333318f);
                    (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) - 0.0166666675f);
                    (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - 0.0166666675f);
                    (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - 0.0166666675f);
                    t1 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        (((struct o1C_ushort *)(a4))->v) = 0x3C;
                        (((struct o1E_ushort *)(a4))->v) = 0x1;
                    }
                }
            } else {
                *(unsigned char *)((((((struct o104_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            if ((int)(*(signed char *)((0x374D + (((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498)))) > (int)0x2) {
                t1 = (((struct oD0_int *)(a4))->v);
                FUN_0c037498(t1, ((*(signed char *)(((((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498) + 0x3750))) + 0x3), 0x10, (*(int *)qa0));
                *(unsigned char *)(t1) = 0x1;
            } else {
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            if ((int)(*(signed char *)(((0xC532498 + ((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938)) + 0x374D))) <= (int)0x2) {
                return 0x374D;
            }
            *(unsigned char *)((((((struct oFC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct o100_int *)(a4))->v)) + 0x0)) = 0x0;
            t1 = (((struct o104_int *)(a4))->v);
            *(unsigned char *)(t1) = 0x0;
            (((struct o18_float *)(t1))->v) = 1.0f;
            (((struct o1C_float *)(t1))->v) = 1.0f;
            (((struct o20_float *)(t1))->v) = 1.0f;
        } else if (t0 == 4) {
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 1.0f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 1.0f);
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
                return (short)(t1 - 1);
            }
            t1 = (((struct oD4_int *)(a4))->v);
            *(unsigned char *)(t1) = 0x1;
            (((struct o84_float *)(t1))->v) = 0.0f;
            (((struct o88_float *)(t1))->v) = 0.0f;
        } else if (t0 == 5) {
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 1.0f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 1.0f);
            t1 = (((struct oD4_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0500000007f);
            t1 = (((struct oD4_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.0500000007f);
            t1 = (((struct oD4_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x680);
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
                return (short)(t1 - 1);
            }
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 24.0f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 24.0f);
        } else {
            if (t0 == 6) {
                t1 = (((struct oD4_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0500000007f);
                t1 = (((struct oD4_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.0500000007f);
                t1 = (((struct oD4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x680);
                t1 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 7) {
                t0 = (((struct o104_int *)(a4))->v);
                *(unsigned char *)(t0) = 0x1;
                if (((*(int *)0xC542260) & 0x1) != 0) {
                    (((struct o84_float *)(t0))->v) = 1.0f;
                    (((struct o88_float *)(t0))->v) = 1.0f;
                } else {
                    (((struct o84_float *)(t0))->v) = 0.800000012f;
                    (((struct o88_float *)(t0))->v) = 0.800000012f;
                }
                (((struct o84_float *)(((((struct oD8_int *)(a4))->v))))->v) = (((((struct o37B8_float *)((((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498)))->v)) / 100.0f);
                t0 = 0x371C;
                if ((*(signed char *)(((0xC532498 + ((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938)) + 0x371C))) == 0) {
                    t1 = (((struct o104_int *)(a4))->v);
                    *(unsigned char *)(t1) = 0x0;
                    (((struct o84_float *)(t1))->v) = 0.5f;
                    (((struct o88_float *)(t1))->v) = 0.5f;
                    (((struct o18_float *)(t1))->v) = 0.0f;
                    (((struct o1C_float *)(t1))->v) = 0.0f;
                    (((struct o20_float *)(t1))->v) = 0.0f;
                    (((struct o1C_ushort *)(a4))->v) = 0x3C;
                    (((struct o1E_ushort *)(a4))->v) = 0x1;
                    (((struct o14_uchar *)(a4))->v) = 0x3;
                    t0 = 0x14;
                }
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o1C_ushort *)(a4))->v) = 0xC;
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
        for (i = 0; i < 5; i++) {
            *(unsigned char *)(*(int *)(a4 + 0xC8 + (i << 2))) = 0x0;
        }
        for (i = 1; i < 10; i++) {
            t0 = *(int *)(a4 + ((i == 9) ? 0x108 : (0xD8 + (i << 2))));
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
        }
        t0 = *(signed char *)(a4 + 0x2);
        (((struct o1C_ushort *)(a4))->v) = ((((t0 << 2) + t0) << 1) + 0xA0);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    return 0x14;
}
