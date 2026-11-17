/* game/unsorted: functions 0C0E6580-0C0E6746, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c042fe0(void);
int FUN_0c0d04c4(int, int);
float math_cos_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c0e6580(int a4, int a5, int a6, float f4);

int FUN_0c0e6580(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
        } else {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            t2 = t0;
                        } else {
                            u0 = ((((struct o5C_float *)(a4))->v));
                            u0 = u0 + (((float)(*(short *)((a4 + 0x1C))) / 4.0f)) * (math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                            (((struct o2C_float *)(a4))->v) = u0;
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                            t0 = *(short *)((a4 + 0x1C));
                            t3 = t0;
                            if ((int)t0 <= 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                (((struct o2C_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
                                t3 = 0x2C;
                            }
                            t2 = t3;
                        }
                        t0 = t2;
                    } else {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
                        u0 = ((((struct o5C_float *)(a4))->v));
                        u0 = u0 + 8.0f * (math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                        (((struct o2C_float *)(a4))->v) = u0;
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                        t2 = *(signed char *)0xC54098D;
                        t3 = t2;
                        if (t2 == 20) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = 0x20;
                            t3 = 0x20;
                        }
                        t0 = t3;
                    }
                    t2 = t0;
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
                    t0 = *(signed char *)0xC54098D;
                    t3 = t0;
                    if (t0 == 19) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        t3 = 0x0;
                    }
                    t2 = t3;
                }
                t0 = t2;
            } else {
                t2 = *(signed char *)0xC54098D;
                t3 = t2;
                if (t2 == 18) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((-((float)(*(short *)0xC540994) * 5.0f))));
                    t3 = 0xC0E66B0;
                }
                t0 = t3;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 1300.0f);
        FUN_0c187798(a4, a5, a6);
        t1 = FUN_0c042fe0();
        if (t1 == 0) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
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
                    if (t1 != 3) {
                        t2 = t1;
                    } else {
                        u0 = ((((struct o5C_float *)(a4))->v));
                        u0 = u0 + (((float)(*(short *)((a4 + 0x1C))) / 4.0f)) * (math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                        (((struct o2C_float *)(a4))->v) = u0;
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                        t1 = *(short *)((a4 + 0x1C));
                        t3 = t1;
                        if ((int)t1 <= 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o2C_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
                            t3 = 0x2C;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
                    u0 = ((((struct o5C_float *)(a4))->v));
                    u0 = u0 + 8.0f * (math_cos_angle16(((*(short *)((a4 + 0x1C))) << 13)));
                    (((struct o2C_float *)(a4))->v) = u0;
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                    t2 = *(signed char *)0xC54098D;
                    t3 = t2;
                    if (t2 == 20) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x20;
                        t3 = 0x20;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + -5.0f);
                t1 = *(signed char *)0xC54098D;
                t3 = t1;
                if (t1 == 19) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    t3 = 0x0;
                }
                t2 = t3;
            }
            t1 = t2;
        } else {
            t2 = *(signed char *)0xC54098D;
            t3 = t2;
            if (t2 == 18) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((-((float)(*(short *)0xC540994) * 5.0f))));
                t3 = 0xC0E66B0;
            }
            t1 = t3;
        }
        t0 = t1;
    }
    return t0;
}
