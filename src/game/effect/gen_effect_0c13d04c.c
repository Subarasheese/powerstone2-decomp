/* game/effect: functions 0C13D04C-0C13E118, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f02(int);
int FUN_0c07e2f4(int, int);
int FUN_0c13e124(int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c13d04c(int a4, int a5, int a6, int a7);
int FUN_0c13d160(int a4, int a5, int a6);
int FUN_0c13d28a(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c13d4ac(int a4, int a5, int a6);
int FUN_0c13d66e(int a4, int a5, int a6, int a7);
int FUN_0c13d748(int a4, int a5);
int FUN_0c13d834(int a4, int a5, int a6, int a7);
int FUN_0c13d9e4(int a4);
int FUN_0c13dbe2(int a4, int a5, int a6, int a7);
int FUN_0c13dc4c(int a4);
int FUN_0c13dd14(int a4);
int FUN_0c13ddb8(int a4, int a5, int a6, int a7);
int FUN_0c13df20(int a4);
int FUN_0c13dffc(int a4);

int FUN_0c13d04c(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((v0_0 + 0x10)));
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C13D06C;
    if ((v0_1 == 1)) goto L_C13D082;
    return FUN_0c03f346(v0_0, R5, R6, a7);
    L_C13D082:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o78_uint *)(v0_1))->v) = (((((struct o78_int *)(v0_1))->v)) + 0x71C);
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C13D0B8;
    if (!((v0_1 == 1))) goto L_C13D112;
    v0_1 = (0x7);
    v0_2 = (0x0);
    goto L_C13D0EC;
    L_C13D112:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13D138;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C13D138:;
    return v0_1;
    L_C13D0EC:;
    FUN_0c13d4ac(v0_0, 0x0, v0_2);
    v0_3 = (int)(v0_2 + 0x1) < (int)v0_1;
    v0_2 = ((v0_2 + 0x1));
    if (v0_3) goto L_C13D0EC;
    FUN_0c059e9a((*(int *)(((int)stk + 0))), 0x25, (v0_0 + 0x28));
    FUN_0c13d9e4(v0_0);
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C13D112;
    L_C13D0B8:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C13D0D4;
    v0_1 = (FUN_0c064f02(v0_0)) != 0;
    if (v0_1) goto L_C13D0D4;
    if ((((((struct o50_float *)(v0_0))->v)) > 0.0f)) goto L_C13D112;
    L_C13D0D4:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    FUN_0c13dc4c(v0_0);
    FUN_0c13df20(v0_0);
    goto L_C13D112;
    L_C13D06C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x258;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x5;
    FUN_0c13e124(v0_0);
    goto L_C13D082;
}

int FUN_0c13d160(int a4, int a5, int a6)
{
    int stk[6];
    register int t2;
    register int t3;
    register int t31;
    register int t19;
    register float u26;

    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t31 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D04C;
        *(unsigned int *)((t3 + 0x34)) = 0x1555;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x8, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        if ((*(signed char *)((t3 + 0x2))) != 0) {
            (((struct o41C_uint *)(t3))->v) = (*(int *)(((int)stk + 20)));
        }
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t19 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t19));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x2, 0x100, (~((int)0x1 << (int)t19)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x60);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        (((struct o50_float *)(t3))->v) = ((((struct o0_float *)0xC13D2D8)->v));
        (((struct o5C_float *)(t3))->v) = -1.0f;
        u26 = (((struct o4_float *)0xC13D2D8)->v);
        (((struct o4C_float *)(t3))->v) = ((math_sin_angle16((*(int *)((t3 + 0x38))))) * u26);
        (((struct o54_float *)(t3))->v) = ((math_cos_angle16((*(int *)((t3 + 0x38))))) * u26);
        t31 = 0x54;
    }
    return t31;
}

int FUN_0c13d28a(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            if ((*(signed char *)((a4 + 0x16))) == 0) {
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.200000003f);
                t0 = 0x88;
                if (!((1.0f + 1.0f) > ((((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v)))) {
                    (((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v) = (1.0f + 1.0f);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    t0 = 0xB4;
                }
                t2 = t0;
            } else {
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.100000001f);
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = ((((struct o8C_float *)(t0))->v));
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.200000003f);
                if (0.0f > ((((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v))) {
                    (((struct o88_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.100000001f);
                if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                }
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t2 = 0xB4;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x71C);
        t1 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - 0x71C);
        t1 = FUN_0c064f02(a4);
        t2 = t1;
        if (t1 == 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
            t1 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x10);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = 1.0f;
            (((struct o88_float *)(t1))->v) = 1.0f;
            (((struct o84_float *)(t1))->v) = 1.0f;
            (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x8000;
            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t2 = 0x12E;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c13d4ac(int a4, int a5, int a6)
{
    int stk[9];
    register int t2;
    register int t3;
    register int t51;
    register int t4;
    register int t9;
    register int t19;
    register int t31;
    register int t35;
    register int t39;

    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t2 = FUN_0c037320(0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t51 = t3;
    if (t3 == 0) {
    } else {
        if ((int)t2 > 0) {
            t4 = 0x0;
            for (;;) {
                FUN_0c037498((*(int *)((((0xC4 + t3) + (t4 << 2)) + 0x0))), t4, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                t9 = (t4 << 2);
                t4 = (t4 + 0x1);
                *(unsigned char *)(((*(int *)((((0xC4 + t3) + t9) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)(((t9 + (0xC4 + t3)) + 0x0))) + 0x6)) = 0xF;
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D28A;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t19 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t19));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x31, 0x0, 0x100, (~((int)0x1 << (int)t19)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x61);
        (((struct o41C_uint *)(t3))->v) = (*(int *)(((int)stk + 20)));
        if ((*(signed char *)((t3 + 0x2))) == 0) {
            FUN_0c187798();
        } else {
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        }
        t31 = 0x38E3;
        if ((*(signed char *)((t3 + 0x2))) != 0) {
            t31 = 0x2000;
        }
        *(unsigned int *)((t3 + 0x34)) = t31;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        nlUnitMatrix();
        t35 = (((struct o41C_int *)(t3))->v);
        nlRotateAY((*(int *)(((((t35 << 1) + t35) << 2) + 0xC202140))));
        t39 = (((struct o41C_int *)(t3))->v);
        nlRotateAX((*(int *)(((((t39 << 1) + t39) << 2) + 0xC20213C))));
        nlCalcPoint(0xC2A216C, (((int)stk + 16) + 0x8));
        nlUnitMatrix();
        nlRotateAY((*(int *)((t3 + 0x38))));
        nlRotateAX((*(int *)((t3 + 0x34))));
        nlCalcPoint((((int)stk + 16) + 0x8), (t3 + 0x4C));
        *(unsigned char *)((((((struct oCC_int *)(t3))->v)) + 0x0)) = 0x0;
        t51 = 0xCC;
    }
    return t51;
}

int FUN_0c13d66e(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C13D67E;
    if ((v0_1 == 1)) goto L_C13D690;
    return FUN_0c03f346(v0_0, a5, a6, a7);
    L_C13D690:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_0 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C13D6A4;
    if (!((v0_1 == 1))) goto L_C13D6FA;
    v0_1 = (0xBC);
    if ((!(((((struct oBC_float *)(v0_0))->v)) > 0.0f))) goto L_C13D6FA;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) - w0_0);
    w0_0 = *(float *)((v0_0 + v0_1));
    *(float *)((v0_0 + (v0_1 - 4))) = w0_0;
    *(float *)((v0_0 + ((v0_1 - 4) - 4))) = w0_0;
    w0_0 = (w0_0);
    goto L_C13D6FA;
    L_C13D6FA:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13D714;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_1 = (0x14);
    L_C13D714:;
    return v0_1;
    L_C13D6A4:;
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o44_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o40_float *)(v0_0))->v) = (w0_1 + w0_0);
    w0_0 = (1.0f);
    if ((1.0f > ((((struct o48_float *)(v0_0))->v)))) goto L_C13D6FA;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C13D6FA;
    L_C13D67E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    goto L_C13D690;
}

int FUN_0c13d748(int a4, int a5)
{
    int stk[4];
    register int t2;
    register int t3;
    register int t25;
    register int t15;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t25 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D66E;
        *(unsigned int *)((t3 + 0x10)) = a4;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        t15 = 0x1555;
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            t15 = 0xFFFFEAAB;
        }
        *(unsigned int *)((t3 + 0x34)) = t15;
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
        t25 = 0xA9;
    }
    return t25;
}

int FUN_0c13d834(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t22;
    register int t37;
    register int t38;
    register int t40;
    register int t43;
    register int t48;
    register int t49;
    register int t50;
    register int t68;
    register int t72;
    register int t26;
    register int t2;
    register int t4;
    register int t39;
    register float u42;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t26 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t2 = 0xC4;
                t4 = t3;
                t4 = (t4 << 2);
                t2 = (t2 + a4);
                t4 = (t4 + t2);
                t4 = (*(int *)((t4 + 0x0)));
                math_vec3_accumulate((t4 + 0x6C), (0x90 + t4));
                *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(t4))->v));
                t2 = ((((struct oA0_int *)(t4))->v));
                *(float *)(((int)stk + 4)) = (float)t2;
                t2 = ((((struct oA4_int *)(t4))->v));
                *(float *)(((int)stk + 8)) = (float)t2;
                math_vec3_accumulate((0x90 + t4), ((int)stk + 0));
                t2 = ((((struct o7C_int *)(t4))->v));
                t3 = (t3 + 0x1);
                t2 = (t2 + 0x71C);
                (((struct o7C_uint *)(t4))->v) = t2;
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
            }
            t22 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t22 - 1);
            t26 = (short)(t22 - 1);
            if ((int)(short)(t22 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t26 = 0x14;
            }
        }
        t72 = t26;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t37 = 0x0;
        for (;;) {
            t38 = *(int *)((((0xC4 + a4) + t37) + 0x0));
            t37 = (t37 + 0x4);
            (((struct o98_float *)(t38))->v) = 0.0f;
            (((struct o90_float *)(t38))->v) = 0.0f;
            (((struct o94_float *)(t38))->v) = 10.0f;
            (((struct oA0_uint *)(t38))->v) = 0xFFFFFFFF;
            if ((unsigned int)t37 >= (unsigned int)0x8) {
                break;
            }
        }
        t40 = 0x2;
        for (;;) {
            t43 = (((struct oC0_int *)(a4))->v);
            if ((int)t40 >= (int)t43) {
                break;
            }
            t39 = t40;
            t39 = (t39 - 2);
            t50 = t40;
            t50 = (t50 << 2);
            t39 = (t39 * 0x2AAA);
            t50 = (t50 + (0xC4 + a4));
            t50 = (*(int *)((t50 + 0x0)));
            u42 = (math_sin_angle16(t39));
            u42 = (u42 * 5.0f);
            (((struct o90_float *)(t50))->v) = u42;
            u42 = (math_cos_angle16(t39));
            u42 = (u42 * 5.0f);
            t40 = (t40 + 0x1);
            (((struct o98_float *)(t50))->v) = u42;
            (((struct o94_float *)(t50))->v) = 10.0f;
            (((struct oA0_uint *)(t50))->v) = 0xFFFFFFFF;
        }
        t48 = t43;
        t49 = 0x0;
        for (;;) {
            if ((int)t49 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t48 = 0xC4;
            t50 = t49;
            t50 = (t50 << 2);
            t48 = (t48 + a4);
            t50 = (t50 + t48);
            t50 = (*(int *)((t50 + 0x0)));
            math_vec3_accumulate((t50 + 0x6C), (0x90 + t50));
            *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(t50))->v));
            t48 = ((((struct oA0_int *)(t50))->v));
            *(float *)(((int)stk + 4)) = (float)t48;
            t48 = ((((struct oA4_int *)(t50))->v));
            *(float *)(((int)stk + 8)) = (float)t48;
            math_vec3_accumulate((0x90 + t50), ((int)stk + 0));
            t48 = ((((struct o7C_int *)(t50))->v));
            t49 = (t49 + 0x1);
            t48 = (t48 + 0x71C);
            (((struct o7C_uint *)(t50))->v) = t48;
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        }
        t68 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t68 - 1);
        t72 = (short)(t68 - 1);
        if ((int)(short)(t68 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t72 = 0x14;
        }
    }
    return t72;
}

int FUN_0c13d9e4(int a4)
{
    int stk[4];
    register int t0;
    register int t50;
    register int t5;
    register int t19;
    register int t33;
    register int t47;

    *(unsigned int *)(((int)stk + 12)) = 0x8;
    t0 = FUN_0c03f444(0x5, 0x1, 0x8);
    t50 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13D834;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)(((int)stk + 4)) = 0xC2A2178;
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t5 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t5) + 0x0))), 0x1, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t5) + 0x0)))))->v) = (*(int *)(((int)stk + 0)));
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x6C), (*(int *)(((int)stk + 4))));
            t5 = (t5 + 0x4);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x8000);
            if ((unsigned int)t5 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = 0xC2A2190;
        *(unsigned int *)(((int)stk + 4)) = 0xE38;
        t19 = 0x8;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t19) + 0x0))), 0x2, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t19) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t19) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t19) + 0x0)))))->v) = (*(int *)(((int)stk + 4)));
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t19) + 0x0))) + 0x6C), (*(int *)(((int)stk + 0))));
            t19 = (t19 + 0x4);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0xC);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x71C);
            if ((unsigned int)t19 >= (unsigned int)0x14) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 8)) = 0x5;
        *(unsigned int *)(((int)stk + 4)) = 0xC2A21B4;
        *(unsigned int *)(((int)stk + 0)) = 0x238C;
        t33 = 0x14;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t33) + 0x0))), 0x3, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t33) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t33) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t33) + 0x0)))))->v) = (*(int *)(((int)stk + 0)));
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t33) + 0x0))) + 0x6C), (*(int *)(((int)stk + 4))));
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0xC);
            t47 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t47 + 0x71C);
            t33 = (t33 + 0x4);
            if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((int)stk + 12)))) {
                break;
            }
        }
        t50 = (t47 + 0x71C);
    }
    return t50;
}

int FUN_0c13dbe2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + 0xE38);
        if ((unsigned int)t0 >= (unsigned int)0x8) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13dc4c(int a4)
{
    register int t0;
    register int t15;
    register float u4;
    register int t6;
    register int t7;
    register int t13;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t15 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13DBE2;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u4 = *(float *)0xC13DDA8;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x34)) = 0x4000;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x34)));
        *(unsigned int *)((t0 + 0x3C)) = 0x4000;
        t6 = 0x0;
        t7 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t7) + 0x0))), 0x0, 0x5, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t7) + 0x0))) + 0x6)) = 0xF;
            t13 = *(int *)((((0xC4 + t0) + t7) + 0x0));
            t7 = (t7 + 0x4);
            (((struct o78_uint *)(t13))->v) = t6;
            t6 = (t6 + 0x8000);
            if ((unsigned int)t7 >= (unsigned int)0x8) {
                break;
            }
        }
        t15 = 0x78;
    }
    return t15;
}

int FUN_0c13dd14(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x20;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = *(signed char *)((((0x41C + a4) + t0) + 0x0));
            *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = (t2 + 0x1);
            if ((int)(signed char)(t2 + 0x1) > (int)0x7) {
                *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = 0x0;
            }
            FUN_0c037498((*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0))), (*(signed char *)((((0x41C + a4) + t0) + 0x0))), 0x9, (*(int *)0xC4B40CC));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}

int FUN_0c13ddb8(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t18;
    register int t29;
    register int t32;
    register int t45;
    register int t46;
    register int t61;
    register int t66;
    register int t23;
    register int t3;
    register int t30;
    register int t31;
    register float u33;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t23 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t2 = 0x0;
            for (;;) {
                if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t3 = t2;
                t3 = (t3 << 2);
                t3 = (t3 + (0xC4 + a4));
                t3 = (*(int *)((t3 + 0x0)));
                math_vec3_accumulate((t3 + 0x6C), (0x90 + t3));
                *(float *)(((int)stk + 4)) = (float)((((struct o9C_int *)(t3))->v));
                *(float *)(((int)stk + 8)) = (float)((((struct oA0_int *)(t3))->v));
                *(float *)(((int)stk + 12)) = (float)((((struct oA4_int *)(t3))->v));
                math_vec3_accumulate((0x90 + t3), (((int)stk + 0) + 0x4));
                t2 = (t2 + 0x1);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
            }
            t18 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t18 - 1);
            if ((int)(short)(t18 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            t23 = (FUN_0c13dd14(a4));
        }
        t66 = t23;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t29 = a4;
        t32 = 0x0;
        for (;;) {
            if ((int)t32 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t31 = t32;
            t31 = (t31 << 2);
            t31 = (t31 + (0xC4 + a4));
            t31 = (*(int *)((t31 + 0x0)));
            t30 = 0x1C71;
            *(unsigned int *)(((int)stk + 0)) = (((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 0x5);
            t30 = (t32 * t30);
            t29 = t30;
            u33 = (float)(*(int *)(((int)stk + 0)));
            (((struct o90_float *)(t31))->v) = ((math_sin_angle16(t29)) * u33);
            t29 = t30;
            (((struct o98_float *)(t31))->v) = ((math_cos_angle16(t29)) * (u33));
            t29 = ((int)((int)(FUN_0c179ac0()) % (int)0xB));
            t29 = (t29 - 5);
            t32 = (t32 + 0x1);
            u33 = (float)t29;
            (((struct o94_float *)(t31))->v) = u33;
        }
        t45 = 0x0;
        t46 = t32;
        for (;;) {
            if ((int)t45 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t46 = t45;
            t46 = (t46 << 2);
            t46 = (t46 + (0xC4 + a4));
            t46 = (*(int *)((t46 + 0x0)));
            math_vec3_accumulate((t46 + 0x6C), (0x90 + t46));
            *(float *)(((int)stk + 4)) = (float)((((struct o9C_int *)(t46))->v));
            *(float *)(((int)stk + 8)) = (float)((((struct oA0_int *)(t46))->v));
            *(float *)(((int)stk + 12)) = (float)((((struct oA4_int *)(t46))->v));
            math_vec3_accumulate((0x90 + t46), (((int)stk + 0) + 0x4));
            t45 = (t45 + 0x1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        }
        t61 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t61 - 1);
        if ((int)(short)(t61 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t66 = (FUN_0c13dd14(a4));
    }
    return t66;
}

int FUN_0c13df20(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x1, 0x9);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13DDB8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        FUN_0c187798();
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = 0x0;
        t3 = (0x41C + t0);
        t4 = (0x41C + t0);
        t5 = 0x0;
        for (;;) {
            t6 = FUN_0c179ac0();
            t7 = ((~(((~t6) + 0x1) & 0x7)) + 0x1);
            if ((int)t6 >= 0) {
                t7 = (t6 & 0x7);
            }
            *(unsigned char *)((t3 + 0x0)) = t7;
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            FUN_0c037498((*(int *)((((0xC4 + t0) + t5) + 0x0))), t6, 0x9, (*(int *)0xC4B40CC));
            t2 = (t2 + 0x1);
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            t6 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            t5 = (t5 + 0x4);
            *(unsigned short *)((t6 + 0x6)) = 0xF;
            t3 = (t3 + 0x1);
            if ((int)t2 >= (int)0x9) {
                break;
            }
        }
        t1 = 0xF;
    }
    return t1;
}

int FUN_0c13dffc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x20;
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x5;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = *(signed char *)((((0x41C + a4) + t0) + 0x0));
            *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = (t2 + 0x1);
            if ((int)(signed char)(t2 + 0x1) > (int)0x3) {
                *(unsigned char *)((((0x41C + a4) + t0) + 0x0)) = 0x0;
            }
            FUN_0c037498((*(int *)((((t0 << 2) + (0xC4 + a4)) + 0x0))), (*(signed char *)((((0x41C + a4) + t0) + 0x0))), 0x13, (*(int *)0xC4B40CC));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}
