/* game/unsorted: functions 0C0E8718-0C0E8770, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int nlRand(void);
int FUN_0c0e8718(void);

int FUN_0c0e8718(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC4B410C;
    t1 = *(int *)((((0x3 & (nlRand())) << 2) + 0xC1CC13C));
    t2 = FUN_0c037320(t1, t0);
    t0 = FUN_0c03f444(0x5, 0x0, t2);
    t2 = t0;
    if (t0 != 0) {
        FUN_0c03733c(t0, t1, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E8614;
        t2 = 0xFFFFFFFF;
    }
    return t2;
}
