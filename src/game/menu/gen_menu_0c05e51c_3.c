/* game/menu: functions 0C05E51C-0C05EDC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c052c00(int, int, int);
int FUN_0c05a2b8(int, int, int, int, int);
int FUN_0c05e59a(int, int);
int FUN_0c05e5ca(int, int, int);
int FUN_0c05e604(int, int, int);
int FUN_0c05ea5e(int, int);
int thunk_FUN_0c06494c(void);
int FUN_0c0674f4(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c0cf944(int);
int FUN_0c15ecc6(int);
int FUN_0c187798(void);
void FUN_0c05e87c(void);
int FUN_0c05ea98(void);


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
