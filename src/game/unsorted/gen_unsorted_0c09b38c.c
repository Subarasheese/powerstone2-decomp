/* game/unsorted: functions 0C09B38C-0C09B3B6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c09b38c(int a4);

int FUN_0c09b38c(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x9, (t0), 0x1, 0x9));
}
