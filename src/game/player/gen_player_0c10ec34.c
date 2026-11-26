/* game/player: functions 0C10EC34-0C110168, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1EC_int { char p[0x1EC]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o258_int { char p[0x258]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_float { char p[0xB8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c104cc8(int a4);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104de4(int, int);
int FUN_0c104e6a(int, int);
int FUN_0c106510(void);
int FUN_0c10daf4(int);
int FUN_0c10db3a(int);
int FUN_0c10db5e(int);
int FUN_0c10db70(int);
int FUN_0c10dbc8(int);
int FUN_0c10dc48(int);
int FUN_0c10dd92(int);
int FUN_0c11113c(void);
int FUN_0c112910(int, int);
int FUN_0c1173a0(void);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c118584(int);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c11ea4e(int);
int FUN_0c187798(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c10ec34(int a4);
int FUN_0c10ed92(int a4);
int FUN_0c10ee58(int a4, int a5, int a6, int a7);
int FUN_0c10eeac(int a4);
void FUN_0c10eef0(int a4, int a5, int a6, int a7);
int FUN_0c10f48a(void);
int FUN_0c10f4b2(void);
float FUN_0c10f674(int a4, int a5, int a6, int a7);
int FUN_0c10feda(int a4);

int FUN_0c10ec34(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_2 = a4;
    v0_3 = *(signed char *)((v0_2 + 0x15));
    v0_1 = (v0_3);
    v0_0 = (0x0);
    v0_2 = (v0_2);
    if ((v0_3 == 0)) goto L_C10EC52;
    if ((v0_1 == 1)) goto L_C10EC6C;
    L_C10ED86:;
    return v0_1;
    L_C10EC6C:;
    v0_4 = *(signed char *)((v0_2 + 0x16));
    v0_1 = (v0_4);
    v0_3 = (0xC474B8C);
    if ((v0_4 == 0)) goto L_C10EC86;
    if ((v0_1 == 1)) goto L_C10EC9A;
    if ((v0_1 == 2)) goto L_C10ECC8;
    if ((v0_1 == 3)) goto L_C10ED40;
    goto L_C10ED86;
    L_C10ED40:;
    v0_4 = (((struct o22_short *)(v0_2))->v);
    (((struct o22_ushort *)(v0_2))->v) = (v0_4 + 0x1);
    v0_1 = (0x22);
    if (((int)(short)(v0_4 + 0x1) <= (int)0xA)) goto L_C10ED86;
    (((struct o14_uchar *)(((((struct o74_int *)(v0_3))->v))))->v) = 0x63;
    (((struct o74_uint *)(v0_3))->v) = v0_0;
    if ((((((struct o20_short *)(v0_2))->v)) != 0)) goto L_C10ED76;
    return FUN_0c10daf4(v0_2);
    L_C10ED76:;
    return FUN_0c10db3a(v0_2);
    L_C10ECC8:;
    (((struct o20_ushort *)(v0_2))->v) = (FUN_0c104e6a(((((struct o20_short *)(v0_2))->v)), 0x1));
    *(unsigned char *)((((((struct o74_int *)(v0_3))->v)) + 0x2)) = (*(signed char *)((v0_2 + 0x20)));
    v0_1 = (FUN_0c104d70()) != 0;
    if (v0_1) goto L_C10ED04;
    v0_4 = FUN_0c104db8();
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C10ED86;
    (((struct o20_ushort *)(v0_2))->v) = 0x1;
    *(unsigned char *)((((((struct o74_int *)(v0_3))->v)) + 0x2)) = (*(signed char *)((v0_2 + 0x20)));
    L_C10ED04:;
    FUN_0c1186d4(((((struct o20_short *)(v0_2))->v)));
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o22_ushort *)(v0_2))->v) = v0_0;
    v0_1 = (0x22);
    goto L_C10ED86;
    L_C10EC9A:;
    v0_4 = FUN_0c117d54();
    v0_1 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C10ED86;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_2))->v) = v0_0;
    R1004 = (v0_3 + 0x74);
    (((struct o74_uint *)(v0_3))->v) = (FUN_0c1187ba());
    v0_0 = *(signed char *)((v0_2 + 0x20));
    *(unsigned char *)(((*(int *)(((R1004) + 0x0))) + 0x2)) = v0_0;
    v0_1 = (v0_0);
    goto L_C10ED86;
    L_C10EC86:;
    (((struct o16_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x16))) + 0x1);
    *(int *)((int)stk + 0) = 0xEF;
    v0_1 = ((FUN_0c117944(0xEF)));
    goto L_C10ED86;
    L_C10EC52:;
    if (((int)(*(int *)0xC4743DC) >= (int)0x3)) goto L_C10EC60;
    goto L_C10ED76;
    L_C10EC60:;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_2))->v) = v0_0;
    goto L_C10EC6C;
}

int FUN_0c10ed92(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                return FUN_0c10db5e(a4);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return (FUN_0c117944(0xF0));
}

int FUN_0c10ee58(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(0xC10EE14))(a4, a5, a6, a7);
                            }
                            return FUN_0c10dc48(a4);
                        }
                        return FUN_0c10ed92(a4);
                    }
                    return FUN_0c10ec34(a4);
                }
                return ((int (*)(int, int, int, int))(0xC10EBDA))(a4, a5, a6, a7);
            }
            return FUN_0c10dd92(a4);
        }
        return FUN_0c10dbc8(a4);
    }
    return FUN_0c10db70(a4);
}

int FUN_0c10eeac(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x8, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10EE58;
        *(unsigned int *)((t0 + 0x10)) = a4;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

/* FUN_0c10eef0, written by hand from the original (1,434 bytes; the generated C was 3,592).
   A menu object a4 with a phase byte at +20 (0, 1, 2, 3, 4, 10, 11, 20, 21, 80, 99) and a sub-step byte at +21. Phase 2 is the
   option list: 0xC474744 is the cursor (0..4), 0xC473C74 the current values, 0xC473C88 their saved copies, 0xC29105C their
   maxima; the buttons (FUN_0c104cc8 masks 0x2000 up, 0x1000 down, 0x800/0x400 step by 1, 8/4 step by 10) change a value. */

