/* game/sound: functions 0C05A40C-0C05A418, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void FUN_0c05a40c(int a4);
int FUN_0c05a412(void);

void FUN_0c05a40c(int a4)
{
    *(unsigned int *)0xC46E1A4 = a4;
}

int FUN_0c05a412(void)
{
    return (*(int *)0xC46E1A4);
}
