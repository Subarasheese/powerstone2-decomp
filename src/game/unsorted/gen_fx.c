/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c169524(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlRand(void);
int nlSubVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c12df3c(int a4, int a5, int a6, int a7);
int FUN_0c14ada0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c14d34c(int a4, int a5, int a6, int a7);
int FUN_0c165fec(int a4, int a5, int a6, int a7);
int FUN_0c165ed0(int a4, int a5, int a6, int a7);
int FUN_0c135f7c(int a4, int a5, int a6, int a7);
int FUN_0c15d386(int a4, int a5, int a6, int a7, int a8);
int FUN_0c125704(int a4, int a5, int a6, int a7);
int FUN_0c143a30(int a4, int a5, int a6, int a7);
int FUN_0c13df20(int a4, int a5, int a6, int a7);
int FUN_0c14b644(int a4, int a5, int a6, int a7);
int FUN_0c169dbc(int a4, int a5, int a6, int a7);

int FUN_0c12df3c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t11;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t11 = t0;
    if (t0 != 0) {
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x2, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned short *)((t1 + 0x6)) = 0x21F;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12E04C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        (((struct o8C_float *)(t1))->v) = 1.0f;
        (((struct o88_float *)(t1))->v) = 1.0f;
        (((struct o84_float *)(t1))->v) = 1.0f;
        (((struct o68_uint *)(t1))->v) = (((((struct oF4_int *)(a4))->v)) + 0x28);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 0.0f);
        (((struct o20_float *)(t1))->v) = 0.0f;
        (((struct o1C_float *)(t1))->v) = 0.0f;
        (((struct o18_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c14ada0(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t1 = t0;
    if (t0 != 0) {
        t1 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t1, 0x0, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)(0xC202B28); }
        (((struct o20_float *)(t1))->v) = 1.0f;
        (((struct o1C_float *)(t1))->v) = 1.0f;
        (((struct o18_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x4)) = 0xC14AEAE;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = a7;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a8); }
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned short *)((t0 + 0x1C)) = a6;
        if ((int)a5 < 0) {
            (((struct o44_float *)(t0))->v) = 1.0f;
            u0 = (((struct o0_float *)0xC14AEEC)->v);
            (((struct o48_float *)(t0))->v) = u0;
            (((struct o40_float *)(t0))->v) = u0;
            t1 = 0x40;
        } else {
            (((struct o48_float *)(t0))->v) = 1.0f;
            (((struct o44_float *)(t0))->v) = 1.0f;
            (((struct o40_float *)(t0))->v) = 1.0f;
            u0 = (((struct o4_float *)0xC14AEEC)->v);
            if (a5 == 0) {
                (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - u0);
                *(unsigned int *)((t0 + 0x3C)) = 0xFFFFC000;
                t1 = 0x2C;
            } else {
                t1 = a5;
                if (a5 == 1) {
                    (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) - u0);
                    *(unsigned int *)((t0 + 0x3C)) = 0x4000;
                    t1 = 0x2C;
                }
            }
        }
    }
    return t1;
}

int FUN_0c14d34c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x3, 0x47, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14D1DC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((0xC5324D0 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))));
        (((struct o48_float *)(t0))->v) = 1.79999995f;
        (((struct o44_float *)(t0))->v) = 1.79999995f;
        (((struct o40_float *)(t0))->v) = 1.79999995f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        (((struct o4C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + -1200.0f);
        (((struct o50_float *)(t0))->v) = -15.0f;
        (((struct o5C_float *)(t0))->v) = -0.800000012f;
        *(unsigned short *)((t0 + 0x1C)) = 0x64;
        FUN_0c064d24(t0, 0x1, 0x32, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0);
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        return FUN_0c07e2f4(t0, 0x61);
    }
    return t0;
}

