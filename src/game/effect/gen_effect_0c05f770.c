/* game/effect: functions 0C05F770-0C05F78E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05f770(void);

int FUN_0c05f770(void)
{
    register int t1;

    if ((*(signed char *)0xC5429B4) == 1) {
        return 0x0;
    }
    t1 = *(signed char *)0xC3BD447;
    return (((*(int *)0xC46E1A8) & (unsigned char)t1) ^ (unsigned char)t1);
}
