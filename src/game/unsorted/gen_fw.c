/* Straight-line functions with calls and guards (batch gen_fw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c060e70(int, int);
int FUN_0c060ee6(int, int);
int FUN_0c0641ca(int, int);
int FUN_0c06485a(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0cff2e(int, int);
int FUN_0c1171f0(int);
int FUN_0c136098(int);
int FUN_0c144924(int, int);
int FUN_0c149560(int, int);
int FUN_0c1495c0(int, int, int);
int FUN_0c187a88(int, int, int, int);
int FUN_0c2c6728(void);
int FUN_0c2c6740(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c13b818(int a4, int a5);
float FUN_0c0c5c60(int a4, int a5, int a6, int a7);
int FUN_0c0d7488(int a4, int a5, int a6, int a7);
int FUN_0c131678(int a4, int a5);
int FUN_0c13d748(int a4, int a5);
void FUN_0c13e518(int a4, int a5, int a6, int a7);
int FUN_0c149762(int a4);
int FUN_0c039df8(int a4);
int FUN_0c1173dc(int a4, int a5, int a6, int a7);
int FUN_0c136108(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1125d4(int a4, int a5, int a6, int a7);
int FUN_0c141358(int a4, int a5);
void FUN_0c06494c(void);
int FUN_0c0d7714(int a4, int a5, int a6, int a7);
int FUN_0c144a68(int a4, int a5);
int FUN_0c129ec4(int a4, int a5);
int FUN_0c129b94(int a4, int a5);
void SJUNI_UngetChunk(int a4, int a5, int a6, int a7);

int FUN_0c13b818(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t6;
    register int t15;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13B906;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        t6 = *(signed char *)((t3 + 0x2));
        math_vec3_accumulate((t3 + 0x28), (0xC2A20C4 + (((t6 << 1) + t6) << 2)));
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x0, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t15 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t15));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x34, 0x2, 0x100, (~((int)0x1 << (int)t15)), 0x0, 0x0);
        return FUN_0c07e2f4(t3, 0x65);
    }
    return t3;
}

float FUN_0c0c5c60(int a4, int a5, int a6, int a7)
{
    register float u18;
    register float t22;

    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x2;
    (((struct o22_ushort *)(a4))->v) = 0x78;
    *(unsigned short *)((a4 + 0x1E)) = 0x5;
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C7))));
    (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
    (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & 0xFFFFFFBF);
    if ((*(signed char *)((a4 + 0x41F))) == 2) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x34)); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x34)); }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    }
    u18 = (((struct o0_float *)0xC0C5DA4)->v);
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u18);
    (((struct o50_float *)(a4))->v) = 0.0f;
    t22 = math_cos_angle16((*(int *)((a4 + 0x38))));
    (((struct o54_float *)(a4))->v) = (t22 * u18);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = ((((struct oC_float *)0xC0C5DA4)->v));
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return (t22 * u18);
}


int FUN_0c131678(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c03f444(0x5, 0x0, 0x1);
        t1 = t0;
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t0 + 0x4)) = 0xC131644;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC2A1474); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC2A1480); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A1468); }
            (((struct oA8_uchar *)(t0))->v) = 0x1;
            (((struct oAC_ushort *)(t0))->v) = 0xD;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            *(unsigned short *)((t0 + 0x1C)) = 0x0;
            *(unsigned short *)((t0 + 0x1E)) = a5;
            (((struct o20_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x3753)));
            (((struct o22_ushort *)(t0))->v) = ((((struct o3818_short *)(a4))->v));
            t3 = (((struct oC4_int *)(t0))->v);
            FUN_0c03744a(t3, 0x0, 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t3)) = *(struct mv3 *)(0xC2A1468); }
            (((struct o7C_uint *)(t3))->v) = 0x0;
            (((struct o80_uint *)(t3))->v) = 0x0;
            (((struct o78_uint *)(t3))->v) = 0x0;
            (((struct o74_float *)(t3))->v) = 0.0f;
            (((struct o70_float *)(t3))->v) = 0.0f;
            (((struct o6C_float *)(t3))->v) = 0.0f;
            *(unsigned int *)((t0 + 0x10)) = a4;
            (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
            t1 = 0xA4;
        }
    }
    return t1;
}

int FUN_0c13d748(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t24;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t24 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D66E;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        t14 = 0x1555;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            t14 = 0xFFFFEAAB;
        }
        *(unsigned int *)((t3 + 0x34)) = t14;
        nlUnitMatrix();
        nlRotateAY((*(int *)((t3 + 0x38))));
        nlRotateAX((*(int *)((t3 + 0x34))));
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        *(float *)(((int)stk + 12)) = (*(float *)0xC13D890);
        nlCalcPoint((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        math_vec3_accumulate((t3 + 0x28), (((int)stk + 0) + 0x4));
        (((struct o48_float *)(t3))->v) = 0.0f;
        (((struct o44_float *)(t3))->v) = 0.0f;
        (((struct o40_float *)(t3))->v) = 0.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t24 = 0xA9;
    }
    return t24;
}

void FUN_0c13e518(int a4, int a5, int a6, int a7)
{

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
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_3 = ((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498));
    if ((v0_2 == 0)) goto L_C13E536;
    if ((v0_1 == 1)) goto L_C13E546;
    FUN_0c03f346(v0_0, v0_3, a6, a7);
    return;
    L_C13E546:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x71C);
    if (((*(signed char *)((v0_3 + 0x3715))) != 26)) goto L_C13E562;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13E56A;
    L_C13E562:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C13E56A:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_0 = (0.00999999978f);
    w0_1 = (0.800000012f);
    w0_2 = (1.20000005f);
    if ((v0_2 == 0)) goto L_C13E586;
    if (!((v0_1 == 1))) goto L_C13E5E2;
    w0_3 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_3 - w0_0);
    v0_1 = (0x40);
    if (((w0_3 - w0_0) > w0_1)) goto L_C13E5CC;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    goto L_C13E5CC;
    L_C13E5E2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    return;
    L_C13E5CC:;
    (((struct o48_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    v0_1 = (0x44);
    if ((((((struct o44_float *)(v0_0))->v)) > w0_2)) goto L_C13E5E2;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) + w0_0);
    goto L_C13E5E2;
    L_C13E586:;
    w0_3 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_3 + w0_0);
    v0_1 = (0x40);
    if ((w0_2 > (w0_3 + w0_0))) goto L_C13E59E;
    *(float *)((v0_0 + v0_1)) = w0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C13E59E:;
    (((struct o48_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    v0_1 = (0x44);
    if ((w0_1 > ((((struct o44_float *)(v0_0))->v)))) goto L_C13E5E2;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) - w0_0);
    goto L_C13E5E2;
    L_C13E536:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xB4;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x3C;
    goto L_C13E546;
}


int FUN_0c039df8(int a4)
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
    register int t11;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)(((0x371A + a4) + 0x0));
    t2 = *(int *)((((t1 << 2) + (0xC3C7DD8 + ((t0 << 2) << 1))) + 0x0));
    t3 = *(signed char *)((a4 + 0x2));
    t4 = *(int *)0xC1B71E4;
    t5 = *(signed char *)((((0xC3C7DF8 + (t0 << 1)) + t1) + 0x0));
    t6 = t3;
    if ((int)t3 < (int)t4) {
        t7 = t3;
        t3 = 0xC1B71E4;
        t8 = t4;
        t4 = t0;
        t0 = t1;
        t1 = t2;
        t9 = 0x0;
        t10 = (0x0 + t2);
        for (;;) {
            if ((int)t9 >= (int)t5) {
                break;
            }
            t0 = 0x371A;
            t4 = t10;
            t7 = (*(signed char *)((a4 + 0x1)));
            t0 = (t0 + a4);
            t8 = (*(signed char *)((t4 + 0x0)));
            t0 = (*(signed char *)((t0 + 0x0)));
            t7 = (t7 << 2);
            t7 = (t7 << 1);
            t0 = (t0 << 2);
            t7 = (t7 + 0xC4B40DC);
            t8 = (t8 << 2);
            t0 = (*(int *)((t0 + t7)));
            t8 = (t8 << 2);
            t7 = (*(signed char *)((t4 + 0x1)));
            t0 = (t0 + 0x10);
            t8 = (t8 << 1);
            t0 = (t0 + t8);
            t8 = (*(int *)((t0 + 0x18)));
            if ((int)t7 < (int)t8) {
                t7 = (*(signed char *)((t4 + 0x1)));
                t2 = 0x3C;
                t8 = (*(int *)((t0 + 0x1C)));
                t2 = ((short)t7 * (short)t2);
                t2 = (t2 + t8);
                t2 = (*(int *)((t2 + 0x0)));
                if (t2 != 0) {
                    t0 = 0x0;
                    for (;;) {
                        t3 = (*(int *)((t4 + 0x2C)));
                        if ((int)t0 >= (int)t3) {
                            break;
                        }
                        t7 = (*(int *)((t4 + 0x28)));
                        t1 = t0;
                        t1 = (t1 << 1);
                        t1 = (*(short *)((t1 + t7)));
                        t7 = (*(int *)((t4 + 0x34)));
                        t11 = t1;
                        t3 = t1;
                        t11 = (t11 << 2);
                        t8 = t1;
                        t3 = (t3 << 1);
                        t11 = (*(int *)((t11 + t7)));
                        t3 = (t3 + t8);
                        t7 = (*(int *)((t4 + 0x30)));
                        t8 = 0xC187798;
                        t3 = (t3 << 2);
                        t11 = (t11 << 2);
                        t3 = (t3 + t7);
                        t11 = (t11 + t2);
                        t7 = 0xC;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t11) = *(struct mv3 *)(t3); }
                        t0 = (t0 + 0x1);
                    }
                }
                t10 = (t10 + 0x48);
                t9 = (t9 + 0x1);
                continue;
            }
            return t7;
        }
        t0 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((((*(signed char *)(((0x371A + a4) + 0x0))) + (0xC3C7DF8 + (t0 << 1))) + 0x0)) = 0x0;
        t6 = (t0 << 1);
    }
    return t6;
}

int FUN_0c1173dc(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t7;
    register int t9;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)((a4 + 0x8)) = (*(int *)((((((int)((int)a5 / (int)0x12)) * 0x3C) + (*(int *)((((((a6 << 2) << 2) << 1) + (a7 + 0x10)) + 0x1C)))) + 0x3C)));
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    FUN_0c187a88((((0x90 + a4) + 0x4) & 0xFFFFFFF8), (*(int *)((a4 + 0x8))), 0xF8, a7);
    *(unsigned int *)((a4 + 0x8)) = (((0x90 + a4) + 0x4) & 0xFFFFFFF8);
    *(unsigned char *)((a4 + 0x0)) = 0x1;
    *(unsigned short *)((a4 + 0x6)) = 0xF;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x6C)) = *(struct mv3 *)(0xC2A0C78); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x78)) = *(struct mv3 *)(0xC2A0C6C); }
    t7 = (int)((int)(*(int *)(((int)stk + 0))) % (int)0x12);
    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0xC);
    (((struct oC_float *)(((int)stk + 0)))->v) = (*(float *)(((((t7 << 2) << 2) + 0xC291940) + 0x0)));
    t9 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = ((((t7 << 2) << 2) + 0xC291940) + 0xC);
    (((struct o4_float *)(t9))->v) = ((((struct oC_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = (*(float *)(((((t7 << 2) << 2) + 0xC291940) + 0x0)));
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x8)))->v) = ((((struct o4_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    *(unsigned int *)(((int)stk + 4)) = ((((t7 << 2) << 2) + 0xC291940) + 0x8);
    (((struct o10_float *)((((int)stk + 0) + 0xC)))->v) = ((((struct o8_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x10)))->v) = (*(float *)(((*(int *)(((int)stk + 8))) + 0x0)));
    (((struct o18_float *)((((int)stk + 0) + 0xC)))->v) = (*(float *)(((*(int *)(((int)stk + 4))) + 0x0)));
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x18)))->v) = ((((struct o4_float *)((((t7 << 2) << 2) + 0xC291940)))->v));
    return (FUN_0c0cff2e((*(int *)((a4 + 0x8))), (*(int *)(((int)stk + 0)))));
}


int FUN_0c1125d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 80) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = 0xC2914B0;
        if ((*(signed char *)((a4 + 0x2))) == 1) {
            t1 = 0xC2914BC;
        }
        return nlAddVector3op((t0 + 0x6C), (0x90 + t0), t1);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0x3, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = 0xC2914B0;
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t1 = 0xC2914BC;
    }
    return nlAddVector3op((t0 + 0x6C), (0x90 + t0), t1);
}

int FUN_0c141358(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t15;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC14143A;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A2318))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o2C_float *)(t3))->v) = ((((struct o2C_float *)(a4))->v));
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t15 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t15));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t15)), 0x0, 0xF0);
        return FUN_0c07e2f4(t3, 0x63);
    }
    return t3;
}

void FUN_0c06494c(void)
{
    int stk[2];
    int t0;
    register int t3;
    register int t10;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t9;

    t0 = 0x0;
    for (;;) {
        FUN_0c0641ca((*(signed char *)0xC542237), t0);
        t3 = *(signed char *)0xC542237;
        if (((*(signed char *)0xC542237) == 1) && (t0 == 0)) {
            FUN_0c060e70(t3, t0);
        } else {
            FUN_0c060ee6(t3, t0);
        }
        FUN_0c06485a();
        *(unsigned int *)(((int)stk + 4)) = (0xC471A2C + ((t0 << 2) << 2));
        *(unsigned int *)(((int)stk + 0)) = (0xC46E1EC + (t0 * 0x12C0));
        t10 = 0x0;
        for (;;) {
            t12 = *(int *)(((t10 << 2) + 0xC4F90AC));
            *(unsigned int *)((((*(int *)(((int)stk + 4))) + (t10 << 2)) + 0x0)) = t12;
            t13 = *(int *)(((int)stk + 0));
            if ((int)t12 > 0) {
                t14 = 0x0;
                t15 = 0x0;
                for (;;) {
                    t9 = ((t10 * 0x4B0) + t13);
                    t9 = (t9 + t14);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)((((t10 * 0x960) + 0xC4F6B2C) + t14)); }
                    t15 = (t15 + 0x1);
                    t14 = (t14 + 0xC);
                    if ((int)t15 >= (int)t12) {
                        break;
                    }
                }
            }
            t10 = (t10 + 0x1);
            if ((int)t10 >= (int)0x4) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x3) {
            break;
        }
    }
}


int FUN_0c144a68(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c037320(0x0, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t1 = FUN_0c03f444(0x2, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x0, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC1452D2;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        *(unsigned char *)((t1 + 0x2)) = a5;
        u0 = *(float *)0xC144BC4;
        (((struct o48_float *)(t1))->v) = u0;
        (((struct o44_float *)(t1))->v) = u0;
        (((struct o40_float *)(t1))->v) = u0;
        (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        t0 = *(signed char *)((t1 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((0xC2028B4 + (((t0 << 1) + t0) << 2))); }
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((0xC202944 + ((*(signed char *)((t1 + 0x2))) << 2))));
        if ((int)(*(signed char *)((t1 + 0x2))) >= (int)0x4) {
            (((struct o78_uint *)(((((struct oC4_int *)(t1))->v))))->v) = 0x4000;
        }
        FUN_0c144924(t1, 0x1);
        return FUN_0c0b21ac(t1, 0x5);
    }
    return t1;
}

int FUN_0c129ec4(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register float u13;
    register int t14;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC129FA2;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A0FD8))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        u13 = *(float *)0xC12A004;
        (((struct o48_float *)(t3))->v) = u13;
        (((struct o44_float *)(t3))->v) = u13;
        (((struct o40_float *)(t3))->v) = u13;
        *(int *)((int)stk + 12) = 0x30;
        *(int *)((int)stk + 8) = 0x0;
        t14 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t14));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t14)), 0x0, 0x30);
        return FUN_0c07e2f4(t3, ((*(signed char *)(((int)stk + 16))) + 0x60));
    }
    return t3;
}

int FUN_0c129b94(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t13;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC129C70;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A0FCC))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        *(int *)((int)stk + 12) = 0x30;
        *(int *)((int)stk + 8) = 0x0;
        t13 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t13));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t13)), 0x0, 0x30);
        return FUN_0c07e2f4(t3, ((*(signed char *)(((int)stk + 16))) + 0x60));
    }
    return t3;
}

