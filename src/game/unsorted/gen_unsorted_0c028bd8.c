/* game/unsorted: functions 0C028BD8-0C02913E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
int FUN_0c01c81e(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c021eb4(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c101d38(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c028bd8(void);
int FUN_0c028d60(void);
void FUN_0c028e82(int a4, int a5, int a6);
int FUN_0c028eb4(void);
int FUN_0c0290a2(void);

int FUN_0c028bd8(void)
{
    int stk[37];
    register int t0;
    register int t8;
    register int t23;
    register int t26;
    register int t29;
    register int t32;
    register int t44;
    int t3;
    int t24;
    int t27;
    int t30;
    int t33;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 3)) {
            FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0x8), 0x1);
            t8 = *(signed char *)(((int)stk + 8));
            t44 = t8;
            if (t8 != 1) {
            } else {
                (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                (((struct o0_uchar *)0xC30985A)->v) = 0x2;
                (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                t44 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t44 = (FUN_0c02aa9e());
            } else {
                t44 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    } else {
        t23 = FUN_0c01cd2c(0x800);
        if (((short)t23 != 0) && (t24 = *(signed char *)0xC305416, t24 != 0)) {
            *(unsigned char *)0xC305416 = 0x0;
            t44 = (FUN_0c05aab6(0x0, 0x5));
        } else {
            t26 = FUN_0c01cd2c(0x400);
            if (((short)t26 != 0) && (t27 = *(signed char *)0xC305416, t27 == 0)) {
                *(unsigned char *)0xC305416 = 0x1;
                t44 = (FUN_0c05aab6(0x0, 0x5));
            } else {
                t29 = FUN_0c021ee2();
                if ((t29 != 0) && (t30 = *(signed char *)0xC305416, t30 == 0)) {
                    *(unsigned char *)0xC305416 = 0x1;
                    t44 = (FUN_0c05aab6(0x0, 0x5));
                } else {
                    t32 = FUN_0c01cd2c(0x101);
                    t44 = (short)t32;
                    if (((short)t32 != 0) && (t33 = *(signed char *)0xC305416, t33 != 0)) {
                        (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x75;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x4;
                        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
                        t44 = (FUN_0c05aab6(0x0, 0x3));
                    }
                }
            }
        }
    }
    return t44;
}

int FUN_0c028d60(void)
{
    int stk[37];
    register int t0;
    register int t49;
    register int t2;
    register int t3;
    register int t9;
    int t18;

    t0 = FUN_0c022050();
    t49 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 == 101) {
            if ((*(signed char *)(((int)stk + 4))) == 3) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t9 = *(signed char *)(((int)stk + 0));
                t49 = t9;
                if (t9 == 1) {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o0_uchar *)0xC30985A)->v) = 0x2;
                    (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                    t49 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                if ((t2 == 101) && (t18 = *(signed char *)(((int)stk + 4)), t18 == 4)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t49 = *(signed char *)(((int)stk + 0));
                    if (t49 == 1) {
                        (((struct o0_uchar *)0xC30985A)->v) = 0x7;
                        *(unsigned short *)0xC30EF6C = 0x0;
                    } else {
                        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) - 1);
                    }
                } else {
                    if ((*(signed char *)0xC30AF9A) != 0) {
                        t49 = (FUN_0c02aa9e());
                    } else {
                        t49 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t49 = (FUN_0c02aa9e());
            } else {
                t49 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t49;
}

void FUN_0c028e82(int a4, int a5, int a6)
{
    if ((*(signed char *)0xC30B700) == 0) {
        (((struct o0_uchar *)0xC30B700)->v) = ((*(signed char *)0xC30B700) + 0x1);
        (((struct o2_ushort *)0xC30B700)->v) = 0x5C;
    } else {
        (((struct o2_ushort *)0xC30B700)->v) = (((((struct o2_short *)0xC30B700)->v)) - 1);
        if (((((struct o2_short *)0xC30B700)->v)) == 0) {
            (((struct o2_ushort *)0xC30B700)->v) = 0x0;
            (((struct o0_uchar *)0xC30B700)->v) = 0x0;
            *(unsigned int *)0xC30A3F8 = 0x2;
        }
    }
}

int FUN_0c028eb4(void)
{
    int stk[100];

    register int R1;
    register int R2;
    register int R3;
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
    (((struct o7_uchar *)0xC30B700)->v) = 0x1;
    v0_3 = (FUN_0c022050()) == 0;
    v0_0 = (0xC309E06);
    v0_1 = (0xC30B701);
    v0_2 = (0xC101D38);
    v0_2 = (0x1);
    if (v0_3) goto L_C028F46;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C028F38;
    v0_3 = ((FUN_0c02aa9e()));
    L_C02908E:;
    return v0_3;
    L_C028F38:;
    FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    L_C028F46:;
    v0_3 = (signed char)(FUN_0c01c81e(0xC30B701, 0x1, 0x3)) == 0;
    if (v0_3) goto L_C028F70;
    if (((*(signed char *)((v0_0 + 0x0))) != 2)) goto L_C028F84;
    v0_3 = (FUN_0c101d38(0x0)) == 0;
    if (v0_3) goto L_C028F6C;
    v0_3 = (FUN_0c101d38(0x1)) != 0;
    if (v0_3) goto L_C028F84;
    L_C028F6C:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    L_C028F8C:;
    if (((*(signed char *)((v0_0 + 0x0))) != 2)) goto L_C028FA4;
    v0_3 = (FUN_0c101d38(0x0)) == 0;
    if (v0_3) goto L_C028FA2;
    v0_3 = (FUN_0c101d38(0x1)) != 0;
    if (v0_3) goto L_C028FA4;
    L_C028FA2:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    L_C028FA4:;
    v0_3 = (((struct o4_short *)0xC30B700)->v);
    (((struct o4_ushort *)0xC30B700)->v) = (v0_3 + 0x1);
    if (((int)(short)(v0_3 + 0x1) <= (int)0x708)) goto L_C028FB8;
    (((struct o6_uchar *)0xC30B700)->v) = v0_2;
    L_C028FB8:;
    v0_4 = FUN_0c021eb4();
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C028FCA;
    if (((*(signed char *)0xC30B706) == 0)) goto L_C02908E;
    L_C028FCA:;
    *(unsigned short *)0xC30EF6C = 0x0;
    FUN_0c05aab6(0x0, 0x3);
    v0_4 = ((((int)stk + 0) + 0x10));
    v0_5 = (0xC30A3F8);
    v0_6 = (0xA);
    v0_7 = (0x6);
    v0_8 = (0x75);
    v0_9 = (0x0);
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C02905A;
    if (((*(signed char *)0xC30B706) != 0)) goto L_C02905A;
    v0_0 = *(signed char *)((v0_0 + 0x0));
    v0_3 = (v0_0);
    if ((v0_0 == 3)) goto L_C029050;
    *(unsigned int *)((v0_5 + 0x0)) = 0x3;
    *(unsigned char *)((v0_4 + 0x0)) = v0_8;
    *(unsigned int *)(((int)stk + 12)) = (v0_4 + 0x1);
    *(unsigned char *)(((v0_4 + 0x1) + 0x0)) = v0_6;
    *(unsigned char *)((v0_4 + 0x2)) = v0_7;
    FUN_0c187a88((v0_4 + 0x3), 0xC30A34C, 0x6);
    v0_3 = (v0_2);
    L_C02907E:;
    *(unsigned char *)((v0_4 + 0x9)) = v0_3;
    v0_3 = ((FUN_0c186740((*(int *)0xC309994), v0_4, (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))))));
    goto L_C02908E;
    L_C029050:;
    *(unsigned int *)((v0_5 + 0x0)) = 0x9;
    (((struct o0_uchar *)0xC30B700)->v) = v0_9;
    goto L_C02908E;
    L_C02905A:;
    *(unsigned int *)((v0_5 + 0x0)) = 0x8;
    *(unsigned char *)((v0_4 + 0x0)) = v0_8;
    *(unsigned int *)(((int)stk + 12)) = (v0_4 + 0x1);
    *(unsigned char *)(((v0_4 + 0x1) + 0x0)) = v0_6;
    *(unsigned char *)((v0_4 + 0x2)) = v0_7;
    FUN_0c187a88((v0_4 + 0x3), 0xC30A34C, 0x6);
    v0_3 = (v0_9);
    goto L_C02907E;
    L_C028F84:;
    FUN_0c05aab6(0x0, 0x5);
    goto L_C028F8C;
    L_C028F70:;
    v0_3 = (FUN_0c021ee2()) == 0;
    if (v0_3) goto L_C028F8C;
    if (((*(signed char *)0xC30B701) != 0)) goto L_C028F8C;
    *(unsigned char *)((v0_1 + 0x0)) = v0_2;
    goto L_C028F84;
}

int FUN_0c0290a2(void)
{
    int stk[100];
    register int t0;
    register int t20;
    register int t11;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 + 0x1);
    t20 = (short)(t0 + 0x1);
    if ((short)(t0 + 0x1) == 16) {
        t20 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
    }
    if ((int)(*(short *)0xC30EF6C) >= (int)0x24) {
        *(unsigned short *)0xC30EF6C = 0x0;
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x77;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        *(unsigned int *)0xC30A3F8 = ((*(int *)0xC30A3F8) + 0x1);
        t11 = FUN_0c022050();
        t20 = t11;
        if (t11 != 0) {
            FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
            if ((*(signed char *)0xC30AF9A) != 0) {
                t20 = (FUN_0c02aa9e());
            } else {
                t20 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
            }
        }
    }
    return t20;
}
