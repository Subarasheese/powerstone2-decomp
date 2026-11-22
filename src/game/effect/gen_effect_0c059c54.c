/* game/effect: functions 0C059C54-0C059CA0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05a560(int, int, int, int);
int FUN_0c05ae28(int);
int FUN_0c05ae6c(int, int);
int FUN_0c059c54(int a4);
int FUN_0c059c62(int a4, int a5);
int FUN_0c059c7a(int a4, int a5);

int FUN_0c059c54(int a4)
{
    return FUN_0c05ae28((*(int *)(((a4 << 2) + 0xC1C23D8))));
}

int FUN_0c059c62(int a4, int a5)
{
    int stk[1];

    *(unsigned int *)(((int)stk + 0)) = a4;
    return (FUN_0c05a560(0x1, a5, ((int)stk + 0), 0x1));
}

