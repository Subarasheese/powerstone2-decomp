/* game/effect: functions 0C13303C-0C13371E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c187798(void);
int FUN_0c133644(int a4, int a5);

int FUN_0c133644(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t13;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1333CC;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 0.100000001f;
        (((struct o44_float *)(t0))->v) = 0.100000001f;
        (((struct o40_float *)(t0))->v) = 0.100000001f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t13 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t13));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x33, 0x0, 0x100, (~((int)0x1 << (int)t13)), 0x0, 0xF0);
        return FUN_0c07e2f4(t0, 0x62);
    }
    return t0;
}
