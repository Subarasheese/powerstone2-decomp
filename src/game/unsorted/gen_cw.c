/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c08b144(int a4, int a5, int a6);

int FUN_0c08b144(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t6;
    register int t38;
    register int t18;
    register int t27;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t6 = FUN_0c085f66(a4);
        if (t6 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    t38 = 0x8C;
    if (!((*(float *)0xC08B258) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        t18 = *(short *)((a4 + 0x1E));
        t38 = t18;
        if (t18 == 0) {
            t38 = 0x20;
            if (((((struct o20_short *)(a4))->v)) == 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
                FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
                t27 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t27 + 0x1);
                t38 = (t27 + 0x1);
            }
        }
    }
    return t38;
}
