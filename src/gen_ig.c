/* Straight-line functions with calls and guards (batch gen_ig): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
extern int FUN_0c085cac();
extern int FUN_0c085d0c();
int FUN_0c104cc8(int);
int FUN_0c1086d8(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e28e(int);
int FUN_0c11eae8(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
float math_interval_overlap(float, float, float, float);
int math_vec3_accumulate(int, int);
int FUN_0c122d34(int a4, int a5, int a6);
int FUN_0c0630cc(int a4, int a5, int a6);
int FUN_0c091bd0(int a4, int a5, int a6, int a7);
int FUN_0c10b9d6(int a4, int a5, int a6, int a7);

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

int FUN_0c0630cc(int a4, int a5, int a6)
{
    int stk[6];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register int t150;
    register int t22;
    register float u61;
    register float u98;
    register float u20;
    float u21;
    register float u62;
    register float u63;
    float u99;
    register float u112;
    register float u118;
    register float u129;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (((struct oC_float *)((a4 + 0x8)))->v);
    u5 = (u1 - u2);
    if (0.0f > (u1 - u2)) {
        u5 = ((-u1) + u2);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u4 + u3) - u5);
    u7 = (((struct oC_float *)((a6 + 0x8)))->v);
    u8 = (((struct o14_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a4 + 0x8)))->v);
    u10 = (((struct o8_float *)((a6 + 0x8)))->v);
    u12 = (u9 - u10);
    if (0.0f > (u9 - u10)) {
        u12 = ((-u9) + u10);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u8 + u7) - u12);
    u14 = (((struct o4_float *)((a6 + 0x8)))->v);
    u15 = (((struct o10_float *)((a6 + 0x8)))->v);
    u16 = (((struct o4_float *)((a4 + 0x8)))->v);
    u17 = (((struct o10_float *)((a4 + 0x8)))->v);
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = (math_interval_overlap((u16 + u17), (u16 - u17), (u14 + u15), (u14 - u15)));
    t150 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u20 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u20 > 0.0f) && (u21 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u21 > 0.0f))) {
        t22 = FUN_0c0612ee(a5);
        if (t22 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t150 = 0x2;
        } else {
            u61 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u61 > 9.0f) && ((u62 = (((struct oC_float *)(((int)stk + 0)))->v), u61 > u62) || (u63 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u61 > u63))) {
                u98 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u98 > u61) && (u99 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u98 > u99))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u112 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u112 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u112;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u118 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u118 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u118;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u129 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u129 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = u129;
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t150 = 0x1;
        }
    }
    return t150;
}

int FUN_0c091bd0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t1 = *(signed char *)((a4 + 0x18));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 == 4) {
                        t2 = FUN_0c037bf6(a4);
                        if ((unsigned char)t2 != 0) {
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                        }
                        FUN_0c038362(a4);
                        t2 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                        if (t2 != 2) {
                            return ((int (*)(int, int, int))(FUN_0c085cac))(a4, 0xE, 0x1);
                        }
                        return t2;
                    }
                    if (t1 == 5) {
                        t1 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                        if (t1 != 2) {
                            return ((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0xE, 0x1, a7);
                        }
                        return t1;
                    }
                    t1 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                    if (t1 != 2) {
                        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
                    }
                    return t1;
                }
                FUN_0c037bf6(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if ((t1 == 0) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u1 = (((struct o2C_float *)(a4))->v), !(u0 > u1))) {
                } else {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x34, 0xFFFFFFFF, 0x4, 0x34);
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
                    FUN_0c07db58(a4, t1, t0);
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                }
                t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
                if (t0 != 2) {
                    return ((int (*)(int))(FUN_0c085d0c))(a4);
                }
                return t0;
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o20_short *)(a4))->v)) == 0) {
                (((struct o50_float *)(a4))->v) = -30.0f;
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            }
            t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
            if (t0 != 2) {
                return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
            }
            return t0;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        FUN_0c037bf6(a4);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) < (int)0x1A) {
        } else {
            (((struct o50_float *)(a4))->v) = -30.0f;
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x2;
        }
        t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
        if (t0 != 2) {
            return ((int (*)(int))(FUN_0c085d0c))(a4);
        }
        return t0;
    }
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 14.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
    t0 = *(signed char *)((0x14 + ((((struct o3770_int *)(a4))->v))));
    if (t0 != 2) {
        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
    }
    return t0;
}

int FUN_0c10b9d6(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t7;
    register int t9;
    register int t17;
    register int t20;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t2 + 0x1);
            t4 = 0x20;
            if ((int)(short)(t2 + 0x1) > (int)0xA) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t4 = 0x16;
            }
            return t4;
        }
        if (t0 == 2) {
            t7 = FUN_0c117d54();
            if ((int)t7 < 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return FUN_0c117e76();
            }
            return t7;
        }
        if (t0 == 3) {
            t9 = FUN_0c104cc8(0x3FCF);
            if (t9 != 0) {
                FUN_0c11e28e((*(short *)((a4 + 0x1E))));
                return ((int (*)(int, int, int, int))(0xC10B776))(a4, a5, a6, a7);
            }
            return t9;
        }
        return t0;
    }
    if ((*(signed char *)0xC535BAD) == 1) {
        FUN_0c115120(0x5, a5, a6, a7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
    }
    (((struct o20_ushort *)(a4))->v) = 0x0;
    t17 = *(short *)((a4 + 0x1E));
    if ((unsigned int)(t17 - 0xA0) < (unsigned int)0x16) {
        switch (((t17 - 0xA0) << 1)) {
            case 0:
            case 2:
            case 4:
            case 6:
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            {
                t20 = *(int *)((((0xFFFFFF60 + (*(short *)((a4 + 0x1E)))) << 2) + 0xC2A08E0));
                *(unsigned int *)(((t20 << 2) + 0xC473D04)) = ((*(int *)(((t20 << 2) + 0xC473D04))) | 0x2000);
                *(int *)((int)stk + 4) = ((*(int *)((((*(int *)((0xC2A08E0 + (((*(short *)((a4 + 0x1E))) - 160) << 2)))) << 2) + 0xC29DDD0))));
                *(int *)((int)stk + 0) = 0x7A;
                FUN_0c117944(0x7A);
            }
                break;
            case 20:
            {
                *(int *)((int)stk + 4) = 0x7B;
                FUN_0c117944(0x7B);
            }
                break;
            case 22:
            {
                *(int *)((int)stk + 4) = 0x7B;
                FUN_0c117944(0x7B);
            }
                break;
            case 24:
            {
                *(int *)((int)stk + 4) = 0x7C;
                FUN_0c117944(0x7C);
            }
                break;
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                *(int *)((int)stk + 4) = 0x7D;
                FUN_0c117944(0x7D);
            }
                break;
            case 36:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                *(int *)((int)stk + 4) = 0x7E;
                FUN_0c117944(0x7E);
            }
                break;
            case 38:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                *(int *)((int)stk + 4) = 0x80;
                FUN_0c117944(0x80);
            }
                break;
            case 40:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                *(int *)((int)stk + 4) = 0x7F;
                FUN_0c117944(0x7F);
            }
                break;
            default:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                *(int *)((int)stk + 4) = 0x81;
                FUN_0c117944(0x81);
            }
                break;
        }
    } else {
        *(int *)((int)stk + 4) = 0x7B;
        FUN_0c117944(0x7B);
    }
    FUN_0c1086d8((*(int *)0xC47440C));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
