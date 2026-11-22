/* Straight-line functions with calls and guards (batch gen_jt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
extern int FUN_0c18c9fc();
int FUN_0c19114c(int);
int FUN_0c1912dc(int, int, int, int, int, int);
int FUN_0c19133a(int);
int FUN_0c19139e(int, int);
int FUN_0c19141c(int, int);
int FUN_0c191454(int, int, int, int, int, int, int);
int FUN_0c1914ec(void);
int FUN_0c191d9e(void);
int FUN_0c191dae(void);
int FUN_0c191dbc(int);
int FUN_0c191ea4(int, int, int);
int FUN_0c191f06(int, int, int, int);
int FUN_0c1921f0(void);
int FUN_0c1927c8(void);
int FUN_0c192f54(int, int);
int FUN_0c193120(int, int);
int FUN_0c19337c(int);
int FUN_0c193a72(void);
int FUN_0c193b80(void);
int FUN_0c193b96(int, int);
int FUN_0c193bfe(int);
int memcpy(int, int, int);
int memset(int, int, int);
int thunk_FUN_0c1831d0(void);
int thunk_FUN_0c191de2(void);
int FUN_0c1844f0(void);
int FUN_0c193900(int a4);
int FUN_0c193846(int a4, int a5, int a6);
int FUN_0c1937ca(int a4);
int FUN_0c191190(int a4, int a5, int a6, int a7);
int FUN_0c191108(int a4);
int FUN_0c184442(void);
int FUN_0c191e44(void);
int FUN_0c191e30(void);

int FUN_0c1844f0(void)
{
    int stk[17];

    register int R1;
    register int R2;
    int R4;
    register int R5;
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
    *(int *)((int)stk + 32) = 0xB6;
    *(int *)((int)stk + 28) = 0xC206184;
    *(int *)((int)stk + 24) = 0xC206174;
    v0_0 = ((int (*)(void))(FUN_0c18c9fc))();
    (((struct o4_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o1C_uint *)0xC2A62B8)->v) = 0x0;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x2;
    *(int *)((int)stk + 20) = 0x1;
    v0_0 = *(int *)0xC89B60C;
    *(unsigned int *)(((int)stk + 36)) = v0_0;
    v0_0 = (*(short *)((v0_0 + 0x0)));
    *(int *)((int)stk + 16) = v0_0;
    v0_4 = FUN_0c1912dc(0x0, 0x0, (*(short *)(((*(int *)(((int)stk + 36))) + 0x4))), (*(short *)(((*(int *)(((int)stk + 36))) + 0x2))), v0_0, 0x1);
    v0_3 = (0xC206184);
    v0_0 = (0xC191D9E);
    v0_0 = (0xC2A62C8);
    v0_1 = (0x3);
    v0_2 = (0xC89B60C);
    R4 = ((short)v0_4);
    v0_5 = (0xC18C9FC);
    v0_5 = (0xC191DAE);
    if (((short)v0_4 != 0)) goto L_C184594;
    FUN_0c191dae();
    *(int *)((int)stk + 32) = 0xCE;
    v0_4 = v0_3;
    *(int *)((int)stk + 28) = v0_4;
    *(int *)((int)stk + 24) = 0xC206174;
    v0_5 = ((int (*)(void))(FUN_0c18c9fc))();
    FUN_0c191dbc(0x7D0);
    FUN_0c191d9e();
    *(int *)((int)stk + 20) = 0xD2;
    v0_5 = v0_3;
    *(int *)((int)stk + 16) = v0_5;
    *(int *)((int)stk + 12) = 0xC206174;
    v0_4 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC206174, v0_5, 0xD2, 0xC206174, v0_4, 0xCE);
    v0_4 = FUN_0c192f54((*(int *)((v0_2 + 0xC))), v0_2);
    R4 = ((short)v0_4);
    if (((short)v0_4 == 0)) goto L_C18459A;
    L_C184594:;
    v0_1 = (0x1);
    L_C184596:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    L_C18481A:;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x8;
    L_C184878:;
    return 0x0;
    L_C18459A:;
    *(int *)((int)stk + 32) = 0xDA;
    v0_4 = v0_3;
    *(int *)((int)stk + 28) = v0_4;
    *(int *)((int)stk + 24) = 0xC206174;
    v0_4 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC206174, v0_4, 0xDA);
    v0_4 = FUN_0c192f54((*(int *)((v0_2 + 0x10))), v0_2);
    R4 = (v0_4);
    if (((short)v0_4 == 0)) goto L_C1845C0;
    *(unsigned int *)((v0_0 + 0x0)) = (short)R4;
    goto L_C18481A;
    L_C1845C0:;
    *(int *)((int)stk + 32) = 0xE3;
    v0_4 = v0_3;
    *(int *)((int)stk + 28) = v0_4;
    *(int *)((int)stk + 24) = 0xC206174;
    v0_4 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC206174, v0_4, 0xE3);
    *(unsigned int *)(((int)stk + 40)) = ((short)(*(short *)(((*(int *)((v0_2 + 0x4))) + 0x4))) * (short)0x3E8);
    *(unsigned int *)(((int)stk + 36)) = (thunk_FUN_0c191de2());
    L_C1845E2:;
    v0_4 = (unsigned short)(FUN_0c1921f0()) != 0;
    if (v0_4) goto L_C18466A;
    if ((((((struct o8_int *)0xC2A62B8)->v)) != 0)) goto L_C184606;
    v0_4 = (unsigned int)((thunk_FUN_0c191de2()) - (*(int *)(((int)stk + 36)))) <= (unsigned int)(*(int *)(((int)stk + 40)));
    if (!(v0_4)) goto L_C184606;
    FUN_0c191dae();
    thunk_FUN_0c1831d0();
    FUN_0c191d9e();
    goto L_C1845E2;
    L_C184606:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    goto L_C18481A;
    L_C18466A:;
    *(int *)((int)stk + 32) = 0xF9;
    v0_4 = v0_3;
    *(int *)((int)stk + 28) = v0_4;
    *(int *)((int)stk + 24) = 0xC206174;
    v0_5 = ((int (*)(void))(FUN_0c18c9fc))();
    FUN_0c191dae();
    FUN_0c191dbc(0x1F4);
    FUN_0c191d9e();
    *(int *)((int)stk + 20) = 0xFE;
    v0_5 = v0_3;
    *(int *)((int)stk + 16) = v0_5;
    *(int *)((int)stk + 12) = 0xC206174;
    v0_6 = ((int (*)(void))(FUN_0c18c9fc))();
    (((struct o18_uint *)0xC2A62B8)->v) = (thunk_FUN_0c191de2());
    (((struct o0_uint *)0xC2A62B8)->v) = v0_1;
    *(int *)((int)stk + 8) = 0x104;
    v0_3 = v0_3;
    *(int *)((int)stk + 4) = v0_3;
    *(int *)((int)stk + 0) = 0xC206174;
    v0_3 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC206174, v0_3, 0x104, 0xC206174, v0_5, 0xFE, 0xC206174, v0_4, 0xF9);
    *(unsigned int *)(((int)stk + 44)) = 0xA0000;
    *(unsigned short *)(((int)stk + 48)) = (*(short *)(((*(int *)((v0_2 + 0x8))) + 0x10)));
    *(unsigned short *)(((int)stk + 50)) = (*(short *)(((*(int *)((v0_2 + 0x8))) + 0x8)));
    *(unsigned int *)(((int)stk + 52)) = (*(int *)(((*(int *)((v0_2 + 0x8))) + 0xC)));
    *(unsigned short *)(((int)stk + 56)) = (*(short *)(((*(int *)((v0_2 + 0x8))) + 0xA)));
    *(unsigned short *)(((int)stk + 58)) = (*(short *)(((*(int *)((v0_2 + 0x8))) + 0x12)));
    *(unsigned int *)(((int)stk + 60)) = (*(int *)((v0_2 + 0x18)));
    *(unsigned int *)(((int)stk + 64)) = (*(int *)((v0_2 + 0x1C)));
    v0_3 = (short)(FUN_0c19133a((((int)stk + 36) + 0x8))) == 0;
    if (v0_3) goto L_C1846F2;
    *(unsigned int *)((v0_0 + 0x0)) = 0x5;
    goto L_C18481A;
    L_C1846F2:;
    v0_3 = ((((struct o14_int *)0xC89BEF8)->v));
    *(int *)((int)stk + 32) = v0_3;
    v0_4 = ((((struct o10_int *)0xC89BEF8)->v));
    *(int *)((int)stk + 28) = v0_4;
    v0_5 = ((((struct oC_int *)0xC89BEF8)->v));
    *(int *)((int)stk + 24) = v0_5;
    FUN_0c191454((*(short *)(((*(int *)((v0_2 + 0x8))) + 0x14))), ((((struct o0_int *)0xC89BEF8)->v)), ((((struct o4_int *)0xC89BEF8)->v)), ((((struct o8_int *)0xC89BEF8)->v)), v0_5, v0_4, v0_3);
    R4 = (0x7F);
    if ((((*(short *)(((*(int *)((v0_2 + 0x8))) + 0x8))) & 0x7F) == 0)) goto L_C184750;
    if ((((*(short *)(((*(int *)((v0_2 + 0x8))) + 0x8))) & R4) == 2)) goto L_C1847B4;
    if ((((*(short *)(((*(int *)((v0_2 + 0x8))) + 0x8))) & R4) == 1)) goto L_C1847C8;
    if ((((*(short *)(((*(int *)((v0_2 + 0x8))) + 0x8))) & R4) != 4)) goto L_C1847C8;
    v0_3 = *(short *)(((int)stk + 50));
    R4 = ((unsigned short)v0_3);
    if (!(((unsigned short)v0_3 != 0x80))) goto L_C184750;
    if ((R4 != 0x82)) goto L_C1847C8;
    FUN_0c191f06(0x64, R5, R6, R7);
    goto L_C1847B4;
    L_C184750:;
    R4 = ((FUN_0c19139e((*(int *)((v0_2 + 0x18))), (*(int *)((v0_2 + 0x1C))))));
    L_C1847BE:;
    v0_2 = (short)R4 == 0;
    R4 = ((short)R4);
    if (v0_2) goto L_C1847C8;
    v0_1 = (0x6);
    goto L_C184596;
    L_C1847C8:;
    v0_2 = FUN_0c1914ec();
    R4 = ((short)v0_2);
    if (((short)v0_2 == 0)) goto L_C1847DA;
    *(unsigned int *)((v0_0 + 0x0)) = 0x7;
    goto L_C18481A;
    L_C1847DA:;
    FUN_0c193a72();
    v0_3 = (0x0);
    v0_2 = (0xC8B161C);
    R4 = (v0_1);
    L_C1847F8:;
    if (((int)(short)R4 >= 0)) goto L_C1847E8;
    *(unsigned int *)(((int)stk + 36)) = 0xFFFFFF;
    FUN_0c191dae();
    *(unsigned short *)(((int)stk + 36)) = (FUN_0c193b96(v0_3, (*(int *)(((int)stk + 36)))));
    FUN_0c191d9e();
    if (((*(short *)(((int)stk + 36))) == 0)) goto L_C184822;
    *(unsigned int *)((v0_0 + 0x0)) = 0x8;
    goto L_C18481A;
    L_C184822:;
    v0_0 = (0x0);
    R4 = (v0_1);
    L_C18483A:;
    if (((int)(short)R4 >= 0)) goto L_C184828;
    R4 = (0x0);
    R6 = (0xC89B579);
    L_C184852:;
    if (((int)(short)R4 <= (int)v0_1)) goto L_C184846;
    FUN_0c191dae();
    FUN_0c193b80();
    FUN_0c193bfe(0x0);
    FUN_0c191d9e();
    (((struct o1C_uint *)0xC2A62B8)->v) = 0x1;
    (((struct o0_uint *)0xC2A62B8)->v) = 0x4;
    goto L_C184878;
    L_C184846:;
    *(unsigned char *)((R6 + (short)R4)) = (*(signed char *)(((v0_2 + 0x4) + (short)R4)));
    R4 = ((R4 + 0x1));
    goto L_C184852;
    L_C184828:;
    v0_0 = (((v0_0 << 8) | (unsigned char)(*(signed char *)((((short)R4 + (v0_2 + 0x4)) + 0x0)))));
    R4 = ((R4 - 1));
    goto L_C18483A;
    L_C1847E8:;
    v0_3 = (((v0_3 << 8) | (unsigned char)(*(signed char *)((((short)R4 + v0_2) + 0x0)))));
    R4 = ((R4 - 1));
    goto L_C1847F8;
    L_C1847B4:;
    R4 = ((FUN_0c19141c((*(int *)((v0_2 + 0x18))), (*(int *)((v0_2 + 0x1C))))));
    goto L_C1847BE;
}

int FUN_0c193900(int a4)
{
    int stk[18];
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register int t14;
    register int t20;
    register int t21;
    register int t27;
    register int t28;
    int t18;
    register int t19;
    int t25;
    register int t26;

    *(unsigned short *)(((int)stk + 0)) = a4;
    (((struct o4_uint *)0xC8B1610)->v) = (thunk_FUN_0c191de2());
    (((struct o8_uint *)0xC8B1610)->v) = ((short)(*(short *)(((int)stk + 0))) * (short)0x3E8);
    memset((((int)stk + 0) + 0x8), 0x0, 0x40);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x8) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x8) + 0x35);
    for (;;) {
        memcpy((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 0))), 0x3F);
        t5 = FUN_0c193120(((((int)stk + 0) + 0x8) + 0x3F), 0x1);
        if ((short)t5 == 0) {
            t6 = FUN_0c191ea4(((((int)stk + 0) + 0x8) + 0x39), 0xC20A74C, 0x7);
            if ((short)t6 != 0) {
                t7 = FUN_0c191ea4(((((int)stk + 0) + 0x8) + 0x3C), 0xC20A754, 0x4);
                if ((short)t7 != 0) {
                    t8 = FUN_0c191ea4(((((int)stk + 0) + 0x8) + 0x3B), 0xC20A75C, 0x5);
                    if ((short)t8 != 0) {
                        t9 = FUN_0c191ea4(((((int)stk + 0) + 0x8) + 0x39), 0xC20A764, 0x7);
                        if ((short)t9 == 0) {
                            break;
                        }
                        t10 = FUN_0c191ea4(((((int)stk + 0) + 0x8) + 0x36), 0xC20A76C, 0xA);
                        if ((short)t10 != 0) {
                            t12 = FUN_0c191ea4((*(int *)(((int)stk + 4))), 0xC20A778, 0xB);
                            if ((short)t12 == 0) {
                                return 0x3;
                            }
                            continue;
                        }
                        return 0x3;
                    }
                    break;
                }
                break;
            }
            (((struct o0_uint *)0xC8B1610)->v) = 0x0;
            t13 = 0x0;
            for (;;) {
                t14 = FUN_0c193120((t13 + (((int)stk + 0) + 0x8)), 0x1);
                if ((short)t14 != 0) {
                    break;
                }
                if ((unsigned char)(*(signed char *)(((((int)stk + 0) + 0x8) + t13))) != 13) {
                    t13 = (t13 + 0x1);
                    if ((unsigned int)t13 >= (unsigned int)0x3F) {
                        *(unsigned char *)(((((int)stk + 0) + 0x8) + t13)) = 0x0;
                        t20 = ((((int)stk + 0) + 0x8) + (short)(FUN_0c19337c((((int)stk + 0) + 0x8))));
                        for (;;) {
                            t21 = *(signed char *)((t20 + 0x0));
                            t20 = (t20 + 0x1);
                            if (((int)(unsigned char)t21 >= (int)0x30) && (t18 = 0x39, (int)(unsigned char)t21 <= (int)t18)) {
                                t19 = ((((struct o0_int *)0xC8B1610)->v));
                                t18 = t19;
                                t19 = (t19 << 2);
                                t19 = (t19 + t18);
                                t19 = (t19 << 1);
                                t19 = (t19 + (unsigned char)t21);
                                t19 = (t19 - 48);
                                (((struct o0_uint *)0xC8B1610)->v) = t19;
                                continue;
                            }
                            break;
                        }
                        return 0x0;
                    }
                    continue;
                }
                *(unsigned char *)(((((int)stk + 0) + 0x8) + t13)) = 0x0;
                t27 = ((((int)stk + 0) + 0x8) + (short)(FUN_0c19337c((((int)stk + 0) + 0x8))));
                for (;;) {
                    t28 = *(signed char *)((t27 + 0x0));
                    t27 = (t27 + 0x1);
                    if (((int)(unsigned char)t28 >= (int)0x30) && (t25 = 0x39, (int)(unsigned char)t28 <= (int)t25)) {
                        t26 = ((((struct o0_int *)0xC8B1610)->v));
                        t25 = t26;
                        t26 = (t26 << 2);
                        t26 = (t26 + t25);
                        t26 = (t26 << 1);
                        t26 = (t26 + (unsigned char)t28);
                        t26 = (t26 - 48);
                        (((struct o0_uint *)0xC8B1610)->v) = t26;
                        continue;
                    }
                    break;
                }
                return 0x0;
            }
            return 0x4;
        }
        return 0x4;
    }
    return 0x2;
}

int FUN_0c193846(int a4, int a5, int a6)
{
    int stk[34];
    register int t2;
    register int t4;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a6;
    (((struct o0_uint *)0xC8B1614)->v) = (thunk_FUN_0c191de2());
    (((struct o4_uint *)0xC8B1614)->v) = ((short)(*(short *)(((int)stk + 0))) * (short)0x3E8);
    t2 = a5;
    if ((unsigned int)(short)a5 > (unsigned int)0x80) {
        t2 = 0x80;
    }
    t4 = FUN_0c193120((((int)stk + 0) + 0x8), t2);
    if ((short)t4 == 0) {
        for (;;) {
            t6 = FUN_0c191ea4((((int)stk + 0) + 0x8), (*(int *)(((int)stk + 4))), t2);
            if ((short)t6 == 0) {
                return 0x0;
            }
            memcpy((((int)stk + 0) + 0x8), ((((int)stk + 0) + 0x8) + 0x1), ((short)t2 - 1));
            t8 = FUN_0c193120((((short)t2 + (((int)stk + 0) + 0x8)) - 1), 0x1);
            if ((short)t8 != 0) {
                break;
            }
        }
    }
    return 0xFFFFFFFF;
}

int FUN_0c1937ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = thunk_FUN_0c191de2();
    if ((*(int *)0xC8B1664) == 0) {
        t1 = *(short *)((a4 + 0x4));
        t2 = t1;
        t3 = ((short)t1 * (short)0x3E8);
    } else {
        t2 = t0;
        t3 = ((short)(*(short *)(((*(int *)0xC8B1664) + 0x0))) * (short)0x3E8);
    }
    t1 = t2;
    for (;;) {
        if ((*(int *)0xC2A62C0) != 0) {
            break;
        }
        t1 = (thunk_FUN_0c191de2());
        t1 = (t1 - t0);
        if ((unsigned int)t1 <= (unsigned int)t3) {
            t1 = (FUN_0c191dae());
            t1 = (thunk_FUN_0c1831d0());
            t1 = (FUN_0c191d9e());
            continue;
        }
        t1 = 0x0;
        return t1;
    }
    return 0x4;
}

int FUN_0c191190(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    FUN_0c191d9e();
    FUN_0c1927c8();
    t3 = thunk_FUN_0c191de2();
    t4 = t3;
    t5 = 0xC8A97DC;
    t6 = (*(int *)0xC8A97DC);
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t4 = 0x18;
        t4 = (*(signed char *)((t6 + t4)));
        t4 = (unsigned char)t4;
        if ((t4 == 1) && (t0 = *(int *)((t6 + 0xC)), t1 = t0, t5 = t3, t2 = *(int *)((t6 + 0x8)), t5 = (t5 - t1), (unsigned int)t5 > (unsigned int)t2)) {
            t4 = (FUN_0c19114c(t6));
            t4 = 0x18;
            *(unsigned char *)((t6 + t4)) = 0x2;
            t1 = (*(int *)((t6 + 0x10)));
            if (t1 != 0) {
                *(unsigned char *)((t6 + t4)) = 0x0;
                t1 = (*(int *)((t6 + 0x10)));
                t4 = (((int (*)(int, int, int, int))(t1))((*(int *)((t6 + 0x14))), a5, a6, a7));
            } else {
                t7 = t1;
            }
            t8 = t7;
        } else {
            t7 = t5;
            t8 = t1;
        }
        t6 = (*(int *)((t6 + 0x0)));
        t5 = t7;
        t1 = t8;
    }
    return (FUN_0c191dae());
}

int FUN_0c191108(int a4)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        t0 = *(signed char *)((a4 + 0x18));
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 == 1) {
            t1 = (FUN_0c19114c(a4));
        }
        t0 = t1;
        if ((*(int *)((a4 + 0x4))) != 0) {
            t1 = *(int *)((a4 + 0x4));
            *(unsigned int *)((a4 + 0x8)) = t1;
            if (t1 == 0) {
                *(unsigned int *)((a4 + 0x8)) = 0x1;
            }
            t1 = thunk_FUN_0c191de2();
            *(unsigned int *)((a4 + 0xC)) = t1;
            t0 = t1;
            if ((*(int *)((a4 + 0x10))) != 0) {
                (((struct o18_uchar *)(a4))->v) = 0x1;
                t0 = 0x18;
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c184442(void)
{
    int t0;

    if ((((((struct o0_int *)0xC2A62B8)->v)) != 5) && (t0 = (((struct o8_int *)0xC2A62B8)->v), t0 == 0)) {
        t0 = thunk_FUN_0c191de2();
        if ((unsigned int)(t0 - ((((struct o18_int *)0xC2A62B8)->v))) <= (unsigned int)((short)(*(short *)(((*(int *)0xC89B610) + 0x4))) * (short)0x3E8)) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c191e44(void)
{
    register int t0;

    t0 = thunk_FUN_0c191de2();
    (((struct o0_uint *)0xC2AE764)->v) = ((((t0 << 8) + (t0 << 16)) + ((unsigned int)((unsigned int)t0 >> 2) >> 2)) + t0);
    (((struct o4_ushort *)0xC2AE764)->v) = ((((t0 << 8) + (t0 << 16)) + ((unsigned int)((unsigned int)t0 >> 2) >> 2)) + t0);
    (((struct o4_ushort *)0xC2AE764)->v) = (((((struct o4_short *)0xC2AE764)->v)) + 0x350B);
    return t0;
}

int FUN_0c191e30(void)
{
    return (thunk_FUN_0c191de2());
}
