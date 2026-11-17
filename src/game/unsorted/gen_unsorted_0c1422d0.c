/* game/unsorted: functions 0C1422D0-0C142400, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1422d0(int a4, int a5);
int FUN_0c142366(int a4, int a5, int a6, int a7);

int FUN_0c1422d0(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        (((struct o48_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 0.0f;
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct oA4_uint *)(t1))->v) = ((*(int *)(((((*(int *)(((a5 << 2) + 0xC202494))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        *(unsigned int *)((t1 + 0x4)) = 0xC142366;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t1 + 0x2)) = a5;
        t0 = a5;
    }
    return t0;
}

int FUN_0c142366(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0500000007f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0500000007f);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.25f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return 0xB4;
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.25f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.25f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.25f);
    t0 = 0x40;
    if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
