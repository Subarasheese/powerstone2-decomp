/* Straight-line functions with calls and guards (batch gen_pc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0cd8b4(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0f3bb4(int, int);
int FUN_0c0f3c7a(int, int);
int FUN_0c0f3d88(int);
int FUN_0c0f3ee4(int);
int FUN_0c0f425c(int);
int FUN_0c0f4414(int);
int FUN_0c0f4448(int);
extern int FUN_0c0f44fc();
int FUN_0c0f4590(int);
int FUN_0c0f45c6(int);
extern int FUN_0c0f460c();
int nlRand(void);
int FUN_0c0f4662(int a4, int a5, int a6, int a7);

int FUN_0c0f4662(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t9;
    register int t12;
    register int t18;
    register int t50;
    register int t51;
    register int t60;
    register int t62;
    register int t67;
    register int t75;
    register int t72;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0f3bb4(a4, (*(signed char *)((a4 + 0x2))));
        FUN_0c0f3c7a(a4, 0x0);
        FUN_0c037bf6(a4);
        (((struct o5C_float *)(a4))->v) = -2.0f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t9 = *(signed char *)((a4 + 0x15));
        switch (t9) {
        case 2:
            FUN_0c0f3ee4(a4);
            break;
        case 1:
            FUN_0c0f4590(a4);
            break;
        case 3:
            FUN_0c0f425c(a4);
            break;
        default:
            if (t9 != 4) {
                if (t9 != 5) {
                    if (t9 != 6) {
                        if (t9 != 7) {
                            if (t9 != 8) {
                                if (t9 != 9) {
                                    FUN_0c0f3d88(a4);
                                } else {
                                    t12 = ((int (*)(int))(FUN_0c0f460c))(a4);
                                }
                            } else {
                                FUN_0c0f45c6(a4);
                            }
                        } else {
                            t18 = ((int (*)(int))(FUN_0c0f44fc))(a4);
                        }
                    } else {
                        FUN_0c0f4448(a4);
                    }
                } else {
                    FUN_0c0f4414(a4);
                }
            }
            break;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t50 = FUN_0c064f80(a4);
        t51 = t50;
        if (t50 != 0) {
            (((struct o50_float *)(a4))->v) = 0.0f;
            t51 = 0x50;
        }
        return t51;
    } else {
        if (t0 == 2) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            R1004 = 0xFFFFFFFF;
            FUN_0c0c2944((*(signed char *)((a4 + 0x2))), 0x0, 0x0, (a4 + 0x28), 0xFFFFFFFF);
            if ((*(signed char *)((a4 + 0x17))) == 0) {
                FUN_0c0cd8b4(a4, (unsigned char)(*(signed char *)(((0x41C + a4) + 0xA))), (a4 + 0x28));
                t60 = *(signed char *)(((0x41C + a4) + 0x4));
                t62 = (int)((int)(nlRand()) % (int)0x65);
                if ((int)(unsigned char)t60 >= (int)t62) {
                    t67 = (int)((int)(nlRand()) % (int)(((unsigned char)(*(signed char *)((((0x41C + a4) + 0x5) + 0x0))) + (unsigned char)(*(signed char *)((((0x41C + a4) + 0x5) + 0x1)))) + (unsigned char)(*(signed char *)((((0x41C + a4) + 0x5) + 0x2)))));
                    if ((int)t67 < (int)(unsigned char)(*(signed char *)(((0x41C + a4) + 0x5)))) {
                        R1004 = 0xFFFFFFFF;
                        t75 = (FUN_0c0c2944(0x12, 0x0, 0x8, (a4 + 0x28), 0xFFFFFFFF));
                    } else {
                        if ((int)t67 < (int)(unsigned char)(*(signed char *)(((0x41C + a4) + 0x6)))) {
                            R1004 = 0xFFFFFFFF;
                            t72 = 0x10;
                        } else {
                            R1004 = 0xFFFFFFFF;
                            t72 = 0x54;
                        }
                        t75 = (FUN_0c0c2944(t72, 0x0, 0x8, (a4 + 0x28), 0xFFFFFFFF));
                    }
                    return t75;
                }
                return FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
            }
            return 0x17;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
