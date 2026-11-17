/* game/player: functions 0C0879C4-0C087B80, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c087a42(int);
int FUN_0c087ae8(int);
int FUN_0c087b64(int a4);

int FUN_0c087b64(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c087ae8(a4);
    }
    return FUN_0c087a42(a4);
}
