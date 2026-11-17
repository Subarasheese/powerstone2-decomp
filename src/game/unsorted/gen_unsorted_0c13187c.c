/* game/unsorted: functions 0C13187C-0C131928, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c13187c(int a4);

int FUN_0c13187c(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037320(0xC, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0xC, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o14_uchar *)(t2))->v) = 0x0;
        (((struct o15_uchar *)(t2))->v) = 0x0;
        *(unsigned short *)((t2 + 0x1C)) = 0x0;
        *(unsigned short *)((t2 + 0x1E)) = 0x0;
        t3 = ((int (*)(int, int))(FUN_0c187798))(0x0, 0x1);
        t3 = ((int (*)(void))(FUN_0c187798))();
        t3 = ((int (*)(void))(FUN_0c187798))();
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct oA4_uint *)(t2))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        *(unsigned int *)((t2 + 0x4)) = 0xC131798;
        *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = t1;
    }
    return t1;
}
