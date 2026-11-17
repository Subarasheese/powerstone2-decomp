/* game/player: functions 0C138C30-0C138C58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c138c30(int a4);

int FUN_0c138c30(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t2 = t0;
    if (t0 != 0) {
        t2 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((t0 + 0x1)) = t2;
        *(unsigned int *)((t0 + 0x4)) = 0xC138A94;
    }
    return t2;
}
