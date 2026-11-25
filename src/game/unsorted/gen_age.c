/* Straight-line functions with calls and guards (batch gen_age): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c150010(int, float, float, float, float);
extern float FUN_0c17c450();
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_signed_sqrt(float);
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
float FUN_0c143608(int a4);

float FUN_0c143608(int a4)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register int R10;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F13;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_3 = (v0_2);
    v0_1 = ((0x41C + v0_0));
    v0_0 = (v0_0);
    w0_0 = (1.0f);
    if ((v0_2 == 0)) goto L_C143664;
    if ((v0_3 == 1)) goto L_C14369C;
    L_C1437F6:;
    return F0;
    L_C14369C:;
    nlSubVector3op((((int)stk + 0) + 0xC), (v0_0 + 0x28), v0_1);
    w0_1 = *(float *)(((int)stk + 12));
    w0_2 = *(float *)(((int)stk + 20));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    *(unsigned int *)((v0_0 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C1436DA;
    w0_2 = (9.99999975e-06f);
    L_C1436DA:;
    *(unsigned int *)((v0_0 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / w0_2)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_1) = *(struct mv3 *)((v0_0 + 0x28)); }
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C143762;
    if (((*(signed char *)((v0_0 + 0x132))) != 0)) goto L_C143762;
    if ((((((struct o404_int *)(v0_0))->v)) == 0)) goto L_C1437B0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x178 + v0_0)); }
    v0_1 = (((float (*)(int))(FUN_0c17c450))((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_1) goto L_C1437B0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_0 + 0x4C)); }
    v0_1 = (((float (*)(int))(FUN_0c17c450))(((int)stk + 0))) == 0.0f;
    if (v0_1) goto L_C1437B0;
    v0_1 = !(-0.0871559978f > (nlInnerProduct((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_1) goto L_C1437B0;
    FUN_0c059e0e((*(signed char *)((v0_0 + 0x1))), 0x4B, (v0_0 + 0x28));
    L_C143762:;
    FUN_0c150010((v0_0 + 0x28), w0_0, w0_0, w0_0, w0_0);
    L_C1437DC:;
    v0_3 = ((FUN_0c03f346(v0_0, R5, R6, R7)));
    goto L_C1437F6;
    L_C1437B0:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 + 0x1);
    if (((int)(short)(v0_1 + 0x1) > (int)0xA)) goto L_C1437D0;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + 0.100000001f);
    FPUL_ = (0x3DCCCCCD);
    L_C1437D0:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C1437E6;
    goto L_C1437DC;
    L_C1437E6:;
    v0_3 = ((nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C))));
    goto L_C1437F6;
    L_C143664:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    FUN_0c150010((v0_0 + 0x28), w0_0, w0_0, w0_0, w0_0);
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0.0f;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_1) = *(struct mv3 *)((v0_0 + 0x28)); }
    goto L_C14369C;
}
