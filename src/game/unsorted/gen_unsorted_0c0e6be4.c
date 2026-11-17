/* game/unsorted: functions 0C0E6BE4-0C0E6C38, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0e6be4(int a4);

int FUN_0c0e6be4(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x48, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x48, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x40F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct oA4_uint *)(t1))->v) = (a4 + 0x64);
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned int *)((t1 + 0x4)) = 0xC0E6B48;
        t0 = 0xA4;
    }
    return t0;
}
