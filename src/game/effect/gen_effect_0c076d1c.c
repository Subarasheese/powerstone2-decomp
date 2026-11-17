/* game/effect: functions 0C076D1C-0C077024, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c085cac(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c076d1c(int a4);
int FUN_0c076df4(int a4);
int FUN_0c076f1c(int a4);
int FUN_0c076fd2(int a4);
int FUN_0c076ff8(int a4, int a5, int a6, int a7);

int FUN_0c076d1c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c07ebd0(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
        t2 = FUN_0c07eaf4(a4);
        t3 = *(int *)((a4 + 0x38));
        t4 = (unsigned short)((unsigned short)(t0 + t2) - t3);
        if ((0x8000 & (unsigned short)((unsigned short)(t0 + t2) - t3)) != 0) {
            t4 = ((unsigned short)((unsigned short)(t0 + t2) - t3) | 0xFFFF0000);
        }
        if ((int)t4 <= (int)0xFFFFE000) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x2000);
        } else {
            if ((int)t4 >= (int)0x2000) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x2000);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1));
            }
        }
        t0 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (t0 & 0xFFFF);
        u0 = *(float *)0xC076EF4;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t0 & 0xFFFF))) * u0);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
        t1 = 0x54;
    }
    return t1;
}

int FUN_0c076df4(int a4)
{
    int t0;
    register int t1;

    t1 = FUN_0c037bf6(a4);
    if (((unsigned char)t1 != 0) && (t0 = *(short *)((a4 + 0x1C)), t0 == 0)) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x53, 0xFFFFFFFF, 0x4, 0x53);
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    }
    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    (((struct o50_float *)(a4))->v) = 15.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4B, 0xFFFFFFFF, 0x4, 0x4B);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    FUN_0c076d1c(a4);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c076f1c(int a4)
{
    register int t0;

    FUN_0c037bf6(a4);
    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) <= (int)0x1) {
        (((struct o50_float *)(a4))->v) = (((-((float)(*(short *)((a4 + 0x1C))) * ((((struct o0_float *)0xC077030)->v))))) + ((((struct o4_float *)0xC077030)->v)));
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4B, 0xFFFFFFFF, 0x4, 0x4B);
        FUN_0c076d1c(a4);
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c076fd2(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085cac(a4, 0xE, (*(signed char *)((a4 + 0x372C))));
    }
    return (unsigned char)t0;
}

int FUN_0c076ff8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c076fd2(a4);
            }
            return FUN_0c076f1c(a4);
        }
        return FUN_0c076df4(a4);
    }
    return ((int (*)(int, int, int, int))(0xC076C3C))(a4, a5, a6, a7);
}
