/* game/unsorted: functions 0C148990-0C1489E6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int FUN_0c148990(int a4);

int FUN_0c148990(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x9, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC148862;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct o22_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.400000006f;
        (((struct o44_float *)(t0))->v) = 0.400000006f;
        (((struct o40_float *)(t0))->v) = 0.400000006f;
        return t0;
    }
    return 0x0;
}
