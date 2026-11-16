/* Straight-line functions with calls and guards (batch gen_na): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c07053a(int, int, float);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c08(int);
int FUN_0c0c8c36(int);
int FUN_0c0d01f2(int);
int FUN_0c136098(int);
int FUN_0c187798(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c039df8(int a4);
int FUN_0c092a0c(int a4, int a5, int a6, int a7);
int FUN_0c0cbcb0(int a4, int a5, int a6, int a7);
int FUN_0c136108(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1611ba(int a4, int a5, int a6, int a7);
int FUN_0c04908c(int a4);

int FUN_0c039df8(int a4)
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

    t1 = *(signed char *)((a4 + 0x1));
    t2 = *(signed char *)(((0x371A + a4) + 0x0));
    t3 = *(int *)((((t2 << 2) + (0xC3C7DD8 + ((t1 << 2) << 1))) + 0x0));
    t4 = *(signed char *)((a4 + 0x2));
    t5 = *(int *)0xC1B71E4;
    t6 = *(signed char *)((((0xC3C7DF8 + (t1 << 1)) + t2) + 0x0));
    t7 = t4;
    if ((int)t4 < (int)t5) {
        t8 = t4;
        t4 = 0xC1B71E4;
        t9 = t5;
        t5 = t1;
        t1 = t2;
        t2 = 0x0;
        t10 = (0x0 + t3);
        for (;;) {
            if ((int)t2 >= (int)t6) {
                break;
            }
            t1 = 0x371A;
            t5 = t10;
            t8 = (*(signed char *)((a4 + 0x1)));
            t1 = (t1 + a4);
            t9 = (*(signed char *)((t5 + 0x0)));
            t1 = (*(signed char *)((t1 + 0x0)));
            t8 = (t8 << 2);
            t8 = (t8 << 1);
            t1 = (t1 << 2);
            t8 = (t8 + 0xC4B40DC);
            t9 = (t9 << 2);
            t1 = (*(int *)((t1 + t8)));
            t9 = (t9 << 2);
            t8 = (*(signed char *)((t5 + 0x1)));
            t1 = (t1 + 0x10);
            t9 = (t9 << 1);
            t1 = (t1 + t9);
            t9 = (*(int *)((t1 + 0x18)));
            if ((int)t8 < (int)t9) {
                t8 = (*(signed char *)((t5 + 0x1)));
                t3 = 0x3C;
                t9 = (*(int *)((t1 + 0x1C)));
                t3 = ((short)t8 * (short)t3);
                t3 = (t3 + t9);
                t3 = (*(int *)((t3 + 0x0)));
                if (t3 != 0) {
                    t1 = 0x0;
                    for (;;) {
                        t4 = (*(int *)((t5 + 0x2C)));
                        if ((int)t1 >= (int)t4) {
                            break;
                        }
                        t8 = (*(int *)((t5 + 0x28)));
                        t3 = *(short *)(((t1 << 1) + t8));
                        t8 = (*(int *)((t5 + 0x34)));
                        t4 = t3;
                        t9 = t3;
                        t4 = (t4 << 1);
                        *(volatile int *)(((t3 << 2) + t8));
                        t4 = (t4 + t9);
                        t8 = (*(int *)((t5 + 0x30)));
                        t9 = 0xC187798;
                        t4 = (t4 << 2);
                        t4 = (t4 + t8);
                        t8 = 0xC;
                        t8 = (FUN_0c187798(a4, t5, t1));
                        t1 = (t0 + 0x1);
                    }
                }
                t10 = (t10 + 0x48);
                t2 = (t2 + 0x1);
                continue;
            }
            return t8;
        }
        t0 = *(signed char *)((a4 + 0x1));
        *(unsigned char *)((((*(signed char *)(((0x371A + a4) + 0x0))) + (0xC3C7DF8 + (t0 << 1))) + 0x0)) = 0x0;
        t7 = (t0 << 1);
    }
    return t7;
}

int FUN_0c092a0c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4, a5, a6, a7);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x8, (t0), 0x2, 0x8);
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
            FUN_0c07053a(a4, 0x1E, 10.0f);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 30.0f));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 30.0f));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0cbcb0(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(signed char *)((a4 + 0x41D))) != 10) {
        if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC54223C, t0 == 1)) {
            FUN_0c0c2d56(a4, 0xB, 0x0);
        }
        FUN_0c0c3e3a(a4);
    }
    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return ((int (*)(int, int, int, int))(0xC0CB95E))(a4, a5, a6, a7);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return ((int (*)(int, int, int, int))(0xC0CBC6C))(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4);
            }
            case 10:
            {
                return FUN_0c0c5024(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4);
            }
            case 18:
            case 20:
            {
                return FUN_0c0c2a80(a4);
            }
            default:
            {
                FUN_0c0d01f2((*(signed char *)((a4 + 0x424))));
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}

int FUN_0c136108(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = (((struct oC4_int *)(a4))->v);
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t3 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t3 - 1);
            if ((int)(short)(t3 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x200);
                (((struct o18_float *)(t2))->v) = 1.0f;
                (((struct o1C_float *)(t2))->v) = 1.0f;
                (((struct o20_float *)(t2))->v) = 1.0f;
            }
        } else {
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.100000001f);
            if (!(((((struct o20_float *)(t2))->v)) > 0.0f)) {
                (((struct o20_float *)(t2))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct o20_float *)(t2))->v);
            (((struct o1C_float *)(t2))->v) = u0;
            (((struct o18_float *)(t2))->v) = u0;
        }
        FUN_0c187798(t2, a5, a6);
        FUN_0c0582de((a4 + 0x28), (((((struct oE4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        FUN_0c136098(a4);
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if (((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 19) && (t0 = *(short *)((a4 + 0x1C)), t0 != 0)) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x12;
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((t2 + 0x6)) = ((*(short *)((t2 + 0x6))) | 0x200);
                (((struct o18_float *)(t2))->v) = 1.0f;
                (((struct o1C_float *)(t2))->v) = 1.0f;
                (((struct o20_float *)(t2))->v) = 1.0f;
            }
        } else {
            (((struct o20_float *)(t2))->v) = (((((struct o20_float *)(t2))->v)) - 0.100000001f);
            if (!(((((struct o20_float *)(t2))->v)) > 0.0f)) {
                (((struct o20_float *)(t2))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct o20_float *)(t2))->v);
            (((struct o1C_float *)(t2))->v) = u0;
            (((struct o18_float *)(t2))->v) = u0;
        }
        FUN_0c187798(t2, a5, a6);
        FUN_0c0582de((a4 + 0x28), (((((struct oE4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        FUN_0c136098(a4);
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if (((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 19) && (t1 = *(short *)((a4 + 0x1C)), t1 != 0)) {
            return t1;
        }
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c1611ba(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0xF, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xF) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0714285746f);
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0xF) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    u0 = 0.5f;
    u0 = u0 + 0.25f * (float)t1;
    (((struct o40_float *)(a4))->v) = u0;
    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    u0 = 0.5f;
    u0 = u0 + 0.25f * (float)t1;
    (((struct o44_float *)(a4))->v) = u0;
    return 0x44;
}

int FUN_0c04908c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R10;
    register int R12;
    register int R14;
    register float F3;
    register float F4;
    register int T_;
    int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0490D0;
    if ((v0_1 == 1)) goto L_C0490FC;
    return FUN_0c03f346(v0_0, R5, R6, R7);
    L_C0490FC:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C04910C;
    if (!((v0_1 == 1))) goto L_C04916A;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - 64.0f);
    w0_0 = (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v);
    v0_1 = (0x8C);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    FPUL_ = (0x42800000);
    if ((w0_0 > 0.0f)) goto L_C04916A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o8C_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_1;
    v0_1 = (0x8C);
    goto L_C04916A;
    L_C04916A:;
    return v0_1;
    L_C04910C:;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - 0.100000001f);
    w0_0 = (((struct o30_float *)(v0_0))->v);
    v0_1 = (0x30);
    w0_1 = (w0_0);
    FPUL_ = (0x3DCCCCCD);
    if ((w0_0 > -5.01000023f)) goto L_C04916A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C04916A;
    L_C0490D0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x258);
    R5 = (0x1);
    FPUL_ = (0x40A00000);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = R5;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = R5;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = R5;
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + (*(float *)&(FPUL_)));
    goto L_C0490FC;
}
