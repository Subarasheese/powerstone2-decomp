/* game/unsorted: functions 0C06817C-0C068AB8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o374E_uchar { char p[0x374E]; unsigned char v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
int FUN_0c042ff8(void);
int FUN_0c067294(int);
int FUN_0c07c5dc(int, int, int, float);
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
int FUN_0c0d01f2(int);
int FUN_0c15363c(int);
int FUN_0c06817c(int a4, float f4);
void FUN_0c06822c(void);
int FUN_0c068832(int a4);

int FUN_0c06817c(int a4, float f4)
{
    register int t0;
    register int t1;

    FUN_0c07c5dc(a4, 0x2, 0x1, f4);
    FUN_0c15363c(a4);
    if ((*(signed char *)((a4 + 0x374D))) != 0) {
        (((struct o374D_uchar *)(a4))->v) = 0x0;
        FUN_0c0d01f2((*(signed char *)((a4 + 0x374E))));
        (((struct o374E_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x2))) != 14) {
        t0 = 0x371A;
        if ((*(signed char *)((a4 + 0x371A))) != 0) {
            (((struct o371A_uchar *)(a4))->v) = 0x0;
            (((struct o371C_uchar *)(a4))->v) = 0x0;
            (((struct o37B8_float *)(a4))->v) = 0.0f;
            FUN_0c067294(a4);
            t1 = *(signed char *)((a4 + 0x2));
            if ((t1 == 8) || ((t1 == 11) || (t1 == 10))) {
                if ((*(signed char *)((a4 + 0x3715))) == 0) {
                    FUN_0c085cac(a4, 0x0, 0x0);
                }
                if ((*(signed char *)((a4 + 0x3715))) == 1) {
                    FUN_0c085cac(a4, 0x1, 0x1);
                }
            }
            t1 = *(signed char *)((a4 + 0x3715));
            t0 = t1;
            if (t1 == 24) {
                t0 = (FUN_0c085cac(a4, 0x0, 0x0));
            }
        }
        t1 = t0;
    } else {
        (((struct o371A_uchar *)(a4))->v) = 0x0;
        (((struct o371C_uchar *)(a4))->v) = 0x0;
        (((struct o37B8_float *)(a4))->v) = 0.0f;
        t1 = 0x37B8;
    }
    return t1;
}

void FUN_0c06822c(void)
{
    
}

int FUN_0c068832(int a4)
{
    int stk[7];
    register int t0;
    register int t2;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t13;
    register int t22;
    register int t25;
    register int t26;
    register int t28;
    register int t29;
    register int t31;
    register int t40;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t63;
    register int t64;
    register int t80;
    register int t82;
    register int t84;
    register int t96;
    register float u85;
    register float u86;
    register int t77;

    t0 = FUN_0c07cffa(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x0, 0x0));
    }
    t2 = FUN_0c083cf0(a4);
    if (t2 != 0) {
        return t2;
    }
    t4 = *(signed char *)((a4 + 0x371D));
    if (t4 != 2) {
        if ((t4 != 3) && ((t4 != 5) && (t4 != 6))) {
            t5 = FUN_0c07f18c(a4);
            if (t5 != 0) {
                t6 = FUN_0c07fea4(a4, 0x0);
                if (t6 == 0) {
                    t7 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
                    if (t7 != 0) {
                        return FUN_0c07d9dc(a4, t7);
                    }
                    t8 = FUN_0c07ebe6(a4);
                    if (t8 != 0) {
                        (((struct o3717_uchar *)(a4))->v) = 0x4;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        return (FUN_0c085cac(a4, 0x4, 0x0));
                    }
                    t10 = FUN_0c07ebd0(a4);
                    if (t10 != 0) {
                        return FUN_0c080586(a4);
                    }
                    t11 = FUN_0c07d4ec(a4);
                    if (t11 != 0) {
                        (((struct o3717_uchar *)(a4))->v) = 0x18;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        return (FUN_0c085cac(a4, 0x18, 0x0));
                    }
                    t13 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t13 != 0) {
                        if (t13 == 2) {
                            (((struct o3717_uchar *)(a4))->v) = 0x0;
                            (((struct o3718_uchar *)(a4))->v) = 0x0;
                            FUN_0c085cac(a4, 0x0, 0x0);
                        }
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x5;
                        (((struct o3718_uchar *)(a4))->v) = 0x7;
                        FUN_0c085cac(a4, 0x5, 0x7);
                    }
                    t22 = FUN_0c042ff8();
                    if (t22 != 0) {
                        if ((*(signed char *)((a4 + 0x3721))) != 0) {
                            return FUN_0c081dfc(a4);
                        }
                        return 0x3721;
                    }
                    return t22;
                }
                return t6;
            }
            t25 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
            if (t25 != 0) {
                return FUN_0c07d9dc(a4, t25);
            }
            t26 = FUN_0c07ebe6(a4);
            if (t26 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x4;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return (FUN_0c085cac(a4, 0x4, 0x0));
            }
            t28 = FUN_0c07ebd0(a4);
            if (t28 != 0) {
                return FUN_0c080586(a4);
            }
            t29 = FUN_0c07d4ec(a4);
            if (t29 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x18;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return (FUN_0c085cac(a4, 0x18, 0x0));
            }
            t31 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t31 != 0) {
                if (t31 == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x0;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    FUN_0c085cac(a4, 0x0, 0x0);
                }
            } else {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x7;
                FUN_0c085cac(a4, 0x5, 0x7);
            }
            t40 = FUN_0c042ff8();
            if (t40 != 0) {
                if ((*(signed char *)((a4 + 0x3721))) != 0) {
                    return FUN_0c081dfc(a4);
                }
                return 0x3721;
            }
            return t40;
        }
        t43 = FUN_0c07ebd0(a4);
        if (t43 == 0) {
            t44 = FUN_0c07f18c(a4);
            if (t44 != 0) {
                t45 = FUN_0c07fea4(a4, 0x0);
                t77 = t45;
                if (t45 != 0) {
                } else {
                    t46 = FUN_0c07ebe6(a4);
                    if (t46 == 0) {
                        t47 = FUN_0c07ecc6(a4, 0x0, 0x0);
                        if (t47 != 0) {
                            t77 = t47;
                            if (t47 != 2) {
                            } else {
                                (((struct o3717_uchar *)(a4))->v) = 0x0;
                                (((struct o3718_uchar *)(a4))->v) = 0x0;
                                t77 = (FUN_0c085cac(a4, 0x0, 0x0));
                            }
                        } else {
                            (((struct o3717_uchar *)(a4))->v) = 0x5;
                            (((struct o3718_uchar *)(a4))->v) = 0x7;
                            t77 = (FUN_0c085cac(a4, 0x5, 0x7));
                        }
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x4;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        t77 = (FUN_0c085cac(a4, 0x4, 0x0));
                    }
                }
            } else {
                t63 = FUN_0c07ebe6(a4);
                if (t63 == 0) {
                    t64 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t64 != 0) {
                        t77 = t64;
                        if (t64 != 2) {
                        } else {
                            (((struct o3717_uchar *)(a4))->v) = 0x0;
                            (((struct o3718_uchar *)(a4))->v) = 0x0;
                            t77 = (FUN_0c085cac(a4, 0x0, 0x0));
                        }
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x5;
                        (((struct o3718_uchar *)(a4))->v) = 0x7;
                        t77 = (FUN_0c085cac(a4, 0x5, 0x7));
                    }
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0x4;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t77 = (FUN_0c085cac(a4, 0x4, 0x0));
                }
            }
            return t77;
        }
        return FUN_0c080586(a4);
    }
    t80 = FUN_0c07ebe6(a4);
    if (t80 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x6;
        return (FUN_0c085cac(a4, 0x5, 0x6));
    }
    t82 = FUN_0c07ebd0(a4);
    if (t82 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0xD;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0xD, 0x0));
    }
    t84 = FUN_0c07ecc6(a4, 0x0, 0x0);
    t96 = 0;
    if (t84 == 2) {
        u85 = (((struct o37B4_float *)(a4))->v);
        u86 = (((struct o2C_float *)(a4))->v);
        if (_builtin_fabsf((u86 - u85)) > 10.0f) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
            (((struct o3717_uchar *)(a4))->v) = 0x0;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            FUN_0c085cac(a4, 0x0, 0x0);
        } else {
            _builtin_fabsf((u86 - u85));
        }
        t96 = ((_builtin_fabsf((u86 - u85)) > 10.0f));
    } else {
        (((struct o371D_uchar *)(a4))->v) = 0x0;
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        FUN_0c085cac(a4, 0x0, 0x0);
        t96 = (0);
    }
    return FUN_0c07ec9a(a4);
}
