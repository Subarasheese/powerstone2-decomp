/* game/unsorted: functions 0C0D02F0-0C0D0478, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d02f0(void);
int FUN_0c0d0378(int a4, int a5);

int FUN_0c0d0378(int a4, int a5)
{
    register int t0;

    if ((int)a4 <= (int)a5) {
        t0 = a4;
        for (;;) {
            *(unsigned int *)(((((*(int *)0xC540F94) << 2) + 0xC540F18) + 0x0)) = t0;
            t0 = (t0 + 0x1);
            *(unsigned int *)0xC540F94 = ((*(int *)0xC540F94) + 0x1);
            if ((int)t0 > (int)a5) {
                break;
            }
        }
    }
    return FUN_0c0d02f0();
}
