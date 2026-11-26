/* Straight-line functions with calls and guards (batch gen_lq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
int FUN_0c036de8(int);
int FUN_0c03eff6(void);
int FUN_0c05e59a(int, int);
int FUN_0c05e5ca(int, int, int);
int FUN_0c05e604(int, int, int);
int FUN_0c05ea5e(int, int);
int FUN_0c15ecc6(int);
int FUN_0c05ea98(void);

int FUN_0c05ea98(void)
{
    int stk[4];
    register int t0;
    register int t6;
    register int t40;
    register int t65;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 == 0) {
        (((struct o0_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F44) + 0x1);
        (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        FUN_0c05e59a(0xC257AAC, 0x3);
        FUN_0c05e604(0xB, 0x5, 0xC257ACC);
        t6 = *(signed char *)0xC541F45;
        if ((unsigned char)t6 != 0) {
            if ((unsigned char)t6 != 1) {
                if ((unsigned char)t6 != 2) {
                    if ((unsigned char)t6 != 3) {
                        if ((unsigned char)t6 != 4) {
                            if ((unsigned char)t6 != 5) {
                                if ((unsigned char)t6 != 6) {
                                    if ((unsigned char)t6 != 7) {
                                        if ((unsigned char)t6 != 8) {
                                            if ((unsigned char)t6 != 9) {
                                                if ((unsigned char)t6 != 10) {
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
        t40 = *(signed char *)0xC5429AD;
        (((struct o20_uchar *)0xC5429A8)->v) = t40;
        (((struct o27_uchar *)0xC541F44)->v) = t40;
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
        t65 = *(short *)0xC542700;
        if (((unsigned short)t65 & 0x200) != 0) {
            FUN_0c03eff6();
            *(unsigned char *)0xC5421DE = ((*(signed char *)0xC5421DE) + 0x1);
            FUN_0c036de8(0x10);
            return FUN_0c15ecc6(0x3C);
        }
        return (unsigned short)t65;
    } else {
        return (unsigned char)t0;
    }
}
