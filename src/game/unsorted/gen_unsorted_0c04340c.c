/* game/unsorted: functions 0C04340C-0C04343E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c04340c(void);

int FUN_0c04340c(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5429B4;
    t1 = 0x1;
    if (t0 != 0) {
        t1 = 0x0;
        if (t0 != 1) {
            t1 = 0x1;
        }
    }
    t0 = t1;
    if ((*(signed char *)0xC542361) != 0) {
        t0 = 0x0;
    }
    return t0;
}
