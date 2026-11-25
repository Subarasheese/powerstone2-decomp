/* Straight-line functions with calls and guards (batch gen_amq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187cac(int, int, int, int, int, int, int);
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e2d2(int a4, int a5, int a6, int a7);

int FUN_0c03e2d2(int a4, int a5, int a6, int a7)
{
    int stk[71];
    register int t1;
    register int t5;
    register int t7;
    register int t10;

    *(unsigned int *)(((int)stk + 16)) = a4;
    t1 = (int)((unsigned int)(*(int *)0xC542B84) / (unsigned int)0x3C);
    *(unsigned int *)(((int)stk + 24)) = t1;
    *(int *)((int)stk + 12) = (((int)((unsigned int)t1 % (unsigned int)0x3C)));
    t5 = (int)((unsigned int)(*(int *)(((int)stk + 24))) / (unsigned int)0x3C);
    *(unsigned int *)(((int)stk + 20)) = t5;
    t7 = ((int)((unsigned int)t5 % (unsigned int)0x3C));
    *(int *)((int)stk + 8) = t7;
    t10 = ((int)((unsigned int)(*(int *)(((int)stk + 20))) / (unsigned int)0x3C));
    *(int *)((int)stk + 4) = t10;
    *(int *)((int)stk + 0) = 0xC1B7304;
    FUN_0c187cac((((int)stk + 0) + 0x1C), a5, a6, a7, 0xC1B7304, t10, t7);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 16))), (((int)stk + 0) + 0x1C)));
}
