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

int FUN_0c03e096(int a4, int a5, int a6)
{
    int stk[74];

    *(unsigned int *)(((int)stk + 28)) = a4;
    syCfgGetIndividualID((0x104 + ((int)stk + 28)), a5, a6);
    *(int *)((int)stk + 24) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x5)));
    *(int *)((int)stk + 20) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x4)));
    *(int *)((int)stk + 16) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x3)));
    *(int *)((int)stk + 12) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x2)));
    *(int *)((int)stk + 8) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x1)));
    *(int *)((int)stk + 4) = (unsigned char)(*(signed char *)(((0x104 + ((int)stk + 28)) + 0x0)));
    *(int *)((int)stk + 0) = 0xC1B729C;
    FUN_0c187cac((((int)stk + 0) + 0x20), 0x0, 0x0, 0x0, 0xC1B729C);
    *(volatile int *)(((int)stk + 28));
    return (thunk_FUN_0c03e08c());
}

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

int FUN_0c03e2a4(int a4, int a5, int a6, int a7)
{
    int stk[67];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = (unsigned short)(*(short *)0xC542B88);
    *(int *)((int)stk + 0) = 0xC1B72F8;
    FUN_0c187cac((((int)stk + 0) + 0xC), a5, a6, a7, 0xC1B72F8);
    *(volatile int *)(((int)stk + 8));
    return (thunk_FUN_0c03e08c());
}

int FUN_0c03e2d2(int a4, int a5, int a6, int a7)
{
    int stk[71];
    register int t1;
    register int t5;

    *(unsigned int *)(((int)stk + 16)) = a4;
    t1 = (int)((unsigned int)(*(int *)0xC542B84) / (unsigned int)0x3C);
    *(unsigned int *)(((int)stk + 24)) = t1;
    *(int *)((int)stk + 12) = (((int)((unsigned int)t1 % (unsigned int)0x3C)));
    t5 = (int)((unsigned int)(*(int *)(((int)stk + 24))) / (unsigned int)0x3C);
    *(unsigned int *)(((int)stk + 20)) = t5;
    *(int *)((int)stk + 8) = (((int)((unsigned int)t5 % (unsigned int)0x3C)));
    *(int *)((int)stk + 4) = (((int)((unsigned int)(*(int *)(((int)stk + 20))) / (unsigned int)0x3C)));
    *(int *)((int)stk + 0) = 0xC1B7304;
    FUN_0c187cac((((int)stk + 0) + 0x1C), a5, a6, a7, 0xC1B7304);
    *(volatile int *)(((int)stk + 16));
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

int FUN_0c03e438(int a4, int a5, int a6, int a7)
{
    int stk[68];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(int *)((int)stk + 8) = ((*(signed char *)0xC542B8B));
    *(int *)((int)stk + 4) = ((*(signed char *)0xC542B8A));
    *(int *)((int)stk + 0) = 0xC1B733C;
    FUN_0c187cac((((int)stk + 0) + 0x10), a5, a6, a7, 0xC1B733C);
    *(volatile int *)(((int)stk + 12));
    return (thunk_FUN_0c03e08c());
}

int FUN_0c03e46a(int a4, int a5, int a6, int a7)
{
    int stk[67];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(int *)((int)stk + 4) = ((*(int *)0xC542B80));
    *(int *)((int)stk + 0) = 0xC1B7350;
    FUN_0c187cac((((int)stk + 0) + 0xC), a5, a6, a7, 0xC1B7350);
    *(volatile int *)(((int)stk + 8));
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
