/* game/unsorted: functions 0C137F0C-0C137F60, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c137f0c(int a4);

int FUN_0c137f0c(int a4)
{
    int stk[5];
    register int t0;
    register int t5;
    register int t3;

    *(unsigned char *)(((int)stk + 16)) = a4;
    t0 = FUN_0c03f444(0x1, 0x0, 0x3);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC137CB4;
        FUN_0c07e2f4(t0, 0x30);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t3 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t3));
        *(int *)((int)stk + 0) = 0x100;
        t5 = (FUN_0c064d24(t0, 0x1, 0x37, 0x0, 0x100, (~((int)0x1 << (int)t3)), 0x0, 0xF0));
    }
    return t5;
}
