/* Straight-line functions with calls and guards (batch gen_afo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c06420e(int, float, float);
int FUN_0c06050c(int a4);

int FUN_0c06050c(int a4)
{
    int stk[1];

    register int R3;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = (v0_1);
    v0_0 = ((v0_0 + 0x8));
    if ((v0_1 == 0)) goto L_C06052E;
    if ((v0_2 == 2)) goto L_C06052E;
    if ((v0_2 == 1)) goto L_C06057A;
    L_C06052E:;
    w0_0 = (((struct oC_float *)(v0_0))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_0 + 0x0))) + w0_0), (((((struct o8_float *)(v0_0))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_0))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_0 + 0x0))) - w0_0), (((((struct o8_float *)(v0_0))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_0))->v);
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_0 + 0x0))) + w0_0), (((((struct o8_float *)(v0_0))->v)) - w0_0));
    w0_1 = (((struct oC_float *)(v0_0))->v);
    w0_0 = (((*(float *)((v0_0 + 0x0))) - w0_1));
    w0_1 = ((((((struct o8_float *)(v0_0))->v)) - w0_1));
    L_C0605D4:;
    FUN_0c06420e(((int)stk + 0), w0_0, w0_1);
    return (*(int *)(((int)stk + 0)));
    L_C06057A:;
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_0 + 0x0))) + ((((struct oC_float *)(v0_0))->v))), (((((struct o8_float *)(v0_0))->v)) + ((((struct o14_float *)(v0_0))->v))));
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_0 + 0x0))) - ((((struct oC_float *)(v0_0))->v))), (((((struct o8_float *)(v0_0))->v)) + ((((struct o14_float *)(v0_0))->v))));
    FUN_0c06420e(((int)stk + 0), ((*(float *)((v0_0 + 0x0))) + ((((struct oC_float *)(v0_0))->v))), (((((struct o8_float *)(v0_0))->v)) - ((((struct o14_float *)(v0_0))->v))));
    w0_0 = (((*(float *)((v0_0 + 0x0))) - ((((struct oC_float *)(v0_0))->v))));
    w0_1 = ((((((struct o8_float *)(v0_0))->v)) - ((((struct o14_float *)(v0_0))->v))));
    goto L_C0605D4;
}
