/* game/unsorted: functions 0C0AB444-0C0AB476, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c059ef6(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0ab444(int a4);

int FUN_0c0ab444(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}
