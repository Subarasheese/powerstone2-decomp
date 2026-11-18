/* Straight-line functions with calls and guards (batch gen_fq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0e33cc(int, int, int);
int FUN_0c14fb3c(int, float, float, float, float, float);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e36b6(int a4);
int FUN_0c16dd24(int a4, int a5);
int FUN_0c0f4b68(int a4, int a5);
int FUN_0c13241a(int a4, int a5);
int FUN_0c13d160(int a4, int a5, int a6);
int FUN_0c16c328(int a4);
int FUN_0c084bbc(int a4, int a5, int a6, int a7);

int FUN_0c0e36b6(int a4)
{
    int stk[3];
    register int t0;
    register int t16;
    register int t17;
    register int t36;
    register int t28;
    int t3;
    register int t24;
    register int t25;

    t0 = *(signed char *)0xC54098E;
    t25 = *(signed char *)((a4 + 0x2));
    if ((t25 != (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) && (t3 = *(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)), t25 != t3)) {
        t24 = (((t0 << 2) << 2) + 0xC288050);
    } else {
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CBC50); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1CBC08); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC1CBC5C); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1CBC14); }
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC0E384C));
        FUN_0c0e33cc(a4, ((int)stk + 0), ((*(short *)0xC540994) - 40));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x2;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFE38F;
        t16 = *(short *)0xC540994;
        *(unsigned short *)((a4 + 0x1E)) = t16;
        *(unsigned short *)((a4 + 0x1C)) = t16;
        t17 = *(signed char *)((a4 + 0x2));
        FUN_0c064d5a(a4, (((((t17 - 1) << 1) + (t17 - 1)) << 2) + 0xC1CBBC0));
        (((struct o136_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
    }
    t36 = 0x15;
    if ((int)(*(signed char *)0xC54098D) >= (int)0x11) {
        t28 = *(signed char *)((a4 + 0x2));
        switch (t28) {
        case 1:
            *(unsigned int *)0xC540D94 = 0x0;
            break;
        case 2:
            *(unsigned int *)0xC540DD4 = 0x0;
            break;
        case 3:
            *(unsigned int *)0xC540E14 = 0x0;
            break;
        }
        t36 = (FUN_0c03f346(a4, t24, t25));
    }
    return t36;
}

int FUN_0c16dd24(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = FUN_0c037320(0x51, (*(int *)0xC4B40D8));
    t1 = FUN_0c03f444(0x2, 0x0, t0);
    t2 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x51, (*(int *)0xC4B40D8));
        FUN_0c03fb78(t1, 0x1);
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC16DBD4;
        *(unsigned char *)((t1 + 0x2)) = a5;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x10)) = a4;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((0xB0 + t1)) = *(struct mv4 *)(((((*(signed char *)((a4 + 0x3719))) << 2) << 2) + 0xC203D60)); }
        (((struct oAA_uchar *)(t1))->v) = 0x1;
        if ((*(signed char *)((t1 + 0x2))) == 0) {
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o40_float *)(t1))->v) = 1.0f;
            t3 = 0x4;
        } else {
            (((struct o48_float *)(t1))->v) = 0.5f;
            (((struct o44_float *)(t1))->v) = 0.5f;
            (((struct o40_float *)(t1))->v) = 0.5f;
            t3 = 0x2;
        }
        (((struct oAB_uchar *)(t1))->v) = t3;
        FUN_0c064d24(t1, 0x3, 0x3B, 0x0, 0x40, 0x0, 0x0, 0xF0);
        if ((int)t0 > 0) {
            t3 = 0x0;
            t4 = 0x0;
            for (;;) {
                t4 = (t4 + 0x1);
                t5 = *(int *)((((0xC4 + t1) + t3) + 0x0));
                *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x1000);
                (((struct o24_float *)((*(int *)((((0xC4 + t1) + t3) + 0x0)))))->v) = ((((struct o40_float *)(t1))->v));
                t3 = (t3 + 0x4);
                if ((int)t4 >= (int)t0) {
                    break;
                }
            }
        }
        FUN_0c07e3ae(t1, 0x78);
        (((struct o41C_uchar *)(t1))->v) = (*(signed char *)0xC54223C);
        *(unsigned short *)(((0x41C + t1) + 0x2)) = 0xB4;
        t2 = 0xB4;
    }
    return t2;
}

int FUN_0c0f4b68(int a4, int a5)
{
    int stk[6];
    register float u3;
    register float u4;
    register int t6;
    register int t8;
    register int t11;
    register int t24;
    register int t12;
    register int t13;
    register int t14;
    register int t21;

    *(unsigned int *)(((int)stk + 8)) = a4;
    thunk_FUN_0c05abb2(0x29, a5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(a5); }
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - 100.0f);
    FUN_0c14fb3c((((int)stk + 0) + 0xC), 0.899999976f, 0.829999983f, 0.629999995f, 4.0f, (1.0f + 1.0f));
    u3 = (((struct o0_float *)0xC1CE2F8)->v);
    u4 = (((struct o4_float *)0xC1CE2F8)->v);
    t6 = (int)((int)(nlRand()) % (int)0x28);
    t8 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = ((t8 << 2) << 1);
    *(unsigned int *)(((int)stk + 0)) = ((((t8 << 2) << 1) + 0xC4B40DC) + 0x4);
    t11 = FUN_0c037320(0x8, (*(int *)((((((t8 << 2) << 1) + 0xC4B40DC) + 0x4) + 0x0))));
    t24 = t11;
    if ((int)t11 > 0) {
        t12 = 0x0;
        t13 = (int)(((float)(((t6 << 2) << 1) + t6) * 65536.0f) / 360.0f);
        for (;;) {
            t14 = FUN_0c03f444(0x5, 0x0, 0x1);
            t21 = t14;
            if (t14 != 0) {
                FUN_0c03744a(((((struct oC4_int *)(t14))->v)), t12, 0x8, (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))));
                *(unsigned int *)((t14 + 0x4)) = 0xC0F4AAC;
                *(unsigned char *)((t14 + 0x1)) = 0xFFFFFFFF;
                (((struct oAC_ushort *)(t14))->v) = 0xF;
                (((struct oA9_uchar *)(t14))->v) = 0x21;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t14 + 0x28)) = *(struct mv3 *)(a5); }
                (((struct o54_float *)(t14))->v) = (u3 * (math_cos_angle16(t13)));
                (((struct o4C_float *)(t14))->v) = (u3 * (math_sin_angle16(t13)));
                (((struct o50_float *)(t14))->v) = u4;
                *(unsigned int *)((t14 + 0x38)) = t13;
                t21 = 0x50;
            }
            t12 = (t12 + 0x1);
            t13 = (t13 + 0x2000);
            if ((int)t12 >= (int)t11) {
                break;
            }
        }
        t24 = t21;
    }
    return t24;
}

int FUN_0c13241a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = a4;
    t1 = a5;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x3) {
            break;
        }
        t3 = (*(signed char *)((a4 + 0x1)));
        t4 = 0xC037320;
        t1 = t3;
        t3 = 0xC4B40FC;
        t1 = (t1 << 2);
        t1 = (*(int *)((t1 + t3)));
        t0 = 0xE;
        t3 = (FUN_0c037320(t0, t1));
        t5 = 0xC03F444;
        t1 = 0x0;
        t0 = 0x5;
        t3 = (FUN_0c03f444(t0, t1, t3));
        t6 = t3;
        if (t3 != 0) {
            t3 = (*(signed char *)((a4 + 0x1)));
            t1 = 0xE;
            t4 = 0xC03733C;
            t7 = t3;
            t3 = 0xC4B40FC;
            t0 = t6;
            t3 = (FUN_0c03733c(t0, t1, (*(int *)(((t7 << 2) + t3)))));
            t3 = 0xA8;
            t4 = 0x5;
            t5 = 0x21;
            *(unsigned char *)((t6 + t3)) = 0x1;
            t3 = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t6 + 0x1)) = t3;
            t3 = 0xAC;
            *(unsigned short *)((t6 + t3)) = t4;
            t3 = (t3 - 3);
            *(unsigned char *)((t6 + t3)) = t5;
            t3 = 0x14;
            *(unsigned char *)((t6 + t3)) = 0x0;
            t3 = 0x15;
            *(unsigned char *)((t6 + t3)) = 0x0;
            t3 = 0x0;
            t7 = t6;
            t5 = a4;
            t4 = 0xC187798;
            t5 = (t5 + 0x28);
            *(unsigned short *)((t6 + 0x1C)) = t3;
            t7 = (t7 + 0x28);
            *(unsigned short *)((t6 + 0x1E)) = t3;
            t3 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t5); }
            t5 = a4;
            t7 = t6;
            t5 = (t5 + 0x34);
            t7 = (t7 + 0x34);
            t3 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t5); }
            t5 = 0xC2A1608;
            t7 = t6;
            t7 = (t7 + 0x40);
            t3 = 0xC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t7) = *(struct mv3 *)(t5); }
            t3 = 0x3;
            t4 = 0xC18760C;
            t7 = t2;
            t3 = ((int)((int)t7 % (int)t3));
            t7 = t3;
            t2 = t3;
            t3 = 0xC2A14C8;
            t7 = (t7 << 2);
            t0 = 0x0;
            t4 = (*(int *)((t7 + t3)));
            *(unsigned int *)((t6 + 0x4)) = t4;
            for (;;) {
                t5 = 0xC4;
                t8 = t0;
                t8 = (t8 << 2);
                t5 = (t5 + t6);
                t5 = (t5 + t8);
                t4 = (*(int *)((t5 + 0x0)));
                t3 = 0x7;
                t5 = 0xC4;
                *(unsigned char *)((t4 + 0x0)) = 0x1;
                t5 = (t5 + t6);
                t5 = (t5 + t8);
                t4 = (*(int *)((t5 + 0x0)));
                *(unsigned short *)((t4 + 0x6)) = t3;
                if (t0 == 0) {
                    t5 = 0xC4;
                    t3 = 0x68;
                    t5 = (t5 + t6);
                    t5 = (t5 + t8);
                    t4 = (*(int *)((t5 + 0x0)));
                    *(unsigned int *)((t4 + t3)) = 0x0;
                } else {
                    t1 = 0xC4;
                    t1 = (t1 + t6);
                    t3 = t8;
                    t5 = (*(int *)((t1 + t3)));
                    t3 = 0xC2A14D4;
                    t3 = (*(signed char *)((t0 + t3)));
                    t3 = (t3 << 2);
                    t4 = (*(int *)((t1 + t3)));
                    t3 = 0x68;
                    t7 = t4;
                    t7 = (t7 + 0x28);
                    *(unsigned int *)((t5 + t3)) = t7;
                    t8 = t1;
                }
                t4 = 0x6;
                t1 = t8;
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)t4) {
                    break;
                }
            }
            t6 = t7;
            t8 = t5;
            t9 = t4;
            t10 = t0;
            t11 = t1;
        }
        t7 = t6;
        t2 = (t2 + 0x1);
        t5 = t8;
        t4 = t9;
        t0 = t10;
        t1 = t11;
    }
    return t3;
}

int FUN_0c13d160(int a4, int a5, int a6)
{
    int stk[6];
    register int t2;
    register int t3;
    register int t29;
    register int t17;
    register float u24;

    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t2 = FUN_0c037320(0x8, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    t29 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13D04C;
        *(unsigned int *)((t3 + 0x34)) = 0x1555;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x8, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        if ((*(signed char *)((t3 + 0x2))) != 0) {
            (((struct o41C_uint *)(t3))->v) = (*(int *)(((int)stk + 20)));
        }
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t17 = *(signed char *)((t3 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t3, 0x1, 0x30, 0x2, 0x100, (~((int)0x1 << (int)t17)), 0x0, 0xF0);
        FUN_0c07e2f4(t3, 0x60);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t3 + 0x28));
        (((struct o50_float *)(t3))->v) = ((((struct o0_float *)0xC13D2D8)->v));
        (((struct o5C_float *)(t3))->v) = -1.0f;
        u24 = (((struct o4_float *)0xC13D2D8)->v);
        (((struct o4C_float *)(t3))->v) = ((math_sin_angle16((*(int *)((t3 + 0x38))))) * u24);
        (((struct o54_float *)(t3))->v) = ((math_cos_angle16((*(int *)((t3 + 0x38))))) * u24);
        t29 = 0x54;
    }
    return t29;
}

int FUN_0c16c328(int a4)
{
    register int t0;
    register int t3;
    register int t23;

    t0 = 0x0;
    for (;;) {
        FUN_0c037320(0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
        t3 = FUN_0c03f444(0x1, 0x0, 0x3);
        t23 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16C484;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x1F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x0, 0x4A, ((((struct oC_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
            FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x0, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x20F;
            (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x4)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
            FUN_0c03744a(((((struct oCC_int *)(t3))->v)), 0x1, 0x54, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned short *)((((((struct oCC_int *)(t3))->v)) + 0x6)) = 0xF;
            (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x8)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
            (((struct o48_float *)(t3))->v) = 0.699999988f;
            (((struct o44_float *)(t3))->v) = 0.699999988f;
            (((struct o40_float *)(t3))->v) = 0.699999988f;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            FUN_0c07e3ae(t3, (*(signed char *)0xC274803));
            t23 = (FUN_0c064d24(t3, 0x3, 0x6, 0x0, 0x100, 0xF, 0xF, 0xFFFFFFF0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t23;
}

int FUN_0c084bbc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u13;
    register int t23;
    register int t24;
    register int t1;
    register int t2;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x1E;
    t0 = (((struct o3768_int *)(a4))->v);
    if ((t0 != 0) && ((t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 72) || (t2 = *(signed char *)((t0 + 0x41C)), (unsigned char)t2 == 70))) {
        FUN_0c081dfc(a4, a5, a6, a7);
        (((struct o15_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 12)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((((((struct o3768_int *)(a4))->v)) + 0x28)); }
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -2.5f;
        t6 = math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4));
        u7 = (((struct o37C4_float *)(a4))->v);
        u8 = (((struct o28_float *)(a4))->v);
        u9 = (((struct o37CC_float *)(a4))->v);
        u10 = (((struct o30_float *)(a4))->v);
        u13 = ((u10 - u9) * (u10 - u9));
        u13 = u13 + ((u8 - u7)) * ((u8 - u7));
        (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u13));
        *(unsigned short *)((a4 + 0x1C)) = (int)((((((struct o50_float *)(a4))->v)) / ((((struct o5C_float *)(a4))->v))) * (1.0f + 1.0f));
        (((struct o3790_float *)(a4))->v) = (((((struct o3790_float *)(a4))->v)) / (float)(*(short *)((a4 + 0x1C))));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16(t6)) * ((((struct o3790_float *)(a4))->v))));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16(t6)) * ((((struct o3790_float *)(a4))->v))));
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x0;
        t23 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t23;
        t24 = t23;
        *(int *)((int)stk + 0) = t24;
        return (FUN_0c07e79c(a4, t23, 0x0, 0x8, t24, 0x0, 0x8));
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
