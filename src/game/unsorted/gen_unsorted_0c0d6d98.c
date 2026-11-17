/* game/unsorted: functions 0C0D6D98-0C0D6DEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d6d98(int a4, int a5, int a6, int a7);

int FUN_0c0d6d98(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t1 - 1);
        }
        t1 = t0;
        if ((int)(*(signed char *)0xC54223C) > 0) {
            t0 = 0x384;
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                t0 = 0x21C;
            }
            *(unsigned short *)((a4 + 0x1C)) = t0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    if ((int)(*(signed char *)0xC54223C) > 0) {
        t0 = 0x384;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            t0 = 0x21C;
        }
        *(unsigned short *)((a4 + 0x1C)) = t0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return 0x14;
}
