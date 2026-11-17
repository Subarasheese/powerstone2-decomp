/* game/player: functions 0C0B746C-0C0B748A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0b746c(int a4, int a5, int a6, int a7);

int FUN_0c0b746c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)((a4 + 0x3728));
    t3 = 0x0;
    if (t0 != 0) {
        t3 = 0x1;
        if (t0 != 1) {
            t3 = 0x0;
        }
    }
    return ((int (*)(int, int, int, int))(0xC0B7322))(a4, t3, a6, a7);
}
