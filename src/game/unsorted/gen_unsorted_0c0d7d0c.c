/* game/unsorted: functions 0C0D7D0C-0C0D7DFE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d7d0c(int a4, int a5, int a6, int a7);

int FUN_0c0d7d0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                t4 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                if ((short)(t4 - 1) == 0) {
                    return FUN_0c03f346(a4, 0x1, a6, a7);
                }
                return (short)(t4 - 1);
            }
            if (((int)(*(signed char *)0xC54223C) > 0) && ((t0 = *(signed char *)((a4 + 0x2)), (int)t0 >= 0) && (t1 = *(signed char *)((a4 + 0x2)), (int)t1 < (int)0x2))) {
                *(unsigned short *)((a4 + 0x1C)) = 0x384;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = 0x44;
            if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
                t1 = *(signed char *)((a4 + 0x2));
                t4 = t1;
                if ((int)t1 >= (int)0x2) {
                    t1 = *(signed char *)((a4 + 0x2));
                    t4 = t1;
                    if ((int)t1 < (int)0x8) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x1;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    }
                }
                t0 = t4;
            }
            return t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, 0x1, a6);
    *(unsigned int *)((t3 + 0x38)) = (int)(((float)(*(int *)((0xC28764C + ((*(signed char *)((t3 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(t3))->v) = 0x2;
    (((struct oA8_uchar *)(t3))->v) = 0x0;
    t0 = *(signed char *)((t3 + 0x2));
    t1 = 0x708;
    if (((int)t0 >= (int)0x2) && ((int)t0 < (int)0x8)) {
    } else {
        t1 = t2;
        t0 = t2;
    }
    *(unsigned short *)((t3 + 0x1C)) = t1;
    (((struct o14_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x14))) + 0x1);
    t1 = *(short *)((t3 + 0x1C));
    *(unsigned short *)((t3 + 0x1C)) = (t1 - 1);
    t2 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        (((struct oA8_uchar *)(t3))->v) = t0;
        (((struct o14_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}
