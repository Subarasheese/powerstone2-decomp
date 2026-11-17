/* game/sound: functions 0C05A06C-0C05A080, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05aad0(int a4, int a5, int a6);
int FUN_0c05a06c(int a4);

int FUN_0c05a06c(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c05aad0(((*(signed char *)(((int)stk + 0))) + 0x80), 0x0, 0x0);
}
