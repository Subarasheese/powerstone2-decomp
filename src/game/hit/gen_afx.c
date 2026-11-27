/* Straight-line functions with calls and guards (batch gen_afx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c06420e(int, float, float);
int FUN_0c064300(int, int, int, float);
int FUN_0c06440e(int a4, int a5);

int FUN_0c06440e(int a4, int a5)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R6;
    register int R11;
    register int R12;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_2 = *(signed char *)((v0_1 + 0x1));
    v0_3 = (v0_2);
    v0_0 = (v0_1);
    v0_1 = ((v0_1 + 0x8));
    if ((v0_2 == 0)) goto L_C064440;
    if ((v0_3 == 2)) goto L_C064440;
    if ((v0_3 == 1)) goto L_C064486;
    L_C064440:;
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + w0_0), (((((struct o8_float *)(v0_1))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) - w0_0), (((((struct o8_float *)(v0_1))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + w0_0), (((((struct o8_float *)(v0_1))->v)) - w0_0));
    w0_1 = (((struct oC_float *)(v0_1))->v);
    w0_0 = (((*(float *)((v0_1 + 0x0))) - w0_1));
    w0_1 = ((((((struct o8_float *)(v0_1))->v)) - w0_1));
    L_C0644DA:;
    FUN_0c06420e(((int)stk + 0), w0_0, w0_1);
    return (FUN_0c064300((*(int *)(((int)stk + 4))), v0_0, (*(int *)(((int)stk + 0))), 0.0f));
    L_C064486:;
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) + ((((struct o14_float *)(v0_1))->v))));
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) - ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) + ((((struct o14_float *)(v0_1))->v))));
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) - ((((struct o14_float *)(v0_1))->v))));
    w0_0 = (((*(float *)((v0_1 + 0x0))) - ((((struct oC_float *)(v0_1))->v))));
    w0_1 = ((((((struct o8_float *)(v0_1))->v)) - ((((struct o14_float *)(v0_1))->v))));
    goto L_C0644DA;
}
