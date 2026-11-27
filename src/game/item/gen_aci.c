/* Straight-line functions with calls and guards (batch gen_aci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c03f444(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c16be0a(int a4, int a5, int a6, int a7);

int FUN_0c16be0a(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R11;
    register float F3;
    register float F4;
    register float F13;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    v0_0 = (v0_3);
    if (((int)v0_2 >= 0)) goto L_C16BE4C;
    v0_2 = (0xF);
    L_C16BE52:;
    if ((v0_1 == 0)) goto L_C16BE8C;
    v0_3 = FUN_0c03f444(0x1, 0x0, 0x1, v0_1);
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C16BEEE;
    FUN_0c07e3ae(v0_1, 0x9C);
    *(int *)((int)stk + 12) = 0xFFFFFEF0;
    *(int *)((int)stk + 8) = 0x0;
    v0_2 = v0_2;
    *(int *)((int)stk + 4) = v0_2;
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(v0_1, 0x3, 0x4F, 0x0, 0x100, v0_2, 0x0, 0xFFFFFEF0);
    L_C16BE9C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x34)) = *(struct mv3 *)(v0_0); }
    w0_0 = *(float *)0xC16BF34;
    (((struct o4C_float *)(v0_1))->v) = (w0_0 * (math_sin_angle16((*(int *)((v0_0 + 0x4))))));
    w0_1 = math_cos_angle16((*(int *)((v0_0 + 0x4))));
    (((struct o54_float *)(v0_1))->v) = (w0_0 * w0_1);
    (((struct o50_float *)(v0_1))->v) = 0.0f;
    (((struct o5C_float *)(v0_1))->v) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x40)) = *(struct mv3 *)(0xC2A393C); }
    v0_0 = (v0_1);
    w0_0 = (w0_1);
    L_C16BEF0:;
    return v0_0;
    L_C16BEEE:;
    v0_0 = (0x0);
    goto L_C16BEF0;
    L_C16BE8C:;
    v0_2 = FUN_0c03f444(0x5, 0x0, 0x2, v0_1);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C16BEEE;
    goto L_C16BE9C;
    L_C16BE4C:;
    v0_2 = ((~((int)0x1 << (int)v0_2)));
    goto L_C16BE52;
}
