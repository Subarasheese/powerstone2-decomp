/* game/flow: functions 0C11ECA4-0C120DF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o154_int { char p[0x154]; int v; };
struct o15C_int { char p[0x15C]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c059c54(int);
extern int FUN_0c11efc0();
int FUN_0c11f114(int, int);
int FUN_0c11fcc6(int);
int FUN_0c11fe4a(int, int, int);
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c120362(void);
int FUN_0c120504(int, int, int, int);
int FUN_0c120654(int, int, int);
int FUN_0c120906(int, int, int, int, int);
int FUN_0c120cc4(int);
int FUN_0c1211b0(void);
int FUN_0c187798(void);
int FUN_0c11ef48(int a4, int a5, int a6, int a7);
int FUN_0c11ef66(void);
float FUN_0c11f1fe(int a4, int a5, int a6);
int FUN_0c11f56c(void);
int FUN_0c11ff8a(int a4, int a5, int a6, int a7);

int FUN_0c11ef48(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC4750AD;
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c11f114(a4, a5);
        }
        return ((int (*)(int, int, int, int))(FUN_0c11efc0))(a4, a5, a6, a7);
    }
    FUN_0c11ef66();
    return ((int (*)(void))(FUN_0c11efc0))();
}

int FUN_0c11ef66(void)
{
    int stk[7];

    (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
    (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
    FUN_0c03eff6();
    FUN_0c036de8(0x12, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c03ea04(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c059c54(0x12);
    FUN_0c120362();
    FUN_0c187798();
    FUN_0c187798();
    return (FUN_0c120504(0x0, 0x9D, (((int)stk + 0) + 0xC), ((int)stk + 0)));
}

float FUN_0c11f1fe(int a4, int a5, int a6)
{
    int stk[12];

    register int R1;
    register int R2;
    register float F0;
    register float F2;
    register float F3;
    register float F10;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = *(signed char *)0xC4750AE;
    v0_4 = (v0_8);
    v0_2 = (0x1);
    v0_3 = (0xC474F8C);
    v0_0 = (0x0);
    v0_1 = (0xC4750AC);
    if ((v0_8 == 0)) goto L_C11F278;
    if ((v0_4 == 1)) goto L_C11F308;
    if ((v0_4 != 2)) goto L_C11F22E;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F3BC;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x12C;
    L_C11F3BC:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C11F3D2;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    L_C11F3D2:;
    v0_2 = FUN_0c1211b0();
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C11F4AA;
    *(unsigned char *)((v0_1 + 0x2)) = 0x3;
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_4 = (v0_0);
    L_C11F4AA:;
    return F0;
    L_C11F22E:;
    if ((v0_4 != 3)) goto L_C11F236;
    v0_2 = ((int (*)(int, int, int))(FUN_0c187798))(v0_5, v0_6, v0_7);
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    FUN_0c120504(0x3, 0xF, (((int)stk + 8) + 0x10), (((int)stk + 8) + 0x4));
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    v0_2 = (((struct o154_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = (v0_1 + 0xC);
    FUN_0c120906(0x0, (*(int *)(((*(int *)(((int)stk + 8))) + 0x14))), (*(int *)(((v0_1 + 0xC) + 0x18))), v0_2, (((int)stk + 8) + 0x10));
    v0_2 = ((int (*)(void))(FUN_0c187798))();
    v0_2 = (((struct o15C_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_3 = (0x0);
    v0_7 = ((((int)stk + 8) + 0x10));
    if (((unsigned int)v0_2 > (unsigned int)0x0)) goto L_C11F456;
    v0_6 = (v0_3);
    L_C11F458:;
    FUN_0c120654(0x0, v0_6, v0_7);
    L_C11F490:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_4 = (v0_0);
    goto L_C11F4AA;
    L_C11F456:;
    v0_6 = ((*(int *)(((int)stk + 8))));
    goto L_C11F458;
    L_C11F236:;
    if ((v0_4 != 4)) goto L_C11F23E;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F47A;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x1E0;
    L_C11F47A:;
    v0_2 = FUN_0c1211b0();
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C11F486;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    L_C11F486:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C11F4AA;
    goto L_C11F490;
    L_C11F23E:;
    *(unsigned char *)((v0_1 + 0x1)) = ((*(signed char *)((v0_1 + 0x1))) + 0x1);
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    v0_4 = (v0_0);
    goto L_C11F4AA;
    L_C11F308:;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F324;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    FUN_0c120cc4(0x0);
    goto L_C11F3D2;
    L_C11F324:;
    v0_4 = *(int *)((v0_1 + 0x14));
    *(unsigned int *)((v0_1 + 0x14)) = (v0_4 - 1);
    if (((int)(v0_4 - 1) > 0)) goto L_C11F3D2;
    *(unsigned int *)((v0_1 + 0x14)) = 0x5A;
    v0_4 = (v0_0);
    v0_5 = (0x4);
    w0_0 = (140.0f);
    w0_1 = (-210.0f);
    L_C11F33E:;
    v0_6 = *(signed char *)(((((*(int *)((v0_1 + 0x18))) << 1) + v0_3) + 0x0));
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (float)v0_4;
    *(float *)(((int)stk + 36)) = w0_2;
    *(float *)(((int)stk + 40)) = w0_1;
    v0_7 = v0_2;
    *(int *)((int)stk + 4) = v0_7;
    *(int *)((int)stk + 0) = 0xC201828;
    FUN_0c120018(0xFFFFFF81, (unsigned char)v0_6, (*(signed char *)(((((*(int *)((v0_1 + 0x18))) << 1) + v0_3) + 0x1))), (((int)stk + 0) + 0x24), 0xC201828, v0_7);
    v0_6 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_6 + 0x1);
    if (((int)(v0_6 + 0x1) < (int)(*(int *)((v0_1 + 0x1C))))) goto L_C11F38E;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    goto L_C11F3D2;
    L_C11F38E:;
    v0_6 = (int)(v0_4 + 0x1) < (int)v0_5;
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C11F33E;
    goto L_C11F3D2;
    L_C11F278:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    *(unsigned int *)((v0_1 + 0x14)) = v0_0;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    *(unsigned int *)((v0_1 + 0x1C)) = v0_0;
    *(unsigned int *)((v0_1 + 0x20)) = v0_0;
    *(unsigned int *)((v0_1 + 0x24)) = v0_0;
    v0_4 = (0x8F);
    v0_5 = (v0_0);
    v0_6 = (0x3E7);
    v0_8 = (0x79);
    v0_9 = (0x90);
    L_C11F2F8:;
    if (((int)v0_5 < (int)v0_9)) goto L_C11F29C;
    if (((*(int *)((v0_1 + 0x1C))) == 0)) goto L_C11F308;
    *(unsigned char *)((v0_1 + 0x3)) = v0_2;
    goto L_C11F308;
    L_C11F29C:;
    if (((*(signed char *)((((v0_1 + 0x34) + v0_5) + 0x0))) == 0)) goto L_C11F2F6;
    *(unsigned char *)(((((*(int *)((v0_1 + 0x1C))) << 1) + v0_3) + 0x0)) = v0_5;
    *(unsigned char *)(((((*(int *)((v0_1 + 0x1C))) << 1) + v0_3) + 0x1)) = (*(signed char *)((v0_5 + (v0_1 + 0x34))));
    *(unsigned int *)((v0_1 + 0x1C)) = ((*(int *)((v0_1 + 0x1C))) + 0x1);
    v0_7 = (((v0_1 + 0x34) + v0_5));
    if (((int)v0_5 > (int)v0_8)) goto L_C11F2E2;
    v0_10 = *(int *)((v0_1 + 0x20));
    v0_7 = *(signed char *)((v0_7 + 0x0));
    *(unsigned int *)((v0_1 + 0x20)) = (v0_10 + v0_7);
    if (((int)(v0_10 + v0_7) <= (int)v0_6)) goto L_C11F2F6;
    *(unsigned int *)((v0_1 + 0x20)) = v0_6;
    L_C11F2F6:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C11F2F8;
    L_C11F2E2:;
    if (((int)v0_5 > (int)v0_4)) goto L_C11F2F6;
    v0_10 = *(int *)((v0_1 + 0x24));
    v0_7 = *(signed char *)((v0_7 + 0x0));
    *(unsigned int *)((v0_1 + 0x24)) = (v0_10 + v0_7);
    if (((int)(v0_10 + v0_7) <= (int)v0_6)) goto L_C11F2F6;
    *(unsigned int *)((v0_1 + 0x24)) = v0_6;
    goto L_C11F2F6;
}

int FUN_0c11f56c(void)
{
    int stk[7];

    (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
    (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
    FUN_0c03eff6();
    FUN_0c036de8(0x12, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c059c54(0x12);
    FUN_0c03ea04(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    FUN_0c120362();
    FUN_0c187798();
    FUN_0c187798();
    return (FUN_0c120504(0x2, 0xE, (((int)stk + 0) + 0xC), ((int)stk + 0)));
}

int FUN_0c11ff8a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x2))) & 4) != 0) {
            return FUN_0c11fe4a(a4, a5, a6);
        }
        FUN_0c11fcc6(a4);
        if (((int)(*(signed char *)0xC4750AD) <= (int)0x1) && (t0 = *(signed char *)0xC4750AE, (int)t0 <= (int)0x2)) {
            t2 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((*(signed char *)((a4 + 0x2))) & 4) != 0) {
        return FUN_0c11fe4a(a4, a5, a6);
    }
    FUN_0c11fcc6(a4);
    if (((int)(*(signed char *)0xC4750AD) <= (int)0x1) && (t0 = *(signed char *)0xC4750AE, (int)t0 <= (int)0x2)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
