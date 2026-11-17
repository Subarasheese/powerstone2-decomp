/* game/player: functions 0C0720B4-0C072C34, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c05261c(int);
int FUN_0c059df2(int, int);
int FUN_0c07043c(int, int, int, float, float, float, float);
int FUN_0c07053a(int, int, float);
int FUN_0c084a9e(int);
int FUN_0c072672(int);
int FUN_0c072782(int);
int FUN_0c072a7c(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d1fc(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07db58(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085204(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c22e6(int, int);
int FUN_0c0c30a8(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0720b4(int a4);
int FUN_0c0720f8(int a4);
int FUN_0c072260(int a4);
int FUN_0c072504(int a4);
int FUN_0c0725bc(int a4);
int FUN_0c0725fa(int a4);
int FUN_0c07262e(int a4);
int FUN_0c0727da(int a4);
int FUN_0c07283a(int a4);
int FUN_0c07285e(int a4);
int FUN_0c072950(int a4);
int FUN_0c072b7e(int a4);
int FUN_0c072bd4(int a4);

int FUN_0c0720b4(int a4)
{
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1F, 0xFFFFFFFF, 0x2, 0x1F);
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    return FUN_0c085204(a4, (*(float *)0xC0721E8));
}

int FUN_0c0720f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
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
        t0 = *(signed char *)((a4 + 0x2));
        t3 = t2;
        t4 = (0x118 + a4);
        u0 = 35.0f;
        u1 = -3.5f;
        u2 = 500.0f;
        if (t0 != 3) {
            t3 = t2;
            t4 = (0x118 + a4);
            u3 = 45.0f;
            u4 = -2.79999995f;
            u5 = 500.0f;
            if (t0 != 5) {
                if (t0 != 7) {
                    if (t0 != 4) {
                        if (t0 != 9) {
                            u6 = 35.0f;
                            u7 = ((((struct o8_float *)0xC072334)->v));
                            u8 = 500.0f;
                        } else {
                            u6 = ((((struct o4_float *)0xC072334)->v));
                            u7 = -2.79999995f;
                            u8 = ((((struct o0_float *)0xC072334)->v));
                        }
                        u9 = u6;
                        u6 = u7;
                        u7 = u8;
                    } else {
                        u9 = ((((struct o4_float *)0xC072334)->v));
                        u6 = -2.79999995f;
                        u7 = ((((struct o0_float *)0xC072334)->v));
                    }
                    t0 = t2;
                    t2 = (0x118 + a4);
                    u8 = u9;
                    u9 = u6;
                    u6 = u7;
                } else {
                    FUN_0c07e2f4(a4, 0x17);
                    u8 = 35.0f;
                    u9 = -3.5f;
                    u6 = 500.0f;
                }
                t3 = t0;
                t4 = t2;
                u3 = u8;
                u4 = u9;
                u5 = u6;
            }
            u0 = u3;
            u1 = u4;
            u2 = u5;
        }
        FUN_0c07043c(a4, t3, t4, u0, u1, u2, 1.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c072260(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o17C_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    if (((((struct o50_float *)(a4))->v)) > 0.0f) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    if (t0 != 1) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 4) {
        FUN_0c07db58(a4);
        FUN_0c05261c((*(int *)0xC241C20));
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x2, 0xC, (t1), 0x2, 0xC);
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
        (((struct o16_uchar *)(a4))->v) = 0x3;
        return 0x16;
    }
    if (t0 == 9) {
        FUN_0c07db58(a4);
        FUN_0c05261c((*(int *)0xC241C20));
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
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
        (((struct o16_uchar *)(a4))->v) = 0x4;
        return 0x16;
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            if ((*(signed char *)((a4 + 0x2))) == 7) {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x1, 0x7, (t0), 0x1, 0x7);
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
                (((struct o16_uchar *)(a4))->v) = 0x3;
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 7) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    if (t0 != 2) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
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
    (((struct o446_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x23;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c072504(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)((a4 + 0x1C));
    if (((int)(short)t0 < (int)0x14) && ((short)t0 != 0)) {
        t0 = FUN_0c07d774(a4);
        t1 = *(int *)((a4 + 0x38));
        t2 = *(short *)((a4 + 0x1C));
        t3 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t3 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)t2)));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0725bc(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) - 1);
        t0 = *(signed char *)((a4 + 0x1));
        t1 = (FUN_0c07e79c(a4, t0, 0x2, 0x5, (t0), 0x2, 0x5));
    }
    return t1;
}

int FUN_0c0725fa(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0725bc(a4);
                }
                return FUN_0c084a9e(a4);
            }
            return FUN_0c072504(a4);
        }
        return FUN_0c072260(a4);
    }
    return FUN_0c0720f8(a4);
}

int FUN_0c07262e(int a4)
{
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x0, 0xFFFFFFFF, 0x2, 0x0);
    FUN_0c0c22e6(a4, 0xC8);
    (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}

int FUN_0c0727da(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c07283a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0727da(a4);
        }
        return FUN_0c072782(a4);
    }
    return FUN_0c072672(a4);
}

int FUN_0c07285e(int a4)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x2));
    if ((t1 != 6) && ((t1 != 7) && ((t1 == 4) || ((t1 == 5) || ((t1 == 9) || ((t1 == 15) || (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0))))))) {
        return FUN_0c07262e(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t0 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x1E, 0xFFFFFFFF, 0x2, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    return 0x14;
}

int FUN_0c072950(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)(((((struct o3850_short *)(a4))->v)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 33.0f);
        if ((*(signed char *)((a4 + 0x2))) == 7) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0xA, (t0), 0x2, 0xA);
            FUN_0c07e2f4(a4, 0x16);
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x9, (t0), 0x2, 0x9);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c072b7e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c072bd4(int a4)
{
    register int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x2));
    if ((t1 != 6) && ((t1 != 7) && ((t1 == 4) || ((t1 == 5) || ((t1 == 9) || ((t1 == 15) || (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0))))))) {
        return FUN_0c07283a(a4);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c072b7e(a4);
        }
        return FUN_0c072a7c(a4);
    }
    return FUN_0c072950(a4);
}
