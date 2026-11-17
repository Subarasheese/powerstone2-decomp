/* game/unsorted: functions 0C15D31C-0C15D46A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c15d31c(int a4, int a5, int a6, int a7);
int FUN_0c15d386(int a4, int a5, int a6, int a7, int a8);

int FUN_0c15d31c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
    }
    if ((int)(*(short *)((a4 + 0x1C))) >= 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x5;
        t0 = (((struct oC8_int *)(a4))->v);
        t2 = *(signed char *)((t0 + 0x0));
        *(unsigned char *)((t0 + 0x0)) = (t2 ^ 0x1);
        t1 = (t2 ^ 0x1);
    }
    return t1;
}

int FUN_0c15d386(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];
    register int t0;
    register int t22;
    register int t4;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t22 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15D31C;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(volatile int *)(((int)stk + 12));
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        t4 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))), t4, (*(int *)((((*(signed char *)((t0 + 0x2))) << 2) + 0xC20373C))), (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + (t4 << 2)) + 0x0))) + 0x6)) = 0xF;
            *(volatile int *)((((0xC4 + t0) + (t4 << 2)) + 0x0));
            FUN_0c187798();
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x2) {
                break;
            }
        }
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798();
        *(volatile int *)((t0 + 0xC8));
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798();
        *(unsigned short *)((t0 + 0x1C)) = a8;
        t22 = a8;
    }
    return t22;
}
