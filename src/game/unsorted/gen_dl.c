/* Straight-line functions with calls and guards (batch gen_dl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f78(int, int);
int FUN_0c0752a8(int);
int FUN_0c07d030(int, int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c09ca20(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0e79f4(int, int, int);
int FUN_0c12e584(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c09cee2(int a4);
int FUN_0c0a9f1c(int a4);
int FUN_0c0aa64c(int a4);
int FUN_0c08d704(int a4);
int FUN_0c09c87a(int a4);
int FUN_0c09ce70(int a4);
int FUN_0c09d630(int a4);
int FUN_0c09dc08(int a4);
int FUN_0c0a203c(int a4);
int FUN_0c0a22e8(int a4);
int FUN_0c09dd1c(int a4);
int FUN_0c078b96(int a4);
int FUN_0c078dea(int a4);
int FUN_0c097450(int a4);
int FUN_0c0a2192(int a4);
int FUN_0c0acfa0(int a4);
int FUN_0c0783ce(int a4);
int FUN_0c09d30c(int a4);
int FUN_0c09cf9e(int a4);
int FUN_0c09dcc4(int a4);
int FUN_0c0e7fbc(int a4, int a5, int a6, int a7);
int FUN_0c09c936(int a4);
int FUN_0c0d17d4(int a4, int a5, int a6, int a7);
int FUN_0c0cf1e4(int a4, int a5, int a6, int a7);
int FUN_0c149d70(int a4, int a5, int a6, int a7);

int FUN_0c09cee2(int a4)
{
    register int t0;
    int t4;

    t0 = FUN_0c09ca20(a4, 0x0);
    if (t0 == 0) {
        FUN_0c037bf6(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t4 != 0)) {
            if (t4 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            FUN_0c07daea(a4);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return 0x17;
        }
        return 0x50;
    }
    return t0;
}

int FUN_0c0a9f1c(int a4)
{
    register int t4;
    register int t6;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t6 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t6, 0x0, 0xA, (t6), 0x0, 0xA);
            return FUN_0c059f78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c0aa64c(int a4)
{
    register int t4;
    register int t6;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t6 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t6, 0x1, 0x17, (t6), 0x1, 0x17);
            return FUN_0c059f78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c08d704(int a4)
{
    register int t0;
    register int t1;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(short *)((a4 + 0x1C));
        t1 = t0;
        if (t0 == 0) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
    }
    return t1;
}

int FUN_0c09c87a(int a4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if (((*(short *)((a4 + 0x1C))) != 0) && (t0 = (((struct o118_int *)(a4))->v), u0 = *(float *)0xC09C978, u1 = (((struct o8C_float *)(t0))->v), u1 > u0)) {
        FUN_0c07d030(a4, 0x1);
        t0 = 0x0;
        for (;;) {
            FUN_0c12e584(a4, t0);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        FUN_0c059e60(a4, 0x21);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    FUN_0c038362(a4);
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c09ce70(int a4)
{
    register int t2;
    register int t10;
    register float u4;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c037bf6(a4);
    t10 = (unsigned char)t2;
    if ((unsigned char)t2 != 0) {
        u4 = (((struct o1C_float *)0xC09CF68)->v);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u4);
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u4);
        (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC09CF68)->v));
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t10 = 0x17;
    }
    return t10;
}

int FUN_0c09d630(int a4)
{
    register int t2;
    register int t10;
    register float u4;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c037bf6(a4);
    t10 = (unsigned char)t2;
    if ((unsigned char)t2 != 0) {
        u4 = (((struct o0_float *)0xC09D730)->v);
        (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u4);
        (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * u4);
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC09D730)->v));
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t10 = 0x17;
    }
    return t10;
}

int FUN_0c09dc08(int a4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if (((*(short *)((a4 + 0x1C))) != 0) && (t0 = (((struct o118_int *)(a4))->v), u0 = *(float *)0xC09DCFC, u1 = (((struct o8C_float *)(t0))->v), u1 > u0)) {
        FUN_0c07d030(a4, 0x1);
        t0 = 0x0;
        for (;;) {
            FUN_0c12e584(a4, t0);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0xA) {
                break;
            }
        }
        FUN_0c059e60(a4, 0x21);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    FUN_0c038362(a4);
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c0a203c(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = *(signed char *)((a4 + 0x1));
            t0 = (FUN_0c07e79c(a4, t1, 0x0, 0xA, (t1), 0x0, 0xA));
        }
    }
    return t0;
}

int FUN_0c0a22e8(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = *(signed char *)((a4 + 0x1));
            t0 = (FUN_0c07e79c(a4, t1, 0x0, 0xA, (t1), 0x0, 0xA));
        }
    }
    return t0;
}

int FUN_0c09dd1c(int a4)
{
    int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t2 != 0)) {
        FUN_0c07daea(a4);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o375A_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return 0x50;
}

int FUN_0c078b96(int a4)
{
    register int t0;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 0) {
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return FUN_0c037bf6(a4);
}

int FUN_0c078dea(int a4)
{
    register int t0;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 0) {
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return FUN_0c037bf6(a4);
}

int FUN_0c097450(int a4)
{
    register int t4;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t4 != 0) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t4;
}

int FUN_0c0a2192(int a4)
{
    register int t13;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    if ((*(short *)((a4 + 0x1C))) == 19) {
        FUN_0c059e60(a4, 0xB);
    }
    if ((*(short *)((a4 + 0x1C))) == 32) {
        FUN_0c07d030(a4, 0x1);
    }
    FUN_0c037bf6(a4);
    FUN_0c038362(a4);
    t13 = *(short *)((a4 + 0x1C));
    if ((int)t13 > (int)0x50) {
        (((struct o375A_uchar *)(a4))->v) = 0x0;
        return FUN_0c085d0c(a4);
    }
    return t13;
}

int FUN_0c0acfa0(int a4)
{
    register int t4;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c037bf6(a4);
    t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t4 != 0) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t4;
}

int FUN_0c0783ce(int a4)
{
    register int t0;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 0) {
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c09d30c(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09ca20(a4, 0x0);
    if (t0 == 0) {
        t1 = FUN_0c037bf6(a4);
        if ((unsigned char)t1 != 0) {
            FUN_0c080320(a4, 1.0f);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return 0x17;
        }
        return FUN_0c038362(a4);
    }
    return t0;
}

int FUN_0c09cf9e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c09ca20(a4, 0x0);
    if (t0 == 0) {
        t1 = FUN_0c037bf6(a4);
        if ((unsigned char)t1 != 0) {
            FUN_0c080320(a4, 1.0f);
            (((struct o17_uchar *)(a4))->v) = 0x5;
            return 0x17;
        }
        return FUN_0c038362(a4);
    }
    return t0;
}

int FUN_0c09dcc4(int a4)
{
    register int t1;
    register int t3;

    FUN_0c038362(a4);
    t1 = FUN_0c037bf6(a4);
    t3 = (unsigned char)t1;
    if ((unsigned char)t1 != 0) {
        (((struct o50_float *)(a4))->v) = -1.0f;
        (((struct o5C_float *)(a4))->v) = -1.20000005f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t3 = 0x17;
    }
    return t3;
}

int FUN_0c0e7fbc(int a4, int a5, int a6, int a7)
{
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    return FUN_0c0e79f4(a4, 0x1, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c09c936(int a4)
{
    register int t1;
    register int t3;

    FUN_0c038362(a4);
    t1 = FUN_0c037bf6(a4);
    t3 = (unsigned char)t1;
    if ((unsigned char)t1 != 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t3 = 0x17;
    }
    return t3;
}

int FUN_0c0d17d4(int a4, int a5, int a6, int a7)
{
    return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7);
}

int FUN_0c0cf1e4(int a4, int a5, int a6, int a7)
{
    return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))), a7);
}

int FUN_0c149d70(int a4, int a5, int a6, int a7)
{
    return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7);
}
