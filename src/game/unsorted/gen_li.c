/* Straight-line functions with calls and guards (batch gen_li): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c104cc8(int);
int FUN_0c1055e8(int);
int FUN_0c105604(int);
int FUN_0c115120(int, int, int, int, float);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c117e9a(void);
int FUN_0c118584(int);
int FUN_0c11e964(int);
int nlRand(void);
int FUN_0c105818(int a4, int a5, int a6, int a7, float f4);

int FUN_0c105818(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t2;
    int t3;
    int t1;
    float u0;

    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
            } else if (t0 == 3) {
            } else {
                if (t0 == 4) {
                    return FUN_0c105604(a4);
                }
                return t0;
            }
            t0 = *(signed char *)(a4 + 0x16);
            if (t0 != 0) {
                if (t0 != 1) {
                    t1 = t0;
                    if (t0 != 2) {
                    } else {
                        t0 = FUN_0c104cc8(0x3FCF);
                        t2 = t0;
                        if (t0 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                            t2 = 0x15;
                        }
                        t1 = t2;
                    }
                    return t1;
                }
                t0 = FUN_0c117d54();
                if ((int)t0 < 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    if (((((struct o24_int *)0xC474714)->v)) != 5) {
                        return FUN_0c117e76();
                    }
                    return FUN_0c117e9a();
                }
                return t0;
            }
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
            t1 = 0x20;
            if ((int)(short)(t0 + 0x1) > (int)0xA) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                t1 = 0x16;
            }
            return t1;
        }
        t0 = (((struct o24_int *)0xC474714)->v);
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            if (t0 != 5) {
                                return t0;
                            }
                            t0 = *(signed char *)(a4 + 0x16);
                            if (t0 != 0) {
                                if (t0 == 1) {
                                    t1 = *(signed char *)(a4 + 0x17);
                                    if (t1 != 0) {
                                        if (t1 != 1) {
                                            t2 = t1;
                                            if (t1 != 2) {
                                            } else {
                                                t1 = FUN_0c104cc8(0x3FCF);
                                                t3 = t1;
                                                if (t1 == 0) {
                                                } else {
                                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                                                    t3 = 0x16;
                                                }
                                                t2 = t3;
                                            }
                                            return t2;
                                        }
                                        t1 = FUN_0c117d54();
                                        if ((int)t1 < 0) {
                                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                                            return FUN_0c117e9a();
                                        }
                                        return t1;
                                    }
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                                    (((struct o22_ushort *)(a4))->v) = 0x0;
                                    t1 = (int)((int)(nlRand()) % (int)0x3);
                                    if (t1 != 0) {
                                        if (t1 != 1) {
                                            t2 = t1;
                                            if (t1 != 2) {
                                            } else {
                                                t2 = (FUN_0c117944(0x1D));
                                            }
                                            t1 = t2;
                                        } else {
                                            t1 = (FUN_0c117944(0x1C));
                                        }
                                        t2 = t1;
                                    } else {
                                        t2 = (FUN_0c117944(0x1B));
                                    }
                                    return t2;
                                }
                                t1 = t0;
                                if (t0 == 2) {
                                    (((struct o15_uchar *)(a4))->v) = 0x4;
                                    t1 = 0x15;
                                }
                                return t1;
                            }
                            t0 = *(signed char *)0xC535BAD;
                            t1 = t0;
                            if (t0 != 1) {
                            } else {
                                u0 = (((struct o8C_float *)(((((struct o0_int *)0xC5325B0)->v))))->v);
                                if ((int)(int)u0 >= (int)0x74) {
                                    FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                    t0 = (((struct o0_int *)0xC5325B0)->v);
                                    (((struct o98_float *)(t0))->v) = 0.0f;
                                    (((struct o94_float *)(t0))->v) = 0.0f;
                                    t0 = (((struct o4_int *)0xC5325B0)->v);
                                    (((struct o98_float *)(t0))->v) = 0.0f;
                                    (((struct o94_float *)(t0))->v) = 0.0f;
                                    t0 = 0x1;
                                } else {
                                    if ((int)u0 != 23) {
                                        if ((int)u0 != 30) {
                                            if ((int)u0 != 40) {
                                                if ((int)u0 != 70) {
                                                    if ((int)u0 != 90) {
                                                        if ((int)u0 != 101) {
                                                            t2 = 0x0;
                                                            if ((int)u0 != 111) {
                                                            } else {
                                                                FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                                                t3 = (((struct o0_int *)0xC5325B0)->v);
                                                                (((struct o98_float *)(t3))->v) = 10.0f;
                                                                (((struct o94_float *)(t3))->v) = 10.0f;
                                                                t3 = (((struct o4_int *)0xC5325B0)->v);
                                                                (((struct o98_float *)(t3))->v) = 10.0f;
                                                                (((struct o94_float *)(t3))->v) = 10.0f;
                                                                t2 = 0x1;
                                                            }
                                                            t3 = t2;
                                                        } else {
                                                            FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                                            t2 = (((struct o0_int *)0xC5325B0)->v);
                                                            (((struct o98_float *)(t2))->v) = 10.0f;
                                                            (((struct o94_float *)(t2))->v) = 10.0f;
                                                            t2 = (((struct o4_int *)0xC5325B0)->v);
                                                            (((struct o98_float *)(t2))->v) = 10.0f;
                                                            (((struct o94_float *)(t2))->v) = 10.0f;
                                                            t3 = 0x1;
                                                        }
                                                        t2 = t3;
                                                    } else {
                                                        FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                                        t3 = (((struct o0_int *)0xC5325B0)->v);
                                                        (((struct o98_float *)(t3))->v) = 10.0f;
                                                        (((struct o94_float *)(t3))->v) = 10.0f;
                                                        t3 = (((struct o4_int *)0xC5325B0)->v);
                                                        (((struct o98_float *)(t3))->v) = 10.0f;
                                                        (((struct o94_float *)(t3))->v) = 10.0f;
                                                        t2 = 0x1;
                                                    }
                                                    t3 = t2;
                                                } else {
                                                    FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                                    t2 = (((struct o0_int *)0xC5325B0)->v);
                                                    (((struct o98_float *)(t2))->v) = 20.0f;
                                                    (((struct o94_float *)(t2))->v) = 20.0f;
                                                    t2 = (((struct o4_int *)0xC5325B0)->v);
                                                    (((struct o98_float *)(t2))->v) = 20.0f;
                                                    (((struct o94_float *)(t2))->v) = 20.0f;
                                                    t3 = 0x1;
                                                }
                                                t2 = t3;
                                            } else {
                                                FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                                t3 = (((struct o0_int *)0xC5325B0)->v);
                                                (((struct o98_float *)(t3))->v) = 30.0f;
                                                (((struct o94_float *)(t3))->v) = 30.0f;
                                                t3 = (((struct o4_int *)0xC5325B0)->v);
                                                (((struct o98_float *)(t3))->v) = 30.0f;
                                                (((struct o94_float *)(t3))->v) = 30.0f;
                                                t2 = 0x1;
                                            }
                                            t3 = t2;
                                        } else {
                                            FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                            t2 = (((struct o0_int *)0xC5325B0)->v);
                                            (((struct o98_float *)(t2))->v) = 30.0f;
                                            (((struct o94_float *)(t2))->v) = 30.0f;
                                            t2 = (((struct o4_int *)0xC5325B0)->v);
                                            (((struct o98_float *)(t2))->v) = 30.0f;
                                            (((struct o94_float *)(t2))->v) = 30.0f;
                                            t3 = 0x1;
                                        }
                                        t2 = t3;
                                    } else {
                                        FUN_0c115120(0x2, (int)u0, a6, a7, f4);
                                        t3 = (((struct o0_int *)0xC5325B0)->v);
                                        (((struct o98_float *)(t3))->v) = 30.0f;
                                        (((struct o94_float *)(t3))->v) = 30.0f;
                                        t3 = (((struct o4_int *)0xC5325B0)->v);
                                        (((struct o98_float *)(t3))->v) = 30.0f;
                                        (((struct o94_float *)(t3))->v) = 30.0f;
                                        t2 = 0x1;
                                    }
                                    t0 = t2;
                                }
                                t2 = t0;
                                if (t0 != 1) {
                                } else {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                                    (((struct o17_uchar *)(a4))->v) = 0x0;
                                    t2 = 0x17;
                                }
                                t1 = t2;
                            }
                            return t1;
                        }
                        FUN_0c117944(0x19);
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                        return 0x15;
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    return (FUN_0c117944(0x17));
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                return (FUN_0c117944(0x15));
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            return (FUN_0c117944(0x13));
        }
        FUN_0c11e964(0x101);
        t0 = (((struct o0_int *)0xC474714)->v);
        if (t0 != 0) {
            if ((int)t0 < (int)0x2) {
                if ((int)(*(int *)((0xC474104 + ((*(int *)0xC474410) << 2)))) >= (int)0x2) {
                    FUN_0c117944(0x11);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    return 0x15;
                }
            } else {
                FUN_0c117944(0x11);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                return 0x15;
            }
        }
        t0 = *(signed char *)(a4 + 0x16);
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                t0 = FUN_0c104cc8(0x3FCF);
                if (t0 == 0) {
                    return t0;
                }
                return FUN_0c1055e8(a4);
            }
            t0 = FUN_0c117d54();
            if ((int)t0 >= 0) {
                return t0;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            return FUN_0c117e76();
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        return (FUN_0c117944(0x34));
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return FUN_0c118584(((((struct o24_int *)0xC474714)->v)));
}
