/* Straight-line functions with calls and guards (batch gen_rz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c05aaf6(int);
int FUN_0c067734(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d720(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
extern int FUN_0c081dfc();
int FUN_0c160f66(int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c082310(int a4, int a5, int a6, int a7, float f4);
struct o11C_int { char p[0x11C]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c082310(int a4, int a5, int a6, int a7, float f4)
{
    int stk[8];
    int R1024;
    int R1016;
    int R1020;
    int t24;
    int t144;
    int t4;
    int t6;
    float u66;
    float u71;
    float u126;
    float u131;
    int t16;
    int t0;
    int t137;
    int t136;
    int t53;
    int t43;
    int t135;
    int t134;
    int t127;
    int t122;
    int t67;
    int t62;
    int t52;
    int t42;
    int t14;

    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 20);

    *(unsigned char *)(((int)stk + 28)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xB;
    t0 = ((int (*)(int, int, int, int))(FUN_0c081dfc))(a4, a5, a6, a7);
    (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)(a4 + 0x372A)) * (short)0x3938) + 0xC532498);
    (((struct o376C_uint *)(a4))->v) = ((((struct o3770_int *)(a4))->v));
    (((struct o3721_uchar *)(a4))->v) = 0xC0;
    (((struct o3728_uchar *)(a4))->v) = 0x0;
    (((struct o37FC_float *)(a4))->v) = 0.0f;
    (((struct o37F4_float *)(a4))->v) = 0.0f;
    (((struct o14_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
    t4 = (((struct o3770_int *)(a4))->v);
    (((struct o17_uchar *)(t4))->v) = 0x0;
    (((struct o16_uchar *)(t4))->v) = 0x0;
    (((struct o15_uchar *)(t4))->v) = 0x0;
    (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
    t6 = (((struct o3770_int *)(a4))->v);
    (((struct o3716_uchar *)(t6))->v) = (*(signed char *)(t6 + 0x3715));
    (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
    (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3743_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3757_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    t14 = (((struct o3770_int *)(a4))->v);
    (((struct o37FC_float *)(t14))->v) = 0.0f;
    (((struct o37F4_float *)(t14))->v) = 0.0f;
    t16 = ((int (*)(int, float))(FUN_0c081dfc))(((((struct o3770_int *)(a4))->v)), 0.0f);
    (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
    (((struct o38_uint *)(a4))->v) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3770_int *)(a4))->v)) + 0x28)));
    FUN_0c067734(((((struct o3770_int *)(a4))->v)));
    FUN_0c059df2((*(signed char *)(a4 + 0x1)), 0x18);
    t24 = *(signed char *)(((int)stk + 28));
    if (t24 != 0) {
        if (t24 == 1) {
            R1024 = 0x2B;
            R1020 = 0x5;
            R1016 = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x2B, 0xFFFFFFFF, 0x5, 0x2B);
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x2C, 0xFFFFFFFF, 0x5, 0x2C);
            (((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o28_float *)(a4))->v));
            (((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o30_float *)(a4))->v));
            *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)(((((struct o38_int *)(a4))->v)) + 0x8000);
            (((struct o3728_uchar *)(a4))->v) = 0x0;
            (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            (((struct o371D_uchar *)(a4))->v) = 0x1;
            FUN_0c07c4b0((*(signed char *)(a4 + 0x1)), 0x5);
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t144 = 0x15;
        } else {
            t144 = t24;
            if (t24 == 2) {
                R1024 = 0x1A;
                R1020 = 0x5;
                R1016 = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x1A, 0xFFFFFFFF, 0x5, 0x1A);
                if ((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x372C))) == 0) {
                    t42 = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
                    R1024 = t42;
                    t43 = FUN_0c07d720(a4);
                    if ((int)(unsigned short)((t42 - t43) + 0x4000) > (int)0x8000) {
                        R1024 = 0x1F;
                        R1020 = 0x5;
                        R1016 = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1F, 0xFFFFFFFF, 0x5, 0x1F);
                    } else {
                        R1024 = 0x20;
                        R1020 = 0x5;
                        R1016 = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x20, 0xFFFFFFFF, 0x5, 0x20);
                    }
                } else {
                    t52 = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
                    R1024 = t52;
                    t53 = FUN_0c07d720(a4);
                    if ((int)(unsigned short)((t52 - t53) + 0x4000) > (int)0x8000) {
                        R1024 = 0x1E;
                        R1020 = 0x5;
                        R1016 = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1E, 0xFFFFFFFF, 0x5, 0x1E);
                    } else {
                        R1024 = 0x1D;
                        R1020 = 0x5;
                        R1016 = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1D, 0xFFFFFFFF, 0x5, 0x1D);
                    }
                }
                t62 = (((struct o3770_int *)(a4))->v);
                R1024 = (0x28 + t62);
                u66 = ((((struct o28_float *)(a4))->v)) + 120.0f * (math_sin_angle16(((((struct o38_int *)(a4))->v))));
                (((struct o28_float *)(t62))->v) = u66;
                t67 = (((struct o3770_int *)(a4))->v);
                R1024 = (0x30 + t67);
                u71 = ((((struct o30_float *)(a4))->v)) + 120.0f * (math_cos_angle16(((((struct o38_int *)(a4))->v))));
                (((struct o30_float *)(t67))->v) = u71;
                (((struct o3728_uchar *)(a4))->v) = 0x0;
                (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
                (((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v) = (((((struct o160_float *)(a4))->v)) / 3.0f);
                FUN_0c07c4b0((*(signed char *)(a4 + 0x1)), (int)(((((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v)) / 10.0f));
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) * 0.666660011f);
                if (1.0f > ((((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v))) {
                    (((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v) = 1.0f;
                }
                if (1.0f > ((((struct o160_float *)(a4))->v))) {
                    (((struct o160_float *)(a4))->v) = 1.0f;
                }
                (((struct o3840_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x270F;
                if ((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938)))) == 0) {
                    FUN_0c05aaf6((0xB7 + (*(signed char *)(a4 + 0x1))));
                }
                FUN_0c160f66(((((struct o3770_int *)(a4))->v)), 0x0);
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x1;
                (((struct o382E_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
                (((struct o374A_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t144 = 0x15;
            }
        }
    } else {
        R1024 = 0x19;
        R1020 = 0x5;
        R1016 = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x19, 0xFFFFFFFF, 0x5, 0x19);
        if ((int)(unsigned short)((((((struct o38_int *)(a4))->v)) - (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)))) + 0x4000) > (int)0x8000) {
            R1024 = 0x1B;
            R1020 = 0x5;
            R1016 = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1B, 0xFFFFFFFF, 0x5, 0x1B);
        } else {
            R1024 = 0x1C;
            R1020 = 0x5;
            R1016 = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1C, 0xFFFFFFFF, 0x5, 0x1C);
        }
        t122 = (((struct o3770_int *)(a4))->v);
        R1024 = (0x28 + t122);
        u126 = ((((struct o28_float *)(a4))->v)) + 120.0f * (math_sin_angle16(((((struct o38_int *)(a4))->v))));
        (((struct o28_float *)(t122))->v) = u126;
        t127 = (((struct o3770_int *)(a4))->v);
        R1024 = (0x30 + t127);
        u131 = ((((struct o30_float *)(a4))->v)) + 120.0f * (math_cos_angle16(((((struct o38_int *)(a4))->v))));
        (((struct o30_float *)(t127))->v) = u131;
        (((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o2C_float *)(a4))->v));
        t134 = *(int *)(((0x118 + a4) + 0x4));
        R1024 = (0x90 + t134);
        t135 = (((struct o3770_int *)(a4))->v);
        t136 = (((struct o118_int *)(a4))->v);
        t137 = (((struct o11C_int *)(t135))->v);
        (((struct o90_float *)(((((struct o118_int *)(t135))->v))))->v) = 2.4000001f;
        (((struct o90_float *)(t137))->v) = 2.4000001f;
        (((struct o90_float *)(t136))->v) = 2.4000001f;
        (((struct o90_float *)(t134))->v) = 2.4000001f;
        *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)(((((struct o38_int *)(a4))->v)) + 0x8000);
        (((struct o3728_uchar *)(a4))->v) = 0x0;
        (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
        (((struct o371D_uchar *)(a4))->v) = 0x1;
        FUN_0c07c4b0((*(signed char *)(a4 + 0x1)), 0x5);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t144 = 0x15;
    }
    return t144;
}
