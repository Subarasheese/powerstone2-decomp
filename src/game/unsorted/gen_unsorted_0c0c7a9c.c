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

int FUN_0c0c7d5a(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register float t10;
    register float u12;
    register float u13;
    register float u14;
    register float t16;
    register float u18;
    register float u19;
    register float u20;
    register float u26;
    register float u28;
    register float t30;
    register float u31;
    register float u33;
    register float u34;
    register float t47;
    register float u49;
    register float u50;
    register float u51;
    register float t53;
    register float u55;
    register float u56;
    register float u57;
    register float u62;
    register float u64;
    register float t66;
    register float u67;
    register float u69;
    register float u70;
    register int t83;
    register int t8;
    register float u21;
    register float u22;
    register int t45;
    register float u58;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        t83 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
    } else {
        t5 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t5 != 41) {
            if ((unsigned char)t5 != 42) {
            } else {
                FUN_0c187798(0x31C);
                if ((unsigned short)((((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == t8) {
                    t10 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u12 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u13 = (t10 * u12);
                    u14 = (*(float *)(((int)stk + 0)));
                    u14 = u14 + 155.0f * u13;
                    *(float *)(((int)stk + 0)) = u14;
                    u21 = 122.0f;
                    u22 = 155.0f;
                } else {
                    t16 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u18 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u19 = (t16 * u18);
                    u20 = (*(float *)(((int)stk + 0)));
                    u20 = u20 + 159.0f * u19;
                    *(float *)(((int)stk + 0)) = u20;
                    u21 = 129.0f;
                    u22 = 159.0f;
                }
                u26 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u28 = (*(float *)(((int)stk + 4)));
                u28 = u28 + u21 * u26;
                *(float *)(((int)stk + 4)) = u28;
                t30 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u31 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u33 = (t30 * u31);
                u34 = (*(float *)(((int)stk + 8)));
                u34 = u34 + u22 * u33;
                *(float *)(((int)stk + 8)) = u34;
                FUN_0c167e80((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34));
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x69);
            }
        } else {
            FUN_0c187798(0x31C);
            if ((unsigned short)((((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == t45) {
                t47 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u49 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u50 = (t47 * u49);
                u51 = (*(float *)(((int)stk + 0)));
                u51 = u51 + 119.0f * u50;
                *(float *)(((int)stk + 0)) = u51;
                u58 = 122.0f;
            } else {
                t53 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u55 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u56 = (t53 * u55);
                u57 = (*(float *)(((int)stk + 0)));
                u57 = u57 + 119.0f * u56;
                *(float *)(((int)stk + 0)) = u57;
                u58 = 129.0f;
            }
            u62 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
            u64 = (*(float *)(((int)stk + 4)));
            u64 = u64 + u58 * u62;
            *(float *)(((int)stk + 4)) = u64;
            t66 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
            u67 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
            u69 = (t66 * u67);
            u70 = (*(float *)(((int)stk + 8)));
            u70 = u70 + 119.0f * u69;
            *(float *)(((int)stk + 8)) = u70;
            FUN_0c166fac((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), (*(signed char *)((a4 + 0x41F))));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x63);
        }
        FUN_0c0c213c(a4);
        FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t83 = 0x376C;
    }
    return t83;
}
