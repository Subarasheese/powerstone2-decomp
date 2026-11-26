/* Straight-line functions with calls and guards (batch gen_amg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c094fd8(int a4, int a5, int a6, int a7);

int FUN_0c094fd8(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = a7;
    v0_0 = (v0_1);
    if ((((((struct o3770_int *)(v0_1))->v)) == 0)) goto L_C09501C;
    if (((*(short *)((v0_0 + 0x1C))) == 0)) goto L_C095006;
    v0_1 = (unsigned char)(FUN_0c037bf6(v0_0)) != 0;
    if (v0_1) goto L_C09501C;
    v0_2 = ((FUN_0c038362(v0_0)));
    L_C095098:;
    return v0_2;
    L_C09501C:;
    v0_2 = ((FUN_0c085d0c(v0_0, v0_2, v0_3, v0_4)));
    goto L_C095098;
    L_C095006:;
    (((struct o374B_uchar *)(((((struct o3770_int *)(v0_0))->v))))->v) = 0x1;
    v0_5 = (unsigned char)(FUN_0c037bf6(v0_0)) == 0;
    v0_1 = (0x1);
    if (v0_5) goto L_C095026;
    goto L_C09501C;
    L_C095026:;
    FUN_0c038362(v0_0);
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 - 1);
    if (((short)(v0_2 - 1) != 0)) goto L_C095040;
    (((struct o445_uchar *)(((((struct o3770_int *)(v0_0))->v))))->v) = v0_1;
    L_C095040:;
    w0_0 = (((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v);
    v0_2 = ((int)w0_0);
    FPUL_ = ((int)w0_0);
    if (((int)w0_0 != 34)) goto L_C095098;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532598))) + 0x28), ((int)stk + 0));
    FUN_0c14f238(((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x1))), 0x1);
    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(v0_0))->v)) + 0x1))), 0x3);
    FUN_0c073566(v0_0, 0x33);
    FUN_0c07363a(v0_0, 0x35);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    v0_2 = (v0_1);
    goto L_C095098;
}
