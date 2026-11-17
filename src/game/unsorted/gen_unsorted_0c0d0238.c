/* game/unsorted: functions 0C0D0238-0C0D0258, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0d0238(void);

int FUN_0c0d0238(void)
{
    if ((int)(*(signed char *)0xC540F9A) > 0) {
        *(unsigned char *)0xC540F9A = ((*(signed char *)0xC540F9A) - 1);
        return (*(signed char *)((0xC540F9B + (*(signed char *)0xC540F9A))));
    }
    return 0xFFFFFFFF;
}
