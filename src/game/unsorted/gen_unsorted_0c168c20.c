/* game/unsorted: functions 0C168C20-0C169054, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c187798(void);
int FUN_0c168fa8(int a4, int a5, int a6, int a7);

int FUN_0c168fa8(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t16;
    register int t7;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    t0 = 0x5;
    if (a7 != 0) {
        t0 = 0x1;
    }
    t2 = FUN_0c03f444(t0, 0x0, 0x2);
    t16 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t2 + 0x4)) = 0xC168C20;
        *(unsigned char *)((t2 + 0x2)) = (*(int *)(((int)stk + 16)));
        if ((*(signed char *)((t2 + 0x2))) == 1) {
            FUN_0c07e3ae(t2, 0x54);
            t7 = *(int *)(((int)stk + 20));
            *(unsigned int *)(((int)stk + 16)) = (~((int)0x1 << (int)t7));
            *(int *)((int)stk + 12) = 0x0;
            *(int *)((int)stk + 8) = 0x0;
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t7));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t2, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t7)), 0x0, 0x0);
        }
        *(volatile int *)(((int)stk + 28));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 24));
        t16 = (FUN_0c187798());
    }
    return t16;
}
