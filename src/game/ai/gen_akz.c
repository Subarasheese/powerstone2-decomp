/* Straight-line functions with calls and guards (batch gen_akz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_short { char p[0x128]; short v; };
struct o404_int { char p[0x404]; int v; };
float FUN_0c064d9c(int);
int FUN_0c0bbcf6(int a4, int a5, int a6);

int FUN_0c0bbcf6(int a4, int a5, int a6)
{
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R5;
    register int R9;
    register float F3;
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
    v0_5 = a4;
    R5 = a5;
    v0_6 = a6;
    *(unsigned short *)(((int)stk + 0)) = v0_6;
    v0_0 = (R5);
    v0_1 = (0x0);
    v0_2 = (0x0);
    v0_3 = (0x1);
    v0_4 = (((((struct o404_int *)(v0_5))->v)));
    L_C0BBD8C:;
    if ((v0_4 != 0)) goto L_C0BBD40;
    return v0_1;
    L_C0BBD40:;
    v0_7 = *(short *)(((int)stk + 0));
    v0_5 = ((*(int *)((v0_4 + 0x8))));
    R5 = (v0_7);
    v0_6 = (v0_2);
    if (((v0_7 & 0x10) == 0)) goto L_C0BBD64;
    v0_8 = *(int *)((v0_4 + 0x4));
    v0_7 = (v0_8);
    if ((v0_8 == 0)) goto L_C0BBD5C;
    if (((((((struct o128_short *)(v0_7))->v)) & R5) != 0)) goto L_C0BBD72;
    L_C0BBD5C:;
    if ((v0_7 != 0)) goto L_C0BBD74;
    L_C0BBD72:;
    v0_6 = (v0_3);
    L_C0BBD74:;
    if ((v0_6 == 0)) goto L_C0BBD8A;
    w0_0 = FUN_0c064d9c(v0_5);
    w0_1 = (w0_0);
    w0_1 = (w0_0);
    if ((!(w0_0 > (*(float *)((v0_0 + 0x0)))))) goto L_C0BBD8A;
    *(float *)((v0_0 + 0x0)) = w0_1;
    v0_1 = (v0_3);
    L_C0BBD8A:;
    v0_4 = ((*(int *)((v0_4 + 0x0))));
    goto L_C0BBD8C;
    L_C0BBD64:;
    v0_8 = *(int *)((v0_4 + 0x4));
    v0_7 = (v0_8);
    if ((v0_8 == 0)) goto L_C0BBD74;
    if (((((((struct o128_short *)(v0_7))->v)) & R5) == 0)) goto L_C0BBD74;
    goto L_C0BBD72;
}
