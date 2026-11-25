/* Straight-line functions with calls and guards (batch gen_ne): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o37B4_float { char p[0x37B4]; float v; };
int FUN_0c042ff8(void);
int FUN_0c07cffa(int);
int FUN_0c07d4ec(int);
int FUN_0c07d838(int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080586(int);
int FUN_0c081dfc(int);
int FUN_0c083cf0(int);
int FUN_0c085cac(int, int, int);
int FUN_0c068832(int a4);

int FUN_0c068832(int a4)
{
    int stk[7];
    register int t0;
    register int t1;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t12;
    register int t21;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t31;
    register int t32;
    register int t35;
    register int t37;
    register int t39;
    register int t51;
    register float u40;
    register float u41;

    t0 = FUN_0c07cffa(a4);
    if (t0 != 0) {
    } else {
        t1 = FUN_0c083cf0(a4);
        if (t1 != 0) {
            return t1;
        }
        t3 = *(signed char *)((a4 + 0x371D));
        if (t3 != 2) {
            if ((t3 != 3) && ((t3 != 5) && (t3 != 6))) {
                t4 = FUN_0c07f18c(a4);
                if (t4 != 0) {
                    t5 = FUN_0c07fea4(a4, 0x0);
                    if (t5 == 0) {
                    } else {
                        return t5;
                    }
                }
                t6 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
                if (t6 != 0) {
                    return FUN_0c07d9dc(a4, t6);
                }
                t7 = FUN_0c07ebe6(a4);
                if (t7 != 0) {
                    (((struct o3717_uchar *)(a4))->v) = 0x4;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    return (FUN_0c085cac(a4, 0x4, 0x0));
                }
                t9 = FUN_0c07ebd0(a4);
                if (t9 != 0) {
                    return FUN_0c080586(a4);
                }
                t10 = FUN_0c07d4ec(a4);
                if (t10 != 0) {
                    (((struct o3717_uchar *)(a4))->v) = 0x18;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    return (FUN_0c085cac(a4, 0x18, 0x0));
                }
                t12 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if (t12 != 0) {
                    if (t12 == 2) {
                        (((struct o3717_uchar *)(a4))->v) = 0x0;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        FUN_0c085cac(a4, 0x0, 0x0);
                    }
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x5;
                    (((struct o3718_uchar *)(a4))->v) = 0x7;
                    FUN_0c085cac(a4, 0x5, 0x7);
                }
                t21 = FUN_0c042ff8();
                if (t21 != 0) {
                    if ((*(signed char *)((a4 + 0x3721))) != 0) {
                        return FUN_0c081dfc(a4);
                    }
                    return 0x3721;
                }
                return t21;
            }
            t24 = FUN_0c07ebd0(a4);
            if (t24 == 0) {
                t25 = FUN_0c07f18c(a4);
                if (t25 != 0) {
                    t26 = FUN_0c07fea4(a4, 0x0);
                    if (t26 != 0) {
                        return t26;
                    }
                    t27 = FUN_0c07ebe6(a4);
                    if (t27 == 0) {
                        t28 = FUN_0c07ecc6(a4, 0x0, 0x0);
                        if (t28 != 0) {
                            if (t28 != 2) {
                                return t28;
                            }
                        } else {
                            (((struct o3717_uchar *)(a4))->v) = 0x5;
                            (((struct o3718_uchar *)(a4))->v) = 0x7;
                            return (FUN_0c085cac(a4, 0x5, 0x7));
                        }
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x4;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        return (FUN_0c085cac(a4, 0x4, 0x0));
                    }
                } else {
                    t31 = FUN_0c07ebe6(a4);
                    if (t31 == 0) {
                        t32 = FUN_0c07ecc6(a4, 0x0, 0x0);
                        if (t32 != 0) {
                            if (t32 != 2) {
                                return t32;
                            }
                        } else {
                            (((struct o3717_uchar *)(a4))->v) = 0x5;
                            (((struct o3718_uchar *)(a4))->v) = 0x7;
                            return (FUN_0c085cac(a4, 0x5, 0x7));
                        }
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x4;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        return (FUN_0c085cac(a4, 0x4, 0x0));
                    }
                }
            } else {
                return FUN_0c080586(a4);
            }
        } else {
            t35 = FUN_0c07ebe6(a4);
            if (t35 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x6;
                return (FUN_0c085cac(a4, 0x5, 0x6));
            }
            t37 = FUN_0c07ebd0(a4);
            if (t37 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0xD;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return (FUN_0c085cac(a4, 0xD, 0x0));
            }
            t39 = FUN_0c07ecc6(a4, 0x0, 0x0);
            t51 = 0;
            if (t39 == 2) {
                u40 = (((struct o37B4_float *)(a4))->v);
                u41 = (((struct o2C_float *)(a4))->v);
                if (_builtin_fabsf((u41 - u40)) > 10.0f) {
                    (((struct o371D_uchar *)(a4))->v) = 0x0;
                    (((struct o3717_uchar *)(a4))->v) = 0x0;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    FUN_0c085cac(a4, 0x0, 0x0);
                } else {
                    _builtin_fabsf((u41 - u40));
                }
                t51 = ((_builtin_fabsf((u41 - u40)) > 10.0f));
            } else {
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                (((struct o3717_uchar *)(a4))->v) = 0x0;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                FUN_0c085cac(a4, 0x0, 0x0);
                t51 = (0);
            }
            return FUN_0c07ec9a(a4);
        }
    }
    (((struct o3717_uchar *)(a4))->v) = 0x0;
    (((struct o3718_uchar *)(a4))->v) = 0x0;
    return (FUN_0c085cac(a4, 0x0, 0x0));
}
