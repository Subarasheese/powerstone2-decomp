/* Straight-line functions with calls and guards (batch gen_ahn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c187cac(int, int, int, int, int, int, int);
int syCfgGetIndividualID(int);
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e096(int a4, int a5, int a6);

int FUN_0c03e096(int a4, int a5, int a6)
{
    int stk[74];
    register int t5;
    register int t6;

    *(unsigned int *)(((int)stk + 28)) = a4;
    syCfgGetIndividualID((0x104 + ((int)stk + 28)));
    *(int *)((int)stk + 24) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x5)));
    *(int *)((int)stk + 20) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x4)));
    *(int *)((int)stk + 16) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x3)));
    *(int *)((int)stk + 12) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x2)));
    t5 = *(signed char *)(((0x104 + ((int)stk + 28)) + 0x1));
    *(int *)((int)stk + 8) = (unsigned char)t5;
    t6 = *(signed char *)(((0x104 + ((int)stk + 28)) + 0x0));
    *(int *)((int)stk + 4) = (unsigned char)t6;
    *(int *)((int)stk + 0) = 0xC1B729C;
    FUN_0c187cac((((int)stk + 0) + 0x20), 0x0, 0x0, 0x0, 0xC1B729C, (unsigned char)t6, (unsigned char)t5);
    return (thunk_FUN_0c03e08c((*(int *)(((int)stk + 28))), (((int)stk + 0) + 0x20)));
}
