/* game/unsorted: functions 0C0EFEA4-0C0F08FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064f80(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0efb30(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0efea4(int a4);
int FUN_0c0efee0(int a4, int a5);
int FUN_0c0f02aa(int a4);
int FUN_0c0f02c4(int a4);
int FUN_0c0f06c8(int a4, int a5);
int FUN_0c0f0728(int a4);
int FUN_0c0f076c(int a4, int a5, int a6);
int FUN_0c0f085c(int a4, int a5);

int FUN_0c0efea4(int a4)
{
    register int t0;
    float u1;

    t0 = FUN_0c064f80(a4);
    if ((t0 != 0) && (u1 = (((struct o50_float *)(a4))->v), !(u1 > 0.0f))) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    return 0x2C;
}

int FUN_0c0efee0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        (((struct o15_uchar *)(a4))->v) = (t0 + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t1 = 0x40;
        t2 = (t0 + 0x1);
        t0 = 0x0;
        t3 = a5;
        for (;;) {
            if ((unsigned int)t0 >= (unsigned int)0x10) {
                break;
            }
            t4 = 0xC4;
            t4 = (t4 + a4);
            t4 = (t4 + t0);
            t2 = (*(int *)((t4 + 0x0)));
            t1 = 0x1F;
            t3 = 0xC4;
            *(unsigned short *)((t2 + 0x6)) = t1;
            t3 = (t3 + a4);
            t1 = 0x8C;
            t3 = (t3 + t0);
            t3 = (*(int *)((t3 + 0x0)));
            t0 = (t0 + 0x4);
            *(float *)((t3 + t1)) = 1.0f;
            t1 = (t1 - 4);
            *(float *)((t3 + t1)) = 1.0f;
            t1 = (t1 - 4);
            *(float *)((t3 + t1)) = 1.0f;
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    switch (t0) {
    case 0:
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        thunk_FUN_0c05abb2(0x54, (a4 + 0x28));
        if (((((struct o20_short *)(a4))->v)) == 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 4.0f);
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 4.0f);
                } else {
                    t0 = (((struct o22_short *)(a4))->v);
                    if (t0 == 4) {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 4.0f);
                    } else {
                        if (t0 == 6) {
                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 4.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        break;
    case 1:
        if (((((struct o20_short *)(a4))->v)) == 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 4.0f);
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 4.0f);
                } else {
                    t0 = (((struct o22_short *)(a4))->v);
                    if (t0 == 4) {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 4.0f);
                    } else {
                        if (t0 == 6) {
                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 4.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        break;
    case 2:
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                } else {
                    if (((((struct o44_float *)(a4))->v)) > 1.0f) {
                        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.00999999978f);
                    } else {
                        (((struct o44_float *)(a4))->v) = 1.0f;
                    }
                    t0 = FUN_0c064f80(a4);
                    if (t0 == 0) {
                    } else {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                    }
                }
            } else {
                if (1.20000005f > ((((struct o44_float *)(a4))->v))) {
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                }
                if (((((struct o50_float *)(a4))->v)) > 0.0f) {
                } else {
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
            }
        } else {
            if (((((struct o44_float *)(a4))->v)) > 0.5f) {
                t0 = 0x44;
                u0 = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                (((struct o44_float *)(a4))->v) = 0.5f;
                t0 = 0x50;
                u0 = 20.0f;
            }
            *(float *)((a4 + t0)) = u0;
        }
        break;
    case 3:
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0xA;
        }
        if (((((struct o22_short *)(a4))->v)) == 0) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        } else {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
        }
        t1 = (((struct oC8_int *)(a4))->v);
        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) - 0xE38);
        t1 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) - 0xE38);
        t1 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) - 0xE38);
        t1 = (((struct oC8_int *)(a4))->v);
        u0 = ((((struct o6C_float *)(t1))->v));
        u0 = u0 + 10.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x5555)));
        (((struct o6C_float *)(t1))->v) = u0;
        t1 = (((struct oC8_int *)(a4))->v);
        u0 = ((((struct o74_float *)(t1))->v));
        u0 = u0 + 10.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x5555)));
        (((struct o74_float *)(t1))->v) = u0;
        t1 = (((struct oC8_int *)(a4))->v);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 0.0500000007f);
        t1 = (((struct oCC_int *)(a4))->v);
        u0 = ((((struct o6C_float *)(t1))->v));
        u0 = u0 + 10.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o6C_float *)(t1))->v) = u0;
        t1 = (((struct oCC_int *)(a4))->v);
        u0 = ((((struct o74_float *)(t1))->v));
        u0 = u0 + 10.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o74_float *)(t1))->v) = u0;
        t1 = (((struct oCC_int *)(a4))->v);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 0.0500000007f);
        t1 = (((struct oD0_int *)(a4))->v);
        u0 = ((((struct o6C_float *)(t1))->v));
        u0 = u0 + 10.0f * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0xAAAA)));
        (((struct o6C_float *)(t1))->v) = u0;
        t1 = (((struct oD0_int *)(a4))->v);
        u0 = ((((struct o74_float *)(t1))->v));
        u0 = u0 + 10.0f * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0xAAAA)));
        (((struct o74_float *)(t1))->v) = u0;
        t1 = (((struct oD0_int *)(a4))->v);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 0.0500000007f);
        if (!(0.0f > ((((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v)))) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) - 0.100000001f);
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        break;
    case 4:
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x3);
        FUN_0c0efb30((a4 + 0x28), t0);
        FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
        break;
    }
    return FUN_0c0efea4(a4);
}

int FUN_0c0f02aa(int a4)
{
    if ((*(short *)(((a4 + 0x428) + 0x4))) != -1) {
        *(unsigned short *)(((a4 + 0x428) + 0x4)) = ((*(short *)(((a4 + 0x428) + 0x4))) - 1);
    }
    return ((((*(short *)(((a4 + 0x428) + 0x4))) == 0)) ? 1 : 0);
}

int FUN_0c0f02c4(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)(((0x428 + a4) + 0x1))) != 0) {
        t0 = *(short *)(((0x428 + a4) + 0x2));
        *(unsigned short *)(((0x428 + a4) + 0x2)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)(((0x428 + a4) + 0x1)) = ((*(signed char *)(((0x428 + a4) + 0x1))) ^ 0x1);
            *(unsigned short *)(((0x428 + a4) + 0x2)) = (((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + 0x3C);
        }
        t0 = *(short *)(((0x428 + a4) + 0x2));
        if ((t0 & 0x7) != 0) {
            if ((t0 & 0x7) != 2) {
                if ((t0 & 0x7) != 4) {
                    t1 = (t0 & 0x7);
                    if ((t0 & 0x7) != 6) {
                    } else {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                        t1 = 0x30;
                    }
                    t0 = t1;
                } else {
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                    t0 = 0x30;
                }
                t1 = t0;
            } else {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (1.0f + 1.0f));
                t1 = 0x28;
            }
            t0 = t1;
        } else {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (1.0f + 1.0f));
            t0 = 0x28;
        }
        t1 = t0;
    } else {
        t0 = *(short *)(((0x428 + a4) + 0x2));
        *(unsigned short *)(((0x428 + a4) + 0x2)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            *(unsigned char *)(((0x428 + a4) + 0x1)) = ((*(signed char *)(((0x428 + a4) + 0x1))) ^ 0x1);
            t0 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
            *(unsigned short *)(((0x428 + a4) + 0x2)) = (t0 + 0x5);
            t1 = (t0 + 0x5);
        }
    }
    return t1;
}


int FUN_0c0f0728(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x2) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0xC3, (*(int *)0xC4B410C));
    }
    return 0x20;
}

int FUN_0c0f076c(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int R8;
    register int R10;
    register int R12;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F077C;
    if ((v0_1 == 1)) goto L_C0F0790;
    return FUN_0c03f346(v0_0, a5, a6, R7);
    L_C0F0790:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F07CC;
    if (!((v0_1 == 1))) goto L_C0F0852;
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + 0.00499999989f);
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 1.0f);
    (((struct oBC_float *)(v0_0))->v) = (((((struct oBC_float *)(v0_0))->v)) - 0.0500000007f);
    v0_1 = (0xBC);
    w0_0 = (0.0f);
    FPUL_ = (0x3D4CCCCD);
    if ((((((struct oBC_float *)(v0_0))->v)) > 0.0f)) goto L_C0F0846;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C0F0846;
    L_C0F0852:;
    return FUN_0c0f0728(v0_0);
    L_C0F0846:;
    w0_0 = (((struct oBC_float *)(v0_0))->v);
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C0F0852;
    L_C0F07CC:;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_0 + 0.100000001f);
    (((struct o44_float *)(v0_0))->v) = (w0_0 + 0.100000001f);
    v0_1 = (0x40);
    w0_0 = (1.0f);
    FPUL_ = (0x3DCCCCCD);
    if ((!(((((struct o40_float *)(v0_0))->v)) > 1.0f))) goto L_C0F0852;
    *(float *)((v0_0 + v0_1)) = w0_0;
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    goto L_C0F0852;
    L_C0F077C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C0F0790;
}



