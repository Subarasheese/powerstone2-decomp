/* Straight-line functions with calls and guards (batch gen_jr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o376C_int { char p[0x376C]; int v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c087e6e(int, int, int);
int FUN_0c087ecc(int, int, int, int, float);
int FUN_0c0c2d56(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c087f94(int a4, int a5, int a6);
int FUN_0c087de6(int a4, int a5, int a6);
int FUN_0c088000(int a4, int a5, int a6, int a7, float f4);

int FUN_0c087f94(int a4, int a5, int a6)
{
    register int t4;
    register int t5;

    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            t5 = FUN_0c085f66(a4);
            if (t5 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085d0c(a4);
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c087de6(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t1 = FUN_0c085f66(a4);
        if (t1 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c088000(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c087f94(a4, a5, a6);
        }
        return FUN_0c087ecc(a4, a5, a6, a7, f4);
    }
    return FUN_0c087e6e(a4, a5, a6);
}
