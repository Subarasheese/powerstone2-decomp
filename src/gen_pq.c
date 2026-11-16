/* Straight-line functions with calls and guards (batch gen_pq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o377C_int { char p[0x377C]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c0389dc(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05b794(void);
int FUN_0c064f80(int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c07053a(int, int, float);
int FUN_0c07ce58(int, int, float);
int FUN_0c07d6cc(int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebb0(int);
int FUN_0c0819c2(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0ae748(int);
int FUN_0c0bba3e(int);
int FUN_0c0bc25e(void);
int FUN_0c12bbc0(int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c179ac0(void);
extern int FUN_0c17b1a0();
extern int FUN_0c187798();
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlMultiMatrix(int);
int nlSetTranslate(int);
int nlStoreMatrix(int);
int nlUnitMatrix(void);
int FUN_0c127068(int a4);
int FUN_0c15f60a(int a4);
int FUN_0c06ca16(int a4, int a5, int a6, int a7);
float FUN_0c077048(int a4);
int FUN_0c078558(int a4);
int FUN_0c097b94(int a4);
int FUN_0c0ab4b4(int a4, int a5, int a6);
int FUN_0c0af1c4(int a4, int a5, int a6);
int FUN_0c0c1f52(int a4);
int FUN_0c0cb6c2(int a4);
int FUN_0c12764c(int a4, int a5);
int FUN_0c15ecc6(int a4);
int FUN_0c019954(int a4);
int FUN_0c03733c(int a4, int a5, int a6);
int FUN_0c038b42(int a4, int a5, int a6);
int FUN_0c05ba86(void);
int FUN_0c060376(int a4, int a5);
int FUN_0c0700b0(int a4);

int FUN_0c127068(int a4)
{
    register int t0;
    register int t15;
    register int t1;
    register float u12;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t15 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), t1, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC12711E;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 300.0f);
        u12 = (((struct o0_float *)0xC1271B8)->v);
        (((struct o48_float *)(t0))->v) = u12;
        (((struct o44_float *)(t0))->v) = u12;
        (((struct o40_float *)(t0))->v) = u12;
        (((struct o70_float *)(((((struct oC8_int *)(t0))->v))))->v) = ((((struct o4_float *)0xC1271B8)->v));
        t15 = 0x70;
    }
    return t15;
}

int FUN_0c15f60a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((((a4 << 2) << 2) + 0xC203930));
    t1 = FUN_0c03f444(0x8, 0x0, 0x7);
    t2 = t1;
    if (t1 != 0) {
        t3 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t3, 0x0, t0, (*(int *)0xC4B4114));
        *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x400);
        (((struct o14_float *)(t3))->v) = 1.0f;
        t3 = 0x4;
        for (;;) {
            t4 = *(int *)((((0xC4 + t1) + t3) + 0x0));
            FUN_0c03744a(t4, 0x1, t0, (*(int *)0xC4B4114));
            t3 = (t3 + 0x4);
            *(unsigned short *)((t4 + 0x6)) = 0x1F;
            if ((unsigned int)t3 > (unsigned int)0x18) {
                break;
            }
        }
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC15F4BC;
        FUN_0c187798();
        t2 = (FUN_0c187798());
    }
    return t2;
}

int FUN_0c06ca16(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t6;
    register int t16;
    register int t23;
    register int t29;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = FUN_0c064f80(a4);
            if (t2 != 0) {
                (((struct o37A4_float *)(a4))->v) = 0.0f;
            }
            return FUN_0c07ebb0(a4);
        }
        t6 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t6 != 0) {
            return (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
        t16 = FUN_0c064f80(a4);
        if (t16 != 0) {
            (((struct o37A4_float *)(a4))->v) = 0.0f;
        }
        return FUN_0c07ebb0(a4);
    }
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        FUN_0c085d0c(a4, a5, a6, a7);
    } else {
        FUN_0c037bf6(a4, a5, a6);
        t23 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t23 - 1);
        if ((int)(short)(t23 - 1) <= 0) {
            FUN_0c085d0c(a4, 0x0, 0x0, 0x0);
        }
    }
    t29 = FUN_0c064f80(a4);
    if (t29 != 0) {
        (((struct o37A4_float *)(a4))->v) = 0.0f;
    }
    return FUN_0c07ebb0(a4);
}

float FUN_0c077048(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c07d6cc(a4);
    *(unsigned int *)((a4 + 0x38)) = t0;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4A, 0xFFFFFFFF, 0x4, 0x4A);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC077124)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC077124)->v));
    u0 = (((struct o8_float *)0xC077124)->v);
    u1 = (((struct oC_float *)0xC077124)->v);
    (((struct o4C_float *)(a4))->v) = (((math_sin_angle16((unsigned short)(t0 + 0x8000))) * u0) / u1);
    u2 = math_cos_angle16((unsigned short)(t0 + 0x8000));
    (((struct o54_float *)(a4))->v) = ((u2 * u0) / u1);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return ((u2 * u0) / u1);
}

int FUN_0c078558(int a4)
{
    int stk[3];
    register int t0;
    register float u6;
    register float u12;
    register float u18;
    register int t19;

    t0 = 0xA;
    for (;;) {
        u6 = ((((struct o28_float *)(a4))->v));
        u6 = u6 + ((((struct o378C_float *)(a4))->v)) * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x78)) - 60));
        *(float *)(((int)stk + 0)) = u6;
        u12 = ((((struct o30_float *)(a4))->v));
        u12 = u12 + ((((struct o378C_float *)(a4))->v)) * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x78)) - 60));
        *(float *)(((int)stk + 8)) = u12;
        u18 = ((((struct o2C_float *)(a4))->v));
        u18 = u18 + ((((struct o378C_float *)(a4))->v)) * ((float)(((int)((int)(FUN_0c179ac0()) % (int)0x64)) - 50));
        *(float *)(((int)stk + 4)) = (u18 + 50.0f);
        t19 = FUN_0c150010(((int)stk + 0), 1.0f, 1.0f, 1.0f, 1.0f);
        t0 = (t0 - 0x1);
        if (t0 == 0) {
            break;
        }
    }
    return t19;
}

int FUN_0c097b94(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)((a4 + 0x10)) = ((((struct o377C_int *)(a4))->v));
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = (t0);
        t2 = t0;
    } else {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = (t0);
        t2 = t0;
    }
    FUN_0c07e79c(a4, t2, 0x1, 0x1B, t1, 0x1, 0x1B);
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
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    FUN_0c12bbc0(a4, 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c0ab4b4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x8, (t0), 0x2, 0x8);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c0819c2(a4, 0x4000);
        t0 = 0x54;
        u0 = 15.0f;
        if ((*(signed char *)((a4 + 0x2))) != 4) {
            t0 = 0x2C;
            u0 = 30.0f;
        }
        FUN_0c07053a(a4, t0, u0);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0af1c4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0xA, (t1), 0x2, 0xA);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194), 1.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x2C, 20.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return FUN_0c0ae748(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0c1f52(int a4)
{

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_5 = *(signed char *)((0xC471ACC + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)));
    v0_1 = ((unsigned char)v0_5);
    v0_2 = (0xC472462);
    v0_0 = (0xC471ACC);
    v0_4 = (0x264);
    v0_6 = (0xC472460);
    v0_7 = (0x0);
    if (((unsigned char)v0_5 == 0)) goto L_C0C1F7E;
    if ((v0_1 == 1)) goto L_C0C1F92;
    if ((v0_1 == 2)) goto L_C0C1FE4;
    L_C0C1FFE:;
    return v0_1;
    L_C0C1FE4:;
    *(unsigned short *)((v0_6 + 0x0)) = 0x1;
    FUN_0c0bc25e();
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_0) + 0x8)) = (*(int *)0xC47245C);
    v0_1 = (0xC47245C);
    goto L_C0C1FFE;
    L_C0C1F92:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_7;
    v0_1 = *(signed char *)((v0_2 + 0x0));
    v0_5 = *(short *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x18));
    *(unsigned short *)(((((unsigned short)(unsigned char)v0_1 * (unsigned short)v0_4) + v0_0) + 0x18)) = (v0_5 - 1);
    v0_1 = ((unsigned short)(v0_5 - 1));
    if (((unsigned short)(v0_5 - 1) == 0)) goto L_C0C1FB6;
    v0_3 = FUN_0c0bba3e(v0_3);
    v0_1 = (v0_3);
    if (((int)v0_3 < (int)0x2000)) goto L_C0C1FFE;
    L_C0C1FB6:;
    v0_2 = *(signed char *)((v0_2 + 0x0));
    *(unsigned char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0)) = ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x264) + v0_0) + 0x0))) + 0x1);
    goto L_C0C1FFE;
    L_C0C1F7E:;
    *(unsigned short *)((v0_6 + 0x0)) = v0_7;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)v0_4) + v0_0) + 0x18)) = 0xA;
    v0_1 = (0xA);
    goto L_C0C1FB6;
}

int FUN_0c0cb6c2(int a4)
{
    int stk[1];
    int t6;
    register int t9;
    register int t11;
    register float u15;
    register float u16;
    register int t17;

    if (((((struct o4C_float *)(a4))->v)) == 0.0f) {
        (((struct o4C_float *)(a4))->v) = ((((struct o0_float *)0xC0CB794)->v));
    }
    t6 = math_atan_angle16(((-((((struct o54_float *)(a4))->v))) / ((((struct o4C_float *)(a4))->v))));
    t9 = (0xFFFF & t6);
    if (0.0f > ((((struct o4C_float *)(a4))->v))) {
        t9 = ((0xFFFF & t6) + 0x8000);
    }
    t11 = FUN_0c065b96(a4, (unsigned short)(0x4000 + t9), 0x4000, ((int)stk + 0), 0.0f);
    if (t11 != 0) {
        u15 = (((struct o14_float *)0xC0CB794)->v);
        u16 = (((struct o18_float *)0xC0CB794)->v);
        t17 = *(int *)(((int)stk + 0));
        if ((((t17 + 0x2000) & 0xC000) != 0) && (((t17 + 0x2000) & 0xC000) != 0x8000)) {
            if ((((t17 + 0x2000) & 0xC000) == 0x4000) || (((t17 + 0x2000) & 0xC000) == 0xC000)) {
                (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u15);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u16);
            }
        } else {
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) * u16);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) * u15);
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c12764c(int a4, int a5)
{
    register int t0;
    register int t13;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t13 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0))), 0x2, 0x0, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t1 = (t1 + 0x1);
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC127700;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC127700;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o2C_float *)(t0))->v) = ((((struct o168_float *)(a4))->v));
        t13 = (FUN_0c187798());
    }
    return t13;
}

int FUN_0c15ecc6(int a4)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t14;
    register int t7;
    register int t12;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)(((int)stk + 4)) = (t0 * 0x1C);
        t2 = *(int *)((((t0 * 0x1C) + 0xC2038D0) + 0x0));
        t3 = FUN_0c037320(t2, (*(int *)0xC4B4114));
        t4 = FUN_0c03f444(0x8, 0x0, t3);
        t14 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B4114));
            (((struct oAC_ushort *)(t4))->v) = 0x1F;
            (((struct oA9_uchar *)(t4))->v) = 0x21;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t4 + 0x4)) = 0xC15EB24;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = *(int *)(((int)stk + 4));
            *(unsigned short *)((t4 + 0x1C)) = (((*(short *)(((t7 + 0xC2038D0) + 0x4))) + (*(short *)(((t7 + 0xC2038D0) + 0x8)))) + (*(int *)(((int)stk + 0))));
            (((struct o20_ushort *)(t4))->v) = (*(int *)(((t7 + 0xC2038D0) + 0xC)));
            t12 = ((int (*)(int))(FUN_0c187798))((t7 + 0xC2038D0));
            t14 = (((int (*)(void))(FUN_0c187798))());
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
    return t14;
}

int FUN_0c019954(int a4)
{
    register int t0;

    *(unsigned char *)(((FUN_0c01cc56(0xD, 0xC019C66)) + 0x3)) = 0x3;
    t0 = FUN_0c01cc56(0x15, 0xC019C66);
    *(unsigned char *)((t0 + 0x3)) = 0x4;
    *(unsigned int *)((t0 + 0x10)) = a4;
    t0 = *(signed char *)0xC30AA32;
    if (t0 != 0) {
        if (t0 != 2) {
        } else {
            t0 = FUN_0c01cc56(0x18, 0xC019C66);
            *(unsigned char *)((t0 + 0x3)) = 0x3;
            (((struct o28_float *)(t0))->v) = 0.0f;
            (((struct o2C_float *)(t0))->v) = ((((struct o4_float *)0xC019B1C)->v));
        }
    } else {
        t0 = FUN_0c01cc56(0x18, 0xC019C66);
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = ((((struct o0_float *)0xC019B1C)->v));
        t0 = FUN_0c01cc56(0x18, 0xC019C66);
        *(unsigned char *)((t0 + 0x3)) = 0x3;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = ((((struct o4_float *)0xC019B1C)->v));
    }
    return FUN_0c01cb7c();
}

int FUN_0c03733c(int a4, int a5, int a6)
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
    register int t9;
    register int t10;

    t5 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x18));
    t6 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x1C));
    if ((int)t5 > 0) {
        t7 = 0x0;
        t8 = 0x0;
        t9 = t6;
        for (;;) {
            t6 = *(int *)((((0xC4 + a4) + t7) + 0x0));
            *(unsigned int *)((t6 + 0x8)) = (*(int *)((t9 + 0x0)));
            *(unsigned int *)((t6 + 0xC)) = (*(int *)((t9 + 0x4)));
            *(unsigned int *)((t6 + 0x10)) = (*(int *)((t9 + 0x8)));
            t10 = *(int *)(((t9 + 0xC) + 0x4));
            if ((int)(*(int *)(((t9 + 0xC) + 0x0))) < 0) {
                (((struct o68_uint *)(t6))->v) = 0x0;
            } else {
                (((struct o68_uint *)(t6))->v) = ((*(int *)((((t10 << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
            }
            t10 = ((int (*)(int, int, int))(FUN_0c187798))(a4, t6, t9);
            t6 = ((int (*)(int, int, int))(FUN_0c187798))(0x0, t0, t1);
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x3C);
            t7 = (t2 + 0x4);
            if ((int)t8 >= (int)t5) {
                break;
            }
        }
    } else {
        t0 = a5;
        t1 = a6;
    }
    t2 = ((int (*)(int, int, int))(FUN_0c187798))(t3, t0, t1);
    t0 = ((int (*)(int))(FUN_0c187798))(t4);
    return 0x0;
}

int FUN_0c038b42(int a4, int a5, int a6)
{
    int stk[5];
    register int t1;
    register int t25;
    register int t9;
    register int t17;
    register int t7;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)0xC5421DC);
    t1 = *(short *)((a5 + 0x6));
    t25 = (unsigned short)t1;
    if (((unsigned short)t1 & 0x13F) != 0) {
        if (((((struct o68_int *)(a5))->v)) != 0) {
            t7 = ((((struct o68_int *)(a5))->v));
        } else {
            t7 = ((*(int *)(((int)stk + 0))) + 0x64);
        }
        t9 = ((int (*)(int, int, int))(FUN_0c17b1a0))(t7, a5, a6);
        if (((unsigned short)(*(short *)((a5 + 0x6))) & 32) != 0) {
            nlCalcPoint((a5 + 0x6C), (((int)stk + 0) + 0x8));
            nlUnitMatrix();
            FUN_0c0389dc(((*(short *)((a5 + 0x6))) & 0xFFFFFFFE), (a5 + 0x6C), (a5 + 0x78), (0x84 + a5));
            nlStoreMatrix((a5 + 0x28));
            t17 = ((int (*)(int))(FUN_0c17b1a0))((((*(int *)(((int)stk + 4))) * 0x2F8) + 0xC541174));
            nlSetTranslate((((int)stk + 0) + 0x8));
            nlMultiMatrix((a5 + 0x28));
        } else {
            FUN_0c0389dc((*(short *)((a5 + 0x6))), (a5 + 0x6C), (a5 + 0x78), (0x84 + a5));
        }
        t25 = (nlStoreMatrix((a5 + 0x28)));
    }
    return t25;
}

int FUN_0c05ba86(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return ((int (*)(void))(0xC05BA30))();
        }
        return ((int (*)(void))(0xC05B9F4))();
    }
    FUN_0c05b794();
    return ((int (*)(void))(0xC05B9F4))();
}

int FUN_0c060376(int a4, int a5)
{

    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x1));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C060388;
    if ((v0_2 == 1)) goto L_C0603D4;
    if ((v0_2 == 2)) goto L_C0603F6;
    L_C060388:;
    w0_1 = (((struct o40_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if ((((((struct o44_float *)(v0_0))->v)) > w0_1)) goto L_C0603A2;
    if ((((((struct o48_float *)(v0_0))->v)) > w0_0)) goto L_C0603A2;
    v0_2 = (0x14);
    v0_3 = (0x40);
    L_C06041A:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    L_C060424:;
    return v0_2;
    L_C0603A2:;
    w0_1 = (((struct o48_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if ((((((struct o40_float *)(v0_0))->v)) > w0_1)) goto L_C0603C4;
    if ((((((struct o44_float *)(v0_0))->v)) > w0_0)) goto L_C0603C4;
    v0_2 = (0x14);
    v0_3 = (0x48);
    L_C0603C8:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    goto L_C060424;
    L_C0603C4:;
    v0_2 = (0x14);
    v0_3 = (0x44);
    goto L_C0603C8;
    L_C0603F6:;
    if ((((((struct o48_float *)(v0_0))->v)) > ((((struct o40_float *)(v0_0))->v)))) goto L_C060408;
    v0_2 = (0x14);
    v0_3 = (0x40);
    L_C06040C:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    v0_2 = (0x18);
    v0_3 = (0x44);
    goto L_C06041A;
    L_C060408:;
    v0_2 = (0x14);
    v0_3 = (0x48);
    goto L_C06040C;
    L_C0603D4:;
    (((struct o14_float *)(v0_1))->v) = (((((struct o14_float *)(v0_1))->v)) * ((((struct o40_float *)(v0_0))->v)));
    (((struct o18_float *)(v0_1))->v) = (((((struct o18_float *)(v0_1))->v)) * ((((struct o44_float *)(v0_0))->v)));
    v0_2 = (0x1C);
    v0_3 = (0x48);
    goto L_C06041A;
}

int FUN_0c0700b0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    (((struct o3756_uchar *)(a4))->v) = 0x1;
    (((struct o374B_uchar *)(a4))->v) = 0xA;
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(t0))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(*(short *)((a4 + 0x1C)))));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(t0))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(*(short *)((a4 + 0x1C)))));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (((((((struct o2C_float *)(t0))->v)) - ((((struct o2C_float *)(a4))->v))) + -151.0f) / (float)(*(short *)((a4 + 0x1C)))));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o3756_uchar *)(a4))->v) = 0x0;
        (((struct o374B_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
