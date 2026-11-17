/* game/player: functions 0C072C34-0C072C60, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c072c34(int a4);

int FUN_0c072c34(int a4)
{
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1C, 0xFFFFFFFF, 0x2, 0x1C));
}
