/* game/system: functions 0C0100A2-0C011972, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c0117a0(int);
int FUN_0c013b9c(int);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018f40(int, int, int, int);
int FUN_0c018fd2(int);
int FUN_0c019954(int);
int FUN_0c019a32(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01ceac(void);
int FUN_0c01d094(void);
int FUN_0c01d262(void);
int FUN_0c01d26e(void);
int FUN_0c01d27a(void);
extern int FUN_0c01d294();
int FUN_0c01d6cc(void);
int FUN_0c01e9e4(void);
int FUN_0c02ae40(int);
int FUN_0c036de8(int, int, int);
extern int FUN_0c03add8();
int FUN_0c03afdc(int);
int FUN_0c03b25a(int);
int FUN_0c03c7ec(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c046238(void);
int FUN_0c046266(int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int memset(int, int, int);
int strncpy(int, int, int);
extern int syCfgGetIndividualID();
int FUN_0c010460(int a4, int a5, int a6);
int FUN_0c01048c(void);
int FUN_0c0104ea(int a4, int a5, int a6, int a7);
int FUN_0c010af8(int a4, int a5, int a6, int a7);
int FUN_0c0116a0(int a4, int a5, int a6, int a7);

int FUN_0c010460(int a4, int a5, int a6)
{
    int stk[1];
    register int t4;

    FUN_0c036de8(0x1F, a5, a6);
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c02ae40(0x2);
    FUN_0c01e9e4();
    (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
    t4 = *(signed char *)0xC30EF65;
    (((struct o0_uchar *)0xC30EF65)->v) = (t4 + 0x1);
    return (t4 + 0x1);
}

int FUN_0c01048c(void)
{
    register int t0;

    t0 = *(signed char *)0xC30EF66;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
    } else {
        memset(0xC30EF7C, 0x0, 0x20);
        (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
        FUN_0c01e9e4();
    }
    t0 = FUN_0c019a32(0xC30EF7C);
    if ((short)t0 != 1) {
        if ((short)t0 != 2) {
            return (short)t0;
        }
        return FUN_0c010448();
    }
    (((struct o0_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF65) + 0x1);
    (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
    (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
    return 0x0;
}


int FUN_0c010af8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t9;
    register int t12;
    register int t13;
    register int t20;
    register int t21;
    register int t31;
    register int t36;
    int t52;
    register int t57;
    register int t61;
    register int t65;
    register int t68;
    register int t75;
    register int t71;
    register int t74;
    register int t80;
    register int t83;
    register int t85;
    register int t86;
    register int t106;
    register int t88;
    register int t91;
    register int t93;
    register int t111;
    register int t114;
    register int t116;
    register int t129;
    register int t130;
    register int t132;
    register int t135;
    register int t140;
    register int t141;
    register int t142;
    register int t143;
    register int t144;
    register int t46;
    register int t125;

    t0 = *(signed char *)0xC30EF66;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            t1 = *(signed char *)0xC30EF68;
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        t46 = (unsigned char)t1;
                        if ((unsigned char)t1 != 3) {
                        } else {
                            t2 = (((struct o6_short *)0xC30EF66)->v);
                            (((struct o6_ushort *)0xC30EF66)->v) = (t2 - 1);
                            t46 = (short)(t2 - 1);
                            if ((int)(short)(t2 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                                t3 = *(signed char *)0xC30EF66;
                                (((struct o0_uchar *)0xC30EF66)->v) = (t3 + 0x1);
                                t46 = (t3 + 0x1);
                            }
                        }
                    } else {
                        t8 = (((struct o6_short *)0xC30EF66)->v);
                        (((struct o6_ushort *)0xC30EF66)->v) = (t8 - 1);
                        if ((int)(short)(t8 - 1) > 0) {
                            t9 = FUN_0c01cd2c(0x101);
                            t46 = (short)t9;
                            if ((short)t9 == 0) {
                            } else {
                                FUN_0c018fd2(0x4);
                                (((struct o6_ushort *)0xC30EF66)->v) = 0xC;
                                (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                                t12 = (((struct o6_short *)0xC30EF66)->v);
                                (((struct o6_ushort *)0xC30EF66)->v) = (t12 - 1);
                                t46 = (short)(t12 - 1);
                                if ((int)(short)(t12 - 1) > 0) {
                                } else {
                                    (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                                    t13 = *(signed char *)0xC30EF66;
                                    (((struct o0_uchar *)0xC30EF66)->v) = (t13 + 0x1);
                                    t46 = (t13 + 0x1);
                                }
                            }
                        } else {
                            FUN_0c018fd2(0x4);
                            (((struct o6_ushort *)0xC30EF66)->v) = 0xC;
                            (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                            t20 = (((struct o6_short *)0xC30EF66)->v);
                            (((struct o6_ushort *)0xC30EF66)->v) = (t20 - 1);
                            t46 = (short)(t20 - 1);
                            if ((int)(short)(t20 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                                t21 = *(signed char *)0xC30EF66;
                                (((struct o0_uchar *)0xC30EF66)->v) = (t21 + 0x1);
                                t46 = (t21 + 0x1);
                            }
                        }
                    }
                } else {
                    *(unsigned char *)0xC30B6F4 = 0x0;
                    FUN_0c018e74(0x4);
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x4D0;
                    t31 = *(signed char *)0xC30EF68;
                    (((struct o2_uchar *)0xC30EF66)->v) = (t31 + 0x1);
                    t46 = (t31 + 0x1);
                }
            } else {
                t36 = (((struct o6_short *)0xC30EF66)->v);
                (((struct o6_ushort *)0xC30EF66)->v) = (t36 + 0x1);
                t46 = (unsigned char)t1;
                if ((int)(short)(t36 + 0x1) < (int)0x14) {
                } else {
                    if ((*(signed char *)0xC30B6F4) == 0) {
                        (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                        t46 = 0x0;
                    } else {
                        t46 = ((*(signed char *)0xC30EF68) + 0x1);
                    }
                    (((struct o2_uchar *)0xC30EF66)->v) = t46;
                }
            }
            return t46;
        }
        if ((unsigned char)t0 == 2) {
            t52 = 0x0;
            for (;;) {
                FUN_0c01c714(0xC30EF67, 0x3, 0x2);
                if (((*(signed char *)(((((*(signed char *)0xC30AA32) << 2) + (unsigned char)(*(signed char *)0xC30EF67)) + 0xC20B84C))) != 0) && (t52 = (t52 + 0x1), (int)(short)t52 < (int)0xA)) continue;
                break;
            }
            t57 = FUN_0c01cd2c(0x40);
            if ((short)t57 != 0) {
                FUN_0c05aab6(((short)(short)t57 - 1), 0x4);
                (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x2);
                (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                return (FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14));
            }
            t61 = FUN_0c01cd2c(0x101);
            if ((short)t61 == 0) {
                return (short)t61;
            }
            FUN_0c05aab6(((short)(short)t61 - 1), 0x3);
            (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
            (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            *(unsigned char *)0xC305418 = (*(signed char *)0xC30EF67);
            t65 = *(signed char *)0xC305418;
            if ((signed char)t65 == 1) {
                *(unsigned char *)0xC30AF89 = 0x1;
                (((struct o0_uchar *)0xC30EF66)->v) = 0x6;
                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                (((struct o3_uchar *)0xC30EF66)->v) = 0x0;
                return FUN_0c01d27a();
            }
            if ((signed char)t65 != 0) {
                if ((signed char)t65 != 2) {
                } else {
                    *(unsigned char *)0xC30AF89 = t65;
                }
            } else {
                *(unsigned char *)0xC30AF89 = t65;
            }
            return (signed char)t65;
        }
        if ((unsigned char)t0 == 3) {
            t68 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t68 + 0x1);
            t75 = (unsigned char)t0;
            if ((int)(short)(t68 + 0x1) < (int)0x10) {
            } else {
                t71 = 0xFF000000;
                if ((unsigned char)(*(signed char *)0xC30EF67) == 3) {
                    t71 = 0xFFFFFFFF;
                }
                FUN_0c0573cc(t71, 0x0, 0x14);
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                t74 = *(signed char *)0xC30EF66;
                (((struct o0_uchar *)0xC30EF66)->v) = (t74 + 0x1);
                t75 = (t74 + 0x1);
            }
            return t75;
        }
        if ((unsigned char)t0 == 4) {
            t80 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t80 + 0x1);
            if ((int)(short)(t80 + 0x1) >= (int)0x14) {
                if ((unsigned char)(*(signed char *)0xC30EF67) != 3) {
                    t83 = *(signed char *)0xC30EF66;
                    (((struct o0_uchar *)0xC30EF66)->v) = (t83 + 0x1);
                    *(unsigned int *)0xC30EF68 = 0x0;
                    return (t83 + 0x1);
                }
                return FUN_0c010448();
            }
            return (unsigned char)t0;
        }
        if ((unsigned char)t0 == 5) {
            t85 = *(int *)((0xC20B840 + ((unsigned char)(*(signed char *)0xC30EF67) << 2)));
            return ((int (*)(int, int, int, int))(t85))(0xC30EF6C, 0x10, a6, a7);
        }
        if ((unsigned char)t0 == 6) {
            t86 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t86 + 0x1);
            t106 = (unsigned char)t0;
            if ((int)(short)(t86 + 0x1) >= (int)0x10) {
                (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
                t88 = FUN_0c01d6cc();
                if (t88 == 1) {
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                    (((struct o0_uchar *)0xC30EF66)->v) = 0x4;
                    t106 = 0x4;
                } else {
                    if (t88 == -3) {
                        (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                        (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                        t91 = *(signed char *)0xC30EF66;
                        (((struct o0_uchar *)0xC30EF66)->v) = (t91 + 0x1);
                        t106 = (t91 + 0x1);
                    } else {
                        t106 = t88;
                        if (t88 == -4) {
                            (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                            (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                            t93 = *(signed char *)0xC30EF66;
                            (((struct o0_uchar *)0xC30EF66)->v) = (t93 + 0x2);
                            t106 = (t93 + 0x2);
                        }
                    }
                }
            }
            return t106;
        }
        if ((unsigned char)t0 == 7) {
            t111 = FUN_0c01d6cc();
            if (t111 == 1) {
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                (((struct o0_uchar *)0xC30EF66)->v) = 0x4;
                t125 = 0x4;
            } else {
                if (t111 == -3) {
                    (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                    t114 = *(signed char *)0xC30EF66;
                    (((struct o0_uchar *)0xC30EF66)->v) = (t114 + 0x1);
                    t125 = (t114 + 0x1);
                } else {
                    t125 = t111;
                    if (t111 == -4) {
                        (((struct o1_uchar *)0xC30EF66)->v) = 0x3;
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
                        (((struct o6_ushort *)0xC30EF66)->v) = 0x14;
                        t116 = *(signed char *)0xC30EF66;
                        (((struct o0_uchar *)0xC30EF66)->v) = (t116 + 0x2);
                        t125 = (t116 + 0x2);
                    }
                }
            }
            return t125;
        }
        if ((unsigned char)t0 == 8) {
            t129 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t129 - 1);
            t130 = (unsigned char)t0;
            if ((int)(short)(t129 - 1) <= 0) {
                (((struct o0_uchar *)0xC30EF66)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                t130 = 0x0;
            }
            return t130;
        }
        if ((unsigned char)t0 == 9) {
            t132 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t132 - 1);
            if ((int)(short)(t132 - 1) <= 0) {
                return FUN_0c010448();
            }
            return (unsigned char)t0;
        }
        return (unsigned char)t0;
    }
    FUN_0c01e9e4();
    t135 = 0x0;
    if ((*(signed char *)0xC30AA32) == 1) {
        t135 = 0x1;
    }
    (((struct o1_uchar *)0xC30EF66)->v) = t135;
    (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
    (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
    (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    FUN_0c019954(0xC30EF67);
    t140 = 0xC30A404;
    for (;;) {
        if ((unsigned int)t140 >= (unsigned int)0xC30A40C) {
            break;
        }
        *(unsigned char *)((t140 + 0x0)) = 0x0;
        t140 = (t140 + 0x1);
    }
    t141 = 0xC309D86;
    t142 = 0xC309D06;
    t143 = 0xC309C86;
    for (;;) {
        if ((unsigned int)t141 >= (unsigned int)0xC309E06) {
            break;
        }
        *(unsigned char *)((t143 + 0x0)) = 0x0;
        t143 = (t143 + 0x1);
        *(unsigned char *)((t142 + 0x0)) = 0x0;
        t142 = (t142 + 0x1);
        *(unsigned char *)((t141 + 0x0)) = 0x0;
        t141 = (t141 + 0x1);
    }
    *(unsigned char *)0xC30AC5C = 0x0;
    (((struct o20_uchar *)0xC309BCC)->v) = 0x0;
    (((struct o2_ushort *)0xC309BCC)->v) = 0x0;
    (((struct o0_ushort *)0xC309BCC)->v) = 0x0;
    t144 = 0xC309C74;
    for (;;) {
        if ((unsigned int)t144 >= (unsigned int)0xC309C86) {
            break;
        }
        *(unsigned char *)((t144 + 0x0)) = 0x0;
        t144 = (t144 + 0x1);
    }
    return 0xC309BCE;
}

