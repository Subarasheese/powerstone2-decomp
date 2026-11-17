/* game/effect: functions 0C13303C-0C13371E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c133644(int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c13303c(int a4);
int FUN_0c133084(int a4);
int FUN_0c1330cc(int a4, int a5, int a6, int a7);
int FUN_0c1332b4(int a4);
int FUN_0c133384(int a4);
int FUN_0c1333cc(int a4, int a5, int a6, int a7);

int FUN_0c13303c(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c133084(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x3;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c1330cc(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t4;
    register float u12;
    register int t23;
    register float u31;
    register int t40;
    register float u50;
    register float u52;
    register int t54;
    register int t59;
    register int t61;
    register int t68;
    register float u78;
    register float u80;
    register int t82;
    register int t87;
    register int t89;
    register int t34;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c133084(a4);
            t2 = *(signed char *)((a4 + 0x15));
            if (t2 != 0) {
                if (t2 != 1) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t34 = 0x15;
                } else {
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 + 0x1);
                    if ((short)(t4 + 0x1) == 5) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                    if (0.0f > ((((struct o40_float *)(a4))->v))) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                    }
                    u12 = (((struct o40_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = u12;
                    (((struct o44_float *)(a4))->v) = u12;
                    *(volatile int *)((a4 + 0xC4));
                    t34 = (((int (*)(void))(FUN_0c187798))());
                }
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
                (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t23 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t23 + 0x1);
                if ((short)(t23 + 0x1) == 5) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                if (0.0f > ((((struct o40_float *)(a4))->v))) {
                    (((struct o40_float *)(a4))->v) = 0.0f;
                }
                u31 = (((struct o40_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = u31;
                (((struct o44_float *)(a4))->v) = u31;
                *(volatile int *)((a4 + 0xC4));
                t34 = (((int (*)(int))(FUN_0c187798))((0x12A + a4)));
            }
            return t34;
        }
        FUN_0c13303c(a4);
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            
        } else {
            t40 = FUN_0c064f80(a4);
            if (t40 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                FUN_0c133644(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                FUN_0c133644(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                (((struct o12E_ushort *)(a4))->v) = 0x0;
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4A);
            } else {
                (((struct o5C_float *)(a4))->v) = -1.0f;
            }
        }
        u50 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u50 + 0.100000001f);
        if ((u50 + 0.100000001f) > (1.0f + 1.0f)) {
            (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        }
        u52 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u52;
        (((struct o44_float *)(a4))->v) = u52;
        *(volatile int *)((a4 + 0xC4));
        t54 = ((int (*)(void))(FUN_0c187798))();
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        t59 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t59 - 1);
        t61 = (short)(t59 - 1);
        if ((short)(t59 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t61 = 0x15;
        }
        return t61;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    FUN_0c13303c(a4);
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        
    } else {
        t68 = FUN_0c064f80(a4);
        if (t68 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            FUN_0c133644(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c133644(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            (((struct o12E_ushort *)(a4))->v) = 0x0;
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x4A);
        } else {
            (((struct o5C_float *)(a4))->v) = -1.0f;
        }
    }
    u78 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u78 + 0.100000001f);
    if ((u78 + 0.100000001f) > (1.0f + 1.0f)) {
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
    }
    u80 = (((struct o40_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u80;
    (((struct o44_float *)(a4))->v) = u80;
    *(volatile int *)((a4 + 0xC4));
    t82 = ((int (*)(void))(FUN_0c187798))();
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    t87 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t87 - 1);
    t89 = (short)(t87 - 1);
    if ((short)(t87 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t89 = 0x15;
    }
    return t89;
}

int FUN_0c1332b4(int a4)
{
    register int t0;
    register float u4;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC1330CC;
        FUN_0c187798();
        FUN_0c187798();
        u4 = *(float *)0xC133410;
        (((struct o48_float *)(t0))->v) = u4;
        (((struct o44_float *)(t0))->v) = u4;
        (((struct o40_float *)(t0))->v) = u4;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x1, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x3F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        FUN_0c064d24(t0, 0x1, 0x33, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))), 0x0, 0xF0);
        return FUN_0c07e2f4(t0, 0x61);
    }
    return t0;
}

int FUN_0c133384(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x3;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x7) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c1333cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c133384(a4);
                t0 = *(signed char *)((a4 + 0x15));
                if (t0 != 0) {
                    if (t0 != 1) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t0 = 0x15;
                    } else {
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                        if ((short)(t1 + 0x1) == 5) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        }
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                        if (0.0f > ((((struct o40_float *)(a4))->v))) {
                            (((struct o40_float *)(a4))->v) = 0.0f;
                        }
                        u0 = (((struct o40_float *)(a4))->v);
                        (((struct o48_float *)(a4))->v) = u0;
                        (((struct o44_float *)(a4))->v) = u0;
                        *(volatile int *)((a4 + 0xC4));
                        t0 = (((int (*)(void))(FUN_0c187798))());
                    }
                    t1 = t0;
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
                    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                    if ((short)(t0 + 0x1) == 5) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                    if (0.0f > ((((struct o40_float *)(a4))->v))) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct o40_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = u0;
                    (((struct o44_float *)(a4))->v) = u0;
                    *(volatile int *)((a4 + 0xC4));
                    t1 = (((int (*)(int))(FUN_0c187798))((0x12A + a4)));
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        t0 = *(int *)((a4 + 0x38));
        t1 = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            t1 = 0x4000;
        }
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t1 + t0))) * 5.0f);
        t0 = *(int *)((a4 + 0x38));
        t1 = 0xFFFFC000;
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            t1 = 0x4000;
        }
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t1 + t0))) * 5.0f);
    }
    FUN_0c133384(a4);
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        
    } else {
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o5C_float *)(a4))->v) = -1.0f;
        }
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    if ((u0 + 0.100000001f) > (1.0f + 1.0f)) {
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u0;
    (((struct o44_float *)(a4))->v) = u0;
    *(volatile int *)((a4 + 0xC4));
    t0 = ((int (*)(void))(FUN_0c187798))();
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t1 = 0x15;
    }
    return t1;
}
