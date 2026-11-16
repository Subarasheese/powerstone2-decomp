/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c042fe0(void);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c06593a(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e294c(void);
int FUN_0c1171f0(int);
int FUN_0c150010(int, float, float, float, float);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0df784(int a4, int a5, int a6, int a7);
int FUN_0c14143a(int a4, int a5, int a6, int a7);
int FUN_0c113650(int a4, int a5, int a6, int a7);
int FUN_0c1080d4(int a4, int a5, int a6, int a7);
int FUN_0c13d834(int a4, int a5, int a6, int a7);

int FUN_0c0df784(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;
    register int t15;
    register int t6;
    register int t7;
    register float u8;
    register int t25;
    register int t38;
    register float u41;
    register int t43;
    register int t44;
    register int t49;
    register int t69;
    register int t58;
    register int t53;

    if ((*(signed char *)0xC54223C) != 1) {
        t69 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    } else {
        t3 = *(signed char *)((a4 + 0x14));
        if (t3 != 0) {
            if (t3 != 1) {
                t15 = t3;
                if (t3 != 2) {
                } else {
                    FUN_0c187798(a4, a5, a6);
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 400.0f);
                    t6 = 0xC0DF8BC;
                    t7 = 0xA;
                    u8 = 400.0f;
                    for (;;) {
                        if (t7 == 0) {
                            break;
                        }
                        t6 = 0xC0DF90C;
                        t6 = (FUN_0c150010(((int)stk + 0), 0.899999976f, (*(float *)((t6 + 0x0))), 0.629999995f, 4.0f));
                        t6 = 0x4;
                        u8 = (*(float *)((((int)stk + 0) + t6)));
                        t6 = 0x4;
                        t7 = (t7 - 1);
                        u8 = (u8 + 80.0f);
                        *(float *)((((int)stk + 0) + t6)) = u8;
                    }
                    FUN_0c0e294c();
                    *(unsigned int *)(((0xC540D98 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = 0x0;
                    t15 = (((int (*)(int))(FUN_0c03f346))(a4));
                }
                t58 = t15;
            } else {
                t25 = FUN_0c06593a(a4, (*(int *)0xC540D94));
                t58 = t25;
                if (t25 != 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    t58 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                }
            }
        } else {
            t38 = FUN_0c042fe0();
            if (t38 == 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t53 = 0xA8;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o128_ushort *)(a4))->v) = 0x40;
                u41 = -3600.0f;
                u41 = u41 + 2400.0f * (float)(*(signed char *)((a4 + 0x2)));
                (((struct o28_float *)(a4))->v) = u41;
                FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
                t43 = 0x0;
                t44 = 0x0;
                for (;;) {
                    if ((int)t44 >= (int)((((struct oC0_int *)(a4))->v))) {
                        break;
                    }
                    t43 = t44;
                    t43 = (t43 << 2);
                    t43 = (t43 + (0xC4 + a4));
                    t43 = (*(int *)((t43 + 0x0)));
                    FUN_0c0d04c4((t43 + 0x6), (t43 + 0x78));
                    t44 = (t44 + 0x1);
                }
                t49 = FUN_0c06593a(a4, (*(int *)0xC540D94));
                t53 = t49;
                if (t49 != 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    t53 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                }
            }
            t58 = t53;
        }
        t69 = t58;
    }
    return t69;
}

