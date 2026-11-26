/* Straight-line functions with calls and guards (batch gen_xx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c06b484(int a4);

int FUN_0c06b484(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R13;
    register int R14;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = R14;
    v0_2 = R13;
    (((struct o374B_uchar *)(v0_0))->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + v0_0)) = *(struct mv3 *)((((((struct o376C_int *)(v0_0))->v)) + 0x28)); }
    v0_3 = !(0.0f > ((((struct o50_float *)(v0_0))->v)));
    R14 = (v0_0);
    if (v0_3) goto L_C06B52C;
    v0_0 = ((((struct o2C_float *)(R14))->v)) > (((((struct o37C8_float *)(R14))->v)) + 50.0f);
    if (v0_0) goto L_C06B52C;
    (((struct o28_float *)(R14))->v) = ((((struct o37C4_float *)(R14))->v));
    (((struct o30_float *)(R14))->v) = ((((struct o37CC_float *)(R14))->v));
    (((struct o2C_float *)(R14))->v) = (((((struct o37C8_float *)(R14))->v)) + 50.0f);
    *(unsigned short *)((R14 + 0x1C)) = 0x0;
    *(unsigned short *)((R14 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(R14))->v) = 0x0;
    (((struct o22_ushort *)(R14))->v) = 0x0;
    *(unsigned int *)((R14 + 0x38)) = (*(int *)((((((struct o376C_int *)(R14))->v)) + 0x38)));
    FUN_0c07e79c(R14, 0xFFFFFFFF, 0x2, 0x23, 0xFFFFFFFF, 0x2, 0x23);
    FUN_0c0c2d56(((((struct o376C_int *)(R14))->v)), 0x5, (*(signed char *)((R14 + 0x1))));
    (((struct o15_uchar *)(R14))->v) = ((*(signed char *)((R14 + 0x15))) + 0x1);
    (((struct o1B_uchar *)(R14))->v) = 0x0;
    v0_3 = (0x1B);
    L_C06B582:;
    return v0_3;
    L_C06B52C:;
    v0_0 = math_angle_between_points_xz((R14 + 0x28), (0x37C4 + R14));
    (((struct o4C_float *)(R14))->v) = (-((math_sin_angle16(v0_0)) * ((((struct o3790_float *)(R14))->v))));
    w0_0 = math_cos_angle16(v0_0);
    w0_1 = (((struct o3790_float *)(R14))->v);
    (((struct o54_float *)(R14))->v) = (-(w0_0 * w0_1));
    v0_1 = *(int *)((R14 + 0x38));
    v0_2 = *(int *)((((((struct o376C_int *)(R14))->v)) + 0x38));
    v0_0 = *(short *)((R14 + 0x1C));
    v0_3 = (v0_0);
    v0_0 = ((unsigned short)(v0_1 - v0_2));
    w0_0 = ((-(w0_0 * w0_1)));
    if (((0x8000 & (unsigned short)(v0_1 - v0_2)) == 0)) goto L_C06B576;
    v0_0 = ((v0_0 | 0xFFFF0000));
    L_C06B576:;
    v0_0 = (int)((int)v0_0 / (int)v0_3);
    *(unsigned int *)((R14 + 0x38)) = ((*(int *)((R14 + 0x38))) + v0_0);
    v0_3 = (v0_0);
    goto L_C06B582;
}
