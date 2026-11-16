/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c187798(void);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int FUN_0c12f490(int a4, int a5, int a6, int a7, float f4);
void FUN_0c14de18(int a4, int a5, int a6, int a7);
int FUN_0c11cdfc(int a4, int a5, int a6, int a7);
int FUN_0c1612a4(int a4, int a5, int a6, int a7);

int FUN_0c12f490(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
    if ((t0 != 26) && ((t0 != 33) && (t0 != 20))) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((*(signed char *)((0x1B + (*(int *)((a4 + 0x10)))))) == 2) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x4;
                    *(unsigned short *)((a4 + 0x1C)) = 0x4;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                } else {
                    t2 = *(signed char *)((0x1B + (*(int *)((a4 + 0x10)))));
                    t3 = t2;
                    if (t2 == 3) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x14;
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                t1 = t0;
                if (t0 == 3) {
                    t0 = *(short *)((a4 + 0x1C));
                    t3 = *(short *)((a4 + 0x1E));
                    t4 = (((struct oC4_int *)(a4))->v);
                    (((struct o18_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o1C_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o20_float *)(t4))->v) = ((float)t0 / (float)t3);
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o18_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o1C_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o20_float *)(t4))->v) = ((float)t0 / (float)t3);
                    if (!(((float)t0 / (float)t3) > 0.0f)) {
                        t0 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t0))->v) = 0.0f;
                        (((struct o1C_float *)(t0))->v) = 0.0f;
                        (((struct o18_float *)(t0))->v) = 0.0f;
                        t0 = (((struct oC8_int *)(a4))->v);
                        (((struct o20_float *)(t0))->v) = 0.0f;
                        (((struct o1C_float *)(t0))->v) = 0.0f;
                        (((struct o18_float *)(t0))->v) = 0.0f;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (t0 - 1);
                }
                t2 = t1;
            }
            t0 = t2;
        } else {
            t1 = *(signed char *)((0x1B + (*(int *)((a4 + 0x10)))));
            t2 = t1;
            if (t1 == 1) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0xE38);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - 0xE38);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        t2 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) - 0x3CA);
        (((struct o18_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o1C_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o20_float *)(t2))->v) = ((float)t0 / 15.0f);
        t2 = (((struct oC8_int *)(a4))->v);
        (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0x3CA);
        (((struct o18_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o1C_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o20_float *)(t2))->v) = ((float)t0 / 15.0f);
        if (!(1.0f > ((float)t0 / 15.0f))) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x2AAA);
            FUN_0c037498(t0, (*(int *)0xC201E5C), 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x2AAA);
            FUN_0c037498(t0, (*(int *)0xC201E5C), 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

void FUN_0c14de18(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t1 = *(int *)((a4 + 0x10));
    if (((*(signed char *)((t1 + 0x3714))) != 0) && (t0 = *(signed char *)((t1 + 0x371C)), t0 != 0)) {
        (((struct o38E5_uchar *)((*(int *)((a4 + 0x10)))))->v) = 0x1;
        if (((unsigned short)((((struct oAC_short *)((*(int *)((a4 + 0x10)))))->v)) & 0x400) != 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v)) * 0.899999976f);
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            (((struct oB0_float *)(a4))->v) = 0.899999976f;
        }
        (((struct oA8_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8)));
        t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
        if ((t0 != 5) && (t0 != 1)) {
            t0 = *(short *)((a4 + 0x1C));
            t1 = 0x2D8;
            if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 26) {
                t1 = 0xC16;
            }
            *(unsigned short *)((a4 + 0x1C)) = (t0 + t1);
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x888);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1E)) = 0x4000;
        t1 = *(short *)((a4 + 0x1E));
        if ((unsigned int)(unsigned short)t0 < (unsigned int)(unsigned short)t1) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (int)(((math_sin_angle16(((unsigned short)t0 << 1))) * 786432.0f) / 360.0f);
            t2 = ((unsigned short)t0 << 1);
            t3 = (((((struct oD4_int *)(a4))->v)) + 0x7C);
            u0 = 786432.0f;
        } else {
            t4 = (((struct oC8_int *)(a4))->v);
            u1 = (float)((unsigned short)t0 - (unsigned short)t1);
            if ((int)((unsigned short)t0 - (unsigned short)t1) < 0) {
                u1 = ((float)((unsigned short)t0 - (unsigned short)t1) + 4.2949673e+09f);
            }
            (((struct o7C_uint *)(t4))->v) = (int)(((math_sin_angle16(((int)(u1 / 1.5f) + 0x8000))) * 2949120.0f) / 360.0f);
            t2 = ((int)(u1 / 1.5f) + 0x8000);
            t3 = (((((struct oD4_int *)(a4))->v)) + 0x7C);
            u0 = 2949120.0f;
        }
        *(unsigned int *)((t3 + 0x0)) = (-(int)(((math_sin_angle16(t2)) * u0) / 360.0f));
        *(unsigned short *)((a4 + 0x1E)) = 0xFFFF8000;
        if ((unsigned int)(unsigned short)t0 < (unsigned int)(unsigned short)(*(short *)((a4 + 0x1E)))) {
            (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((unsigned short)t0)) * 1638400.0f) / 360.0f);
            t1 = ((((struct oD8_int *)(a4))->v));
            u0 = 1638400.0f;
        } else {
            (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((unsigned short)t0)) * 3276800.0f) / 360.0f);
            t1 = ((((struct oD8_int *)(a4))->v));
            u0 = 3276800.0f;
        }
        (((struct o7C_uint *)(t1))->v) = (-(int)(((math_sin_angle16((unsigned short)t0)) * u0) / 360.0f));
        return;
    }
    FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c11cdfc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c03733c(a4, 0x20, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oCC_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD0_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD4_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oD8_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oDC_int *)(a4))->v)));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(short *)((a4 + 0x1C))) < (int)0x64) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x64, 0x0);
    }
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC29232C);
    FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC292344);
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC29235C);
    FUN_0c0cff96((*(int *)((((((struct oD0_int *)(a4))->v)) + 0x8))), 0xC292374);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC29238C);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923A4);
    FUN_0c0cff96((*(int *)((((((struct oD4_int *)(a4))->v)) + 0x8))), 0xC2923BC);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x65) && ((int)t0 <= (int)0xC8)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0xC8, 0x64);
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 < (int)0xC8) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c1612a4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    if ((*(short *)((a4 + 0x1C))) != ((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t1 = *(signed char *)((a4 + 0x2));
        if (t1 != 0) {
            if (t1 != 1) {
                t0 = t1;
                if (t1 == 2) {
                    t1 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
                    t3 = t1;
                    if (t1 == 9) {
                        t1 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                        t4 = t1;
                        if ((int)t1 < (int)0x78) {
                            t1 = (int)((int)((-(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C)))) + 0x78) / (int)0x28);
                            (((struct oA8_uchar *)(a4))->v) = 0x1;
                            FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t1 << 2)))), (*(int *)0xC4B40D0));
                            if (t1 != (*(short *)((a4 + 0x1E)))) {
                                *(unsigned short *)((a4 + 0x1E)) = t1;
                                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                            }
                            *(volatile int *)((a4 + 0x10));
                            FUN_0c187798();
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                            t4 = 0x2C;
                        }
                        t3 = t4;
                    }
                    t0 = t3;
                }
                t1 = t0;
            } else {
                t0 = 0x22;
                if ((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) < (int)0x258) {
                    t3 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
                    t4 = t3;
                    if (t3 == 9) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t3 = (int)((int)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) / (int)0x3C);
                        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t3 << 2)))), (*(int *)0xC4B40D0));
                        if (t3 != (*(short *)((a4 + 0x1E)))) {
                            *(unsigned short *)((a4 + 0x1E)) = t3;
                            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                        }
                        math_mat_get_translate(((((struct oA4_int *)((*(int *)((a4 + 0x10)))))->v)), (a4 + 0x28));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 60.0f);
                        t4 = 0x2C;
                    }
                    t0 = t4;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = 0x22;
            if ((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) >= (int)0x258) {
            } else {
                t3 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x41D));
                t4 = t3;
                if ((t3 != 2) && ((t3 != 4) && (t3 != 5))) {
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    t3 = (int)((int)((((struct o22_short *)((*(int *)((a4 + 0x10)))))->v)) / (int)0x3C);
                    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((0xC2A2E10 + (t3 << 2)))), (*(int *)0xC4B40D0));
                    if (t3 != (*(short *)((a4 + 0x1E)))) {
                        *(unsigned short *)((a4 + 0x1E)) = t3;
                        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x25);
                    }
                    math_mat_get_translate(((*(int *)((a4 + 0x10))) + 0x64), (a4 + 0x28));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                    t4 = 0x2C;
                }
                t1 = t4;
            }
            t0 = t1;
        }
    }
    return t0;
}
