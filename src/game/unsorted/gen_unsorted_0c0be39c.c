/* game/unsorted: functions 0C0BE39C-0C0BE3B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0be39c(void);

int FUN_0c0be39c(void)
{
    register int t1;

    t1 = *(signed char *)0xC54222D;
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = t1;
    return t1;
}
