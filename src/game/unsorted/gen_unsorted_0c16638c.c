/* game/unsorted: functions 0C16638C-0C1670B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c18778c(int);
int FUN_0c187798(int);
int FUN_0c16638c(int a4, int a5, int a6, int a7);
int FUN_0c166772(int a4, int a5, int a6, int a7);
int FUN_0c16695a(int a4, int a5, int a6);
int FUN_0c1669c8(int a4, int a5, int a6, int a7);

int FUN_0c16638c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    int t7;
    int t8;
    register int t9;

    t9 = *(signed char *)((a4 + 0x14));
    if (t9 != 0) {
        if (t9 == 1) {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3364)->v))) {
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A33E4, 0xC2A33D8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), 0x0);
            }
            t9 = *(short *)((a4 + 0x1C));
            if (((int)t9 >= (int)((((struct o8_int *)0xC2A3364)->v))) && (t0 = (((struct oC_int *)0xC2A3364)->v), (int)t9 <= (int)t0)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33B4, 0xC2A33A8, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC2A3364)->v))), (((((struct o8_int *)0xC2A3364)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o10_int *)0xC2A3364)->v))) && (t1 = (((struct o14_int *)0xC2A3364)->v), (int)t0 <= (int)t1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33CC, 0xC2A33C0, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC2A3364)->v))), (((((struct o10_int *)0xC2A3364)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o4_int *)0xC2A3364)->v))) && (t2 = (((struct o0_int *)0xC2A3364)->v), (int)t0 <= (int)t2)) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
                FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3364)->v))) {
                (((struct o14_uchar *)(a4))->v) = 0x3;
                t1 = 0x14;
            }
            return t1;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)0xC4B40CC;
    if ((t0 != 0) && (t0 != 1)) {
        if ((t0 != 2) && (t0 != 3)) {
            if (t0 == 4) {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x7, 0x34, t1);
                FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x8, 0x34, (*(int *)0xC4B40CC));
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                t0 = (((struct oC4_int *)(a4))->v);
                t2 = FUN_0c179ac0();
                t9 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
                if ((int)t2 >= 0) {
                    t9 = (t2 & 0x3);
                }
                t2 = (t9 * 0x16);
                if ((int)(t9 * 0x16) < 0) {
                    t2 = ((t9 * 0x16) + 0x3);
                }
                (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
                *(volatile int *)((a4 + 0xC4));
                FUN_0c18778c(0xC2A337C);
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
                *(volatile int *)((a4 + 0xC8));
                FUN_0c18778c(t3);
            }
        } else {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0x34, t1);
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x34, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
            t0 = (((struct oC4_int *)(a4))->v);
            t2 = FUN_0c179ac0();
            t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x3);
            }
            t2 = (t3 * 0x16);
            if ((int)(t3 * 0x16) < 0) {
                t2 = ((t3 * 0x16) + 0x3);
            }
            (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t2 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
            *(volatile int *)((a4 + 0xC4));
            FUN_0c18778c(0xC2A337C);
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
            *(volatile int *)((a4 + 0xC8));
            FUN_0c18778c(t4);
        }
    } else {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0x34, t1);
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x2, 0x34, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x3);
        }
        t1 = (t2 * 0x16);
        if ((int)(t2 * 0x16) < 0) {
            t1 = ((t2 * 0x16) + 0x3);
        }
        (((struct o80_uint *)(t0))->v) = ((int)(((((float)((t1 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c(0xC2A337C);
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC8));
        FUN_0c18778c(t5);
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A3364)->v))) {
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A33E4, 0xC2A33D8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o8_int *)0xC2A3364)->v))) && (t6 = (((struct oC_int *)0xC2A3364)->v), (int)t0 <= (int)t6)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33B4, 0xC2A33A8, (*(short *)((a4 + 0x1C))), (((((struct oC_int *)0xC2A3364)->v))), (((((struct o8_int *)0xC2A3364)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o10_int *)0xC2A3364)->v))) && (t7 = (((struct o14_int *)0xC2A3364)->v), (int)t0 <= (int)t7)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A33CC, 0xC2A33C0, (*(short *)((a4 + 0x1C))), (((((struct o14_int *)0xC2A3364)->v))), (((((struct o10_int *)0xC2A3364)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A3364)->v))) && (t8 = (((struct o0_int *)0xC2A3364)->v), (int)t0 <= (int)t8)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A338C, 0xC2A337C, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A3364)->v))), (((((struct o4_int *)0xC2A3364)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A3364)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c166772(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16638C;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}

int FUN_0c16695a(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t4;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1667BE;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)((t4 + 0xC4));
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t4));
    }
    return t8;
}

int FUN_0c1669c8(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register int t5;
    register int t12;
    register int t18;
    register float u25;
    register float t30;
    register int t33;
    register int t42;
    register int t48;
    register float u6;
    register float u7;
    register float u38;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC2A3430;
        *(unsigned int *)(((int)stk + 4)) = 0xC2A342C;
        *(unsigned int *)(((int)stk + 8)) = 0xC2A3424;
        *(unsigned int *)(((int)stk + 12)) = 0xC2A3420;
        u1 = (((struct o0_float *)0xC166B48)->v);
        u2 = (((struct o4_float *)0xC166B48)->v);
        u3 = (((struct oC_float *)0xC166B48)->v);
        t4 = 0xC166B54;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))) {
                break;
            }
            t4 = (FUN_0c179ac0());
            t12 = t4;
            t4 = ((((struct o0_int *)0xC2A3428)->v));
            t4 = ((int)((int)t12 % (int)t4));
            u6 = (float)t4;
            u6 = (u6 * u3);
            u6 = (u6 / (float)((((struct o0_int *)0xC2A3428)->v)));
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (int)u6;
            t4 = (FUN_0c179ac0());
            t18 = t4;
            t4 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
            t4 = ((int)((int)t18 % (int)t4));
            u6 = (float)t4;
            u7 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
            u25 = u7;
            u25 = u25 + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))) * u6;
            u7 = u25;
            u6 = (float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0)));
            u6 = ((u6 * u1) / u3);
            u6 = (u6 + u2);
            t4 = 0x1C;
            *(float *)((((int)stk + 0) + t4)) = ((math_cos_angle16(((int)u6 & 0xFFFF))) * u7);
            u6 = (float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0)));
            u6 = ((u6 * u1) / u3);
            u6 = (u6 + u2);
            t30 = math_sin_angle16(((int)u6 & 0xFFFF));
            t4 = 0x20;
            u6 = 0.0f;
            *(float *)((((int)stk + 0) + t4)) = (t30 * u7);
            t4 = 0x24;
            *(float *)((((int)stk + 0) + t4)) = u6;
            t4 = (*(short *)((a4 + 0x1E)));
            t33 = t4;
            t4 = ((((struct oC_int *)0xC2A3428)->v));
            t4 = ((int)((int)t33 % (int)t4));
            if (t4 == 0) {
                t4 = (*(signed char *)((a4 + 0x1)));
                t4 = (FUN_0c16695a(t4, (a4 + 0x28), (((int)stk + 0) + 0x1C)));
            } else {
                u38 = u6;
            }
            u6 = u38;
            t4 = (*(short *)((a4 + 0x1E)));
            t5 = (t5 + 0x1);
            t4 = (t4 + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = t4;
        }
        t42 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t42 + 0x1);
        t48 = (short)(t42 + 0x1);
        if ((int)(short)(t42 + 0x1) > (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t48 = 0x14;
        }
    } else {
        t48 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t48;
}
