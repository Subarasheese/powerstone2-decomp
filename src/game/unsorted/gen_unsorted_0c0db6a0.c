/* game/unsorted: functions 0C0DB6A0-0C0DB866, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0db6a0(int a4, int a5);
int FUN_0c0db70e(int a4, int a5, int a6, int a7);

int FUN_0c0db6a0(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x94, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0DB70E;
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = a5;
        FUN_0c03733c(t1, 0x94, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x3F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        t0 = 0x40;
    }
    return t0;
}

int FUN_0c0db70e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    *(volatile signed char *)(((*(int *)((a4 + 0x10))) + 0x1));
    FUN_0c187798(a4, a5, a6);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, 0x1, 0x2);
        }
        t0 = (((struct o0_int *)0xC472AB8)->v);
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o0_uint *)0xC472AB8)->v) = (t0 - 1);
        t2 = 0xC4;
        if ((t0 - 1) == 0) {
            (((struct o0_uint *)0xC472AB8)->v) = 0x4;
            t0 = (((struct oC_int *)0xC472AB8)->v);
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            if (t0 != 4) {
                                if (t0 != 5) {
                                    if (t0 != 6) {
                                        t3 = t0;
                                        if (t0 != 7) {
                                        } else {
                                            (((struct oC_uint *)0xC472AB8)->v) = 0x0;
                                            FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E78);
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t3 = 0x14;
                                        }
                                        t0 = t3;
                                    } else {
                                        (((struct oC_uint *)0xC472AB8)->v) = 0x7;
                                        t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E60));
                                    }
                                    t3 = t0;
                                } else {
                                    (((struct oC_uint *)0xC472AB8)->v) = 0x6;
                                    t3 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E48));
                                }
                                t0 = t3;
                            } else {
                                (((struct oC_uint *)0xC472AB8)->v) = 0x5;
                                t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E30));
                            }
                            t3 = t0;
                        } else {
                            (((struct oC_uint *)0xC472AB8)->v) = 0x4;
                            t3 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E18));
                        }
                        t0 = t3;
                    } else {
                        (((struct oC_uint *)0xC472AB8)->v) = 0x3;
                        t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E00));
                    }
                    t3 = t0;
                } else {
                    (((struct oC_uint *)0xC472AB8)->v) = 0x2;
                    t3 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287DE8));
                }
                t0 = t3;
            } else {
                (((struct oC_uint *)0xC472AB8)->v) = 0x1;
                t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287DD0));
            }
            t2 = t0;
        }
        return t2;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x2;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
