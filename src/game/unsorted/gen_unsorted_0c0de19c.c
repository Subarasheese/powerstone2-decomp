/* game/unsorted: functions 0C0DE19C-0C0DE4E8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c187798(void);
int FUN_0c0de19c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0de442(int a4, int a5, int a6);

int FUN_0c0de19c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)0xC54223C) != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 == 3) {
                        if ((*(signed char *)((a4 + 0x2))) == 0) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 11.0f);
                            if (!(((((struct o2C_float *)(a4))->v)) > (*(float *)0xC0DE4F4))) {
                                return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                            }
                            return 0x2C;
                        }
                        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.0250000004f);
                        if (!(((((struct o88_float *)(t0))->v)) > 0.0f)) {
                            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                        }
                        return 0x88;
                    }
                    return t1;
                }
                if ((*(signed char *)((a4 + 0x2))) == 0) {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 38.0f);
                    t1 = 0x2C;
                    if (!(225.0f > ((((struct o2C_float *)(a4))->v)))) {
                        (((struct o2C_float *)(a4))->v) = 225.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        t1 = 0x12A;
                    }
                    t2 = t1;
                } else {
                    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0799999982f);
                    if (!(1.0f > ((((struct o88_float *)(t0))->v)))) {
                        (((struct o88_float *)(t0))->v) = 1.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                    }
                    u0 = (((struct o88_float *)(t0))->v);
                    (((struct o48_float *)(a4))->v) = u0;
                    (((struct o44_float *)(a4))->v) = u0;
                    (((struct o40_float *)(a4))->v) = u0;
                    t2 = 0x40;
                }
                return t2;
            }
            if (((*(short *)((a4 + 0x1C))) & 2) != 0) {
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    u0 = (((((struct o28_float *)(a4))->v)) + 10.0f);
                } else {
                    u0 = (((((struct o28_float *)(a4))->v)) - 10.0f);
                }
                (((struct o28_float *)(a4))->v) = u0;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            t1 = *(short *)((a4 + 0x1C));
            if (t1 != 0) {
                return t1;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o12A_ushort *)(a4))->v) = 0xF;
            (((struct o136_uchar *)(a4))->v) = 0x0;
            u0 = (((struct o88_float *)(t0))->v);
            (((struct o48_float *)(a4))->v) = u0;
            (((struct o44_float *)(a4))->v) = u0;
            (((struct o40_float *)(a4))->v) = u0;
            return thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 30.0f);
        } else {
            (((struct o8C_float *)(t0))->v) = 1.0f;
            (((struct o84_float *)(t0))->v) = 1.0f;
            (((struct o88_float *)(t0))->v) = 0.0f;
        }
        (((struct o58_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o60_float *)(a4))->v) = ((((struct o30_float *)(a4))->v));
        t1 = *(signed char *)((a4 + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((((t1 << 2) << 2) - t1) + 0x3C);
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t1 = (t1 + 0x1);
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 == 3) {
                        if ((*(signed char *)((a4 + 0x2))) == 0) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 11.0f);
                            if (!(((((struct o2C_float *)(a4))->v)) > (*(float *)0xC0DE4F4))) {
                                return ((int (*)(int))(FUN_0c03f346))(a4);
                            }
                            return 0x2C;
                        }
                        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.0250000004f);
                        if (!(((((struct o88_float *)(t0))->v)) > 0.0f)) {
                            return ((int (*)(int))(FUN_0c03f346))(a4);
                        }
                        return 0x88;
                    }
                    return t1;
                }
                if ((*(signed char *)((a4 + 0x2))) == 0) {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 38.0f);
                    t1 = 0x2C;
                    if (!(225.0f > ((((struct o2C_float *)(a4))->v)))) {
                        (((struct o2C_float *)(a4))->v) = 225.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        t1 = 0x12A;
                    }
                    t2 = t1;
                } else {
                    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0799999982f);
                    if (!(1.0f > ((((struct o88_float *)(t0))->v)))) {
                        (((struct o88_float *)(t0))->v) = 1.0f;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                    }
                    u0 = (((struct o88_float *)(t0))->v);
                    (((struct o48_float *)(a4))->v) = u0;
                    (((struct o44_float *)(a4))->v) = u0;
                    (((struct o40_float *)(a4))->v) = u0;
                    t2 = 0x40;
                }
                return t2;
            }
            if (((*(short *)((a4 + 0x1C))) & 2) != 0) {
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    u0 = (((((struct o28_float *)(a4))->v)) + 10.0f);
                } else {
                    u0 = (((((struct o28_float *)(a4))->v)) - 10.0f);
                }
                (((struct o28_float *)(a4))->v) = u0;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            t1 = *(short *)((a4 + 0x1C));
            if (t1 != 0) {
                return t1;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
            (((struct o12A_ushort *)(a4))->v) = 0xF;
            (((struct o136_uchar *)(a4))->v) = 0x0;
            u0 = (((struct o88_float *)(t0))->v);
            (((struct o48_float *)(a4))->v) = u0;
            (((struct o44_float *)(a4))->v) = u0;
            (((struct o40_float *)(a4))->v) = u0;
            return thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
        }
    }
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
        t1 = 0x2C;
        if (-160.0f > ((((struct o2C_float *)(a4))->v))) {
        } else {
            (((struct o2C_float *)(a4))->v) = -160.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            t1 = 0x12A;
        }
        t2 = t1;
    } else {
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0133333337f);
        t1 = 0x88;
        if (0.200000003f > ((((struct o88_float *)(t0))->v))) {
        } else {
            (((struct o88_float *)(t0))->v) = 0.200000003f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            t1 = 0x12A;
        }
        t2 = t1;
    }
    return t2;
}


