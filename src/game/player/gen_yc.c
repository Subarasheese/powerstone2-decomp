/* Straight-line functions with calls and guards (batch gen_yc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c05879c(int, int, int, float);
int FUN_0c0f3d1c(int);
int FUN_0c0f3db8(int, int, int);
int FUN_0c0f3dc8(int, int, float);
int FUN_0c0f3e66(int, float);
int FUN_0c0f3e9e(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c0f3f68(int a4);

int FUN_0c0f3f68(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = *(int *)((int)stk + 0);
    v0_0 = a4;
    v0_4 = *(signed char *)((v0_0 + 0x17));
    v0_3 = (v0_4);
    v0_1 = (0xC1C585C);
    v0_2 = ((0x41C + v0_0));
    v0_0 = (v0_0);
    if ((v0_4 == 0)) goto L_C0F3F8A;
    if ((v0_3 == 1)) goto L_C0F3FBC;
    L_C0F400A:;
    v0_1 = FUN_0c0f3d1c(v0_0);
    v0_3 = (v0_1);
    if ((v0_1 != 0)) goto L_C0F4044;
    FUN_0c037bf6(v0_0, R5, R6);
    FUN_0c038362(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    return FUN_0c0f3e9e(v0_0);
    L_C0F4044:;
    return v0_3;
    L_C0F3FBC:;
    v0_4 = *(signed char *)((v0_2 + 0x3));
    v0_3 = (((v0_4 << 2) << 2) + v0_1);
    FUN_0c05879c(v0_0, (((short)(*(signed char *)((v0_2 + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((v0_4 << 2) << 2) + v0_1) + 0x4))), (*(float *)(((v0_3) + 0x0))));
    v0_1 = (FUN_0c0f3e66(v0_0, ((((struct o8_float *)((v0_1 + (((*(signed char *)((v0_2 + 0x3))) << 2) << 2))))->v)))) != 0;
    if (v0_1) goto L_C0F4002;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0F400A;
    L_C0F4002:;
    FUN_0c0f3db8(v0_0, 0x5, 0x0);
    goto L_C0F400A;
    L_C0F3F8A:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_4 = nlRand();
    v0_3 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C0F3F9E;
    v0_3 = ((v0_3 & 0x1));
    L_C0F3FA8:;
    FUN_0c0f3dc8(v0_0, v0_3, F4);
    (((struct o20_ushort *)(v0_0))->v) = (*(int *)((((((*(signed char *)((v0_2 + 0x3))) << 2) << 2) + v0_1) + 0xC)));
    goto L_C0F3FBC;
    L_C0F3F9E:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x1)) + 0x1));
    goto L_C0F3FA8;
}
