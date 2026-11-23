/* game/debug: functions 0C175A4C-0C1770FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c059c7a(int, int);
int FUN_0c059ca0(int);
int FUN_0c059cb2(int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05a2b8(int, int, int, int, int);
int FUN_0c05a344(void);
int FUN_0c05a396(int);
int FUN_0c05aa9c(int);
int FUN_0c05aab6(int, int);
int FUN_0c05aad0(int, int, int);
int FUN_0c05ab24(int, int, int);
int FUN_0c05ab7e(int, int);
int FUN_0c05abb2(int, int);
int FUN_0c05abcc(int, int);
int FUN_0c05abfe(int);
int FUN_0c05aca8(int, int);
int FUN_0c05ae28(int);
int game_reset_objects(void);
int FUN_0c17594c(void);
int FUN_0c176890(void);
int dbg_set_cell_size(int, int);
int FUN_0c17a360(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c180a6c(int, int, int);
int FUN_0c180b3c(int, int, int, int, int);
int FUN_0c180bec(int, int, int, int, int, int, int);
int nlsndRemainMem(void);
int FUN_0c175a4c(void);
int FUN_0c175cac(void);
int FUN_0c1760c4(int a4, int a5, int a6);
int FUN_0c17623e(int a4);
int FUN_0c1766e6(void);
int FUN_0c176996(void);

int FUN_0c175a4c(void)
{
    int stk[11];
    register int t7;
    register int t11;
    register int t12;
    register int t29;
    register int t36;
    register int t41;
    register int t64;
    register int t75;
    register int t80;
    register int t91;
    register int t100;

    FUN_0c17a4c0(0x8, 0x25);
    FUN_0c17a360(0xC204B1C);
    FUN_0c17a4c0(0x8, 0x26);
    FUN_0c17a360(0xC204B58);
    FUN_0c17a4c0(0x8, 0x27);
    FUN_0c17a360(0xC204B1C);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)0xC2A5C54);
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = 0x28;
    *(unsigned int *)(((int)stk + 40)) = 0x28;
    t7 = 0x28;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)0xA) {
            *(unsigned int *)(((int)stk + 24)) = 0x0;
        }
        t11 = *(int *)(((int)stk + 24));
        t12 = *(int *)(((int)stk + 28));
        *(unsigned int *)(((int)stk + 32)) = (t12 + 0x28);
        FUN_0c17a4c0(0x8, (t12 + 0x28));
        *(int *)((int)stk + 20) = ((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0xC476078))));
        *(int *)((int)stk + 16) = 0xC204B94;
        dbg_printf(0xC204B94);
        FUN_0c17a4c0(0x10, (*(int *)(((int)stk + 32))));
        if ((unsigned char)(*(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x0))) == 0xFF) {
            FUN_0c17a360(0xC204BA0);
        } else {
            *(int *)((int)stk + 20) = (unsigned char)(*(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x0)));
            *(int *)((int)stk + 16) = 0xC204BA8;
            dbg_printf(0xC204BA8);
        }
        FUN_0c17a4c0(0x17, (*(int *)(((int)stk + 32))));
        t29 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x1));
        if ((unsigned char)t29 == 0xA8) {
            FUN_0c17a360(0xC204BB0);
        } else {
            if ((unsigned char)t29 == 0xA9) {
                FUN_0c17a360(0xC204BB8);
            } else {
                t36 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x1));
                if ((unsigned char)t36 == 0xAA) {
                    FUN_0c17a360(0xC204BC0);
                } else {
                    if ((unsigned char)t36 == 0xAB) {
                        FUN_0c17a360(0xC204BC8);
                    } else {
                        t41 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x1));
                        if ((unsigned char)t41 == 0x80) {
                            FUN_0c17a360(0xC204BD0);
                        } else {
                            *(int *)((int)stk + 20) = (unsigned char)t41;
                            *(int *)((int)stk + 16) = 0xC204BA8;
                            dbg_printf(0xC204BA8);
                        }
                    }
                }
            }
        }
        FUN_0c17a4c0(0x1F, t7);
        *(int *)((int)stk + 20) = (unsigned char)(*(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x2)));
        *(int *)((int)stk + 16) = 0xC204BD4;
        dbg_printf(0xC204BD4);
        FUN_0c17a4c0(0x23, t7);
        *(int *)((int)stk + 12) = (unsigned char)(*(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x3)));
        *(int *)((int)stk + 8) = 0xC204BD4;
        dbg_printf(0xC204BD4);
        FUN_0c17a4c0(0x27, t7);
        *(int *)((int)stk + 4) = (unsigned char)(*(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x4)));
        *(int *)((int)stk + 0) = 0xC204BD4;
        dbg_printf(0xC204BD4);
        FUN_0c17a4c0(0x2B, t7);
        t64 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x5));
        if ((unsigned char)t64 == 0xFF) {
            FUN_0c17a360(0xC204BD8);
        } else {
            if (((unsigned char)t64 & 128) != 0) {
                FUN_0c17a360(0xC204BE0);
            } else {
                *(int *)((int)stk + 20) = (unsigned char)(*(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x5)));
                *(int *)((int)stk + 16) = 0xC204BA8;
                dbg_printf(0xC204BA8);
            }
        }
        FUN_0c17a4c0(0x33, (*(int *)(((int)stk + 40))));
        t75 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x6));
        if ((unsigned char)t75 == 0xFF) {
            FUN_0c17a360(0xC204BD8);
        } else {
            if ((unsigned char)t75 == 0xFE) {
                FUN_0c17a360(0xC204BE8);
            } else {
                t80 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x6));
                if (((unsigned char)t80 & 128) != 0) {
                    FUN_0c17a360(0xC204BE0);
                } else {
                    *(int *)((int)stk + 20) = (unsigned char)t80;
                    *(int *)((int)stk + 16) = 0xC204BA8;
                    dbg_printf(0xC204BA8);
                }
            }
        }
        FUN_0c17a4c0(0x3B, (*(int *)(((int)stk + 36))));
        t91 = *(signed char *)(((((t11 << 2) << 1) + 0xC476028) + 0x7));
        if ((unsigned char)t91 == 0xFF) {
            FUN_0c17a360(0xC204BF0);
        } else {
            *(int *)((int)stk + 20) = (unsigned char)t91;
            *(int *)((int)stk + 16) = 0xC204BA8;
            dbg_printf(0xC204BA8);
        }
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x1);
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x1);
        *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1);
        t100 = *(int *)(((int)stk + 28));
        t7 = (t7 + 0x1);
        if ((int)t100 < (int)0xA) continue;
        break;
    }
    return t100;
}

int FUN_0c175cac(void)
{
    int stk[9];
    register int t15;
    register int t17;
    register int t25;
    int t37;
    register int t39;
    register int t40;
    register int t41;
    register int t48;
    register int t63;
    register int t74;
    register int t87;
    register int t102;
    register int t156;
    register int t168;
    register int t16;
    register int t18;
    register int t38;
    register int t56;
    register int t180;
    register int t91;
    register int t140;
    register int t141;
    register int t186;

    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a550(0xFF5FFF5F);
    FUN_0c17a4c0(0x8, 0x1);
    FUN_0c17a360(0xC204BF4);
    FUN_0c17a4c0(0x5, 0x3);
    FUN_0c17a550(0xFFFFFF1F);
    FUN_0c17a360(0xC204C08);
    FUN_0c17a4c0(0x14, 0x3);
    FUN_0c17a360(0xC204C10);
    FUN_0c17a4c0(0x17, 0x1C);
    FUN_0c17a550(0xFF1FFFFF);
    *(int *)((int)stk + 8) = ((*(int *)0xC476010));
    *(int *)((int)stk + 4) = 0xC204C1C;
    dbg_printf(0xC204C1C);
    t15 = dbg_set_cell_size(0x8, 0x8);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0xC204930;
    t17 = 0xC204930;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)((((struct o34_int *)0xC204904)->v))) {
            break;
        }
        t15 = (FUN_0c17a550(0xFFFFFFFF));
        t16 = (*(int *)(((int)stk + 20)));
        t18 = 0x0;
        for (;;) {
            if ((int)t18 >= (int)(*(int *)((t17 + 0x4)))) {
                break;
            }
            *(unsigned int *)(((int)stk + 12)) = ((t18 << 2) << 1);
            t25 = *(int *)((t16 + 0x0));
            *(unsigned int *)(((int)stk + 16)) = (((t18 << 2) << 1) + t25);
            t15 = (*(signed char *)(((((t18 << 2) << 1) + t25) + 0x1)));
            t15 = (FUN_0c17a4c0((int)((float)(*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) * 1.0f), (int)((float)t15 * 1.0f)));
            t15 = (FUN_0c17a360((*(int *)((((*(int *)((t16 + 0x0))) + (*(int *)(((int)stk + 12)))) + 0x4)))));
            t18 = (t18 + 0x1);
        }
        t17 = (t17 + 0x8);
        *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x1);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x8);
    }
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    t37 = dbg_set_cell_size(0x10, 0x10);
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = 0xC476014;
    t39 = t16;
    t40 = t17;
    t41 = t18;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) < (int)((((struct o0_int *)0xC204904)->v))) {
            t37 = (FUN_0c17a550(0xFFFFFFFF));
            t40 = (*(int *)(((int)stk + 12)));
            t40 = (t40 * 0x74);
            t40 = (t40 + 0xC475F28);
            t48 = 0xC;
            if ((*(int *)(((int)stk + 12))) == 0) {
                t48 = 0x12;
            }
            *(unsigned int *)(((int)stk + 24)) = t48;
            t39 = 0x0;
            *(unsigned int *)(((int)stk + 16)) = ((((*(int *)(((int)stk + 12))) << 2) << 1) + 0xC2048F4);
            for (;;) {
                if ((int)t39 < (int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x4)))) {
                    t38 = (*(signed char *)((t40 + 0x0)));
                    if (t39 == t38) {
                        t41 = 0xFFFF3F1F;
                        *(unsigned int *)(((int)stk + 20)) = 0x1;
                        t37 = (FUN_0c17a550(t41));
                    } else {
                        t56 = t38;
                    }
                    t38 = t56;
                    t41 = t39;
                    t41 = (t41 << 2);
                    t63 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
                    t41 = (t41 << 1);
                    *(unsigned int *)(((int)stk + 28)) = (t63 + t41);
                    t37 = (*(signed char *)(((t63 + t41) + 0x1)));
                    t37 = (FUN_0c17a4c0((int)((float)(*(signed char *)(((*(int *)(((int)stk + 28))) + 0x0))) * 0.5f), (int)((float)t37 * 0.5f)));
                    t37 = (FUN_0c17a360((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) + t41) + 0x4)))));
                    t74 = *(int *)(((*(int *)(((int)stk + 16))) + 0x0));
                    *(unsigned int *)(((int)stk + 28)) = (t74 + t41);
                    t37 = (*(signed char *)(((t74 + t41) + 0x1)));
                    t37 = (FUN_0c17a4c0((int)((float)((*(signed char *)(((*(int *)(((int)stk + 28))) + 0x0))) + (*(int *)(((int)stk + 24)))) * 0.5f), (int)((float)t37 * 0.5f)));
                    t41 = t39;
                    t41 = (t41 << 2);
                    if ((*(int *)(((int)stk + 12))) != 0) {
                        t38 = (*(int *)((((t40 + 0x34) + t41) + 0x0)));
                        if ((*(int *)((((t40 + 0x4) + t41) + 0x0))) != t38) {
                            t37 = (*(int *)(((int)stk + 20)));
                            t87 = 0xFF1FFF1F;
                            if (t37 != 0) {
                                t87 = 0xFFFFFF1F;
                            }
                            t37 = (FUN_0c17a550(t87));
                            *(unsigned int *)(((int)stk + 20)) = 0x1;
                        } else {
                            t91 = t38;
                        }
                        t37 = t39;
                        t38 = t91;
                        if (t37 != 0) {
                            if ((t37 != 1) && ((t37 != 2) && ((t37 != 3) && (t37 != 4)))) {
                                if (t37 != 5) {
                                    t180 = t38;
                                } else {
                                    t37 = 0xC2A5CC8;
                                    t37 = (FUN_0c17a360((*(int *)((((*(int *)((((t40 + 0x4) + t41) + 0x0))) << 2) + t37)))));
                                }
                            } else {
                                t37 = 0xC476014;
                                t102 = *(int *)((t41 + t37));
                                t37 = 0xC2A5C58;
                                *(int *)((int)stk + 8) = (t102);
                                *(int *)((int)stk + 4) = ((*(int *)((((*(int *)((((t40 + 0x4) + t41) + 0x0))) << 2) + t37))));
                                *(int *)((int)stk + 0) = 0xC204C44;
                                t37 = (dbg_printf(0xC204C44));
                            }
                        } else {
                            t38 = t40;
                            t38 = (t38 + 0x4);
                            t37 = 0xC2A5C98;
                            t38 = (t38 + t41);
                            *(int *)((int)stk + 8) = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))));
                            *(int *)((int)stk + 4) = ((*(int *)((((*(int *)((t38 + 0x0))) << 2) + t37))));
                            *(int *)((int)stk + 0) = 0xC204C44;
                            t37 = (dbg_printf(0xC204C44));
                        }
                    } else {
                        t37 = t39;
                        switch (t37) {
                        case 5:
                            *(int *)((int)stk + 8) = (unsigned char)(*(int *)((((t40 + 0x4) + t41) + 0x0)));
                            *(int *)((int)stk + 4) = 0xC204BD4;
                            t37 = (dbg_printf(0xC204BD4));
                            break;
                        case 6:
                            t38 = t40;
                            t38 = (t38 + 0x4);
                            t38 = (t38 + t41);
                            *(int *)((int)stk + 8) = (unsigned char)(*(int *)((t38 + 0x0)));
                            *(int *)((int)stk + 4) = 0xC204BD4;
                            t37 = (dbg_printf(0xC204BD4));
                            break;
                        case 7:
                            t37 = 0xC204950;
                            t168 = *(int *)((((t40 + 0x4) + t41) + 0x0));
                            t37 = (FUN_0c17a360((*(int *)((((((t168 << 1) + t168) << 2) << 1) + t37)))));
                            break;
                        case 8:
                            t37 = t40;
                            t37 = (t37 + 0x4);
                            t37 = (*(int *)((t41 + t37)));
                            if (t37 == 8) {
                                t41 = 0xC204C28;
                                t37 = (FUN_0c17a360(t41));
                            } else {
                                if (t37 != -1) {
                                    *(int *)((int)stk + 8) = (unsigned char)(*(int *)((((t40 + 0x4) + t41) + 0x0)));
                                    *(int *)((int)stk + 4) = 0xC204C3C;
                                    t37 = (dbg_printf(0xC204C3C));
                                } else {
                                    t41 = 0xC204C34;
                                    t37 = (FUN_0c17a360(t41));
                                }
                            }
                            break;
                        case 9:
                            if ((int)(*(int *)((((t40 + 0x4) + t41) + 0x0))) <= (int)0xFFFFD8F1) {
                                t41 = 0xC204C34;
                                t37 = (FUN_0c17a360(t41));
                            } else {
                                t38 = 0xC204BD4;
                                *(int *)((int)stk + 8) = ((*(int *)((((t40 + 0x4) + t41) + 0x0))));
                                t156 = t38;
                                *(int *)((int)stk + 4) = t156;
                                t37 = (dbg_printf(t156));
                            }
                            break;
                        case 10:
                            t37 = 0xC2A5CDC;
                            t37 = (FUN_0c17a360((*(int *)((((*(int *)((((t40 + 0x4) + t41) + 0x0))) << 2) + t37)))));
                            break;
                        default:
                            if (t37 != 11) {
                                *(int *)((int)stk + 8) = (unsigned char)(*(int *)((((t40 + 0x4) + t41) + 0x0)));
                                *(int *)((int)stk + 4) = 0xC204BA8;
                                t140 = 0xC204BA8;
                            } else {
                                t38 = 0xC204BD4;
                                *(int *)((int)stk + 8) = ((*(int *)((((t40 + 0x4) + t41) + 0x0))));
                                t140 = t38;
                                *(int *)((int)stk + 4) = t140;
                                t141 = t38;
                            }
                            t38 = t141;
                            t37 = (dbg_printf(t140));
                            break;
                        }
                    }
                    t38 = t180;
                    if ((*(int *)(((int)stk + 20))) != 0) {
                        t37 = (FUN_0c17a550(0xFFFFFFFF));
                        *(unsigned int *)(((int)stk + 20)) = 0x0;
                    } else {
                        t186 = t38;
                    }
                    t38 = t186;
                    t39 = (t39 + 0x1);
                    continue;
                }
                break;
            }
            t38 = (*(int *)(((int)stk + 12)));
            t38 = (t38 + 0x1);
            *(unsigned int *)(((int)stk + 12)) = t38;
            continue;
        }
        break;
    }
    dbg_set_cell_size(0x8, 0x8);
    return FUN_0c175a4c();
}

int FUN_0c1760c4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC2A5C50;
    if ((((((struct o64_int *)(((a4 * 0x74) + 0xC475F28)))->v)) & 0x800) != 0) {
        t1 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
        *(unsigned int *)((((t1 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4)) + 0x0)) = ((*(int *)((((t1 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4)) + 0x0))) - t0);
        t1 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
        t2 = (((((signed char)t1 << 1) + (signed char)t1) << 2) + a6);
        if ((int)(*(int *)(((((signed char)t1 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4)) + 0x0))) >= (int)(*(int *)(((((((signed char)t1 << 1) + (signed char)t1) << 2) + a6) + 0x4)))) {
        } else {
            t1 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
            if ((*(int *)((a6 + (((t1 << 1) + t1) << 2)))) != 0) {
                t1 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                t3 = (*(int *)(((a6 + ((((signed char)t1 << 1) + (signed char)t1) << 2)) + 0x8)));
                t4 = (((signed char)t1 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4));
            } else {
                t1 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                t3 = (*(int *)(((a6 + ((((signed char)t1 << 1) + (signed char)t1) << 2)) + 0x4)));
                t4 = (((signed char)t1 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4));
            }
            *(unsigned int *)((t4 + 0x0)) = t3;
            t2 = t3;
        }
        t1 = t2;
    } else {
        if ((((((struct o64_int *)(((a4 * 0x74) + 0xC475F28)))->v)) & 0x400) != 0) {
            t2 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
            *(unsigned int *)((((t2 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4)) + 0x0)) = ((*(int *)((((t2 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4)) + 0x0))) + t0);
            t0 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
            t2 = (((((signed char)t0 << 1) + (signed char)t0) << 2) + a6);
            if ((int)(*(int *)(((((signed char)t0 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4)) + 0x0))) > (int)(*(int *)(((((((signed char)t0 << 1) + (signed char)t0) << 2) + a6) + 0x8)))) {
                t0 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                if ((*(int *)((a6 + (((t0 << 1) + t0) << 2)))) != 0) {
                    t0 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                    t3 = (*(int *)(((a6 + ((((signed char)t0 << 1) + (signed char)t0) << 2)) + 0x4)));
                    t4 = (((signed char)t0 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4));
                } else {
                    t0 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                    t3 = (*(int *)(((a6 + ((((signed char)t0 << 1) + (signed char)t0) << 2)) + 0x8)));
                    t4 = (((signed char)t0 << 2) + (((a4 * 0x74) + 0xC475F28) + 0x4));
                }
                *(unsigned int *)((t4 + 0x0)) = t3;
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = *(short *)(((((((a4 << 2) + a4) << 2) << 1) + 0xC5426C4) + 0x14));
            if (((unsigned short)t2 & 0x2000) != 0) {
                *(unsigned char *)((((a4 * 0x74) + 0xC475F28) + 0x0)) = ((*(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0))) - 1);
                t3 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                if ((int)t3 < 0) {
                    *(unsigned char *)((((a4 * 0x74) + 0xC475F28) + 0x0)) = (a5 - 1);
                }
                t4 = t3;
            } else {
                t3 = (unsigned short)t2;
                if (((unsigned short)t2 & 0x1000) != 0) {
                    *(unsigned char *)((((a4 * 0x74) + 0xC475F28) + 0x0)) = ((*(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0))) + 0x1);
                    t2 = *(signed char *)((((a4 * 0x74) + 0xC475F28) + 0x0));
                    t3 = t2;
                    if ((int)t2 >= (int)a5) {
                        *(unsigned char *)((((a4 * 0x74) + 0xC475F28) + 0x0)) = 0x0;
                        t3 = 0x0;
                    }
                }
                t4 = t3;
            }
            t0 = t4;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c17623e(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_4 = a4;
    FUN_0c1760c4(0x0, 0xC, 0xC2A5F4C);
    v0_2 = *(int *)0xC475F48;
    v0_0 = (0xC475F28);
    v0_1 = (0xC2A5F4C);
    v0_4 = (0xC2A5F4C);
    if (((*(int *)((((((v0_2 << 1) + v0_2) << 2) << 1) + 0xC204940))) != 0)) goto L_C1762B8;
    v0_2 = *(int *)((v0_0 + 0x20));
    *(unsigned int *)(((v0_4 + 0x6C) + 0x4)) = (*(int *)((((((v0_2 << 1) + v0_2) << 2) << 1) + 0xC204944)));
    v0_2 = *(int *)((v0_0 + 0x20));
    *(unsigned int *)(((v0_4 + 0x6C) + 0x8)) = (*(int *)((((((v0_2 << 1) + v0_2) << 2) << 1) + 0xC204948)));
    L_C1762C2:;
    v0_7 = (0x74);
    v0_4 = (v0_1);
    if (((int)(*(int *)((v0_0 + 0x28))) <= (int)((((struct o74_int *)(v0_1))->v)))) goto L_C1762D2;
    *(unsigned int *)((v0_0 + 0x28)) = (*(int *)((v0_4 + v0_7)));
    L_C1762D2:;
    v0_7 = (0x70);
    v0_4 = (v0_1);
    if (((int)(*(int *)((v0_0 + 0x28))) >= (int)((((struct o70_int *)(v0_1))->v)))) goto L_C1762E2;
    *(unsigned int *)((v0_0 + 0x28)) = (*(int *)((v0_4 + v0_7)));
    L_C1762E2:;
    v0_2 = *(int *)((v0_0 + 0x20));
    v0_4 = (v0_1);
    if (((*(int *)((((((v0_2 << 1) + v0_2) << 2) << 1) + 0xC20493C))) != 0)) goto L_C176306;
    *(unsigned int *)(((v0_4 + 0x60) + 0x4)) = 0x0;
    *(unsigned int *)(((v0_4 + 0x60) + 0x8)) = 0x7;
    L_C17633A:;
    v0_7 = (0x68);
    v0_4 = (v0_1);
    if (((int)(*(int *)((v0_0 + 0x24))) <= (int)((((struct o68_int *)(v0_1))->v)))) goto L_C17634A;
    *(unsigned int *)((v0_0 + 0x24)) = (*(int *)((v0_4 + v0_7)));
    L_C17634A:;
    v0_7 = (0x64);
    v0_4 = (v0_1);
    if (((int)(*(int *)((v0_0 + 0x24))) >= (int)((((struct o64_int *)(v0_1))->v)))) goto L_C17635A;
    *(unsigned int *)((v0_0 + 0x24)) = (*(int *)((v0_4 + v0_7)));
    L_C17635A:;
    if (((*(int *)((v0_0 + 0x2C))) == ((((struct o5C_int *)(v0_0))->v)))) goto L_C176388;
    *(unsigned int *)(((int)stk + 8)) = (v0_0 + 0x4);
    *(int *)((int)stk + 4) = (0x2C + (v0_0 + 0x4));
    *(unsigned int *)(((0x2C + (v0_0 + 0x4)) + 0x0)) = (FUN_0c059ca0((*(int *)(((*(int *)(((int)stk + 8))) + 0x28)))));
    (((struct o60_uint *)(v0_0))->v) = (FUN_0c059cb2((*(int *)((v0_0 + 0x2C)))));
    L_C176388:;
    (((struct o5C_uint *)(v0_0))->v) = (*(int *)((v0_0 + 0x2C)));
    v0_1 = *(int *)(((((*(signed char *)((v0_0 + 0x0))) << 2) + (v0_0 + 0x4)) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = 0xC542854;
    *(unsigned int *)(((int)stk + 20)) = 0xC476014;
    v0_2 = (v0_1);
    v0_3 = (0x0);
    L_C1763A4:;
    if (!((((unsigned short)(*(short *)(((*(int *)(((int)stk + 8))) + 0x14))) & (*(int *)(((v0_3 << 2) + 0xC204C50)))) != 0))) goto L_C176666;
    v0_8 = *(signed char *)((v0_0 + 0x0));
    v0_7 = (v0_8);
    v0_4 = (0xA);
    v0_1 = (0xC2A5C54);
    v0_5 = (0xC46DE90);
    v0_6 = (0xC476028);
    if ((v0_8 == 0)) goto L_C176404;
    if ((v0_7 == 1)) goto L_C17643A;
    if ((v0_7 == 2)) goto L_C176472;
    if ((v0_7 != 3)) goto L_C1763D8;
    v0_7 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = FUN_0c05abfe(v0_2);
    FUN_0c180b3c(0x7, v0_8, 0x27B0, v0_7, *(int *)((int)stk + 8));
    if ((v0_3 == 1)) goto L_C17650C;
    if ((v0_3 != 3)) goto L_C176518;
    goto L_C17650C;
    L_C176666:;
    v0_7 = (0xC204C50);
    if ((((unsigned short)(*(short *)(((*(int *)(((int)stk + 8))) + 0x10))) & (*(int *)(((v0_3 << 2) + 0xC204C50)))) == 0)) goto L_C1766C6;
    v0_1 = *(signed char *)((v0_0 + 0x0));
    v0_7 = (v0_1);
    if ((v0_1 == 6)) goto L_C17668A;
    if ((v0_7 == 9)) goto L_C17669C;
    if (!((v0_7 == 11))) goto L_C1766C6;
    v0_7 = ((FUN_0c05aca8(((((struct o60_int *)(v0_0))->v)), (*(int *)((v0_0 + 0x30))))));
    v0_1 = (0xC05ACA8);
    goto L_C1766C6;
    L_C1766C6:;
    v0_1 = (unsigned int)(v0_3 + 0x1) >= (unsigned int)0x4;
    v0_3 = ((v0_3 + 0x1));
    v0_4 = (0x4);
    if (v0_1) goto L_C1766D2;
    goto L_C1763A4;
    L_C1766D2:;
    return v0_7;
    L_C17669C:;
    v0_1 = *(int *)(((v0_0 + 0x4) + 0x1C));
    v0_7 = ((FUN_0c180a6c((*(int *)(((v0_0 + 0x4) + 0x20))), (*(int *)((((((v0_1 << 1) + v0_1) << 2) << 1) + 0xC20494C))), (*(int *)(((v0_0 + 0x4) + 0x24))))));
    v0_1 = ((v0_0 + 0x4));
    goto L_C1766C6;
    L_C17668A:;
    v0_7 = ((FUN_0c180bec((*(int *)(((v0_0 + 0x4) + 0x14))), 0xA6, (*(int *)(((v0_0 + 0x4) + 0x18))), R7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8))));
    v0_1 = ((v0_0 + 0x4));
    goto L_C1766C6;
    L_C17650C:;
    v0_7 = ((FUN_0c05abb2(v0_2, 0x0)));
    L_C176520:;
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(((((*(int *)((v0_1 + 0x0))) << 2) << 1) + v0_6)) = *(struct mvb8 *)(0xC46DE88); }
    *(unsigned int *)(((0xC476078 + ((*(int *)((v0_1 + 0x0))) << 2)) + 0x0)) = (*(int *)((v0_5 + 0x0)));
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) >= (int)v0_4)) goto L_C17654C;
    goto L_C176666;
    L_C17654C:;
    L_C1765F4:;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    goto L_C176666;
    L_C176518:;
    v0_7 = ((FUN_0c05ab7e(v0_2, 0x0)));
    goto L_C176520;
    L_C1763D8:;
    if ((v0_7 != 4)) goto L_C1763E0;
    *(unsigned int *)(((int)stk + 12)) = 0xC475F9C;
    if (((*(int *)0xC475FB4) != 2)) goto L_C176584;
    v0_7 = (*(int *)(((v0_3 << 2) + 0xC476018)));
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = FUN_0c05abcc(0x10, v0_2);
    FUN_0c180b3c(0x3, v0_8, 0x27B0, v0_7, *(int *)((int)stk + 8));
    v0_7 = (0x0);
    v0_8 = (0x10);
    R7 = (0x0);
    L_C1765C6:;
    FUN_0c05ab24(v0_2, v0_7, v0_8);
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(((((*(int *)((v0_1 + 0x0))) << 2) << 1) + v0_6)) = *(struct mvb8 *)(0xC46DE88); }
    *(unsigned int *)(((0xC476078 + ((*(int *)((v0_1 + 0x0))) << 2)) + 0x0)) = (*(int *)((v0_5 + 0x0)));
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)v0_4)) goto L_C176666;
    goto L_C1765F4;
    L_C176584:;
    *(unsigned int *)(((int)stk + 16)) = (v0_3 << 2);
    v0_7 = (*(int *)(((v0_3 << 2) + 0xC476018)));
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = (FUN_0c05abcc((*(int *)(((((*(int *)(((int)stk + 12))) + 0x34) + (*(int *)(((int)stk + 16)))) + 0x4))), v0_2));
    *(int *)((int)stk + 0) = v0_8;
    v0_9 = FUN_0c05aa9c(v0_3);
    FUN_0c180b3c((v0_9 + 0x3), v0_8, 0x27B0, v0_7, *(int *)((int)stk + 8));
    v0_7 = (v0_3);
    v0_8 = ((*(int *)(((0xC475FD0 + (*(int *)(((int)stk + 16)))) + 0x4))));
    R7 = (0x0);
    goto L_C1765C6;
    L_C1763E0:;
    if ((v0_7 != 5)) goto L_C1763E8;
    FUN_0c180bec((*(int *)(((v0_0 + 0x4) + 0x14))), 0xA6, (*(int *)(((v0_0 + 0x4) + 0x18))), R7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8));
    v0_1 = ((v0_0 + 0x4));
    goto L_C176666;
    L_C1763E8:;
    if (!((v0_7 != 7))) goto L_C17663E;
    if ((v0_7 != 8)) goto L_C1763F8;
    goto L_C17663E;
    L_C17663E:;
    v0_1 = *(int *)(((v0_0 + 0x4) + 0x1C));
    FUN_0c180a6c((*(int *)(((v0_0 + 0x4) + 0x20))), (*(int *)((((((v0_1 << 1) + v0_1) << 2) << 1) + 0xC20494C))), (*(int *)(((v0_0 + 0x4) + 0x24))));
    v0_1 = ((v0_0 + 0x4));
    goto L_C176666;
    L_C1763F8:;
    if ((v0_7 != 10)) goto L_C176400;
    FUN_0c059c7a((*(int *)((v0_0 + 0x2C))), 0x0);
    v0_1 = (0xC059C7A);
    goto L_C176666;
    L_C176400:;
    goto L_C176666;
    L_C176472:;
    FUN_0c05aad0(v0_2, v0_3, 0x0);
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(((((*(int *)((v0_1 + 0x0))) << 2) << 1) + v0_6)) = *(struct mvb8 *)(0xC46DE88); }
    *(unsigned int *)(((0xC476078 + ((*(int *)((v0_1 + 0x0))) << 2)) + 0x0)) = (*(int *)((v0_5 + 0x0)));
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)v0_4)) goto L_C1764A8;
    goto L_C1765F4;
    L_C1764A8:;
    goto L_C176666;
    L_C17643A:;
    FUN_0c05aab6(v0_3, v0_2);
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(((((*(int *)((v0_1 + 0x0))) << 2) << 1) + v0_6)) = *(struct mvb8 *)(0xC46DE88); }
    *(unsigned int *)(((0xC476078 + ((*(int *)((v0_1 + 0x0))) << 2)) + 0x0)) = (*(int *)((v0_5 + 0x0)));
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) >= (int)v0_4)) goto L_C17646E;
    goto L_C176666;
    L_C17646E:;
    goto L_C1765F4;
    L_C176404:;
    FUN_0c05ae28(v0_2);
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)(((((*(int *)((v0_1 + 0x0))) << 2) << 1) + v0_6)) = *(struct mvb8 *)(0xC46DE88); }
    *(unsigned int *)(((0xC476078 + ((*(int *)((v0_1 + 0x0))) << 2)) + 0x0)) = (*(int *)((v0_5 + 0x0)));
    v0_5 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)v0_4)) goto L_C176436;
    goto L_C1765F4;
    L_C176436:;
    goto L_C176666;
    L_C176306:;
    v0_2 = *(int *)((v0_0 + 0x20));
    if (((*(int *)((0xC20493C + ((((v0_2 << 1) + v0_2) << 2) << 1)))) != 1)) goto L_C176330;
    *(unsigned int *)(((v0_4 + 0x60) + 0x4)) = 0x0;
    *(unsigned int *)(((v0_4 + 0x60) + 0x8)) = 0x8;
    goto L_C17633A;
    L_C176330:;
    *(unsigned int *)(((v0_4 + 0x60) + 0x4)) = 0xFFFFFFFF;
    *(unsigned int *)(((v0_4 + 0x60) + 0x8)) = 0xFFFFFFFF;
    goto L_C17633A;
    L_C1762B8:;
    *(unsigned int *)(((v0_4 + 0x6C) + 0x4)) = 0xFFFFD8F1;
    *(unsigned int *)(((v0_4 + 0x6C) + 0x8)) = 0xFFFFD8F1;
    goto L_C1762C2;
}

int FUN_0c1766e6(void)
{
    int t0;
    register int t1;
    register int t2;

    if (((unsigned short)((((struct o0_short *)0xC54288C)->v)) & 0x200) == 0) {
        FUN_0c1760c4(0x1, 0x7, 0xC2A5FDC);
    } else {
        if (((*(signed char *)0xC475F9C) == 6) && (t0 = (((struct o4_short *)0xC54288C)->v), ((unsigned short)t0 & 0x200) != 0)) {
            game_reset_objects();
            if (((((struct o14_int *)0xC475FA0)->v)) == 0) {
                FUN_0c05a292(((((struct o0_int *)0xC475FA0)->v)), ((((struct o4_int *)0xC475FA0)->v)), ((((struct o8_int *)0xC475FA0)->v)), ((((struct oC_int *)0xC475FA0)->v)), (((((struct o10_int *)0xC475FA0)->v))));
            } else {
                t0 = (((struct o14_int *)0xC475FA0)->v);
                if (t0 == 1) {
                    FUN_0c05a2b8(((((struct o0_int *)0xC475FA0)->v)), ((((struct o4_int *)0xC475FA0)->v)), ((((struct o8_int *)0xC475FA0)->v)), ((((struct oC_int *)0xC475FA0)->v)), (((((struct o10_int *)0xC475FA0)->v))));
                } else {
                    if (t0 == 2) {
                        FUN_0c05a344();
                    } else {
                        if (((((struct o14_int *)0xC475FA0)->v)) == 3) {
                            FUN_0c05a396(((((struct o4_int *)0xC475FA0)->v)));
                        } else {
                            FUN_0c05a292(0xC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                        }
                    }
                }
            }
            *(unsigned char *)0xC542237 = ((((struct o0_int *)0xC475FA0)->v));
            t0 = 0x0;
            for (;;) {
                t1 = *(int *)(((0xC475FA0 + t0) + 0x0));
                t2 = (0xC475FD0 + t0);
                t0 = (t0 + 0x4);
                *(unsigned int *)((t2 + 0x0)) = t1;
                if ((unsigned int)t0 >= (unsigned int)0x1C) {
                    break;
                }
            }
            (((struct o10_uint *)0xC476000)->v) = (nlsndRemainMem());
        } else {
            t0 = *(int *)0xC2A5C50;
            if ((((((struct o0_int *)0xC476000)->v)) & 0x800) != 0) {
                t1 = *(signed char *)0xC475F9C;
                *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) - t0);
                if ((int)(*(int *)((0xC476014 + ((*(signed char *)0xC475F9C) << 2)))) < 0) {
                    t1 = *(signed char *)0xC475F9C;
                    *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) + 0x7F);
                }
            } else {
                if ((((((struct o0_int *)0xC476000)->v)) & 0x400) != 0) {
                    t1 = *(signed char *)0xC475F9C;
                    *(unsigned int *)((0xC476014 + (t1 << 2))) = ((*(int *)((0xC476014 + (t1 << 2)))) + t0);
                    if ((int)(*(int *)((0xC476014 + ((*(signed char *)0xC475F9C) << 2)))) > (int)0x7F) {
                        t0 = *(signed char *)0xC475F9C;
                        *(unsigned int *)((0xC476014 + (t0 << 2))) = ((*(int *)((0xC476014 + (t0 << 2)))) - 0x7F);
                    }
                }
            }
        }
    }
    t0 = (((struct o4_short *)0xC54288C)->v);
    if (((unsigned short)t0 & 0x100) != 0) {
        return game_reset_objects();
    }
    return (unsigned short)t0;
}

