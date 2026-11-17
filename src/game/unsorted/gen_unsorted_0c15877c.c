/* game/unsorted: functions 0C15877C-0C1587B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c15877c(int a4, int a5);

int FUN_0c15877c(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1585F6;
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 0));
        t5 = (FUN_0c187798(t0));
    }
    return t5;
}
