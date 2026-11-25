/* Straight-line functions with calls and guards (batch gen_adk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c064262(int, float, float);
int FUN_0c064696(int a4, int a5);

int FUN_0c064696(int a4, int a5)
{

    register int R13;
    register float F3;
    register float F4;
    register float F5;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = R13;
    v0_0 = *(signed char *)((v0_2 + 0x1));
    v0_3 = (v0_0);
    R13 = (v0_1);
    v0_1 = ((v0_2 + 0x8));
    if ((v0_0 == 0)) goto L_C0646B6;
    if ((v0_3 == 2)) goto L_C0646B6;
    if ((v0_3 == 1)) goto L_C0646FC;
    L_C0646B6:;
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c064262(R13, ((*(float *)((v0_1 + 0x0))) + w0_0), (((((struct o8_float *)(v0_1))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c064262(R13, ((*(float *)((v0_1 + 0x0))) - w0_0), (((((struct o8_float *)(v0_1))->v)) + w0_0));
    w0_0 = (((struct oC_float *)(v0_1))->v);
    FUN_0c064262(R13, ((*(float *)((v0_1 + 0x0))) + w0_0), (((((struct o8_float *)(v0_1))->v)) - w0_0));
    *(volatile float *)((v0_1 + 0x0));
    *(volatile float *)((v0_1 + 0xC));
    *(volatile float *)((v0_1 + 0x8));
    L_C064750:;
    return FUN_0c064262(R13, F4, F5);
    L_C0646FC:;
    FUN_0c064262(R13, ((*(float *)((v0_1 + 0x0))) + ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) + ((((struct o14_float *)(v0_1))->v))));
    FUN_0c064262(R13, ((*(float *)((v0_1 + 0x0))) - ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) + ((((struct o14_float *)(v0_1))->v))));
    FUN_0c064262(R13, ((*(float *)((v0_1 + 0x0))) + ((((struct oC_float *)(v0_1))->v))), (((((struct o8_float *)(v0_1))->v)) - ((((struct o14_float *)(v0_1))->v))));
    *(volatile float *)((v0_1 + 0x0));
    *(volatile float *)((v0_1 + 0x14));
    *(volatile float *)((v0_1 + 0x8));
    *(volatile float *)((v0_1 + 0xC));
    goto L_C064750;
}
