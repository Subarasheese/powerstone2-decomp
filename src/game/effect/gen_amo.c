/* Straight-line functions with calls and guards (batch gen_amo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187cac(int, int, int, int, int, int);
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e2a4(int a4, int a5, int a6, int a7);

int FUN_0c03e2a4(int a4, int a5, int a6, int a7)
{
    int stk[67];
    register int t0;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(short *)0xC542B88;
    *(int *)((int)stk + 4) = (unsigned short)t0;
    *(int *)((int)stk + 0) = 0xC1B72F8;
    FUN_0c187cac((((int)stk + 0) + 0xC), a5, a6, a7, 0xC1B72F8, (unsigned short)t0);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0xC)));
}
