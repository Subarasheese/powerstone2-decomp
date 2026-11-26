/* game/unsorted: functions 0C028600-0C028BA8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0185b4(void);
int FUN_0c01b0fc(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c028600(int a4, int a5);
int FUN_0c028698(void);
int FUN_0c02879e(void);
int FUN_0c0289e6(void);
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };


int FUN_0c028600(int a4, int a5)
{
    int stk[33];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R6;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a5;
    v0_4 = *(signed char *)0xC30985B;
    v0_0 = (v0_4);
    v0_1 = (0xC30EF64);
    v0_2 = (0x0);
    v0_3 = (0xC30985B);
    if ((v0_4 == 0)) goto L_C028622;
    if ((v0_0 == 1)) goto L_C028638;
    L_C028688:;
    return v0_0;
    L_C028638:;
    v0_4 = *(short *)((v0_1 + 0x8));
    *(unsigned short *)((v0_1 + 0x8)) = (v0_4 + 0x1);
    v0_0 = ((short)((v0_4 + 0x1) - 1));
    if (((int)(short)((v0_4 + 0x1) - 1) < (int)0x20)) goto L_C028688;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x3;
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    FUN_0c0185b4();
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    *(unsigned char *)0xC30AF9A = v0_2;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    v0_0 = (v0_2);
    goto L_C028688;
    L_C028622:;
    *(unsigned short *)((v0_1 + 0x8)) = v0_2;
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned char *)((v0_3 + 0x0)) = ((*(signed char *)((v0_3 + 0x0))) + 0x1);
    goto L_C028638;
}

int FUN_0c028698(void)
{
    int stk[37];
    register int t0;
    register int t40;
    register int t8;
    int t3;

    t0 = FUN_0c022050();
    t40 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 3)) {
            FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0x8), 0x1);
            t8 = *(signed char *)(((int)stk + 8));
            if (t8 != 0) {
                if (t8 != 1) {
                    if (t8 != 2) {
                    } else {
                        (((struct o1_uchar *)0xC309859)->v) = 0x4;
                    }
                    t40 = t8;
                } else {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x0;
                    t40 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                (((struct o0_uchar *)0xC309859)->v) = 0x1;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                t40 = t8;
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t40 = (FUN_0c02aa9e());
            } else {
                t40 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t40;
}

int FUN_0c02879e(void)
{
    int stk[36];

    int v0_2;
    int v0_0;
    int v0_1;
    int v0_3;
    int v0_4;
    int v0_5;
    int v0_6;
    float F0;
    float F15;
    int T_;
    int R6;
    int R3;
    int R2;
    int R1;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C0287C0;
    L_C0289D0:;
    return v0_0;
    L_C0287C0:;
    FUN_0c0220c4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    v0_3 = *(signed char *)(((int)stk + 12));
    v0_0 = (0x6);
    v0_1 = (0xC186740);
    v0_1 = (0xC1864E0);
    v0_1 = (0xC309994);
    v0_2 = ((((int)stk + 0) + 0x10));
    v0_6 = (v0_3);
    v0_4 = (0x0);
    v0_5 = (0x3);
    if ((v0_3 != 102)) goto L_C02881A;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C02881A;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    v0_4 = (0xC30A34C);
    L_C0287F6:;
    FUN_0c1864e0((*(int *)(v0_1)), v0_4, 0x1);
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x1);
    v0_4 = (v0_4 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)v0_0)) goto L_C0287F6;
    *(unsigned char *)(v0_2) = 0x76;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_5;
    v0_0 = (0x2);
    L_C0288C2:;
    (((struct o2_uchar *)(v0_2))->v) = v0_0;
    L_C02891E:;
    v0_0 = ((FUN_0c186740((*(int *)(v0_1)), v0_2, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))))));
    goto L_C0289D0;
    L_C02881A:;
    v0_3 = ((*(int *)(v0_1)));
    if ((v0_6 != 102)) goto L_C0288C6;
    if (((*(signed char *)(((int)stk + 4))) != 2)) goto L_C0288A0;
    FUN_0c1864e0(v0_3, (((int)stk + 0) + 0x8), 0x1);
    *(unsigned int *)(((int)stk + 0)) = 0xC30A354;
    v0_0 = (v0_4);
    L_C028880:;
    if (((int)v0_0 < (int)(unsigned char)(*(signed char *)(((int)stk + 8))))) goto L_C028874;
    *(unsigned char *)(v0_0 + 0xC30A354) = v0_4;
    *(unsigned char *)(v0_2) = 0x76;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_5;
    v0_0 = (v0_5);
    goto L_C0288C2;
    L_C028874:;
    FUN_0c1864e0((*(int *)(v0_1)), ((*(int *)(((int)stk + 0))) + v0_0), 0x1);
    v0_0 = (v0_0 + 0x1);
    goto L_C028880;
    L_C0288A0:;
    if ((v0_6 != 102)) goto L_C0288C6;
    if (((*(signed char *)(((int)stk + 4))) != 3)) goto L_C0288C6;
    FUN_0c1864e0(v0_3, 0xC30A3E6, 0x1);
    *(unsigned char *)(v0_2) = 0x76;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_5;
    v0_0 = (0x4);
    goto L_C0288C2;
    L_C0288C6:;
    v0_5 = (0x1);
    if ((v0_6 != 102)) goto L_C02892C;
    if (((*(signed char *)(((int)stk + 4))) != 4)) goto L_C02892C;
    FUN_0c1864e0(v0_3, 0xC30A3E8, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3E9, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3EA, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3EB, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3EC, 0x1);
    FUN_0c1864e0((*(int *)(v0_1)), 0xC30A3ED, 0x1);
    *(unsigned char *)(v0_2) = 0x77;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = 0x4;
    (((struct o2_uchar *)(v0_2))->v) = v0_5;
    (((struct o3_uchar *)(v0_2))->v) = v0_4;
    goto L_C02891E;
    L_C02892C:;
    if ((v0_6 != 103)) goto L_C02897A;
    if (((*(signed char *)(((int)stk + 4))) != 1)) goto L_C02897A;
    FUN_0c1864e0(v0_3, 0xC309993, 0x1);
    *(unsigned char *)0xC309993 = ((*(signed char *)0xC309993) - 1);
    *(unsigned char *)(v0_2) = 0x75;
    *(unsigned int *)(((int)stk + 0)) = (v0_2 + 0x1);
    (((struct o1_uchar *)(v0_2))->v) = v0_0;
    (((struct o2_uchar *)(v0_2))->v) = 0x9;
    (((struct o3_uchar *)(v0_2))->v) = v0_5;
    (((struct o4_uchar *)(v0_2))->v) = v0_5;
    (((struct o5_uchar *)(v0_2))->v) = (*(signed char *)0xC305420);
    v0_0 = FUN_0c186740((*(int *)(v0_1)), v0_2, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    v0_0 = (v0_0);
    goto L_C0289D0;
    L_C02897A:;
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C0289C0;
    v0_0 = ((FUN_0c02aa9e()));
    goto L_C0289D0;
    L_C0289C0:;
    v0_0 = ((FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4))));
    goto L_C0289D0;
}

