/* Straight-line functions with calls and guards (batch gen_ajj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
int FUN_0c07d774(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c0a3b08(int a4);

int FUN_0c0a3b08(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R8;
    register int R11;
    register int R12;
    register int R13;
    register float F10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_2 = R13;
    v0_3 = R8;
    v0_1 = (((struct o3768_int *)(v0_0))->v);
    R13 = (v0_1);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C0A3BAA;
    v0_1 = (FUN_0c0c30a8(R13, 0x2, v0_0)) == 0;
    if (v0_1) goto L_C0A3BAA;
    FUN_0c07d774(v0_0);
    math_angle_between_points_xz((v0_0 + 0x28), (R13 + 0x28));
    *(unsigned int *)((v0_0 + 0x38)) = (FUN_0c07d774(v0_0));
    v0_2 = (*(signed char *)((v0_0 + 0x371C))) == 0;
    v0_1 = (0x1);
    if (v0_2) goto L_C0A3B9C;
    v0_2 = (0xA);
    L_C0A3B9E:;
    FUN_0c0a3058(v0_0, (*(signed char *)((v0_0 + 0x1))), v0_1, v0_2);
    v0_1 = (0x8);
    L_C0A3BC4:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    return 0x15;
    L_C0A3B9C:;
    v0_2 = (0xC);
    goto L_C0A3B9E;
    L_C0A3BAA:;
    v0_2 = (*(signed char *)((v0_0 + 0x371C))) == 0;
    v0_1 = (0x1);
    if (v0_2) goto L_C0A3BB8;
    v0_2 = (0xA);
    L_C0A3BBA:;
    FUN_0c0a3058(v0_0, (*(signed char *)((v0_0 + 0x1))), v0_1, v0_2);
    v0_1 = (0xD);
    goto L_C0A3BC4;
    L_C0A3BB8:;
    v0_2 = (0xC);
    goto L_C0A3BBA;
}
