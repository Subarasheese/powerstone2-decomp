/* game/menu/option: functions 0C0FA908-0C0FB8F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058b68(void);
int FUN_0c058cdc(void);
int FUN_0c05a418(int a4, int a5);
int FUN_0c05b1d4(void);
int FUN_0c05f22c(int);
int FUN_0c0fb8b0(int, int, int);
int FUN_0c0fc69e(void);
int FUN_0c0fc6e6(void);
int FUN_0c1171f0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int);
int FUN_0c0fa908(void);
int FUN_0c0fa94c(void);
int FUN_0c0fa966(int a4);
int FUN_0c0fad8c(int a4);
int FUN_0c0fb54c(void);
int FUN_0c0fb56c(void);
int FUN_0c0fb592(void);
int FUN_0c0fb5ca(int a4, int a5, int a6);
int FUN_0c0fb608(void);
int FUN_0c0fb66a(void);
int FUN_0c0fb680(void);
int FUN_0c0fb6a6(void);
int FUN_0c0fb6cc(void);
int FUN_0c0fb8ca(int a4, int a5);

int FUN_0c0fa908(void)
{
    register int t6;

    (((struct o0_uchar *)0xC472AD4)->v) = ((((struct o0_int *)0xC28E6DC)->v));
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E0);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E4);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E8);
    (((struct o5_uchar *)0xC472AD4)->v) = ((((struct o14_int *)0xC28E6DC)->v));
    (((struct o6_uchar *)0xC472AD4)->v) = ((((struct o18_int *)0xC28E6DC)->v));
    t6 = (((struct o1C_int *)0xC28E6DC)->v);
    (((struct o7_uchar *)0xC472AD4)->v) = t6;
    return t6;
}

int FUN_0c0fa94c(void)
{
    register int t4;

    (((struct o0_uchar *)0xC472AD4)->v) = ((((struct o0_int *)0xC28E6DC)->v));
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E0);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E4);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC28E6E8);
    t4 = (((struct o1C_int *)0xC28E6DC)->v);
    (((struct o7_uchar *)0xC472AD4)->v) = t4;
    return t4;
}

int FUN_0c0fa966(int a4)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
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
    v0_4 = a4;
    v0_6 = *(signed char *)((v0_4 + 0x14));
    v0_8 = (v0_6);
    v0_2 = (0x5);
    v0_0 = (0xC058A6E);
    v0_3 = (0xC28E85C);
    v0_0 = (0x0);
    v0_1 = (v0_4);
    v0_5 = (0xC28E794);
    v0_4 = (0xC28E60C);
    if ((v0_6 == 0)) goto L_C0FA99E;
    if ((v0_8 == 1)) goto L_C0FAA14;
    if ((v0_8 != 99)) goto L_C0FA99A;
    L_C0FAD78:;
    return v0_8;
    L_C0FA99A:;
    goto L_C0FAD78;
    L_C0FAA14:;
    v0_4 = *(signed char *)((0x14 + (*(int *)((v0_1 + 0x10)))));
    v0_8 = (v0_4);
    if ((v0_4 != 99)) goto L_C0FAA22;
    goto L_C0FAD78;
    L_C0FAA22:;
    if (((*(signed char *)((0x14 + (*(int *)((v0_1 + 0x10)))))) != 1)) goto L_C0FAA34;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    L_C0FAA38:;
    v0_6 = *(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C));
    v0_4 = (v0_6);
    if ((v0_6 == 10)) goto L_C0FAA52;
    if ((v0_4 == 9)) goto L_C0FAA52;
    if (!((v0_4 != 8))) goto L_C0FAA52;
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x0))), (*(int *)0xC4B4118));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x4))), (*(int *)0xC4B4118));
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = 0x1;
    v0_5 = *(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C));
    FUN_0c17c130((((((struct oC4_int *)(v0_1))->v)) + 0x6C), 0xC28E5E4, (0xC28E64C + (((v0_5 << 1) + v0_5) << 2)));
    v0_5 = *(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C));
    FUN_0c17c130((((((struct oC8_int *)(v0_1))->v)) + 0x6C), 0xC28E5E4, (0xC28E64C + (((v0_5 << 1) + v0_5) << 2)));
    goto L_C0FAB0E;
    L_C0FAA52:;
    *(unsigned char *)((((((struct oC4_int *)(v0_1))->v)) + 0x0)) = v0_0;
    *(unsigned char *)((((((struct oC8_int *)(v0_1))->v)) + 0x0)) = v0_0;
    L_C0FAB0E:;
    v0_5 = (0x19);
    if (((int)(*(short *)((v0_1 + 0x1C))) <= (int)0x19)) goto L_C0FAB42;
    v0_6 = v0_5;
    *(int *)((int)stk + 12) = v0_6;
    *(int *)((int)stk + 8) = 0x32;
    v0_7 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    *(unsigned int *)(((int)stk + 16)) = (v0_3 + 0x10);
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), (v0_3 + 0x10), v0_3, v0_7, 0x32, v0_6);
    v0_5 = v0_5;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0x32;
    v0_7 = *(short *)((v0_1 + 0x1C));
    v0_6 = *(int *)(((int)stk + 20));
    v0_8 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = 0x32;
    v0_5 = (v0_8);
    v0_6 = (v0_6);
    v0_7 = (v0_7);
    L_C0FAB68:;
    FUN_0c058a6e((((((struct oC8_int *)(v0_1))->v)) + 0x14), v0_5, v0_6, v0_7, *(int *)((int)stk + 0), *(int *)((int)stk + 4));
    v0_8 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_8 + 0x1);
    if (((int)(short)(v0_8 + 0x1) <= (int)0x32)) goto L_C0FAB86;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    L_C0FAB86:;
    v0_8 = (FUN_0c05f22c(0x400)) == 0;
    if (v0_8) goto L_C0FABB6;
    v0_8 = (0x16);
    if (((*(signed char *)((v0_1 + 0x16))) != 0)) goto L_C0FABB6;
    *(unsigned char *)((v0_1 + v0_8)) = ((*(signed char *)((v0_1 + v0_8))) + 0x1);
    *(volatile int *)(((0xC4 + v0_1) + 0x0));
    *(volatile int *)(((0xC4 + v0_1) + 0x8));
    v0_8 = ((int (*)(int, int, int, int))(FUN_0c18778c))((0xC4 + v0_1), v0_5, v0_6, v0_7);
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    L_C0FABB6:;
    v0_9 = *(signed char *)((v0_1 + 0x16));
    v0_8 = (v0_9);
    if ((v0_9 == 0)) goto L_C0FAC88;
    if ((v0_8 == 1)) goto L_C0FABF0;
    if ((v0_8 == 2)) goto L_C0FAC14;
    if (!((v0_8 == 3))) goto L_C0FAC88;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x19;
    FUN_0c058a6e((((int)stk + 8) + 0x10), v0_3, (v0_3 + 0x10), (*(short *)((v0_1 + 0x1C))), 0x19, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    v0_8 = v0_2;
    *(int *)((int)stk + 0) = v0_8;
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), (((int)stk + 0) + 0x18), 0xC28E60C, ((((struct o20_short *)(v0_1))->v)), v0_8, 0x0);
    v0_8 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_8 + 0x1);
    if (((int)(short)(v0_8 + 0x1) <= (int)v0_2)) goto L_C0FAC88;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FAC84;
    L_C0FAC88:;
    v0_8 = (FUN_0c05f22c(0x800)) == 0;
    if (v0_8) goto L_C0FACB8;
    v0_8 = (0x17);
    if (((*(signed char *)((v0_1 + 0x17))) != 0)) goto L_C0FACB8;
    *(unsigned char *)((v0_1 + v0_8)) = ((*(signed char *)((v0_1 + v0_8))) + 0x1);
    *(volatile int *)(((0xC4 + v0_1) + 0x4));
    *(volatile int *)(((0xC4 + v0_1) + 0xC));
    v0_8 = ((int (*)(int, int, int, int))(FUN_0c18778c))((0xC4 + v0_1), v0_5, v0_6, v0_7);
    (((struct o22_ushort *)(v0_1))->v) = v0_0;
    L_C0FACB8:;
    v0_9 = *(signed char *)((v0_1 + 0x17));
    v0_8 = (v0_9);
    if ((v0_9 == 0)) goto L_C0FAD78;
    if ((v0_8 == 1)) goto L_C0FACD0;
    if ((v0_8 == 2)) goto L_C0FAD08;
    if ((v0_8 == 3)) goto L_C0FAD30;
    goto L_C0FAD78;
    L_C0FAD30:;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x19;
    FUN_0c058a6e((((int)stk + 8) + 0x10), v0_3, (v0_3 + 0x10), (*(short *)((v0_1 + 0x1C))), 0x19, 0x0);
    *(int *)((int)stk + 4) = 0x0;
    v0_3 = v0_2;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c058a6e((((((struct oC8_int *)(v0_1))->v)) + 0x14), (((int)stk + 0) + 0x18), 0xC28E60C, ((((struct o20_short *)(v0_1))->v)), v0_3, 0x0);
    v0_3 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_3 + 0x1);
    v0_8 = (0x22);
    if (((int)(short)(v0_3 + 0x1) <= (int)v0_2)) goto L_C0FAD78;
    (((struct o17_uchar *)(v0_1))->v) = v0_0;
    L_C0FAD74:;
    (((struct o22_ushort *)(v0_1))->v) = v0_0;
    v0_8 = (0x22);
    goto L_C0FAD78;
    L_C0FAD08:;
    *(volatile int *)((v0_1 + 0xC8));
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c18778c))(v0_4, v0_5, v0_6, v0_7);
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 + 0x1);
    v0_8 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0x4)) goto L_C0FAD78;
    (((struct o17_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x17))) + 0x1);
    goto L_C0FAD74;
    L_C0FACD0:;
    *(volatile int *)((v0_1 + 0xC8));
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c18778c))(v0_4, v0_5, v0_6, v0_7);
    v0_2 = (((struct o22_short *)(v0_1))->v);
    (((struct o22_ushort *)(v0_1))->v) = (v0_2 + 0x1);
    v0_8 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0x8)) goto L_C0FAD78;
    (((struct o17_uchar *)(v0_1))->v) = v0_0;
    v0_8 = (0x17);
    goto L_C0FAD78;
    L_C0FAC84:;
    (((struct o20_ushort *)(v0_1))->v) = v0_0;
    goto L_C0FAC88;
    L_C0FAC14:;
    *(volatile int *)((v0_1 + 0xC4));
    v0_8 = ((int (*)(int, int, int, int))(FUN_0c18778c))(v0_4, v0_5, v0_6, v0_7);
    v0_8 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_8 + 0x1);
    if (((int)(short)(v0_8 + 0x1) <= (int)0x4)) goto L_C0FAC88;
    (((struct o16_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x16))) + 0x1);
    goto L_C0FAC84;
    L_C0FABF0:;
    *(volatile int *)((v0_1 + 0xC4));
    v0_8 = ((int (*)(int, int, int, int))(FUN_0c18778c))(v0_4, v0_5, v0_6, v0_7);
    v0_8 = (((struct o20_short *)(v0_1))->v);
    (((struct o20_ushort *)(v0_1))->v) = (v0_8 + 0x1);
    if (((int)(short)(v0_8 + 0x1) <= (int)0x8)) goto L_C0FAC88;
    (((struct o16_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FAC88;
    L_C0FAB42:;
    v0_6 = v0_0;
    *(int *)((int)stk + 12) = v0_6;
    v0_7 = v0_5;
    *(int *)((int)stk + 8) = v0_7;
    v0_8 = *(short *)((v0_1 + 0x1C));
    *(unsigned int *)(((int)stk + 16)) = (v0_3 + 0x10);
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    FUN_0c058a6e((((((struct oC4_int *)(v0_1))->v)) + 0x14), v0_3, (v0_3 + 0x10), v0_8, v0_7, v0_6);
    v0_6 = v0_0;
    *(int *)((int)stk + 4) = v0_6;
    v0_5 = v0_5;
    *(int *)((int)stk + 0) = v0_5;
    v0_7 = *(short *)((v0_1 + 0x1C));
    v0_8 = *(int *)(((int)stk + 16));
    v0_9 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_5 = (v0_9);
    v0_6 = (v0_8);
    v0_7 = (v0_7);
    goto L_C0FAB68;
    L_C0FAA34:;
    (((struct oA8_uchar *)(v0_1))->v) = v0_0;
    goto L_C0FAA38;
    L_C0FA99E:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct oAC_ushort *)(v0_1))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_1))->v) = 0x21;
    (((struct o30_float *)(v0_1))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(v0_1);
    FUN_0c03744a(((((struct oC4_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x0))), (*(int *)0xC4B4118));
    FUN_0c03744a(((((struct oC8_int *)(v0_1))->v)), 0x0, (*(int *)((((((*(short *)(((*(int *)((v0_1 + 0x10))) + 0x1C))) << 2) << 1) + v0_5) + 0x4))), (*(int *)0xC4B4118));
    v0_4 = (((struct oC4_int *)(v0_1))->v);
    *(unsigned short *)((v0_4 + 0x6)) = ((*(short *)((v0_4 + 0x6))) | 0x600);
    v0_4 = (((struct oC8_int *)(v0_1))->v);
    *(unsigned short *)((v0_4 + 0x6)) = ((*(short *)((v0_4 + 0x6))) | 0x600);
    goto L_C0FAA14;
}

int FUN_0c0fad8c(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FA966;
        *(unsigned int *)((t0 + 0x10)) = a4;
        return FUN_0c0fa966(t0);
    }
    return t0;
}

int FUN_0c0fb54c(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FADBC;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fb56c(void)
{
    register int t7;

    (((struct o0_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429C8);
    (((struct o1_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429C9);
    (((struct o2_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CA);
    (((struct o3_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CB);
    (((struct o4_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CC);
    (((struct o5_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CD);
    (((struct o6_uchar *)0xC472AD4)->v) = (*(signed char *)0xC5429CE);
    t7 = *(signed char *)0xC5429CF;
    (((struct o7_uchar *)0xC472AD4)->v) = t7;
    return t7;
}

int FUN_0c0fb592(void)
{
    (((struct o1B_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD4);
    (((struct o1C_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD5);
    (((struct o1D_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD6);
    (((struct o1E_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD7);
    (((struct o20_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472AD9);
    (((struct o21_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472ADA);
    (((struct o22_uchar *)0xC5429AD)->v) = (*(signed char *)0xC472ADB);
    (((struct o0_uchar *)0xC5429AD)->v) = (*(signed char *)0xC5429C8);
    (((struct o1_uchar *)0xC5429AD)->v) = (*(signed char *)0xC5429CA);
    return FUN_0c0fb8ca((*(signed char *)0xC5429CD), (*(signed char *)0xC5429CE));
}

int FUN_0c0fb5ca(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)0xC472AD8;
    (((struct o23_uchar *)0xC5429A9)->v) = t0;
    (((struct o0_uchar *)0xC5429A9)->v) = t0;
    return FUN_0c0fb8b0((*(signed char *)0xC5429A9), a5, a6);
}

int FUN_0c0fb608(void)
{
    register int t56;

    if ((*(signed char *)0xC472AD4) == (*(signed char *)0xC5429C8)) {
        if ((*(signed char *)0xC472AD5) == (*(signed char *)0xC5429C9)) {
            if ((*(signed char *)0xC472AD6) == (*(signed char *)0xC5429CA)) {
                if ((*(signed char *)0xC472AD7) == (*(signed char *)0xC5429CB)) {
                    if ((*(signed char *)0xC472AD9) == (*(signed char *)0xC5429CD)) {
                        if ((*(signed char *)0xC472ADA) == (*(signed char *)0xC5429CE)) {
                            if ((*(signed char *)0xC472ADB) == (*(signed char *)0xC5429CF)) {
                                t56 = FUN_0c058b68();
                                if (t56 == 1) {
                                    return 0x1;
                                }
                                return 0x0;
                            }
                            return 0x1;
                        }
                        return 0x1;
                    }
                    return 0x1;
                }
                return 0x1;
            }
            return 0x1;
        }
        return 0x1;
    }
    return 0x1;
}

int FUN_0c0fb66a(void)
{
    if ((*(signed char *)0xC472AD8) != (*(signed char *)0xC5429CC)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0fb680(void)
{
    register int t4;

    FUN_0c0fa908();
    FUN_0c0fc69e();
    FUN_0c0fb592();
    FUN_0c0fc6e6();
    t4 = FUN_0c058cdc();
    *(unsigned char *)0xC542B8C = 0x1;
    return t4;
}

int FUN_0c0fb6a6(void)
{
    FUN_0c0fa94c();
    FUN_0c0fc69e();
    FUN_0c0fb592();
    FUN_0c0fc6e6();
    FUN_0c058cdc();
    *(unsigned char *)0xC542B8C = 0x1;
    return 0x1;
}

int FUN_0c0fb6cc(void)
{
    if ((*(signed char *)0xC5429C8) == ((((struct o0_int *)0xC28E6DC)->v))) {
        if ((*(signed char *)0xC5429C9) == ((((struct o4_int *)0xC28E6DC)->v))) {
            if ((*(signed char *)0xC5429CA) == ((((struct o8_int *)0xC28E6DC)->v))) {
                if ((*(signed char *)0xC542A0A) == ((((struct o0_int *)0xC28E968)->v))) {
                    if ((*(signed char *)0xC542A0B) == ((((struct o4_int *)0xC28E968)->v))) {
                        if ((*(signed char *)0xC542A0C) != ((((struct o8_int *)0xC28E968)->v))) {
                            return 0x0;
                        }
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c0fb8ca(int a4, int a5)
{
    FUN_0c05a418((((a4 + 0x2) << 2) << 1), (((a5 << 1) + (a5 << 2)) + 0x2C));
    return FUN_0c05b1d4();
}
