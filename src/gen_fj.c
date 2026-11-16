/* Straight-line functions with calls and guards (batch gen_fj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c01599c(void);
int FUN_0c01cd2c(int);
int FUN_0c01cd62(int, int);
int FUN_0c01fd10(void);
int FUN_0c0206d6(void);
int FUN_0c020be4(int);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c025564(void);
int FUN_0c02568a(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c02b692(int, int, int);
int FUN_0c02b7fc(void);
int FUN_0c02c95e(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d2480(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c1837cc(int, int);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c187798(int, int, int);
int math_atan2_angle16(float, float);
float math_sin_angle16(int);
int FUN_0c021198(int a4);
int FUN_0c0d21ac(int a4, int a5, int a6);
int FUN_0c026888(int a4, int a5, int a6);
int FUN_0c131954(int a4, int a5, int a6, int a7);

int FUN_0c021198(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    v0_0 = (0x2);
    v0_1 = (0x1);
    v0_2 = (0xC30541B);
    v0_3 = (0xC305419);
    v0_4 = (0xC309993);
    if (((*(signed char *)0xC30543E) == 0)) goto L_C0211CE;
    if (((*(signed char *)0xC309828) != 0)) goto L_C0211F4;
    L_C0211CE:;
    (((struct o30_uchar *)0xC309830)->v) = ((*(signed char *)0xC309860) + 0x1);
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_6 = ((FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x4)));
    L_C02145C:;
    return v0_6;
    L_C0211F4:;
    v0_5 = FUN_0c0206d6();
    v0_6 = (v0_5);
    if ((v0_5 != 0)) goto L_C021200;
    goto L_C02145C;
    L_C021200:;
    v0_7 = ((((struct o0_short *)0xC30540E)->v)) == 0;
    v0_6 = ((FUN_0c020be4((*(signed char *)0xC3054C4))));
    v0_5 = (0xC30540E);
    if (v0_7) goto L_C021216;
    *(unsigned short *)((v0_5 + 0x0)) = ((*(short *)((v0_5 + 0x0))) - 1);
    goto L_C02145C;
    L_C021216:;
    v0_5 = ((*(signed char *)0xC305420));
    v0_8 = (0xC309E07);
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C021280;
    *(unsigned char *)(((int)stk + 4)) = v0_5;
    *(unsigned char *)(((int)stk + 5)) = (*(signed char *)((v0_8 + 0x0)));
    L_C02128A:;
    v0_7 = (0x0);
    L_C02128C:;
    if (!(((*(signed char *)((v0_2 + v0_7))) == 0))) goto L_C0213B0;
    *(unsigned char *)(((int)stk + 0)) = (v0_7 << 1);
    v0_5 = (short)(FUN_0c01cd62((v0_7 << 1), 0x101)) == 0;
    v0_6 = (0xC01CD62);
    if (v0_5) goto L_C021330;
    v0_9 = *(signed char *)0xC30541F;
    v0_6 = (v0_9);
    v0_5 = ((v0_7 + v0_2));
    v0_8 = ((((((((v0_7 << 1) << 2) + (v0_7 << 1)) << 2) << 1) + 0xC5426C4) + 0x28));
    if ((v0_9 == 2)) goto L_C0212D6;
    if ((v0_6 == 3)) goto L_C0212EA;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_3 + v0_7))) + 0x1);
    goto L_C021322;
    L_C0213B0:;
    v0_5 = (int)(v0_7 + 0x1) >= (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C0213BA;
    goto L_C02128C;
    L_C0213BA:;
    v0_5 = (0xC30EFA8);
    if (((*(int *)0xC30EFA8) == 0)) goto L_C0213E6;
    v0_6 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)((v0_5 + 0x0)) = (v0_6 - 1);
    if (((v0_6 - 1) != 0)) goto L_C0213E6;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x4);
    L_C0213E6:;
    v0_5 = (0xC30540C);
    if (((*(signed char *)((v0_2 + 0x0))) != 1)) goto L_C021426;
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_4);
    if ((v0_4 != 1)) goto L_C021426;
    v0_0 = *(short *)((v0_5 + 0x0));
    *(unsigned short *)((v0_5 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C02145C;
    FUN_0c01fd10();
    FUN_0c02c95e();
    v0_0 = (int)((int)(((((((struct o0_int *)0xC309830)->v)) + ((((struct o4_int *)0xC309830)->v))) + ((((struct o8_int *)0xC309830)->v))) + 0x3) / (int)0x6);
    (((struct o10_uint *)0xC309830)->v) = v0_0;
    (((struct oC_uint *)0xC309830)->v) = v0_0;
    v0_6 = (v0_0);
    goto L_C02145C;
    L_C021426:;
    if (((*(signed char *)((v0_2 + 0x0))) == 2)) goto L_C021432;
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_4);
    if ((v0_4 != 2)) goto L_C02145C;
    L_C021432:;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_1 = *(short *)((v0_5 + 0x0));
    *(unsigned short *)((v0_5 + 0x0)) = (v0_1 - 1);
    v0_6 = (v0_0);
    if (((short)(v0_1 - 1) != 0)) goto L_C02145C;
    (((struct o30_uchar *)0xC309830)->v) = ((*(signed char *)0xC309860) + 0x1);
    (((struct o8_uchar *)0xC30540E)->v) = 0x0;
    goto L_C02145C;
    L_C021322:;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x3);
    goto L_C0213B0;
    L_C0212EA:;
    if (((*(signed char *)((((((int)stk + 0) + 0x4) + v0_7) + 0x0))) == 0)) goto L_C02130A;
    if (((*(int *)((v0_8 + 0x0))) != 0)) goto L_C02130A;
    if (((*(signed char *)((v0_3 + v0_7))) == 0)) goto L_C0213B0;
    L_C021306:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_0;
    goto L_C021322;
    L_C02130A:;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_3 + v0_7))) + 0x1);
    goto L_C021322;
    L_C0212D6:;
    if (((*(int *)((v0_8 + 0x0))) != 0)) goto L_C02130A;
    if (((*(signed char *)((v0_3 + v0_7))) != 0)) goto L_C021306;
    goto L_C0213B0;
    L_C021330:;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x40)) != 0;
    if (v0_5) goto L_C021346;
    if (!(((int)(*(short *)0xC309BCA) < (int)0xA))) goto L_C021346;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x800)) == 0;
    if (v0_5) goto L_C02138C;
    if (((*(signed char *)((v0_7 + 0xC305419))) != 1)) goto L_C02138C;
    *(unsigned char *)((v0_3 + v0_7)) = 0x0;
    goto L_C0213A6;
    L_C021346:;
    *(unsigned char *)((v0_3 + v0_7)) = v0_1;
    goto L_C0213B0;
    L_C0213A6:;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x5);
    goto L_C0213B0;
    L_C02138C:;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x400)) == 0;
    if (v0_5) goto L_C0213B0;
    if (((*(signed char *)((v0_7 + 0xC305419))) != 0)) goto L_C0213B0;
    *(unsigned char *)((v0_3 + v0_7)) = v0_1;
    goto L_C0213A6;
    L_C021280:;
    *(unsigned char *)(((int)stk + 5)) = v0_5;
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((v0_8 + 0x0)));
    goto L_C02128A;
}

int FUN_0c0d21ac(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register float u0;
    register float u1;

    t6 = *(int *)((((*(signed char *)((a4 + 0x19))) << 2) + 0xC286EB8));
    t7 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t7 + 0x1);
    t8 = *(signed char *)((a4 + 0x1A));
    if ((int)(short)(t7 + 0x1) < (int)(*(int *)((((((t8 << 2) + t8) << 2) + t6) + 0x0)))) {
        FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        t7 = math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
        t8 = *(int *)((a4 + 0x38));
        t9 = (unsigned short)(t7 - t8);
        if ((int)(unsigned short)(t7 - t8) > (int)0x8000) {
            t9 = ((unsigned short)(t7 - t8) - 0x10000);
        }
        t7 = 0x222;
        if ((int)t9 > (int)0x222) {
        } else {
            t8 = t9;
            if ((int)t9 < (int)0xFFFFFDDE) {
                t8 = 0xFFFFFDDE;
            }
            t7 = t8;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t7);
        *(unsigned short *)(((0x41C + a4) + 0xE)) = ((*(short *)(((0x41C + a4) + 0xE))) - 1);
        t7 = *(short *)(((0x41C + a4) + 0xE));
        t8 = t7;
        if ((int)t7 <= 0) {
            if ((*(signed char *)((a4 + 0x16))) != 0) {
                FUN_0c0d2480(a4, 0x0);
                t7 = 0x96;
            } else {
                FUN_0c0d2480(a4, 0x1);
                t7 = 0x5A;
            }
            *(unsigned short *)(((0x41C + a4) + 0xE)) = t7;
            t8 = t7;
        }
        t7 = t8;
    } else {
        if ((*(signed char *)((a4 + 0x1A))) == 0) {
            *(volatile signed char *)((a4 + 0x1A));
            t8 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            *(unsigned short *)(((0x41C + a4) + 0xE)) = 0x3C;
            FUN_0c0d2480(a4, 0x0);
        }
        t8 = *(signed char *)((a4 + 0x1A));
        (((struct o1B_uchar *)(a4))->v) = ((*(signed char *)((((((t8 << 2) + t8) << 2) + t6) + 0x4))) & 0x4);
        (((struct o1A_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x1A))) + 0x1);
        t8 = *(signed char *)((a4 + 0x1A));
        t9 = *(int *)((((((((signed char)t8 - 1) << 2) + ((signed char)t8 - 1)) << 2) + t6) + 0x0));
        t10 = *(int *)(((((((signed char)t8 << 2) + (signed char)t8) << 2) + t6) + 0x0));
        if (((*(int *)(((((((signed char)t8 << 2) + (signed char)t8) << 2) + t6) + 0x4))) & 128) != 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x78;
            t7 = 0x78;
        } else {
            t12 = *(signed char *)((a4 + 0x1A));
            if ((((*(int *)((((((t12 << 2) + t12) << 2) + t6) + 0x4))) & 2) != 0) && ((t0 = *(int *)((a4 + 0x10)), t0 != 0) && ((t7 = *(int *)((a4 + 0x10)), t2 = *(short *)(((0x41C + a4) + 0xC)), t3 = (((struct o24_short *)(t7))->v), t2 == t3) && ((t4 = *(int *)((a4 + 0x10)), t5 = *(signed char *)((t4 + 0x41D)), t5 == 0) || (t5 == 1))))) {
                *(volatile int *)((a4 + 0x10));
                t0 = ((int (*)(int, int))(FUN_0c187798))(t5, t8);
                FUN_0c0c2d56((*(int *)((a4 + 0x10))), 0x2, 0x0);
                *(unsigned int *)((a4 + 0x10)) = 0x0;
            }
            t0 = *(signed char *)((a4 + 0x1A));
            if (((*(int *)((((((t0 << 2) + t0) << 2) + t6) + 0x4))) & 1) != 0) {
                t0 = *(signed char *)((a4 + 0x1A));
                (((struct o4C_float *)(a4))->v) = ((((((struct o8_float *)(((((t0 << 2) + t0) << 2) + t6)))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(t10 - t9));
                t0 = *(signed char *)((a4 + 0x1A));
                (((struct o50_float *)(a4))->v) = ((((((struct oC_float *)(((((t0 << 2) + t0) << 2) + t6)))->v)) - ((((struct o2C_float *)(a4))->v))) / (float)(t10 - t9));
                t0 = *(signed char *)((a4 + 0x1A));
                (((struct o54_float *)(a4))->v) = ((((((struct o10_float *)((t6 + (((t0 << 2) + t0) << 2))))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(t10 - t9));
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            } else {
                t0 = *(signed char *)((a4 + 0x1A));
                u0 = ((float)(t10 - t9) * ((((struct o4C_float *)(a4))->v)));
                u1 = (1.0f / ((float)(t10 - t9) * (float)(t10 - t9)));
                (((struct o58_float *)(a4))->v) = (((((((struct o8_float *)(((((t0 << 2) + t0) << 2) + t6)))->v)) - ((((struct o28_float *)(a4))->v))) - u0) * u1);
                t0 = *(signed char *)((a4 + 0x1A));
                u0 = ((float)(t10 - t9) * ((((struct o50_float *)(a4))->v)));
                u1 = (1.0f / ((float)(t10 - t9) * (float)(t10 - t9)));
                (((struct o5C_float *)(a4))->v) = (((((((struct oC_float *)(((((t0 << 2) + t0) << 2) + t6)))->v)) - ((((struct o2C_float *)(a4))->v))) - u0) * u1);
                t0 = *(signed char *)((a4 + 0x1A));
                u0 = ((float)(t10 - t9) * ((((struct o54_float *)(a4))->v)));
                u1 = (1.0f / ((float)(t10 - t9) * (float)(t10 - t9)));
                (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)((t6 + (((t0 << 2) + t0) << 2))))->v)) - ((((struct o30_float *)(a4))->v))) - u0) * u1);
            }
            FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = math_atan2_angle16(((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
            t7 = *(int *)((a4 + 0x38));
            t2 = (unsigned short)(t0 - t7);
            if ((int)(unsigned short)(t0 - t7) > (int)0x8000) {
                t2 = ((unsigned short)(t0 - t7) - 0x10000);
            }
            t0 = 0x222;
            if ((int)t2 > (int)0x222) {
            } else {
                t7 = t2;
                if ((int)t2 < (int)0xFFFFFDDE) {
                    t7 = 0xFFFFFDDE;
                }
                t0 = t7;
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + t0);
            *(unsigned short *)(((0x41C + a4) + 0xE)) = ((*(short *)(((0x41C + a4) + 0xE))) - 1);
            t0 = *(short *)(((0x41C + a4) + 0xE));
            t7 = t0;
            if ((int)t0 <= 0) {
                if ((*(signed char *)((a4 + 0x16))) != 0) {
                    FUN_0c0d2480(a4, 0x0);
                    t0 = 0x96;
                } else {
                    FUN_0c0d2480(a4, 0x1);
                    t0 = 0x5A;
                }
                *(unsigned short *)(((0x41C + a4) + 0xE)) = t0;
                t7 = t0;
            }
        }
    }
    return t7;
}


int FUN_0c131954(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u9;
    register float u11;
    register float t13;
    register float u14;
    register int t16;
    register float u18;
    register float u19;
    register int t20;
    register float t23;
    register float u24;
    register int t26;
    register float u28;
    register float u29;
    register int t30;
    register float t33;
    register float u34;
    register int t37;
    register int t39;
    register int t42;
    register float t45;
    register int t47;
    register int t50;
    register int t56;
    register int t57;
    register int t64;
    register int t60;
    register int t61;
    register int t62;
    register int t65;
    register int t66;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 5.0f);
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 5.69620275f);
                (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + 0.493670881f);
                t5 = 0xC;
                t6 = 0x4;
                for (;;) {
                    t7 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x78 + t7);
                    *(unsigned int *)(((int)stk + 4)) = (0xC2A156C + t5);
                    t8 = *(short *)((a4 + 0x1C));
                    u9 = *(float *)(((0xC2A15B4 + t5) + 0x0));
                    u11 = *(float *)(((0xC2A156C + t5) + 0x0));
                    t13 = math_sin_angle16(((int)(((((float)(((t8 << 1) + t8) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u14 = ((u11 - u9) * t13);
                    (((struct o78_uint *)(t7))->v) = ((int)((((u14 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t16 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x7C + t16);
                    u18 = (((struct o4_float *)((0xC2A15B4 + t5)))->v);
                    u19 = (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v);
                    t20 = *(short *)((a4 + 0x1C));
                    t23 = math_sin_angle16(((int)(((((float)(((t20 << 1) + t20) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u24 = ((u19 - u18) * t23);
                    (((struct o7C_uint *)(t16))->v) = ((int)((((u24 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t26 = *(int *)((((0xC4 + a4) + t6) + 0x0));
                    *(int *)((int)stk + 0) = (0x80 + t26);
                    u28 = (((struct o8_float *)((0xC2A15B4 + t5)))->v);
                    u29 = (((struct o8_float *)((*(int *)(((int)stk + 4)))))->v);
                    t30 = *(short *)((a4 + 0x1C));
                    t33 = math_sin_angle16(((int)(((((float)(((t30 << 1) + t30) << 2) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    t6 = (t6 + 0x4);
                    u34 = ((u29 - u28) * t33);
                    (((struct o80_uint *)(t26))->v) = ((int)((((u34 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                    t5 = (t5 + 0xC);
                    if ((unsigned int)t6 >= (unsigned int)0x18) {
                        break;
                    }
                }
                t37 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t37 + 0x1);
                t39 = (short)(t37 + 0x1);
                if ((int)(short)(t37 + 0x1) >= (int)0x78) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t39 = 0x14;
                }
                return t39;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t42 = *(short *)((a4 + 0x1C));
        t45 = math_sin_angle16(((int)(((((float)((int)((int)(((t42 << 2) + t42) << 2) % (int)0x168)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        (((struct o78_uint *)(t0))->v) = ((int)((((_builtin_fabsf(t45) * 3932160.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t47 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t47 + 0x1);
        t50 = (short)(t47 + 0x1);
        if ((int)(short)(t47 + 0x1) < (int)0x29) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o78_uint *)(t0))->v) = 0x0;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
            t50 = 0xD8;
        }
        return t50;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o6C_float *)(t0))->v) = -35.0f;
    (((struct o70_float *)(t0))->v) = 10.0f;
    (((struct o74_float *)(t0))->v) = 57.0f;
    (((struct o7C_uint *)(t0))->v) = 0x31C7;
    t56 = 0x4;
    t57 = 0xC;
    for (;;) {
        *(volatile int *)((((0xC4 + a4) + t56) + 0x0));
        FUN_0c187798(t56, t57, 0xC2A1524);
        t57 = t60;
        t56 = t62;
        *(volatile int *)((((0xC4 + a4) + t62) + 0x0));
        t64 = FUN_0c187798(t56, t57, t61);
        t56 = (t65 + 0x4);
        t57 = (t66 + 0xC);
        if ((unsigned int)t56 >= (unsigned int)0x18) {
            break;
        }
    }
    return t64;
}
