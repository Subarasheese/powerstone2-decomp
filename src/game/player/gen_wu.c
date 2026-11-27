/* Straight-line functions with calls and guards (batch gen_wu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o88_float { char p[0x88]; float v; };
struct oF8_int { char p[0xF8]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c12bac0(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c096d70(int a4, int a5, int a6);

int FUN_0c096d70(int a4, int a5, int a6)
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
    if ((v0_2 == 0)) goto L_C096D92;
    if ((v0_0 == 1)) goto L_C096DA4;
    if ((v0_0 == 2)) goto L_C096DA4;
    L_C096E4A:;
    return v0_0;
    L_C096DA4:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 + 0x1);
    v0_0 = ((short)((v0_2 + 0x1) - 1));
    if (((short)((v0_2 + 0x1) - 1) != 11)) goto L_C096E4A;
    L_C096DB2:;
    *(unsigned short *)((((((struct oF8_int *)(v0_1))->v)) + 0x6)) = 0x1F;
    (((struct o88_float *)(((((struct oF8_int *)(v0_1))->v))))->v) = 1.0f;
    *(unsigned short *)((((((struct o100_int *)(v0_1))->v)) + 0x6)) = 0x1F;
    (((struct o88_float *)(((((struct o100_int *)(v0_1))->v))))->v) = 1.0f;
    FUN_0c12bac0(v0_1, 0x0);
    FUN_0c158dc8((*(signed char *)((v0_1 + 0x1))), 0x0, 0xD, 0x5, 0x3C, 0x0, 0xC25CDE4, 0xC25CDF0);
    FUN_0c158dc8((*(signed char *)((v0_1 + 0x1))), 0x0, 0xE, 0x5, 0x3C, 0x0, 0xC25CDFC, 0xC25CE08);
    FUN_0c158dc8((*(signed char *)((v0_1 + 0x1))), 0x0, 0xF, 0x5, 0x3C, 0x0, 0xC25CE14, 0xC25CE20);
    FUN_0c059e60(v0_1, 0x9);
    FUN_0c059e60(v0_1, 0x20);
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    v0_0 = (0x17);
    goto L_C096E4A;
    L_C096D92:;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 + 0x1);
    v0_0 = ((short)((v0_2 + 0x1) - 1));
    if (((short)((v0_2 + 0x1) - 1) == 9)) goto L_C096DB2;
    goto L_C096E4A;
}
