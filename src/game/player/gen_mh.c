/* Straight-line functions with calls and guards (batch gen_mh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_short { char p[0x20]; short v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
int FUN_0c07d838(int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080586(int);
int FUN_0c085cac(int, int, int);
int FUN_0c06a10c(int a4);

int FUN_0c06a10c(int a4)
{
    int stk[3];
    int t0;
    register int t6;
    register int t11;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t27;
    register int t29;
    register int t12;

    t0 = (((struct o20_short *)(a4))->v);
    if (t0 != 0) {
        if ((t0 != 4) && (t0 != 9)) {
            if (t0 == 5) {
                return t0;
            }
            if (t0 == 6) {
                return t0;
            }
            if ((t0 != 7) && (t0 != 8)) {
            } else {
                return t0;
            }
        } else {
            if ((*(short *)((a4 + 0x1C))) == 0) {
                t6 = FUN_0c07f18c(a4);
                t12 = t6;
                if (t6 != 0) {
                    
                    t12 = (FUN_0c07fea4(a4, 0x2));
                }
            } else {
                t11 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t11 - 1);
                t12 = (t11 - 1);
            }
            return t12;
        }
    }
    t15 = FUN_0c07f18c(a4);
    if (t15 != 0) {
        t16 = FUN_0c07fea4(a4, 0x0);
        if (t16 == 0) {
        } else {
            return t16;
        }
    }
    t17 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
    if (t17 != 0) {
        return FUN_0c07d9dc(a4, t17);
    }
    t18 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t18 != 0) {
        if (t18 == 2) {
            (((struct o3717_uchar *)(a4))->v) = 0x0;
            (((struct o3718_uchar *)(a4))->v) = 0x0;
            FUN_0c085cac(a4, 0x0, 0x0);
        }
    } else {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x7;
        FUN_0c085cac(a4, 0x5, 0x7);
    }
    t27 = FUN_0c07ebe6(a4);
    if (t27 != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x4;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return (FUN_0c085cac(a4, 0x4, 0x0));
    }
    t29 = FUN_0c07ebd0(a4);
    if (t29 != 0) {
        return FUN_0c080586(a4);
    }
    return t29;
}
