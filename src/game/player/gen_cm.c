/* Straight-line functions with calls and guards (batch gen_cm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c089180(int a4, int a5, int a6);

int FUN_0c089180(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t25;
    register int t28;
    int t13;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t1 != 0) {
            t2 = FUN_0c085f66(a4);
            if (t2 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t1;
    }
    FUN_0c037bf6(a4, a5, a6);
    if (!((*(float *)0xC089294) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t13 = (((struct o22_short *)(a4))->v), t13 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
    }
    FUN_0c038362(a4);
    t25 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t25 - 1);
    t28 = (short)(t25 - 1);
    if ((int)(short)(t25 - 1) <= 0) {
        *(int *)((int)stk + 8) = 0xE9;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE9, 0xFFFFFFFF, 0x3, 0xE9);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t28 = 0x17;
    }
    return t28;
}
