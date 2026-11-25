/* Straight-line functions with calls and guards (batch gen_ex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383C_short { char p[0x383C]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int, Stk3);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c05a080(int, int);
int FUN_0c0600c0(int, int, int, float, float, float, float);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0efdda(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c14c008(int);
extern int FUN_0c150010();
int FUN_0c1609f8(int, int, int, int);
extern float FUN_0c17c450();
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1224ec(int a4, int a5);
int FUN_0c160a42(int a4);
int FUN_0c0ec848(int a4);
int FUN_0c034230(int a4);
int FUN_0c063948(int a4, int a5, int a6);
int FUN_0c12360c(int a4, int a5, int a6, int a7);
int FUN_0c14bddc(int a4);
int FUN_0c0347d0(int a4);
int FUN_0c11c920(int a4, int a5, int a6, int a7);
float FUN_0c162dac(int a4, int a5, int a6);
int FUN_0c157a36(int a4, int a5, int a6, int a7);
int FUN_0c157d28(int a4, int a5, int a6, int a7);
int FUN_0c14692a(int a4, int a5, int a6, int a7);
void FUN_0c1684c0(int a4, int a5, int a6, int a7);
void FUN_0c167f94(int a4, int a5, int a6, int a7);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int FUN_0c1224ec(int a4, int a5)
{
    int stk[5];
    int t3;
    int t29;
    int t17;
    int t19;
    int t21;
    int t2;
    int t16;
    int t20;
    int t18;
    int t26;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)))));
    if (t2 == 0) {
        return t2;
    }
    t3 = FUN_0c03f444(0x1, 0x0, 0x2);
    if (t3 == 0) {
        return t3;
    }
    FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x0, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)))));
    FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)(a4 + 0x1)) << 2)))));
    (((struct o1_uchar *)(t3))->v) = (*(signed char *)(a4 + 0x1));
    (((struct o4_uint *)(t3))->v) = 0xC12212C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t3 + 0x28) = *(struct mv3 *)(a4 + 0x28); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(t3 + 0x34) = *(struct mv3 *)(a4 + 0x34); }
    (((struct o48_float *)(t3))->v) = 1.0f;
    (((struct o44_float *)(t3))->v) = 1.0f;
    (((struct o40_float *)(t3))->v) = 1.0f;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC53257C))) + 0x28), (t3 + 0x28));
    (((struct oA8_uchar *)(t3))->v) = 0x1;
    (((struct oAC_ushort *)(t3))->v) = 0xF;
    (((struct oA9_uchar *)(t3))->v) = 0x21;
    t16 = 0x21;
    t17 = 0x0;
    t19 = t18;
    t21 = t20;
    for (;;) {
        if ((int)t17 >= (int)((((struct oC0_int *)(t3))->v))) {
            break;
        }
        t19 = (t17 << 2);
        *(unsigned char *)(((*(int *)((((0xC4 + t3) + t19) + 0x0))) + 0x0)) = 0x1;
        t16 = ((0xC4 + t3) + t19);
        t17 = (t17 + 0x1);
        *(unsigned short *)(((*(int *)(t16)) + 0x6)) = 0x1F;
        t21 = (*(int *)((((0xC4 + t3) + t19) + 0x0)));
        (((struct o8C_float *)(t21))->v) = 1.0f;
        (((struct o88_float *)(t21))->v) = 1.0f;
        (((struct o84_float *)(t21))->v) = 1.0f;
    }
    (((struct o41C_uchar *)(t3))->v) = 0x5;
    *(unsigned char *)(((0x41C + t3) + 0x1)) = 0x0;
    (((struct o10_uint *)(t3))->v) = a4;
    (((struct o1C_ushort *)(t3))->v) = 0xB4;
    t26 = *(signed char *)(t3 + 0x1);
    FUN_0c064d24(t3, 0x1, 0x3A, 0x0, 0x100, (~((int)0x1 << (int)t26)), 0x0, 0xF0);
    (((struct o14_uchar *)(t3))->v) = (*(signed char *)(((int)stk + 16)));
    t29 = *(signed char *)(((int)stk + 16));
    if (t29 != 0) {
        if (t29 != 1) {
            if (t29 != 2) {
                if (t29 != 3) {
                    return t29;
                }
                (((struct o34_uint *)(t3))->v) = (unsigned short)(((((struct o34_int *)(t3))->v)) + 0x2000);
                (((struct o4C_float *)(t3))->v) = ((math_sin_angle16(((((struct o38_int *)(t3))->v)))) * 30.0f);
                (((struct o54_float *)(t3))->v) = ((math_cos_angle16(((((struct o38_int *)(t3))->v)))) * 30.0f);
                (((struct o50_float *)(t3))->v) = (-((math_sin_angle16(((((struct o34_int *)(t3))->v)))) * 30.0f));
                return FUN_0c07e2f4(t3, 0x60);
            }
            (((struct o4C_float *)(t3))->v) = ((math_sin_angle16(((((struct o38_int *)(t3))->v)))) * 30.0f);
            (((struct o50_float *)(t3))->v) = 0.0f;
            (((struct o54_float *)(t3))->v) = ((math_cos_angle16(((((struct o38_int *)(t3))->v)))) * 30.0f);
            return FUN_0c07e2f4(t3, 0x60);
        }
        (((struct o34_uint *)(t3))->v) = (unsigned short)(((((struct o34_int *)(t3))->v)) + 0x2000);
    }
    (((struct o1E_ushort *)(t3))->v) = 0x1;
    (((struct o20_ushort *)(t3))->v) = 0x0;
    return FUN_0c07e2f4(t3, 0x60);
}

int FUN_0c160a42(int a4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    int R13;
    register float F2;
    register float F3;
    register float F4;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_3 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC2A2CD0); }
    FUN_0c058adc((v0_3 + 0x28), (((int)stk + 0) + 0x20), ((*(int *)((((short)(*(signed char *)((v0_3 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28));
    v0_0 = (v0_3);
    if (((*(signed char *)((v0_3 + 0x14))) == 0)) goto L_C160A90;
    v0_4 = ((FUN_0c03f346(v0_0, R5, R6, R7)));
    L_C160C1C:;
    return v0_4;
    L_C160A90:;
    v0_1 = *(int *)((v0_0 + 0x10));
    v0_3 = (v0_1);
    if ((((((struct o24_short *)(v0_1))->v)) != ((((struct o20_short *)(v0_0))->v)))) goto L_C160AAE;
    if (((*(signed char *)((v0_3 + 0x41D))) == 5)) goto L_C160AB8;
    if (((*(signed char *)((v0_3 + 0x41D))) == 7)) goto L_C160AB8;
    L_C160AAE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C160C1C;
    L_C160AB8:;
    v0_2 = *(signed char *)((v0_0 + 0x1));
    v0_1 = *(signed char *)(((((short)v0_2 * (short)0x3938) + 0xC532498) + 0x3721));
    v0_4 = ((unsigned char)v0_1);
    v0_3 = ((((short)v0_2 * (short)0x3938) + 0xC532498));
    if (((unsigned char)v0_1 == 41)) goto L_C160AD2;
    goto L_C160C1C;
    L_C160AD2:;
    if ((((((struct o383A_short *)(v0_3))->v)) != 0)) goto L_C160AE6;
    v0_4 = (0x383C);
    if ((((((struct o383C_short *)(v0_3))->v)) != 0)) goto L_C160AE6;
    goto L_C160C1C;
    L_C160AE6:;
    *(unsigned int *)(((int)stk + 0)) = 0xC2A2D98;
    *(unsigned int *)(((int)stk + 4)) = 0xC2A2D94;
    *(unsigned int *)(((int)stk + 8)) = 0xC2A2D8C;
    *(unsigned int *)(((int)stk + 12)) = 0xC2A2D88;
    *(unsigned int *)(((int)stk + 16)) = 0xC2A2D9C;
    v0_4 = (0xC160B64);
    v0_1 = (0xC2A2D90);
    v0_2 = (0xC179AC0);
    v0_2 = ((((int)stk + 0) + 0x14));
    R13 = (0xFFFF);
    v0_3 = (0xC2A2D9C);
    R5 = (0xC2A2D88);
    v0_3 = (0xC179BF0);
    v0_3 = (0x0);
    w0_0 = (65536.0f);
    w0_1 = (0.5f);
    w0_2 = (360.0f);
    L_C160C0A:;
    if (((int)v0_3 < (int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x0))))) goto L_C160B68;
    goto L_C160C1C;
    L_C160B68:;
    *(unsigned int *)((v0_2 + 0x0)) = (int)(((float)((int)((int)(nlRand()) % (int)(*(int *)((v0_1 + 0x0))))) * w0_2) / (float)(*(int *)((v0_1 + 0x0))));
    v0_4 = *(int *)((v0_2 + 0x0));
    w0_3 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
    w0_3 = w0_3 + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))) * (float)((int)((int)(nlRand()) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
    w0_4 = math_cos_angle16(((int)(((((float)v0_4 * w0_0) / w0_2)) + w0_1) & R13));
    *(float *)(((int)stk + 32)) = (w0_4 * w0_3);
    w0_4 = math_sin_angle16(((int)(((((float)(*(int *)((v0_2 + 0x0))) * w0_0) / w0_2)) + w0_1) & R13));
    *(float *)(((int)stk + 36)) = (w0_4 * w0_3);
    *(float *)(((int)stk + 40)) = 0.0f;
    w0_3 = ((w0_4 * w0_3));
    if ((((int)((int)(*(short *)((v0_0 + 0x1E))) % (int)(*(int *)(((*(int *)(((int)stk + 16))) + 0x0))))) != 0)) goto L_C160C02;
    FUN_0c1609f8((*(signed char *)((v0_0 + 0x1))), v0_0, (((int)stk + 0) + 0x20), R7);
    L_C160C02:;
    v0_4 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_4 + 0x1);
    v0_4 = ((v0_4 + 0x1));
    v0_3 = ((v0_3 + 0x1));
    goto L_C160C0A;
}

int FUN_0c0ec848(int a4)
{
    int stk[3];

    register int R1;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_4 = a4;
    v0_1 = *(signed char *)((v0_4 + 0x16));
    v0_2 = (v0_1);
    v0_0 = (v0_4);
    v0_4 = (0x0);
    v0_3 = (0x14);
    if ((v0_1 == 0)) goto L_C0EC864;
    if ((v0_2 == 1)) goto L_C0EC874;
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    (((struct o16_uchar *)(v0_0))->v) = v0_4;
    v0_2 = (0x16);
    L_C0ECA34:;
    return v0_2;
    L_C0EC874:;
    v0_6 = *(signed char *)((v0_0 + 0x17));
    v0_2 = (v0_6);
    v0_1 = (0x16C);
    v0_5 = (0xB6);
    if ((v0_6 == 0)) goto L_C0EC898;
    if ((v0_2 == 1)) goto L_C0EC8C4;
    if ((v0_2 == 2)) goto L_C0EC8F8;
    if ((v0_2 == 3)) goto L_C0EC92C;
    if ((v0_2 != 4)) goto L_C0EC894;
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0EC9D6;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    L_C0EC9D6:;
    v0_2 = (0x78);
    if ((((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) == 0)) goto L_C0ECA34;
    if (((int)((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) <= 0)) goto L_C0EC9FC;
    v0_0 = (((struct oE4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_0))->v) = (((((struct o78_int *)(v0_0))->v)) - v0_5);
    v0_2 = (0x78);
    goto L_C0ECA34;
    L_C0EC9FC:;
    (((struct o78_uint *)(((((struct oE4_int *)(v0_0))->v))))->v) = v0_4;
    v0_2 = (0x78);
    goto L_C0ECA34;
    L_C0EC894:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = (0x16);
    goto L_C0ECA34;
    L_C0EC92C:;
    v0_3 = (v0_4);
    if (((int)(*(int *)((v0_0 + 0x34))) > 0)) goto L_C0EC93C;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + v0_1);
    L_C0EC93E:;
    if (((int)((((struct o78_int *)(((((struct oE4_int *)(v0_0))->v))))->v)) >= (int)0xE38)) goto L_C0EC95C;
    v0_2 = (((struct oE4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_2))->v) = (((((struct o78_int *)(v0_2))->v)) + v0_1);
    L_C0EC95E:;
    v0_2 = (0x80);
    v0_4 = (0x3);
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) > (int)0xAAA)) goto L_C0EC98A;
    v0_2 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    v0_2 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) - v0_1);
    v0_2 = (0x80);
    L_C0EC98C:;
    if (((int)v0_3 < (int)v0_4)) goto L_C0ECA34;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x78;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1CCF70); }
    FUN_0c0582de(((int)stk + 0), (((((struct oE4_int *)(v0_0))->v)) + 0x28), *(Stk3 *)(((int)stk + 0)));
    v0_2 = ((FUN_0c0efdda(((int)stk + 0), 0x0)));
    goto L_C0ECA34;
    L_C0EC98A:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0EC98C;
    L_C0EC95C:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0EC95E;
    L_C0EC93C:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0EC93E;
    L_C0EC8F8:;
    if (((int)((((struct o80_int *)(((((struct oDC_int *)(v0_0))->v))))->v)) < (int)0xFFFFD8E4)) goto L_C0EC922;
    v0_1 = (((struct oDC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - v0_5);
    v0_0 = (((struct oE0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + v0_5);
    v0_2 = (0x80);
    goto L_C0ECA34;
    L_C0EC922:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_2 = (0x17);
    goto L_C0ECA34;
    L_C0EC8C4:;
    v0_3 = *(int *)((v0_0 + 0x34));
    *(unsigned int *)((v0_0 + 0x34)) = (v0_3 - v0_1);
    v0_3 = (int)(v0_3 - v0_1) > (int)0xFFFFE38F;
    v0_5 = (0x1);
    v0_1 = (0xFFFFE38F);
    if (v0_3) goto L_C0EC8D8;
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    v0_4 = ((v0_4 + 0x1));
    L_C0EC8D8:;
    if (((int)v0_4 >= (int)v0_5)) goto L_C0EC8E0;
    goto L_C0ECA34;
    L_C0EC8E0:;
    goto L_C0EC922;
    L_C0EC898:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = ((int)((int)(-((((struct o80_int *)(v0_1))->v))) / (int)v0_3));
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = (0x20);
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0EC922;
    goto L_C0ECA34;
    L_C0EC864:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = v0_4;
    (((struct o20_ushort *)(v0_0))->v) = v0_3;
    goto L_C0EC874;
}

int FUN_0c034230(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C034246;
    if ((v0_1 == 1)) goto L_C034264;
    return FUN_0c03f346(v0_0, v0_2, R6, R7);
    L_C034264:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0500000007f);
    if ((v0_3 == 0)) goto L_C0342C0;
    if ((v0_1 == 1)) goto L_C034328;
    if ((v0_1 == 2)) goto L_C034344;
    if ((v0_1 == 3)) goto L_C034354;
    if ((v0_1 != 4)) goto L_C034288;
    v0_2 = *(signed char *)0xC541F41;
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 1)) goto L_C034412;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    L_C0343C4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    L_C034412:;
    return v0_1;
    L_C034288:;
    if (!((v0_1 != 5))) goto L_C03438E;
    if ((v0_1 != 6)) goto L_C034298;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C034412;
    goto L_C0343C4;
    L_C03438E:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C034412;
    L_C03439A:;
    v0_1 = (0x14);
    L_C03439C:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C0343C4;
    L_C034298:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_1 = (0x8C);
    if (((*(float *)0xC0344E0) > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C034412;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C034412;
    L_C034354:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - 0.0250000004f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3CCCCCCD);
    if (((short)(v0_2 - 1) != 0)) goto L_C034412;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0.0f;
    goto L_C0343C4;
    L_C034344:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    goto L_C03438E;
    L_C034328:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C034412;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_2;
    goto L_C03439A;
    L_C0342C0:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C0342D0;
    goto L_C034412;
    L_C0342D0:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x11F;
    *(unsigned int *)(((int)stk + 0)) = 0xC1AA244;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x6C)) = *(struct mv3 *)(0xC1AA244); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_1)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0xC)); }
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x11F;
    *(unsigned int *)(((int)stk + 0)) = 0xC1AA260;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x6C)) = *(struct mv3 *)(0xC1AA260); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_1)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0xC)); }
    v0_1 = (v0_2);
    goto L_C03439C;
    L_C034246:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C034264;
}

int FUN_0c063948(int a4, int a5, int a6)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register float F7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC1C4B78); }
    v0_7 = *(int *)(((int)stk + 4));
    v0_8 = *(int *)(((int)stk + 0));
    w0_4 = (((struct o8_float *)(v0_7))->v);
    w0_5 = (((struct o8_float *)(v0_8))->v);
    v0_6 = (0xC);
    v0_0 = (v0_2);
    v0_4 = ((v0_7 + 0x8));
    v0_5 = ((v0_8 + 0x8));
    v0_1 = ((((int)stk + 0) + 0x20));
    w0_6 = (0.0f);
    w0_2 = ((((((struct oC_float *)((v0_7 + 0x8)))->v)) + ((((struct oC_float *)((v0_8 + 0x8)))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_1 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C063990;
    w0_0 = (((-w0_3) + w0_1));
    L_C063992:;
    *(float *)((v0_1 + 0x0)) = (w0_2 - w0_0);
    w0_4 = (((struct o8_float *)(v0_4))->v);
    w0_5 = (((struct o8_float *)(v0_5))->v);
    w0_0 = (((((struct o14_float *)(v0_4))->v)) + (*(float *)((v0_5 + v0_6))));
    v0_6 = (0x8);
    w0_2 = w0_0;
    w0_0 = (w0_4);
    w0_1 = ((w0_4 - w0_5));
    w0_3 = (w0_5);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0639B8;
    w0_6 = ((-w0_0));
    w0_0 = (((-w0_0) + w0_3));
    L_C0639BA:;
    *(float *)((v0_1 + v0_6)) = (w0_2 - w0_0);
    w0_4 = (((struct o4_float *)(v0_4))->v);
    w0_5 = (((struct o4_float *)(v0_5))->v);
    v0_6 = (0x4);
    w0_2 = ((((((struct o10_float *)(v0_4))->v)) + ((((struct oC_float *)(v0_5))->v))));
    w0_0 = ((w0_4 - w0_5));
    w0_1 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C0639E2;
    w0_6 = ((-w0_3));
    w0_0 = (((-w0_3) + w0_1));
    L_C0639E4:;
    *(float *)((v0_1 + v0_6)) = (w0_2 - w0_0);
    w0_0 = (0.0f);
    if (!(((*(float *)((v0_1 + 0x0))) > 0.0f))) goto L_C063B22;
    if ((((((struct o8_float *)(v0_1))->v)) > w0_0)) goto L_C063A00;
    goto L_C063B22;
    L_C063B22:;
    v0_6 = (0x0);
    L_C063B24:;
    return v0_6;
    L_C063A00:;
    if ((((((struct o4_float *)(v0_1))->v)) > 0.0f)) goto L_C063A0E;
    goto L_C063B22;
    L_C063A0E:;
    v0_6 = (FUN_0c0612ee(v0_0)) == 0;
    if (v0_6) goto L_C063A3C;
    (((struct o135_uchar *)(v0_0))->v) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x4)));
    v0_6 = (0x2);
    goto L_C063B24;
    L_C063A3C:;
    w0_0 = (((struct o4_float *)(v0_1))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 9.0f))) goto L_C063A56;
    if ((w0_1 > (*(float *)((v0_1 + 0x0))))) goto L_C063AD0;
    if ((w0_1 > ((((struct o8_float *)(v0_1))->v)))) goto L_C063AD0;
    L_C063A56:;
    v0_6 = (0x4);
    if ((!(((((struct o4_float *)(v0_5))->v)) > ((((struct o4_float *)(v0_4))->v))))) goto L_C063A80;
    if ((!((*(float *)((v0_5 + v0_6))) > (*(float *)((v0_4 + v0_6)))))) goto L_C063A70;
    w0_0 = ((-(*(float *)(((int)stk + 36)))));
    L_C063A74:;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + w0_0);
    L_C063B12:;
    FUN_0c060c80(v0_0, (((int)stk + 0) + 0x8), (*(int *)(((int)stk + 4))));
    v0_6 = (0x1);
    goto L_C063B24;
    L_C063A70:;
    w0_0 = ((*(float *)(((int)stk + 36))));
    goto L_C063A74;
    L_C063A80:;
    FUN_0c0600c0((((int)stk + 0) + 0x14), v0_2, v0_3, (*(float *)((v0_5 + 0x0))), ((((struct o8_float *)(v0_5))->v)), (*(float *)((v0_4 + 0x0))), ((((struct o8_float *)(v0_4))->v)));
    w0_2 = *(float *)((v0_1 + 0x0));
    w0_3 = (((struct o8_float *)(v0_1))->v);
    w0_0 = (w0_2);
    w0_1 = (w0_3);
    if ((!(w0_3 > w0_2))) goto L_C063AA0;
    w0_1 = (w0_0);
    L_C063AA2:;
    w0_0 = (*(float *)(((int)stk + 8)));
    w0_0 = w0_0 + w0_1 * (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 8)) = w0_0;
    w0_2 = (((struct o8_float *)(v0_1))->v);
    w0_3 = *(float *)((v0_1 + 0x0));
    w0_0 = (w0_2);
    w0_1 = (w0_3);
    if ((!(w0_2 > w0_3))) goto L_C063ABE;
    w0_1 = (w0_1);
    L_C063AC0:;
    w0_0 = (*(float *)(((int)stk + 16)));
    w0_0 = w0_0 + w0_1 * (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 16)) = w0_0;
    goto L_C063B12;
    L_C063ABE:;
    w0_1 = (w0_0);
    goto L_C063AC0;
    L_C063AA0:;
    w0_1 = (w0_1);
    goto L_C063AA2;
    L_C063AD0:;
    w0_2 = *(float *)((v0_1 + 0x0));
    w0_0 = (w0_2);
    if ((w0_2 > w0_1)) goto L_C063AF8;
    if ((w0_0 > ((((struct o8_float *)(v0_1))->v)))) goto L_C063AF8;
    if ((!((*(float *)((v0_5 + 0x0))) > (*(float *)((v0_4 + 0x0)))))) goto L_C063AEE;
    w0_0 = ((-(*(float *)(((int)stk + 32)))));
    L_C063AF2:;
    *(float *)(((int)stk + 8)) = w0_0;
    goto L_C063B12;
    L_C063AEE:;
    w0_0 = ((*(float *)(((int)stk + 32))));
    goto L_C063AF2;
    L_C063AF8:;
    if ((!(((((struct o8_float *)(v0_5))->v)) > ((((struct o8_float *)(v0_4))->v))))) goto L_C063B0A;
    w0_0 = ((-(*(float *)(((int)stk + 40)))));
    L_C063B0E:;
    *(float *)(((int)stk + 16)) = w0_0;
    goto L_C063B12;
    L_C063B0A:;
    w0_0 = ((*(float *)(((int)stk + 40))));
    goto L_C063B0E;
    L_C0639E2:;
    w0_0 = (w0_0);
    goto L_C0639E4;
    L_C0639B8:;
    w0_0 = (w0_1);
    goto L_C0639BA;
    L_C063990:;
    w0_0 = (w0_0);
    goto L_C063992;
}

int FUN_0c12360c(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R6;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    v0_1 = (0xE38);
    if ((v0_3 == 0)) goto L_C12362C;
    if ((v0_2 != 1)) goto L_C123620;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    (((struct o18_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o20_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    (((struct o1C_float *)(v0_1))->v) = (w0_0 - 0.0500000007f);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    v0_2 = (0x18);
    w0_1 = (w0_0);
    FPUL_ = (0x3D4CCCCD);
    if ((w0_0 > 0.0f)) goto L_C1237EE;
    L_C1237DE:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    L_C1237EE:;
    return v0_2;
    L_C123620:;
    if ((v0_2 != 2)) goto L_C123628;
    return FUN_0c03f346(v0_0, v0_1, R6, a7);
    L_C123628:;
    goto L_C1237EE;
    L_C12362C:;
    if (((int)(*(short *)((v0_0 + 0x1C))) <= (int)0xB4)) goto L_C123638;
    goto L_C1237DE;
    L_C123638:;
    if (((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 26)) goto L_C123646;
    goto L_C1237DE;
    L_C123646:;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 1)) goto L_C12365E;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 4)) goto L_C12365E;
    goto L_C1237DE;
    L_C12365E:;
    v0_2 = (0x15);
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) <= (int)0x2)) goto L_C12366E;
    goto L_C1237DE;
    L_C12366E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + 250.0f);
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_1);
    v0_3 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_3);
    FPUL_ = (0x437A0000);
    if ((v0_3 == 0)) goto L_C1236A2;
    if ((v0_2 == 1)) goto L_C1236AE;
    if (!((v0_2 == 2))) goto L_C1236E0;
    v0_2 = (0xC2A0E40);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C1236DE;
    L_C1236E0:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((v0_1 + 0x0))))) goto L_C1236F0;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_1 = ((v0_1 + 0x10));
    L_C1236F0:;
    if (((*(int *)((v0_1 + 0x0))) == 0x3E7)) goto L_C1237AC;
    v0_2 = *(short *)((v0_0 + 0x1C));
    R6 = (((((struct oC4_int *)(v0_0))->v)));
    FPUL_ = (v0_2);
    if ((((float)(*(int *)((v0_1 + 0x0))) - (float)v0_2) == 0.0f)) goto L_C123782;
    (((struct o84_float *)(R6))->v) = (((((struct o84_float *)(R6))->v)) + ((((((struct o4_float *)(v0_1))->v)) - ((((struct o84_float *)(R6))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    (((struct o88_float *)(R6))->v) = (((((struct o88_float *)(R6))->v)) + ((((((struct o8_float *)(v0_1))->v)) - ((((struct o88_float *)(R6))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_3 = *(int *)((v0_1 + 0x0));
    (((struct o8C_float *)(R6))->v) = (((((struct o8C_float *)(R6))->v)) + ((((((struct oC_float *)(v0_1))->v)) - ((((struct o8C_float *)(R6))->v))) / (float)(v0_3 - v0_2)));
    FPUL_ = ((v0_3 - v0_2));
    L_C1237AC:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = ((v0_1 + 0x1));
    goto L_C1237EE;
    L_C123782:;
    (((struct o84_float *)(R6))->v) = (((((struct o84_float *)(R6))->v)) + ((((struct o4_float *)(v0_1))->v)));
    (((struct o88_float *)(R6))->v) = (((((struct o88_float *)(R6))->v)) + ((((struct o8_float *)(v0_1))->v)));
    (((struct o8C_float *)(R6))->v) = (((((struct o8C_float *)(R6))->v)) + ((((struct oC_float *)(v0_1))->v)));
    goto L_C1237AC;
    L_C1236DE:;
    v0_1 = ((v0_1 + v0_2));
    goto L_C1236E0;
    L_C1236AE:;
    v0_2 = (0xC2A0E10);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C1236DE;
    L_C1236A2:;
    v0_2 = (0xC2A0DE0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C1236DE;
}

int FUN_0c14bddc(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R10;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F15;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_2 = a4;
    v0_4 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_4);
    v0_3 = (0x0);
    v0_0 = (v0_2);
    if ((v0_4 == 0)) goto L_C14BDFA;
    if ((v0_1 == 1)) goto L_C14BE18;
    L_C14BFB8:;
    return v0_1;
    L_C14BE18:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C14BE34;
    if ((v0_1 == 1)) goto L_C14BE5C;
    if ((v0_1 == 2)) goto L_C14BE98;
    if ((v0_1 == 3)) goto L_C14BEEC;
    if (!((v0_1 == 4))) goto L_C14BF80;
    math_mat_get_translate((v0_0 + 0x64), (v0_0 + 0x28));
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 4)) = -1.0f;
    math_mat_transform_vector(((int)stk + 0), (v0_0 + 0x64));
    *(unsigned int *)((v0_0 + 0x34)) = (math_atan2_angle16((*(float *)(((int)stk + 8))), (-(*(float *)(((int)stk + 4))))));
    math_vec3_mul_xyz(((int)stk + 0), 25.0f, 25.0f, 25.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(((int)stk + 0)); }
    (((struct oA4_uint *)(v0_0))->v) = v0_3;
    FUN_0c14c008(v0_0);
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14BF80;
    L_C14BF80:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_3))->v) = (((((((struct o2C_float *)(v0_0))->v)) + -800.0f) / 570.0f) * 11.4499998f);
    v0_1 = (0x88);
    v0_2 = (v0_3);
    w0_0 = (11.4499998f);
    w0_0 = (570.0f);
    if ((!(0.0f > ((((struct o88_float *)(v0_3))->v))))) goto L_C14BFB8;
    v0_1 = ((FUN_0c03f346(v0_0, R5, 0x0, R7)));
    goto L_C14BFB8;
    L_C14BEEC:;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + (*(short *)((v0_0 + 0x1C))));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_2 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C14BFB8;
    L_C14BF12:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C14BFB8;
    L_C14BE98:;
    *(unsigned int *)((v0_0 + 0x34)) = 0xFFFFE700;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = 3.44000006f;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x4;
    (((struct o50_float *)(v0_0))->v) = (((-((((struct o88_float *)(v0_1))->v))) + 9.07999992f) / (float)(*(short *)((v0_0 + 0x1E))));
    v0_2 = *(int *)((v0_0 + 0x34));
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1C)) = (int)((float)((-v0_2) - 5774) / (float)v0_3);
    v0_1 = ((int)((float)((-v0_2) - 5774) / (float)v0_3));
    w0_0 = ((float)v0_3);
    FPUL_ = ((int)((float)((-v0_2) - 5774) / (float)v0_3));
    goto L_C14BFB8;
    L_C14BE5C:;
    *(unsigned int *)((v0_0 + 0x34)) = 0xFFFFE6BE;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = 2.5f;
    goto L_C14BF12;
    L_C14BE34:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned int *)((v0_0 + 0x34)) = 0xFFFFD0BE;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned short *)((v0_1 + 0x6)) = 0x1F;
    (((struct o84_float *)(v0_1))->v) = 0.99000001f;
    (((struct o88_float *)(v0_1))->v) = 2.01999998f;
    (((struct o8C_float *)(v0_1))->v) = 0.99000001f;
    goto L_C14BF12;
    L_C14BDFA:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    (((struct oA4_uint *)(v0_0))->v) = (((((struct oD4_int *)((*(int *)((v0_0 + 0x10)))))->v)) + 0x28);
    (((struct o15_uchar *)(v0_0))->v) = v0_3;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C14BE18;
}

int FUN_0c0347d0(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int R13;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0x1);
    if ((v0_3 == 0)) goto L_C0347E6;
    if ((v0_1 == 1)) goto L_C034804;
    return FUN_0c03f346(v0_0, v0_2, R6, R7);
    L_C034804:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_3);
    w0_0 = (0.25f);
    w0_1 = (0.0500000007f);
    if ((v0_3 == 0)) goto L_C034858;
    if ((v0_1 == 1)) goto L_C0348C4;
    if ((v0_1 == 2)) goto L_C0348E0;
    if ((v0_1 == 3)) goto L_C0348FC;
    if ((v0_1 != 4)) goto L_C034828;
    v0_2 = *(signed char *)0xC541F41;
    v0_1 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 3)) goto L_C0349AC;
    L_C034930:;
    v0_1 = (0x14);
    L_C0348C0:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    L_C034958:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    L_C0349AC:;
    return v0_1;
    L_C034828:;
    if ((v0_1 != 5)) goto L_C034830;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + w0_0);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0349AC;
    goto L_C034958;
    L_C034830:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + w0_1);
    v0_1 = (0x8C);
    if ((-0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v)))) goto L_C0349AC;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C0349AC;
    L_C0348FC:;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - 0.0250000004f);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    FPUL_ = (0x3CCCCCCD);
    if (((short)(v0_2 - 1) != 0)) goto L_C0349AC;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0.0f;
    goto L_C034958;
    L_C0348E0:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) - w0_0);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0349AC;
    goto L_C034930;
    L_C0348C4:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C0349AC;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_2;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_2;
    goto L_C034930;
    L_C034858:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) == 0)) goto L_C034868;
    goto L_C0349AC;
    L_C034868:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x11F;
    *(unsigned int *)(((int)stk + 0)) = 0xC1AA2B4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x6C)) = *(struct mv3 *)(0xC1AA2B4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_1)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0xC)); }
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned char *)((v0_1 + 0x0)) = 0x0;
    *(unsigned short *)((v0_1 + 0x6)) = 0x11F;
    *(unsigned int *)(((int)stk + 0)) = 0xC1AA2D0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_1 + 0x6C)) = *(struct mv3 *)(0xC1AA2D0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_1)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0xC)); }
    v0_1 = (v0_2);
    goto L_C0348C0;
    L_C0347E6:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_2;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C034804;
}


float FUN_0c162dac(int a4, int a5, int a6)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
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
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_4 = *(signed char *)((v0_2 + 0x14));
    v0_5 = (v0_4);
    v0_3 = ((0x41C + v0_2));
    v0_2 = (v0_2);
    w0_0 = (1.0f);
    if ((v0_4 == 0)) goto L_C162DD4;
    if ((v0_5 == 1)) goto L_C162E20;
    L_C162F7A:;
    return F0;
    L_C162E20:;
    nlSubVector3op((((int)stk + 0) + 0xC), (v0_2 + 0x28), v0_3);
    w0_1 = *(float *)(((int)stk + 12));
    w0_2 = *(float *)(((int)stk + 20));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    *(unsigned int *)((v0_2 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20)))));
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C162E5E;
    w0_2 = (9.99999975e-06f);
    L_C162E5E:;
    *(unsigned int *)((v0_2 + 0x34)) = (math_atan_angle16(((-(*(float *)(((int)stk + 16)))) / w0_2)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_3) = *(struct mv3 *)((v0_2 + 0x28)); }
    if (((*(signed char *)((v0_2 + 0x131))) != 0)) goto L_C162EE2;
    if (((*(signed char *)((v0_2 + 0x132))) != 0)) goto L_C162EE2;
    v0_5 = (0x404);
    if ((((((struct o404_int *)(v0_2))->v)) == 0)) goto L_C162F34;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0x178 + v0_2)); }
    v0_3 = (((float (*)(int))(FUN_0c17c450))((((int)stk + 0) + 0xC))) == 0.0f;
    if (v0_3) goto L_C162F34;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_2 + 0x4C)); }
    v0_3 = (((float (*)(int, Stk3))(FUN_0c17c450))(((int)stk + 0), *(Stk3 *)(((int)stk + 0)))) == 0.0f;
    if (v0_3) goto L_C162F34;
    v0_3 = !(-0.0871559978f > (nlInnerProduct((((int)stk + 0) + 0xC), ((int)stk + 0))));
    if (v0_3) goto L_C162F34;
    FUN_0c059df2((*(signed char *)((v0_2 + 0x1))), 0x4B);
    L_C162EE2:;
    v0_3 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((v0_2 + 0x28), v0_0, v0_1, w0_0, w0_0, w0_0, w0_0);
    L_C162F60:;
    v0_5 = ((FUN_0c03f346(v0_2, v0_0, v0_1, R7)));
    goto L_C162F7A;
    L_C162F34:;
    v0_3 = *(short *)((v0_2 + 0x1E));
    *(unsigned short *)((v0_2 + 0x1E)) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) > (int)0xA)) goto L_C162F54;
    v0_3 = (((struct oC8_int *)(v0_2))->v);
    (((struct o8C_float *)(v0_3))->v) = (((((struct o8C_float *)(v0_3))->v)) + 0.200000003f);
    FPUL_ = (0x3E4CCCCD);
    L_C162F54:;
    v0_3 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C162F6A;
    goto L_C162F60;
    L_C162F6A:;
    v0_5 = ((nlAddVector3op((v0_2 + 0x28), (v0_2 + 0x28), (v0_2 + 0x4C))));
    goto L_C162F7A;
    L_C162DD4:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    v0_4 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((v0_2 + 0x28), v0_0, v0_1, w0_0, w0_0, w0_0, w0_0);
    (((struct o74_float *)(((((struct oC8_int *)(v0_2))->v))))->v) = -5.5f;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_2))->v))))->v) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_3) = *(struct mv3 *)((v0_2 + 0x28)); }
    nlSubVector3op(v0_3, v0_3, (v0_2 + 0x4C));
    goto L_C162E20;
}




void FUN_0c1684c0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3768, 0xC2A375C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0x4) && ((int)t0 <= (int)0xC)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A372C, 0xC2A371C, (*(short *)((a4 + 0x1C))), 0xC, 0x4);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xC) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3780, 0xC2A3774, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0x8) && ((int)t0 <= (int)0x10)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A374C, 0xC2A373C, (*(short *)((a4 + 0x1C))), 0x10, 0x8);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x28) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x3D, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x3D, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A375C); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A371C); }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3774); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A373C); }
}

void FUN_0c167f94(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A366C, 0xC2A3660, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0x4) && ((int)t0 <= (int)0xC)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3630, 0xC2A3620, (*(short *)((a4 + 0x1C))), 0xC, 0x4);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xC) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3684, 0xC2A3678, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0x8) && ((int)t0 <= (int)0x10)) {
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3650, 0xC2A3640, (*(short *)((a4 + 0x1C))), 0x10, 0x8);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x28) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x3C, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x3C, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3660); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3620); }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3678); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3640); }
}