int FUN_0c165fec(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC1657C2;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = (*(int *)((a4 + 0x10)));
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x1, 0x21, ((((struct oC_int *)0xC4B40CC)->v)));
        (((struct o7C_uint *)(t2))->v) = 0x4000;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x37, ((((struct o0_int *)0xC4B40CC)->v)));
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o7C_uint *)(t2))->v) = 0xFFFFC000;
        (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 80.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(a6); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e3ae(t0, (*(signed char *)0xC273FAE));
        t1 = (FUN_0c064d24(t0, 0x1, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0));
    }
    return t1;
}

int FUN_0c165ed0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC165560;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x1, 0x21, ((((struct oC_int *)0xC4B40CC)->v)));
        (((struct o7C_uint *)(t2))->v) = 0x4000;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x0, 0x37, ((((struct o0_int *)0xC4B40CC)->v)));
        (((struct o68_uint *)(t2))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o7C_uint *)(t2))->v) = 0xFFFFC000;
        (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 80.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(a6); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e3ae(t0, (*(signed char *)0xC273FAE));
        t1 = (FUN_0c064d24(t0, 0x1, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0));
    }
    return t1;
}

int FUN_0c135f7c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC135D78;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        u2 = *(float *)0xC1360F0;
        (((struct o48_float *)(t0))->v) = u2;
        (((struct o44_float *)(t0))->v) = u2;
        (((struct o40_float *)(t0))->v) = u2;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        (((struct o84_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o40_float *)(t0))->v));
        (((struct o88_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o44_float *)(t0))->v));
        (((struct o8C_float *)(((((struct oC4_int *)(t0))->v))))->v) = ((((struct o48_float *)(t0))->v));
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
    }
    return t0;
}

int FUN_0c15d386(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];
    register int t0;
    register int t19;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t19 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15D31C;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        t3 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + (t3 << 2)) + 0x0))), t3, (*(int *)((((*(signed char *)((t0 + 0x2))) << 2) + 0xC20373C))), (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t3 << 2)) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + (t3 << 2)) + 0x0))) + 0x6)) = 0xF;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)((((0xC4 + t0) + (t3 << 2)) + 0x0))) + 0x6C)) = *(struct mv3 *)(((((t3 << 1) + t3) << 2) + 0xC203744)); }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x2) {
                break;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x78)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(t0))->v)) + 0x78)) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        *(unsigned short *)((t0 + 0x1C)) = a8;
        t19 = a8;
    }
    return t19;
}

int FUN_0c125704(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t13;
    register int t5;
    register int t6;

    t0 = FUN_0c03f444(0x5, 0x1, 0xA, a7);
    t13 = t0;
    if (t0 != 0) {
        t6 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t6, 0x0, 0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned short *)((t6 + 0x6)) = 0x1F;
        t5 = 0x1;
        for (;;) {
            if ((int)t5 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t6 = t5;
            t6 = (t6 << 2);
            t6 = (t6 + (0xC4 + t0));
            t6 = (*(int *)((t6 + 0x0)));
            FUN_0c03744a(t6, 0x1, 0x4, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            *(unsigned char *)((t6 + 0x0)) = 0x0;
            *(unsigned short *)((t6 + 0x6)) = 0x41F;
            t5 = (t5 + 0x1);
            (((struct o88_float *)(t6))->v) = 0.0f;
            (((struct o14_float *)(t6))->v) = 1.0f;
        }
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1257E6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned short *)((t0 + 0x1E)) = a5;
        (((struct o22_ushort *)(t0))->v) = a6;
        (((struct o20_ushort *)(t0))->v) = a6;
        (((struct o16_uchar *)(t0))->v) = 0x0;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        t13 = 0xB0;
    }
    return t13;
}

