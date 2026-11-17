/* game/unsorted: functions 0C01BD78-0C01C2AA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c01cc56(int, int);
extern int thunk_FUN_0c03f346();
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b50c(float);
int FUN_0c05aab6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c01bd78(int a4, int a5, int a6, int a7);
int FUN_0c01c004(int a4, int a5, int a6, int a7);

int FUN_0c01bd78(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((*(signed char *)0xC305046) == 2) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x10;
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                u0 = (1.0f + 1.0f);
                u0 = u0 + (*(float *)0xC01C060) * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
                (((struct o40_float *)(a4))->v) = u0;
                u0 = (1.0f + 1.0f);
                u0 = u0 + (*(float *)0xC01C060) * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
                (((struct o44_float *)(a4))->v) = u0;
                u0 = -10.0f;
                u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = -0.0f;
                u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
                (((struct o2C_float *)(a4))->v) = u0;
                return 0x2C;
            }
            if (t0 == 3) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)))) + 1.0f);
                (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)))) + 1.0f);
                u0 = -10.0f;
                u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
                (((struct o28_float *)(a4))->v) = u0;
                u0 = -0.0f;
                u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
                (((struct o2C_float *)(a4))->v) = u0;
                t1 = *(short *)((a4 + 0x1C));
                if (t1 == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                }
                return t1;
            }
            if (t0 == 4) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = 5.0f;
        (((struct o4C_float *)(a4))->v) = (*(float *)((0xC20E1BC + (((*(signed char *)((a4 + 0x2))) << 2) << 1))));
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC20E1BC + (((*(signed char *)((a4 + 0x2))) << 2) << 1))))->v));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o40_float *)(a4))->v) = 25.0f;
        (((struct o44_float *)(a4))->v) = 25.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.5f;
        (((struct o54_float *)(a4))->v) = 0.100000001f;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    u0 = (1.0f + 1.0f);
    u0 = u0 + 23.0f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
    (((struct o40_float *)(a4))->v) = u0;
    u0 = (1.0f + 1.0f);
    u0 = u0 + 23.0f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
    (((struct o44_float *)(a4))->v) = u0;
    u0 = -10.0f;
    u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
    (((struct o28_float *)(a4))->v) = u0;
    u0 = -0.0f;
    u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
    (((struct o2C_float *)(a4))->v) = u0;
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != 0) {
    } else {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((short)(t0 - 1) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t0 = 0xB0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o44_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct oB0_float *)(a4))->v) = 1.0f;
            u0 = -10.0f;
            u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = -0.0f;
            u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
            (((struct o2C_float *)(a4))->v) = u0;
            if ((*(signed char *)0xC305046) == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            u0 = (1.0f + 1.0f);
            u0 = u0 + (*(float *)0xC01C060) * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
            (((struct o40_float *)(a4))->v) = u0;
            u0 = (1.0f + 1.0f);
            u0 = u0 + (*(float *)0xC01C060) * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
            (((struct o44_float *)(a4))->v) = u0;
            u0 = -10.0f;
            u0 = u0 + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v));
            (((struct o28_float *)(a4))->v) = u0;
            u0 = -0.0f;
            u0 = u0 + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
            (((struct o2C_float *)(a4))->v) = u0;
            t0 = 0x2C;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c01c004(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x25;
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                            t1 = 0x24;
                        }
                        FUN_0c05aab6(0x0, t1);
                        if ((*(signed char *)0xC305046) == 2) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x10;
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        u0 = 0.899999976f;
                        u0 = u0 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
                        (((struct oB0_float *)(a4))->v) = u0;
                        if (((*(short *)((a4 + 0x1E))) & 1) != 0) {
                            if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                                FUN_0c02b50c((1.0f + 1.0f));
                                FUN_0c02b502(0x7);
                                t1 = 0xC1A7668;
                                u0 = 152.0f;
                            } else {
                                FUN_0c02b50c((1.0f + 1.0f));
                                FUN_0c02b502(0x7);
                                t1 = 0xC1A7678;
                                u0 = 176.0f;
                            }
                            t3 = t1;
                            u1 = u0;
                        } else {
                            if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                                FUN_0c02b50c((1.0f + 1.0f));
                                FUN_0c02b502(0x1);
                                t1 = 0xC1A7668;
                                u0 = 152.0f;
                            } else {
                                FUN_0c02b50c((1.0f + 1.0f));
                                FUN_0c02b502(0x4);
                                t1 = 0xC1A7678;
                                u0 = 176.0f;
                            }
                            t3 = t1;
                            u1 = u0;
                        }
                        FUN_0c02b3ba(t3, u1, 108.0f, 637.0f);
                        t2 = (FUN_0c02b50c(1.0f));
                    }
                    return t2;
                }
                if (t0 == 4) {
                    if ((*(signed char *)0xC305046) == 2) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x10;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    u0 = 0.899999976f;
                    u0 = u0 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u0;
                    if (((*(short *)((a4 + 0x1E))) & 1) != 0) {
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x7);
                            t1 = 0xC1A7668;
                            u0 = 152.0f;
                        } else {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x7);
                            t1 = 0xC1A7678;
                            u0 = 176.0f;
                        }
                        t2 = t1;
                        u1 = u0;
                    } else {
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x1);
                            t1 = 0xC1A7668;
                            u0 = 152.0f;
                        } else {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x4);
                            t1 = 0xC1A7678;
                            u0 = 176.0f;
                        }
                        t2 = t1;
                        u1 = u0;
                    }
                    FUN_0c02b3ba(t2, u1, 108.0f, 637.0f);
                    return (FUN_0c02b50c(1.0f));
                }
                if (t0 == 5) {
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)))) + 1.0f);
                    (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)))) + 1.0f);
                    t1 = *(short *)((a4 + 0x1C));
                    if (t1 == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o44_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                    }
                    return t1;
                }
                if (t0 == 6) {
                    return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
                }
                return t0;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned char *)(((FUN_0c01cc56((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x0))), 0xC01BD78)) + 0x2)) = 0x0;
                if ((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x2))) != 0) {
                    t0 = FUN_0c01cc56((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x2))), 0xC01BD78);
                    t2 = 0x2;
                    if ((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x2))) == 41) {
                        t2 = 0x1;
                    }
                    *(unsigned char *)((t0 + 0x2)) = t2;
                }
                *(unsigned short *)((a4 + 0x1C)) = 0x50;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) != 0) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x25;
                    if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                        t0 = 0x24;
                    }
                    FUN_0c05aab6(0x0, t0);
                    if ((*(signed char *)0xC305046) == 2) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x10;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    u0 = 0.899999976f;
                    u0 = u0 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1E))) << 8) << 2)));
                    (((struct oB0_float *)(a4))->v) = u0;
                    if (((*(short *)((a4 + 0x1E))) & 1) != 0) {
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x7);
                            t0 = 0xC1A7668;
                            u0 = 152.0f;
                        } else {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x7);
                            t0 = 0xC1A7678;
                            u0 = 176.0f;
                        }
                        t3 = t0;
                        u1 = u0;
                    } else {
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x1);
                            t0 = 0xC1A7668;
                            u0 = 152.0f;
                        } else {
                            FUN_0c02b50c((1.0f + 1.0f));
                            FUN_0c02b502(0x4);
                            t0 = 0xC1A7678;
                            u0 = 176.0f;
                        }
                        t3 = t0;
                        u1 = u0;
                    }
                    FUN_0c02b3ba(t3, u1, 108.0f, 637.0f);
                    t2 = (FUN_0c02b50c(1.0f));
                }
                t1 = t2;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.899999976f;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
    (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        t1 = 0x10;
    }
    return t1;
}
