/* game/unsorted: functions 0C02654C-0C026596, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c186740(int, int, int);
int FUN_0c02654c(void);

int FUN_0c02654c(void)
{
    int stk[33];
    register int t4;

    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x6;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x9;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x4)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x5)) = (*(signed char *)0xC305420);
    t4 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    return t4;
}
