/* game/unsorted: functions 0C0C412C-0C0C43A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c0c412c();
int FUN_0c0c418c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c418c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;

    t0 = ((int (*)(int, int, int, int, float))(FUN_0c0c412c))(((a4 * 0x3938) + 0xC532498), 0x0, a4, a7, f4);
    t1 = ((int (*)(int, int, int, int, int, int))(FUN_0c0c412c))(((a4 * 0x3938) + 0xC532498), 0x1, a4, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    t2 = ((int (*)(int, int, int, int, int, int))(FUN_0c0c412c))(((a4 * 0x3938) + 0xC532498), 0x2, a4, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    return ((int (*)(int, int, int))(FUN_0c0c412c))(((a4 * 0x3938) + 0xC532498), 0x3, a4);
}
