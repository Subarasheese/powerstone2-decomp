/* Straight-line functions with calls and guards (batch gen_lm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c058c32(void);
int FUN_0c0593b8(int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c13f212(int);
int FUN_0c18778c(int, int, int, int, float, float, float, float, float, float, float, float);
extern int FUN_0c187798();
int FUN_0c11cb50(int a4, int a5, int a6, int a7);
int FUN_0c0f0b3e(int a4, int a5, int a6);
int FUN_0c13f25a(int a4, int a5, int a6, int a7);
int FUN_0c04b23c(int a4, int a5, int a6, int a7);
int FUN_0c0593ee(int a4, int a5, int a6, int a7);
int FUN_0c0ffbbc(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c11cb50(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1E))) >= (int)0x384) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c03733c(a4, 0x17, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 0) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 4) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xC)) == 8) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0f0b3e(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R7;
    register int R10;
    register int R12;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F0B4E;
    if ((v0_1 == 1)) goto L_C0F0B68;
    return FUN_0c03f346(v0_0, R5, a6, R7);
    L_C0F0B68:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F0B7C;
    if ((v0_1 == 1)) goto L_C0F0B88;
    if (!((v0_1 == 2))) goto L_C0F0C5A;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0F0C14;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0F0C14;
    L_C0F0C5A:;
    return v0_1;
    L_C0F0C14:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_0 + 0.150000006f);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.150000006f);
    w0_0 = *(float *)0xC0F0CF4;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) - w0_0);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - w0_0);
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    w0_1 = (w0_0);
    w0_1 = (0.0f);
    FPUL_ = (0x3E19999A);
    if ((w0_0 > 0.0f)) goto L_C0F0C46;
    (((struct oBC_float *)(v0_0))->v) = w0_1;
    L_C0F0C46:;
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    v0_1 = (0xB4);
    goto L_C0F0C5A;
    L_C0F0B88:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0F0BBE;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x14;
    (((struct o12A_ushort *)(v0_0))->v) = 0x0;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oB4_float *)(v0_0))->v) = 1.0f;
    (((struct oB8_float *)(v0_0))->v) = 1.0f;
    (((struct oBC_float *)(v0_0))->v) = 1.0f;
    L_C0F0BBE:;
    w0_0 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_0 + 0.166666672f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 + 0.166666672f);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.166666672f);
    v0_1 = (0x40);
    FPUL_ = (0x3E2AAAAB);
    goto L_C0F0C5A;
    L_C0F0B7C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    goto L_C0F0B88;
    L_C0F0B4E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o2C_float *)(v0_0))->v) = 8000.0f;
    *(unsigned int *)((v0_0 + 0x38)) = 0x4000;
    goto L_C0F0B68;
}

int FUN_0c13f25a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x3715))) != (*(short *)((a4 + 0x1E)))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        if ((*(signed char *)((t0 + 0x17))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
            (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + 20.0f);
            (((struct o2C_float *)(a4))->v) = 0.0f;
            (((struct o28_float *)(a4))->v) = 0.0f;
            (((struct o30_float *)(a4))->v) = ((((struct o54_float *)(a4))->v));
            FUN_0c0582de((a4 + 0x28), (((((struct oD4_int *)(t0))->v)) + 0x28));
        }
    } else {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.100000001f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            (((struct oBC_float *)(a4))->v) = 0.0f;
            (((struct oB8_float *)(a4))->v) = 0.0f;
            (((struct oB4_float *)(a4))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
    }
    return FUN_0c13f212(a4);
}

int FUN_0c04b23c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t8;
    register int t9;

    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        t4 = 0x3714;
        if ((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            t4 = 0x16B;
            if (t3 != (*(signed char *)0xC542363)) {
                if (t2 != 0) {
                    if (t2 != 1) {
                        (((struct oA8_uchar *)(((t3 * 0x3938) + 0xC532498)))->v) = 0x0;
                        t6 = 0xA8;
                    } else {
                        if (((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3715))) == 23) && (t0 = *(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x15)), t0 == 10)) {
                            t4 = 0xC5421F8;
                            t8 = 0xC532498;
                        } else {
                            FUN_0c085cac(((t3 * 0x3938) + 0xC532498), 0x17, 0xA, a7);
                        }
                        (((struct oA4_uint *)(((t3 * 0x3938) + 0xC532498)))->v) = (a4 + 0x64);
                        t9 = ((int (*)(int, int))(FUN_0c187798))(t4, t8);
                        t2 = (t2 + 0x1);
                        t6 = (((int (*)(void))(FUN_0c187798))());
                    }
                    t4 = t6;
                } else {
                    if (((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3715))) == 23) && (t1 = *(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x15)), t1 == 9)) {
                        t6 = 0xC5421F8;
                        t8 = 0xC532498;
                    } else {
                        FUN_0c085cac(((t3 * 0x3938) + 0xC532498), 0x17, 0x9, a7);
                    }
                    (((struct oA4_uint *)(((t3 * 0x3938) + 0xC532498)))->v) = (a4 + 0x64);
                    t9 = ((int (*)(int, int))(FUN_0c187798))(t6, t8);
                    t2 = (t2 + 0x1);
                    t4 = (((int (*)(void))(FUN_0c187798))());
                }
            }
        }
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return t4;
}

int FUN_0c0593ee(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (*(float *)0xC05955C);
        FUN_0c1171f0(a4);
        if ((unsigned char)(*(signed char *)0xC541F3D) == 4) {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x69, ((((struct o8_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x68, ((((struct o8_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x0, ((((struct oC_int *)0xC4B4110)->v)));
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x2, ((((struct o0_int *)0xC4B4110)->v)));
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0xF, ((((struct o0_int *)0xC4B4110)->v)));
            FUN_0c058c32();
        }
        t0 = 0x0;
        for (;;) {
            FUN_0c0593b8(t0, a4);
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
    }
    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        t0 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c0ffbbc(int a4, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[1];
    register int t48;

    register int R3;
    register int R12;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    w0_0 = f4;
    w0_1 = f8;
    w0_2 = f11;
    v0_1 = (0x0);
    if (((*(signed char *)((v0_0 + 0x14))) != 0)) goto L_C0FFBDC;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    L_C0FFBDC:;
    v0_5 = *(signed char *)((v0_0 + 0x2));
    v0_3 = (v0_5);
    v0_2 = (0xC472B24);
    v0_4 = (0xC472B28);
    w0_3 = (1.0f);
    if ((v0_5 == 0)) goto L_C0FFCA0;
    if ((v0_3 == 1)) goto L_C0FFC14;
    if (!((v0_3 == 2))) goto L_C0FFCA2;
    if (((*(int *)((v0_4 + 0x0))) == 2)) goto L_C0FFCA0;
    return FUN_0c03f346(v0_0, v0_1, v0_2, v0_4);
    L_C0FFCA2:;
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_1);
    if ((v0_1 == 0)) goto L_C0FFCB2;
    if ((v0_3 == 1)) goto L_C0FFCBA;
    L_C0FFCD2:;
    return v0_3;
    L_C0FFCBA:;
    v0_3 = (0xB0);
    if ((w0_0 == ((((struct oB0_float *)(v0_0))->v)))) goto L_C0FFCD2;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    v0_3 = (0xB0);
    goto L_C0FFCD2;
    L_C0FFCB2:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0FFCBA;
    L_C0FFCA0:;
    w0_0 = (w0_3);
    goto L_C0FFCA2;
    L_C0FFC14:;
    w0_0 = (w0_3);
    if (((*(signed char *)0xC5429A8) != 0)) goto L_C0FFC22;
    v0_3 = (v0_1);
    L_C0FFC24:;
    v0_4 = ((*(int *)((v0_4 + 0x0))));
    if (((*(int *)((v0_2 + 0x30))) != 0)) goto L_C0FFC30;
    v0_2 = (v0_1);
    L_C0FFC32:;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    if ((v0_4 == 0)) goto L_C0FFC40;
    if (((*(int *)(((int)stk + 0))) == 1)) goto L_C0FFC40;
    v0_2 = ((v0_2 + 0x1));
    L_C0FFC40:;
    v0_4 = (0xC1FBA14);
    v0_4 = ((((((((v0_3 << 1) + v0_3) << 2) << 2) << 1) + 0xC1FBA44) + ((((v0_2 << 1) + v0_2) << 2) << 1)));
    L_C0FFC84:;
    if (((int)v0_1 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0FFC62;
    goto L_C0FFCA2;
    L_C0FFC62:;
    *(volatile int *)((((0xC4 + v0_0) + (v0_1 << 2)) + 0x0));
    *(volatile int *)(((v0_1 << 2) + v0_4));
    FUN_0c18778c(v0_0, v0_1, (v0_1 << 2), v0_4, w0_0, w0_3, f6, f7, w0_1, f9, f10, w0_2);
    v0_1 = ((t48 + 0x1));
    goto L_C0FFC84;
    L_C0FFC30:;
    v0_2 = (0x2);
    goto L_C0FFC32;
    L_C0FFC22:;
    v0_3 = (0x1);
    goto L_C0FFC24;
}
