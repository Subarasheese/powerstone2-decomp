/* game/unsorted: functions 0C030EEC-0C03132C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15C_int { char p[0x15C]; int v; };
struct o44_short { char p[0x44]; short v; };
struct o78_int { char p[0x78]; int v; };
int FUN_0c057cfa(int, int);
int FUN_0c030eec(int a4, int a5);
int FUN_0c030f60(int a4, int a5);
int FUN_0c030f92(int a4, int a5);
int FUN_0c030ffc(int a4);
int FUN_0c03107c(int a4);
int FUN_0c03119c(int a4);
int FUN_0c0311fe(int a4);
int FUN_0c031294(int a4);
int FUN_0c0312ee(int a4);

int FUN_0c030eec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)(((a5 * 0x98) + 0xC541D20));
    t1 = (int)((int)t0 / (int)0xA);
    t2 = (int)((int)t0 % (int)0xA);
    if (t1 == 0) {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB9C) + 0x0))) + 0x5) + 0x0)) = 0x20;
    } else {
        *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB9C) + 0x0))) + 0x5) + 0x0)) = (t1 + 0x10);
    }
    *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EB9C) + 0x0))) + 0x6) + 0x0)) = (t2 + 0x10);
    return FUN_0c057cfa((*(int *)((a4 + (a5 << 2)))), (*(int *)(((a5 << 2) + 0xC20EB9C))));
}

int FUN_0c030f60(int a4, int a5)
{
    *(unsigned char *)((((*(int *)((((a5 << 2) + 0xC20EBEC) + 0x0))) + 0xE) + 0x0)) = ((*(signed char *)(((a5 * 0x98) + 0xC541D26))) + 0x10);
    return FUN_0c057cfa((*(int *)((a4 + (a5 << 2)))), (*(int *)((((a5 << 2) + 0xC20EBEC) + 0x0))));
}

int FUN_0c030f92(int a4, int a5)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((t0 + (((a5 * 0x98) + 0xC541CDC) + 0x68)));
        t3 = ((*(int *)((((a5 << 2) + 0xC20EC24) + 0x0))) + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t3 + 0x0)) = t2;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return FUN_0c057cfa((*(int *)((a4 + (a5 << 2)))), (*(int *)(((a5 << 2) + 0xC20EC24))));
}

int FUN_0c030ffc(int a4)
{
    register int t0;
    register int t1;
    int t2;

    t0 = *(signed char *)0xC541F3D;
    if ((unsigned char)t0 == 2) {
        t1 = *(int *)0xC542098;
        if ((*(signed char *)0xC542254) == 0) {
            if ((*(signed char *)0xC5429B0) == 0) {
                if ((*(signed char *)0xC3BD444) != 0) {
                    if ((t1 & 0x20) != 0) {
                        t2 = *(signed char *)0xC5429B4;
                        if ((t2 != 0) && (t2 != 4)) {
                            return t2;
                        }
                        return FUN_0c057cfa((*(int *)(((((((struct o78_int *)(a4))->v)) << 2) + 0xC20EAA4))), 0xC1A90B6);
                    }
                    return 0xC3BD444;
                }
                return 0xC3BD444;
            }
            return (t1 & 0x20);
        }
        if ((t1 & 0x20) != 0) {
            t2 = *(signed char *)0xC5429B4;
            if ((t2 != 0) && (t2 != 4)) {
                return t2;
            }
            return FUN_0c057cfa((*(int *)(((((((struct o78_int *)(a4))->v)) << 2) + 0xC20EAA4))), 0xC1A90B6);
        }
        return (t1 & 0x20);
    }
    return (unsigned char)t0;
}

int FUN_0c03107c(int a4)
{
    int stk[1];

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
    v0_5 = a4;
    v0_2 = *(signed char *)0xC541F3D;
    v0_0 = ((unsigned char)v0_2);
    v0_6 = (0xC541F3C);
    v0_1 = (v0_5);
    if (((unsigned char)v0_2 != 2)) goto L_C031162;
    v0_5 = (((struct o15C_int *)(v0_6))->v);
    *(unsigned int *)(((int)stk + 0)) = 0xC20EAA4;
    v0_0 = ((v0_5 & 0x20));
    v0_6 = (0x0);
    v0_7 = (0xC5429A8);
    v0_2 = (0xC3BD444);
    v0_3 = (0x4);
    v0_4 = (0x1);
    v0_5 = ((v0_5 & 0x20));
    v0_8 = (0xC057CFA);
    if (((*(signed char *)0xC542254) != 0)) goto L_C0310CA;
    if (((*(signed char *)0xC5429B0) != 0)) goto L_C031118;
    v0_0 = (0xC3BD444);
    if (((*(signed char *)0xC3BD444) == 0)) goto L_C031118;
    L_C0310CA:;
    if ((v0_5 == 0)) goto L_C031162;
    if (((*(signed char *)((v0_7 + 0xC))) != 0)) goto L_C0310E2;
    FUN_0c057cfa((*(int *)(((((((struct o78_int *)(v0_1))->v)) << 2) + (*(int *)(((int)stk + 0)))))), 0xC1A90B6);
    L_C0310E2:;
    v0_5 = *(signed char *)((v0_7 + 0xC));
    v0_0 = (v0_5);
    if ((v0_5 != 4)) goto L_C031162;
    v0_5 = (v0_6);
    v0_6 = (v0_6);
    L_C0310EC:;
    v0_7 = (((int)v0_4 << (int)v0_5) & (unsigned char)(*(signed char *)((v0_2 + 0x0)))) == 0;
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C0310FC;
    v0_6 = ((v0_6 + 0x1));
    L_C0310FC:;
    if (((int)v0_5 < (int)v0_3)) goto L_C0310EC;
    if (((int)v0_6 >= (int)0x2)) goto L_C031162;
    v0_0 = ((FUN_0c057cfa((*(int *)(((((((struct o78_int *)(v0_1))->v)) << 2) + 0xC20EAA4))), 0xC1A90B6)));
    L_C031162:;
    return v0_0;
    L_C031118:;
    if ((v0_5 == 0)) goto L_C031162;
    if (((*(signed char *)((v0_7 + 0xC))) != 0)) goto L_C031130;
    FUN_0c057cfa((*(int *)(((((((struct o78_int *)(v0_1))->v)) << 2) + (*(int *)(((int)stk + 0)))))), 0xC1A90B2);
    L_C031130:;
    v0_5 = *(signed char *)((v0_7 + 0xC));
    v0_0 = (v0_5);
    if ((v0_5 != 4)) goto L_C031162;
    v0_5 = (v0_6);
    v0_6 = (v0_6);
    L_C03113A:;
    v0_7 = (((int)v0_4 << (int)v0_5) & (unsigned char)(*(signed char *)((v0_2 + 0x0)))) == 0;
    v0_5 = ((v0_5 + 0x1));
    if (v0_7) goto L_C03114A;
    v0_6 = ((v0_6 + 0x1));
    L_C03114A:;
    if (((int)v0_5 < (int)v0_3)) goto L_C03113A;
    if (((int)v0_6 >= (int)0x2)) goto L_C031162;
    v0_0 = ((FUN_0c057cfa((*(int *)(((((((struct o78_int *)(v0_1))->v)) << 2) + 0xC20EAA4))), 0xC1A90B2)));
    goto L_C031162;
}

int FUN_0c03119c(int a4)
{
    register int t0;
    register int t4;
    int t7;

    t0 = *(signed char *)0xC5429B1;
    if (t0 == 0) {
        t4 = *(signed char *)0xC541F3D;
        if ((unsigned char)t4 == 2) {
            t7 = *(signed char *)0xC5429B4;
            if (((((struct o44_short *)(a4))->v)) != 0) {
                if ((t7 != 0) && (t7 != 4)) {
                    return t7;
                }
                return FUN_0c030eec(0xC20EAA4, ((((struct o78_int *)(a4))->v)));
            }
            if ((t7 != 0) && (t7 != 4)) {
                return t7;
            }
            return FUN_0c057cfa((*(int *)((0xC20EAA4 + (((((struct o78_int *)(a4))->v)) << 2)))), 0xC1A90BA);
        }
        return (unsigned char)t4;
    }
    return t0;
}

int FUN_0c0311fe(int a4)
{
    register int t0;
    int t5;
    register int t7;

    t0 = *(signed char *)0xC541F3D;
    if ((unsigned char)t0 == 2) {
        t5 = *(signed char *)0xC5429B4;
        if ((*(signed char *)0xC542254) != 0) {
            t7 = *(int *)0xC542098;
            if ((t7 & 32) != 0) {
                if ((t5 != 0) && (t5 != 4)) {
                    return t5;
                }
                return FUN_0c057cfa((*(int *)((0xC20EAA4 + (((((struct o78_int *)(a4))->v)) << 2)))), 0xC1A90B6);
            }
            return t7;
        }
        if ((t5 != 0) && (t5 != 4)) {
            return t5;
        }
        return FUN_0c030f60(0xC20EAA4, ((((struct o78_int *)(a4))->v)));
    }
    return (unsigned char)t0;
}

int FUN_0c031294(int a4)
{
    register int t0;
    int t1;

    t0 = *(signed char *)0xC541F3D;
    if ((unsigned char)t0 == 2) {
        t1 = *(signed char *)0xC5429B4;
        if ((t1 != 0) && (t1 != 4)) {
            return t1;
        }
        FUN_0c057cfa((*(int *)(((((((struct o78_int *)(a4))->v)) << 2) + 0xC20EAD4))), (*(int *)((((*(signed char *)((a4 + 0x7))) << 2) + 0xC20EBFC))));
        t1 = *(signed char *)0xC5429B4;
        if ((t1 != 0) && (t1 != 4)) {
            return t1;
        }
        return FUN_0c030f92(0xC20EAEC, ((((struct o78_int *)(a4))->v)));
    }
    return (unsigned char)t0;
}

int FUN_0c0312ee(int a4)
{
    register int t0;
    register int t3;
    int t5;

    t0 = *(signed char *)0xC541F3D;
    if ((unsigned char)t0 == 2) {
        t3 = *(int *)0xC542098;
        if ((t3 & 32) != 0) {
            t5 = *(signed char *)0xC5429B4;
            if ((t5 != 0) && (t5 != 4)) {
                return t5;
            }
            return FUN_0c057cfa((*(int *)(((((((struct o78_int *)(a4))->v)) << 2) + 0xC20EAA4))), 0xC1A90B8);
        }
        return t3;
    }
    return (unsigned char)t0;
}
