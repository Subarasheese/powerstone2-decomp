/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[9]; } Stk9;
struct o0_float { float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
extern int FUN_0c02b50c();
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0d04c4(int, int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c148f08(int);
int FUN_0c149560(int, int);
int FUN_0c1495c0(int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int math_atan2_angle16(int, int, float, float);
int nlAddVector3op(int, int, int);
float FUN_0c0ca7bc(int a4, float f4);
int FUN_0c14914c(int a4);
int FUN_0c0dc2d0(int a4, int a5, int a6, int a7);
int FUN_0c0dd674(int a4, int a5, int a6, int a7);
int FUN_0c02568a(void);
int FUN_0c0398f0(int a4, int a5, int a6);
int FUN_0c14f6a0(int a4, int a5, float f4);
int FUN_0c14f8aa(int a4, int a5, int a6);
int FUN_0c1501f2(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c150160(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c136d54(int a4, int a5, int a6, int a7);
int FUN_0c150010(int a4, float f4, float f5, float f6, float f7);
void FUN_0c060fc2(int a4, int a5);
void FUN_0c064892(int a4, int a5, int a6);
int FUN_0c0d7e24(int a4, int a5, int a6, int a7);
int FUN_0c131258(int a4, int a5, int a6, int a7);
int FUN_0c14984a(int a4);
int FUN_0c1498e4(int a4);
int FUN_0c0ef2e0(int a4, int a5);
int FUN_0c0f8a38(int a4, int a5, int a6, int a7, float f4);

float FUN_0c0ca7bc(int a4, float f4)
{
    int stk[3];
    register float u10;
    register float u11;
    register int t16;

    if (((*(int *)0xC542260) & 2) == 0) {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    } else {
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct o8_float *)(((int)stk + 0)))->v) = 0.0f;
    *(float *)((((int)stk + 0) + 0x0)) = 0.0f;
    u10 = (((struct o4_float *)0xC0CA900)->v);
    u11 = ((((struct o0_float *)0xC0CA900)->v));
    u11 = u11 + u10 * f4;
    (((struct o4_float *)(((int)stk + 0)))->v) = u11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 0)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 0)); }
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) + 80.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 0)); }
    t16 = (((struct oD0_int *)(a4))->v);
    (((struct o7C_uint *)(t16))->v) = (((((struct o7C_int *)(t16))->v)) + 0x5000);
    return u10;
}

int FUN_0c14914c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c042fe0();
        if (t0 != 0) {
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            }
            t1 = *(short *)((a4 + 0x1C));
            if ((int)t1 <= 0) {
                t2 = FUN_0c148f08(a4);
                if (t2 != 0) {
                    return FUN_0c148d64(a4, 0x4, 0x0);
                }
                return t2;
            }
            return t1;
        }
        return t0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC2029D8 + (((t0 << 1) + t0) << 2))); }
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    FUN_0c148d04(a4, 0x0);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    t0 = FUN_0c042fe0();
    if (t0 != 0) {
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        t1 = *(short *)((a4 + 0x1C));
        if ((int)t1 <= 0) {
            t2 = FUN_0c148f08(a4);
            if (t2 != 0) {
                return FUN_0c148d64(a4, 0x4, 0x0);
            }
            return t2;
        }
        return t1;
    }
    return t0;
}

int FUN_0c0dc2d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t6;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
        t6 = t2;
        if (t2 != 0) {
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t2 + 0x4)) = 0xC0DC366;
            *(unsigned int *)((t2 + 0x10)) = a4;
            *(unsigned char *)((t2 + 0x2)) = t0;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x1;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
            t1 = ((((struct oC4_int *)(t2))->v));
            FUN_0c03744a(t1, t0, a5, (*(int *)0xC4B410C));
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0xF;
            t6 = 0xF;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t6;
}

int FUN_0c0dd674(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1CA0AC + (((t0 << 1) + t0) << 2))); }
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t0 = (t0 + 0x1);
        }
        t1 = 0xC0;
    }
    return t1;
}

