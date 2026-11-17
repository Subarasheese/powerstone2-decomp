/* game/unsorted: functions 0C0DADE0-0C0DAF82, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c187798(void);
int FUN_0c0dade0(int a4, int a5);
int FUN_0c0dae5e(int a4, int a5, int a6, int a7);

int FUN_0c0dade0(int a4, int a5)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t1 = FUN_0c037320(0x95, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t9 = t2;
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0DAE5E;
        *(unsigned int *)((t2 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        FUN_0c03733c(t2, 0x95, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t2))->v) = 0x3F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(unsigned int *)((t2 + 0x38)) = 0x0;
        *(unsigned int *)((t2 + 0x3C)) = 0x0;
        *(unsigned int *)((t2 + 0x34)) = 0x0;
        (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
        t9 = 0x40;
    }
    return t9;
}

int FUN_0c0dae5e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1, 0x2, a7);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x4;
            t1 = *(short *)((a4 + 0x1E));
            if (t1 != 0) {
                if (t1 != 1) {
                    if (t1 != 2) {
                        if (t1 != 3) {
                            if (t1 != 4) {
                                if (t1 != 5) {
                                    if (t1 != 6) {
                                        t3 = t1;
                                        if (t1 != 7) {
                                        } else {
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t3 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287D70));
                                        }
                                        t1 = t3;
                                    } else {
                                        *(unsigned short *)((a4 + 0x1E)) = 0x7;
                                        t1 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287D58));
                                    }
                                    t3 = t1;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = 0x6;
                                    t3 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287D40));
                                }
                                t1 = t3;
                            } else {
                                *(unsigned short *)((a4 + 0x1E)) = 0x5;
                                t1 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287D28));
                            }
                            t3 = t1;
                        } else {
                            *(unsigned short *)((a4 + 0x1E)) = 0x4;
                            t3 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287D10));
                        }
                        t1 = t3;
                    } else {
                        *(unsigned short *)((a4 + 0x1E)) = 0x3;
                        t1 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287CF8));
                    }
                    t3 = t1;
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x2;
                    t3 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287CE0));
                }
                t1 = t3;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
                t1 = (FUN_0c0cff96((*(int *)((t0 + 0x8))), 0xC287CC8));
            }
            t2 = t1;
        }
        return t2;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x2;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
