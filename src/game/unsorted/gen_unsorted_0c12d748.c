/* game/unsorted: functions 0C12D748-0C12D83A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12d748(int a4);
int FUN_0c12d7f6(int a4, int a5, int a6, int a7);

int FUN_0c12d748(int a4)
{
    int stk[1];
    register int t0;
    register int t12;
    register int t4;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t12 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12D7F6;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t4 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 0)) = t4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 0))), 0x0, (*(int *)((((signed char)t4 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x41F;
        (((struct o14_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1E)) = 0xA;
        t12 = 0xA;
    }
    return t12;
}

int FUN_0c12d7f6(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(short *)((a4 + 0x1E));
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
        if (!(((float)t0 / 10.0f) > 0.0f)) {
            (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        return (t0 - 1);
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
