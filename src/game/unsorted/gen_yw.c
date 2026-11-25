/* Straight-line functions with calls and guards (batch gen_yw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c064f80(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0efb30(int, int);
int FUN_0c0efea4(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0efee0(int a4, int a5, int a6, int a7);

int FUN_0c0efee0(int a4, int a5, int a6, int a7)
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
    if (t0 != 0) {
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        thunk_FUN_0c05abb2(0x54, (a4 + 0x28));
    }
    if ((t0 == 0) || (t0 == 1)) {
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
                    t1 = (((struct o22_short *)(a4))->v);
                    if (t1 == 4) {
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 4.0f);
                    } else {
                        if (t1 == 6) {
                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 4.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
    } else {
        switch (t0) {
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
            t0 = (int)((int)(nlRand()) % (int)0x3);
            FUN_0c0efb30((a4 + 0x28), t0);
            FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            break;
        }
    }
    return FUN_0c0efea4(a4);
}
