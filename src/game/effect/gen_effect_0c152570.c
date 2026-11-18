/* game/effect: functions 0C152570-0C152CEE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0448f6(int);
int FUN_0c187798(int);
int FUN_0c152570(int a4);
int FUN_0c152658(int a4);
int FUN_0c15270e(int a4, int a5, float f4);
int FUN_0c1527dc(int a4, float f4);
int FUN_0c152a2c(int a4, int a5, int a6, int a7, float f4);


int FUN_0c152658(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    u0 = *(float *)0xC1527AC;
    t0 = 0xC1527AC;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((((0xC4 + a4) + t1) + 0x18));
        if ((*(signed char *)((t2 + 0x0))) != 0) {
            t0 = 0x84;
            t3 = t0;
            t3 = (t3 + 0xC);
            t3 = (t3 + t2);
            u1 = (*(float *)((t2 + t0)));
            u2 = (*(float *)((t3 + 0x0)));
            t3 = 0x90;
            u1 = (u1 + u2);
            t3 = (t3 + t2);
            *(float *)((t2 + t0)) = u1;
            t0 = (t0 + 0x4);
            u1 = (*(float *)((t2 + t0)));
            u2 = (*(float *)((t3 + 0x0)));
            t3 = 0x90;
            u1 = (u1 + u2);
            t3 = (t3 + t2);
            *(float *)((t2 + t0)) = u1;
            t0 = (t0 + 0x4);
            u1 = (*(float *)((t2 + t0)));
            u2 = (*(float *)((t3 + 0x0)));
            u1 = (u1 + u2);
            *(float *)((t2 + t0)) = u1;
            t0 = (t0 - 8);
            u2 = (*(float *)((t2 + t0)));
            if (!(1.0f > u2)) {
                t0 = 0x94;
                u1 = 1.0f;
                u2 = (*(float *)((t2 + t0)));
                t0 = 0x18;
                u2 = (u2 / u0);
                *(float *)((t2 + t0)) = u2;
                t0 = (t0 + 0x7C);
                u2 = (*(float *)((t2 + t0)));
                t0 = 0x1C;
                u2 = (u2 / u0);
                *(float *)((t2 + t0)) = u2;
                t0 = (t0 + 0x78);
                u2 = (*(float *)((t2 + t0)));
                t0 = 0x20;
                u2 = (u2 / u0);
                *(float *)((t2 + t0)) = u2;
                t0 = (t0 + 0x74);
                u2 = (*(float *)((t2 + t0)));
                u2 = (u2 - u1);
                *(float *)((t2 + t0)) = u2;
                if (u2 == (0.0f)) {
                    *(unsigned char *)((t2 + 0x0)) = 0x0;
                }
            }
            t0 = 0xB0;
            t3 = (*(int *)((a4 + 0x10)));
            u2 = (*(float *)((t3 + t0)));
            t0 = 0x18;
            u1 = (*(float *)((t2 + t0)));
            if (u1 > u2) {
                t0 = 0xB0;
                t3 = (*(int *)((a4 + 0x10)));
                u2 = (*(float *)((t3 + t0)));
                t0 = 0x18;
                *(float *)((t2 + t0)) = u2;
                t0 = 0xB0;
                u2 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
                t0 = 0x1C;
                *(float *)((t2 + t0)) = u2;
                t0 = 0xB0;
                u2 = (*(float *)(((*(int *)((a4 + 0x10))) + t0)));
                t0 = 0x20;
                *(float *)((t2 + t0)) = u2;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x10) {
            break;
        }
    }
    return t0;
}

int FUN_0c15270e(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a5 + 0x5));
    *(unsigned char *)((a5 + 0x5)) = (t0 - 1);
    t1 = (signed char)(t0 - 1);
    if ((signed char)(t0 - 1) == 0) {
        t0 = *(int *)(((((*(signed char *)((a5 + 0x4))) << 2) + (0xC4 + a4)) + 0x18));
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            *(unsigned char *)((a5 + 0x5)) = 0xF;
            FUN_0c037498(t0, 0x1, 0x23, (*(int *)0xC4B40CC));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o8C_float *)(t0))->v) = 0.0f;
            (((struct o88_float *)(t0))->v) = 0.0f;
            (((struct o84_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((t0 + 0x6)) = 0x11;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o90_float *)(t0))->v) = 0.0500000007f;
            (((struct o94_float *)(t0))->v) = 8.0f;
            (((struct o24_float *)(t0))->v) = (1.0f + 1.0f);
            t0 = *(signed char *)((a5 + 0x4));
            t2 = ((~(((~(t0 + 0x1)) + 0x1) & 0x3)) + 0x1);
            if ((int)(t0 + 0x1) >= 0) {
                t2 = ((t0 + 0x1) & 0x3);
            }
            *(unsigned char *)((a5 + 0x4)) = t2;
            t0 = t2;
        } else {
            *(unsigned char *)((a5 + 0x5)) = 0x1;
            t0 = 0x1;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c1527dc(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c15270e(a4, (0x41C + a4), f4);
                FUN_0c152658(a4);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.200000003f);
                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.200000003f);
                t2 = 0x84;
                if (!(4.0f > ((((struct o84_float *)(t1))->v)))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                t2 = t0;
                if (t0 == 3) {
                    FUN_0c15270e(a4, (0x41C + a4), f4);
                    FUN_0c152658(a4);
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
                    (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.100000001f);
                    (((struct o18_float *)(t0))->v) = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
                    (((struct o1C_float *)(t0))->v) = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
                    (((struct o20_float *)(t0))->v) = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
                    u0 = (((struct oB0_float *)(a4))->v);
                    (((struct oB0_float *)(a4))->v) = (u0 - 0.0500000007f);
                    t0 = 0xB0;
                    if (!((u0 - 0.0500000007f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0x2;
                        t0 = 0x14;
                    }
                    t2 = t0;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            FUN_0c15270e(a4, (0x41C + a4), f4);
            FUN_0c152658(a4);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t1 = (((struct oC4_int *)(a4))->v);
                FUN_0c03744a(t1, 0x3, 0x23, (*(int *)0xC4B40CC));
                *(unsigned char *)((t1 + 0x0)) = 0x1;
                (((struct o88_float *)(t1))->v) = 1.0f;
                (((struct o8C_float *)(t1))->v) = 0.200000003f;
                (((struct o84_float *)(t1))->v) = 0.200000003f;
                *(unsigned short *)((t1 + 0x6)) = 0x11;
                (((struct o18_float *)(t1))->v) = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o1C_float *)(t1))->v) = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o20_float *)(t1))->v) = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
                (((struct o94_float *)(t1))->v) = 20.0f;
                (((struct o24_float *)(t1))->v) = 6.0f;
                t2 = 0x24;
            }
            t0 = t2;
        }
        return t0;
    }
    t0 = (((struct oE8_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.100000001f);
            if (((((struct o88_float *)(t0))->v)) > 0.0f) {
                return 0x88;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            FUN_0c152570(a4);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            return FUN_0c0448f6(a4);
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o50_float *)(a4))->v) = -30.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        FUN_0c03744a(t0, 0x0, 0x23, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x11;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    if (((((struct o2C_float *)(a4))->v)) > ((((struct o41C_float *)(a4))->v))) {
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o2C_float *)(a4))->v) = ((((struct o41C_float *)(a4))->v));
    }
    return 0x2C;
}

int FUN_0c152a2c(int a4, int a5, int a6, int a7, float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    v0_0 = *(signed char *)((v0_2 + 0x14));
    v0_1 = (v0_0);
    v0_2 = (v0_2);
    if ((v0_0 == 0)) goto L_C152A4A;
    if ((v0_1 == 1)) goto L_C152A52;
    if ((v0_1 == 2)) goto L_C152ABA;
    if ((v0_1 == 3)) goto L_C152AC4;
    L_C152ACE:;
    return v0_1;
    L_C152AC4:;
    return FUN_0c03f346(v0_2, a5, a6, a7);
    L_C152ABA:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    v0_1 = (0x14);
    goto L_C152ACE;
    L_C152A52:;
    FUN_0c1527dc(v0_2, f4);
    if (((*(signed char *)((v0_2 + 0x1A))) == 0)) goto L_C152A70;
    v0_1 = (0x24);
    if ((((((struct o22_short *)(v0_2))->v)) != ((((struct o24_short *)((*(int *)((v0_2 + 0x10)))))->v)))) goto L_C152AB2;
    goto L_C152ACE;
    L_C152AB2:;
    (((struct o14_uchar *)(v0_2))->v) = 0x2;
    v0_1 = (0x14);
    goto L_C152ACE;
    L_C152A70:;
    v0_1 = (0x24);
    if ((((((struct o22_short *)(v0_2))->v)) != ((((struct o24_short *)((*(int *)((v0_2 + 0x10)))))->v)))) goto L_C152AB2;
    if (((*(int *)(((*(int *)((v0_2 + 0x10))) + 0x10))) == 0)) goto L_C152ACE;
    v0_1 = (0x41C);
    if (((unsigned char)(*(signed char *)(((*(int *)(((*(int *)((v0_2 + 0x10))) + 0x10))) + 0x41C))) != 0xC1)) goto L_C152ACE;
    (((struct o22_ushort *)(v0_2))->v) = ((((struct o24_short *)((*(int *)(((*(int *)((v0_2 + 0x10))) + 0x10)))))->v));
    *(unsigned int *)((v0_2 + 0x10)) = (*(int *)(((*(int *)((v0_2 + 0x10))) + 0x10)));
    (((struct o1A_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x1A))) + 0x1);
    v0_1 = (0x1A);
    goto L_C152ACE;
    L_C152A4A:;
    (((struct o14_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x14))) + 0x1);
    goto L_C152A52;
}
