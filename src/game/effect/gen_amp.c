/* Straight-line functions with calls and guards (batch gen_amp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187cac(int, int, int, int, int, int, int);
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e438(int a4, int a5, int a6, int a7);

int FUN_0c03e438(int a4, int a5, int a6, int a7)
{
    int stk[68];
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 12)) = a4;
    t1 = (*(signed char *)0xC542B8B);
    *(int *)((int)stk + 8) = t1;
    t3 = (*(signed char *)0xC542B8A);
    *(int *)((int)stk + 4) = t3;
    *(int *)((int)stk + 0) = 0xC1B733C;
    FUN_0c187cac((((int)stk + 0) + 0x10), a5, a6, a7, 0xC1B733C, t3, t1);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x10)));
}
