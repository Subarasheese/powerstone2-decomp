/* Straight-line functions with calls and guards (batch gen_aeb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3722_uchar { char p[0x3722]; unsigned char v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
float FUN_0c064d9c(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
extern int FUN_0c081dfc();
int FUN_0c07ecc6(int a4, int a5, int a6);

int FUN_0c07ecc6(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_2 = *(int *)((int)stk + 0);
    v0_1 = *(int *)((int)stk + 4);
    v0_3 = a4;
    v0_4 = a5;
    v0_5 = a6;
    v0_1 = v0_4;
    v0_2 = v0_5;
    v0_6 = FUN_0c064ee4(v0_3, 0x2);
    v0_0 = (v0_3);
    v0_3 = (v0_6);
    w0_0 = (0.0f);
    if ((v0_6 == 0)) goto L_C07ED36;
    (((struct o37B4_float *)(v0_0))->v) = (FUN_0c064d9c(v0_3));
    if (((*(signed char *)((v0_0 + 0x371D))) != 2)) goto L_C07ED00;
    v0_1 = ((int (*)(int, int, int, float))(FUN_0c081dfc))(v0_0, v0_4, v0_5, F4);
    L_C07ED2C:;
    (((struct o3722_uchar *)(v0_0))->v) = 0x0;
    v0_0 = (0x2);
    L_C07ED68:;
    return v0_0;
    L_C07ED00:;
    if (((v0_2) != 0)) goto L_C07ED10;
    F4 = ((*(float *)((0xC1C5E5C + ((*(signed char *)((v0_0 + 0x2))) << 2)))));
    L_C07ED12:;
    if ((!(((((struct o37B4_float *)(v0_0))->v)) > (((((struct o2C_float *)(v0_0))->v)) + F4)))) goto L_C07ED36;
    v0_1 = ((int (*)(int, int, int, float))(FUN_0c081dfc))(v0_0, v0_4, v0_5, F4);
    (((struct o371D_uchar *)(v0_0))->v) = 0x2;
    goto L_C07ED2C;
    L_C07ED36:;
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_2) goto L_C07ED4C;
    (((struct o3722_uchar *)(v0_0))->v) = 0x0;
    (((struct o37A4_float *)(v0_0))->v) = w0_0;
    L_C07ED62:;
    v0_0 = (0x1);
    goto L_C07ED68;
    L_C07ED4C:;
    if (((v0_1) == 0)) goto L_C07ED66;
    v0_1 = *(signed char *)((v0_0 + 0x3722));
    (((struct o3722_uchar *)(v0_0))->v) = (v0_1 + 0x1);
    if (((int)(signed char)(v0_1 + 0x1) >= (int)0x14)) goto L_C07ED66;
    goto L_C07ED62;
    L_C07ED66:;
    v0_0 = (0x0);
    goto L_C07ED68;
    L_C07ED10:;
    F4 = (w0_0);
    goto L_C07ED12;
}
