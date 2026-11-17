/* game/hit: functions 0C01FAA0-0C021470, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01cd62(int, int);
int FUN_0c01fbdc(void);
int FUN_0c01fd10(void);
int FUN_0c0206d6(void);
int FUN_0c020be4(int);
int FUN_0c02c95e(void);
int FUN_0c05aab6(int, int);
int FUN_0c183480(int, int, int);
int FUN_0c18353e(int, int, int);
int FUN_0c1837cc(int, int);
int FUN_0c1878f0(int);
extern int FUN_0c187990();
int FUN_0c187d88(int);
int FUN_0c187d98(int, int, int);
int FUN_0c020168(void);
int FUN_0c0203e0(void);
int FUN_0c021198(int a4);

int FUN_0c020168(void)
{
    int stk[4];
    register int t2;
    register int t6;
    register int t11;
    register int t15;
    register int t23;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t31;
    register int t33;
    register int t42;
    register int t47;
    register int t51;
    register int t59;
    register int t61;
    register int t62;
    register int t63;
    register int t64;
    register int t65;
    register int t67;
    register int t69;
    register int t70;
    register int t34;
    int t4;
    register int t19;
    register int t20;
    int t40;
    register int t55;
    register int t56;

    *(unsigned int *)0xC83C6C0 = 0x1;
    FUN_0c01fbdc();
    if ((*(signed char *)0xC3054C4) == 1) {
        t2 = *(short *)0xC3052C6;
        *(unsigned short *)0xC3052C6 = (t2 - 1);
        if ((int)(short)(t2 - 1) < 0) {
            (((struct o0_uchar *)0xC309858)->v) = 0x15;
            (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF0;
            t34 = (((int (*)(void))(FUN_0c187990))());
        } else {
            for (;;) {
                t6 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 0), 0x1);
                if (t6 == 0) {
                    break;
                }
                t4 = (*(signed char *)(((int)stk + 0)));
                if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t4))) & 0x7) == 0) && ((t4 != 10) && (t4 != 13))) continue;
                if ((t4 != 10) && (t4 != 13)) {
                    t11 = *(int *)0xC3054C0;
                    *(unsigned int *)0xC3054C0 = (t11 + 0x1);
                    *(unsigned char *)((0xC305440 + ((t11 + 0x1) - 1))) = (*(signed char *)(((int)stk + 0)));
                    continue;
                }
                *(unsigned char *)((0xC305440 + (*(int *)0xC3054C0))) = 0x0;
                if ((*(int *)0xC3054C0) != 0) {
                    t15 = ((int (*)(int, int, int))(FUN_0c187990))(0xC3054C0, 0x0, 0xC305440);
                } else {
                    t19 = 0xC3054C0;
                    t20 = 0x0;
                }
                *(unsigned int *)((t19 + 0x0)) = t20;
                t4 = 0xC187D98;
                t23 = FUN_0c187d98(0xC305440, 0xC1A894C, 0x7);
                if (t23 == 0) {
                    (((struct oA_uchar *)0xC309858)->v) = 0x1;
                    (((struct o0_uchar *)0xC309858)->v) = ((*(signed char *)0xC309858) + 0x1);
                    return t23;
                }
                t25 = FUN_0c187d98(0xC305440, 0xC1A8940, 0x9);
                if (t25 == 0) {
                    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF0;
                    (((struct o0_uchar *)0xC309858)->v) = 0x15;
                    return t25;
                }
                t26 = FUN_0c187d98(0xC305440, 0xC1A8954, 0x4);
                if (t26 == 0) {
                    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFD;
                    (((struct o0_uchar *)0xC309858)->v) = 0x15;
                    return t26;
                }
                t27 = FUN_0c187d98(0xC305440, 0xC1A895C, 0x7);
                if (t27 == 0) {
                    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFC;
                    (((struct o0_uchar *)0xC309858)->v) = 0x15;
                    return t27;
                }
                t28 = FUN_0c187d98(0xC305440, 0xC1A8964, 0xB);
                if (t28 == 0) {
                    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFB;
                    (((struct o0_uchar *)0xC309858)->v) = 0x15;
                    return t28;
                }
                t29 = FUN_0c187d98(0xC305440, 0xC1A8970, 0x4);
                if (t29 != 0) continue;
                (((struct oA_uchar *)0xC309858)->v) = 0x2;
                FUN_0c1878f0(0x2);
                t31 = FUN_0c187d88((((int)stk + 0) + 0x4));
                t33 = FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0x4), t31);
                *(unsigned short *)0xC3052C6 = 0x1770;
                return t33;
            }
            (((struct oA_uchar *)0xC309858)->v) = 0x0;
            t34 = t6;
        }
        t70 = t34;
    } else {
        for (;;) {
            t42 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 0), 0x1);
            if (t42 == 0) {
                break;
            }
            t40 = (*(signed char *)(((int)stk + 0)));
            if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t40))) & 0x7) == 0) && ((t40 != 10) && (t40 != 13))) continue;
            if ((t40 != 10) && (t40 != 13)) {
                t47 = *(int *)0xC3054C0;
                *(unsigned int *)0xC3054C0 = (t47 + 0x1);
                *(unsigned char *)((0xC305440 + ((t47 + 0x1) - 1))) = (*(signed char *)(((int)stk + 0)));
                continue;
            }
            *(unsigned char *)((0xC305440 + (*(int *)0xC3054C0))) = 0x0;
            if ((*(int *)0xC3054C0) != 0) {
                t51 = ((int (*)(int, int, int))(FUN_0c187990))(0xC3054C0, 0x0, 0xC305440);
            } else {
                t55 = 0xC3054C0;
                t56 = 0x0;
            }
            *(unsigned int *)((t55 + 0x0)) = t56;
            t59 = FUN_0c187d98(0xC305440, 0xC1A894C, 0x7);
            if (t59 == 0) {
                (((struct oA_uchar *)0xC309858)->v) = 0x1;
                (((struct o0_uchar *)0xC309858)->v) = ((*(signed char *)0xC309858) + 0x1);
                return t59;
            }
            t61 = FUN_0c187d98(0xC305440, 0xC1A8940, 0x9);
            if (t61 == 0) {
                (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF0;
                (((struct o0_uchar *)0xC309858)->v) = 0x15;
                return t61;
            }
            t62 = FUN_0c187d98(0xC305440, 0xC1A8954, 0x4);
            if (t62 == 0) {
                (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFD;
                (((struct o0_uchar *)0xC309858)->v) = 0x15;
                return t62;
            }
            t63 = FUN_0c187d98(0xC305440, 0xC1A895C, 0x7);
            if (t63 == 0) {
                (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFC;
                (((struct o0_uchar *)0xC309858)->v) = 0x15;
                return t63;
            }
            t64 = FUN_0c187d98(0xC305440, 0xC1A8964, 0xB);
            if (t64 == 0) {
                (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFFB;
                (((struct o0_uchar *)0xC309858)->v) = 0x15;
                return t64;
            }
            t65 = FUN_0c187d98(0xC305440, 0xC1A8970, 0x4);
            if (t65 != 0) continue;
            (((struct oA_uchar *)0xC309858)->v) = 0x2;
            FUN_0c1878f0(0x2);
            t67 = FUN_0c187d88((((int)stk + 0) + 0x4));
            t69 = FUN_0c18353e((*(int *)0xC305430), (((int)stk + 0) + 0x4), t67);
            *(unsigned short *)0xC3052C6 = 0x1770;
            return t69;
        }
        (((struct oA_uchar *)0xC309858)->v) = 0x0;
        t70 = t42;
    }
    return t70;
}

int FUN_0c0203e0(void)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t4;
    register int t8;
    register int t13;
    register int t16;
    register int t17;
    register int t19;
    register int t22;
    register int t24;
    register int t32;
    register int t34;
    register int t36;
    register int t47;
    register int t39;
    register int t5;
    int t6;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t1 = FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    if ((*(signed char *)0xC30543E) != 0) {
        t3 = *(signed char *)0xC309850;
        t4 = *(int *)((0xC309830 + (t3 << 2)));
        *(unsigned int *)((0xC309830 + (t3 << 2))) = (t4 + 0x1);
        if ((int)(t4 + 0x1) > (int)0xF0) {
            (((struct o8_uchar *)0xC309850)->v) = 0x10;
            (((struct o12_uchar *)0xC309850)->v) = 0xFFFFFFFA;
            t39 = (t3 << 2);
        } else {
            *(unsigned int *)(((int)stk + 20)) = 0xC30983C;
            *(unsigned int *)(((int)stk + 16)) = 0xC309840;
            *(unsigned int *)(((int)stk + 12)) = 0xC309830;
            *(unsigned int *)(((int)stk + 24)) = 0xC309834;
            *(unsigned int *)(((int)stk + 8)) = 0xC309838;
            for (;;) {
                t8 = FUN_0c183480((*(int *)0xC305430), ((int)stk + 4), 0x1);
                if (t8 == 0) {
                    break;
                }
                t6 = (*(signed char *)(((int)stk + 4)));
                if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)t6))) & 0x7) == 0) && ((t6 != 10) && (t6 != 13))) continue;
                t5 = 0xC305440;
                if ((t6 != 10) && (t6 != 13)) {
                    t13 = *(int *)0xC3054C0;
                    *(unsigned int *)0xC3054C0 = (t13 + 0x1);
                    *(unsigned char *)((t5 + ((t13 + 0x1) - 1))) = (*(signed char *)(((int)stk + 4)));
                    continue;
                }
                t6 = 0xC187D98;
                *(unsigned char *)((t5 + (*(int *)0xC3054C0))) = 0x0;
                *(unsigned int *)0xC3054C0 = 0x0;
                t16 = FUN_0c187d98(t5, 0xC1A8988, 0x4);
                if (t16 == 0) {
                    t17 = *(signed char *)0xC309850;
                    t6 = 0xC187D88;
                    t5 = 0xC18353E;
                    (((struct o0_uchar *)0xC309850)->v) = (t17 + 0x1);
                    if ((int)(signed char)((t17 + 0x1) - 1) < (int)0x3) {
                        FUN_0c1878f0(0x3);
                        t19 = FUN_0c187d88((((int)stk + 4) + 0x18));
                        FUN_0c18353e((*(int *)0xC305430), (((int)stk + 4) + 0x18), t19);
                        t22 = *(signed char *)0xC309850;
                        *(unsigned int *)((0xC309830 + (t22 << 2))) = 0x0;
                        (((struct o12_uchar *)0xC309850)->v) = 0x0;
                        return (t22 << 2);
                    }
                    t24 = (*(int *)(((int)stk + 20)));
                    *(int *)((int)stk + 0) = t24;
                    t32 = (int)((int)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))) + (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))) + 0x3) / (int)0x6);
                    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x0)) = t32;
                    *(unsigned int *)((t24 + 0x0)) = t32;
                    FUN_0c1878f0(0x6);
                    t34 = FUN_0c187d88((((int)stk + 4) + 0x18));
                    t36 = FUN_0c18353e((*(int *)0xC305430), (((int)stk + 4) + 0x18), t34);
                    (((struct o8_uchar *)0xC309850)->v) = ((*(signed char *)0xC309858) + 0x1);
                    (((struct o8_uchar *)0xC309850)->v) = ((*(signed char *)0xC309858) + 0x1);
                    (((struct o12_uchar *)0xC309850)->v) = 0x0;
                    return t36;
                }
            }
            (((struct o12_uchar *)0xC309850)->v) = 0x0;
            t39 = t8;
        }
        t47 = t39;
    } else {
        (((struct o8_uchar *)0xC309850)->v) = 0x10;
        (((struct o12_uchar *)0xC309850)->v) = 0xFFFFFFFA;
        t47 = t1;
    }
    return t47;
}

int FUN_0c021198(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_5 = a4;
    FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
    v0_0 = (0x2);
    v0_1 = (0x1);
    v0_2 = (0xC30541B);
    v0_3 = (0xC305419);
    v0_4 = (0xC309993);
    if (((*(signed char *)0xC30543E) == 0)) goto L_C0211CE;
    if (((*(signed char *)0xC309828) != 0)) goto L_C0211F4;
    L_C0211CE:;
    (((struct o30_uchar *)0xC309830)->v) = ((*(signed char *)0xC309860) + 0x1);
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_6 = ((FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x4)));
    L_C02145C:;
    return v0_6;
    L_C0211F4:;
    v0_5 = FUN_0c0206d6();
    v0_6 = (v0_5);
    if ((v0_5 != 0)) goto L_C021200;
    goto L_C02145C;
    L_C021200:;
    v0_7 = ((((struct o0_short *)0xC30540E)->v)) == 0;
    v0_6 = ((FUN_0c020be4((*(signed char *)0xC3054C4))));
    v0_5 = (0xC30540E);
    if (v0_7) goto L_C021216;
    *(unsigned short *)((v0_5 + 0x0)) = ((*(short *)((v0_5 + 0x0))) - 1);
    goto L_C02145C;
    L_C021216:;
    v0_5 = ((*(signed char *)0xC305420));
    v0_8 = (0xC309E07);
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C021280;
    *(unsigned char *)(((int)stk + 4)) = v0_5;
    *(unsigned char *)(((int)stk + 5)) = (*(signed char *)((v0_8 + 0x0)));
    L_C02128A:;
    v0_7 = (0x0);
    L_C02128C:;
    if (!(((*(signed char *)((v0_2 + v0_7))) == 0))) goto L_C0213B0;
    *(unsigned char *)(((int)stk + 0)) = (v0_7 << 1);
    v0_5 = (short)(FUN_0c01cd62((v0_7 << 1), 0x101)) == 0;
    v0_6 = (0xC01CD62);
    if (v0_5) goto L_C021330;
    v0_9 = *(signed char *)0xC30541F;
    v0_6 = (v0_9);
    v0_5 = ((v0_7 + v0_2));
    v0_8 = ((((((((v0_7 << 1) << 2) + (v0_7 << 1)) << 2) << 1) + 0xC5426C4) + 0x28));
    if ((v0_9 == 2)) goto L_C0212D6;
    if ((v0_6 == 3)) goto L_C0212EA;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_3 + v0_7))) + 0x1);
    goto L_C021322;
    L_C0213B0:;
    v0_5 = (int)(v0_7 + 0x1) >= (int)v0_0;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C0213BA;
    goto L_C02128C;
    L_C0213BA:;
    v0_5 = (0xC30EFA8);
    if (((*(int *)0xC30EFA8) == 0)) goto L_C0213E6;
    v0_6 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)((v0_5 + 0x0)) = (v0_6 - 1);
    if (((v0_6 - 1) != 0)) goto L_C0213E6;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x4);
    L_C0213E6:;
    v0_5 = (0xC30540C);
    if (((*(signed char *)((v0_2 + 0x0))) != 1)) goto L_C021426;
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_4);
    if ((v0_4 != 1)) goto L_C021426;
    v0_0 = *(short *)((v0_5 + 0x0));
    *(unsigned short *)((v0_5 + 0x0)) = (v0_0 - 1);
    if (((short)(v0_0 - 1) != 0)) goto L_C02145C;
    FUN_0c01fd10();
    FUN_0c02c95e();
    v0_0 = (int)((int)(((((((struct o0_int *)0xC309830)->v)) + ((((struct o4_int *)0xC309830)->v))) + ((((struct o8_int *)0xC309830)->v))) + 0x3) / (int)0x6);
    (((struct o10_uint *)0xC309830)->v) = v0_0;
    (((struct oC_uint *)0xC309830)->v) = v0_0;
    v0_6 = (v0_0);
    goto L_C02145C;
    L_C021426:;
    if (((*(signed char *)((v0_2 + 0x0))) == 2)) goto L_C021432;
    v0_4 = *(signed char *)((v0_2 + 0x1));
    v0_6 = (v0_4);
    if ((v0_4 != 2)) goto L_C02145C;
    L_C021432:;
    *(unsigned char *)((v0_3 + 0x1)) = v0_1;
    *(unsigned char *)((v0_3 + 0x0)) = v0_1;
    *(unsigned char *)((v0_2 + 0x1)) = v0_0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_1 = *(short *)((v0_5 + 0x0));
    *(unsigned short *)((v0_5 + 0x0)) = (v0_1 - 1);
    v0_6 = (v0_0);
    if (((short)(v0_1 - 1) != 0)) goto L_C02145C;
    (((struct o30_uchar *)0xC309830)->v) = ((*(signed char *)0xC309860) + 0x1);
    (((struct o8_uchar *)0xC30540E)->v) = 0x0;
    goto L_C02145C;
    L_C021322:;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x3);
    goto L_C0213B0;
    L_C0212EA:;
    if (((*(signed char *)((((((int)stk + 0) + 0x4) + v0_7) + 0x0))) == 0)) goto L_C02130A;
    if (((*(int *)((v0_8 + 0x0))) != 0)) goto L_C02130A;
    if (((*(signed char *)((v0_3 + v0_7))) == 0)) goto L_C0213B0;
    L_C021306:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_0;
    goto L_C021322;
    L_C02130A:;
    *(unsigned char *)((v0_5 + 0x0)) = ((*(signed char *)((v0_3 + v0_7))) + 0x1);
    goto L_C021322;
    L_C0212D6:;
    if (((*(int *)((v0_8 + 0x0))) != 0)) goto L_C02130A;
    if (((*(signed char *)((v0_3 + v0_7))) != 0)) goto L_C021306;
    goto L_C0213B0;
    L_C021330:;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x40)) != 0;
    if (v0_5) goto L_C021346;
    if (!(((int)(*(short *)0xC309BCA) < (int)0xA))) goto L_C021346;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x800)) == 0;
    if (v0_5) goto L_C02138C;
    if (((*(signed char *)((v0_7 + 0xC305419))) != 1)) goto L_C02138C;
    *(unsigned char *)((v0_3 + v0_7)) = 0x0;
    goto L_C0213A6;
    L_C021346:;
    *(unsigned char *)((v0_3 + v0_7)) = v0_1;
    goto L_C0213B0;
    L_C0213A6:;
    FUN_0c05aab6(((*(signed char *)((v0_4 + 0x0))) << 1), 0x5);
    goto L_C0213B0;
    L_C02138C:;
    v0_5 = (short)(FUN_0c01cd62((*(signed char *)(((int)stk + 0))), 0x400)) == 0;
    if (v0_5) goto L_C0213B0;
    if (((*(signed char *)((v0_7 + 0xC305419))) != 0)) goto L_C0213B0;
    *(unsigned char *)((v0_3 + v0_7)) = v0_1;
    goto L_C0213A6;
    L_C021280:;
    *(unsigned char *)(((int)stk + 5)) = v0_5;
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((v0_8 + 0x0)));
    goto L_C02128A;
}
