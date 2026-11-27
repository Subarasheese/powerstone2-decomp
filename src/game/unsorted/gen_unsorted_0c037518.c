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


