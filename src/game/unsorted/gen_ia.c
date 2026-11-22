/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c070320(int);
int FUN_0c0705e2(int);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c071ae4(int);
int FUN_0c072bd4(int);
int FUN_0c07309e(int);
int FUN_0c07da48(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c091fd6(int);
int FUN_0c092260(int);
int FUN_0c092560(int);
int FUN_0c092834(int);
int FUN_0c092c28(int, int, int, int);
int FUN_0c095620(int);
int FUN_0c0959a2(int, int, int, int);
int FUN_0c096718(int);
int FUN_0c09b334(int);
int FUN_0c09b3dc(int);
int FUN_0c09ebe6(int);
int FUN_0c0ab344(int);
int FUN_0c0ab3e4(int);
int FUN_0c0ab808(int, int, int, int);
int FUN_0c0abbe0(int, int, int, int);
int FUN_0c0abe16(int);
int FUN_0c0ac0ce(int);
int FUN_0c0ac3d0(int);
int FUN_0c0ac9a4(int);
int FUN_0c0acb18(int a4, int a5, int a6, int a7);
int FUN_0c0eedf4(int a4, int a5, int a6, int a7);
int FUN_0c09f9a0(int a4, int a5, int a6, int a7);
int FUN_0c0937a8(int a4, int a5, int a6, int a7);
int FUN_0c096ab4(int a4, int a5, int a6, int a7);
int FUN_0c09c67c(int a4, int a5, int a6, int a7);

int FUN_0c0acb18(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            switch (t0) {
                            case 7:
                                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                                    FUN_0c0ab808(a4, a5, a6, a7);
                                } else {
                                    FUN_0c0abbe0(a4, a5, a6, a7);
                                }
                                FUN_0c07da48(a4);
                                FUN_0c070320(a4);
                                break;
                            case 8:
                                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                                    FUN_0c0abe16(a4);
                                } else {
                                    FUN_0c0ac0ce(a4);
                                }
                                break;
                            case 9:
                                FUN_0c071ae4(a4);
                                break;
                            case 12:
                                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                                    FUN_0c0abe16(a4);
                                } else {
                                    FUN_0c0ac0ce(a4);
                                }
                                break;
                            case 13:
                                *(volatile signed char *)((a4 + 0x371A));
                                FUN_0c0ac3d0(a4);
                                FUN_0c07da48(a4);
                                FUN_0c070320(a4);
                                break;
                            default:
                                if (t0 == 14) {
                                    return FUN_0c07309e(a4);
                                }
                                t0 = FUN_0c037bf6(a4, a5, a6);
                                if ((unsigned char)t0 != 0) {
                                    return FUN_0c085d0c(a4);
                                }
                                FUN_0c038362(a4);
                                FUN_0c07da48(a4);
                                FUN_0c070320(a4);
                                t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                if (t0 != 2) {
                                    return t0;
                                }
                                return FUN_0c085cac(a4, 0x6, 0x0);
                            }
                            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                            if (t0 == 2) {
                                return FUN_0c085cac(a4, 0x6, 0x0);
                            }
                            return t0;
                        }
                        FUN_0c0ab344(a4);
                        FUN_0c07da48(a4);
                        FUN_0c070320(a4);
                    } else {
                        FUN_0c0ac9a4(a4);
                    }
                    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t0 != 2) {
                        return t0;
                    }
                    return FUN_0c085cac(a4, 0x6, 0x0);
                }
                return FUN_0c070980(a4);
            }
            FUN_0c070690(a4, a5, a6);
            FUN_0c07da48(a4);
            FUN_0c070320(a4);
            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        return FUN_0c0ab3e4(a4);
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 2) {
        return t0;
    }
    return FUN_0c085cac(a4, 0x6, 0x0);
}

int FUN_0c0eedf4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, 0x3C, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            t0 = *(signed char *)((a4 + 0x1B));
            *(unsigned int *)((a4 + 0x10)) = (*(int *)(((t0 << 2) + 0xC540D94)));
            t1 = (t0 << 2);
        }
        t0 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 + (0xC4 + a4));
            t1 = (t1 + 0x1);
            *(unsigned short *)((((*(int *)((t0 + 0x0)))) + 0x6)) = 0x21;
        }
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x2)));
    }
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x3C;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) ^ 0x1);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0166666675f);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.0166666675f);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0166666675f);
        if (0.0f > ((((struct oB4_float *)(a4))->v))) {
            (((struct oB4_float *)(a4))->v) = 0.0f;
        }
        if (0.0f > ((((struct oB8_float *)(a4))->v))) {
            (((struct oB8_float *)(a4))->v) = 0.0f;
        }
        if (0.0f > ((((struct oBC_float *)(a4))->v))) {
            (((struct oBC_float *)(a4))->v) = 0.0f;
        }
    } else {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.0166666675f);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) + 0.0166666675f);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0166666675f);
        if (((((struct oB4_float *)(a4))->v)) > 1.0f) {
            (((struct oB4_float *)(a4))->v) = 1.0f;
        }
        if (((((struct oB8_float *)(a4))->v)) > 1.0f) {
            (((struct oB8_float *)(a4))->v) = 1.0f;
        }
        if (((((struct oBC_float *)(a4))->v)) > 1.0f) {
            (((struct oBC_float *)(a4))->v) = 1.0f;
        }
    }
    return 0xBC;
}




