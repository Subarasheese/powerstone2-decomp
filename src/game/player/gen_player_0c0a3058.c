/* game/player: functions 0C0A3058-0C0A4DFE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3768_int { char p[0x3768]; int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059fae(int, int, int);
int FUN_0c070320(int);
int FUN_0c070980(int);
int FUN_0c0720b4(int);
int FUN_0c072c34(int);
int FUN_0c07309e(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int pl_falcon_special_move_dispatch(int, int, int, int);
int FUN_0c0a362c(int, int, int);
int FUN_0c0a36c8(int);
int FUN_0c0a3a58(int);
int FUN_0c0a45ac(int);
int FUN_0c0a4648(int);
int FUN_0c0a46d4(int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a6a14(int);
int FUN_0c0a6a9e(int);
int FUN_0c0a6c22(int);
int FUN_0c0a6eb0(int);
int FUN_0c0a7430(int, int);
int FUN_0c0a74b0(int);
int FUN_0c0a7a82(int, int, int, int, float, float, float, float, float, float, float);
int FUN_0c0a7b08(int);
int FUN_0c0a8002(int);
int FUN_0c0c30a8(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0a3058(int a4, int a5, int a6, int a7);
float FUN_0c0a3080(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0a312c(int a4);
int FUN_0c0a32a4(int a4, int a5, int a6, int a7);
int FUN_0c0a33a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c0a34a4(int a4);
int FUN_0c0a34b4(int a4);
int FUN_0c0a34c4(int a4);
int FUN_0c0a34da(int a4);
int FUN_0c0a34fc(int a4);
int FUN_0c0a39ba(int a4);
int FUN_0c0a3b08(int a4);
int FUN_0c0a3bd6(int a4);

int FUN_0c0a3058(int a4, int a5, int a6, int a7)
{
    return (FUN_0c07e79c(a4, a5, a6, a7, a5, a6, a7));
}

float FUN_0c0a3080(int a4, int a5, int a6, int a7, float f4)
{
    register int t2;
    register int t3;
    register float t6;
    register float u11;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        t2 = *(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
        t3 = FUN_0c07eaf4(a4, a5, a6);
        *(unsigned int *)((a4 + 0x38)) = (t2 + t3);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t2 + t3))) * f4);
        t6 = math_cos_angle16((*(int *)((a4 + 0x38))));
        (((struct o54_float *)(a4))->v) = (t6 * f4);
        u11 = (t6 * f4);
    } else {
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
    }
    return u11;
}

int FUN_0c0a312c(int a4)
{
    register float u10;
    register int t42;
    register float u30;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x800) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) + 0x300) & 0xFFFF);
    }
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x400) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) - 0x300) & 0xFFFF);
    }
    u10 = (((struct o0_float *)0xC0A323C)->v);
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x2000) != 0) {
        if ((((((struct o5C_float *)(a4))->v)) + ((((struct o4_float *)0xC0A323C)->v))) > ((((struct o2C_float *)(a4))->v))) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u10);
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + u10);
        }
    }
    t42 = 0x42C;
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x1000) != 0) {
        t42 = 0x2C;
        if (((((struct o2C_float *)(a4))->v)) > (((((struct o5C_float *)(a4))->v)) + ((((struct o8_float *)0xC0A323C)->v)))) {
            u30 = (((struct o2C_float *)(a4))->v);
            (((struct o2C_float *)(a4))->v) = (u30 - u10);
            if (((((struct o168_float *)(a4))->v)) > (u30 - u10)) {
                (((struct o2C_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
            }
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - u10);
            t42 = 0x50;
        }
    }
    return t42;
}

int FUN_0c0a32a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                pl_falcon_special_move_dispatch(a4, a5, a6, a7);
            }
                break;
            case 4:
            {
                FUN_0c0a362c(a4, a5, a6);
            }
                break;
            case 6:
            {
                FUN_0c0a39ba(a4);
            }
                break;
            case 8:
            {
                FUN_0c0a3b08(a4);
            }
                break;
            case 10:
            {
                FUN_0c0a3bd6(a4);
            }
                break;
            case 12:
            {
                FUN_0c0a4648(a4);
            }
                break;
            case 14:
            {
                FUN_0c0a74b0(a4);
            }
                break;
            case 16:
            {
                FUN_0c0a7b08(a4);
            }
                break;
            case 18:
            {
                FUN_0c0a6a14(a4);
            }
                break;
            case 24:
            {
                FUN_0c0720b4(a4);
            }
                break;
            case 26:
            {
                FUN_0c0a6c22(a4);
            }
                break;
            default:
            {
                FUN_0c072c34(a4);
            }
                break;
        }
    } else {
        pl_falcon_special_move_dispatch(a4, a5, a6, a7);
    }
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

int FUN_0c0a33a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[2];
    register int t0;
    register int t55;

    t0 = *(signed char *)((a4 + 0x3732));
    switch (t0) {
    case 0:
        FUN_0c0a34fc(a4);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 2:
        FUN_0c0a36c8(a4);
        break;
    case 3:
        FUN_0c0a3a58(a4);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 4:
        FUN_0c070980(a4);
        break;
    case 5:
        FUN_0c0a45ac(a4);
        break;
    case 6:
        FUN_0c0a46d4(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 7:
        FUN_0c0a7a82(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9, f10);
        break;
    case 8:
        FUN_0c0a8002(a4);
        break;
    case 9:
        FUN_0c0a6a9e(a4);
        break;
    case 12:
        FUN_0c0a7430(a4, a5);
        break;
    case 13:
        FUN_0c0a6eb0(a4);
        break;
    case 14:
        FUN_0c07309e(a4);
        break;
    }
    t55 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t55 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t55;
}

int FUN_0c0a34a4(int a4)
{
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x1);
}

int FUN_0c0a34b4(int a4)
{
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x0);
}

int FUN_0c0a34c4(int a4)
{
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x2);
}

int FUN_0c0a34da(int a4)
{
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x3);
}

int FUN_0c0a34fc(int a4)
{
    int stk[5];
    int t0;
    register float u5;
    register int t21;
    register int t22;
    register int t32;
    register float u33;
    register float u37;
    register float u41;
    register int t59;

    t0 = *(signed char *)((a4 + 0x3733));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 == 3) {
                u5 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
                if (((int)u5 != 15) && ((int)u5 != 36)) {
                    if (((int)u5 != 26) && ((int)u5 != 40)) {
                    } else {
                        FUN_0c059fae((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x1);
                    }
                } else {
                    FUN_0c059fae((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x0);
                }
            }
        } else {
            t21 = *(short *)((a4 + 0x1C));
            t22 = ((~(((~t21) + 0x1) & 0x3)) + 0x1);
            if ((int)t21 >= 0) {
                t22 = (t21 & 0x3);
            }
            if (t22 == 0) {
                FUN_0c07e2f4(a4, 0x3);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
    } else {
        t32 = (((struct o118_int *)(a4))->v);
        *(unsigned int *)(((int)stk + 4)) = t32;
        u33 = (((struct o8C_float *)(t32))->v);
        if (!(5.0f > u33) && !(u33 > 21.0f)) {
            *(int *)((int)stk + 0) = (a4 + 0x28);
            u37 = ((((struct o28_float *)(a4))->v));
            u37 = u37 + 4.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
            (((struct o28_float *)(a4))->v) = u37;
            *(int *)((int)stk + 0) = (a4 + 0x30);
            u41 = ((((struct o30_float *)(a4))->v));
            u41 = u41 + 4.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
            (((struct o30_float *)(a4))->v) = u41;
        }
    }
    t59 = FUN_0c037bf6(a4);
    if ((unsigned char)t59 != 0) {
        FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        return 0x0;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a39ba(int a4)
{
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 9.0f);
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 9.0f);
    (((struct o58_float *)(a4))->v) = ((-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 6.0f)) / 20.0f);
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = ((-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 6.0f)) / 20.0f);
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    return FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x8);
}



