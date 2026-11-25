/* Straight-line functions with calls and guards (batch gen_tl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c037bf6();
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c080320(int, float);
int FUN_0c116c12(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int FUN_0c116f60(int a4, int a5, int a6);

int FUN_0c116f60(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R11;
    register int R12;
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
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = R12;
    v0_5 = *(signed char *)(((0x41C + v0_0) + 0x2));
    v0_4 = (v0_5);
    R12 = (v0_0);
    v0_0 = ((0x41C + v0_0));
    v0_3 = (0xC539708);
    if ((v0_5 == 0)) goto L_C116FAC;
    if ((v0_4 == 1)) goto L_C116FF4;
    if ((v0_4 == 2)) goto L_C11703E;
    L_C11706C:;
    return v0_4;
    L_C11703E:;
    nlAddVector3op((v0_3 + 0x28), (v0_3 + 0x28), (R12 + 0x28));
    v0_1 = ((int (*)(int))(FUN_0c037bf6))(v0_3);
    v0_1 = *(short *)((v0_0 + 0x8));
    *(unsigned short *)((v0_0 + 0x8)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C11706C;
    FUN_0c116c12(R12, 0x7);
    L_C117066:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    *(unsigned char *)((v0_0 + 0x2)) = (v0_1 + 0x1);
    v0_4 = ((v0_1 + 0x1));
    goto L_C11706C;
    L_C116FF4:;
    *(unsigned int *)((v0_3 + 0x38)) = ((*(int *)((v0_3 + 0x38))) + (*(int *)((R12 + 0x38))));
    v0_1 = ((int (*)(int, int, int))(FUN_0c037bf6))(v0_3, v0_1, v0_2);
    v0_1 = *(short *)((v0_0 + 0x8));
    *(unsigned short *)((v0_0 + 0x8)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C11706C;
    nlSubVector3op((R12 + 0x28), 0xC1FC7BC, (v0_3 + 0x28));
    *(unsigned short *)((v0_0 + 0x8)) = 0x96;
    v0_1 = *(short *)((v0_0 + 0x8));
    math_vec3_mul_xyz((R12 + 0x28), (1.0f / (float)v0_1), (1.0f / (float)v0_1), (1.0f / (float)v0_1));
    goto L_C117066;
    L_C116FAC:;
    FUN_0c07e79c(v0_3, 0xFFFFFFFF, 0x3, 0xA5, 0xFFFFFFFF, 0x3, 0xA5);
    FUN_0c080320(v0_3, (*(float *)0xC1170A4));
    v0_4 = *(int *)((v0_3 + 0x38));
    v0_5 = *(int *)0xC1FC7CC;
    *(unsigned int *)((R12 + 0x38)) = (v0_5 - v0_4);
    *(unsigned int *)((R12 + 0x38)) = ((int)((int)(v0_5 - v0_4) / (int)0xA));
    *(unsigned short *)((v0_0 + 0x8)) = 0xA;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    goto L_C116FF4;
}
