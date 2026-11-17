/* game/unsorted: functions 0C112910-0C11294C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c112910(int a4, int a5);

int FUN_0c112910(int a4, int a5)
{
    int stk[2];
    register int t0;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1126DE;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o22_ushort *)(t0))->v) = (*(int *)(((int)stk + 0)));
        return t0;
    }
    return 0x0;
}
