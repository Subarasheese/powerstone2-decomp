/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e4dac(int a4, int a5);
int FUN_0c11c31c(int a4);
int FUN_0c0c7a9c(int a4);


int FUN_0c11c31c(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    register int t12;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t12 = *(signed char *)((a4 + 0x14));
    switch (t12) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x16, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        FUN_0c05a080(0xA, 0x0);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o0_int *)0xC29228C)->v))) && (t8 = (((struct o4_int *)0xC29228C)->v), (int)t0 <= (int)t8)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292280, 0xC292274, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC29228C)->v))), (((((struct o0_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o10_int *)0xC29228C)->v))) && (t9 = (((struct o14_int *)0xC29228C)->v), (int)t0 <= (int)t9)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292274, 0xC292280, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC29228C)->v))), (((((struct o10_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o8_int *)0xC29228C)->v))) && (t10 = (((struct oC_int *)0xC29228C)->v), (int)t0 <= (int)t10)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC29228C)->v))), (((((struct o8_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o18_int *)0xC29228C)->v))) && (t11 = (((struct o1C_int *)0xC29228C)->v), (int)t0 <= (int)t11)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC29228C)->v))), (((((struct o18_int *)0xC29228C)->v))));
        }
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o0_int *)0xC29228C)->v))) && (t4 = (((struct o4_int *)0xC29228C)->v), (int)t0 <= (int)t4)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292280, 0xC292274, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC29228C)->v))), (((((struct o0_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o10_int *)0xC29228C)->v))) && (t5 = (((struct o14_int *)0xC29228C)->v), (int)t0 <= (int)t5)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292274, 0xC292280, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC29228C)->v))), (((((struct o10_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o8_int *)0xC29228C)->v))) && (t6 = (((struct oC_int *)0xC29228C)->v), (int)t0 <= (int)t6)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC29228C)->v))), (((((struct o8_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o18_int *)0xC29228C)->v))) && (t7 = (((struct o1C_int *)0xC29228C)->v), (int)t0 <= (int)t7)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC29228C)->v))), (((((struct o18_int *)0xC29228C)->v))));
        }
        break;
    case 2:
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t12 = *(short *)((a4 + 0x1C));
        if (((int)t12 >= (int)((((struct o0_int *)0xC29228C)->v))) && (t0 = (((struct o4_int *)0xC29228C)->v), (int)t12 <= (int)t0)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292280, 0xC292274, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC29228C)->v))), (((((struct o0_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o10_int *)0xC29228C)->v))) && (t1 = (((struct o14_int *)0xC29228C)->v), (int)t0 <= (int)t1)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292274, 0xC292280, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC29228C)->v))), (((((struct o10_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o8_int *)0xC29228C)->v))) && (t2 = (((struct oC_int *)0xC29228C)->v), (int)t0 <= (int)t2)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC29228C)->v))), (((((struct o8_int *)0xC29228C)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o18_int *)0xC29228C)->v))) && (t3 = (((struct o1C_int *)0xC29228C)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC29228C)->v))), (((((struct o18_int *)0xC29228C)->v))));
        }
        break;
    default:
        if (t12 == 99) {
            FUN_0c05a080(0xB, 0x0);
            return FUN_0c03f346(a4);
        }
        return t12;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 < (int)((((struct o1C_int *)0xC29228C)->v))) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}

int FUN_0c0c7a9c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            if (!(t1 != 2)) {
                t1 = *(signed char *)((a4 + 0x16));
                switch (t1) {
                case 0:
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0599999987f);
                    u0 = (((struct o0_float *)0xC0C7C9C)->v);
                    if (((((struct o44_float *)(a4))->v)) > u0) {
                        (((struct o44_float *)(a4))->v) = u0;
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                    if ((int)(short)(t1 + 0x1) >= (int)0xF) {
                        if ((*(signed char *)((a4 + 0x131))) != 0) {
                            t1 = 0x1E;
                            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                                t1 = 0x16;
                            }
                            *(unsigned short *)((a4 + 0x1C)) = t1;
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        }
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                    break;
                case 1:
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    if ((int)(short)(t1 - 1) > 0) {
                        if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x17))) >= (int)0x2) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                    } else {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                    break;
                case 2:
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.180000007f);
                    u0 = (((struct o8_float *)0xC0C7C9C)->v);
                    if (u0 > ((((struct o44_float *)(a4))->v))) {
                        (((struct o44_float *)(a4))->v) = u0;
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                    break;
                default:
                    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
                        return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                    }
                    break;
                }
            }
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            FUN_0c07e328(a4, t1);
            FUN_0c0c213c(a4);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x16));
            switch (t1) {
            case 0:
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0599999987f);
                u0 = (((struct o0_float *)0xC0C7C9C)->v);
                if (((((struct o44_float *)(a4))->v)) > u0) {
                    (((struct o44_float *)(a4))->v) = u0;
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xF) {
                    if ((*(signed char *)((a4 + 0x131))) != 0) {
                        t1 = 0x1E;
                        if ((*(signed char *)((a4 + 0x41F))) == 0) {
                            t1 = 0x16;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = t1;
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    }
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                break;
            case 1:
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                    if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x17))) >= (int)0x2) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                break;
            case 2:
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.180000007f);
                u0 = (((struct o8_float *)0xC0C7C9C)->v);
                if (u0 > ((((struct o44_float *)(a4))->v))) {
                    (((struct o44_float *)(a4))->v) = u0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                break;
            default:
                if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
                    return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                }
                break;
            }
        }
    } else {
        if (!(((((struct o22_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == 0)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))));
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            FUN_0c07e328(a4, t1);
            FUN_0c0c213c(a4);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t1 = *(signed char *)((a4 + 0x16));
            switch (t1) {
            case 0:
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0599999987f);
                u0 = (((struct o0_float *)0xC0C7C9C)->v);
                if (((((struct o44_float *)(a4))->v)) > u0) {
                    (((struct o44_float *)(a4))->v) = u0;
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xF) {
                    if ((*(signed char *)((a4 + 0x131))) != 0) {
                        t1 = 0x1E;
                        if ((*(signed char *)((a4 + 0x41F))) == 0) {
                            t1 = 0x16;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = t1;
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    }
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                break;
            case 1:
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) > 0) {
                    if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x17))) >= (int)0x2) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                break;
            case 2:
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.180000007f);
                u0 = (((struct o8_float *)0xC0C7C9C)->v);
                if (u0 > ((((struct o44_float *)(a4))->v))) {
                    (((struct o44_float *)(a4))->v) = u0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                break;
            default:
                if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
                    return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
                }
                break;
            }
        }
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
