/* Straight-line functions with calls and guards (batch gen_kk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c13beec(int, int, int, int);
int FUN_0c13c3c0(int, int, int);
int FUN_0c13c634(int);
int FUN_0c13e90c(int, int);
float math_sin_angle16(int);
int FUN_0c13b906(int a4, int a5, int a6, int a7);

int FUN_0c13b906(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x5A;
        *(unsigned short *)((a4 + 0x1C)) = 0x5A;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    }
    if ((t1 == 0) || (t1 == 1)) {
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) - ((((struct o50_float *)(a4))->v)));
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 == 1) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
                if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
                    (((struct o15_uchar *)(a4))->v) = 0x2;
                    t1 = 0x5A;
                    t2 = (((short)t0 * (short)0x3938) + 0xC532498);
                } else {
                    if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x15))) > (int)0x2) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x5A;
                        t4 = (((short)t0 * (short)0x3938) + 0xC532498);
                    } else {
                        t5 = 0x5A;
                        t6 = (((short)t0 * (short)0x3938) + 0xC532498);
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)0x3) {
                            t7 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                            if ((int)(short)(t7 - 1) <= 0) {
                                t7 = 0x0;
                                for (;;) {
                                    FUN_0c13e90c(a4, t7);
                                    t7 = (t7 + 0x1);
                                    if ((int)t7 >= (int)0x3) {
                                        break;
                                    }
                                }
                                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                                *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC2020DC + (((((struct o20_short *)(a4))->v)) << 2))));
                            } else {
                                t7 = 0x5A;
                                t6 = (((short)t0 * (short)0x3938) + 0xC532498);
                            }
                            t5 = t7;
                        }
                        t3 = t5;
                        t4 = t6;
                    }
                    t1 = t3;
                    t2 = t4;
                }
                if (150.0f > ((((struct o50_float *)(a4))->v))) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 5.0f);
                }
                if (((int)((int)((((struct o22_short *)(a4))->v)) % (int)0x28)) == 0) {
                    FUN_0c13c3c0(a4, t1, t2);
                }
                if (((int)((int)((((struct o22_short *)(a4))->v)) % (int)0x1E)) == 0) {
                    FUN_0c13c634(a4);
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                t1 = 0x22;
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x5A) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
                }
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
                if (((((struct o48_float *)(a4))->v)) > 0.0f) {
                    u1 = (((struct o48_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = (u1 - 0.100000001f);
                    (((struct o44_float *)(a4))->v) = (u1 - 0.100000001f);
                    (((struct o40_float *)(a4))->v) = (u1 - 0.100000001f);
                    t2 = 0x40;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                    t2 = 0xA8;
                }
                t1 = t2;
            }
            t2 = t1;
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x1) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
            t1 = *(signed char *)((a4 + 0x16));
            if (t1 != 0) {
                if (t1 != 1) {
                } else {
                    if (((int)(*(short *)((a4 + 0x1C))) <= (int)0x5) && (u0 = (((struct o50_float *)(a4))->v), 150.0f > u0)) {
                        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 5.0f);
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1E)) = 0x1;
                        (((struct o20_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC2020DC + (((((struct o20_short *)(a4))->v)) << 2))));
                    } else {
                        u0 = 1.5f;
                        u0 = u0 + 0.100000001f * (math_sin_angle16(((((struct o41C_int *)(a4))->v))));
                        (((struct o48_float *)(a4))->v) = u0;
                        (((struct o44_float *)(a4))->v) = u0;
                        (((struct o40_float *)(a4))->v) = u0;
                        (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) + 0x2000);
                        (((struct o41C_uint *)(a4))->v) = (((((struct o41C_int *)(a4))->v)) & 0xFFFF);
                    }
                }
            } else {
                if (0.5f > ((((struct o48_float *)(a4))->v))) {
                    u0 = (((struct o48_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = (u0 + 0.0250000004f);
                    (((struct o44_float *)(a4))->v) = (u0 + 0.0250000004f);
                    (((struct o40_float *)(a4))->v) = (u0 + 0.0250000004f);
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o48_float *)(a4))->v) = 1.5f;
                    (((struct o44_float *)(a4))->v) = 1.5f;
                    (((struct o40_float *)(a4))->v) = 1.5f;
                    t1 = 0x6;
                    for (;;) {
                        FUN_0c13beec(a4, 0x1, (((short)t0 * (short)0x3938) + 0xC532498), a7);
                        t1 = (t1 - 0x1);
                        if (t1 == 0) {
                            break;
                        }
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                }
            }
            t1 = *(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))));
            t3 = t1;
            if (t1 == 26) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t3 = 0x15;
            }
            t2 = t3;
        }
        return t2;
    } else {
        return FUN_0c03f346(a4, 0x5A, (((short)t0 * (short)0x3938) + 0xC532498), a7);
    }
}
