/* Straight-line functions with calls and guards (batch gen_es): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0cff28(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c150160(int, int, int, float, float, float, float);
int FUN_0c179ac0(void);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c12e21c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0e0c78(int a4, int a5, int a6, int a7);

int FUN_0c12e21c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x1B))) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x14))) != 0) {
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.0500000007f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0500000007f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0199999996f);
            t0 = *(short *)((a4 + 0x1E));
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)t0 / (1.0f + 1.0f));
            if (!(((float)t0 / (1.0f + 1.0f)) > 0.0f)) {
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
    } else {
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0199999996f);
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x2;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    switch (t0) {
    case 0:
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o20_ushort *)(a4))->v) = 0x12;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    case 1:
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            (((struct o20_ushort *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    case 2:
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = ((float)t0 / (1.0f + 1.0f));
        if (!(((float)t0 / (1.0f + 1.0f)) > 0.0f)) {
            (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        break;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
            } else {
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00999999978f);
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
                t0 = (((struct o22_short *)(a4))->v);
                (((struct o14_float *)(((((struct oD0_int *)(a4))->v))))->v) = ((float)t0 / (1.0f + 1.0f));
                if (!(((float)t0 / (1.0f + 1.0f)) > 0.0f)) {
                    (((struct o14_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct o1B_uchar *)(a4))->v) = 0xA;
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                t1 = 0x22;
            }
            t0 = t1;
        } else {
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x1000);
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((short)((t1 - 1) + 0x1) == 0) {
                (((struct o22_ushort *)(a4))->v) = 0x2;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t2 = 0x17;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((short)(t0 - 1) == 0) {
            (((struct o22_ushort *)(a4))->v) = 0x12;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t2 = 0x17;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0e0c78(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R10;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
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
    register float w0_5;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = a6;
    v0_3 = a7;
    v0_0 = (v0_0);
    if (((*(signed char *)0xC54223C) == 2)) goto L_C0E0CA4;
    v0_2 = ((FUN_0c03f346(v0_0, v0_2, v0_1, v0_3)));
    L_C0E0FBE:;
    return v0_2;
    L_C0E0CA4:;
    v0_4 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_4);
    v0_3 = (0x0);
    if ((v0_4 == 0)) goto L_C0E0CB6;
    if ((v0_2 == 1)) goto L_C0E0CFC;
    goto L_C0E0FBE;
    L_C0E0CFC:;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C0E0D0C;
    if ((v0_2 == 1)) goto L_C0E0D70;
    goto L_C0E0FBE;
    L_C0E0D70:;
    v0_4 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_4);
    w0_0 = (0.629999995f);
    w0_1 = (3.0f);
    w0_2 = (0.829999983f);
    w0_3 = (0.899999976f);
    if ((v0_4 == 0)) goto L_C0E0D9C;
    if ((v0_2 == 1)) goto L_C0E0DBA;
    if ((v0_2 == 2)) goto L_C0E0E3C;
    if ((v0_2 != 3)) goto L_C0E0D98;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_2))->v) = (((((struct o74_float *)(v0_2))->v)) - 23.636364f);
    w0_4 = (((struct o74_float *)(((((struct oC4_int *)(v0_0))->v))))->v);
    w0_5 = (w0_4);
    FPUL_ = (0x41BD1746);
    if ((w0_4 > 0.0f)) goto L_C0E0F04;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = ((FUN_0c0cff28(v0_0, 0x0)));
    goto L_C0E0FBE;
    L_C0E0F04:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_3);
    if (((v0_3 & 1) != 0)) goto L_C0E0FBE;
    math_mat_get_translate((((((struct oC4_int *)(v0_0))->v)) + 0x28), (((int)stk + 0) + 0xC));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 180.0f);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 20.0f);
    v0_0 = FUN_0c179ac0();
    v0_2 = (v0_0);
    if (((int)v0_0 < 0)) goto L_C0E0F74;
    v0_2 = ((v0_2 & 0x1F));
    L_C0E0F7E:;
    w0_4 = (*(float *)(((int)stk + 12)));
    w0_4 = w0_4 + 120.0f * ((((float)v0_2 + -16.0f) / 16.0f));
    *(float *)(((int)stk + 12)) = w0_4;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 8)) = -15.757576f;
    v0_2 = ((FUN_0c150160((((int)stk + 0) + 0xC), ((int)stk + 0), v0_1, w0_3, w0_2, w0_0, w0_1)));
    goto L_C0E0FBE;
    L_C0E0F74:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1F)) + 0x1));
    goto L_C0E0F7E;
    L_C0E0D98:;
    goto L_C0E0FBE;
    L_C0E0E3C:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o74_float *)(v0_1))->v) = (((((struct o74_float *)(v0_1))->v)) + 86.6666641f);
    FPUL_ = (0x42AD5555);
    if ((1300.0f > ((((struct o74_float *)(((((struct oC4_int *)(v0_0))->v))))->v)))) goto L_C0E0E6A;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o12A_ushort *)(v0_0))->v) = v0_3;
    L_C0E0E6A:;
    math_mat_get_translate((((((struct oC4_int *)(v0_0))->v)) + 0x28), (((int)stk + 0) + 0xC));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 180.0f);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 20.0f);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 180.0f);
    FUN_0c150010((((int)stk + 0) + 0xC), w0_3, w0_2, w0_0, w0_1);
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 360.0f);
    v0_2 = ((FUN_0c150010((((int)stk + 0) + 0xC), w0_3, w0_2, w0_0, w0_1)));
    goto L_C0E0FBE;
    L_C0E0DBA:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = math_cos_angle16(((*(short *)((v0_0 + 0x1C))) << 13));
    (((struct o6C_float *)(v0_1))->v) = (w0_0 * 10.0f);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    w0_0 = ((w0_0 * 10.0f));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0E0DE4;
    goto L_C0E0FBE;
    L_C0E0DE4:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o6C_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = 0.0f;
    (((struct o12A_ushort *)(v0_0))->v) = 0xF;
    (((struct o136_uchar *)(v0_0))->v) = v0_3;
    v0_2 = ((thunk_FUN_0c05abb2((*(int *)((((*(signed char *)((v0_0 + 0x2))) << 2) + 0xC1CA3DC))), (v0_0 + 0x28))));
    goto L_C0E0FBE;
    L_C0E0D9C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0E0DAC;
    goto L_C0E0FBE;
    L_C0E0DAC:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    v0_2 = (0x1E);
    goto L_C0E0FBE;
    L_C0E0D0C:;
    v0_1 = *(signed char *)((0x15 + (*(int *)0xC540DB0)));
    v0_2 = (v0_1);
    if ((v0_1 == 5)) goto L_C0E0D1C;
    goto L_C0E0FBE;
    L_C0E0D1C:;
    FUN_0c0cff28(v0_0, 0x1);
    (((struct o16_uchar *)(v0_0))->v) = v0_3;
    v0_1 = FUN_0c179ac0();
    v0_2 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0E0D34;
    v0_2 = ((v0_2 & 0x3));
    L_C0E0D3E:;
    v0_1 = *(int *)((0xC1CA3CC + (v0_2 << 2)));
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    v0_2 = (v0_1);
    goto L_C0E0FBE;
    L_C0E0D34:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x3)) + 0x1));
    goto L_C0E0D3E;
    L_C0E0CB6:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    FUN_0c07e420(v0_0, 0x6);
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_2 = (0xC0D04C4);
    v0_2 = (v0_3);
    L_C0E0CF4:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0E0CDC;
    goto L_C0E0CFC;
    L_C0E0CDC:;
    v0_4 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_4 + 0x6), (v0_4 + 0x78));
    v0_2 = ((v0_2 + 0x1));
    goto L_C0E0CF4;
}
