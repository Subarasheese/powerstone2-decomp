/* game/unsorted: functions 0C161578-0C16164A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c161578(int a4, int a5, int a6, int a7);
int FUN_0c1615b6(int a4, int a5, int a6, float f4);

int FUN_0c161578(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
    }
    return FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
}

int FUN_0c1615b6(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register int t2;
    register int t14;
    register float u9;
    register int t12;
    register int t10;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    FUN_0c037320(0x9, (*(int *)0xC4B40CC));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t14 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0x4)) = 0xC161578;
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(volatile int *)(((int)stk + 12));
        FUN_0c187798(t2);
        u9 = *(float *)(((int)stk + 8));
        (((struct o48_float *)(t10))->v) = u9;
        (((struct o44_float *)(t10))->v) = u9;
        (((struct o40_float *)(t10))->v) = u9;
        *(unsigned short *)((t10 + 0x1C)) = 0x4;
        *(unsigned short *)((t10 + 0x1E)) = 0x0;
        t12 = (((struct oC4_int *)(t10))->v);
        FUN_0c03744a(t12, 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t12 + 0x0)) = 0x1;
        *(unsigned short *)((t12 + 0x6)) = 0xF;
        t14 = 0xF;
    }
    return t14;
}
