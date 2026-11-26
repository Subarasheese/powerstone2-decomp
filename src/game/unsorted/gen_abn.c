/* Straight-line functions with calls and guards (batch gen_abn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c144710(int);
int math_atan2_angle16(float, float);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
int FUN_0c14484a(int a4);

int FUN_0c14484a(int a4)
{
    int stk[3];

    register int R2;
    register int R3;
    register int R5;
    register int R13;
    register float F0;
    register float F3;
    register float F4;
    register float F5;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_1);
    v0_0 = (v0_0);
    if ((v0_1 == 0)) goto L_C144868;
    if ((v0_2 == 1)) goto L_C144886;
    L_C1448E0:;
    return v0_2;
    L_C144886:;
    FUN_0c144710(v0_0);
    v0_1 = (((struct oC4_int *)((*(int *)((v0_0 + 0x10)))))->v);
    math_mat_get_translate((v0_1 + 0x28), (v0_0 + 0x28));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 8)) = 1.0f;
    math_mat_transform_vector(((int)stk + 0), (v0_1 + 0x28));
    *(unsigned int *)((v0_0 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
    w0_1 = *(float *)(((int)stk + 8));
    w0_0 = *(float *)(((int)stk + 0));
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    w0_0 = math_signed_sqrt(w0_1);
    v0_1 = math_atan2_angle16((-(*(float *)(((int)stk + 4)))), w0_0);
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    v0_2 = (v0_1);
    goto L_C1448E0;
    L_C144868:;
    v0_2 = (0x3714);
    if (((*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x3714))) == 0)) goto L_C1448E0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o26_uchar *)(v0_0))->v) = 0x1;
    (((struct oA4_uint *)(v0_0))->v) = 0x0;
    goto L_C144886;
}
