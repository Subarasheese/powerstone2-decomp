/* game/ai: functions 0C1002F4-0C101BF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c02ec70(void);
int FUN_0c02f4ac(void);
int FUN_0c02f4c2(int);
int FUN_0c02f7a0(void);
int FUN_0c02f80c(void);
int FUN_0c02f81c(void);
int FUN_0c036606(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05a344(void);
int FUN_0c05f222(void);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
int FUN_0c100604(void);
int FUN_0c1008c4(void);
int FUN_0c10489c(void);
int FUN_0c10491c(void);
int FUN_0c10662c(void);
int FUN_0c10af74(float);
int FUN_0c10c9ce(void);
int FUN_0c10f4b2(float);
int FUN_0c111680(void);
int FUN_0c114c34(void);
int FUN_0c115d96(void);
int FUN_0c118d7a(int);
int FUN_0c118e94(void);
int FUN_0c119c94(void);
int FUN_0c11e19c(void);
int FUN_0c16f7ba(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int FUN_0c187798(void);
int syRtcGetDate(int);
int FUN_0c2b1b16(int);
int FUN_0c2b1b1c(void);
int FUN_0c1002f4(void);
int FUN_0c10056c(void);
int FUN_0c100650(void);
int thunk_FUN_0c10af74(float f4);
int FUN_0c100660(void);
int thunk_FUN_0c10c9ce(void);
int FUN_0c100672(void);
int thunk_FUN_0c10f4b2(float f4);
int FUN_0c100684(void);
int thunk_FUN_0c114c34(void);
int FUN_0c100696(void);
int FUN_0c1006a2(void);
int FUN_0c100706(void);
int FUN_0c100712(void);
int FUN_0c100780(int a4);
int FUN_0c10085a(void);
int FUN_0c100cbc(void);
int FUN_0c101000(void);
int FUN_0c1016e8(void);
int FUN_0c101b30(void);

int FUN_0c1002f4(void)
{
    int stk[8];
    register int t1;
    register int t6;
    register int t30;
    register int t38;
    register int t43;
    register int t51;
    int t5;
    int t25;
    register int t58;
    int t59;
    register int t60;
    register int t61;
    register int t62;
    int t70;

    FUN_0c10491c();
    t1 = *(signed char *)0xC541F43;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 == 2) {
                (((struct oC_uint *)0xC474720)->v) = (FUN_0c02f4c2(0xC541F43));
                (((struct o10_uint *)0xC474720)->v) = (FUN_0c02f4ac());
                if ((((((struct o0_int *)0xC474720)->v)) != -1) && (t5 = (((struct o10_int *)0xC474720)->v), t5 != -1)) {
                    t6 = (((struct o0_int *)0xC474720)->v);
                    if ((*(int *)(((((t5 << 2) << 2) + (*(int *)((((t6 << 2) + 0xC295DFC) + 0x0)))) + 0xC))) != -1) {
                        FUN_0c059c7a((*(int *)(((((t5 << 2) << 2) + (*(int *)((((t6 << 2) + 0xC295DFC) + 0x0)))) + 0xC))), 0x0);
                    }
                }
                if ((unsigned char)(*(signed char *)0xC541F44) != 5) {
                    if (((*(int *)0xC473CA0) != 0) && (t25 = *(int *)0xC474C3C, t25 != 0)) {
                        FUN_0c02f80c();
                        return FUN_0c118d7a((*(int *)0xC474C3C));
                    }
                    FUN_0c02f81c();
                    FUN_0c100604();
                    t30 = *(signed char *)0xC541F44;
                    t38 = (unsigned char)t30;
                    if ((unsigned char)t30 != 6) {
                        FUN_0c03f40c(0x5);
                        FUN_0c038548(0x5);
                        FUN_0c038e88(0x5);
                        FUN_0c03f40c(0x8);
                        FUN_0c038e88(0x8);
                        FUN_0c03f40c(0x9);
                        t38 = (FUN_0c038e88(0x9));
                    }
                    return t38;
                }
                FUN_0c100604();
                t43 = *(signed char *)0xC541F44;
                t51 = (unsigned char)t43;
                if ((unsigned char)t43 != 6) {
                    FUN_0c03f40c(0x5);
                    FUN_0c038548(0x5);
                    FUN_0c038e88(0x5);
                    FUN_0c03f40c(0x8);
                    FUN_0c038e88(0x8);
                    FUN_0c03f40c(0x9);
                    t51 = (FUN_0c038e88(0x9));
                }
                return t51;
            }
            return (unsigned char)t1;
        }
        (((struct oC_uint *)0xC474720)->v) = (FUN_0c02f4c2(0xC541F43));
        (((struct o10_uint *)0xC474720)->v) = (FUN_0c02f4ac());
        if ((((((struct o0_int *)0xC474720)->v)) != -1) && ((t58 = (((struct o10_int *)0xC474720)->v), t58 != -1) && (t59 = (((struct o0_int *)0xC474720)->v), t60 = (((struct o10_int *)0xC474720)->v), t61 = *(int *)((0xC295DFC + (t59 << 2))), t62 = *(int *)(((t61 + ((t60 << 2) << 2)) + 0xC)), t62 != -1))) {
            FUN_0c059c7a((*(int *)((((*(int *)(((((((struct o0_int *)0xC474720)->v)) << 2) + 0xC295DFC))) + ((((((struct o10_int *)0xC474720)->v)) << 2) << 2)) + 0xC))), 0x0);
        }
        if (((*(int *)0xC473CA0) != 0) && (t70 = *(int *)0xC474C3C, t70 != 0)) {
            FUN_0c02f80c();
            return FUN_0c118d7a((*(int *)0xC474C3C));
        }
        FUN_0c02f81c();
        FUN_0c10662c();
    } else {
        (((struct o0_uchar *)0xC541F43)->v) = 0x1;
        *(unsigned int *)0xC473CA0 = 0x0;
        (((struct o18_uint *)0xC474720)->v) = 0x0;
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        (((struct o2_uchar *)0xC541F43)->v) = 0x0;
        FUN_0c03eff6();
        FUN_0c16f7ba();
        FUN_0c0527e6();
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x23);
        FUN_0c187798();
        FUN_0c05a344();
        FUN_0c02ec70();
        FUN_0c056e44(0x23, 0x0);
        FUN_0c1008c4();
        FUN_0c10489c();
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
    FUN_0c03f40c(0x9);
    return (FUN_0c038e88(0x9));
}

int FUN_0c10056c(void)
{
    register int t0;

    t0 = *(int *)0xC474738;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        FUN_0c100706();
                        return FUN_0c100604();
                    }
                    FUN_0c100696();
                    return FUN_0c100604();
                }
                FUN_0c100684();
                return FUN_0c100604();
            }
            FUN_0c100672();
            return FUN_0c100604();
        }
        FUN_0c100660();
        return FUN_0c100604();
    }
    FUN_0c100650();
    return FUN_0c100604();
}

int FUN_0c100650(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x0;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c10af74(float f4)
{
    return FUN_0c10af74(f4);
}

int FUN_0c100660(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x1;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c10c9ce(void)
{
    return FUN_0c10c9ce();
}

int FUN_0c100672(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x2;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c10f4b2(float f4)
{
    return FUN_0c10f4b2(f4);
}

int FUN_0c100684(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x3;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int thunk_FUN_0c114c34(void)
{
    return FUN_0c114c34();
}

int FUN_0c100696(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x4;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c1006a2(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 != 2) {
            } else {
                (((struct o1_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F45) + 0x1);
                FUN_0c10085a();
                FUN_0c02f7a0();
                (((struct o0_uchar *)0xC541F44)->v) = 0x6;
                (((struct o1_uchar *)0xC541F44)->v) = 0x0;
                t1 = 0x0;
            }
            t0 = t1;
        } else {
            t1 = (((struct o10_short *)0xC541F44)->v);
            (((struct o10_ushort *)0xC541F44)->v) = (t1 + 0x1);
            t2 = (short)(t1 + 0x1);
            if ((int)(short)(t1 + 0x1) > (int)0x14) {
                t1 = *(signed char *)0xC541F45;
                (((struct o1_uchar *)0xC541F44)->v) = (t1 + 0x1);
                t2 = (t1 + 0x1);
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o1_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F45) + 0x1);
        (((struct o10_ushort *)0xC541F44)->v) = 0x0;
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
        t0 = (((struct o10_short *)0xC541F44)->v);
        (((struct o10_ushort *)0xC541F44)->v) = (t0 + 0x1);
        t2 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x14) {
            t0 = *(signed char *)0xC541F45;
            (((struct o1_uchar *)0xC541F44)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c100706(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x5;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c100712(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return FUN_0c05f222();
        }
        return FUN_0c0fe530();
    }
    *(unsigned char *)0xC541F45 = ((*(signed char *)0xC541F45) + 0x1);
    FUN_0c100cbc();
    FUN_0c0fe4ec(0x7);
    return FUN_0c0fe530();
}

int FUN_0c100780(int a4)
{
    int stk[9];
    register int t23;

    *(unsigned int *)(((int)stk + 0)) = 0xC532498;
    if (a4 == 0) {
        FUN_0c06780e(0x5);
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x2)) = 0xE;
        *(unsigned char *)0xC53970A = 0x0;
        FUN_0c036de8(0x15, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c036606();
        FUN_0c06785c();
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    } else {
        FUN_0c06780e(0x5);
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x2)) = 0xE;
        *(unsigned char *)0xC53970A = 0xF;
        FUN_0c036de8(0x15, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        FUN_0c036606();
        FUN_0c06785c();
        FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o3714_uchar *)((*(int *)(((int)stk + 0)))))->v) = 0x0;
    }
    *(unsigned char *)0xC5397B0 = 0x0;
    (((struct o18_uint *)0xC474720)->v) = 0x0;
    (((struct o0_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC474720)->v) = 0xFFFFFFFF;
    (((struct o0_uint *)0xC474B9C)->v) = (FUN_0c115d96());
    (((struct oC_uint *)0xC474B9C)->v) = (FUN_0c119c94());
    (((struct o10_uint *)0xC474B9C)->v) = (FUN_0c11e19c());
    (((struct o28_uint *)0xC474B9C)->v) = (FUN_0c111680());
    t23 = FUN_0c118e94();
    *(unsigned int *)0xC474C3C = t23;
    return t23;
}

int FUN_0c10085a(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)(((((struct o10_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)(((((struct o28_int *)0xC474B9C)->v))))->v) = 0x63;
    (((struct o14_uchar *)((*(int *)0xC474C3C)))->v) = 0x63;
    return 0x14;
}

int FUN_0c100cbc(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC542B80 = (*(int *)0xC47471C);
    t0 = 0x1B8;
    t1 = 0xC47471C;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 < (int)0xBF) {
            t1 = 0xC5429C8;
            t1 = (t1 + 0x4C);
            t1 = (t1 + t2);
            t0 = t2;
            t0 = (t0 << 2);
            t0 = (*(int *)((0xC474104 + t0)));
            *(unsigned char *)((t1 + 0x1)) = t0;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0xC0) {
            break;
        }
    }
    t1 = 0xC473D04;
    t2 = 0xC474104;
    for (;;) {
        t3 = *(int *)((t2 + 0x0));
        if ((int)t3 > 0) {
            t4 = (*(int *)((t1 + 0x0)));
            t4 = (t4 | 0x10);
            *(unsigned int *)((t1 + 0x0)) = t4;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC474404) {
            break;
        }
    }
    t1 = t0;
    t0 = t3;
    t2 = 0x300;
    t3 = 0x10;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 < (int)0xBF) {
            t2 = 0x1C8;
            t3 = t4;
            t3 = (t3 << 2);
            t2 = (t2 + 0xC5429C8);
            t2 = (t2 + t3);
            t1 = t3;
            t0 = (*(int *)((0xC473D04 + t1)));
            t0 = (t0 & 0xFFFFEFFF);
            *(unsigned int *)((t2 + 0x4)) = t0;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0xC0) {
            break;
        }
    }
    (((struct o0_uchar *)0xC542F9C)->v) = 0x0;
    (((struct o1_uchar *)0xC542F9C)->v) = 0x0;
    (((struct o2_uchar *)0xC542F9C)->v) = 0x0;
    (((struct o3_uchar *)0xC542F9C)->v) = 0x0;
    t0 = 0x0;
    t1 = t4;
    for (;;) {
        if (((*(int *)((0xC473D04 + (t0 << 2)))) & 0x40) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            if ((int)(*(int *)((0xC474104 + (t0 << 2)))) > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
        }
        if (((*(int *)((0xC473D04 + (t0 << 2)))) & 0x80) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            t1 = (t1 + 0x1);
            if ((int)(*(int *)((0xC474104 + (t0 << 2)))) > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
        }
        if (((*(int *)((0xC473D04 + (t0 << 2)))) & 0x100) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            t1 = (t1 + 0x2);
            if ((int)(*(int *)((0xC474104 + (t0 << 2)))) > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
            }
        }
        t4 = *(int *)((0xC473D04 + (t0 << 2)));
        t3 = t4;
        if ((t4 & 0x200) != 0) {
            t1 = 0x5D4;
            t1 = (t1 + 0xC5429C8);
            t4 = *(int *)((0xC474104 + (t0 << 2)));
            t1 = (t1 + 0x3);
            if ((int)t4 > 0) {
                *(unsigned char *)((t1 + 0x0)) = (t0 + 0x1);
                t5 = (t0 + 0x1);
            } else {
                *(unsigned char *)((t1 + 0x0)) = 0x0;
                t5 = t4;
            }
            t3 = t5;
        }
        t2 = (t0 << 2);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xC0) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = (0xC542FA0 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    t4 = t2;
    t2 = t1;
    t1 = t3;
    t3 = 0x0;
    t5 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 <= (int)0x4) {
            t5 = t3;
            t5 = (t5 << 2);
            t4 = t5;
            t1 = (*(int *)((0xC473D04 + t4)));
            if ((t1 & 0x20) != 0) {
                t4 = t5;
                t1 = (*(int *)((0xC474104 + t4)));
                if ((int)t1 > 0) {
                    t2 = 0x5D8;
                    t1 = t3;
                    t1 = (t1 + 0x1);
                    t2 = (t2 + 0xC5429C8);
                    t2 = (t2 + t0);
                    t0 = (t0 + 0x1);
                    *(unsigned char *)((t2 + 0x0)) = t1;
                }
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0xC0) {
                break;
            }
            continue;
        }
        break;
    }
    return t4;
}

int FUN_0c101000(void)
{
    int stk[35];
    register float u12;
    register float u16;
    register int t49;
    register int t321;
    register int t137;
    register int t206;
    register int t207;
    register int t211;
    register int t225;
    register int t231;
    register int t232;
    register int t236;
    register int t250;
    register int t265;
    register int t266;
    register int t279;
    register int t305;

    if (((unsigned short)(*(short *)0xC5428B4) & 0x800) != 0) {
        (((struct o1C_uint *)0xC5324B4)->v) = (((((struct o1C_int *)0xC5324B4)->v)) + 0x200);
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x400) != 0) {
        (((struct o1C_uint *)0xC5324B4)->v) = (((((struct o1C_int *)0xC5324B4)->v)) - 0x200);
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x2000) != 0) {
        *(int *)((int)stk + 116) = 0xC5324C0;
        u12 = ((((struct oC_float *)0xC5324B4)->v));
        u12 = u12 + 1.0f * (math_sin_angle16(((((struct o1C_int *)0xC5324B4)->v))));
        (((struct oC_float *)0xC5324B4)->v) = u12;
        *(int *)((int)stk + 116) = 0xC5324C8;
        u16 = ((((struct o14_float *)0xC5324B4)->v));
        u16 = u16 + 1.0f * (math_cos_angle16(((((struct o1C_int *)0xC5324B4)->v))));
        (((struct o14_float *)0xC5324B4)->v) = u16;
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x1000) != 0) {
        *(int *)((int)stk + 116) = 0xC5324C0;
        (((struct oC_float *)0xC5324B4)->v) = (((((struct oC_float *)0xC5324B4)->v)) + ((-((math_sin_angle16(((((struct o1C_int *)0xC5324B4)->v)))) * 1.0f))));
        *(int *)((int)stk + 116) = 0xC5324C8;
        (((struct o14_float *)0xC5324B4)->v) = (((((struct o14_float *)0xC5324B4)->v)) + ((-((math_cos_angle16(((((struct o1C_int *)0xC5324B4)->v)))) * 1.0f))));
    }
    if (((unsigned short)(*(short *)0xC542868) & 128) != 0) {
        *(unsigned int *)0xC290750 = ((*(int *)0xC290750) + 0x1);
    }
    if ((int)(*(int *)0xC290750) > (int)0x3) {
        *(unsigned int *)0xC290750 = 0x0;
    }
    t49 = *(int *)0xC290750;
    t321 = 0x0;
    if (t49 == 0) {
    } else {
        if (t49 != 1) {
            if (t49 == 2) {
                FUN_0c1016e8();
                t305 = 0x1;
            } else {
                t305 = t49;
                if (t49 == 3) {
                    FUN_0c101b30();
                    t305 = 0x1;
                }
            }
        } else {
            FUN_0c17a4c0(0x4, 0x0);
            FUN_0c17a550(0xFFFF0000);
            *(int *)((int)stk + 116) = (unsigned char)(*(signed char *)0xC541F43);
            *(int *)((int)stk + 112) = 0xC1FBC50;
            dbg_printf(0xC1FBC50);
            *(int *)((int)stk + 108) = (((((struct o0_short *)0xC541F50)->v)));
            *(int *)((int)stk + 104) = 0xC1FBC64;
            dbg_printf(0xC1FBC64);
            *(int *)((int)stk + 100) = (unsigned char)(*(signed char *)0xC541F44);
            *(int *)((int)stk + 96) = 0xC1FBC78;
            dbg_printf(0xC1FBC78);
            *(int *)((int)stk + 92) = (unsigned char)(*(signed char *)0xC541F45);
            *(int *)((int)stk + 88) = 0xC1FBC8C;
            dbg_printf(0xC1FBC8C);
            *(int *)((int)stk + 84) = (unsigned char)(*(signed char *)0xC541F46);
            *(int *)((int)stk + 80) = 0xC1FBCA0;
            dbg_printf(0xC1FBCA0);
            *(int *)((int)stk + 76) = (unsigned char)(*(signed char *)0xC541F47);
            *(int *)((int)stk + 72) = 0xC1FBCB4;
            dbg_printf(0xC1FBCB4);
            *(int *)((int)stk + 68) = (unsigned char)(*(signed char *)0xC541F48);
            *(int *)((int)stk + 64) = 0xC1FBCC8;
            dbg_printf(0xC1FBCC8);
            *(int *)((int)stk + 60) = (((((struct o4_short *)0xC541F50)->v)));
            *(int *)((int)stk + 56) = 0xC1FBCDC;
            dbg_printf(0xC1FBCDC);
            *(int *)((int)stk + 52) = (((((struct o6_short *)0xC541F50)->v)));
            *(int *)((int)stk + 48) = 0xC1FBCF0;
            dbg_printf(0xC1FBCF0);
            *(int *)((int)stk + 44) = (((((struct o8_short *)0xC541F50)->v)));
            *(int *)((int)stk + 40) = 0xC1FBD04;
            dbg_printf(0xC1FBD04);
            *(int *)((int)stk + 36) = (((((struct oA_short *)0xC541F50)->v)));
            *(int *)((int)stk + 32) = 0xC1FBD18;
            dbg_printf(0xC1FBD18);
            *(int *)((int)stk + 28) = ((*(signed char *)0xC535BAD));
            *(int *)((int)stk + 24) = 0xC1FBD2C;
            dbg_printf(0xC1FBD2C);
            *(int *)((int)stk + 20) = ((*(signed char *)0xC535BAE));
            *(int *)((int)stk + 16) = 0xC1FBD40;
            dbg_printf(0xC1FBD40);
            *(int *)((int)stk + 12) = ((*(signed char *)0xC5324AC));
            *(int *)((int)stk + 8) = 0xC1FBD54;
            dbg_printf(0xC1FBD54);
            *(int *)((int)stk + 4) = ((*(signed char *)0xC5324AD));
            *(int *)((int)stk + 0) = 0xC1FBD68;
            dbg_printf(0xC1FBD68);
            *(int *)((int)stk + 116) = ((*(signed char *)0xC5324AE));
            *(int *)((int)stk + 112) = 0xC1FBD7C;
            dbg_printf(0xC1FBD7C);
            *(int *)((int)stk + 108) = (((((struct o0_short *)0xC5324B4)->v)));
            *(int *)((int)stk + 104) = 0xC1FBD90;
            dbg_printf(0xC1FBD90);
            *(float *)(((int)stk + 100)) = ((((struct oC_float *)0xC5324B4)->v));
            *(int *)((int)stk + 96) = 0xC1FBDA4;
            dbg_printf(0xC1FBDA4);
            *(float *)(((int)stk + 92)) = ((((struct o10_float *)0xC5324B4)->v));
            *(int *)((int)stk + 88) = 0xC1FBDB8;
            dbg_printf(0xC1FBDB8);
            *(float *)(((int)stk + 84)) = ((((struct o14_float *)0xC5324B4)->v));
            *(int *)((int)stk + 80) = 0xC1FBDCC;
            dbg_printf(0xC1FBDCC);
            *(float *)(((int)stk + 76)) = ((((struct o30_float *)0xC5324B4)->v));
            *(int *)((int)stk + 72) = 0xC1FBDE0;
            dbg_printf(0xC1FBDE0);
            *(float *)(((int)stk + 68)) = ((((struct o34_float *)0xC5324B4)->v));
            *(int *)((int)stk + 64) = 0xC1FBDB8;
            dbg_printf(0xC1FBDB8);
            *(float *)(((int)stk + 60)) = ((((struct o38_float *)0xC5324B4)->v));
            *(int *)((int)stk + 56) = 0xC1FBDCC;
            dbg_printf(0xC1FBDCC);
            *(float *)(((int)stk + 52)) = ((((struct o8C_float *)((*(int *)0xC5325B0)))->v));
            *(int *)((int)stk + 48) = 0xC1FBDF4;
            dbg_printf(0xC1FBDF4);
            *(int *)((int)stk + 44) = (((((struct o1C_int *)0xC5324B4)->v)));
            *(int *)((int)stk + 40) = 0xC1FBE08;
            dbg_printf(0xC1FBE08);
            FUN_0c17a550(0xFFFFFFFF);
            FUN_0c17a550(0xFF00FF00);
            t137 = 0x0;
            for (;;) {
                if ((*(int *)((0xC290694 + (t137 << 2)))) == 0) {
                    break;
                }
                if ((*(int *)((0xC474B8C + (t137 << 2)))) != 0) {
                    *(int *)((int)stk + 116) = ((*(int *)((0xC290694 + (t137 << 2)))));
                    *(int *)((int)stk + 112) = 0xC1FBE1C;
                    dbg_printf(0xC1FBE1C);
                }
                t137 = (t137 + 0x1);
            }
            FUN_0c17a4c0(0x20, 0x0);
            FUN_0c17a550(0xFF00FFFF);
            *(int *)((int)stk + 116) = (((((struct o24_int *)0xC474714)->v)));
            *(int *)((int)stk + 112) = 0xC1FBE20;
            dbg_printf(0xC1FBE20);
            *(int *)((int)stk + 108) = (((((struct o8_int *)0xC474714)->v)));
            *(int *)((int)stk + 104) = 0xC1FBE38;
            dbg_printf(0xC1FBE38);
            *(int *)((int)stk + 100) = (((((struct o18_int *)0xC474714)->v)));
            *(int *)((int)stk + 96) = 0xC1FBE50;
            dbg_printf(0xC1FBE50);
            *(int *)((int)stk + 92) = (((((struct o1C_int *)0xC474714)->v)));
            *(int *)((int)stk + 88) = 0xC1FBE68;
            dbg_printf(0xC1FBE68);
            *(int *)((int)stk + 84) = (((((struct oC_int *)0xC474714)->v)));
            *(int *)((int)stk + 80) = 0xC1FBE80;
            dbg_printf(0xC1FBE80);
            *(int *)((int)stk + 76) = (((((struct o10_int *)0xC474714)->v)));
            *(int *)((int)stk + 72) = 0xC1FBE98;
            dbg_printf(0xC1FBE98);
            FUN_0c17a550(0xFF00FF00);
            *(int *)((int)stk + 68) = (((((struct o0_int *)0xC474714)->v)));
            *(int *)((int)stk + 64) = 0xC1FBEB0;
            dbg_printf(0xC1FBEB0);
            *(int *)((int)stk + 60) = (((((struct o0_int *)0xC474404)->v)));
            *(int *)((int)stk + 56) = 0xC1FBEC8;
            dbg_printf(0xC1FBEC8);
            *(int *)((int)stk + 52) = (((((struct o4_int *)0xC474404)->v)));
            *(int *)((int)stk + 48) = 0xC1FBEE0;
            dbg_printf(0xC1FBEE0);
            *(int *)((int)stk + 44) = (((((struct o8_int *)0xC474404)->v)));
            *(int *)((int)stk + 40) = 0xC1FBEF8;
            dbg_printf(0xC1FBEF8);
            FUN_0c17a550(0xFFFF0000);
            *(int *)((int)stk + 36) = ((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))));
            *(int *)((int)stk + 32) = 0xC1FBF10;
            dbg_printf(0xC1FBF10);
            *(int *)((int)stk + 28) = ((*(signed char *)((((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
            *(int *)((int)stk + 24) = 0xC1FBF28;
            dbg_printf(0xC1FBF28);
            *(int *)((int)stk + 20) = ((*(signed char *)((((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
            *(int *)((int)stk + 16) = 0xC1FBF40;
            dbg_printf(0xC1FBF40);
            *(int *)((int)stk + 12) = ((*(int *)((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) << 2) + 0xC473D04))));
            *(int *)((int)stk + 8) = 0xC1FBF58;
            dbg_printf(0xC1FBF58);
            *(int *)((int)stk + 4) = ((*(int *)((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) << 2) + 0xC474104))));
            *(int *)((int)stk + 0) = 0xC1FBF70;
            dbg_printf(0xC1FBF70);
            t206 = (FUN_0c17a550(0xFFFF00FF));
            t207 = 0x0;
            for (;;) {
                if ((int)t207 >= (int)0x2) {
                    break;
                }
                t206 = 0xC1FBF88;
                *(unsigned int *)(((int)stk + 120)) = ((t207 << 2) + 0xC473CC0);
                *(int *)((int)stk + 116) = ((*(int *)((((t207 << 2) + 0xC473CC0) + 0x0))));
                *(int *)((int)stk + 112) = (t207);
                t211 = t206;
                *(int *)((int)stk + 108) = t211;
                t206 = (dbg_printf(t211));
                t206 = (*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3)));
                *(int *)((int)stk + 104) = (t206);
                *(int *)((int)stk + 100) = 0xC1FBF28;
                t206 = (dbg_printf(0xC1FBF28));
                t206 = 0x10;
                *(int *)((int)stk + 96) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + t206))));
                *(int *)((int)stk + 92) = 0xC1FBF40;
                t206 = (dbg_printf(0xC1FBF40));
                t206 = (*(int *)(((int)stk + 120)));
                t206 = (*(int *)((t206 + 0x0)));
                if (t206 != -1) {
                    t206 = 0xC473CC0;
                    t225 = *(int *)(((t207 << 2) + t206));
                    t206 = 0xC473D04;
                    *(int *)((int)stk + 116) = ((*(int *)(((t225 << 2) + t206))));
                    *(int *)((int)stk + 112) = 0xC1FBFA4;
                    t206 = (dbg_printf(0xC1FBFA4));
                } else {
                    *(int *)((int)stk + 116) = 0xC1FBFBC;
                    t206 = (dbg_printf(0xC1FBFBC));
                }
                t207 = (t207 + 0x1);
            }
            t231 = t206;
            t232 = 0x0;
            for (;;) {
                if ((int)t232 < (int)0x4) {
                    t231 = 0xC1FBFD4;
                    *(unsigned int *)(((int)stk + 120)) = ((t232 << 2) + 0xC473CCC);
                    *(int *)((int)stk + 116) = ((*(int *)((((t232 << 2) + 0xC473CCC) + 0x0))));
                    *(int *)((int)stk + 112) = (t232);
                    t236 = t231;
                    *(int *)((int)stk + 108) = t236;
                    t231 = (dbg_printf(t236));
                    t231 = (*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3)));
                    *(int *)((int)stk + 104) = (t231);
                    *(int *)((int)stk + 100) = 0xC1FBF28;
                    t231 = (dbg_printf(0xC1FBF28));
                    t231 = 0x10;
                    *(int *)((int)stk + 96) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + t231))));
                    *(int *)((int)stk + 92) = 0xC1FBF40;
                    t231 = (dbg_printf(0xC1FBF40));
                    t231 = (*(int *)(((int)stk + 120)));
                    t231 = (*(int *)((t231 + 0x0)));
                    if (t231 != -1) {
                        t231 = 0xC473CCC;
                        t250 = *(int *)(((t232 << 2) + t231));
                        t231 = 0xC473D04;
                        *(int *)((int)stk + 116) = ((*(int *)(((t250 << 2) + t231))));
                        *(int *)((int)stk + 112) = 0xC1FBFA4;
                        t231 = (dbg_printf(0xC1FBFA4));
                    } else {
                        *(int *)((int)stk + 116) = 0xC1FBFBC;
                        t231 = (dbg_printf(0xC1FBFBC));
                    }
                    t232 = (t232 + 0x1);
                    continue;
                }
                break;
            }
            FUN_0c17a550(0xFF00FF00);
            *(int *)((int)stk + 116) = (((((struct o0_int *)0xC473CE4)->v)));
            *(int *)((int)stk + 112) = 0xC1FBFF0;
            dbg_printf(0xC1FBFF0);
            *(int *)((int)stk + 108) = (((((struct o10_int *)0xC473CE4)->v)));
            *(int *)((int)stk + 104) = 0xC1FC008;
            dbg_printf(0xC1FC008);
            FUN_0c17a550(0xFFFF0000);
            t265 = *(int *)(((((((struct o30_int *)0xC474714)->v)) << 2) + 0xC473C74));
            t266 = (((struct o30_int *)0xC474714)->v);
            t279 = t265;
            if (t266 != 0) {
                t279 = (t265 + 0x80);
                if (t266 != 1) {
                    t279 = (t265 + 0x96);
                    if (t266 != 2) {
                        t279 = (t265 + 0xA0);
                        if (t266 != 3) {
                            t279 = t265;
                        }
                    }
                }
            }
            FUN_0c17a550(0xFF00FFFF);
            *(unsigned int *)(((int)stk + 124)) = (t279 << 2);
            *(unsigned int *)(((int)stk + 120)) = ((t279 << 2) + 0xC474410);
            *(int *)((int)stk + 116) = ((*(int *)((((t279 << 2) + 0xC474410) + 0x0))));
            *(int *)((int)stk + 112) = 0xC1FC020;
            dbg_printf(0xC1FC020);
            *(int *)((int)stk + 108) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
            *(int *)((int)stk + 104) = 0xC1FBF28;
            dbg_printf(0xC1FBF28);
            *(int *)((int)stk + 100) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
            *(int *)((int)stk + 96) = 0xC1FBF40;
            dbg_printf(0xC1FBF40);
            if (t279 != -1) {
                *(int *)((int)stk + 116) = ((*(int *)((((*(int *)(((*(int *)(((int)stk + 124))) + 0xC474410))) << 2) + 0xC473D04))));
                *(int *)((int)stk + 112) = 0xC1FBFA4;
                dbg_printf(0xC1FBFA4);
            } else {
                *(int *)((int)stk + 116) = 0xC1FBFBC;
                dbg_printf(0xC1FBFBC);
            }
            FUN_0c17a550(0xFFFFFFFF);
            t305 = 0x0;
        }
        t321 = t305;
    }
    return t321;
}

int FUN_0c1016e8(void)
{
    int stk[6];

    register int R2;
    register int R3;
    int R6;
    int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_1 = (((struct o0_int *)0xC472CA4)->v);
    v0_9 = (((struct o4_int *)0xC472CA4)->v);
    *(unsigned int *)(((int)stk + 8)) = 0xC474104;
    v0_10 = (v0_9);
    v0_0 = (0xC542854);
    R11 = (0x200);
    v0_6 = ((((v0_1 << 2) << 2) + 0xC472BA4));
    v0_1 = (0xC472BA4);
    v0_2 = (0xC472CA4);
    v0_3 = (0x0);
    v0_4 = (0xC472CA8);
    R6 = (v0_9);
    v0_5 = (0x1);
    v0_8 = (0xC542854);
    v0_7 = (0xC0);
    if ((v0_9 == 0)) goto L_C10176E;
    if ((v0_10 == 1)) goto L_C1017A8;
    if ((v0_10 == 2)) goto L_C101800;
    if ((v0_10 != 3)) goto L_C101732;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101878;
    v0_7 = *(int *)(((int)stk + 8));
    v0_6 = ((v0_7 + 0x300));
    R6 = (v0_7);
    L_C101864:;
    *(unsigned int *)((R6 + 0x0)) = v0_3;
    v0_7 = (unsigned int)(R6 + 0x4) < (unsigned int)v0_6;
    R6 = ((R6 + 0x4));
    if (v0_7) goto L_C101864;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101878:;
    if (!((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0))) goto L_C101A3A;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C101A3A:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & 0x2000) == 0)) goto L_C101A50;
    if (((int)(*(int *)((v0_4 + 0x0))) <= 0)) goto L_C101A50;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - 1);
    L_C101A50:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & 0x1000) == 0)) goto L_C101A78;
    if (((*(int *)(((((*(int *)((v0_4 + 0x0))) << 2) + (((((*(int *)((v0_2 + 0x0))) << 2) << 2) << 2) + 0xC290754)) + 0x4))) == 0)) goto L_C101A78;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) + 0x1);
    L_C101A78:;
    R11 = (v0_3);
    v0_6 = (v0_3);
    v0_7 = (0xC17A550);
    L_C101A7E:;
    v0_10 = ((v0_6 << 2));
    v0_3 = (((((R11 << 2) << 2) << 2) + 0xC290754));
    if (((*(int *)((((((R11 << 2) << 2) << 2) + 0xC290754) + (v0_6 << 2)))) == 0)) goto L_C101AFE;
    *(unsigned int *)(((int)stk + 8)) = (((((R11 << 1) + R11) << 2) << 1) + 0x14);
    *(unsigned int *)(((int)stk + 12)) = (((R11 << 2) << 2) + v0_1);
    v0_0 = (v0_3);
    L_C101AB2:;
    FUN_0c17a4c0((*(int *)(((int)stk + 8))), (v0_6 + 0xA));
    if ((R11 != (*(int *)((v0_2 + 0x0))))) goto L_C101AD0;
    if ((v0_6 != ((((struct o4_int *)0xC472CA4)->v)))) goto L_C101AD0;
    v0_3 = (0xFFFFAAAA);
    L_C101AD2:;
    FUN_0c17a550(v0_3);
    v0_8 = ((v0_6 << 2));
    if (((*(int *)((v0_0 + (v0_6 << 2)))) == 0)) goto L_C101AFA;
    *(int *)((int)stk + 4) = ((*(signed char *)((v0_6 + (*(int *)(((int)stk + 12)))))));
    v0_3 = (*(int *)(((v0_8 + v0_0) + 0x0)));
    *(int *)((int)stk + 0) = v0_3;
    dbg_printf(v0_3);
    v0_6 = ((v0_6 + 0x1));
    goto L_C101AB2;
    L_C101AFA:;
    R11 = ((R11 + 0x1));
    goto L_C101A7E;
    L_C101AD0:;
    v0_3 = (0xFFFF0000);
    goto L_C101AD2;
    L_C101AFE:;
    return v0_10;
    L_C101732:;
    if ((v0_10 != 4)) goto L_C10173A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) != 0)) goto L_C1018A4;
    goto L_C101A3A;
    L_C1018A4:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C10173A:;
    if ((v0_10 != 5)) goto L_C101742;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) != 0)) goto L_C1018BE;
    goto L_C101A3A;
    L_C1018BE:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C101742:;
    if ((v0_10 != 6)) goto L_C10174A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) != 0)) goto L_C1018D8;
    goto L_C101A3A;
    L_C1018D8:;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C10174A:;
    if ((v0_10 != 7)) goto L_C101752;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101982;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 20)) = 0xC473D04;
    *(unsigned int *)(((int)stk + 8)) = 0xC29E4F0;
    R6 = (0x400);
    v0_8 = (v0_3);
    L_C101906:;
    v0_6 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 16)) = (v0_6 << 2);
    v0_9 = *(int *)(((v0_6 << 2) + 0xC473D04));
    v0_6 = (((v0_9 & 0x800) & R6));
    if (((0x800 & ((v0_9 & 0x800) & R6)) == 0)) goto L_C10191C;
    v0_6 = ((v0_6 | R6));
    L_C10191C:;
    v0_9 = *(int *)(((int)stk + 16));
    v0_10 = (v0_9);
    if (((int)(unsigned short)(*(short *)0xC542B88) < (int)(*(int *)((v0_9 + 0xC29E4F0))))) goto L_C101948;
    if (((*(int *)((v0_10 + 0xC29E4F0))) == -1)) goto L_C101936;
    v0_6 = ((v0_6 | R6));
    L_C101936:;
    if (((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) != 0)) goto L_C101948;
    v0_9 = *(int *)(((int)stk + 20));
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) | R6);
    v0_6 = ((v0_6 | R6));
    L_C101948:;
    *(unsigned int *)(((int)stk + 16)) = (0xC473D04 + v0_8);
    *(unsigned int *)(((0xC473D04 + v0_8) + 0x0)) = v0_3;
    v0_9 = *(int *)(((int)stk + 16));
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) | v0_6);
    *(unsigned int *)((v0_8 + 0xC474104)) = v0_3;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x4);
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
    v0_8 = ((v0_8 + 0x4));
    if (((int)(*(int *)(((int)stk + 12))) < (int)v0_7)) goto L_C101906;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101982:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) == 0)) goto L_C101A3A;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C101752:;
    if ((v0_10 != 8)) goto L_C10175A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) == 0)) goto L_C101A3A;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 + R6);
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = (v0_5 - (*(signed char *)(((v0_6 + R6) + 0x0))));
    goto L_C101A3A;
    L_C10175A:;
    if ((v0_10 != 9)) goto L_C101762;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C1019D8;
    v0_7 = *(int *)(((int)stk + 8));
    v0_6 = ((v0_7 + 0x300));
    R6 = (v0_7);
    L_C1019C4:;
    *(unsigned int *)((R6 + 0x0)) = v0_5;
    v0_7 = (unsigned int)(R6 + 0x4) < (unsigned int)v0_6;
    R6 = ((R6 + 0x4));
    if (v0_7) goto L_C1019C4;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C1019D8:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) == 0)) goto L_C101A3A;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C101762:;
    if ((v0_10 != 10)) goto L_C10176A;
    if ((((unsigned short)(*(short *)((v0_8 + 0x14))) & R11) == 0)) goto L_C101A3A;
    *(unsigned char *)(((v0_6 + R6) + 0x0)) = ((*(signed char *)(((v0_6 + R6) + 0x0))) + 0x1);
    if (((int)(*(signed char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1)))) <= (int)0xB)) goto L_C101A3A;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    goto L_C101A3A;
    L_C10176A:;
    goto L_C101A3A;
    L_C101800:;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101834;
    v0_6 = (0x64);
    R6 = (v0_3);
    L_C10180C:;
    v0_8 = (int)(R6 + 0x1) < (int)v0_7;
    *(unsigned int *)(((0xC474104 + (R6 << 2)) + 0x0)) = ((int)((int)R6 % (int)v0_6));
    R6 = ((R6 + 0x1));
    if (v0_8) goto L_C10180C;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101834:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0)) goto L_C101840;
    goto L_C101A3A;
    L_C101840:;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C1017A8:;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C1017C0;
    *(unsigned int *)0xC47471C = v0_3;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C1017C0:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0)) goto L_C1017CC;
    goto L_C101A3A;
    L_C1017CC:;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
    L_C10176E:;
    if (((*(signed char *)(((v0_6 + R6) + 0x0))) == 0)) goto L_C101788;
    *(unsigned int *)0xC47471C = 0x5F5E0FF;
    *(unsigned char *)(((*(int *)((v0_4 + 0x0))) + ((((*(int *)((v0_2 + 0x0))) << 2) << 2) + v0_1))) = v0_3;
    L_C101788:;
    if ((((unsigned short)(*(short *)((v0_0 + 0x14))) & R11) != 0)) goto L_C101794;
    goto L_C101A3A;
    L_C101794:;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_7 = *(int *)((v0_4 + 0x0));
    *(unsigned char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0)) = (v0_5 - (*(signed char *)((((((v0_6 << 2) << 2) + v0_1) + v0_7) + 0x0))));
    goto L_C101A3A;
}

int FUN_0c101b30(void)
{
    register int t0;
    register int t1;

    FUN_0c17a4c0(0x7, 0xA);
    t0 = FUN_0c2b1b1c();
    t1 = 0xFFFF0000;
    if (t0 == 0) {
        t1 = 0xFFFFAAAA;
    }
    FUN_0c17a550(t1);
    t0 = *(int *)0xC290814;
    switch (t0) {
    case 0:
        *(unsigned int *)0xC290814 = ((*(int *)0xC290814) + 0x1);
        FUN_0c2b1b16(0x0);
        break;
    case 1:
        t0 = FUN_0c2b1b1c();
        if (t0 == 0) {
            *(unsigned int *)0xC290814 = ((*(int *)0xC290814) + 0x1);
            syRtcGetDate(0xC472CB4);
        }
        break;
    case 2:
        *(unsigned int *)0xC290814 = 0x0;
        FUN_0c2b1b16(0x1);
        break;
    }
    *(volatile short *)0xC472CB4;
    dbg_printf(0xC1FC038);
    *(volatile signed char *)0xC472CB6;
    dbg_printf(0xC1FC038);
    *(volatile signed char *)0xC472CB7;
    dbg_printf(0xC1FC03C);
    *(volatile signed char *)0xC472CB8;
    dbg_printf(0xC1FC040);
    *(volatile signed char *)0xC472CB9;
    dbg_printf(0xC1FC040);
    *(volatile signed char *)0xC472CBA;
    return (dbg_printf(0xC1FC044));
}
