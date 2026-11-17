/* game/hit: functions 0C077048-0C07763A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o3744_uchar { char p[0x3744]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07d6cc(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c150be8(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c077048(int a4);
int FUN_0c0770fc(int a4);
int FUN_0c077206(int a4);
int FUN_0c0772d0(int a4);
int FUN_0c0775fe(int a4, int a5, int a6, int a7);

float FUN_0c077048(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c07d6cc(a4);
    *(unsigned int *)((a4 + 0x38)) = t0;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4A, 0xFFFFFFFF, 0x4, 0x4A);
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
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC077124)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC077124)->v));
    u0 = (((struct o8_float *)0xC077124)->v);
    u1 = (((struct oC_float *)0xC077124)->v);
    (((struct o4C_float *)(a4))->v) = (((math_sin_angle16((unsigned short)(t0 + 0x8000))) * u0) / u1);
    u2 = math_cos_angle16((unsigned short)(t0 + 0x8000));
    (((struct o54_float *)(a4))->v) = ((u2 * u0) / u1);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return ((u2 * u0) / u1);
}

int FUN_0c0770fc(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            return FUN_0c037bf6(a4);
        }
        return FUN_0c07a6aa(a4);
    }
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    if ((*(signed char *)((a4 + 0x135))) != 2) {
        FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4D, 0xFFFFFFFF, 0x4, 0x4D);
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
    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
    (((struct o3744_uchar *)(a4))->v) = 0x1E;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c077206(int a4)
{
    register int t1;
    register int t8;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    t8 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4E, 0xFFFFFFFF, 0x4, 0x4E);
        (((struct o50_float *)(a4))->v) = 12.3000002f;
        (((struct o5C_float *)(a4))->v) = -0.939999998f;
        (((struct o4C_float *)(a4))->v) = (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 200.0f) / 26.0f);
        (((struct o54_float *)(a4))->v) = (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 200.0f) / 26.0f);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x6;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t8 = 0x16;
    }
    return t8;
}

int FUN_0c0772d0(int a4)
{
    register int t0;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        FUN_0c037bf6(a4);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        return (t0 - 1);
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return FUN_0c037bf6(a4);
}

int FUN_0c0775fe(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) > 0) && (t0 = *(signed char *)((a4 + 0x130)), t0 != 0)) {
        return 0x130;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0775D8))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0775A0))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC07746C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC077398))(a4, a5, a6, a7);
}
