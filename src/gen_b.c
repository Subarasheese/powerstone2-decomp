/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c064d24(int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c14f6a0(int, int, float);
int FUN_0c16eea8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c11ccd0(int a4, int a5, int a6, int a7);
int FUN_0c12688e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c131798(int a4, int a5, int a6, int a7);
int FUN_0c15df9c(int a4, int a5, int a6, int a7);
int FUN_0c13f14c(int a4, int a5);
int FUN_0c16f000(int a4, int a5, int a6, int a7);
int FUN_0c0f8ca0(int a4, int a5, int a6, int a7);
int FUN_0c1038e8(int a4, int a5, int a6);

int FUN_0c11ccd0(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03733c(a4, 0x21, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
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
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC292314);
    return FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC292314);
}

int FUN_0c12688e(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R11;
    register int R12;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_2 = a4;
    v0_0 = a5;
    w0_0 = f4;
    v0_3 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C1268A6;
    if ((v0_1 == 1)) goto L_C1268AE;
    v0_1 = ((FUN_0c03f346(v0_2, v0_0, a6, a7)));
    L_C12694E:;
    return v0_1;
    L_C1268AE:;
    *(unsigned short *)((v0_2 + 0x1C)) = ((*(short *)((v0_2 + 0x1C))) + 0x1);
    if (((*(short *)((v0_2 + 0x1C))) != (*(short *)(((((((struct o20_short *)(v0_2))->v)) << 1) + 0xC201B18))))) goto L_C1268FC;
    *(float *)(((int)stk + 0)) = -5.0f;
    *(float *)(((int)stk + 4)) = -21.0f;
    *(float *)(((int)stk + 8)) = 18.0f;
    FUN_0c0582de(((int)stk + 0), (((((struct oC4_int *)(v0_2))->v)) + 0x28));
    FUN_0c14f6a0(((int)stk + 0), 0x0, 0.125f);
    (((struct o20_ushort *)(v0_2))->v) = (((((struct o20_short *)(v0_2))->v)) + 0x1);
    L_C1268FC:;
    v0_0 = *(short *)((v0_2 + 0x1E));
    v0_1 = (v0_0);
    if (((int)(*(short *)((v0_2 + 0x1C))) < (int)v0_0)) goto L_C12694E;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C12694E;
    L_C1268A6:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    goto L_C1268AE;
}

int FUN_0c131798(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            return 0x14;
        }
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0xB6);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        return 0x50;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x4B) {
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o5C_float *)(a4))->v) = -0.25f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (a4 + 0x28));
        (((struct oA4_uint *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x38)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x38)));
        *(unsigned int *)((a4 + 0x34)) = 0xC000;
        *(unsigned int *)((a4 + 0x3C)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))));
    if (t0 == 19) {
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}

int FUN_0c15df9c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1E))) > (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            t0 = 0x0;
            for (;;) {
                FUN_0c037498((*(int *)((((0xC4 + a4) + t0) + 0x0))), (*(short *)((a4 + 0x1E))), 0x21, (*(int *)0xC4B40CC));
                t0 = (t0 + 0x4);
                if ((unsigned int)t0 >= (unsigned int)0x20) {
                    break;
                }
            }
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
        if ((unsigned int)t0 >= (unsigned int)0x20) {
            break;
        }
    }
    return 0x70;
}

int FUN_0c13f14c(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13F25A;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1E)) = (*(signed char *)((a4 + 0x3715)));
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x4, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        if (a5 == 0) {
        } else {
            *(volatile signed char *)((t0 + 0x1));
        }
        FUN_0c064d24(t0, 0x1, 0x31, 0x2);
        return FUN_0c07e2f4(t0, 0x1A);
    }
    return t0;
}

int FUN_0c16f000(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t3;
    register int t19;
    register int t30;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        t30 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            t3 = *(signed char *)((a4 + 0x18));
            if (t3 != -1) {
                FUN_0c187798(0xC532498, t3, a6);
            } else {
                *(volatile signed char *)((a4 + 0x1));
                FUN_0c187798(0xC532498, t3, a6);
            }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC16F130));
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0x64)) - 50));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0x64)) - 50));
            FUN_0c16eea8(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            t19 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t19 + 0x1);
            t30 = (short)(t19 + 0x1);
            if ((int)(short)(t19 + 0x1) >= (int)0x6) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t30 = 0x14;
            }
        }
    } else {
        t30 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t30;
}

int FUN_0c0f8ca0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = a5;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC1FB528 + ((*(signed char *)((a4 + 0x2))) << 1))));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = 0x0;
    }
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
        if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
            return FUN_0c03f346(a4, t1, a6, a7);
        }
        u0 = (((struct oBC_float *)(a4))->v);
        (((struct oB8_float *)(a4))->v) = u0;
        (((struct oB4_float *)(a4))->v) = u0;
        return 0xB4;
    }
    t2 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
    if ((int)(short)(t2 - 1) <= 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, t1, a6);
        t1 = 0x2;
        if ((*(signed char *)((t0 + 0x2))) != 0) {
            t1 = 0x1;
        }
        return thunk_FUN_0c05abb2(t1, 0x0);
    }
    return (short)(t2 - 1);
}

int FUN_0c1038e8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = a4;
    t3 = 0x0;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        FUN_0c187798(a4, 0x0, a6);
        (((struct oA8_uchar *)(t0))->v) = t1;
        t2 = t0;
        t3 = t1;
    }
    t0 = *(signed char *)((t2 + 0x15));
    t1 = *(int *)0xC472CEC;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct oB0_float *)(t2))->v) = (((((struct oB0_float *)(t2))->v)) - 0.0333333351f);
                t0 = 0xB0;
                if (0.0f > ((((struct oB0_float *)(t2))->v))) {
                    (((struct oA8_uchar *)(t2))->v) = t3;
                    (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) & 0xFBFF);
                    (((struct o15_uchar *)(t2))->v) = t3;
                    t0 = 0x15;
                }
                t3 = t0;
            } else {
                t0 = *(signed char *)((t2 + 0x2));
                t4 = t0;
                if (t1 != t0) {
                    (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) | 0x400);
                    (((struct oB0_float *)(t2))->v) = 1.0f;
                    (((struct o15_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t3 = t4;
            }
            t0 = t3;
        } else {
            (((struct oB0_float *)(t2))->v) = (((((struct oB0_float *)(t2))->v)) + 0.0333333351f);
            t3 = 0xB0;
            if (((((struct oB0_float *)(t2))->v)) > 1.0f) {
                (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) & 0xFBFF);
                (((struct o15_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t3 = t0;
    } else {
        t0 = *(signed char *)((t2 + 0x2));
        t4 = t0;
        if (t1 == t0) {
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct oAC_ushort *)(t2))->v) = (((((struct oAC_short *)(t2))->v)) | 0x400);
            (((struct oB0_float *)(t2))->v) = 0.0f;
            (((struct o15_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x15))) + 0x1);
            t4 = 0x15;
        }
        t3 = t4;
    }
    return t3;
}
