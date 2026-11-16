/* Straight-line functions with calls and guards (batch gen_kk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o377C_int { char p[0x377C]; int v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o414_int { char p[0x414]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c05b288(int, float, float, float, float);
int FUN_0c064f80(int);
int FUN_0c066a14(int, int, int);
int FUN_0c07d1fc(int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d04c4(int, int);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c187cac(int, int, int, int, int);
float math_signed_sqrt(float);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c043498(int a4, int a5, int a6, int a7);
int FUN_0c0f5c54(int a4, int a5, int a6, int a7);
int FUN_0c03de10(int a4, int a5);
int FUN_0c05d6a6(int a4, int a5, int a6, int a7);
int FUN_0c066b5c(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0d5f44(int a4);
int FUN_0c0d843c(int a4, int a5, int a6, int a7);
int FUN_0c0e8f3c(int a4, int a5, int a6, int a7);
int FUN_0c13c634(int a4);
int FUN_0c0b798e(int a4);

int FUN_0c043498(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0500000007f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, 0x1, a6, a7);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct oAC_ushort *)(a4))->v) = 0x41F;
                (((struct oB0_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = (int)((int)(*(short *)((a4 + 0x1C))) / (int)0x6);
            t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x1);
            }
            if (t1 != 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            }
            return 0xC8;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)0xC542361;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 97.8133316f;
            (((struct o74_float *)(t0))->v) = 10000.0f;
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = -237.813339f;
            (((struct o70_float *)(t0))->v) = 96.7893372f;
            (((struct o74_float *)(t0))->v) = 10000.0f;
        }
    } else {
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = 0.0f;
        (((struct o70_float *)(t0))->v) = 142.186661f;
        (((struct o74_float *)(t0))->v) = 10000.0f;
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = -237.813339f;
        (((struct o70_float *)(t0))->v) = 143.210663f;
        (((struct o74_float *)(t0))->v) = 10000.0f;
    }
    t0 = *(signed char *)0xC541F41;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 2) {
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 9) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
    }
    return t1;
}

int FUN_0c0f5c54(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 7) {
                                if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(FUN_0c0d532c))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                return FUN_0c0d5328();
            }
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (0xC1CE484 + (((t0 << 1) + t0) << 2)), 0x0);
        }
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    *(volatile signed char *)((a4 + 0x2));
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x2;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    *(volatile signed char *)((a4 + 0x3));
    t0 = ((int (*)(void))(FUN_0c187798))();
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                return t0;
                            }
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            return FUN_0c0d5328();
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (0xC1CE484 + (((t0 << 1) + t0) << 2)), 0x0);
    }
    return FUN_0c0d522c(a4);
}

int FUN_0c03de10(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t30;
    register float u9;
    register float u12;
    register int t22;
    register int t13;
    register int t14;
    register int t15;
    register int t19;
    register int t21;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = 0x0;
    t1 = a5;
    for (;;) {
        t2 = (int)((int)(short)t1 % (int)0xA);
        *(unsigned int *)((((t0 << 2) + (((int)stk + 0) + 0x4)) + 0x0)) = t2;
        if (t2 != 0) {
            t1 = ((int)((int)(short)t1 / (int)0xA));
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    t5 = FUN_0c03f444(0x5, 0x0, t0);
    t30 = t5;
    if (t5 != 0) {
        (((struct oA8_uchar *)(t5))->v) = 0x1;
        (((struct oAC_ushort *)(t5))->v) = 0xF;
        (((struct oA9_uchar *)(t5))->v) = 0x80;
        *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t5 + 0x4)) = 0xC03DDFE;
        (((struct o28_float *)(t5))->v) = -40.0f;
        u9 = 31.0f;
        if ((*(signed char *)0xC5429A8) == 0) {
        } else {
            u9 = ((((struct o0_float *)0xC03DFC4)->v));
        }
        (((struct o2C_float *)(t5))->v) = u9;
        (((struct o30_float *)(t5))->v) = 0.0f;
        *(unsigned int *)((t5 + 0x3C)) = 0x0;
        *(unsigned int *)((t5 + 0x38)) = 0x0;
        *(unsigned int *)((t5 + 0x34)) = 0x0;
        *(unsigned char *)((t5 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned short *)((t5 + 0x1C)) = t1;
        u12 = (((struct o4_float *)0xC03DFC4)->v);
        t22 = 0xC03DFC8;
        if ((int)t0 > 0) {
            t13 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 0)) = (t13 << 2);
                t14 = *(int *)(((int)stk + 0));
                t15 = *(int *)((((t13 << 2) + (0xC4 + t5)) + 0x0));
                FUN_0c03744a(t15, 0x0, (*(int *)(((t14 + (((int)stk + 0) + 0x4)) + 0x0))), (*(int *)0xC4B410C));
                t19 = *(int *)(((t14 + (((int)stk + 0) + 0x4)) + 0x0));
                if (((int)t19 >= 0) && ((int)t19 <= (int)0x9)) {
                } else {
                    *(unsigned char *)((t15 + 0x0)) = 0x0;
                }
                t21 = t13;
                t13 = (t13 + 0x1);
                (((struct o6C_float *)(t15))->v) = (-((float)t21 * u12));
                if ((int)t13 >= (int)t0) {
                    break;
                }
            }
            t22 = 0x6C;
        }
        t30 = t22;
    }
    return t30;
}

int FUN_0c05d6a6(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t5;
    register int t9;
    register int t16;
    register int t26;

    *(unsigned char *)(((int)stk + 24)) = a4;
    if ((*(signed char *)0xC541F65) != 0) {
        return a4;
    }
    t5 = 0x0;
    if ((*(int *)0xC542408) == 0) {
    } else {
        t5 = (*(signed char *)(((int)stk + 24)));
    }
    if ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x8))) == 1) {
        *(unsigned int *)(((int)stk + 32)) = ((((signed char)t5 << 2) << 2) + 0xC5423C4);
        t9 = *(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x0));
        *(unsigned int *)(((int)stk + 20)) = t9;
        *(int *)((int)stk + 16) = (t9);
        *(int *)((int)stk + 12) = ((*(int *)((0xC257904 + (((((unsigned int)(*(int *)(((int)stk + 20))) > (unsigned int)0x1)) ? 1 : 0) << 2)))));
        *(int *)((int)stk + 8) = 0xC1C40C8;
        FUN_0c187cac(0xC4B107C, a5, a6, a7, 0xC1C40C8);
    } else {
        if ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x4))) == 0) {
            *(unsigned int *)(((int)stk + 28)) = ((((signed char)t5 << 2) << 2) + 0xC5423C4);
            t16 = *(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t16;
            *(int *)((int)stk + 16) = (t16);
            *(int *)((int)stk + 12) = ((*(int *)((0xC257904 + (((((unsigned int)(*(int *)(((int)stk + 20))) > (unsigned int)0x1)) ? 1 : 0) << 2)))));
            *(int *)((int)stk + 8) = 0xC1C40C8;
            FUN_0c187cac(0xC4B107C, a5, a6, a7, 0xC1C40C8);
        } else {
            *(int *)((int)stk + 16) = ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x8))));
            *(int *)((int)stk + 12) = ((*(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x4))));
            t26 = *(int *)((((((signed char)t5 << 2) << 2) + 0xC5423C4) + 0x0));
            *(unsigned int *)(((int)stk + 20)) = t26;
            *(int *)((int)stk + 8) = (t26);
            *(int *)((int)stk + 4) = ((*(int *)((0xC257904 + (((((unsigned int)(*(int *)(((int)stk + 20))) > (unsigned int)0x1)) ? 1 : 0) << 2)))));
            *(int *)((int)stk + 0) = 0xC1C40D0;
            FUN_0c187cac(0xC4B107C, a5, a6, a7, 0xC1C40D0);
        }
    }
    return FUN_0c05b288(0xC4B107C, ((float)(*(signed char *)(((int)stk + 24))) * ((((struct o4_float *)0xC05D88C)->v))), ((((struct o0_float *)0xC05D88C)->v)), 1.0f, 1.0f);
}

int FUN_0c066b5c(int a4, int a5, int a6, int a7, int a8)
{
    int stk[2];
    register int t0;
    int t1;
    register int t5;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    t0 = (((struct o414_int *)(a4))->v);
    if ((t0 != 0) && (t1 = *(signed char *)((t0 + 0xD)), ((unsigned char)t1 & 128) != 0)) {
        t5 = a8;
        t6 = (*(int *)(((int)stk + 0)));
    } else {
        t5 = (*(int *)(((int)stk + 0)));
        t6 = a8;
    }
    return FUN_0c066a14((*(int *)(((int)stk + 4))), t5, t6);
}

int FUN_0c0d5f44(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_3 = a4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC540D98);
    v0_4 = *(signed char *)((v0_3 + 0x14));
    v0_2 = (v0_4);
    v0_0 = (v0_3);
    v0_1 = (0x0);
    if ((v0_4 == 0)) goto L_C0D5F70;
    if ((v0_2 == 1)) goto L_C0D5FCA;
    L_C0D608A:;
    return v0_2;
    L_C0D5FCA:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0D5FE2;
    if ((v0_2 == 1)) goto L_C0D6004;
    if ((v0_2 == 2)) goto L_C0D604C;
    if ((v0_2 == 3)) goto L_C0D6064;
    goto L_C0D608A;
    L_C0D6064:;
    v0_3 = (0xFFFFFF4A);
    if (((*(signed char *)((v0_0 + 0x2))) == 0)) goto L_C0D606E;
    v0_3 = (0xB6);
    L_C0D606E:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_2))->v) = (((((struct o7C_int *)(v0_2))->v)) + v0_3);
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C0D608A;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_2 = (0x15);
    goto L_C0D608A;
    L_C0D604C:;
    v0_1 = *(signed char *)((0x41D + (*(int *)(((int)stk + 0)))));
    v0_2 = (v0_1);
    if ((v0_1 == 1)) goto L_C0D608A;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x5A;
    v0_2 = (0x5A);
    goto L_C0D608A;
    L_C0D6004:;
    v0_3 = (0x111);
    if (((*(signed char *)((v0_0 + 0x2))) == 0)) goto L_C0D600E;
    v0_3 = (0xFFFFFEEF);
    L_C0D600E:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + v0_3);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0D608A;
    L_C0D6026:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (0x15);
    goto L_C0D608A;
    L_C0D5FE2:;
    v0_1 = *(signed char *)((0x41D + (*(int *)(((int)stk + 0)))));
    v0_2 = (v0_1);
    if ((v0_1 != 1)) goto L_C0D608A;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C0D6026;
    thunk_FUN_0c05abb2(0x53, (v0_0 + 0x28));
    goto L_C0D6026;
    L_C0D5F70:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_2 = (0xC0D04C4);
    v0_2 = (v0_1);
    v0_3 = (0x5);
    L_C0D5FC2:;
    if (((int)v0_2 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0D5F94;
    goto L_C0D5FCA;
    L_C0D5F94:;
    v0_4 = ((v0_2 << 2));
    if ((v0_2 == 0)) goto L_C0D5FB2;
    v0_4 = *(int *)((((0xC4 + v0_0) + v0_4) + 0x0));
    FUN_0c0d04c4((v0_4 + 0x6), (v0_4 + 0x78));
    L_C0D5FC0:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0D5FC2;
    L_C0D5FB2:;
    *(unsigned short *)(((*(int *)(((v0_4 + (0xC4 + v0_0)) + 0x0))) + 0x6)) = v0_3;
    goto L_C0D5FC0;
}

int FUN_0c0d843c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC54223C) == 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14)) == 0) {
                            FUN_0c07e420(a4, 0x1);
                        }
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        t2 = (short)(t0 - 1);
                        if ((short)(t0 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o14_uchar *)(a4))->v) = 0x4;
                            t2 = 0x14;
                        }
                        t1 = t2;
                    }
                    t0 = t1;
                } else {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 2.20000005f);
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14)) == 0) {
                        FUN_0c07e420(a4, 0x1);
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                t2 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                    *(unsigned short *)((a4 + 0x1C)) = 0x4B0;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(signed char *)0xC54098D;
            t2 = t1;
            if (t1 == 3) {
                *(unsigned short *)((a4 + 0x1C)) = 0x708;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        FUN_0c07e420(a4, 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 1400.0f);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 2000.0f);
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 600.0f);
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c0e8f3c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t2 = (short)(t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, 0xF, a6);
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            return t0;
        }
        if ((*(int *)0xC540DD4) == 0) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, 0xF, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        (((struct oA4_uint *)(a4))->v) = ((*(int *)0xC540DD4) + 0x64);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t1 = t0;
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + a4));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c0d04c4((t1 + 0x6), (t1 + 0x78));
            t0 = (t0 + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t2 = (short)(t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1C)) = 0xF;
                        t0 = ((int (*)(int, int))(FUN_0c187798))(0x0, 0xF);
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t2 = 0x15;
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xF;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            return t0;
        }
        if ((*(int *)0xC540DD4) == 0) {
            return ((int (*)(int, int))(FUN_0c03f346))(a4, 0xF);
        }
    }
    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)((((((struct o44_int *)((0xC540D94 + t0)))->v)) + 0x41D))) != 0) {
            t0 = (t0 + 0x4);
            if ((unsigned int)t0 >= (unsigned int)0x8) {
                break;
            }
            continue;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return 0x41D;
}

int FUN_0c13c634(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037320(0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 == 0) {
    } else {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c187798();
        *(unsigned int *)((t1 + 0x4)) = 0xC13C4C0;
        *(unsigned char *)((t1 + 0x2)) = 0xFFFFFFFF;
        u0 = ((((struct o28_float *)(t1))->v));
        u0 = u0 + 1.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0xC9)) + -100.0f));
        (((struct o28_float *)(t1))->v) = u0;
        u0 = ((((struct o30_float *)(t1))->v));
        u0 = u0 + 1.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0xC9)) + -100.0f));
        (((struct o30_float *)(t1))->v) = u0;
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 64.0f);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t1))->v)), 0x0, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0xF;
        FUN_0c037498(((((struct oC8_int *)(t1))->v)), 0x1, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t1))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC8_int *)(t1))->v)) + 0x6)) = 0x1F;
        t2 = (((struct oC8_int *)(t1))->v);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        FUN_0c037498(((((struct oCC_int *)(t1))->v)), 0x2, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oCC_int *)(t1))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oCC_int *)(t1))->v)) + 0x6)) = 0x1F;
        t2 = (((struct oCC_int *)(t1))->v);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0x84;
    }
    return t0;
}

int FUN_0c0b798e(int a4)
{
    register int t0;
    register int t2;
    register int t4;
    float u0;
    register float u1;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = 0x3;
        t0 = 0x16;
    } else {
        if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
            t0 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
            if ((t0 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
                u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
                u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
                u1 = math_signed_sqrt(u0);
                if (((((struct o0_float *)0xC0B7B3C)->v)) > u1) {
                    u0 = (((struct o4_float *)0xC0B7B3C)->v);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
                }
            }
        }
        t0 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t2 = FUN_0c07d1fc(a4);
            t0 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x6, (t2), 0x2, 0x6);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o50_float *)(a4))->v) = ((((struct o10_float *)0xC0B7B3C)->v));
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t0 = 0x16;
            }
        }
    }
    return t0;
}
