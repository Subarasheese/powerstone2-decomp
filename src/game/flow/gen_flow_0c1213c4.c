/* game/flow: functions 0C1213C4-0C122102, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c0102c4(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03b05a(int);
int FUN_0c03dfe4(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05aab6(int, int);
int game_reset_objects(void);
int FUN_0c05b048(int, int);
int FUN_0c05f22c(int);
int FUN_0c05f7a0(int);
int FUN_0c05f7e2(int);
int FUN_0c0fb8f0(void);
int FUN_0c0fb90e(int);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
float math_sin_angle16(int);
int FUN_0c182b52(void);
int memset(int, int, int);
int FUN_0c2aeb0a(void);
int FUN_0c1213c4(int a4);
int FUN_0c1213d8(int a4);
int FUN_0c121412(int a4, int a5, int a6, int a7);
int FUN_0c121958(int a4);
int FUN_0c12196c(void);
int FUN_0c1219b6(int a4, int a5);
int FUN_0c121b30(int a4, int a5, int a6);
int FUN_0c121ba8(int a4, int a5);
int FUN_0c121d90(int a4, int a5);
int FUN_0c121e64(int a4, int a5);
int FUN_0c122058(int a4, int a5);

int FUN_0c1213c4(int a4)
{
    (((struct o0_uchar *)0xC4759E4)->v) = 0x1;
    (((struct o1_uchar *)0xC4759E4)->v) = 0x0;
    (((struct o2_uchar *)0xC4759E4)->v) = 0x0;
    (((struct o4_uchar *)0xC4759E4)->v) = a4;
    return a4;
}

int FUN_0c1213d8(int a4)
{
    memset(0xC4759E4, 0x0, 0x10);
    if (a4 != 1) {
        if (a4 != 2) {
            return a4;
        }
    } else {
        (((struct oF_uchar *)0xC4759E4)->v) = 0x1;
    }
    (((struct o0_uchar *)0xC4759E4)->v) = 0x1;
    return FUN_0c0fb90e(0xC4759E4);
}

int FUN_0c121412(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t19;
    register int t21;
    register int t22;
    register int t26;
    register int t28;
    register int t29;
    register int t37;
    register int t40;
    register int t42;
    register int t53;
    register int t54;
    register int t71;
    register int t78;
    register int t85;
    register int t87;
    register int t95;
    register int t97;
    register int t99;
    register int t100;
    register int t109;
    register int t110;
    register int t118;
    register int t129;
    register int t146;
    register int t147;
    register int t149;
    register int t152;
    register int t165;
    register int t167;
    register int t170;
    int t179;
    register int t180;
    register int t186;
    register int t188;
    register int t191;
    register int t200;
    register int t207;
    register int t209;
    register int t212;
    register int t221;
    register int t222;
    register int t230;
    register int t231;
    register int t239;
    register int t241;
    register int t256;
    register int t264;
    register int t265;
    register int t273;
    register int t275;
    register int t140;

    t0 = *(signed char *)0xC4759E4;
    if (t0 != 0) {
        if (t0 == 1) {
            if ((*(signed char *)0xC4759E5) == 0) {
                FUN_0c03eff6();
                FUN_0c036de8(0x1E, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
                (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
                (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
                FUN_0c12196c();
                FUN_0c121b30(0x0, 0xFFFFFFFF, 0xFFFFFFFF);
                FUN_0c122058(0x1, 0x0);
                FUN_0c122058(0x2, 0x1);
                FUN_0c122058(0x3, 0x2);
                FUN_0c121b30(0xA, 0x3, 0x0);
                if ((*(signed char *)0xC4759F3) != 0) {
                    FUN_0c05b048(0x3D, 0x0);
                    (((struct oF_uchar *)0xC4759E4)->v) = 0x0;
                }
                (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
            }
            (((struct o8_uchar *)0xC4759E4)->v) = 0x0;
            t19 = FUN_0c05f22c(0x2000);
            *(unsigned int *)(((int)stk + 0)) = t19;
            if (t19 != 0) {
                t21 = *(signed char *)0xC4759E8;
                t22 = (t21 - 1);
                if (t21 == 0) {
                    t22 = 0x2;
                }
                (((struct o4_uchar *)0xC4759E4)->v) = t22;
                FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x6);
            } else {
                t26 = FUN_0c05f22c(0x1000);
                *(unsigned int *)(((int)stk + 0)) = t26;
                if (t26 != 0) {
                    t28 = *(signed char *)0xC4759E8;
                    t29 = (t28 + 0x1);
                    if (t28 == 2) {
                        t29 = 0x0;
                    }
                    (((struct o4_uchar *)0xC4759E4)->v) = t29;
                    FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x6);
                }
            }
            t37 = FUN_0c05f22c(0x101);
            *(unsigned int *)(((int)stk + 0)) = t37;
            if (t37 != 0) {
                t40 = *(signed char *)0xC4759E8;
                if (t40 != 0) {
                    if (t40 != 1) {
                        if (t40 != 2) {
                            t42 = FUN_0c05f22c(0x40);
                            *(unsigned int *)(((int)stk + 0)) = t42;
                            if (t42 == 0) {
                                FUN_0c03f40c(0x5);
                                FUN_0c038548(0x5);
                                FUN_0c038e88(0x5);
                                FUN_0c03f40c(0x8);
                                return FUN_0c038e88(0x8);
                            }
                            FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x4);
                            return FUN_0c05f7e2(0x8);
                        }
                        FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x3);
                        (((struct o0_uchar *)0xC4759E4)->v) = 0x2;
                        (((struct o1_uchar *)0xC4759E4)->v) = 0x0;
                        (((struct o4_uchar *)0xC4759E4)->v) = 0x0;
                        return 0x0;
                    }
                    FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x3);
                    t53 = FUN_0c182b52();
                    if (t53 != -3) {
                        (((struct o0_uchar *)0xC4759E4)->v) = 0x3;
                        (((struct o1_uchar *)0xC4759E4)->v) = 0x0;
                        (((struct o4_uchar *)0xC4759E4)->v) = 0x0;
                        return 0x0;
                    }
                    t54 = FUN_0c05f22c(0x40);
                    *(unsigned int *)(((int)stk + 0)) = t54;
                    if (t54 == 0) {
                        FUN_0c03f40c(0x5);
                        FUN_0c038548(0x5);
                        FUN_0c038e88(0x5);
                        FUN_0c03f40c(0x8);
                        return FUN_0c038e88(0x8);
                    }
                } else {
                    if (((unsigned short)(*(short *)0xC542868) & 0x101) != 0) {
                        FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x3);
                        FUN_0c0102c4();
                        FUN_0c05f7a0(0x6);
                    } else {
                        FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x4);
                        (((struct o8_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759EC) + 0x1);
                    }
                    t71 = FUN_0c05f22c(0x40);
                    *(unsigned int *)(((int)stk + 0)) = t71;
                    if (t71 == 0) {
                        FUN_0c03f40c(0x5);
                        FUN_0c038548(0x5);
                        FUN_0c038e88(0x5);
                        FUN_0c03f40c(0x8);
                        return FUN_0c038e88(0x8);
                    }
                }
            } else {
                t78 = FUN_0c05f22c(0x40);
                *(unsigned int *)(((int)stk + 0)) = t78;
                if (t78 == 0) {
                    FUN_0c03f40c(0x5);
                    FUN_0c038548(0x5);
                    FUN_0c038e88(0x5);
                    FUN_0c03f40c(0x8);
                    return FUN_0c038e88(0x8);
                }
            }
            FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x4);
            return FUN_0c05f7e2(0x8);
        }
        if (t0 == 2) {
            t85 = *(signed char *)0xC4759E5;
            if (t85 != 0) {
                if (t85 != 1) {
                    return FUN_0c0fe530();
                }
                t87 = FUN_0c05f22c(0xC00);
                *(unsigned int *)(((int)stk + 0)) = t87;
                if (t87 != 0) {
                    FUN_0c05aab6((t87 - 1), 0x5);
                    (((struct o4_uchar *)0xC4759E4)->v) = (0x1 - (*(signed char *)0xC4759E8));
                }
                t95 = FUN_0c05f22c(0x101);
                *(unsigned int *)(((int)stk + 0)) = t95;
                if (t95 != 0) {
                    FUN_0c05aab6((t95 - 1), 0x3);
                    t97 = *(signed char *)0xC4759E8;
                    if (t97 != 0) {
                        if (t97 != 1) {
                            return t97;
                        }
                        return FUN_0c1213c4(0x2);
                    }
                    FUN_0c0fe4ec(0x5);
                    t99 = *(signed char *)0xC4759E5;
                    (((struct o1_uchar *)0xC4759E4)->v) = (t99 + 0x1);
                    return (t99 + 0x1);
                }
                t100 = FUN_0c05f22c(0x40);
                *(unsigned int *)(((int)stk + 0)) = t100;
                if (t100 != 0) {
                    FUN_0c05aab6((t100 - 1), 0x4);
                    FUN_0c1213c4(0x2);
                }
            } else {
                t109 = *(signed char *)0xC4759E6;
                if (t109 != 0) {
                    if (t109 != 1) {
                        return t109;
                    }
                    t110 = FUN_0c05f22c(0x101);
                    *(unsigned int *)(((int)stk + 0)) = t110;
                    if (t110 != 0) {
                        FUN_0c05aab6((t110 - 1), 0x3);
                        FUN_0c03eff6();
                        FUN_0c12196c();
                        FUN_0c121b30(0x10, 0xFFFFFFFF, 0xFFFFFFFF);
                        FUN_0c121d90(0x11, 0x0);
                        FUN_0c121d90(0x12, 0x1);
                        (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                        (((struct o2_uchar *)0xC4759E4)->v) = 0x0;
                    } else {
                        t118 = FUN_0c05f22c(0x40);
                        *(unsigned int *)(((int)stk + 0)) = t118;
                        if (t118 == 0) {
                        } else {
                            FUN_0c05aab6((t118 - 1), 0x4);
                            FUN_0c1213c4(0x2);
                        }
                    }
                } else {
                    t129 = FUN_0c03dfe4();
                    if (t129 != 0) {
                        FUN_0c03eff6();
                        FUN_0c12196c();
                        FUN_0c121b30(0x10, 0xFFFFFFFF, 0xFFFFFFFF);
                        FUN_0c121d90(0x11, 0x0);
                        FUN_0c121d90(0x12, 0x1);
                        (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                        t140 = 0x0;
                    } else {
                        FUN_0c03eff6();
                        FUN_0c12196c();
                        FUN_0c121b30(0x19, 0xFFFFFFFF, 0xFFFFFFFF);
                        t140 = ((*(signed char *)0xC4759E6) + 0x1);
                    }
                    (((struct o2_uchar *)0xC4759E4)->v) = t140;
                }
            }
            FUN_0c03f40c(0x5);
            FUN_0c038548(0x5);
            FUN_0c038e88(0x5);
            FUN_0c03f40c(0x8);
            return FUN_0c038e88(0x8);
        }
        if (t0 == 3) {
            t146 = *(signed char *)0xC4759E5;
            switch (t146) {
            case 0:
                t179 = FUN_0c03add8(a4, a5, a6, a7);
                if (((int)t179 >= 0) && (t179 != 0)) {
                    t180 = FUN_0c03b05a(t179);
                    if ((int)t180 <= 0) {
                        (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                        FUN_0c03eff6();
                        FUN_0c12196c();
                        FUN_0c121b30(0x18, 0xFFFFFFFF, 0xFFFFFFFF);
                        (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                        t186 = FUN_0c05f22c(0x101);
                        *(unsigned int *)(((int)stk + 0)) = t186;
                        if (t186 != 0) {
                            FUN_0c05aab6((t186 - 1), 0x3);
                            t188 = FUN_0c182b52();
                            if (t188 != -3) {
                                FUN_0c2aeb0a();
                                for (;;) {
                                }
                            }
                        }
                        t191 = FUN_0c05f22c(0x40);
                        *(unsigned int *)(((int)stk + 0)) = t191;
                        if (t191 != 0) {
                            FUN_0c05aab6((t191 - 1), 0x4);
                            FUN_0c1213c4(0x1);
                        }
                        FUN_0c03f40c(0x5);
                        FUN_0c038548(0x5);
                        FUN_0c038e88(0x5);
                        FUN_0c03f40c(0x8);
                        return FUN_0c038e88(0x8);
                    }
                    t200 = FUN_0c182b52();
                    if (t200 != -3) {
                        FUN_0c2aeb0a();
                        for (;;) {
                        }
                    }
                    return FUN_0c1213c4(0x1);
                }
                (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                FUN_0c03eff6();
                FUN_0c12196c();
                FUN_0c121b30(0x18, 0xFFFFFFFF, 0xFFFFFFFF);
                (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                t207 = FUN_0c05f22c(0x101);
                *(unsigned int *)(((int)stk + 0)) = t207;
                if (t207 != 0) {
                    FUN_0c05aab6((t207 - 1), 0x3);
                    t209 = FUN_0c182b52();
                    if (t209 != -3) {
                        FUN_0c2aeb0a();
                        for (;;) {
                        }
                    }
                }
                t212 = FUN_0c05f22c(0x40);
                *(unsigned int *)(((int)stk + 0)) = t212;
                if (t212 != 0) {
                    FUN_0c05aab6((t212 - 1), 0x4);
                    FUN_0c1213c4(0x1);
                }
                break;
            case 1:
                FUN_0c03eff6();
                FUN_0c12196c();
                FUN_0c121b30(0x18, 0xFFFFFFFF, 0xFFFFFFFF);
                (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
                t165 = FUN_0c05f22c(0x101);
                *(unsigned int *)(((int)stk + 0)) = t165;
                if (t165 != 0) {
                    FUN_0c05aab6((t165 - 1), 0x3);
                    t167 = FUN_0c182b52();
                    if (t167 != -3) {
                        FUN_0c2aeb0a();
                        for (;;) {
                        }
                    }
                }
                t170 = FUN_0c05f22c(0x40);
                *(unsigned int *)(((int)stk + 0)) = t170;
                if (t170 != 0) {
                    FUN_0c05aab6((t170 - 1), 0x4);
                    FUN_0c1213c4(0x1);
                }
                break;
            case 2:
                t147 = FUN_0c05f22c(0x101);
                *(unsigned int *)(((int)stk + 0)) = t147;
                if (t147 != 0) {
                    FUN_0c05aab6((t147 - 1), 0x3);
                    t149 = FUN_0c182b52();
                    if (t149 != -3) {
                        FUN_0c2aeb0a();
                        for (;;) {
                        }
                    }
                }
                t152 = FUN_0c05f22c(0x40);
                *(unsigned int *)(((int)stk + 0)) = t152;
                if (t152 != 0) {
                    FUN_0c05aab6((t152 - 1), 0x4);
                    FUN_0c1213c4(0x1);
                }
                break;
            default:
                return t146;
            }
            FUN_0c03f40c(0x5);
            FUN_0c038548(0x5);
            FUN_0c038e88(0x5);
            FUN_0c03f40c(0x8);
            return FUN_0c038e88(0x8);
        }
        return t0;
    }
    t221 = *(signed char *)0xC4759E5;
    if (t221 != 0) {
        if (t221 != 1) {
            return FUN_0c0fe530();
        }
        t222 = FUN_0c05f22c(0xC00);
        *(unsigned int *)(((int)stk + 0)) = t222;
        if (t222 != 0) {
            FUN_0c05aab6((t222 - 1), 0x5);
            (((struct o4_uchar *)0xC4759E4)->v) = (0x1 - (*(signed char *)0xC4759E8));
        }
        t230 = FUN_0c05f22c(0x101);
        *(unsigned int *)(((int)stk + 0)) = t230;
        if (t230 == 0) {
            t231 = FUN_0c05f22c(0x40);
            *(unsigned int *)(((int)stk + 0)) = t231;
            if (t231 == 0) {
                FUN_0c03f40c(0x5);
                FUN_0c038548(0x5);
                FUN_0c038e88(0x5);
                FUN_0c03f40c(0x8);
                return FUN_0c038e88(0x8);
            }
            FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x4);
            return FUN_0c05f7e2(0x8);
        }
        FUN_0c05aab6((t230 - 1), 0x3);
        t239 = *(signed char *)0xC4759E8;
        if (t239 != 0) {
            if (t239 != 1) {
                return t239;
            }
            return FUN_0c1213c4(0x0);
        }
        FUN_0c0fe4ec(0x4);
        t241 = *(signed char *)0xC4759E5;
        (((struct o1_uchar *)0xC4759E4)->v) = (t241 + 0x1);
        return (t241 + 0x1);
    }
    game_reset_objects();
    FUN_0c0fb8f0();
    FUN_0c03eff6();
    FUN_0c036de8(0x1E, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
    (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
    (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    FUN_0c12196c();
    FUN_0c121b30(0x0, 0xFFFFFFFF, 0xFFFFFFFF);
    FUN_0c121b30(0x16, 0xFFFFFFFF, 0xFFFFFFFF);
    FUN_0c121d90(0x11, 0x0);
    FUN_0c121d90(0x12, 0x1);
    FUN_0c059c54(0x13);
    FUN_0c05b048(0x1, 0x0);
    (((struct o1_uchar *)0xC4759E4)->v) = ((*(signed char *)0xC4759E5) + 0x1);
    t256 = FUN_0c05f22c(0xC00);
    *(unsigned int *)(((int)stk + 0)) = t256;
    if (t256 != 0) {
        FUN_0c05aab6((t256 - 1), 0x5);
        (((struct o4_uchar *)0xC4759E4)->v) = (0x1 - (*(signed char *)0xC4759E8));
    }
    t264 = FUN_0c05f22c(0x101);
    *(unsigned int *)(((int)stk + 0)) = t264;
    if (t264 == 0) {
        t265 = FUN_0c05f22c(0x40);
        *(unsigned int *)(((int)stk + 0)) = t265;
        if (t265 == 0) {
            FUN_0c03f40c(0x5);
            FUN_0c038548(0x5);
            FUN_0c038e88(0x5);
            FUN_0c03f40c(0x8);
            return FUN_0c038e88(0x8);
        }
        FUN_0c05aab6(((*(int *)(((int)stk + 0))) - 1), 0x4);
        return FUN_0c05f7e2(0x8);
    }
    FUN_0c05aab6((t264 - 1), 0x3);
    t273 = *(signed char *)0xC4759E8;
    if (t273 != 0) {
        if (t273 != 1) {
            return t273;
        }
        return FUN_0c1213c4(0x0);
    }
    FUN_0c0fe4ec(0x4);
    t275 = *(signed char *)0xC4759E5;
    (((struct o1_uchar *)0xC4759E4)->v) = (t275 + 0x1);
    return (t275 + 0x1);
}

int FUN_0c121958(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c12196c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x0, (*(int *)0xC4B411C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x0, (*(int *)0xC4B411C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC121958;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c1219b6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 3) {
        } else {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        t2 = t0;
                        if (t0 != 3) {
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                            if (((*(short *)((a4 + 0x1E))) & 6) != 0) {
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                            } else {
                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                            }
                            t0 = *(short *)((a4 + 0x1E));
                            t3 = t0;
                            if ((int)t0 <= 0) {
                                (((struct o15_uchar *)(a4))->v) = 0x1;
                                FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C));
                                (((struct oA8_uchar *)(a4))->v) = 0x1;
                                t3 = 0xA8;
                            }
                            t2 = t3;
                        }
                        t0 = t2;
                    } else {
                        FUN_0c03733c(a4, 0xE, (*(int *)0xC4B410C));
                        *(unsigned short *)((a4 + 0x1E)) = 0x20;
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                        if (((*(short *)((a4 + 0x1E))) & 6) != 0) {
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                        } else {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        t2 = *(short *)((a4 + 0x1E));
                        t3 = t2;
                        if ((int)t2 <= 0) {
                            (((struct o15_uchar *)(a4))->v) = 0x1;
                            FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C));
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            t3 = 0xA8;
                        }
                        t0 = t3;
                    }
                    t2 = t0;
                } else {
                    if ((*(short *)((a4 + 0x1C))) != (*(signed char *)0xC4759E8)) {
                        *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)0xC4759E8);
                        t0 = (FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C)));
                    } else {
                        t3 = *(signed char *)0xC4759EC;
                        t4 = t3;
                        if (t3 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t0 = t4;
                    }
                    t2 = t0;
                }
                t0 = t2;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xFFFFFFFF;
                if ((*(short *)((a4 + 0x1C))) != (*(signed char *)0xC4759E8)) {
                    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)0xC4759E8);
                    t2 = (FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C)));
                } else {
                    t3 = *(signed char *)0xC4759EC;
                    t4 = t3;
                    if (t3 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t2 = t4;
                }
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            t2 = t1;
            if (t1 != 1) {
            } else {
                if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
                    (((struct o44_float *)(a4))->v) = 1.39999998f;
                    (((struct o40_float *)(a4))->v) = 1.39999998f;
                } else {
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                }
                t2 = 0x40;
            }
            t1 = t2;
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
                (((struct o44_float *)(a4))->v) = 1.39999998f;
                (((struct o40_float *)(a4))->v) = 1.39999998f;
            } else {
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            t1 = 0x40;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c121b30(int a4, int a5, int a6)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t9 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        t9 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t9;
        *(unsigned int *)((t3 + 0x4)) = 0xC1219B6;
    }
    return t9;
}

int FUN_0c121ba8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
        t1 = *(signed char *)(((0x3 + a4) + 0x0));
        (((struct o6C_float *)(t0))->v) = ((*(float *)(((t1 << 2) + 0xC201A60))) - (*(float *)(((t1 << 2) + 0xC201A58))));
        (((struct o70_float *)(t0))->v) = (*(float *)0xC201A68);
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
        t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0));
    u0 = 0.75f;
    u0 = u0 + 0.25f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
    (((struct o18_float *)(t0))->v) = u0;
    (((struct o20_float *)(t0))->v) = u0;
    (((struct o1C_float *)(t0))->v) = u0;
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t0 = 0x15;
        } else {
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 - 0.0500000007f);
            if (1.0f > (u0 - 0.0500000007f)) {
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
            t1 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
            u0 = ((((((struct o40_float *)(a4))->v)) + -1.0f) * ((((struct o4_float *)0xC121E44)->v)));
            u0 = -u0;
            (((struct o88_float *)(t1))->v) = (u0 + 1.0f);
            (((struct o84_float *)(t1))->v) = (u0 + 1.0f);
            t0 = 0x84;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)((a4 + 0x3))) != (*(signed char *)0xC4759E8)) {
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t0 = 0x15;
        } else {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
            u0 = (((struct o0_float *)0xC121E44)->v);
            if (((((struct o40_float *)(a4))->v)) > u0) {
                (((struct o40_float *)(a4))->v) = u0;
            }
            (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
            t2 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
            u0 = ((((((struct o40_float *)(a4))->v)) + -1.0f) * ((((struct o4_float *)0xC121E44)->v)));
            u0 = -u0;
            (((struct o88_float *)(t2))->v) = (u0 + 1.0f);
            (((struct o84_float *)(t2))->v) = (u0 + 1.0f);
            t0 = 0x84;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c121d90(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x3));
    t20 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 3) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x13, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 2) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x17, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 1) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x15, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        t20 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t20;
        *(unsigned int *)((t3 + 0x4)) = 0xC121BA8;
    }
    return t20;
}

int FUN_0c121e64(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
        (((struct o6C_float *)(t0))->v) = (((((struct o4_float *)0xC201A6C)->v)) - ((((struct o0_float *)0xC201A6C)->v)));
        t1 = *(signed char *)(((0x3 + a4) + 0x0));
        (((struct o70_float *)(t0))->v) = ((*(float *)(((t1 << 2) + 0xC201A80))) - (*(float *)(((t1 << 2) + 0xC201A74))));
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
        t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0));
    u0 = 0.75f;
    u0 = u0 + 0.25f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
    (((struct o18_float *)(t0))->v) = u0;
    (((struct o20_float *)(t0))->v) = u0;
    (((struct o1C_float *)(t0))->v) = u0;
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t0 = 0x15;
        } else {
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 - 0.0500000007f);
            if (1.0f > (u0 - 0.0500000007f)) {
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
            t1 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
            u0 = ((((((struct o40_float *)(a4))->v)) + -1.0f) * ((((struct o4_float *)0xC12210C)->v)));
            u0 = -u0;
            (((struct o88_float *)(t1))->v) = (u0 + 1.0f);
            (((struct o84_float *)(t1))->v) = (u0 + 1.0f);
            t0 = 0x84;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)((a4 + 0x3))) != (*(signed char *)0xC4759E8)) {
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 2) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned char *)(((*(int *)(((((((((struct oC0_int *)(a4))->v)) - 1) << 2) + (0xC4 + a4)) + 0x0))) + 0x0)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t0 = 0x15;
        } else {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
            u0 = (((struct o0_float *)0xC12210C)->v);
            if (((((struct o40_float *)(a4))->v)) > u0) {
                (((struct o40_float *)(a4))->v) = u0;
            }
            (((struct o44_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
            t2 = *(int *)(((((((((struct oC0_int *)(a4))->v)) - 3) << 2) + (0xC4 + a4)) + 0x0));
            u0 = ((((((struct o40_float *)(a4))->v)) + -1.0f) * ((((struct o4_float *)0xC12210C)->v)));
            u0 = -u0;
            (((struct o88_float *)(t2))->v) = (u0 + 1.0f);
            (((struct o84_float *)(t2))->v) = (u0 + 1.0f);
            t0 = 0x84;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c122058(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x3));
    t20 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 3) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 2) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 1) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        t20 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t20;
        *(unsigned int *)((t3 + 0x4)) = 0xC121E64;
    }
    return t20;
}
