/* game/stage: functions 0C08DC88-0C08DFAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059dae(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c08de10(int a4, int a5, int a6, int a7);

int FUN_0c08de10(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R12;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_4 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_0 = (v0_4);
    if (((*(short *)((v0_4 + 0x1C))) == 0)) goto L_C08DE5C;
    v0_4 = (unsigned char)(FUN_0c037bf6(v0_0, v0_1, v0_2)) != 0;
    if (v0_4) goto L_C08DE70;
    v0_1 = ((FUN_0c038362(v0_0)));
    L_C08DF38:;
    return v0_1;
    L_C08DE70:;
    v0_1 = ((FUN_0c085d0c(v0_0, v0_1, v0_2, v0_3, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28))));
    goto L_C08DF38;
    L_C08DE5C:;
    if ((((((struct o3770_int *)(v0_0))->v)) == 0)) goto L_C08DE70;
    v0_4 = (unsigned char)(FUN_0c037bf6(v0_0, v0_1, v0_2)) == 0;
    if (v0_4) goto L_C08DE7A;
    goto L_C08DE70;
    L_C08DE7A:;
    FUN_0c038362(v0_0);
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) != 0)) goto L_C08DE96;
    (((struct o445_uchar *)(((((struct o3770_int *)(v0_0))->v))))->v) = 0x1;
    L_C08DE96:;
    w0_0 = (((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v);
    v0_1 = ((int)w0_0);
    v0_2 = (0xC073566);
    FPUL_ = ((int)w0_0);
    if (((int)w0_0 == 14)) goto L_C08DEB4;
    if ((v0_1 == 41)) goto L_C08DEB8;
    if ((v0_1 == 74)) goto L_C08DEF4;
    goto L_C08DF38;
    L_C08DEF4:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
    FUN_0c14f238(((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x1))), 0x1);
    FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(v0_0))->v)) + 0x1))), 0x3);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1;
    FUN_0c073566(v0_0, 0x32);
    v0_1 = ((FUN_0c07363a(v0_0, 0x32)));
    goto L_C08DF38;
    L_C08DEB8:;
    v0_1 = (0x31);
    L_C08DEBA:;
    FUN_0c073566(v0_0, v0_1);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), ((int)stk + 0));
    FUN_0c14f238(((int)stk + 0), (v0_0 + 0x34), (*(signed char *)((v0_0 + 0x1))), 0x1);
    v0_1 = ((FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(v0_0))->v)) + 0x1))), 0x0)));
    goto L_C08DF38;
    L_C08DEB4:;
    v0_1 = (0x30);
    goto L_C08DEBA;
}
