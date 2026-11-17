/* game/menu/option: functions 0C02A6B8-0C02AAE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
int FUN_0c01a9c0(void);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c01f6f8(void);
int FUN_0c021f28(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c0232ae(int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c186380(int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c02a6b8(int a4, int a5, int a6);
int FUN_0c02a838(void);
int FUN_0c02a888(void);
int FUN_0c02a8d0(void);
int FUN_0c02a8de(void);
int FUN_0c02a8ec(void);
int FUN_0c02a8fa(void);
int FUN_0c02a908(void);
int FUN_0c02a916(void);
int FUN_0c02a924(void);
int FUN_0c02a932(void);
int FUN_0c02a940(void);
int FUN_0c02a94e(void);
int FUN_0c02a95c(void);
int FUN_0c02aa9e(void);
int FUN_0c02aad2(void);

int FUN_0c02a6b8(int a4, int a5, int a6)
{
    int stk[4];

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
    v0_4 = a4;
    v0_3 = a5;
    v0_5 = a6;
    v0_0 = (0xC30EF64);
    v0_2 = (0xC30985B);
    v0_1 = (0xC30985A);
    if (((*(signed char *)0xC30985B) == 0)) goto L_C02A6DA;
    v0_2 = *(short *)((v0_0 + 0x8));
    *(unsigned short *)((v0_0 + 0x8)) = (v0_2 - 1);
    v0_4 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C02A824;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    L_C02A816:;
    *(unsigned short *)((v0_0 + 0x8)) = 0x14;
    v0_4 = ((FUN_0c0573cc(0xFF000000, 0x0, 0x14)));
    L_C02A824:;
    return v0_4;
    L_C02A6DA:;
    if (((*(int *)0xC30A3F8) == 0)) goto L_C02A6EA;
    v0_4 = ((FUN_0c02a94e()));
    goto L_C02A824;
    L_C02A6EA:;
    v0_4 = (FUN_0c022050()) == 0;
    v0_3 = (0x0);
    if (v0_4) goto L_C02A79E;
    FUN_0c0220c4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    v0_5 = *(signed char *)(((int)stk + 8));
    v0_4 = (v0_5);
    if ((v0_5 != 98)) goto L_C02A742;
    if (((*(signed char *)(((int)stk + 4))) != 5)) goto L_C02A742;
    FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
    *(unsigned int *)(((int)stk + 12)) = 0xC309BEC;
    v0_4 = (v0_3);
    v0_5 = (0xC309994);
    v0_6 = (0xC1864E0);
    L_C02A734:;
    if (((int)v0_4 < (int)(unsigned char)(*(signed char *)(((int)stk + 0))))) goto L_C02A728;
    *(unsigned char *)((v0_4 + 0xC309BEC)) = v0_3;
    L_C02A79E:;
    v0_5 = FUN_0c021f28();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C02A824;
    v0_4 = (short)(FUN_0c01cd2c(0x101)) == 0;
    if (v0_4) goto L_C02A7D4;
    if (((*(short *)0xC30A51C) != 0)) goto L_C02A7D4;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned short *)((v0_0 + 0x8)) = 0x10;
    v0_4 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C02A824;
    L_C02A7D4:;
    v0_2 = (short)(FUN_0c01cd2c(0x40)) != 0;
    if (v0_2) goto L_C02A7E8;
    v0_2 = *(short *)0xC30A51C;
    v0_4 = (v0_2);
    if ((v0_2 != 2)) goto L_C02A824;
    L_C02A7E8:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    if (((*(short *)0xC30A51C) == 2)) goto L_C02A7FE;
    FUN_0c05aab6(0x0, 0x4);
    L_C02A7FE:;
    *(unsigned short *)0xC30A51C = v0_3;
    goto L_C02A816;
    L_C02A728:;
    FUN_0c1864e0((*(int *)((v0_5 + 0x0))), ((*(int *)(((int)stk + 12))) + v0_4), 0x1);
    v0_4 = ((v0_4 + 0x1));
    goto L_C02A734;
    L_C02A742:;
    if ((v0_4 != 101)) goto L_C02A790;
    if (((*(signed char *)(((int)stk + 4))) != 6)) goto L_C02A790;
    FUN_0c0221b0();
    *(unsigned int *)0xC30A3F8 = 0x1;
    v0_4 = ((FUN_0c01a9c0()));
    goto L_C02A824;
    L_C02A790:;
    FUN_0c0222a4((((int)stk + 0) + 0x8), ((int)stk + 0), (((int)stk + 0) + 0x4));
    goto L_C02A79E;
}

int FUN_0c02a838(void)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t5;

    t0 = FUN_0c022050();
    t3 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t3 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    t5 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t5 - 1);
    if ((short)(t5 - 1) == 0) {
        (((struct o0_uchar *)0xC309859)->v) = 0xD;
        (((struct o1_uchar *)0xC309859)->v) = 0x0;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
    }
    return t3;
}

int FUN_0c02a888(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E5FC));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a8d0(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E61C));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a8de(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E638));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a8ec(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E660));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a8fa(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E690));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a908(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E6B8));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a916(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E6D8));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a924(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E6F8));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a932(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E720));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a940(void)
{
    register int t1;

    t1 = *(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E740));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a94e(void)
{
    register int t1;

    t1 = *(int *)((((*(int *)0xC30A3F8) << 2) + 0xC20E750));
    return ((int (*)(void))(t1))();
}

int FUN_0c02a95c(void)
{
    int stk[33];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    *(unsigned int *)0xC83C6C0 = 0x1;
    v0_4 = *(signed char *)0xC30985A;
    v0_0 = (v0_4);
    v0_1 = (0x0);
    v0_2 = (0xC30985A);
    v0_3 = (0xC30540C);
    v0_5 = (0x1);
    if ((v0_4 == 0)) goto L_C02A990;
    if ((v0_0 == 1)) goto L_C02A99A;
    if ((v0_0 == 2)) goto L_C02AA10;
    if ((v0_0 == 3)) goto L_C02AA26;
    if ((v0_0 == 4)) goto L_C02AA40;
    if ((v0_0 == 5)) goto L_C02AA62;
    L_C02AA92:;
    return v0_0;
    L_C02AA62:;
    v0_3 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (v0_3 + 0x1);
    v0_0 = (0x14);
    if (((int)(short)(v0_3 + 0x1) < (int)0x14)) goto L_C02AA92;
    FUN_0c01e9e4();
    (((struct o0_uchar *)0xC309858)->v) = 0xF;
    (((struct o1_uchar *)0xC309858)->v) = v0_1;
    *(unsigned char *)((v0_2 + 0x0)) = v0_1;
    (((struct o3_uchar *)0xC309858)->v) = v0_1;
    (((struct o4_uchar *)0xC309858)->v) = v0_1;
    (((struct oA_uchar *)0xC309858)->v) = 0xFFFFFFF7;
    v0_0 = (0xC309862);
    goto L_C02AA92;
    L_C02AA40:;
    v0_3 = FUN_0c01f6f8();
    v0_0 = (v0_3);
    if ((v0_3 == 0)) goto L_C02AA92;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned short *)0xC30EF6C = v0_1;
    v0_0 = ((FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14)));
    goto L_C02AA92;
    L_C02AA26:;
    v0_4 = *(short *)((v0_3 + 0x0));
    *(unsigned short *)((v0_3 + 0x0)) = (v0_4 - 1);
    if (((int)(short)(v0_4 - 1) >= 0)) goto L_C02AA92;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    (((struct o3_uchar *)0xC309858)->v) = v0_1;
    *(unsigned short *)((v0_3 + 0x0)) = v0_1;
    goto L_C02AA92;
    L_C02AA10:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned short *)((v0_3 + 0x0)) = 0x3C;
    v0_0 = ((FUN_0c186380((*(int *)0xC309994))));
    goto L_C02AA92;
    L_C02A99A:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x7F;
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = v0_5;
    v0_1 = (((int)stk + 0) + 0x4);
    v0_0 = ((FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))))));
    v0_2 = v0_1;
    goto L_C02AA92;
    L_C02A990:;
    v0_0 = ((FUN_0c0232ae(v0_3, v0_5)));
    goto L_C02AA92;
}

int FUN_0c02aa9e(void)
{
    (((struct o0_uchar *)0xC305400)->v) = (*(signed char *)0xC309858);
    (((struct o1_uchar *)0xC305400)->v) = (*(signed char *)0xC309859);
    (((struct o2_uchar *)0xC305400)->v) = (*(signed char *)0xC30985A);
    (((struct o3_uchar *)0xC305400)->v) = (*(signed char *)0xC30985B);
    (((struct o0_uchar *)0xC309859)->v) = 0xE;
    (((struct o1_uchar *)0xC309859)->v) = 0x0;
    (((struct o2_uchar *)0xC309859)->v) = 0x0;
    *(unsigned int *)0xC30A3F8 = 0x0;
    *(unsigned char *)0xC30AF9A = 0x0;
    return 0xE;
}

int FUN_0c02aad2(void)
{
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    return FUN_0c0573cc(0xFF000000, 0x0, 0x1);
}
