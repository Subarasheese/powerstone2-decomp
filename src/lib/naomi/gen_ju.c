/* Straight-line functions with calls and guards (batch gen_ju): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c18dcfa(int, int);
int FUN_0c18dfd0(void);
int FUN_0c18dfd6(void);
int FUN_0c18dfe6(void);
int FUN_0c19ace4(int, int, int, int, int);
int FUN_0c2ee770(int, int);
int FUN_0c2ee948(void);
int FUN_0c2f3668(void);
int FUN_0c2f384c(int);
int FUN_0c187b78(int a4, int a5, int a6, int a7);
int FUN_0c2f344a(void);
int syIntAdrChk_init(void);
int FUN_0c18d23c(int a4);
int FUN_0c1a3600(int a4, int a5, int a6, int a7);
int FUN_0c1a2a68(int a4, int a5, int a6);

int FUN_0c187b78(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t39;
    register int t0;
    register int t1;
    register int t8;
    register int t54;
    register int t65;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register int t75;
    register int t78;
    register int t79;
    register int t80;
    register int t81;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    t5 = a7;
    t6 = a5;
    t7 = a4;
    for (;;) {
        *(unsigned int *)(((int)stk + 0)) = (((unsigned int)(t6 - t7) >> 1) + t7);
        t11 = *(int *)((a6 + 0x0));
        t12 = t11;
        t13 = ((((((unsigned int)(t6 - t7) >> 1) + t7) - 1) * (*(int *)((a6 + 0x4)))) + t11);
        t14 = t6;
        t15 = t7;
        for (;;) {
            if (((unsigned int)t15 >= (unsigned int)0x1) && ((unsigned int)t15 <= (unsigned int)t14)) {
                for (;;) {
                    t2 = t15;
                    t12 = (*(int *)((a6 + 0x4)));
                    t2 = (t2 - 1);
                    t1 = (*(int *)((a6 + 0x0)));
                    t3 = t13;
                    t2 = (t2 * t12);
                    t2 = (t2 + t1);
                    t0 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a6 + 0x8)))))(t2, t3, t4, t5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                    if ((int)t0 >= 0) {
                        break;
                    }
                    t15 = (t15 + 0x1);
                }
                for (;;) {
                    t12 = (*(int *)((a6 + 0x4)));
                    t3 = t14;
                    t3 = (t3 - 1);
                    t1 = (*(int *)((a6 + 0x0)));
                    t3 = (t3 * t12);
                    t3 = (t3 + t1);
                    t2 = t13;
                    t0 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a6 + 0x8)))))(t2, t3, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                    if ((int)t0 >= 0) {
                        break;
                    }
                    t14 = (t14 - 1);
                }
                if ((unsigned int)t15 <= (unsigned int)t14) {
                    t8 = t14;
                    *(unsigned int *)(((int)stk + 4)) = (t15 - 1);
                    t2 = 0x0;
                    t8 = (t8 - 1);
                    for (;;) {
                        if ((unsigned int)t2 >= (unsigned int)(*(int *)((a6 + 0x4)))) {
                            break;
                        }
                        t0 = (*(int *)(((int)stk + 4)));
                        t4 = (*(int *)((a6 + 0x4)));
                        t3 = (*(int *)((a6 + 0x0)));
                        t0 = (t0 * t4);
                        *(unsigned int *)(((int)stk + 8)) = t0;
                        t0 = (t0 + t3);
                        t4 = (t8 * t4);
                        t5 = (*(signed char *)((t2 + t0)));
                        t4 = (t4 + t3);
                        t4 = (t4 + t2);
                        t12 = (*(signed char *)((t4 + 0x0)));
                        *(unsigned char *)(((((*(int *)(((int)stk + 8))) + t3) + t2) + 0x0)) = t12;
                        t12 = (*(int *)((a6 + 0x0)));
                        t39 = (((t8 * (*(int *)((a6 + 0x4)))) + t12) + t2);
                        t2 = (t2 + 0x1);
                        *(unsigned char *)((t39 + 0x0)) = t5;
                    }
                    t1 = (*(int *)(((int)stk + 0)));
                    if (t15 == t1) {
                        t13 = (*(int *)((a6 + 0x4)));
                        t13 = (t8 * t13);
                        t13 = (t13 + (*(int *)((a6 + 0x0))));
                    } else {
                        t1 = (*(int *)(((int)stk + 0)));
                        if (t14 == t1) {
                            t12 = (*(int *)(((int)stk + 4)));
                            t1 = (*(int *)((a6 + 0x0)));
                            t13 = (t12 * (*(int *)((a6 + 0x4))));
                            t13 = (t13 + t1);
                            t54 = t12;
                        }
                    }
                    t14 = t8;
                    t12 = t54;
                    t15 = (t15 + 0x1);
                }
                continue;
            }
            break;
        }
        if ((unsigned int)(t14 - t7) < (unsigned int)(t6 - t15)) {
            if ((unsigned int)t7 < (unsigned int)t14) {
                t3 = t14;
                t4 = a6;
                t2 = t7;
                t0 = (((int (*)(int, int, int))(FUN_0c187b78))(t2, t3, t4));
            } else {
                t65 = t1;
                t68 = t2;
                t69 = t3;
                t70 = t4;
                t71 = t5;
            }
            t1 = t65;
            t2 = t68;
            t3 = t69;
            t4 = t70;
            t5 = t71;
            if ((unsigned int)t15 < (unsigned int)t6) {
                t7 = t15;
                continue;
            }
            break;
        }
        if ((unsigned int)t15 < (unsigned int)t6) {
            t3 = t6;
            t4 = a6;
            t2 = t15;
            t0 = (((int (*)(int, int, int))(FUN_0c187b78))(t2, t3, t4));
        } else {
            t75 = t1;
            t78 = t2;
            t79 = t3;
            t80 = t4;
            t81 = t5;
        }
        t1 = t75;
        t2 = t78;
        t3 = t79;
        t4 = t80;
        t5 = t81;
        if ((unsigned int)t7 < (unsigned int)t14) {
            t6 = t14;
            continue;
        }
        break;
    }
    return t0;
}

int FUN_0c2f344a(void)
{
    register int t1;
    register int t11;
    register int t22;
    register int t5;
    int t13;
    int t31;
    register int t32;

    t1 = *(signed char *)0xC8DA0E9;
    if (((((struct o0_short *)0xC8E00BE)->v)) == 0) {
        FUN_0c2ee770(0xC8E00C8, 0xC8E00C4);
        (((struct o0_ushort *)0xC8E00BE)->v) = ((((struct o6_short *)0xC8E00BE)->v));
        *(unsigned int *)0xC8E00C0 = (*(int *)0xC8E00C8);
        t5 = 0xC8E00C8;
    }
    if (((((struct o0_short *)0xC8E00BE)->v)) != 0) {
        t11 = t5;
        for (;;) {
            if (((unsigned char)t1 == (unsigned char)(*(signed char *)0xC8DA0E9)) && (t13 = (((struct o0_short *)0xC8E00BE)->v), t13 != 0)) {
                t22 = *(int *)0xC8E00C0;
                *(unsigned int *)0xC8E00C0 = (t22 + 0x1);
                t11 = (FUN_0c2f384c((*(signed char *)((((t22 + 0x1) - 1) + 0x0)))));
                (((struct o0_ushort *)0xC8E00BE)->v) = (((((struct o0_short *)0xC8E00BE)->v)) - 1);
                continue;
            }
            break;
        }
        if (((((struct o0_short *)0xC8E00BE)->v)) == 0) {
            if ((((*(signed char *)0xC8DFFA6) == 0) && (t31 = *(short *)0xC8D67B8, ((unsigned short)t31 & 2) != 0)) || (t32 = *(signed char *)0xC8DA0E8, (unsigned char)t32 == 7)) {
                (((struct o0_ushort *)0xC8E00BE)->v) = ((((struct o6_short *)0xC8E00BE)->v));
                *(unsigned int *)0xC8E00C0 = (*(int *)0xC8E00C8);
            }
            FUN_0c2f3668();
            return FUN_0c2ee948();
        }
        return t11;
    }
    return t5;
}

int syIntAdrChk_init(void)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t16;
    register int t24;
    register int t2;

    t0 = *(volatile signed char *)0xFFC00004;
    *(volatile unsigned char *)0xFFC00004 = (t0 & 0xFE);
    t1 = *(volatile signed char *)0xFFC00004;
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)t1;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x50000) {
            break;
        }
        t2 = (*(int *)(((int)stk + 0)));
        t2 = (t2 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t2;
    }
    if (((unsigned char)(*(signed char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x1C) + 0x0))) & 4) != 0) {
        (((struct o8_uint *)0xC8E0960)->v) = 0x0;
    } else {
        (((struct o8_uint *)0xC8E0960)->v) = 0x1;
    }
    if (((((struct o8_int *)0xC8E0960)->v)) != 0) {
        
        (((struct o0_uint *)0xC8E0960)->v) = 0xFFE00000;
        *(volatile unsigned char *)0xFFE00008 = 0x0;
        *(unsigned char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x8) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct o0_int *)0xC8E0960)->v)) + 0x0)) = 0x0;
        *(unsigned char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x4) + 0x0)) = 0x28;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t16 = 0xFFE00008;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x80000) {
                break;
            }
            t16 = (*(int *)(((int)stk + 4)));
            t16 = (t16 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t16;
        }
        *(unsigned char *)(((((((struct o0_int *)0xC8E0960)->v)) + 0x8) + 0x0)) = 0x30;
    } else {
        (((struct o4_uint *)0xC8E0960)->v) = 0xFFE80000;
        *(volatile unsigned short *)0xFFE80008 = 0x0;
        *(unsigned short *)(((((((struct o4_int *)0xC8E0960)->v)) + 0x18) + 0x0)) = 0x6;
        *(unsigned short *)(((((((struct o4_int *)0xC8E0960)->v)) + 0x8) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct o4_int *)0xC8E0960)->v)) + 0x0)) = 0x0;
        *(unsigned char *)(((((((struct o4_int *)0xC8E0960)->v)) + 0x4) + 0x0)) = 0x28;
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t24 = 0xFFE80008;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 8))) >= (int)0x80000) {
                break;
            }
            t24 = (*(int *)(((int)stk + 8)));
            t24 = (t24 + 0x1);
            *(unsigned int *)(((int)stk + 8)) = t24;
        }
        *(unsigned short *)(((((((struct o4_int *)0xC8E0960)->v)) + 0x18) + 0x0)) = 0x308;
        *(unsigned short *)(((((((struct o4_int *)0xC8E0960)->v)) + 0x8) + 0x0)) = 0x30;
    }
    return ((((struct o8_int *)0xC8E0960)->v));
}

int FUN_0c18d23c(int a4)
{
    int stk[3];
    register int t3;
    register int t6;
    register int t9;
    register int t26;
    register int t21;

    FUN_0c18dcfa(((int)stk + 4), (*(int *)((a4 + 0xC))));
    t3 = *(short *)((a4 + 0xA));
    *(unsigned int *)((((((*(short *)((a4 + 0x0))) << 2) << 1) + 0xC8A7010) + 0x0)) = 0xFFFFFFFF;
    t6 = (*(signed char *)((a4 + 0x8)));
    *(int *)((int)stk + 0) = t6;
    t9 = FUN_0c19ace4((*(short *)((a4 + 0x0))), (((int)stk + 0) + 0x4), t3, (*(int *)((a4 + 0x4))), t6);
    t26 = (short)(short)t9;
    if ((int)(short)t9 < 0) {
    } else {
        t21 = 0xFFFFFFFF;
        if ((*(int *)((a4 + 0x4))) != 0) {
        } else {
            FUN_0c18dfe6();
            for (;;) {
                if ((*(int *)((0xC8A7010 + (((*(short *)((a4 + 0x0))) << 2) << 1)))) != -1) {
                    break;
                }
                FUN_0c18dfd0();
            }
            FUN_0c18dfd6();
            t21 = (*(int *)((((((*(short *)((a4 + 0x0))) << 2) << 1) + 0xC8A7010) + 0x4)));
        }
        t26 = t21;
    }
    return t26;
}

int FUN_0c1a3600(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t16;
    register int t17;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t24;

    *(unsigned int *)(((int)stk + 4)) = ((a7 - 1) + a5);
    t2 = *(int *)(((int)stk + 4));
    t16 = 0x1;
    t17 = 0x0;
    if ((unsigned int)t2 >= (unsigned int)a5) {
        t1 = (((a7 - 1) + a5) + 0x1);
        t3 = ((a7 - 1) + a6);
        t4 = 0x1;
        t5 = 0x0;
        for (;;) {
            t6 = *(signed char *)((t3 + 0x0));
            t7 = *(signed char *)((t2 + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (((unsigned char)t7 - (unsigned char)t6) - t5);
            if ((int)(((unsigned char)t7 - (unsigned char)t6) - t5) < 0) {
                t8 = (((unsigned char)t7 - (unsigned char)t6) - t5);
                t5 = 0x100;
                t5 = (t5 + t8);
                *(unsigned int *)(((int)stk + 0)) = t5;
                t5 = 0x1;
            } else {
                t5 = 0x0;
            }
            if ((*(int *)(((int)stk + 0))) != 0) {
                t4 = 0x0;
            }
            t2 = (t2 - 1);
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = (*(int *)(((int)stk + 0)));
            t1 = (t1 - 0x1);
            t3 = (t3 - 1);
            if ((unsigned int)t2 < (unsigned int)a5) {
                break;
            }
        }
        t16 = t4;
        t17 = t5;
    }
    t24 = 0xFFFFFFFF;
    if ((t17 != 1) || (a4 != 0)) {
        t24 = 0x1;
        if (t16 == 1) {
            t24 = 0x0;
        }
    }
    return t24;
}

int FUN_0c1a2a68(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    if ((unsigned int)((a6 - 1) + a4) >= (unsigned int)a4) {
        t0 = ((a6 - 1) + a4);
        t1 = ((a6 - 1) + a5);
        t2 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)t5 + (unsigned char)t4) + t2);
            t3 = (int)((int)(((unsigned char)t5 + (unsigned char)t4) + t2) / (int)0x100);
            t0 = (t0 - 1);
            t2 = t3;
            t1 = (t1 - 1);
            if ((unsigned int)t0 < (unsigned int)a4) {
                break;
            }
        }
        t0 = t3;
    }
    return t0;
}
