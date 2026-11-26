/* Straight-line functions with calls and guards (batch gen_xg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
int FUN_0c07cffa(int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080586(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0693b6(int a4);

int FUN_0c0693b6(int a4)
{
    int t0;
    register int t1;

    t0 = FUN_0c07cffa(a4);
    if (t0 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x0, 0x0));
    }
    t0 = *(signed char *)((a4 + 0x371D));
    if ((t0 != 3) && ((t0 != 5) && (t0 != 6))) {
        t0 = FUN_0c07f18c(a4);
        if (t0 != 0) {
            t0 = FUN_0c07fea4(a4, 0x0);
            if (t0 == 0) {
            } else {
                return t0;
            }
        }
    } else {
        t0 = FUN_0c07f18c(a4);
        if (t0 != 0) {
            t0 = FUN_0c07fea4(a4, 0x0);
            if (t0 == 0) {
            } else {
                return t0;
            }
        }
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
