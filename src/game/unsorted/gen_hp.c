/* Straight-line functions with calls and guards (batch gen_hp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o187_uchar { char p[0x187]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c060454(int, int, float);
int FUN_0c06475c(int, int, float);
int FUN_0c0c2ab6(int, int);
extern int FUN_0c0c2d56();
int FUN_0c0d04c4(int, int);
int FUN_0c118810(int, int);
int FUN_0c14c1b4(int, int, int, int, int);
int FUN_0c14f8aa(int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c15ae2e(int, int, Stk3);
int FUN_0c15b320(int, int, Stk3);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c15009e(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c060daa(int a4, int a5, float f4);
int FUN_0c108028(int a4, int a5, int a6, int a7);
int FUN_0c0e00a4(int a4, int a5, int a6, int a7);
int FUN_0c15b366(int a4, int a5, int a6, int a7);
int FUN_0c151904(int a4, int a5, int a6, int a7);
int FUN_0c0a4f3a(int a4);
int FUN_0c14d5de(int a4, int a5, int a6, int a7);
int FUN_0c0d704c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0b5b8e(int a4, int a5);

int FUN_0c15009e(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int stk[12];
    register int t0;
    register int t3;
    register int t12;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)(a4); }
    t0 = *(int *)0xC542260;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)((0xC2030D8 + ((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2))); }
    math_vec3_mul_xyz((((int)stk + 8) + 0x10), f8, f8, f8);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    *(int *)((int)stk + 0) = 0x0;
    t3 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x24), 0x0, (((int)stk + 8) + 0x10));
    t12 = t3;
    if (t3 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t3))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 8)));
        (((struct o20_float *)(((((struct oC4_int *)(t3))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t3)))->v) = (*(float *)(((int)stk + 12)));
        *(unsigned short *)((t3 + 0x1E)) = 0x0;
        t12 = 0x0;
    }
    return t12;
}

int FUN_0c060daa(int a4, int a5, float f4)
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
    register float u0;
    register float u1;

    t0 = *(signed char *)((a5 + 0x3));
    t1 = 0x0;
    if ((int)t0 > 0) {
        t2 = t0;
        t3 = 0x0;
        t4 = a5;
        t5 = 0x0;
        t6 = 0x0;
        t7 = a5;
        for (;;) {
            if (((*(signed char *)((t7 + 0x0))) & 0x4) != 0) {
                t8 = t6;
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t8 = (t8 << 1);
                t2 = 0x20;
                { struct mv8 { int w[8]; }; *(struct mv8 *)(((0x184 + a4) + t8)) = *(struct mv8 *)(t7); }
                t4 = 0x184;
                t4 = (t4 + a4);
                t4 = (t4 + t8);
                t3 = a4;
                t2 = (FUN_0c060454(t3, t4, f4));
                t2 = (*(signed char *)((t7 + 0x1)));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t3 = 0x184;
                        t2 = 0x18;
                        t3 = (t3 + a4);
                        t3 = (t3 + t8);
                    } else {
                        t3 = 0x184;
                        t3 = (t3 + a4);
                        t3 = (t3 + t8);
                        t2 = 0x18;
                    }
                } else {
                    t3 = 0x184;
                    t3 = (t3 + a4);
                    t3 = (t3 + t8);
                    t2 = 0x14;
                }
                u0 = *(float *)((t3 + t2));
                t2 = 0xC;
                u1 = *(float *)((t3 + t2));
                t4 = 0x184;
                t4 = (t4 + a4);
                t4 = (t4 + t8);
                t3 = a4;
                t2 = (FUN_0c06475c(t3, t4, (u1 + u0)));
                t6 = (t6 + 0x1);
            } else {
                t8 = t3;
                t9 = t4;
            }
            t5 = (t5 + 0x1);
            t3 = t8;
            t4 = t9;
            t7 = (t7 + 0x20);
            if ((int)t5 >= (int)t0) {
                break;
            }
        }
        t1 = t6;
    }
    (((struct o187_uchar *)(a4))->v) = t1;
    return 0x187;
}

int FUN_0c108028(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x100);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((a4 + 0x4C)); }
    u0 = (((struct o0_float *)0xC108118)->v);
    u1 = (((struct o30_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC108118)->v);
    (((struct o40_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o44_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o48_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    FUN_0c118810(a4, (*(int *)((((*(int *)0xC474404) << 2) + 0xC474410))));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + ((((struct o14_float *)0xC108118)->v)));
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0e00a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) != 1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)0xC540D94) + 0x28)); }
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 2300.0f);
            t1 = 0x28;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & 0xFFFFFFBF);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t2;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t2 = (t2 + 0x1);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)0xC540D94) + 0x28)); }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 2300.0f);
        t0 = 0x28;
    }
    return t0;
}

int FUN_0c15b366(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = *(signed char *)((v0_3 + 0x14));
    v0_2 = (v0_1);
    v0_3 = (v0_3);
    w0_0 = (200.0f);
    if ((v0_1 == 0)) goto L_C15B38A;
    if ((v0_2 == 1)) goto L_C15B3AC;
    if ((v0_2 == 2)) goto L_C15B3BA;
    if ((v0_2 == 3)) goto L_C15B3E4;
    v0_2 = ((FUN_0c03f346(v0_3, v0_0, a6, a7)));
    L_C15B406:;
    return v0_2;
    L_C15B3E4:;
    if (((*(short *)((v0_3 + 0x1C))) != ((((struct o4_int *)0xC2A2AAC)->v)))) goto L_C15B3F8;
    L_C15B3EE:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    v0_2 = (0x14);
    goto L_C15B406;
    L_C15B3F8:;
    v0_0 = *(short *)((v0_3 + 0x1C));
    *(unsigned short *)((v0_3 + 0x1C)) = (v0_0 + 0x1);
    v0_2 = ((v0_0 + 0x1));
    goto L_C15B406;
    L_C15B3BA:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    *(unsigned short *)((v0_3 + 0x1C)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_3 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + w0_0);
    FUN_0c15b320(((int)stk + 0), (v0_3 + 0x4C), *(Stk3 *)(((int)stk + 0)));
    goto L_C15B3E4;
    L_C15B3AC:;
    if (((*(short *)((v0_3 + 0x1C))) == ((((struct o0_int *)0xC2A2AAC)->v)))) goto L_C15B3EE;
    goto L_C15B3F8;
    L_C15B38A:;
    (((struct o14_uchar *)(v0_3))->v) = ((*(signed char *)((v0_3 + 0x14))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_3 + 0x28)); }
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + w0_0);
    FUN_0c15ae2e(((int)stk + 0), v0_0, *(Stk3 *)(((int)stk + 0)));
    goto L_C15B3AC;
}

int FUN_0c151904(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t9;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x1, 0x3, a7);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1519B2;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a4); }
        *(unsigned int *)((t0 + 0x38)) = a5;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            FUN_0c03744a((*(int *)((((0xC4 + t0) + t2) + 0x0))), 0x0, 0xD, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t2) + 0x0))) + 0x0)) = 0x1;
            t1 = (t1 + 0x1);
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t2) + 0x0))) + 0x6)) = 0x3F;
            t2 = (t2 + 0x4);
            if ((int)(signed char)t1 >= (int)0x3) {
                break;
            }
        }
        t9 = 0x3F;
    }
    return t9;
}

int FUN_0c0a4f3a(int a4)
{
    int stk[3];
    register float u3;
    register float u7;
    register float u13;
    register float u17;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    u3 = (*(float *)(((int)stk + 0)));
    u3 = u3 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
    *(float *)(((int)stk + 0)) = u3;
    u7 = (*(float *)(((int)stk + 8)));
    u7 = u7 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
    *(float *)(((int)stk + 8)) = u7;
    FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    u13 = (*(float *)(((int)stk + 0)));
    u13 = u13 + 40.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
    *(float *)(((int)stk + 0)) = u13;
    u17 = (*(float *)(((int)stk + 8)));
    u17 = u17 + 40.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
    *(float *)(((int)stk + 8)) = u17;
    return (FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2));
}

int FUN_0c14d5de(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t9;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t9 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x3, 0x47, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14D5AC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((0xC5324D0 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))));
        (((struct o48_float *)(t0))->v) = 0.800000012f;
        (((struct o44_float *)(t0))->v) = 0.800000012f;
        (((struct o40_float *)(t0))->v) = 0.800000012f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(a5); }
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = 2.20000005f;
        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
        t9 = 0x3C;
    }
    return t9;
}


int FUN_0c0b5b8e(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t3;

    t0 = 0xF4;
    if (a5 == 0) {
        t0 = 0xE4;
    }
    t3 = *(int *)((a4 + t0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)(((((a5 << 1) + a5) << 2) + 0xC1C6810)); }
    *(int *)((int)stk + 8) = 0x0;
    FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 8) + 0x4), ((0x38F8 + a4) + 0x1C), *(int *)((int)stk + 8));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 50.0f);
    *(int *)((int)stk + 4) = 0x1;
    FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 4) + 0x8), ((0x38F8 + a4) + 0x1C), 0x1);
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - 130.0f);
    *(int *)((int)stk + 0) = 0x2;
    return (FUN_0c14c1b4(a4, (t3 + 0x28), (((int)stk + 0) + 0xC), ((0x38F8 + a4) + 0x1C), 0x2));
}
