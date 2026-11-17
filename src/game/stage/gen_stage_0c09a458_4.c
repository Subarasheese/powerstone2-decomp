/* game/stage: functions 0C09A458-0C09B052, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c05261c(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059f20(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c09acb8(int a4, int a5, int a6, int a7);

int FUN_0c09acb8(int a4, int a5, int a6, int a7)
{
    int stk[8];

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_5 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_3 = (0x1);
    v0_4 = (0xC037BF6);
    v0_4 = (v0_5);
    if (((*(short *)((v0_5 + 0x1C))) != 0)) goto L_C09AD46;
    v0_6 = (0x3770);
    if ((((((struct o3770_int *)(v0_4))->v)) != 0)) goto L_C09ACE0;
    v0_6 = ((FUN_0c085d0c(v0_4, v0_0, v0_1, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28))));
    L_C09ADF4:;
    return v0_6;
    L_C09ACE0:;
    v0_5 = (unsigned char)(((int (*)(int, int, int))(FUN_0c037bf6))((*(int *)((v0_4 + v0_6))), v0_0, v0_1)) == 0;
    if (v0_5) goto L_C09AD30;
    *(unsigned short *)((v0_4 + 0x1C)) = v0_3;
    v0_5 = (((struct o3770_int *)(v0_4))->v);
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    FUN_0c059f20((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))), (*(signed char *)((v0_5 + 0x135))));
    FUN_0c073566(v0_4, 0x31);
    FUN_0c07363a(v0_4, 0x31);
    L_C09AD38:;
    v0_6 = (0x3770);
    if ((((((struct o3770_int *)(v0_4))->v)) == 0)) goto L_C09AD46;
    *(unsigned char *)(((*(int *)((v0_4 + v0_6))) + (v0_6 - 37))) = v0_3;
    L_C09AD46:;
    if (((*(short *)((v0_4 + 0x1E))) == 0)) goto L_C09ADCC;
    if (((int)(*(short *)((v0_4 + 0x1E))) > (int)0x3)) goto L_C09AD60;
    (((struct o2C_float *)(v0_4))->v) = (((((struct o2C_float *)(v0_4))->v)) - (1.0f + 1.0f));
    L_C09AD60:;
    v0_5 = *(short *)((v0_4 + 0x1E));
    *(unsigned short *)((v0_4 + 0x1E)) = (v0_5 - 1);
    if (((short)(v0_5 - 1) != 0)) goto L_C09ADCC;
    FUN_0c05261c((*(int *)0xC241C20));
    v0_6 = (0x3770);
    v0_5 = (v0_4);
    if ((((((struct o3770_int *)(v0_4))->v)) == 0)) goto L_C09AD84;
    (((struct o445_uchar *)((*(int *)((v0_4 + v0_6)))))->v) = v0_3;
    L_C09AD84:;
    FUN_0c07db58(v0_5, v0_0, v0_1);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 0) + 0x4));
    FUN_0c14f238((((int)stk + 0) + 0x4), (v0_4 + 0x34), (*(signed char *)((v0_4 + 0x1))), 0x3);
    FUN_0c059df2((*(signed char *)((v0_4 + 0x1))), 0x10);
    if ((((((struct o3770_int *)(v0_4))->v)) == 0)) goto L_C09ADCC;
    FUN_0c073566(v0_4, 0x30);
    L_C09ADCC:;
    v0_3 = (unsigned char)(((int (*)(int, int, int))(FUN_0c037bf6))(v0_4, v0_0, v0_1)) == 0;
    if (v0_3) goto L_C09ADEE;
    FUN_0c085d0c(v0_4, v0_0, v0_1, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned int *)((v0_4 + 0x38)) = (unsigned short)((*(int *)((v0_4 + 0x38))) + 0x8000);
    v0_6 = ((((int (*)(int))(FUN_0c037bf6))(v0_4)));
    goto L_C09ADF4;
    L_C09ADEE:;
    v0_6 = ((FUN_0c038362(v0_4)));
    goto L_C09ADF4;
    L_C09AD30:;
    FUN_0c038362(((((struct o3770_int *)(v0_4))->v)));
    goto L_C09AD38;
}
