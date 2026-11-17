/* game/unsorted: functions 0C1609F8-0C160C38, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c1609f8(int a4, int a5, int a6);

int FUN_0c1609f8(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t9;
    register int t6;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16079C;
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(unsigned int *)((t6 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o20_ushort *)(t6))->v) = ((((struct o24_short *)((*(int *)(((int)stk + 0)))))->v));
        t9 = 0x20;
    }
    return t9;
}