int FUN_0c02568a(void)
{
    int stk[15];
    register int t0;

    { struct mv9 { int w[9]; }; *(struct mv9 *)(((int)stk + 8)) = *(struct mv9 *)(0xC1A8C40); }
    t0 = ((int (*)(Stk9, float))(FUN_0c02b50c))(*(Stk9 *)(((int)stk + 8)), 0.75f);
    FUN_0c02b502(0x7);
    FUN_0c02b3ba((((short)(*(signed char *)0xC30A34B) * (short)0x86) + 0xC309E10), (*(float *)((((int)stk + 8) + 0x0))), ((((struct o4_float *)(((int)stk + 8)))->v)), ((((struct o8_float *)(((int)stk + 8)))->v)));
    *(int *)((int)stk + 4) = ((*(short *)((((short)(*(signed char *)0xC30A34B) * (short)0x86) + 0xC309E0E))));
    *(int *)((int)stk + 0) = 0xC1A8C64;
    FUN_0c187cac((((int)stk + 0) + 0x2C), 0x0, 0x0, 0x0, 0xC1A8C64);
    FUN_0c02b3ba((((int)stk + 0) + 0x2C), ((((struct oC_float *)(((int)stk + 8)))->v)), ((((struct o4_float *)((((int)stk + 8) + 0xC)))->v)), ((((struct o8_float *)((((int)stk + 8) + 0xC)))->v)));
    FUN_0c02b3ba(0xC1A8C68, ((((struct o18_float *)(((int)stk + 8)))->v)), ((((struct o4_float *)((((int)stk + 8) + 0x18)))->v)), ((((struct o8_float *)((((int)stk + 8) + 0x18)))->v)));
    return (((int (*)(float))(FUN_0c02b50c))(1.0f));
}

int FUN_0c0398f0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = (a6 + 0x18);
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((t0 + 0x0))) == 0) {
            break;
        }
        t2 = *(int *)((t0 + 0x0));
        if ((int)t2 < 0) {
            t0 = (t0 + 0x50);
        }
        t3 = (*(int *)((t0 + 0x0)));
        t0 = (t0 + 0x4);
        t4 = 0x0;
        if ((t3 & 0x10) != 0) {
            t5 = (*(int *)((t0 + 0x0)));
            t0 = (t0 + 0x4);
        } else {
            t5 = (*(int *)((t0 + 0x0)));
            t0 = (t0 + 0x4);
            t3 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t3);
        }
        if ((int)t5 > 0) {
            t6 = t2;
            for (;;) {
                t3 = (*(int *)((t0 + 0x0)));
                if ((t3 & 0x1) != 0) {
                    t3 = t0;
                    t3 = (t3 - a6);
                    t2 = t1;
                    t2 = (t2 << 2);
                    t2 = (t2 + a5);
                    if ((int)t3 < 0) {
                        t3 = (t3 + 0x3);
                    }
                    t3 = (t3 >> 1);
                    t6 = t0;
                    t3 = (t3 >> 1);
                    *(unsigned int *)((t2 + 0x0)) = t3;
                    t2 = t1;
                    t2 = (t2 << 1);
                    t3 = t1;
                    t2 = (t2 + t3);
                    t3 = 0xC187798;
                    t2 = (t2 << 2);
                    t2 = (t2 + a4);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t2) = *(struct mv3 *)(t6); }
                    t1 = (t1 + 0x1);
                    t0 = (t0 + 0x20);
                    t2 = 0xC187798;
                } else {
                    t0 = (t0 + 0x8);
                    t2 = t3;
                }
                t4 = (t4 + 0x1);
                t3 = t2;
                if ((int)t4 >= (int)t5) {
                    break;
                }
            }
        }
    }
    return t1;
}

