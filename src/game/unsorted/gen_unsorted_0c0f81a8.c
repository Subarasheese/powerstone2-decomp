/* game/unsorted: functions 0C0F81A8-0C0F8270, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0f81a8(int a4, int a5, int a6, int a7);
int FUN_0c0f821a(int a4, int a5);

int FUN_0c0f81a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB0_float *)(a4))->v) = 0.0f;
    }
    u0 = *(float *)0xC0F827C;
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - u0);
            if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return 0xB0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + u0);
    t0 = 0xB0;
    if (!(1.0f > ((((struct oB0_float *)(a4))->v)))) {
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c0f821a(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x40F;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x4)) = 0xC0F81A8;
        t8 = *(short *)(((int)stk + 4));
        *(unsigned short *)((t3 + 0x1C)) = t8;
    }
    return t8;
}
