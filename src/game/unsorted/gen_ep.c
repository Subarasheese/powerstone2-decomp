/* Straight-line functions with calls and guards (batch gen_ep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o74_float { char p[0x74]; float v; };
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
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05261c(int);
int FUN_0c0585a8(int, int, int, Stk3, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c07c19c(int);
int FUN_0c07e420(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0d6fcc(int);
int FUN_0c0d704c(int, int, int);
int FUN_0c0d7390(int);
int FUN_0c0d7404(int);
int FUN_0c0ece48(int);
int FUN_0c0ece6e(int);
int FUN_0c0ece8e(int);
int FUN_0c0ecec4(int);
int FUN_0c0ecf3c(int);
int FUN_0c0ed05c(int);
int FUN_0c0ed126(int);
int FUN_0c0ed16c(int);
int FUN_0c0ed1d2(int);
int FUN_0c0ed222(int);
int FUN_0c0ed268(int);
int FUN_0c0ed2b8(int);
int FUN_0c14ca80(int);
extern int FUN_0c150010();
int FUN_0c15009e(int, float, float, float, float, float);
extern float FUN_0c17c450();
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
int nlAddVector3op(int, int, int);
float nlInnerProduct(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
float FUN_0c142bdc(int a4, int a5, int a6);
int FUN_0c0dfb68(int a4, int a5, int a6, int a7);
int FUN_0c125254(int a4, int a5, int a6, int a7);
int FUN_0c0ed33c(int a4, int a5, int a6, int a7);
int FUN_0c14cad2(int a4, int a5, int a6, int a7, float f4);
int FUN_0c11a89a(int a4, int a5, int a6, int a7);
int FUN_0c04387a(int a4, int a5, int a6, int a7);
int FUN_0c158340(int a4, int a5, int a6, int a7);
int FUN_0c163d06(int a4, int a5, int a6, int a7);
int FUN_0c0d7104(int a4, int a5, int a6, int a7);
int FUN_0c167764(int a4, int a5, int a6, int a7);
int FUN_0c0fd368(int a4, int a5, int a6);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };








int FUN_0c04387a(int a4, int a5, int a6, int a7)
{
    int stk[10];
    int t15;
    int t14;
    int t63;
    int R1004;
    float R1008;
    float R1012;
    float u6;
    int t12;
    float u29;
    int t61;
    int t0;
    int t64;
    float t34;
    float R1024;
    int R1020;
    int t44;
    int t73;
    int t60;
    int t16;
    int t11;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(float *)((int)stk + 24);

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            t44 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x222);
            (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x16C);
            u6 = (0.5f) + 0.300000012f * (math_sin_angle16(((((struct o1E_short *)(a4))->v))));
            (((struct oBC_float *)(a4))->v) = u6;
            (((struct oB8_float *)(a4))->v) = u6;
            (((struct oB4_float *)(a4))->v) = u6;
            t11 = *(int *)(((((((((*(signed char *)(a4 + 0x2)) << 1) + 0x58) << 2) << 2) << 1) + ((*(int *)0xC4B410C) + 0x10)) + 0x1C));
            R1020 = t11;
            t12 = *(int *)(t11);
            R1004 = t12;
            mdl_vtx_iter_begin(t12, t12);
            t14 = 0x0;
            t15 = 0x0;
            for (;;) {
                t16 = mdl_vtx_iter_next();
                if (t16 != 0) {
                    break;
                }
                mdl_vtx_get_pos((((int)stk + 4) + 0x18));
                t15 = (((t14 << 1) + t14) << 2);
                if (((((struct o4_float *)(t15 + 0xC40DDB8))->v)) > 10.0f) {
                    R1012 = (*(float *)(t15 + 0xC40DDB8));
                    R1008 = ((((struct o8_float *)(t15 + 0xC40DDB8))->v));
                    if ((R1012) == 0.0f) {
                        R1012 = 9.99999997e-07f;
                    }
                    if ((R1008) == 0.0f) {
                        R1008 = 9.99999997e-07f;
                    }
                    R1004 = (unsigned short)(math_atan_angle16(((R1012) / (R1008))));
                    t15 = (t15 + 0xC40DDB8);
                    u29 = (((struct o4_float *)(t15))->v);
                    R1024 = u29;
                    *(float *)(((int)stk + 0)) = u29;
                    t34 = math_cos_angle16((int)((float)((((struct o1C_short *)(a4))->v)) + ((((float)(R1004) * (*(float *)0xC043B58)) / 56.0f))));
                    *(float *)(((int)stk + 32)) = (u29 + 0.200000003f * ((R1024) * t34));
                    mdl_vtx_set_pos((((int)stk + 4) + 0x18));
                }
                t14 = (t14 + 0x1);
            }
            t44 = t16;
        }
        t73 = t44;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o10_int *)(a4))->v))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o10_int *)(a4))->v))))->v));
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        t60 = *(int *)(((((*(int *)0xC4B410C) + 0x10) + ((((((*(signed char *)(a4 + 0x2)) << 1) + 0x58) << 2) << 2) << 1)) + 0x1C));
        R1020 = t60;
        t61 = *(int *)(t60);
        R1004 = t61;
        mdl_vtx_iter_begin(t61, t61);
        t63 = 0x0;
        for (;;) {
            t64 = mdl_vtx_iter_next();
            if (t64 != 0) {
                break;
            }
            mdl_vtx_get_pos((((int)stk + 4) + 0x18));
            if ((*(float *)(((int)stk + 32))) > 1.0f) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t63 << 1) + t63) << 2) + 0xC40DDB8)) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
            }
            t63 = (t63 + 0x1);
        }
        (((struct o1C_ushort *)(a4))->v) = 0x0;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        t73 = 0x14;
    }
    return t73;
}




int FUN_0c167764(int a4, int a5, int a6, int a7)
{
    int stk[12];

    int v0_0;
    int v0_2;
    int v0_4;
    int v0_3;
    int v0_5;
    int v0_1;
    int v0_7;
    float w0_0;
    float w0_1;
    float F2;
    float F3;
    int T_;
    int R2;
    int R1;
    int FPUL_;
    int v0_6;
    int R1004;
    int R1000;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    v0_4 = a4;
    v0_3 = a5;
    v0_5 = a6;
    v0_6 = a7;
    v0_7 = *(signed char *)(v0_4 + 0x14);
    v0_2 = (v0_7);
    v0_1 = (0xC2A3560);
    v0_0 = (v0_4);
    if ((v0_7 == 0)) goto L_C1677B8;
    if ((v0_2 == 1)) goto L_C167862;
    v0_2 = ((FUN_0c03f346(v0_0, v0_3, v0_5, v0_6)));
    L_C1679B2:;
    return v0_2;
    L_C167862:;
    v0_3 = (0xC2A3554);
    if ((((int)((int)((((struct o1C_short *)(v0_0))->v)) % (int)(*(int *)0xC2A355C))) != 0)) goto L_C1678F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 8) + 0x18)) = *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)); }
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c03744a))(((((struct oC4_int *)(v0_0))->v)), ((((struct o1E_short *)(v0_0))->v)), 0x52, (*(int *)0xC4B40CC));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x84)) = *(struct mv3 *)((((int)stk + 8) + 0xC)); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)) = *(struct mv4 *)((((int)stk + 8) + 0x18)); }
    (((struct o1E_ushort *)(v0_0))->v) = (((((struct o1E_short *)(v0_0))->v)) + 0x1);
    (((struct o1E_ushort *)(v0_0))->v) = (((((struct o1E_short *)(v0_0))->v)) & 0x3);
    L_C1678F4:;
    v0_2 = (v0_3 + 0x8);
    if (((int)((((struct o1C_short *)(v0_0))->v)) > (int)(((((struct o8_int *)(v0_3))->v)) << 2))) goto L_C167928;
    R1004 = 0x0;
    v0_2 = *(int *)(v0_2);
    R1000 = (v0_2 << 2);
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), 0xC2A35A4, 0xC2A3598, ((((struct o1C_short *)(v0_0))->v)), (v0_2 << 2), 0x0);
    L_C167928:;
    v0_5 = (((struct o1C_short *)(v0_0))->v);
    v0_2 = (v0_3);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)((((struct o4_int *)(v0_3))->v)))) goto L_C16795A;
    if (((int)v0_4 > (int)(*(int *)(v0_2)))) goto L_C16795A;
    v0_4 = ((((struct o4_int *)(v0_2))->v));
    R1004 = v0_4;
    v0_2 = (((struct o8_int *)(v0_2))->v);
    R1000 = (v0_2 << 2);
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (v0_1 + 0x10), v0_1, ((((struct o1C_short *)(v0_0))->v)), (v0_2 << 2), v0_4);
    L_C16795A:;
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 + 0x1);
    v0_2 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)(((((struct o8_int *)(v0_3))->v)) << 2))) goto L_C1679B2;
    (((struct o14_uchar *)(v0_0))->v) = 0x3;
    v0_2 = (0x14);
    goto L_C1679B2;
    L_C1677B8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x14)) + 0x1);
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c03744a))(((((struct oC4_int *)(v0_0))->v)), 0x4, 0x52, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x21F;
    v0_4 = (((struct oC4_int *)(v0_0))->v);
    v0_5 = nlRand();
    v0_2 = (v0_5);
    v0_3 = (0x1E);
    v0_4 = ((0x80 + v0_4));
    if (((int)v0_5 < 0)) goto L_C16781C;
    v0_2 = ((v0_2 & 0x3));
    L_C167826:;
    v0_5 = (int)(v0_2 * v0_3) >= 0;
    v0_2 = ((v0_2 * v0_3));
    if (v0_5) goto L_C167830;
    v0_2 = (v0_2 + 0x3);
    L_C167830:;
    w0_0 = (((float)((v0_2 >> 1) >> 1) * 65536.0f) / 360.0f);
    *(unsigned int *)(v0_4) = ((int)(w0_0 + 0.5f) & 0xFFFF);
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)) = *(struct mv4 *)(v0_1); }
    w0_1 = (0.5f);
    w0_1 = (360.0f);
    FPUL_ = ((int)(w0_0 + 0.5f));
    goto L_C167862;
    L_C16781C:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x3)) + 0x1));
    goto L_C167826;
}