int FUN_0c14f6a0(int a4, int a5, float f4)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t13;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a5;
    *(float *)(((int)stk + 8)) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x8)) = *(struct mv3 *)(a4); }
    t0 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t2 = FUN_0c1502e8(0x2, 0x1, 0x1, (((int)stk + 0) + 0x10), 0x0, (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC2030D8));
    t13 = t2;
    if (t2 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
        t5 = *(signed char *)(((int)stk + 12));
        (((struct o18_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((0xC202D84 + (((t5 << 1) + t5) << 2)) + 0x0)));
        (((struct o1C_float *)(((((struct oC4_int *)(t2))->v))))->v) = ((((struct o4_float *)((0xC202D84 + (((t5 << 1) + t5) << 2))))->v));
        (((struct o20_float *)(((((struct oC4_int *)(t2))->v))))->v) = ((((struct o8_float *)((0xC202D84 + (((t5 << 1) + t5) << 2))))->v));
        (((struct o4_float *)((0x41C + t2)))->v) = (*(float *)(((int)stk + 8)));
        *(unsigned short *)((t2 + 0x1E)) = 0x0;
        t13 = 0x0;
    }
    return t13;
}

int FUN_0c14f8aa(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t4;
    register int t7;
    register int t10;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x8)) = *(struct mv3 *)(a5); }
    t0 = *(int *)0xC542260;
    nlAddVector3op((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x8), (((((0x7 & ((unsigned int)t0 >> 1)) << 1) + (0x7 & ((unsigned int)t0 >> 1))) << 2) + 0xC202DA8));
    t4 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t4 & 0x3) << 1) + (t4 & 0x3)) << 2) + 0xC202E08);
    *(int *)((int)stk + 0) = 0x0;
    t7 = FUN_0c1502e8((*(signed char *)(((int)stk + 12))), 0x1, 0x1, (((int)stk + 0) + 0x10), 0x0, (((((t4 & 0x3) << 1) + (t4 & 0x3)) << 2) + 0xC202E08));
    t10 = t7;
    if (t7 != 0) {
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(t7))->v)) + 0x14)) = *(struct mv4 *)(((((*(int *)(((int)stk + 8))) << 2) << 2) + 0xC202D54)); }
        (((struct o4_float *)((0x41C + t7)))->v) = 1.0f;
        *(unsigned short *)((t7 + 0x1E)) = 0x0;
        t10 = 0x0;
    }
    return t10;
}

int FUN_0c1501f2(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t12;

    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 20)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    *(unsigned int *)(((int)stk + 8)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x14)) = *(struct mv3 *)(a4); }
    t0 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t2 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x1C), 0x0, (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC2030D8));
    t12 = t2;
    if (t2 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((int)stk + 24)));
        (((struct o1C_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o20_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t2)))->v) = (*(float *)(((int)stk + 12)));
        t12 = *(int *)(((int)stk + 8));
        *(unsigned short *)((t2 + 0x1E)) = t12;
    }
    return t12;
}

int FUN_0c150160(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int stk[11];
    register int t0;
    register int t3;
    register int t5;
    register int t14;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 16)) = f5;
    *(float *)(((int)stk + 12)) = f6;
    *(float *)(((int)stk + 8)) = f7;
    t0 = *(int *)0xC542260;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)((0xC2030D8 + ((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2))); }
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x18);
    t3 = (*(int *)(((int)stk + 28)));
    *(int *)((int)stk + 0) = t3;
    t5 = FUN_0c1502e8(0x0, 0x1, 0x1, (*(int *)(((int)stk + 24))), t3, (((int)stk + 8) + 0x18));
    t14 = t5;
    if (t5 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t5))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o20_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o4_float *)((0x41C + t5)))->v) = (*(float *)(((int)stk + 8)));
        *(unsigned short *)((t5 + 0x1E)) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c136d54(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t10;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC136AB4;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 8)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(t0))->v)) + 0x6C)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        t5 = (((struct oC8_int *)(t0))->v);
        (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) + ((((struct o0_float *)0xC2A17D4)->v)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(t0))->v)) + 0x84)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        t10 = (((struct oC8_int *)(t0))->v);
        (((struct o88_float *)(t10))->v) = (((((struct o88_float *)(t10))->v)) + ((((struct o4_float *)0xC2A17D4)->v)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((((((struct oC8_int *)((*(int *)((t0 + 0x10)))))->v)) + 0x6C)); }
        return t0;
    }
    return 0x0;
}

