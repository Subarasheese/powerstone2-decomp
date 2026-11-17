/* game/unsorted: functions 0C147FD0-0C14803C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_float { char p[0x41C]; float v; };
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c147fd0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c147fd0(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t11;
    register int t6;
    register int t7;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned char *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 16)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t11 = t0;
    if (t0 != 0) {
        (((struct o41C_float *)(t0))->v) = (*(float *)(((int)stk + 16)));
        *(unsigned int *)(((0x41C + t0) + 0x4)) = 0x4;
        *(unsigned int *)(((0x41C + t0) + 0x8)) = 0x1C;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC147EC0;
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 4));
        t6 = ((int (*)(int, int))(FUN_0c187798))(t0, (0x41C + t0));
        *(volatile int *)((t7 + 0xC4));
        *(volatile int *)(((int)stk + 0));
        t11 = (((int (*)(int))(FUN_0c187798))(t7));
    }
    return t11;
}
