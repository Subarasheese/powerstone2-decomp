/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o100_int { char p[0x100]; int v; };
struct o104_int { char p[0x104]; int v; };
struct o108_int { char p[0x108]; int v; };
struct o10C_int { char p[0x10C]; int v; };
struct o110_int { char p[0x110]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oFC_int { char p[0xFC]; int v; };
int FUN_0c012c34(int);
int FUN_0c01821e(int);
int FUN_0c01c62a(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c04de60(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05950c(void);
int FUN_0c059e9a(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c064f80(int);
int FUN_0c07e2c4(int);
int FUN_0c0cff96(int, int, float);
int FUN_0c0fa908(void);
int FUN_0c0fad8c(int);
int FUN_0c0fb8ca(int, int);
int FUN_0c0fb96c(int);
int FUN_0c0fbda4(int);
int FUN_0c0fbe36(int);
int FUN_0c0fc69e(void);
int FUN_0c1050fc(int, int, int);
int FUN_0c105384(int, int);
int FUN_0c1171f0(int);
int FUN_0c12e10c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c03f346(int);
int FUN_0c0fbe60(int a4);
int FUN_0c0fadbc(int a4, int a5, int a6, int a7);
int FUN_0c12e7d0(int a4, int a5, int a6, int a7);
int FUN_0c017f20(int a4);
int FUN_0c011ce8(int a4);
int FUN_0c011e66(int a4);
int FUN_0c011f6c(int a4);
int FUN_0c04dc2c(int a4, float f4);
int FUN_0c01206c(int a4);
int FUN_0c0ea1f8(int a4, int a5, int a6, int a7);
float FUN_0c0ea14c(int a4, int a5);
void FUN_0c01a182(void);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_uint { char p[0x38]; unsigned int v; };




int FUN_0c12e7d0(int a4, int a5, int a6, int a7)
{
    int stk[7];
    int t194;
    int t0;
    int t7;
    float u8;
    int t77;
    float t134;
    int t1;
    int t9;
    int t11;
    float t148;
    float t152;
    int t125;
    int t40;
    int R1000;
    int t190;
    int t171;
    int t92;
    int t85;
    int t33;
    int t31;
    int t25;
    int t21;
    int t19;
    int t17;
    int t15;
    int t13;

    R1000 = *(int *)((int)stk + 0);

    t0 = *(signed char *)(a4 + 0x14);
    t1 = (((struct o10_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            t7 = (((struct oC8_int *)(a4))->v);
            u8 = *(float *)((((((((struct o1C_short *)(a4))->v)) & 0x3) << 2) + 0xC2A11FC));
            (((struct o8C_float *)(t7))->v) = u8;
            (((struct o88_float *)(t7))->v) = u8;
            (((struct o84_float *)(t7))->v) = u8;
            t9 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t9))->v) = (((((struct o80_int *)(t9))->v)) + 0x2000);
            t11 = (((struct oCC_int *)(a4))->v);
            (((struct o84_float *)(t11))->v) = (((((struct o84_float *)(t11))->v)) + 0.25f);
            t13 = (((struct oCC_int *)(a4))->v);
            (((struct o88_float *)(t13))->v) = (((((struct o88_float *)(t13))->v)) + 0.25f);
            t15 = (((struct oCC_int *)(a4))->v);
            (((struct o8C_float *)(t15))->v) = (((((struct o8C_float *)(t15))->v)) + 0.25f);
            t17 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t17))->v) = (((((struct o80_int *)(t17))->v)) + 0x2000);
            t19 = (((struct oCC_int *)(a4))->v);
            (((struct o74_float *)(t19))->v) = (((((struct o74_float *)(t19))->v)) + 20.0f);
            t21 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t21 - 1);
            if ((short)(t21 - 1) == 0) {
                (((struct o1E_ushort *)(a4))->v) = 0xA;
                (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                t25 = (((struct oCC_int *)(a4))->v);
                (((struct o74_float *)(t25))->v) = (((((struct o74_float *)(t25))->v)) + 0.0f);
            }
            t31 = (((struct oD0_int *)(a4))->v);
            (((struct o8C_float *)(t31))->v) = (((((struct o8C_float *)(t31))->v)) + 0.0299999993f);
            t33 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t33 - 1);
            if ((short)(t33 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = 0x4;
                t194 = 0x14;
            } else {
                if (((((struct o2C_float *)(a4))->v)) > (((((struct o3810_float *)(t1))->v)) + 0.0f)) {
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o12E_ushort *)(a4))->v) = 0x0;
                } else {
                    (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)(a4 + 0x1))));
                    (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFF0;
                }
                t40 = FUN_0c064f80(a4);
                if (t40 != 0) {
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o12E_ushort *)(a4))->v) = 0x0;
                    FUN_0c12e10c(a4, 0x0);
                    (((struct o1C_ushort *)(a4))->v) = 0x8;
                    (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
                    t194 = 0x14;
                } else {
                    t194 = 0x2C;
                    if (((*(float *)0xC541098) + -500.0f) > ((((struct o2C_float *)(a4))->v))) {
                        t194 = (((int (*)(int))(FUN_0c03f346))(a4));
                    }
                }
            }
        } else {
            if (t0 == 2) {
                (((struct o38_uint *)(a4))->v) = ((((((struct o38_int *)(a4))->v)) + (*(int *)((((((((struct o1C_short *)(a4))->v)) & 0xF) << 2) + 0xC2A11BC)))) & 0xFFFF);
                (((struct o14_float *)(((((struct oD0_int *)(a4))->v))))->v) = ((float)((((struct o1C_short *)(a4))->v)) / 8.0f);
                t77 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t77 - 1);
                t194 = (short)(t77 - 1);
                if ((short)(t77 - 1) == 0) {
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct o1C_ushort *)(a4))->v) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t194 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    t85 = (((struct o1C_short *)(a4))->v);
                    (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t85 / 8.0f);
                    if (!(((float)t85 / 8.0f) > 0.0f)) {
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    }
                    t92 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t92 - 1);
                    t194 = (t92 - 1);
                } else {
                    t194 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
                }
            }
        }
    } else {
        t125 = FUN_0c07e2c4((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498));
        if ((signed char)t125 != 0) {
        } else {
            if ((int)((((struct o1C_short *)(a4))->v)) >= (int)0xA) {
            } else {
                if (((((struct o20_short *)(a4))->v)) != 0) {
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)((0x380C + t1)); }
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 100.0f);
                    nlSubVector3op(((int)stk + 4), (((int)stk + 4) + 0xC), ((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498) + 0x28));
                    *(float *)(((int)stk + 8)) = 0.0f;
                    t134 = nlScalor(((int)stk + 4));
                    if (!(t134 > 1000.0f)) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
                    } else {
                        *(float *)(((int)stk + 4)) = (((*(float *)(((int)stk + 4))) / t134) * 1000.0f);
                        *(float *)(((int)stk + 12)) = (((*(float *)(((int)stk + 12))) / t134) * 1000.0f);
                        nlAddVector3op((a4 + 0x28), ((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498) + 0x28), ((int)stk + 4));
                        (((struct o2C_float *)(a4))->v) = (*(float *)(((int)stk + 20)));
                    }
                    R1000 = (a4 + 0x28);
                    t148 = math_sin_angle16(((short)(*(signed char *)(a4 + 0x1B)) * (short)0x771C));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 100.0f * t148);
                    R1000 = (a4 + 0x30);
                    t152 = math_cos_angle16(((short)(*(signed char *)(a4 + 0x1B)) * (short)0x771C));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 100.0f * t152);
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1000.0f);
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                }
            }
            t171 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t171 - 1);
            if ((int)(short)(t171 - 1) < 0) {
                (((struct o1C_ushort *)(a4))->v) = 0xB4;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c059e9a((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498), 0x23, (a4 + 0x28));
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            }
        }
        t190 = *(signed char *)((0x3715 + (((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498)));
        t194 = t190;
        if (t190 != 26) {
            (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
            t194 = 0x14;
        }
    }
    return t194;
}

int FUN_0c017f20(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o44_float *)(a4))->v) = 0.0199999996f;
        (((struct o40_float *)(a4))->v) = 0.0199999996f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.899999976f;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t0 = *(short *)((a4 + 0x1C));
        if (t0 != 0) {
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t0 = *(short *)((a4 + 0x1C));
        if (t0 != 0) {
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
        break;
    case 1:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o40_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t0 = *(short *)((a4 + 0x1C));
        if (t0 != 0) {
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t0 = *(short *)((a4 + 0x1C));
        if (t0 != 0) {
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
        break;
    case 2:
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o44_float *)(a4))->v) = (math_cos_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
        t0 = *(short *)((a4 + 0x1C));
        if (t0 != 0) {
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFFEF);
        break;
    case 3:
        break;
    default:
        if (t0 == 4) {
            t1 = *(signed char *)((a4 + 0x15));
            if (t1 != 0) {
                if (t1 != 1) {
                    return t1;
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xC;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555));
            u1 = 1.0f;
            u1 = u1 + (*(float *)0xC0181C0) * u0;
            (((struct o40_float *)(a4))->v) = u1;
            (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0x555)))) + 1.0f);
            t1 = *(short *)((a4 + 0x1C));
            if (t1 == 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                if ((*(signed char *)0xC30503C) != -1) {
                    *(unsigned char *)0xC30EFA2 = 0x0;
                }
                return thunk_FUN_0c03f346(a4);
            }
            return t1;
        }
        return t0;
    }
    if ((*(signed char *)0xC30503C) == (*(signed char *)((a4 + 0x3)))) {
        (((struct o14_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    u0 = 0.899999976f;
    u0 = u0 + 0.0500000007f * (math_sin_angle16((((*(short *)((a4 + 0x1C))) << 8) << 2)));
    (((struct oB0_float *)(a4))->v) = u0;
    return FUN_0c01821e(0xC30AC5C);
}

int FUN_0c011ce8(int a4)
{
    register int t1;
    register int t23;
    register int t63;
    register int t71;
    register int t72;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x5)) = (*(signed char *)((t1 + 0x7)));
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = (*(float *)((((((*(signed char *)(((0x41C + a4) + 0x6))) << 2) << 2) + 0xC20BAE8) + (((*(signed char *)(((0x41C + a4) + 0x5))) << 2) << 1))));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)((((((*(signed char *)(((0x41C + a4) + 0x6))) << 2) << 2) + 0xC20BAE8) + (((*(signed char *)(((0x41C + a4) + 0x5))) << 2) << 1))))->v));
    }
    if ((*(signed char *)((t1 + 0xA))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        return 0xA8;
    }
    if ((*(signed char *)((t1 + 0x8))) == 4) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t23 = *(signed char *)((a4 + 0xA8));
    if (t23 == 1) {
        if ((*(signed char *)(((0x41C + a4) + 0x5))) != (*(signed char *)((t1 + 0x7)))) {
            *(unsigned char *)(((0x41C + a4) + 0x5)) = (*(signed char *)((t1 + 0x7)));
            (((struct o28_float *)(a4))->v) = (*(float *)((((((*(signed char *)(((0x41C + a4) + 0x6))) << 2) << 2) + 0xC20BAE8) + (((*(signed char *)(((0x41C + a4) + 0x5))) << 2) << 1))));
            (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)((((((*(signed char *)(((0x41C + a4) + 0x6))) << 2) << 2) + 0xC20BAE8) + (((*(signed char *)(((0x41C + a4) + 0x5))) << 2) << 1))))->v));
        }
        if ((*(signed char *)(((0x41C + a4) + 0x6))) != (*(signed char *)((t1 + 0x8)))) {
            *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
            if ((*(signed char *)(((0x41C + a4) + 0x6))) != 4) {
                (((struct o28_float *)(a4))->v) = (*(float *)(((((((*(signed char *)(((0x41C + a4) + 0x6))) << 2) << 2) + 0xC20BAE8) + (((*(signed char *)(((0x41C + a4) + 0x5))) << 2) << 1)) + 0x0)));
                (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((0xC20BAE8 + (((*(signed char *)(((0x41C + a4) + 0x6))) << 2) << 2)) + (((*(signed char *)(((0x41C + a4) + 0x5))) << 2) << 1))))->v));
            }
        }
        t63 = *(signed char *)((t1 + 0xB));
        if (t63 == 1) {
            if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t71 = FUN_0c01c62a(a4);
            t72 = (signed char)t71;
            if ((signed char)t71 != 0) {
                *(unsigned char *)((t1 + 0xB)) = 0x2;
                *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                t72 = 0x44;
            }
            return t72;
        }
        if (t63 == 0) {
            return FUN_0c012c34(a4);
        }
        return t63;
    }
    return t23;
}

