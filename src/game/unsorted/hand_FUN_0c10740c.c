/* Hand-fixed generated C: FUN_0c10740c calls FUN_0c115120 with r4 = 6 and nothing else set; FUN_0c115120's arms read r6 and r7,
   which on this path still hold FUN_0c10740c's own third and fourth arguments (only another path loads them). The generated C
   passed zeros there. */

int FUN_0c11e2d0(int, int, int, int);
int FUN_0c05f22c(int);
int FUN_0c117d54(void);
int FUN_0c117e76();
int FUN_0c117a6e(int, ...);
int FUN_0c05b048(int, int);
int FUN_0c117944(int, ...);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };

int FUN_0c10740c(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t11;
    register int t27;
    register int t12;
    register int t16;
    register int t32;
    register int t39;
    register int t49;
    register int t65;
    register int t50;
    register int t54;
    register int t70;
    register int t77;
    register int t79;
    register int t95;
    register int t80;
    register int t84;
    register int t101;
    register int t108;
    register int t110;
    register int t116;
    register int t111;
    register int t120;
    register int t122;
    register int t123;
    register int t125;
    register int t132;
    register int t157;
    register int t158;
    register int t160;
    register int t166;
    register int t161;
    register int t170;
    register int t172;
    register int t173;
    register int t175;
    register int t182;
    register int t207;
    register int t208;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = (*(int *)0xC473D00);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c11e2d0((*(int *)(((((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2) + 0xC473CCC))), ((((struct o0_int *)0xC473CC0)->v)), ((((struct o4_int *)0xC473CC0)->v)), ((((struct o8_int *)0xC473CC0)->v)));
                t11 = *(signed char *)((a4 + 0x16));
                if (t11 != 0) {
                    if (t11 != 1) {
                        t27 = t11;
                        if (t11 != 2) {
                        } else {
                            t12 = FUN_0c05f22c(0x3FCF);
                            t27 = t12;
                            if (t12 != 0) {
                                *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                                t16 = *(short *)((a4 + 0x1E));
                                if (t16 == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t27 = 0x14;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = (t16 - 1);
                                    (((struct o15_uchar *)(a4))->v) = 0x3;
                                    t27 = 0x15;
                                }
                            }
                        }
                        return t27;
                    }
                    t32 = FUN_0c117d54();
                    if ((int)t32 < 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return ((int (*)(void))(FUN_0c117e76))();
                    }
                    return t32;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t39 = (*(int *)((((*(int *)(((((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2) + 0xC473CCC))) << 2) + 0xC29DDD0)));
                *(int *)((int)stk + 4) = t39;
                *(int *)((int)stk + 0) = 0x42;
                return (FUN_0c117a6e(0x42, t39));
            }
            if (t0 == 3) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c11e2d0((*(int *)(((((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2) + 0xC473CCC))), ((((struct o0_int *)0xC473CC0)->v)), ((((struct o4_int *)0xC473CC0)->v)), ((((struct o8_int *)0xC473CC0)->v)));
                t49 = *(signed char *)((a4 + 0x16));
                if (t49 != 0) {
                    if (t49 != 1) {
                        t65 = t49;
                        if (t49 != 2) {
                        } else {
                            t50 = FUN_0c05f22c(0x3FCF);
                            t65 = t50;
                            if (t50 != 0) {
                                *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                                t54 = *(short *)((a4 + 0x1E));
                                if (t54 == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t65 = 0x14;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = (t54 - 1);
                                    (((struct o15_uchar *)(a4))->v) = 0x3;
                                    t65 = 0x15;
                                }
                            }
                        }
                        return t65;
                    }
                    t70 = FUN_0c117d54();
                    if ((int)t70 < 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return ((int (*)(void))(FUN_0c117e76))();
                    }
                    return t70;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t77 = (*(int *)((((*(int *)(((((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2) + 0xC473CCC))) << 2) + 0xC29DDD0)));
                *(int *)((int)stk + 4) = t77;
                *(int *)((int)stk + 0) = 0x42;
                return (FUN_0c117a6e(0x42, t77));
            }
            if (t0 == 4) {
                t79 = *(signed char *)((a4 + 0x16));
                if (t79 != 0) {
                    if (t79 != 1) {
                        t95 = t79;
                        if (t79 != 2) {
                        } else {
                            t80 = FUN_0c05f22c(0x3FCF);
                            t95 = t80;
                            if (t80 != 0) {
                                *(unsigned short *)(((*(int *)0xC474BAC) + 0x1C)) = (((*(int *)0xC473D00) - (*(short *)(((0x1E + a4) + 0x0)))) + 0x1);
                                t84 = *(short *)((a4 + 0x1E));
                                if (t84 == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t95 = 0x14;
                                } else {
                                    *(unsigned short *)((a4 + 0x1E)) = (t84 - 1);
                                    (((struct o15_uchar *)(a4))->v) = 0x3;
                                    t95 = 0x15;
                                }
                            }
                        }
                        return t95;
                    }
                    t101 = FUN_0c117d54();
                    if ((int)t101 < 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        return ((int (*)(void))(FUN_0c117e76))();
                    }
                    return t101;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t108 = (*(int *)((((*(int *)(((((*(int *)0xC473D00) - (*(short *)((a4 + 0x1E)))) << 2) + 0xC473CCC))) << 2) + 0xC29DDD0)));
                *(int *)((int)stk + 4) = t108;
                *(int *)((int)stk + 0) = 0x42;
                return (FUN_0c117a6e(0x42, t108));
            }
            return t0;
        }
        t110 = *(signed char *)((a4 + 0x16));
        if (t110 != 0) {
            if (t110 != 1) {
                if (t110 != 2) {
                    t116 = t110;
                    if (t110 != 3) {
                    } else {
                        t111 = FUN_0c05f22c(0x3FCF);
                        t116 = t111;
                        if (t111 != 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t116 = 0x15;
                        }
                    }
                    return t116;
                }
                t120 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t120 + 0x1);
                if ((int)(short)(t120 + 0x1) <= (int)0xD2) {
                    return 0x20;
                }
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t122 = ((int (*)(int, int, int, int))(FUN_0c117e76))(a4, a5, a6, a7);
                return FUN_0c05b048(0x78, 0x1);
            }
            t123 = FUN_0c117d54();
            t125 = t123;
            if ((int)t123 >= 0) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t125 = 0x20;
            }
            return t125;
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        if (((((struct o1C_int *)0xC473CC0)->v)) == 7) {
            *(int *)((int)stk + 4) = 0x4D;
            FUN_0c117944(0x4D);
        } else {
            t132 = *(int *)0xC473D00;
            switch (t132) {
            case 0:
                *(int *)((int)stk + 4) = 0x4D;
                FUN_0c117944(0x4D);
                break;
            case 1:
                *(int *)((int)stk + 4) = 0x4E;
                FUN_0c117944(0x4E);
                break;
            case 2:
                *(int *)((int)stk + 4) = 0x4F;
                FUN_0c117944(0x4F);
                break;
            }
        }
        FUN_0c115120(0x6, 0x0, a6, a7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
        t157 = (((struct o0_int *)0xC5325B0)->v);
        (((struct o98_float *)(t157))->v) = 8.0f;
        (((struct o94_float *)(t157))->v) = 8.0f;
        t158 = (((struct o4_int *)0xC5325B0)->v);
        (((struct o98_float *)(t158))->v) = 8.0f;
        (((struct o94_float *)(t158))->v) = 8.0f;
        return 0x94;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t160 = *(signed char *)((a4 + 0x16));
    if (t160 != 0) {
        if (t160 != 1) {
            if (t160 != 2) {
                t166 = t160;
                if (t160 != 3) {
                } else {
                    t161 = FUN_0c05f22c(0x3FCF);
                    t166 = t161;
                    if (t161 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t166 = 0x15;
                    }
                }
                return t166;
            }
            t170 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t170 + 0x1);
            if ((int)(short)(t170 + 0x1) <= (int)0xD2) {
                return 0x20;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t172 = ((int (*)(int, int, int, int))(FUN_0c117e76))(a4, a5, a6, a7);
            return FUN_0c05b048(0x78, 0x1);
        }
        t173 = FUN_0c117d54();
        t175 = t173;
        if ((int)t173 >= 0) {
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            t175 = 0x20;
        }
        return t175;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    if (((((struct o1C_int *)0xC473CC0)->v)) == 7) {
        *(int *)((int)stk + 4) = 0x4D;
        FUN_0c117944(0x4D);
    } else {
        t182 = *(int *)0xC473D00;
        switch (t182) {
        case 0:
            *(int *)((int)stk + 4) = 0x4D;
            FUN_0c117944(0x4D);
            break;
        case 1:
            *(int *)((int)stk + 4) = 0x4E;
            FUN_0c117944(0x4E);
            break;
        case 2:
            *(int *)((int)stk + 4) = 0x4F;
            FUN_0c117944(0x4F);
            break;
        }
    }
    FUN_0c115120(0x6, 0x0, a6, a7, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
    t207 = (((struct o0_int *)0xC5325B0)->v);
    (((struct o98_float *)(t207))->v) = 8.0f;
    (((struct o94_float *)(t207))->v) = 8.0f;
    t208 = (((struct o4_int *)0xC5325B0)->v);
    (((struct o98_float *)(t208))->v) = 8.0f;
    (((struct o94_float *)(t208))->v) = 8.0f;
    return 0x94;
}
