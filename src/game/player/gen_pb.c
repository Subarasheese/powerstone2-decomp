/* Straight-line functions with calls and guards (batch gen_pb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c05f22c(int);
int FUN_0c109c38(int);
int FUN_0c115120(int, int, int, int, float);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c10ab7c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c10ab7c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x17));
            if (t1 != 0) {
                if (t1 != 1) {
                    t2 = t1;
                    if (t1 != 2) {
                    } else {
                        t1 = FUN_0c05f22c(0x3FCF);
                        t3 = t1;
                        if (t1 != 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            t3 = 0x16;
                        }
                        t2 = t3;
                    }
                    return t2;
                }
                t1 = FUN_0c117d54();
                if ((int)t1 < 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    return FUN_0c117e76();
                }
                return t1;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x0;
            return (FUN_0c117944(0x57));
        }
        if (t0 == 2) {
            return FUN_0c109c38(a4);
        }
        return t0;
    }
    t0 = *(signed char *)0xC535BAD;
    t1 = t0;
    if (t0 != 1) {
    } else {
        u0 = (((struct o8C_float *)(((((struct o0_int *)0xC5325B0)->v))))->v);
        t0 = 0x0;
        if ((int)(int)u0 <= (int)0x10) {
        } else {
            if ((int)(int)u0 >= (int)0x74) {
                FUN_0c115120(0x2, 0x0, a6, a7, f4);
                t2 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t2))->v) = 0.0f;
                (((struct o94_float *)(t2))->v) = 0.0f;
                t2 = (((struct o4_int *)0xC5325B0)->v);
                (((struct o98_float *)(t2))->v) = 0.0f;
                (((struct o94_float *)(t2))->v) = 0.0f;
                t2 = 0x1;
            } else {
                if ((int)u0 != 23) {
                    if ((int)u0 != 30) {
                        if ((int)u0 != 40) {
                            if ((int)u0 != 70) {
                                if ((int)u0 != 90) {
                                    if ((int)u0 != 101) {
                                        t3 = 0x0;
                                        if ((int)u0 != 111) {
                                        } else {
                                            FUN_0c115120(0x2, 0x0, a6, a7, f4);
                                            t4 = (((struct o0_int *)0xC5325B0)->v);
                                            (((struct o98_float *)(t4))->v) = 10.0f;
                                            (((struct o94_float *)(t4))->v) = 10.0f;
                                            t4 = (((struct o4_int *)0xC5325B0)->v);
                                            (((struct o98_float *)(t4))->v) = 10.0f;
                                            (((struct o94_float *)(t4))->v) = 10.0f;
                                            t3 = 0x1;
                                        }
                                        t4 = t3;
                                    } else {
                                        FUN_0c115120(0x2, 0x0, a6, a7, f4);
                                        t3 = (((struct o0_int *)0xC5325B0)->v);
                                        (((struct o98_float *)(t3))->v) = 10.0f;
                                        (((struct o94_float *)(t3))->v) = 10.0f;
                                        t3 = (((struct o4_int *)0xC5325B0)->v);
                                        (((struct o98_float *)(t3))->v) = 10.0f;
                                        (((struct o94_float *)(t3))->v) = 10.0f;
                                        t4 = 0x1;
                                    }
                                    t3 = t4;
                                } else {
                                    FUN_0c115120(0x2, 0x0, a6, a7, f4);
                                    t4 = (((struct o0_int *)0xC5325B0)->v);
                                    (((struct o98_float *)(t4))->v) = 10.0f;
                                    (((struct o94_float *)(t4))->v) = 10.0f;
                                    t4 = (((struct o4_int *)0xC5325B0)->v);
                                    (((struct o98_float *)(t4))->v) = 10.0f;
                                    (((struct o94_float *)(t4))->v) = 10.0f;
                                    t3 = 0x1;
                                }
                                t4 = t3;
                            } else {
                                FUN_0c115120(0x2, 0x0, a6, a7, f4);
                                t3 = (((struct o0_int *)0xC5325B0)->v);
                                (((struct o98_float *)(t3))->v) = 20.0f;
                                (((struct o94_float *)(t3))->v) = 20.0f;
                                t3 = (((struct o4_int *)0xC5325B0)->v);
                                (((struct o98_float *)(t3))->v) = 20.0f;
                                (((struct o94_float *)(t3))->v) = 20.0f;
                                t4 = 0x1;
                            }
                            t3 = t4;
                        } else {
                            FUN_0c115120(0x2, 0x0, a6, a7, f4);
                            t4 = (((struct o0_int *)0xC5325B0)->v);
                            (((struct o98_float *)(t4))->v) = 30.0f;
                            (((struct o94_float *)(t4))->v) = 30.0f;
                            t4 = (((struct o4_int *)0xC5325B0)->v);
                            (((struct o98_float *)(t4))->v) = 30.0f;
                            (((struct o94_float *)(t4))->v) = 30.0f;
                            t3 = 0x1;
                        }
                        t4 = t3;
                    } else {
                        FUN_0c115120(0x2, 0x0, a6, a7, f4);
                        t3 = (((struct o0_int *)0xC5325B0)->v);
                        (((struct o98_float *)(t3))->v) = 30.0f;
                        (((struct o94_float *)(t3))->v) = 30.0f;
                        t3 = (((struct o4_int *)0xC5325B0)->v);
                        (((struct o98_float *)(t3))->v) = 30.0f;
                        (((struct o94_float *)(t3))->v) = 30.0f;
                        t4 = 0x1;
                    }
                    t3 = t4;
                } else {
                    FUN_0c115120(0x2, 0x0, a6, a7, f4);
                    t4 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t4))->v) = 30.0f;
                    (((struct o94_float *)(t4))->v) = 30.0f;
                    t4 = (((struct o4_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t4))->v) = 30.0f;
                    (((struct o94_float *)(t4))->v) = 30.0f;
                    t3 = 0x1;
                }
                t2 = t3;
            }
            t0 = t2;
        }
        t2 = t0;
        if (t0 == 1) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t2 = 0x17;
        }
        t1 = t2;
    }
    return t1;
}
