/* game/network: functions 0C0235AC-0C0238B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c018e74(int);
int FUN_0c018fd2(int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c01d27a(void);
int FUN_0c01d90a(int, int, int, int);
int FUN_0c01de2c(int, int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c029c9e(void);
int FUN_0c029caa(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c05b048(int, int);
int FUN_0c0235ac(int a4, int a5, int a6, int a7);
int FUN_0c0237d6(void);

int FUN_0c0235ac(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t7;
    register int t46;
    register int t80;
    register int t82;
    register int t88;
    register int t89;
    register int t90;
    register int t92;
    register int t111;
    register int t114;
    register int t22;
    int t81;
    register int t91;

    t0 = *(signed char *)0xC30985B;
    if (t0 != 0) {
        switch (t0) {
        case 1:
            if ((int)((((struct o0_short *)0xC30EF6C)->v)) > 0) {
                (((struct o0_ushort *)0xC30EF6C)->v) = (((((struct o0_short *)0xC30EF6C)->v)) - 1);
            } else {
                (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
            }
            break;
        case 2:
            t7 = *(signed char *)0xC30AF89;
            if (t7 != 0) {
                if (t7 != 1) {
                    if (t7 != 2) {
                        t22 = 0xFFFFFFFD;
                        if (t7 != 3) {
                        } else {
                            t22 = (FUN_0c01de2c(a4, a5, a6, a7));
                        }
                    } else {
                        t22 = (FUN_0c01de2c(a4, a5, a6, a7));
                    }
                } else {
                    t22 = (FUN_0c01de2c(a4, a5, a6, a7));
                }
            } else {
                t22 = (FUN_0c01d90a(a4, a5, a6, a7));
            }
            if (t22 != 0) {
                if (t22 == 1) {
                    FUN_0c05b048(0x1E, 0x0);
                    (((struct o39_uchar *)0xC30EF6C)->v) = 0x1;
                    (((struct o0_uchar *)0xC309859)->v) = 0xD;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    (((struct o1A_uchar *)0xC305404)->v) = 0x0;
                    (((struct o19_uchar *)0xC305404)->v) = 0x0;
                    (((struct o11_uchar *)0xC305404)->v) = 0x0;
                    (((struct o10_uchar *)0xC305404)->v) = 0x0;
                    (((struct oC_uchar *)0xC30AF90)->v) = 0x0;
                    (((struct o0_uint *)0xC30AF90)->v) = 0xD2F0;
                } else {
                    (((struct o2_uchar *)0xC309859)->v) = (*(signed char *)0xC305404);
                    (((struct o3_uchar *)0xC309859)->v) = (*(signed char *)0xC305405);
                    FUN_0c029c9e();
                    (((struct o0_uchar *)0xC305404)->v) = (*(signed char *)0xC30985B);
                    (((struct o1_uchar *)0xC305404)->v) = (*(signed char *)0xC30985C);
                    (((struct o2_uchar *)0xC309859)->v) = 0x3;
                }
            }
            break;
        case 3:
            (((struct o2_uchar *)0xC309859)->v) = (*(signed char *)0xC305404);
            (((struct o3_uchar *)0xC309859)->v) = (*(signed char *)0xC305405);
            t46 = FUN_0c029caa();
            if (t46 != 0) {
                FUN_0c010448();
            } else {
                (((struct o0_uchar *)0xC305404)->v) = (*(signed char *)0xC30985B);
                (((struct o1_uchar *)0xC305404)->v) = (*(signed char *)0xC30985C);
                (((struct o2_uchar *)0xC309859)->v) = 0x3;
            }
            break;
        }
    } else {
        (((struct o2_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985B) + 0x1);
        FUN_0c01e9e4();
        FUN_0c01cb7c();
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o0_ushort *)0xC30EF6C)->v) = 0x14;
        FUN_0c018e74(0x22);
        FUN_0c01d27a();
        t80 = *(signed char *)0xC30AF89;
        if ((t80 == 0) || (((t80 == 1) || (t80 == 2)) && (t81 = *(signed char *)0xC309E08, t81 == 0))) {
            t82 = 0xC3099B8;
            for (;;) {
                if ((unsigned int)t82 >= (unsigned int)0xC3099C6) {
                    break;
                }
                *(unsigned char *)((t82 + 0x0)) = 0x0;
                t82 = (t82 + 0x1);
            }
        }
        if ((*(signed char *)0xC30AF89) == 0) {
            t88 = 0xC30A51E;
            t89 = 0xC30A51E;
            t90 = 0xC30A51E;
            t92 = t91;
            for (;;) {
                if ((unsigned int)t89 >= (unsigned int)0xC30AA32) {
                    break;
                }
                t88 = t89;
                t92 = 0x0;
                t88 = (t88 + 0x8);
                for (;;) {
                    if ((int)t92 >= (int)0x12) {
                        break;
                    }
                    *(unsigned char *)((t88 + 0x0)) = 0x0;
                    t88 = (t88 + 0x1);
                    t92 = (t92 + 0x1);
                }
                t92 = 0x0;
                t88 = t90;
                for (;;) {
                    if ((int)t92 >= (int)0x8) {
                        break;
                    }
                    *(unsigned char *)((t88 + 0x0)) = 0x0;
                    t88 = (t88 + 0x1);
                    t92 = (t92 + 0x1);
                }
                t89 = (t89 + 0x1A);
                t90 = (t90 + 0x1A);
            }
        }
        FUN_0c01d094();
    }
    t111 = FUN_0c022050();
    t114 = t111;
    if (t111 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t114 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t114;
}

int FUN_0c0237d6(void)
{
    int t0;
    int t1;
    int qa0;
    int t2;

    qa0 = 0xC30EF6C;
    t0 = *(signed char *)0xC30985B;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)qa0;
                *(unsigned short *)qa0 = (t0 - 1);
                if ((int)(short)(t0 - 1) < (int)0x3C) {
                    t2 = FUN_0c01cd2c(0x100);
                    if ((short)t2 == 0) {
                        if ((int)(*(short *)qa0) < 0) {
                            (((struct o0_uchar *)0xC30985A)->v) = 0x3;
                            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                        }
                    } else {
                        (((struct o0_uchar *)0xC30985A)->v) = 0x3;
                        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                    }
                    t1 = (short)t2;
                } else {
                    if ((int)(*(short *)qa0) < 0) {
                        (((struct o0_uchar *)0xC30985A)->v) = 0x3;
                        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                    }
                    t1 = (short)(t0 - 1);
                }
            }
            t0 = t1;
        } else {
            t1 = *(short *)qa0;
            *(unsigned short *)qa0 = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
                FUN_0c018e74(0x17);
                *(unsigned short *)qa0 = 0x98;
                t2 = 0x98;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
        FUN_0c018fd2(0x18);
        *(unsigned short *)qa0 = 0xC;
        t1 = 0xC;
    }
    return t1;
}
