/* Straight-line functions with calls and guards (batch gen_ku): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f566(int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c04340c(void);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0cff28(int, int);
int FUN_0c0e1080(int);
int FUN_0c0e1096(int);
int FUN_0c0e10a8(int, int, int);
int FUN_0c0e1108(int, int, int);
int FUN_0c0e11ee(int, int, int, int);
int FUN_0c0e1270(int);
int FUN_0c0e12aa(int);
int FUN_0c0e1314(int);
int FUN_0c0e132a(int);
int FUN_0c0e138c(int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e1524(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c0e1524(int a4, int a5, int a6, int a7)
{
    int stk[6];
    int t20;
    int t92;
    int t28;
    int t139;
    int t10;
    int t181;
    int t203;
    int t237;
    int t229;
    int t6;
    int t235;
    int t227;
    int t222;
    int t236;
    int t228;
    int t244;
    int t80;
    int t79;
    int t201;
    int t194;
    int t191;
    int t179;
    int t165;
    int t154;
    int t152;
    int t122;
    int t117;
    int t108;
    int t101;
    int t98;
    int t74;
    int t71;
    int t69;
    int t37;
    int t30;
    int t26;
    int t17;
    int t214;
    int t208;
    int t172;
    int t136;
    int t116;
    int t107;
    int t95;
    int t67;
    int t57;
    int t36;
    int t24;
    int t8;
    int t2;
    int t5;
    int t138;
    int t220;
    int t135;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)(a4 + 0x14);
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        FUN_0c03f566(a4, 0x4);
        t8 = 0xC1CA4E0;
        t10 = 0x0;
        for (;;) {
            if ((unsigned int)t10 >= (unsigned int)0x10) {
                break;
            }
            t5 = (*(int *)((((0xC4 + a4) + t10) + 0x0)));
            FUN_0c03744a(t5, 0x0, (*(int *)(t10 + 0xC1CA4C4)), (*(int *)((0xC4B410C + 0x0))));
            t6 = t8;
            t5 = (t5 + 0x6C);
            t8 = (t8 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t5) = *(struct mv3 *)(t6); }
            t10 = (t10 + 0x4);
        }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(0xC1CA4D4); }
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        FUN_0c0e1080(a4);
    }
    t17 = FUN_0c042fe0();
    if (t17 == 0) {
        return t17;
    }
    t20 = *(signed char *)(a4 + 0x15);
    if (t20 != 0) {
        if (t20 != 1) {
            if (t20 == 2) {
                FUN_0c0e10a8(a4, 0x0, 0x2);
                t24 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t24 - 1);
                t26 = (short)(t24 - 1);
                if ((int)(short)(t24 - 1) > 0) {
                } else {
                    t26 = (FUN_0c0cff28(a4, 0x3));
                }
                return t26;
            }
            if (t20 == 3) {
                t28 = *(signed char *)(a4 + 0x17);
                if (t28 == 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                    t30 = *(signed char *)(a4 + 0x16);
                    FUN_0c0e11ee(a4, 0x0, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t30 << 2) + t30) + 0xC1CA530) + 0x2))) << 2)))), 0x0);
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    (((struct o1E_ushort *)(a4))->v) = 0x0;
                }
                if ((t28 == 0) || (t28 == 1)) {
                    FUN_0c0e10a8(a4, 0x0, 0x2);
                    t36 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t36 - 1);
                    t92 = (short)(t36 - 1);
                    if ((int)(short)(t36 - 1) > 0) {
                    } else {
                        t37 = *(signed char *)(a4 + 0x16);
                        FUN_0c0e11ee(a4, 0x1, (*(int *)((0xC1CA510 + ((*(signed char *)(((((t37 << 2) + t37) + 0xC1CA530) + 0x3))) << 2)))), 0x0);
                        (((struct o1E_ushort *)(a4))->v) = 0x1E;
                        thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                        t92 = 0x17;
                    }
                } else {
                    if (t28 != 2) {
                        if (t28 != 3) {
                            t92 = t28;
                            if (t28 == 4) {
                                FUN_0c0e1108(a4, 0x0, 0x2);
                                t92 = 0x22;
                                if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                                } else {
                                    FUN_0c0cff28(a4, 0x4);
                                    (((struct o17_uchar *)(a4))->v) = 0x0;
                                    t92 = 0x17;
                                }
                            }
                        } else {
                            FUN_0c0e10a8(a4, 0x2, 0x2);
                            FUN_0c0e1108(a4, 0x0, 0x1);
                            t57 = (((struct o1C_short *)(a4))->v);
                            (((struct o1C_ushort *)(a4))->v) = (t57 - 1);
                            t92 = (short)(t57 - 1);
                            if ((int)(short)(t57 - 1) > 0) {
                            } else {
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                                (((struct o22_ushort *)(a4))->v) = 0x1E;
                                t92 = (thunk_FUN_0c05abb2(0x57, (a4 + 0x28)));
                            }
                        }
                    } else {
                        FUN_0c0e10a8(a4, 0x1, 0x2);
                        FUN_0c0e1108(a4, 0x0, 0x0);
                        t67 = (((struct o1C_short *)(a4))->v);
                        (((struct o1C_ushort *)(a4))->v) = (t67 - 1);
                        t92 = (short)(t67 - 1);
                        if ((int)(short)(t67 - 1) > 0) {
                        } else {
                            thunk_FUN_0c05abb2(0x57, (a4 + 0x28));
                            t69 = *(signed char *)(a4 + 0x16);
                            if ((*(signed char *)(((((t69 << 2) + t69) + 0xC1CA530) + 0x1))) != 0) {
                                t71 = *(signed char *)(a4 + 0x16);
                                t79 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t71 << 2) + t71) + 0xC1CA530) + 0x4))) << 2))));
                                t80 = 0x2;
                            } else {
                                t74 = *(signed char *)(a4 + 0x16);
                                t79 = (*(int *)((0xC1CA510 + ((*(signed char *)(((((t74 << 2) + t74) + 0xC1CA530) + 0x4))) << 2))));
                                t80 = 0x0;
                            }
                            FUN_0c0e11ee(a4, 0x2, t79, t80);
                            (((struct o20_ushort *)(a4))->v) = 0x1E;
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                            t92 = 0x17;
                        }
                    }
                }
                return t92;
            }
            if (t20 == 4) {
                t95 = *(signed char *)(a4 + 0x17);
                t107 = 0;
                if (t95 != 0) {
                    if (t95 == 1) {
                        t107 = 1;
                    }
                } else {
                    t98 = *(signed char *)(a4 + 0x16);
                    t101 = 0xA;
                    if ((int)(*(signed char *)(((((t98 << 2) + t98) + 0xC1CA530) + 0x0))) >= 0) {
                        FUN_0c0e1270(a4);
                        t101 = 0x1E;
                    }
                    (((struct o1C_ushort *)(a4))->v) = t101;
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                    t107 = 1;
                }
                if (t107) {
                    t108 = *(signed char *)(a4 + 0x16);
                    if ((int)(*(signed char *)(((((t108 << 2) + t108) + 0xC1CA530) + 0x0))) >= 0) {
                        FUN_0c0e12aa(a4);
                    }
                    t116 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t116 - 1);
                    t135 = (short)(t116 - 1);
                    if ((int)(short)(t116 - 1) > 0) {
                    } else {
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t117 = *(signed char *)(a4 + 0x16);
                        if ((int)(*(signed char *)(((((t117 << 2) + t117) + 0xC1CA530) + 0x0))) < 0) {
                            FUN_0c0cff28(a4, 0x5);
                            (((struct o1C_ushort *)(a4))->v) = 0x78;
                            t135 = 0x78;
                        } else {
                            t122 = *(signed char *)(a4 + 0x16);
                            if ((*(signed char *)((0xC1CA530 + ((t122 << 2) + t122)))) == 4) {
                                FUN_0c0cff28(a4, 0x7);
                                (((struct o1C_ushort *)(a4))->v) = 0x78;
                                t135 = 0x78;
                            } else {
                                t135 = (FUN_0c0cff28(a4, 0x6));
                            }
                        }
                    }
                } else {
                    t135 = t95;
                }
                return t135;
            }
            if (t20 == 5) {
                t136 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t136 - 1);
                if ((int)(short)(t136 - 1) <= 0) {
                    FUN_0c0cff28(a4, 0x0);
                    return FUN_0c0e1080(a4);
                }
                return (short)(t136 - 1);
            }
            if (t20 == 6) {
                t138 = (((struct oD0_int *)(a4))->v);
                t139 = *(signed char *)(a4 + 0x17);
                if (t139 == 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                    (((struct o1C_ushort *)(a4))->v) = 0x32;
                    FUN_0c0e132a(a4);
                }
                if ((t139 == 0) || (t139 == 1)) {
                    FUN_0c0e12aa(a4);
                    (((struct o70_float *)(t138))->v) = (((((struct o70_float *)(t138))->v)) + 5.0f);
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
                    if ((int)((((struct o1C_short *)(a4))->v)) < (int)0xA) {
                        FUN_0c0e138c(a4);
                    }
                    t152 = (((struct o1C_short *)(a4))->v);
                    t154 = t152;
                    if (t152 == 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                        (((struct o1C_ushort *)(a4))->v) = 0x14;
                        t154 = 0x14;
                    }
                    return t154;
                } else {
                    if (t139 != 2) {
                        t172 = t139;
                        if (t139 != 3) {
                        } else {
                            (((struct o70_float *)(t138))->v) = (((((struct o70_float *)(t138))->v)) - 5.0f);
                            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
                            if ((int)((((struct o1C_short *)(a4))->v)) > (int)0x28) {
                                FUN_0c0e138c(a4);
                            }
                            t165 = (((struct o1C_short *)(a4))->v);
                            t172 = t165;
                            if (t165 == 0) {
                                FUN_0c0cff28(a4, 0x0);
                                FUN_0c0e1080(a4);
                                (((struct o17_uchar *)(a4))->v) = 0x0;
                                t172 = 0x17;
                            }
                        }
                        return t172;
                    }
                    FUN_0c0e12aa(a4);
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
                    FUN_0c0e138c(a4);
                    t179 = (((struct o1C_short *)(a4))->v);
                    if (t179 == 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                        (((struct o1C_ushort *)(a4))->v) = 0x32;
                        return FUN_0c0e1314(a4);
                    }
                    return t179;
                }
            }
            if (t20 == 7) {
                t181 = *(signed char *)(a4 + 0x17);
                if (t181 == 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                }
                if ((t181 == 0) || (t181 == 1)) {
                    FUN_0c0e12aa(a4);
                    t191 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                    t194 = t191;
                    if (t191 == 5) {
                        FUN_0c0e1314(a4);
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                        t194 = 0x17;
                    }
                    return t194;
                } else {
                    if (t181 != 2) {
                        return t181;
                    }
                    t201 = *(signed char *)((0x15 + (*(int *)0xC540DA4)));
                    if (t201 != 5) {
                        FUN_0c0cff28(a4, 0x0);
                        return FUN_0c0e1080(a4);
                    }
                    return t201;
                }
            }
            return t20;
        }
        t203 = *(signed char *)(a4 + 0x17);
        if (t203 == 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
            (((struct o1C_ushort *)(a4))->v) = 0xF;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
        }
        if ((t203 == 0) || (t203 == 1)) {
            FUN_0c0e10a8(a4, 0x0, 0x0);
            t208 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t208 - 1);
            t220 = (short)(t208 - 1);
            if ((int)(short)(t208 - 1) > 0) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0xF;
                t220 = 0xF;
            }
        } else {
            t220 = t203;
            if (t203 != 2) {
            } else {
                FUN_0c0e10a8(a4, 0x0, 0x1);
                t214 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t214 - 1);
                t220 = (short)(t214 - 1);
                if ((int)(short)(t214 - 1) > 0) {
                } else {
                    FUN_0c0cff28(a4, 0x2);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    (((struct o1C_ushort *)(a4))->v) = 0x1E;
                    t220 = 0x1E;
                }
            }
        }
        return t220;
    }
    t222 = FUN_0c0e1096(a4);
    if (t222 != 0) {
        FUN_0c0cff28(a4, 0x1);
        (((struct o16_uchar *)(a4))->v) = ((int)((int)(nlRand()) % (int)(*(int *)0xC1CA580)));
        t227 = FUN_0c043010();
        if ((t227 != 0) && (t228 = *(signed char *)(a4 + 0x16), t229 = *(signed char *)((0xC1CA530 + ((t228 << 2) + t228))), t229 == 2)) {
            (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
        }
        t235 = FUN_0c04340c();
        if ((t235 == 0) && (t236 = *(signed char *)(a4 + 0x16), t237 = *(signed char *)((0xC1CA530 + ((t236 << 2) + t236))), t237 == 1)) {
            (((struct o16_uchar *)(a4))->v) = ((*(int *)0xC1CA580) - 1);
        }
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        t244 = 0x12C;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(a4 + 0x28); }
        t244 = (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
    }
    return t244;
}
