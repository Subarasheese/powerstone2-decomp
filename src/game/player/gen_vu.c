/* Straight-line functions with calls and guards (batch gen_vu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o104_int { char p[0x104]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c12bac0(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c097180(int a4, int a5, int a6);

int FUN_0c097180(int a4, int a5, int a6)
{

    register int R2;
    register int R3;
    register int R7;
    register int R11;
    register int R12;
    register int R13;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_0 = a5;
    v0_2 = a6;
    FUN_0c037bf6(v0_1, v0_0, v0_2);
    v0_2 = *(short *)((v0_1 + 0x1E));
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    if ((v0_2 == 0)) goto L_C0971A2;
    if ((v0_0 == 1)) goto L_C0971BC;
    if ((v0_0 == 2)) goto L_C0971BC;
    L_C097272:;
    return v0_0;
    L_C0971BC:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 + 0x1);
    v0_0 = ((short)((v0_2 + 0x1) - 1));
    if (((short)((v0_2 + 0x1) - 1) != 20)) goto L_C097272;
    L_C0971CA:;
    *(unsigned short *)((((((struct o104_int *)(v0_1))->v)) + 0x6)) = 0x1F;
    (((struct o88_float *)(((((struct o104_int *)(v0_1))->v))))->v) = 1.0f;
    *(unsigned short *)((((((struct o10C_int *)(v0_1))->v)) + 0x6)) = 0x1F;
    (((struct o84_float *)(((((struct o10C_int *)(v0_1))->v))))->v) = 1.0f;
    (((struct o88_float *)(((((struct o10C_int *)(v0_1))->v))))->v) = 1.0f;
    (((struct o8C_float *)(((((struct o10C_int *)(v0_1))->v))))->v) = 1.0f;
    FUN_0c12bac0(v0_1, 0x1);
    FUN_0c158dc8((*(signed char *)((v0_1 + 0x1))), 0x0, 0x10, 0x5, 0x3C, 0x0, 0xC25CE2C, 0xC25CDF0);
    FUN_0c158dc8((*(signed char *)((v0_1 + 0x1))), 0x0, 0x11, 0x5, 0x3C, 0x0, 0xC25CE44, 0xC25CE08);
    FUN_0c158dc8((*(signed char *)((v0_1 + 0x1))), 0x0, 0x12, 0x5, 0x3C, 0x0, 0xC25CE5C, 0xC25CE20);
    FUN_0c059e60(v0_1, 0x9);
    FUN_0c059e60(v0_1, 0x20);
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    v0_0 = (0x17);
    goto L_C097272;
    L_C0971A2:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 + 0x1);
    v0_0 = ((short)((v0_2 + 0x1) - 1));
    if (((short)((v0_2 + 0x1) - 1) == 20)) goto L_C0971CA;
    goto L_C097272;
}
