/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c0373ee(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0582de(int, int);
int FUN_0c05ab12(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c0e79f4(int, int, int);
int FUN_0c15aed8(int);
float math_cos_angle16(int);
int math_mat_transform_vector(int, int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
extern int nlRand();
float nlScalor(int);
int nlSubVector3op(int, int, int, Stk3);
int FUN_0c1453c4(int a4, int a5, int a6, int a7);
float FUN_0c0e7b54(int a4, int a5, int a6, int a7);
int FUN_0c0e5372(int a4);
int FUN_0c124c04(int a4, int a5, int a6, int a7);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c1453c4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    int t0;
    int t2;
    int t3;
    int t1;
    int t36;
    int t33;
    int t34;

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x4, a7);
    t36 = t0;
    if (t0 == 0) {
    } else {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = (((t2 << 2) << 1) + 0xC202994);
            t1 = (*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0)));
            FUN_0c03744a(t1, (*(signed char *)(t3 + 0x3)), (*(signed char *)(t3 + 0x2)), (*(int *)(((((*(signed char *)(a4 + 0x1)) << 2) << 1) + 0xC4B40E0))));
            t2 = (t2 + 0x1);
            (((struct o6_ushort *)(t1))->v) = (*(short *)(t3));
            (((struct o7C_uint *)(t1))->v) = ((((struct o4_int *)(t3))->v));
        }
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0xC)))))->v) = ((*(int *)(((0xC4 + t0) + 0x8))) + 0x28);
        (((struct o1_uchar *)(t0))->v) = (*(signed char *)(a4 + 0x1));
        (((struct o2_uchar *)(t0))->v) = 0xC;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o10_uint *)(t0))->v) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
        (((struct o4_uint *)(t0))->v) = 0xC1455A6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)(((((a6 << 1) + a6) << 2) + 0xC202974)); }
        FUN_0c0582de((((int)stk + 16) + 0x4), ((*(int *)(((((*(int *)(((a6 << 2) + 0xC20298C))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x28) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        if (a6 == 0) {
            *(float *)(((int)stk + 24)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 28)) = 1.0f;
            math_mat_transform_vector((((int)stk + 16) + 0x4), (((((struct oC4_int *)(a4))->v)) + 0x28));
            math_vec3_mul_xyz((((int)stk + 16) + 0x4), 5.0f, 5.0f, 5.0f);
        } else {
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 24)) = 5.0f;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x4C) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e2f4(t0, 0x3);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t33 = *(signed char *)(t0 + 0x1);
        t34 = *(signed char *)(t0 + 0x1);
        t36 = (FUN_0c064d24(t0, 0x1, 0x1B, 0x0, 0x100, (~((int)0x1 << (int)t34)), 0x0, (((int)0x1 << (int)t33) | 0xFFFFFFF0)));
    }
    return t36;
}

float FUN_0c0e7b54(int a4, int a5, int a6, int a7)
{
    int stk[3];

    int v0_0;
    int v0_3;
    int v0_4;
    int v0_2;
    int v0_5;
    int v0_1;
    float w0_0;
    float F0;
    int v0_6;
    float F2;
    float F3;
    int T_;
    int R3;
    int R2;
    int R1;
    int FPUL_;
    int v0_7;
    v0_3 = a4;
    v0_6 = a6;
    v0_4 = *(int *)0xC540DD4;
    v0_1 = ((*(int *)((0xC540D94 + (((-(*(signed char *)(v0_3 + 0x3))) + 0x12) << 2)))));
    v0_5 = (0x0);
    v0_2 = (v0_4);
    v0_0 = (v0_3);
    v0_3 = (0xC540978);
    v0_7 = (0xC540D94);
    if ((v0_4 != 0)) goto L_C0E7B96;
    (((struct o44_uint *)((((*(signed char *)(v0_0 + 0x3)) << 2) + (0x41C + v0_3))))->v) = v0_5;
    v0_4 = ((FUN_0c03f346(v0_0, v0_7, v0_6, a7)));
    L_C0E7D1E:;
    return F0;
    L_C0E7B96:;
    v0_3 = *(signed char *)(v0_0 + 0x15);
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C0E7BA6;
    if ((v0_4 == 1)) goto L_C0E7C54;
    goto L_C0E7D1E;
    L_C0E7C54:;
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)(v0_2))->v));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_2))->v)) + 1100.0f);
    w0_0 = (((struct o2C_float *)(v0_2))->v);
    (((struct o2C_float *)(v0_0))->v) = (w0_0 + -70.0f);
    (((struct o1C_ushort *)(v0_0))->v) = (((((struct o1C_short *)(v0_0))->v)) - 1);
    v0_2 = *(signed char *)(v0_2 + 0x15);
    v0_4 = (v0_2);
    v0_3 = (v0_2);
    w0_0 = ((w0_0 + -70.0f));
    if ((v0_2 == 4)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 5)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 6)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 7)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 8)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 != 2)) goto L_C0E7D1E;
    v0_2 = (((struct o1C_short *)(v0_0))->v);
    v0_3 = *(short *)0xC540994;
    v0_4 = (0xC0E7D44);
    F0 = (((float)v0_2 + 30.0f));
    w0_0 = ((float)v0_3);
    FPUL_ = (v0_2);
    if ((((float)v0_2 + 30.0f) > (float)v0_3)) goto L_C0E7D1E;
    L_C0E7CC4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(v0_0 + 0x28); }
    nlSubVector3op(((int)stk + 0), ((int)stk + 0), (v0_1 + 0x28), *(Stk3 *)(((int)stk + 0)));
    *(float *)(((int)stk + 4)) = 0.0f;
    v0_1 = *(signed char *)(v0_1 + 0x41D);
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E7CFA;
    if ((v0_2 == 2)) goto L_C0E7CFA;
    if ((v0_2 != 10)) goto L_C0E7D0E;
    L_C0E7CFA:;
    w0_0 = nlScalor(((int)stk + 0));
    F0 = (w0_0);
    if ((!(100.0f > w0_0))) goto L_C0E7D0E;
    v0_4 = (0x3C);
    L_C0E7D0A:;
    (((struct o1C_ushort *)(v0_0))->v) = v0_4;
    goto L_C0E7D1E;
    L_C0E7D0E:;
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    v0_4 = (v0_1);
    if (((int)v0_1 > 0)) goto L_C0E7D1E;
    v0_4 = ((FUN_0c0e79f4(v0_0, 0x0, (*(signed char *)(v0_0 + 0x1)))));
    goto L_C0E7D1E;
    L_C0E7BA6:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct o126_uchar *)(v0_0))->v) = 0x1;
    FUN_0c0c2ab6(v0_0, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(v0_0 + 0x41C)) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + v0_0) + 0x2)) = v0_5;
    *(unsigned short *)(((0x12A + v0_0) + 0x4)) = v0_5;
    (((struct o12A_ushort *)(v0_0))->v) = v0_5;
    v0_3 = (FUN_0c042fe0()) != 0;
    v0_4 = (0x1);
    if (v0_3) goto L_C0E7BE8;
    v0_4 = ((*(short *)((0xC1CC114 + ((*(signed char *)(v0_0 + 0x3)) << 1)))));
    goto L_C0E7D0A;
    L_C0E7BE8:;
    (((struct o1C_ushort *)(v0_0))->v) = 0xF0;
    (((struct o3C_uint *)(v0_0))->v) = v0_5;
    (((struct o38_uint *)(v0_0))->v) = v0_5;
    (((struct o34_uint *)(v0_0))->v) = v0_5;
    FUN_0c0373ee(v0_0, 0x41, (*(int *)0xC4B410C));
    v0_3 = (v0_5);
    L_C0E7C40:;
    if (((int)v0_3 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0E7C30;
    (((struct o132_uchar *)(v0_0))->v) = v0_5;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    goto L_C0E7C54;
    L_C0E7C30:;
    *(unsigned char *)(((*(int *)((((v0_3 << 2) + (0xC4 + v0_0)) + 0x0))) + 0x0)) = v0_4;
    v0_3 = (v0_3 + 0x1);
    goto L_C0E7C40;
}


