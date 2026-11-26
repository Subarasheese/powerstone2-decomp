/* Straight-line functions with calls and guards (batch gen_akl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c03add8(void);
int FUN_0c03afdc(void);
int FUN_0c03c5c0(int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c01e294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c01e294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int t0;
    int t3;
    int qa0;
    int t1;
    int t2;
    int t5;
    int t4;

    qa0 = 0xC30EF6C;
    t0 = (((struct o0_int *)0xC305050)->v);
    t1 = (((struct o4_int *)0xC305050)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        if (t1 != 0) {
                            t2 = 0x0;
                            if (t1 != 1) {
                            } else {
                                t3 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t3 - 1);
                                t4 = 0x1;
                                if ((int)(short)(t3 - 1) > 0) {
                                    t4 = 0x0;
                                }
                                t2 = t4;
                            }
                            t3 = t2;
                        } else {
                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                            *(unsigned short *)qa0 = 0xC;
                            t3 = 0x0;
                        }
                        t2 = t3;
                    } else {
                        if (t0 == 99) {
                            switch (t1) {
                            case 0:
                                FUN_0c018e74(0x3E);
                                (((struct oC_uint *)0xC305050)->v) = 0x3E;
                                *(unsigned short *)qa0 = 0x20;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                break;
                            case 1:
                                t3 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t3 - 1);
                                if ((int)(short)(t3 - 1) > 0) {
                                } else {
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                }
                                break;
                            case 2:
                                t3 = FUN_0c01cd2c(0x101);
                                if ((short)t3 == 0) {
                                } else {
                                    FUN_0c05aab6(0x0, 0x3);
                                    (((struct o14_uint *)0xC305050)->v) = 0x1;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                    *(unsigned short *)qa0 = 0xC;
                                }
                                break;
                            case 3:
                                t3 = *(short *)qa0;
                                *(unsigned short *)qa0 = (t3 - 1);
                                if ((int)(short)(t3 - 1) > 0) {
                                } else {
                                    (((struct o0_uint *)0xC305050)->v) = 0x1;
                                    (((struct o8_uint *)0xC305050)->v) = 0x0;
                                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                                }
                                break;
                            }
                            t3 = 0x0;
                        } else {
                            t4 = 0x0;
                            if (t0 == 100) {
                                if (t1 != 0) {
                                    if (t1 != 1) {
                                        if (t1 != 2) {
                                            if (t1 != 3) {
                                                t0 = 0x0;
                                                if (t1 != 4) {
                                                } else {
                                                    t5 = *(short *)qa0;
                                                    *(unsigned short *)qa0 = (t5 - 1);
                                                    t0 = 0x0;
                                                    if ((int)(short)(t5 - 1) <= 0) {
                                                        t5 = 0xFFFFFFFD;
                                                        if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                        } else {
                                                            (((struct o0_uint *)0xC305050)->v) = 0x1;
                                                            (((struct o8_uint *)0xC305050)->v) = 0x0;
                                                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                                                            (((struct o14_uint *)0xC305050)->v) = 0x1;
                                                            t5 = 0x0;
                                                        }
                                                        t0 = t5;
                                                    }
                                                }
                                                t5 = t0;
                                            } else {
                                                t0 = *(short *)qa0;
                                                *(unsigned short *)qa0 = (t0 - 1);
                                                if ((int)(short)(t0 - 1) <= 0) {
                                                    if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                                        t0 = 0x14;
                                                    } else {
                                                        FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                                        t0 = 0xC;
                                                    }
                                                    *(unsigned short *)qa0 = t0;
                                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                                }
                                                t5 = 0x0;
                                            }
                                            t0 = t5;
                                        } else {
                                            FUN_0c01c714(0xC305058, 0x1, 0x2);
                                            t5 = FUN_0c01cd2c(0x101);
                                            if ((short)t5 != 0) {
                                                FUN_0c05aab6(0x0, 0x3);
                                                *(unsigned short *)qa0 = 0x10;
                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                            }
                                            t0 = 0x0;
                                        }
                                        t5 = t0;
                                    } else {
                                        t0 = *(short *)qa0;
                                        *(unsigned short *)qa0 = (t0 - 1);
                                        if ((int)(short)(t0 - 1) <= 0) {
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t5 = 0x0;
                                    }
                                    t0 = t5;
                                } else {
                                    FUN_0c018e9c(0x3F, 0xC305058);
                                    (((struct oC_uint *)0xC305050)->v) = 0x3F;
                                    *(unsigned short *)qa0 = 0x20;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    (((struct o8_uint *)0xC305050)->v) = 0x1;
                                    t0 = 0x0;
                                }
                                t4 = t0;
                            }
                            t3 = t4;
                        }
                        t2 = t3;
                    }
                    t0 = t2;
                } else {
                    t2 = FUN_0c03c5c0(0x0, t1, a6, f4, f5, f6, f7, f8, f9, f10, f11);
                    if (t2 == 0) {
                        *(unsigned char *)0xC30B6FD = 0x0;
                        (((struct o0_uint *)0xC305050)->v) = 0x4;
                        *(unsigned char *)0xC309E08 = 0x0;
                        *(unsigned char *)0xC83C324 = 0x0;
                    } else {
                        if (t2 == -1) {
                        } else {
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                            if (((((struct o14_int *)0xC305050)->v)) == 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            }
                        }
                    }
                    t0 = 0x0;
                }
                t2 = t0;
            } else {
                t0 = FUN_0c03c7ec(0x0);
                if (t0 == 0) {
                    t3 = 0x0;
                    for (;;) {
                        if ((*(signed char *)((0xC30999E + t3))) != (unsigned char)(*(signed char *)((0xC83C306 + t3)))) {
                            break;
                        }
                        t3 = (t3 + 0x1);
                        if ((int)t3 >= (int)0x8) {
                            (((struct o0_uint *)0xC305050)->v) = 0x3;
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                            FUN_0c01d094();
                            return 0x0;
                        }
                    }
                    if (((((struct o14_int *)0xC305050)->v)) == 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    if (t0 == -1) {
                    } else {
                        if (((((struct o14_int *)0xC305050)->v)) == 0) {
                            (((struct o0_uint *)0xC305050)->v) = 0x63;
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x64;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
                t2 = 0x0;
            }
            t0 = t2;
        } else {
            t2 = FUN_0c03add8();
            if ((int)t2 < 0) {
            } else {
                if ((t2 & 0x1) == 0) {
                    if (((((struct o14_int *)0xC305050)->v)) != 0) {
                        (((struct o0_uint *)0xC305050)->v) = 0x64;
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                    }
                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                } else {
                    t1 = FUN_0c03afdc();
                    if ((int)t1 < 0) {
                    } else {
                        if ((t1 & 0x1) == 0) {
                            if (((((struct o14_int *)0xC305050)->v)) != 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x64;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                            }
                        } else {
                            (((struct o0_uint *)0xC305050)->v) = 0x2;
                        }
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
            }
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        *(unsigned char *)0xC309E08 = 0x1;
        *(unsigned char *)0xC83C324 = 0x1;
        if ((*(signed char *)0xC30B6FD) == 0) {
            (((struct o0_uint *)0xC305050)->v) = 0x3;
        } else {
            (((struct o0_uint *)0xC305050)->v) = 0x1;
        }
        (((struct oC_uint *)0xC305050)->v) = 0xFFFFFFFF;
        (((struct o14_uint *)0xC305050)->v) = 0x0;
        t1 = 0x0;
    }
    return t1;
}
