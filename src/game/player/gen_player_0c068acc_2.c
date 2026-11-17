/* game/player: functions 0C068ACC-0C0699DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3850_int { char p[0x3850]; int v; };
struct o42C_short { char p[0x42C]; short v; };
int FUN_0c07cffa(int);
int FUN_0c07d838(int, int, int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080586(int);
int FUN_0c083cf0(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0693b6(int a4);
int FUN_0c0694b6(int a4);
int FUN_0c0695b6(int a4, int a5, int a6, int a7);

int FUN_0c0693b6(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c07cffa(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x0, 0x0));
    }
    t0 = *(signed char *)((a4 + 0x371D));
    t0 = FUN_0c07f18c(a4);
    if (t0 != 0) {
        t0 = FUN_0c07fea4(a4, 0x0);
        if (t0 == 0) {
            t1 = FUN_0c07ebe6(a4);
            if (t1 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x4;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return (FUN_0c085cac(a4, 0x4, 0x0));
            }
            t1 = FUN_0c07ebd0(a4);
            if (t1 != 0) {
                return FUN_0c080586(a4);
            }
            t1 = FUN_0c07ecc6(a4, 0x1, 0x0);
            if (t1 != 0) {
                t2 = t1;
                if (t1 == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t2 = (FUN_0c085cac(a4, 0x6, 0x0));
                }
                t1 = t2;
            } else {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x7;
                t1 = (FUN_0c085cac(a4, 0x5, 0x7));
            }
            return t1;
        }
        return t0;
    }
    t0 = FUN_0c07ebe6(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x4;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x4, 0x0));
    }
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        return FUN_0c080586(a4);
    }
    t0 = FUN_0c07ecc6(a4, 0x1, 0x0);
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 2) {
            (((struct o3717_uchar *)(a4))->v) = 0x6;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            t1 = (FUN_0c085cac(a4, 0x6, 0x0));
        }
        t0 = t1;
    } else {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x7;
        t0 = (FUN_0c085cac(a4, 0x5, 0x7));
    }
    return t0;
}

int FUN_0c0694b6(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t10;
    register int t25;
    register int t26;
    register int t28;
    register int t31;
    register int t22;
    register int t43;

    t0 = FUN_0c07cffa(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x3;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x3, 0x0));
    }
    t2 = FUN_0c07f18c(a4);
    if (t2 != 0) {
        t3 = FUN_0c07fea4(a4, 0x0);
        if (t3 == 0) {
            t4 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            if (t4 != 0) {
                return FUN_0c07d9dc(a4, t4);
            }
            t5 = FUN_0c07ebe6(a4);
            if (t5 != 0) {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x2;
                t22 = (FUN_0c085cac(a4, 0x5, 0x2));
            } else {
                t7 = FUN_0c07ebd0(a4);
                if (t7 == 0) {
                    *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
                    (((struct o3717_uchar *)(a4))->v) = 0x0;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t22 = (FUN_0c085cac(a4, 0x0, 0x0));
                } else {
                    t10 = FUN_0c07ecc6(a4, 0x1, 0x0);
                    if (t10 != 0) {
                        t22 = t10;
                        if (t10 == 2) {
                            (((struct o3717_uchar *)(a4))->v) = 0x6;
                            (((struct o3718_uchar *)(a4))->v) = 0x0;
                            t22 = (FUN_0c085cac(a4, 0x6, 0x0));
                        }
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x5;
                        (((struct o3718_uchar *)(a4))->v) = 0x7;
                        t22 = (FUN_0c085cac(a4, 0x5, 0x7));
                    }
                }
            }
            return t22;
        }
        return t3;
    }
    t25 = FUN_0c07d838(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    if (t25 != 0) {
        return FUN_0c07d9dc(a4, t25);
    }
    t26 = FUN_0c07ebe6(a4);
    if (t26 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x2;
        t43 = (FUN_0c085cac(a4, 0x5, 0x2));
    } else {
        t28 = FUN_0c07ebd0(a4);
        if (t28 == 0) {
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
            (((struct o3717_uchar *)(a4))->v) = 0x0;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            t43 = (FUN_0c085cac(a4, 0x0, 0x0));
        } else {
            t31 = FUN_0c07ecc6(a4, 0x1, 0x0);
            if (t31 != 0) {
                t43 = t31;
                if (t31 == 2) {
                    (((struct o3717_uchar *)(a4))->v) = 0x6;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t43 = (FUN_0c085cac(a4, 0x6, 0x0));
                }
            } else {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x7;
                t43 = (FUN_0c085cac(a4, 0x5, 0x7));
            }
        }
    }
    return t43;
}

int FUN_0c0695b6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;

    t0 = FUN_0c083cf0(a4, a5, a6, a7);
    if (t0 == 0) {
        if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x100) != 0) {
            t3 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t3 + 0x1);
            if ((int)(short)(t3 + 0x1) >= (int)0x4) {
                (((struct o3717_uchar *)(a4))->v) = 0x5;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                return FUN_0c085cac(a4, 0x5, 0x0);
            }
            return (short)(t3 + 0x1);
        }
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x5, 0x0);
    }
    return t0;
}
