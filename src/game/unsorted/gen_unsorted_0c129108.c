/* game/unsorted: functions 0C129108-0C129178, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c129108(int a4);

int FUN_0c129108(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0xE, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC129178;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0xF, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((a4 + 0x38)));
        t0 = (FUN_0c187798());
    }
    return t0;
}