#define CUR (*(int *)0xC474744)
#define PREV (*(int *)0xC474758)
#define AV(i) (*(int *)(0xC473C74 + (i) * 4))
#define EV(i) (*(int *)(0xC473C88 + (i) * 4))
#define DV(i) (*(int *)(0xC29105C + (i) * 4))
#define OBJ60 (*(int *)(0xC474B8C + 60))

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c10eef0(int a4, int a5, int a6, int a7)
{
    int d;
    int n;
    int mode;
    int f;

    switch (*(unsigned char *)(a4 + 20)) {
    case 0:
        if (*(signed char *)(*(int *)(0xC474B8C + 56) + 20) == 22) {
            *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
            OBJ60 = FUN_0c11113c();
        }
        return;
    case 1:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        return;
    case 2:
        if (FUN_0c104cc8(0x2000)) {
            FUN_0c05aab6(0, 6);
            PREV = CUR;
            CUR = CUR - 1;
            if (CUR < 0) {
                CUR = 4;
            }
        }
        if (FUN_0c104cc8(0x1000)) {
            FUN_0c05aab6(0, 6);
            PREV = CUR;
            CUR = CUR + 1;
            if (CUR > 4) {
                CUR = 0;
            }
        }
        if (FUN_0c104cc8(0x3000) && CUR < 4) {
            FUN_0c05a080(19, 0);
            *(unsigned char *)(a4 + 20) = 10;
            EV(CUR) = AV(CUR);
            if (AV(CUR) < 0) {
                AV(CUR) = DV(CUR);
            }
            if (AV(CUR) > DV(CUR)) {
                AV(CUR) = 0;
            }
            if (FUN_0c104cc8(0x2000)) {
                goto l200;
            }
            goto l23c;
        }
        if (*(short *)(a4 + 30) > 0) {
            *(short *)(a4 + 30) = *(short *)(a4 + 30) - 1;
        }
        if (*(short *)(a4 + 30) != 0 || CUR >= 4) {
            goto l252;
        }
        if (FUN_0c104cc8(0x800) && DV(CUR) >= 1) {
            FUN_0c05a080(19, 0);
            *(unsigned char *)(a4 + 20) = 10;
            EV(CUR) = AV(CUR);
            AV(CUR) = AV(CUR) - 1;
            if (AV(CUR) >= 0) {
                goto l200;
            }
            AV(CUR) = DV(CUR);
            goto l23c;
        }
        if (FUN_0c104cc8(0x400) && DV(CUR) >= 1) {
            FUN_0c05a080(19, 0);
            *(unsigned char *)(a4 + 20) = 10;
            EV(CUR) = AV(CUR);
            AV(CUR) = AV(CUR) + 1;
            if (AV(CUR) > DV(CUR)) {
                AV(CUR) = 0;
                goto l200;
            }
            goto l23c;
        }
        if (FUN_0c104cc8(8) && DV(CUR) >= 1) {
            FUN_0c05a080(19, 0);
            *(unsigned char *)(a4 + 20) = 10;
            EV(CUR) = AV(CUR);
            if (AV(CUR) == 0) {
                AV(CUR) = DV(CUR);
                goto l23c;
            }
            AV(CUR) = AV(CUR) - 10;
            if (AV(CUR) < 0) {
                AV(CUR) = 0;
            }
            goto l200;
        }
        if (FUN_0c104cc8(4) && DV(CUR) >= 1) {
            FUN_0c05a080(19, 0);
            *(unsigned char *)(a4 + 20) = 10;
            EV(CUR) = AV(CUR);
            if (AV(CUR) == DV(CUR)) {
                AV(CUR) = 0;
                goto l200;
            }
            AV(CUR) = AV(CUR) + 10;
            if (AV(CUR) > DV(CUR)) {
                AV(CUR) = DV(CUR);
            }
            goto l23c;
        }
        goto l252;
    case 3:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(short *)(a4 + 28) = 0;
        FUN_0c118584(CUR);
    case 4:
        *(short *)(a4 + 28) = *(short *)(a4 + 28) + 1;
        if (*(short *)(a4 + 28) > 10) {
            *(unsigned char *)(OBJ60 + 20) = 99;
            OBJ60 = 0;
            *(unsigned char *)(a4 + 20) = 99;
        }
        return;
    case 10:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(unsigned char *)(a4 + 21) = 0;
    case 11:
        switch (*(signed char *)(a4 + 21)) {
        case 0:
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            *(short *)(a4 + 28) = 0;
            *(unsigned char *)(OBJ60 + 20) = 99;
            OBJ60 = 0;
        case 1:
            *(short *)(a4 + 28) = *(short *)(a4 + 28) + 1;
            if (*(short *)(a4 + 28) > 24) {
                *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
                *(short *)(a4 + 30) = 15;
            }
            return;
        case 2:
            OBJ60 = FUN_0c11113c();
            *(unsigned char *)(a4 + 20) = 2;
            *(unsigned char *)(a4 + 21) = 0;
        }
        return;
    case 20:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(unsigned char *)(a4 + 21) = 0;
    case 21:
        switch (*(signed char *)(a4 + 21)) {
        case 0:
            *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            f = *(int *)(0xC474410 + AV(CUR) * 4);
            n = FUN_0c11ea4e(0x4000);
            if (n >= 5 && (*(int *)(0xC473D04 + f * 4) & 32) == 0) {
                mode = 2;
            } else if (*(int *)(0xC474104 + f * 4) < 1) {
                mode = 3;
            } else if ((*(int *)(0xC473D04 + f * 4) & 32) != 0) {
                mode = 1;
            } else {
                mode = 0;
            }
            *(int *)(0xC474B8C + 136) = FUN_0c112910(mode, f);
            return;
        case 1:
            if (*(signed char *)(*(int *)(0xC474B8C + 136) + 20) == 99) {
                *(unsigned char *)(a4 + 21) = *(unsigned char *)(a4 + 21) + 1;
            }
            return;
        case 2:
            *(unsigned char *)(a4 + 20) = 2;
        }
        return;
    case 80:
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    case 99:
        *(unsigned char *)(a4 + 20) = 80;
        *(short *)(a4 + 34) = 0;
        return;
    }
    return;
l200:
    FUN_0c10feda(0);
    return;
l23c:
    FUN_0c10feda(1);
    return;
l252:
    if (FUN_0c05f22c(0x101)) {
        if (CUR == 0) {
            d = *(int *)(0xC474410 + AV(CUR) * 4);
            if (*(signed char *)(0xC2738B8 + (d + 1) * 52) != 2 && d <= 120) {
                FUN_0c05aab6(0, 3);
                *(unsigned char *)(a4 + 20) = 20;
                return;
            }
        } else if (CUR == 4) {
            FUN_0c05aab6(0, 3);
            *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
            return;
        }
    }
    if (FUN_0c104de4(CUR, 4) == 0) {
        return;
    }
    if (CUR >= 4) {
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        return;
    }
    PREV = CUR;
    CUR = 4;
}
#undef CUR
#undef PREV
#undef AV
#undef EV
#undef DV
#undef OBJ60


