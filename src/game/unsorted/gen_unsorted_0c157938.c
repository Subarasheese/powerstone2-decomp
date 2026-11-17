/* game/unsorted: functions 0C157938-0C158774, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c157938(int a4, int a5);
int FUN_0c157c34(int a4);
int FUN_0c157d28(int a4, int a5, int a6, int a7);
int FUN_0c157f20(int a4);
int FUN_0c158014(int a4, int a5, int a6, int a7);
int FUN_0c158340(int a4, int a5, int a6, int a7);

int FUN_0c157938(int a4, int a5)
{
    int stk[8];
    register int t0;
    register int t25;
    register float u4;
    register int t12;
    register float u15;
    register float u16;
    register float u17;
    register float t19;
    register float t22;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x4)) = 0xC157790;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        u4 = (((struct o0_float *)0xC157A64)->v);
        *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o8_int *)0xC2A2834)->v)))) * u4) / (float)((((struct o8_int *)0xC2A2834)->v)));
        t12 = *(int *)(((((int)stk + 0) + 0x14) + 0x0));
        u15 = (((struct o18_float *)0xC157A64)->v);
        u16 = ((((struct o0_float *)0xC2A2834)->v));
        u16 = u16 + ((((struct o4_float *)0xC2A2834)->v)) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct oC_int *)0xC2A2834)->v))));
        u17 = (((struct o1C_float *)0xC157A64)->v);
        t19 = math_cos_angle16(((int)(((((float)t12 * u17) / u4)) + u15) & 0xFFFF));
        (((struct o8_float *)(((int)stk + 0)))->v) = (t19 * u16);
        t22 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x14) + 0x0))) * u17) / u4)) + u15) & 0xFFFF));
        (((struct o4_float *)((((int)stk + 0) + 0x8)))->v) = (t22 * u16);
        (((struct o8_float *)((((int)stk + 0) + 0x8)))->v) = 0.0f;
        *(volatile int *)((t0 + 0xC4));
        t25 = (FUN_0c187798());
    }
    return t25;
}

int FUN_0c157c34(int a4)
{
    int stk[7];
    register int t0;
    register int t23;
    register float u3;
    register int t11;
    register float u14;
    register float u15;
    register float u16;
    register float t18;
    register float t21;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC157A36;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        u3 = (((struct o0_float *)0xC157D8C)->v);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o0_int *)0xC2A28C4)->v)))) * u3) / (float)((((struct o0_int *)0xC2A28C4)->v)));
        t11 = *(int *)(((((int)stk + 0) + 0x10) + 0x0));
        u14 = (((struct o18_float *)0xC157D8C)->v);
        u15 = ((((struct o0_float *)0xC2A2868)->v));
        u15 = u15 + ((((struct o4_float *)0xC2A2868)->v)) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o4_int *)0xC2A28C4)->v))));
        u16 = (((struct o1C_float *)0xC157D8C)->v);
        t18 = math_cos_angle16(((int)(((((float)t11 * u14) / u3)) + u16) & 0xFFFF));
        *(float *)(((int)stk + 4)) = (t18 * u15);
        t21 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0))) * u14) / u3)) + u16) & 0xFFFF));
        *(float *)(((int)stk + 8)) = (t21 * u15);
        *(float *)(((int)stk + 12)) = 0.0f;
        t23 = (FUN_0c17c130((t0 + 0x28), (t0 + 0x28), (((int)stk + 0) + 0x4)));
    }
    return t23;
}

int FUN_0c157d28(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    register int t8;

    t8 = *(signed char *)((a4 + 0x14));
    if (t8 != 0) {
        if (t8 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t8 = *(short *)((a4 + 0x1C));
        if (((int)t8 >= (int)((((struct o4_int *)0xC2A28CC)->v))) && (t0 = (((struct o8_int *)0xC2A28CC)->v), (int)t8 <= (int)t0)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A28CC)->v))), (((((struct o4_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A28CC)->v))) && (t1 = (((struct o10_int *)0xC2A28CC)->v), (int)t0 <= (int)t1)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A28CC)->v))), (((((struct oC_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A28CC)->v))) && (t2 = (((struct o18_int *)0xC2A28CC)->v), (int)t0 <= (int)t2)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2908, 0xC2A28F8, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A28CC)->v))), (((((struct o14_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A28CC)->v))) && (t3 = (((struct o20_int *)0xC2A28CC)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2918, 0xC2A2908, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A28CC)->v))), (((((struct o1C_int *)0xC2A28CC)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x23F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798(a4, a5, a6);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x7);
        }
        (((struct o58_float *)(a4))->v) = (((((struct o0_float *)0xC2A2934)->v)) * ((float)t1 / 8.0f));
        (((struct o5C_float *)(a4))->v) = (((((struct o4_float *)0xC2A2934)->v)) * ((float)t1 / 8.0f));
        (((struct o60_float *)(a4))->v) = (((((struct o8_float *)0xC2A2934)->v)) * ((float)t1 / 8.0f));
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x14, (*(int *)0xC4B40CC));
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2A28CC)->v))) && (t4 = (((struct o8_int *)0xC2A28CC)->v), (int)t0 <= (int)t4)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A28CC)->v))), (((((struct o4_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A28CC)->v))) && (t5 = (((struct o10_int *)0xC2A28CC)->v), (int)t0 <= (int)t5)) {
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x58), 0xC2A2928, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A28CC)->v))), (((((struct oC_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A28CC)->v))) && (t6 = (((struct o18_int *)0xC2A28CC)->v), (int)t0 <= (int)t6)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2908, 0xC2A28F8, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A28CC)->v))), (((((struct o14_int *)0xC2A28CC)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o1C_int *)0xC2A28CC)->v))) && (t7 = (((struct o20_int *)0xC2A28CC)->v), (int)t0 <= (int)t7)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A2918, 0xC2A2908, (*(short *)((a4 + 0x1C))), (((((struct o20_int *)0xC2A28CC)->v))), (((((struct o1C_int *)0xC2A28CC)->v))));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A28CC)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c157f20(int a4)
{
    int stk[7];
    register int t0;
    register int t23;
    register float u3;
    register int t11;
    register float u14;
    register float u15;
    register float u16;
    register float t18;
    register float t21;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t23 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC157D28;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        u3 = (((struct o0_float *)0xC158048)->v);
        *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o0_int *)0xC2A294C)->v)))) * u3) / (float)((((struct o0_int *)0xC2A294C)->v)));
        t11 = *(int *)(((((int)stk + 0) + 0x10) + 0x0));
        u14 = (((struct o18_float *)0xC158048)->v);
        u15 = ((((struct o0_float *)0xC2A28F0)->v));
        u15 = u15 + ((((struct o4_float *)0xC2A28F0)->v)) * (float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o4_int *)0xC2A294C)->v))));
        u16 = (((struct o1C_float *)0xC158048)->v);
        t18 = math_cos_angle16(((int)(((((float)t11 * u14) / u3)) + u16) & 0xFFFF));
        *(float *)(((int)stk + 4)) = (t18 * u15);
        t21 = math_sin_angle16(((int)(((((float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0))) * u14) / u3)) + u16) & 0xFFFF));
        *(float *)(((int)stk + 8)) = (t21 * u15);
        *(float *)(((int)stk + 12)) = 0.0f;
        t23 = (FUN_0c17c130((t0 + 0x28), (t0 + 0x28), (((int)stk + 0) + 0x4)));
    }
    return t23;
}

int FUN_0c158014(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R1;
    register int R3;
    register int R8;
    register int R9;
    int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F14;
    register float F15;
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
    v0_4 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_7 = a7;
    v0_2 = *(signed char *)((v0_4 + 0x14));
    v0_8 = (v0_2);
    v0_1 = (0xC2A29B8);
    v0_0 = (v0_4);
    if ((v0_2 == 0)) goto L_C15807C;
    if ((v0_8 == 1)) goto L_C1580CC;
    v0_8 = ((FUN_0c03f346(v0_0, v0_5, v0_6, v0_7)));
    L_C1582D2:;
    return v0_8;
    L_C1580CC:;
    *(volatile signed char *)((v0_0 + 0x1));
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_4, v0_5, v0_6);
    *(float *)((((int)stk + 8) + 0x0)) = ((*(float *)((((int)stk + 8) + 0x0))) - ((((struct o28_float *)(v0_0))->v)));
    (((struct o4_float *)(((int)stk + 8)))->v) = (((((struct o4_float *)(((int)stk + 8)))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    (((struct o8_float *)(((int)stk + 8)))->v) = (((((struct o8_float *)(((int)stk + 8)))->v)) - ((((struct o30_float *)(v0_0))->v)));
    v0_8 = (0x8);
    v0_2 = (((int)stk + 8));
    w0_0 = (9.99999997e-07f);
    if ((((((struct o8_float *)(((int)stk + 8)))->v)) != 0.0f)) goto L_C158114;
    *(float *)((v0_2 + v0_8)) = w0_0;
    L_C158114:;
    v0_8 = math_atan2_angle16(v0_4, v0_5, v0_6, v0_7, (*(float *)((v0_2 + 0x0))), (*(float *)((v0_2 + v0_8))));
    R10 = (0xFFFF);
    v0_3 = (0x10000);
    v0_4 = ((v0_8 & 0xFFFF));
    if (((int)((v0_8 & 0xFFFF) - (*(int *)((v0_0 + 0x38)))) <= (int)0x8000)) goto L_C158132;
    v0_4 = ((v0_4 - v0_3));
    L_C158132:;
    v0_8 = ((*(int *)((v0_0 + 0x38))));
    if (((int)(v0_4 - (*(int *)((v0_0 + 0x38)))) >= (int)0xFFFF8000)) goto L_C158142;
    v0_4 = ((v0_4 + v0_3));
    L_C158142:;
    *(unsigned int *)((v0_0 + 0x38)) = ((v0_8 + (v0_4 - v0_8)) & R10);
    w0_2 = (((struct o8_float *)(v0_2))->v);
    w0_1 = *(float *)((v0_2 + 0x0));
    w0_2 = (w0_2 * w0_2);
    w0_2 = w0_2 + w0_1 * w0_1;
    w0_1 = math_signed_sqrt(w0_2);
    v0_8 = (0x4);
    w0_2 = (w0_1);
    if ((w0_1 != 0.0f)) goto L_C15816E;
    w0_2 = (w0_0);
    L_C15816E:;
    v0_2 = math_atan2_angle16(v0_4, v0_5, v0_6, v0_7, (-(*(float *)((v0_2 + v0_8)))), w0_2);
    v0_4 = ((v0_2 & R10));
    if (((int)((v0_2 & R10) - (*(int *)((v0_0 + 0x34)))) <= (int)0x8000)) goto L_C158188;
    v0_4 = ((v0_4 - v0_3));
    L_C158188:;
    v0_8 = ((*(int *)((v0_0 + 0x34))));
    if (((int)(v0_4 - (*(int *)((v0_0 + 0x34)))) >= (int)0xFFFF8000)) goto L_C158198;
    v0_4 = ((v0_4 + v0_3));
    L_C158198:;
    *(unsigned int *)((v0_0 + 0x34)) = ((v0_8 + (v0_4 - v0_8)) & R10);
    v0_5 = *(short *)((v0_0 + 0x1C));
    R10 = (v0_1);
    v0_3 = (0xC2A2954);
    v0_2 = (0xC2A2954);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)0xC2A2958))) goto L_C15821A;
    if (((int)v0_4 > (int)(*(int *)((v0_2 + 0x8))))) goto L_C15821A;
    v0_8 = ((*(int *)((v0_3 + 0x4))));
    v0_4 = v0_8;
    *(int *)((int)stk + 4) = v0_4;
    v0_3 = (*(int *)((v0_3 + 0x8)));
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), (R10 + 0xC), R10, (*(short *)((v0_0 + 0x1C))), v0_3, v0_4);
    L_C15821A:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    v0_3 = (v0_2);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_2 + 0xC))))) goto L_C15824E;
    if (((int)v0_4 > (int)(*(int *)((v0_3 + 0x10))))) goto L_C15824E;
    v0_4 = (*(int *)((v0_3 + 0xC)));
    *(int *)((int)stk + 4) = v0_4;
    v0_3 = (*(int *)((v0_3 + 0x10)));
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), (v0_1 + 0x24), (v0_1 + 0x18), (*(short *)((v0_0 + 0x1C))), v0_3, v0_4);
    L_C15824E:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    R10 = (0xC2A2978);
    v0_3 = (0xC2A2978);
    v0_1 = (v0_2);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_2 + 0x14))))) goto L_C158282;
    if (((int)v0_4 > (int)(*(int *)((v0_1 + 0x18))))) goto L_C158282;
    v0_4 = (*(int *)((v0_1 + 0x14)));
    *(int *)((int)stk + 4) = v0_4;
    v0_1 = (*(int *)((v0_1 + 0x18)));
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (R10 + 0x10), R10, (*(short *)((v0_0 + 0x1C))), v0_1, v0_4);
    L_C158282:;
    v0_5 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    v0_4 = (v0_5);
    if (((int)v0_5 < (int)(*(int *)((v0_2 + 0x1C))))) goto L_C1582B4;
    if (((int)v0_4 > (int)(*(int *)((v0_1 + 0x20))))) goto L_C1582B4;
    v0_4 = (*(int *)((v0_1 + 0x1C)));
    *(int *)((int)stk + 4) = v0_4;
    v0_1 = (*(int *)((v0_1 + 0x20)));
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (v0_3 + 0x30), (v0_3 + 0x20), (*(short *)((v0_0 + 0x1C))), v0_1, v0_4);
    L_C1582B4:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_8 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)(*(int *)((v0_2 + 0x0))))) goto L_C1582D2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_8 = (0x14);
    goto L_C1582D2;
    L_C15807C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0xF;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x1, 0x14, (*(int *)0xC4B40CC));
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x1F;
    *(volatile int *)((v0_0 + 0xC4));
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    (((struct o7C_uint *)(((((struct oC4_int *)(v0_0))->v))))->v) = (*(int *)0xC2A29E8);
    goto L_C1580CC;
}

int FUN_0c158340(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t2;
    register int t9;
    register int t17;
    register int t23;
    register int t25;
    register int t56;
    register int t57;
    register int t59;
    register int t60;
    register int t62;
    register int t63;
    register float u70;
    register float u76;
    register float u82;
    register int t91;
    register int t98;
    register int t103;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            *(int *)((int)stk + 4) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = 0xC2A29EC;
            t2 = ((((struct o0_int *)0xC2A29EC)->v));
            *(int *)((int)stk + 0) = t2;
            FUN_0c058a6e((0xB0 + a4), 0xC2A2A0C, 0xC2A29FC, (*(short *)((a4 + 0x1C))), t2, 0x0);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            if ((*(short *)((a4 + 0x1C))) != (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
                t9 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t9 + 0x1);
                t103 = (t9 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t103 = 0x14;
            }
        } else {
            if (t0 == 2) {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                if ((*(short *)((a4 + 0x1C))) != ((((struct o4_int *)0xC2A29EC)->v))) {
                    t17 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t17 + 0x1);
                    t103 = (t17 + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t103 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    t23 = ((((struct o4_int *)0xC2A29EC)->v));
                    *(int *)((int)stk + 4) = t23;
                    *(unsigned int *)(((int)stk + 8)) = 0xC2A29F4;
                    t25 = ((((struct o8_int *)0xC2A29EC)->v));
                    *(int *)((int)stk + 0) = t25;
                    FUN_0c058a6e((0xB0 + a4), 0xC2A2A1C, 0xC2A2A0C, (*(short *)((a4 + 0x1C))), t25, t23);
                    if ((*(short *)((a4 + 0x1C))) == (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t103 = 0x14;
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                        t103 = (math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C)));
                    }
                } else {
                    t103 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x23, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x23F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o48_float *)(a4))->v) = 0.400000006f;
        (((struct o44_float *)(a4))->v) = 0.400000006f;
        (((struct o40_float *)(a4))->v) = 0.400000006f;
        FUN_0c18778c();
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 8) + 0x18);
        t56 = FUN_0c179ac0();
        t57 = ((~(((~t56) + 0x1) & 0xF)) + 0x1);
        if ((int)t56 >= 0) {
            t57 = (t56 & 0xF);
        }
        *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x0)) = (((t57 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 8) + 0x18) + 0x4);
        t59 = FUN_0c179ac0();
        t60 = ((~(((~t59) + 0x1) & 0xF)) + 0x1);
        if ((int)t59 >= 0) {
            t60 = (t59 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 8) + 0x18) + 0x4) + 0x0)) = (((t60 << 8) << 2) << 2);
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 8) + 0x18) + 0x8);
        t62 = FUN_0c179ac0();
        t63 = ((~(((~t62) + 0x1) & 0xF)) + 0x1);
        if ((int)t62 >= 0) {
            t63 = (t62 & 0xF);
        }
        *(unsigned int *)((((((int)stk + 8) + 0x18) + 0x8) + 0x0)) = (((t63 << 8) << 2) << 2);
        u70 = ((((struct o28_float *)(a4))->v));
        u70 = u70 + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))));
        *(float *)(((int)stk + 20)) = u70;
        u76 = ((((struct o2C_float *)(a4))->v));
        u76 = u76 + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
        *(float *)(((int)stk + 24)) = u76;
        u82 = ((((struct o30_float *)(a4))->v));
        u82 = u82 + (float)((((struct oC_int *)0xC2A29EC)->v)) * (math_sin_angle16((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))));
        *(float *)(((int)stk + 28)) = u82;
        FUN_0c0e2390((a4 + 0x4C), (((int)stk + 8) + 0xC), (a4 + 0x28));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / (float)((((struct o8_int *)0xC2A29EC)->v)));
        *(int *)((int)stk + 4) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0xC2A29EC;
        t91 = ((((struct o0_int *)0xC2A29EC)->v));
        *(int *)((int)stk + 0) = t91;
        FUN_0c058a6e((0xB0 + a4), 0xC2A2A0C, 0xC2A29FC, (*(short *)((a4 + 0x1C))), t91, 0x0);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        if ((*(short *)((a4 + 0x1C))) != (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) {
            t98 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t98 + 0x1);
            t103 = (t98 + 0x1);
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t103 = 0x14;
        }
    }
    return t103;
}
