/* Straight-line functions with calls and guards (batch gen_aem): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c08c1fe(int);
int FUN_0c08c33e(int);
int FUN_0c08c482(int);
int FUN_0c08c52c(int, int, int);
int FUN_0c08c68c(int, int, int);
int FUN_0c08c70a(int a4, int a5, int a6);

int FUN_0c08c70a(int a4, int a5, int a6)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c08c68c(a4, a5, a6);
        }
        return FUN_0c08c52c(a4, a5, a6);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        (((struct o3717_uchar *)(a4))->v) = 0x6;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c08c482(a4);
        }
        return FUN_0c08c33e(a4);
    }
    return FUN_0c08c1fe(a4);
}
