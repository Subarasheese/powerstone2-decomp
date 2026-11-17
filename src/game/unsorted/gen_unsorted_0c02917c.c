/* game/unsorted: functions 0C02917C-0C0298C2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
int FUN_0c013ee0(void);
int FUN_0c013fe8(void);
int FUN_0c014a68(void);
int FUN_0c015844(int, int, int, int, int, int, int, int, int);
int FUN_0c0185b4(void);
int FUN_0c018e9c(int, int);
int FUN_0c01b0fc(void);
int FUN_0c01c5ac(int, float, float);
int FUN_0c01c81e(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int a4, int a5, int a6);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c02c324(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c05aab6(int, int);
int FUN_0c05b048(int, int);
int FUN_0c101d38(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int FUN_0c02917c(void);
int FUN_0c029220(void);
int FUN_0c02932a(void);
int FUN_0c029508(void);
int FUN_0c02968a(int a4, int a5);

int FUN_0c02917c(void)
{
    int stk[99];
    register int t0;
    register int t21;
    int t3;

    t0 = FUN_0c022050();
    t21 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 103) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 1)) {
            FUN_0c1864e0((*(int *)0xC309994), 0xC309993, 0x1);
            (((struct o0_uchar *)0xC309993)->v) = ((*(signed char *)0xC309993) - 1);
            *(unsigned int *)0xC30A3F8 = ((*(int *)0xC30A3F8) + 0x1);
            (((struct o12_uchar *)0xC30540C)->v) = 0x0;
            (((struct o8_uchar *)0xC30540C)->v) = 0x0;
            (((struct o0_ushort *)0xC30540C)->v) = 0x0;
            (((struct o13_uchar *)0xC30540C)->v) = (*(signed char *)0xC309E06);
            FUN_0c01e9e4();
            FUN_0c01b0fc();
            *(unsigned short *)0xC30EF6C = 0x0;
            t21 = (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t21 = (FUN_0c02aa9e());
            } else {
                t21 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t21;
}

int FUN_0c029220(void)
{
    int stk[100];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register float F0;
    register float F7;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0292BA;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C0292AC;
    return (FUN_0c02aa9e());
    L_C0292AC:;
    v0_0 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    L_C0292BA:;
    v0_1 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (v0_1 + 0x1);
    v0_2 = (0xC30540C);
    if (((int)(short)((v0_1 + 0x1) - 1) >= (int)0x12C)) goto L_C0292E8;
    if (((int)(*(short *)((v0_2 + 0x0))) < (int)0x3C)) goto L_C029320;
    v0_0 = (FUN_0c021ed2()) != 0;
    if (v0_0) goto L_C0292E8;
    v0_1 = FUN_0c021ee2();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C029320;
    L_C0292E8:;
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x6;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x9;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x5)) = (*(signed char *)0xC305420);
    v0_0 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned int *)0xC30A3F8 = ((*(int *)0xC30A3F8) + 0x1);
    v0_0 = (v0_0);
    v0_2 = ((((int)stk + 0) + 0x10));
    L_C029320:;
    return v0_0;
}

int FUN_0c02932a(void)
{
    int stk[102];
    register int t0;
    register int t133;
    register int t2;
    register int t3;
    register int t38;
    register int t64;
    register int t65;
    register int t80;
    register int t81;
    register int t99;
    int t4;
    register int t126;
    int t48;
    register int t120;
    int t72;
    register int t113;
    int t94;

    t0 = FUN_0c022050();
    t133 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 12));
        t3 = *(int *)0xC309994;
        if ((t2 == 101) && (t4 = *(signed char *)(((int)stk + 4)), t4 == 8)) {
            FUN_0c1864e0(t3, (((int)stk + 0) + 0x14), 0x1);
            FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
            t38 = *(signed char *)(((int)stk + 20));
            if (t38 == 1) {
                FUN_0c1864e0((*(int *)0xC309994), 0xC309E07, 0x1);
                (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x77;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x2;
                t126 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            } else {
                *(unsigned int *)0xC30A3F8 = 0x0;
                t126 = t38;
            }
        } else {
            if ((t2 == 103) && (t48 = *(signed char *)(((int)stk + 4)), t48 == 2)) {
                t64 = 0x0;
                t65 = 0xC3099B8;
                for (;;) {
                    if ((int)t64 >= (int)0xE) {
                        break;
                    }
                    FUN_0c1864e0((*(int *)0xC309994), t65, 0x1);
                    t65 = (t65 + 0x1);
                    t64 = (t64 + 0x1);
                }
                (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x76;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x6;
                t120 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            } else {
                if ((t2 == 102) && (t72 = *(signed char *)(((int)stk + 4)), t72 == 6)) {
                    FUN_0c1864e0(t3, (((int)stk + 0) + 0x8), 0x1);
                    t80 = 0x0;
                    for (;;) {
                        t81 = *(signed char *)(((int)stk + 8));
                        if ((int)t80 >= (int)(unsigned char)t81) {
                            break;
                        }
                        FUN_0c1864e0((*(int *)0xC309994), (t80 + 0xC30AA34), 0x1);
                        t80 = (t80 + 0x1);
                    }
                    if ((*(signed char *)0xC309993) == 0) {
                        (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x77;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x3;
                        t113 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                    } else {
                        *(unsigned int *)0xC30A3F8 = 0x7;
                        t113 = (unsigned char)t81;
                    }
                } else {
                    if ((t2 == 103) && (t94 = *(signed char *)(((int)stk + 4)), t94 == 3)) {
                        FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                        t99 = 0x0;
                        for (;;) {
                            if ((int)t99 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
                                break;
                            }
                            FUN_0c1864e0((*(int *)0xC309994), (t99 + 0xC3098E3), 0x1);
                            t99 = (t99 + 0x1);
                        }
                        *(unsigned char *)((t99 + 0xC3098E3)) = 0x0;
                        *(unsigned int *)0xC30A3F8 = 0x7;
                        t113 = 0xC3098E3;
                    } else {
                        if ((*(signed char *)0xC30AF9A) != 0) {
                            t113 = (FUN_0c02aa9e());
                        } else {
                            t113 = (FUN_0c0222a4((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x4)));
                        }
                    }
                }
                t120 = t113;
            }
            t126 = t120;
        }
        t133 = t126;
    }
    return t133;
}

int FUN_0c029508(void)
{
    int stk[33];
    register int t2;
    register int t59;

    *(unsigned int *)0xC30A3F8 = 0x0;
    FUN_0c0573d8();
    FUN_0c05b048(0x1, 0x0);
    t2 = *(signed char *)0xC309859;
    if (t2 != 1) {
        if (t2 != 2) {
            t59 = t2;
            if (t2 == 3) {
            } else {
                if (t2 == 4) {
                    FUN_0c014a68();
                    t59 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
                } else {
                    if (t2 == 7) {
                        FUN_0c014a68();
                        t59 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
                    } else {
                        t59 = t2;
                        if (t2 == 5) {
                        } else {
                            t59 = t2;
                            if (t2 == 6) {
                            } else {
                                if (t2 != 8) {
                                    t59 = t2;
                                    if (t2 == 13) {
                                        t59 = (FUN_0c013ee0());
                                    }
                                } else {
                                    FUN_0c01cc56(0x13, 0xC029FAC);
                                    FUN_0c01cc56(0x1A, 0xC02A4B6);
                                    FUN_0c01c5ac((*(signed char *)0xC309BE4), ((((struct o4_float *)0xC02973C)->v)), ((((struct o0_float *)0xC02973C)->v)));
                                    t59 = (FUN_0c0185b4());
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC30985A) != 6) {
                FUN_0c02bad0();
                t59 = (FUN_0c02bae6());
            } else {
                FUN_0c02c324();
                (((struct o1_uchar *)0xC30985B)->v) = 0x0;
                (((struct o0_uchar *)0xC30985B)->v) = 0x0;
                memset(0xC309D06, 0x0, 0x80);
                *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x74;
                *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x5;
                *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = (*(signed char *)((0xC309E0A + ((short)(*(signed char *)0xC30A34B) * (short)0x86))));
                *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x4)) = ((int)((*(short *)((0xC309E0A + ((short)(*(signed char *)0xC30A34B) * (short)0x86)))) & 0xFF00) >> 8);
                t59 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
            }
        }
    } else {
        t59 = (FUN_0c013fe8());
    }
    return t59;
}

int FUN_0c02968a(int a4, int a5)
{
    int stk[36];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a5;
    v0_7 = *(signed char *)0xC30B700;
    v0_5 = (v0_7);
    v0_1 = (0xC30EF64);
    v0_2 = (0x0);
    v0_4 = (0xC30B702);
    v0_0 = (0xC30B700);
    v0_6 = (0xC30EF6C);
    v0_3 = (0xC30B701);
    if ((v0_7 == 0)) goto L_C0296D0;
    if ((v0_5 == 1)) goto L_C0296DC;
    if ((v0_5 == 2)) goto L_C02970E;
    if ((v0_5 == 3)) goto L_C02976C;
    if ((v0_5 != 4)) goto L_C0296C4;
    v0_1 = *(short *)((v0_6 + 0x0));
    *(unsigned short *)((v0_6 + 0x0)) = (v0_1 + 0x1);
    if (((short)(v0_1 + 0x1) != 16)) goto L_C029836;
    L_C0297EE:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    L_C029836:;
    v0_0 = FUN_0c022050();
    v0_5 = (v0_0);
    if ((v0_0 == 0)) goto L_C0298AE;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C0298A0;
    v0_5 = ((FUN_0c02aa9e()));
    L_C0298AE:;
    return v0_5;
    L_C0298A0:;
    v0_5 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    goto L_C0298AE;
    L_C0296C4:;
    if ((v0_5 != 5)) goto L_C0296CC;
    *(unsigned int *)0xC30A3F8 = 0x3;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0xA;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x6;
    FUN_0c187a88(((((int)stk + 0) + 0x10) + 0x3), 0xC30A34C, 0x6);
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x9)) = 0x1;
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    goto L_C029836;
    L_C0296CC:;
    goto L_C029836;
    L_C02976C:;
    v0_5 = (signed char)(FUN_0c01c81e(0xC30B701, 0x1, 0x2)) == 0;
    v0_6 = (0xC101D38);
    if (v0_5) goto L_C02979A;
    v0_5 = (FUN_0c101d38(0x0)) == 0;
    if (v0_5) goto L_C0297AA;
    v0_5 = (FUN_0c101d38(0x1)) == 0;
    if (v0_5) goto L_C0297AA;
    FUN_0c05aab6(0x0, 0x5);
    L_C0297AC:;
    v0_5 = *(short *)((v0_4 + 0x0));
    *(unsigned short *)((v0_4 + 0x0)) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) > (int)0x258)) goto L_C0297C4;
    v0_4 = (FUN_0c021ed2()) == 0;
    if (v0_4) goto L_C029836;
    L_C0297C4:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    *(unsigned char *)0xC305420 = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    FUN_0c05aab6(0x0, 0x3);
    goto L_C029836;
    L_C0297AA:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    goto L_C0297AC;
    L_C02979A:;
    v0_5 = (FUN_0c101d38(0x0)) == 0;
    if (v0_5) goto L_C0297AA;
    v0_5 = (FUN_0c101d38(0x1)) != 0;
    if (v0_5) goto L_C0297AC;
    goto L_C0297AA;
    L_C02970E:;
    v0_1 = *(short *)((v0_6 + 0x0));
    *(unsigned short *)((v0_6 + 0x0)) = (v0_1 + 0x1);
    if (((int)(short)(v0_1 + 0x1) >= (int)0x20)) goto L_C029720;
    goto L_C0298AE;
    L_C029720:;
    goto L_C0297EE;
    L_C0296DC:;
    v0_5 = *(short *)((v0_4 + 0x0));
    *(unsigned short *)((v0_4 + 0x0)) = (v0_5 - 1);
    if (((int)(short)(v0_5 - 1) <= 0)) goto L_C0296EC;
    goto L_C029836;
    L_C0296EC:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    *(unsigned short *)((v0_4 + 0x0)) = v0_2;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    FUN_0c018e9c(0x1C, 0xC30B701);
    FUN_0c01cb7c();
    goto L_C029836;
    L_C0296D0:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    *(unsigned short *)((v0_4 + 0x0)) = 0x2E;
    goto L_C029836;
}
