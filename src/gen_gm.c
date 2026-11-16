/* Straight-line functions with calls and guards (batch gen_gm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int);
int FUN_0c064f80(int);
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0d5838(int);
int FUN_0c0e2700(int, int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int math_mat_get_translate(int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c5494(int a4, int a5, int a6, int a7);
int FUN_0c0d59a8(int a4, int a5, int a6);

int FUN_0c0c5494(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = *(signed char *)((a4 + 0x41C));
    if ((((unsigned char)t2 != 43) && ((unsigned char)t2 != 44)) || (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x16)), t0 == 0)) {
        t0 = *(signed char *)((a4 + 0x15));
        switch (t0) {
        case 0:
            t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x134));
            if ((t0 != 0) && ((signed char)t0 != 1)) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                if ((*(signed char *)((a4 + 0x41F))) == 0) {
                    t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
                } else {
                    t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
                }
                FUN_0c07e328(a4, t0);
                FUN_0c0c213c(a4);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 1:
            if ((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x134))) != 2) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 2:
            if ((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x134))) == 2) {
                FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                if ((*(signed char *)((a4 + 0x41F))) == 0) {
                    t0 = *(signed char *)((a4 + 0x41C));
                    if ((unsigned char)t0 != 22) {
                        if ((unsigned char)t0 != 43) {
                            if ((unsigned char)t0 != 44) {
                            } else {
                                FUN_0c07e328(a4, 0x2F);
                            }
                        } else {
                            FUN_0c07e328(a4, 0x2E);
                        }
                    } else {
                        FUN_0c07e328(a4, 0x2C);
                    }
                } else {
                    FUN_0c07e328(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF))));
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        case 3:
            if ((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
            }
            break;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                if ((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
                    (((struct o125_uchar *)(a4))->v) = 0x0;
                }
            }
        } else {
            t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x134));
            if (t0 == 0) {
            } else {
                if ((signed char)t0 == 1) {
                } else {
                    FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))), a6, a7);
                    if ((*(signed char *)((a4 + 0x41F))) == 0) {
                        t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
                    } else {
                        t0 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
                    }
                    FUN_0c07e328(a4, t0);
                    FUN_0c0c213c(a4);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
        }
    }
    if ((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
    }
    t0 = FUN_0c0c283a(a4);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}

int FUN_0c0d59a8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, a5, a6);
        (((struct oAA_uchar *)(a4))->v) = 0x0;
        (((struct oAB_uchar *)(a4))->v) = 0x0;
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
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    t1 = FUN_0c064f80(a4);
                    if (t1 != 0) {
                        FUN_0c0e2700((a4 + 0x28), 0x6, 0xFFFFFFFF, 0x1);
                        thunk_FUN_0c05abb2(0x4F, (a4 + 0x28));
                        FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
                        return FUN_0c03f346(a4);
                    }
                    if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
                        return FUN_0c03f346(a4);
                    }
                    return 0x2C;
                }
                return t0;
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            u0 = (((struct o5C_float *)(a4))->v);
            u1 = (((struct o50_float *)(a4))->v);
            (((struct o50_float *)(a4))->v) = (u1 + u0);
            if (0.0f > (u1 + u0)) {
                t0 = *(signed char *)((a4 + 0x2));
                FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (0xC1C81BC + (((t0 << 1) + t0) << 2)));
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            if ((*(short *)((a4 + 0x1E))) != 0) {
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o12A_ushort *)(a4))->v) = 0xF;
                    (((struct o12E_ushort *)(a4))->v) = 0xF0;
                }
            }
            t0 = FUN_0c064f80(a4);
            if (t0 == 0) {
                return t0;
            }
            FUN_0c0e2700((a4 + 0x28), 0x6, 0xFFFFFFFF, 0x1);
            thunk_FUN_0c05abb2(0x4F, (a4 + 0x28));
            FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
            return FUN_0c03f346(a4);
        }
        t0 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
        t1 = t0;
        if (t0 != 2) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
            (((struct oA4_uint *)(a4))->v) = 0x0;
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x1;
            FUN_0c0d5838(a4);
            (((struct o5C_float *)(a4))->v) = -1.0f;
            *(unsigned short *)((a4 + 0x1E)) = 0xA;
            t1 = 0xA;
        }
        return t1;
    }
    if (((*(short *)((a4 + 0x1C))) & 4) != 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = 0xA8;
    }
    return t1;
}