int FUN_0c150010(int a4, float f4, float f5, float f6, float f7)
{
    int stk[9];
    register int t0;
    register int t2;
    register int t11;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(a4); }
    t0 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = 0x0;
    t2 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x18), 0x0, (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC2030D8));
    t11 = t2;
    if (t2 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t2))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((int)stk + 8)));
        (((struct o20_float *)(((((struct oC4_int *)(t2))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t2)))->v) = (*(float *)(((int)stk + 12)));
        *(unsigned short *)((t2 + 0x1E)) = 0x0;
        t11 = 0x0;
    }
    return t11;
}

void FUN_0c060fc2(int a4, int a5)
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

    t0 = (0xC471A2C + ((a5 << 2) << 2));
    t1 = 0x0;
    t2 = 0xC4F90AC;
    t3 = ((a5 * 0x12C0) + 0xC46E1EC);
    t4 = 0xC4F6B2C;
    for (;;) {
        t5 = *(int *)(((t1 << 2) + (0xC471A2C + ((a5 << 2) << 2))));
        t6 = *(int *)(((t1 << 2) + 0xC4F90AC));
        if ((int)t5 > 0) {
            t7 = 0x0;
            t8 = t3;
            t9 = ((((t6 << 1) + t6) << 2) + t4);
            for (;;) {
                t0 = t8;
                t6 = t9;
                t8 = (t8 + 0xC);
                t9 = (t9 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t6) = *(struct mv3 *)(t0); }
                t7 = (t7 + 0x1);
                if ((int)t7 >= (int)t5) {
                    break;
                }
            }
        }
        t0 = 0x4;
        t1 = (t1 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = ((*(int *)((t2 + 0x0))) + t5);
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x4B0);
        t4 = (t4 + 0x960);
        if ((int)t1 >= (int)t0) {
            break;
        }
    }
}

void FUN_0c064892(int a4, int a5, int a6)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t0;
    register int t1;
    register int t2;
    register int t17;

    t3 = a6;
    t4 = 0x0;
    t5 = (0xC + a4);
    t6 = 0x1;
    for (;;) {
        if ((int)t6 >= (int)a5) {
            break;
        }
        t1 = t5;
        t2 = 0xC187798;
        t0 = ((int)stk + 0);
        t3 = t4;
        t5 = (t5 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        for (;;) {
            if ((int)t3 >= 0) {
                t2 = t3;
                t2 = (t2 << 1);
                t1 = t3;
                t2 = (t2 + t1);
                t2 = (t2 << 2);
                t2 = (t2 + a4);
                if (!((((((struct o8_float *)(t2))->v))) > ((*(float *)(((int)stk + 8)))))) {
                    t17 = t2; break;
                }
                t1 = t3;
                t1 = (t1 << 1);
                t2 = t3;
                t1 = (t1 + t2);
                t1 = (t1 << 2);
                t1 = (t1 + a4);
                t0 = t1;
                t0 = (t0 + 0xC);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
                t3 = (t3 - 1);
                continue;
            }
            t17 = 0xC187798; break;
        }
        t0 = t3;
        t2 = t17;
        t0 = (t0 << 1);
        t2 = t3;
        t0 = (t0 + t2);
        t0 = (t0 << 2);
        t0 = (t0 + a4);
        t1 = ((int)stk + 0);
        t0 = (t0 + 0xC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t0) = *(struct mv3 *)(t1); }
        t4 = (t4 + 0x1);
        t6 = (t6 + 0x1);
    }
}

int FUN_0c0d7e24(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t1 - 1);
        }
        t1 = t0;
        if ((int)(*(signed char *)0xC54223C) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x384;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC28766C + (((t0 << 1) + t0) << 2))); }
    *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287684 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 65536.0f) / 360.0f);
    (((struct o126_uchar *)(a4))->v) = 0x2;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    if ((int)(*(signed char *)0xC54223C) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x384;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return 0x14;
}

