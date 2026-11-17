/* game/unsorted: functions 0C03733C-0C037492, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187798(int, int);
int FUN_0c0373ee(int a4, int a5, int a6);

int FUN_0c0373ee(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t2 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x18));
    t3 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x1C));
    if ((int)t2 > 0) {
        t4 = 0x0;
        t5 = t3;
        t3 = 0x0;
        for (;;) {
            *(volatile int *)((((0xC4 + a4) + t4) + 0x0));
            t6 = ((int (*)(int, int, int))(FUN_0c187798))(a4, t4, t5);
            t6 = ((int (*)(void))(FUN_0c187798))();
            t3 = (t3 + 0x1);
            t5 = (t0 + 0x3C);
            t4 = (t1 + 0x4);
            if ((int)t3 >= (int)t2) {
                break;
            }
        }
    }
    return 0x0;
}
