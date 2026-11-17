/* game/player: functions 0C0A74B0-0C0A7FA2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f8aa(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c0a797c(int a4, int a5, int a6);

int FUN_0c0a797c(int a4, int a5, int a6)
{
    int stk[7];
    register int t1;
    register float u3;
    register float u6;
    register float u10;
    register int t13;
    register float u17;
    register float u21;
    register float u32;
    register int t40;
    register int t41;
    register int t51;
    register int t53;

    if (((*(int *)0xC542260) & 3) == 0) {
        t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        u3 = *(float *)0xC0A7AB4;
        u6 = (*(float *)(((int)stk + 0)));
        u6 = u6 + u3 * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 0)) = u6;
        u10 = (*(float *)(((int)stk + 8)));
        u10 = u10 + u3 * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 8)) = u10;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
        t13 = ((int (*)(void))(FUN_0c187798))();
        u17 = (*(float *)(((int)stk + 0)));
        u17 = u17 + u3 * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 0)) = u17;
        u21 = (*(float *)(((int)stk + 8)));
        u21 = u21 + u3 * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 8)) = u21;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    u32 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)(int)u32 <= (int)0x2F) {
        t40 = (a4 + 0x28);
        t41 = (a4 + 0x4C);
        if ((int)(int)u32 < (int)(*(int *)0xC25D3CC)) {
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t40 = (a4 + 0x4C);
            t41 = (a4 + 0x58);
        }
        math_vec3_accumulate(t40, t41);
    }
    t51 = FUN_0c037bf6(a4);
    t53 = (unsigned char)t51;
    if ((unsigned char)t51 != 0) {
        t53 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t53;
}
