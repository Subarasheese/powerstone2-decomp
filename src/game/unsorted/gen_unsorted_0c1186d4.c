/* game/unsorted: functions 0C1186D4-0C118708, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c1186d4(int a4);

int FUN_0c1186d4(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1185B8;
        *(unsigned char *)((t0 + 0x2)) = a4;
        return t0;
    }
    return 0x0;
}
