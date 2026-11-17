/* game/menu/select: functions 0C147F54-0C147FBA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_float { char p[0x41C]; float v; };
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c147f54(int a4, int a5, int a6, int a7);

int FUN_0c147f54(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t10;
    register int t5;
    register int t6;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        (((struct o41C_float *)(t0))->v) = 1.0f;
        *(unsigned int *)(((0x41C + t0) + 0x4)) = 0x4;
        *(unsigned int *)(((0x41C + t0) + 0x8)) = 0x1C;
        *(unsigned int *)((t0 + 0x4)) = 0xC147EC0;
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 4));
        t5 = ((int (*)(int, int))(FUN_0c187798))(t0, (0x41C + t0));
        *(volatile int *)((t6 + 0xC4));
        *(volatile int *)(((int)stk + 0));
        t10 = (((int (*)(int))(FUN_0c187798))(t6));
    }
    return t10;
}
