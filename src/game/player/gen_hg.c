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
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int FUN_0c0e590c(int a4, int a5, int a6, int a7)
{
    int stk[5];

    int v0_3;
    int v0_7;
    int v0_5;
    int v0_4;
    int v0_8;
    float w0_0;
    float w0_1;
    float w0_4;
    int v0_6;
    float w0_2;
    int v0_0;
    int T_;
    float F3;
    float F2;
    float F0;
    int R3;
    int R2;
    int R1;
    int FPUL_;
    float w0_3;
    int v0_2;
    int v0_1;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    v0_4 = *(signed char *)(v0_3 + 0x14);
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
    if ((((((struct o1E_short *)(v0_3))->v)) != 0)) goto L_C0E5A6A;
    if ((((((struct o30_float *)(v0_3))->v)) > 1350.0f)) goto L_C0E5A6A;
    (((struct o1E_ushort *)(v0_3))->v) = 0x1;
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
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(v0_3 + 0x28); }
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
    v0_8 = v0_6;
    v0_7 = ((FUN_0c0d0b60(0x0, 0x0, 0x1, (((int)stk + 0) + 0x8), v0_8, v0_7)));
    v0_5 = ((v0_5 - 1));
    w0_0 = ((w0_0 * w0_1));
    goto L_C0E5A66;
    L_C0E5A30:;
    v0_7 = (((~(((~v0_7) + 0x1) & 0xF)) + 0x1));
    goto L_C0E5A3A;
    L_C0E5942:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)(v0_3 + 0x14)) + 0x1);
    (((struct oA8_uchar *)(v0_3))->v) = 0x1;
    (((struct o1E_ushort *)(v0_3))->v) = 0x0;
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
    v0_5 = (v0_5 + 0x1);
    goto L_C0E598C;
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




int FUN_0c0d5838(int a4, float f4, float f5)
{
    int stk[6];

    float w0_0;
    int v0_0;
    int v0_6;
    float w0_1;
    int v0_3;
    float w0_2;
    float w0_4;
    int v0_7;
    int v0_1;
    int v0_2;
    int v0_5;
    int T_;
    float F3;
    float F2;
    float F1;
    int R6;
    int R3;
    int R2;
    int R1;
    int v0_4;
    float w0_6;
    float w0_5;
    float w0_3;
    int v0_8;
    v0_6 = a4;
    w0_0 = f4;
    w0_4 = f5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(v0_6 + 0x28); }
    v0_0 = *(signed char *)(v0_6 + 0x2);
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
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_0 + 0x4C) = *(struct mv3 *)(0xC1C81B0); }
    goto L_C0D598C;
    L_C0D58B0:;
    v0_7 = (0x3714);
    v0_6 = (((v0_3 * v0_1) + v0_5));
    if (((*(signed char *)((((v0_3 * v0_1) + v0_5) + 0x3714))) == 0)) goto L_C0D590C;
    v0_7 = (0x160);
    if ((!(((((struct o160_float *)(v0_6))->v)) > 0.0f))) goto L_C0D590C;
    v0_7 = (0xC);
    v0_8 = (v0_6 + 0x28);
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
    v0_3 = (v0_3 + 0x1);
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



int FUN_0c0e37e6(int a4)
{
    int qe0;
    int qe1;
    int stk[4];
    int t1;
    int t15;
    int t21;
    int t44;
    int t51;
    int t3;
    int t48;
    int t38;
    int t0;

    t0 = *(signed char *)0xC54098E;
    t1 = *(signed char *)(a4 + 0x2);
    qe0 = (((t0 << 2) << 2) + 0xC288050);
    if ((t1 != (*(int *)((qe0 + 0x0)))) && (t3 = *(int *)((qe0 + 0x4)), t1 != t3)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(a4 + 0x28); }
        t15 = 0x28;
        if ((*(signed char *)(a4 + 0x2)) == (*(int *)(((0xC288050 + (((*(signed char *)0xC54098E) << 2) << 2)) + 0x0)))) {
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
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(a4 + 0x28); }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)0xC0E3A60));
                FUN_0c0e5aa8((((int)stk + 0) + 0x4));
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(a4 + 0x28); }
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (*(float *)0xC0E3A60));
            FUN_0c0e5aa8((((int)stk + 0) + 0x4));
        }
        t38 = *(signed char *)(a4 + 0x2);
        qe1 = ((((t38 - 1) << 2) << 1) + 0xC1CBC68);
        *(unsigned int *)(((int)stk + 0)) = qe1;
        FUN_0c0d039e((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))), (*(int *)((qe1 + 0x4))));
    } else {
        t44 = *(signed char *)0xC54098D;
        if (t44 == 8) {
            t48 = *(short *)0xC540994;
            t51 = 0xC1CBC44;
            if ((*(signed char *)(a4 + 0x2)) == (*(int *)((qe0 + 0x0)))) {
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


int FUN_0c0f4920(int a4, int a5, int a6, int a7)
{
    int stk[8];
    int t4;
    int t11;
    int t0;
    int t27;
    int t3;
    int t23;
    int t24;

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
        (((struct o4_uint *)(t4))->v) = 0xC0F4662;
        (((struct o1_uchar *)(t4))->v) = (*(int *)(((int)stk + 16)));
        (((struct oAC_ushort *)(t4))->v) = 0x1F;
        (((struct oA9_uchar *)(t4))->v) = 0x40;
        (((struct o2_uchar *)(t4))->v) = (*(signed char *)(a7 + 0x8));
        *(unsigned char *)(((0x41C + t4) + 0x3)) = (*(signed char *)(a7));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4 + 0x40) = *(struct mv3 *)(a7 + 0xC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4 + 0x28) = *(struct mv3 *)(a7 + 0x18); }
        (((struct o160_float *)(t4))->v) = (float)((((struct o4_int *)(a7))->v));
        (((struct o38_uint *)(t4))->v) = ((((struct o24_int *)(a7))->v));
        *(unsigned char *)(((0x41C + t4) + 0x4)) = (*(signed char *)(a7 + 0x28));
        *(unsigned char *)(((0x41C + t4) + 0x5)) = (*(signed char *)(a7 + 0x29));
        *(unsigned char *)(((0x41C + t4) + 0x6)) = (*(signed char *)(a7 + 0x2A));
        *(unsigned char *)(((0x41C + t4) + 0x7)) = (*(signed char *)(a7 + 0x2B));
        *(unsigned char *)(((0x41C + t4) + 0xA)) = (*(signed char *)(a7 + 0x2C));
        FUN_0c0f485a(t4);
        t23 = *(signed char *)(t4 + 0x1);
        t24 = *(signed char *)(t4 + 0x1);
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

