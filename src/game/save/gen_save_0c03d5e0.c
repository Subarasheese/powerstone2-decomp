/* game/save: functions 0C03D5E0-0C03DFC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
extern int FUN_0c036de8();
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03b05a(void);
int FUN_0c03b3fc(void);
extern int FUN_0c03d722();
int FUN_0c03da82(int, int, int, int);
int FUN_0c03df6a(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f40c();
int FUN_0c03f444(int, int, int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int game_reset_objects(void);
int gfx_set_background_color(int, int, int);
int FUN_0c187798(void);
int memset(int, int, int);
int FUN_0c03d5e0(int a4, int a5, int a6, int a7);
int FUN_0c03d7f8(int a4, int a5, int a6, int a7);
int FUN_0c03d8f4(int a4, int a5, int a6, int a7);
int FUN_0c03d94a(int a4, int a5, int a6, int a7);
int FUN_0c03d9b4(int a4, int a5, int a6, int a7);
void FUN_0c03da62(int a4);
int FUN_0c03db0e(int a4, int a5, int a6, int a7);
int FUN_0c03dc1c(int a4);
int FUN_0c03dc26(void);
int FUN_0c03dc8c(int a4, int a5, int a6, int a7);
int FUN_0c03dd5c(int a4);
int FUN_0c03de10(int a4, int a5);
int FUN_0c03df82(int a4);
int FUN_0c03dfa6(void);

int FUN_0c03d5e0(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t3;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t13;
    register int t14;
    register int t26;
    register int t28;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t38;
    register int t39;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        t1 = *(signed char *)0xC3DC241;
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        if (t1 != 4) {
                            if (t1 != 5) {
                                if (t1 != 6) {
                                    t3 = t1;
                                    if (t1 != 7) {
                                    } else {
                                        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                                        t3 = 0x25;
                                    }
                                    return t3;
                                }
                                (((struct o0_uchar *)0xC3DC241)->v) = 0x7;
                                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                (((struct o23_uchar *)0xC3DC241)->v) = 0x1;
                                return ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c03d722))(0xC3DC240, a5, a6, a7);
                        }
                        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                        t7 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                        (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                        (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                        (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                        return 0x0;
                    }
                    t8 = ((int (*)(int, int, int, int))(FUN_0c03d722))(0xC3DC240, a5, a6, a7);
                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                    return 0x25;
                }
                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                t9 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                return 0x0;
            }
            t10 = ((int (*)(int, int, int, int))(FUN_0c03d722))(0xC3DC240, a5, a6, a7);
            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
            return 0x25;
        }
        FUN_0c03eff6();
        game_reset_objects();
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c036de8))(0x13, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t14 = *(signed char *)0xC5429A8;
        if (t14 == 2) {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x3;
            (((struct o1_uchar *)0xC3DC241)->v) = 0xA;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        } else {
            if (t14 == 0) {
                (((struct o0_uchar *)0xC3DC241)->v) = 0x1;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x9;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            } else {
                (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            }
        }
        return 0x0;
    }
    (((struct o1_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F41) + 0x1);
    memset(0xC3DC240, 0x0, 0x28);
    gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
    FUN_0c03eff6();
    FUN_0c0573d8();
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    FUN_0c0527e6();
    game_reset_objects();
    FUN_0c03b3fc();
    *(int *)((int)stk + 8) = 0xFF000000;
    t26 = *(signed char *)0xC3DC241;
    if (t26 != 0) {
        if (t26 != 1) {
            if (t26 != 2) {
                if (t26 != 3) {
                    if (t26 != 4) {
                        if (t26 != 5) {
                            if (t26 != 6) {
                                t28 = t26;
                                if (t26 != 7) {
                                } else {
                                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                                    t28 = 0x25;
                                }
                                return t28;
                            }
                            (((struct o0_uchar *)0xC3DC241)->v) = 0x7;
                            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                            (((struct o23_uchar *)0xC3DC241)->v) = 0x1;
                            return ((int (*)(int))(FUN_0c03f40c))(0x5);
                        }
                        return ((int (*)(int))(FUN_0c03d722))(0xC3DC240);
                    }
                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                    t32 = ((int (*)(int))(FUN_0c03f40c))(0x5);
                    (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                    (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                    (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                    return 0x0;
                }
                t33 = ((int (*)(int))(FUN_0c03d722))(0xC3DC240);
                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                return 0x25;
            }
            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
            t34 = ((int (*)(int))(FUN_0c03f40c))(0x5);
            (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
            (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            return 0x0;
        }
        t35 = ((int (*)(int))(FUN_0c03d722))(0xC3DC240);
        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
        return 0x25;
    }
    FUN_0c03eff6();
    game_reset_objects();
    (((struct o8_uint *)0xC542440)->v) = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0x0;
    t38 = ((int (*)(int, int, int, int, int))(FUN_0c036de8))(0x13, 0x0, 0x0, 0x0, 0xFF000000);
    t39 = *(signed char *)0xC5429A8;
    if (t39 == 2) {
        (((struct o0_uchar *)0xC3DC241)->v) = 0x3;
        (((struct o1_uchar *)0xC3DC241)->v) = 0xA;
        (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
    } else {
        if (t39 == 0) {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x1;
            (((struct o1_uchar *)0xC3DC241)->v) = 0x9;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        } else {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
            (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        }
    }
    return 0x0;
}

int FUN_0c03d7f8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03da82(a4, a5, a6, a7);
    t1 = (signed char)t0;
    if ((signed char)t0 == 0) {
        t0 = *(signed char *)((a4 + 0x3));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) != 0) {
                    t0 = FUN_0c03dfa6();
                    t3 = t0;
                    if (t0 != 0) {
                        FUN_0c03b3fc();
                        t0 = FUN_0c03df6a();
                        *(unsigned char *)0xC3DC241 = 0x6;
                        t3 = t0;
                    }
                    t0 = t3;
                } else {
                    FUN_0c03b3fc();
                    t3 = FUN_0c03df6a();
                    *(unsigned char *)0xC3DC241 = 0x6;
                    t0 = t3;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
            FUN_0c03df6a();
            FUN_0c03dd5c(0x0);
            FUN_0c03dd5c(0x1);
            FUN_0c03de10(0x0, 0x5);
            (((struct o20_ushort *)(a4))->v) = 0x258;
            t2 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t2 - 1);
            if ((short)(t2 - 1) != 0) {
                t2 = FUN_0c03dfa6();
                t3 = t2;
                if (t2 != 0) {
                    FUN_0c03b3fc();
                    t2 = FUN_0c03df6a();
                    *(unsigned char *)0xC3DC241 = 0x6;
                    t3 = t2;
                }
                t2 = t3;
            } else {
                FUN_0c03b3fc();
                t3 = FUN_0c03df6a();
                *(unsigned char *)0xC3DC241 = 0x6;
                t2 = t3;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c03d8f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = FUN_0c03df82(0x141);
                t2 = t0;
                if (t0 != 0) {
                    t0 = ((int (*)(void))(FUN_0c03df6a))();
                    *(unsigned char *)0xC3DC241 = 0x6;
                    t2 = t0;
                }
                t0 = t2;
            } else {
                t2 = ((int (*)(int, int, int, int))(FUN_0c03df6a))(a4, a5, a6, a7);
                *(unsigned char *)0xC3DC241 = 0x6;
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(FUN_0c03df6a))(a4, a5, a6, a7);
        t1 = FUN_0c03dd5c(0x3);
        (((struct o20_ushort *)(a4))->v) = 0x78;
        t0 = t1;
    }
    return t0;
}

int FUN_0c03d94a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = FUN_0c03df82(0x141);
                t2 = t0;
                if (t0 != 0) {
                    t0 = ((int (*)(void))(FUN_0c03df6a))();
                    *(unsigned char *)0xC3DC241 = 0x6;
                    t2 = t0;
                }
                t0 = t2;
            } else {
                t2 = ((int (*)(int, int, int, int))(FUN_0c03df6a))(a4, a5, a6, a7);
                *(unsigned char *)0xC3DC241 = 0x6;
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(FUN_0c03df6a))(a4, a5, a6, a7);
        FUN_0c03dd5c(0x2);
        t1 = FUN_0c03b3fc();
        (((struct o20_ushort *)(a4))->v) = 0x78;
        t0 = t1;
    }
    return t0;
}

int FUN_0c03d9b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                t0 = FUN_0c03df82(0x8141);
                t2 = t0;
                if (t0 != 0) {
                    t0 = ((int (*)(void))(FUN_0c03df6a))();
                    *(unsigned char *)0xC3DC241 = 0x2;
                    t2 = t0;
                }
                t0 = t2;
            } else {
                t2 = ((int (*)(int, int, int, int))(FUN_0c03df6a))(a4, a5, a6, a7);
                *(unsigned char *)0xC3DC241 = 0x2;
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        t1 = ((int (*)(int, int, int, int))(FUN_0c03df6a))(a4, a5, a6, a7);
        FUN_0c03dd5c(0x4);
        t1 = FUN_0c03b3fc();
        (((struct o20_ushort *)(a4))->v) = 0x1A4;
        t0 = t1;
    }
    return t0;
}

void FUN_0c03da62(int a4)
{
    register int t0;

    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    t0 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t0) & (*(int *)((a4 + 0xC)))) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            return;
        }
    }
    *(unsigned int *)((a4 + 0x1C)) = t0;
}

int FUN_0c03db0e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03add8(a4, a5, a6, a7);
    *(unsigned int *)((a4 + 0x4)) = t0;
    t1 = t0;
    if ((int)t0 >= 0) {
        if ((*(int *)((a4 + 0x4))) == 0) {
            t0 = *(signed char *)((a4 + 0x2));
            t2 = t0;
            if (t0 != 4) {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x4;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        } else {
            t2 = FUN_0c03b05a();
            *(unsigned int *)((a4 + 0x18)) = t2;
            if (t2 != 0) {
                (((struct o0_uchar *)0xC3DC242)->v) = 0x2;
                (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                t2 = 0x0;
            } else {
                t3 = *(signed char *)((a4 + 0x2));
                t2 = t3;
                if (t3 != 4) {
                    (((struct o0_uchar *)0xC3DC242)->v) = 0x3;
                    (((struct o1_uchar *)0xC3DC242)->v) = 0x0;
                    t2 = 0x0;
                }
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c03dc1c(int a4)
{
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)0xC3DC265);
    return 0xA8;
}

int FUN_0c03dc26(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)0xC1B7298), (*(int *)(((*(int *)0xC2401F8) + 0x0))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)0xC1B7298), (*(int *)(((*(int *)0xC2401F8) + 0x0))));
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC03DC1C;
        (((struct o30_float *)(t1))->v) = 0.0f;
        (((struct o2C_float *)(t1))->v) = 0.0f;
        (((struct o28_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        t0 = 0x28;
    }
    return t0;
}

int FUN_0c03dc8c(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    if (((*(signed char *)0xC3DC264) == 0)) goto L_C03DC9A;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C03DC9A:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 != 1)) goto L_C03DD26;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    R5 = (0x0);
    w0_0 = (0.0f);
    if ((v0_2 == 0)) goto L_C03DCB4;
    if ((v0_1 == 1)) goto L_C03DCCE;
    L_C03DD26:;
    return v0_1;
    L_C03DCCE:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_1 = (0.0500000007f);
    if ((v0_2 == 0)) goto L_C03DCE2;
    if ((v0_1 == 1)) goto L_C03DCFA;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - w0_1);
    v0_1 = (0xB0);
    if ((((((struct oB0_float *)(v0_0))->v)) > 0.0f)) goto L_C03DD26;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = R5;
    v0_1 = (0x15);
    goto L_C03DD26;
    L_C03DCFA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C03DD26;
    L_C03DD06:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C03DD26;
    L_C03DCE2:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + w0_1);
    v0_1 = (0xB0);
    w0_0 = (1.0f);
    if ((1.0f > ((((struct oB0_float *)(v0_0))->v)))) goto L_C03DD26;
    *(float *)((v0_0 + v0_1)) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    goto L_C03DD06;
    L_C03DCB4:;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = R5;
    goto L_C03DCCE;
}

int FUN_0c03dd5c(int a4)
{
    register int t0;
    register int t1;

    (((struct o0_uchar *)0xC3DC264)->v) = 0x0;
    (((struct o1_uchar *)0xC3DC264)->v) = 0x1;
    t0 = FUN_0c037320((*(int *)(((((signed char)a4 << 2) << 2) + 0xC1B7244))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)((((((signed char)a4 << 2) << 2) + 0xC1B7238) + 0xC))), (*(int *)0xC4B410C));
        *(volatile int *)((t1 + 0xC4));
        FUN_0c187798();
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC03DC8C;
        *(unsigned char *)((t1 + 0x2)) = a4;
        (((struct o30_float *)(t1))->v) = 0.0f;
        (((struct o2C_float *)(t1))->v) = 0.0f;
        (((struct o28_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        t0 = 0x28;
    }
    return t0;
}

int FUN_0c03de10(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t30;
    register float u9;
    register float u12;
    register int t22;
    register int t13;
    register int t14;
    register int t15;
    register int t19;
    register int t21;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = 0x0;
    t1 = a5;
    for (;;) {
        t2 = (int)((int)(short)t1 % (int)0xA);
        *(unsigned int *)((((t0 << 2) + (((int)stk + 0) + 0x4)) + 0x0)) = t2;
        if (t2 != 0) {
            t1 = ((int)((int)(short)t1 / (int)0xA));
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    t5 = FUN_0c03f444(0x5, 0x0, t0);
    t30 = t5;
    if (t5 != 0) {
        (((struct oA8_uchar *)(t5))->v) = 0x1;
        (((struct oAC_ushort *)(t5))->v) = 0xF;
        (((struct oA9_uchar *)(t5))->v) = 0x80;
        *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t5 + 0x4)) = 0xC03DDFE;
        (((struct o28_float *)(t5))->v) = -40.0f;
        u9 = 31.0f;
        if ((*(signed char *)0xC5429A8) == 0) {
        } else {
            u9 = ((((struct o0_float *)0xC03DFC4)->v));
        }
        (((struct o2C_float *)(t5))->v) = u9;
        (((struct o30_float *)(t5))->v) = 0.0f;
        *(unsigned int *)((t5 + 0x3C)) = 0x0;
        *(unsigned int *)((t5 + 0x38)) = 0x0;
        *(unsigned int *)((t5 + 0x34)) = 0x0;
        *(unsigned char *)((t5 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t5 + 0x1C)) = t1;
        u12 = (((struct o4_float *)0xC03DFC4)->v);
        t22 = 0xC03DFC8;
        if ((int)t0 > 0) {
            t13 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 0)) = (t13 << 2);
                t14 = *(int *)(((int)stk + 0));
                t15 = *(int *)((((t13 << 2) + (0xC4 + t5)) + 0x0));
                FUN_0c03744a(t15, 0x0, (*(int *)(((t14 + (((int)stk + 0) + 0x4)) + 0x0))), (*(int *)0xC4B410C));
                t19 = *(int *)(((t14 + (((int)stk + 0) + 0x4)) + 0x0));
                if (((int)t19 >= 0) && ((int)t19 <= (int)0x9)) {
                } else {
                    *(unsigned char *)((t15 + 0x0)) = 0x0;
                }
                t21 = t13;
                t13 = (t13 + 0x1);
                (((struct o6C_float *)(t15))->v) = (-((float)t21 * u12));
                if ((int)t13 >= (int)t0) {
                    break;
                }
            }
            t22 = 0x6C;
        }
        t30 = t22;
    }
    return t30;
}

int FUN_0c03df82(int a4)
{
    register int t0;

    if ((unsigned int)0xC542854 < (unsigned int)0xC5428F4) {
        t0 = 0xC542854;
        for (;;) {
            if (((unsigned short)(*(short *)((t0 + 0x14))) & a4) != 0) {
                break;
            }
            t0 = (t0 + 0x28);
            if ((unsigned int)t0 >= (unsigned int)0xC5428F4) {
                return 0x0;
            }
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c03dfa6(void)
{
    register int t0;

    t0 = FUN_0c03df82(0x8000);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}
