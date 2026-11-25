/* Straight-line functions with calls and guards (batch gen_alh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c02da2e(void);
extern int FUN_0c036de8();
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03eff6(void);
extern int FUN_0c03f40c();
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05a292(int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c05f298(int, int, int);
int FUN_0c05f2e2(int, int);
int FUN_0c05f2fa(void);
int FUN_0c05f332(int, int);
int FUN_0c05f7a0(int);
int FUN_0c0fa57a(int);
int FUN_0c0fe4ec(int);
int FUN_0c101e4c(void);
int FUN_0c102350(void);
int FUN_0c1213d8(int);
int FUN_0c05eeb0(int a4, int a5, int a6);

int FUN_0c05eeb0(int a4, int a5, int a6)
{
    int stk[10];
    register int t0;
    register int t38;
    register int t3;
    register int t6;
    register int t11;
    register int t13;
    register int t33;
    register int t41;
    register int t44;
    register int t47;
    register int t52;
    register int t55;
    int t58;
    register int t59;
    register int t74;
    register int t77;
    register int t85;
    register int t88;
    int t40;
    register int t63;

    t0 = *(signed char *)0xC541F42;
    t38 = 0;
    if ((unsigned char)t0 == 0) {
        (((struct o1_uchar *)0xC541F42)->v) = 0x1;
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t3 = ((int (*)(int))(FUN_0c036de8))(0x14);
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F42)->v) = 0x0;
        (((struct oE_ushort *)0xC541F42)->v) = 0x0;
        FUN_0c03eff6();
        t6 = ((int (*)(int))(FUN_0c036de8))(0x1A);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c0fa57a(0x0);
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c05a292(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        t38 = 2;
    } else if ((unsigned char)t0 != 2) {
        if ((unsigned char)t0 != 3) {
            t11 = (((struct oE_short *)0xC541F42)->v);
            (((struct oE_ushort *)0xC541F42)->v) = (t11 - 1);
            if ((int)(short)(t11 - 1) > 0) {
            } else {
                t13 = (((struct o8_short *)0xC541F42)->v);
                switch (t13) {
                case 0:
                    FUN_0c05f332((unsigned char)(*(signed char *)0xC541F44), 0x2);
                    (((struct o8_uchar *)0xC5429AC)->v) = 0x4;
                    (((struct o2E_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o5_uchar *)0xC5429AC)->v) = 0x0;
                    (((struct o0_uchar *)0xC5429AC)->v) = 0x1;
                    (((struct o2F_uchar *)0xC541F42)->v) = 0x1;
                    (((struct o4_uchar *)0xC5429AC)->v) = 0x1;
                    return (FUN_0c05f7a0(0x2));
                case 1:
                    FUN_0c05f332((unsigned char)(*(signed char *)0xC541F44), 0x4);
                    (((struct o8_uchar *)0xC5429AC)->v) = 0x0;
                    (((struct o2E_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o5_uchar *)0xC5429AC)->v) = 0x0;
                    (((struct o0_uchar *)0xC5429AC)->v) = 0x1;
                    (((struct o2F_uchar *)0xC541F42)->v) = 0x1;
                    (((struct o4_uchar *)0xC5429AC)->v) = 0x1;
                    return (FUN_0c05f7a0(0x2));
                case 2:
                    (((struct o8_uchar *)0xC5429AC)->v) = 0x1;
                    (((struct o2E_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o5_uchar *)0xC5429AC)->v) = 0x0;
                    (((struct o2F_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o4_uchar *)0xC5429AC)->v) = 0x0;
                    FUN_0c102350();
                    FUN_0c101e4c();
                    return (FUN_0c05f7a0(0x2));
                case 3:
                    FUN_0c05f332((unsigned char)(*(signed char *)0xC541F44), 0x1);
                    (((struct o8_uchar *)0xC5429AC)->v) = 0x2;
                    (((struct o2E_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o5_uchar *)0xC5429AC)->v) = 0x0;
                    (((struct o2F_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o4_uchar *)0xC5429AC)->v) = 0x0;
                    (((struct o0_uchar *)0xC5429AC)->v) = 0x0;
                    return (FUN_0c05f7a0(0x2));
                case 4:
                    FUN_0c05f2e2(0x6, 0x1);
                    break;
                case 5:
                    FUN_0c05f2e2(0x2, 0x2);
                    break;
                case 6:
                    FUN_0c05f2e2(0x4, 0x1);
                    break;
                case 7:
                    FUN_0c0fe4ec(0x0);
                    FUN_0c05f2e2(0x5, 0x2);
                    break;
                case 8:
                    FUN_0c05f7a0(0x5);
                    return FUN_0c1213d8(0x0);
                }
            }
        } else {
            t38 = 2;
        }
    } else {
        (((struct o2_uchar *)0xC541F42)->v) = 0x0;
        (((struct oE_ushort *)0xC541F42)->v) = 0x0;
        FUN_0c03eff6();
        t33 = ((int (*)(int))(FUN_0c036de8))(0x1A);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c0fa57a(0x0);
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c05a292(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        t38 = 2;
    }
    if (t38) {
        if (((*(signed char *)0xC541F44) == 0) && (t40 = *(signed char *)0xC541F43, t40 == 0)) {
            t41 = FUN_0c05f22c(0x8000);
            if (t41 == 0) {
            } else {
                (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
            }
        } else {
            (((struct o10_ushort *)0xC541F42)->v) = 0x0;
            t44 = 0x7;
            if ((*(signed char *)0xC5429A8) == 0) {
                t44 = 0x8;
            }
            t47 = FUN_0c05f298(((((struct o8_short *)0xC541F42)->v)), 0x0, t44);
            if (((((struct o8_short *)0xC541F42)->v)) != t47) {
                FUN_0c05aab6(0x0, 0x6);
                (((struct o8_ushort *)0xC541F42)->v) = t47;
            }
            t52 = FUN_0c05f22c(0x101);
            t55 = t52;
            if (t52 == 0) {
                t55 = (FUN_0c05f22c(0x8000));
            }
            if (t55 != 0) {
                t58 = (((struct o8_short *)0xC541F42)->v);
                if ((t58 != 0) && ((t58 != 1) && ((t58 != 2) && (t58 != 3)))) {
                    if ((t58 != 4) && ((t58 != 5) && ((t58 != 6) && (t58 != 7)))) {
                        if (t58 != 8) {
                        } else {
                            t59 = FUN_0c02da2e();
                            if (t59 != 0) {
                                FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x8);
                                (((struct oE_ushort *)0xC541F42)->v) = 0xA;
                                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                                t63 = 0x3;
                            } else {
                                (((struct o10_ushort *)0xC541F42)->v) = 0x1;
                                t63 = 0x4;
                            }
                            FUN_0c05aab6(0x0, t63);
                        }
                    } else {
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x8);
                        (((struct oE_ushort *)0xC541F42)->v) = 0xA;
                        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                        FUN_0c05aab6(0x0, 0x3);
                    }
                } else {
                    FUN_0c0573cc(0xFF000000, 0x0, 0x8);
                    (((struct oE_ushort *)0xC541F42)->v) = 0xA;
                    (((struct o2_uchar *)0xC541F42)->v) = (FUN_0c05f2fa());
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    FUN_0c05aab6(0x0, 0x3);
                }
            } else {
                (((struct oE_ushort *)0xC541F42)->v) = (((((struct oE_short *)0xC541F42)->v)) + 0x1);
                t74 = FUN_0c05f22c(0x3FCF);
                if (t74 != 0) {
                    (((struct oE_ushort *)0xC541F42)->v) = 0x0;
                }
                t77 = FUN_0c05f22c(0x40);
                *(unsigned int *)(((int)stk + 4)) = t77;
                if (t77 != 0) {
                    FUN_0c05aab6((t77 - 1), 0x4);
                    FUN_0c05f7a0(0x1);
                }
                if ((int)((((struct oE_short *)0xC541F42)->v)) < (int)0x708) {
                } else {
                    FUN_0c05f7a0(0x1);
                }
            }
        }
    }
    t85 = ((int (*)(int))(FUN_0c03f40c))(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    t88 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}
