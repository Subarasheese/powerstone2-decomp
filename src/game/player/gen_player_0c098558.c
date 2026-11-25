/* game/player: functions 0C098558-0C0990CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o377C_int { char p[0x377C]; int v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05261c(int);
int FUN_0c064f80(int);
int FUN_0c066cd8(int);
int FUN_0c070320(int);
int FUN_0c07053a(int, int, float);
int FUN_0c07075c(int, int, int, int, int, int, int, int, int);
int FUN_0c071074(int);
int FUN_0c07147c(int);
int FUN_0c071774(int);
int FUN_0c0720b4(int);
int FUN_0c07285e(int);
int FUN_0c072c34(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f824(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c098558(int a4, int a5, float f4, float f5, float f6);
int FUN_0c098634(int a4);
int FUN_0c09865e(int a4);
int FUN_0c098688(int a4);
int FUN_0c0986c0(int a4);
int FUN_0c0986ea(int a4);
int FUN_0c098714(int a4);
int FUN_0c09873e(int a4);
int FUN_0c09876c(int a4);
int FUN_0c0987a2(int a4);
int FUN_0c098810(int a4, int a5, int a6, int a7);
int FUN_0c098924(int a4);
int FUN_0c098aca(int a4);
int FUN_0c098b46(int a4);
int FUN_0c098bcc(int a4);
int FUN_0c098bf0(int a4);
int FUN_0c098cae(int a4, int a5, int a6);
int FUN_0c098d80(int a4);
int FUN_0c098fca(int a4);
int FUN_0c098fec(int a4, int a5, int a6, int a7);
int FUN_0c099034(int a4);

int FUN_0c098558(int a4, int a5, float f4, float f5, float f6)
{
    float u0;
    int t0;
    int t2;

    u0 = *(float *)0xC0986B8;
    if (!((f5 + u0) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        *(unsigned short *)(((*(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0))) + 0x6)) = 0x1F;
        t0 = *(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0));
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + ((1.0f - f6) / u0));
        if (1.0f > ((((struct o8C_float *)((*(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0)))))->v))) {
            (((struct o8C_float *)((*(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0)))))->v) = 1.0f;
        }
        t0 = *(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0));
        u0 = (((struct o8C_float *)(t0))->v);
        (((struct o88_float *)(t0))->v) = u0;
        (((struct o84_float *)(t0))->v) = u0;
        t0 = 0x84;
    } else {
        u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
        t0 = 0x8C;
        if (!(f4 > u0) && !(u0 > f5)) {
            *(unsigned short *)(((*(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0))) + 0x6)) = 0x1F;
            t2 = *(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0));
            (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) + ((f6 + -1.0f) / (f5 - f4)));
            if (((((struct o8C_float *)((*(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0)))))->v)) > f6) {
                (((struct o8C_float *)((*(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0)))))->v) = f6;
            }
            t2 = *(int *)((((0xC4 + a4) + (a5 << 2)) + 0x0));
            u0 = (((struct o8C_float *)(t2))->v);
            (((struct o88_float *)(t2))->v) = u0;
            (((struct o84_float *)(t2))->v) = u0;
            t0 = 0x84;
        }
    }
    return t0;
}

int FUN_0c098634(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x4, (t0), 0x1, 0x4));
}

int FUN_0c09865e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x0, (t0), 0x1, 0x0));
}

int FUN_0c098688(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x1, (t0), 0x1, 0x1));
}

int FUN_0c0986c0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x2, (t0), 0x1, 0x2));
}

int FUN_0c0986ea(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0xB, (t0), 0x1, 0xB));
}

int FUN_0c098714(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x8, (t0), 0x1, 0x8));
}

int FUN_0c09873e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x6, (t0), 0x1, 0x6);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c09876c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 50) {
        FUN_0c07db58(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0987a2(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x3, (t0), 0x2, 0x3);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 20.0f;
    (((struct o5C_float *)(a4))->v) = -2.79999995f;
    *(unsigned short *)((a4 + 0x1C)) = 0x5;
    return 0x5;
}

int FUN_0c098810(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t1;
    register int t5;
    register int t20;
    register int t22;
    register int t23;
    register int t24;
    register int t25;

    FUN_0c066cd8(a4);
    t1 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t1 < (unsigned int)0xF) {
        switch ((t1 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t5 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25CF3C)))))(a4, a5, a6, a7);
            }
                break;
            case 4:
            {
                FUN_0c0986ea(a4);
            }
                break;
            case 6:
            {
                FUN_0c098714(a4);
            }
                break;
            case 8:
            {
                FUN_0c07075c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
            }
                break;
            case 10:
            {
                FUN_0c0987a2(a4);
            }
                break;
            case 12:
            {
                FUN_0c09873e(a4);
            }
                break;
            case 14:
            {
                FUN_0c071074(a4);
            }
                break;
            case 16:
            {
                FUN_0c07147c(a4);
            }
                break;
            case 18:
            {
                FUN_0c071774(a4);
            }
                break;
            case 24:
            {
                FUN_0c0720b4(a4);
            }
                break;
            case 26:
            {
                FUN_0c07285e(a4);
            }
                break;
            default:
            {
                FUN_0c072c34(a4);
            }
                break;
        }
    } else {
        t20 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25CF3C)))))(a4, a5, a6, a7);
    }
    t22 = *(int *)(((0x118 + a4) + 0x4));
    t23 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t22))->v) = 1.0f;
    (((struct o9C_float *)(t22))->v) = 1.0f;
    (((struct oA0_float *)(t23))->v) = 1.0f;
    (((struct o9C_float *)(t23))->v) = 1.0f;
    t24 = *(int *)(((0x118 + a4) + 0x4));
    t25 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t24))->v) = 1.0f;
    (((struct o98_float *)(t25))->v) = 1.0f;
    (((struct o94_float *)(t24))->v) = 1.0f;
    (((struct o94_float *)(t25))->v) = 1.0f;
    return 0x94;
}

int FUN_0c098924(int a4)
{
    register int t0;
    register int t1;
    float u0;
    register float u1;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o50_float *)(a4))->v) = -20.0f;
            (((struct o5C_float *)(a4))->v) = -2.0f;
        }
    }
    FUN_0c037bf6(a4);
    if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
        t0 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
        if ((t0 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
            u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
            u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
            u1 = math_signed_sqrt(u0);
            if (200.0f > u1) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
            }
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
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
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c05261c((*(int *)0xC241C20));
        FUN_0c07db58(a4);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c098aca(int a4)
{
    register int t0;
    register float u0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x5, (t0), 0x2, 0x5);
        u0 = *(float *)0xC098BB8;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
        (((struct o5C_float *)(a4))->v) = -1.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c098b46(int a4)
{
    register int t0;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
        }
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c098bcc(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c098b46(a4);
        }
        return FUN_0c098aca(a4);
    }
    return FUN_0c098924(a4);
}

int FUN_0c098bf0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x9, (t0), 0x2, 0x9);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        FUN_0c037bf6(a4);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        *(unsigned short *)((a4 + 0x1E)) = 0x2A;
        FUN_0c07053a(a4, (*(short *)((a4 + 0x1E))), (*(float *)0xC098CE0));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c098cae(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            if (!(((((struct o8_float *)0xC098DFC)->v)) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
            }
        }
    } else {
        if (((*(int *)0xC542260) & 3) == 0) {
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            FUN_0c07053a(a4, 0x1E, ((((struct o0_float *)0xC098DFC)->v)));
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c098d80(int a4)
{
    register int t0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            return FUN_0c085d0c(a4);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c098fca(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c098fec(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c098fca(a4);
        }
        return ((int (*)(int, int, int, int))(0xC098F18))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC098E20))(a4, a5, a6, a7);
}

int FUN_0c099034(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3733));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    FUN_0c098558(a4, 0x6, 17.0f, 21.0f, 1.39999998f);
                    FUN_0c098558(a4, 0xA, 17.0f, 21.0f, 1.39999998f);
                }
            }
        } else {
            FUN_0c098558(a4, 0x6, 5.0f, 9.0f, 1.39999998f);
        }
    } else {
        FUN_0c098558(a4, 0x10, 12.0f, 13.0f, 1.39999998f);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
