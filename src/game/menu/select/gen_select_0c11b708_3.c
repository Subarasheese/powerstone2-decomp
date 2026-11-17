/* game/menu/select: functions 0C11B708-0C11C088, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int);
int FUN_0c11c036(int a4, int a5);

int FUN_0c11c036(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11BB5E;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        if ((*(int *)(((int)stk + 0))) != 0) {
            t7 = (FUN_0c187798(t0, 0xC292178));
        } else {
            t7 = (FUN_0c187798(t0, 0xC292178));
        }
    }
    return t7;
}