int FUN_0c131258(int a4, int a5, int a6, int a7)
{
    register int t17;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 7) {
            if (!(((((struct o8C_float *)((*(int *)((0xC5325B0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))))))->v)) > (*(float *)0xC1313AC))) {
                if ((unsigned short)(*(short *)((0xC535CB0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0x11B) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
                *(unsigned int *)((a4 + 0x34)) = ((*(int *)(((*(int *)((a4 + 0x10))) + 0x34))) + 0xE38);
                *(unsigned int *)((a4 + 0x38)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x38)));
                t17 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t17))->v) = (((((struct o7C_int *)(t17))->v)) + 0xAAA);
                return 0x7C;
            }
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c14984a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (((*(short *)((a4 + 0x1C))) & 4) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            return FUN_0c1495c0(a4, 0x3, 0x0);
        }
        return (short)(t0 - 1);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC202A08 + (((t0 << 1) + t0) << 2))); }
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
    (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    if (((*(short *)((a4 + 0x1C))) & 4) != 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        return FUN_0c1495c0(a4, 0x3, 0x0);
    }
    return (short)(t0 - 1);
}

int FUN_0c1498e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC542363;
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
        if (t1 == 7) {
            t2 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3732));
            if (t2 == 3) {
                return FUN_0c1495c0(a4, 0x4, 0x0);
            }
            return t2;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x78;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t1 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC202A08 + (((t1 << 1) + t1) << 2))); }
    (((struct o48_float *)(a4))->v) = 1.0f;
    (((struct o44_float *)(a4))->v) = 1.0f;
    (((struct o40_float *)(a4))->v) = 1.0f;
    FUN_0c149560(a4, 0x0);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
    if (t1 == 7) {
        t2 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3732));
        if (t2 == 3) {
            return FUN_0c1495c0(a4, 0x4, 0x0);
        }
        return t2;
    }
    return t1;
}

int FUN_0c0ef2e0(int a4, int a5)
{
    int stk[4];
    register float u4;
    register float u5;
    register int t11;
    register int t13;
    register int t16;
    register int t17;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC1CD270); }
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v)) - ((((struct o28_float *)(a4))->v)));
    u4 = (((struct o30_float *)(a4))->v);
    u5 = (((struct o30_float *)((*(int *)((a4 + 0x10)))))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u5 - u4);
    if ((u5 - u4) == 0.0f) {
        (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (*(float *)0xC0EF40C);
    }
    t11 = math_atan2_angle16(a4, a5, ((((struct o4_float *)(((int)stk + 0)))->v)), ((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)));
    t13 = t11;
    if ((int)(t11 - (*(int *)((a4 + 0x38)))) > (int)0x8000) {
        t13 = (t11 - 0x10000);
    }
    t16 = *(int *)((a4 + 0x38));
    t17 = t13;
    if ((int)(t13 - (*(int *)((a4 + 0x38)))) < (int)0xFFFF8000) {
        t17 = (t13 + 0x10000);
    }
    t20 = (int)((int)(t17 - t16) / (int)(*(int *)(((int)stk + 0))));
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t20);
    return t20;
}

int FUN_0c0f8a38(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = *(short *)0xC541F4E;
        *(unsigned short *)((a4 + 0x1E)) = t0;
        *(unsigned short *)((a4 + 0x1C)) = t0;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1FB508 + (((t0 << 1) + t0) << 2))); }
    }
    if ((*(short *)((a4 + 0x1E))) != 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        u0 = *(float *)0xC0F8B4C;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            u1 = (((((struct o28_float *)(a4))->v)) + (u0 / (float)(*(short *)((a4 + 0x1C)))));
        } else {
            u1 = (((((struct o28_float *)(a4))->v)) - (u0 / (float)(*(short *)((a4 + 0x1C)))));
        }
        (((struct o28_float *)(a4))->v) = u1;
    }
    t0 = *(signed char *)0xC541F43;
    if ((int)(unsigned char)t0 >= (int)0xC) {
        return FUN_0c03f346(a4, 0xC541F3C, a6, a7);
    }
    return (unsigned char)t0;
}
