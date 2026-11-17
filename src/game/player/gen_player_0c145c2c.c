/* game/player: functions 0C145C2C-0C145C52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c145c2c(int a4);

int FUN_0c145c2c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC1459B8;
        t1 = a4;
    }
    return t1;
}
