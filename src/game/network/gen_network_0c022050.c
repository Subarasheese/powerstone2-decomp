/* game/network: functions 0C022050-0C02354E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
int FUN_0c017ef8(void);
int ui_fade_reset(void);
int FUN_0c018344(void);
int FUN_0c01c2e0(int);
int FUN_0c01c38a(void);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c021eb4(void);
int FUN_0c02d05c(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c18589e(int, int);
int net_select(int, int, int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int memset(int, int, int);
int strcpy(int, int, int);
int FUN_0c187d88(int);
int FUN_0c022050(void);
int FUN_0c0220c4(int a4, int a5, int a6);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int a4, int a5, int a6);
int FUN_0c022370(void);
int FUN_0c0225de(void);
int FUN_0c023072(void);
int FUN_0c0232ae(int a4, int a5);
int FUN_0c0233ac(void);

int FUN_0c022050(void)
{
    register int t0;

    FUN_0c18589e(0xC305390, 0x20);
    t0 = *(int *)0xC309994;
    *(unsigned int *)(((((unsigned int)((unsigned int)((unsigned int)t0 >> 2) >> 2) >> 1) << 2) + 0xC305390)) = ((*(int *)(((((unsigned int)((unsigned int)((unsigned int)t0 >> 2) >> 2) >> 1) << 2) + 0xC305390))) | ((int)0x1 << (int)((*(int *)0xC309994) & 0x1F)));
    (((struct o0_uint *)0xC3053B0)->v) = 0x0;
    (((struct o4_uint *)0xC3053B0)->v) = 0x0;
    t0 = net_select(((*(int *)0xC309994) + 0x1), 0xC305390, 0x0, 0x0, 0xC3053B0);
    if ((int)t0 > 0) {
        if (((*(int *)(((((unsigned int)((unsigned int)((unsigned int)(*(int *)0xC309994) >> 2) >> 2) >> 1) << 2) + 0xC305390))) & ((int)0x1 << (int)((*(int *)0xC309994) & 0x1F))) != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0220c4(int a4, int a5, int a6)
{
    int stk[97];
    register int t42;
    int t8;
    register int t57;
    int t31;
    int t46;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c1864e0((*(int *)0xC309994), a4, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), (*(int *)(((int)stk + 0))), 0x1);
    FUN_0c1864e0((*(int *)0xC309994), a6, 0x1);
    if (((*(signed char *)((a4 + 0x0))) == 95) && (t8 = *(signed char *)((a6 + 0x0)), t8 == 1)) {
        (((struct o2_ushort *)0xC30AF94)->v) = (((((struct o2_short *)0xC30AF94)->v)) + 0x1);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x5E;
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x1;
        t57 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0)))));
    } else {
        if (((*(signed char *)((a4 + 0x0))) == 103) && (t31 = *(signed char *)((a6 + 0x0)), t31 == 4)) {
            t57 = FUN_0c1864e0((*(int *)0xC309994), 0xC30AF9B, 0x1);
            *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0x3;
            (((struct o6_uchar *)0xC30AF94)->v) = ((*(signed char *)0xC30AF9A) + 0x1);
        } else {
            t42 = *(signed char *)((a4 + 0x0));
            t57 = t42;
            if (t42 == 111) {
                t57 = *(signed char *)((a6 + 0x0));
                if ((t57 == 3) && (t46 = (((struct o0_short *)0xC30AF94)->v), (int)t46 >= 0)) {
                    (((struct o0_ushort *)0xC30AF94)->v) = 0x1;
                }
            }
        }
    }
    return t57;
}

int FUN_0c0221b0(void)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t21;
    register int t34;

    (((struct o6_uchar *)0xC30B700)->v) = 0x0;
    (((struct o4_ushort *)0xC30B700)->v) = 0x0;
    (((struct o1_uchar *)0xC30B700)->v) = 0x0;
    (((struct o0_uchar *)0xC30B700)->v) = 0x0;
    t0 = 0x0;
    t1 = 0xC30A34C;
    for (;;) {
        FUN_0c1864e0((*(int *)0xC309994), t1, 0x1);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3E6, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3E8, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3E9, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3EA, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3EB, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3EC, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC30A3ED, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
    t21 = 0x0;
    for (;;) {
        if ((int)t21 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
            break;
        }
        FUN_0c1864e0((*(int *)0xC309994), (t21 + 0xC30A354), 0x1);
        t21 = (t21 + 0x1);
    }
    *(unsigned char *)((t21 + 0xC30A354)) = 0x0;
    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC309E06, 0x1);
    FUN_0c1864e0((*(int *)0xC309994), 0xC309E07, 0x1);
    (((struct o0_uchar *)0xC309E06)->v) = ((*(signed char *)0xC309E06) & 0x7F);
    (((struct o1_uchar *)0xC309E06)->v) = ((*(signed char *)0xC309E07) & 0x7F);
    t34 = 0x0;
    for (;;) {
        if ((int)t34 >= (int)((unsigned char)(*(signed char *)(((int)stk + 0))) - 2)) {
            break;
        }
        FUN_0c1864e0((*(int *)0xC309994), (t34 + 0xC30A366), 0x1);
        t34 = (t34 + 0x1);
    }
    *(unsigned char *)((t34 + 0xC30A366)) = 0x0;
    return 0xC30A366;
}

int FUN_0c0222a4(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t10;
    register int t11;
    register int t22;
    register int t23;
    register int t26;
    register int t14;

    t0 = *(signed char *)((a4 + 0x0));
    if (t0 == 101) {
        t10 = *(signed char *)((a6 + 0x0));
        if (t10 == 6) {
            FUN_0c0221b0();
            *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x75;
            *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x8) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x8) + 0x1) + 0x0)) = 0xA;
            *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x2)) = 0x6;
            FUN_0c187a88(((((int)stk + 0) + 0x8) + 0x3), 0xC30A34C, 0x6);
            *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x9)) = 0x2;
            t14 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x8), (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0)))));
        } else {
            t11 = (unsigned char)(unsigned char)(*(signed char *)((a5 + 0x0)));
            for (;;) {
                if ((int)(t11 - 3) <= 0) {
                    break;
                }
                t10 = (FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1));
                t11 = (t11 - 1);
            }
            t14 = t10;
        }
        t26 = t14;
    } else {
        t22 = t0;
        t23 = (unsigned char)(unsigned char)(*(signed char *)((a5 + 0x0)));
        for (;;) {
            if ((int)(t23 - 3) <= 0) {
                break;
            }
            t22 = (FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1));
            t23 = (t23 - 1);
        }
        t26 = t22;
    }
    return t26;
}

int FUN_0c022370(void)
{
    int stk[102];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = FUN_0c022050();
    v0_2 = (v0_0);
    if ((v0_0 != 0)) goto L_C022390;
    L_C0225C8:;
    return v0_2;
    L_C022390:;
    FUN_0c0220c4((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), ((int)stk + 4));
    v0_2 = *(signed char *)(((int)stk + 12));
    v0_0 = (0xC186740);
    v0_0 = (0xC309994);
    v0_1 = (0xC3053B8);
    v0_3 = (0xC187A88);
    v0_3 = ((((int)stk + 4) + 0x14));
    v0_4 = (v0_2);
    v0_5 = ((((int)stk + 4) + 0x14));
    v0_6 = (0x71);
    v0_7 = (0xC187D74);
    if (!((v0_2 == 97))) goto L_C0225BC;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C022410;
    *(unsigned char *)((v0_5 + 0x0)) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = (v0_3 + 0x1);
    *(unsigned char *)(((v0_3 + 0x1) + 0x0)) = 0x39;
    *(unsigned char *)((v0_3 + 0x2)) = 0x1;
    FUN_0c187a88((v0_3 + 0x3), 0xC309998, 0x6);
    FUN_0c187a88((v0_3 + 0x9), 0xC30AC2C, 0x30);
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_3, (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
    *(unsigned int *)0xC30A3F8 = 0x0;
    *(unsigned char *)0xC30AF9A = 0x0;
    memset(0xC30A40C, 0x0, 0xFA);
    v0_5 = (0xC1A89F0);
    goto L_C022586;
    L_C0225BC:;
    v0_2 = ((FUN_0c0222a4((((int)stk + 4) + 0x8), (((int)stk + 4) + 0xC), ((int)stk + 4))));
    goto L_C0225C8;
    L_C022586:;
    v0_2 = ((strcpy(v0_1, v0_5, R6)));
    goto L_C0225C8;
    L_C022410:;
    if ((v0_4 == 97)) goto L_C02241C;
    goto L_C0225BC;
    L_C02241C:;
    if (((*(signed char *)(((int)stk + 4))) != 2)) goto L_C022480;
    *(unsigned char *)((v0_5 + 0x0)) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = (v0_3 + 0x1);
    *(unsigned char *)(((v0_3 + 0x1) + 0x0)) = 0x4;
    *(unsigned char *)((v0_3 + 0x2)) = 0x2;
    *(unsigned char *)((v0_3 + 0x3)) = 0x2;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_3, (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
    v0_5 = (0xC1A8A04);
    goto L_C022586;
    L_C022480:;
    if ((v0_4 == 97)) goto L_C02248C;
    goto L_C0225BC;
    L_C02248C:;
    if (((*(signed char *)(((int)stk + 4))) != 6)) goto L_C0224EA;
    *(unsigned char *)((v0_5 + 0x0)) = v0_6;
    *(unsigned char *)((v0_3 + 0x1)) = 0xA;
    *(unsigned char *)((v0_3 + 0x2)) = 0x6;
    FUN_0c187a88((v0_3 + 0x3), 0xC30999E, 0x6);
    v0_5 = *(signed char *)0xC30AF89;
    v0_2 = (v0_5);
    v0_4 = ((v0_3 + 0x9));
    if ((v0_5 == 0)) goto L_C0224C2;
    if ((v0_2 == 1)) goto L_C0224D0;
    if ((v0_2 == 3)) goto L_C0224D0;
    if (!((v0_2 == 2))) goto L_C0224DA;
    *(unsigned char *)((v0_4 + 0x0)) = 0x23;
    goto L_C0224DA;
    L_C0224DA:;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_3, (unsigned char)(*(signed char *)((v0_3 + 0x1))));
    v0_5 = (0xC1A8A1C);
    goto L_C022586;
    L_C0224D0:;
    *(unsigned char *)((v0_4 + 0x0)) = 0x25;
    goto L_C0224DA;
    L_C0224C2:;
    FUN_0c187a88((v0_3 + 0x3), 0xC1A8A14, 0x7);
    goto L_C0224DA;
    L_C0224EA:;
    if ((v0_4 != 97)) goto L_C0225BC;
    if (((*(signed char *)(((int)stk + 4))) != 7)) goto L_C022544;
    *(unsigned int *)(((int)stk + 8)) = (v0_3 + 0x3);
    *(int *)((int)stk + 0) = (v0_3 + 0x3);
    *(unsigned char *)(((v0_3 + 0x3) + 0x0)) = (FUN_0c187d88(0xC3099A6));
    *(unsigned char *)((v0_3 + 0x0)) = v0_6;
    *(unsigned int *)(((int)stk + 20)) = (v0_3 + 0x1);
    *(unsigned char *)(((v0_3 + 0x1) + 0x0)) = ((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x4);
    *(unsigned char *)((v0_3 + 0x2)) = 0x7;
    FUN_0c187a88((v0_3 + 0x4), 0xC3099A6, (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))));
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_3, (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))));
    *(unsigned char *)0xC30985A = 0x1;
    v0_5 = (0xC1A8A2C);
    goto L_C022586;
    L_C022544:;
    if ((v0_4 != 97)) goto L_C0225BC;
    if (((*(signed char *)(((int)stk + 4))) != 3)) goto L_C0225BC;
    *(unsigned char *)((v0_5 + 0x0)) = v0_6;
    *(unsigned char *)((v0_3 + 0x1)) = 0x11;
    *(unsigned char *)((v0_3 + 0x2)) = 0x3;
    v0_4 = ((v0_3 + 0x3));
    v0_5 = (0xC3099B8);
    if (((*(signed char *)0xC3099B8) == 0)) goto L_C02256C;
    R6 = (0xE);
    L_C022570:;
    FUN_0c187a88(v0_4, v0_5, R6);
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_3, (unsigned char)(*(signed char *)((v0_3 + 0x1))));
    *(unsigned char *)0xC30985A = 0x2;
    v0_5 = (0xC1A8A50);
    goto L_C022586;
    L_C02256C:;
    v0_5 = (0xC1A8A40);
    R6 = (0xE);
    goto L_C022570;
}

int FUN_0c0225de(void)
{
    int stk[198];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = FUN_0c022050();
    v0_1 = (v0_0);
    if ((v0_0 != 0)) goto L_C0225FE;
    L_C022966:;
    return v0_1;
    L_C0225FE:;
    FUN_0c0220c4((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4));
    v0_4 = *(signed char *)(((int)stk + 16));
    v0_3 = (((0x194 + ((int)stk + 4)) + 0x3));
    v0_0 = (0xC309994);
    v0_6 = (0xC187D88);
    v0_1 = ((0x194 + ((int)stk + 4)));
    v0_5 = (v0_4);
    v0_2 = (0xC187D74);
    v0_2 = (0xC3053B8);
    if ((v0_4 != 97)) goto L_C022668;
    if (((*(signed char *)(((int)stk + 8))) != 8)) goto L_C022668;
    *(unsigned char *)((v0_3 + 0x0)) = (FUN_0c187d88(0xC309A46));
    *(unsigned char *)((v0_1 + 0x0)) = 0x71;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x4);
    *(unsigned char *)((v0_1 + 0x2)) = 0x8;
    FUN_0c187a88((v0_1 + 0x4), 0xC309A46, (*(signed char *)((v0_3 + 0x0))));
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_1, (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))));
    v0_5 = (0xC1A8A64);
    L_C0228EE:;
    v0_1 = ((strcpy(v0_2, v0_5, R6)));
    goto L_C022966;
    L_C022668:;
    v0_4 = (0x0);
    if (!((v0_5 == 97))) goto L_C0227F2;
    if (((*(signed char *)(((int)stk + 8))) != 9)) goto L_C0226F8;
    *(unsigned char *)((v0_3 + 0x0)) = (FUN_0c187d88(0xC3099C6));
    *(unsigned char *)((v0_1 + 0x0)) = 0x71;
    *(unsigned char *)((v0_1 + 0x1)) = ((*(signed char *)((v0_3 + 0x0))) + 0x4);
    *(unsigned char *)((v0_1 + 0x2)) = 0x9;
    FUN_0c187a88((v0_1 + 0x4), 0xC3099C6, (*(signed char *)((v0_3 + 0x0))));
    v0_3 = (v0_4);
    goto L_C0226AE;
    L_C0227F2:;
    v0_6 = (0xC1864E0);
    v0_3 = ((*(int *)((v0_0 + 0x0))));
    if ((v0_5 != 111)) goto L_C02282E;
    if (((*(signed char *)(((int)stk + 8))) != 2)) goto L_C02282E;
    FUN_0c1864e0(v0_3, 0xC30A3F2, 0x1);
    *(unsigned char *)((v0_1 + 0x0)) = 0x7E;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)((v0_1 + 0x2)) = 0x1;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_1, (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))));
    v0_5 = (0xC1A8AA8);
    goto L_C0228EE;
    L_C02282E:;
    if ((v0_5 != 110)) goto L_C022872;
    if (((*(signed char *)(((int)stk + 8))) != 1)) goto L_C022872;
    FUN_0c1864e0(v0_3, (((int)stk + 4) + 0x8), 0x1);
    v0_3 = (0xC30AC5C);
    v0_1 = (v0_4);
    L_C022856:;
    if (((int)v0_1 < (int)(unsigned char)(*(signed char *)(((int)stk + 12))))) goto L_C02284A;
    *(unsigned char *)((v0_1 + 0xC30AC5C)) = v0_4;
    (((struct o0_uchar *)0xC309859)->v) = 0xB;
    (((struct o1_uchar *)0xC309859)->v) = v0_4;
    v0_5 = (0xC1A8AC0);
    goto L_C0228EE;
    L_C02284A:;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), (v0_1 + v0_3), 0x1);
    v0_1 = ((v0_1 + 0x1));
    goto L_C022856;
    L_C022872:;
    if ((v0_5 != 111)) goto L_C022958;
    if (((*(signed char *)(((int)stk + 8))) != 1)) goto L_C022958;
    FUN_0c1864e0(v0_3, 0xC309BC6, 0x1);
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), 0xC309BC8, 0x1);
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), 0xC309BC9, 0x1);
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    v0_3 = (0xC30999E);
    L_C02289A:;
    FUN_0c1864e0((*(int *)((v0_0 + 0x0))), v0_3, 0x1);
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + 0x1);
    v0_3 = ((v0_3 + 0x1));
    if (((int)(v0_5 + 0x1) < (int)0x6)) goto L_C02289A;
    *(unsigned char *)((v0_1 + 0x0)) = 0x7E;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)((v0_1 + 0x2)) = 0x1;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_1, (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0))));
    *(unsigned short *)0xC30EF6C = v0_4;
    if (((*(signed char *)0xC30AF89) != 0)) goto L_C0228E6;
    (((struct o1_uchar *)0xC309859)->v) = 0x7;
    (((struct o2_uchar *)0xC309859)->v) = v0_4;
    L_C0228EC:;
    v0_5 = (0xC1A8ACC);
    goto L_C0228EE;
    L_C0228E6:;
    (((struct o1_uchar *)0xC309859)->v) = 0x3;
    goto L_C0228EC;
    L_C022958:;
    v0_1 = ((FUN_0c0222a4((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4))));
    goto L_C022966;
    L_C0226AE:;
    v0_4 = (int)v0_3 < (int)(FUN_0c187d88(0xC3099C6));
    if (v0_4) goto L_C0226A2;
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_1, (*(signed char *)((v0_1 + 0x1))));
    v0_5 = (0xC1A8A7C);
    goto L_C0228EE;
    L_C0226A2:;
    *(unsigned char *)(((v0_3 + v0_1) + 0x4)) = ((*(signed char *)(((v0_3 + v0_1) + 0x4))) + 0x35);
    v0_3 = ((v0_3 + 0x1));
    goto L_C0226AE;
    L_C0226F8:;
    if ((v0_5 != 97)) goto L_C0227F2;
    if (((*(signed char *)(((int)stk + 8))) != 12)) goto L_C0227F2;
    (((struct o14_uchar *)(((int)stk + 4)))->v) = 0x71;
    *(unsigned char *)(((((int)stk + 4) + 0x14) + 0x2)) = 0xC;
    *(unsigned char *)(((((int)stk + 4) + 0x14) + 0x3)) = (*(signed char *)0xC30A3EE);
    *(unsigned char *)(((((int)stk + 4) + 0x14) + 0x4)) = (*(signed char *)0xC30A3EF);
    *(unsigned char *)(((((int)stk + 4) + 0x14) + 0x5)) = (*(signed char *)0xC30A3F0);
    *(unsigned char *)(((((int)stk + 4) + 0x14) + 0x6)) = (*(signed char *)0xC30A3F1);
    *(unsigned char *)(((((int)stk + 4) + 0x14) + 0x7)) = (FUN_0c187d88(0xC309AC6));
    v0_3 = (v0_4);
    v0_1 = ((((int)stk + 4) + 0x14));
    L_C02274C:;
    v0_5 = (int)v0_3 < (int)(FUN_0c187d88(0xC309AC6));
    if (v0_5) goto L_C022734;
    v0_3 = *(signed char *)((v0_1 + 0x7));
    *(unsigned int *)(((int)stk + 4)) = ((unsigned char)v0_3 + 0x8);
    *(int *)((int)stk + 0) = (((unsigned char)v0_3 + 0x8) + v0_1);
    *(unsigned char *)(((((unsigned char)v0_3 + 0x8) + v0_1) + 0x0)) = (FUN_0c187d88(0xC309B06));
    v0_3 = (v0_4);
    L_C022784:;
    v0_5 = (int)v0_3 < (int)(FUN_0c187d88(0xC309B06));
    if (v0_5) goto L_C02276E;
    v0_3 = *(int *)(((int)stk + 4));
    v0_5 = *(signed char *)((v0_1 + (*(int *)(((int)stk + 4)))));
    *(unsigned int *)(((int)stk + 4)) = (((unsigned char)v0_5 + v0_3) + 0x1);
    *(int *)((int)stk + 0) = ((((unsigned char)v0_5 + v0_3) + 0x1) + v0_1);
    *(unsigned char *)((((((unsigned char)v0_5 + v0_3) + 0x1) + v0_1) + 0x0)) = (FUN_0c187d88(0xC309B86));
    v0_3 = (v0_4);
    L_C0227C2:;
    v0_4 = (int)v0_3 < (int)(FUN_0c187d88(0xC309B86));
    if (v0_4) goto L_C0227AC;
    *(unsigned int *)(((int)stk + 20)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = (((*(signed char *)((v0_1 + (*(int *)(((int)stk + 4)))))) + (*(int *)(((int)stk + 4)))) + 0x1);
    FUN_0c186740((*(int *)((v0_0 + 0x0))), v0_1, (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))));
    v0_5 = (0xC1A8A94);
    goto L_C0228EE;
    L_C0227AC:;
    v0_4 = *(int *)(((int)stk + 4));
    *(unsigned char *)(((((v0_4 + v0_3) + v0_1) + 0x1) + 0x0)) = (*(signed char *)((v0_3 + 0xC309B86)));
    *(unsigned char *)(((((v0_4 + v0_3) + v0_1) + 0x1) + 0x0)) = ((*(signed char *)(((((v0_4 + v0_3) + v0_1) + 0x1) + 0x0))) + 0x35);
    v0_3 = ((v0_3 + 0x1));
    goto L_C0227C2;
    L_C02276E:;
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned char *)(((((v0_5 + v0_3) + v0_1) + 0x1) + 0x0)) = (*(signed char *)((v0_3 + 0xC309B06)));
    *(unsigned char *)(((((v0_5 + v0_3) + v0_1) + 0x1) + 0x0)) = ((*(signed char *)(((((v0_5 + v0_3) + v0_1) + 0x1) + 0x0))) + 0x35);
    v0_3 = ((v0_3 + 0x1));
    goto L_C022784;
    L_C022734:;
    *(unsigned char *)((((v0_3 + v0_1) + 0x8) + 0x0)) = (*(signed char *)((0xC309AC6 + v0_3)));
    *(unsigned char *)((((v0_3 + v0_1) + 0x8) + 0x0)) = ((*(signed char *)((((v0_3 + v0_1) + 0x8) + 0x0))) + 0x35);
    v0_3 = ((v0_3 + 0x1));
    goto L_C02274C;
}

int FUN_0c023072(void)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register int R10;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_5 = *(signed char *)0xC30985B;
    v0_4 = (v0_5);
    v0_2 = (0xFF000000);
    v0_0 = (0xC30985B);
    v0_1 = (0xC30EF64);
    v0_3 = (0xC30EF6C);
    if ((v0_5 == 0)) goto L_C0230B8;
    if ((v0_4 == 1)) goto L_C023114;
    if ((v0_4 == 2)) goto L_C023174;
    if ((v0_4 != 3)) goto L_C02309C;
    v0_3 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) >= (int)0xB4)) goto L_C0231CC;
    v0_3 = (short)(FUN_0c01cd2c(0x100)) != 0;
    if (v0_3) goto L_C02324C;
    L_C0231CC:;
    if (((int)(*(short *)0xC30EF6C) >= 0)) goto L_C02327E;
    L_C02324C:;
    FUN_0c0573cc(v0_2, 0x0, 0x14);
    *(unsigned short *)((v0_1 + 0x8)) = 0x14;
    *(unsigned char *)((v0_0 + 0x0)) = 0x6;
    L_C02327E:;
    v0_0 = FUN_0c022050();
    v0_4 = (v0_0);
    if ((v0_0 == 0)) goto L_C0232A2;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    v0_4 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    L_C0232A2:;
    return v0_4;
    L_C02309C:;
    if ((v0_4 != 4)) goto L_C0230A4;
    v0_2 = *(short *)((v0_3 + 0x0));
    *(unsigned short *)((v0_3 + 0x0)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C02327E;
    *(unsigned short *)((v0_1 + 0x8)) = 0x12C;
    FUN_0c018344();
    *(unsigned char *)((v0_0 + 0x0)) = 0x5;
    goto L_C02327E;
    L_C0230A4:;
    if ((v0_4 != 5)) goto L_C0230AC;
    v0_3 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) >= (int)0xB4)) goto L_C023244;
    v0_3 = (short)(FUN_0c01cd2c(0x100)) != 0;
    if (v0_3) goto L_C02324C;
    L_C023244:;
    if (((int)(*(short *)0xC30EF6C) >= 0)) goto L_C02327E;
    goto L_C02324C;
    L_C0230AC:;
    if ((v0_4 != 6)) goto L_C0230B4;
    v0_1 = *(short *)((v0_3 + 0x0));
    *(unsigned short *)((v0_3 + 0x0)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C02327E;
    FUN_0c01e9e4();
    L_C023272:;
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    goto L_C02327E;
    L_C0230B4:;
    goto L_C02327E;
    L_C023174:;
    v0_3 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) >= (int)0x168)) goto L_C023190;
    v0_3 = (short)(FUN_0c01cd2c(0x100)) != 0;
    if (v0_3) goto L_C023198;
    L_C023190:;
    if (((int)(*(short *)0xC30EF6C) >= 0)) goto L_C02327E;
    L_C023198:;
    if (((*(signed char *)0xC309BEC) == 0)) goto L_C02324C;
    ui_fade_reset();
    *(unsigned char *)((v0_0 + 0x0)) = 0x4;
    v0_4 = (0xC);
    L_C0231AC:;
    *(unsigned short *)((v0_1 + 0x8)) = v0_4;
    goto L_C02327E;
    L_C023114:;
    v0_4 = *(short *)((v0_3 + 0x0));
    *(unsigned short *)((v0_3 + 0x0)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) <= 0)) goto L_C023124;
    goto L_C02327E;
    L_C023124:;
    FUN_0c01e9e4();
    if (((*(signed char *)0xC30AC5C) != 0)) goto L_C02313E;
    if (((*(signed char *)0xC309BEC) != 0)) goto L_C02313E;
    goto L_C023272;
    L_C02313E:;
    FUN_0c01cb7c();
    FUN_0c0573c0(v0_2, 0x0, 0x14);
    if (((*(signed char *)0xC30AC5C) == 0)) goto L_C023164;
    FUN_0c017ef8();
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    v0_4 = (0x26C);
    L_C023170:;
    *(unsigned short *)((v0_1 + 0x8)) = v0_4;
    goto L_C02327E;
    L_C023164:;
    FUN_0c018344();
    *(unsigned char *)((v0_0 + 0x0)) = 0x3;
    v0_4 = (0x140);
    goto L_C023170;
    L_C0230B8:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    FUN_0c0573cc(v0_2, 0x0, 0x14);
    v0_4 = (0x14);
    goto L_C0231AC;
}

int FUN_0c0232ae(int a4, int a5)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R6;
    register int R8;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a5;
    v0_3 = *(signed char *)0xC30985B;
    v0_2 = (v0_3);
    v0_1 = (0xC30EF64);
    v0_0 = (0xC30985B);
    if ((v0_3 == 0)) goto L_C0232CC;
    if ((v0_2 == 1)) goto L_C0232E0;
    if ((v0_2 == 2)) goto L_C02334C;
    L_C02337C:;
    v0_0 = FUN_0c022050();
    v0_2 = (v0_0);
    if ((v0_0 == 0)) goto L_C0233A2;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    v0_2 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    L_C0233A2:;
    return v0_2;
    L_C02334C:;
    v0_2 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) >= (int)0x168)) goto L_C023368;
    v0_1 = (short)(FUN_0c01cd2c(0x100)) != 0;
    if (v0_1) goto L_C023370;
    L_C023368:;
    if (((int)(*(short *)0xC30EF6C) >= 0)) goto L_C02337C;
    L_C023370:;
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    goto L_C02337C;
    L_C0232E0:;
    v0_2 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C02337C;
    FUN_0c01e9e4();
    FUN_0c01cb7c();
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    FUN_0c017ef8();
    *(unsigned char *)((v0_0 + 0x0)) = 0x2;
    v0_2 = (0x26C);
    L_C02330E:;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    goto L_C02337C;
    L_C0232CC:;
    *(unsigned char *)((v0_0 + 0x0)) = ((*(signed char *)((v0_0 + 0x0))) + 0x1);
    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    v0_2 = (0x14);
    goto L_C02330E;
}

int FUN_0c0233ac(void)
{
    int stk[3];
    register int t0;
    register int t6;
    register int t17;
    register int t74;
    register int t77;
    int t46;

    t0 = *(signed char *)0xC30985B;
    switch (t0) {
    case 0:
        if (((*(signed char *)0xC309BE4) != (*(signed char *)0xC30542A)) && (t46 = *(signed char *)0xC30AF89, t46 == 3)) {
            (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
            FUN_0c01e9e4();
            FUN_0c01c2e0((*(signed char *)0xC30542A));
            FUN_0c0573c0(0xFF000000, 0x0, 0x14);
            *(unsigned short *)0xC30EF6C = 0x0;
        } else {
            (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
        }
        (((struct o0_ushort *)0xC30540C)->v) = 0xAC;
        (((struct o1E_uchar *)0xC30540C)->v) = (*(signed char *)0xC309BE4);
        memset(0xC30A354, 0x0, 0x12);
        memset(0xC30A366, 0x0, 0x80);
        (((struct o0_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o4_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o2_ushort *)0xC309BCA)->v) = 0x0;
        if ((*(signed char *)0xC30AF89) != 3) {
            (((struct o16_ushort *)0xC30540C)->v) = 0x0;
            (((struct o1C_ushort *)0xC30540C)->v) = 0x0;
            (((struct o1A_ushort *)0xC30540C)->v) = 0x0;
            (((struct o18_ushort *)0xC30540C)->v) = 0x0;
        }
        (((struct o6_ushort *)0xC309C6C)->v) = ((((((struct o0_short *)0xC309C6C)->v)) + ((((struct o2_short *)0xC309C6C)->v))) + ((((struct o4_short *)0xC309C6C)->v)));
        FUN_0c02d05c();
        break;
    case 1:
        (((struct o0_ushort *)0xC30540C)->v) = (((((struct o0_short *)0xC30540C)->v)) - 1);
        if ((int)((((struct o0_short *)0xC30540C)->v)) < 0) {
            (((struct o0_ushort *)0xC30540C)->v) = 0x21C;
            (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
        }
        break;
    case 2:
        (((struct o0_ushort *)0xC30540C)->v) = (((((struct o0_short *)0xC30540C)->v)) - 1);
        if ((int)((((struct o0_short *)0xC30540C)->v)) >= 0) {
            t6 = FUN_0c021eb4();
            if (t6 != 0) {
                (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
                (((struct o0_ushort *)0xC30540C)->v) = 0x10;
                FUN_0c01c38a();
            }
        } else {
            (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
            (((struct o0_ushort *)0xC30540C)->v) = 0x10;
            FUN_0c01c38a();
        }
        break;
    case 3:
        (((struct o0_ushort *)0xC30540C)->v) = (((((struct o0_short *)0xC30540C)->v)) - 1);
        if ((int)((((struct o0_short *)0xC30540C)->v)) >= 0) {
            t17 = FUN_0c021eb4();
            if (t17 != 0) {
                (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
                (((struct o1_uchar *)0xC30985A)->v) = 0x0;
            }
        } else {
            (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
        }
        break;
    }
    t74 = FUN_0c022050();
    t77 = t74;
    if (t74 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t77 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t77;
}
