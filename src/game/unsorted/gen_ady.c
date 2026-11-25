/* Straight-line functions with calls and guards (batch gen_ady): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0d04c4(int, int);
int math_mat_get_translate(int, int);
int FUN_0c0d3f0c(int a4, int a5, int a6, int a7);

int FUN_0c0d3f0c(int a4, int a5, int a6, int a7)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_0 = (v0_4);
    v0_4 = ((0x41C + v0_4));
    if (((*(signed char *)0xC54223C) != 0)) goto L_C0D3F32;
    if (((*(short *)((v0_4 + 0x0))) == ((((struct o24_short *)((*(int *)((v0_0 + 0x10)))))->v)))) goto L_C0D3F3C;
    L_C0D3F32:;
    v0_4 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_3)));
    L_C0D3FE0:;
    return v0_4;
    L_C0D3F3C:;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C0D3F54;
    if ((v0_4 == 1)) goto L_C0D3F92;
    if ((v0_4 == 2)) goto L_C0D3FDA;
    if ((v0_4 == 3)) goto L_C0D3FDA;
    goto L_C0D3FE0;
    L_C0D3FDA:;
    v0_4 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_3)));
    goto L_C0D3FE0;
    L_C0D3F92:;
    v0_4 = (0x16);
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x16))) <= (int)0x2)) goto L_C0D3FE0;
    math_mat_get_translate((v0_0 + 0x64), ((int)stk + 4));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - 50.0f);
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)((v0_0 + 0x10))) + 0x10)) = (FUN_0c0c2944(0xC, 0x0, 0x0, (((int)stk + 0) + 0x4), 0xFFFFFFFF));
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C0D3FE0;
    L_C0D3F54:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_1 = (0xC0D04C4);
    v0_1 = (0x0);
    L_C0D3F8A:;
    if (((int)v0_1 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0D3F72;
    goto L_C0D3F92;
    L_C0D3F72:;
    v0_2 = *(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_2 + 0x6), (v0_2 + 0x78));
    v0_1 = ((v0_1 + 0x1));
    goto L_C0D3F8A;
}
