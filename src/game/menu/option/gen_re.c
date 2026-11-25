/* Straight-line functions with calls and guards (batch gen_re): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c019a32(int a4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };


int FUN_0c019a32(int a4)
{
    int t1;
    int t0;
    int t2;

    t0 = *(signed char *)(a4);
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t1 = 0;
            if ((unsigned char)t0 == 2) {
                if ((*(signed char *)(a4 + 0x9)) != 0) {
                    *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                    (((struct o1_uchar *)(a4))->v) = 0x0;
                    t1 = 1;
                }
            } else {
                if ((unsigned char)t0 == 3) {
                    t1 = 1;
                }
            }
            if (t1) {
                t0 = *(signed char *)(a4 + 0x1);
                t1 = 0;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t2 = 0x0;
                        if ((unsigned char)t0 != 2) {
                        } else {
                            t2 = ((unsigned char)(*(signed char *)(a4 + 0xA)) + 0x1);
                        }
                    } else {
                        t1 = 1;
                    }
                } else {
                    (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                    t0 = 0xFFFFFFFF;
                    if ((*(signed char *)(a4 + 0xA)) == 0) {
                        t0 = 0xFF000000;
                    }
                    FUN_0c0573cc(t0, 0x0, 0x14);
                    (((struct o4_uchar *)(a4))->v) = 0x14;
                    t1 = 1;
                }
                if (t1) {
                    t0 = *(signed char *)(a4 + 0x4);
                    (((struct o4_uchar *)(a4))->v) = (t0 - 1);
                    t1 = 0x0;
                    if ((signed char)(t0 - 1) == 0) {
                        (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                        t1 = ((unsigned char)(*(signed char *)(a4 + 0xA)) + 0x1);
                    }
                    t0 = t1;
                } else {
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t1 = 0x0;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)(a4 + 0x1);
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        if ((unsigned char)t1 != 3) {
                            if ((unsigned char)t1 != 4) {
                            } else {
                                t1 = FUN_0c01cd2c(0x2000);
                                if ((short)t1 != 0) {
                                    (((struct o1_uchar *)(a4))->v) = 0x1;
                                    (((struct o8_uchar *)(a4))->v) = 0x3;
                                    (((struct o9_uchar *)(a4))->v) = 0x0;
                                    FUN_0c05aab6(0x0, 0x6);
                                } else {
                                    t1 = FUN_0c01cd2c(0x40);
                                    if ((short)t1 != 0) {
                                        *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                                        (((struct o9_uchar *)(a4))->v) = 0x1;
                                        (((struct oA_uchar *)(a4))->v) = 0x1;
                                        FUN_0c05aab6(0x0, 0x4);
                                    } else {
                                        t1 = FUN_0c01cd2c(0x101);
                                        if ((short)t1 != 0) {
                                            *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                                            (((struct o8_uchar *)(a4))->v) = 0x4;
                                            (((struct o9_uchar *)(a4))->v) = 0x0;
                                            FUN_0c05aab6(0x0, 0x3);
                                        } else {
                                            FUN_0c01c714((a4 + 0xA), 0x1, 0x3);
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((unsigned char)(*(signed char *)(a4 + 0x9)) == 3) {
                                (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                                (((struct o8_uchar *)(a4))->v) = 0x0;
                            }
                        }
                    } else {
                        t1 = FUN_0c01cd2c(0x1000);
                        if ((short)t1 != 0) {
                            (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                            (((struct o8_uchar *)(a4))->v) = 0x2;
                            (((struct o9_uchar *)(a4))->v) = 0x0;
                            FUN_0c05aab6(0x0, 0x6);
                        } else {
                            t1 = FUN_0c01cd2c(0x40);
                            if ((short)t1 == 0) {
                            } else {
                                *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
                                (((struct o9_uchar *)(a4))->v) = 0x1;
                                (((struct oA_uchar *)(a4))->v) = 0x1;
                                FUN_0c05aab6(0x0, 0x4);
                            }
                        }
                    }
                } else {
                    if ((unsigned char)(*(signed char *)(a4 + 0x9)) != 3) {
                    } else {
                        (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                        (((struct o8_uchar *)(a4))->v) = 0x0;
                    }
                }
            } else {
                (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
                (((struct oA_uchar *)(a4))->v) = 0x1;
                t1 = FUN_0c01cc56(0xB, 0xC019C66);
                (((struct o3_uchar *)(t1))->v) = 0x0;
                (((struct o10_uint *)(t1))->v) = a4;
                t1 = FUN_0c01cc56(0xC, 0xC019C66);
                (((struct o3_uchar *)(t1))->v) = 0x1;
                (((struct o10_uint *)(t1))->v) = a4;
                t1 = FUN_0c01cc56(0x15, 0xC019C66);
                (((struct o3_uchar *)(t1))->v) = 0x2;
                (((struct o10_uint *)(t1))->v) = a4;
                (((struct o8_uchar *)(a4))->v) = 0x1;
                (((struct o9_uchar *)(a4))->v) = 0x0;
            }
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        if ((*(signed char *)(a4 + 0x1)) == 0) {
            (((struct o1_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x1)) + 0x1);
            FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x14);
            (((struct o4_uchar *)(a4))->v) = 0x14;
            FUN_0c01cb7c();
        }
        t0 = *(signed char *)(a4 + 0x4);
        (((struct o4_uchar *)(a4))->v) = (t0 - 1);
        if ((signed char)(t0 - 1) != 0) {
        } else {
            *(unsigned char *)(a4) = ((*(signed char *)(a4)) + 0x1);
            (((struct o1_uchar *)(a4))->v) = 0x0;
        }
        t1 = 0x0;
    }
    return t1;
}
