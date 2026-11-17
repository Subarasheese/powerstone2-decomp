/* game/player: functions 0C09B92C-0C09B958, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c059ef6(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c09b92c(int a4);

int FUN_0c09b92c(int a4)
{
    int stk[4];

    *(int *)((int)stk + 12) = a4;
    *(int *)((int)stk + 8) = 0x3;
    *(int *)((int)stk + 4) = 0x2;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x3, 0xFFFFFFFF, 0x2, 0x3);
    return FUN_0c059ef6((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x1))), 0x1);
}
