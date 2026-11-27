/* Straight-line functions with calls and guards (batch gen_alj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c056c28(int, int);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c05457a(void);

int FUN_0c05457a(void)
{
    int stk[10];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = *(int *)((int)stk + 0);
    v0_0 = *(signed char *)0xC542237;
    v0_2 = *(signed char *)0xC54223C;
    v0_1 = (((0xC2580CC + (((((v0_0 << 2) << 2) << 1) + v0_0) << 2)) + ((short)v0_2 * (short)0x2C)));
    if (((*(signed char *)((((0xC2580CC + (((((v0_0 << 2) << 2) << 1) + v0_0) << 2)) + ((short)v0_2 * (short)0x2C)) + 0x0))) == 0)) goto L_C054630;
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o10_float *)(v0_1))->v)) - ((((struct o4_float *)(v0_1))->v)));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    w0_1 = (((struct o18_float *)(v0_1))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (w0_1 - w0_0);
    v0_0 = ((((int)stk + 0) + 0x4));
    if (((w0_1 - w0_0) != 0.0f)) goto L_C0545DC;
    (((struct o8_float *)(v0_0))->v) = 9.99999997e-07f;
    L_C0545DC:;
    v0_0 = ((math_atan2_angle16(v0_1, R5, R6, R7, (*(float *)((v0_0 + 0x0))), ((((struct o8_float *)(v0_0))->v)))));
    L_C054632:;
    v0_1 = (0x0);
    R5 = (0x3938);
    R6 = (0xC532498);
    R7 = (0x4);
    L_C05463A:;
    if (((*(signed char *)((((v0_1 * R5) + R6) + 0x3714))) == 0)) goto L_C05464C;
    R7 = (v0_1);
    L_C054652:;
    v0_1 = 0xC2415B8;
    *(unsigned int *)0xC2415D8 = v0_0;
    *(unsigned int *)0xC241558 = v0_0;
    v0_2 = *(signed char *)((((R7 * R5) + R6) + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((0xC258E8C + (((v0_2 << 1) + v0_2) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((0xC258E8C + (((v0_2 << 1) + v0_2) << 2))); }
    w0_0 = math_cos_angle16(v0_0);
    w0_1 = (((struct o10_float *)(((int)stk + 0)))->v);
    w0_2 = ((math_sin_angle16(v0_0)) * ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v)));
    w0_2 = w0_2 + w0_1 * w0_0;
    (((struct o1C_float *)(((int)stk + 0)))->v) = w0_2;
    w0_0 = (-((math_sin_angle16(v0_0)) * ((((struct o10_float *)(((int)stk + 0)))->v))));
    w0_0 = w0_0 + ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v)) * (math_cos_angle16(v0_0));
    (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((v0_1) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x1C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC24156C) = *(struct mv3 *)((((int)stk + 0) + 0x1C)); }
    return (FUN_0c056c28(0xC241524, 0xC241538));
    L_C05464C:;
    v0_2 = (int)(v0_1 + 0x1) < (int)R7;
    v0_1 = ((v0_1 + 0x1));
    if (v0_2) goto L_C05463A;
    goto L_C054652;
    L_C054630:;
    v0_0 = ((*(int *)((v0_1 + 0x28))));
    goto L_C054632;
}
