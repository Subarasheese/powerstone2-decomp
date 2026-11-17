/* game/unsorted: functions 0C0E8F3C-0C0E9096, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o44_int { char p[0x44]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
extern int FUN_0c03f346();
int FUN_0c0d04c4(int, int);
int FUN_0c187798(void);
int FUN_0c0e8f3c(int a4, int a5, int a6, int a7);

int FUN_0c0e8f3c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t2 = (short)(t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0xF, a6);
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            return t0;
        }
        if ((*(int *)0xC540DD4) == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0xF, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        (((struct oA4_uint *)(a4))->v) = ((*(int *)0xC540DD4) + 0x64);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t2 = (short)(t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        t0 = ((int (*)(int, int))(FUN_0c187798))(0x0, 0xF);
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            return t0;
        }
        if ((*(int *)0xC540DD4) == 0) {
            return ((int (*)(int, int))(FUN_0c03f346))(a4, 0xF);
        }
    }
    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((((struct o44_int *)((0xC540D94 + t0)))->v)) + 0x41D))) != 0) {
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x8) {
                break;
            }
            continue;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return 0x41D;
}
