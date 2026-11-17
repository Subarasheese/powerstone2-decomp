/* game/unsorted: functions 0C071E40-0C07218E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c064f80(int);
int FUN_0c07da48(int);
int FUN_0c07e3fc(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0cb448(int, int, int, int, int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c071e40(int a4);
int FUN_0c071f38(int a4);
int FUN_0c071fd8(int a4);
int FUN_0c072038(int a4);
int FUN_0c072070(int a4);

int FUN_0c071e40(int a4)
{
    int stk[6];
    register int t0;
    register int t11;
    register int t13;
    register int t26;

    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        *(int *)((int)stk + 8) = 0xB2;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB2, 0xFFFFFFFF, 0x3, 0xB2);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o0_float *)0xC071F68)->v));
        FUN_0c07e3fc(a4, 0x6);
        t26 = 0x15;
    } else {
        if ((unsigned short)((((struct o3818_short *)(a4))->v)) != 0x39F) {
            *(int *)((int)stk + 8) = 0x9F;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9F, 0xFFFFFFFF, 0x3, 0x9F);
        }
        t11 = *(signed char *)((a4 + 0x2));
        t13 = *(signed char *)(((0x371C + a4) + 0x0));
        (((struct o3790_float *)(a4))->v) = (((((struct o40_float *)(((((((t13 << 1) + t13) << 2) << 2) << 1) + (0xC259E54 + (((((t11 << 1) + t11) << 2) << 2) << 2)))))->v)) * ((((struct oC_float *)0xC071F68)->v)));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = ((((struct o18_float *)0xC071F68)->v));
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        FUN_0c0cb448(a4, 0x3, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
        t26 = 0x131;
    }
    *(unsigned char *)((a4 + t26)) = 0x0;
    return t26;
}

int FUN_0c071f38(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c07da48(a4);
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC0720A0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c071fd8(int a4)
{
    register int t1;

    FUN_0c037bf6(a4);
    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t1 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xA0, 0xFFFFFFFF, 0x3, 0xA0);
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c072038(int a4)
{
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c037bf6(a4);
    if ((unsigned char)t2 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t2;
}

int FUN_0c072070(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c072038(a4);
        }
        return FUN_0c071fd8(a4);
    }
    return FUN_0c071f38(a4);
}
