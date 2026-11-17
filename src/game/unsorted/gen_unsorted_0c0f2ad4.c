/* game/unsorted: functions 0C0F2AD4-0C0F2EAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03f346(int);
int FUN_0c0582de(int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c0f4b68(int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c0f2ad4(int a4, int a5);
int FUN_0c0f2ae0(int a4);
int FUN_0c0f2b6a(int a4);
int FUN_0c0f2bac(int a4);

int FUN_0c0f2ad4(int a4, int a5)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c0f2ae0(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            t1 = FUN_0c0f2b6a((((short)t0 * (short)0x3938) + 0xC532498));
            if (t1 != 0) {
                (((struct o160_float *)(a4))->v) = 1.0f;
                (((struct o130_uchar *)(a4))->v) = 0xA;
                if ((*(signed char *)((a4 + 0x130))) != 0) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    u0 = *(float *)0xC0F2BA4;
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
                    t0 = 0x130;
                } else {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
                    t0 = 0xAC;
                }
                return t0;
            }
            return FUN_0c0f2ad4(a4, 0x3);
        }
        (((struct o130_uchar *)(a4))->v) = 0xA;
    }
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        u0 = *(float *)0xC0F2BA4;
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        t0 = 0x130;
    } else {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
        t0 = 0xAC;
    }
    return t0;
}

int FUN_0c0f2b6a(int a4)
{
    register int t1;
    int t2;

    if (((*(signed char *)((a4 + 0x14))) == 0) && ((t1 = *(signed char *)((a4 + 0x3715)), t1 == 7) && (t2 = *(signed char *)((a4 + 0x3732)), t2 == 4))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0f2bac(int a4)
{
    int stk[4];
    register int t0;
    register int t10;
    register int t14;
    register int t21;
    register float u39;
    register float u40;
    register float u41;
    register float t42;
    register float t47;
    register int t62;
    register int t93;
    register int t94;
    register int t100;
    register int t138;
    register int t144;
    register int t186;
    register int t187;
    register int t193;
    register int t227;
    register int t233;
    register int t263;
    register int t136;
    register int t225;

    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 0)) = (0x38F8 + (((short)t0 * (short)0x3938) + 0xC532498));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0f2ad4(a4, 0x0);
    }
    FUN_0c0f2ae0(a4);
    t10 = *(signed char *)((a4 + 0x15));
    if (t10 != 0) {
        if (t10 != 1) {
            if (t10 == 2) {
                t14 = *(signed char *)((a4 + 0x16));
                if (t14 != 0) {
                    t263 = t14;
                    if (t14 == 1) {
                        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 1.5f);
                        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((((struct o20_short *)(a4))->v)));
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((struct o22_short *)(a4))->v)));
                        t21 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t21 - 1);
                        t263 = (short)(t21 - 1);
                        if ((int)(short)(t21 - 1) <= 0) {
                            t263 = (FUN_0c0f2ad4(a4, 0x0));
                        }
                    }
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct oA4_uint *)(a4))->v) = 0x0;
                    math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
                    *(float *)(((int)stk + 8)) = 0.0f;
                    *(float *)(((int)stk + 4)) = 0.0f;
                    *(float *)(((int)stk + 12)) = 1.0f;
                    FUN_0c0582de((((int)stk + 0) + 0x4), (a4 + 0x64));
                    *(unsigned int *)((a4 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 12)))));
                    u39 = *(float *)(((int)stk + 4));
                    u40 = *(float *)(((int)stk + 12));
                    u41 = (u40 * u40);
                    u41 = u41 + u39 * u39;
                    t42 = math_signed_sqrt(u41);
                    *(unsigned int *)((a4 + 0x34)) = (math_atan2_angle16((-(*(float *)(((int)stk + 8)))), t42));
                    t47 = math_signed_sqrt(((((((((struct o2C_float *)(a4))->v)) - ((((struct o4_float *)0xC1CE240)->v))) + 675.0f) * (1.0f + 1.0f)) / 1.5f));
                    *(unsigned short *)((a4 + 0x1C)) = (int)(30.0f + t47);
                    (((struct o20_ushort *)(a4))->v) = (int)((float)(((((struct o10_int *)0xC1CE240)->v)) - (*(int *)((a4 + 0x38)))) / (30.0f + t47));
                    (((struct o22_ushort *)(a4))->v) = (int)((float)(((((struct oC_int *)0xC1CE240)->v)) - (*(int *)((a4 + 0x34)))) / (30.0f + t47));
                    (((struct o4C_float *)(a4))->v) = ((((((struct o0_float *)0xC1CE240)->v)) - ((((struct o28_float *)(a4))->v))) / (30.0f + t47));
                    (((struct o54_float *)(a4))->v) = ((((((struct o8_float *)0xC1CE240)->v)) - ((((struct o30_float *)(a4))->v))) / (30.0f + t47));
                    (((struct o50_float *)(a4))->v) = 45.0f;
                    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 1.5f);
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((((struct o20_short *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + ((((struct o22_short *)(a4))->v)));
                    t62 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t62 - 1);
                    t263 = (short)(t62 - 1);
                    if ((int)(short)(t62 - 1) <= 0) {
                        t263 = (FUN_0c0f2ad4(a4, 0x0));
                    }
                }
            } else {
                t263 = t10;
                if (t10 == 3) {
                    thunk_FUN_0c05abb2(0x34, (a4 + 0x28));
                    FUN_0c0f4b68((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x2C)) = 0x0;
                    t263 = (FUN_0c03f346(a4));
                }
            }
        } else {
            t93 = *(signed char *)((a4 + 0x16));
            if (t93 != 0) {
                t263 = t93;
                if (t93 != 1) {
                } else {
                    t94 = FUN_0c0f2b6a((((short)t0 * (short)0x3938) + 0xC532498));
                    if (t94 != 0) {
                        t100 = *(signed char *)((0x82 + ((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))));
                        t263 = (unsigned char)t100;
                        if ((unsigned char)t100 != 7) {
                        } else {
                            t263 = 0x8C;
                            if (11.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
                            } else {
                                t263 = (FUN_0c0f2ad4(a4, 0x2));
                            }
                        }
                    } else {
                        t263 = (FUN_0c0f2ad4(a4, 0x2));
                    }
                }
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x1D, (a4 + 0x28));
                (((struct oA4_uint *)(a4))->v) = (((((struct oF4_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) + 0x28);
                FUN_0c187798(0xC1CE258);
                FUN_0c187798(t136);
                t138 = FUN_0c0f2b6a((((short)t0 * (short)0x3938) + 0xC532498));
                if (t138 != 0) {
                    t144 = *(signed char *)((0x82 + ((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))));
                    t263 = (unsigned char)t144;
                    if ((unsigned char)t144 != 7) {
                    } else {
                        t263 = 0x8C;
                        if (11.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
                        } else {
                            t263 = (FUN_0c0f2ad4(a4, 0x2));
                        }
                    }
                } else {
                    t263 = (FUN_0c0f2ad4(a4, 0x2));
                }
            }
        }
    } else {
        t186 = *(signed char *)((a4 + 0x16));
        if (t186 != 0) {
            t263 = t186;
            if (t186 != 1) {
            } else {
                t187 = FUN_0c0f2b6a((((short)t0 * (short)0x3938) + 0xC532498));
                t263 = t187;
                if (t187 == 0) {
                } else {
                    t193 = *(signed char *)((0x82 + ((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))));
                    t263 = (unsigned char)t193;
                    if ((unsigned char)t193 != 6) {
                    } else {
                        t263 = 0x8C;
                        if (41.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
                        } else {
                            t263 = (FUN_0c0f2ad4(a4, 0x1));
                        }
                    }
                }
            }
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct oA4_uint *)(a4))->v) = 0x0;
            FUN_0c187798(0xC1CE240);
            FUN_0c187798(t225);
            t227 = FUN_0c0f2b6a((((short)t0 * (short)0x3938) + 0xC532498));
            t263 = t227;
            if (t227 == 0) {
            } else {
                t233 = *(signed char *)((0x82 + ((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))));
                t263 = (unsigned char)t233;
                if ((unsigned char)t233 != 6) {
                } else {
                    t263 = 0x8C;
                    if (41.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
                    } else {
                        t263 = (FUN_0c0f2ad4(a4, 0x1));
                    }
                }
            }
        }
    }
    return t263;
}
