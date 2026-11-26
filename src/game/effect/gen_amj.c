/* Straight-line functions with calls and guards (batch gen_amj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c187cac();
int thunk_FUN_0c03e08c(int, int);
int FUN_0c03e364(int a4, int a5, int a6, int a7);

int FUN_0c03e364(int a4, int a5, int a6, int a7)
{
    int stk[67];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int R1012;

    R1012 = *(int *)((int)stk + 8);

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t2 = *(signed char *)(((0xC542FA0 + t1) + 0x0));
        R1012 = (unsigned char)t2;
        t3 = t1;
        *(int *)((int)stk + 4) = t3;
        *(int *)((int)stk + 0) = 0xC1B731C;
        t4 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c187cac))(((int)stk + 12), a5, a6, a7, 0xC1B731C, t3, (unsigned char)t2);
        t1 = (t1 + 0x1);
        t0 = (thunk_FUN_0c03e08c(t0, ((int)stk + 12)));
        if ((int)t1 >= (int)0x5) {
            break;
        }
    }
    R1012 = 0xC1B72E4;
    t6 = ((int (*)(int, int, int, int, int))(FUN_0c187cac))(((int)stk + 12), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c(t0, ((int)stk + 12)));
}
