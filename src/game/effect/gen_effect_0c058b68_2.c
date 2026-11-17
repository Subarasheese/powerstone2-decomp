/* game/effect: functions 0C058B68-0C059C54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c0593ee(int, int, int, int, int, int, int, int);
int FUN_0c05950c(void);

int FUN_0c05950c(void)
{
    int stk[2];
    register int t0;

    t0 = FUN_0c03f444(0x7, 0x0, 0x3);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0593EE;
        FUN_0c0593ee(t0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
    }
    return t0;
}
