/* Straight-line functions with calls and guards (batch gen_akt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_short { char p[0x128]; short v; };
struct o404_int { char p[0x404]; int v; };
float FUN_0c064d9c(int);
int FUN_0c064f8e(int, int);
int FUN_0c0655dc(int, int, int, int, int, float);
int FUN_0c06588a(int a4, int a5, int a6, int a7, int a8);

int FUN_0c06588a(int a4, int a5, int a6, int a7, int a8)
{
    int stk[12];

    register int R2;
    register int R3;
    int R4;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    R4 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_0 = a7;
    *(unsigned short *)(((int)stk + 8)) = v0_6;
    *(unsigned int *)(((int)stk + 12)) = v0_0;
    v0_3 = (((struct o404_int *)(R4))->v);
    v0_6 = (FUN_0c064f8e(R4, (((int)stk + 4) + 0xC))) != 0;
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_2 = (0x1);
    v0_3 = (v0_3);
    v0_4 = (v0_5);
    if (v0_6) goto L_C065920;
    v0_0 = (0x0);
    L_C065928:;
    return v0_0;
    L_C065920:;
    if ((v0_3 != 0)) goto L_C0658BC;
    v0_0 = (v0_0);
    goto L_C065928;
    L_C0658BC:;
    v0_5 = *(short *)(((int)stk + 8));
    v0_7 = ((*(int *)((v0_3 + 0x8))));
    R4 = (v0_5);
    v0_6 = (v0_1);
    if (((v0_5 & 0x10) == 0)) goto L_C0658E2;
    v0_8 = *(int *)((v0_3 + 0x4));
    v0_5 = (v0_8);
    if ((v0_8 == 0)) goto L_C0658DA;
    if (((((((struct o128_short *)(v0_5))->v)) & R4) != 0)) goto L_C0658F0;
    L_C0658DA:;
    if ((v0_5 != 0)) goto L_C0658F2;
    L_C0658F0:;
    v0_6 = (v0_2);
    L_C0658F2:;
    if ((v0_6 == 0)) goto L_C06591E;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_5 = (FUN_0c0655dc((*(int *)(((int)stk + 12))), a8, (((int)stk + 0) + 0x10), v0_7, ((int)stk + 4), F4)) == 0;
    if (v0_5) goto L_C06591E;
    w0_0 = FUN_0c064d9c(v0_7);
    w0_1 = (w0_0);
    F4 = (w0_0);
    if ((!(w0_0 > (*(float *)((v0_4 + 0x0)))))) goto L_C06591E;
    *(float *)((v0_4 + 0x0)) = F4;
    v0_0 = (v0_2);
    L_C06591E:;
    v0_3 = ((*(int *)((v0_3 + 0x0))));
    goto L_C065920;
    L_C0658E2:;
    v0_8 = *(int *)((v0_3 + 0x4));
    v0_5 = (v0_8);
    if ((v0_8 == 0)) goto L_C0658F2;
    if (((((((struct o128_short *)(v0_5))->v)) & R4) == 0)) goto L_C0658F2;
    goto L_C0658F0;
}
