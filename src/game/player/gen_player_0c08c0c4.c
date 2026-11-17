/* game/player: functions 0C08C0C4-0C08C0E0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08c0c4(int a4, int a5, int a6, int a7);

int FUN_0c08c0c4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08BF94))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08BEC2))(a4, a5, a6, a7);
}
