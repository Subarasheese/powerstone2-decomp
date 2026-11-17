/* game/unsorted: functions 0C1377A8-0C137EEC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c1377a8(int a4, int a5, int a6, int a7);
int FUN_0c137a9a(int a4, int a5);
int FUN_0c137c7c(int a4, int a5);

int FUN_0c1377a8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t11;
    register int t4;
    register int t7;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137414;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t4);
        *(volatile int *)((t7 + 0xD0));
        *(volatile int *)(((int)stk + 0));
        t11 = (FUN_0c187798(t7));
    }
    return t11;
}

int FUN_0c137a9a(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1377FE;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c137c7c(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137AD2;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}
