/* game/unsorted: functions 0C0BDF98-0C0BDFD0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0bbe96(int);
int FUN_0c0bdf98(int a4);
int FUN_0c0bdfae(int a4);

int FUN_0c0bdf98(int a4)
{
    *(unsigned short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471AEE)) = (*(signed char *)((a4 + 0x371A)));
    return 0xC471AEE;
}

int FUN_0c0bdfae(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC472462;
    t1 = FUN_0c0bbe96(a4);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = t1;
    return t1;
}
