/* game/unsorted: functions 0C0E6C60-0C0E6DC6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0e6c60(int);
int FUN_0c0e6d4e(int a4, int a5, int a6, int a7);

int FUN_0c0e6d4e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    if ((int)(*(short *)((a4 + 0x1E))) >= (int)(*(int *)((((*(int *)((0xC288114 + (((*(signed char *)((a4 + 0x2))) << 2) << 1)))) + ((((t0 << 1) + t0) << 2) << 1)) + 0x0)))) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t0 = *(signed char *)((a4 + 0x2));
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)(*(int *)(((0xC288114 + ((t0 << 2) << 1)) + 0x4)))) {
            return FUN_0c03f346(a4, 0x0, (0xC288114 + ((t0 << 2) << 1)), a7);
        }
        return FUN_0c0e6c60(a4);
    }
    return FUN_0c0e6c60(a4);
}
