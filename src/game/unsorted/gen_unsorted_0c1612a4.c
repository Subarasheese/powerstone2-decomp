/* game/unsorted: functions 0C1612A4-0C1614A6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
int FUN_0c187798(void);
int FUN_0c1612a4(int a4, int a5, int a6, int a7);

int FUN_0c1612a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    if ((*(short *)((a4 + 0x1C))) != ((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t1 = *(signed char *)((a4 + 0x2));
        if (t1 != 0) {
            if (t1 != 1) {
                t0 = t1;
                if (t1 == 2) {
                    t1 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
                    t3 = t1;
                    if (t1 == 9) {
                        t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                        t4 = t1;
                        if ((int)t1 < (int)0x78) {
                            t1 = (int)((int)((-(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C)))) + 0x78) / (int)0x28);
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t1 << 2)))), (*(int *)0xC4B40D0));
                            if (t1 != (*(short *)((a4 + 0x1E)))) {
                                *(unsigned short *)((a4 + 0x1E)) = t1;
                                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                            }
                            *(volatile int *)((a4 + 0x10));
                            FUN_0c187798();
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                            t4 = 0x2C;
                        }
                        t3 = t4;
                    }
                    t0 = t3;
                }
                t1 = t0;
            } else {
                t0 = 0x22;
                if ((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) < (int)0x258) {
                    t3 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
                    t4 = t3;
                    if (t3 == 9) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t3 = (int)((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) / (int)0x3C);
                        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t3 << 2)))), (*(int *)0xC4B40D0));
                        if (t3 != (*(short *)((a4 + 0x1E)))) {
                            *(unsigned short *)((a4 + 0x1E)) = t3;
                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                        }
                        math_mat_get_translate(((((struct oA4_int *)((*(int *)((a4 + 0x10)))))->v)), (a4 + 0x28));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 60.0f);
                        t4 = 0x2C;
                    }
                    t0 = t4;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x22;
            if ((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) >= (int)0x258) {
            } else {
                t3 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x41D));
                t4 = t3;
                if ((t3 != 2) && ((t3 != 4) && (t3 != 5))) {
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    t3 = (int)((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) / (int)0x3C);
                    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t3 << 2)))), (*(int *)0xC4B40D0));
                    if (t3 != (*(short *)((a4 + 0x1E)))) {
                        *(unsigned short *)((a4 + 0x1E)) = t3;
                        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                    }
                    math_mat_get_translate(((*(int *)((a4 + 0x10))) + 0x64), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                    t4 = 0x2C;
                }
                t1 = t4;
            }
            t0 = t1;
        }
    }
    return t0;
}
