/* game/demo: functions 0C0449C4-0C0460CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int FUN_0c03441a(void);
int FUN_0c03476c(void);
int FUN_0c0349b4(void);
int FUN_0c034d28(void);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int res_cockpit_faces_release_all(void);
int FUN_0c038f70(void);
int FUN_0c03f40c(int);
int FUN_0c0430c0(void);
extern int FUN_0c045020();
int FUN_0c0453ca(void);
int FUN_0c0453f0(void);
int FUN_0c04549c(void);
int FUN_0c0457a6(void);
int FUN_0c04587e(void);
int FUN_0c045942(void);
int FUN_0c045a22(void);
int FUN_0c045cf4(void);
int FUN_0c045f10(void);
int FUN_0c047064(int, int, int, int);
extern int FUN_0c056e44();
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b052(int, int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int thunk_FUN_0c066b82(void);
int FUN_0c067a58(void);
int FUN_0c04523c(void);
int FUN_0c045a38(int a4, int a5, int a6, int a7);
int FUN_0c045ac8(void);
int FUN_0c045fe0(int a4, int a5, int a6, int a7);

int FUN_0c04523c(void)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t6;
    register int t13;
    register int t18;
    register int t23;
    register int t27;
    register int t47;
    register int t51;
    register int t63;
    register int t66;
    register int t67;
    register int t62;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                    t67 = 0x0;
                } else {
                    t5 = *(short *)0xC541F4C;
                    *(unsigned short *)0xC541F4C = (t5 - 1);
                    t67 = (unsigned char)t0;
                    if ((short)(t5 - 1) == 0) {
                        t6 = *(signed char *)0xC541F43;
                        (((struct o2_uchar *)0xC541F41)->v) = (t6 + 0x1);
                        t67 = (t6 + 0x1);
                    }
                }
            } else {
                if (((unsigned char)(*(signed char *)0xC3BD445) & 1) != 0) {
                    t13 = ((int (*)(int))(FUN_0c045020))(0x0);
                }
                if (((unsigned char)(*(signed char *)0xC3BD445) & 2) != 0) {
                    t18 = ((int (*)(int, int, int, int, int, int))(FUN_0c045020))(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                }
                if (((unsigned char)(*(signed char *)0xC3BD445) & 4) != 0) {
                    t23 = ((int (*)(int, int, int, int, int, int))(FUN_0c045020))(0x2, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                }
                t27 = *(signed char *)0xC3BD445;
                t67 = (unsigned char)t27;
                if (((unsigned char)t27 & 8) != 0) {
                    t67 = (((int (*)(int, int, int, int, int, int))(FUN_0c045020))(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
                }
                *(unsigned int *)0xC40DC60 = ((*(int *)0xC40DC60) - 1);
                if ((*(signed char *)0xC3BD445) == 0) {
                    FUN_0c05b052(0x3C, 0x0);
                    (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
                    (((struct o3_uchar *)0xC541F41)->v) = 0x0;
                    (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                    t67 = 0x0;
                }
            }
        } else {
            t47 = *(short *)0xC541F4C;
            *(unsigned short *)0xC541F4C = (t47 - 1);
            t67 = (unsigned char)t0;
            if ((short)(t47 - 1) == 0) {
                *(unsigned int *)0xC40DC60 = 0x4EB;
                FUN_0c03441a();
                FUN_0c03476c();
                thunk_FUN_0c05abb2(0x8, 0x0);
                t51 = *(signed char *)0xC541F43;
                (((struct o2_uchar *)0xC541F41)->v) = (t51 + 0x1);
                t67 = (t51 + 0x1);
            }
        }
    } else {
        t63 = 0xC541CDC;
        for (;;) {
            if ((unsigned int)t63 >= (unsigned int)0xC541F3C) {
                break;
            }
            t62 = t63;
            t62 = (t62 + 0x5A);
            t63 = (t63 + 0x98);
            *(unsigned char *)((t62 + 0x0)) = 0x0;
        }
        FUN_0c059c54(0x0);
        FUN_0c05b048(0x1, 0x0);
        *(unsigned short *)0xC541F4C = 0x78;
        t66 = *(signed char *)0xC541F43;
        (((struct o2_uchar *)0xC541F41)->v) = (t66 + 0x1);
        t67 = (t66 + 0x1);
    }
    return t67;
}

int FUN_0c045a38(int a4, int a5, int a6, int a7)
{
    register int t1;

    (((struct o3_uchar *)0xC40F820)->v) = 0x0;
    (((struct o2_uchar *)0xC40F820)->v) = 0x0;
    (((struct o1_uchar *)0xC40F820)->v) = 0x0;
    (((struct o0_uchar *)0xC40F820)->v) = 0x0;
    FUN_0c047064(0xC40F820, a5, a6, a7);
    t1 = *(signed char *)0xC541F42;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 != 4) {
                        if ((unsigned char)t1 != 5) {
                            FUN_0c045a22();
                        } else {
                            FUN_0c045942();
                        }
                    } else {
                        FUN_0c04587e();
                    }
                } else {
                    FUN_0c0457a6();
                }
            } else {
                FUN_0c04549c();
            }
        } else {
            FUN_0c0453f0();
        }
    } else {
        FUN_0c0453ca();
        FUN_0c0453f0();
    }
    return ((int (*)(void))(0xC046042))();
}

int FUN_0c045ac8(void)
{
    register int t0;
    int t2;
    int t3;
    register int t4;
    register int t12;
    register int t19;
    register int t24;
    register int t25;
    register int t36;
    register int t41;
    register int t42;
    register int t44;
    register int t55;
    register int t65;
    register int t1;
    register int t84;
    register int t26;

    t0 = *(signed char *)0xC3BD447;
    t2 = 0xC3BD447;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)0x4) {
            break;
        }
        t1 = 0x1;
        t2 = (unsigned char)t0;
        t1 = ((int)t1 << (int)t4);
        t4 = (t4 + 0x1);
        if ((t1 & t2) != 0) {
            t3 = (t3 + 0x1);
        }
    }
    if (t3 == 1) {
        (((struct o0_uchar *)0xC542361)->v) = 0x0;
        if ((*(signed char *)0xC3BD448) != 0) {
            (((struct o1_uchar *)0xC542361)->v) = 0x2;
            t12 = ((int (*)(int, int, int))(FUN_0c056e44))(0x20, 0x1, t0);
            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x5A);
            (((struct o1E_uchar *)0xC542236)->v) = 0x1;
            (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            t26 = 0x0;
        } else {
            (((struct o1_uchar *)0xC542361)->v) = 0x1;
            FUN_0c059c54(0x1);
            FUN_0c05b048(0x1, 0x0);
            t19 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
            FUN_0c0349b4();
            FUN_0c034d28();
            (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
            (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            (((struct o0_uchar *)0xC542236)->v) = 0x0;
            t24 = 0x3E;
            t25 = 0xC541CDC;
            for (;;) {
                if ((unsigned int)t25 >= (unsigned int)0xC541F3C) {
                    break;
                }
                t24 = 0x82;
                *(unsigned char *)((t25 + t24)) = 0xFFFFFFFF;
                t25 = (t25 + 0x98);
            }
            t26 = t24;
        }
        t84 = t26;
    } else {
        if (t3 == 2) {
            if ((*(signed char *)0xC542361) == 0) {
                if (((unsigned char)(*(signed char *)0xC3BD449) & (unsigned char)t0) == 0) {
                    (((struct o1_uchar *)0xC542361)->v) = 0x1;
                    FUN_0c059c54(0x1);
                    FUN_0c05b048(0x1, 0x0);
                    t36 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
                    FUN_0c0349b4();
                    FUN_0c034d28();
                    (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
                    (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o0_uchar *)0xC542236)->v) = 0x0;
                    t41 = 0x3E;
                    t42 = 0xC541CDC;
                    for (;;) {
                        if ((unsigned int)t42 >= (unsigned int)0xC541F3C) {
                            break;
                        }
                        t41 = 0x82;
                        *(unsigned char *)((t42 + t41)) = 0xFFFFFFFF;
                        t42 = (t42 + 0x98);
                    }
                    t84 = t41;
                } else {
                    (((struct o1_uchar *)0xC3BD448)->v) = ((*(signed char *)0xC3BD449) | t0);
                    (((struct o1_uchar *)0xC542361)->v) = 0x2;
                    t44 = ((int (*)(int, int, int))(FUN_0c056e44))(0x20, 0x1, t0);
                    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x5A);
                    (((struct o1E_uchar *)0xC542236)->v) = 0x1;
                    FUN_0c0430c0();
                    (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                    t84 = 0x0;
                }
            } else {
                (((struct o1_uchar *)0xC542361)->v) = 0x1;
                FUN_0c059c54(0x1);
                FUN_0c05b048(0x1, 0x0);
                t55 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
                FUN_0c0349b4();
                FUN_0c034d28();
                (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
                (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                t84 = 0x0;
            }
        } else {
            if ((t3 != 3) && (t3 != 4)) {
                t84 = t3;
            } else {
                (((struct o0_uchar *)0xC542361)->v) = 0x1;
                (((struct o1_uchar *)0xC542361)->v) = 0x1;
                FUN_0c059c54(0x1);
                FUN_0c05b048(0x1, 0x0);
                t65 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
                FUN_0c0349b4();
                FUN_0c034d28();
                (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
                (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                t84 = 0x0;
            }
        }
    }
    (((struct o0_uchar *)0xC3BD448)->v) = 0x0;
    return t84;
}

int FUN_0c045fe0(int a4, int a5, int a6, int a7)
{
    register int t1;

    (((struct o3_uchar *)0xC40F820)->v) = 0x0;
    (((struct o2_uchar *)0xC40F820)->v) = 0x0;
    (((struct o1_uchar *)0xC40F820)->v) = 0x0;
    (((struct o0_uchar *)0xC40F820)->v) = 0x0;
    FUN_0c047064(0xC40F820, a5, a6, a7);
    t1 = *(signed char *)0xC541F42;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            FUN_0c045f10();
        } else {
            FUN_0c045cf4();
        }
    } else {
        FUN_0c045ac8();
        FUN_0c045cf4();
    }
    *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
    FUN_0c067a58();
    FUN_0c03f40c(0x2);
    FUN_0c03f40c(0x1);
    FUN_0c03f40c(0x5);
    FUN_0c03f40c(0x6);
    FUN_0c03f40c(0x8);
    res_cockpit_faces_release_all();
    FUN_0c038e88(0x2);
    FUN_0c038e88(0x1);
    FUN_0c038f70();
    FUN_0c038e88(0x5);
    FUN_0c038e88(0x6);
    FUN_0c038e88(0x8);
    FUN_0c060c00();
    thunk_FUN_0c066b82();
    FUN_0c063f24();
    FUN_0c038566();
    FUN_0c038548(0x2);
    FUN_0c038548(0x1);
    FUN_0c038548(0x5);
    FUN_0c038548(0x6);
    res_cockpit_faces_release_all();
    FUN_0c038e88(0x2);
    return (FUN_0c038e88(0x1));
}
