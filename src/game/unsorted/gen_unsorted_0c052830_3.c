/* game/unsorted: functions 0C052830-0C053CBA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1B4_int { char p[0x1B4]; int v; };
struct o1B8_int { char p[0x1B8]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c052ba8(int, int, int, int);
int thunk_FUN_0c056b68(int);
int FUN_0c052c4a(int, int, int, int, int);
int FUN_0c052c86(int, int, int, int, int);
int nlCalcPoint(int, int);
int nlStoreMatrix(int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c17c4d0(int);
extern int FUN_0c187798();
int FUN_0c052bd8(int a4, int a5, int a6, int a7);
int FUN_0c052cf8(int a4, int a5, int a6);

int FUN_0c052bd8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC052BD4))(a4, a5, a6, a7);
        }
        return thunk_FUN_0c056b68(a4);
    }
    FUN_0c052ba8(a4, a5, a6, a7);
    return thunk_FUN_0c056b68(a4);
}

int FUN_0c052cf8(int a4, int a5, int a6)
{
    int stk[395];
    register int t18;
    register int t13;
    register int t14;
    register int t20;
    register int t22;
    register int t24;
    register int t27;
    register int t30;
    register int t34;
    register int t35;
    register int t41;
    register float u49;
    register int t63;
    register int t64;
    register int t50;
    register int t51;
    register float u52;
    register int t68;
    register int t69;
    register int t71;
    register int t73;
    register int t76;
    register int t77;
    register int t78;
    register int t79;
    register int t86;
    register int t87;
    register int t93;
    register float u102;
    register int t118;
    register int t119;
    register int t104;
    register int t105;
    register int t106;
    register float u107;
    register int t123;
    register int t136;
    register int t137;
    register int t138;
    register float u140;
    register float u149;
    register int t158;
    register int t150;
    register int t151;
    register float u152;
    register int t162;
    register int t163;
    register int t176;
    register int t185;
    register int t25;
    register int t26;
    register int t28;
    register int t29;
    register int t47;
    register int t74;
    register int t75;
    register int t99;
    register int t172;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlPushMatrix(0x0);
    nlUnitMatrix();
    nlRotateAY(((((struct o1B8_int *)((*(int *)(((int)stk + 24)))))->v)));
    nlRotateAX(((-((((struct o1B4_int *)((*(int *)(((int)stk + 24)))))->v))) + 0x10000));
    nlStoreMatrix((0x84 + ((int)stk + 4)));
    nlStoreMatrix((((int)stk + 4) + 0x44));
    nlInvertMatrix((((int)stk + 4) + 0x44));
    nlUnitMatrix();
    FUN_0c17b1a0((((int)stk + 4) + 0x44));
    t18 = 0x0;
    if ((int)a5 > 0) {
        t13 = 0x0;
        t14 = 0x0;
        for (;;) {
            nlCalcPoint(((*(int *)(((int)stk + 4))) + t14), (t14 + (0xE8 + ((int)stk + 4))));
            t13 = (t13 + 0x1);
            t14 = (t14 + 0xC);
            if ((int)t13 >= (int)a5) {
                break;
            }
        }
        t18 = t13;
    }
    t20 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c17c4d0((0x61C + ((int)stk + 4)));
    t22 = ((int (*)(void))(FUN_0c187798))();
    t24 = FUN_0c17c4d0((0x610 + ((int)stk + 4)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t27 = t26;
    t30 = t18;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)a5) {
            break;
        }
        t27 = (*(int *)(((int)stk + 12)));
        t30 = 0x0;
        t34 = t27;
        t27 = (t27 << 1);
        t27 = (t27 + t34);
        t35 = *(int *)(((int)stk + 4));
        t27 = (t27 << 2);
        t25 = t35;
        t27 = (t27 + (0x160 + ((int)stk + 4)));
        t29 = t27;
        t28 = t27;
        *(unsigned int *)(((int)stk + 8)) = ((((t35 << 1) + t25) << 2) + (0xE8 + ((int)stk + 4)));
        if ((int)a5 > 0) {
            for (;;) {
                if ((*(int *)(((int)stk + 4))) == t30) {
                    t25 = (*(int *)(((int)stk + 8)));
                    t24 = 0xC;
                    t24 = (((int (*)(int))(FUN_0c187798))(t27));
                } else {
                    t24 = 0x610;
                    t24 = (t24 + ((int)stk + 4));
                    t41 = t24;
                    *(int *)((int)stk + 0) = t41;
                    t27 = t29;
                    t24 = (FUN_0c052c4a(t27, (*(int *)(((int)stk + 8))), (0x620 + ((int)stk + 0)), ((((t30 << 1) + t30) << 2) + (0xE8 + ((int)stk + 4))), t41));
                }
                t25 = (*(int *)(((int)stk + 12)));
                t30 = (t30 + 0x1);
                t29 = (t29 + 0xC);
                t25 = (t25 + 0x1);
                *(unsigned int *)(((int)stk + 12)) = t25;
                t28 = (t28 + 0xC);
                if ((int)t30 >= (int)a5) {
                    break;
                }
            }
        } else {
            t47 = t27;
        }
        t25 = (*(int *)(((int)stk + 4)));
        t27 = t47;
        t25 = (t25 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t25;
    }
    *(unsigned int *)(((int)stk + 28)) = (0x160 + ((int)stk + 4));
    u49 = (((struct o8_float *)((0x160 + ((int)stk + 4))))->v);
    *(unsigned int *)(((int)stk + 16)) = (a5 * a5);
    t63 = 0x1;
    t64 = 0x0;
    if ((int)0x1 < (int)(a5 * a5)) {
        t50 = 0x1;
        t51 = 0x0;
        u52 = u49;
        for (;;) {
            if (((((struct o8_float *)(((((t50 << 1) + t50) << 2) + (0x160 + ((int)stk + 4)))))->v)) > u52) {
                t51 = t50;
                u52 = ((((struct o8_float *)(((((t50 << 1) + t50) << 2) + (0x160 + ((int)stk + 4)))))->v));
            }
            t50 = (t50 + 0x1);
            if ((int)t50 >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
        }
        t63 = t50;
        t64 = t51;
    }
    *(unsigned int *)(((int)stk + 12)) = (0xD0 + ((int)stk + 4));
    t68 = ((int (*)(int, int))(FUN_0c187798))(t63, t64);
    t69 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c17c4d0((0x61C + ((int)stk + 4)));
    t71 = ((int (*)(void))(FUN_0c187798))();
    t73 = FUN_0c17c4d0((0x610 + ((int)stk + 4)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t76 = t75;
    t77 = t28;
    t78 = t29;
    t79 = t30;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)a5) {
            break;
        }
        t76 = (*(int *)(((int)stk + 20)));
        t79 = 0x0;
        t86 = t76;
        t76 = (t76 << 1);
        t76 = (t76 + t86);
        t87 = *(int *)(((int)stk + 4));
        t76 = (t76 << 2);
        t74 = t87;
        t76 = (t76 + (0x160 + ((int)stk + 4)));
        t78 = t76;
        t77 = t76;
        *(unsigned int *)(((int)stk + 8)) = ((((t87 << 1) + t74) << 2) + (0xE8 + ((int)stk + 4)));
        if ((int)a5 > 0) {
            for (;;) {
                if ((*(int *)(((int)stk + 4))) == t79) {
                    t74 = (*(int *)(((int)stk + 8)));
                    t73 = 0xC;
                    t73 = (((int (*)(int))(FUN_0c187798))(t76));
                } else {
                    t73 = 0x610;
                    t73 = (t73 + ((int)stk + 4));
                    t93 = t73;
                    *(int *)((int)stk + 0) = t93;
                    t76 = t78;
                    t73 = (FUN_0c052c86(t76, (*(int *)(((int)stk + 8))), (0x620 + ((int)stk + 0)), ((((t79 << 1) + t79) << 2) + (0xE8 + ((int)stk + 4))), t93));
                }
                t74 = (*(int *)(((int)stk + 20)));
                t79 = (t79 + 0x1);
                t78 = (t78 + 0xC);
                t74 = (t74 + 0x1);
                *(unsigned int *)(((int)stk + 20)) = t74;
                t77 = (t77 + 0xC);
                if ((int)t79 >= (int)a5) {
                    break;
                }
            }
        } else {
            t99 = t76;
        }
        t74 = (*(int *)(((int)stk + 4)));
        t76 = t99;
        t74 = (t74 + 0x1);
        *(unsigned int *)(((int)stk + 4)) = t74;
    }
    u102 = (((struct o8_float *)((*(int *)(((int)stk + 28)))))->v);
    t118 = 0x1;
    t119 = 0x0;
    if ((int)0x1 < (int)(*(int *)(((int)stk + 16)))) {
        t104 = t74;
        t105 = 0x1;
        t106 = 0x0;
        u107 = u102;
        for (;;) {
            if (((((struct o8_float *)(((((t105 << 1) + t105) << 2) + (0x160 + ((int)stk + 4)))))->v)) > u107) {
                t104 = t105;
                t104 = (t104 << 1);
                t104 = (t104 + t105);
                t104 = (t104 << 2);
                t106 = t105;
                t104 = (t104 + (0x160 + ((int)stk + 4)));
                u107 = ((((struct o8_float *)(t104))->v));
            }
            t105 = (t105 + 0x1);
            if ((int)t105 >= (int)(*(int *)(((int)stk + 16)))) {
                break;
            }
        }
        t118 = t105;
        t119 = t106;
    }
    t123 = ((int (*)(int, int))(FUN_0c187798))(t118, t119);
    nlUnitMatrix();
    FUN_0c17b1a0((0x84 + ((int)stk + 4)));
    (((struct o4_float *)((*(int *)(((int)stk + 12)))))->v) = ((((struct o4_float *)((0xDC + ((int)stk + 4))))->v));
    if (((((struct o8_float *)((0xDC + ((int)stk + 4))))->v)) > ((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v))) {
        (((struct o8_float *)((*(int *)(((int)stk + 12)))))->v) = ((((struct o8_float *)((0xDC + ((int)stk + 4))))->v));
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x1C);
    if ((int)a5 > 0) {
        t136 = (0xE8 + ((int)stk + 4));
        t137 = (((int)stk + 4) + 0x1C);
        t138 = 0x0;
        for (;;) {
            u140 = (((struct o8_float *)(t136))->v);
            t138 = (t138 + 0x1);
            t136 = (t136 + 0xC);
            *(float *)((t137 + 0x0)) = (((((struct o8_float *)((*(int *)(((int)stk + 12)))))->v)) - u140);
            t137 = (t137 + 0x4);
            if ((int)t138 >= (int)a5) {
                break;
            }
        }
    }
    u149 = *(float *)(((*(int *)(((int)stk + 4))) + 0x0));
    t158 = 0x0;
    if ((int)a5 > 0) {
        t150 = 0x0;
        t151 = 0x0;
        u152 = u149;
        for (;;) {
            if (u152 > (*(float *)(((((int)stk + 4) + 0x1C) + (t150 << 2))))) {
                t151 = t150;
                u152 = (*(float *)(((((int)stk + 4) + 0x1C) + (t150 << 2))));
            }
            t150 = (t150 + 0x1);
            if ((int)t150 >= (int)a5) {
                break;
            }
        }
        t158 = t151;
    }
    t162 = *(signed char *)0xC542237;
    t163 = *(signed char *)0xC54223C;
    if ((*(signed char *)0xC542377) != 0) {
        t172 = (*(int *)((((((((t162 << 1) + t162) << 2) << 1) + 0xC1BF424) + ((t163 << 2) << 1)) + 0x4)));
    } else {
        t172 = (*(int *)((((((((t162 << 1) + t162) << 2) << 1) + 0xC1BF424) + ((t163 << 2) << 1)) + 0x0)));
    }
    if ((float)t172 > (*(float *)((((t158 << 2) + (((int)stk + 4) + 0x1C)) + 0x0)))) {
        t176 = *(int *)(((int)stk + 12));
        (((struct o8_float *)(t176))->v) = (((((struct o8_float *)(t176))->v)) + ((float)t172 - (*(float *)((((t158 << 2) + (((int)stk + 4) + 0x1C)) + 0x0)))));
    }
    *(volatile int *)(((int)stk + 12));
    t185 = ((int (*)(int, int, int))(FUN_0c187798))(((t158 << 2) + (((int)stk + 4) + 0x1C)), (((int)stk + 4) + 0x1C), ((((((t162 << 1) + t162) << 2) << 1) + 0xC1BF424) + ((t163 << 2) << 1)));
    *(float *)(((int)stk + 208)) = ((*(float *)(((int)stk + 208))) - 100.0f);
    nlCalcPoint((*(int *)(((int)stk + 12))), ((*(int *)(((int)stk + 24))) + 0xBC));
    nlCalcPoint((0xC4 + ((int)stk + 4)), ((*(int *)(((int)stk + 24))) + 0xEC));
    return (nlPopMatrix(0x1));
}
