/* game/effect: functions 0C12FA44-0C12FEC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c131556(int, int);
int FUN_0c132724(int, int);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern float _builtin_sqrtf(float);
float FUN_0c12fa44(int a4, int a5, int a6, int a7, float f4);
int FUN_0c12fb0a(int a4, int a5, int a6, int a7);

float FUN_0c12fa44(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register int t9;
    register int t17;
    register float t20;
    register float t22;
    register float t23;
    register float t25;
    register float u26;
    register float u27;

    *(unsigned int *)(((int)stk + 0)) = a7;
    (((struct o4_float *)(((int)stk + 0)))->v) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u4 - u5);
    u6 = (((struct o4_float *)(((int)stk + 0)))->v);
    u7 = ((u4 - u5) * (u4 - u5));
    u7 = u7 + u6 * u6;
    t9 = math_atan2_angle16(a4, a5, a6, a7, ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)), _builtin_sqrtf(u7));
    t17 = t9;
    if (((int)t9 > (int)0x2AAB) && ((int)t9 < (int)0xD555)) {
        t17 = 0x2AAB;
        if (((int)t9 > (int)0x2AAB) && ((int)t9 < (int)0x4000)) {
        } else {
            t17 = 0x0;
            if (((int)t9 > (int)0xC000) && ((int)t9 < (int)0xD555)) {
                t17 = 0xD555;
            }
        }
    }
    t20 = math_cos_angle16(t17);
    t22 = math_cos_angle16((*(int *)(((int)stk + 0))));
    t23 = math_sin_angle16(t17);
    t25 = math_sin_angle16((*(int *)(((int)stk + 0))));
    u26 = (f4 * t20);
    u27 = (f4 * t20);
    *(float *)((a4 + 0x0)) = (u27 * t25);
    (((struct o4_float *)(a4))->v) = (f4 * t23);
    (((struct o8_float *)(a4))->v) = (u26 * t22);
    return t25;
}

int FUN_0c12fb0a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) != 0) {
        t1 = *(short *)((a4 + 0x1C));
        t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = t2;
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) >= (int)0x14) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t1 + 0x1);
    }
    t1 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
    if (((int)(short)(t1 - 1) > 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x5)) == 0) {
                FUN_0c131556((a4 + 0x28), (*(signed char *)((a4 + 0x1))));
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        u0 = (float)((short)(*(short *)((a4 + 0x1C))) * (short)0x1E);
        u1 = math_sin_angle16(((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        u0 = 0.5f;
        u0 = u0 + 0.5f * u1;
        u1 = (u0 * 0.5f);
        (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = (u1 + 1.0f);
        (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = (u1 + 1.0f);
        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = (u1 + 1.0f);
        u1 = (u0 * 0.5f);
        (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = (1.0f - u1);
        (((struct o1C_float *)(((((struct oC8_int *)(a4))->v))))->v) = (1.0f - u1);
        (((struct o20_float *)(((((struct oC8_int *)(a4))->v))))->v) = (1.0f - u1);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((0xC4 + a4) + t0) + 0x0));
            (((struct o78_uint *)(t2))->v) = (((((struct o78_int *)(t2))->v)) + 0x1555);
            t2 = *(int *)((((0xC4 + a4) + t0) + 0x0));
            (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) + 0x71C);
            if ((int)((((struct o80_int *)((*(int *)((((0xC4 + a4) + t0) + 0x0)))))->v)) >= (int)0x8000) {
                (((struct o80_uint *)((*(int *)((((0xC4 + a4) + t1) + 0x0)))))->v) = 0x8000;
            }
            t0 = (t0 + 0x4);
            t1 = (t1 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x8) {
                break;
            }
        }
        t0 = 0x80;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c132724((a4 + 0x28), (*(signed char *)((a4 + 0x1))));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        t0 = 0xC8;
    }
    return t0;
}
