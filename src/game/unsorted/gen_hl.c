/* Straight-line functions with calls and guards (batch gen_hl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o114_int { char p[0x114]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03733c(int, int, int, Stk3);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c0392bc(int);
int FUN_0c03e6b2(int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c0676ce(int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c133aec(int);
int FUN_0c1502e8(int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlRand(void);
void FUN_0c13c150(int a4, int a5, int a6, int a7);
int FUN_0c067294(int a4);
int FUN_0c141cbc(int a4, int a5, int a6, int a7);
int FUN_0c14fb3c(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c12e10c(int a4, int a5, int a6, int a7);
void FUN_0c166fac(int a4, int a5, int a6, int a7);
int FUN_0c1392d8(int a4);
int FUN_0c0cb03e(int a4);
int FUN_0c169f4a(int a4, int a5, int a6, int a7);

void FUN_0c13c150(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13BFC4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t1 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + (t1 << 2)) + 0x0))), t1, 0x3, (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2)))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + (t1 << 2)) + 0x0))) + 0x0)) = 0x1;
            t2 = *(int *)((((t1 << 2) + (0xC4 + t0)) + 0x0));
            t1 = (t1 + 0x1);
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        (((struct o68_uint *)(((((struct oC4_int *)(t0))->v))))->v) = (((((struct oE4_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28);
        (((struct o68_uint *)(((((struct oC8_int *)(t0))->v))))->v) = (((((struct oF4_int *)((0xC532498 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))))->v)) + 0x28);
        (((struct o78_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oC8_int *)(t0))->v))))->v) = 0x4000;
        (((struct o80_uint *)(((((struct oC4_int *)(t0))->v))))->v) = 0x4000;
        (((struct o80_uint *)(((((struct oC8_int *)(t0))->v))))->v) = 0x4000;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)(0xC2020E8); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)(0xC2020F4); }
        t1 = (((struct oC4_int *)(t0))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + t0) + 0x4))) + 0x84)) = *(struct mv3 *)((t0 + 0x40)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)((t0 + 0x40)); }
    }
}

int FUN_0c067294(int a4)
{
    int stk[6];
    register int t0;
    register int t35;
    register int t6;
    register int t7;
    register int t8;
    register float u19;
    int t21;
    register int t24;
    int t30;

    t0 = *(signed char *)((a4 + 0x2));
    t35 = t0;
    if (t0 == 14) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x34)); }
        FUN_0c03733c(a4, 0x0, (*(int *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC4B40DC + (((*(signed char *)((a4 + 0x1))) << 2) << 1))) + 0x0))), *(Stk3 *)(((int)stk + 0)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((int)stk + 0)); }
        t6 = (a4 + 0x34);
        t7 = ((int)stk + 0);
        t8 = 0x0;
        for (;;) {
            if ((int)t8 >= (int)((((struct o114_int *)(a4))->v))) {
                break;
            }
            t7 = 0x118;
            t7 = (t7 + a4);
            t6 = (*(int *)((((t8 << 2) + t7) + 0x0)));
            t8 = (t8 + 0x1);
            (((struct o88_float *)(t6))->v) = ((*(float *)((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + ((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC1C59CC)))));
        }
        u19 = *(float *)(((((*(signed char *)(((0x371A + a4) + 0x0))) << 2) + (0xC1C594C + (((*(signed char *)((a4 + 0x2))) << 2) << 1))) + 0x0));
        (((struct o48_float *)(a4))->v) = u19;
        (((struct o44_float *)(a4))->v) = u19;
        (((struct o40_float *)(a4))->v) = u19;
        (((struct o378C_float *)(a4))->v) = u19;
        if (((*(signed char *)((a4 + 0x2))) == 1) && (t21 = *(signed char *)((a4 + 0x371A)), t21 != 0)) {
            t24 = (((((struct oAC_short *)(a4))->v)) | 0x800);
        } else {
            t24 = (((((struct oAC_short *)(a4))->v)) & 0xF7FF);
        }
        (((struct oAC_ushort *)(a4))->v) = t24;
        FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
        FUN_0c0392bc(a4);
        if (((*(signed char *)((a4 + 0x2))) == 7) && (t30 = *(signed char *)((a4 + 0x371A)), t30 != 0)) {
            FUN_0c133aec(a4);
        }
        t35 = (FUN_0c03e6b2((*(signed char *)((a4 + 0x1))), 0x0));
    }
    return t35;
}

int FUN_0c141cbc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t31;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t8;

    t0 = FUN_0c03f444(0x5, 0x0, 0x6, a7);
    t31 = t0;
    if (t0 != 0) {
        t1 = 0xC20239C;
        t2 = 0x0;
        t3 = 0xC20239C;
        t4 = 0xC20239C;
        for (;;) {
            t8 = *(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0));
            FUN_0c03744a(t8, (*(int *)((t4 + 0x0))), (*(int *)((t4 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned short *)((t8 + 0x6)) = (*(short *)((t4 + 0xC)));
            if ((unsigned short)(*(short *)((t8 + 0x6))) == 31) {
                (((struct o8C_float *)(t8))->v) = 0.0f;
                (((struct o88_float *)(t8))->v) = 0.0f;
                (((struct o84_float *)(t8))->v) = 0.0f;
            }
            t2 = (t2 + 0x1);
            if ((int)(*(int *)((t1 + 0x8))) < 0) {
                (((struct o68_uint *)(t8))->v) = 0x0;
            } else {
                (((struct o68_uint *)(t8))->v) = ((*(int *)(((((*(int *)((t3 + 0x8))) << 2) + (0xC4 + t0)) + 0x0))) + 0x28);
            }
            t3 = (t3 + 0x10);
            t1 = (t1 + 0x10);
            t4 = (t4 + 0x10);
            if ((unsigned int)t2 >= (unsigned int)0x6) {
                break;
            }
        }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(t0))->v)) + 0x14)) = *(struct mv4 *)(((((*(signed char *)((a4 + 0x1))) << 2) << 2) + 0xC20243C)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oCC_int *)(t0))->v)) + 0x14)) = *(struct mv4 *)(0xC20247C); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD4_int *)(t0))->v)) + 0x14)) = *(struct mv4 *)(((((*(signed char *)((a4 + 0x1))) << 2) << 2) + 0xC2023FC)); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oD8_int *)(t0))->v)) + 0x14)) = *(struct mv4 *)(0xC20247C); }
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t0 + 0x4)) = 0xC141E24;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)((a4 + 0x2)));
        (((struct oA4_uint *)(t0))->v) = (a4 + 0x64);
        *(unsigned short *)((t0 + 0x1C)) = a5;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        t31 = 0x40;
    }
    return t31;
}

int FUN_0c14fb3c(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int stk[34];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t10;
    register int t13;
    register int t22;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 20)) = f7;
    t0 = *(int *)0xC542260;
    t3 = (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202EF8);
    t4 = 0x0;
    t5 = (((int)stk + 8) + 0x20);
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t5) = *(struct mv3 *)((*(int *)(((int)stk + 8)))); }
        t7 = t3;
        t3 = (t3 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x14)) = *(struct mv3 *)(t7); }
        math_vec3_mul_xyz((((int)stk + 8) + 0x14), f8, f8, f8);
        nlAddVector3op(t5, t5, (((int)stk + 8) + 0x14));
        t4 = (t4 + 0x1);
        t5 = (t5 + 0xC);
        if ((int)(signed char)t4 >= (int)0x8) {
            break;
        }
    }
    t10 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t10 & 0x7) << 1) + (t10 & 0x7)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68);
    t13 = FUN_0c1502e8(0xFFFFFFFF, 0x8, 0x2, (((int)stk + 0) + 0x28), (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68), (((((t10 & 0x7) << 1) + (t10 & 0x7)) << 2) + 0xC2030D8));
    t22 = t13;
    if (t13 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t13))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t13))->v))))->v) = (*(float *)(((int)stk + 24)));
        (((struct o1C_float *)(((((struct oC4_int *)(t13))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o20_float *)(((((struct oC4_int *)(t13))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o10_float *)((0x41C + t13)))->v) = (*(float *)(((int)stk + 20)));
        *(unsigned short *)((t13 + 0x1E)) = 0x0;
        t22 = 0x0;
    }
    return t22;
}

int FUN_0c12e10c(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t19;
    register int t4;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201D50), a7);
    t19 = t1;
    if (t1 != 0) {
        t4 = 0x0;
        for (;;) {
            if ((int)t4 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t3 = 0xC4;
            t5 = t4;
            t5 = (t5 << 2);
            t6 = t4;
            t3 = (t3 + t1);
            t5 = (t5 + t3);
            t3 = t4;
            t6 = (t6 << 2);
            t6 = (t6 + t3);
            t6 = (t6 << 2);
            t6 = (t6 << 1);
            t5 = (*(int *)((t5 + 0x0)));
            t6 = (t6 + 0xC201CB0);
            FUN_0c03744a(t5, (*(int *)((t6 + 0x0))), (*(int *)((t6 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t2 = 0x84;
            *(unsigned short *)((t5 + 0x6)) = (*(short *)((t6 + 0x8)));
            t3 = 0xC187798;
            t2 = (t2 + t5);
            (((struct o14_float *)(t5))->v) = (((((struct o24_float *)(t6))->v)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)((t6 + 0xC)); }
            t2 = t5;
            t2 = (t2 + 0x78);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)((t6 + 0x18)); }
            t4 = (t4 + 0x1);
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC12E21C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o1B_uchar *)(t1))->v) = 0x0;
        (((struct o14_uchar *)(t1))->v) = 0x0;
        (((struct o15_uchar *)(t1))->v) = 0x0;
        (((struct o16_uchar *)(t1))->v) = 0x0;
        (((struct o17_uchar *)(t1))->v) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x14;
        *(unsigned short *)((t1 + 0x1E)) = 0x12;
        (((struct o20_ushort *)(t1))->v) = 0x1;
        (((struct o22_ushort *)(t1))->v) = 0xA;
        t19 = 0x22;
    }
    return t19;
}

void FUN_0c166fac(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;

    t0 = FUN_0c03f444(0x1, 0x0, 0x3, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC166B08;
        t1 = 0x4;
        if ((int)a7 > (int)0x4) {
        } else {
            t1 = a7;
            if ((int)a7 < 0) {
                t1 = 0x0;
            }
        }
        *(unsigned char *)((t0 + 0x2)) = t1;
        t1 = *(signed char *)((t0 + 0x2));
        switch (t1) {
        case 0:
            FUN_0c07e3ae(t0, 0x7A);
            break;
        case 1:
            FUN_0c07e3ae(t0, 0x7B);
            break;
        case 2:
            FUN_0c07e3ae(t0, 0x7C);
            break;
        case 3:
            FUN_0c07e3ae(t0, 0x7D);
            break;
        case 4:
            FUN_0c07e3ae(t0, 0x7E);
            break;
        }
        t1 = *(signed char *)((t0 + 0x2));
        if ((t1 != 0) && ((t1 != 1) && (t1 != 2))) {
            if (t1 != 3) {
                if (t1 != 4) {
                } else {
                    FUN_0c064d24(t0, 0x3, 0x54, 0x2, 0x100, (~((int)0x1 << (int)a4)), 0x0, 0x0);
                }
            } else {
                FUN_0c064d24(t0, 0x3, 0x53, 0x2, 0x100, (~((int)0x1 << (int)a4)), 0x0, 0x0);
            }
        } else {
            FUN_0c064d24(t0, 0x3, 0x53, 0x0, 0x100, (~((int)0x1 << (int)a4)), 0x0, 0x0);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(a6); }
    }
}


int FUN_0c0cb03e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) == 0) {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
    } else {
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    }
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        if ((*(short *)((a4 + 0x1E))) == 0) {
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 7) {
                FUN_0c07e3fc(a4, 0xE);
            } else {
                t1 = FUN_0c064f80((((short)t0 * (short)0x3938) + 0xC532498));
                t2 = 0x5;
                if (t1 != 0) {
                    t2 = 0x4;
                }
                FUN_0c07e3fc(a4, t2);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
        }
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 7) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        }
    }
    t0 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
    if (t0 != 5) {
        return FUN_0c03f346(a4);
    }
    return t0;
}

int FUN_0c169f4a(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t25;
    register int t11;
    register int t16;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC169E98;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 100.0f);
        *(unsigned char *)(((0x41C + t0) + 0x1)) = 0x3;
        (((struct o41C_uchar *)(t0))->v) = 0x4;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((0x41C + t0) + 0x1))), 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t11 = *(signed char *)((t0 + 0x2));
        t25 = t11;
        if (t11 != 0) {
            (((struct o4C_float *)(t0))->v) = (-(((((struct o4C_float *)(a4))->v)) * 0.5f));
            (((struct o54_float *)(t0))->v) = (-(((((struct o54_float *)(a4))->v)) * 0.5f));
            (((struct o50_float *)(t0))->v) = (-(((((struct o50_float *)(a4))->v)) * 0.5f));
            t16 = (int)((int)(nlRand()) % (int)0x33);
            (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + (float)((-t16) + 0x32));
            t25 = ((-t16) + 0x32);
        }
    }
    return t25;
}
