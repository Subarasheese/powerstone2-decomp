/* game/unsorted: functions 0C083384-0C0835D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c0673ea(int);
int FUN_0c067734(int);
int FUN_0c07c4b0(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085d0c(int, int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c083384(int a4, int a5);
int FUN_0c083440(int a4, int a5, int a6, int a7);
int FUN_0c083582(int a4, int a5);
int FUN_0c08358e(int a4, int a5);


int FUN_0c083440(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u17;
    register int t27;
    register int t28;
    int t1;

    (((struct o3715_uchar *)(a4))->v) = 0x12;
    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && (t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 0xC4)) {
        FUN_0c081dfc(a4, a5, a6, a7);
        FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x5);
        FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
        FUN_0c083384(a4, (0x37C4 + a4));
        (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC0835FC)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0835FC)->v));
        t10 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
        u11 = (((struct o37C4_float *)(a4))->v);
        u12 = (((struct o28_float *)(a4))->v);
        u13 = (((struct o37CC_float *)(a4))->v);
        u14 = (((struct o30_float *)(a4))->v);
        u17 = ((u14 - u13) * (u14 - u13));
        u17 = u17 + ((u12 - u11)) * ((u12 - u11));
        (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u17));
        *(unsigned short *)((a4 + 0x1C)) = (int)((((((struct o50_float *)(a4))->v)) / ((((struct o5C_float *)(a4))->v))) * (1.0f + 1.0f));
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t10)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t10)) * ((((struct o3790_float *)(a4))->v))));
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x0;
        t27 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t27;
        t28 = t27;
        *(int *)((int)stk + 0) = t28;
        FUN_0c07e79c(a4, t27, 0x0, 0x8, t28, 0x0, 0x8);
        (((struct o3830_ushort *)(a4))->v) = 0x0;
        (((struct o374B_uchar *)(a4))->v) = 0x1;
        return 0x374B;
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c083582(int a4, int a5)
{
    (((struct o3715_uchar *)(a4))->v) = 0x13;
    (((struct o17_uchar *)(a4))->v) = a5;
    return 0x17;
}

int FUN_0c08358e(int a4, int a5)
{
    (((struct o3715_uchar *)(a4))->v) = 0x14;
    (((struct o17_uchar *)(a4))->v) = a5;
    (((struct o3743_uchar *)(a4))->v) = 0x0;
    (((struct o382A_ushort *)(a4))->v) = 0x0;
    (((struct o3757_uchar *)(a4))->v) = 0x0;
    FUN_0c0673ea(a4);
    (((struct o37FC_float *)(a4))->v) = 0.0f;
    (((struct o37F4_float *)(a4))->v) = 0.0f;
    FUN_0c067734(a4);
    (((struct o3721_uchar *)(a4))->v) = 0x0;
    (((struct o376C_uint *)(a4))->v) = 0x0;
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    return 0x371D;
}
