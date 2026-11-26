/* game/unsorted: functions 0C0EDE50-0C0EE318, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int thunk_FUN_0c05abb2(int, int);
int FUN_0c150286(int, int, int, int, int, float);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c0ede50(int a4);
int FUN_0c0ede64(void);
int FUN_0c0edf44(int a4);
int FUN_0c0edfac(int a4, int a5, int a6);

int FUN_0c0ede50(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    t2 = t0;
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t2 = 0x16;
    }
    return t2;
}

int FUN_0c0ede64(void)
{
    int stk[10];
    register int t1;
    register float u2;
    register float u3;
    register float u4;
    register float u7;
    register float t8;
    register float u10;
    register float t11;
    register float u13;
    register float u15;
    register float t16;
    register float t17;
    register float t18;
    register float t19;

    t1 = (int)((int)(nlRand()) % (int)0x5A);
    u2 = (((struct o0_float *)0xC0EDF80)->v);
    u3 = (((struct o4_float *)0xC0EDF80)->v);
    u4 = (((struct o8_float *)0xC0EDF80)->v);
    u7 = u4;
    u7 = u7 + u4 * (float)((int)((int)(nlRand()) % (int)0xC));
    t8 = math_sin_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    u10 = ((((struct o10_float *)0xC0EDF80)->v));
    u10 = u10 + u7 * t8;
    *(float *)(((int)stk + 28)) = u10;
    t11 = math_cos_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    u13 = ((((struct o18_float *)0xC0EDF80)->v));
    u13 = u13 + u7 * t11;
    *(float *)(((int)stk + 36)) = u13;
    *(float *)(((int)stk + 32)) = ((((struct o1C_float *)0xC0EDF80)->v));
    u15 = (((struct o20_float *)0xC0EDF80)->v);
    t16 = math_sin_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 16)) = (t16 * u15);
    t17 = math_cos_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 24)) = (t17 * u15);
    *(float *)(((int)stk + 20)) = 0.0f;
    t18 = math_sin_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 4)) = (t18 * 1.0f);
    t19 = math_cos_angle16(((int)(((float)t1 * u2) / u3) + 0x2000));
    *(float *)(((int)stk + 12)) = (t19 * 1.0f);
    *(float *)(((int)stk + 8)) = 0.0f;
    *(int *)((int)stk + 0) = 0x3C;
    return (FUN_0c150286((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0xC2881E0, 0x3C, (1.0f + 1.0f)));
}

int FUN_0c0edf44(int a4)
{
    register int t0;
    register int t4;
    int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 11) {
        if ((t0 == 34) && ((t4 = (((struct o3770_int *)(a4))->v), t4 != 0) && (t5 = (((struct o3770_int *)(a4))->v), t6 = *(signed char *)((0x3715 + t5)), t6 == 11))) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}

