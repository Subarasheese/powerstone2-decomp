/* game/unsorted: functions 0C0F2FF4-0C0F336E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC8_int { char p[0xC8]; int v; };
int math_mat_get_translate(int, int);
int FUN_0c059df2(int, int);
int FUN_0c0c241a(int);
int FUN_0c163358(int, int, int, int);
int FUN_0c165392(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0f2ff4(int a4);
int FUN_0c0f30ee(int a4, int a5, int a6, int a7);

int FUN_0c0f2ff4(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register float u12;
    register float u15;
    register float u17;
    register float u18;
    register float u22;
    register float u26;
    register float u27;
    register float u28;
    register int t53;
    register float u59;
    register float u62;
    register float u64;
    register float u65;
    register float u69;
    register float u73;
    register float u74;
    register float u75;
    register int t89;

    t0 = *(signed char *)((a4 + 0x16));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            t2 = *(int *)((a4 + 0x10));
            if (((*(signed char *)((t2 + 0x14))) == 1) && (t89 = *(signed char *)((t2 + 0x15)), t89 == 5)) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t89 = 0x16;
            }
        } else {
            t6 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t6 - 1);
            if ((int)(short)(t6 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
            u12 = (((struct o0_float *)0xC0F3124)->v);
            u15 = *(float *)(((int)stk + 0));
            u17 = ((math_sin_angle16((*(int *)((t1 + 0x38))))) * ((((struct o40_float *)(t1))->v)));
            u18 = u15;
            u18 = u18 + u12 * u17;
            *(float *)(((int)stk + 0)) = u18;
            u22 = (*(float *)(((int)stk + 4)));
            u22 = u22 + ((((struct o8_float *)0xC0F3124)->v)) * ((((struct o44_float *)(t1))->v));
            *(float *)(((int)stk + 4)) = u22;
            u26 = *(float *)(((int)stk + 8));
            u27 = ((math_cos_angle16((*(int *)((t1 + 0x38))))) * ((((struct o48_float *)(t1))->v)));
            u28 = u26;
            u28 = u28 + u12 * u27;
            *(float *)(((int)stk + 8)) = u28;
            if (((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x6)) == 0) {
                FUN_0c165392(((int)stk + 0), (*(int *)((t1 + 0x38))), (*(signed char *)((t1 + 0x1))), (((((int)((int)((((struct o20_short *)(a4))->v)) % (int)0xC)) == 0)) ? 1 : 0));
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            t89 = 0x20;
        }
    } else {
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4E);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t53 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t53 - 1);
        if ((int)(short)(t53 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        u59 = (((struct o0_float *)0xC0F3124)->v);
        u62 = *(float *)(((int)stk + 0));
        u64 = ((math_sin_angle16((*(int *)((t1 + 0x38))))) * ((((struct o40_float *)(t1))->v)));
        u65 = u62;
        u65 = u65 + u59 * u64;
        *(float *)(((int)stk + 0)) = u65;
        u69 = (*(float *)(((int)stk + 4)));
        u69 = u69 + ((((struct o8_float *)0xC0F3124)->v)) * ((((struct o44_float *)(t1))->v));
        *(float *)(((int)stk + 4)) = u69;
        u73 = *(float *)(((int)stk + 8));
        u74 = ((math_cos_angle16((*(int *)((t1 + 0x38))))) * ((((struct o48_float *)(t1))->v)));
        u75 = u73;
        u75 = u75 + u59 * u74;
        *(float *)(((int)stk + 8)) = u75;
        if (((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x6)) == 0) {
            FUN_0c165392(((int)stk + 0), (*(int *)((t1 + 0x38))), (*(signed char *)((t1 + 0x1))), (((((int)((int)((((struct o20_short *)(a4))->v)) % (int)0xC)) == 0)) ? 1 : 0));
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t89 = 0x20;
    }
    return t89;
}

int FUN_0c0f30ee(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register float F2;
    register float F3;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    v0_0 = a5;
    v0_0 = a6;
    v0_0 = a7;
    v0_5 = *(signed char *)((v0_4 + 0x16));
    v0_3 = (v0_5);
    v0_0 = (0xC179BF0);
    v0_2 = (0x0);
    v0_1 = ((*(int *)((v0_4 + 0x10))));
    v0_0 = (v0_4);
    w0_0 = (0.200000003f);
    if ((v0_5 == 0)) goto L_C0F3140;
    if ((v0_3 == 1)) goto L_C0F31AA;
    v0_1 = *(int *)((v0_0 + 0x10));
    v0_4 = (v0_1);
    if (((*(signed char *)((v0_1 + 0x14))) != 1)) goto L_C0F334C;
    v0_1 = *(signed char *)((v0_4 + 0x15));
    v0_3 = (v0_1);
    if ((v0_1 == 5)) goto L_C0F335A;
    L_C0F334C:;
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    (((struct o16_uchar *)(v0_0))->v) = v0_2;
    v0_3 = ((FUN_0c0c241a(v0_0)));
    L_C0F335A:;
    return v0_3;
    L_C0F31AA:;
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C0F31BE;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    L_C0F31BE:;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + 0x31C7);
    v0_4 = *(signed char *)((v0_0 + 0x17));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C0F31DC;
    if (!((v0_3 == 1))) goto L_C0F32A2;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    w0_0 = math_sin_angle16(((short)((((struct o22_short *)(v0_0))->v)) * (short)0x1E));
    w0_1 = 1.0f;
    w0_1 = w0_1 + 0.5f * w0_0;
    (((struct o84_float *)(v0_3))->v) = w0_1;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    w0_0 = math_sin_angle16(((short)((((struct o22_short *)(v0_0))->v)) * (short)0x1E));
    w0_1 = 1.0f;
    w0_1 = w0_1 + 0.5f * w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_1;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    v0_4 = (((struct o22_short *)(v0_0))->v);
    w0_0 = 1.0f;
    w0_0 = w0_0 + 0.25f * (math_sin_angle16((((v0_4 << 2) << 2) - v0_4)));
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    v0_3 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) < (int)0xC)) goto L_C0F32A2;
    goto L_C0F329E;
    L_C0F32A2:;
    math_mat_get_translate((v0_0 + 0x64), ((int)stk + 0));
    w0_1 = *(float *)(((int)stk + 0));
    w0_0 = ((math_sin_angle16((*(int *)((v0_1 + 0x38))))) * ((((struct o40_float *)(v0_1))->v)));
    w0_1 = w0_1;
    w0_1 = w0_1 + 76.0f * w0_0;
    *(float *)(((int)stk + 0)) = w0_1;
    w0_0 = (*(float *)(((int)stk + 4)));
    w0_0 = w0_0 + 8.39999962f * ((((struct o44_float *)(v0_1))->v));
    *(float *)(((int)stk + 4)) = w0_0;
    w0_1 = *(float *)(((int)stk + 8));
    w0_0 = ((math_cos_angle16((*(int *)((v0_1 + 0x38))))) * ((((struct o48_float *)(v0_1))->v)));
    w0_1 = w0_1;
    w0_1 = w0_1 + 76.0f * w0_0;
    *(float *)(((int)stk + 8)) = w0_1;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    v0_3 = (v0_2);
    w0_0 = (76.0f);
    if (((int)v0_2 < 0)) goto L_C0F32FC;
    v0_3 = ((v0_3 & 0x3));
    L_C0F3306:;
    if ((v0_3 != 0)) goto L_C0F3330;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    v0_3 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C0F3316;
    v0_3 = ((v0_3 & 0x7));
    L_C0F3320:;
    FUN_0c163358(((int)stk + 0), (*(int *)((v0_1 + 0x38))), (*(signed char *)((v0_1 + 0x1))), (((v0_3 == 0)) ? 1 : 0));
    L_C0F3330:;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    v0_3 = (0x20);
    goto L_C0F335A;
    L_C0F3316:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x7)) + 0x1));
    goto L_C0F3320;
    L_C0F32FC:;
    v0_3 = (((~(((~v0_3) + 0x1) & 0x3)) + 0x1));
    goto L_C0F3306;
    L_C0F329E:;
    (((struct o22_ushort *)(v0_0))->v) = v0_2;
    goto L_C0F32A2;
    L_C0F31DC:;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_3))->v) = (((((struct o8C_float *)(v0_3))->v)) + w0_0);
    v0_3 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) < (int)0x3)) goto L_C0F32A2;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    goto L_C0F329E;
    L_C0F3140:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = 0x1;
    (((struct o6C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 0.0f;
    (((struct o70_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 13.0f;
    (((struct o74_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = 110.0f;
    (((struct o84_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o88_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o17_uchar *)(v0_0))->v) = v0_2;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x3C;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    (((struct o22_ushort *)(v0_0))->v) = v0_2;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x47);
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C0F31AA;
}