int FUN_0c011e66(int a4)
{
    register int t1;
    register int t20;
    register int t31;
    register int t39;
    register int t40;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x5)) = (*(signed char *)((t1 + 0x7)));
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = (*(float *)((0xC20BB38 + ((*(signed char *)(((0x41C + a4) + 0x5))) << 2))));
        (((struct o2C_float *)(a4))->v) = -190.0f;
        if ((*(signed char *)(((0x41C + a4) + 0x6))) != 4) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
    }
    if ((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) {
        if ((*(signed char *)((t1 + 0x8))) == 4) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t20 = *(signed char *)((a4 + 0xA8));
        if (t20 == 1) {
            if ((*(signed char *)(((0x41C + a4) + 0x5))) != (*(signed char *)((t1 + 0x7)))) {
                *(unsigned char *)(((0x41C + a4) + 0x5)) = (*(signed char *)((t1 + 0x7)));
                (((struct o28_float *)(a4))->v) = (*(float *)((0xC20BB38 + ((*(signed char *)(((0x41C + a4) + 0x5))) << 2))));
            }
            t31 = *(signed char *)((t1 + 0xB));
            if (t31 == 1) {
                if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                t39 = FUN_0c01c62a(a4);
                t40 = (signed char)t39;
                if ((signed char)t39 != 0) {
                    *(unsigned char *)((t1 + 0xB)) = 0x2;
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    t40 = 0x44;
                }
                return t40;
            }
            if (t31 == 0) {
                return FUN_0c012c34(a4);
            }
            return t31;
        }
        return t20;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c011f6c(int a4)
{
    register int t1;
    register int t16;
    register int t31;
    register int t39;
    register int t40;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = -120.0f;
        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20BB40 + ((*(signed char *)(((0x41C + a4) + 0x6))) << 2))));
        *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
    }
    if ((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) {
        if ((*(signed char *)((t1 + 0x8))) == 3) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        t16 = *(signed char *)((a4 + 0xA8));
        if (t16 == 1) {
            if ((*(signed char *)(((0x41C + a4) + 0x6))) != (*(signed char *)((t1 + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
                if ((*(signed char *)(((0x41C + a4) + 0x6))) != 3) {
                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20BB40 + ((*(signed char *)(((0x41C + a4) + 0x6))) << 2))));
                }
            }
            t31 = *(signed char *)((t1 + 0xB));
            if (t31 == 1) {
                if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                t39 = FUN_0c01c62a(a4);
                t40 = (signed char)t39;
                if ((signed char)t39 != 0) {
                    *(unsigned char *)((t1 + 0xB)) = 0x2;
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    t40 = 0x44;
                }
                return t40;
            }
            if (t31 == 0) {
                return FUN_0c012c34(a4);
            }
            return t31;
        }
        return t16;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c04dc2c(int a4, float f4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1B7F08, f4);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 0.600000024f);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 0.200000003f);
            t0 = *(signed char *)0xC541F44;
            if ((int)(unsigned char)t0 >= (int)0x6) {
                return FUN_0c03f346(a4, 0xC541F3C);
            }
            return (unsigned char)t0;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            return FUN_0c04de60(0x1, 0x96);
        }
        return (short)(t0 - 1);
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 >= (int)0x2) {
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = (((struct oCC_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) & 0xFBFF);
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        FUN_0c04de60(0x0, 0x1E);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c01206c(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC012160)->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC012160)->v));
        *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
        if ((*(signed char *)(((0x41C + a4) + 0x6))) != 3) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
    }
    if (((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) && (t0 = *(signed char *)((t1 + 0x8)), t0 == 3)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((t1 + 0xB));
        if (t0 == 1) {
            if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
            }
            t2 = FUN_0c01c62a(a4);
            t3 = (signed char)t2;
            if ((signed char)t2 != 0) {
                *(unsigned char *)((t1 + 0xB)) = 0x2;
                *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                (((struct o1B_uchar *)(a4))->v) = 0x0;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                t3 = 0x44;
            }
            return t3;
        }
        if (t0 == 0) {
            return FUN_0c012c34(a4);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c0ea1f8(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t8;
    register int t2;
    register int t4;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0EA19E;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x201;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = (*(int *)(((int)stk + 0)));
        t2 = *(int *)(((int)stk + 0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + 0xC288180)); }
        t4 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t4, 0x0, 0xF2, (*(int *)0xC4B410C));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0x1;
        t8 = *(short *)(((int)stk + 4));
        *(unsigned short *)((t0 + 0x1C)) = t8;
    }
    return t8;
}

float FUN_0c0ea14c(int a4, int a5)
{
    register float t1;
    register float u2;
    register float u4;

    t1 = math_cos_angle16(((((struct o41C_int *)(a4))->v)));
    u2 = ((t1 + 1.0f) / (1.0f + 1.0f));
    if (!(((t1 + 1.0f) / (1.0f + 1.0f)) > 0.0f)) {
        u2 = 0.0f;
    }
    u4 = u2;
    if (!(1.0f > u2)) {
        u4 = 1.0f;
    }
    (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) + a5);
    (((struct oBC_float *)(a4))->v) = u4;
    (((struct oB8_float *)(a4))->v) = u4;
    (((struct oB4_float *)(a4))->v) = u4;
    return (t1 + 1.0f);
}

void FUN_0c01a182(void)
{
    
}
