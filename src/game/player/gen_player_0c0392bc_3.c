/* game/player: functions 0C0392BC-0C03A56E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187798(int, int, int);
int FUN_0c039df8(int a4);

int FUN_0c039df8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = *(signed char *)(((0x371A + a4) + 0x0));
    t3 = *(int *)((((t2 << 2) + (0xC3C7DD8 + ((t1 << 2) << 1))) + 0x0));
    t4 = *(signed char *)((a4 + 0x2));
    t5 = *(int *)0xC1B71E4;
    t6 = *(signed char *)((((0xC3C7DF8 + (t1 << 1)) + t2) + 0x0));
    t7 = t4;
    if ((int)t4 < (int)t5) {
        t8 = t4;
        t4 = 0xC1B71E4;
        t9 = t5;
        t5 = t1;
        t1 = t2;
        t2 = 0x0;
        t10 = (0x0 + t3);
        for (;;) {
            if ((int)t2 >= (int)t6) {
                break;
            }
            t1 = 0x371A;
            t5 = t10;
            t8 = (*(signed char *)((a4 + 0x1)));
            t1 = (t1 + a4);
            t9 = (*(signed char *)((t5 + 0x0)));
            t1 = (*(signed char *)((t1 + 0x0)));
            t8 = (t8 << 2);
            t8 = (t8 << 1);
            t1 = (t1 << 2);
            t8 = (t8 + 0xC4B40DC);
            t9 = (t9 << 2);
            t1 = (*(int *)((t1 + t8)));
            t9 = (t9 << 2);
            t8 = (*(signed char *)((t5 + 0x1)));
            t1 = (t1 + 0x10);
            t9 = (t9 << 1);
            t1 = (t1 + t9);
            t9 = (*(int *)((t1 + 0x18)));
            if ((int)t8 < (int)t9) {
                t8 = (*(signed char *)((t5 + 0x1)));
                t3 = 0x3C;
                t9 = (*(int *)((t1 + 0x1C)));
                t3 = ((short)t8 * (short)t3);
                t3 = (t3 + t9);
                t3 = (*(int *)((t3 + 0x0)));
                if (t3 != 0) {
                    t1 = 0x0;
                    for (;;) {
                        t4 = (*(int *)((t5 + 0x2C)));
                        if ((int)t1 >= (int)t4) {
                            break;
                        }
                        t8 = (*(int *)((t5 + 0x28)));
                        t3 = *(short *)(((t1 << 1) + t8));
                        t8 = (*(int *)((t5 + 0x34)));
                        t4 = t3;
                        t9 = t3;
                        t4 = (t4 << 1);
                        *(volatile int *)(((t3 << 2) + t8));
                        t4 = (t4 + t9);
                        t8 = (*(int *)((t5 + 0x30)));
                        t9 = 0xC187798;
                        t4 = (t4 << 2);
                        t4 = (t4 + t8);
                        t8 = 0xC;
                        t8 = (FUN_0c187798(a4, t5, t1));
                        t1 = (t0 + 0x1);
                    }
                }
                t10 = (t10 + 0x48);
                t2 = (t2 + 0x1);
                continue;
            }
            return t8;
        }
        t0 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((((*(signed char *)(((0x371A + a4) + 0x0))) + (0xC3C7DF8 + (t0 << 1))) + 0x0)) = 0x0;
        t7 = (t0 << 1);
    }
    return t7;
}
