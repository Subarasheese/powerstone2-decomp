/* Straight-line functions with calls and guards (batch gen_alv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
int FUN_0c031c5a(void);
int FUN_0c031e6c(void);
int FUN_0c035024(void);
int FUN_0c0353e8(void);
int FUN_0c041026(int, int);
int FUN_0c041084(int);
int FUN_0c0410fa(void);
int FUN_0c041124(void);
int FUN_0c041218(void);
int FUN_0c041340(void);
int FUN_0c056d12(void);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c05aaf6(int);
int FUN_0c05ab04(int);
int FUN_0c05b052(int, int);
int FUN_0c073682(int, int);
int FUN_0c0d5188(void);
int FUN_0c1210e8(void);
int FUN_0c16c730(void);
int FUN_0c041450(void);
struct o20_int { char p[0x20]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };


int FUN_0c041450(void)
{
    int t55;
    int t36;
    int qa0;
    int t40;
    int t17;
    int t56;
    int t67;
    int t47;
    int t41;
    int t169;
    int t27;
    int t26;
    int t200;
    int t177;
    int t1;
    int t37;
    int t232;
    int t132;
    int t88;
    int t83;
    int t72;
    int t54;
    int t16;
    int t57;
    int t42;
    int t13;
    int t10;
    int t139;
    int t86;
    int t38;
    int t15;

    qa0 = 0xC542204;
    FUN_0c0410fa();
    t1 = FUN_0c0d5188();
    if (t1 != 0) {
        t10 = (FUN_0c041340());
    } else {
        if ((*(signed char *)0xC5429B4) == 0) {
            t10 = (FUN_0c041124());
        } else {
            t10 = (FUN_0c041218());
        }
    }
    t13 = *(signed char *)0xC5429B4;
    if (t13 != 1) {
        t16 = 0xC5429B4;
        t17 = 0x0;
        for (;;) {
            if ((int)t17 >= (int)0x4) {
                break;
            }
            t13 = (*(signed char *)(((0x3715) + ((t17 * 0x3938) + 0xC532498))));
            if (t13 == 41) {
                t15 = 0x1;
                t15 = ((int)t15 << (int)t17);
                t15 = (~t15);
                t16 = ((*(signed char *)0xC3BD447) & t15);
                *(unsigned char *)0xC3BD447 = t16;
            }
            t17 = (t17 + 0x1);
        }
        t26 = t17;
    }
    if ((t10 != 0) && (t27 = *(signed char *)0xC541F3D, (unsigned char)t27 != 1)) {
        (((struct o0_uchar *)0xC5421F9)->v) = ((*(signed char *)0xC5421F9) + 0x1);
        (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
        (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
        (((struct o3_uchar *)0xC5421F9)->v) = 0x0;
        (((struct o1A_uchar *)0xC54223A)->v) = 0x1;
        (((struct o3C_uchar *)0xC5421F9)->v) = 0x0;
        t36 = (FUN_0c041026(t26, t10));
        t40 = 0x0;
        t42 = t41;
        for (;;) {
            if ((int)t40 >= (int)0x4) {
                break;
            }
            t55 = 0xC5421F8;
            t55 = (t55 + 0x41);
            t38 = (*(signed char *)(t55));
            t55 = 0x1;
            t55 = ((int)t55 << (int)t40);
            if ((t38 & t55) != 0) {
                t36 = (*(signed char *)((((t40 * 0x3938) + 0xC532498) + 0x2)));
                t42 = t36;
                if ((t36 != 12) && (t47 = (t36 == 12), t36 = t42, t36 != 13)) {
                    t36 = 0x44;
                    t55 = (t40 * 0x98);
                    t55 = (t55 + 0xC541CDC);
                    t38 = (*(short *)((t55 + 0x44)));
                    t55 = 0x63;
                    if ((int)t38 < (int)t55) {
                        t37 = ((t40 * 0x98) + 0xC541CDC);
                        t38 = ((*(short *)((t37 + t36))) + 0x1);
                        *(unsigned short *)((t37 + t36)) = t38;
                    }
                }
            }
            t40 = (t40 + 0x1);
        }
        if (((*(signed char *)0xC5429B4) != 0) && ((*(signed char *)0xC5429B4) != 4)) {
        } else {
            t54 = 0xC5429B4;
            t56 = 0x0;
            t57 = t42;
            for (;;) {
                if ((int)t56 >= (int)0x4) {
                    break;
                }
                t55 = (*(signed char *)0xC3BD447);
                t54 = ((int)0x1 << (int)t56);
                t55 = (unsigned char)t55;
                if ((t54 & t55) != 0) {
                    t57 = ((t56 * 0x98) + 0xC541CDC);
                    t55 = ((((struct o20_int *)(t57))->v));
                    (((struct o24_uint *)(t57))->v) = t55;
                }
                t56 = (t56 + 0x1);
            }
        }
        (((struct o0_uchar *)0xC54223A)->v) = ((*(signed char *)0xC542239) & 0xF);
    } else {
        t67 = *(signed char *)0xC5421FA;
        if (t67 != 0) {
            if (t67 != 1) {
                if (t67 != 2) {
                    if (t67 == 3) {
                        t72 = FUN_0c041084(0x5A);
                        if (t72 == 1) {
                            FUN_0c05ab04(0xCC);
                        }
                        if (t72 == 2) {
                            FUN_0c05ab04(0xCC);
                            (((struct o1_uchar *)0xC5421F9)->v) = ((*(signed char *)0xC5421FA) + 0x1);
                            FUN_0c031c5a();
                            FUN_0c16c730();
                            (((struct o24_uchar *)0xC54223A)->v) = 0x1;
                            *(unsigned int *)qa0 = 0x78;
                        }
                    } else {
                        if (t67 == 4) {
                            t83 = *(int *)qa0;
                            *(unsigned int *)qa0 = (t83 - 1);
                            if ((int)(t83 - 1) <= 0) {
                                (((struct o1_uchar *)0xC5421F9)->v) = 0x63;
                                (((struct o24_uchar *)0xC54223A)->v) = 0x0;
                                t86 = 0xC532498;
                                for (;;) {
                                    if ((unsigned int)t86 >= (unsigned int)0xC540978) {
                                        break;
                                    }
                                    FUN_0c073682(t86, 0x10);
                                    t86 = (t86 + 0x3938);
                                }
                            } else {
                                t88 = *(int *)qa0;
                                if (t88 == 118) {
                                    FUN_0c056d12();
                                } else {
                                    if (t88 == 110) {
                                        FUN_0c05aaf6(0x88);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t132 = *(int *)qa0;
                    *(unsigned int *)qa0 = (t132 - 1);
                    if ((int)(t132 - 1) <= 0) {
                        (((struct o1_uchar *)0xC5421F9)->v) = ((*(signed char *)0xC5421FA) + 0x1);
                        *(unsigned short *)0xC542230 = 0x9;
                        *(unsigned short *)0xC542232 = 0x5A;
                        (((struct o24_uchar *)0xC54223A)->v) = 0x0;
                        FUN_0c0353e8();
                        FUN_0c059c7a(0x1B, 0x0);
                        FUN_0c059c54(0xF);
                        t139 = 0xC532498;
                        for (;;) {
                            if ((unsigned int)t139 >= (unsigned int)0xC540978) {
                                break;
                            }
                            FUN_0c073682(t139, 0xF);
                            t139 = (t139 + 0x3938);
                        }
                    } else {
                        if ((*(int *)qa0) != 118) {
                        } else {
                            FUN_0c056d12();
                        }
                    }
                }
            } else {
                if (((*(short *)0xC542230) == 0) && (t169 = *(short *)0xC542232, t169 == 30)) {
                    FUN_0c05b052(0x1E, 0x0);
                }
                t177 = FUN_0c041084(0x5A);
                if (t177 != 2) {
                } else {
                    if ((*(signed char *)0xC54235E) != 0) {
                        (((struct o1_uchar *)0xC5421F9)->v) = 0x63;
                    } else {
                        (((struct o1_uchar *)0xC5421F9)->v) = ((*(signed char *)0xC5421FA) + 0x1);
                        FUN_0c035024();
                        FUN_0c059c7a(0x1A, 0x0);
                        (((struct o24_uchar *)0xC54223A)->v) = 0x1;
                        *(unsigned int *)qa0 = 0x78;
                        FUN_0c16c730();
                    }
                }
            }
        } else {
            t200 = FUN_0c041084(0x3C);
            if (t200 != 2) {
            } else {
                (((struct o1_uchar *)0xC5421F9)->v) = ((*(signed char *)0xC5421FA) + 0x1);
                FUN_0c031e6c();
                FUN_0c05aaf6(0x89);
                FUN_0c0353e8();
                *(unsigned short *)0xC542230 = 0x9;
                *(unsigned short *)0xC542232 = 0x5A;
            }
        }
    }
    t232 = *(signed char *)0xC5429B4;
    if (t232 == 2) {
        return FUN_0c1210e8();
    }
    return t232;
}
