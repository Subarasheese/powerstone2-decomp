/* game/player: functions 0C06D13C-0C06E974, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3820_ushort { char p[0x3820]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c06d13c(int);
int FUN_0c06e718(int);
int FUN_0c07d6cc(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07ebb0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06d1fe(int a4);
int FUN_0c06d27c(int a4);
int FUN_0c06d2a2(int a4);
int FUN_0c06d334(int a4);
int FUN_0c06d37c(int a4, int a5, int a6, int a7);
int FUN_0c06d540(int a4);
int FUN_0c06d850(int a4);
int FUN_0c06d950(int a4);
int FUN_0c06dc74(int a4);
int FUN_0c06e53c(int a4);
int FUN_0c06e688(int a4, int a5, int a6, int a7);
int FUN_0c06e6f2(int a4);
int FUN_0c06e7a6(int a4);
int FUN_0c06e872(int a4);

int FUN_0c06d1fe(int a4)
{
    register int t3;
    register int t6;

    FUN_0c07da48(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    FUN_0c07ebb0(a4);
    t3 = FUN_0c037bf6(a4);
    t6 = (unsigned char)t3;
    if ((unsigned char)t3 != 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x3D, 0xFFFFFFFF, 0x4, 0x3D);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t6 = 0x17;
    }
    return t6;
}

int FUN_0c06d27c(int a4)
{
    FUN_0c07da48(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    FUN_0c07ebb0(a4);
    return FUN_0c037bf6(a4);
}

int FUN_0c06d2a2(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t0 = FUN_0c07d6cc(a4);
        t1 = *(int *)((a4 + 0x38));
        t2 = *(short *)((a4 + 0x1C));
        t3 = (t0 - t1);
        if ((0x8000 & (t0 - t1)) != 0) {
            t3 = ((t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)t2)));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    FUN_0c07da48(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    FUN_0c07ebb0(a4);
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c06d334(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c06d37c(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o3820_ushort *)(a4))->v) = 0x5;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c06d334(a4);
        }
        return ((int (*)(int, int, int, int))(0xC06D310))(a4, a5, a6, a7);
    }
    return FUN_0c06d13c(a4);
}

int FUN_0c06d540(int a4)
{
    register int t1;
    int t2;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if (((short)(t1 - 1) != 0) && (t2 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t2 > 0)) {
        return 0x3744;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06d850(int a4)
{
    register int t1;
    int t2;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if (((short)(t1 - 1) != 0) && (t2 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t2 > 0)) {
        return 0x3744;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06d950(int a4)
{
    register int t1;
    int t2;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if (((short)(t1 - 1) != 0) && (t2 = *(signed char *)((a4 + 0x3744)), (int)(unsigned char)t2 > 0)) {
        return 0x3744;
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c06dc74(int a4)
{
    int stk[3];
    int t0;
    register int t4;
    register int t9;

    t0 = *(signed char *)((a4 + 0x15));
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
            if (t0 != 3) {
                t9 = t0;
                if (t0 != 4) {
                } else {
                    (((struct o3756_uchar *)(a4))->v) = 0x1;
                    t9 = 0x3756;
                }
            } else {
                t4 = FUN_0c037bf6(a4);
                t9 = (unsigned char)t4;
                if ((unsigned char)t4 != 0) {
                    FUN_0c07e868(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t9 = 0x15;
                }
            }
            return t9;
        }
        FUN_0c037bf6(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    return (FUN_0c037bf6(a4));
}

int FUN_0c06e53c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    t2 = FUN_0c037bf6(a4);
    if (((unsigned char)t2 == 0) && ((t0 = *(signed char *)((a4 + 0x2)), t0 != 14) || (t1 = *(short *)((a4 + 0x1C)), (int)t1 <= (int)0x3C))) {
        return FUN_0c038362(a4);
    }
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC06E660);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c06e688(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 3) {
                return t0;
            }
            FUN_0c037bf6(a4);
            return math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        }
        FUN_0c037bf6(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return ((int (*)(int, int, int, int))(0xC06E610))(a4, a5, a6, a7);
    }
    FUN_0c037bf6(a4);
    return FUN_0c07ebb0(a4);
}

int FUN_0c06e6f2(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085cac(a4, 0x7, 0x9);
    }
    return (unsigned char)t0;
}

int FUN_0c06e7a6(int a4)
{
    register int t1;
    register int t3;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
    t3 = (short)(t1 + 0x1);
    if ((int)(short)(t1 + 0x1) >= (int)0xA) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t3 = 0x16;
    }
    return t3;
}

int FUN_0c06e872(int a4)
{
    register int t0;
    register float u0;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x11) && ((int)t0 <= (int)0x3C)) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x5D1);
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + 3.56999993f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(a4))->v) = u0;
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + 3.56999993f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(a4))->v) = u0;
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
    if ((short)(t0 + 0x1) == 8) {
        FUN_0c059e60(a4, 0xD);
    }
    FUN_0c06e718(a4);
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    if ((int)t0 >= (int)0x23) {
        return FUN_0c085d0c(a4);
    }
    return t0;
}
