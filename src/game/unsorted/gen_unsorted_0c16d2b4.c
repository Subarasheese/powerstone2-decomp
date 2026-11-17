/* game/unsorted: functions 0C16D2B4-0C16D2D2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c162770(int, int, int, int);
int FUN_0c16d2b4(int a4, int a5, int a6);

int FUN_0c16d2b4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c162770(a4, a5, a6, 0xC2A2FA0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC16D1EC;
        *(unsigned short *)((t0 + 0x1C)) = 0x78;
        t1 = 0x78;
    }
    return t1;
}
