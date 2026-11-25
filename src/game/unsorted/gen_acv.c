/* Straight-line functions with calls and guards (batch gen_acv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c106510(void);
int FUN_0c11309e(void);
int FUN_0c113142(void);
int FUN_0c114be2(void);
int FUN_0c114ff0(void);
int FUN_0c1173a0(void);
int FUN_0c118412(int);
int FUN_0c11e964(int);
int FUN_0c114c34(void);

int FUN_0c114c34(void)
{
    int stk[15];
    register int t0;
    register int t1;
    register int t7;
    register int t27;
    register int t34;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t62;
    register int t63;
    register int t76;
    register int t92;
    register int t93;
    register int t94;
    register int t112;
    register int t113;
    register int t131;
    register int t132;
    register int t150;
    register int t151;
    register int t166;
    register int t18;
    register int t41;
    register int t42;
    int t43;
    register int t45;
    register int t111;
    register int t130;
    register int t149;
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;
    register int R1020;
    register int R1024;
    register int R1028;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 20);
    R1028 = *(int *)((int)stk + 24);

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 == 1) {
            t1 = *(signed char *)0xC541F46;
            if ((unsigned char)t1 != 0) {
                t18 = (unsigned char)t1;
                if ((unsigned char)t1 != 1) {
                } else {
                    t7 = *(signed char *)((0x14 + ((((struct o0_int *)0xC474C0C)->v))));
                    t18 = t7;
                    if (t7 == 99) {
                        (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                        (((struct o1_uchar *)0xC541F45)->v) = 0x0;
                        t18 = 0x0;
                    }
                }
            } else {
                (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
                t18 = FUN_0c114be2();
                (((struct o0_uint *)0xC474C0C)->v) = t18;
            }
            return t18;
        }
        if ((unsigned char)t0 == 2) {
            t27 = *(signed char *)0xC541F46;
            if ((unsigned char)t27 != 0) {
                if ((unsigned char)t27 != 1) {
                    if ((unsigned char)t27 != 2) {
                        return (unsigned char)t27;
                    }
                    FUN_0c114ff0();
                    return FUN_0c106510();
                }
                t34 = *(signed char *)((0x14 + ((((struct o8_int *)0xC474C0C)->v))));
                if (t34 == 99) {
                    (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
                    (((struct o8_uint *)0xC474C0C)->v) = 0x0;
                }
                return t34;
            }
            (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
            if ((((((struct o0_int *)0xC47477C)->v)) == 0) && ((t41 = (((struct o4_int *)0xC47477C)->v), t41 == 0) && ((t42 = (((struct o8_int *)0xC47477C)->v), t42 == 0) && (t43 = (((struct oC_int *)0xC47477C)->v), t43 == 0)))) {
                (((struct o1_uchar *)0xC541F45)->v) = 0x2;
                t45 = 0x2;
            } else {
                t45 = FUN_0c11309e();
                (((struct o8_uint *)0xC474C0C)->v) = t45;
            }
            return t45;
        }
        return (unsigned char)t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    t54 = FUN_0c11e964(0x200100);
    (((struct o0_uint *)0xC473A2C)->v) = 0x0;
    (((struct o4_uint *)0xC473A2C)->v) = 0x0;
    (((struct o8_uint *)0xC473A2C)->v) = 0x0;
    (((struct oC_uint *)0xC473A2C)->v) = 0x0;
    t55 = 0xC4739AC;
    for (;;) {
        t56 = t55;
        t57 = 0x0;
        for (;;) {
            t57 = (t57 + 0x1);
            *(unsigned int *)((t56 + 0x0)) = 0x0;
            t56 = (t56 + 0x4);
            if ((int)t57 >= (int)0x8) {
                break;
            }
        }
        t55 = (t55 + 0x20);
        if ((unsigned int)t55 >= (unsigned int)0xC473A2C) {
            break;
        }
    }
    R1004 = 0x0;
    R1028 = 0xC473A2C;
    R1020 = 0xC27B588;
    R1024 = 0xC4739AC;
    t58 = t54;
    t59 = t56;
    t60 = t55;
    t61 = t57;
    t62 = 0xC473A2C;
    t63 = 0x80;
    for (;;) {
        if ((int)(R1004) >= (int)((((struct o0_int *)0xC474714)->v))) {
            break;
        }
        t60 = 0x0;
        R1012 = (((R1004) << 2) + 0xC474410);
        for (;;) {
            t62 = (R1020);
            t59 = 0x0;
            t61 = (R1024);
            t63 = (R1028);
            for (;;) {
                t58 = t59;
                t58 = (t58 << 2);
                t58 = (t58 << 1);
                if (((*(int *)(((R1012) + 0x0))) + 0x1) == (unsigned char)(*(signed char *)((((0xC27B588 + t58) + t60) + 0x0)))) {
                    t58 = t59;
                    t58 = (t58 << 2);
                    t58 = (t58 + 0xC473A2C);
                    R1016 = t58;
                    t58 = (*(int *)((t58 + 0x0)));
                    R1008 = t61;
                    t58 = (t58 << 2);
                    t76 = (t58 + t61);
                    t58 = t60;
                    *(unsigned int *)((t76 + 0x0)) = (unsigned char)(*(signed char *)((t62 + t58)));
                    t58 = (R1008);
                    if ((*(int *)((((*(int *)(((R1016) + 0x0))) << 2) + t58))) != 0) {
                        *(unsigned int *)((t63 + 0x0)) = ((*(int *)((t63 + 0x0))) + 0x1);
                    }
                }
                t59 = (t59 + 0x1);
                t63 = (t63 + 0x4);
                t62 = (t62 + 0x8);
                t61 = (t61 + 0x20);
                if ((int)t59 >= (int)0x4) {
                    break;
                }
            }
            t60 = (t60 + 0x1);
            if ((int)t60 >= (int)0x8) {
                break;
            }
        }
        R1004 = ((R1004) + 0x1);
    }
    t92 = FUN_0c11e964(0x8100);
    (((struct o0_uint *)0xC47477C)->v) = 0x0;
    t93 = (((struct o0_int *)0xC474714)->v);
    if (t93 != 0) {
        t94 = 0x0;
        for (;;) {
            if ((int)t94 >= (int)((((struct o0_int *)0xC473A2C)->v))) {
                break;
            }
            t92 = t94;
            t93 = (*(int *)0xC474410);
            t92 = (t92 << 2);
            t93 = (t93 + 0x1);
            if ((*(int *)((0xC4739AC + t92))) == t93) {
                t93 = t94;
                t93 = (t93 + 0x1);
                (((struct o0_uint *)0xC47477C)->v) = t93;
            }
            t94 = (t94 + 0x1);
        }
    }
    FUN_0c11e964(0x10100);
    (((struct o4_uint *)0xC47477C)->v) = 0x0;
    t112 = (((struct o0_int *)0xC474714)->v);
    if (t112 != 0) {
        t113 = 0x0;
        for (;;) {
            if ((int)t113 >= (int)((((struct o8_int *)0xC473A2C)->v))) {
                break;
            }
            t112 = (*(int *)0xC474410);
            t112 = (t112 + 0x1);
            if (((((struct o40_int *)(((t113 << 2) + 0xC4739AC)))->v)) == t112) {
                t111 = t113;
                t111 = (t111 + 0x1);
                (((struct o4_uint *)0xC47477C)->v) = t111;
            }
            t113 = (t113 + 0x1);
        }
    }
    FUN_0c11e964(0x20100);
    (((struct o8_uint *)0xC47477C)->v) = 0x0;
    t131 = (((struct o0_int *)0xC474714)->v);
    if (t131 != 0) {
        t132 = 0x0;
        for (;;) {
            if ((int)t132 >= (int)((((struct o4_int *)0xC473A2C)->v))) {
                break;
            }
            t131 = (*(int *)0xC474410);
            t131 = (t131 + 0x1);
            if ((*(int *)((((t132 << 2) + 0xC4739AC) + 0x20))) == t131) {
                t130 = t132;
                t130 = (t130 + 0x1);
                (((struct o8_uint *)0xC47477C)->v) = t130;
            }
            t132 = (t132 + 0x1);
        }
    }
    FUN_0c11e964(0x40100);
    (((struct oC_uint *)0xC47477C)->v) = 0x0;
    t150 = (((struct o0_int *)0xC474714)->v);
    if (t150 != 0) {
        t151 = 0x0;
        for (;;) {
            if ((int)t151 >= (int)((((struct oC_int *)0xC473A2C)->v))) {
                break;
            }
            t150 = (*(int *)0xC474410);
            t150 = (t150 + 0x1);
            if (((((struct o60_int *)(((t151 << 2) + 0xC4739AC)))->v)) == t150) {
                t149 = t151;
                t149 = (t149 + 0x1);
                (((struct oC_uint *)0xC47477C)->v) = t149;
            }
            t151 = (t151 + 0x1);
        }
    }
    R1008 = 0xC473D04;
    t166 = 0xC473D04;
    for (;;) {
        *(unsigned int *)((t166 + 0x0)) = (((((*(int *)((t166 + 0x0))) & 0xFFFFFFBF) & 0xFFFFFF7F) & 0xFFFFFEFF) & 0xFFFFFDFF);
        t166 = (t166 + 0x4);
        if ((unsigned int)t166 >= (unsigned int)0xC474004) {
            break;
        }
    }
    *(int *)((int)stk + 56) = 0xFFFFFF7F;
    *(unsigned char *)0xC5397B0 = 0x1;
    *(unsigned char *)0xC535BAC = 0x0;
    (((struct o14_uchar *)(((((struct o1C_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o14_uchar *)(((((struct o20_int *)0xC474B8C)->v))))->v) = 0x1E;
    (((struct o2C_uint *)0xC474B8C)->v) = (FUN_0c113142());
    (((struct o34_uint *)0xC474714)->v) = 0x0;
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x3));
    (((struct o4_uint *)0xC474714)->v) = 0x5;
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x32;
    return 0x14;
}
