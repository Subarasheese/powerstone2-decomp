/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07ebd0(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c06f338(int a4);

int FUN_0c06f338(int a4)
{
    int t0;
    register int t1;

    t1 = FUN_0c07ebd0(a4);
    if (t1 == 0) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    }
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 == 0) {
        t1 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t1 - 1);
        if (((int)(short)(t1 - 1) <= 0) && (t0 = (((struct o20_short *)(a4))->v), t0 == 0)) {
            if (((((struct o20_short *)(a4))->v)) != 0) {
                return FUN_0c085d0c(a4);
            }
            t0 = 0x1;
            if ((*(signed char *)((a4 + 0x2))) != 3) {
                t0 = 0x0;
            }
            return FUN_0c085cac(a4, 0x1, t0);
        }
        return FUN_0c038362(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        return FUN_0c085d0c(a4);
    }
    t0 = 0x1;
    if ((*(signed char *)((a4 + 0x2))) != 3) {
        t0 = 0x0;
    }
    return FUN_0c085cac(a4, 0x1, t0);
}
