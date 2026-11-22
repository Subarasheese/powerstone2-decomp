/* Straight-line functions with calls and guards (batch gen_ie): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c037bf6(int, int, int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03afdc(int);
int FUN_0c03c5c0(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c03c7ec(int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c1402c4(int, int);
int FUN_0c01e294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c01d6cc(int a4, int a5, int a6, int a7);
int FUN_0c0ae2b0(int a4, int a5, int a6);

int FUN_0c01e294(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

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
                                t3 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t3 - 1);
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
                            *(unsigned short *)0xC30EF6C = 0xC;
                            t3 = 0x0;
                        }
                        t2 = t3;
                    } else {
                        if (t0 == 99) {
                            switch (t1) {
                            case 0:
                                FUN_0c018e74(0x3E);
                                (((struct oC_uint *)0xC305050)->v) = 0x3E;
                                *(unsigned short *)0xC30EF6C = 0x20;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                break;
                            case 1:
                                t3 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t3 - 1);
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
                                    *(unsigned short *)0xC30EF6C = 0xC;
                                }
                                break;
                            case 3:
                                t3 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t3 - 1);
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
                                                    t5 = *(short *)0xC30EF6C;
                                                    *(unsigned short *)0xC30EF6C = (t5 - 1);
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
                                                t0 = *(short *)0xC30EF6C;
                                                *(unsigned short *)0xC30EF6C = (t0 - 1);
                                                if ((int)(short)(t0 - 1) <= 0) {
                                                    if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                                                        t0 = 0x14;
                                                    } else {
                                                        FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                                                        t0 = 0xC;
                                                    }
                                                    *(unsigned short *)0xC30EF6C = t0;
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
                                                *(unsigned short *)0xC30EF6C = 0x10;
                                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                            }
                                            t0 = 0x0;
                                        }
                                        t5 = t0;
                                    } else {
                                        t0 = *(short *)0xC30EF6C;
                                        *(unsigned short *)0xC30EF6C = (t0 - 1);
                                        if ((int)(short)(t0 - 1) <= 0) {
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t5 = 0x0;
                                    }
                                    t0 = t5;
                                } else {
                                    FUN_0c018e9c(0x3F, 0xC305058);
                                    (((struct oC_uint *)0xC305050)->v) = 0x3F;
                                    *(unsigned short *)0xC30EF6C = 0x20;
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
                    t2 = FUN_0c03c5c0(0x0, t1, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
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
            t2 = FUN_0c03add8(0xC30EF6C, t1, a6, a7);
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
                    t1 = FUN_0c03afdc(t2);
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

int FUN_0c01d6cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC305050)->v);
    t1 = (((struct o4_int *)0xC305050)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t2 = 0x0;
                    if (t0 == 99) {
                        if (t1 != 0) {
                            if (t1 != 1) {
                                if (t1 != 2) {
                                    if (t1 != 3) {
                                        t0 = 0x0;
                                        if (t1 != 4) {
                                        } else {
                                            t3 = *(short *)0xC30EF6C;
                                            *(unsigned short *)0xC30EF6C = (t3 - 1);
                                            t0 = 0x0;
                                            if ((int)(short)(t3 - 1) <= 0) {
                                                t3 = 0xFFFFFFFC;
                                                if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                                } else {
                                                    (((struct o0_uint *)0xC305050)->v) = 0x2;
                                                    (((struct o4_uint *)0xC305050)->v) = 0x0;
                                                    t3 = 0x0;
                                                }
                                                t0 = t3;
                                            }
                                        }
                                        t3 = t0;
                                    } else {
                                        FUN_0c01c714(0xC305058, 0x1, 0x2);
                                        t0 = FUN_0c01cd2c(0x101);
                                        if ((short)t0 != 0) {
                                            FUN_0c05aab6(0x0, 0x3);
                                            *(unsigned short *)0xC30EF6C = 0x10;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                        t3 = 0x0;
                                    }
                                    t0 = t3;
                                } else {
                                    t3 = *(short *)0xC30EF6C;
                                    *(unsigned short *)0xC30EF6C = (t3 - 1);
                                    if ((int)(short)(t3 - 1) <= 0) {
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        FUN_0c01c714(0xC305058, 0x1, 0x2);
                                        t3 = FUN_0c01cd2c(0x101);
                                        if ((short)t3 != 0) {
                                            FUN_0c05aab6(0x0, 0x3);
                                            *(unsigned short *)0xC30EF6C = 0x10;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                    }
                                    t0 = 0x0;
                                }
                                t3 = t0;
                            } else {
                                t0 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t0 - 1);
                                if ((int)(short)(t0 - 1) <= 0) {
                                    (((struct o8_uint *)0xC305050)->v) = 0x1;
                                    FUN_0c018e9c(0x40, 0xC305058);
                                    (((struct oC_uint *)0xC305050)->v) = 0x40;
                                    *(unsigned short *)0xC30EF6C = 0x20;
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    t0 = *(short *)0xC30EF6C;
                                    *(unsigned short *)0xC30EF6C = (t0 - 1);
                                    if ((int)(short)(t0 - 1) <= 0) {
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        FUN_0c01c714(0xC305058, 0x1, 0x2);
                                        t0 = FUN_0c01cd2c(0x101);
                                        if ((short)t0 != 0) {
                                            FUN_0c05aab6(0x0, 0x3);
                                            *(unsigned short *)0xC30EF6C = 0x10;
                                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                        }
                                    }
                                }
                                t3 = 0x0;
                            }
                            t0 = t3;
                        } else {
                            FUN_0c018fd2(((((struct oC_int *)0xC305050)->v)));
                            *(unsigned short *)0xC30EF6C = 0xC;
                            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                            t3 = *(short *)0xC30EF6C;
                            *(unsigned short *)0xC30EF6C = (t3 - 1);
                            if ((int)(short)(t3 - 1) <= 0) {
                                (((struct o8_uint *)0xC305050)->v) = 0x1;
                                FUN_0c018e9c(0x40, 0xC305058);
                                (((struct oC_uint *)0xC305050)->v) = 0x40;
                                *(unsigned short *)0xC30EF6C = 0x20;
                                (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                t3 = *(short *)0xC30EF6C;
                                *(unsigned short *)0xC30EF6C = (t3 - 1);
                                if ((int)(short)(t3 - 1) <= 0) {
                                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    FUN_0c01c714(0xC305058, 0x1, 0x2);
                                    t3 = FUN_0c01cd2c(0x101);
                                    if ((short)t3 != 0) {
                                        FUN_0c05aab6(0x0, 0x3);
                                        *(unsigned short *)0xC30EF6C = 0x10;
                                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                                    }
                                }
                            }
                            t0 = 0x0;
                        }
                        t2 = t0;
                    }
                    t0 = t2;
                } else {
                    t2 = FUN_0c03c7ec(0x0);
                    if (t2 == 0) {
                        t3 = 0x0;
                        for (;;) {
                            if ((*(signed char *)((0xC30999E + t3))) != (unsigned char)(*(signed char *)(((0xC83C306 + t3) + 0x0)))) {
                                break;
                            }
                            t3 = (t3 + 0x1);
                            if ((int)t3 >= (int)0x8) {
                                return 0x1;
                            }
                        }
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    } else {
                        if (t2 != -1) {
                            (((struct o0_uint *)0xC305050)->v) = 0x63;
                            (((struct o4_uint *)0xC305050)->v) = 0x0;
                        }
                    }
                    t0 = 0x0;
                }
                t2 = t0;
            } else {
                t0 = FUN_0c03add8(0xC30EF6C, t1, 0x2, a7);
                if ((int)t0 < 0) {
                } else {
                    if ((t0 & 0x1) != 0) {
                        t3 = FUN_0c03afdc(t0);
                        if ((int)t3 < 0) {
                        } else {
                            if ((t3 & 0x1) != 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x3;
                            } else {
                                (((struct o0_uint *)0xC305050)->v) = 0x63;
                                (((struct o4_uint *)0xC305050)->v) = 0x0;
                            }
                        }
                    } else {
                        (((struct o0_uint *)0xC305050)->v) = 0x63;
                        (((struct o4_uint *)0xC305050)->v) = 0x0;
                    }
                }
                t2 = 0x0;
            }
            t0 = t2;
        } else {
            t2 = 0x1;
            if ((*(signed char *)0xC30B6FD) != 0) {
                (((struct o0_uint *)0xC305050)->v) = 0x2;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t2 = t0;
    } else {
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    t0 = 0x0;
                    if (t1 != 3) {
                    } else {
                        t1 = *(short *)0xC30EF6C;
                        *(unsigned short *)0xC30EF6C = (t1 - 1);
                        t3 = 0x0;
                        if ((int)(short)(t1 - 1) > 0) {
                        } else {
                            t1 = 0xFFFFFFFD;
                            if (((((struct o8_int *)0xC305050)->v)) == 0) {
                                (((struct o0_uint *)0xC305050)->v) = 0x1;
                                (((struct o4_uint *)0xC305050)->v) = 0x0;
                                t1 = 0x0;
                            }
                            t3 = t1;
                        }
                        t0 = t3;
                    }
                    t1 = t0;
                } else {
                    FUN_0c01c714(0xC305058, 0x1, 0x2);
                    t0 = FUN_0c01cd2c(0x101);
                    if ((short)t0 == 0) {
                    } else {
                        FUN_0c05aab6(0x0, 0x3);
                        *(unsigned short *)0xC30EF6C = 0x10;
                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                    }
                    t1 = 0x0;
                }
                t0 = t1;
            } else {
                t1 = *(short *)0xC30EF6C;
                *(unsigned short *)0xC30EF6C = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                } else {
                    (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                    (((struct o8_uint *)0xC305050)->v) = 0x0;
                    FUN_0c01c714(0xC305058, 0x1, 0x2);
                    t1 = FUN_0c01cd2c(0x101);
                    if ((short)t1 == 0) {
                    } else {
                        FUN_0c05aab6(0x0, 0x3);
                        *(unsigned short *)0xC30EF6C = 0x10;
                        (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
                    }
                }
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            FUN_0c018e9c(0x1B, 0xC305058);
            (((struct oC_uint *)0xC305050)->v) = 0x1B;
            *(unsigned short *)0xC30EF6C = 0x20;
            (((struct o4_uint *)0xC305050)->v) = (((((struct o4_int *)0xC305050)->v)) + 0x1);
            t1 = 0x0;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c0ae2b0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c037bf6(a4, a5, a6);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    switch (t0) {
    case 0:
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x2, (t0), 0x6, 0x2);
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xB, (t0), 0x6, 0xB);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = 0xFFFFF1C8;
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((20.0f * 65536.0f) / 360.0f);
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x3, (t0), 0x6, 0x3);
            FUN_0c1402c4(a4, 0x0);
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xD, (t0), 0x6, 0xD);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o78_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((70.0f * 65536.0f) / 360.0f);
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x2D0)))->v) = 0xFFFFF1C8;
            (((struct o7C_uint *)(((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x10E0) + (0x468 + a4)) + 0x360)))->v) = (int)((20.0f * 65536.0f) / 360.0f);
        }
        break;
    case 2:
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x6, 0x4, (t1), 0x6, 0x4);
        break;
    case 3:
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x6, 0x5, (t0), 0x6, 0x5);
        break;
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c037bf6(a4, t1, (0x118 + a4));
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
