/* game/unsorted: functions 0C027048-0C027668, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c014a68(void);
int FUN_0c015844(int, int, int, int, int, int, int, int, int);
int FUN_0c01a9c0(void);
int FUN_0c01e9e4(void);
int FUN_0c021f28(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c02a94e(void);
int FUN_0c02aa9e(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c187d88(int);
int FUN_0c027048(void);
int FUN_0c0270d6(void);
int FUN_0c0270f8(void);
int FUN_0c02740e(void);
int FUN_0c027502(void);

int FUN_0c027048(void)
{
    int stk[33];
    register int t11;

    FUN_0c187a88(0xC30A34C, 0xC30A404, 0x6);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x5;
    FUN_0c187a88(((((int)stk + 0) + 0x4) + 0x3), 0xC30A34C, 0x6);
    *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x9) + 0x0)) = ((FUN_0c187d88(0xC309D86)) + 0x2);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0xA)) = ((*(signed char *)0xC30541F) - 128);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0xB)) = ((*(signed char *)0xC305420) - 128);
    FUN_0c187a88(((((int)stk + 0) + 0x4) + 0xC), 0xC309D86, (*(signed char *)((((((int)stk + 0) + 0x4) + 0x9) + 0x0))));
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = ((*(signed char *)((((((int)stk + 0) + 0x4) + 0x9) + 0x0))) + 0xA);
    t11 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
    (((struct o1_uchar *)0xC30985A)->v) = 0x0;
    *(unsigned char *)0xC30A402 = 0x0;
    return t11;
}

int FUN_0c0270d6(void)
{
    register int t0;

    t0 = *(signed char *)0xC309859;
    if (t0 != 7) {
        (((struct o1_uchar *)0xC309859)->v) = 0x7;
    } else {
        (((struct o0_uchar *)0xC309859)->v) = 0x1;
        (((struct o1_uchar *)0xC309859)->v) = 0x0;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
    }
    *(unsigned short *)0xC30A51C = 0x0;
    return t0;
}

int FUN_0c0270f8(void)
{
    int stk[36];
    register int t2;
    register int t3;
    register int t5;
    register int t20;
    register int t22;
    register int t27;
    register int t29;
    int t9;

    if ((*(int *)0xC30A3F8) != 0) {
        return (FUN_0c02a94e());
    }
    t2 = FUN_0c022050();
    if (t2 == 0) {
        t3 = FUN_0c021f28();
        t5 = t3;
        if (t3 == 0) {
            t5 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
        }
        return t5;
    }
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    if (((*(signed char *)(((int)stk + 0))) == 101) && (t9 = *(signed char *)(((int)stk + 4)), t9 == 6)) {
        FUN_0c0221b0();
        if ((*(signed char *)0xC30542B) != 0) {
            *(unsigned int *)0xC30A3F8 = 0x1;
            return (FUN_0c01a9c0());
        }
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0xA;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x6;
        FUN_0c187a88(((((int)stk + 0) + 0x10) + 0x3), 0xC30A34C, 0x6);
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x9)) = 0x2;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        t20 = FUN_0c021f28();
        t22 = t20;
        if (t20 == 0) {
            t22 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
        }
        return t22;
    }
    if ((*(signed char *)0xC30AF9A) != 0) {
        return (FUN_0c02aa9e());
    }
    FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    t27 = FUN_0c021f28();
    t29 = t27;
    if (t27 == 0) {
        t29 = (FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16)));
    }
    return t29;
}

int FUN_0c02740e(void)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R11;
    register int R12;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = (FUN_0c022050()) == 0;
    if (v0_0) goto L_C02744E;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C027440;
    return (FUN_0c02aa9e());
    L_C027440:;
    FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    L_C02744E:;
    v0_5 = *(signed char *)0xC30985B;
    v0_0 = (v0_5);
    v0_1 = (0xC30985B);
    v0_2 = (0x0);
    v0_3 = (0xC30EF6C);
    v0_4 = (0xC30EF64);
    if ((v0_5 == 0)) goto L_C02746A;
    if ((v0_0 == 1)) goto L_C0274B8;
    if (!((v0_0 == 2))) goto L_C0274FA;
    v0_4 = *(short *)((v0_3 + 0x0));
    *(unsigned short *)((v0_3 + 0x0)) = (v0_4 + 0x1);
    if (((int)(short)(v0_4 + 0x1) < (int)0x14)) goto L_C0274FA;
    *(unsigned char *)0xC30985A = v0_2;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    goto L_C0274FA;
    L_C0274FA:;
    return v0_0;
    L_C0274B8:;
    v0_5 = *(short *)((v0_3 + 0x0));
    *(unsigned short *)((v0_3 + 0x0)) = (v0_5 + 0x1);
    if (((int)(short)(v0_5 + 0x1) < (int)0x14)) goto L_C0274FA;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_4 + 0x8)) = v0_2;
    FUN_0c01e9e4();
    FUN_0c014a68();
    v0_0 = ((FUN_0c015844(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16))));
    goto L_C0274FA;
    L_C02746A:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned short *)((v0_4 + 0x8)) = v0_2;
    v0_0 = ((FUN_0c0573cc(0xFF000000, 0x0, 0x14)));
    goto L_C0274FA;
}

int FUN_0c027502(void)
{
    int stk[36];

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
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C027524;
    L_C027652:;
    return v0_0;
    L_C027524:;
    FUN_0c0220c4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_4 = *(signed char *)(((int)stk + 8));
    v0_0 = (0x0);
    v0_1 = ((((int)stk + 0) + 0x10));
    v0_2 = (0xC309994);
    v0_3 = (0xC1864E0);
    v0_5 = ((*(int *)0xC309994));
    v0_6 = (v0_4);
    v0_3 = (0x3);
    if ((v0_4 != 102)) goto L_C027632;
    if (((*(signed char *)(((int)stk + 4))) != 2)) goto L_C027586;
    FUN_0c1864e0(v0_5, ((int)stk + 0), 0x1);
    v0_4 = (v0_0);
    v0_5 = (0xC30A354);
    L_C02756A:;
    if (((int)v0_4 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C02755E;
    *(unsigned char *)((v0_4 + 0xC30A354)) = v0_0;
    *(unsigned char *)((v0_1 + 0x0)) = 0x76;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = v0_3;
    v0_0 = (v0_3);
    L_C0275A8:;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    v0_0 = ((FUN_0c186740((*(int *)((v0_2 + 0x0))), v0_1, (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))))));
    goto L_C027652;
    L_C02755E:;
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), (v0_4 + v0_5), 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C02756A;
    L_C027586:;
    if ((v0_6 != 102)) goto L_C027632;
    if (((*(signed char *)(((int)stk + 4))) != 3)) goto L_C0275E8;
    FUN_0c1864e0(v0_5, 0xC30A3E6, 0x1);
    *(unsigned char *)((v0_1 + 0x0)) = 0x76;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 + 0x1);
    *(unsigned char *)(((v0_1 + 0x1) + 0x0)) = v0_3;
    v0_0 = (0x4);
    goto L_C0275A8;
    L_C0275E8:;
    if ((v0_6 != 102)) goto L_C027632;
    if (((*(signed char *)(((int)stk + 4))) != 4)) goto L_C027632;
    FUN_0c1864e0(v0_5, 0xC30A3E8, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3E9, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3EA, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3EB, 0x1);
    FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3EC, 0x1);
    v0_1 = FUN_0c1864e0((*(int *)((v0_2 + 0x0))), 0xC30A3ED, 0x1);
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    (((struct o0_uchar *)0xC309993)->v) = v0_0;
    v0_0 = (v0_1);
    goto L_C027652;
    L_C027632:;
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C027644;
    v0_0 = ((FUN_0c02aa9e()));
    goto L_C027652;
    L_C027644:;
    v0_0 = ((FUN_0c0222a4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4))));
    goto L_C027652;
}
