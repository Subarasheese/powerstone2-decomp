/* Straight-line functions with calls and guards (batch gen_ama): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c018f90(int, int, int);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cc56(int, int);
int FUN_0c01ccba(void);
int FUN_0c01ccda(void);
int FUN_0c01cd2c(int);
int FUN_0c01d094(void);
int FUN_0c01d27a(void);
int FUN_0c01e5dc(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c029c9e(void);
int FUN_0c029caa(void);
int FUN_0c05aab6(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c015416(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c015416(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int qa0;
    int t18;
    int qa1;
    int stk[4];
    int t78;
    int t0;
    int t98;
    int t49;
    int t119;
    int t117;
    int t107;
    int t105;
    int t12;
    int t93;
    int t88;
    int R1016;
    int R1008;
    int t46;
    int t128;
    int t118;
    int t116;
    int t106;
    int t104;
    int t101;
    int t100;
    int t92;
    int t91;
    int t86;
    int t63;
    int t45;
    int t17;
    int t11;
    int t9;
    int t1;
    int qe0;
    int t27;
    int t126;
    int t64;
    int t50;

    qa1 = 0xC3045F4;
    qa0 = 0xC3045F3;
    R1008 = *(int *)((int)stk + 4);
    R1016 = *(int *)((int)stk + 12);

    t0 = *(signed char *)0xC3045F2;
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c01ccba();
            *(unsigned short *)(((int)stk + 0)) = t1;
            if ((short)t1 != 0) {
                if ((*(signed char *)(((((*(signed char *)qa1) + (*(signed char *)qa0)) * 0x1A) + 0xC304610))) != 0) {
                    (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
                    FUN_0c05aab6(0x0, 0x3);
                    (((struct oB_uchar *)0xC3045F1)->v) = 0x1;
                    *(unsigned char *)0xC30542B = 0x0;
                    return FUN_0c018f90(0x3C, 0xC3045FC, ((((*(signed char *)qa1) + (*(signed char *)qa0)) * 0x1A) + 0xC304610));
                }
            }
            t9 = FUN_0c01ccda();
            *(unsigned short *)(((int)stk + 0)) = t9;
            if ((short)t9 != 0) {
                (((struct o1_uchar *)0xC3045F1)->v) = 0x0;
                t78 = (FUN_0c05aab6(0x0, 0x4));
            } else {
                t11 = FUN_0c01cd2c(0x2000);
                *(unsigned short *)(((int)stk + 0)) = t11;
                if (((short)t11 == 0) && (t12 = *(signed char *)0xC30EF9E, (unsigned char)t12 != 82)) {
                } else {
                    (((struct o2_uchar *)0xC3045F1)->v) = ((*(signed char *)qa0) - 1);
                    FUN_0c05aab6(0x0, 0x6);
                    if ((int)(*(signed char *)qa0) < 0) {
                        t17 = *(signed char *)qa1;
                        if (t17 == 0) {
                            t18 = 0x0;
                            for (;;) {
                                if ((*(signed char *)((((t18 * 0x1A) + 0xC304610) + 0x0))) != 0) {
                                    t18 = (t18 + 0x1);
                                    if ((int)t18 >= (int)0x32) {
                                        break;
                                    }
                                    continue;
                                }
                                break;
                            }
                            if ((int)t18 < (int)0x3) {
                                if (t18 == 0) {
                                    t27 = 0x0;
                                } else {
                                    t27 = (t18 - 1);
                                }
                            } else {
                                (((struct o3_uchar *)0xC3045F1)->v) = (t18 - 3);
                                t27 = 0x2;
                            }
                            (((struct o2_uchar *)0xC3045F1)->v) = t27;
                        } else {
                            (((struct o3_uchar *)0xC3045F1)->v) = (t17 - 1);
                            (((struct o2_uchar *)0xC3045F1)->v) = 0x0;
                        }
                    }
                }
                t45 = FUN_0c01cd2c(0x1000);
                *(unsigned short *)(((int)stk + 0)) = t45;
                if (((short)t45 == 0) && (t46 = *(signed char *)0xC30EF9E, (unsigned char)t46 != 81)) {
                    t78 = (unsigned char)t46;
                } else {
                    (((struct o2_uchar *)0xC3045F1)->v) = ((*(signed char *)qa0) + 0x1);
                    t64 = FUN_0c05aab6(0x0, 0x6);
                    t49 = *(signed char *)qa0;
                    t50 = *(signed char *)qa1;
                    if ((int)(*(signed char *)qa0) > (int)0x2) {
                        if ((int)(t50 + t49) < (int)0x32) {
                            if ((*(signed char *)((((t50 + t49) * 0x1A) + 0xC304610))) == 0) {
                                (((struct o2_uchar *)0xC3045F1)->v) = 0x0;
                                (((struct o3_uchar *)0xC3045F1)->v) = 0x0;
                            } else {
                                (((struct o2_uchar *)0xC3045F1)->v) = 0x2;
                                (((struct o3_uchar *)0xC3045F1)->v) = ((*(signed char *)qa1) + 0x1);
                            }
                            t78 = 0xC304610;
                        } else {
                            (((struct o2_uchar *)0xC3045F1)->v) = 0x0;
                            (((struct o3_uchar *)0xC3045F1)->v) = 0x0;
                            t78 = t64;
                        }
                    } else {
                        if ((*(signed char *)(((((t50 + t49) * 0x1A) + 0xC304610) + 0x0))) != 0) {
                        } else {
                            t63 = *(signed char *)qa0;
                            (((struct o2_uchar *)0xC3045F1)->v) = (t63 - 1);
                            t64 = (t63 - 1);
                        }
                        t78 = t64;
                    }
                }
            }
            return t78;
        }
        if (t0 == 2) {
            t86 = FUN_0c01cd2c(0x101);
            *(unsigned short *)(((int)stk + 0)) = t86;
            if ((short)t86 != 0) {
                FUN_0c018fd2(0x3C);
                t88 = FUN_0c05aab6(0x0, 0x3);
                if ((*(signed char *)0xC3045FC) == 0) {
                    (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
                    t91 = *(signed char *)qa0;
                    R1008 = t91;
                    t92 = *(signed char *)qa1;
                    t93 = R1008;
                    qe0 = (((t93 + t92) * 0x1A) + 0xC304610);
                    R1016 = qe0;
                    FUN_0c187a88((R1016), (qe0 + 0x1A), (((t91 - t92) + 0x32) * 0x1A));
                    (((struct o0_uchar *)0xC304B0A)->v) = 0x0;
                    (((struct o8_uchar *)0xC304B0A)->v) = 0x0;
                    *(unsigned char *)0xC30542B = 0x0;
                    FUN_0c187a88(0xC30A51E, 0xC304610, 0x514);
                    FUN_0c01d094();
                    return FUN_0c01d27a();
                }
                (((struct o1_uchar *)0xC3045F1)->v) = 0x0;
                *(unsigned char *)0xC30542B = 0x1;
                return t88;
            }
            return FUN_0c01c714(0xC3045FC, 0x1, 0x0);
        }
        if (t0 == 3) {
            t98 = FUN_0c01e5dc(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
            if (t98 != 0) {
                if (t98 == -3) {
                    (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
                    return FUN_0c029c9e();
                }
                (((struct o1_uchar *)0xC3045F1)->v) = 0x0;
                *(unsigned char *)0xC30542B = 0x1;
                return t98;
            }
            return t98;
        }
        t100 = FUN_0c029caa();
        if (t100 != 0) {
            *(unsigned char *)0xC30542B = 0x1;
            return FUN_0c010448();
        }
        return t100;
    }
    t101 = FUN_0c01ccba();
    *(unsigned short *)(((int)stk + 0)) = t101;
    if ((short)t101 != 0) {
        (((struct o1_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F2) + 0x1);
        (((struct o2_uchar *)0xC3045F1)->v) = 0x0;
        FUN_0c05aab6(0x0, 0x3);
        return FUN_0c01cc56(0x3B, 0xC0147D4);
    }
    t104 = FUN_0c01cd2c(0x2000);
    *(unsigned short *)(((int)stk + 0)) = t104;
    if (((short)t104 == 0) && (t105 = *(signed char *)0xC30EF9E, (unsigned char)t105 != 82)) {
        t106 = FUN_0c01cd2c(0x1000);
        *(unsigned short *)(((int)stk + 0)) = t106;
        if (((short)t106 == 0) && (t107 = *(signed char *)0xC30EF9E, (unsigned char)t107 != 81)) {
        } else {
            (((struct o0_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F1) - 1);
            FUN_0c05aab6(0x0, 0x6);
        }
    } else {
        (((struct o0_uchar *)0xC3045F1)->v) = ((*(signed char *)0xC3045F1) - 1);
        FUN_0c05aab6(0x0, 0x6);
    }
    t116 = FUN_0c01cd2c(0x400);
    *(unsigned short *)(((int)stk + 0)) = t116;
    if (((short)t116 == 0) && (t117 = *(signed char *)0xC30EF9E, (unsigned char)t117 != 79)) {
        t118 = FUN_0c01cd2c(0x800);
        *(unsigned short *)(((int)stk + 0)) = t118;
        if (((short)t118 == 0) && (t119 = *(signed char *)0xC30EF9E, (unsigned char)t119 != 80)) {
        } else {
            (((struct o0_uchar *)0xC3045F1)->v) = 0x1;
            FUN_0c05aab6(0x0, 0x5);
        }
    } else {
        (((struct o0_uchar *)0xC3045F1)->v) = 0x1;
        FUN_0c05aab6(0x0, 0x5);
    }
    t126 = FUN_0c01ccda();
    *(unsigned short *)(((int)stk + 0)) = t126;
    t128 = (short)t126;
    if ((short)t126 == 0) {
    } else {
        (((struct o0_uchar *)0xC3045F1)->v) = 0x3;
        t128 = (FUN_0c05aab6(0x0, 0x3));
    }
    return t128;
}
