/* Straight-line functions with calls and guards (batch gen_mf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
float FUN_0c0e2240(int, int);
int FUN_0c104146(int);
int FUN_0c1171f0(int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c16a40c(int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int FUN_0c1194d0(int a4, int a5, int a6, int a7);
int FUN_0c12c420(int a4, int a5, int a6, int a7);
int FUN_0c16a6e0(int a4);
int FUN_0c0df30a(int a4);
int FUN_0c104044(int a4, int a5, int a6, int a7);

int FUN_0c1194d0(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    if ((*(short *)(((0x41C + t0) + 0xE))) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 99) {
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(volatile int *)((a4 + 0x10));
        t1 = ((int (*)(int, int, int))(FUN_0c187798))(0x1, a5, a6);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x6, 0xD, (*(int *)0xC4B410C));
        t1 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
        *(volatile int *)((a4 + 0x10));
        t1 = ((int (*)(void))(FUN_0c187798))();
    }
    FUN_0c1171f0(a4);
    t1 = (((struct oC4_int *)(a4))->v);
    FUN_0c0588bc((t1 + 0x6C), 0xC291DD4, 0xC291DC8, (*(short *)(((0x41C + t0) + 0xC))), 0x4, 0x0);
    return FUN_0c17c130((t1 + 0x6C), (t1 + 0x6C), (0x90 + t1));
}

int FUN_0c12c420(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    if (t1 != 4) {
                        if ((t1 != 5) && (t1 != 6)) {
                            return t1;
                        }
                        return FUN_0c03f346(a4, t0, 0xB6, a7);
                    }
                    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
                    (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.0500000007f);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    return t2;
                }
                (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
                if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14))) > (int)0x3) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                return 0x14;
            }
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.150000006f);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.100000001f);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            return t2;
        }
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.100000001f);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o84_float *)(t0))->v) = 0.00999999978f;
    (((struct o88_float *)(t0))->v) = 0.0f;
    (((struct o8C_float *)(t0))->v) = 0.00999999978f;
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c16a6e0(int a4)
{
    int stk[4];
    register int t1;
    int t3;
    register float t7;
    register int t30;
    register int t47;
    register int t50;
    register int t59;
    register int t68;

    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t68 = 0x16;
            } else {
                FUN_0c16a40c(a4);
                t3 = *(signed char *)((a4 + 0x2));
                if ((t3 != 0) && (t3 != 1)) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t68 = 0x16;
                } else {
                    *(volatile int *)(((int)stk + 0));
                    FUN_0c187798();
                    t7 = FUN_0c0e2240((a4 + 0x28), (((int)stk + 0) + 0x4));
                    t68 = 0xC16A810;
                    if (!(t7 > (*(float *)0xC16A810))) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t68 = 0x16;
                    }
                }
            }
        } else {
            FUN_0c16a40c(a4);
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            }
            t68 = 0x20;
            if ((int)((((struct o20_short *)(a4))->v)) <= 0) {
                t30 = *(signed char *)0xC542235;
                t68 = t30;
                if (t30 != 2) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t68 = 0x16;
                }
            }
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t47 = *(signed char *)((a4 + 0x2));
        t50 = 0x5A;
        if (t47 != 0) {
            t50 = 0x3C;
            if (t47 != 1) {
                t50 = 0xB4;
            }
        }
        (((struct o20_ushort *)(a4))->v) = t50;
        FUN_0c16a40c(a4);
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        }
        t68 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) <= 0) {
            t59 = *(signed char *)0xC542235;
            t68 = t59;
            if (t59 != 2) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t68 = 0x16;
            }
        }
    }
    return t68;
}

int FUN_0c0df30a(int a4)
{
    int stk[9];
    register int t0;
    register int t25;
    register int t1;
    register int t2;
    register float u7;
    register float u8;
    register float u9;
    register int t10;
    register int t11;
    register float u16;
    register float u19;
    register int t24;

    t0 = (((struct o20_short *)(a4))->v);
    t25 = t0;
    if ((t0 & 7) == 0) {
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0xF);
        }
        math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), ((int)stk + 0));
        u7 = (((struct o0_float *)0xC0DF468)->v);
        u8 = (((struct o4_float *)0xC0DF468)->v);
        u9 = (((struct o8_float *)0xC0DF468)->v);
        t10 = 0x4;
        t11 = ((t2 << 8) << 1);
        for (;;) {
            FUN_0c187798();
            *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - u7);
            u16 = (*(float *)(((int)stk + 32)));
            u16 = u16 + u9 * (math_cos_angle16(t11));
            *(float *)(((int)stk + 32)) = u16;
            u19 = (*(float *)(((int)stk + 24)));
            u19 = u19 + u9 * (math_sin_angle16(t11));
            t11 = (t11 + 0x1999);
            *(float *)(((int)stk + 24)) = u19;
            *(float *)(((int)stk + 12)) = ((((struct o4C_float *)(a4))->v));
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 16)) = 0.0f;
            t24 = FUN_0c150160((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), ((((struct o18_float *)0xC0DF468)->v)), ((((struct o14_float *)0xC0DF468)->v)), ((((struct o10_float *)0xC0DF468)->v)), u8);
            t10 = (t10 - 0x1);
            if (t10 == 0) {
                break;
            }
        }
        t25 = t24;
    }
    return t25;
}

int FUN_0c104044(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.100000001f);
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                return 0xB0;
            }
            if (((*(signed char *)0xC541F43) == 0) && (t0 = *(signed char *)0xC541F44, t0 == 0)) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            } else {
                t1 = *(signed char *)((a4 + 0x2));
                t0 = t1;
                if (t1 != (*(int *)0xC472CF8)) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                    (((struct oB0_float *)(a4))->v) = 1.0f;
                    FUN_0c104146((*(int *)0xC472CF8));
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t0 = 0x15;
                }
            }
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.100000001f);
    t0 = 0xB0;
    if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