int FUN_0c10f48a(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10EEF0;
        return t0;
    }
    return 0x0;
}

int FUN_0c10f4b2(void)
{
    register int t0;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                return FUN_0c106510();
            }
            return (unsigned char)t0;
        }
        t0 = *(signed char *)0xC541F46;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                    return (unsigned char)t0;
                }
                if ((int)(*(short *)0xC541F56) < (int)0x32) {
                    *(unsigned short *)0xC541F56 = ((*(short *)0xC541F56) + 0x1);
                }
                t0 = *(short *)0xC541F56;
                if (t0 == 42) {
                    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                    return FUN_0c059c7a(0x18, 0x1);
                }
                return t0;
            }
            if ((int)(*(short *)0xC541F56) < (int)0x32) {
                *(unsigned short *)0xC541F56 = ((*(short *)0xC541F56) + 0x1);
            }
            if ((*(short *)0xC541F56) == 42) {
                FUN_0c059c7a(0x1C, 0x1);
            }
            t0 = *(signed char *)((0x14 + (*(int *)0xC474C0C)));
            if (t0 == 99) {
                (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
                *(unsigned short *)0xC541F56 = 0x0;
                FUN_0c05b052(0x28, 0x1);
                (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x1E;
                (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o4_uint *)0xC474B8C)->v) = 0x0;
                (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
                (((struct o0_uint *)0xC474B8C)->v) = 0x0;
                return 0x14;
            }
            return t0;
        }
        (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
        *(unsigned short *)0xC541F56 = 0x0;
        FUN_0c05b052(0x28, 0x1);
        t0 = FUN_0c10f48a();
        *(unsigned int *)0xC474C0C = t0;
        return t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC473C74 + t0)) = 0x0;
        *(unsigned int *)((0xC473C88 + t0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    (((struct o14_uchar *)(((((struct o38_int *)0xC474B8C)->v))))->v) = 0x14;
    (((struct o0_uint *)0xC474718)->v) = 0x4;
    (((struct o4_uint *)0xC474B8C)->v) = (FUN_0c1173a0());
    (((struct o2C_uint *)0xC474718)->v) = 0x0;
    t0 = FUN_0c118412(0x2);
    (((struct o0_uint *)0xC474B8C)->v) = t0;
    return t0;
}


int FUN_0c10feda(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x2, 0x9);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10F674;
        *(unsigned char *)((t0 + 0x2)) = a4;
        t1 = a4;
    }
    return t1;
}
