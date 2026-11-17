/* game/unsorted: functions 0C1675DC-0C167F6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c1679c2(int a4, int a5, int a6);

int FUN_0c1679c2(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t7;
    register int t14;
    register int t11;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1675F6;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
    }
    t7 = FUN_0c03f444(0x5, 0x0, 0x1);
    t14 = t7;
    if (t7 != 0) {
        *(unsigned char *)((t7 + 0x1)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t7 + 0x4)) = 0xC167764;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t7);
        *(volatile int *)(((int)stk + 8));
        t14 = (FUN_0c187798(t11));
    }
    return t14;
}
