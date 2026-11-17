/* game/unsorted: functions 0C13052C-0C130A02, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o404_int { char p[0x404]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c130e70(int, int, int);
int FUN_0c131556(int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
extern float _builtin_sqrtf(float);
int FUN_0c13052c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c130640(int a4, int a5, int a6, int a7);
int FUN_0c130890(int a4, int a5);

int FUN_0c13052c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];
    register float u1;
    register float u2;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register int t20;
    register int t23;
    register float t26;
    register float t28;
    register float t29;
    register float u32;
    register float u33;

    *(unsigned int *)(((int)stk + 0)) = a7;
    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o0_float *)0xC130668)->v);
    u2 = (((struct o4_float *)0xC130668)->v);
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) + ((((float)((int)((int)(FUN_0c179ac0()) % (int)0x28)) + u1) * u2)));
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)) + ((((float)((int)((int)(FUN_0c179ac0()) % (int)0x28)) + u1) * u2)));
    (((struct o10_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - (*(float *)((a5 + 0x0))));
    (((struct o4_float *)((((int)stk + 0) + 0x10)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o4_float *)(a5))->v)));
    u15 = (((struct o8_float *)((((int)stk + 0) + 0x4)))->v);
    u16 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x10)))->v) = (u15 - u16);
    u17 = (((struct o10_float *)(((int)stk + 0)))->v);
    u18 = ((u15 - u16) * (u15 - u16));
    u18 = u18 + u17 * u17;
    t20 = math_atan2_angle16(((((struct o4_float *)((((int)stk + 0) + 0x10)))->v)), _builtin_sqrtf(u18));
    t23 = t20;
    if (((int)t20 >= (int)0xC000) && ((int)t20 <= (int)0xEAAB)) {
    } else {
        t23 = 0xEAAB;
        if (((int)t20 >= (int)0x4000) && ((int)t20 <= (int)0xEAAB)) {
            t23 = 0x0;
        }
    }
    t26 = math_cos_angle16(t23);
    t28 = math_cos_angle16((*(int *)(((int)stk + 0))));
    t29 = math_sin_angle16(t23);
    u32 = (f4 * t26);
    u33 = (f4 * t26);
    *(float *)((a4 + 0x0)) = (u33 * (math_sin_angle16((*(int *)(((int)stk + 0))))));
    (((struct o4_float *)(a4))->v) = (f4 * t29);
    (((struct o8_float *)(a4))->v) = (u32 * t28);
    return t23;
}

int FUN_0c130640(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register float u0;

    t3 = *(signed char *)((a4 + 0x14));
    t4 = *(int *)((a4 + 0x10));
    if (t3 != 0) {
        if (t3 == 1) {
            t3 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
            if (((int)(short)(t3 - 1) > 0) && ((t0 = *(signed char *)((t4 + 0x3715)), t0 == 26) && (t1 = *(signed char *)((t4 + 0x371C)), t1 != 0))) {
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                if (0.0f > ((((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                    (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                }
                t0 = (((struct oC8_int *)(a4))->v);
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o20_float *)(t0))->v) = u0;
                (((struct o1C_float *)(t0))->v) = u0;
                return 0x1C;
            }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            if (0x0 == 0) {
                FUN_0c131556((a4 + 0x28), (*(signed char *)((a4 + 0x1))));
            }
            FUN_0c130e70(a4, (a4 + 0x28), 0x4);
            FUN_0c064d24(a4, 0x1, 0x35, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
            return FUN_0c07e2f4(a4, 0x65);
        }
        t0 = *(short *)((a4 + 0x1C));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = t1;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xA) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 + 0x1);
    }
    if ((((((struct o404_int *)(a4))->v)) == 0) && (t2 = *(signed char *)((a4 + 0x131)), t2 == 0)) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = 0x2;
            return 0x14;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0700000003f);
        if (((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.5f) {
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.5f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.150000006f);
        if (((((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o18_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = (((struct o18_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    return FUN_0c130e70(a4, (a4 + 0x28), 0x3);
}

int FUN_0c130890(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t37;
    register float u14;
    register float u21;
    register int t27;
    register int t34;
    register int t36;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t37 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned short *)((t3 + 0x1C)) = 0x0;
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t3))->v) = 0x12C;
        *(unsigned int *)((t3 + 0x4)) = 0xC130640;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c187798();
        *(int *)((int)stk + 12) = (t3 + 0x28);
        u14 = ((((struct o28_float *)(t3))->v));
        u14 = u14 + (math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC2A13B8)->v));
        (((struct o28_float *)(t3))->v) = u14;
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + ((((struct o4_float *)0xC2A13B8)->v)));
        *(int *)((int)stk + 12) = (t3 + 0x30);
        u21 = ((((struct o30_float *)(t3))->v));
        u21 = u21 + (math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o8_float *)0xC2A13B8)->v));
        (((struct o30_float *)(t3))->v) = u21;
        *(unsigned int *)((t3 + 0x38)) = (*(int *)((a4 + 0x38)));
        *(unsigned int *)((t3 + 0x3C)) = 0x0;
        FUN_0c187798();
        *(unsigned int *)((t3 + 0x34)) = (0x10000 - (FUN_0c13052c((t3 + 0x4C), (a4 + 0x28), (((((struct o3760_int *)(a4))->v)) + 0x28), (*(int *)((t3 + 0x38))), 30.0f)));
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t27 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t27));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)t27)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x64);
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x21F;
        t34 = (((struct oC8_int *)(t3))->v);
        (((struct o88_float *)(t34))->v) = 1.0f;
        (((struct o84_float *)(t34))->v) = 1.0f;
        (((struct o8C_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        t36 = (((struct oC8_int *)(t3))->v);
        (((struct o20_float *)(t36))->v) = 0.0f;
        (((struct o1C_float *)(t36))->v) = 0.0f;
        (((struct o18_float *)(t36))->v) = 0.0f;
        t37 = 0x18;
    }
    return t37;
}
