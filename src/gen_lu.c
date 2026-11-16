/* Straight-line functions with calls and guards (batch gen_lu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c216e(int);
int FUN_0c0c2870(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c9de8(int);
int FUN_0c0c9e1a(void);
int FUN_0c0ed620(int);
int FUN_0c0ed6ba(int);
int FUN_0c0ed78c(int);
int FUN_0c0eda58(int);
int FUN_0c187798(int, int);
float math_sin_angle16(int);
int FUN_0c0c9e1e(int a4);
int FUN_0c0edd2c(int a4, int a5, int a6, int a7);
int FUN_0c051538(int a4, int a5, int a6);
int FUN_0c1203d8(int a4);
int FUN_0c141b86(int a4, int a5, int a6, int a7);

int FUN_0c0c9e1e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = FUN_0c0c216e(a4);
    if (t2 == 0) {
        t2 = FUN_0c0c2870(a4);
        if (t2 != 0) {
            return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
        }
        t2 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715));
        if ((t2 != 5) && ((t2 != 6) && ((t2 != 7) || (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x15)), t0 != 1)))) {
            (((struct oA4_uint *)(a4))->v) = 0x0;
            FUN_0c187798(0x0, t2);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
            *(unsigned int *)((a4 + 0x38)) = (*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38)));
        } else {
            (((struct o28_float *)(a4))->v) = 34.0f;
            (((struct o2C_float *)(a4))->v) = -21.7000008f;
            (((struct o30_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x38)) = 0x4000;
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            (((struct oA4_uint *)(a4))->v) = (((((struct o100_int *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + 0x28);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0x0;
            (((struct o78_uint *)(t0))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                FUN_0c0c9e1a();
            }
        } else {
            FUN_0c0c9de8(a4);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c0edd2c(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_0 = (v0_2);
    v0_2 = (0xC540978);
    if (((int)(*(signed char *)0xC54098D) < (int)0xE)) goto L_C0EDD48;
    return FUN_0c03f346(v0_0, R5, R6, a7);
    L_C0EDD48:;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C0EDD68;
    if ((v0_1 == 1)) goto L_C0EDDC8;
    L_C0EDE3E:;
    return v0_1;
    L_C0EDDC8:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 1)) goto L_C0EDDE0;
    if ((v0_1 == 2)) goto L_C0EDDE8;
    if ((v0_1 == 3)) goto L_C0EDDF0;
    if ((v0_1 == 0)) goto L_C0EDDF8;
    L_C0EDDF8:;
    FUN_0c0ed620(v0_0);
    v0_2 = *(signed char *)((0x15 + (*(int *)((v0_0 + 0x10)))));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0EDE3E;
    if ((v0_1 == 5)) goto L_C0EDE3E;
    if ((v0_1 == 6)) goto L_C0EDE3E;
    if ((v0_1 == 7)) goto L_C0EDE3E;
    if ((v0_1 == 99)) goto L_C0EDE22;
    if ((v0_1 == 8)) goto L_C0EDE2A;
    if ((v0_1 == 9)) goto L_C0EDE32;
    goto L_C0EDE3E;
    L_C0EDE32:;
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    L_C0EDE38:;
    (((struct o16_uchar *)(v0_0))->v) = 0x0;
    v0_1 = (0x16);
    goto L_C0EDE3E;
    L_C0EDE2A:;
    (((struct o15_uchar *)(v0_0))->v) = 0x1;
    goto L_C0EDE38;
    L_C0EDE22:;
    (((struct o15_uchar *)(v0_0))->v) = 0x3;
    goto L_C0EDE38;
    L_C0EDDF0:;
    return FUN_0c0ed6ba(v0_0);
    L_C0EDDE8:;
    return FUN_0c0eda58(v0_0);
    L_C0EDDE0:;
    return FUN_0c0ed78c(v0_0);
    L_C0EDD68:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_1 = (0x1B);
    if (((int)(*(signed char *)((v0_0 + 0x1B))) < 0)) goto L_C0EDDA0;
    (((struct oA4_uint *)(v0_0))->v) = ((*(int *)(((((*(signed char *)((v0_0 + v0_1))) << 2) + (0x41C + v0_2)) + 0x0))) + 0x64);
    *(unsigned int *)((v0_0 + 0x10)) = (*(int *)(((((*(signed char *)((v0_0 + 0x1B))) << 2) + (0x41C + v0_2)) + 0x0)));
    L_C0EDDA0:;
    (((struct o128_ushort *)(v0_0))->v) = 0x40;
    (((struct o12E_ushort *)(v0_0))->v) = 0xFFFFFFEF;
    v0_2 = (0x0);
    R5 = (0x1F);
    R6 = (0x20);
    L_C0EDDC4:;
    if (((unsigned int)v0_2 < (unsigned int)R6)) goto L_C0EDDB4;
    goto L_C0EDDC8;
    L_C0EDDB4:;
    *(unsigned short *)(((*(int *)((((0xC4 + v0_0) + v0_2) + 0x0))) + 0x6)) = R5;
    v0_2 = ((v0_2 + 0x4));
    goto L_C0EDDC4;
}

int FUN_0c051538(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;

    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 != 1) {
            return FUN_0c03f346(a4, 0x1E, a6, 0x0);
        }
        t6 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
        t7 = (short)(t6 - 1);
        if ((short)(t6 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            t6 = *(short *)((a4 + 0x1E));
            if (t6 != 0) {
                t8 = t6;
                if (t6 != 1) {
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    if (((int)(unsigned char)(*(signed char *)0xC40F820) < (int)0x2) && ((t0 = *(signed char *)0xC40F821, (int)(unsigned char)t0 < (int)0x2) && ((t1 = *(signed char *)0xC40F822, (int)(unsigned char)t1 < (int)0x2) && (t2 = *(signed char *)0xC40F823, (int)(unsigned char)t2 < (int)0x2)))) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                        t0 = 0xC4;
                    } else {
                        t1 = *(signed char *)0xC541F62;
                        if ((unsigned char)t1 != 0) {
                            if ((unsigned char)t1 != 1) {
                                t1 = (*(signed char *)0xC241470);
                            } else {
                                t1 = (*(signed char *)0xC24146B);
                            }
                            t2 = t1;
                        } else {
                            t2 = (*(signed char *)0xC241466);
                        }
                        t1 = (((struct oC4_int *)(a4))->v);
                        FUN_0c03744a(t1, 0x0, t2, (*(int *)0xC4B410C));
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x1F;
                        (((struct o6C_float *)(t1))->v) = -234.0f;
                        (((struct o70_float *)(t1))->v) = -178.0f;
                        t0 = 0x70;
                    }
                    t8 = t0;
                }
                t0 = t8;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                t0 = 0xC4;
            }
            t7 = t0;
        }
        return t7;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                if (((int)(unsigned char)(*(signed char *)0xC40F820) < (int)0x2) && ((t3 = *(signed char *)0xC40F821, (int)(unsigned char)t3 < (int)0x2) && ((t4 = *(signed char *)0xC40F822, (int)(unsigned char)t4 < (int)0x2) && (t5 = *(signed char *)0xC40F823, (int)(unsigned char)t5 < (int)0x2)))) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    t0 = 0xC4;
                } else {
                    t3 = *(signed char *)0xC541F62;
                    if ((unsigned char)t3 != 0) {
                        if ((unsigned char)t3 != 1) {
                            t3 = (*(signed char *)0xC241470);
                        } else {
                            t3 = (*(signed char *)0xC24146B);
                        }
                        t4 = t3;
                    } else {
                        t4 = (*(signed char *)0xC241466);
                    }
                    t3 = (((struct oC4_int *)(a4))->v);
                    FUN_0c03744a(t3, 0x0, t4, (*(int *)0xC4B410C));
                    *(unsigned char *)((t3 + 0x0)) = 0x1;
                    *(unsigned short *)((t3 + 0x6)) = 0x1F;
                    (((struct o6C_float *)(t3))->v) = -234.0f;
                    (((struct o70_float *)(t3))->v) = -178.0f;
                    t0 = 0x70;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xC4;
        }
        t1 = t0;
    }
    return t1;
}


int FUN_0c141b86(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    if ((*(signed char *)((0xC5324B0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0) {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x238E);
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
                if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return 0x40;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            u0 = 1.0f;
            u0 = u0 + 0.400000006f * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 14)));
            (((struct o48_float *)(a4))->v) = u0;
            t0 = 0x14;
            if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14))) > (int)0x1) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        t0 = 0x48;
        if ((*(float *)((0xC20234C + ((*(signed char *)((a4 + 0x2))) << 2)))) > ((((struct o48_float *)(a4))->v))) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
