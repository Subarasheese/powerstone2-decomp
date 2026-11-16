/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c018e9c(int, int);
int FUN_0c01c81e(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0522e2(int, int);
int FUN_0c052364(int, int);
int FUN_0c054c90(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05e59a(int, int);
int FUN_0c05e5ca(int, int, int);
int FUN_0c05e604(int, int, int);
int FUN_0c05ea5e(int, int);
int FUN_0c101d38(int);
int FUN_0c15ecc6(int);
int FUN_0c17c130(int, int, int);
int FUN_0c186740(int, int);
int FUN_0c18778c(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c15046c(int a4, int a5, int a6, int a7);
int FUN_0c05ea98(void);
int FUN_0c023e9c(void);
int FUN_0c054a6c(int a4, int a5, int a6);


int FUN_0c05ea98(void)
{
    int stk[4];
    register int t0;
    register int t3;
    register int t37;
    register int t62;
    register int t69;
    register int t103;
    register int t128;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        FUN_0c05e59a(0xC257AAC, 0x3);
        FUN_0c05e604(0xB, 0x5, 0xC257ACC);
        t3 = *(signed char *)0xC541F45;
        if ((unsigned char)t3 != 0) {
            if ((unsigned char)t3 != 1) {
                if ((unsigned char)t3 != 2) {
                    if ((unsigned char)t3 != 3) {
                        if ((unsigned char)t3 != 4) {
                            if ((unsigned char)t3 != 5) {
                                if ((unsigned char)t3 != 6) {
                                    if ((unsigned char)t3 != 7) {
                                        if ((unsigned char)t3 != 8) {
                                            if ((unsigned char)t3 != 9) {
                                                if ((unsigned char)t3 != 10) {
                                                } else {
                                                    FUN_0c05ea5e(0x8, 0xC5429AE);
                                                }
                                            } else {
                                                FUN_0c05ea5e(0x8, 0xC5429AD);
                                            }
                                        } else {
                                            FUN_0c05ea5e(0x2, 0xC5429B1);
                                        }
                                    } else {
                                        FUN_0c05ea5e(0x2, 0xC5429B0);
                                    }
                                } else {
                                    FUN_0c05ea5e(0x2, 0xC5429AC);
                                }
                            } else {
                                FUN_0c05ea5e(0x2, 0xC5429AB);
                            }
                        } else {
                            FUN_0c05ea5e(0x2, 0xC5429AA);
                        }
                    } else {
                        FUN_0c05ea5e(0x2, 0xC541F66);
                    }
                } else {
                    FUN_0c05ea5e(0x2, 0xC5421E1);
                }
            } else {
                FUN_0c05ea5e(0x3, 0xC5429AF);
            }
        } else {
            FUN_0c05ea5e(0x7, 0xC541F62);
        }
        t37 = *(signed char *)0xC5429AD;
        (((struct o20_uchar *)0xC5429A8)->v) = t37;
        (((struct o27_uchar *)0xC541F44)->v) = t37;
        (((struct o22_uchar *)0xC5429A8)->v) = (*(signed char *)0xC5429AE);
        (((struct o0_uchar *)0xC5429A8)->v) = (*(signed char *)0xC541F62);
        FUN_0c05e59a(((((*(signed char *)0xC5429A8) << 2) << 2) + 0xC257B7C), 0x1);
        FUN_0c05e59a(((((*(signed char *)0xC5429AF) << 2) << 2) + 0xC257BEC), 0x1);
        FUN_0c05e5ca(((((*(signed char *)0xC5421E1) << 2) << 2) + 0xC257C1C), 0x1, 0xA);
        FUN_0c05e5ca(((((unsigned char)(*(signed char *)0xC541F66) << 2) << 2) + 0xC257C1C), 0x1, 0xC);
        FUN_0c05e5ca(((((*(signed char *)0xC5429AA) << 2) << 2) + 0xC257C1C), 0x1, 0xE);
        FUN_0c05e5ca(((((*(signed char *)0xC5429AB) << 2) << 2) + 0xC257C1C), 0x1, 0x10);
        FUN_0c05e5ca(((((*(signed char *)0xC5429AC) << 2) << 2) + 0xC257C1C), 0x1, 0x12);
        FUN_0c05e5ca(((((*(signed char *)0xC5429B0) << 2) << 2) + 0xC257C1C), 0x1, 0x14);
        FUN_0c05e5ca(((((*(signed char *)0xC5429B1) << 2) << 2) + 0xC257C1C), 0x1, 0x16);
        FUN_0c05e5ca(((((*(signed char *)0xC5429AD) << 2) << 2) + 0xC257D3C), 0x1, 0x18);
        FUN_0c05e5ca(((((*(signed char *)0xC5429AE) << 2) << 2) + 0xC257D3C), 0x1, 0x1A);
        t62 = *(short *)0xC542700;
        if (((unsigned short)t62 & 0x200) != 0) {
            FUN_0c03eff6();
            *(unsigned char *)0xC5421DE = ((*(signed char *)0xC5421DE) + 0x1);
            FUN_0c036de8(0x10, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            return FUN_0c15ecc6(0x3C);
        }
        return (unsigned short)t62;
    }
    (((struct o0_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    FUN_0c05e59a(0xC257AAC, 0x3);
    FUN_0c05e604(0xB, 0x5, 0xC257ACC);
    t69 = *(signed char *)0xC541F45;
    if ((unsigned char)t69 != 0) {
        if ((unsigned char)t69 != 1) {
            if ((unsigned char)t69 != 2) {
                if ((unsigned char)t69 != 3) {
                    if ((unsigned char)t69 != 4) {
                        if ((unsigned char)t69 != 5) {
                            if ((unsigned char)t69 != 6) {
                                if ((unsigned char)t69 != 7) {
                                    if ((unsigned char)t69 != 8) {
                                        if ((unsigned char)t69 != 9) {
                                            if ((unsigned char)t69 != 10) {
                                            } else {
                                                FUN_0c05ea5e(0x8, 0xC5429AE);
                                            }
                                        } else {
                                            FUN_0c05ea5e(0x8, 0xC5429AD);
                                        }
                                    } else {
                                        FUN_0c05ea5e(0x2, 0xC5429B1);
                                    }
                                } else {
                                    FUN_0c05ea5e(0x2, 0xC5429B0);
                                }
                            } else {
                                FUN_0c05ea5e(0x2, 0xC5429AC);
                            }
                        } else {
                            FUN_0c05ea5e(0x2, 0xC5429AB);
                        }
                    } else {
                        FUN_0c05ea5e(0x2, 0xC5429AA);
                    }
                } else {
                    FUN_0c05ea5e(0x2, 0xC541F66);
                }
            } else {
                FUN_0c05ea5e(0x2, 0xC5421E1);
            }
        } else {
            FUN_0c05ea5e(0x3, 0xC5429AF);
        }
    } else {
        FUN_0c05ea5e(0x7, 0xC541F62);
    }
    t103 = *(signed char *)0xC5429AD;
    (((struct o20_uchar *)0xC5429A8)->v) = t103;
    (((struct o27_uchar *)0xC541F44)->v) = t103;
    (((struct o22_uchar *)0xC5429A8)->v) = (*(signed char *)0xC5429AE);
    (((struct o0_uchar *)0xC5429A8)->v) = (*(signed char *)0xC541F62);
    FUN_0c05e59a(((((*(signed char *)0xC5429A8) << 2) << 2) + 0xC257B7C), 0x1);
    FUN_0c05e59a(((((*(signed char *)0xC5429AF) << 2) << 2) + 0xC257BEC), 0x1);
    FUN_0c05e5ca(((((*(signed char *)0xC5421E1) << 2) << 2) + 0xC257C1C), 0x1, 0xA);
    FUN_0c05e5ca(((((unsigned char)(*(signed char *)0xC541F66) << 2) << 2) + 0xC257C1C), 0x1, 0xC);
    FUN_0c05e5ca(((((*(signed char *)0xC5429AA) << 2) << 2) + 0xC257C1C), 0x1, 0xE);
    FUN_0c05e5ca(((((*(signed char *)0xC5429AB) << 2) << 2) + 0xC257C1C), 0x1, 0x10);
    FUN_0c05e5ca(((((*(signed char *)0xC5429AC) << 2) << 2) + 0xC257C1C), 0x1, 0x12);
    FUN_0c05e5ca(((((*(signed char *)0xC5429B0) << 2) << 2) + 0xC257C1C), 0x1, 0x14);
    FUN_0c05e5ca(((((*(signed char *)0xC5429B1) << 2) << 2) + 0xC257C1C), 0x1, 0x16);
    FUN_0c05e5ca(((((*(signed char *)0xC5429AD) << 2) << 2) + 0xC257D3C), 0x1, 0x18);
    FUN_0c05e5ca(((((*(signed char *)0xC5429AE) << 2) << 2) + 0xC257D3C), 0x1, 0x1A);
    t128 = *(short *)0xC542700;
    if (((unsigned short)t128 & 0x200) != 0) {
        FUN_0c03eff6();
        *(unsigned char *)0xC5421DE = ((*(signed char *)0xC5421DE) + 0x1);
        FUN_0c036de8(0x10, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        return FUN_0c15ecc6(0x3C);
    }
    return (unsigned short)t128;
}


int FUN_0c054a6c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if (((*(int *)((((((struct o2C8_int *)(a4))->v)) + 0x14))) & 0x100) != 0) {
        t0 = ((int (*)(int, int, int))(FUN_0c187798))((0xBC + a4), a5, a6);
        t0 = ((int (*)(int))(FUN_0c187798))((0xEC + a4));
        *(unsigned int *)(((0x17C + a4) + 0xC)) = (*(int *)(((0x17C + a4) + 0x4)));
        t0 = ((int (*)(int))(FUN_0c187798))((0x11C + a4));
        t0 = ((int (*)(int))(FUN_0c187798))((0x14C + a4));
        (((struct o48_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x18)));
        (((struct o4C_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x1C)));
        (((struct o50_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x20)));
        (((struct o54_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x24)));
        (((struct o58_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x28)));
        (((struct o5C_uint *)((0x19C + a4)))->v) = (*(int *)(((0x19C + a4) + 0x2C)));
        (((struct oC_float *)((0x18C + a4)))->v) = ((((struct o4_float *)((0x18C + a4)))->v));
    } else {
        if (((*(int *)((((((struct o2C8_int *)(a4))->v)) + 0x14))) & 0x200) != 0) {
            t0 = ((int (*)(int, int, int))(FUN_0c187798))((0xBC + a4), a5, a6);
            t0 = ((int (*)(int))(FUN_0c187798))((0xEC + a4));
            *(unsigned int *)(((0x17C + a4) + 0x4)) = (*(int *)(((0x17C + a4) + 0xC)));
            t0 = ((int (*)(int))(FUN_0c187798))((0x11C + a4));
            t0 = ((int (*)(int))(FUN_0c187798))((0x14C + a4));
            *(unsigned int *)(((0x19C + a4) + 0x18)) = ((((struct o48_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x1C)) = ((((struct o4C_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x20)) = ((((struct o50_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x24)) = ((((struct o54_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x28)) = ((((struct o58_int *)((0x19C + a4)))->v));
            *(unsigned int *)(((0x19C + a4) + 0x2C)) = ((((struct o5C_int *)((0x19C + a4)))->v));
            (((struct o4_float *)((0x18C + a4)))->v) = ((((struct oC_float *)((0x18C + a4)))->v));
        }
    }
    t0 = *(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x4));
    if (t0 != -3) {
        if (t0 != -1) {
            if (t0 != -2) {
                (((struct o2C8_uint *)(a4))->v) = (((((struct o2C8_int *)(a4))->v)) + 0x80);
                FUN_0c054c90(a4);
                t0 = 0x0;
            } else {
                (((struct o2C8_uint *)(a4))->v) = ((((((*(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x5))) << 2) << 2) << 2) << 1) + ((((struct o2CC_int *)(a4))->v)));
                FUN_0c054c90(a4);
                t0 = 0xFFFFFFFE;
            }
            t1 = t0;
        } else {
            if ((*(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x5))) == -1) {
                FUN_0c052364((*(signed char *)((a4 + 0x0))), 0xFFFFFFFF);
            } else {
                FUN_0c054c90(a4);
            }
            t1 = 0xFFFFFFFF;
        }
        t0 = t1;
    } else {
        FUN_0c0522e2(a4, (*(int *)((((*(signed char *)((((((struct o2C8_int *)(a4))->v)) + 0x5))) << 2) + 0xC241B54))));
        t0 = 0xFFFFFFFD;
    }
    return t0;
}
