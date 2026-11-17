/* game/unsorted: functions 0C13C7C0-0C13CC50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c13c7c0(int a4, int a5, int a6, int a7);
int FUN_0c13c890(int a4, int a5);
float FUN_0c13c930(int a4, int a5, int a6, int a7, float f4);
int FUN_0c13caec(int a4, int a5);

int FUN_0c13c7c0(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t3 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)0xC542237) == 1) && ((t0 = *(signed char *)0xC54223C, t0 == 2) && (t1 = *(signed char *)((a4 + 0x1B)), t2 = *(signed char *)0xC54223C, t1 != t2))) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0xC5421F8, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            FUN_0c13caec(a4, 0x0);
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if ((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3715))) == 25) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x19;
    }
    t0 = *(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3715));
    t1 = t0;
    if (t0 != 25) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13c890(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t13 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13C7C0;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53255C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)0xC54223C);
        t13 = 0x1B;
    }
    return t13;
}

float FUN_0c13c930(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R13;
    register float F0;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_4 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_1 = a7;
    w0_1 = f4;
    v0_0 = (v0_4);
    v0_4 = (0xC5421F8);
    if (((*(signed char *)0xC542237) != 1)) goto L_C13C96E;
    if (((*(signed char *)((v0_4 + 0x44))) != 2)) goto L_C13C96E;
    if (((*(signed char *)((v0_0 + 0x1B))) == (*(signed char *)((v0_4 + 0x44))))) goto L_C13C96E;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_1)));
    L_C13CAB6:;
    return F0;
    L_C13C96E:;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C13C97E;
    if ((v0_4 == 1)) goto L_C13CA30;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_1)));
    goto L_C13CAB6;
    L_C13CA30:;
    v0_3 = (0x71C);
    v0_1 = (0xC17C110);
    v0_2 = (0x0);
    L_C13CA82:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13CA38;
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)0xA)) goto L_C13CA9C;
    (((struct oA8_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0xA8))) ^ 0x1);
    L_C13CA9C:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C13CAB6;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_4 = (0x14);
    goto L_C13CAB6;
    L_C13CA38:;
    v0_1 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    math_vec3_accumulate((v0_1 + 0x6C), (0x90 + v0_1));
    *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(v0_1))->v));
    *(float *)(((int)stk + 4)) = (float)((((struct oA0_int *)(v0_1))->v));
    *(float *)(((int)stk + 8)) = (float)((((struct oA4_int *)(v0_1))->v));
    math_vec3_accumulate((0x90 + v0_1), ((int)stk + 0));
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + v0_3);
    v0_2 = ((v0_2 + 0x1));
    goto L_C13CA82;
    L_C13C97E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    v0_1 = (0xFFFFFFFF);
    v0_2 = (0x0);
    v0_3 = (0x8);
    w0_0 = (10.0f);
    w0_1 = (0.0f);
    L_C13C996:;
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_2) + 0x0));
    (((struct o98_float *)(v0_4))->v) = w0_1;
    (((struct o90_float *)(v0_4))->v) = w0_1;
    (((struct o94_float *)(v0_4))->v) = w0_0;
    v0_5 = (unsigned int)(v0_2 + 0x4) < (unsigned int)v0_3;
    (((struct oA0_uint *)(v0_4))->v) = v0_1;
    v0_4 = (v0_4);
    v0_2 = ((v0_2 + 0x4));
    if (v0_5) goto L_C13C996;
    v0_2 = (0x2);
    v0_3 = (0xC179BF0);
    v0_3 = (0x2AAA);
    L_C13CA28:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C13C9F4;
    goto L_C13CA30;
    L_C13C9F4:;
    v0_4 = *(int *)((((v0_2 << 2) + (0xC4 + v0_0)) + 0x0));
    w0_1 = math_sin_angle16(((v0_2 - 2) * v0_3));
    (((struct o90_float *)(v0_4))->v) = (w0_1 * w0_0);
    w0_1 = math_cos_angle16(((v0_2 - 2) * v0_3));
    (((struct o98_float *)(v0_4))->v) = (w0_1 * w0_0);
    (((struct o94_float *)(v0_4))->v) = w0_0;
    (((struct oA0_uint *)(v0_4))->v) = v0_1;
    v0_2 = ((v0_2 + 0x1));
    F0 = ((w0_1 * w0_0));
    goto L_C13CA28;
}

int FUN_0c13caec(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t34;
    register int t1;
    register int t6;
    register int t7;
    register int t8;
    register int t18;
    register int t19;
    register int t20;
    register int t30;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    t0 = FUN_0c03f444(0x5, 0x1, 0x8);
    t34 = t0;
    if (t0 != 0) {
        t1 = *(int *)(((int)stk + 4));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((t1 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13C930;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c187798();
        math_mat_get_translate((t1 + 0x64), (t0 + 0x28));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t6 = 0xC2A210C;
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t8) + 0x0))), 0x1, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t8) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t8) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t8) + 0x0)))))->v) = t7;
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t8) + 0x0))) + 0x6C), t6);
            t8 = (t8 + 0x4);
            t6 = (t6 + 0xC);
            t7 = (t7 + 0x8000);
            if ((unsigned int)t8 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 0)) = 0x2;
        t18 = 0xE38;
        t19 = 0xC2A2124;
        t20 = 0x8;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t20) + 0x0))), 0x2, 0x7, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t20) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t20) + 0x0))) + 0x6)) = 0xF;
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t20) + 0x0)))))->v) = t18;
            math_vec3_accumulate(((*(int *)((((0xC4 + t0) + t20) + 0x0))) + 0x6C), t19);
            t30 = *(int *)(((int)stk + 0));
            t19 = (t19 + 0xC);
            t18 = (t18 + 0x71C);
            *(unsigned int *)(((int)stk + 0)) = (t30 + 0x1);
            t20 = (t20 + 0x4);
            if ((int)(t30 + 0x1) >= (int)(*(int *)(((int)stk + 8)))) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
        (((struct o1B_uchar *)(t0))->v) = (*(signed char *)0xC54223C);
        t34 = 0x1B;
    }
    return t34;
}
