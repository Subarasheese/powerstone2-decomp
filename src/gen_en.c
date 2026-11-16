/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o373A_uchar { char p[0x373A]; unsigned char v; };
struct o373C_uchar { char p[0x373C]; unsigned char v; };
struct o373E_uchar { char p[0x373E]; unsigned char v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o382A_short { char p[0x382A]; short v; };
struct o418_int { char p[0x418]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c08e382(int);
int FUN_0c14f824(int, int);
int FUN_0c187798(int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07487e(int a4);
int FUN_0c1657c2(int a4, int a5, int a6, int a7, float f4);

int FUN_0c07487e(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    int t8;
    register int t9;
    int t10;
    register int t11;
    int t12;
    int t13;
    register int t14;
    register int t15;
    register int t16;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((a4 + 0x371D))) == 4) {
        (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
        t15 = *(signed char *)((a4 + 0x3739));
        t16 = t15;
        if (t15 == 14) {
        } else {
            t16 = t15;
            if (t15 == 15) {
            } else {
                (((struct o3739_uchar *)(a4))->v) = 0xF;
                t16 = 0x3739;
            }
        }
        return t16;
    }
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f) && (t0 = *(signed char *)((a4 + 0x3739)), t0 != 16)) {
        (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
        (((struct o3739_uchar *)(a4))->v) = 0x2;
        return FUN_0c08e382(a4);
    }
    t0 = *(signed char *)((0x12 + ((((struct o418_int *)(a4))->v))));
    t15 = (unsigned char)t0;
    if (((unsigned char)t0 & 32) == 0) {
        t0 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x0));
        t16 = (unsigned char)t0;
        if ((unsigned char)t0 != 46) {
            if (((unsigned char)(*(signed char *)((a4 + 0x3743))) == 0xA0) && (t1 = (((struct o382A_short *)(a4))->v), t1 != 0)) {
                (((struct o3739_uchar *)(a4))->v) = 0x24;
            }
            if (((*(signed char *)((a4 + 0x3715))) != 14) && (t2 = *(signed char *)((a4 + 0x3715)), t2 != 14)) {
                t0 = FUN_0c064f80(a4);
                if ((t0 == 0) && (t3 = *(signed char *)((a4 + 0x3739)), (unsigned int)t3 < (unsigned int)0x2F)) {
                    switch ((t3 << 1)) {
                        case 0:
                        case 8:
                        case 14:
                        case 16:
                        case 18:
                        case 80:
                        case 82:
                        case 84:
                        case 86:
                        case 88:
                        case 90:
                        {
                            (((struct o373E_uchar *)(a4))->v) = (*(signed char *)(((*(signed char *)((a4 + 0x373E))) + 0xC25BC54)));
                            (((struct o3739_uchar *)(a4))->v) = 0x1;
                        }
                            break;
                        case 2:
                        case 4:
                        case 6:
                        case 10:
                        case 12:
                        case 22:
                        case 24:
                        case 26:
                        case 28:
                        case 30:
                        case 32:
                        case 34:
                        case 36:
                        case 38:
                        case 40:
                        case 42:
                        case 44:
                        case 46:
                        case 48:
                        case 50:
                        case 52:
                        case 54:
                        case 56:
                        case 58:
                        case 60:
                        case 62:
                        case 64:
                        case 66:
                        case 68:
                        case 70:
                        case 72:
                        case 74:
                        case 76:
                        case 78:
                        case 92:
                        {
                        }
                            break;
                        default:
                        {
                            (((struct o3739_uchar *)(a4))->v) = 0x3;
                        }
                            break;
                    }
                }
            } else {
                (((struct o3739_uchar *)(a4))->v) = 0x8;
            }
            t0 = *(signed char *)((a4 + 0x3739));
            if ((t0 != 35) && ((t0 != 36) && ((t0 != 37) && (t0 != 38)))) {
                if ((*(signed char *)((a4 + 0x3716))) == 21) {
                    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                    (((struct o3739_uchar *)(a4))->v) = 0x3;
                    FUN_0c08e382(a4);
                }
                if ((*(signed char *)((a4 + 0x3716))) == 35) {
                    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                    (((struct o3739_uchar *)(a4))->v) = 0x1D;
                    FUN_0c08e382(a4);
                }
                if ((*(signed char *)((a4 + 0x3716))) == 38) {
                    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                    (((struct o3739_uchar *)(a4))->v) = 0x1E;
                    FUN_0c08e382(a4);
                }
            }
            if (((*(signed char *)((a4 + 0x3741))) == 5) && ((t4 = *(signed char *)((a4 + 0x2)), t4 != 6) && ((t5 = *(signed char *)((a4 + 0x2)), t5 != 7) && ((t6 = *(signed char *)((a4 + 0x2)), t6 != 10) && (t7 = *(signed char *)((a4 + 0x2)), t7 != 14))))) {
                (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                (((struct o3739_uchar *)(a4))->v) = 0xD;
            }
            if ((*(signed char *)((a4 + 0x3716))) == 32) {
                if ((*(signed char *)((a4 + 0x373A))) == 28) {
                    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                    (((struct o3739_uchar *)(a4))->v) = 0x1;
                    FUN_0c08e382(a4);
                }
                if (((*(signed char *)((a4 + 0x3716))) == 32) && (t8 = *(signed char *)((a4 + 0x373A)), t8 == 38)) {
                    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                    u0 = (((struct o168_float *)(a4))->v);
                    u1 = (((struct o2C_float *)(a4))->v);
                    u2 = (((((struct o378C_float *)(a4))->v)) * 30.0f);
                    if (10.0f > _builtin_fabsf(((u1 - u0) - u2))) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(a4))->v)) + -1.0f);
                        (((struct o3739_uchar *)(a4))->v) = 0x0;
                        u3 = -1.0f;
                    } else {
                        (((struct o3739_uchar *)(a4))->v) = 0x1;
                        u3 = _builtin_fabsf(((u1 - u0) - u2));
                    }
                    FUN_0c08e382(a4);
                }
            }
            t0 = *(signed char *)((a4 + 0x3739));
            if ((t0 != 0) && ((t0 != 1) && ((t0 != 2) && ((t0 != 3) && ((t0 != 6) && ((t0 != 35) && ((t0 != 36) && ((t0 != 37) && ((t0 != 26) && ((t9 = *(signed char *)((a4 + 0x3716)), t9 == 32) && (t10 = *(signed char *)((a4 + 0x373A)), t11 = *(signed char *)((a4 + 0x3739)), t10 == t11))))))))))) {
                (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                (((struct o3739_uchar *)(a4))->v) = 0x1;
                FUN_0c08e382(a4);
            }
            if (((*(signed char *)((a4 + 0x3716))) == 17) && (t12 = *(signed char *)((a4 + 0x3739)), t12 == 13)) {
                (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                (((struct o3739_uchar *)(a4))->v) = 0x1;
                FUN_0c08e382(a4);
            }
            t0 = 0x37BC;
            if (((((struct o37BC_float *)(a4))->v)) == 0.0f) {
                t1 = 0xC25ABF4;
                if (((*(signed char *)((a4 + 0x3742))) == 0) && (t13 = *(signed char *)((a4 + 0x3739)), t14 = *(signed char *)(((t13 << 2) + 0xC25ABF4)), t14 != 0)) {
                } else {
                    (((struct o373C_uchar *)(a4))->v) = 0x7;
                    (((struct o373E_uchar *)(a4))->v) = 0x6;
                    (((struct o373A_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3739)));
                    (((struct o3739_uchar *)(a4))->v) = 0x2;
                    t1 = 0x3739;
                }
                t0 = t1;
            }
            t16 = t0;
        }
        t15 = t16;
    }
    return t15;
}

