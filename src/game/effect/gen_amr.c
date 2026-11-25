/* Straight-line functions with calls and guards (batch gen_amr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187cac(int, int, int, int, int, int, int);
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e46a(int a4, int a5, int a6, int a7);

/* manual: the call passes both pushed words (the 0C542B80 word, then 0xC1B7350) and the stack word after them (a4); cases, 2 of 2 (22 of 22 instructions) */
int FUN_0c03e46a(int a4, int a5, int a6, int a7)
{
    int stk[67];
    int t3;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t3 = (*(int *)0xC542B80);
    *(int *)((int)stk + 4) = t3;
    *(int *)((int)stk + 0) = 0xC1B7350;
    FUN_0c187cac((((int)stk + 0) + 0xC), a5, a6, a7, 0xC1B7350, t3, a4);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0xC)));
}
