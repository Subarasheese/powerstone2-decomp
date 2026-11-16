/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e328(int, int);
int FUN_0c0bb70c(int);
int FUN_0c0bb73e(int, float);
int FUN_0c0bb922(int);
int FUN_0c0bc25e(void);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c57e0(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c1171f0(int);
int FUN_0c176b90(int);
int FUN_0c17e0f0(void);
int FUN_0c187798(void);
float math_signed_sqrt(float);
int FUN_0c035e46(int a4, int a5);
int FUN_0c04d484(int a4);
int FUN_0c0be1f4(int a4);
int FUN_0c0c5ade(int a4, int a5, int a6);
int FUN_0c0c2006(int a4, float f4);
int FUN_0c0d5500(int a4);
int FUN_0c0e6aa2(int a4);
int FUN_0c1130c6(int a4, int a5, int a6, int a7);

int FUN_0c035e46(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (FUN_0c176b90(a5));
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(int *)((a4 + 0xC)))) {
            break;
        }
        t3 = a4;
        t3 = (t3 + 0x10);
        t3 = (t3 + (((t2 << 2) << 2) << 1));
        t4 = 0x0;
        t5 = (((t2 << 2) << 2) << 1);
        for (;;) {
            if ((int)t4 >= (int)(*(int *)((t3 + 0x18)))) {
                break;
            }
            t5 = (*(int *)((t3 + 0x1C)));
            t6 = (t4 * 0x3C);
            t5 = (t5 + t6);
            if ((*(int *)((t5 + 0x0))) != 0) {
                t5 = 0xC17E0F0;
                *(volatile int *)((((*(int *)((t3 + 0x1C))) + t6) + 0x0));
                t0 = (FUN_0c17e0f0());
                t1 = (t1 + t0);
            } else {
                t6 = t5;
            }
            t4 = (t4 + 0x1);
            t5 = t6;
        }
        t2 = (t2 + 0x1);
    }
    return t1;
}

int FUN_0c04d484(int a4)
{
    register int t0;
    register int t1;
    register int t5;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t5 = t1;
        if (t1 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), t0, 0xE, (*(int *)0xC4B40CC));
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x80;
            *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t1 + 0x4)) = 0xC04D126;
            *(unsigned char *)((t1 + 0x2)) = t0;
            *(unsigned int *)((t1 + 0x10)) = a4;
            t5 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t5;
}

int FUN_0c0be1f4(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(signed char *)0xC472462;
    t1 = (((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u0 = (((struct o28_float *)(t1))->v);
    u1 = (((struct o28_float *)(a4))->v);
    u2 = (((struct o30_float *)(a4))->v);
    u3 = (((struct o30_float *)(t1))->v);
    u4 = ((u3 - u2) * (u3 - u2));
    u4 = u4 + ((u0 - u1)) * ((u0 - u1));
    (((struct o22_ushort *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = (int)(math_signed_sqrt(u4));
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    FUN_0c0bc25e();
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    return ((unsigned short)(unsigned char)t0 * (unsigned short)0x264);
}

int FUN_0c0c5ade(int a4, int a5, int a6)
{
    register int t2;

    (((struct oA4_uint *)(a4))->v) = 0x0;
    FUN_0c0c57e0(a4, a5, a6);
    if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 54) {
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (((int)((unsigned int)((int)((unsigned int)t2 + (unsigned int)0x0)) + ((((int)0x0 > (int)t2)) ? 1u : 0u))) >> 1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 75) {
        FUN_0c0c2ab6(a4, 0x4D);
    } else {
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
    }
    FUN_0c07e328(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738C6))));
    (((struct o22_ushort *)(a4))->v) = 0xB4;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0c2006(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c0bb73e(a4, f4);
    t1 = FUN_0c0bb922(a4);
    if ((int)(t0 - t1) > 0) {
        if ((int)(t0 - t1) <= (int)0x4000) {
            t2 = (FUN_0c0bb70c((0x5555 + t1)));
        } else {
            t2 = (FUN_0c0bb70c(t0));
        }
        t3 = t2;
    } else {
        t2 = (0xFFFFAAAB + t1);
        if ((int)(t1 - t0) > (int)0x4000) {
            t2 = t0;
        }
        t3 = (FUN_0c0bb70c(t2));
    }
    (((struct o42C_ushort *)(a4))->v) = (((((struct o42C_short *)(a4))->v)) | t3);
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    FUN_0c0bc25e();
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)t0 * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    return ((unsigned short)(unsigned char)t0 * (unsigned short)0x264);
}

int FUN_0c0d5500(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x111);
            t1 = 0x80;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            if (t1 != 1) {
                t2 = t1;
                t2 = (t2 << 2);
                t2 = (t2 + (0xC4 + a4));
                t2 = (*(int *)((t2 + 0x0)));
                FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            }
            t1 = (t1 + 0x1);
        }
        t1 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0x111);
        t0 = 0x80;
    }
    return t0;
}

int FUN_0c0e6aa2(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x40, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x40, (*(int *)0xC4B410C));
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c187798();
        (((struct o2C_float *)(t1))->v) = -150.0f;
        *(unsigned char *)((t1 + 0x2)) = ((*(signed char *)((a4 + 0x2))) - 1);
        *(unsigned int *)((t1 + 0x4)) = 0xC0E694C;
        (((struct o40_float *)(t1))->v) = 0.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o48_float *)(t1))->v) = (*(float *)((0xC1CBE08 + ((*(signed char *)((t1 + 0x2))) << 2))));
        t0 = 0x48;
    }
    return t0;
}

int FUN_0c1130c6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 10) {
                t1 = t0;
                if (t0 != 99) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                    t1 = 0x14;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC291538);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o30_float *)(a4))->v) = (*(float *)0xC113178);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x33, (*(int *)0xC4B410C));
    return FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC291538);
}
