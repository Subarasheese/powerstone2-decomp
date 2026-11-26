/* Straight-line functions with calls and guards (batch gen_ajq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c04bcaa(int a4);

int FUN_0c04bcaa(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register float u4;
    register int t5;
    register int t6;
    register float u9;
    register int t11;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = nlRand();
    t1 = (t0 % 0x20);
    u4 = -1000.0f;
    u4 = u4 + 2000.0f * (((float)t1 / 32.0f));
    *(float *)(((int)stk + 4)) = u4;
    *(float *)(((int)stk + 8)) = 0.0f;
    t5 = nlRand();
    t6 = (t5 % 0x20);
    u9 = -1000.0f;
    u9 = u9 + 2000.0f * (((float)t6 / 32.0f));
    *(float *)(((int)stk + 12)) = u9;
    t11 = 0x41;
    if ((*(int *)(((int)stk + 0))) == 0) {
        t11 = 0x40;
    }
    return (thunk_FUN_0c05abb2(t11, (((int)stk + 0) + 0x4)));
}
