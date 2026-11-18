/* Straight-line functions with calls and guards (batch gen_hg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_float { char p[0x10]; float v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_short { char p[0x28]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c056c28(int, int);
int FUN_0c0582de(int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d039e(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d0b60(int, int, int, int, int, int);
extern int FUN_0c0d522c();
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c0e33cc(int, int, int);
int FUN_0c0e34a8(int);
int FUN_0c0e4f58(int, int);
int FUN_0c0e5aa8(int);
int FUN_0c0f485a(int);
int FUN_0c1171f0(int);
int FUN_0c15f9b4(int, int, int, int);
extern int FUN_0c164d20();
int FUN_0c17c450(int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e590c(int a4, int a5, int a6, int a7);
int FUN_0c1080d4(int a4, int a5, int a6, int a7);
int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05457a(void);
int FUN_0c13bfc4(int a4, int a5, int a6, int a7);
int FUN_0c0e1fa4(int a4, int a5, int a6, int a7);
int FUN_0c0d5838(int a4, float f4, float f5);
void FUN_0c170db6(void);
int FUN_0c13ffc4(int a4, int a5, int a6, int a7);
int FUN_0c164e18(int a4, int a5, int a6, int a7);
int FUN_0c0f5c54(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0e37e6(int a4);
int FUN_0c0e8f3c(int a4, int a5, int a6, int a7);
int FUN_0c0f4920(int a4, int a5, int a6, int a7);
int FUN_0c167426(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e590c(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
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
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_7 = (v0_4);
    v0_3 = (v0_3);
    w0_0 = (100.0f);
    if ((v0_4 == 0)) goto L_C0E5942;
    if ((v0_7 == 1)) goto L_C0E5994;
    if ((v0_7 != 2)) goto L_C0E593E;
    L_C0E5A8E:;
    return v0_7;
    L_C0E593E:;
    goto L_C0E5A8E;
    L_C0E5994:;
    (((struct o30_float *)(v0_3))->v) = (((((struct o30_float *)(v0_3))->v)) + -5.0f);
    w0_1 = (((struct o30_float *)(v0_3))->v);
    w0_2 = (w0_1);
    FPUL_ = (0xC0A00000);
    if ((!(w0_1 > -7200.0f))) goto L_C0E5A88;
    if (((*(short *)((v0_3 + 0x1E))) != 0)) goto L_C0E5A6A;
    if ((((((struct o30_float *)(v0_3))->v)) > 1350.0f)) goto L_C0E5A6A;
    *(unsigned short *)((v0_3 + 0x1E)) = 0x1;
    v0_7 = (0xC0E5A28);
    v0_4 = (0xC1CBD68);
    v0_5 = (0xC0D0B60);
    v0_6 = (0xFFFFFFFF);
    v0_5 = (0x2);
    v0_7 = (0xC179AC0);
    w0_1 = (-1.0f);
    w0_2 = (-0.5f);
    w0_3 = (16.0f);
    L_C0E5A66:;
    if (!((v0_5 != 0))) goto L_C0E5A6A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((v0_3 + 0x28)); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_0);
    v0_8 = nlRand();
    v0_7 = (v0_8);
    if (((int)v0_8 < 0)) goto L_C0E5A30;
    v0_7 = ((v0_7 & 0xF));
    goto L_C0E5A3A;
    L_C0E5A6A:;
    v0_7 = (0x160);
    if ((((((struct o160_float *)(v0_3))->v)) > 0.0f)) goto L_C0E5A8E;
    FUN_0c0e4f58((v0_3 + 0x28), 0x0);
    thunk_FUN_0c05abb2(0x2C, (v0_3 + 0x28));
    L_C0E5A88:;
    v0_7 = ((((int (*)(int, int, int, int))(FUN_0c03f346))(v0_3, v0_0, v0_1, v0_2)));
    goto L_C0E5A8E;
    L_C0E5A3A:;
    w0_4 = (*(float *)(((int)stk + 16)));
    w0_4 = w0_4 + (*(float *)0xC0E5B38) * ((((float)v0_7 / w0_3) + w0_2));
    *(float *)(((int)stk + 16)) = w0_4;
    v0_7 = v0_4;
    *(int *)((int)stk + 4) = v0_7;
    v0_8 = v0_6;
    *(int *)((int)stk + 0) = v0_8;
    v0_7 = ((FUN_0c0d0b60(0x0, 0x0, 0x1, (((int)stk + 0) + 0x8), v0_8, v0_7)));
    v0_5 = ((v0_5 - 1));
    w0_0 = ((w0_0 * w0_1));
    goto L_C0E5A66;
    L_C0E5A30:;
    v0_7 = (((~(((~v0_7) + 0x1) & 0xF)) + 0x1));
    goto L_C0E5A3A;
    L_C0E5942:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_3))->v) = 0x1;
    *(unsigned short *)((v0_3 + 0x1E)) = 0x0;
    (((struct o160_float *)(v0_3))->v) = w0_0;
    (((struct o12E_ushort *)(v0_3))->v) = 0xFFFFFFEF;
    (((struct o12C_ushort *)(v0_3))->v) = 0x540;
    FUN_0c0d04c4((0xAC + v0_3), (v0_3 + 0x34));
    v0_6 = (0xC0D04C4);
    v0_5 = (0x0);
    L_C0E598C:;
    if (((int)v0_5 < (int)((((struct oC0_int *)(v0_3))->v)))) goto L_C0E5974;
    goto L_C0E5994;
    L_C0E5974:;
    v0_4 = *(int *)((((v0_5 << 2) + (0xC4 + v0_3)) + 0x0));
    FUN_0c0d04c4((v0_4 + 0x6), (v0_4 + 0x78));
    v0_5 = ((v0_5 + 0x1));
    goto L_C0E598C;
}

int FUN_0c1080d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 == 10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)0xC1082A8)->v));
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x4C)) = *(struct mv3 *)((t1 + 0x6C)); }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                t2 = (short)(t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 11) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x4C)) = *(struct mv3 *)((t1 + 0x6C)); }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                t2 = (short)(t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 80) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t1 = t0;
            if (t0 == 99) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t1 = 0x14;
            }
            return t1;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x4C)) = *(struct mv3 *)((t0 + 0x6C)); }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0xD, (*(int *)0xC4B410C));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 200.0f);
    FUN_0c1171f0(a4);
    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC108028;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((a4 + 0x10)) = t0;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 300.0f);
    (((struct o90_float *)(t0))->v) = ((((struct o0_float *)0xC1082A8)->v));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x4C)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = FUN_0c037320(0x1B, (*(int *)0xC4B40CC));
    t2 = 0x5;
    if ((int)a6 >= 0) {
        t2 = 0x1;
    }
    t3 = FUN_0c03f444(t2, 0x0, t1);
    t1 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x1B, (*(int *)0xC4B40CC));
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + t3));
            t2 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            if ((a5 & 0x2) != 0) {
                (((struct o88_float *)(t2))->v) = 1.0f;
                (((struct o84_float *)(t2))->v) = 1.0f;
            } else {
                (((struct o88_float *)(t2))->v) = 3.0f;
                (((struct o84_float *)(t2))->v) = 3.0f;
            }
            t0 = (t0 + 0x1);
            (((struct o8C_float *)(t2))->v) = 1.0f;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC142BDC;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct o22_ushort *)(t3))->v) = a8;
        t0 = *(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC202508))) << 2) + (0xC4 + a4)) + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((((((a5 & 0x1) << 1) + (a5 & 0x1)) << 2) + 0xC202510)); }
        FUN_0c0582de((t3 + 0x28), (t0 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x4C)) = *(struct mv3 *)(a7); }
        FUN_0c17c450((t3 + 0x4C));
        u0 = *(float *)0xC142C2C;
        math_vec3_mul_xyz((t3 + 0x4C), u0, u0, u0);
        if ((int)a6 >= 0) {
            FUN_0c07e2f4(t3, a6);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c064d24(t3, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xFFFFFEF0);
        }
        *(unsigned short *)((t3 + 0x1C)) = 0x3C;
        t1 = 0x3C;
    }
    return t1;
}

int FUN_0c05457a(void)
{
    int stk[10];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t22;
    register int t28;
    register int t30;
    register float t31;
    register float u34;
    register float u35;
    register float t36;
    register float u40;
    register int t43;
    register float t45;
    register float u48;
    register float u49;
    register float u54;
    register int t17;

    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    if ((*(signed char *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x0))) != 0) {
        u5 = (((struct o10_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        (((struct o4_float *)(((int)stk + 0)))->v) = (u5 - ((((struct o4_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v)));
        u6 = (((struct oC_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        u7 = (((struct o18_float *)(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C))))->v);
        (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u7 - u6);
        if ((u7 - u6) == 0.0f) {
            (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = 9.99999997e-07f;
        }
        t17 = (math_atan2_angle16(((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)), ((((struct o4_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v))));
    } else {
        t17 = (*(int *)((((0xC2580CC + (((((t0 << 2) << 2) << 1) + t0) << 2)) + ((short)t1 * (short)0x2C)) + 0x28)));
    }
    t22 = 0x0;
    for (;;) {
        if ((*(signed char *)((((t22 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            break;
        }
        t22 = (t22 + 0x1);
        if ((int)t22 >= (int)0x4) {
            t22 = 0xC241538;
            *(unsigned int *)(((int)stk + 0)) = (0x80 + t22);
            *(unsigned int *)(((0x80 + t22) + 0x20)) = t17;
            *(unsigned int *)((t22 + 0x20)) = t17;
            t28 = *(signed char *)((((0x4 * 0x3938) + 0xC532498) + 0x2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((0xC258E8C + (((t28 << 1) + t28) << 2))); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((0xC258E8C + (((t28 << 1) + t28) << 2))); }
            t30 = t22;
            t22 = t17;
            t31 = math_cos_angle16(t22);
            t22 = t17;
            u34 = (((struct o10_float *)(((int)stk + 0)))->v);
            u35 = ((math_sin_angle16(t22)) * ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v)));
            u35 = u35 + u34 * t31;
            (((struct o1C_float *)(((int)stk + 0)))->v) = u35;
            t22 = t17;
            t36 = math_sin_angle16(t22);
            t22 = t17;
            u40 = (-(t36 * ((((struct o10_float *)(((int)stk + 0)))->v))));
            u40 = u40 + ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v)) * (math_cos_angle16(t22));
            (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = u40;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x1C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t30 + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x1C)); }
            t22 = 0xC241524;
            return (FUN_0c056c28(t22, t30));
        }
    }
    *(unsigned int *)(((int)stk + 0)) = 0xC2415B8;
    *(unsigned int *)0xC2415D8 = t17;
    *(unsigned int *)0xC241558 = t17;
    t43 = *(signed char *)((((t22 * 0x3938) + 0xC532498) + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((0xC258E8C + (((t43 << 1) + t43) << 2))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x1C)) = *(struct mv3 *)((0xC258E8C + (((t43 << 1) + t43) << 2))); }
    t45 = math_cos_angle16(t17);
    u48 = (((struct o10_float *)(((int)stk + 0)))->v);
    u49 = ((math_sin_angle16(t17)) * ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v)));
    u49 = u49 + u48 * t45;
    (((struct o1C_float *)(((int)stk + 0)))->v) = u49;
    u54 = (-((math_sin_angle16(t17)) * ((((struct o10_float *)(((int)stk + 0)))->v))));
    u54 = u54 + ((((struct o8_float *)((((int)stk + 0) + 0x10)))->v)) * (math_cos_angle16(t17));
    (((struct o8_float *)((((int)stk + 0) + 0x1C)))->v) = u54;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x1C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC24156C) = *(struct mv3 *)((((int)stk + 0) + 0x1C)); }
    return (FUN_0c056c28(0xC241524, 0xC241538));
}

int FUN_0c13bfc4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, (((short)t0 * (short)0x3938) + 0xC532498), a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 - 0.100000001f);
                if (!(((((struct o48_float *)(a4))->v)) > 0.0f)) {
                    (((struct o48_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t1 = (((struct oC4_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0x4))) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)((a4 + 0x40)); }
            } else {
                if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x15))) >= (int)0x3) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
        } else {
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
            (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
            if (!(1.0f > ((((struct o48_float *)(a4))->v)))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t1 = (((struct oC4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0x4))) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)((a4 + 0x40)); }
        }
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
        t2 = t1;
        if (t1 != 26) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        return t2;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x2;
    }
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) > 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    }
    t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
    t0 = t1;
    if (t1 != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c0e1fa4(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t4;
    register int t48;
    register int t10;
    register int t12;
    register float t24;
    register int t36;
    register int t58;
    register int t60;
    register int t67;
    register int t69;
    register float t81;
    register int t93;
    register int t114;
    register int t105;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)0xC54223C) != 2) {
        t114 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    } else {
        t4 = *(signed char *)((a4 + 0x14));
        if (t4 != 0) {
            t48 = t4;
            if (t4 != 1) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C)); }
                nlSubVector3op((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), 0xC1CA714);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    t10 = *(int *)((t0 + 0x8));
                    *(unsigned int *)(((int)stk + 0)) = t10;
                    mdl_vtx_iter_begin(t10, t10);
                    for (;;) {
                        t12 = mdl_vtx_iter_next();
                        if (t12 != 0) {
                            break;
                        }
                        mdl_vtx_iter_next();
                        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                        mdl_vtx_set_pos((((int)stk + 0) + 0x10));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((((int)stk + 0) + 0x4)); }
                    }
                    t48 = 0x15;
                    if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x3) {
                        nlSubVector3op((((int)stk + 0) + 0x4), (((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C), 0xC1CA714);
                        nlSubVector3op((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
                        t24 = nlScalor((((int)stk + 0) + 0x4));
                        t48 = 0xC0E2178;
                        if ((*(float *)0xC0E2178) > t24) {
                            t48 = (((int (*)(int))(FUN_0c03f346))(a4));
                        }
                    }
                } else {
                    t36 = *(int *)((t0 + 0x8));
                    *(unsigned int *)(((int)stk + 0)) = t36;
                    mdl_vtx_iter_begin(t36, t36);
                    mdl_vtx_iter_next();
                    mdl_vtx_iter_next();
                    t48 = (mdl_vtx_set_pos((((int)stk + 0) + 0x10)));
                }
            }
            t105 = t48;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CA714); }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)(0xC1CA720); }
            t58 = *(int *)((t0 + 0x8));
            *(unsigned int *)(((int)stk + 0)) = t58;
            mdl_vtx_iter_begin(t58, t58);
            for (;;) {
                t60 = mdl_vtx_iter_next();
                if (t60 != 0) {
                    break;
                }
                mdl_vtx_set_pos(0xC1CA720);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C)); }
            nlSubVector3op((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), 0xC1CA714);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                t67 = *(int *)((t0 + 0x8));
                *(unsigned int *)(((int)stk + 0)) = t67;
                mdl_vtx_iter_begin(t67, t67);
                for (;;) {
                    t69 = mdl_vtx_iter_next();
                    if (t69 != 0) {
                        break;
                    }
                    mdl_vtx_iter_next();
                    mdl_vtx_get_pos((((int)stk + 0) + 0x4));
                    mdl_vtx_set_pos((((int)stk + 0) + 0x10));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((((int)stk + 0) + 0x4)); }
                }
                t105 = 0x15;
                if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x3) {
                    nlSubVector3op((((int)stk + 0) + 0x4), (((((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x6C), 0xC1CA714);
                    nlSubVector3op((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4));
                    t81 = nlScalor((((int)stk + 0) + 0x4));
                    t105 = 0xC0E2178;
                    if ((*(float *)0xC0E2178) > t81) {
                        t105 = (((int (*)(int))(FUN_0c03f346))(a4));
                    }
                }
            } else {
                t93 = *(int *)((t0 + 0x8));
                *(unsigned int *)(((int)stk + 0)) = t93;
                mdl_vtx_iter_begin(t93, t93);
                mdl_vtx_iter_next();
                mdl_vtx_iter_next();
                t105 = (mdl_vtx_set_pos((((int)stk + 0) + 0x10)));
            }
        }
        t114 = t105;
    }
    return t114;
}

int FUN_0c0d5838(int a4, float f4, float f5)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register float F1;
    register float F2;
    register float F3;
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
    v0_6 = a4;
    w0_0 = f4;
    w0_4 = f5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((v0_6 + 0x28)); }
    v0_0 = *(signed char *)((v0_6 + 0x2));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)((0xC1C8188 + (((v0_0 << 1) + v0_0) << 2)))));
    v0_7 = (0xC0D58A4);
    v0_0 = (0xC17C2F0);
    v0_1 = (0x3938);
    v0_2 = (0xFFFFFFFF);
    v0_0 = (v0_6);
    v0_3 = (0x0);
    v0_4 = (0x4);
    v0_5 = (0xC532498);
    w0_1 = (-450.0f);
    w0_2 = (550.0f);
    w0_3 = (999999.0f);
    L_C0D590E:;
    if (((int)v0_3 < (int)v0_4)) goto L_C0D58B0;
    if (((int)v0_2 < 0)) goto L_C0D5980;
    nlSubVector3op((((int)stk + 0) + 0xC), (((v0_2 * v0_1) + v0_5) + 0x28), (v0_0 + 0x28));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((((struct o8_float *)0xC0D59D0)->v)));
    w0_1 = (((struct oC_float *)0xC0D59D0)->v);
    w0_2 = ((*(float *)(((int)stk + 16))) * (1.0f + 1.0f));
    w0_2 = -w0_2;
    w0_0 = ((w0_2 + w0_1));
    if (((w0_2 + w0_1) > 0.0f)) goto L_C0D5954;
    w0_0 = (((((struct o10_float *)0xC0D59D0)->v)));
    L_C0D5954:;
    w0_0 = math_signed_sqrt(w0_0);
    w0_1 = (((struct o18_float *)0xC0D59D0)->v);
    (((struct o4C_float *)(v0_0))->v) = ((*(float *)(((int)stk + 12))) / (w0_0 + w0_1));
    (((struct o54_float *)(v0_0))->v) = ((*(float *)(((int)stk + 20))) / (w0_0 + w0_1));
    (((struct o50_float *)(v0_0))->v) = ((((struct o1C_float *)0xC0D59D0)->v));
    w0_0 = (w0_0);
    L_C0D598C:;
    return 0x0;
    L_C0D5980:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(0xC1C81B0); }
    goto L_C0D598C;
    L_C0D58B0:;
    v0_7 = (0x3714);
    v0_6 = (((v0_3 * v0_1) + v0_5));
    if (((*(signed char *)((((v0_3 * v0_1) + v0_5) + 0x3714))) == 0)) goto L_C0D590C;
    v0_7 = (0x160);
    if ((!(((((struct o160_float *)(v0_6))->v)) > 0.0f))) goto L_C0D590C;
    v0_7 = (0xC);
    v0_8 = ((v0_6 + 0x28));
    if ((!(((((struct o28_float *)(v0_6))->v)) > ((*(float *)(((int)stk + 12))) + w0_2)))) goto L_C0D590C;
    w0_5 = (((struct o8_float *)(v0_8))->v);
    w0_6 = *(float *)(((int)stk + 20));
    v0_7 = (0x14);
    w0_0 = (w0_5);
    w0_4 = (w0_6);
    if ((!(w0_5 > (w0_6 + w0_1)))) goto L_C0D590C;
    v0_7 = (0xC0D59D0);
    if ((!((w0_4 + ((((struct o0_float *)0xC0D59D0)->v))) > w0_0))) goto L_C0D590C;
    nlSubVector3op(((int)stk + 0), v0_8, (((int)stk + 0) + 0xC));
    w0_4 = nlScalor(((int)stk + 0));
    w0_0 = (w0_4);
    w0_0 = (w0_4);
    if ((!(w0_3 > w0_4))) goto L_C0D590C;
    v0_2 = (v0_3);
    w0_3 = (w0_0);
    L_C0D590C:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0D590E;
}

void FUN_0c170db6(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c05ffa4((((((struct o24_int *)0xC475A6C)->v)) + 0x1), 0x0, ((((struct o30_int *)0xC475A6C)->v)));
    t1 = (int)((int)(((((struct o0_int *)0xC475A6C)->v)) - 7) / (int)0xD);
    t2 = (((struct o0_short *)0xC542728)->v);
    if (((unsigned short)t2 & 0x200) != 0) {
        { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC475AFC) = *(struct mv8 *)(((((t1 << 2) << 2) << 1) + t0)); }
    } else {
        if (((unsigned short)t2 & 0x100) != 0) {
            { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC475B1C) = *(struct mv8 *)(((((t1 << 2) << 2) << 1) + t0)); }
            { struct mv8 { int w[8]; }; *(struct mv8 *)(((((t1 << 2) << 2) << 1) + t0)) = *(struct mv8 *)(0xC475AFC); }
        } else {
            if (((unsigned short)((((struct o0_short *)0xC542728)->v)) & 128) != 0) {
                { struct mv8 { int w[8]; }; *(struct mv8 *)(((((t1 << 2) << 2) << 1) + t0)) = *(struct mv8 *)(0xC475B1C); }
            }
        }
    }
    t1 = (((struct o28_short *)0xC542728)->v);
    if (((unsigned short)t1 & 0x200) != 0) {
        t2 = 0x0;
        for (;;) {
            { struct mv8 { int w[8]; }; *(struct mv8 *)((0xC475B3C + t2)) = *(struct mv8 *)((t2 + t0)); }
            t2 = (t2 + 0x20);
            if ((unsigned int)t2 >= (unsigned int)0x140) {
                break;
            }
        }
    } else {
        if (((unsigned short)t1 & 0x100) != 0) {
            t1 = 0x0;
            for (;;) {
                { struct mv8 { int w[8]; }; *(struct mv8 *)(((0xC475B3C + t1) + 0x140)) = *(struct mv8 *)((t1 + t0)); }
                { struct mv8 { int w[8]; }; *(struct mv8 *)((t1 + t0)) = *(struct mv8 *)((0xC475B3C + t1)); }
                t1 = (t1 + 0x20);
                if ((unsigned int)t1 >= (unsigned int)0x140) {
                    break;
                }
            }
        } else {
            if (((unsigned short)((((struct o28_short *)0xC542728)->v)) & 128) != 0) {
                t1 = 0x0;
                for (;;) {
                    { struct mv8 { int w[8]; }; *(struct mv8 *)((t1 + t0)) = *(struct mv8 *)(((0xC475B3C + t1) + 0x140)); }
                    t1 = (t1 + 0x20);
                    if ((unsigned int)t1 >= (unsigned int)0x140) {
                        break;
                    }
                }
            }
        }
    }
}

int FUN_0c13ffc4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0500000007f);
            (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.0500000007f);
            (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
            t0 = 0x4C;
            if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
    } else {
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0399999991f;
        (((struct o58_float *)(a4))->v) = -0.00079999998f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c164e18(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && ((t1 = *(signed char *)((a4 + 0x132)), t1 == 0) && (t2 = (((struct o404_int *)(a4))->v), t2 == 0))) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3268, 0xC2A325C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)(*(short *)((a4 + 0x1E)))) {
                t0 = ((int (*)(int, int))(FUN_0c164d20))((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                return ((int (*)(int))(FUN_0c03f346))(a4);
            }
            return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = *(signed char *)((a4 + 0x1));
        return ((int (*)(int, int, int, int))(FUN_0c164d20))(t0, (a4 + 0x28), a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A3268); }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x32, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x32, (*(int *)0xC4B40CC));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A325C); }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x800);
    if (((*(signed char *)((a4 + 0x131))) == 0) && ((t3 = *(signed char *)((a4 + 0x132)), t3 == 0) && (t4 = (((struct o404_int *)(a4))->v), t4 == 0))) {
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3268, 0xC2A325C, (*(short *)((a4 + 0x1C))), 0xA, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)(*(short *)((a4 + 0x1E)))) {
            t0 = ((int (*)(int, int))(FUN_0c164d20))((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x1));
    return ((int (*)(int, int))(FUN_0c164d20))(t0, (a4 + 0x28));
}

int FUN_0c0f5c54(int a4, int a5, int a6, int a7, float f4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 7) {
                                if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(FUN_0c0d532c))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                return FUN_0c0d5328();
            }
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (0xC1CE484 + (((t0 << 1) + t0) << 2)), 0x0);
        }
        return ((int (*)(int, int, int, int, float))(FUN_0c0d522c))(a4, a5, a6, a7, f4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CE484 + (((t0 << 1) + t0) << 2))); }
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x2;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, f4);
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    t0 = *(signed char *)((a4 + 0x3));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CE484 + (((t0 << 1) + t0) << 2))); }
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                return t0;
                            }
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            return FUN_0c0d5328();
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (0xC1CE484 + (((t0 << 1) + t0) << 2)), 0x0);
    }
    return ((int (*)(int))(FUN_0c0d522c))(a4);
}

int FUN_0c0e37e6(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t15;
    register int t21;
    register int t38;
    register int t44;
    register int t48;
    register int t51;
    int t3;

    t0 = *(signed char *)0xC54098E;
    t1 = *(signed char *)((a4 + 0x2));
    if ((t1 != (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) && (t3 = *(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)), t1 != t3)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((a4 + 0x28)); }
        t15 = 0x28;
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0x0)))) {
            t15 = 0x1C;
        }
        *(float *)(((int)stk + 8)) = (*(float *)((0xC1CBC08 + t15)));
        FUN_0c0e33cc(a4, (((int)stk + 0) + 0x4), (*(short *)0xC540994));
        thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
        (((struct o15_uchar *)(a4))->v) = 0x3;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t21 = *(signed char *)0xC54098D;
        if (t21 != 4) {
            if (t21 == 12) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((a4 + 0x28)); }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)0xC0E3A60));
                FUN_0c0e5aa8((((int)stk + 0) + 0x4));
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((a4 + 0x28)); }
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)0xC0E3A60));
            FUN_0c0e5aa8((((int)stk + 0) + 0x4));
        }
        t38 = *(signed char *)((a4 + 0x2));
        *(unsigned int *)(((int)stk + 0)) = ((((t38 - 1) << 2) << 1) + 0xC1CBC68);
        FUN_0c0d039e((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((((((t38 - 1) << 2) << 1) + 0xC1CBC68) + 0x4))));
    } else {
        t44 = *(signed char *)0xC54098D;
        if (t44 == 8) {
            t48 = *(short *)0xC540994;
            t51 = 0xC1CBC44;
            if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
                t51 = 0xC1CBC38;
            }
            FUN_0c0e33cc(a4, t51, t48);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x5;
        } else {
            if (t44 == 19) {
                (((struct o15_uchar *)(a4))->v) = 0x7;
                (((struct o58_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
            }
        }
    }
    return (FUN_0c0e34a8(a4));
}

int FUN_0c0e8f3c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t2 = (short)(t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CC228); }
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            return t0;
        }
        if ((*(int *)0xC540DD4) == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0xF, a6, a7);
        }
        t0 = 0x0;
        for (;;) {
            if ((*(signed char *)((((((struct o44_int *)((0xC540D94 + t0)))->v)) + 0x41D))) != 0) {
                t0 = (t0 + 0x4);
                if ((unsigned int)t0 >= (unsigned int)0x8) {
                    break;
                }
                continue;
            }
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
        return 0x41D;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CC228); }
    (((struct oA4_uint *)(a4))->v) = ((*(int *)0xC540DD4) + 0x64);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t1 = (*(int *)((t1 + 0x0)));
        FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
        t0 = (t0 + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CC228); }
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((int)(short)(t1 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        return t0;
    }
    if ((*(int *)0xC540DD4) == 0) {
        return ((int (*)(int, int))(FUN_0c03f346))(a4, 0xF);
    }
    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((((struct o44_int *)((0xC540D94 + t0)))->v)) + 0x41D))) != 0) {
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x8) {
                break;
            }
            continue;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return 0x41D;
}

int FUN_0c0f4920(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t3;
    register int t4;
    register int t11;
    register int t23;
    register int t24;
    register int t27;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 20)) = ((t0 << 2) << 1);
    t3 = FUN_0c037320(0x0, (*(int *)((((t0 << 2) << 1) + 0xC4B40E0))));
    t4 = FUN_0c03f444(0x2, 0x0, t3);
    if (t4 == 0) {
    } else {
        FUN_0c03733c(t4, 0x0, (*(int *)((((*(int *)(((int)stk + 20))) + 0xC4B40DC) + 0x4))));
        FUN_0c03fb78(t4, 0x2);
        (((struct o68_uint *)(((((struct oC8_int *)(t4))->v))))->v) = (((((struct o11C_int *)(t4))->v)) + 0x24);
        t11 = (((struct oC4_int *)(t4))->v);
        (((struct o74_float *)(t11))->v) = 0.0f;
        (((struct o70_float *)(t11))->v) = 0.0f;
        (((struct o6C_float *)(t11))->v) = 0.0f;
        *(unsigned int *)((t4 + 0x4)) = 0xC0F4662;
        *(unsigned char *)((t4 + 0x1)) = (*(int *)(((int)stk + 16)));
        (((struct oAC_ushort *)(t4))->v) = 0x1F;
        (((struct oA9_uchar *)(t4))->v) = 0x40;
        *(unsigned char *)((t4 + 0x2)) = (*(signed char *)((a7 + 0x8)));
        *(unsigned char *)(((0x41C + t4) + 0x3)) = (*(signed char *)((a7 + 0x0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x40)) = *(struct mv3 *)((a7 + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)((a7 + 0x18)); }
        (((struct o160_float *)(t4))->v) = (float)(*(int *)((a7 + 0x4)));
        *(unsigned int *)((t4 + 0x38)) = (*(int *)((a7 + 0x24)));
        *(unsigned char *)(((0x41C + t4) + 0x4)) = (*(signed char *)((a7 + 0x28)));
        *(unsigned char *)(((0x41C + t4) + 0x5)) = (*(signed char *)(((a7 + 0x29) + 0x0)));
        *(unsigned char *)(((0x41C + t4) + 0x6)) = (*(signed char *)((a7 + 0x2A)));
        *(unsigned char *)(((0x41C + t4) + 0x7)) = (*(signed char *)((a7 + 0x2B)));
        *(unsigned char *)(((0x41C + t4) + 0xA)) = (*(signed char *)((a7 + 0x2C)));
        FUN_0c0f485a(t4);
        *(int *)((int)stk + 12) = 0xFF;
        t23 = *(signed char *)((t4 + 0x1));
        *(int *)((int)stk + 8) = (~((int)0x1 << (int)t23));
        *(int *)((int)stk + 4) = 0x0;
        t24 = *(signed char *)((t4 + 0x1));
        *(int *)((int)stk + 0) = ((int)0x1 << (int)t24);
        FUN_0c064d24(t4, 0x1, 0x0, 0x3, ((int)0x1 << (int)t24), 0x0, (~((int)0x1 << (int)t23)), 0xFF);
        (((struct o26_uchar *)(t4))->v) = 0x1;
        (((struct oAA_uchar *)(t4))->v) = 0x1;
        (((struct oAB_uchar *)(t4))->v) = 0x2;
        *(unsigned char *)(((0x41C + t4) + 0x1)) = (*(signed char *)(((int)stk + 28)));
        t27 = *(int *)(((int)stk + 24));
        if (t27 != 0) {
            if (t27 != 1) {
                (((struct o15_uchar *)(t4))->v) = 0x2;
            } else {
                (((struct o15_uchar *)(t4))->v) = 0x8;
            }
        } else {
            (((struct o15_uchar *)(t4))->v) = 0x9;
            (((struct o40_float *)(t4))->v) = 1.0f;
            (((struct o48_float *)(t4))->v) = 1.0f;
        }
    }
    return t4;
}

int FUN_0c167426(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            if ((int)(*(short *)((a4 + 0x1C))) < (int)0x1E) {
                u0 = *(float *)0xC1675C0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0333333351f);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
                nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            return (short)(t0 + 0x1);
        }
        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A3498); }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3498); }
    (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0xF0;
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0)) {
        if ((int)(*(short *)((a4 + 0x1C))) < (int)0x1E) {
            u0 = *(float *)0xC1675C0;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + u0);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + u0);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0333333351f);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
            nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
        }
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x5A) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        return (short)(t0 + 0x1);
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
