/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int vsprintf(int, int, int);
int FUN_0c2dc1ae(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c2dc1ae(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[13];
    register int t0;
    register int t3;
    register int t6;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    t0 = ((((int)stk + 4) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
        t0 = ((((int)stk + 4) + 0x8) + 0x8);
    }
    t3 = (((struct o0_int *)0xC3040A0)->v);
    t6 = (vsprintf(0xC8D52EC, a8, t0));
    if (t3 != 0) {
        t6 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t3))(((((struct o4_int *)0xC3040A0)->v)), 0xC8D52EC, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
    }
    return t6;
}
