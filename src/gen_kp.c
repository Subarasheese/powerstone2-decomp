/* Straight-line functions with calls and guards (batch gen_kp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582ac(int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c143e8c(int a4);
int FUN_0c15bb04(int a4, int a5, int a6, int a7);
int FUN_0c167426(int a4, int a5, int a6, int a7, float f4);
int FUN_0c12c5c6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c143e8c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_1 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C143E9C;
    if ((v0_2 == 1)) goto L_C143EAA;
    L_C143FDC:;
    return v0_2;
    L_C143EAA:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    v0_1 = (0x3);
    w0_0 = (0.0f);
    w0_1 = (0.142857149f);
    w0_2 = (0.333333343f);
    if ((v0_3 == 0)) goto L_C143EF8;
    if ((v0_2 == 1)) goto L_C143F0C;
    if ((v0_2 == 2)) goto L_C143F48;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o84_float *)(v0_2))->v);
    (((struct o84_float *)(v0_2))->v) = (w0_2 - w0_1);
    v0_3 = ((v0_2 + 0x84));
    if ((!(0.0f > (w0_2 - w0_1)))) goto L_C143FAA;
    *(float *)((v0_3 + 0x0)) = w0_0;
    L_C143FAA:;
    w0_2 = *(float *)((v0_3 + 0x0));
    (((struct o8_float *)(v0_3))->v) = w0_2;
    (((struct o4_float *)(v0_3))->v) = w0_2;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    w0_2 = (((struct o8C_float *)(v0_2))->v);
    (((struct o8C_float *)(v0_2))->v) = (w0_2 - w0_1);
    v0_3 = ((v0_2 + 0x8C));
    if (((w0_2 - w0_1) > 0.0f)) goto L_C143FCA;
    *(float *)((v0_3 + 0x0)) = w0_0;
    L_C143FCA:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 - 1);
    v0_2 = ((short)(v0_4 - 1));
    if (((int)(short)(v0_4 - 1) > 0)) goto L_C143FDC;
    return FUN_0c03f346(v0_0, v0_3, v0_1, R7);
    L_C143F48:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_3 = (((struct o84_float *)(v0_1))->v);
    (((struct o84_float *)(v0_1))->v) = (w0_3 - w0_1);
    (((struct o8_float *)((v0_1 + 0x84)))->v) = (w0_3 - w0_1);
    (((struct o4_float *)((v0_1 + 0x84)))->v) = (w0_3 - w0_1);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    w0_1 = (((struct o8C_float *)(v0_1))->v);
    (((struct o8C_float *)(v0_1))->v) = (w0_1 + w0_2);
    v0_3 = ((v0_1 + 0x8C));
    if (((w0_1 + w0_2) > 0.0f)) goto L_C143F78;
    *(float *)((v0_3 + 0x0)) = w0_0;
    L_C143F78:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C143FDC;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x7;
    L_C143F88:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    goto L_C143FDC;
    L_C143F0C:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o84_float *)(v0_2))->v);
    (((struct o84_float *)(v0_2))->v) = (w0_0 + w0_2);
    (((struct o8_float *)((v0_2 + 0x84)))->v) = (w0_0 + w0_2);
    (((struct o4_float *)((v0_2 + 0x84)))->v) = (w0_0 + w0_2);
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C143FDC;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = 1.0f;
    (((struct o84_float *)(v0_1))->v) = 1.0f;
    goto L_C143F88;
    L_C143EF8:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C143F0C;
    L_C143E9C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    goto L_C143EAA;
}

int FUN_0c15bb04(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t6;
    register int t8;
    register int t21;
    register int t53;
    register int t83;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t83 = t0;
            if (t0 == 2) {
                t5 = *(short *)((a4 + 0x1C));
                t6 = ((~(((~t5) + 0x1) & 0x1)) + 0x1);
                if ((int)t5 >= 0) {
                    t6 = (t5 & 0x1);
                }
                (((struct oA8_uchar *)(a4))->v) = t6;
                t8 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
                t83 = (short)(t8 - 1);
                if ((int)(short)(t8 - 1) <= 0) {
                    t83 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            }
        } else {
            if (!((((((struct o168_float *)((*(int *)((a4 + 0x10)))))->v)) + 20.0f) > ((((struct o2C_float *)(a4))->v)))) {
                t21 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t21 - 1);
                if ((short)(t21 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t83 = 0x14;
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x38E);
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
                    t83 = 0x50;
                }
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t83 = 0x14;
            }
        }
    } else {
        t53 = *(int *)((a4 + 0x10));
        if ((*(signed char *)((t53 + 0x3715))) == 22) {
            t83 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if (((*(signed char *)((t53 + 0x3715))) == 32) && (t83 = *(signed char *)((t53 + 0x3739)), t83 == 33)) {
            } else {
                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (a4 + 0x28));
                FUN_0c0582ac(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (*(float *)(((int)stk + 0))));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 0)))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o8_float *)(((int)stk + 0)))->v)));
                (((struct oA4_uint *)(a4))->v) = 0x0;
                (((struct o50_float *)(a4))->v) = 25.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t83 = 0x14;
            }
        }
    }
    return t83;
}

int FUN_0c167426(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t4;
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            if ((int)(*(short *)((a4 + 0x1C))) < (int)0x1E) {
                u0 = *(float *)0xC1675C0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0333333351f);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            return (short)(t0 + 0x1);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(0x1, 0xC2A3498, a6);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        *(volatile int *)((a4 + 0xC4));
        t0 = ((int (*)(int, int))(FUN_0c187798))(t1, t2);
        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t3 = (((struct o404_int *)(a4))->v), t3 == 0)) {
            if ((int)(*(short *)((a4 + 0x1C))) < (int)0x1E) {
                u0 = *(float *)0xC1675C0;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0333333351f);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)0x14) && ((int)t0 < (int)0x1E)) {
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
            }
            FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x5A) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            return (short)(t0 + 0x1);
        }
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c12c5c6(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    t7 = *(signed char *)((a4 + 0x14));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
                if (t7 != 3) {
                    return FUN_0c03f346(a4, 0xA, a6, a7);
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
                t7 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t7))->v) = (((((struct o7C_int *)(t7))->v)) + (*(short *)((a4 + 0x1E))));
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(a4, 0xA, a6);
                u0 = (((struct o48_float *)(t0))->v);
                (((struct o48_float *)(t0))->v) = (u0 + f4);
                (((struct o44_float *)(t0))->v) = (u0 + f4);
                (((struct o40_float *)(t0))->v) = (u0 + f4);
                u0 = (((struct oBC_float *)(t0))->v);
                (((struct oBC_float *)(t0))->v) = (u0 - f4);
                (((struct oB8_float *)(t0))->v) = (u0 - f4);
                (((struct oB4_float *)(t0))->v) = (u0 - f4);
                t7 = *(short *)((t0 + 0x1C));
                *(unsigned short *)((t0 + 0x1C)) = (t7 - 1);
                t8 = (short)(t7 - 1);
                if ((short)(t7 - 1) == 0) {
                    (((struct o14_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x14))) + 0x1);
                    t8 = 0x14;
                }
                return t8;
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798(a4, 0xA, a6);
            t0 = *(short *)((t4 + 0x1C));
            *(unsigned short *)((t4 + 0x1C)) = (t0 - 1);
            if (((short)(t0 - 1) != 0) && (t1 = *(int *)((t4 + 0x10)), t2 = *(signed char *)((0x3715 + t1)), t2 == 26)) {
                t0 = t2;
            } else {
                (((struct oAC_ushort *)(t4))->v) = 0x21F;
                (((struct oBC_float *)(t4))->v) = 1.0f;
                (((struct oB8_float *)(t4))->v) = 1.0f;
                (((struct oB4_float *)(t4))->v) = 1.0f;
                *(unsigned short *)((t4 + 0x1C)) = t3;
                (((struct o14_uchar *)(t4))->v) = ((*(signed char *)((t4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x12);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, 0xA, a6);
        u0 = (((struct o48_float *)(t5))->v);
        (((struct o48_float *)(t5))->v) = (u0 + f4);
        (((struct o44_float *)(t5))->v) = (u0 + f4);
        (((struct o40_float *)(t5))->v) = (u0 + f4);
        t0 = *(short *)((t5 + 0x1C));
        *(unsigned short *)((t5 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((t5 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(t5))->v) = ((*(signed char *)((t5 + 0x14))) + 0x1);
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
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, 0xA, a6);
    u0 = (((struct o48_float *)(t6))->v);
    (((struct o48_float *)(t6))->v) = (u0 + f4);
    (((struct o44_float *)(t6))->v) = (u0 + f4);
    (((struct o40_float *)(t6))->v) = (u0 + f4);
    t0 = *(short *)((t6 + 0x1C));
    *(unsigned short *)((t6 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((t6 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(t6))->v) = ((*(signed char *)((t6 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
