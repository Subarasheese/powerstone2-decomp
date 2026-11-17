/* game/effect: functions 0C14F6A0-0C151288, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c14f960(int a4, int a5);
int FUN_0c14fb3c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int FUN_0c15009e(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int FUN_0c1502e8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c150be8(int a4, int a5);
int FUN_0c150d1e(int a4, int a5);
int FUN_0c150e52(int a4, int a5, int a6);

int FUN_0c14f960(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC542260;
    t1 = FUN_0c1502e8(a4, 0x1, 0x1, a5, 0x0, (((((t0 & 0x3) << 1) + (t0 & 0x3)) << 2) + 0xC202E38));
    t0 = t1;
    if (t1 != 0) {
        *(volatile int *)((t1 + 0xC4));
        FUN_0c18778c();
        (((struct o4_float *)((0x41C + t1)))->v) = (((float)((int)((int)(FUN_0c179ac0()) % (int)0xB)) / (*(float *)0xC14FA40)) + (1.0f + 1.0f));
        *(unsigned short *)((t1 + 0x1E)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c14fb3c(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[34];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t12;
    register int t15;
    register int t24;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 24)) = f4;
    *(float *)(((int)stk + 12)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 20)) = f7;
    t0 = *(int *)0xC542260;
    t3 = (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202EF8);
    t4 = 0x0;
    t5 = (((int)stk + 8) + 0x20);
    for (;;) {
        *(volatile int *)(((int)stk + 8));
        t7 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t3 = (t3 + 0xC);
        t9 = ((int (*)(void))(FUN_0c187798))();
        math_vec3_mul_xyz((((int)stk + 8) + 0x14), f8, f8, f8);
        FUN_0c17c130(t5, t5, (((int)stk + 8) + 0x14));
        t4 = (t4 + 0x1);
        t5 = (t5 + 0xC);
        if ((int)(signed char)t4 >= (int)0x8) {
            break;
        }
    }
    t12 = *(int *)0xC542260;
    *(int *)((int)stk + 4) = (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8);
    *(int *)((int)stk + 0) = (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68);
    t15 = FUN_0c1502e8(0xFFFFFFFF, 0x8, 0x2, (((int)stk + 0) + 0x28), (((((signed char)((t0 & 0x2) << 1) << 1) + (signed char)((t0 & 0x2) << 1)) << 2) + 0xC202E68), (((((t12 & 0x7) << 1) + (t12 & 0x7)) << 2) + 0xC2030D8));
    t24 = t15;
    if (t15 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t15))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t15))->v))))->v) = (*(float *)(((int)stk + 24)));
        (((struct o1C_float *)(((((struct oC4_int *)(t15))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o20_float *)(((((struct oC4_int *)(t15))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o10_float *)((0x41C + t15)))->v) = (*(float *)(((int)stk + 20)));
        *(unsigned short *)((t15 + 0x1E)) = 0x0;
        t24 = 0x0;
    }
    return t24;
}

int FUN_0c15009e(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[12];
    register int t0;
    register int t3;
    register int t5;
    register int t14;

    *(float *)(((int)stk + 20)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 16)) = f6;
    *(float *)(((int)stk + 12)) = f7;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(volatile int *)0xC542260;
    t3 = ((int (*)(void))(FUN_0c187798))();
    math_vec3_mul_xyz((((int)stk + 8) + 0x10), f8, f8, f8);
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    *(int *)((int)stk + 0) = 0x0;
    t5 = FUN_0c1502e8(0x0, 0x1, 0x1, (((int)stk + 0) + 0x24), 0x0, (((int)stk + 8) + 0x10));
    t14 = t5;
    if (t5 != 0) {
        (((struct o14_float *)(((((struct oC4_int *)(t5))->v))))->v) = 1.0f;
        (((struct o18_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 20)));
        (((struct o1C_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 8)));
        (((struct o20_float *)(((((struct oC4_int *)(t5))->v))))->v) = (*(float *)(((int)stk + 16)));
        (((struct o4_float *)((0x41C + t5)))->v) = (*(float *)(((int)stk + 12)));
        *(unsigned short *)((t5 + 0x1E)) = 0x0;
        t14 = 0x0;
    }
    return t14;
}

int FUN_0c1502e8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t41;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t28;
    register int t29;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 16)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(signed char *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = t0;
    t1 = FUN_0c03f444(0x5, 0x1, t0);
    t41 = 0x0;
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned int *)((t1 + 0x4)) = 0xC150A2C;
        FUN_0c187798();
        FUN_0c187798();
        t11 = *(int *)(((int)stk + 4));
        if ((int)(*(int *)(((int)stk + 0))) > 0) {
            t8 = a8;
            t9 = a9;
            t10 = 0x0;
            for (;;) {
                t13 = *(int *)(((((signed char)t10 << 2) + (0xC4 + t1)) + 0x0));
                FUN_0c03744a(t13, 0x0, 0x7, (*(int *)0xC4B40CC));
                *(unsigned char *)((t13 + 0x0)) = 0x0;
                *(unsigned short *)((t13 + 0x6)) = 0x638;
                if ((*(int *)(((int)stk + 4))) != 0) {
                    FUN_0c187798();
                } else {
                    FUN_0c187798();
                }
                if (a8 != 0) {
                    FUN_0c187798();
                } else {
                    FUN_0c187798();
                }
                if (a9 != 0) {
                    FUN_0c187798();
                } else {
                    FUN_0c187798();
                }
                t28 = FUN_0c179ac0();
                t29 = ((~(((~t28) + 0x1) & 0xF)) + 0x1);
                if ((int)t28 >= 0) {
                    t29 = (t28 & 0xF);
                }
                t10 = (t10 + 0x1);
                (((struct o80_uint *)(t13))->v) = (((t29 << 8) << 2) << 2);
                t9 = (t9 + 0xC);
                t8 = (t8 + 0xC);
                t11 = (t11 + 0xC);
                if ((int)(signed char)t10 >= (int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
        }
        t41 = t1;
    }
    return t41;
}

int FUN_0c150be8(int a4, int a5)
{
    register int t0;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t5 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0xC, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC150AAE;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t5 = FUN_0c187798();
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = a5;
    }
    return t5;
}

int FUN_0c150d1e(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t7;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1F, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC150C68;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798();
        t7 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t7;
    }
    return t7;
}

int FUN_0c150e52(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t9;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    { struct mvb12 { char b[12]; }; *(struct mvb12 *)((((int)stk + 0) + 0xC)) = *(struct mvb12 *)(0xC203390); }
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t9 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x1, 0x1F, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0x0;
        *(unsigned int *)((t0 + 0x4)) = 0xC150D74;
        (((struct oAC_ushort *)(t0))->v) = 0x31;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798();
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798();
        t9 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t0 + 0x2)) = t9;
    }
    return t9;
}
