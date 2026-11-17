/* game/player: functions 0C021EF0-0C021F10, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01c714(int, int, int);
int FUN_0c021ef0(int a4, int a5, int a6);

int FUN_0c021ef0(int a4, int a5, int a6)
{
    *(unsigned int *)0xC305380 = a5;
    FUN_0c01c714(0xC305380, a6, 0x0);
    return (*(int *)0xC305380);
}
