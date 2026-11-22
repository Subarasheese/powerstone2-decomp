/* game/player: functions 0C07AC90-0C07BB64, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37E8_float { char p[0x37E8]; float v; };
struct o37EC_float { char p[0x37EC]; float v; };
struct o37F0_float { char p[0x37F0]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3858_uint { char p[0x3858]; unsigned int v; };
struct o385C_uint { char p[0x385C]; unsigned int v; };
struct o3860_uint { char p[0x3860]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05253c(int, int, int, int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c059f20(int, int);
int FUN_0c07b1ee(int);
int FUN_0c07b456(int, int, int, int);
int FUN_0c07b5f4(int, int, int, int, int, int, int, int, int);
int FUN_0c07b6c6(int, int, int, int);
int FUN_0c07b798(int, int, int, int, int, int, int, int);
int FUN_0c07db58(int);
int FUN_0c07e2c4(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c1575d4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c07ac90(int a4, int a5, int a6, int a7);
int FUN_0c07aca0(int a4, int a5, int a6, int a7);
int FUN_0c07ae98(int a4);
int FUN_0c07b008(int a4);
int FUN_0c07b0ca(int a4);
int FUN_0c07b1a0(int a4);
int FUN_0c07b408(int a4);
int FUN_0c07b56c(int a4);
int FUN_0c07b840(int a4, int a5, int a6, int a7);
int FUN_0c07bb0c(int a4, int a5, int a6, int a7);

int FUN_0c07ac90(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC259344 + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}



int FUN_0c07b008(int a4)
{
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o3744_uchar *)(a4))->v) = 0x14;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return 0x0;
}

int FUN_0c07b0ca(int a4)
{
    register int t2;

    (((struct o372B_uchar *)(a4))->v) = 0x1;
    (((struct oA4_uint *)(a4))->v) = (((((struct oE4_int *)(((((struct o3770_int *)(a4))->v))))->v)) + 0x28);
    t2 = (((struct o3770_int *)(a4))->v);
    (((struct o37E8_float *)(a4))->v) = ((*(float *)(((((*(signed char *)(((0x371A + t2) + 0x0))) << 2) + (0xC1C5D20 + (((*(signed char *)((t2 + 0x2))) << 2) << 1))) + 0x0))) * 53.2999992f);
    (((struct o37EC_float *)(a4))->v) = -22.5f;
    (((struct o37F0_float *)(a4))->v) = -15.0f;
    (((struct o3858_uint *)(a4))->v) = 0x8000;
    (((struct o385C_uint *)(a4))->v) = 0x0;
    (((struct o3860_uint *)(a4))->v) = 0x0;
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        FUN_0c037bf6(a4);
    }
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
    return 0x3770;
}

int FUN_0c07b1a0(int a4)
{
    register int t1;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t1 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return FUN_0c037bf6(a4);
}

int FUN_0c07b408(int a4)
{
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x92, 0xFFFFFFFF, 0x3, 0x92);
    (((struct o22_ushort *)(a4))->v) = 0x0;
    t1 = *(signed char *)((a4 + 0x3721));
    if (((unsigned char)t1 != 49) && ((unsigned char)t1 != 0xCE)) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x2;
    }
    return 0x15;
}

int FUN_0c07b56c(int a4)
{
    (((struct oA4_uint *)(a4))->v) = (((((struct oE4_int *)(((((struct o3770_int *)(a4))->v))))->v)) + 0x28);
    math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (a4 + 0x28));
    math_mat_transform_vector((0x37E8 + a4), ((((struct oA4_int *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o37E8_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o37EC_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o37F0_float *)(a4))->v)));
    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c07db58(a4);
    FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    return (FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0));
}

int FUN_0c07b840(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        FUN_0c07b408(a4);
        break;
    case 1:
        FUN_0c07b456(a4, a5, a6, a7);
        break;
    case 2:
        FUN_0c07b5f4(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        break;
    case 3:
        FUN_0c07b6c6(a4, a5, a6, a7);
        break;
    case 4:
        FUN_0c07b798(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12));
        break;
    }
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0xF);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c07bb0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c07e2c4(a4);
    if (t0 == 0) {
        t1 = *(signed char *)((a4 + 0x3729));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 != 3) {
                        return t1;
                    }
                    return ((int (*)(int, int, int, int))(0xC07B8C2))(a4, a5, a6, a7);
                }
                return FUN_0c07ae98(a4);
            }
            return FUN_0c07b1ee(a4);
        }
        t1 = *(int *)((0xC259384 + ((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x2))) << 2)));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
    }
    return t0;
}
