/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085cac(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c187798(int, int, int);
int FUN_0c0b1bc4(int a4);
int FUN_0c11563c(int a4, int a5, int a6, float f4);

int FUN_0c0b1bc4(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085cac(a4, 0xE, 0x0);
    }
    return FUN_0c038362(a4);
}

int FUN_0c11563c(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register float t6;
    register int t1;

    *(float *)(((int)stk + 0)) = f4;
    FUN_0c187798(a4, a5, a6);
    *(float *)(((int)stk + 4)) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o28_float *)(t1))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)0xC473CA8)->v)) - ((((struct o30_float *)(t1))->v)));
    t6 = FUN_0c0e2340((((int)stk + 0) + 0x4));
    return ((((*(float *)(((int)stk + 0))) > t6)) ? 1 : 0);
}
