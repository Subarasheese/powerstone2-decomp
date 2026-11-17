/* game/unsorted: functions 0C0F25D8-0C0F261C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0f25d8(int a4);

int FUN_0c0f25d8(int a4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        t3 = t2;
        if (t2 == 1) {
            t2 = *(signed char *)((a4 + 0x125));
            t3 = t2;
            if ((t2 == 16) && (t0 = *(signed char *)0xC54223C, (int)t0 > 0)) {
                (((struct o125_uchar *)(a4))->v) = 0x11;
                (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
                t3 = 0x12E;
            }
        }
        t0 = t3;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t2 = *(signed char *)((a4 + 0x125));
        t3 = t2;
        if ((t2 == 16) && (t1 = *(signed char *)0xC54223C, (int)t1 > 0)) {
            (((struct o125_uchar *)(a4))->v) = 0x11;
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
            t3 = 0x12E;
        }
        t0 = t3;
    }
    return t0;
}
