/* Straight-line functions with calls and guards (batch gen_wr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
int FUN_0c064f80(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0737e8(int a4);

int FUN_0c0737e8(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_2 = a4;
    v0_0 = R12;
    v0_1 = R11;
    v0_3 = R10;
    v0_4 = R9;
    v0_5 = R8;
    R10 = (0x3938);
    R11 = (0x4);
    R12 = (v0_2);
    v0_0 = (0x0);
    R8 = (0xC085CAC);
    R9 = (0xC532498);
    L_C073804:;
    v0_4 = *(signed char *)((((v0_0 * R10) + R9) + 0x2));
    v0_1 = (v0_4);
    v0_3 = (((v0_0 * R10) + R9));
    v0_2 = (v0_4);
    if ((v0_4 == 12)) goto L_C07384E;
    v0_1 = (v0_2);
    if ((v0_2 == 13)) goto L_C07384E;
    v0_2 = (*(signed char *)((v0_3 + 0x3714))) == 0;
    v0_1 = (0x3714);
    if (v0_2) goto L_C07384E;
    v0_2 = !(((((struct o160_float *)(v0_3))->v)) > 0.0f);
    v0_1 = (0x160);
    if (v0_2) goto L_C07384E;
    v0_2 = *(signed char *)((R12 + 0x1));
    v0_1 = (v0_2);
    if ((v0_2 == v0_0)) goto L_C07384E;
    v0_2 = (*(signed char *)((R12 + 0x3719))) == (*(signed char *)((v0_3 + 0x3719)));
    v0_1 = (0x3719);
    if (v0_2) goto L_C07384E;
    v0_2 = FUN_0c064f80(v0_3);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C07384E;
    v0_1 = FUN_0c085cac(v0_3, 0x11, 0x0);
    v0_1 = (v0_1);
    L_C07384E:;
    v0_2 = (int)(v0_0 + 0x1) < (int)R11;
    v0_0 = ((v0_0 + 0x1));
    if (v0_2) goto L_C073804;
    return v0_1;
}
