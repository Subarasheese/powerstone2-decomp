/* Straight-line functions with calls and guards (batch gen_q): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o373A_uchar { char p[0x373A]; unsigned char v; };
struct o373F_uchar { char p[0x373F]; unsigned char v; };
struct o3740_uchar { char p[0x3740]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3753_uchar { char p[0x3753]; unsigned char v; };
struct o3754_uchar { char p[0x3754]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o3774_uint { char p[0x3774]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3818_ushort { char p[0x3818]; unsigned short v; };
struct o381A_ushort { char p[0x381A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o418_uint { char p[0x418]; unsigned int v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c012c34(int);
int FUN_0c01b0fc(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c03681e(void);
int FUN_0c036864(int);
int FUN_0c036b46(int);
int FUN_0c036b76(void);
int FUN_0c036de8(int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c0388e2(int, int, int, int);
int FUN_0c03999c(int, int, int, int);
int FUN_0c03a536(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0582ac(int, int);
int FUN_0c05879c(int, int, int, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059ce8(int);
int FUN_0c059df2(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05add4(int);
int FUN_0c05f22c(int);
int FUN_0c064d5a(int, int);
int FUN_0c064e70(int, int);
int FUN_0c06588a(int, int, int, int, int);
int FUN_0c070320(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07053a(int, int, float);
int FUN_0c07262e(int);
int FUN_0c07d666(int, int);
int FUN_0c07d774(int);
int FUN_0c0819c2(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0b4b4e(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0cb448(int, int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c0ef0cc(int);
int FUN_0c0ef102(int);
int FUN_0c0ef162(int);
int FUN_0c0ef1d8(int);
int FUN_0c0ef24a(int);
int FUN_0c0ef560(int);
int FUN_0c0f3d1c(int);
int FUN_0c0f42cc(int);
int FUN_0c0fb9a6(void);
int FUN_0c0fd0e8(int);
int FUN_0c0fddea(int);
int FUN_0c0fe000(int);
int FUN_0c105384(int);
int FUN_0c144710(int);
int FUN_0c14e5b4(int, int, int, int, int, int, int, int, int, int);
int FUN_0c14e7d8(int, int);
int FUN_0c14f824(int, int);
int FUN_0c158dc8(int, int, int, int, int, int, int, int);
int FUN_0c15a260(int, int, int, int, int, int, int, int);
int FUN_0c15ae2e(int);
int FUN_0c15b320(int, int);
int FUN_0c173370(int, int, int, int, int);
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c1864e0(int, int);
int FUN_0c18778c(void);
int FUN_0c187798(int, int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int vsprintf(int, int, int);
int FUN_0c145c74(int a4, int a5);
int FUN_0c15b366(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04bc04(void);
int FUN_0c096650(int a4);
int FUN_0c09ae92(int a4);
int FUN_0c0b0950(int a4);
int FUN_0c0b8370(int a4);
int FUN_0c0ba890(int a4);
int FUN_0c0e51a8(int a4, int a5, int a6);
int FUN_0c0ef668(int a4);
int FUN_0c0fe02a(int a4);
int FUN_0c11c80c(int a4, int a5, int a6, int a7);
int FUN_0c12d692(int a4, int a5, int a6, int a7);
int FUN_0c14403a(int a4, int a5, int a6, int a7);
int FUN_0c1661a0(int a4, int a5, int a6, int a7);
int FUN_0c1717f0(int a4, int a5, int a6);
int FUN_0c02917c(void);
int FUN_0c02f6da(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c03a028(int a4);
int FUN_0c0601da(int a4, int a5, float f4);
int FUN_0c065f0c(int a4, int a5);
int FUN_0c073744(int a4);
int FUN_0c08e590(int a4);
int FUN_0c0922cc(int a4);
int FUN_0c0b7bf4(int a4);
int FUN_0c0e2a8c(int a4, int a5, int a6, int a7);
int FUN_0c0f8b6c(int a4, int a5, int a6, int a7);
int FUN_0c14484a(int a4);
int FUN_0c14bc74(int a4);
int FUN_0c02c25c(int a4);
int FUN_0c03add8(int a4, int a5, int a6, int a7);
int FUN_0c070e64(int a4);
int FUN_0c07da48(int a4);
int FUN_0c07e79c(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c07fe02(int a4, int a5, int a6, int a7);
int FUN_0c085b8a(int a4);
int FUN_0c08f36c(int a4);
int FUN_0c096144(int a4);
int FUN_0c0c8e8c(int a4);
int FUN_0c0f4372(int a4);
int FUN_0c103c44(int a4, int a5, int a6, int a7);
int FUN_0c1421fe(int a4, int a5, int a6, int a7);

int FUN_0c145c74(int a4, int a5)
{
    register float u1;
    int t5;
    register int t8;
    register int t10;
    register float u13;
    register float u14;
    register float u15;
    register float t16;
    register int t18;
    register int t21;
    register int t23;

    u1 = *(float *)0xC145DB4;
    if ((*(float *)((a5 + 0x0))) == 0.0f) {
        *(float *)((a5 + 0x0)) = u1;
    }
    t5 = math_atan_angle16(((-((((struct o8_float *)(a5))->v))) / (*(float *)((a5 + 0x0)))));
    t8 = (0xFFFF & t5);
    if (0.0f > (*(float *)((a5 + 0x0)))) {
        t8 = ((0xFFFF & t5) + 0x8000);
    }
    t10 = *(int *)((a4 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = (unsigned short)(t10 + ((unsigned short)(0x4000 + t8) - t10));
    if (((((struct o4_float *)(a5))->v)) == 0.0f) {
        (((struct o4_float *)(a5))->v) = u1;
    }
    u13 = *(float *)((a5 + 0x0));
    u14 = (((struct o8_float *)(a5))->v);
    u15 = (u14 * u14);
    u15 = u15 + u13 * u13;
    t16 = math_signed_sqrt(u15);
    t18 = math_atan_angle16(((-t16) / ((((struct o4_float *)(a5))->v))));
    t21 = t18;
    if (0.0f > ((((struct o4_float *)(a5))->v))) {
        t21 = (t18 + 0x8000);
    }
    t23 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)(t23 + ((-(unsigned short)(0x4000 + t21)) - t23));
    return 0x4;
}

int FUN_0c15b366(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_4 = (v0_3);
    v0_0 = (v0_1);
    w0_0 = (200.0f);
    if ((v0_3 == 0)) goto L_C15B38A;
    if ((v0_4 == 1)) goto L_C15B3AC;
    if ((v0_4 == 2)) goto L_C15B3BA;
    if ((v0_4 == 3)) goto L_C15B3E4;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, a6, a7)));
    L_C15B406:;
    return v0_4;
    L_C15B3E4:;
    if (((*(short *)((v0_0 + 0x1C))) != ((((struct o4_int *)0xC2A2AAC)->v)))) goto L_C15B3F8;
    L_C15B3EE:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    goto L_C15B406;
    L_C15B3F8:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_4 = ((v0_1 + 0x1));
    goto L_C15B406;
    L_C15B3BA:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    FUN_0c187798(v0_1, v0_2);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + f4);
    FUN_0c15b320(((int)stk + 0), (v0_0 + 0x4C));
    goto L_C15B3E4;
    L_C15B3AC:;
    if (((*(short *)((v0_0 + 0x1C))) == ((((struct o0_int *)0xC2A2AAC)->v)))) goto L_C15B3EE;
    goto L_C15B3F8;
    L_C15B38A:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    FUN_0c187798(v0_1, v0_2);
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + f4);
    FUN_0c15ae2e(((int)stk + 0));
    goto L_C15B3AC;
}

int FUN_0c04bc04(void)
{
    register float u0;
    register float u1;
    int t2;
    register int t4;
    register int t5;
    register int t9;

    u0 = (((struct o0_float *)0xC04BD3C)->v);
    u1 = (((struct o4_float *)0xC04BD3C)->v);
    t2 = 0x0;
    for (;;) {
        t4 = FUN_0c037320(((t2 & 0x1) + 0x10), (*(int *)0xC4B410C));
        t5 = FUN_0c03f444(0x5, 0x0, t4);
        t9 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, ((t2 & 0x1) + 0x10), (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t5))->v) = 0x1;
            (((struct oAC_ushort *)(t5))->v) = 0xF;
            (((struct oA9_uchar *)(t5))->v) = 0x21;
            *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t5 + 0x4)) = 0xC04BB7E;
            *(unsigned char *)((t5 + 0x2)) = t2;
            (((struct o30_float *)(t5))->v) = ((((-((float)(0xFE & t2) * u1)) / (1.0f + 1.0f))) + u0);
            t9 = 0x30;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x30) {
            break;
        }
    }
    return t9;
}

int FUN_0c096650(int a4)
{
    int stk[7];
    register int t17;
    register int t22;
    register int t18;
    register int t19;
    int t1;

    if (((*(signed char *)((a4 + 0x2))) != 2) && (t1 = *(int *)0xC542260, (t1 & 3) == 0)) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (((int)stk + 12) + 0x4));
        *(float *)(((int)stk + 20)) = ((((struct o168_float *)(a4))->v));
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t17 = FUN_0c037bf6(a4);
    t22 = (unsigned char)t17;
    if ((unsigned char)t17 != 0) {
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x2;
        t18 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t18;
        t19 = t18;
        *(int *)((int)stk + 0) = t19;
        FUN_0c07e79c(a4, t18, 0x2, 0x8, t19, 0x2, 0x8);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t22 = 0x16;
    }
    return t22;
}

int FUN_0c09ae92(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        if ((*(signed char *)((a4 + 0x17))) != 0) {
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x0;
            t2 = (t0);
            t3 = t0;
            t0 = 0x0;
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            t1 = 0x1;
            t2 = (t3);
            t0 = 0x1;
        }
        FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b0950(int a4)
{
    int stk[2];
    register int t0;
    register int t6;
    register int t17;

    t0 = FUN_0c064e70(a4, ((int)stk + 4));
    if (t0 == 0) {
        *(float *)(((int)stk + 4)) = 0.0f;
    }
    (((struct o3790_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 4))));
    *(int *)((int)stk + 0) = 0x8000;
    t6 = FUN_0c06588a(a4, (0x3790 + a4), 0xF0, (*(int *)((a4 + 0x38))), 0x8000);
    if (((((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 4)))) + ((((struct o0_float *)0xC0B0A98)->v))) > ((((struct o3790_float *)(a4))->v))) {
        (((struct o2C_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - (*(float *)(((int)stk + 4))));
        (((struct o3747_uchar *)(a4))->v) = 0x4;
    } else {
        if (t6 != 0) {
            if (((((((struct o2C_float *)(a4))->v)) + (*(float *)(((int)stk + 4)))) + ((((struct o4_float *)0xC0B0A98)->v))) > ((((struct o3790_float *)(a4))->v))) {
                t17 = *(signed char *)((a4 + 0x3747));
                (((struct o3747_uchar *)(a4))->v) = (t17 - 1);
                if ((signed char)(t17 - 1) == 0) {
                    (((struct o2C_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) - (*(float *)(((int)stk + 4))));
                    (((struct o3747_uchar *)(a4))->v) = 0x4;
                }
            }
        } else {
            (((struct o3747_uchar *)(a4))->v) = 0x4;
        }
    }
    return 0x0;
}

int FUN_0c0b8370(int a4)
{
    int stk[7];
    register int t17;
    register int t22;
    register int t18;
    register int t19;
    int t1;

    if (((*(signed char *)((a4 + 0x2))) != 2) && (t1 = *(int *)0xC542260, (t1 & 3) == 0)) {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (((int)stk + 12) + 0x4));
        *(float *)(((int)stk + 20)) = ((((struct o168_float *)(a4))->v));
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (((int)stk + 12) + 0x4));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t17 = FUN_0c037bf6(a4);
    t22 = (unsigned char)t17;
    if ((unsigned char)t17 != 0) {
        *(int *)((int)stk + 8) = 0xC;
        *(int *)((int)stk + 4) = 0x2;
        t18 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t18;
        t19 = t18;
        *(int *)((int)stk + 0) = t19;
        FUN_0c07e79c(a4, t18, 0x2, 0xC, t19, 0x2, 0xC);
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t22 = 0x16;
    }
    return t22;
}

int FUN_0c0ba890(int a4)
{
    int stk[2];
    register int t0;
    register int t7;
    register int t8;
    register int t10;
    register int t43;
    register int t31;
    register int t34;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        t7 = *(int *)((a4 + 0x38));
        t8 = (((struct o3850_short *)(a4))->v);
        t10 = (unsigned short)(t8 - t7);
        if ((0x8000 & (unsigned short)(t8 - t7)) != 0) {
            t10 = ((unsigned short)(t8 - t7) | 0xFFFF0000);
        }
        if ((int)((((struct o20_short *)(a4))->v)) > 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t10 / (int)((((struct o20_short *)(a4))->v)))));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
    }
    t43 = 0x8C;
    if (!((*(float *)0xC0BA9D8) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        t31 = *(short *)((a4 + 0x1C));
        t43 = t31;
        if (t31 == 0) {
            FUN_0c14e5b4(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
            FUN_0c14e7d8(a4, 0x0);
            t34 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t34 + 0x1);
            t43 = (t34 + 0x1);
        }
    }
    return t43;
}

int FUN_0c0e51a8(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 42)) {
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            t0 = *(int *)(((0xC4 + a4) + 0x4));
            *(unsigned char *)(((*(int *)(((0xC4 + a4) + 0x8))) + 0x0)) = 0x0;
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0e4f8c(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0ef668(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        t0 = *(signed char *)((a4 + 0x16));
        if ((t0 != 0) && (t0 != 1)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0xF;
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        FUN_0c0ef24a(a4);
        break;
    case 1:
        t0 = *(signed char *)((a4 + 0x16));
        if ((t0 != 0) && (t0 != 1)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0xF;
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        FUN_0c0ef24a(a4);
        break;
    case 2:
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = 0x63;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        } else {
            FUN_0c0ef560(a4);
        }
        FUN_0c0ef102(a4);
        break;
    case 3:
        FUN_0c0ef162(a4);
        FUN_0c0ef102(a4);
        break;
    default:
        FUN_0c0ef1d8(a4);
        break;
    }
    return FUN_0c0ef0cc(a4);
}

int FUN_0c0fe02a(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c0fddea(a4);
        FUN_0c0fd0e8(a4);
        FUN_0c0fe000(a4);
    }
    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c105384((*(short *)((a4 + 0x1C)))));
    t0 = FUN_0c05f22c(0x101);
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0x1C));
        if (t1 == 2) {
            FUN_0c05aab6(0x0, 0x3);
            FUN_0c05add4(0x1);
            FUN_0c059ce8(0x75);
            return FUN_0c0fb9a6();
        }
        return t1;
    }
    return t0;
}

int FUN_0c11c80c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        FUN_0c03733c(a4, 0x34, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c18778c();
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xF0)) {
        FUN_0c0588bc((a4 + 0x40), 0xC292308, 0xC2922FC, (*(short *)((a4 + 0x1C))), 0xF0, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xF0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    return (short)(t0 + 0x1);
}

int FUN_0c12d692(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                (((struct oB0_float *)(a4))->v) = ((float)t0 / 4.0f);
                if (!(((float)t0 / 4.0f) > 0.0f)) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                }
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c14403a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t0 = 0xC20272C;
    t1 = a7;
    t2 = 0x0;
    for (;;) {
        t4 = (((a5 * 0x38) + 0xC20272C) + ((t2 << 2) << 2));
        t5 = 0x0;
        for (;;) {
            t6 = *(int *)((t4 + 0x0));
            t7 = t4;
            t4 = (t4 + 0x8);
            if ((int)t6 >= 0) {
                t6 = 0xC532498;
                if ((*(int *)((t7 + 0x0))) == 0) {
                    t3 = (*(signed char *)((a4 + 0x1)));
                    t1 = (*(int *)(((t7 + 0x4) + 0x0)));
                    t0 = 0xC4;
                    t1 = (t1 << 2);
                    t3 = ((short)t3 * (short)0x3938);
                    t3 = (t3 + t6);
                    t0 = (t0 + t3);
                    t1 = (t1 + t0);
                    t1 = (*(int *)((t1 + 0x0)));
                } else {
                    t1 = 0x3938;
                    t3 = (*(signed char *)((a4 + 0x1)));
                    t8 = *(int *)(((t7 + 0x4) + 0x0));
                    t0 = t8;
                    t1 = ((short)t3 * (short)t1);
                    t1 = (t1 + t6);
                    t1 = (t1 + (0x468));
                    t1 = (t1 + (((((t8 << 2) << 1) + t0) << 2) << 2));
                }
                if (t2 == a6) {
                    *(unsigned char *)((t1 + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)((t1 + 0x0)) = 0x0;
                }
            }
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)0x2) {
                break;
            }
        }
        t0 = 0x3;
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)t0) {
            break;
        }
    }
    return t3;
}

int FUN_0c1661a0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(short *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC535CB0));
    if (((unsigned short)t0 != 0x310) && ((unsigned short)t0 != 0x386)) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x9B);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            u1 = 3.0f;
            u1 = u1 + 0.5f * u0;
            (((struct o40_float *)(a4))->v) = u1;
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = u0;
            (((struct o44_float *)(a4))->v) = u0;
            t1 = 0x44;
        }
        t0 = t1;
    } else {
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.200000003f);
        if (!(3.0f > (u0 + 0.200000003f))) {
            (((struct o40_float *)(a4))->v) = 3.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        t0 = 0x44;
    }
    return t0;
}



int FUN_0c02f6da(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t12;
    register int t2;
    register int t5;
    register int t9;
    register int t11;

    stk[2] = a8;
    stk[3] = a9;
    stk[4] = a10;
    stk[5] = a11;
    stk[6] = a12;
    t0 = *(signed char *)0xC3BB3DC;
    t1 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
    t12 = t1;
    if (t1 != 32) {
        t2 = ((((int)stk + 4) + 0x18) + 0x4);
        if ((((((int)stk + 4) + 0x18) + 0x4) & 3) != 0) {
            t2 = ((((int)stk + 4) + 0x18) + 0x8);
        }
        *(unsigned int *)(((int)stk + 4)) = t2;
        t5 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x0)) = a4;
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x2)) = a5;
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x4)) = a6;
        *(unsigned char *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x6)) = a7;
        *(unsigned char *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x7)) = a8;
        *(unsigned short *)((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0x8)) = ((short)(a9 >> 0));
        t9 = vsprintf((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0xC), a10, (*(int *)(((int)stk + 4))));
        *(unsigned char *)((((((0x73C + (((short)t0 * (short)0xF7C) + 0xC4B10CC)) + (((((t5 << 2) << 2) << 1) + t5) << 1)) + 0xC) + t9) + 0x0)) = 0x0;
        *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE)) = ((*(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0xE))) + t9);
        t11 = *(short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10));
        *(unsigned short *)(((((short)t0 * (short)0xF7C) + 0xC4B10CC) + 0x10)) = (t11 + 0x1);
        t12 = (t11 + 0x1);
    }
    return t12;
}

int FUN_0c03a028(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t3 = *(signed char *)((a4 + 0x1));
    t4 = *(signed char *)(((0x371A + a4) + 0x0));
    t5 = *(int *)((((t4 << 2) + (0xC3C7DD8 + ((t3 << 2) << 1))) + 0x0));
    t6 = *(signed char *)((((0xC3C7DF8 + (t3 << 1)) + t4) + 0x0));
    t3 = 0xA8;
    if ((*(signed char *)((a4 + 0xA8))) != 0) {
        t4 = *(signed char *)((a4 + 0x2));
        t7 = t4;
        if ((int)t4 < (int)(*(int *)0xC1B71E4)) {
            t4 = 0xC54208F;
            if (((*(signed char *)((a4 + 0x375B))) != 0) && ((t0 = *(signed char *)0xC54208F, t0 != 0) && (t1 = *(signed char *)0xC542092, t1 != 0))) {
            } else {
                t0 = (FUN_0c17b4b0(0x1));
                t1 = t2;
                t2 = 0x0;
                t8 = t5;
                for (;;) {
                    if ((int)t2 >= (int)t6) {
                        break;
                    }
                    t5 = t8;
                    t0 = (*(signed char *)((t5 + 0x1)));
                    t9 = t0;
                    t0 = 0x371A;
                    t1 = (*(signed char *)((a4 + t0)));
                    t0 = (FUN_0c03999c(a4, t1, (*(signed char *)((t5 + 0x0))), t9));
                    t1 = t0;
                    t9 = (*(int *)((t1 + 0x8)));
                    if (t9 != 0) {
                        t0 = (FUN_0c03a536(t5, t1));
                    } else {
                        t5 = t9;
                        t10 = t1;
                    }
                    t8 = (t8 + 0x48);
                    t9 = t5;
                    t1 = t10;
                    t2 = (t2 + 0x1);
                }
                t4 = t0;
            }
            t7 = t4;
        }
        t3 = t7;
    }
    return t3;
}

int FUN_0c0601da(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    float u0;
    float u1;
    float u2;
    float u3;
    register float u4;

    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                u4 = *(float *)((a4 + 0x0));
                if (!(((((struct o4_float *)(a4))->v)) > u4) && (u0 = (((struct o8_float *)(a4))->v), !(u0 > u4))) {
                    (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)((a4 + 0x0))));
                } else {
                    u0 = (((struct o8_float *)(a4))->v);
                    t0 = 0x4;
                    if (!((*(float *)((a4 + 0x0))) > u0) && (u1 = (((struct o4_float *)(a4))->v), !(u1 > u0))) {
                        t0 = 0x8;
                    }
                    (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)(((t0 + a4) + 0x0))));
                }
                t0 = 0x14;
            } else {
                if (!(((((struct o8_float *)(a4))->v)) > (*(float *)((a4 + 0x0))))) {
                    u0 = (*(float *)((a4 + 0x0)));
                } else {
                    u0 = ((((struct o8_float *)(a4))->v));
                }
                (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u0);
                (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * ((((struct o4_float *)(a4))->v)));
                t0 = 0x18;
            }
            t1 = t0;
        } else {
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)((a4 + 0x0))));
            (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * ((((struct o4_float *)(a4))->v)));
            (((struct o1C_float *)(a5))->v) = (((((struct o1C_float *)(a5))->v)) * ((((struct o8_float *)(a4))->v)));
            t1 = 0x1C;
        }
        t0 = t1;
    } else {
        u0 = *(float *)((a4 + 0x0));
        if (!(((((struct o4_float *)(a4))->v)) > u0) && (u2 = (((struct o8_float *)(a4))->v), !(u2 > u0))) {
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)((a4 + 0x0))));
        } else {
            u0 = (((struct o8_float *)(a4))->v);
            t1 = 0x4;
            if (!((*(float *)((a4 + 0x0))) > u0) && (u3 = (((struct o4_float *)(a4))->v), !(u3 > u0))) {
                t1 = 0x8;
            }
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * (*(float *)(((t1 + a4) + 0x0))));
        }
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c065f0c(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    float u22;

    u0 = (((struct o8_float *)(a5))->v);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct oC_float *)((a4 + 0x8)))->v);
    u3 = (((struct oC_float *)((a5 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a4 + 0x8)))->v);
    u7 = (((struct o14_float *)((a5 + 0x8)))->v);
    u8 = (((struct o8_float *)((a5 + 0x8)))->v);
    u9 = (((struct o8_float *)((a4 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct oC_float *)((a4 + 0x8)))->v);
    u14 = (((struct o10_float *)((a5 + 0x8)))->v);
    u15 = (((struct o4_float *)((a5 + 0x8)))->v);
    u16 = (((struct o4_float *)((a4 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u14 + u13) - u18);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u21)) && (u22 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u22)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c073744(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x1;
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o3716_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3715)));
    (((struct o3715_uchar *)(a4))->v) = 0x20;
    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
    (((struct o3739_uchar *)(a4))->v) = 0x10;
    (((struct o3774_uint *)(a4))->v) = ((((struct o3770_int *)(a4))->v));
    (((struct o373F_uchar *)(a4))->v) = (*(signed char *)((((((struct o3774_int *)(a4))->v)) + 0x1)));
    (((struct o3740_uchar *)(a4))->v) = (*(signed char *)((((((struct o3774_int *)(a4))->v)) + 0x1)));
    (((struct o418_uint *)(a4))->v) = ((*(int *)0xC25AD1C) + 0x3C);
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3774_int *)(a4))->v))))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(((((struct o3774_int *)(a4))->v))))->v)) + (*(float *)0xC073884));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3774_int *)(a4))->v))))->v));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3774_int *)(a4))->v)) + 0x38)));
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0xF);
    (((struct o374B_uchar *)(a4))->v) = 0x2;
    return FUN_0c0cb448(a4, 0x0);
}

int FUN_0c08e590(int a4)
{
    int stk[5];
    register int t6;
    register int t18;

    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    if (((((struct o20_short *)(a4))->v)) == 12) {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            *(int *)((int)stk + 12) = 0xC1C5F74;
            *(int *)((int)stk + 8) = 0xC1C5F68;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x18;
            FUN_0c158dc8((*(signed char *)((a4 + 0x1))), 0x1, 0x5, 0x1, 0x18, 0x52, 0xC1C5F68, 0xC1C5F74);
        } else {
            *(int *)((int)stk + 12) = 0xC1C5F8C;
            *(int *)((int)stk + 8) = 0xC1C5F80;
            *(int *)((int)stk + 4) = 0x52;
            *(int *)((int)stk + 0) = 0x18;
            t6 = *(signed char *)((a4 + 0x1));
            (((struct o10_uchar *)(((int)stk + 0)))->v) = t6;
            FUN_0c15a260((*(signed char *)(((int)stk + 16))), 0x1, 0x5, (*(int *)((((((struct o8C_int *)((*(int *)((((signed char)t6 << 2) + 0xC4B40FC)))))->v)) + 0x0))), 0x18, 0x52, 0xC1C5F80, 0xC1C5F8C);
        }
    }
    t18 = FUN_0c037bf6(a4);
    if ((unsigned char)t18 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}



int FUN_0c0e2a8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)0xC54223C) == 2) {
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 + 0.266666681f);
            (((struct o48_float *)(a4))->v) = (u0 + 0.266666681f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.266666681f);
            t0 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 - 0.0857142881f);
        (((struct o48_float *)(a4))->v) = (u0 - 0.0857142881f);
        (((struct o44_float *)(a4))->v) = (u0 - 0.0857142881f);
        if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x40;
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}

int FUN_0c0f8b6c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB0_float *)(a4))->v) = 1.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0121666668f);
                    if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
                        return FUN_0c03f346(a4, 0xC541F43, a6, a7);
                    }
                    return 0xB0;
                }
                t1 = 0x22;
                if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)((((struct o22_short *)(a4))->v))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0022499999f);
            t1 = 0xB0;
            if (!(((((struct oB0_float *)(a4))->v)) > (*(float *)0xC0F8C80))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        return t2;
    }
    t1 = t0;
    if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0x6) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c14484a(int a4)
{
    int stk[3];
    register int t0;
    register int t5;
    register float u11;
    register float u12;
    register float u13;
    register float t14;
    register int t28;
    register float u34;
    register float u35;
    register float u36;
    register float t37;
    register int t48;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t48 = t0;
        if (t0 != 1) {
        } else {
            FUN_0c144710(a4);
            t5 = (((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v);
            math_mat_get_translate((t5 + 0x28), (a4 + 0x28));
            *(float *)(((int)stk + 4)) = 0.0f;
            *(float *)(((int)stk + 0)) = 0.0f;
            *(float *)(((int)stk + 8)) = 1.0f;
            FUN_0c0582ac(((int)stk + 0), (t5 + 0x28));
            *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
            u11 = *(float *)(((int)stk + 8));
            u12 = *(float *)(((int)stk + 0));
            u13 = (u11 * u11);
            u13 = u13 + u12 * u12;
            t14 = math_signed_sqrt(u13);
            t48 = math_atan2_angle16((-(*(float *)(((int)stk + 4)))), t14);
            *(unsigned int *)((a4 + 0x34)) = t48;
        }
    } else {
        t48 = 0x3714;
        if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x3714))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o26_uchar *)(a4))->v) = 0x1;
            (((struct oA4_uint *)(a4))->v) = 0x0;
            FUN_0c144710(a4);
            t28 = (((struct oC4_int *)((*(int *)((a4 + 0x10)))))->v);
            math_mat_get_translate((t28 + 0x28), (a4 + 0x28));
            *(float *)(((int)stk + 4)) = 0.0f;
            *(float *)(((int)stk + 0)) = 0.0f;
            *(float *)(((int)stk + 8)) = 1.0f;
            FUN_0c0582ac(((int)stk + 0), (t28 + 0x28));
            *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
            u34 = *(float *)(((int)stk + 8));
            u35 = *(float *)(((int)stk + 0));
            u36 = (u34 * u34);
            u36 = u36 + u35 * u35;
            t37 = math_signed_sqrt(u36);
            t48 = math_atan2_angle16((-(*(float *)(((int)stk + 4)))), t37);
            *(unsigned int *)((a4 + 0x34)) = t48;
        }
    }
    return t48;
}

int FUN_0c14bc74(int a4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14BD18;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d5a(t0, 0xC202BE8);
        (((struct o128_ushort *)(t0))->v) = ((int)0x1 << (int)(*(signed char *)((t0 + 0x1))));
        (((struct o12A_ushort *)(t0))->v) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & ((((struct o12A_short *)(t0))->v)));
        *(unsigned short *)((((0x12A + t0) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & (*(short *)((((0x12A + t0) + 0x2) + 0x0))));
        (((struct o12E_ushort *)(t0))->v) = (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))));
        FUN_0c0b4b4e(t0, 0x1);
        (((struct o41C_float *)(t0))->v) = ((((struct o160_float *)(t0))->v));
        t11 = 0x160;
    }
    return t11;
}

int FUN_0c02c25c(int a4)
{
    int t0;
    register int t1;

    if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(signed char *)0xC30A346)) {
        if ((*(signed char *)((a4 + 0x14))) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o28_float *)(a4))->v) = (*(float *)((0xC20E8B0 + ((*(short *)((a4 + 0x1C))) << 2))));
            (((struct o2C_float *)(a4))->v) = 25.0f;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        if (((*(signed char *)((((short)(*(signed char *)0xC305416) * (short)0x86) + 0xC309E0C))) != 0) && (t0 = *(signed char *)0xC30985A, t0 == 4)) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t0 = *(signed char *)0xC30EF24;
        t1 = (FUN_0c012c34(a4));
        if (t0 != 0) {
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            t1 = 0x44;
        }
        t0 = t1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t0 = 0xA8;
    }
    return t0;
}

int FUN_0c03add8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t20;
    int t2;
    register int t3;
    register int t5;
    register int t11;
    register int t13;

    if ((unsigned int)0xC3C9E10 < (unsigned int)0xC3C9FB0) {
        t0 = 0xC3C9E10;
        for (;;) {
            if (((*(int *)((t0 + 0x4))) == 18) && (t2 = *(int *)((t0 + 0x8)), t2 == 0xFFFF0000)) {
                break;
            }
            t0 = (t0 + 0x34);
            if ((unsigned int)t0 >= (unsigned int)0xC3C9FB0) {
                t0 = 0x0;
                t6 = 0x0;
                for (;;) {
                    t7 = *(int *)((((t0 * 0x34) + 0xC3C9E10) + 0x4));
                    if ((t7 == 18) || (t7 == 1)) {
                        t5 = (t0 * 0x34);
                        t5 = (t5 + 0xC3C9E10);
                        if (((*(int *)((t5 + 0x8)))) != 0xFFFF0000) {
                            t3 = 0x1;
                            t3 = ((int)t3 << (int)t0);
                            t6 = (t6 | t3);
                        }
                    }
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
                return t6;
            }
        }
        t20 = 0xFFFFFFFF;
    } else {
        t14 = 0x0;
        t15 = 0x0;
        for (;;) {
            t16 = *(int *)((((t14 * 0x34) + 0xC3C9E10) + 0x4));
            if ((t16 == 18) || (t16 == 1)) {
                t13 = (t14 * 0x34);
                t13 = (t13 + 0xC3C9E10);
                if (((*(int *)((t13 + 0x8)))) != 0xFFFF0000) {
                    t11 = 0x1;
                    t11 = ((int)t11 << (int)t14);
                    t15 = (t15 | t11);
                }
            }
            t14 = (t14 + 0x1);
            if ((int)t14 >= (int)0x8) {
                break;
            }
        }
        t20 = t15;
    }
    return t20;
}

int FUN_0c070e64(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 1.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 1.0f);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o5C_float *)(a4))->v) = -1.5f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x0, 0xB, (t0), 0x0, 0xB);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c07da48(int a4)
{
    register int t0;

    (((struct o3790_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    t0 = FUN_0c06588a(a4, (0x3790 + a4), 0xF0, (*(int *)((a4 + 0x38))), 0x8000);
    if ((((((struct o2C_float *)(a4))->v)) + 5.0f) > ((((struct o3790_float *)(a4))->v))) {
        (((struct o2C_float *)(a4))->v) = ((((struct o3790_float *)(a4))->v));
        (((struct o3747_uchar *)(a4))->v) = 0x4;
    } else {
        if (t0 != 0) {
            if ((((((struct o2C_float *)(a4))->v)) + (*(float *)0xC07DBB8)) > ((((struct o3790_float *)(a4))->v))) {
                t0 = *(signed char *)((a4 + 0x3747));
                (((struct o3747_uchar *)(a4))->v) = (t0 - 1);
                if ((signed char)(t0 - 1) == 0) {
                    (((struct o2C_float *)(a4))->v) = ((((struct o3790_float *)(a4))->v));
                    (((struct o3747_uchar *)(a4))->v) = 0x4;
                }
            }
        } else {
            (((struct o3747_uchar *)(a4))->v) = 0x4;
        }
    }
    return 0x0;
}

int FUN_0c07e79c(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c037ac4(a4, 0x0, a5, a6, a7);
    FUN_0c037ac4(a4, 0x1, a8, a9, a10);
    (((struct o3753_uchar *)(a4))->v) = a5;
    (((struct o3818_ushort *)(a4))->v) = ((a6 << 8) | (unsigned char)a7);
    (((struct o3754_uchar *)(a4))->v) = a8;
    (((struct o381A_ushort *)(a4))->v) = ((a9 << 8) | (unsigned char)a10);
    u0 = (((struct o37B0_float *)(a4))->v);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u0;
    (((struct o90_float *)(t0))->v) = u0;
    if ((*(signed char *)((a4 + 0x2))) != 12) {
        t0 = (((struct o48_int *)((0xC4 + a4)))->v);
        t1 = *(int *)(((0xC4 + a4) + 0x3C));
        t2 = *(int *)(((0xC4 + a4) + 0x38));
        *(unsigned char *)((((((struct o44_int *)((0xC4 + a4)))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x0)) = 0x1;
    }
    return FUN_0c0388e2(a4, a5, a6, a7);
}

int FUN_0c07fe02(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (((((struct o376C_int *)(a4))->v)) != 0) {
        t0 = *(signed char *)((a4 + 0x371D));
        if (t0 != 3) {
            if (t0 != 5) {
                if (t0 != 6) {
                    if (a5 == 0) {
                        (((struct o3717_uchar *)(a4))->v) = 0x8;
                        (((struct o3718_uchar *)(a4))->v) = 0x0;
                        t0 = 0x0;
                    } else {
                        (((struct o3717_uchar *)(a4))->v) = 0x8;
                        (((struct o3718_uchar *)(a4))->v) = 0x1;
                        t0 = 0x1;
                    }
                    return FUN_0c085cac(a4, 0x8, t0, a7);
                }
                (((struct o3717_uchar *)(a4))->v) = 0x7;
                (((struct o3718_uchar *)(a4))->v) = 0xF;
                return FUN_0c085cac(a4, 0x7, 0xF, a7);
            }
            (((struct o3717_uchar *)(a4))->v) = 0x7;
            (((struct o3718_uchar *)(a4))->v) = 0xA;
            return FUN_0c085cac(a4, 0x7, 0xA, a7);
        }
        (((struct o3717_uchar *)(a4))->v) = 0x7;
        (((struct o3718_uchar *)(a4))->v) = 0xB;
        return FUN_0c085cac(a4, 0x7, 0xB, a7);
    }
    return 0x376C;
}

int FUN_0c085b8a(int a4)
{
    register int t5;
    register int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x29;
    t5 = 0x9D;
    if ((*(signed char *)((a4 + 0x372C))) == 0) {
        t1 = 0x9C;
        t5 = 0x9C;
    } else {
        t1 = 0x9D;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, t5, 0xFFFFFFFF, 0x4, t1);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o3830_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0xA;
    (((struct o374B_uchar *)(a4))->v) = 0xA;
    return 0x374B;
}

int FUN_0c08f36c(int a4)
{
    register int t4;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        return FUN_0c07262e(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t4 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t4 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d666((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1E, 0xFFFFFFFF, 0x2, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}


int FUN_0c0c8e8c(int a4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x14))) == 1) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3739)), t0 == 34)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x3C) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 > (int)0x1E) && ((int)t0 <= (int)0x24)) {
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC0C8FB0)->v))) / ((((struct o4_float *)0xC0C8FB0)->v))));
            u1 = 1.0f;
            u1 = u1 + ((((struct oC_float *)0xC0C8FB0)->v)) * u0;
            (((struct o40_float *)(a4))->v) = u1;
            (((struct o48_float *)(a4))->v) = u1;
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x24);
            return (t1 + 0x24);
        }
        return t0;
    }
    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0f4372(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x8;
        FUN_0c0f42cc(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), 0x16C, 0.0f);
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        t1 = FUN_0c037bf6(a4);
        if ((unsigned char)t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
        return FUN_0c038362(a4);
    }
    return t0;
}

int FUN_0c103c44(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    return FUN_0c03f346(a4, 0x400, a6, a7);
                }
                return 0xB0;
            }
            t0 = *(signed char *)0xC541F44;
            t1 = (unsigned char)t0;
            if ((unsigned char)t0 != 1) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0333333351f);
    t0 = 0xB0;
    if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c1421fe(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.200000003f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return 0xB4;
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.200000003f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.200000003f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.200000003f);
    t0 = 0x40;
    if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
