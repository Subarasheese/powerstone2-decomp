/* game/demo: functions 0C04EA10-0C04F098, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04eaa4(int, int, int, int);
int FUN_0c04efc8(int a4, int a5, int a6, int a7);

int FUN_0c04efc8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                } else {
                    if ((*(int *)(((((*(int *)0xC40F830) << 2) << 1) + 0xC240DC0))) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    } else {
                        t2 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                        t1 = (short)(t2 - 1);
                        if ((short)(t2 - 1) == 0) {
                            t2 = *(int *)0xC40F830;
                            *(unsigned int *)0xC40F830 = (t2 + 0x1);
                            FUN_0c04eaa4(a4, ((t2 + 0x1) - 1), a6, a7);
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            t1 = 0x15;
                        }
                    }
                    t0 = t1;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        *(unsigned int *)0xC40F830 = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
