/* game/menu/select: functions 0C14767C-0C147F54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o41C_float { char p[0x41C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c14767c(int, int, int, int, int, float);
int FUN_0c147e78(int, int);
int FUN_0c187798(int);
int FUN_0c1478b8(int a4, int a5, int a6);
int FUN_0c147ec0(int a4, int a5, int a6, int a7);

int FUN_0c1478b8(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t6;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t6 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1476EC;
        *(volatile int *)((t0 + 0xC4));
        *(volatile int *)(((int)stk + 0));
        t6 = (FUN_0c187798(t0));
    }
    return t6;
}

int FUN_0c147ec0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = (((struct oC4_int *)(a4))->v);
            return (FUN_0c14767c((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x2))), (t0 + 0x6C), (t0 + 0x84), (0x41C + a4), ((((struct o41C_float *)(a4))->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return FUN_0c147e78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x2))));
}
