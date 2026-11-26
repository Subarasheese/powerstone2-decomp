/* Straight-line functions with calls and guards (batch gen_adq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_vec3_accumulate(int, int);
float nlScalor(int);
int nlVoidUnitVector(int);
int FUN_0c066a14(int a4, int a5, int a6);

int FUN_0c066a14(int a4, int a5, int a6)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC1C4BF0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 0)))) = *(struct mv3 *)((v0_0 + 0x8)); }
    *(float *)(((int)stk + 4)) = (((((struct o8_float *)(v0_1))->v)) - ((((struct o8_float *)(v0_0))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)((v0_1 + 0x8)))->v)) - ((((struct o8_float *)((v0_0 + 0x8)))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o4_float *)((v0_1 + 0x8)))->v)) - ((((struct o4_float *)((v0_0 + 0x8)))->v)));
    v0_3 = *(signed char *)((v0_0 + 0x1));
    v0_4 = (v0_3);
    v0_2 = (0xC17C2A0);
    v0_2 = (0xC17C4D0);
    v0_2 = (v0_0);
    v0_0 = ((v0_1 + 0x8));
    if ((v0_3 == 0)) goto L_C066A7A;
    if ((v0_4 == 1)) goto L_C066AB8;
    if ((v0_4 == 2)) goto L_C066AF6;
    L_C066B3C:;
    return v0_4;
    L_C066AF6:;
    v0_0 = (nlScalor((((int)stk + 0) + 0x4))) == 0.0f;
    if (v0_0) goto L_C066B32;
    nlVoidUnitVector((((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(v0_2))->v)));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o14_float *)(v0_2))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o18_float *)(v0_2))->v)));
    L_C066B32:;
    v0_4 = ((math_vec3_accumulate((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10))));
    goto L_C066B3C;
    L_C066AB8:;
    v0_0 = (nlScalor((((int)stk + 0) + 0x4))) == 0.0f;
    if (v0_0) goto L_C066B32;
    nlVoidUnitVector((((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(v0_2))->v)));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o1C_float *)(v0_2))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o18_float *)(v0_2))->v)));
    goto L_C066B32;
    L_C066A7A:;
    v0_0 = (nlScalor((((int)stk + 0) + 0x4))) == 0.0f;
    if (v0_0) goto L_C066B32;
    nlVoidUnitVector((((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 4))) * ((((struct o14_float *)(v0_2))->v)));
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 12))) * ((((struct o14_float *)(v0_2))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 8))) * ((((struct o14_float *)(v0_2))->v)));
    goto L_C066B32;
}
