/* game/unsorted: functions 0C1415E0-0C141684, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c1415e0(int a4, int a5, int a6, int a7);

int FUN_0c1415e0(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t20;
    register int t1;
    register int t2;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t20 = t0;
    if (t0 != 0) {
        t1 = *(int *)(((int)stk + 0));
        t2 = (((struct oC4_int *)(t0))->v);
        t6 = *(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC));
        *(unsigned int *)(((int)stk + 12)) = (((t1 << 2) << 1) + 0xC2022D4);
        FUN_0c03744a(t2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((((t1 << 2) << 1) + 0xC2022D4) + 0x4))), t6);
        (((struct o68_uint *)(t2))->v) = ((*(int *)(((((*(int *)((((*(int *)(((int)stk + 0))) << 2) + 0xC2022E4))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x4001;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC141684;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = (*(short *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x34)) = (*(int *)(((int)stk + 4)));
        t20 = *(signed char *)((a4 + 0x3715));
        *(unsigned short *)((t0 + 0x1E)) = t20;
    }
    return t20;
}
