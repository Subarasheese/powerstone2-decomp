/* game/player: functions 0C138C84-0C13A014, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o78_uint { char p[0x78]; unsigned int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c1396c4(int a4, int a5);
int FUN_0c139d06(int a4, int a5, int a6, int a7, int a8);

int FUN_0c1396c4(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t4;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13954C;
        *(volatile int *)(((int)stk + 0));
        t4 = (FUN_0c187798(t0));
    }
    return t4;
}

int FUN_0c139d06(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];
    register int t0;
    register int t12;
    register int t8;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC139718;
        *(unsigned short *)((t0 + 0x1E)) = (*(short *)(((int)stk + 8)));
        (((struct o78_uint *)(((((struct oC8_int *)(t0))->v))))->v) = a8;
        (((struct o78_uint *)(((((struct oCC_int *)(t0))->v))))->v) = a8;
        *(volatile int *)((t0 + 0xD0));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)((t8 + 0xD0));
        *(volatile int *)(((int)stk + 0));
        t12 = (FUN_0c187798(t8));
    }
    return t12;
}
