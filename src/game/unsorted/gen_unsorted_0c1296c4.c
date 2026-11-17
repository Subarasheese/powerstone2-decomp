/* game/unsorted: functions 0C1296C4-0C129754, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1296c4(int a4);

int FUN_0c1296c4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x11, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC129754;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x11, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o68_uint *)(((((struct oC4_int *)(t1))->v))))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        (((struct o68_uint *)(((((struct oC8_int *)(t1))->v))))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
        *(unsigned char *)((((((struct oCC_int *)(t1))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(t1))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(t1))->v)) + 0x0)) = 0x0;
        t0 = 0xD4;
    }
    return t0;
}
