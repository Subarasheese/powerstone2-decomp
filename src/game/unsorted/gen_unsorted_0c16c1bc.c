/* game/unsorted: functions 0C16C1BC-0C16C204, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c16c1bc(int a4, int a5, int a6, int a7);

int FUN_0c16c1bc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16C0C6;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t0);
        *(unsigned char *)((t5 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}
