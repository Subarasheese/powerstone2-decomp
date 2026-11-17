/* game/unsorted: functions 0C130E70-0C131232, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c130e70(int a4, int a5, int a6);

int FUN_0c130e70(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    if (a6 != 0) {
        if (a6 != 1) {
            if (a6 == 2) {
                t0 = FUN_0c037320(0x7, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                t1 = FUN_0c03f444(0x5, 0x0, t0);
                t2 = t1;
                if (t1 != 0) {
                    FUN_0c03733c(t1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    t3 = 0x0;
                    t4 = 0x0;
                    if ((int)t0 > 0) {
                        t5 = 0x0;
                        t6 = 0x0;
                        for (;;) {
                            t7 = *(int *)((((0xC4 + t1) + t5) + 0x0));
                            *(unsigned char *)((t7 + 0x0)) = 0x1;
                            *(unsigned short *)((t7 + 0x6)) = 0xF;
                            t6 = (t6 + 0x1);
                            (((struct o8C_float *)(t7))->v) = 1.0f;
                            (((struct o88_float *)(t7))->v) = 1.0f;
                            (((struct o84_float *)(t7))->v) = 1.0f;
                            t5 = (t5 + 0x4);
                            if ((int)t6 >= (int)t0) {
                                break;
                            }
                        }
                        t0 = t7;
                        t3 = t5;
                        t4 = t6;
                    }
                    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned char *)((t1 + 0x2)) = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0xC130C02;
                    (((struct oA8_uchar *)(t1))->v) = 0x1;
                    (((struct oAC_ushort *)(t1))->v) = 0xF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    (((struct o48_float *)(t1))->v) = 0.0f;
                    (((struct o44_float *)(t1))->v) = 0.0f;
                    (((struct o40_float *)(t1))->v) = 0.0f;
                    t5 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t3, t4);
                    (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 100.0f);
                    *(unsigned int *)((t1 + 0x10)) = a4;
                    *(unsigned short *)((t1 + 0x1C)) = 0x12C;
                    t2 = 0x12C;
                }
                t0 = t2;
            } else {
                if (a6 == 3) {
                    t1 = FUN_0c037320(0x9, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                    t2 = FUN_0c03f444(0x5, 0x0, t1);
                    t3 = t2;
                    if (t2 != 0) {
                        FUN_0c03733c(t2, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                        t4 = 0x0;
                        t5 = 0x0;
                        if ((int)t1 > 0) {
                            t6 = 0x0;
                            t7 = 0x0;
                            for (;;) {
                                t8 = *(int *)((((0xC4 + t2) + t6) + 0x0));
                                *(unsigned char *)((t8 + 0x0)) = 0x1;
                                *(unsigned short *)((t8 + 0x6)) = 0xF;
                                t7 = (t7 + 0x1);
                                (((struct o8C_float *)(t8))->v) = 1.0f;
                                (((struct o88_float *)(t8))->v) = 1.0f;
                                (((struct o84_float *)(t8))->v) = 1.0f;
                                t6 = (t6 + 0x4);
                                if ((int)t7 >= (int)t1) {
                                    break;
                                }
                            }
                            t1 = t8;
                            t4 = t6;
                            t5 = t7;
                        }
                        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t2 + 0x2)) = a6;
                        *(unsigned int *)((t2 + 0x4)) = 0xC130CF6;
                        (((struct oA8_uchar *)(t2))->v) = 0x1;
                        (((struct oAC_ushort *)(t2))->v) = 0x1F;
                        (((struct oA9_uchar *)(t2))->v) = 0x21;
                        (((struct o48_float *)(t2))->v) = 0.0f;
                        (((struct o44_float *)(t2))->v) = 0.0f;
                        (((struct o40_float *)(t2))->v) = 0.0f;
                        t6 = ((int (*)(int, int, int))(FUN_0c187798))(t1, t4, t5);
                        *(unsigned int *)((t2 + 0x10)) = a4;
                        *(unsigned short *)((t2 + 0x1C)) = 0xA;
                        t3 = 0xA;
                    }
                    t1 = t3;
                } else {
                    t2 = a6;
                    if (a6 == 4) {
                        t3 = FUN_0c037320(0x1, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                        t4 = FUN_0c03f444(0x5, 0x0, t3);
                        t3 = t4;
                        if (t4 != 0) {
                            FUN_0c03733c(t4, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                            t5 = (((struct oC4_int *)(t4))->v);
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            *(unsigned short *)((t5 + 0x6)) = 0xF;
                            (((struct o8C_float *)(t5))->v) = 3.0f;
                            (((struct o88_float *)(t5))->v) = 3.0f;
                            (((struct o84_float *)(t5))->v) = 3.0f;
                            t5 = (((struct oC8_int *)(t4))->v);
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            *(unsigned short *)((t5 + 0x6)) = 0x1F;
                            (((struct o8C_float *)(t5))->v) = 0.100000001f;
                            (((struct o84_float *)(t5))->v) = 0.100000001f;
                            (((struct o88_float *)(t5))->v) = 1.0f;
                            *(unsigned char *)((t4 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                            *(unsigned char *)((t4 + 0x2)) = a6;
                            *(unsigned int *)((t4 + 0x4)) = 0xC130D50;
                            (((struct oA8_uchar *)(t4))->v) = 0x1;
                            (((struct oAC_ushort *)(t4))->v) = 0xF;
                            (((struct oA9_uchar *)(t4))->v) = 0x21;
                            (((struct o48_float *)(t4))->v) = 0.0f;
                            (((struct o44_float *)(t4))->v) = 0.0f;
                            (((struct o40_float *)(t4))->v) = 0.0f;
                            t6 = ((int (*)(int))(FUN_0c187798))(t5);
                            (((struct o2C_float *)(t4))->v) = (((((struct o2C_float *)(t4))->v)) + 100.0f);
                            *(unsigned int *)((t4 + 0x10)) = a4;
                            *(unsigned short *)((t4 + 0x1C)) = 0x19;
                            t3 = 0x19;
                        }
                        t2 = t3;
                    }
                    t1 = t2;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = FUN_0c037320(0x6, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t2 = FUN_0c03f444(0x5, 0x0, t0);
            t3 = t2;
            if (t2 != 0) {
                FUN_0c03733c(t2, 0x6, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                t4 = 0x0;
                t5 = 0x0;
                if ((int)t0 > 0) {
                    t6 = 0x0;
                    t7 = 0x0;
                    for (;;) {
                        t8 = *(int *)((((0xC4 + t2) + t6) + 0x0));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        t7 = (t7 + 0x1);
                        (((struct o8C_float *)(t8))->v) = 1.0f;
                        (((struct o88_float *)(t8))->v) = 1.0f;
                        (((struct o84_float *)(t8))->v) = 1.0f;
                        t6 = (t6 + 0x4);
                        if ((int)t7 >= (int)t0) {
                            break;
                        }
                    }
                    t0 = t8;
                    t4 = t6;
                    t5 = t7;
                }
                *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                *(unsigned char *)((t2 + 0x2)) = a6;
                *(unsigned int *)((t2 + 0x4)) = 0xC130ACC;
                (((struct oA8_uchar *)(t2))->v) = 0x1;
                (((struct oAC_ushort *)(t2))->v) = 0x3F;
                (((struct oA9_uchar *)(t2))->v) = 0x21;
                (((struct o48_float *)(t2))->v) = 0.0f;
                (((struct o44_float *)(t2))->v) = 0.0f;
                (((struct o40_float *)(t2))->v) = 0.0f;
                t6 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t4, t5);
                (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 100.0f);
                *(unsigned int *)((t2 + 0x10)) = a4;
                *(unsigned short *)((t2 + 0x1C)) = 0x12C;
                t3 = 0x12C;
            }
            t1 = t3;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        t3 = t2;
        if (t2 != 0) {
            FUN_0c03733c(t2, 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t4 = 0x0;
            t5 = 0x0;
            if ((int)t1 > 0) {
                t6 = 0x0;
                t7 = 0x0;
                for (;;) {
                    t8 = *(int *)((((0xC4 + t2) + t6) + 0x0));
                    *(unsigned char *)((t8 + 0x0)) = 0x1;
                    *(unsigned short *)((t8 + 0x6)) = 0xF;
                    t7 = (t7 + 0x1);
                    (((struct o8C_float *)(t8))->v) = 1.0f;
                    (((struct o88_float *)(t8))->v) = 1.0f;
                    (((struct o84_float *)(t8))->v) = 1.0f;
                    t6 = (t6 + 0x4);
                    if ((int)t7 >= (int)t1) {
                        break;
                    }
                }
                t1 = t8;
                t4 = t6;
                t5 = t7;
            }
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t2 + 0x2)) = a6;
            *(unsigned int *)((t2 + 0x4)) = 0xC130A4C;
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = 0x3F;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct o48_float *)(t2))->v) = 0.0f;
            (((struct o44_float *)(t2))->v) = 0.0f;
            (((struct o40_float *)(t2))->v) = 0.0f;
            t6 = ((int (*)(int, int, int))(FUN_0c187798))(t1, t4, t5);
            (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 150.0f);
            *(unsigned short *)((t2 + 0x1C)) = 0x1E;
            *(unsigned short *)((t2 + 0x1E)) = 0x0;
            t3 = 0x0;
        }
        t0 = t3;
    }
    return t0;
}
