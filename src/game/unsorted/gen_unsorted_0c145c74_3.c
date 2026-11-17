/* game/unsorted: functions 0C145C74-0C147656, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_float { char p[0x41C]; float v; };
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c14607c(int a4, int a5, int a6, int a7);
int FUN_0c1463b8(int a4, int a5, int a6, int a7);
int FUN_0c14672c(int a4, int a5, int a6);
int FUN_0c1468e8(int a4, int a5, int a6);
int FUN_0c146b30(int a4, int a5, int a6, int a7);
int FUN_0c146fa2(int a4, int a5);
int FUN_0c1470ea(int a4, int a5, int a6, float f4);

int FUN_0c14607c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC145F1A;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}

int FUN_0c1463b8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x10);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1460CC;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}

int FUN_0c14672c(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1464CE;
        *(volatile int *)(((int)stk + 0));
        t5 = (FUN_0c187798(t0));
    }
    return t5;
}

int FUN_0c1468e8(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t5;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14676E;
        *(volatile int *)(((int)stk + 0));
        t5 = (FUN_0c187798(t0));
    }
    return t5;
}

int FUN_0c146b30(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t7;
    register int t6;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC14692A;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        t7 = *(int *)(((int)stk + 0));
        *(unsigned short *)((t6 + 0x1E)) = t7;
    }
    return t7;
}

int FUN_0c146fa2(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC146B78;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c1470ea(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t0;
    register int t7;
    register int t6;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(float *)(((int)stk + 0)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC146FDA;
        *(volatile int *)(((int)stk + 8));
        t7 = FUN_0c187798(t0);
        (((struct o41C_float *)(t6))->v) = (*(float *)(((int)stk + 0)));
    }
    return t7;
}
