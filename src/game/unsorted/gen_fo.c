/* Straight-line functions with calls and guards (batch gen_fo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c058542(int, int);
int FUN_0c058716(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c169dbc(int, int, int, int, int, int, int, int, int);
int FUN_0c169f4a(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c12c5c6(int a4, int a5, int a6, int a7);
int FUN_0c12f304(int a4, int a5, int a6, int a7);
int FUN_0c1699b8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0de874(int a4, int a5, int a6, int a7);
int FUN_0c1695ba(int a4, int a5, int a6, int a7);
int FUN_0c0e03ec(int a4, int a5, int a6, int a7);
int FUN_0c133748(int a4, int a5, int a6, int a7);
int FUN_0c151310(int a4, int a5, int a6, int a7);

int FUN_0c12c5c6(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return FUN_0c03f346(a4, 0xA, a6, a7);
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + (*(short *)((a4 + 0x1E))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct oB8_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct oB4_float *)(a4))->v) = (u0 - 0.100000001f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
                return t3;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + (*(short *)((a4 + 0x1E))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
                t0 = t1;
            } else {
                (((struct oAC_ushort *)(a4))->v) = 0x21F;
                (((struct oBC_float *)(a4))->v) = 1.0f;
                (((struct oB8_float *)(a4))->v) = 1.0f;
                (((struct oB4_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c12f304(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u6;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201E60), a7);
    if (t1 == 0) {
        return t1;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC201E58;
    t2 = *(signed char *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = 0xC2A1290;
    t3 = 0xC201E58;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)((((struct oC0_int *)(t1))->v))) {
            break;
        }
        t5 = t4;
        t5 = (t5 << 2);
        t5 = (t5 + (0xC4 + t1));
        t5 = (*(int *)((t5 + 0x0)));
        FUN_0c03744a(t5, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t5 + 0x6)) = 0x21F;
        (((struct o14_float *)(t5))->v) = 1.0f;
        t3 = ((((struct oC4_int *)(a4))->v));
        t3 = (t3 + 0x28);
        (((struct o68_uint *)(t5))->v) = t3;
        u6 = (*(float *)(((t2 << 2) + (((t4 << 2) << 1) + 0xC2A1290))));
        t4 = (t4 + 0x1);
        (((struct o84_float *)(t5))->v) = u6;
        u6 = (*(float *)(((t2 << 2) + (*(int *)(((int)stk + 0))))));
        (((struct o8C_float *)(t5))->v) = u6;
        (((struct o88_float *)(t5))->v) = u6;
        (((struct o20_float *)(t5))->v) = 0.0f;
        (((struct o1C_float *)(t5))->v) = 0.0f;
        (((struct o18_float *)(t5))->v) = 0.0f;
    }
    (((struct oA8_uchar *)(t1))->v) = 0x1;
    (((struct oAC_ushort *)(t1))->v) = 0x1F;
    (((struct oA9_uchar *)(t1))->v) = 0x21;
    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned int *)((t1 + 0x4)) = 0xC12F490;
    *(unsigned int *)((t1 + 0x10)) = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
    (((struct o54_float *)(t1))->v) = 0.0f;
    (((struct o50_float *)(t1))->v) = 0.0f;
    (((struct o4C_float *)(t1))->v) = 0.0f;
    (((struct o48_float *)(t1))->v) = 1.0f;
    (((struct o44_float *)(t1))->v) = 1.0f;
    (((struct o40_float *)(t1))->v) = 1.0f;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t1 + 0x28));
    *(unsigned short *)((t1 + 0x1C)) = 0x0;
    return FUN_0c059e60(a4, 0x20);
}

int FUN_0c1699b8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t1;
    register float u11;
    register int t12;
    register int t19;
    register int t24;
    register int t34;
    register int t35;
    register int t37;
    register float u43;
    register int t44;
    register int t51;
    register int t56;
    register int t60;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t60 = (FUN_0c169dbc(a4, (*(signed char *)((a4 + 0x2))), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
            } else {
                t60 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
                (((struct o48_float *)(a4))->v) = 1.20000005f;
            }
            u11 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u11;
            (((struct o40_float *)(a4))->v) = u11;
            t12 = FUN_0c064f80(a4);
            if (t12 != 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            }
            t19 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t19 - 1);
            if ((int)(short)(t19 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0xA;
                FUN_0c169f4a(a4, 0x1, (a4 + 0x28));
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 - 1);
            t60 = (short)(t24 - 1);
            if ((int)(short)(t24 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t60 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0x380C + (((short)t0 * (short)0x3938) + 0xC532498))); }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 100.0f);
        t34 = FUN_0c058716(a4, ((int)stk + 0));
        t35 = t34;
        if ((int)t34 > (int)0x2E38) {
            t35 = 0x2E38;
        }
        t37 = t35;
        if ((int)t35 < (int)0x11C7) {
            t37 = 0x11C7;
        }
        *(unsigned int *)((a4 + 0x34)) = t37;
        FUN_0c058542(a4, 0x11C7);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 1.20000005f) {
            (((struct o48_float *)(a4))->v) = 1.20000005f;
        }
        u43 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u43;
        (((struct o40_float *)(a4))->v) = u43;
        t44 = FUN_0c064f80(a4);
        if (t44 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        t51 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t51 - 1);
        if ((int)(short)(t51 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            FUN_0c169f4a(a4, 0x1, (a4 + 0x28));
        }
        t56 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t56 - 1);
        t60 = (short)(t56 - 1);
        if ((int)(short)(t56 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t60 = 0x14;
        }
    }
    return t60;
}

int FUN_0c0de874(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = 0x5;
    if (a6 != 0) {
        t0 = 0x1;
    }
    t1 = FUN_0c03f444(t0, 0x0, 0x1, a7);
    t0 = t1;
    if (t1 == 0) {
    } else {
        t2 = (((struct oC4_int *)(t1))->v);
        FUN_0c03744a(t2, 0x0, 0x9, (*(int *)0xC4B40CC));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t1 + 0x2)) = a6;
        *(unsigned int *)((t1 + 0x4)) = 0xC0DE728;
        (((struct oAC_ushort *)(t1))->v) = 0x1;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        if (a6 != 0) {
            FUN_0c07e420(t1, 0x3);
            FUN_0c064d24(t1, 0x3, 0x9, 0x0, 0x100, 0xF, 0x0, 0xFFFFFFF0);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t1 + 0x38)) = a5;
        (((struct o54_float *)(t1))->v) = ((float)a7 * (math_cos_angle16(a5)));
        (((struct o4C_float *)(t1))->v) = ((float)a7 * (math_sin_angle16(a5)));
        (((struct o50_float *)(t1))->v) = -1.0f;
        u0 = ((((struct o4C_float *)(t1))->v));
        u0 *= -0.0333333351f;
        (((struct o58_float *)(t1))->v) = u0;
        (((struct o5C_float *)(t1))->v) = 0.100000001f;
        u0 = ((((struct o54_float *)(t1))->v));
        u0 *= -0.0333333351f;
        (((struct o60_float *)(t1))->v) = u0;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned short *)((t2 + 0x6)) = 0x239;
        t1 = (int)((int)(nlRand()) % (int)0x14);
        (((struct o80_uint *)(t2))->v) = (int)(((float)((((t1 << 2) << 1) + t1) << 1) * 65536.0f) / 360.0f);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        (((struct o18_float *)(t2))->v) = 0.0f;
        (((struct o1C_float *)(t2))->v) = 0.0f;
        (((struct o20_float *)(t2))->v) = 0.0f;
        t0 = 0x20;
    }
    return t0;
}

int FUN_0c1695ba(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = a5;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_0 = (v0_0);
    w0_0 = (0.0f);
    if ((v0_3 == 0)) goto L_C1695D6;
    if ((v0_1 == 1)) goto L_C169624;
    v0_1 = ((FUN_0c03f346(v0_0, v0_2, a6, a7)));
    L_C1696FC:;
    return v0_1;
    L_C169624:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C169636;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    L_C169636:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    w0_1 = (0.100000001f);
    if ((v0_2 == 0)) goto L_C169670;
    if ((v0_1 == 1)) goto L_C1696A8;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C1696E8:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o40_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x40);
    goto L_C1696FC;
    L_C1696A8:;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + 0.00999999978f);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - w0_1);
    w0_1 = (0.0f);
    FPUL_ = (0x3C23D70A);
    if ((((((struct oBC_float *)(v0_0))->v)) > 0.0f)) goto L_C1696D2;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C1696D2:;
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C1696E8;
    L_C169670:;
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + w0_1);
    w0_0 = *(float *)0xC169794;
    v0_1 = (0x48);
    w0_1 = (w0_0);
    if ((w0_0 > ((((struct o48_float *)(v0_0))->v)))) goto L_C1696E8;
    *(float *)((v0_0 + v0_1)) = w0_1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = 1.0f;
    (((struct oB8_float *)(v0_0))->v) = 1.0f;
    (((struct oB4_float *)(v0_0))->v) = 1.0f;
    goto L_C1696E8;
    L_C1695D6:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    *(float *)(((int)stk + 0)) = w0_0;
    *(float *)(((int)stk + 4)) = 10.0f;
    *(float *)(((int)stk + 8)) = w0_0;
    FUN_0c0582de(((int)stk + 0), ((*(int *)(((((*(int *)((((*(signed char *)((v0_0 + 0x2))) << 2) + 0xC203B94))) << 2) + (0xC4 + (*(int *)((v0_0 + 0x10))))) + 0x0))) + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((int)stk + 0)); }
    *(unsigned int *)((v0_0 + 0x38)) = (*(int *)(((*(int *)((v0_0 + 0x10))) + 0x38)));
    *(unsigned int *)((v0_0 + 0x34)) = 0xFFFFE000;
    goto L_C169624;
}

int FUN_0c0e03ec(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 7) {
                                if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(FUN_0c0d532c))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                return FUN_0c0d5328();
            }
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (0xC1CA3B4 + (((t0 << 1) + t0) << 2)), 0x0);
        }
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CA3B4 + (((t0 << 1) + t0) << 2))); }
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x2;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                return t0;
                            }
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            return FUN_0c0d5328();
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (0xC1CA3B4 + (((t0 << 1) + t0) << 2)), 0x0);
    }
    return FUN_0c0d522c(a4);
}

int FUN_0c133748(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t32;
    register int t5;
    register float u11;
    register float u12;
    register float u18;
    register float u19;
    register int t28;
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t32 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC133952;
        t5 = FUN_0c07d774((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498));
        u11 = (float)(((short)(signed char)a6 * (short)0x96) + 0xC8);
        u12 = ((((struct o28_float *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v));
        u12 = u12 + u11 * (math_sin_angle16((unsigned short)((((((*(signed char *)((t0 + 0x2))) << 8) << 2) << 2) << 1) + t5)));
        (((struct o28_float *)(t0))->v) = u12;
        u18 = (float)(((short)(signed char)a6 * (short)0x96) + 0xC8);
        u19 = ((((struct o30_float *)((0xC532498 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))))->v));
        u19 = u19 + u18 * (math_cos_angle16((unsigned short)((((((*(signed char *)((t0 + 0x2))) << 8) << 2) << 2) << 1) + t5)));
        (((struct o30_float *)(t0))->v) = u19;
        (((struct o2C_float *)(t0))->v) = ((((struct o2C_float *)((*(int *)(((int)stk + 0)))))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC201E6C); }
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x3, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x1F;
        t28 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t28))->v) = 1.0f;
        (((struct o88_float *)(t28))->v) = 1.0f;
        (((struct o84_float *)(t28))->v) = 1.0f;
        t29 = 0x64;
        if ((signed char)a6 == 3) {
            t29 = 0x67;
        }
        FUN_0c07e2f4(t0, t29);
        *(unsigned char *)(((0x41C + t0) + 0x1)) = 0x0;
        (((struct o41C_uchar *)(t0))->v) = 0x0;
        *(unsigned char *)(((0x41C + t0) + 0x2)) = a6;
        t32 = a6;
    }
    return t32;
}

int FUN_0c151310(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t19;
    register int t1;
    register int t3;
    register int t6;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t17;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = FUN_0c03f444(0x5, 0x1, 0x5, a7);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC151494;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC20339C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC2033B4); }
        *(unsigned char *)(((int)stk + 0)) = 0x0;
        t1 = 0x0;
        for (;;) {
            t3 = *(int *)((((0xC4 + t0) + t1) + 0x0));
            FUN_0c03744a(t3, 0x0, 0x13, (*(int *)0xC4B40CC));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0x31;
            t6 = (int)((int)(nlRand()) % (int)0xA);
            (((struct o8C_float *)(t3))->v) = (((float)(t6 + 0x1) / 10.0f) + 0.600000024f);
            (((struct o88_float *)(t3))->v) = (((float)(t6 + 0x1) / 10.0f) + 0.600000024f);
            (((struct o84_float *)(t3))->v) = (((float)(t6 + 0x1) / 10.0f) + 0.600000024f);
            memset((0x9C + t3), 0x0, 0xC);
            (((struct o9C_float *)(t3))->v) = (((((struct o84_float *)(t3))->v)) / 8.0f);
            *(unsigned char *)(((0x9C + t3) + 0x4)) = 0x1;
            *(unsigned char *)(((0x9C + t3) + 0x5)) = (((int)((int)(nlRand()) % (int)0x3)) + 0x1);
            t11 = nlRand();
            t12 = ((~(((~t11) + 0x1) & 0x3)) + 0x1);
            if ((int)t11 >= 0) {
                t12 = (t11 & 0x3);
            }
            *(unsigned char *)(((0x9C + t3) + 0x6)) = t12;
            t14 = nlRand();
            t15 = ((~(((~t14) + 0x1) & 0x7)) + 0x1);
            if ((int)t14 >= 0) {
                t15 = (t14 & 0x7);
            }
            *(unsigned char *)(((0x9C + t3) + 0x7)) = (t15 + 0x1);
            t17 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t17 + 0x1);
            t1 = (t1 + 0x4);
            if ((int)(signed char)(t17 + 0x1) >= (int)0x5) {
                break;
            }
        }
        *(unsigned short *)((t0 + 0x1C)) = 0x78;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x5;
        (((struct o22_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
        t19 = 0x22;
    }
    return t19;
}
