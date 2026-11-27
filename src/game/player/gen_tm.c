/* Straight-line functions with calls and guards (batch gen_tm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3850_int { char p[0x3850]; int v; };
int FUN_0c07cffa(int);
int FUN_0c07d838(int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0694b6(int a4);

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
    register int t22;

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
        } else {
            return t3;
        }
    }
    t4 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
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
