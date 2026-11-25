/* Straight-line functions with calls and guards (batch gen_alr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c0582de(int, int);
int FUN_0c0b1c7e(int);
int FUN_0c0b1d20(int, int);
float FUN_0c17c450(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
float math_vec2_cos_between(float, float, float, float);
int nlSubVector3op(int, int, int);
int FUN_0c0b2064(int a4);

int FUN_0c0b2064(int a4)
{
    int stk[15];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register float F5;
    register float F6;
    register float F7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xFFFFFFFF;
    FUN_0c0b1c7e((((int)stk + 0) + 0x2C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC1C65E0); }
    FUN_0c0582de((((int)stk + 0) + 0x20), (((((struct oD4_int *)(v0_0))->v)) + 0x28));
    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 36)) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (math_cos_angle16((*(int *)((v0_0 + 0x38)))));
    w0_0 = math_sin_angle16((*(int *)((v0_0 + 0x38))));
    (((struct o14_float *)(((int)stk + 0)))->v) = w0_0;
    v0_0 = (v0_0);
    v0_1 = ((((int)stk + 0) + 0x2C));
    v0_2 = ((((int)stk + 0) + 0x14));
    v0_3 = (0x3938);
    v0_4 = (0x0);
    w0_4 = (w0_0);
    w0_0 = (700.0f);
    w0_1 = (50.0f);
    w0_2 = (999999.0f);
    L_C0B2188:;
    if (((int)v0_4 < (int)0x4)) goto L_C0B2100;
    return (*(int *)(((int)stk + 4)));
    L_C0B2100:;
    v0_5 = (FUN_0c0b1d20((*(int *)((v0_1 + (v0_4 << 2)))), (*(signed char *)((v0_0 + 0x1))))) != 0;
    if (v0_5) goto L_C0B2186;
    v0_5 = (((v0_4 << 2) + v0_1));
    v0_6 = (0xC532498);
    if ((((((struct o2C_float *)((((*(int *)((((v0_4 << 2) + v0_1) + 0x0))) * v0_3) + 0xC532498)))->v)) > (*(float *)(((int)stk + 0))))) goto L_C0B2186;
    nlSubVector3op((((int)stk + 0) + 0x8), ((((*(int *)((v0_5 + 0x0))) * v0_3) + v0_6) + 0x28), (((int)stk + 0) + 0x20));
    w0_5 = FUN_0c17c450((((int)stk + 0) + 0x8));
    w0_3 = math_vec2_cos_between((*(float *)((v0_2 + 0x0))), ((((struct o8_float *)(v0_2))->v)), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16))));
    w0_4 = (w0_3);
    w0_4 = (w0_5);
    w0_5 = (w0_3);
    if ((0.0f > w0_3)) goto L_C0B2186;
    if ((!(((((struct o0_float *)0xC0B222C)->v)) > w0_5))) goto L_C0B2176;
    if ((w0_4 > ((((struct o4_float *)0xC0B222C)->v)))) goto L_C0B2186;
    L_C0B2176:;
    if ((w0_1 > w0_4)) goto L_C0B2186;
    if ((w0_4 > w0_0)) goto L_C0B2186;
    if ((!(w0_2 > w0_4))) goto L_C0B2186;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    w0_2 = (w0_4);
    L_C0B2186:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C0B2188;
}
