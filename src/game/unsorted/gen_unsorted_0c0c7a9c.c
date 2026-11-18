/* game/unsorted: functions 0C0C7A9C-0C0C7F20, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c166fac(int, int, int, int);
int FUN_0c167e80(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c0c7a9c(int a4);
int FUN_0c0c7d5a(int a4);

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

