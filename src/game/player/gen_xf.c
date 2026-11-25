/* Straight-line functions with calls and guards (batch gen_xf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07053a(int, int, float);
int FUN_0c07d1fc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0abf1c(int a4, int a5, int a6);

int FUN_0c0abf1c(int a4, int a5, int a6)
{

    register int R2;
    register int R3;
    register int R7;
    register int R9;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_4 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_4 - 1);
    v0_0 = (v0_1);
    if (((int)(short)(v0_4 - 1) <= 0)) goto L_C0ABF38;
    (((struct o374B_uchar *)(v0_0))->v) = 0x1;
    L_C0ABF38:;
    FUN_0c037bf6(v0_1, v0_2, v0_3);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C0ABFE8;
    v0_1 = (FUN_0c07d1fc(v0_0)) == 0;
    if (v0_1) goto L_C0ABFE8;
    (((struct o131_uchar *)(v0_0))->v) = 0x0;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x15, v0_2, 0x2, 0x15);
    FUN_0c07053a(v0_0, 0x64, -7.0f);
    (((struct o50_float *)(v0_0))->v) = 15.0f;
    (((struct o5C_float *)(v0_0))->v) = -1.0f;
    L_C0AC036:;
    (((struct o16_uchar *)(v0_0))->v) = 0x3;
    v0_1 = (0x16);
    L_C0AC03C:;
    return v0_1;
    L_C0ABFE8:;
    v0_1 = (0x50);
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0AC03C;
    v0_2 = FUN_0c07ecc6(v0_0, 0x0, 0x0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0AC03C;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x16, v0_2, 0x2, 0x16);
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o58_float *)(v0_0))->v) = 0.0f;
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    (((struct o54_float *)(v0_0))->v) = 0.0f;
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    goto L_C0AC036;
}
