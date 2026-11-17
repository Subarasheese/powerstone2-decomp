/* game/unsorted: functions 0C08CD34-0C08D132, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c070320(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f824(int, int);
int FUN_0c08ce34(int a4);

int FUN_0c08ce34(int a4)
{
    int stk[5];
    int t0;
    register float u7;
    register int t35;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return (FUN_0c085cac(a4, 0x6, 0x0));
    }
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
    *(float *)(((int)stk + 4)) = ((((struct o168_float *)(a4))->v));
    u7 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)u7 != 7) {
        if ((int)u7 != 8) {
            if ((int)u7 != 9) {
                if ((int)u7 != 10) {
                } else {
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 60.0f);
                    FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
                }
            } else {
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 20.0f);
                FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
            }
        } else {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 10.0f);
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
        }
    } else {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
    }
    t35 = FUN_0c037bf6(a4);
    if ((unsigned char)t35 != 0) {
        return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    FUN_0c070320(a4);
    return (FUN_0c038362(a4));
}
