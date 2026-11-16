/* Straight-line functions with calls and guards (batch gen_ev): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0bbf58(int);
int FUN_0c0eb08c(int, int);
int FUN_0c13beec(int);
int FUN_0c13c3c0(int);
int FUN_0c13c634(int);
int FUN_0c13e90c(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c11a518(int a4, int a5, int a6, int a7);
int FUN_0c13b906(int a4, int a5, int a6, int a7);
int FUN_0c0ea80c(int a4, int a5, int a6, int a7);

int FUN_0c11a518(int a4, int a5, int a6, int a7)
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
    register int t13;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t12 = *(signed char *)((a4 + 0x14));
    if (t12 != 0) {
        if (t12 == 1) {
            t13 = *(short *)((a4 + 0x1C));
            if (((int)t13 >= (int)((((struct o0_int *)0xC291EA0)->v))) && (t0 = (((struct o4_int *)0xC291EA0)->v), (int)t13 <= (int)t0)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC291EA0)->v))), (((((struct o0_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o8_int *)0xC291EA0)->v))) && (t1 = (((struct oC_int *)0xC291EA0)->v), (int)t0 <= (int)t1)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC291EA0)->v))), (((((struct o8_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o10_int *)0xC291EA0)->v))) && (t2 = (((struct o14_int *)0xC291EA0)->v), (int)t0 <= (int)t2)) {
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC291EA0)->v))), (((((struct o10_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o18_int *)0xC291EA0)->v))) && (t3 = (((struct o1C_int *)0xC291EA0)->v), (int)t0 <= (int)t3)) {
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC291EA0)->v))), (((((struct o18_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o20_int *)0xC291EA0)->v))) && (t4 = (((struct o24_int *)0xC291EA0)->v), (int)t0 <= (int)t4)) {
                FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o24_int *)0xC291EA0)->v))), (((((struct o20_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o28_int *)0xC291EA0)->v))) && (t5 = (((struct o2C_int *)0xC291EA0)->v), (int)t0 <= (int)t5)) {
                FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o2C_int *)0xC291EA0)->v))), (((((struct o28_int *)0xC291EA0)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o30_int *)0xC291EA0)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
        if (t12 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t12;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x24, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x24, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x2, 0x24, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    t0 = (((struct oC8_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    t0 = (((struct oCC_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
    u0 = (((struct o3C_float *)0xC291EA0)->v);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)((((struct o34_int *)0xC291EA0)->v)));
    t1 = (((struct o34_int *)0xC291EA0)->v);
    u1 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o34_int *)0xC291EA0)->v)))) * 360.0f) / (float)((((struct o34_int *)0xC291EA0)->v)));
    u2 = ((u1 * 65536.0f) / 360.0f);
    u1 = ((u0 * (float)t0) / (float)t1);
    u3 = ((((struct o28_float *)(a4))->v));
    u3 = u3 + u1 * (math_cos_angle16(((int)(u2 + 0.5f) & 0xFFFF)));
    (((struct o28_float *)(a4))->v) = u3;
    u1 = ((u0 * (float)t0) / (float)t1);
    u0 = ((((struct o2C_float *)(a4))->v));
    u0 = u0 + u1 * (math_sin_angle16(((int)(u2 + 0.5f) & 0xFFFF)));
    (((struct o2C_float *)(a4))->v) = u0;
    u0 = (((float)((int)((int)(FUN_0c179ac0()) % (int)((((struct o34_int *)0xC291EA0)->v)))) * 360.0f) / (float)((((struct o34_int *)0xC291EA0)->v)));
    u1 = math_sin_angle16((0xFFFF & (int)((((u0 * 65536.0f) / 360.0f)) + 0.5f)));
    u0 = 100.0f;
    u0 = u0 + 20.0f * u1;
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u0);
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), 0xC291EE0);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o0_int *)0xC291EA0)->v))) && (t6 = (((struct o4_int *)0xC291EA0)->v), (int)t0 <= (int)t6)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o4_int *)0xC291EA0)->v))), (((((struct o0_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o8_int *)0xC291EA0)->v))) && (t7 = (((struct oC_int *)0xC291EA0)->v), (int)t0 <= (int)t7)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC291EA0)->v))), (((((struct o8_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o10_int *)0xC291EA0)->v))) && (t8 = (((struct o14_int *)0xC291EA0)->v), (int)t0 <= (int)t8)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC291EA0)->v))), (((((struct o10_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o18_int *)0xC291EA0)->v))) && (t9 = (((struct o1C_int *)0xC291EA0)->v), (int)t0 <= (int)t9)) {
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o1C_int *)0xC291EA0)->v))), (((((struct o18_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o20_int *)0xC291EA0)->v))) && (t10 = (((struct o24_int *)0xC291EA0)->v), (int)t0 <= (int)t10)) {
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o24_int *)0xC291EA0)->v))), (((((struct o20_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o28_int *)0xC291EA0)->v))) && (t11 = (((struct o2C_int *)0xC291EA0)->v), (int)t0 <= (int)t11)) {
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o2C_int *)0xC291EA0)->v))), (((((struct o28_int *)0xC291EA0)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o30_int *)0xC291EA0)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c13b906(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    float u0;
    float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, 0x5A, (((short)t0 * (short)0x3938) + 0xC532498), a7);
        }
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) - ((((struct o50_float *)(a4))->v)));
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 == 1) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
                if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
                    (((struct o15_uchar *)(a4))->v) = 0x2;
                } else {
                    if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x15))) > (int)0x2) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    } else {
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)0x3) {
                            t1 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                            if ((int)(short)(t1 - 1) <= 0) {
                                t1 = 0x0;
                                for (;;) {
                                    FUN_0c13e90c(a4, t1, (((short)t0 * (short)0x3938) + 0xC532498));
                                    t1 = (t1 + 0x1);
                                    if ((int)t1 >= (int)0x3) {
                                        break;
                                    }
                                }
                                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                                *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC2020DC + (((((struct o20_short *)(a4))->v)) << 2))));
                            }
                        }
                    }
                }
                if (150.0f > ((((struct o50_float *)(a4))->v))) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 5.0f);
                }
                if (((int)((int)((((struct o22_short *)(a4))->v)) % (int)0x28)) == 0) {
                    FUN_0c13c3c0(a4);
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
                    u2 = (((struct o48_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = (u2 - 0.100000001f);
                    (((struct o44_float *)(a4))->v) = (u2 - 0.100000001f);
                    (((struct o40_float *)(a4))->v) = (u2 - 0.100000001f);
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
                        FUN_0c13beec(a4);
                        t1 = (t1 - 0x1);
                        if (t1 == 0) {
                            break;
                        }
                    }
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                }
            }
            t1 = *(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))));
            t2 = t1;
            if (t1 == 26) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                t2 = 0x15;
            }
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x5A;
    *(unsigned short *)((a4 + 0x1C)) = 0x5A;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((*(int *)((a4 + 0x10)))))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) - ((((struct o50_float *)(a4))->v)));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 == 1) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
            if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
                (((struct o15_uchar *)(a4))->v) = 0x2;
            } else {
                if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x15))) > (int)0x2) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                } else {
                    if ((int)((((struct o20_short *)(a4))->v)) < (int)0x3) {
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        if ((int)(short)(t1 - 1) <= 0) {
                            t1 = 0x0;
                            for (;;) {
                                FUN_0c13e90c(a4, t1, (((short)t0 * (short)0x3938) + 0xC532498));
                                t1 = (t1 + 0x1);
                                if ((int)t1 >= (int)0x3) {
                                    break;
                                }
                            }
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC2020DC + (((((struct o20_short *)(a4))->v)) << 2))));
                        }
                    }
                }
            }
            if (150.0f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 5.0f);
            }
            if (((int)((int)((((struct o22_short *)(a4))->v)) % (int)0x28)) == 0) {
                FUN_0c13c3c0(a4);
            }
            if (((int)((int)((((struct o22_short *)(a4))->v)) % (int)0x1E)) == 0) {
                FUN_0c13c634(a4);
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            t0 = 0x22;
        } else {
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x5A) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x4);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
            if (((((struct o48_float *)(a4))->v)) > 0.0f) {
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 - 0.100000001f);
                t1 = 0x40;
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t1 = 0xA8;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        if ((int)(*(short *)((a4 + 0x1E))) > (int)0x1) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                if (((int)(*(short *)((a4 + 0x1C))) <= (int)0x5) && (u1 = (((struct o50_float *)(a4))->v), 150.0f > u1)) {
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 5.0f);
                }
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
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
                t0 = 0x6;
                for (;;) {
                    FUN_0c13beec(a4);
                    t0 = (t0 - 0x1);
                    if (t0 == 0) {
                        break;
                    }
                }
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
            }
        }
        t0 = *(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))));
        t2 = t0;
        if (t0 == 26) {
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ea80c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t3;
    register int t23;
    register int t86;
    register int t145;
    register int t188;
    register int t189;
    register int t203;
    register int t223;
    register int t286;
    register int t345;
    register int t388;
    register int t389;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            *(unsigned int *)0xC540DA4 = 0x0;
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        FUN_0c187798(a4, a5, a6);
        FUN_0c0bbf58(a4);
        t3 = *(signed char *)((a4 + 0x15));
        switch (t3) {
        case 0:
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                (((struct o132_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1E;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
            }
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (1.0f + 1.0f));
                } else {
                    if (((((struct o22_short *)(a4))->v)) == 2) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (1.0f + 1.0f));
                    } else {
                        t145 = (((struct o22_short *)(a4))->v);
                        if (t145 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
                        } else {
                            if (t145 == 6) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
                            }
                        }
                    }
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
            }
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
            }
            break;
        case 1:
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                (((struct o132_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1E;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
            }
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 4.0f);
                } else {
                    if (((((struct o22_short *)(a4))->v)) == 2) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 4.0f);
                    } else {
                        t86 = (((struct o22_short *)(a4))->v);
                        if (t86 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
                        } else {
                            if (t86 == 6) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 4.0f);
                            }
                        }
                    }
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
            }
            if ((int)(*(short *)((a4 + 0x1E))) < (int)0x6) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                FUN_0c03733c(a4, 0x36, (*(int *)0xC4B410C));
            }
            break;
        case 2:
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                (((struct o132_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1E;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
            }
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                if (((((struct o22_short *)(a4))->v)) == 0) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 8.0f);
                } else {
                    if (((((struct o22_short *)(a4))->v)) == 2) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 8.0f);
                    } else {
                        t23 = (((struct o22_short *)(a4))->v);
                        if (t23 == 4) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                        } else {
                            if (t23 == 6) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                            }
                        }
                    }
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
            }
            if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x9) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            break;
        default:
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            FUN_0c0eb08c((a4 + 0x28), 0x0);
            FUN_0c0eb08c((a4 + 0x28), 0x1);
            FUN_0c0eb08c((a4 + 0x28), 0x2);
            FUN_0c0eb08c((a4 + 0x28), 0x3);
            FUN_0c0eb08c((a4 + 0x28), 0x4);
            FUN_0c0eb08c((a4 + 0x28), 0x5);
            FUN_0c0eb08c((a4 + 0x28), 0x6);
            FUN_0c0eb08c((a4 + 0x28), 0x7);
            thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
            break;
        }
        t188 = *(signed char *)0xC54098D;
        t189 = 0x15;
        if (((int)t188 >= (int)0x8) && ((int)t188 <= (int)0xE)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t189 = 0x14;
        }
        return t189;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
    }
    (((struct o160_float *)(a4))->v) = 400.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
    FUN_0c187798(0x1, a5, a6);
    FUN_0c0bbf58(a4);
    t203 = *(signed char *)((a4 + 0x15));
    switch (t203) {
    case 0:
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
        }
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (1.0f + 1.0f));
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - (1.0f + 1.0f));
                } else {
                    t345 = (((struct o22_short *)(a4))->v);
                    if (t345 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (1.0f + 1.0f));
                    } else {
                        if (t345 == 6) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (1.0f + 1.0f));
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
        }
        break;
    case 1:
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
        }
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 4.0f);
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 4.0f);
                } else {
                    t286 = (((struct o22_short *)(a4))->v);
                    if (t286 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 4.0f);
                    } else {
                        if (t286 == 6) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 4.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x6) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c03733c(a4, 0x36, (*(int *)0xC4B410C));
        }
        break;
    case 2:
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x1E;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            thunk_FUN_0c05abb2(0x53, (a4 + 0x28));
        }
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 8.0f);
            } else {
                if (((((struct o22_short *)(a4))->v)) == 2) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 8.0f);
                } else {
                    t223 = (((struct o22_short *)(a4))->v);
                    if (t223 == 4) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 8.0f);
                    } else {
                        if (t223 == 6) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 8.0f);
                        }
                    }
                }
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) & 0x7);
        }
        if ((int)(*(short *)((a4 + 0x1E))) >= (int)0x9) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    default:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        FUN_0c0eb08c((a4 + 0x28), 0x0);
        FUN_0c0eb08c((a4 + 0x28), 0x1);
        FUN_0c0eb08c((a4 + 0x28), 0x2);
        FUN_0c0eb08c((a4 + 0x28), 0x3);
        FUN_0c0eb08c((a4 + 0x28), 0x4);
        FUN_0c0eb08c((a4 + 0x28), 0x5);
        FUN_0c0eb08c((a4 + 0x28), 0x6);
        FUN_0c0eb08c((a4 + 0x28), 0x7);
        thunk_FUN_0c05abb2(0x42, (a4 + 0x28));
        break;
    }
    t388 = *(signed char *)0xC54098D;
    t389 = 0x15;
    if (((int)t388 >= (int)0x8) && ((int)t388 <= (int)0xE)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t389 = 0x14;
    }
    return t389;
}
