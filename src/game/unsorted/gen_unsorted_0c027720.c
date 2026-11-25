/* game/unsorted: functions 0C027720-0C027F8E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
int FUN_0c0185b4(void);
int FUN_0c01b0fc(void);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int a4, int a5, int a6);
int FUN_0c02aa9e(void);
int FUN_0c02c324(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c027720(void);
int FUN_0c0277a0(void);
int FUN_0c0278a8(void);
int FUN_0c027ad0(void);
int FUN_0c027b94(int a4);
int FUN_0c027c84(void);
int FUN_0c027d88(void);
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };


int FUN_0c027720(void)
{
    int stk[35];
    register int t0;
    register int t20;
    int t3;

    t0 = FUN_0c022050();
    t20 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 103) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 1)) {
            t20 = FUN_0c1864e0((*(int *)0xC309994), 0xC309993, 0x1);
            (((struct o0_uchar *)0xC309993)->v) = ((*(signed char *)0xC309993) - 1);
            *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
            (((struct o12_uchar *)0xC30540C)->v) = 0x0;
            (((struct o8_uchar *)0xC30540C)->v) = 0x0;
            (((struct o0_ushort *)0xC30540C)->v) = 0x0;
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t20 = (FUN_0c02aa9e());
            } else {
                t20 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t20;
}

int FUN_0c0277a0(void)
{
    int stk[36];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register float F7;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C02781E;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C027810;
    return (FUN_0c02aa9e());
    L_C027810:;
    v0_0 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    L_C02781E:;
    v0_1 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (v0_1 + 0x1);
    v0_2 = (0xC30540C);
    if (((int)(short)((v0_1 + 0x1) - 1) >= (int)0x12C)) goto L_C02784C;
    if (((int)(*(short *)((v0_2 + 0x0))) < (int)0x3C)) goto L_C02789E;
    v0_0 = (FUN_0c021ed2()) != 0;
    if (v0_0) goto L_C02784C;
    v0_1 = FUN_0c021ee2();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C02789E;
    L_C02784C:;
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x6;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x9;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x5)) = (*(signed char *)0xC305420);
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    FUN_0c01e9e4();
    FUN_0c01b0fc();
    *(unsigned short *)0xC30EF6C = 0x0;
    v0_1 = (((int)stk + 0) + 0x10);
    v0_0 = ((FUN_0c0573c0(0xFF000000, 0x0, 0x14)));
    v0_2 = v0_1;
    L_C02789E:;
    return v0_0;
}

int FUN_0c0278a8(void)
{
    int qa0;
    int stk[102];
    int t106;
    int t120;
    int t2;
    int t87;
    int t133;
    int t3;
    int t101;
    int t79;
    int t55;
    int t4;
    int t126;
    int t88;
    int t142;
    int t0;
    int t72;
    int t71;

    qa0 = 0xC309994;
    t0 = FUN_0c022050();
    t142 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 12));
        t3 = *(int *)qa0;
        if ((t2 == 101) && (t4 = *(signed char *)(((int)stk + 4)), t4 == 8)) {
            FUN_0c1864e0(t3, (((int)stk + 0) + 0x14), 0x1);
            FUN_0c1864e0((*(int *)qa0), ((int)stk + 0), 0x1);
            if ((*(signed char *)(((int)stk + 20))) == 1) {
                FUN_0c1864e0((*(int *)qa0), 0xC309E07, 0x1);
                (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x77;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x2;
                t133 = (FUN_0c186740((*(int *)qa0), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            } else {
                t133 = *(signed char *)0xC309859;
                if (t133 != 7) {
                    (((struct o0_uchar *)0xC309859)->v) = 0x2;
                    (((struct o1_uchar *)0xC309859)->v) = 0x6;
                } else {
                    (((struct o0_uchar *)0xC309859)->v) = 0x1;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                }
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
            }
        } else {
            if ((t2 == 103) && (t55 = *(signed char *)(((int)stk + 4)), t55 == 2)) {
                t71 = 0x0;
                t72 = 0xC3099B8;
                for (;;) {
                    if ((int)t71 >= (int)0xE) {
                        break;
                    }
                    FUN_0c1864e0((*(int *)qa0), t72, 0x1);
                    t72 = (t72 + 0x1);
                    t71 = (t71 + 0x1);
                }
                (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x76;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x6;
                t126 = (FUN_0c186740((*(int *)qa0), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            } else {
                if ((t2 == 102) && (t79 = *(signed char *)(((int)stk + 4)), t79 == 6)) {
                    FUN_0c1864e0(t3, (((int)stk + 0) + 0x8), 0x1);
                    t87 = 0x0;
                    for (;;) {
                        t88 = *(signed char *)(((int)stk + 8));
                        if ((int)t87 >= (int)(unsigned char)t88) {
                            break;
                        }
                        FUN_0c1864e0((*(int *)qa0), (0xC30AA34 + t87), 0x1);
                        t87 = (t87 + 0x1);
                    }
                    if ((*(signed char *)0xC309993) == 0) {
                        (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x77;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x3;
                        t120 = (FUN_0c186740((*(int *)qa0), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                    } else {
                        (((struct o1_uchar *)0xC309859)->v) = 0x8;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        (((struct o3_uchar *)0xC309859)->v) = 0x0;
                        t120 = (unsigned char)t88;
                    }
                } else {
                    if ((t2 == 103) && (t101 = *(signed char *)(((int)stk + 4)), t101 == 3)) {
                        FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                        t106 = 0x0;
                        for (;;) {
                            if ((int)t106 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
                                break;
                            }
                            FUN_0c1864e0((*(int *)qa0), (t106 + 0xC3098E3), 0x1);
                            t106 = (t106 + 0x1);
                        }
                        *(unsigned char *)(t106 + 0xC3098E3) = 0x0;
                        (((struct o1_uchar *)0xC309859)->v) = 0x8;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        (((struct o3_uchar *)0xC309859)->v) = 0x0;
                        t120 = 0xC3098E3;
                    } else {
                        if ((*(signed char *)0xC30AF9A) != 0) {
                            t120 = (FUN_0c02aa9e());
                        } else {
                            t120 = (FUN_0c0222a4((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x4)));
                        }
                    }
                }
                t126 = t120;
            }
            t133 = t126;
        }
        t142 = t133;
    }
    return t142;
}

int FUN_0c027ad0(void)
{
    int stk[36];
    register int t0;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        if ((*(signed char *)0xC30AF9A) != 0) {
            return (FUN_0c02aa9e());
        }
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x74;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x5;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x3;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = (*(signed char *)((0xC309E0A + ((short)(*(signed char *)0xC30A34B) * (short)0x86))));
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = ((int)((*(short *)((0xC309E0A + ((short)(*(signed char *)0xC30A34B) * (short)0x86)))) & 0xFF00) >> 8);
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    (((struct o0_uchar *)0xC309859)->v) = 0x2;
    (((struct o1_uchar *)0xC309859)->v) = 0x6;
    (((struct o2_uchar *)0xC309859)->v) = 0x0;
    *(unsigned char *)0xC305416 = 0x0;
    FUN_0c01e9e4();
    FUN_0c02c324();
    *(unsigned short *)0xC30EF6C = 0x0;
    return (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
}


int FUN_0c027c84(void)
{
    int stk[37];
    register int t0;
    register int t40;
    register int t8;
    int t3;

    t0 = FUN_0c022050();
    t40 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 2)) {
            FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0x8), 0x1);
            t8 = *(signed char *)(((int)stk + 8));
            if (t8 != 0) {
                if (t8 != 1) {
                    if (t8 != 2) {
                    } else {
                        (((struct o1_uchar *)0xC309859)->v) = 0x4;
                    }
                    t40 = t8;
                } else {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x0;
                    t40 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                (((struct o0_uchar *)0xC309859)->v) = 0x1;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                t40 = t8;
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t40 = (FUN_0c02aa9e());
            } else {
                t40 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t40;
}

int FUN_0c027d88(void)
{
    int stk[36];

    int v0_2;
    int v0_0;
    int v0_1;
    int v0_3;
    int v0_4;
    int v0_5;
    int v0_6;
    int T_;
    int R6;
    int R3;
    int R2;
    int R1;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C027DAA;
    L_C027F78:;
    return v0_0;
    L_C027DAA:;
    FUN_0c0220c4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    v0_3 = *(signed char *)(((int)stk + 12));
    v0_0 = (0x6);
    v0_1 = (0xC186740);
    v0_1 = (0xC1864E0);
    v0_1 = (0xC309994);
    v0_2 = ((((int)stk + 0) + 0x10));
    v0_6 = (v0_3);
    v0_4 = (0x0);
    v0_5 = (0x3);
    if ((v0_3 != 102)) goto L_C027E04;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C027E04;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    v0_4 = (0xC30A34C);
    L_C027DE0:;
    FUN_0c1864e0((*(int *)(v0_1)), v0_4, 0x1);
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x1);
    v0_4 = (v0_4 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)v0_0)) goto L_C027DE0;
    *(unsigned char *)(v0_2) = 0x76;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_5;
    v0_0 = (0x2);
    L_C027E9E:;
    (((struct o2_uchar *)(v0_2))->v) = v0_0;
    L_C027EFA:;
    v0_0 = ((FUN_0c186740((*(int *)(v0_1)), v0_2, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))))));
    goto L_C027F78;
    L_C027E04:;
    v0_3 = ((*(int *)(v0_1)));
    if ((v0_6 != 102)) goto L_C027EA2;
    if (((*(signed char *)(((int)stk + 4))) != 2)) goto L_C027E7C;
    FUN_0c1864e0(v0_3, (((int)stk + 0) + 0x8), 0x1);
    *(unsigned int *)(((int)stk + 0)) = 0xC30A354;
    v0_0 = (v0_4);
    L_C027E30:;
    if (((int)v0_0 < (int)(unsigned char)(*(signed char *)(((int)stk + 8))))) goto L_C027E24;
    *(unsigned char *)(v0_0 + 0xC30A354) = v0_4;
    *(unsigned char *)(v0_2) = 0x76;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_5;
    v0_0 = (v0_5);
    goto L_C027E9E;
    L_C027E24:;
    FUN_0c1864e0((*(int *)(v0_1)), ((*(int *)(((int)stk + 0))) + v0_0), 0x1);
    v0_0 = (v0_0 + 0x1);
    goto L_C027E30;
    L_C027E7C:;
    if ((v0_6 != 102)) goto L_C027EA2;
    if (((*(signed char *)(((int)stk + 4))) != 3)) goto L_C027EA2;
    FUN_0c1864e0(v0_3, 0xC30A3E6, 0x1);
    *(unsigned char *)(v0_2) = 0x76;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_5;
    v0_0 = (0x4);
    goto L_C027E9E;
    L_C027EA2:;
    v0_5 = (0x1);
    if ((v0_6 != 102)) goto L_C027F08;
    if (((*(signed char *)(((int)stk + 4))) != 4)) goto L_C027F08;
    FUN_0c1864e0(v0_3, 0xC30A3E8, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3E9, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3EA, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3EB, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3EC, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3ED, 0x1);
    *(unsigned char *)(v0_2) = 0x77;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = 0x4;
    (((struct o2_uchar *)(v0_2))->v) = v0_5;
    (((struct o3_uchar *)(v0_2))->v) = v0_4;
    goto L_C027EFA;
    L_C027F08:;
    if ((v0_6 != 103)) goto L_C027F56;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C027F56;
    FUN_0c1864e0(v0_3, 0xC309993, 0x1);
    *(unsigned char *)0xC309993 = ((*(signed char *)0xC309993) - 1);
    *(unsigned char *)(v0_2) = 0x75;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_0;
    (((struct o2_uchar *)(v0_2))->v) = 0x9;
    (((struct o3_uchar *)(v0_2))->v) = v0_5;
    (((struct o4_uchar *)(v0_2))->v) = v0_5;
    (((struct o5_uchar *)(v0_2))->v) = (*(signed char *)0xC305420);
    v0_0 = FUN_0c186740((*(int *)(v0_1)), v0_2, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    v0_0 = (v0_0);
    goto L_C027F78;
    L_C027F56:;
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C027F68;
    v0_0 = ((FUN_0c02aa9e()));
    goto L_C027F78;
    L_C027F68:;
    v0_0 = ((FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4))));
    goto L_C027F78;
}
