/* Straight-line functions with calls and guards (batch gen_hg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058542(int, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c10caec(int);
int FUN_0c115e12(int);
int FUN_0c115e20(void);
int FUN_0c115e9e(void);
extern int FUN_0c116218();
extern int FUN_0c1162a6();
int FUN_0c116366(int);
int FUN_0c116456(int);
int FUN_0c1164d8(int);
int FUN_0c11664c(int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c116ad0();
int FUN_0c116c12(int, int);
extern int FUN_0c11719c();
int FUN_0c1171f0(int);
int FUN_0c16af78(int, int, int);
int FUN_0c16af86(int, int, int, int);
int FUN_0c179ac0(void);
extern int FUN_0c18778c();
int FUN_0c187798(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c115fe0(int a4, int a5, int a6, int a7);
int FUN_0c10d458(int a4, int a5, int a6, int a7);
int FUN_0c165188(int a4, int a5, int a6, int a7);
int FUN_0c16b01e(int a4, int a5, int a6, int a7, float f4);

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

int FUN_0c10d458(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t5;
    register int t6;
    register int t9;
    register int t33;
    register int t34;
    register int t51;
    register int t53;
    register int t56;
    register int t18;
    register int t42;
    register int t43;
    register int t44;
    register int t65;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t5 = *(signed char *)((a4 + 0x14));
    if (t5 != 0) {
        if (t5 == 1) {
            t6 = 0x0;
            for (;;) {
                if ((*(int *)0xC473978) == t6) {
                    t9 = FUN_0c10caec((*(int *)((a4 + 0x10))));
                    if (t9 != 0) {
                        *(volatile int *)((((0xC4 + a4) + (t6 << 2)) + 0xC));
                        t18 = (((int (*)(void))(FUN_0c18778c))());
                    } else {
                        *(volatile int *)((((0xC4 + a4) + (t6 << 2)) + 0xC));
                        t18 = (((int (*)(void))(FUN_0c18778c))());
                    }
                } else {
                    *(volatile int *)((((0xC4 + a4) + (t6 << 2)) + 0xC));
                    t18 = (((int (*)(int))(FUN_0c18778c))(a4));
                }
                t6 = (t6 + 0x1);
                if ((int)t6 >= (int)0x8) {
                    break;
                }
            }
            return t18;
        }
        if (t5 == 99) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t5;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c187798(a4, a5, a6);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x9, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x9, (*(int *)0xC4B410C));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x2, 0x9, (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 16)) = 0xC290E88;
    *(unsigned int *)(((int)stk + 12)) = 0xC290EA0;
    t33 = 0x0;
    for (;;) {
        t34 = *(int *)0xC4B410C;
        if ((int)t33 < (int)0x4) {
            *(unsigned int *)(((int)stk + 8)) = (t33 << 2);
            FUN_0c03744a((*(int *)((((t33 << 2) + (0xC4 + a4)) + 0xC))), 0x9, 0x9, t34);
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x3;
            t42 = 0xC290E94;
            t43 = (*(int *)(((int)stk + 16)));
            t44 = t33;
        } else {
            *(unsigned int *)(((int)stk + 8)) = (t33 << 2);
            FUN_0c03744a((*(int *)((((t33 << 2) + (0xC4 + a4)) + 0xC))), 0xA, 0x9, t34);
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x3;
            t42 = 0xC290EAC;
            t43 = (*(int *)(((int)stk + 12)));
            t44 = (t33 - 4);
        }
        FUN_0c0588bc(((*(int *)((((0xC4 + a4) + (*(int *)(((int)stk + 8)))) + 0xC))) + 0x6C), t42, t43, t44, 0x3, 0x0);
        *(unsigned short *)(((*(int *)((((0xC4 + a4) + (t33 << 2)) + 0xC))) + 0x6)) = 0x21F;
        *(volatile int *)((((0xC4 + a4) + (t33 << 2)) + 0xC));
        t51 = ((int (*)(int))(FUN_0c18778c))((t33 << 2));
        t33 = (t33 + 0x1);
        if ((int)t33 >= (int)0x8) {
            break;
        }
    }
    t53 = 0x0;
    for (;;) {
        if ((*(int *)0xC473978) == t53) {
            t56 = FUN_0c10caec((*(int *)((a4 + 0x10))));
            if (t56 != 0) {
                *(volatile int *)((((0xC4 + a4) + (t53 << 2)) + 0xC));
                t65 = (((int (*)(void))(FUN_0c18778c))());
            } else {
                *(volatile int *)((((0xC4 + a4) + (t53 << 2)) + 0xC));
                t65 = (((int (*)(void))(FUN_0c18778c))());
            }
        } else {
            *(volatile int *)((((0xC4 + a4) + (t53 << 2)) + 0xC));
            t65 = (((int (*)(void))(FUN_0c18778c))());
        }
        t53 = (t53 + 0x1);
        if ((int)t53 >= (int)0x8) {
            break;
        }
    }
    return t65;
}

int FUN_0c165188(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                if (0.0f > ((((struct o58_float *)(a4))->v))) {
                    if (!(-5.0f > ((((struct o4C_float *)(a4))->v)))) {
                    } else {
                        u0 = (((struct o58_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o58_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                } else {
                    if (((((struct o4C_float *)(a4))->v)) > 5.0f) {
                        u0 = (((struct o58_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o58_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                }
                if (0.0f > ((((struct o60_float *)(a4))->v))) {
                    if (!(-5.0f > ((((struct o54_float *)(a4))->v)))) {
                    } else {
                        u0 = (((struct o60_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o60_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                } else {
                    if (((((struct o54_float *)(a4))->v)) > 5.0f) {
                        u0 = (((struct o60_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o60_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            if ((*(short *)((a4 + 0x1E))) != 0) {
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
                u0 = (((struct o84_float *)(t0))->v);
                (((struct o8C_float *)(t0))->v) = u0;
                (((struct o88_float *)(t0))->v) = u0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            if ((u0 + 0.0799999982f) > 1.0f) {
                (((struct o18_float *)(t0))->v) = 1.0f;
            }
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            if ((int)(short)(t1 - 1) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0xF)) + 0x1E);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0x12)) + 0x1C);
        *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 0x7);
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                if (0.0f > ((((struct o58_float *)(a4))->v))) {
                    if (!(-5.0f > ((((struct o4C_float *)(a4))->v)))) {
                    } else {
                        u0 = (((struct o58_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o58_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                } else {
                    if (((((struct o4C_float *)(a4))->v)) > 5.0f) {
                        u0 = (((struct o58_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o58_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                }
                if (0.0f > ((((struct o60_float *)(a4))->v))) {
                    if (!(-5.0f > ((((struct o54_float *)(a4))->v)))) {
                    } else {
                        u0 = (((struct o60_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o60_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                } else {
                    if (((((struct o54_float *)(a4))->v)) > 5.0f) {
                        u0 = (((struct o60_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(FUN_0c179ac0()) % (int)0x3)) * 0.100000001f));
                        (((struct o60_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            if ((*(short *)((a4 + 0x1E))) != 0) {
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
                u0 = (((struct o84_float *)(t0))->v);
                (((struct o8C_float *)(t0))->v) = u0;
                (((struct o88_float *)(t0))->v) = u0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            if ((u0 + 0.0799999982f) > 1.0f) {
                (((struct o18_float *)(t0))->v) = 1.0f;
            }
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0xF)) + 0x1E);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c16b01e(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = *(signed char *)((a4 + 0x15));
            switch (t0) {
            case 0:
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.100000001f);
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                if (!(1.0f > ((((struct oBC_float *)(a4))->v)))) {
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    (((struct o20_ushort *)(a4))->v) = 0x14;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 1:
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 2:
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0500000007f);
                u0 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                    (((struct oB8_float *)(a4))->v) = 0.0f;
                    (((struct oB4_float *)(a4))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                break;
            }
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
            (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = FUN_0c16af86(a4, 0x4, 0x0, 0x7);
            if (t0 != 0) {
                FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x9, (*(int *)0xC4B40CC));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x231;
        (((struct o48_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o44_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (*(int *)((0xC203BA4 + ((*(signed char *)(((0x41C + a4) + 0x2))) << 2)))));
        FUN_0c16af78(a4, 0x4, 0x0);
        FUN_0c058542(a4, 15.0f);
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.5f;
        (((struct o44_float *)(a4))->v) = 0.5f;
        (((struct o40_float *)(a4))->v) = 0.5f;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        *(unsigned short *)((a4 + 0x1C)) = ((t0 << 2) + t0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
        t1 = 0x12A;
    }
    return t1;
}
