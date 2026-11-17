/* game/effect: functions 0C122714-0C1235F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int thunk_FUN_0c058310(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c122714(int a4);
int FUN_0c122826(int a4, int a5, int a6, int a7);
int FUN_0c122d34(int a4, int a5, int a6);
int FUN_0c122ef4(int a4);
int FUN_0c122fec(int a4, int a5, int a6, int a7);

int FUN_0c122714(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o0_float *)0xC122848)->v);
    u1 = (((struct o4_float *)0xC122848)->v);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0x24);
    (((struct o78_uint *)(a4))->v) = (int)(((float)(((t0 << 2) + t0) << 1) * u0) / u1);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0x24);
    (((struct o7C_uint *)(a4))->v) = (int)(((float)(((t0 << 2) + t0) << 1) * u0) / u1);
    (((struct o80_uint *)(a4))->v) = 0x0;
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0xC8);
    u0 = (((struct o10_float *)0xC122848)->v);
    u1 = math_sin_angle16(((((struct o7C_int *)(a4))->v)));
    u2 = (u1 * (math_cos_angle16(((((struct o78_int *)(a4))->v)))));
    u1 = (u2 * ((float)t0 + u0));
    u1 = -u1;
    (((struct o6C_float *)(a4))->v) = u1;
    u1 = math_cos_angle16(((((struct o7C_int *)(a4))->v)));
    u2 = (u1 * (math_cos_angle16(((((struct o78_int *)(a4))->v)))));
    u1 = (u2 * ((float)t0 + u0));
    u1 = -u1;
    (((struct o74_float *)(a4))->v) = u1;
    (((struct o70_float *)(a4))->v) = ((math_sin_angle16(((((struct o78_int *)(a4))->v)))) * ((float)t0 + u0));
    *(unsigned char *)((a4 + 0x2)) = (((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 0xA);
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    return 0x8C;
}

int FUN_0c122826(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 5) {
            return t2;
        }
        return ((int (*)(int, int, int, int))(0xC122820))(a4, a5, a6, a7);
    }
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (a4 + 0x28));
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t6 = *(int *)((((0xC4 + a4) + t4) + 0x0));
        t7 = *(signed char *)((t6 + 0x2));
        *(unsigned char *)((t6 + 0x2)) = (t7 - 1);
        if ((int)(signed char)(t7 - 1) < 0) {
            t2 = 0xC4;
            t2 = (t2 + a4);
            t2 = (t2 + t3);
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c122714(t2);
        } else {
            u2 = u0;
            u3 = u1;
        }
        u0 = u2;
        u1 = u3;
        t2 = 0xC4;
        t2 = (t2 + a4);
        t2 = (t2 + t5);
        t2 = (*(int *)((t2 + 0x0)));
        u0 = ((((struct o6C_float *)(t2))->v));
        u1 = (float)(*(signed char *)((t2 + 0x2)));
        t6 = (0x6C + t2);
        t2 = 0xC4;
        t2 = (t2 + a4);
        t2 = (t2 + t5);
        u0 = (u0 / u1);
        u1 = (*(float *)((t6 + 0x0)));
        u1 = (u1 - u0);
        *(float *)((t6 + 0x0)) = u1;
        t2 = (*(int *)((t2 + 0x0)));
        u0 = ((((struct o74_float *)(t2))->v));
        u1 = (float)(*(signed char *)((t2 + 0x2)));
        u0 = (u0 / u1);
        u1 = ((((struct o74_float *)(t2))->v));
        u1 = (u1 - u0);
        (((struct o74_float *)(t2))->v) = u1;
        t2 = 0xC4;
        t4 = (t4 + 0x4);
        t2 = (t2 + a4);
        t2 = (t2 + t5);
        t2 = (*(int *)((t2 + 0x0)));
        t5 = (t5 + 0x4);
        u0 = ((((struct o70_float *)(t2))->v));
        u1 = (float)(*(signed char *)((t2 + 0x2)));
        u0 = (u0 / u1);
        u1 = ((((struct o70_float *)(t2))->v));
        u1 = (u1 - u0);
        (((struct o70_float *)(t2))->v) = u1;
        t3 = (t3 + 0x4);
        if ((unsigned int)t4 >= (unsigned int)0x28) {
            break;
        }
    }
    t2 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
    if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x5;
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c122d34(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register float u7;
    register float u18;
    register float u19;
    register float u23;
    register float u24;
    register float u28;
    register float u29;
    register int t31;
    register int t38;
    register float u40;
    register float u41;
    register int t42;
    register int t56;
    register float u66;
    register float u74;
    register int t91;
    register float u101;
    register float u109;
    register int t115;
    int t63;
    register int t64;
    int t98;
    register int t99;

    t0 = *(int *)((a4 + 0x10));
    *(volatile signed char *)((t0 + 0x1));
    FUN_0c187798(a4, a5, a6);
    *(float *)((((int)stk + 0) + 0x0)) = ((((struct o28_float *)(t0))->v));
    (((struct o8_float *)(((int)stk + 0)))->v) = ((((struct o30_float *)(t0))->v));
    u7 = ((((struct o2C_float *)(t0))->v));
    u7 = u7 + 110.0f * ((((struct o378C_float *)(t0))->v));
    (((struct o4_float *)(((int)stk + 0)))->v) = u7;
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)((((int)stk + 0) + 0x0))));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)(((int)stk + 0)))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o8_float *)(((int)stk + 0)))->v)));
    FUN_0c17c4d0((((int)stk + 0) + 0xC));
    u18 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t0))->v)));
    u19 = (*(float *)((((int)stk + 0) + 0x0)));
    u19 = u19 + 50.0f * u18;
    (((struct o28_float *)(a4))->v) = u19;
    u23 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t0))->v)));
    u24 = ((((struct o8_float *)(((int)stk + 0)))->v));
    u24 = u24 + 50.0f * u23;
    (((struct o30_float *)(a4))->v) = u24;
    u28 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t0))->v)));
    u29 = ((((struct o4_float *)(((int)stk + 0)))->v));
    u29 = u29 + 50.0f * u28;
    (((struct o2C_float *)(a4))->v) = u29;
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t31 = *(signed char *)((a4 + 0x14));
    if (t31 != 0) {
        if (t31 != 1) {
            if (t31 != 2) {
                t115 = t31;
                if (t31 != 3) {
                } else {
                    t115 = (FUN_0c03f346(a4));
                }
            } else {
                t38 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t38))->v) = (((((struct o84_float *)(t38))->v)) * 1.01999998f);
                u40 = (((struct o84_float *)(t38))->v);
                (((struct o8C_float *)(t38))->v) = u40;
                (((struct o88_float *)(t38))->v) = u40;
                u41 = (((struct o18_float *)(t38))->v);
                (((struct o18_float *)(t38))->v) = (u41 * 0.800000012f);
                (((struct o1C_float *)(t38))->v) = (u41 * 0.800000012f);
                (((struct o20_float *)(t38))->v) = (u41 * 0.800000012f);
                t42 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t42 - 1);
                t115 = (short)(t42 - 1);
                if ((int)(short)(t42 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t115 = 0x14;
                }
            }
        } else {
            t56 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t56))->v) = (((((struct o84_float *)(t56))->v)) + 0.25f);
            if (((((struct o84_float *)(t56))->v)) > 1.0f) {
                if (((int)(*(short *)((a4 + 0x1C))) > 0) && (t63 = *(int *)((a4 + 0x10)), t64 = *(signed char *)((0x3715 + t63)), t64 == 26)) {
                    (((struct o84_float *)(t56))->v) = (*(float *)0xC122FB4);
                    u66 = (((struct o84_float *)(t56))->v);
                    (((struct o8C_float *)(t56))->v) = u66;
                    (((struct o88_float *)(t56))->v) = u66;
                    t115 = 0x88;
                } else {
                    *(unsigned short *)((t56 + 0x6)) = ((*(short *)((t56 + 0x6))) | 0x200);
                    (((struct o20_float *)(t56))->v) = 1.0f;
                    (((struct o1C_float *)(t56))->v) = 1.0f;
                    (((struct o18_float *)(t56))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t115 = 0x14;
                }
            } else {
                u74 = (((struct o84_float *)(t56))->v);
                (((struct o8C_float *)(t56))->v) = u74;
                (((struct o88_float *)(t56))->v) = u74;
                t115 = 0x88;
            }
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t91 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t91))->v) = (((((struct o84_float *)(t91))->v)) + 0.25f);
        if (((((struct o84_float *)(t91))->v)) > 1.0f) {
            if (((int)(*(short *)((a4 + 0x1C))) > 0) && (t98 = *(int *)((a4 + 0x10)), t99 = *(signed char *)((0x3715 + t98)), t99 == 26)) {
                (((struct o84_float *)(t91))->v) = (*(float *)0xC122FB4);
                u101 = (((struct o84_float *)(t91))->v);
                (((struct o8C_float *)(t91))->v) = u101;
                (((struct o88_float *)(t91))->v) = u101;
                t115 = 0x88;
            } else {
                *(unsigned short *)((t91 + 0x6)) = ((*(short *)((t91 + 0x6))) | 0x200);
                (((struct o20_float *)(t91))->v) = 1.0f;
                (((struct o1C_float *)(t91))->v) = 1.0f;
                (((struct o18_float *)(t91))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t115 = 0x14;
            }
        } else {
            u109 = (((struct o84_float *)(t91))->v);
            (((struct o8C_float *)(t91))->v) = u109;
            (((struct o88_float *)(t91))->v) = u109;
            t115 = 0x88;
        }
    }
    return t115;
}

int FUN_0c122ef4(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t4 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t4))->v) = (((((struct o7C_int *)(t4))->v)) + ((int)((int)(FUN_0c179ac0()) % (int)0x64)));
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 != 1) {
            if (t5 != 2) {
                return t5;
            }
            return FUN_0c03f346(a4);
        }
        (((struct o84_float *)(t4))->v) = (((((struct o84_float *)(t4))->v)) + 0.100000001f);
        (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.100000001f);
        if (((((struct o84_float *)(t4))->v)) > 0.5f) {
            u0 = (((struct o18_float *)(t4))->v);
            (((struct o18_float *)(t4))->v) = (u0 * 0.699999988f);
            (((struct o20_float *)(t4))->v) = (u0 * 0.699999988f);
            (((struct o1C_float *)(t4))->v) = (u0 * 0.699999988f);
            if (0.100000001f > ((((struct o18_float *)(t4))->v))) {
                (((struct o18_float *)(t4))->v) = 1.0f;
                (((struct o20_float *)(t4))->v) = 1.0f;
                (((struct o1C_float *)(t4))->v) = 1.0f;
                (((struct o8C_float *)(t4))->v) = 0.100000001f;
                (((struct o84_float *)(t4))->v) = 0.100000001f;
            }
        }
        t5 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
        if (((int)(short)(t5 - 1) > 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
            t0 = t1;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        }
        return t0;
    }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o84_float *)(t4))->v) = (((((struct o84_float *)(t4))->v)) + 0.100000001f);
    (((struct o8C_float *)(t4))->v) = (((((struct o8C_float *)(t4))->v)) + 0.100000001f);
    if (((((struct o84_float *)(t4))->v)) > 0.5f) {
        u0 = (((struct o18_float *)(t4))->v);
        (((struct o18_float *)(t4))->v) = (u0 * 0.699999988f);
        (((struct o20_float *)(t4))->v) = (u0 * 0.699999988f);
        (((struct o1C_float *)(t4))->v) = (u0 * 0.699999988f);
        if (0.100000001f > ((((struct o18_float *)(t4))->v))) {
            (((struct o18_float *)(t4))->v) = 1.0f;
            (((struct o20_float *)(t4))->v) = 1.0f;
            (((struct o1C_float *)(t4))->v) = 1.0f;
            (((struct o8C_float *)(t4))->v) = 0.100000001f;
            (((struct o84_float *)(t4))->v) = 0.100000001f;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if (((int)(short)(t0 - 1) > 0) && (t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((0x3715 + t2)), t3 == 26)) {
        t0 = t3;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c122fec(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 4) {
            if (t0 != 5) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC122820))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC1227FE))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC122960))(a4, a5, a6, a7);
}
