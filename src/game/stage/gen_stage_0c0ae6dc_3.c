/* game/stage: functions 0C0AE6DC-0C0B0668, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07053a(int, int, float);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c071ae4(int);
int FUN_0c07309e(int);
int FUN_0c07ce58(int, int, float);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0ae748(int);
int FUN_0c0ae750(int, int);
int FUN_0c0aeb60(int, int, int, int);
int FUN_0c0aeb9a(int);
int FUN_0c0af164(int);
int FUN_0c0af568(int, int, int);
int FUN_0c142a58(int, int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0aee88(int a4, int a5, int a6);
int FUN_0c0aef2c(int a4, int a5, int a6);
int FUN_0c0af116(int a4, int a5, int a6);
int FUN_0c0af1c4(int a4, int a5, int a6);
int FUN_0c0afe10(int a4, int a5, int a6, int a7);

int FUN_0c0aee88(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x6, (t0), 0x2, 0x6);
        (((struct o5C_float *)(a4))->v) = (((((struct o37A0_float *)(a4))->v)) * 3.0f);
        (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 9.0f));
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        FUN_0c0ae748(a4);
    }
    FUN_0c038362(a4);
    return FUN_0c0ae750(a4, 0x0);
}

int FUN_0c0aef2c(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    float u0;
    register float u1;
    register float u2;

    if ((((((struct o2C_float *)(a4))->v)) > ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v))) && (u0 = (((struct o3780_float *)(a4))->v), 200.0f > u0)) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    FUN_0c037bf6(a4, a5, a6);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        if (!(9.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
            FUN_0c142a58(a4, 0x0, 0x15, 0xC1C6568, 0x0);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o5C_float *)(a4))->v) = (((((struct o37A0_float *)(a4))->v)) * 4.0f);
            (((struct o50_float *)(a4))->v) = (-(((((struct o5C_float *)(a4))->v)) * 3.0f));
        }
    } else {
        if (((*(signed char *)((a4 + 0x16))) == 1) && (t0 = (((struct o118_int *)(a4))->v), u1 = *(float *)0xC0AF140, u2 = (((struct o8C_float *)(t0))->v), !(u1 > u2))) {
            FUN_0c142a58(a4, 0x1, 0x16, 0xC1C6568, 0x0);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            u0 = (((struct o37A0_float *)(a4))->v);
            (((struct o5C_float *)(a4))->v) = u0;
            (((struct o50_float *)(a4))->v) = (-(u0 * 6.0f));
        }
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
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
            FUN_0c07daea(a4, t1, t0);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            return 0x15;
        }
    }
    FUN_0c038362(a4);
    return FUN_0c0ae750(a4, 0x1);
}

int FUN_0c0af116(int a4, int a5, int a6)
{
    register int t0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0af1c4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0xA, (t1), 0x2, 0xA);
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194), 1.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x2C, 20.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return FUN_0c0ae748(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0afe10(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t0 = FUN_0c037bf6(a4, a5, a6);
                if ((unsigned char)t0 != 0) {
                    return FUN_0c085d0c(a4);
                }
                FUN_0c038362(a4);
                FUN_0c07da48(a4);
                return FUN_0c070320(a4);
            }
            case 4:
            {
                return FUN_0c0aeb60(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c070690(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c070980(a4);
            }
            case 10:
            {
                return FUN_0c0af164(a4);
            }
            case 12:
            {
                return FUN_0c0aeb9a(a4);
            }
            case 14:
            {
                return FUN_0c0af568(a4, a5, a6);
            }
            case 16:
            {
                return ((int (*)(int, int, int, int))(0xC0AF81C))(a4, a5, a6, a7);
            }
            case 18:
            {
                return FUN_0c071ae4(a4);
            }
            case 24:
            {
                return ((int (*)(int, int, int, int))(0xC0AFAEE))(a4, a5, a6, a7);
            }
            case 26:
            {
                return ((int (*)(int, int, int, int))(0xC0AFCA4))(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c07309e(a4);
            }
        }
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}
