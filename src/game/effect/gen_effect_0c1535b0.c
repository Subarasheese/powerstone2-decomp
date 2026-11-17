/* game/effect: functions 0C1535B0-0C153622, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c1535b0(int a4, int a5);
int FUN_0c15360e(int a4);

int FUN_0c1535b0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t10;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(int *)(((int)stk + 4))), 0x26, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC153178;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(volatile int *)(((int)stk + 0));
        t10 = FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x38)));
    }
    return t10;
}

int FUN_0c15360e(int a4)
{
    FUN_0c1535b0(0x0, a4);
    return FUN_0c1535b0(0x1, a4);
}
