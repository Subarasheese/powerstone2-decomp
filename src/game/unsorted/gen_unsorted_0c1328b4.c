/* game/unsorted: functions 0C1328B4-0C13296C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3818_short { char p[0x3818]; short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c1328b4(int a4, int a5);

int FUN_0c1328b4(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
    t2 = t1;
    if (t1 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o14_uchar *)(t1))->v) = 0x0;
        (((struct o15_uchar *)(t1))->v) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x0;
        *(unsigned short *)((t1 + 0x1E)) = a5;
        (((struct o20_ushort *)(t1))->v) = (*(signed char *)((a4 + 0x3753)));
        (((struct o22_ushort *)(t1))->v) = ((((struct o3818_short *)(a4))->v));
        t3 = ((int (*)(int, int))(FUN_0c187798))(0x1, 0x0);
        t3 = ((int (*)(void))(FUN_0c187798))();
        t3 = ((int (*)(void))(FUN_0c187798))();
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct oA4_uint *)(t1))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        *(unsigned int *)((t1 + 0x4)) = 0xC132880;
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = t2;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = t2;
    }
    return t2;
}
