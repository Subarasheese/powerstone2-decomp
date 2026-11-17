/* game/effect: functions 0C122714-0C1235F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c122714(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c123010(int a4, int a5);

int FUN_0c123010(int a4, int a5)
{
    int stk[7];
    int t0;
    register int t5;
    register int t17;
    register int t23;
    register int t33;
    register int t35;
    register int t59;
    register int t60;
    register float u62;
    register int t69;
    register int t70;
    register int t74;
    register int t79;
    register int t84;
    register int t86;
    register float u99;
    register float u100;
    register float u107;
    register float u108;
    register float u124;
    register float u125;
    register float u127;
    register float u174;
    register float u176;
    register float u186;
    register float u188;
    register int t232;
    register int t252;
    register int t268;
    register int t258;
    register int t259;
    register int t271;
    register int t243;
    register float u61;
    register int t82;
    register int t83;
    register int t85;
    register int t132;
    register int t198;

    *(unsigned char *)(((int)stk + 20)) = a5;
    t0 = *(signed char *)(((int)stk + 20));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 == 3) {
                t5 = FUN_0c03f444(0x5, 0x0, 0x1);
                t243 = t5;
                if (t5 == 0) {
                } else {
                    *(unsigned char *)((t5 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned int *)((t5 + 0x4)) = 0xC122D34;
                    (((struct oA8_uchar *)(t5))->v) = 0x1;
                    (((struct oAC_ushort *)(t5))->v) = 0xF;
                    (((struct oA9_uchar *)(t5))->v) = 0x21;
                    FUN_0c187798();
                    (((struct o48_float *)(t5))->v) = 1.0f;
                    (((struct o44_float *)(t5))->v) = 1.0f;
                    (((struct o40_float *)(t5))->v) = 1.0f;
                    *(unsigned int *)((t5 + 0x10)) = a4;
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t5 + 0x28));
                    FUN_0c03744a(((((struct oC4_int *)(t5))->v)), 0x0, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                    *(unsigned char *)((((((struct oC4_int *)(t5))->v)) + 0x0)) = 0x0;
                    *(unsigned short *)((((((struct oC4_int *)(t5))->v)) + 0x6)) = 0x3F;
                    t17 = (((struct oC4_int *)(t5))->v);
                    (((struct o8C_float *)(t17))->v) = 0.100000001f;
                    (((struct o88_float *)(t17))->v) = 0.100000001f;
                    (((struct o84_float *)(t17))->v) = 0.100000001f;
                    *(unsigned short *)((t5 + 0x1C)) = 0x37;
                    *(unsigned short *)((t5 + 0x1E)) = 0x0;
                    (((struct o20_ushort *)(t5))->v) = 0x0;
                    t243 = 0x20;
                }
            } else {
                t243 = t0;
                if (t0 == 4) {
                    t23 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t243 = t23;
                    if (t23 != 0) {
                        *(unsigned char *)((t23 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned int *)((t23 + 0x4)) = 0xC122EF4;
                        (((struct oA8_uchar *)(t23))->v) = 0x1;
                        (((struct oAC_ushort *)(t23))->v) = 0xF;
                        (((struct oA9_uchar *)(t23))->v) = 0x21;
                        FUN_0c187798();
                        (((struct o48_float *)(t23))->v) = 1.0f;
                        (((struct o44_float *)(t23))->v) = 1.0f;
                        (((struct o40_float *)(t23))->v) = 1.0f;
                        *(unsigned int *)((t23 + 0x10)) = a4;
                        FUN_0c187798();
                        FUN_0c03744a(((((struct oC4_int *)(t23))->v)), 0x1, 0x8, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
                        *(unsigned char *)((((((struct oC4_int *)(t23))->v)) + 0x0)) = 0x0;
                        *(unsigned short *)((((((struct oC4_int *)(t23))->v)) + 0x6)) = 0x21F;
                        t33 = (((struct oC4_int *)(t23))->v);
                        (((struct o8C_float *)(t33))->v) = 0.100000001f;
                        (((struct o84_float *)(t33))->v) = 0.100000001f;
                        (((struct o88_float *)(((((struct oC4_int *)(t23))->v))))->v) = 1.0f;
                        t35 = (((struct oC4_int *)(t23))->v);
                        (((struct o20_float *)(t35))->v) = 1.0f;
                        (((struct o1C_float *)(t35))->v) = 1.0f;
                        (((struct o18_float *)(t35))->v) = 1.0f;
                        *(unsigned short *)((t23 + 0x1C)) = 0x37;
                        *(unsigned short *)((t23 + 0x1E)) = 0x0;
                        t243 = 0x0;
                    }
                }
            }
        } else {
            t59 = *(signed char *)((a4 + 0x2));
            if (t59 == 0) {
                *(unsigned int *)(((int)stk + 24)) = 0x14;
            } else {
                *(unsigned int *)(((int)stk + 24)) = 0x10;
            }
            t60 = 0x0;
            u62 = 0.100000001f;
            for (;;) {
                if ((int)t60 < (int)(*(int *)(((int)stk + 24)))) {
                    t59 = (*(signed char *)((a4 + 0x1)));
                    t59 = (t59 << 2);
                    t59 = (FUN_0c037320(0x0, (*(int *)((0xC4B40FC + t59)))));
                    if (t59 == 0) {
                        break;
                    }
                    t59 = (FUN_0c03f444(0x1, 0x0, 0x2));
                    if (t59 == 0) {
                    } else {
                        t69 = t59;
                        t59 = (*(signed char *)((a4 + 0x1)));
                        t59 = (t59 << 2);
                        t70 = *(int *)((0xC4B40FC + t59));
                        t59 = 0xC4;
                        t59 = (FUN_0c03744a((*(int *)((t69 + t59))), 0x2, 0x0, t70));
                        t59 = (*(signed char *)((a4 + 0x1)));
                        t59 = (t59 << 2);
                        t74 = *(int *)((0xC4B40FC + t59));
                        t59 = 0xC8;
                        t59 = (FUN_0c03744a((*(int *)((t69 + t59))), 0x1, 0x0, t74));
                        t59 = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t69 + 0x1)) = t59;
                        t59 = 0xA8;
                        *(unsigned char *)((t69 + t59)) = 0x1;
                        t59 = (t59 + 0x4);
                        *(unsigned short *)((t69 + t59)) = 0xF;
                        t59 = (t59 - 3);
                        *(unsigned char *)((t69 + t59)) = 0x21;
                        t59 = 0x48;
                        *(unsigned int *)((t69 + 0x4)) = 0xC122FEC;
                        *(float *)((t69 + t59)) = 1.0f;
                        t59 = 0x44;
                        *(float *)((t69 + t59)) = 1.0f;
                        t59 = 0x40;
                        *(float *)((t69 + t59)) = 1.0f;
                        t59 = (*(signed char *)((a4 + 0x1)));
                        t79 = ((short)t59 * (short)0x3938);
                        t59 = 0xC53255C;
                        t59 = (thunk_FUN_0c058310(((*(int *)((t79 + t59))) + 0x28), (t69 + 0x28)));
                        t84 = 0x0;
                        t86 = t85;
                        for (;;) {
                            t59 = 0xC0;
                            if ((int)t84 >= (int)(*(int *)((t69 + t59)))) {
                                break;
                            }
                            *(unsigned int *)(((int)stk + 16)) = (t84 << 2);
                            if (t84 == 0) {
                                t83 = 0xC4;
                                t83 = (t83 + t69);
                                t83 = (t83 + (*(int *)(((int)stk + 16))));
                                t82 = (*(int *)((t83 + 0x0)));
                                *(unsigned char *)((t82 + 0x0)) = 0x1;
                            } else {
                                t83 = 0xC4;
                                t83 = (t83 + t69);
                                t83 = (t83 + (*(int *)(((int)stk + 16))));
                                t82 = (*(int *)((t83 + 0x0)));
                                *(unsigned char *)((t82 + 0x0)) = 0x0;
                            }
                            t83 = 0xC4;
                            t59 = 0x1F;
                            t84 = (t84 + 0x1);
                            t83 = (t83 + t69);
                            t86 = 0xC4;
                            t83 = (t83 + (*(int *)(((int)stk + 16))));
                            t82 = (*(int *)((t83 + 0x0)));
                            t86 = (t86 + t69);
                            *(unsigned short *)((t82 + 0x6)) = t59;
                            t59 = 0x8C;
                            t86 = (t86 + (*(int *)(((int)stk + 16))));
                            t86 = (*(int *)((t86 + 0x0)));
                            *(float *)((t86 + t59)) = 1.0f;
                            t59 = (t59 - 4);
                            *(float *)((t86 + t59)) = 1.0f;
                            t59 = (t59 - 4);
                            *(float *)((t86 + t59)) = 1.0f;
                        }
                        t59 = 0xC123318;
                        *(unsigned int *)((t69 + 0x10)) = a4;
                        u99 = *(float *)((t59 + 0x0));
                        t59 = 0xC12331C;
                        u100 = *(float *)((t59 + 0x0));
                        t59 = (*(signed char *)((a4 + 0x2)));
                        if (t59 == 0) {
                            *(unsigned int *)(((int)stk + 16)) = (t60 - 10);
                            t59 = (*(signed char *)(((int)stk + 20)));
                            if (t59 == 1) {
                                if ((int)t60 < (int)0xA) {
                                    *(unsigned int *)((t69 + 0x34)) = 0x0;
                                    *(unsigned int *)((t69 + 0x38)) = (int)(((float)((((t60 << 2) << 1) + t60) << 2) * u100) / u99);
                                } else {
                                    if ((int)t60 < (int)0x10) {
                                        *(unsigned int *)((t69 + 0x34)) = 0xFFFFEAAB;
                                        u107 = (float)((*(int *)(((int)stk + 16))) * 0x3C);
                                        *(unsigned int *)((t69 + 0x38)) = (int)((u107 * u100) / u99);
                                    } else {
                                        *(unsigned int *)((t69 + 0x34)) = 0xFFFFDC72;
                                        u108 = (float)((t60 - 16) * 0x5A);
                                        *(unsigned int *)((t69 + 0x38)) = (int)((u108 * u100) / u99);
                                    }
                                }
                            } else {
                                if ((int)t60 < (int)0x6) {
                                    *(unsigned int *)((t69 + 0x34)) = 0x0;
                                    u124 = (float)(t60 * 0x3C);
                                    *(unsigned int *)((t69 + 0x38)) = (int)((u124 * u100) / u99);
                                } else {
                                    if ((int)t60 < (int)0xA) {
                                        *(unsigned int *)((t69 + 0x34)) = 0xFFFFEAAB;
                                        u125 = (float)((t60 - 6) * 0x5A);
                                        *(unsigned int *)((t69 + 0x38)) = (int)((u125 * u100) / u99);
                                    } else {
                                        if ((int)t60 < (int)0xD) {
                                            *(unsigned int *)((t69 + 0x34)) = 0xFFFFDC72;
                                            u127 = (float)((*(int *)(((int)stk + 16))) * 0x78);
                                            *(unsigned int *)((t69 + 0x38)) = (int)((u127 * u100) / u99);
                                        } else {
                                            if ((int)t60 < (int)0x11) {
                                                *(unsigned int *)((t69 + 0x34)) = 0x1555;
                                                t132 = ((t60 - 13) * 0x5A);
                                            } else {
                                                *(unsigned int *)((t69 + 0x34)) = 0x238E;
                                                t132 = ((t60 - 17) * 0x78);
                                            }
                                            *(unsigned int *)((t69 + 0x38)) = (int)(((float)t132 * u100) / u99);
                                        }
                                    }
                                }
                            }
                        } else {
                            t59 = (*(signed char *)(((int)stk + 20)));
                            if (t59 == 1) {
                                if ((int)t60 >= (int)0x8) {
                                    *(unsigned int *)((t69 + 0x34)) = 0xFFFFF1C8;
                                    u174 = (float)((t60 - 8) * 0x2D);
                                    t198 = ((int)((u174 * u100) / u99) + (*(int *)((a4 + 0x38))));
                                } else {
                                    *(unsigned int *)((t69 + 0x34)) = 0x0;
                                    u176 = (float)(t60 * 0x2D);
                                    t198 = (((int)((u176 * u100) / u99) + (*(int *)((a4 + 0x38)))) + 0xFA4);
                                }
                            } else {
                                if ((int)t60 < (int)0x8) {
                                    *(unsigned int *)((t69 + 0x34)) = 0x0;
                                    u186 = (float)(t60 * 0x2D);
                                    t198 = (((int)((u186 * u100) / u99) + (*(int *)((a4 + 0x38)))) + 0xFA4);
                                } else {
                                    *(unsigned int *)((t69 + 0x34)) = 0xE38;
                                    u188 = (float)((t60 - 8) * 0x2D);
                                    t198 = ((int)((u188 * u100) / u99) + (*(int *)((a4 + 0x38))));
                                }
                            }
                            *(unsigned int *)((t69 + 0x38)) = t198;
                        }
                        t59 = 0xC123444;
                        *(unsigned int *)((t69 + 0x3C)) = 0x0;
                        u62 = (*(float *)((t59 + 0x0)));
                        u61 = (math_sin_angle16((*(int *)((t69 + 0x38)))));
                        u61 = (u61 * (math_cos_angle16((*(int *)((t69 + 0x34))))));
                        t59 = 0x4C;
                        u61 = (u61 * u62);
                        *(float *)((t69 + t59)) = u61;
                        u61 = (math_cos_angle16((*(int *)((t69 + 0x38)))));
                        u61 = (u61 * (math_cos_angle16((*(int *)((t69 + 0x34))))));
                        t59 = 0x54;
                        u61 = (u61 * u62);
                        *(float *)((t69 + t59)) = u61;
                        t59 = 0x50;
                        *(float *)((t69 + t59)) = (-((math_sin_angle16((*(int *)((t69 + 0x34))))) * u62));
                        *(int *)((int)stk + 12) = 0xF0;
                        *(int *)((int)stk + 8) = 0x0;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0x100;
                        t59 = (FUN_0c064d24(t69, 0x1, 0x30, 0x1, 0x100, 0x0, 0x0, 0xF0));
                        t59 = (FUN_0c07e2f4(t69, 0x64));
                        t59 = 0x0;
                        *(unsigned short *)((t69 + 0x1C)) = t59;
                        (((struct o41C_uchar *)(t69))->v) = 0x14;
                        *(unsigned char *)(((0x41C + t69) + 0x1)) = t59;
                        t59 = (*(signed char *)((a4 + 0x2)));
                        if (t59 == 0) {
                            t59 = 0x12A;
                            *(unsigned short *)((t69 + t59)) = 0x0;
                            t59 = 0x20;
                            *(unsigned short *)((t69 + t59)) = 0x4;
                        } else {
                            t59 = t60;
                            if ((int)t59 >= 0) {
                                t59 = (t59 & 0x1);
                            } else {
                                t59 = (~t59);
                                t59 = (t59 + 0x1);
                                t59 = (t59 & 0x1);
                                t59 = (~t59);
                                t59 = (t59 + 0x1);
                            }
                            if (t59 == 0) {
                                t59 = 0x12A;
                                *(unsigned short *)((t69 + t59)) = 0x0;
                                t59 = 0x20;
                                *(unsigned short *)((t69 + t59)) = 0x8;
                            } else {
                                t59 = (*(signed char *)((t69 + 0x1)));
                                t232 = ((int)0x1 << (int)t59);
                                t59 = 0x12A;
                                *(unsigned short *)((t69 + t59)) = (~t232);
                                t59 = 0x20;
                                *(unsigned short *)((t69 + t59)) = 0x2;
                            }
                        }
                        t59 = 0x22;
                        *(unsigned short *)((t69 + t59)) = t60;
                    }
                    t60 = (t60 + 0x1);
                    continue;
                }
                return t59;
            }
            t243 = t59;
        }
        t271 = t243;
    } else {
        t252 = FUN_0c03f444(0x5, 0x0, 0xA);
        t268 = t252;
        if (t252 != 0) {
            *(unsigned char *)((t252 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned int *)((t252 + 0x4)) = 0xC122826;
            (((struct oA8_uchar *)(t252))->v) = 0x1;
            (((struct oAC_ushort *)(t252))->v) = 0xF;
            (((struct oA9_uchar *)(t252))->v) = 0x21;
            FUN_0c187798();
            (((struct o48_float *)(t252))->v) = 1.0f;
            (((struct o44_float *)(t252))->v) = 1.0f;
            (((struct o40_float *)(t252))->v) = 1.0f;
            t258 = (thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (t252 + 0x28)));
            t259 = 0x0;
            for (;;) {
                if ((unsigned int)t259 >= (unsigned int)0x28) {
                    break;
                }
                t258 = (*(signed char *)((a4 + 0x1)));
                t258 = (t258 << 2);
                t258 = (FUN_0c03744a((*(int *)((((0xC4 + t252) + t259) + 0x0))), 0x0, 0x3, (*(int *)((0xC4B40FC + t258)))));
                t258 = 0x1F;
                *(unsigned char *)(((*(int *)((((0xC4 + t252) + t259) + 0x0))) + 0x0)) = 0x1;
                *(unsigned short *)(((*(int *)((((0xC4 + t252) + t259) + 0x0))) + 0x6)) = t258;
                t258 = (FUN_0c122714((*(int *)((((0xC4 + t252) + t259) + 0x0)))));
                t259 = (t259 + 0x4);
            }
            *(unsigned int *)((t252 + 0x10)) = a4;
            *(unsigned short *)((t252 + 0x1C)) = 0x41;
            t268 = 0x41;
        }
        t271 = t268;
    }
    return t271;
}
