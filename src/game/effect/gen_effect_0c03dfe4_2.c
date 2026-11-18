/* game/effect: functions 0C03DFE4-0C03E5AE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int thunk_FUN_0c03e08c(void);
int FUN_0c187cac(int, int, int, int, int);
int syCfgGetIndividualID(int, int, int);
int FUN_0c03e096(int a4, int a5, int a6);
int FUN_0c03e238(int a4, int a5, int a6, int a7);
int FUN_0c03e2a4(int a4, int a5, int a6, int a7);
int FUN_0c03e2d2(int a4, int a5, int a6, int a7);
int FUN_0c03e364(int a4, int a5, int a6, int a7);
int FUN_0c03e3ce(int a4, int a5, int a6, int a7);
int FUN_0c03e438(int a4, int a5, int a6, int a7);
int FUN_0c03e46a(int a4, int a5, int a6, int a7);
int FUN_0c03e4cc(int a4, int a5, int a6, int a7);


int FUN_0c03e238(int a4, int a5, int a6, int a7)
{
    int stk[67];
    register int t0;

    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 8) = (((int)(*(int *)0xC542A10) << (int)(-t0)) & 0x1);
        *(int *)((int)stk + 4) = (t0);
        *(int *)((int)stk + 0) = 0xC1B72E8;
        FUN_0c187cac(((int)stk + 12), a5, a6, a7, 0xC1B72E8);
        thunk_FUN_0c03e08c();
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    *(int *)((int)stk + 8) = 0xC1B72E4;
    FUN_0c187cac(((int)stk + 12), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c());
}



int FUN_0c03e364(int a4, int a5, int a6, int a7)
{
    int stk[67];
    register int t0;

    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 8) = (unsigned char)(*(signed char *)(((0xC542FA0 + t0) + 0x0)));
        *(int *)((int)stk + 4) = (t0);
        *(int *)((int)stk + 0) = 0xC1B731C;
        FUN_0c187cac(((int)stk + 12), a5, a6, a7, 0xC1B731C);
        thunk_FUN_0c03e08c();
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    *(int *)((int)stk + 8) = 0xC1B72E4;
    FUN_0c187cac(((int)stk + 12), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c());
}

int FUN_0c03e3ce(int a4, int a5, int a6, int a7)
{
    int stk[67];
    register int t0;

    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 8) = (unsigned char)(*(signed char *)(((0xC542F9C + t0) + 0x0)));
        *(int *)((int)stk + 4) = (t0);
        *(int *)((int)stk + 0) = 0xC1B732C;
        FUN_0c187cac(((int)stk + 12), a5, a6, a7, 0xC1B732C);
        thunk_FUN_0c03e08c();
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    *(int *)((int)stk + 8) = 0xC1B72E4;
    FUN_0c187cac(((int)stk + 12), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c());
}



int FUN_0c03e4cc(int a4, int a5, int a6, int a7)
{
    int stk[67];
    register int t0;

    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 8) = (unsigned char)(*(signed char *)(((0xC542A14 + t0) + 0x0)));
        *(int *)((int)stk + 4) = (t0);
        *(int *)((int)stk + 0) = 0xC1B735C;
        FUN_0c187cac(((int)stk + 12), a5, a6, a7, 0xC1B735C);
        thunk_FUN_0c03e08c();
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xC0) {
            break;
        }
    }
    *(int *)((int)stk + 8) = 0xC1B72E4;
    FUN_0c187cac(((int)stk + 12), 0x0, 0x0, 0x0, 0xC1B72E4);
    return (thunk_FUN_0c03e08c());
}
