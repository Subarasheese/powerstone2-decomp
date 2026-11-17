/* game/unsorted: functions 0C136AB4-0C1371A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o88_float { char p[0x88]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c136f78(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c136ab4(int a4, int a5, int a6, int a7);
int FUN_0c136d54(int a4, int a5, int a6, int a7);
int FUN_0c136de4(int a4, int a5, int a6, int a7);
int FUN_0c136ff4(int a4, int a5, int a6, int a7);

int FUN_0c136ab4(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t5;
    register int t6;
    register int t9;
    register int t14;
    register int t26;
    register int t32;
    register int t36;
    register int t38;
    register int t44;
    register int t47;
    register int t59;
    register int t60;
    register int t61;
    register int t73;
    register float u75;
    register float u76;
    register float u79;
    register float u81;
    register float u82;
    register int t88;
    register int t110;
    register int t114;
    register int t130;
    register int t143;
    int t34;
    register int t74;
    register float u84;

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        t143 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    } else {
        *(volatile int *)(((*(int *)((a4 + 0x10))) + 0xC8));
        t5 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t6 = *(signed char *)((a4 + 0x14));
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 != 2) {
                    t143 = (((int (*)(int))(FUN_0c03f346))(a4));
                } else {
                    t9 = (((struct oC4_int *)(a4))->v);
                    (((struct o7C_uint *)(t9))->v) = (((((struct o7C_int *)(t9))->v)) + ((((struct o4_int *)0xC2A1764)->v)));
                    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o8_int *)0xC2A1764)->v))) {
                        *(int *)((int)stk + 12) = 0x0;
                        t14 = ((((struct o8_int *)0xC2A1764)->v));
                        *(int *)((int)stk + 8) = t14;
                        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1784, 0xC2A1778, (*(short *)((a4 + 0x1C))), t14, 0x0);
                    }
                    if ((*(short *)((a4 + 0x1C))) == ((((struct o8_int *)0xC2A1764)->v))) {
                        *(volatile int *)((a4 + 0xC4));
                        t26 = ((int (*)(void))(FUN_0c187798))();
                    }
                    t32 = *(short *)((a4 + 0x1C));
                    if (((int)t32 >= (int)((((struct oC_int *)0xC2A1764)->v))) && (t34 = (((struct o10_int *)0xC2A1764)->v), (int)t32 <= (int)t34)) {
                        *(unsigned int *)(((int)stk + 20)) = 0xC2A1770;
                        t36 = ((((struct oC_int *)0xC2A1764)->v));
                        *(int *)((int)stk + 12) = t36;
                        *(unsigned int *)(((int)stk + 16)) = 0xC2A1774;
                        t38 = ((((struct o10_int *)0xC2A1764)->v));
                        *(int *)((int)stk + 8) = t38;
                        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A17A8, 0xC2A179C, (*(short *)((a4 + 0x1C))), t38, t36);
                        t44 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                        *(int *)((int)stk + 4) = t44;
                        t47 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                        *(int *)((int)stk + 0) = t47;
                        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A17C4, 0xC2A17B4, (*(short *)((a4 + 0x1C))), t47, t44);
                    }
                    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o8_int *)0xC2A1764)->v))) {
                        *(int *)((int)stk + 12) = 0x0;
                        t59 = ((((struct o8_int *)0xC2A1764)->v));
                        *(int *)((int)stk + 8) = t59;
                        t60 = *(short *)((a4 + 0x1C));
                        *(unsigned int *)(((int)stk + 20)) = (0xC4 + a4);
                        t61 = *(int *)(((0xC4 + a4) + 0x4));
                        *(unsigned int *)(((int)stk + 16)) = t61;
                        FUN_0c0588bc(((*(int *)((0x0 + (*(int *)(((int)stk + 20)))))) + 0x6C), ((*(int *)(((int)stk + 16))) + 0x84), (t61 + 0x6C), t60, t59, 0x0);
                    }
                    *(volatile int *)((a4 + 0xC4));
                    t73 = ((int (*)(int))(FUN_0c187798))((((int)stk + 16) + 0x8));
                    u75 = *(float *)((t74 + 0x0));
                    u76 = (((struct o8_float *)(t74))->v);
                    if (u75 > ((((struct o4_float *)(t74))->v))) {
                        u79 = u76;
                        if (u75 > u76) {
                            u79 = u75;
                        }
                        u84 = u79;
                    } else {
                        u81 = (((struct o4_float *)(t74))->v);
                        u82 = u76;
                        if (u81 > u76) {
                            u82 = u81;
                        }
                        u84 = u82;
                    }
                    (((struct o24_float *)(((((struct oC4_int *)(a4))->v))))->v) = u84;
                    t88 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t88 + 0x1);
                    t143 = (short)(t88 + 0x1);
                    if ((int)(short)(t88 + 0x1) > (int)((((struct o0_int *)0xC2A1764)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t143 = 0x14;
                    }
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xF, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                t110 = ((int (*)(void))(FUN_0c187798))();
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x121F;
                *(volatile int *)((a4 + 0xC4));
                t114 = ((int (*)(void))(FUN_0c187798))();
                *(volatile int *)((a4 + 0xC4));
                t143 = (FUN_0c18778c());
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            FUN_0c07e2f4(a4, 0x31);
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            t130 = *(signed char *)((a4 + 0x1));
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t130));
            *(int *)((int)stk + 0) = 0x100;
            t143 = (FUN_0c064d24(a4, 0x1, 0x3A, 0x0, 0x100, (~((int)0x1 << (int)t130)), 0x0, 0xF0));
        }
    }
    return t143;
}

int FUN_0c136d54(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t5;
    register int t7;
    register int t12;
    register int t15;
    register int t20;
    register int t6;
    register int t13;
    register int t14;
    register int t21;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC136AB4;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 8)));
        *(volatile int *)((t0 + 0xC8));
        *(volatile int *)(((int)stk + 4));
        t5 = ((int (*)(int))(FUN_0c187798))(t0);
        t7 = (((struct oC8_int *)(t6))->v);
        (((struct o70_float *)(t7))->v) = (((((struct o70_float *)(t7))->v)) + (*(float *)0xC2A17D4));
        *(volatile int *)((t6 + 0xC8));
        *(volatile int *)(((int)stk + 0));
        t12 = ((int (*)(int, int))(FUN_0c187798))(t6, 0xC2A17D4);
        t15 = (((struct oC8_int *)(t14))->v);
        (((struct o88_float *)(t15))->v) = (((((struct o88_float *)(t15))->v)) + ((((struct o4_float *)(t13))->v)));
        *(volatile int *)(((*(int *)((t14 + 0x10))) + 0xC8));
        t20 = ((int (*)(int, int))(FUN_0c187798))(t14, t13);
        return t21;
    }
    return 0x0;
}

int FUN_0c136de4(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    *(volatile int *)(((*(int *)((a4 + 0x10))) + 0xC8));
    t2 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (((((struct oC8_int *)(a4))->v)) + 0x6C));
    t2 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + ((((struct o34_int *)0xC2A17F4)->v)));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t2 = *(short *)((a4 + 0x1C));
        if (((int)t2 >= (int)((((struct o4_int *)0xC2A17F4)->v))) && (t0 = (((struct o8_int *)0xC2A17F4)->v), (int)t2 <= (int)t0)) {
            FUN_0c0588bc((a4 + 0x40), 0xC2A17E8, 0xC2A17DC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A17F4)->v))), (((((struct o4_int *)0xC2A17F4)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A17F4)->v))) && (t1 = (((struct o10_int *)0xC2A17F4)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A1818, 0xC2A1808, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A17F4)->v))), (((((struct oC_int *)0xC2A17F4)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A17F4)->v))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0xF, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c18778c();
    return (((int (*)(void))(FUN_0c187798))());
}

int FUN_0c136ff4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t4;
    register int t6;
    register int t10;
    register int t11;
    register int t35;
    register int t41;
    register int t52;
    register int t54;
    register int t59;
    register int t60;
    register int t67;
    register int t53;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    }
    *(volatile signed char *)((a4 + 0x1));
    t4 = ((int (*)(int, int, int))(FUN_0c187798))(0xC532498, a5, a6);
    *(volatile int *)((a4 + 0xC8));
    t6 = ((int (*)(void))(FUN_0c187798))();
    (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o168_float *)(a4))->v));
    *(unsigned int *)(((int)stk + 0)) = (0xC4 + a4);
    t10 = *(int *)(((0xC4 + a4) + 0x8));
    t11 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((int)stk + 4)) = t11;
    FUN_0c17c130(((*(int *)(((int)stk + 4))) + 0x6C), (t11 + 0x6C), (t10 + 0x6C));
    if ((((((struct o2C_float *)(a4))->v)) + -1000.0f) > ((((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
        (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((struct o2C_float *)(a4))->v)) + -1000.0f);
    } else {
        if (((((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v)) > (((((struct o2C_float *)(a4))->v)) + 1000.0f)) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((struct o2C_float *)(a4))->v)) + 1000.0f);
        }
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (((((struct oCC_int *)(a4))->v)) + 0x6C));
    t35 = *(signed char *)((a4 + 0x15));
    if (t35 != 0) {
        if (t35 != 1) {
            if (t35 != 2) {
                t67 = (((int (*)(int))(FUN_0c03f346))(a4));
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t67 = 0x15;
            }
        } else {
            t41 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t41 + 0x1);
            t67 = (short)(t41 + 0x1);
            if ((short)(t41 + 0x1) == (*(int *)0xC2A182C)) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t67 = 0x15;
            }
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t52 = ((int (*)(int))(FUN_0c187798))(0xC2A172C);
        t54 = ((int (*)(int))(FUN_0c187798))(t53);
        FUN_0c136d54((*(signed char *)((a4 + 0x1))), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), a4);
        FUN_0c136f78((*(signed char *)((a4 + 0x1))), 0xC2A172C, a4);
        t59 = FUN_0c179ac0();
        t60 = ((~(((~t59) + 0x1) & 0x3)) + 0x1);
        if ((int)t59 >= 0) {
            t60 = (t59 & 0x3);
        }
        t67 = t60;
        if (t60 == 0) {
            t67 = (FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23));
        }
    }
    return t67;
}
