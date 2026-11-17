/* game/unsorted: functions 0C0D7714-0C0D77F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d7714(int a4, int a5, int a6, int a7);

int FUN_0c0d7714(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                if ((short)(t3 - 1) == 0) {
                    return FUN_0c03f346(a4, 0x1, a6, a7);
                }
                return (short)(t3 - 1);
            }
            if (((int)(*(signed char *)0xC54223C) > 0) && (t0 = *(signed char *)((a4 + 0x2)), (int)t0 < (int)0x3)) {
                *(unsigned short *)((a4 + 0x1C)) = 0x384;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = 0x44;
            if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
                t3 = *(signed char *)((a4 + 0x2));
                t0 = t3;
                if ((int)t3 < (int)0xF) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t3 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t3 = 0x14;
        }
        return t3;
    }
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, 0x1, a6);
    *(unsigned int *)((t2 + 0x38)) = (int)(((float)(*(int *)((0xC287430 + ((*(signed char *)((t2 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(t2))->v) = 0x2;
    t0 = *(signed char *)((t2 + 0x2));
    t3 = 0x708;
    if (((int)t0 < (int)0x7) || ((int)t0 >= (int)0xF)) {
        t3 = t1;
        t0 = t1;
    }
    *(unsigned short *)((t2 + 0x1C)) = t3;
    (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
    t1 = *(short *)((t2 + 0x1C));
    *(unsigned short *)((t2 + 0x1C)) = (t1 - 1);
    t3 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        (((struct oA8_uchar *)(t2))->v) = t0;
        (((struct o14_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x14))) + 0x1);
        t3 = 0x14;
    }
    return t3;
}
