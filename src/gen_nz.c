/* Straight-line functions with calls and guards (batch gen_nz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c036606(void);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aaf6(int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c064f80(int);
int FUN_0c067734(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07c4b0(int, int);
int FUN_0c07d666(int, int);
int FUN_0c07d720(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07f0fc(int);
int FUN_0c07f312(int, int);
int FUN_0c07f67c(int);
extern int FUN_0c07f820();
extern int FUN_0c07f9a2();
int FUN_0c07fc00(int);
int FUN_0c07fcda(int);
int FUN_0c07fdba(int);
int FUN_0c07fe02(int, int, int, int);
int FUN_0c081dfc(int, int, int);
extern int FUN_0c085cac();
int FUN_0c0c30a8(int, int, int);
int FUN_0c100780(int);
int FUN_0c104cc8(int);
int FUN_0c105cec(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1161f0(void);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d14(void);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c160f66(int, int);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c082310(int a4, int a5, int a6, int a7);
int FUN_0c07fea4(int a4, int a5, int a6);
int FUN_0c105e8c(int a4);

int FUN_0c082310(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t4;
    register int t6;
    register int t14;
    register int t16;
    register int t24;
    register int t42;
    register int t43;
    register int t52;
    register int t53;
    register int t62;
    register float u66;
    register int t67;
    register float u71;
    register int t122;
    register float u126;
    register int t127;
    register float u131;
    register int t134;
    register int t135;
    register int t136;
    register int t137;
    register int t144;

    *(unsigned char *)(((int)stk + 28)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xB;
    t0 = ((int (*)(int, int, int, int))(FUN_0c081dfc))(a4, a5, a6, a7);
    (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC532498);
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
    (((struct o3716_uchar *)(t6))->v) = (*(signed char *)((t6 + 0x3715)));
    (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
    (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3743_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3757_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    t14 = (((struct o3770_int *)(a4))->v);
    (((struct o37FC_float *)(t14))->v) = 0.0f;
    (((struct o37F4_float *)(t14))->v) = 0.0f;
    t16 = ((int (*)(int))(FUN_0c081dfc))(((((struct o3770_int *)(a4))->v)));
    (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((((struct o3770_int *)(a4))->v)) + 0x28)));
    FUN_0c067734(((((struct o3770_int *)(a4))->v)));
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x18);
    t24 = *(signed char *)(((int)stk + 28));
    if (t24 != 0) {
        if (t24 == 1) {
            *(int *)((int)stk + 20) = 0x2B;
            *(int *)((int)stk + 16) = 0x5;
            *(int *)((int)stk + 12) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x2B, 0xFFFFFFFF, 0x5, 0x2B);
            *(int *)((int)stk + 8) = 0x2C;
            *(int *)((int)stk + 4) = 0x5;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x2C, 0xFFFFFFFF, 0x5, 0x2C);
            (((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o28_float *)(a4))->v));
            (((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o30_float *)(a4))->v));
            *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
            (((struct o3728_uchar *)(a4))->v) = 0x0;
            (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            (((struct o371D_uchar *)(a4))->v) = 0x1;
            FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
            (((struct o15_uchar *)(a4))->v) = 0x1;
            t144 = 0x15;
        } else {
            t144 = t24;
            if (t24 == 2) {
                *(int *)((int)stk + 20) = 0x1A;
                *(int *)((int)stk + 16) = 0x5;
                *(int *)((int)stk + 12) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x1A, 0xFFFFFFFF, 0x5, 0x1A);
                if ((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x372C))) == 0) {
                    t42 = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
                    *(int *)((int)stk + 20) = t42;
                    t43 = FUN_0c07d720(a4);
                    if ((int)(unsigned short)((t42 - t43) + 0x4000) > (int)0x8000) {
                        *(int *)((int)stk + 20) = 0x1F;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1F, 0xFFFFFFFF, 0x5, 0x1F);
                    } else {
                        *(int *)((int)stk + 20) = 0x20;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x20, 0xFFFFFFFF, 0x5, 0x20);
                    }
                } else {
                    t52 = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
                    *(int *)((int)stk + 20) = t52;
                    t53 = FUN_0c07d720(a4);
                    if ((int)(unsigned short)((t52 - t53) + 0x4000) > (int)0x8000) {
                        *(int *)((int)stk + 20) = 0x1E;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1E, 0xFFFFFFFF, 0x5, 0x1E);
                    } else {
                        *(int *)((int)stk + 20) = 0x1D;
                        *(int *)((int)stk + 16) = 0x5;
                        *(int *)((int)stk + 12) = 0xFFFFFFFF;
                        FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1D, 0xFFFFFFFF, 0x5, 0x1D);
                    }
                }
                t62 = (((struct o3770_int *)(a4))->v);
                *(int *)((int)stk + 20) = (0x28 + t62);
                u66 = ((((struct o28_float *)(a4))->v));
                u66 = u66 + 120.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                (((struct o28_float *)(t62))->v) = u66;
                t67 = (((struct o3770_int *)(a4))->v);
                *(int *)((int)stk + 20) = (0x30 + t67);
                u71 = ((((struct o30_float *)(a4))->v));
                u71 = u71 + 120.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                (((struct o30_float *)(t67))->v) = u71;
                (((struct o3728_uchar *)(a4))->v) = 0x0;
                (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
                (((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v) = (((((struct o160_float *)(a4))->v)) / 3.0f);
                FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), (int)(((((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v)) / 10.0f));
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) * 0.666660011f);
                if (1.0f > ((((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v))) {
                    (((struct o160_float *)(((((struct o3770_int *)(a4))->v))))->v) = 1.0f;
                }
                if (1.0f > ((((struct o160_float *)(a4))->v))) {
                    (((struct o160_float *)(a4))->v) = 1.0f;
                }
                (((struct o3840_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x270F;
                if ((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
                    FUN_0c05aaf6((0xB7 + (*(signed char *)((a4 + 0x1)))));
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
        *(int *)((int)stk + 20) = 0x19;
        *(int *)((int)stk + 16) = 0x5;
        *(int *)((int)stk + 12) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x19, 0xFFFFFFFF, 0x5, 0x19);
        if ((int)(unsigned short)(((*(int *)((a4 + 0x38))) - (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)))) + 0x4000) > (int)0x8000) {
            *(int *)((int)stk + 20) = 0x1B;
            *(int *)((int)stk + 16) = 0x5;
            *(int *)((int)stk + 12) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1B, 0xFFFFFFFF, 0x5, 0x1B);
        } else {
            *(int *)((int)stk + 20) = 0x1C;
            *(int *)((int)stk + 16) = 0x5;
            *(int *)((int)stk + 12) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x1C, 0xFFFFFFFF, 0x5, 0x1C);
        }
        t122 = (((struct o3770_int *)(a4))->v);
        *(int *)((int)stk + 20) = (0x28 + t122);
        u126 = ((((struct o28_float *)(a4))->v));
        u126 = u126 + 120.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(t122))->v) = u126;
        t127 = (((struct o3770_int *)(a4))->v);
        *(int *)((int)stk + 20) = (0x30 + t127);
        u131 = ((((struct o30_float *)(a4))->v));
        u131 = u131 + 120.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(t127))->v) = u131;
        (((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o2C_float *)(a4))->v));
        t134 = *(int *)(((0x118 + a4) + 0x4));
        *(int *)((int)stk + 20) = (0x90 + t134);
        t135 = (((struct o3770_int *)(a4))->v);
        t136 = (((struct o118_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 24)) = t135;
        t137 = *(int *)(((t135 + 0x118) + 0x4));
        (((struct o90_float *)(((((struct o118_int *)(t135))->v))))->v) = 2.4000001f;
        (((struct o90_float *)(t137))->v) = 2.4000001f;
        (((struct o90_float *)(t136))->v) = 2.4000001f;
        (((struct o90_float *)(t134))->v) = 2.4000001f;
        *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        (((struct o3728_uchar *)(a4))->v) = 0x0;
        (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
        (((struct o371D_uchar *)(a4))->v) = 0x1;
        FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t144 = 0x15;
    }
    return t144;
}

int FUN_0c07fea4(int a4, int a5, int a6)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_2 = a4;
    v0_1 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 12)) = v0_2;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x371C))) == 0)) goto L_C07FF50;
    v0_2 = (FUN_0c07f0fc((*(int *)(((int)stk + 12))))) == 0;
    if (v0_2) goto L_C07FEF4;
    if (((*(signed char *)((0x371D + (*(int *)(((int)stk + 12)))))) == 1)) goto L_C07FEF4;
    if ((((((struct o3768_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C07FEE0;
    v0_3 = FUN_0c07f312((*(int *)(((int)stk + 12))), 0x0);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C07FEF4;
    L_C08030E:;
    return 0x1;
    L_C07FEF4:;
    if (((*(signed char *)((0x375A + (*(int *)(((int)stk + 12)))))) == 1)) goto L_C07FF1C;
    if (((*(signed char *)((0x375A + (*(int *)(((int)stk + 12)))))) == 2)) goto L_C07FF1C;
    if (((*(signed char *)((0x375A + (*(int *)(((int)stk + 12)))))) == 4)) goto L_C07FF1C;
    if (((*(signed char *)((0x375A + (*(int *)(((int)stk + 12)))))) != 5)) goto L_C07FF50;
    L_C07FF1C:;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x1A;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x0;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x1A, 0x0)));
    goto L_C08030E;
    L_C07FF50:;
    if ((((((struct o3770_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C07FF82;
    if (((*(signed char *)((0x371D + (*(int *)(((int)stk + 12)))))) != 1)) goto L_C07FF82;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0xC;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x0;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0xC, 0x0)));
    goto L_C08030E;
    L_C07FF82:;
    if (!(((*(signed char *)((0x3731 + (*(int *)(((int)stk + 12)))))) == 2))) goto L_C080230;
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x3721))) != 0)) goto L_C07FF9E;
    if ((((((struct o3768_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C0800DC;
    v0_1 = FUN_0c07f312((*(int *)(((int)stk + 12))), 0x1);
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0800DC;
    goto L_C08030E;
    L_C080230:;
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x3731))) != 0)) goto L_C08029A;
    v0_1 = *(int *)(((int)stk + 12));
    v0_1 = (FUN_0c0c30a8(((((struct o376C_int *)(v0_1))->v)), 0x1, v0_1)) == 0;
    if (v0_1) goto L_C080256;
    v0_2 = ((FUN_0c07fe02((*(int *)(((int)stk + 12))), 0x0, v0_0, 0x0)));
    goto L_C08030E;
    L_C080256:;
    if ((((((struct o3768_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C08029A;
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x371C))) != 0)) goto L_C08029A;
    v0_0 = *(int *)(((int)stk + 12));
    v0_0 = (FUN_0c0c30a8(((((struct o3768_int *)(v0_0))->v)), 0x2, v0_0)) == 0;
    if (v0_0) goto L_C08029A;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x7;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x4;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x7, 0x4)));
    goto L_C08030E;
    L_C08029A:;
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x371C))) == 0)) goto L_C0802C2;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x1A;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x0;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x1A, 0x0)));
    goto L_C08030E;
    L_C0802C2:;
    if (((*(signed char *)((0x3731 + (*(int *)(((int)stk + 12)))))) != 2)) goto L_C0802EA;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x7;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x6;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x7, 0x6)));
    goto L_C08030E;
    L_C0802EA:;
    if (((*(signed char *)(((*(int *)(((int)stk + 12))) + 0x3731))) != 0)) goto L_C080316;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x7;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = (*(int *)(((int)stk + 8)));
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x7, (*(int *)(((int)stk + 8))))));
    goto L_C08030E;
    L_C080316:;
    return 0x0;
    L_C0800DC:;
    v0_1 = ((int (*)(int))(FUN_0c07f820))((*(int *)(((int)stk + 12))));
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C08013C;
    if ((v0_2 != 1)) goto L_C080100;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x9;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x0;
    v0_1 = (0x9);
    v0_0 = (0x0);
    L_C080114:;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), v0_1, v0_0)));
    goto L_C08030E;
    L_C080100:;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0xB;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x1;
    v0_1 = (0xB);
    v0_0 = (0x1);
    goto L_C080114;
    L_C08013C:;
    v0_1 = (((int (*)(int, int, int))(FUN_0c07f9a2))((*(int *)(((int)stk + 12))), ((int)stk + 0), v0_0)) == 0;
    if (v0_1) goto L_C08016C;
    (((struct o372A_uchar *)((*(int *)(((int)stk + 12)))))->v) = (*(int *)(((int)stk + 0)));
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0xB;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x2;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0xB, 0x2)));
    goto L_C08030E;
    L_C08016C:;
    v0_1 = (FUN_0c07fdba((*(int *)(((int)stk + 12))))) == 0;
    if (v0_1) goto L_C080182;
    v0_1 = FUN_0c07f312((*(int *)(((int)stk + 12))), 0x0);
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C080182;
    goto L_C08030E;
    L_C080182:;
    v0_1 = FUN_0c07fcda((*(int *)(((int)stk + 12))));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C08018E;
    goto L_C08030E;
    L_C08018E:;
    v0_1 = FUN_0c07fc00((*(int *)(((int)stk + 12))));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C08019A;
    goto L_C08030E;
    L_C08019A:;
    if ((((((struct o3768_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C0801B2;
    v0_1 = FUN_0c07f312((*(int *)(((int)stk + 12))), 0x0);
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0801B2;
    goto L_C08030E;
    L_C0801B2:;
    v0_1 = (FUN_0c07f67c((*(int *)(((int)stk + 12))))) == 0;
    if (v0_1) goto L_C0801D8;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x9;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x1;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x9, 0x1)));
    goto L_C08030E;
    L_C0801D8:;
    v0_1 = (FUN_0c064f80((*(int *)(((int)stk + 12))))) != 0;
    if (v0_1) goto L_C080230;
    v0_0 = *(int *)(((int)stk + 12));
    w0_1 = (((struct o2C_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if ((w0_1 > (((((struct o168_float *)(v0_0))->v)) + 80.0f))) goto L_C0801FC;
    goto L_C080316;
    L_C0801FC:;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x7;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x5;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x7, 0x5)));
    goto L_C08030E;
    L_C07FF9E:;
    v0_2 = (((int (*)(int, int, int))(FUN_0c07f9a2))((*(int *)(((int)stk + 12))), ((int)stk + 0), v0_0)) == 0;
    if (v0_2) goto L_C07FFCE;
    (((struct o372A_uchar *)((*(int *)(((int)stk + 12)))))->v) = (*(int *)(((int)stk + 0)));
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0xB;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x2;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0xB, 0x2)));
    goto L_C08030E;
    L_C07FFCE:;
    v0_2 = (FUN_0c07fdba((*(int *)(((int)stk + 12))))) == 0;
    if (v0_2) goto L_C07FFE4;
    v0_3 = FUN_0c07f312((*(int *)(((int)stk + 12))), 0x0);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C07FFE4;
    goto L_C08030E;
    L_C07FFE4:;
    v0_3 = FUN_0c07fcda((*(int *)(((int)stk + 12))));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C07FFF0;
    goto L_C08030E;
    L_C07FFF0:;
    v0_3 = FUN_0c07fc00((*(int *)(((int)stk + 12))));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C07FFFC;
    goto L_C08030E;
    L_C07FFFC:;
    if ((((((struct o3768_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C080014;
    v0_3 = FUN_0c07f312((*(int *)(((int)stk + 12))), 0x0);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C080014;
    goto L_C08030E;
    L_C080014:;
    v0_2 = (FUN_0c07f67c((*(int *)(((int)stk + 12))))) == 0;
    if (v0_2) goto L_C080050;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x9;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x1;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x9, 0x1)));
    goto L_C08030E;
    L_C080050:;
    v0_2 = (FUN_0c07f0fc((*(int *)(((int)stk + 12))))) == 0;
    if (v0_2) goto L_C080062;
    v0_2 = ((FUN_0c081dfc((*(int *)(((int)stk + 12))), v0_1, v0_0)));
    goto L_C08030E;
    L_C080062:;
    v0_1 = *(int *)(((int)stk + 12));
    v0_1 = (FUN_0c0c30a8(((((struct o376C_int *)(v0_1))->v)), 0x1, v0_1)) == 0;
    if (v0_1) goto L_C08007E;
    v0_2 = ((FUN_0c07fe02((*(int *)(((int)stk + 12))), 0x1, v0_0, 0x0)));
    goto L_C08030E;
    L_C08007E:;
    v0_1 = (FUN_0c064f80((*(int *)(((int)stk + 12))))) == 0;
    if (v0_1) goto L_C08008C;
    goto L_C080230;
    L_C08008C:;
    v0_0 = *(int *)(((int)stk + 12));
    w0_1 = (((struct o2C_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if ((w0_1 > (((((struct o168_float *)(v0_0))->v)) + 80.0f))) goto L_C0800A6;
    goto L_C080316;
    L_C0800A6:;
    (((struct o3717_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x7;
    (((struct o3718_uchar *)((*(int *)(((int)stk + 12)))))->v) = 0x5;
    v0_2 = ((((int (*)(int, int, int))(FUN_0c085cac))((*(int *)(((int)stk + 12))), 0x7, 0x5)));
    goto L_C08030E;
    L_C07FEE0:;
    if ((((((struct o376C_int *)((*(int *)(((int)stk + 12)))))->v)) == 0)) goto L_C07FEF4;
    v0_2 = ((FUN_0c081dfc((*(int *)(((int)stk + 12))), v0_1, v0_0)));
    goto L_C08030E;
}

int FUN_0c105e8c(int a4)
{
    int stk[8];
    register int t0;
    register int t6;
    register int t16;
    register int t25;
    register int t21;
    register int t29;
    register int t46;
    register int t48;
    register int t51;
    register int t53;
    register int t76;
    register int t82;
    register int t83;
    register int t84;
    register int t97;
    register int t100;
    register int t104;
    register int t40;
    register int t47;
    register int t49;
    register int t50;
    register int t52;
    register int t60;
    register int t70;
    register int t117;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t6 = *(signed char *)((a4 + 0x17));
                    if (t6 != 0) {
                        if (t6 != 1) {
                            if (t6 != 2) {
                                return t6;
                            }
                            t16 = *(signed char *)((a4 + 0x18));
                            if (t16 != 0) {
                                if (t16 != 1) {
                                    if (t16 != 2) {
                                        t25 = t16;
                                        if (t16 != 3) {
                                        } else {
                                            t21 = FUN_0c05f22c(0x3FCF);
                                            t25 = t21;
                                            if (t21 != 0) {
                                                (((struct o16_uchar *)(a4))->v) = 0x4;
                                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                                t25 = 0x17;
                                            }
                                        }
                                        return t25;
                                    }
                                    t29 = FUN_0c117d54();
                                    if ((int)t29 < 0) {
                                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                        return FUN_0c117e76();
                                    }
                                    return t29;
                                }
                                if ((*(signed char *)0xC535BAD) == 1) {
                                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                    (((struct o19_uchar *)(a4))->v) = 0x0;
                                    t40 = 0x19;
                                } else {
                                    if (((((struct o22_short *)(a4))->v)) == 100) {
                                        *(int *)((int)stk + 0) = 0x1;
                                        FUN_0c117a6e(0x1);
                                    }
                                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                                    t40 = 0x22;
                                }
                                return t40;
                            }
                            (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x0));
                            t46 = ((int (*)(int, int))(FUN_0c187798))(0xC532498, 0xC290A60);
                            t48 = ((int (*)(int, int, int))(FUN_0c187798))(t47, 0x0, 0xC290A78);
                            (((struct o3714_uchar *)(t49))->v) = 0x1;
                            t51 = ((int (*)(int, int))(FUN_0c187798))(t49, t50);
                            t53 = ((int (*)(int, int, int))(FUN_0c187798))(0x0, 0x0, t52);
                            FUN_0c115120(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            (((struct o22_ushort *)(a4))->v) = 0x0;
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                            (((struct o19_uchar *)(a4))->v) = 0x0;
                            return 0x19;
                        }
                        if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x2D) {
                            FUN_0c059c7a(0x18, 0x1);
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            (((struct o18_uchar *)(a4))->v) = 0x0;
                            t60 = 0x18;
                        } else {
                            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                            t60 = 0x22;
                        }
                        return t60;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x2D) {
                        FUN_0c059c7a(0x18, 0x1);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        t70 = 0x18;
                    } else {
                        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                        t70 = 0x22;
                    }
                    return t70;
                }
                if (t0 == 4) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    return 0x16;
                }
                if (t0 == 5) {
                    if ((unsigned int)0xC473D04 < (unsigned int)0xC474004) {
                        t76 = 0xC473D04;
                        for (;;) {
                            if (((*(int *)((t76 + 0x0))) & 0x1000) != 0) {
                                break;
                            }
                            t76 = (t76 + 0x4);
                            if ((unsigned int)t76 >= (unsigned int)0xC474004) {
                                (((struct o16_uchar *)(a4))->v) = 0x7;
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                return 0x17;
                            }
                        }
                        (((struct o16_uchar *)(a4))->v) = 0x6;
                    } else {
                        (((struct o16_uchar *)(a4))->v) = 0x7;
                    }
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    return 0x17;
                }
                if (t0 == 6) {
                    t82 = *(signed char *)((a4 + 0x17));
                    if (t82 != 0) {
                        if (t82 != 1) {
                            if (t82 != 2) {
                                return t82;
                            }
                            t83 = FUN_0c104cc8(0x3FCF);
                            if (t83 != 0) {
                                return FUN_0c105cec(a4);
                            }
                            return t83;
                        }
                        t84 = FUN_0c117d54();
                        if ((int)t84 < 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            return FUN_0c117e76();
                        }
                        return t84;
                    }
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    *(int *)((int)stk + 0) = 0x50;
                    return (FUN_0c117944(0x50));
                }
                if (t0 == 7) {
                    return FUN_0c105cec(a4);
                }
                return t0;
            }
            *(unsigned int *)(((int)stk + 4)) = 0xC539708;
            *(unsigned char *)0xC53970A = 0x0;
            FUN_0c06780e(0x4);
            FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            FUN_0c036606();
            FUN_0c06785c();
            FUN_0c03ea04(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            (((struct oA8_uchar *)((*(int *)(((int)stk + 4)))))->v) = 0x0;
            *(unsigned char *)0xC535BAC = 0x0;
            FUN_0c05b052(0x2D, 0x1);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            return 0x17;
        }
        t97 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
        t100 = t97;
        if (t97 != 99) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            t100 = (FUN_0c117a6e(0xFFFFFFFF));
        }
        return t100;
    }
    t104 = *(signed char *)((a4 + 0x17));
    if (t104 != 0) {
        t117 = t104;
        if (t104 != 1) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t117 = 0x17;
        }
    } else {
        FUN_0c100780(0x1);
        *(unsigned int *)0xC474718 = 0x0;
        (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
        (((struct o8_uint *)0xC474B8C)->v) = (FUN_0c11791c());
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c117a6e(0xFFFFFFFF);
        (((struct oC_uint *)0xC474B8C)->v) = (FUN_0c117d14());
        FUN_0c059c7a(0x19, 0x1);
        *(unsigned int *)((a4 + 0x10)) = (FUN_0c1161f0());
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t117 = 0x17;
    }
    return t117;
}
