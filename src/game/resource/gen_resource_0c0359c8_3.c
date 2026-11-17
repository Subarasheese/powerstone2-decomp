/* game/resource: functions 0C0359C8-0C03731E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c035bc6(int);
int FUN_0c035c1a(int, int, int, int);
int FUN_0c035c44(int, int);
int FUN_0c035d74(int, int, int);
int FUN_0c036518(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0365c8(int);
int FUN_0c0377b2(int);
int FUN_0c16fa90(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c036606(int a4, int a5, int a6);
int FUN_0c0367e0(int a4, int a5, int a6, int a7);
void FUN_0c036864(int a4, int a5, int a6, int a7);
int FUN_0c03697c(int a4, int a5, int a6, int a7);
int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8);

int FUN_0c036606(int a4, int a5, int a6)
{
    int stk[12];
    register int t3;
    register int t4;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t76;
    register int t77;
    register int t78;
    register int t79;
    register int t80;
    register int t81;
    register int t91;
    register int t92;
    register int t93;
    register int t94;
    register int t95;
    register int t96;
    register int t97;
    register int t98;
    register int t99;
    register int t1;
    register int t20;
    register int t65;
    register int t66;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register int t112;
    register int t102;
    register int t103;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    register int t108;

    t3 = 0x0;
    t4 = a6;
    for (;;) {
        if ((int)t3 >= (int)0x4) {
            break;
        }
        t15 = (t3 << 2);
        *(unsigned int *)(((((int)stk + 0) + 0x20) + t15)) = t3;
        t15 = 0x3714;
        t1 = (t3 * 0x3938);
        t1 = (t1 + 0xC532498);
        t16 = (*(signed char *)((t1 + t15)));
        if (t16 != 0) {
            t4 = 0xC3BD44C;
            t16 = (t3 * 0x3938);
            t16 = (t16 + 0xC532498);
            t15 = (*(signed char *)((t16 + 0x2)));
            t16 = t4;
            t16 = (t16 + (t3 << 2));
            t1 = (*(int *)((t16 + 0x0)));
            if (t15 != t1) {
                t15 = (t3 << 2);
                t16 = 0x2;
                t16 = (t16 + ((t3 * 0x3938) + 0xC532498));
                t16 = (*(signed char *)((t16 + 0x0)));
                *(unsigned int *)(((((int)stk + 0) + 0x10) + t15)) = t16;
            } else {
                t15 = (t3 << 2);
                *(unsigned int *)(((((int)stk + 0) + 0x10) + t15)) = 0xFF;
            }
        } else {
            t15 = (t3 << 2);
            *(unsigned int *)(((((int)stk + 0) + 0x10) + t15)) = 0xFF;
        }
        t3 = (t3 + 0x1);
    }
    t17 = t3;
    t18 = (t3 << 2);
    t19 = 0x0;
    for (;;) {
        if ((int)t19 >= (int)0x3) {
            break;
        }
        t20 = t19;
        t20 = (t20 << 2);
        t20 = (t20 + (((int)stk + 0) + 0x20));
        t17 = t20;
        t18 = t20;
        t20 = t19;
        t20 = (t20 << 2);
        t20 = (t20 + (((int)stk + 0) + 0x20));
        if ((unsigned int)t17 < (unsigned int)((((int)stk + 0) + 0x20) + 0x10)) {
            for (;;) {
                t15 = (*(int *)((t17 + 0x0)));
                t15 = (t15 << 2);
                t16 = (*(int *)(((((int)stk + 0) + 0x10) + t15)));
                t15 = (*(int *)((t20 + 0x0)));
                t15 = (t15 << 2);
                if ((int)t16 < (int)(*(int *)(((((int)stk + 0) + 0x10) + t15)))) {
                    *(unsigned int *)(((int)stk + 0)) = (*(int *)((t20 + 0x0)));
                    t16 = (*(int *)((t18 + 0x0)));
                    *(unsigned int *)((t20 + 0x0)) = t16;
                    *(unsigned int *)((t18 + 0x0)) = (*(int *)(((int)stk + 0)));
                }
                t17 = (t17 + 0x4);
                t18 = (t18 + 0x4);
                if ((unsigned int)t17 >= (unsigned int)((((int)stk + 0) + 0x20) + 0x10)) {
                    break;
                }
            }
        }
        t19 = (t19 + 0x1);
    }
    *(unsigned int *)(((int)stk + 12)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x20);
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x20);
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x20);
    t31 = t15;
    t32 = 0xFFFFFFFF;
    t33 = 0x3;
    t34 = t16;
    t35 = (((int)stk + 0) + 0x20);
    t36 = t18;
    t37 = t19;
    t38 = ((((int)stk + 0) + 0x20) + 0x10);
    t39 = 0x0;
    for (;;) {
        if ((int)t39 >= (int)0x4) {
            break;
        }
        t31 = t39;
        t31 = (t31 << 2);
        t31 = (*(int *)(((((int)stk + 0) + 0x20) + t31)));
        t31 = (t31 << 2);
        t34 = (*(int *)(((((int)stk + 0) + 0x10) + t31)));
        if (t34 != 0xFF) {
            t31 = (*(int *)(((int)stk + 4)));
            t33 = (*(int *)(((int)stk + 12)));
            t31 = (*(int *)((t31 + 0x0)));
            t31 = (t31 << 2);
            t34 = (*(int *)(((((int)stk + 0) + 0x10) + t31)));
            if (t34 == t33) {
                t35 = (*(int *)(((int)stk + 0)));
                t36 = 0x0;
                t35 = (*(int *)((t35 + 0x0)));
                t31 = (FUN_0c036518(t35, t36, t37, t38, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            } else {
                t35 = (*(int *)(((int)stk + 8)));
                t35 = (*(int *)((t35 + 0x0)));
                t31 = t35;
                t31 = (t31 << 2);
                t34 = (*(int *)(((((int)stk + 0) + 0x10) + t31)));
                *(unsigned int *)(((int)stk + 12)) = t34;
                t36 = 0x1;
                t31 = (FUN_0c036518(t35, t36, t37, t38, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
            }
        } else {
            t65 = t32;
            t66 = t33;
            t68 = t35;
            t69 = t36;
            t70 = t37;
            t71 = t38;
        }
        t32 = t65;
        t33 = t66;
        t34 = (*(int *)(((int)stk + 8)));
        t35 = t68;
        t36 = t69;
        t37 = t70;
        t38 = t71;
        t39 = (t39 + 0x1);
        t34 = (t34 + 0x4);
        *(unsigned int *)(((int)stk + 8)) = t34;
        t33 = (*(int *)(((int)stk + 0)));
        t33 = (t33 + 0x4);
        *(unsigned int *)(((int)stk + 0)) = t33;
        t32 = (*(int *)(((int)stk + 4)));
        t32 = (t32 + 0x4);
        *(unsigned int *)(((int)stk + 4)) = t32;
    }
    t76 = t31;
    t77 = t34;
    t78 = 0xC532498;
    t79 = 0xC532498;
    t80 = 0x0;
    t81 = 0xC532498;
    for (;;) {
        if ((unsigned int)t78 >= (unsigned int)0xC540978) {
            break;
        }
        t76 = 0x3714;
        t77 = (*(signed char *)((t78 + t76)));
        if (t77 != 0) {
            t76 = (*(signed char *)((t79 + 0x2)));
            t81 = t76;
            if (t76 != 12) {
                t76 = t81;
                if (t76 == 13) {
                    t80 = 0x1;
                }
            } else {
                t80 = 0x1;
            }
        }
        t78 = (t78 + 0x3938);
        t79 = (t79 + 0x3938);
    }
    if (t80 != 0) {
        t91 = t76;
        t92 = t32;
        t93 = t33;
        t94 = t77;
        t95 = t78;
        t96 = t79;
        t97 = t80;
        t98 = t81;
        t99 = 0x0;
        for (;;) {
            if ((int)t99 >= (int)0x4) {
                break;
            }
            t91 = 0x3714;
            t93 = (t99 * 0x3938);
            t93 = (t93 + 0xC532498);
            t94 = (*(signed char *)((t93 + t91)));
            if (t94 == 0) {
                t95 = t99;
                t91 = (FUN_0c0365c8(t95));
            } else {
                t102 = t92;
                t103 = t93;
                t104 = t94;
                t105 = t95;
                t106 = t96;
                t107 = t97;
                t108 = t98;
            }
            t92 = t102;
            t99 = (t99 + 0x1);
            t93 = t103;
            t94 = t104;
            t95 = t105;
            t96 = t106;
            t97 = t107;
            t98 = t108;
        }
        t112 = t91;
    } else {
        t112 = t76;
    }
    return t112;
}

int FUN_0c0367e0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC4B4160) == 0) {
        FUN_0c035c1a(0x18, (*(int *)0xC4B40D8), a6, a7);
        t0 = *(int *)0xC4B40D8;
        FUN_0c0377b2(t0);
        t1 = FUN_0c035bc6(0x19);
        FUN_0c035c44(0xCB00000, t1);
        t1 = FUN_0c035d74(t0, 0x7D, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4160 = 0x1;
        t0 = t1;
    }
    return t0;
}

void FUN_0c036864(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(int *)0xC4B4154) == 0) {
        FUN_0c035c1a((*(int *)(((a4 << 2) + 0xC1AA788))), 0xCB00000, a6, a7);
        t0 = *(int *)0xC4B410C;
        FUN_0c187a88(t0, (((((struct o0_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o4_int *)0xCB00000)->v)));
        FUN_0c0377b2(t0);
        FUN_0c035c44((((((struct o8_int *)0xCB00000)->v)) + 0xCB00000), ((((struct oC_int *)0xCB00000)->v)));
        FUN_0c035d74(t0, 0x96, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4154 = 0x1;
        if ((*(signed char *)0xC478C2C) != 0) {
            FUN_0c16fa90(0x1, a4);
    return;
        }
        t0 = FUN_0c035c44((((((struct o10_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o14_int *)0xCB00000)->v)));
        FUN_0c187a88((*(int *)0xC4F459C), (*(int *)0xC3BD45C), t0);
    return;
    }
}

int FUN_0c03697c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC4B4170) == 0) {
        t0 = *(int *)0xC4B40D4;
        FUN_0c035c1a(0x25, t0, a6, a7);
        FUN_0c0377b2(t0);
        t1 = FUN_0c035bc6(0x26);
        FUN_0c035c44(0xCB00000, t1);
        t1 = FUN_0c035d74(t0, 0x1E, (*(int *)0xC3BD45C));
        *(unsigned int *)0xC4B4170 = 0x1;
        t0 = t1;
    }
    return t0;
}

int FUN_0c036a9c(int a4, int a5, int a6, int a7, int a8)
{
    register int t26;
    register int t17;

    t26 = 0x0;
    if ((*(int *)(((a7 << 2) + 0xC4B4124))) == 0) {
        FUN_0c035c1a(a5, 0xCB00000, a6, a7);
        FUN_0c187a88((*(int *)((a8 + 0x0))), (((((struct o0_int *)0xCB00000)->v)) + 0xCB00000), ((((struct o4_int *)0xCB00000)->v)));
        FUN_0c0377b2((*(int *)((a8 + 0x0))));
        if (a4 != 0) {
            FUN_0c035c44((((((struct o8_int *)0xCB00000)->v)) + 0xCB00000), ((((struct oC_int *)0xCB00000)->v)));
            t17 = (*(int *)0xC3BD45C);
        } else {
            t17 = (((((struct o8_int *)0xCB00000)->v)) + 0xCB00000);
        }
        t26 = FUN_0c035d74((*(int *)((a8 + 0x0))), a6, t17);
        *(unsigned int *)(((a7 << 2) + 0xC4B4124)) = 0x1;
    }
    return t26;
}