int FUN_0c1657c2(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    int R10;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_2 = a4;
    v0_3 = a5;
    v0_5 = a7;
    w0_3 = f4;
    v0_6 = *(signed char *)((v0_2 + 0x14));
    v0_4 = (v0_6);
    R10 = (0x8000);
    v0_0 = (0xC179670);
    v0_0 = (0xC179BF0);
    v0_1 = (0x14000);
    v0_0 = (v0_2);
    w0_0 = (30.0f);
    if ((v0_6 == 0)) goto L_C165810;
    if ((v0_4 == 1)) goto L_C165818;
    v0_4 = ((FUN_0c03f346(v0_0, v0_3, a6, v0_5)));
    L_C165B28:;
    return v0_4;
    L_C165818:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 4) + 0xC));
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C16584A;
    v0_4 = (FUN_0c07d1fc(v0_0, v0_3, 0x0, v0_5)) == 0;
    if (v0_4) goto L_C16584A;
    L_C165842:;
    (((struct o131_uchar *)(v0_0))->v) = 0x0;
    L_C165B12:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    v0_4 = (0x15);
    goto L_C165B28;
    L_C16584A:;
    if ((((*(int *)0xC542260) & 3) != 0)) goto L_C165872;
    FUN_0c187798(v0_2, v0_3);
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_0);
    FUN_0c14f824((*(signed char *)((v0_0 + 0x1))), ((int)stk + 4));
    L_C165872:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C165886;
    if ((v0_4 == 1)) goto L_C1658E2;
    if ((v0_4 == 2)) goto L_C165978;
    goto L_C165B28;
    L_C165978:;
    w0_5 = (((struct o28_float *)(v0_0))->v);
    w0_6 = *(float *)(((int)stk + 16));
    w0_1 = (((*(float *)(((int)stk + 20))) - ((((struct o2C_float *)(v0_0))->v))));
    w0_4 = (((*(float *)(((int)stk + 24))) - ((((struct o30_float *)(v0_0))->v))));
    w0_2 = ((w0_6 - w0_5));
    w0_3 = (9.99999997e-07f);
    if (((w0_6 - w0_5) != 0.0f)) goto L_C1659A2;
    w0_2 = (w0_3);
    L_C1659A2:;
    w0_5 = (0.0f);
    if ((w0_1 != 0.0f)) goto L_C1659AC;
    w0_1 = (w0_3);
    L_C1659AC:;
    if ((w0_4 != w0_5)) goto L_C1659B2;
    w0_4 = (w0_3);
    L_C1659B2:;
    v0_2 = ((math_atan_angle16(((-w0_4) / w0_2))));
    if ((!(0.0f > w0_2))) goto L_C1659C8;
    v0_2 = ((v0_2 + R10));
    L_C1659C8:;
    v0_4 = (((unsigned short)(v0_2 + 0x4000) - (*(int *)((v0_0 + 0x38)))) & R10) == 0;
    v0_2 = ((unsigned short)(v0_2 + 0x4000));
    v0_3 = (0x444);
    if (v0_4) goto L_C1659EC;
    if (((int)(unsigned short)((*(int *)((v0_0 + 0x38))) - v0_2) <= (int)v0_3)) goto L_C165A0C;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) - v0_3);
    L_C165A0E:;
    w0_3 = (w0_4 * w0_4);
    w0_3 = w0_3 + w0_2 * w0_2;
    w0_2 = math_signed_sqrt(w0_3);
    v0_2 = ((math_atan_angle16(((-w0_2) / w0_1))));
    if ((!(0.0f > w0_1))) goto L_C165A30;
    v0_2 = ((v0_2 + R10));
    L_C165A30:;
    *(unsigned int *)((v0_0 + 0x34)) = (-(unsigned short)(v0_2 + 0x4000));
    w0_1 = math_sin_angle16(((-(-(unsigned short)(v0_2 + 0x4000))) + v0_1));
    *(float *)(((int)stk + 0)) = w0_1;
    w0_1 = (w0_1 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_1))));
    (((struct o58_float *)(v0_0))->v) = (w0_1 * (1.0f + 1.0f));
    (((struct o5C_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_1))) * (1.0f + 1.0f));
    w0_2 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_1));
    *(float *)(((int)stk + 0)) = w0_2;
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_1));
    w0_2 = (w0_2 * w0_1);
    (((struct o60_float *)(v0_0))->v) = (w0_2 * (1.0f + 1.0f));
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) - (((((struct o4C_float *)(v0_0))->v)) / w0_0));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - (((((struct o50_float *)(v0_0))->v)) / w0_0));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) - (((((struct o54_float *)(v0_0))->v)) / w0_0));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    w0_0 = (w0_1);
    if (((short)(v0_1 - 1) != 0)) goto L_C165B28;
    goto L_C165B12;
    L_C165A0C:;
    *(unsigned int *)((v0_0 + 0x38)) = v0_2;
    goto L_C165A0E;
    L_C1659EC:;
    if (((int)(unsigned short)(v0_2 - (*(int *)((v0_0 + 0x38)))) <= (int)v0_3)) goto L_C165A0C;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_3);
    goto L_C165A0E;
    L_C1658E2:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_4 = ((short)(v0_1 - 1));
    if (((short)(v0_1 - 1) == 0)) goto L_C165946;
    goto L_C165B28;
    L_C165946:;
    v0_4 = (0x78);
    L_C165948:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_4;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = (0x15);
    goto L_C165B28;
    L_C165886:;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_1));
    *(float *)(((int)stk + 0)) = w0_0;
    w0_0 = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_1))));
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * 10.0f);
    (((struct o50_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_1))) * 10.0f);
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_1));
    *(float *)(((int)stk + 0)) = w0_1;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_1));
    w0_1 = (w0_1 * w0_0);
    (((struct o54_float *)(v0_0))->v) = (w0_1 * 10.0f);
    (((struct o58_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    v0_4 = (0xA);
    w0_0 = (w0_0);
    goto L_C165948;
    L_C165810:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C165842;
}
