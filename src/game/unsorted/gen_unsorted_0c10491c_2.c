/* game/unsorted: functions 0C10491C-0C1066DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c100780(int);
int FUN_0c104cc8(int);
int FUN_0c105616(int);
int FUN_0c1056b6(int);
int FUN_0c105752(int);
int FUN_0c105818(int);
int FUN_0c105cec(int);
int FUN_0c1061dc(void);
int FUN_0c1061e0(void);
int FUN_0c1061e4(void);
int FUN_0c106508(void);
int FUN_0c1066a4(void);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c179ac0(void);
int FUN_0c105c86(int a4, int a5, int a6, int a7);
int FUN_0c1061e8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c106510(void);

int FUN_0c105c86(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 99) {
                            return t0;
                        }
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    return FUN_0c105818(a4);
                }
                return FUN_0c105752(a4);
            }
            return FUN_0c1056b6(a4);
        }
        return FUN_0c105616(a4);
    }
    return ((int (*)(int, int, int, int))(0xC105612))(a4, a5, a6, a7);
}

int FUN_0c1061e8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t3;
    register int t6;
    register int t8;
    register int t10;
    register int t14;
    register int t19;
    register int t20;
    register int t21;
    register int t25;
    register int t34;
    register int t39;
    register int t60;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register int t87;
    register int t95;
    register int t100;
    register int t119;
    register int t121;
    register int t122;
    register int t123;
    register int t124;
    register int t74;
    register int t134;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = *(signed char *)0xC535BAD;
                t3 = t1;
                if (t1 != 1) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t3 = 0x16;
                }
                return t3;
            }
            if (t0 == 3) {
                t6 = FUN_0c117d54();
                if ((int)t6 < 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return FUN_0c117e76();
                }
                return t6;
            }
            if (t0 == 4) {
                t8 = FUN_0c104cc8(0x3FCF);
                t10 = t8;
                if (t8 != 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t10 = 0x17;
                }
                return t10;
            }
            if (t0 == 5) {
                if ((unsigned int)0xC473D04 < (unsigned int)0xC474004) {
                    t14 = 0xC473D04;
                    for (;;) {
                        if (((*(int *)((t14 + 0x0))) & 0x1000) != 0) {
                            break;
                        }
                        t14 = (t14 + 0x4);
                        if ((unsigned int)t14 >= (unsigned int)0xC474004) {
                            (((struct o16_uchar *)(a4))->v) = 0x7;
                            (((struct o17_uchar *)(a4))->v) = 0x0;
                            return 0x17;
                        }
                    }
                    (((struct o16_uchar *)(a4))->v) = 0x6;
                } else {
                    (((struct o16_uchar *)(a4))->v) = 0x7;
                }
                (((struct o17_uchar *)(a4))->v) = 0x0;
                return 0x17;
            }
            if (t0 == 6) {
                t19 = *(signed char *)((a4 + 0x17));
                if (t19 != 0) {
                    if (t19 != 1) {
                        if (t19 != 2) {
                            return t19;
                        }
                        t20 = FUN_0c104cc8(0x3FCF);
                        if (t20 != 0) {
                            return FUN_0c105cec(a4);
                        }
                        return t20;
                    }
                    t21 = FUN_0c117d54();
                    if ((int)t21 < 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        return FUN_0c117e76();
                    }
                    return t21;
                }
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                *(int *)((int)stk + 0) = 0x50;
                return (FUN_0c117944(0x50));
            }
            if (t0 == 7) {
                return FUN_0c105cec(a4);
            }
            return t0;
        }
        t25 = *(signed char *)((a4 + 0x17));
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    t74 = t25;
                    if (t25 != 3) {
                    } else {
                        FUN_0c1061e0();
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t74 = 0x17;
                    }
                } else {
                    t34 = FUN_0c1061e4();
                    t74 = t34;
                    if (t34 == -1) {
                    } else {
                        t39 = (*(int *)((0xC290A90 + ((((int)((int)(FUN_0c179ac0()) % (int)0x3)) + ((t34 << 1) + t34)) << 2))));
                        *(int *)((int)stk + 0) = t39;
                        FUN_0c117944(t39);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t74 = 0x17;
                    }
                }
            } else {
                FUN_0c1061dc();
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t74 = 0x17;
            }
        } else {
            t60 = *(signed char *)0xC5324AC;
            t74 = t60;
            if (t60 != 99) {
            } else {
                FUN_0c115120(0x3, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                t62 = (((struct o4_int *)0xC5325B0)->v);
                t63 = (((struct o0_int *)0xC5325B0)->v);
                (((struct oA0_float *)(t62))->v) = 1.0f;
                (((struct o9C_float *)(t62))->v) = 1.0f;
                (((struct oA0_float *)(t63))->v) = 1.0f;
                (((struct o9C_float *)(t63))->v) = 1.0f;
                t64 = (((struct o4_int *)0xC5325B0)->v);
                t65 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t64))->v) = 1.0f;
                (((struct o98_float *)(t65))->v) = 1.0f;
                (((struct o94_float *)(t64))->v) = 1.0f;
                (((struct o94_float *)(t65))->v) = 1.0f;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t74 = 0x17;
            }
        }
        return t74;
    }
    FUN_0c100780(0x0);
    FUN_0c1066a4();
    FUN_0c059c7a(0x18, 0x1);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    t87 = *(signed char *)((a4 + 0x17));
    if (t87 != 0) {
        if (t87 != 1) {
            if (t87 != 2) {
                t134 = t87;
                if (t87 != 3) {
                } else {
                    FUN_0c1061e0();
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    t134 = 0x17;
                }
            } else {
                t95 = FUN_0c1061e4();
                t134 = t95;
                if (t95 == -1) {
                } else {
                    t100 = (*(int *)((0xC290A90 + ((((int)((int)(FUN_0c179ac0()) % (int)0x3)) + ((t95 << 1) + t95)) << 2))));
                    *(int *)((int)stk + 0) = t100;
                    FUN_0c117944(t100);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t134 = 0x17;
                }
            }
        } else {
            FUN_0c1061dc();
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t134 = 0x17;
        }
    } else {
        t119 = *(signed char *)0xC5324AC;
        t134 = t119;
        if (t119 != 99) {
        } else {
            FUN_0c115120(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t121 = (((struct o4_int *)0xC5325B0)->v);
            t122 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t121))->v) = 1.0f;
            (((struct o9C_float *)(t121))->v) = 1.0f;
            (((struct oA0_float *)(t122))->v) = 1.0f;
            (((struct o9C_float *)(t122))->v) = 1.0f;
            t123 = (((struct o4_int *)0xC5325B0)->v);
            t124 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t123))->v) = 1.0f;
            (((struct o98_float *)(t124))->v) = 1.0f;
            (((struct o94_float *)(t123))->v) = 1.0f;
            (((struct o94_float *)(t124))->v) = 1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t134 = 0x17;
        }
    }
    return t134;
}

int FUN_0c106510(void)
{
    *(unsigned char *)0xC541F43 = 0x1;
    return FUN_0c106508();
}