int FUN_0c14143a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x2));
        u0 = -20.0f;
        u1 = (float)(t0 - 3);
        if ((int)t0 < (int)0x3) {
            u0 = -10.0f;
            u1 = (float)(*(signed char *)((a4 + 0x2)));
        }
        u2 = u0;
        u2 = u2 + 15.0f * u1;
        *(unsigned int *)((a4 + 0x38)) = ((int)((u2 * 65536.0f) / 360.0f) + (*(int *)((a4 + 0x38))));
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 50.0f);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 50.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 50.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c113650(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x8) {
                    FUN_0c058a6e((0xB0 + a4), 0xC291550, 0xC291560, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    t2 = (t1 + 0x1);
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x61F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x6, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x7, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x8, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x9, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0xB, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0xC, 0xC, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x14)))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x18)))))->v) = ((((struct o70_float *)((*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) + (0xC4 + a4)) + 0x4)))))->v));
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2) {
        FUN_0c058a6e((0xB0 + a4), 0xC291560, 0xC291550, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c1080d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                return t1;
            }
            if (t1 == 10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o4_float *)0xC1082A8)->v));
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                *(volatile int *)((a4 + 0x10));
                t3 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
                t3 = (short)(t2 + 0x1);
                if ((int)(short)(t2 + 0x1) >= (int)0x10) {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t3 = 0x14;
                }
                return t3;
            }
            if (t1 == 11) {
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + ((((struct o90_float *)(t2))->v)));
                *(volatile int *)((a4 + 0x10));
                t3 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
                t3 = (short)(t2 + 0x1);
                if ((int)(short)(t2 + 0x1) >= (int)0x10) {
                    (((struct o14_uchar *)(a4))->v) = 0x50;
                    t3 = 0x14;
                }
                return t3;
            }
            if (t1 == 80) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t2 = t1;
            if (t1 == 99) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t2 = 0x14;
            }
            return t2;
        }
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
        *(volatile int *)((a4 + 0x10));
        t2 = ((int (*)(int, int, int))(FUN_0c187798))(t1, a5, a6);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        t2 = (short)(t1 + 0x1);
        if ((int)(short)(t1 + 0x1) >= (int)0x10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t2 = 0x0;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0xD, (*(int *)0xC4B410C));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 200.0f);
    FUN_0c1171f0(a4);
    t1 = FUN_0c03f444(0x8, 0x0, 0x14);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC108028;
        *(volatile int *)((a4 + 0xC4));
        t2 = ((int (*)(int))(FUN_0c187798))(t1);
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((a4 + 0x10)) = t0;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 300.0f);
    (((struct o90_float *)(t0))->v) = ((((struct o0_float *)0xC1082A8)->v));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    *(volatile int *)((a4 + 0x10));
    t1 = ((int (*)(int))(FUN_0c187798))(t0);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c13d834(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t22;
    register int t37;
    register int t38;
    register int t40;
    register int t43;
    register int t48;
    register int t49;
    register int t50;
    register int t68;
    register int t72;
    register int t26;
    register int t2;
    register int t4;
    register int t39;
    register float u42;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t26 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            t3 = 0x0;
            for (;;) {
                if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
                    break;
                }
                t2 = 0xC4;
                t4 = t3;
                t4 = (t4 << 2);
                t2 = (t2 + a4);
                t4 = (t4 + t2);
                t4 = (*(int *)((t4 + 0x0)));
                math_vec3_accumulate((t4 + 0x6C), (0x90 + t4));
                *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(t4))->v));
                t2 = ((((struct oA0_int *)(t4))->v));
                *(float *)(((int)stk + 4)) = (float)t2;
                t2 = ((((struct oA4_int *)(t4))->v));
                *(float *)(((int)stk + 8)) = (float)t2;
                math_vec3_accumulate((0x90 + t4), ((int)stk + 0));
                t2 = ((((struct o7C_int *)(t4))->v));
                t3 = (t3 + 0x1);
                t2 = (t2 + 0x71C);
                (((struct o7C_uint *)(t4))->v) = t2;
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
            }
            t22 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t22 - 1);
            t26 = (short)(t22 - 1);
            if ((int)(short)(t22 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t26 = 0x14;
            }
        }
        t72 = t26;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t37 = 0x0;
        for (;;) {
            t38 = *(int *)((((0xC4 + a4) + t37) + 0x0));
            t37 = (t37 + 0x4);
            (((struct o98_float *)(t38))->v) = 0.0f;
            (((struct o90_float *)(t38))->v) = 0.0f;
            (((struct o94_float *)(t38))->v) = 10.0f;
            (((struct oA0_uint *)(t38))->v) = 0xFFFFFFFF;
            if ((unsigned int)t37 >= (unsigned int)0x8) {
                break;
            }
        }
        t40 = 0x2;
        for (;;) {
            t43 = (((struct oC0_int *)(a4))->v);
            if ((int)t40 >= (int)t43) {
                break;
            }
            t39 = t40;
            t39 = (t39 - 2);
            t50 = t40;
            t50 = (t50 << 2);
            t39 = (t39 * 0x2AAA);
            t50 = (t50 + (0xC4 + a4));
            t50 = (*(int *)((t50 + 0x0)));
            u42 = (math_sin_angle16(t39));
            u42 = (u42 * 5.0f);
            (((struct o90_float *)(t50))->v) = u42;
            u42 = (math_cos_angle16(t39));
            u42 = (u42 * 5.0f);
            t40 = (t40 + 0x1);
            (((struct o98_float *)(t50))->v) = u42;
            (((struct o94_float *)(t50))->v) = 10.0f;
            (((struct oA0_uint *)(t50))->v) = 0xFFFFFFFF;
        }
        t48 = t43;
        t49 = 0x0;
        for (;;) {
            if ((int)t49 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t48 = 0xC4;
            t50 = t49;
            t50 = (t50 << 2);
            t48 = (t48 + a4);
            t50 = (t50 + t48);
            t50 = (*(int *)((t50 + 0x0)));
            math_vec3_accumulate((t50 + 0x6C), (0x90 + t50));
            *(float *)(((int)stk + 0)) = (float)((((struct o9C_int *)(t50))->v));
            t48 = ((((struct oA0_int *)(t50))->v));
            *(float *)(((int)stk + 4)) = (float)t48;
            t48 = ((((struct oA4_int *)(t50))->v));
            *(float *)(((int)stk + 8)) = (float)t48;
            math_vec3_accumulate((0x90 + t50), ((int)stk + 0));
            t48 = ((((struct o7C_int *)(t50))->v));
            t49 = (t49 + 0x1);
            t48 = (t48 + 0x71C);
            (((struct o7C_uint *)(t50))->v) = t48;
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)0xA) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        }
        t68 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t68 - 1);
        t72 = (short)(t68 - 1);
        if ((int)(short)(t68 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t72 = 0x14;
        }
    }
    return t72;
}
