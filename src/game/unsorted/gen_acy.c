/* Straight-line functions with calls and guards (batch gen_acy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059f20(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c14fb3c(int, Stk3, float, float, float, float, float);
int FUN_0c1512a0(int, int, int, int);
int FUN_0c14d1dc(int a4, int a5, int a6, int a7);

int FUN_0c14d1dc(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R10;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F8;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_0 = a4;
    v0_4 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_5);
    v0_0 = (v0_0);
    w0_0 = (0.899999976f);
    if ((v0_5 == 0)) goto L_C14D1FA;
    if ((v0_1 == 1)) goto L_C14D2C0;
    v0_1 = ((FUN_0c03f346(v0_0, v0_4, v0_2, v0_3)));
    L_C14D342:;
    return v0_1;
    L_C14D2C0:;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) * w0_0);
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) * 1.10000002f);
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) * 1.10000002f);
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 0.5f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3F000000);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C14D342;
    L_C14D2F6:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C14D342;
    L_C14D1FA:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_4 = (0x2);
    if ((!((((((struct o4C_float *)(v0_0))->v)) + 300.0f) > ((((struct o2C_float *)(v0_0))->v))))) goto L_C14D234;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    L_C14D234:;
    v0_1 = (FUN_0c064ee4(v0_0, v0_4)) == 0;
    if (v0_1) goto L_C14D25A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_0 + 0x28)); }
    FUN_0c1512a0(0x1, ((int)stk + 0), v0_2, v0_3);
    (((struct o14_uchar *)(v0_0))->v) = 0x2;
    v0_1 = (0x14);
    goto L_C14D342;
    L_C14D25A:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C14D270;
    v0_2 = FUN_0c064f80(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C14D342;
    L_C14D270:;
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_0 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((((struct o168_float *)(v0_0))->v));
    FUN_0c14fb3c(((int)stk + 0), *(Stk3 *)(((int)stk + 0)), w0_0, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
    *(unsigned short *)((v0_0 + 0x1C)) = 0x6;
    (((struct o12E_ushort *)(v0_0))->v) = 0x0;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    FUN_0c059f20((*(signed char *)((v0_0 + 0x1))), (*(signed char *)((v0_0 + 0x135))));
    goto L_C14D2F6;
}
