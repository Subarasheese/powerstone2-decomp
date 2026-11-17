/* game/unsorted: functions 0C037518-0C037832, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187798(void);
int FUN_0c037518(int a4, int a5, int a6, int a7);
int FUN_0c0375d8(int a4, int a5, int a6);
int FUN_0c037646(int a4, int a5, int a6);
int FUN_0c0377b2(int a4, int a5, int a6, int a7);

int FUN_0c037518(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a7 + 0x0));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = 0x0;
                    if (t0 != 4) {
                    } else {
                        t0 = *(int *)(((a7 + 0x4) + 0x0));
                        t1 = ((((0x2D24 + a5) + (a6 * 0x2D0)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x28);
                    }
                    t0 = t1;
                } else {
                    t1 = *(int *)(((a7 + 0x4) + 0x0));
                    t0 = ((((0x2784 + a5) + (a6 * 0x2D0)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x28);
                }
                t1 = t0;
            } else {
                t0 = *(int *)(((a7 + 0x4) + 0x0));
                t1 = ((((0x21E4 + a5) + (a6 * 0x2D0)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x28);
            }
            t0 = t1;
        } else {
            t1 = *(int *)(((a7 + 0x4) + 0x0));
            t0 = ((((a6 * 0x10E0) + (a5 + 0x24)) + (((((t1 << 2) << 1) + t1) << 2) << 2)) + 0x28);
        }
        t1 = t0;
    } else {
        t1 = ((*(int *)(((((*(int *)(((a7 + 0x4) + 0x0))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
    }
    return t1;
}

int FUN_0c0375d8(int a4, int a5, int a6)
{
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t2;
    register int t3;
    register int t4;

    t1 = *(int *)(((a6 + 0x30) + 0x18));
    t5 = 0x0;
    t6 = 0x0;
    t7 = 0x0;
    t8 = (*(int *)(((a6 + 0x30) + 0x1C)));
    for (;;) {
        if ((int)t7 >= (int)t1) {
            break;
        }
        t5 = t8;
        for (;;) {
            t2 = (*(int *)((t5 + 0xC)));
            if (t2 == 1) {
                t3 = (*(int *)((t5 + 0x10)));
                t5 = (*(int *)(((a6 + 0x30) + 0x1C)));
                t3 = (t3 * 0x3C);
                t5 = (t5 + t3);
                continue;
            }
            break;
        }
        t3 = (0x444 + a4);
        t3 = (t3 + 0x24);
        t2 = (*(signed char *)((t5 + 0xC)));
        t3 = (t3 + (a5 * 0x10E0));
        t4 = (0x444 + a4);
        t3 = (t3 + t6);
        t4 = (t4 + 0x24);
        *(unsigned char *)((t3 + 0x3)) = t2;
        t2 = (*(int *)((t5 + 0x10)));
        t4 = (t4 + (a5 * 0x10E0));
        t4 = (t4 + t6);
        t6 = (t6 + 0x90);
        *(unsigned char *)((t4 + 0x4)) = t2;
        t8 = (t8 + 0x3C);
        t7 = (t7 + 0x1);
    }
    return t2;
}

int FUN_0c037646(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t11;
    register int t52;
    register int t3;
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register int t14;
    register int t53;
    register int t55;
    register int t56;
    register int t57;
    register int t62;
    register int t64;
    register int t65;
    register int t66;
    register int t67;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 0) + 0x28);
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 0) + 0x2C);
    t7 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 32)) = (t7 * 0x10E0);
    *(unsigned int *)(((int)stk + 0)) = (t7 << 2);
    *(unsigned int *)(((int)stk + 4)) = (t7 * 0x2D0);
    t6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = t6;
    t4 = (t7 << 2);
    t5 = (t7 * 0x2D0);
    t8 = a6;
    t11 = 0x1;
    for (;;) {
        if ((int)t11 < (int)0x5) {
            t5 = t11;
            t5 = (t5 << 2);
            t6 = (*(int *)(((int)stk + 20)));
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t6 = (t6 + 0x10);
            t6 = (t6 + t5);
            t3 = t11;
            t12 = (*(int *)((t6 + 0x18)));
            switch (t3) {
            case 1:
                t5 = (*(int *)(((int)stk + 32)));
                t4 = (t0 + 0x444);
                t4 = (t4 + 0x4);
                *(unsigned int *)(((int)stk + 36)) = (((t0 + 0x444) + 0x24) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            case 2:
                t4 = (t0 + 0x444);
                t5 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0xC);
                *(unsigned int *)(((int)stk + 36)) = ((0x21E4 + (t0 + 0x444)) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            case 3:
                t4 = (t0 + 0x444);
                t5 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0x14);
                *(unsigned int *)(((int)stk + 36)) = ((0x2784 + (t0 + 0x444)) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            case 4:
                t4 = (t0 + 0x444);
                t5 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0x1C);
                *(unsigned int *)(((int)stk + 36)) = ((0x2D24 + (t0 + 0x444)) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            }
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            t10 = (*(int *)((t6 + 0x1C)));
            t9 = (*(int *)(((int)stk + 36)));
            if ((int)t12 > 0) {
                for (;;) {
                    t14 = t10;
                    t13 = t9;
                    *(unsigned int *)((t13 + 0x8)) = (*(int *)((t14 + 0x0)));
                    t7 = (t0 + 0x444);
                    t5 = (*(int *)((t14 + 0x4)));
                    *(unsigned int *)((t13 + 0xC)) = t5;
                    *(unsigned int *)((t13 + 0x10)) = (*(int *)((t14 + 0x8)));
                    t5 = (*(int *)(((int)stk + 24)));
                    *(unsigned int *)((t5 + 0x0)) = (*(int *)((t14 + 0xC)));
                    t5 = (*(int *)(((int)stk + 28)));
                    *(unsigned int *)((t5 + 0x0)) = (*(int *)((t14 + 0x10)));
                    t8 = (*(int *)(((int)stk + 8)));
                    t6 = (*(int *)(((int)stk + 12)));
                    t3 = (FUN_0c037518(t6, t7, t8, (((int)stk + 0) + 0x28)));
                    t4 = 0x68;
                    t4 = (t4 + t13);
                    t5 = 0xC187798;
                    *(unsigned int *)((t4 + 0x0)) = t3;
                    t4 = t13;
                    t4 = (t4 + 0x6C);
                    t3 = 0xC;
                    t3 = (FUN_0c187798());
                    t4 = t13;
                    t4 = (t4 + 0x78);
                    t3 = 0xC;
                    t3 = (FUN_0c187798());
                    t52 = *(int *)(((int)stk + 16));
                    t10 = (t10 + 0x3C);
                    t5 = 0x90;
                    *(unsigned int *)(((int)stk + 16)) = (t52 + 0x1);
                    t9 = (t9 + t5);
                    if ((int)(t52 + 0x1) >= (int)t12) {
                        break;
                    }
                }
            } else {
                t53 = t4;
                t55 = t6;
                t56 = t7;
                t57 = t8;
            }
            t3 = t11;
            t4 = t53;
            t6 = t55;
            t7 = t56;
            t8 = t57;
            if (t3 == 1) {
                t7 = (*(int *)(((int)stk + 8)));
                t8 = (*(int *)(((int)stk + 20)));
                t6 = (*(int *)(((int)stk + 12)));
                t3 = (FUN_0c0375d8(t6, t7, t8));
            } else {
                t62 = t4;
                t64 = t5;
                t65 = t6;
                t66 = t7;
                t67 = t8;
            }
            t4 = t62;
            t11 = (t11 + 0x1);
            t5 = t64;
            t6 = t65;
            t7 = t66;
            t8 = t67;
            continue;
        }
        break;
    }
    return 0x0;
}

int FUN_0c0377b2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = (t0 + a4);
    t1 = (t0 + a4);
    t0 = a5;
    t2 = a6;
    t3 = a7;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t0 = t4;
        t0 = (t0 << 2);
        t1 = a4;
        t0 = (t0 << 2);
        t1 = (t1 + 0x10);
        t0 = (t0 << 1);
        t0 = (t0 + t1);
        *(unsigned int *)((t0 + 0x1C)) = ((*(int *)((t0 + 0x1C))) + a4);
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(int *)((t0 + 0x18)))) {
                break;
            }
            t2 = (t3 * 0x3C);
            t1 = (*(int *)((((*(int *)((t0 + 0x1C))) + t2) + 0x0)));
            if (t1 != 0) {
                t5 = (*(int *)((t0 + 0x1C)));
                t5 = (t5 + t2);
                t1 = (*(int *)((t5 + 0x0)));
                t1 = (t1 + a4);
                *(unsigned int *)((t5 + 0x0)) = t1;
            }
            t1 = (*(int *)((((*(int *)((t0 + 0x1C))) + t2) + 0x4)));
            if (t1 != 0) {
                t5 = (*(int *)((t0 + 0x1C)));
                t5 = (t5 + t2);
                t1 = (*(int *)((t5 + 0x4)));
                t1 = (t1 + a4);
                *(unsigned int *)((t5 + 0x4)) = t1;
            }
            t1 = (*(int *)((((*(int *)((t0 + 0x1C))) + t2) + 0x8)));
            t3 = (t3 + 0x1);
            if (t1 != 0) {
                t5 = (*(int *)((t0 + 0x1C)));
                t5 = (t5 + t2);
                t1 = (*(int *)((t5 + 0x8)));
                t1 = (t1 + a4);
                *(unsigned int *)((t5 + 0x8)) = t1;
            }
        }
        t4 = (t4 + 0x1);
    }
    return t5;
}
