/* game/demo: functions 0C04EA10-0C04F098, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04ea10(int a4, int a5, int a6, int a7);
int FUN_0c04eaa4(int a4, int a5);

int FUN_0c04ea10(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC04EAE8)->v);
    u1 = (((struct o4_float *)0xC04EAE8)->v);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - u1);
                t0 = 0xB0;
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                return t0;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0130000003f);
            t0 = 0x2C;
            if (((((struct o2C_float *)(a4))->v)) > ((((struct oC_float *)0xC04EAE8)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
    } else {
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + u1);
    t0 = 0xB0;
    if (!(((((struct oB0_float *)(a4))->v)) > 1.0f)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c04eaa4(int a4, int a5)
{
    int stk[8];
    register int t2;
    register int t141;
    register int t6;
    register int t7;
    register int t8;
    register int t14;
    register int t64;
    register float u70;
    register int t56;
    register float u62;
    register float u17;
    register int t18;
    register int t20;
    register int t21;
    register float u24;
    register float u25;
    register int t40;
    register int t45;
    register int t50;
    register int t53;
    register int t132;
    register int t72;
    register int t124;
    register int t116;
    register float u74;
    register int t75;
    register int t77;
    register int t81;
    register float u82;
    register int t101;
    register int t106;
    register int t111;
    register int t114;
    register int t157;
    register int t188;
    register int t220;
    register int t234;
    register int t11;
    register float u30;
    register float u90;

    *(unsigned int *)(((int)stk + 0)) = ((a5 << 2) << 1);
    t2 = *(signed char *)(((*(int *)((0xC240DC4 + ((a5 << 2) << 1)))) + 0x0));
    if (t2 != 127) {
        if (t2 != 126) {
            if (t2 != 125) {
                *(float *)(((int)stk + 20)) = 0.0f;
                *(float *)(((int)stk + 16)) = 0.0f;
                t6 = *(int *)((((*(int *)(((int)stk + 0))) + 0xC240DC0) + 0x0));
                t141 = 0x10;
                if ((*(signed char *)((t6 + 0x0))) == 0) {
                } else {
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(signed char *)((t6 + 0x0));
                        t6 = (t6 + 0x1);
                        if (t8 == 0) {
                            break;
                        }
                        t7 = (t7 + 0x1);
                    }
                    *(unsigned int *)(((int)stk + 28)) = (*(int *)((((*(int *)(((int)stk + 0))) + 0xC240DC0) + 0x0)));
                    if ((int)t7 > (int)0xA) {
                        *(unsigned int *)(((int)stk + 12)) = 0xA;
                        t11 = (t7 - 10);
                    } else {
                        *(unsigned int *)(((int)stk + 12)) = t7;
                        t11 = 0x0;
                    }
                    t14 = FUN_0c03f444(0x8, 0x0, (*(int *)(((int)stk + 12))));
                    t64 = t14;
                    u70 = 0.0f;
                    if (t14 != 0) {
                        *(unsigned int *)((t14 + 0x4)) = 0xC04EA10;
                        (((struct oA8_uchar *)(t14))->v) = 0x1;
                        (((struct oAC_ushort *)(t14))->v) = 0x41F;
                        (((struct oA9_uchar *)(t14))->v) = 0x80;
                        (((struct oB0_float *)(t14))->v) = 0.0f;
                        (((struct o28_float *)(t14))->v) = -2.0f;
                        (((struct o2C_float *)(t14))->v) = -2.0f;
                        (((struct o30_float *)(t14))->v) = -5.0f;
                        (((struct o40_float *)(t14))->v) = 0.0199999996f;
                        (((struct o44_float *)(t14))->v) = 0.0199999996f;
                        (((struct o48_float *)(t14))->v) = 0.0199999996f;
                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 0))) + 0xC240DC0) + 0x4);
                        t56 = 0x48;
                        u62 = 0.0f;
                        if ((int)(*(int *)(((int)stk + 12))) > 0) {
                            u17 = 0.0f;
                            for (;;) {
                                t18 = *(int *)(((int)stk + 28));
                                t20 = *(int *)((((0xC4 + t14) + (*(int *)(((int)stk + 8)))) + 0x0));
                                *(unsigned int *)(((int)stk + 28)) = (t18 + 0x1);
                                t21 = *(signed char *)((((t18 + 0x1) - 1) + 0x0));
                                if ((signed char)t21 != 32) {
                                    *(unsigned char *)((t20 + 0x0)) = 0x1;
                                } else {
                                    *(unsigned char *)((t20 + 0x0)) = 0x0;
                                }
                                u24 = (((struct o14_float *)(((int)stk + 0)))->v);
                                u25 = (((struct o10_float *)(((int)stk + 0)))->v);
                                if (((*(float *)((((signed char)t21 << 2) + 0xC1B87CC))) + u24) > ((*(float *)((((signed char)t21 << 2) + 0xC1B89CC))) + u25)) {
                                    u30 = ((*(float *)((((signed char)t21 << 2) + 0xC1B87CC))) + u24);
                                } else {
                                    u30 = ((*(float *)((((signed char)t21 << 2) + 0xC1B89CC))) + u25);
                                }
                                u17 = (u17 + (u30 / (1.0f + 1.0f)));
                                (((struct o14_float *)(((int)stk + 0)))->v) = (*(float *)((((signed char)t21 << 2) + 0xC1B87CC)));
                                (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)((((signed char)t21 << 2) + 0xC1B89CC)));
                                FUN_0c03744a(t20, 0x0, (unsigned short)(*(short *)((((signed char)t21 << 1) + 0xC1B86CC))), ((((struct o0_int *)0xC4B40D0)->v)));
                                *(unsigned short *)((t20 + 0x6)) = 0x31F;
                                (((struct o6C_float *)(t20))->v) = u17;
                                (((struct o70_float *)(t20))->v) = 0.0f;
                                (((struct o74_float *)(t20))->v) = 0.0f;
                                (((struct o84_float *)(t20))->v) = 1.0f;
                                (((struct o88_float *)(t20))->v) = 1.0f;
                                (((struct o8C_float *)(t20))->v) = 1.0f;
                                t40 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0));
                                (((struct o18_float *)(t20))->v) = (*(float *)((((((t40 << 1) + t40) << 2) + 0xC1B8688) + 0x0)));
                                t45 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0));
                                (((struct o1C_float *)(t20))->v) = ((((struct o4_float *)(((((t45 << 1) + t45) << 2) + 0xC1B8688)))->v));
                                t50 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0));
                                (((struct o20_float *)(t20))->v) = ((((struct o8_float *)(((((t50 << 1) + t50) << 2) + 0xC1B8688)))->v));
                                t53 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t53 + 0x1);
                                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
                                if ((int)(t53 + 0x1) < (int)(*(int *)(((int)stk + 12)))) continue;
                                break;
                            }
                            t56 = 0x20;
                            u62 = u17;
                        }
                        t64 = t56;
                        u70 = u62;
                    }
                    t132 = t64;
                    if (t11 != 0) {
                        t72 = FUN_0c03f444(0x8, 0x0, t11);
                        t124 = t72;
                        if (t72 != 0) {
                            *(unsigned int *)((t72 + 0x4)) = 0xC04EA10;
                            (((struct oA8_uchar *)(t72))->v) = 0x1;
                            (((struct oAC_ushort *)(t72))->v) = 0x41F;
                            (((struct oA9_uchar *)(t72))->v) = 0x80;
                            (((struct oB0_float *)(t72))->v) = 0.0f;
                            (((struct o28_float *)(t72))->v) = -2.0f;
                            (((struct o2C_float *)(t72))->v) = -2.0f;
                            (((struct o30_float *)(t72))->v) = -5.0f;
                            (((struct o40_float *)(t72))->v) = 0.0199999996f;
                            (((struct o44_float *)(t72))->v) = 0.0199999996f;
                            (((struct o48_float *)(t72))->v) = 0.0199999996f;
                            *(unsigned int *)(((int)stk + 12)) = 0x0;
                            *(unsigned int *)(((int)stk + 4)) = 0x0;
                            *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 0))) + 0xC240DC0) + 0x4);
                            t116 = 0x48;
                            if ((int)t11 > 0) {
                                u74 = u70;
                                for (;;) {
                                    t75 = *(int *)(((int)stk + 28));
                                    t77 = *(int *)((((0xC4 + t72) + (*(int *)(((int)stk + 4)))) + 0x0));
                                    *(unsigned int *)(((int)stk + 28)) = (t75 + 0x1);
                                    *(unsigned char *)(((int)stk + 8)) = (*(signed char *)((((t75 + 0x1) - 1) + 0x0)));
                                    if ((*(signed char *)(((int)stk + 8))) != 32) {
                                        *(unsigned char *)((t77 + 0x0)) = 0x1;
                                    } else {
                                        *(unsigned char *)((t77 + 0x0)) = 0x0;
                                    }
                                    t81 = *(signed char *)(((((int)stk + 0) + 0x8) + 0x0));
                                    u82 = (((struct o14_float *)(((int)stk + 0)))->v);
                                    if (((*(float *)((0xC1B87CC + (t81 << 2)))) + u82) > ((*(float *)((0xC1B89CC + (t81 << 2)))) + ((((struct o10_float *)(((int)stk + 0)))->v)))) {
                                        u90 = ((*(float *)((0xC1B87CC + (t81 << 2)))) + u82);
                                    } else {
                                        u90 = ((*(float *)((0xC1B89CC + (t81 << 2)))) + ((((struct o10_float *)(((int)stk + 0)))->v)));
                                    }
                                    u74 = (u74 + (u90 / (1.0f + 1.0f)));
                                    (((struct o14_float *)(((int)stk + 0)))->v) = (*(float *)((0xC1B87CC + (t81 << 2))));
                                    (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)((0xC1B89CC + (t81 << 2))));
                                    FUN_0c03744a(t77, 0x0, (unsigned short)(*(short *)((((*(signed char *)(((int)stk + 8))) << 1) + 0xC1B86CC))), ((((struct o0_int *)0xC4B40D0)->v)));
                                    *(unsigned short *)((t77 + 0x6)) = 0x31F;
                                    (((struct o6C_float *)(t77))->v) = u74;
                                    (((struct o70_float *)(t77))->v) = 0.0f;
                                    (((struct o74_float *)(t77))->v) = 0.0f;
                                    (((struct o84_float *)(t77))->v) = 1.0f;
                                    (((struct o88_float *)(t77))->v) = 1.0f;
                                    (((struct o8C_float *)(t77))->v) = 1.0f;
                                    t101 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0));
                                    (((struct o18_float *)(t77))->v) = (*(float *)((((((t101 << 1) + t101) << 2) + 0xC1B8688) + 0x0)));
                                    t106 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0));
                                    (((struct o1C_float *)(t77))->v) = ((((struct o4_float *)(((((t106 << 1) + t106) << 2) + 0xC1B8688)))->v));
                                    t111 = *(signed char *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0));
                                    (((struct o20_float *)(t77))->v) = ((((struct o8_float *)(((((t111 << 1) + t111) << 2) + 0xC1B8688)))->v));
                                    t114 = *(int *)(((int)stk + 12));
                                    *(unsigned int *)(((int)stk + 12)) = (t114 + 0x1);
                                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
                                    if ((int)(t114 + 0x1) < (int)t11) continue;
                                    break;
                                }
                                t116 = 0x20;
                            }
                            t124 = t116;
                        }
                        t132 = t124;
                    }
                    t141 = t132;
                }
                t234 = t141;
            } else {
                t157 = FUN_0c03f444(0x8, 0x0, 0x1);
                t234 = t157;
                if (t157 == 0) {
                } else {
                    *(unsigned int *)((t157 + 0x4)) = 0xC04EA10;
                    FUN_0c03733c(t157, 0x4, ((((struct o3C_int *)0xC4B40D0)->v)));
                    (((struct oA8_uchar *)(t157))->v) = 0x1;
                    (((struct oAC_ushort *)(t157))->v) = 0x41F;
                    (((struct oA9_uchar *)(t157))->v) = 0x80;
                    (((struct o28_float *)(t157))->v) = -0.0f;
                    (((struct o2C_float *)(t157))->v) = -2.0f;
                    (((struct o30_float *)(t157))->v) = -5.0f;
                    (((struct o40_float *)(t157))->v) = 0.0078125f;
                    (((struct o44_float *)(t157))->v) = 0.0078125f;
                    (((struct o48_float *)(t157))->v) = 0.0078125f;
                    (((struct oB0_float *)(t157))->v) = 0.0f;
                    *(unsigned char *)((((((struct oC4_int *)(t157))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((((((struct oC4_int *)(t157))->v)) + 0x6)) = 0x100;
                    (((struct o6C_float *)(((((struct oC4_int *)(t157))->v))))->v) = 0.0f;
                    (((struct o70_float *)(((((struct oC4_int *)(t157))->v))))->v) = 0.0f;
                    (((struct o74_float *)(((((struct oC4_int *)(t157))->v))))->v) = 0.0f;
                    t234 = 0x74;
                }
            }
        } else {
            t188 = FUN_0c03f444(0x8, 0x0, 0x1);
            t234 = t188;
            if (t188 == 0) {
            } else {
                *(unsigned int *)((t188 + 0x4)) = 0xC04EA10;
                FUN_0c03733c(t188, 0x3, ((((struct o3C_int *)0xC4B40D0)->v)));
                (((struct oA8_uchar *)(t188))->v) = 0x1;
                (((struct oAC_ushort *)(t188))->v) = 0x41F;
                (((struct oA9_uchar *)(t188))->v) = 0x80;
                (((struct o28_float *)(t188))->v) = -0.5f;
                (((struct o2C_float *)(t188))->v) = -2.0f;
                (((struct o30_float *)(t188))->v) = -5.0f;
                (((struct o40_float *)(t188))->v) = 0.0078125f;
                (((struct o44_float *)(t188))->v) = 0.0078125f;
                (((struct o48_float *)(t188))->v) = 0.0078125f;
                (((struct oB0_float *)(t188))->v) = 0.0f;
                *(unsigned char *)((((((struct oC4_int *)(t188))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(t188))->v)) + 0x6)) = 0x100;
                (((struct o6C_float *)(((((struct oC4_int *)(t188))->v))))->v) = 0.0f;
                (((struct o70_float *)(((((struct oC4_int *)(t188))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC4_int *)(t188))->v))))->v) = 0.0f;
                t234 = 0x74;
            }
        }
    } else {
        t220 = FUN_0c03f444(0x8, 0x0, 0x1);
        t234 = t220;
        if (t220 == 0) {
        } else {
            *(unsigned int *)((t220 + 0x4)) = 0xC04EA10;
            FUN_0c03733c(t220, 0x2, ((((struct o3C_int *)0xC4B40D0)->v)));
            (((struct oA8_uchar *)(t220))->v) = 0x1;
            (((struct oAC_ushort *)(t220))->v) = 0x41F;
            (((struct oA9_uchar *)(t220))->v) = 0x80;
            (((struct o28_float *)(t220))->v) = -1.0f;
            (((struct o2C_float *)(t220))->v) = -2.0f;
            (((struct o30_float *)(t220))->v) = -5.0f;
            (((struct o40_float *)(t220))->v) = 0.0078125f;
            (((struct o44_float *)(t220))->v) = 0.0078125f;
            (((struct o48_float *)(t220))->v) = 0.0078125f;
            (((struct oB0_float *)(t220))->v) = 0.0f;
            *(unsigned char *)((((((struct oC4_int *)(t220))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t220))->v)) + 0x6)) = 0x100;
            (((struct o6C_float *)(((((struct oC4_int *)(t220))->v))))->v) = 0.0f;
            (((struct o70_float *)(((((struct oC4_int *)(t220))->v))))->v) = 0.0f;
            (((struct o74_float *)(((((struct oC4_int *)(t220))->v))))->v) = 0.0f;
            t234 = 0x74;
        }
    }
    return t234;
}
