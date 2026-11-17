/* game/unsorted: functions 0C0D0488-0C0D04B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d0488(void);

int FUN_0c0d0488(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((((t0 << 1) + t0) << 2) + 0xC540FA4) + 0x0))) == 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}
