/* game/unsorted: functions 0C0F0974-0C0F09C6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0f0974(int a4, int a5);

int FUN_0c0f0974(int a4, int a5)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x15, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x15, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0F0934;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned char *)((t2 + 0x2)) = a5;
    }
    return t2;
}
