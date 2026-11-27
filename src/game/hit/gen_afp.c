/* Straight-line functions with calls and guards (batch gen_afp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c06420e(int, float, float);
int FUN_0c064300(int, int, int, float);
int FUN_0c06475c(int a4, int a5, float f4);

int FUN_0c06475c(int a4, int a5, float f4)
{
    int stk[3];

    register int R3;
    register int R6;
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
    w0_0 = f4;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(float *)(((int)stk + 8)) = w0_0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_2 = *(signed char *)((v0_1 + 0x1));
    v0_3 = (v0_2);
    v0_0 = (v0_1);
    v0_1 = ((v0_1 + 0x8));
    if ((v0_2 == 0)) goto L_C064788;
    if ((v0_3 == 2)) goto L_C064788;
    if ((v0_3 == 1)) goto L_C0647CE;
    L_C064788:;
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + w0_0), (((((struct o8_float *)(v0_1))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) - w0_0), (((((struct o8_float *)(v0_1))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + w0_0), (((((struct o8_float *)(v0_1))->v)) - w0_0));
    w0_1 = (((struct oC_float *)(v0_1))->v);
    w0_0 = (((*(float *)((v0_1 + 0x0))) - w0_1));
    w0_1 = ((((((struct o8_float *)(v0_1))->v)) - w0_1));
    L_C064822:;
    FUN_0c06420e(((int)stk + 0), w0_0, w0_1);
    return (FUN_0c064300((*(int *)(((int)stk + 4))), v0_0, (*(int *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
    L_C0647CE:;
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) + ((((struct o14_float *)(v0_1))->v))));
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) - ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) + ((((struct o14_float *)(v0_1))->v))));
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_1 + 0x0))) + ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) - ((((struct o14_float *)(v0_1))->v))));
    w0_0 = (((*(float *)((v0_1 + 0x0))) - ((((struct oC_float *)(v0_1))->v))));
    w0_1 = ((((((struct o8_float *)(v0_1))->v)) - ((((struct o14_float *)(v0_1))->v))));
    goto L_C064822;
}
