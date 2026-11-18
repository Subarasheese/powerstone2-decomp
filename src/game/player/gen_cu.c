/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3794_float { char p[0x3794]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o430_short { char p[0x430]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c059f78(int, int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c13b7c0(int, int, int, int);
int math_atan2_angle16(float, float);
int math_vec3_accumulate(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int FUN_0c0e7638(int a4);
int FUN_0c0a44f0(int a4);
int FUN_0c0aec6c(int a4);
int FUN_0c0a70e6(int a4);
int FUN_0c069eec(int a4, int a5, int a6, int a7);
int FUN_0c07901e(int a4);

int FUN_0c0e7638(int a4)
{
    register int t0;
    register int t1;

    FUN_0c0e2700((a4 + 0x28), 0x4, 0xFFFFFFFF, 0x1);
    if ((*(signed char *)0xC5429B4) == 2) {
        t0 = nlRand();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        if (t1 == 0) {
            t0 = FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
            if (t0 == 0) {
                FUN_0c0c2944(0xA, 0x0, 0x0, (a4 + 0x28), 0xFFFFFFFF);
            }
        } else {
            FUN_0c0c2944(0xA, 0x0, 0x0, (a4 + 0x28), 0xFFFFFFFF);
        }
    } else {
        FUN_0c0c2944(0xA, 0x0, 0x0, (a4 + 0x28), 0xFFFFFFFF);
    }
    FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}

int FUN_0c0a44f0(int a4)
{
    int stk[5];
    register float u9;
    register int t10;
    register int t29;
    register int t31;

    nlSubVector3op(((int)stk + 0), (((short)(*(short *)((a4 + 0x1E))) * (short)0x3938) + 0xC5324C0), (a4 + 0x28));
    *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
    if (!(((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) > (*(float *)0xC0A45F4))) {
        u9 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
        t10 = ((~(((~(int)u9) + 0x1) & 0x7)) + 0x1);
        if ((int)(int)u9 >= 0) {
            t10 = ((int)u9 & 0x7);
        }
        if (t10 == 0) {
            FUN_0c059e60(a4, 0x20);
            FUN_0c13b7c0((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), ((((struct o20_short *)(a4))->v)));
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        }
    }
    t29 = FUN_0c037bf6(a4);
    t31 = (unsigned char)t29;
    if ((unsigned char)t29 != 0) {
        t31 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
    }
    return t31;
}

int FUN_0c0aec6c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o50_float *)(a4))->v) = (*(float *)0xC0AEDC4);
        (((struct o5C_float *)(a4))->v) = -1.0f;
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0a70e6(int a4)
{
    register int t0;
    register int t1;

    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 20) {
        FUN_0c059f78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = 0x4;
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x0, 0xA);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        return 0x94;
    }
    return FUN_0c038362(a4);
}

int FUN_0c069eec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;

    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x100) != 0) {
        (((struct o3717_uchar *)(a4))->v) = 0x5;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        t0 = (FUN_0c085cac(a4, 0x5, 0x0, a7));
    } else {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t0 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            if (((((struct o37BC_float *)(a4))->v)) != 0.0f) {
                (((struct o3717_uchar *)(a4))->v) = 0x40;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                t1 = 0x40;
                t3 = 0x0;
            } else {
                (((struct o3717_uchar *)(a4))->v) = 0x11;
                (((struct o3718_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3741)));
                t1 = 0x11;
                t3 = (*(signed char *)((a4 + 0x3741)));
            }
            t0 = (FUN_0c085cac(a4, t1, t3, a7));
        }
    }
    return t0;
}

int FUN_0c07901e(int a4)
{
    register int t0;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            FUN_0c037bf6(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    (((struct o3790_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
    (((struct o3794_float *)(a4))->v) = ((((struct o30_float *)(a4))->v));
    (((struct o382A_ushort *)(a4))->v) = 0xB4;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
