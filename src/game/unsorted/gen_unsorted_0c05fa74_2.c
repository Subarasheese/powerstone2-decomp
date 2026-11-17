/* game/unsorted: functions 0C05FA74-0C05FF78, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_short { char p[0x12]; short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int FUN_0c05aab6(int, int);
int game_reset_objects(void);
int FUN_0c05f22c(int);
extern int FUN_0c05fa74();
int FUN_0c05fe02(void);
int FUN_0c05fba0(int a4, int a5, int a6, int a7);

int FUN_0c05fba0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t9;
    register int t19;
    register int t27;
    register int t28;
    register int t34;
    register int t35;
    register int t42;
    register int t49;
    register int t55;
    register int t56;
    register int t62;
    register int t74;
    register int t76;
    register int t83;
    register int t84;
    register int t89;
    register int t108;
    register int t122;
    register int t132;
    register int t133;
    register int t139;
    register int t140;
    register int t149;
    register int t158;
    register int t164;
    register int t165;
    register int t171;
    register int t183;
    register int t185;
    register int t192;
    register int t193;
    register int t198;
    register int t3;
    int t4;
    register int t102;
    int t103;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        (((struct o12_ushort *)0xC541F40)->v) = (((((struct o12_short *)0xC541F40)->v)) - 1);
        if (((int)((((struct o12_short *)0xC541F40)->v)) <= 0) && ((t3 = *(signed char *)0xC541F42, t3 == 0) && (t4 = *(signed char *)0xC541F43, (unsigned char)t4 == 1))) {
            (((struct o3_uchar *)0xC541F40)->v) = 0x2;
            (((struct oE_ushort *)0xC541F40)->v) = 0x1;
            (((struct o10_ushort *)0xC541F40)->v) = 0x3C;
        }
        if ((unsigned char)(*(signed char *)0xC541F42) != 0) {
            t9 = *(signed char *)0xC541F43;
            if ((unsigned char)t9 != 0) {
                if ((unsigned char)t9 != 1) {
                } else {
                    (((struct o10_ushort *)0xC541F40)->v) = (((((struct o10_short *)0xC541F40)->v)) - 1);
                    if ((int)((((struct o10_short *)0xC541F40)->v)) <= 0) {
                        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                        FUN_0c03eff6();
                    }
                }
            } else {
                t19 = ((int (*)(int, int, int, int))(FUN_0c05fa74))(0x9, a5, a6, a7);
                if (t19 != 0) {
                    FUN_0c05fe02();
                    (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                    (((struct o10_ushort *)0xC541F40)->v) = 0x12C;
                }
            }
            t27 = ((int (*)(int))(FUN_0c03f40c))(0x5);
            return FUN_0c038e88(0x5);
        }
        t28 = *(signed char *)0xC541F43;
        if ((unsigned char)t28 != 0) {
            if ((unsigned char)t28 != 1) {
                if ((unsigned char)t28 != 2) {
                    if ((unsigned char)t28 != 3) {
                        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                        (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                        (((struct oE_ushort *)0xC541F40)->v) = 0x0;
                        (((struct o10_ushort *)0xC541F40)->v) = 0x0;
                        (((struct o12_ushort *)0xC541F40)->v) = 0x0;
                        return 0x0;
                    }
                    t34 = (((struct oE_short *)0xC541F40)->v);
                    if (t34 != 1) {
                        if (t34 != 2) {
                        } else {
                            t35 = ((int (*)(int, int, int, int))(FUN_0c05fa74))(0x9, a5, a6, a7);
                            if (t35 != 0) {
                                (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                            }
                        }
                    } else {
                        t42 = ((int (*)(int, int, int, int))(FUN_0c05fa74))(0x13, a5, a6, a7);
                        if (t42 != 0) {
                            (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                        }
                    }
                    t49 = ((int (*)(int))(FUN_0c03f40c))(0x5);
                    return FUN_0c038e88(0x5);
                }
                (((struct o10_ushort *)0xC541F40)->v) = (((((struct o10_short *)0xC541F40)->v)) - 1);
                if ((int)((((struct o10_short *)0xC541F40)->v)) <= 0) {
                    (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                }
                t55 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x5, a5, a6, a7);
                return FUN_0c038e88(0x5);
            }
            t56 = FUN_0c05f22c(0x2000);
            if (t56 != 0) {
                (((struct oE_ushort *)0xC541F40)->v) = (((((struct oE_short *)0xC541F40)->v)) - 1);
                if ((int)((((struct oE_short *)0xC541F40)->v)) < 0) {
                    (((struct oE_ushort *)0xC541F40)->v) = 0x2;
                }
                FUN_0c05aab6(t56, 0x6);
            } else {
                t62 = FUN_0c05f22c(0x1000);
                if (t62 != 0) {
                    (((struct oE_ushort *)0xC541F40)->v) = (((((struct oE_short *)0xC541F40)->v)) + 0x1);
                    if ((int)((((struct oE_short *)0xC541F40)->v)) > (int)0x2) {
                        (((struct oE_ushort *)0xC541F40)->v) = 0x0;
                    }
                    FUN_0c05aab6(t62, 0x6);
                }
            }
            t74 = FUN_0c05f22c(0x8101);
            if (t74 != 0) {
                FUN_0c05aab6(t74, 0x2);
                t76 = (((struct oE_short *)0xC541F40)->v);
                if (t76 != 0) {
                    if ((t76 == 1) || (t76 == 2)) {
                        (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                        (((struct o10_ushort *)0xC541F40)->v) = 0x3C;
                    }
                } else {
                    (((struct o2_uchar *)0xC541F40)->v) = 0x1;
                    (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                    FUN_0c03eff6();
                }
            }
            t83 = ((int (*)(int))(FUN_0c03f40c))(0x5);
            return FUN_0c038e88(0x5);
        }
        t84 = ((int (*)(int, int, int, int))(FUN_0c05fa74))(0x13, a5, a6, a7);
        if (t84 == 0) {
        } else {
            FUN_0c05fe02();
            (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
        }
        t89 = ((int (*)(int))(FUN_0c03f40c))(0x5);
        return FUN_0c038e88(0x5);
    }
    (((struct o1_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F41) + 0x1);
    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
    (((struct o3_uchar *)0xC541F40)->v) = 0x0;
    (((struct oE_ushort *)0xC541F40)->v) = 0x0;
    (((struct o10_ushort *)0xC541F40)->v) = 0x0;
    (((struct o12_ushort *)0xC541F40)->v) = 0x708;
    FUN_0c03eff6();
    FUN_0c0573d8();
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c036de8(0x23, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c0527e6();
    game_reset_objects();
    (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
    (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
    (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
    if ((*(int *)0xC5421D0) == 0) {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
        (((struct o3_uchar *)0xC541F40)->v) = 0x0;
        (((struct o4_uchar *)0xC541F40)->v) = 0x0;
        (((struct oE_ushort *)0xC541F40)->v) = 0x0;
        (((struct o10_ushort *)0xC541F40)->v) = 0x0;
        (((struct o12_ushort *)0xC541F40)->v) = 0x0;
        return (FUN_0c03eff6());
    }
    (((struct o12_ushort *)0xC541F40)->v) = (((((struct o12_short *)0xC541F40)->v)) - 1);
    if (((int)((((struct o12_short *)0xC541F40)->v)) <= 0) && ((t102 = *(signed char *)0xC541F42, t102 == 0) && (t103 = *(signed char *)0xC541F43, (unsigned char)t103 == 1))) {
        (((struct o3_uchar *)0xC541F40)->v) = 0x2;
        (((struct oE_ushort *)0xC541F40)->v) = 0x1;
        (((struct o10_ushort *)0xC541F40)->v) = 0x3C;
    }
    if ((unsigned char)(*(signed char *)0xC541F42) != 0) {
        t108 = *(signed char *)0xC541F43;
        if ((unsigned char)t108 != 0) {
            if ((unsigned char)t108 != 1) {
            } else {
                (((struct o10_ushort *)0xC541F40)->v) = (((((struct o10_short *)0xC541F40)->v)) - 1);
                if ((int)((((struct o10_short *)0xC541F40)->v)) <= 0) {
                    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                    FUN_0c03eff6();
                }
            }
        } else {
            t122 = ((int (*)(int))(FUN_0c05fa74))(0x9);
            if (t122 != 0) {
                FUN_0c05fe02();
                (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                (((struct o10_ushort *)0xC541F40)->v) = 0x12C;
            }
        }
        t132 = ((int (*)(int))(FUN_0c03f40c))(0x5);
        return FUN_0c038e88(0x5);
    }
    t133 = *(signed char *)0xC541F43;
    if ((unsigned char)t133 != 0) {
        if ((unsigned char)t133 != 1) {
            if ((unsigned char)t133 != 2) {
                if ((unsigned char)t133 != 3) {
                    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                    (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                    (((struct oE_ushort *)0xC541F40)->v) = 0x0;
                    (((struct o10_ushort *)0xC541F40)->v) = 0x0;
                    (((struct o12_ushort *)0xC541F40)->v) = 0x0;
                    return 0x0;
                }
                t139 = (((struct oE_short *)0xC541F40)->v);
                if (t139 != 1) {
                    if (t139 != 2) {
                    } else {
                        t140 = ((int (*)(int))(FUN_0c05fa74))(0x9);
                        if (t140 != 0) {
                            (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                        }
                    }
                } else {
                    t149 = ((int (*)(int))(FUN_0c05fa74))(0x13);
                    if (t149 != 0) {
                        (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                    }
                }
                t158 = ((int (*)(int))(FUN_0c03f40c))(0x5);
                return FUN_0c038e88(0x5);
            }
            (((struct o10_ushort *)0xC541F40)->v) = (((((struct o10_short *)0xC541F40)->v)) - 1);
            if ((int)((((struct o10_short *)0xC541F40)->v)) <= 0) {
                (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
            t164 = ((int (*)(int))(FUN_0c03f40c))(0x5);
            return FUN_0c038e88(0x5);
        }
        t165 = FUN_0c05f22c(0x2000);
        if (t165 != 0) {
            (((struct oE_ushort *)0xC541F40)->v) = (((((struct oE_short *)0xC541F40)->v)) - 1);
            if ((int)((((struct oE_short *)0xC541F40)->v)) < 0) {
                (((struct oE_ushort *)0xC541F40)->v) = 0x2;
            }
            FUN_0c05aab6(t165, 0x6);
        } else {
            t171 = FUN_0c05f22c(0x1000);
            if (t171 != 0) {
                (((struct oE_ushort *)0xC541F40)->v) = (((((struct oE_short *)0xC541F40)->v)) + 0x1);
                if ((int)((((struct oE_short *)0xC541F40)->v)) > (int)0x2) {
                    (((struct oE_ushort *)0xC541F40)->v) = 0x0;
                }
                FUN_0c05aab6(t171, 0x6);
            }
        }
        t183 = FUN_0c05f22c(0x8101);
        if (t183 != 0) {
            FUN_0c05aab6(t183, 0x2);
            t185 = (((struct oE_short *)0xC541F40)->v);
            if (t185 != 0) {
                if ((t185 == 1) || (t185 == 2)) {
                    (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
                    (((struct o10_ushort *)0xC541F40)->v) = 0x3C;
                }
            } else {
                (((struct o2_uchar *)0xC541F40)->v) = 0x1;
                (((struct o3_uchar *)0xC541F40)->v) = 0x0;
                (((struct o4_uchar *)0xC541F40)->v) = 0x0;
                FUN_0c03eff6();
            }
        }
        t192 = ((int (*)(int))(FUN_0c03f40c))(0x5);
        return FUN_0c038e88(0x5);
    }
    t193 = ((int (*)(int))(FUN_0c05fa74))(0x13);
    if (t193 == 0) {
    } else {
        FUN_0c05fe02();
        (((struct o3_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F43) + 0x1);
    }
    t198 = ((int (*)(int))(FUN_0c03f40c))(0x5);
    return FUN_0c038e88(0x5);
}
