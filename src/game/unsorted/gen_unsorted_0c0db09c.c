/* game/unsorted: functions 0C0DB09C-0C0DB16A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0d60de(int);
int FUN_0c0d60f8(int);
int FUN_0c0db09c(int a4, int a5, int a6, int a7);

int FUN_0c0db09c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        if ((*(signed char *)((a4 + 0x2))) == 7) {
                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
                        }
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t2 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            FUN_0c0d60f8((*(signed char *)((a4 + 0x2))));
                            (((struct o14_uchar *)(a4))->v) = 0x1;
                            t2 = 0x14;
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        thunk_FUN_0c05abb2(0x46, 0x0);
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                if ((*(signed char *)((a4 + 0x2))) == 7) {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                }
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = FUN_0c0d60de((*(signed char *)((a4 + 0x2))));
            t2 = t1;
            if (t1 == 0) {
            } else {
                thunk_FUN_0c05abb2(0x46, 0x0);
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = FUN_0c0d60de((*(signed char *)((a4 + 0x2))));
        t2 = t0;
        if (t0 == 0) {
        } else {
            thunk_FUN_0c05abb2(0x46, 0x0);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t1 = t2;
    }
    return t1;
}
