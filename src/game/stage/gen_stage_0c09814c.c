/* game/stage: functions 0C09814C-0C098158, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c09814c(int a4, int a5, int a6, int a7);

int FUN_0c09814c(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC098118))(a4, a5, a6, a7);
}
