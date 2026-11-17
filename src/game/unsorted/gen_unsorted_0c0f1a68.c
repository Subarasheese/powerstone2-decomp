/* game/unsorted: functions 0C0F1A68-0C0F25C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ffbe(void);
int FUN_0c042fe0(void);
int FUN_0c052c00(int, int, int);
int FUN_0c053ccc(int, int, int, int, int);
int FUN_0c056e44(int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059d30(void);
int FUN_0c059e60(int, int);
int FUN_0c05b052(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b507a(int, int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d039e(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0f1a68(int);
int FUN_0c0f44d6(int);
int FUN_0c0f4920(int, int, int, int);
int FUN_0c0f1b40(int a4);
int FUN_0c0f1bac(int a4);
int FUN_0c0f1c1c(int a4);
int FUN_0c0f1c54(int a4);
int FUN_0c0f1c90(int a4);
int FUN_0c0f1d14(int a4, int a5);
int FUN_0c0f1d90(int a4);
int FUN_0c0f1df4(int a4, int a5);
int FUN_0c0f1e62(int a4);
int FUN_0c0f1e8c(void);
int FUN_0c0f1ee8(int a4);
int FUN_0c0f2034(void);
int FUN_0c0f2060(int a4, int a5, int a6);
void FUN_0c0f25c2(void);

int FUN_0c0f1b40(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC54235E;
    t1 = t0;
    if (t0 == 2) {
        t0 = 0xC1C588C;
        t2 = 0x0;
        for (;;) {
            (((struct o40_uint *)((0xC540D94 + t2)))->v) = 0x0;
            t3 = FUN_0c0f1df4(a4, t0);
            t2 = (t2 + 0x4);
            t0 = (t0 + 0x30);
            if ((unsigned int)t2 >= (unsigned int)0x10) {
                break;
            }
        }
        t1 = t3;
    }
    return t1;
}

int FUN_0c0f1bac(int a4)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CD6E4)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CD6F0)));
    *(unsigned short *)0xC540996 = 0x0;
    t2 = *(signed char *)0xC542237;
    t3 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t2 << 2) << 1) + t2) << 2) + 0xC286D34) + (((t3 << 1) + t3) << 2)));
    FUN_0c03ea04(0x2, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    t8 = 0x3;
    if (a4 == 0) {
        t8 = 0x0;
    }
    return FUN_0c0f1a68(t8);
}

int FUN_0c0f1c1c(int a4)
{
    if ((*(signed char *)0xC54223C) == 0) {
        return (FUN_0c053ccc(0x4000, 0x1555, a4, 0x2, 0xC1CDF80));
    }
    return FUN_0c052c00(0x0, 0x0, a4);
}

int FUN_0c0f1c54(int a4)
{
    register int t3;

    *(unsigned short *)0xC540996 = 0x0;
    t3 = FUN_0c0cfecc((*(int *)(((((a4 << 2) << 1) + 0xC1CDD18) + 0x0))), 0xC540996, (*(int *)(((((a4 << 2) << 1) + 0xC1CDD18) + 0x4))));
    if ((int)t3 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0f1c90(int a4)
{
    register int t3;

    *(unsigned short *)0xC540998 = 0x0;
    t3 = FUN_0c0cfecc((*(int *)(((((a4 << 2) << 1) + 0xC1CDF68) + 0x0))), 0xC540998, (*(int *)(((((a4 << 2) << 1) + 0xC1CDF68) + 0x4))));
    if ((int)t3 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0f1d14(int a4, int a5)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                t0 = a4;
                if (a4 != 3) {
                } else {
                    if (a5 != 0) {
                        t1 = (FUN_0c0d039e(0x6, 0x7));
                    } else {
                        t1 = (FUN_0c0d0378(0x6, 0x7));
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                if (a5 != 0) {
                    t0 = (FUN_0c0d039e(0x4, 0x5));
                } else {
                    t0 = (FUN_0c0d0378(0x4, 0x5));
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            if (a5 != 0) {
                t1 = (FUN_0c0d039e(0x2, 0x3));
            } else {
                t1 = (FUN_0c0d0378(0x2, 0x3));
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if (a5 != 0) {
            t0 = (FUN_0c0d039e(0x0, 0x1));
        } else {
            t0 = (FUN_0c0d0378(0x0, 0x1));
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c0f1d90(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        if (a4 != 1) {
            t0 = a4;
            if (a4 != 2) {
            } else {
                t0 = (FUN_0c053ccc(0x4000, 0x1555, 0xA, 0x2, 0xC1CDFC8));
            }
            t1 = t0;
        } else {
            t1 = (FUN_0c053ccc(0x4000, 0x1555, 0xA, 0x2, 0xC1CDFB0));
        }
        t0 = t1;
    } else {
        t0 = (FUN_0c053ccc(0x4000, 0x1555, 0xA, 0x2, 0xC1CDF98));
    }
    return t0;
}

int FUN_0c0f1df4(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = *(signed char *)((a5 + 0x0));
        if ((*(int *)(((((((t1 << 2) + t0) + 0x10) << 2) + 0xC540D94) + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    *(unsigned int *)(((((((t1 << 2) + t0) + 0x10) << 2) + 0xC540D94) + 0x0)) = (FUN_0c0f4920((*(signed char *)0xC542363), (((t1 << 2) + t0) + 0x10), a4, a5));
    return 0x1;
}

int FUN_0c0f1e62(int a4)
{
    register int t0;
    register int t1;

    t0 = (((a4 << 2) + 0x10) << 2);
    t1 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC540D94 + t0) + 0x0))) != 0) {
            break;
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x4) {
            return 0x1;
        }
    }
    return 0x0;
}

int FUN_0c0f1e8c(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;
    register int t9;

    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if (((((struct o40_int *)((0xC540D94 + t3)))->v)) != 0) {
            t1 = 0x41C;
            t1 = (t1 + 0xC540978);
            t1 = (t1 + t2);
            t1 = (t1 + 0x40);
            t1 = (*(int *)((t1 + 0x0)));
            t0 = (FUN_0c0f44d6(t1));
        } else {
            t9 = t1;
        }
        t3 = (t3 + 0x4);
        t1 = t9;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0x40) {
            break;
        }
    }
    return t0;
}

int FUN_0c0f1ee8(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
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
    v0_2 = a4;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (0xC5421F8);
    v0_3 = (0xC1CDFE0);
    v0_5 = (0x0);
    v0_4 = (0x0);
    v0_6 = (0x8);
    L_C0F1F08:;
    if (((int)(unsigned char)(*(signed char *)(((v0_1 + 0x4A) + 0x0))) < (int)(*(int *)((v0_3 + (v0_5 << 2)))))) goto L_C0F1F1E;
    v0_4 = (v0_5);
    L_C0F1F1E:;
    v0_7 = (int)(v0_5 + 0x1) < (int)v0_6;
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C0F1F08;
    v0_3 = *(signed char *)0xC540990;
    v0_5 = (v0_3);
    v0_1 = (0xC472AC8);
    v0_6 = (0xC540990);
    v0_4 = ((v0_4 & 0x7));
    if ((v0_3 == 0)) goto L_C0F1F3A;
    if ((v0_5 == 1)) goto L_C0F1F46;
    v0_1 = (FUN_0c0f1e62(0x0)) == 0;
    if (v0_1) goto L_C0F201E;
    v0_1 = (FUN_0c0f1e62(0x1)) == 0;
    if (v0_1) goto L_C0F201E;
    v0_1 = (FUN_0c0f1e62(0x2)) == 0;
    if (v0_1) goto L_C0F201E;
    *(unsigned char *)0xC540990 = v0_0;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    L_C0F201E:;
    return (*(int *)(((int)stk + 20)));
    L_C0F1F46:;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = ((v0_2 << 2) + 0xC258F4C);
    *(unsigned int *)(((int)stk + 16)) = (0xC1C54FC + ((((((v0_2 << 2) << 1) + v0_2) << 2) << 2) << 1));
    *(unsigned int *)(((int)stk + 12)) = (((v0_4 << 1) + v0_4) << 2);
    v0_4 = (0x3);
    v0_3 = (v0_0);
    v0_2 = (((((((v0_2 << 2) << 1) + v0_2) << 2) << 2) << 1));
    v0_5 = (0x4);
    L_C0F1F76:;
    if (((int)(*(int *)((v0_1 + (v0_3 << 2)))) >= (int)v0_4)) goto L_C0F1FE2;
    v0_2 = (FUN_0c0f1e62(v0_3)) == 0;
    if (v0_2) goto L_C0F1FE8;
    *(unsigned int *)(((int)stk + 8)) = ((v0_3 << 2) + v0_1);
    v0_6 = (v0_0);
    v0_7 = ((((((((v0_3 << 1) + v0_3) << 2) << 2) << 1) + (*(int *)(((int)stk + 16)))) + (*(int *)(((int)stk + 12)))));
    L_C0F1FAA:;
    v0_8 = *(signed char *)((v0_6 + (((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + v0_7)));
    v0_2 = (v0_8);
    if (((int)v0_8 < 0)) goto L_C0F1FCE;
    FUN_0c0f1df4(0x0, (((((v0_2 << 1) + v0_2) << 2) << 2) + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))));
    L_C0F1FCE:;
    v0_2 = (int)(v0_6 + 0x1) < (int)v0_5;
    v0_6 = ((v0_6 + 0x1));
    if (v0_2) goto L_C0F1FAA;
    *(unsigned int *)((v0_1 + (v0_3 << 2))) = ((*(int *)((v0_1 + (v0_3 << 2)))) + 0x1);
    L_C0F1FE8:;
    v0_2 = (int)(v0_3 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x1));
    if (v0_2) goto L_C0F1F76;
    if (((int)(*(int *)(((int)stk + 4))) < (int)v0_4)) goto L_C0F201E;
    *(unsigned char *)0xC540990 = ((*(signed char *)0xC540990) + 0x1);
    goto L_C0F201E;
    L_C0F1FE2:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C0F1FE8;
    L_C0F1F3A:;
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) + 0x1);
    *(unsigned int *)((v0_1 + 0x8)) = v0_0;
    *(unsigned int *)((v0_1 + 0x4)) = v0_0;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    goto L_C0F1F46;
}

int FUN_0c0f2034(void)
{
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)0xC542237) == 6) && ((t1 = *(signed char *)0xC54098C, (int)t1 > 0) && ((t2 = *(signed char *)0xC54098D, t2 == 4) && (t3 = *(signed char *)0xC54098E, (int)t3 > (int)0x1)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0f2060(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t28;
    register float u15;
    register int t46;
    register int t62;
    register int t64;
    register int t66;
    register int t71;
    register int t73;
    register int t84;
    register int t88;
    register int t94;
    register int t96;
    register int t115;
    register int t118;
    register int t124;
    register int t121;
    register int t126;
    register int t130;
    register int t133;
    register int t151;
    register int t154;
    register int t156;
    register int t158;
    register int t162;
    register int t172;
    register int t175;
    register int t176;
    register int t177;
    register int t181;
    register int t182;
    register int t183;
    register int t184;
    register int t185;
    register int t202;
    register float u189;
    register int t220;
    register int t237;
    register int t239;
    register int t241;
    register int t246;
    register int t248;
    register int t259;
    register int t263;
    register int t269;
    register int t271;
    register int t290;
    register int t293;
    register int t299;
    register int t296;
    register int t301;
    register int t305;
    register int t308;
    register int t326;
    register int t329;
    register int t331;
    register int t333;
    register int t337;
    register int t347;
    register int t33;
    register float u12;
    register float u13;
    register float u29;
    register float u30;
    register float u25;
    register float u26;
    register float u21;
    register float u22;
    register int t100;
    register int t207;
    register float u186;
    register float u187;
    register float u203;
    register float u204;
    register float u199;
    register float u200;
    register float u195;
    register float u196;
    register int t275;

    t0 = *(signed char *)0xC54098C;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)0xC54098E;
        t2 = *(signed char *)0xC54223C;
        t3 = *(signed char *)0xC54098D;
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 == 4) {
                            if (t1 != 0) {
                                if (t1 != 1) {
                                    if (t1 != 2) {
                                        if (t1 != 3) {
                                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                            (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                                            return FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x13, 0x0);
                                        }
                                        t33 = FUN_0c0f1c54(t2);
                                        if (t33 == 0) {
                                        } else {
                                            t7 = *(signed char *)0xC54098E;
                                            (((struct o2_uchar *)0xC54098C)->v) = (t7 + 0x1);
                                            t8 = 0xC0F23E8;
                                            t9 = (t7 + 0x1);
                                            t10 = 0x0;
                                            t11 = 0xC540978;
                                            for (;;) {
                                                if ((int)t10 >= (int)0x4) {
                                                    break;
                                                }
                                                t11 = (t10 * 0x3938);
                                                t11 = (t11 + 0xC532498);
                                                t8 = (*(signed char *)((t11 + 0x2)));
                                                t28 = t9;
                                                if (t8 != 13) {
                                                    t8 = 0x28;
                                                    u12 = -100.0f;
                                                    u13 = (float)t10;
                                                    u15 = u12;
                                                    u15 = u15 + 100.0f * u13;
                                                    u12 = u15;
                                                    *(float *)((t11 + t8)) = u12;
                                                    t8 = 0x2C;
                                                    *(float *)((t11 + t8)) = 800.0f;
                                                    t8 = 0x30;
                                                    *(float *)((t11 + t8)) = 1000.0f;
                                                    t8 = 0x3714;
                                                    t9 = (*(signed char *)((t11 + t8)));
                                                    t28 = t9;
                                                    if (t9 != 0) {
                                                        t8 = 0x160;
                                                        u13 = 0.0f;
                                                        u12 = (*(float *)((t11 + t8)));
                                                        if (u12 > u13) {
                                                            t8 = (FUN_0c085cac(((t10 * 0x3938) + 0xC532498), 0x0, 0x0));
                                                        } else {
                                                            t28 = t9;
                                                            u21 = u12;
                                                            u22 = u13;
                                                        }
                                                        u25 = u21;
                                                        u26 = u22;
                                                    } else {
                                                        u25 = u12;
                                                        u26 = u13;
                                                    }
                                                    u29 = u25;
                                                    u30 = u26;
                                                } else {
                                                    u29 = u12;
                                                    u30 = u13;
                                                }
                                                u12 = u29;
                                                u13 = u30;
                                                t10 = (t10 + 0x1);
                                                t9 = t28;
                                            }
                                            t33 = t8;
                                        }
                                        return t33;
                                    }
                                    t46 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t46 - 1);
                                    if ((int)(short)(t46 - 1) <= 0) {
                                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                        FUN_0c0f1bac(0x1);
                                        *(unsigned char *)0xC540F98 = 0x1;
                                    }
                                    if (((((struct o8_short *)0xC54098C)->v)) == 0x110) {
                                        FUN_0c05b052(0x1E, 0x0);
                                    }
                                    t62 = (((struct o8_short *)0xC54098C)->v);
                                    if (t62 != 0xF0) {
                                        return t62;
                                    }
                                    FUN_0c059c54(0xE);
                                    return FUN_0c059d30();
                                }
                                t64 = (((struct o8_short *)0xC54098C)->v);
                                (((struct o8_ushort *)0xC54098C)->v) = (t64 - 1);
                                t66 = (short)(t64 - 1);
                                if ((int)(short)(t64 - 1) > 0) {
                                } else {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                    *(unsigned char *)0xC542235 = 0x0;
                                    t66 = 0x3D;
                                }
                                return t66;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c056e44(0x19, 0x7, a6);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                            t71 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t71 - 1);
                            t73 = (short)(t71 - 1);
                            if ((int)(short)(t71 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                *(unsigned char *)0xC542235 = 0x0;
                                t73 = 0x3D;
                            }
                            return t73;
                        }
                        if (t3 == 5) {
                            if (t1 != 0) {
                                if (t1 != 1) {
                                    if (t1 != 2) {
                                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        FUN_0c0f1d14(0x3, 0x0);
                                        *(unsigned char *)0xC542235 = 0x2;
                                        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                                        t84 = FUN_0c042fe0();
                                        if (t84 != 0) {
                                            FUN_0c059c7a(0x13, 0x0);
                                        }
                                        return FUN_0c0f1c1c(0xA);
                                    }
                                    t88 = *(signed char *)0xC54098F;
                                    if (t88 != 0) {
                                        if (t88 != 1) {
                                            return t88;
                                        }
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        return FUN_0c0f1c1c(0x0);
                                    }
                                    (((struct o3_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098F) + 0x1);
                                    FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x40, 0x0);
                                    if ((*(signed char *)0xC54235E) != 0) {
                                        return FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x18);
                                    }
                                    return 0x166;
                                }
                                t94 = FUN_0c03ffbe();
                                if (t94 != 0) {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                    t100 = 0x17;
                                } else {
                                    t96 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t96 - 1);
                                    t100 = (short)(t96 - 1);
                                    if ((int)(short)(t96 - 1) >= 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        t100 = 0x17;
                                    }
                                }
                                return t100;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            if ((*(signed char *)0xC54235E) != 0) {
                                FUN_0c056e44(0x19, 0x8, a6);
                            }
                            (((struct o8_ushort *)0xC54098C)->v) = 0x258;
                            return 0x258;
                        }
                        if (t3 == 6) {
                            return t3;
                        }
                        if (t3 == 7) {
                            FUN_0c0f1bac(t2);
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            t115 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t115 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t115;
                        }
                        if (t3 == 8) {
                            t118 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t118 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t118;
                        }
                        
                        return t3;
                    }
                    if (t1 != 0) {
                        if (t1 != 1) {
                            if (t1 != 2) {
                                t124 = t1;
                                if (t1 != 3) {
                                } else {
                                    t121 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t121 - 1);
                                    t124 = (short)(t121 - 1);
                                    if ((int)(short)(t121 - 1) > 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        t124 = 0x16;
                                    }
                                }
                                return t124;
                            }
                            t126 = *(signed char *)0xC54098F;
                            (((struct o3_uchar *)0xC54098C)->v) = (t126 + 0x1);
                            if ((int)(signed char)(t126 + 0x1) >= (int)0x3) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                return FUN_0c0f1d14(0x2, 0x1);
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                            return 0x78;
                        }
                        t130 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t130 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t133 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t133 - 1);
                        if ((int)(short)(t133 - 1) > 0) {
                            return (short)(t133 - 1);
                        }
                    } else {
                        (((struct o8_ushort *)0xC54098C)->v) = 0xA8C;
                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                        (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                        FUN_0c0f1d14((*(signed char *)0xC54098F), 0x0);
                        if ((*(signed char *)0xC54098F) != 0) {
                            FUN_0c0f1c90((*(signed char *)0xC54098F));
                            FUN_0c0f1d14(((*(signed char *)0xC54098F) - 1), 0x1);
                            FUN_0c0f1a68((*(signed char *)0xC54098F));
                        }
                        FUN_0c0f1d90((*(signed char *)0xC54098F));
                        t151 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t151 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t154 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t154 - 1);
                        if ((int)(short)(t154 - 1) > 0) {
                            return (short)(t154 - 1);
                        }
                    }
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                    return FUN_0c0f1e8c();
                }
                t156 = FUN_0c042fe0();
                t158 = t156;
                if (t156 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                    t158 = 0x18;
                }
                return t158;
            }
            t162 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t162 == 0) {
                return t162;
            }
        } else {
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o3_uchar *)0xC54098C)->v) = 0x0;
            FUN_0c0f1bac(0x0);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            FUN_0c0f1c90((*(signed char *)0xC54098F));
            t172 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t172 == 0) {
                return t172;
            }
        }
    } else {
        (((struct o0_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098C) + 0x1);
        (((struct o18_uint *)0xC540A20)->v) = 0x0;
        (((struct o0_uchar *)0xC540A20)->v) = 0x0;
        (((struct o1_uchar *)0xC54098C)->v) = 0x0;
        t175 = *(signed char *)0xC54098E;
        t176 = *(signed char *)0xC54223C;
        t177 = *(signed char *)0xC54098D;
        if (t177 != 0) {
            if (t177 != 1) {
                if (t177 != 2) {
                    if (t177 != 3) {
                        if (t177 == 4) {
                            if (t175 != 0) {
                                if (t175 != 1) {
                                    if (t175 != 2) {
                                        if (t175 != 3) {
                                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                            (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                                            return FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x13, 0x0);
                                        }
                                        t207 = FUN_0c0f1c54(t176);
                                        if (t207 == 0) {
                                        } else {
                                            t181 = *(signed char *)0xC54098E;
                                            (((struct o2_uchar *)0xC54098C)->v) = (t181 + 0x1);
                                            t182 = 0xC0F23E8;
                                            t183 = (t181 + 0x1);
                                            t184 = 0x0;
                                            t185 = 0xC540978;
                                            for (;;) {
                                                if ((int)t184 >= (int)0x4) {
                                                    break;
                                                }
                                                t185 = (t184 * 0x3938);
                                                t185 = (t185 + 0xC532498);
                                                t182 = (*(signed char *)((t185 + 0x2)));
                                                t202 = t183;
                                                if (t182 != 13) {
                                                    t182 = 0x28;
                                                    u186 = -100.0f;
                                                    u187 = (float)t184;
                                                    u189 = u186;
                                                    u189 = u189 + 100.0f * u187;
                                                    u186 = u189;
                                                    *(float *)((t185 + t182)) = u186;
                                                    t182 = 0x2C;
                                                    *(float *)((t185 + t182)) = 800.0f;
                                                    t182 = 0x30;
                                                    *(float *)((t185 + t182)) = 1000.0f;
                                                    t182 = 0x3714;
                                                    t183 = (*(signed char *)((t185 + t182)));
                                                    t202 = t183;
                                                    if (t183 != 0) {
                                                        t182 = 0x160;
                                                        u187 = 0.0f;
                                                        u186 = (*(float *)((t185 + t182)));
                                                        if (u186 > u187) {
                                                            t182 = (FUN_0c085cac(((t184 * 0x3938) + 0xC532498), 0x0, 0x0));
                                                        } else {
                                                            t202 = t183;
                                                            u195 = u186;
                                                            u196 = u187;
                                                        }
                                                        u199 = u195;
                                                        u200 = u196;
                                                    } else {
                                                        u199 = u186;
                                                        u200 = u187;
                                                    }
                                                    u203 = u199;
                                                    u204 = u200;
                                                } else {
                                                    u203 = u186;
                                                    u204 = u187;
                                                }
                                                u186 = u203;
                                                u187 = u204;
                                                t184 = (t184 + 0x1);
                                                t183 = t202;
                                            }
                                            t207 = t182;
                                        }
                                        return t207;
                                    }
                                    t220 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t220 - 1);
                                    if ((int)(short)(t220 - 1) <= 0) {
                                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                        FUN_0c0f1bac(0x1);
                                        *(unsigned char *)0xC540F98 = 0x1;
                                    }
                                    if (((((struct o8_short *)0xC54098C)->v)) == 0x110) {
                                        FUN_0c05b052(0x1E, 0x0);
                                    }
                                    t237 = (((struct o8_short *)0xC54098C)->v);
                                    if (t237 != 0xF0) {
                                        return t237;
                                    }
                                    FUN_0c059c54(0xE);
                                    return FUN_0c059d30();
                                }
                                t239 = (((struct o8_short *)0xC54098C)->v);
                                (((struct o8_ushort *)0xC54098C)->v) = (t239 - 1);
                                t241 = (short)(t239 - 1);
                                if ((int)(short)(t239 - 1) > 0) {
                                } else {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                    *(unsigned char *)0xC542235 = 0x0;
                                    t241 = 0x3D;
                                }
                                return t241;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            FUN_0c056e44(0x19, 0x7, a6);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                            t246 = (((struct o8_short *)0xC54098C)->v);
                            (((struct o8_ushort *)0xC54098C)->v) = (t246 - 1);
                            t248 = (short)(t246 - 1);
                            if ((int)(short)(t246 - 1) > 0) {
                            } else {
                                (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                (((struct o8_ushort *)0xC54098C)->v) = 0x12C;
                                *(unsigned char *)0xC542235 = 0x0;
                                t248 = 0x3D;
                            }
                            return t248;
                        }
                        if (t177 == 5) {
                            if (t175 != 0) {
                                if (t175 != 1) {
                                    if (t175 != 2) {
                                        (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        FUN_0c0f1d14(0x3, 0x0);
                                        *(unsigned char *)0xC542235 = 0x2;
                                        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
                                        t259 = FUN_0c042fe0();
                                        if (t259 != 0) {
                                            FUN_0c059c7a(0x13, 0x0);
                                        }
                                        return FUN_0c0f1c1c(0xA);
                                    }
                                    t263 = *(signed char *)0xC54098F;
                                    if (t263 != 0) {
                                        if (t263 != 1) {
                                            return t263;
                                        }
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        return FUN_0c0f1c1c(0x0);
                                    }
                                    (((struct o3_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098F) + 0x1);
                                    FUN_0c0b507a((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x40, 0x0);
                                    if ((*(signed char *)0xC54235E) != 0) {
                                        return FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x18);
                                    }
                                    return 0x166;
                                }
                                t269 = FUN_0c03ffbe();
                                if (t269 != 0) {
                                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                    t275 = 0x17;
                                } else {
                                    t271 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t271 - 1);
                                    t275 = (short)(t271 - 1);
                                    if ((int)(short)(t271 - 1) >= 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x63;
                                        (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                                        t275 = 0x17;
                                    }
                                }
                                return t275;
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            if ((*(signed char *)0xC54235E) != 0) {
                                FUN_0c056e44(0x19, 0x8, a6);
                            }
                            (((struct o8_ushort *)0xC54098C)->v) = 0x258;
                            return 0x258;
                        }
                        if (t177 == 6) {
                            return t177;
                        }
                        if (t177 == 7) {
                            FUN_0c0f1bac(t176);
                            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                            t290 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t290 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t290;
                        }
                        if (t177 == 8) {
                            t293 = FUN_0c0f1c54(((*(signed char *)0xC54223C) + 0x2));
                            if (t293 != 0) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                return FUN_0c0d02a6();
                            }
                            return t293;
                        }
                    
                        return t177;
                    }
                    if (t175 != 0) {
                        if (t175 != 1) {
                            if (t175 != 2) {
                                t299 = t175;
                                if (t175 != 3) {
                                } else {
                                    t296 = (((struct o8_short *)0xC54098C)->v);
                                    (((struct o8_ushort *)0xC54098C)->v) = (t296 - 1);
                                    t299 = (short)(t296 - 1);
                                    if ((int)(short)(t296 - 1) > 0) {
                                    } else {
                                        (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                        t299 = 0x16;
                                    }
                                }
                                return t299;
                            }
                            t301 = *(signed char *)0xC54098F;
                            (((struct o3_uchar *)0xC54098C)->v) = (t301 + 0x1);
                            if ((int)(signed char)(t301 + 0x1) >= (int)0x3) {
                                (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                                (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                                return FUN_0c0f1d14(0x2, 0x1);
                            }
                            (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                            (((struct o8_ushort *)0xC54098C)->v) = 0x78;
                            return 0x78;
                        }
                        t305 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t305 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t308 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t308 - 1);
                        if ((int)(short)(t308 - 1) > 0) {
                            return (short)(t308 - 1);
                        }
                    } else {
                        (((struct o8_ushort *)0xC54098C)->v) = 0xA8C;
                        (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                        (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                        FUN_0c0f1d14((*(signed char *)0xC54098F), 0x0);
                        if ((*(signed char *)0xC54098F) != 0) {
                            FUN_0c0f1c90((*(signed char *)0xC54098F));
                            FUN_0c0f1d14(((*(signed char *)0xC54098F) - 1), 0x1);
                            FUN_0c0f1a68((*(signed char *)0xC54098F));
                        }
                        FUN_0c0f1d90((*(signed char *)0xC54098F));
                        t326 = FUN_0c0f1ee8((*(signed char *)0xC54098F));
                        if (t326 != 0) {
                            (((struct o8_ushort *)0xC54098C)->v) = 0x0;
                        }
                        t329 = (((struct o8_short *)0xC54098C)->v);
                        (((struct o8_ushort *)0xC54098C)->v) = (t329 - 1);
                        if ((int)(short)(t329 - 1) > 0) {
                            return (short)(t329 - 1);
                        }
                    }
                    (((struct o2_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098E) + 0x1);
                    return FUN_0c0f1e8c();
                }
                t331 = FUN_0c042fe0();
                t333 = t331;
                if (t331 == 0) {
                } else {
                    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
                    (((struct o3_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o2_uchar *)0xC54098C)->v) = 0x0;
                    (((struct o4_uchar *)0xC54098C)->v) = 0x0;
                    t333 = 0x18;
                }
                return t333;
            }
            t337 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t337 == 0) {
                return t337;
            }
        } else {
            (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
            (((struct o3_uchar *)0xC54098C)->v) = 0x0;
            FUN_0c0f1bac(0x0);
            FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
            FUN_0c0f1c90((*(signed char *)0xC54098F));
            t347 = FUN_0c0f1c54((*(signed char *)0xC54223C));
            if (t347 == 0) {
                return t347;
            }
        }
    }
    (((struct o1_uchar *)0xC54098C)->v) = ((*(signed char *)0xC54098D) + 0x1);
    return ((int (*)(void))(0xC0F1C16))();
}

void FUN_0c0f25c2(void)
{
    
}
