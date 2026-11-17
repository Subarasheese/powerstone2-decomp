/* game/effect: functions 0C115DC8-0C1171F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c037bf6();
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05f22c(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
extern int FUN_0c116218();
extern int FUN_0c1162a6();
int FUN_0c1164d8(int);
int FUN_0c11664c(int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c116ad0();
extern int FUN_0c11719c();
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e20c(int);
int FUN_0c11e28e(int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c115dc8(void);
int FUN_0c115e12(int a4);
int FUN_0c115e20(void);
int FUN_0c115e3c(void);
int FUN_0c115e84(int a4);
int thunk_FUN_0c11e20c(int a4);
int thunk_FUN_0c11e28e(int a4);
int FUN_0c115e9e(void);
void FUN_0c115ea4(int a4);
int FUN_0c115eae(int a4, int a5, int a6, int a7);
int FUN_0c115fd2(int a4);
int FUN_0c115fe0(int a4, int a5, int a6, int a7);
int FUN_0c1161f0(void);
int FUN_0c116366(int a4);
int FUN_0c116456(int a4);
int FUN_0c116c12(int a4, int a5);
int FUN_0c116c2e(int a4, int a5, int a6);

int FUN_0c115dc8(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c115e3c();
    if (t0 == 0) {
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x3FF)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x3FF);
        }
        if (((((struct o8_float *)0xC115EDC)->v)) > (((float)t1 / ((((struct o0_float *)0xC115EDC)->v))) * ((((struct o4_float *)0xC115EDC)->v)))) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c115e12(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c115e20(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC474104;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if ((int)t2 > 0) {
            t1 = (t1 + 0x1);
        }
        if ((unsigned int)t0 >= (unsigned int)0xC474404) {
            break;
        }
    }
    return t1;
}

int FUN_0c115e3c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c115e20();
    t1 = *(signed char *)0xC542FA5;
    t2 = 0x0;
    if ((unsigned int)(unsigned char)t1 < (unsigned int)0xC) {
        t3 = (unsigned char)t1;
        t1 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            if ((int)t0 >= (int)(unsigned char)(*(signed char *)((0xC1FC750 + (unsigned char)(*(signed char *)0xC542FA5))))) {
                t1 = 0x1;
                *(unsigned char *)0xC542FA5 = ((*(signed char *)0xC542FA5) + 0x1);
            }
            if ((unsigned int)t3 >= (unsigned int)0xC) {
                break;
            }
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c115e84(int a4)
{
    return ((((int)(*(int *)(((a4 << 2) + 0xC474104))) > 0)) ? 1 : 0);
}

int thunk_FUN_0c11e20c(int a4)
{
    return FUN_0c11e20c(a4);
}

int thunk_FUN_0c11e28e(int a4)
{
    return FUN_0c11e28e(a4);
}

int FUN_0c115e9e(void)
{
    return (*(int *)0xC47471C);
}

void FUN_0c115ea4(int a4)
{
    *(unsigned int *)0xC47471C = ((*(int *)0xC47471C) - a4);
}

int FUN_0c115eae(int a4, int a5, int a6, int a7)
{
    int stk[17];
    register int t2;
    register int t5;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t18;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t0;

    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)(*(short *)((a4 + 0x1C)))) {
            break;
        }
        t0 = t2;
        t0 = (t0 << 2);
        t0 = (t0 + (((int)stk + 4) + 0x20));
        t9 = t0;
        *(int *)((int)stk + 0) = t9;
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0x1F)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x1F);
        }
        t0 = (*(int *)((0xC2016B0 + (t6 << 2))));
        t2 = (t2 + 0x1);
        *(unsigned int *)((t9 + 0x0)) = t0;
    }
    t10 = 0x4;
    t11 = 0x0;
    for (;;) {
        t12 = 0x0;
        for (;;) {
            if ((int)t12 >= (int)(*(short *)((a4 + 0x1C)))) {
                break;
            }
            t9 = (*(int *)(((((int)stk + 4) + 0x20) + (t12 << 2))));
            t12 = (t12 + 0x1);
            if (t9 == t10) {
                t18 = (t11 << 2);
                t11 = (t11 + 0x1);
                *(unsigned int *)((((int)stk + 4) + t18)) = t10;
            }
        }
        t10 = (t10 - 1);
        if ((int)t10 < 0) {
            break;
        }
    }
    t21 = t0;
    t22 = t9;
    t23 = t12;
    t24 = t10;
    t25 = t11;
    t26 = a7;
    t27 = 0x0;
    for (;;) {
        t28 = *(short *)((a4 + 0x1C));
        if ((int)t27 >= (int)t28) {
            break;
        }
        t24 = t27;
        t24 = (t24 << 2);
        t24 = (t24 + ((int)stk + 4));
        t24 = (*(int *)((t24 + 0x0)));
        t22 = 0xC18760C;
        t24 = (t24 << 2);
        t23 = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)((t24 + 0xC2017CC)))));
        t23 = (t23 << 2);
        t21 = 0xC473A3C;
        t21 = (t21 + t27);
        t26 = 0xC473A3C;
        t22 = (*(int *)((t23 + (*(int *)((t24 + 0xC2A0C58))))));
        t23 = 0x0;
        t23 = (t23 + 0xC473A3C);
        t25 = 0x0;
        *(unsigned char *)((t21 + 0x0)) = t22;
        t24 = 0x0;
        t26 = (t26 + t27);
        if ((int)t27 > 0) {
            for (;;) {
                t22 = (*(signed char *)((t23 + 0x0)));
                t21 = (*(signed char *)((t26 + 0x0)));
                t24 = (t24 + 0x1);
                if (t21 == t22) {
                    t25 = 0x1;
                }
                t23 = (t23 + 0x1);
                if ((int)t24 >= (int)t27) {
                    break;
                }
            }
        }
        if (t25 != 0) {
            t27 = (t27 - 1);
        }
        t27 = (t27 + 0x1);
    }
    return t28;
}

int FUN_0c115fd2(int a4)
{
    register int t1;

    t1 = *(signed char *)((0xC473A3C + ((*(short *)((a4 + 0x1C))) - 1)));
    *(unsigned short *)((a4 + 0x1E)) = (unsigned char)t1;
    return (unsigned char)t1;
}

int FUN_0c115fe0(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R3;
    register int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_0 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 0)) = (0x41C + v0_2);
    v0_5 = *(signed char *)((v0_2 + 0x14));
    v0_4 = (v0_5);
    v0_2 = (v0_2);
    v0_3 = (0xC539708);
    if ((v0_5 == 0)) goto L_C116024;
    if ((v0_4 == 1)) goto L_C116046;
    if ((v0_4 != 99)) goto L_C116008;
    return FUN_0c03f346(v0_2, v0_3, v0_0, v0_1);
    L_C116008:;
    return v0_4;
    L_C116046:;
    v0_5 = *(signed char *)((v0_2 + 0x15));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C11606E;
    if ((v0_4 == 1)) goto L_C116076;
    if ((v0_4 == 2)) goto L_C11607E;
    if ((v0_4 == 3)) goto L_C116130;
    if ((v0_4 != 4)) goto L_C116062;
    v0_5 = *(signed char *)((v0_2 + 0x16));
    v0_4 = (v0_5);
    if ((v0_5 == 0)) goto L_C116178;
    if ((v0_4 == 1)) goto L_C116180;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    L_C1161C4:;
    return ((int (*)(int, int, int, int))(FUN_0c11719c))(v0_2, v0_3, v0_0, v0_1);
    L_C116180:;
    if (((*(signed char *)((v0_2 + 0x17))) != 0)) goto L_C116194;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    *(unsigned short *)((v0_2 + 0x1C)) = 0x14;
    L_C116194:;
    v0_4 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) <= 0)) goto L_C1161B6;
    goto L_C1161C4;
    L_C1161B6:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    goto L_C1161C4;
    L_C116178:;
    FUN_0c116456(v0_2);
    goto L_C1161C4;
    L_C116062:;
    if ((v0_4 != 5)) goto L_C11606A;
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))) != 7)) goto L_C1161C4;
    goto L_C1161B6;
    L_C11606A:;
    FUN_0c115e12(v0_2);
    goto L_C1161C4;
    L_C116130:;
    v0_5 = *(signed char *)((v0_2 + 0x16));
    v0_4 = (v0_5);
    if ((v0_5 == 1)) goto L_C116148;
    if ((v0_4 == 2)) goto L_C116148;
    if ((v0_4 == 3)) goto L_C116150;
    if ((v0_4 == 4)) goto L_C116158;
    FUN_0c1164d8(v0_2);
    goto L_C1161C4;
    L_C116158:;
    FUN_0c116366(v0_2);
    goto L_C1161C4;
    L_C116150:;
    v0_4 = ((int (*)(int, int, int, int, int, int))(FUN_0c116ad0))(v0_2, v0_3, v0_0, v0_1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    goto L_C1161C4;
    L_C116148:;
    FUN_0c11664c(v0_2, v0_3, v0_0, v0_1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20));
    goto L_C1161C4;
    L_C11607E:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    v0_4 = (int)(FUN_0c115e9e()) <= (int)0x1388;
    v0_5 = (0xC179AC0);
    v0_5 = (0xC2A0C48);
    if (v0_4) goto L_C1160DC;
    v0_4 = (int)(FUN_0c115e20()) <= 0;
    if (v0_4) goto L_C1160BA;
    v0_6 = FUN_0c179ac0();
    v0_4 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C1160A6;
    v0_4 = ((v0_4 & 0x1F));
    L_C1160B0:;
    v0_4 = ((*(int *)(((*(int *)((v0_5 + 0x0))) + (v0_4 << 2)))));
    L_C1160D6:;
    (((struct o16_uchar *)(v0_2))->v) = v0_4;
    goto L_C116130;
    L_C1160A6:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x1F)) + 0x1));
    goto L_C1160B0;
    L_C1160BA:;
    v0_6 = FUN_0c179ac0();
    v0_4 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C1160C6;
    v0_4 = ((v0_4 & 0x1F));
    L_C1160D0:;
    v0_4 = ((*(int *)(((*(int *)((v0_5 + 0x4))) + (v0_4 << 2)))));
    goto L_C1160D6;
    L_C1160C6:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x1F)) + 0x1));
    goto L_C1160D0;
    L_C1160DC:;
    v0_4 = (int)(FUN_0c115e20()) <= 0;
    if (v0_4) goto L_C116110;
    v0_6 = FUN_0c179ac0();
    v0_4 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C1160F0;
    v0_4 = ((v0_4 & 0x1F));
    L_C1160FA:;
    v0_4 = ((*(int *)(((*(int *)((v0_5 + 0x8))) + (v0_4 << 2)))));
    L_C11612C:;
    (((struct o16_uchar *)(v0_2))->v) = v0_4;
    goto L_C116130;
    L_C1160F0:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x1F)) + 0x1));
    goto L_C1160FA;
    L_C116110:;
    v0_6 = FUN_0c179ac0();
    v0_4 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C11611C;
    v0_4 = ((v0_4 & 0x1F));
    L_C116126:;
    v0_4 = ((*(int *)(((*(int *)((v0_5 + 0xC))) + (v0_4 << 2)))));
    goto L_C11612C;
    L_C11611C:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x1F)) + 0x1));
    goto L_C116126;
    L_C116076:;
    v0_4 = ((int (*)(int, int, int, int, int, int))(FUN_0c1162a6))(v0_2, v0_3, v0_0, v0_1, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    goto L_C1161C4;
    L_C11606E:;
    v0_4 = ((int (*)(int))(FUN_0c116218))(v0_2);
    goto L_C1161C4;
    L_C116024:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_2))->v) = 0x0;
    (((struct o16_uchar *)(v0_2))->v) = 0x0;
    (((struct o17_uchar *)(v0_2))->v) = 0x0;
    (((struct oA8_uchar *)(v0_3))->v) = 0x1;
    FUN_0c116c12(v0_2, 0x0);
    goto L_C116046;
}

int FUN_0c1161f0(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC115FE0;
        return t0;
    }
    return 0x0;
}

int FUN_0c116366(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            t1 = t0;
                            if (t0 != 6) {
                            } else {
                                t0 = FUN_0c05f22c(0x3FCF);
                                t1 = t0;
                                if (t0 != 0) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    (((struct o16_uchar *)(a4))->v) = 0x1;
                                    (((struct o18_uchar *)(a4))->v) = 0x0;
                                    (((struct o17_uchar *)(a4))->v) = 0x0;
                                    t1 = 0x17;
                                }
                            }
                            return t1;
                        }
                        t0 = FUN_0c117d54();
                        if ((int)t0 < 0) {
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            return FUN_0c117e76();
                        }
                        return t0;
                    }
                    FUN_0c117944(((*(int *)(((((*(signed char *)((a4 + 0x18))) << 2) << 1) + 0xC1FC770)))));
                    FUN_0c116c12(a4, 0x2);
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    return 0x17;
                }
                t0 = FUN_0c05f22c(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t1 = 0x17;
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t0 = FUN_0c115e20();
        if (t0 == 0) {
            (((struct o18_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o18_uchar *)(a4))->v) = 0x1;
        }
    }
    FUN_0c117944(((*(int *)(((((*(signed char *)((a4 + 0x18))) << 2) << 1) + 0xC1FC76C)))));
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c116456(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c05f22c(0x3FCF);
                    t1 = t0;
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        t1 = 0x16;
                    }
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    FUN_0c117944(0xCE);
    FUN_0c116c12(a4, 0x2);
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c116c12(int a4, int a5)
{
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (*(signed char *)(((a4 + 0x41C) + 0x0)));
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x4)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x3)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x2)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x1)) = 0x0;
    *(unsigned char *)((((a4 + 0x41C) + 0x2) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c116c2e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(0xC539708, a5, a6);
    } else {
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = *(signed char *)0xC539709;
        FUN_0c07e79c(0xC539708, t0, 0x0, 0x14, (t0), 0x0, 0x14);
        *(unsigned char *)(((a4 + 0x41C) + 0x2)) = ((*(signed char *)(((a4 + 0x41C) + 0x2))) + 0x1);
        t0 = ((int (*)(int))(FUN_0c037bf6))(0xC539708);
    }
    if ((unsigned char)t0 != 0) {
        return FUN_0c116c12(a4, 0x1);
    }
    return (unsigned char)t0;
}
