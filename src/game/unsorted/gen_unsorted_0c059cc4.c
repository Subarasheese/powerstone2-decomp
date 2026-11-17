/* game/unsorted: functions 0C059CC4-0C059CE8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05a560(int, int, int, int);
int FUN_0c059cc4(int a4, int a5, int a6);

int FUN_0c059cc4(int a4, int a5, int a6)
{
    int stk[3];

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = a5;
    return (FUN_0c05a560(0x0, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4), 0x2));
}
