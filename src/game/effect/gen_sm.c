/* Straight-line functions with calls and guards (batch gen_sm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c037bf6();
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c116c12(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int FUN_0c116d34(int a4, int a5, int a6);

int FUN_0c116d34(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R11;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_1 = a4;
    v0_3 = a5;
    v0_4 = a6;
    v0_6 = *(signed char *)(((0x41C + v0_1) + 0x2));
    v0_5 = (v0_6);
    v0_0 = ((0x41C + v0_1));
    v0_1 = (v0_1);
    v0_2 = (0xC539708);
    if ((v0_6 == 0)) goto L_C116D74;
    if ((v0_5 == 1)) goto L_C116DAA;
    if ((v0_5 == 2)) goto L_C116E08;
    L_C116E36:;
    return v0_5;
    L_C116E08:;
    nlAddVector3op((v0_2 + 0x28), (v0_2 + 0x28), (v0_1 + 0x28));
    v0_2 = ((int (*)(int))(FUN_0c037bf6))(v0_2);
    v0_2 = *(short *)((v0_0 + 0x8));
    *(unsigned short *)((v0_0 + 0x8)) = (v0_2 - 1);
    v0_5 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C116E36;
    FUN_0c116c12(v0_1, 0x7);
    L_C116E30:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    *(unsigned char *)((v0_0 + 0x2)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    goto L_C116E36;
    L_C116DAA:;
    *(unsigned int *)((v0_2 + 0x38)) = ((*(int *)((v0_2 + 0x38))) + (*(int *)((v0_1 + 0x38))));
    v0_3 = ((int (*)(int, int, int))(FUN_0c037bf6))(v0_2, v0_3, v0_4);
    v0_5 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 0)) goto L_C116E36;
    nlSubVector3op((v0_1 + 0x28), 0xC1FC7BC, (v0_2 + 0x28));
    *(unsigned short *)((v0_0 + 0x8)) = 0x1E;
    v0_3 = *(short *)((v0_0 + 0x8));
    math_vec3_mul_xyz((v0_1 + 0x28), (1.0f / (float)v0_3), (1.0f / (float)v0_3), (1.0f / (float)v0_3));
    v0_1 = *(signed char *)((v0_2 + 0x1));
    v0_3 = v0_1;
    FUN_0c07e79c(v0_2, v0_1, 0x0, 0x5, v0_3, 0x0, 0x5);
    goto L_C116E30;
    L_C116D74:;
    v0_5 = *(signed char *)((v0_2 + 0x1));
    v0_6 = v0_5;
    FUN_0c07e79c(v0_2, v0_5, 0x0, 0x19, v0_6, 0x0, 0x19);
    v0_5 = *(int *)((v0_2 + 0x38));
    v0_6 = *(int *)0xC1FC7CC;
    *(unsigned int *)((v0_1 + 0x38)) = (v0_6 - v0_5);
    *(unsigned int *)((v0_1 + 0x38)) = ((int)((int)(v0_6 - v0_5) / (int)0xA));
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    goto L_C116DAA;
}