int FUN_0c143a30(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t16;
    register int t1;
    register int t2;
    register int t3;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4, a7);
    t16 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0xC202704;
        t3 = 0x0;
        for (;;) {
            t7 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t7, (*(signed char *)((t2 + 0x0))), 0x8, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t1 = (t1 + 0x1);
            (((struct o8C_float *)(t7))->v) = 0.0f;
            (((struct o88_float *)(t7))->v) = 0.0f;
            (((struct o84_float *)(t7))->v) = 0.0f;
            (((struct o20_float *)(t7))->v) = 1.0f;
            (((struct o1C_float *)(t7))->v) = 1.0f;
            (((struct o18_float *)(t7))->v) = 1.0f;
            t2 = (t2 + 0x1);
            *(unsigned short *)((t7 + 0x6)) = 0x21F;
            t3 = (t3 + 0x4);
            if ((unsigned int)t1 >= (unsigned int)0x4) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x4)) = 0xC143B66;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)(((((*(int *)(((a5 << 2) + 0xC2026FC))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((((a5 << 1) + a5) << 2) + 0xC2026DC)); }
        *(unsigned int *)((t0 + 0x34)) = (*(int *)(((a5 << 2) + 0xC2026F4)));
        t16 = 0xC2026F4;
    }
    return t16;
}

int FUN_0c13df20(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = FUN_0c03f444(0x5, 0x1, 0x9, a7);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13DDB8;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)((a4 + 0x40)); }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = 0x0;
        t3 = (0x41C + t0);
        t4 = (0x41C + t0);
        t5 = 0x0;
        for (;;) {
            t6 = nlRand();
            t7 = ((~(((~t6) + 0x1) & 0x7)) + 0x1);
            if ((int)t6 >= 0) {
                t7 = (t6 & 0x7);
            }
            *(unsigned char *)((t3 + 0x0)) = t7;
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            FUN_0c037498((*(int *)((((0xC4 + t0) + t5) + 0x0))), t6, 0x9, (*(int *)0xC4B40CC));
            t2 = (t2 + 0x1);
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            t6 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            t5 = (t5 + 0x4);
            *(unsigned short *)((t6 + 0x6)) = 0xF;
            t3 = (t3 + 0x1);
            if ((int)t2 >= (int)0x9) {
                break;
            }
        }
        t1 = 0xF;
    }
    return t1;
}

int FUN_0c14b644(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t21;
    register int t1;
    register int t2;
    register float u19;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t21 = t0;
    if (t0 != 0) {
        t1 = nlRand();
        t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x1);
        }
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), (t2 + 0x2), 0x9, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14B720;
        *(float *)(((int)stk + 0)) = ((((struct o0_float *)0xC14B78C)->v));
        *(float *)(((int)stk + 4)) = ((((struct o4_float *)0xC14B78C)->v));
        *(float *)(((int)stk + 8)) = ((((struct o8_float *)0xC14B78C)->v));
        FUN_0c0582de(((int)stk + 0), (((((struct oF4_int *)(a4))->v)) + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(((int)stk + 0)); }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), ((int)stk + 0));
        nlSubVector3op(((int)stk + 0), ((int)stk + 0), (t0 + 0x28));
        u19 = (((struct o20_float *)0xC14B78C)->v);
        math_vec3_mul_xyz(((int)stk + 0), u19, u19, u19);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)(((int)stk + 0)); }
        *(unsigned short *)((t0 + 0x1C)) = 0xA;
        t21 = 0xA;
    }
    return t21;
}

int FUN_0c169dbc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC169BDA;
        *(unsigned char *)((t0 + 0x2)) = a5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((a4 + 0x38)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x7, 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x1F;
        t1 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t1))->v) = 0.0f;
        (((struct o88_float *)(t1))->v) = 0.0f;
        (((struct o84_float *)(t1))->v) = 0.0f;
        FUN_0c037498(((((struct oC8_int *)(t0))->v)), 0x2, 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC8_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t0))->v)) + 0x6)) = 0x1F;
        t1 = (((struct oC8_int *)(t0))->v);
        (((struct o8C_float *)(t1))->v) = 0.0f;
        (((struct o88_float *)(t1))->v) = 0.0f;
        (((struct o84_float *)(t1))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return FUN_0c169524(t0, 0x29, 0x77);
    }
    return t0;
}
