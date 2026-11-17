/* game/item: functions 0C16AC5C-0C16BD10, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c162860(int, int);
int FUN_0c16af78(int, int, int);
int FUN_0c16b01e(int, int, int);
int FUN_0c16b38e(int, float);
int FUN_0c16b5a6(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c16b2cc(int a4, int a5);
int FUN_0c16b9d2(int a4, int a5, int a6, float f4);
int FUN_0c16b9ec(int a4, int a5, int a6, int a7);

int FUN_0c16b2cc(int a4, int a5)
{
    register int t0;
    register int t16;
    register float u9;
    register int t14;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t16 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x21;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC16B224;
        *(unsigned char *)((t0 + 0x2)) = a5;
        FUN_0c187798(0x21);
        FUN_0c16af78(t0, 0x4, 0x3);
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((0x41C + t0) + 0x1))), 0x43, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        u9 = *(float *)0xC16B3FC;
        (((struct o4C_float *)(t0))->v) = (-(((((struct o4C_float *)(a4))->v)) * u9));
        (((struct o54_float *)(t0))->v) = (-(((((struct o54_float *)(a4))->v)) * u9));
        (((struct o50_float *)(t0))->v) = (-(((((struct o50_float *)(a4))->v)) * u9));
        t14 = (int)((int)(FUN_0c179ac0()) % (int)0x33);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + (float)((-t14) + 0x32));
        t16 = ((-t14) + 0x32);
    }
    return t16;
}

int FUN_0c16b9d2(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c16b5a6(a4);
        }
        return FUN_0c16b38e(a4, f4);
    }
    return FUN_0c16b01e(a4, a5, a6);
}

int FUN_0c16b9ec(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t1;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t32;
    register int t34;
    register int t35;
    register int t55;
    register int t64;
    register int t3;
    register int t12;
    register int t23;
    register int t17;
    register int t20;
    register int t33;
    register int t36;
    register int t44;
    register int t43;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (a7 != 0) {
        if (a7 != 1) {
            t1 = FUN_0c162860((*(signed char *)((a4 + 0x1))), a7);
            if (t1 != 0) {
                *(unsigned int *)((t1 + 0x4)) = 0xC16B9D2;
                *(unsigned char *)((t1 + 0x2)) = a7;
                FUN_0c187798(t1);
                *(volatile int *)(((int)stk + 0));
                FUN_0c187798(t3);
            }
        } else {
            t9 = a7;
            t10 = a4;
            t11 = a5;
            t13 = 0x0;
            for (;;) {
                if ((int)t13 >= (int)0x3) {
                    break;
                }
                t9 = (*(signed char *)((a4 + 0x1)));
                t11 = a7;
                t10 = t9;
                t9 = (FUN_0c162860(t10, t11));
                t10 = t9;
                if (t9 != 0) {
                    *(unsigned int *)((t10 + 0x4)) = 0xC16B9D2;
                    t9 = a7;
                    *(unsigned char *)((t10 + 0x2)) = t9;
                    t9 = 0xC;
                    t9 = (FUN_0c187798(t10));
                    t10 = t17;
                    *(volatile int *)(((int)stk + 0));
                    t9 = 0xC;
                    t9 = (FUN_0c187798(t10));
                    t11 = 0x41C;
                    t10 = t20;
                    t11 = (t11 + t20);
                    t9 = t13;
                    *(unsigned char *)((t11 + 0x3)) = t9;
                    t9 = (*(signed char *)((t11 + 0x3)));
                    if (t9 == 0) {
                        t12 = t10;
                    } else {
                        *(unsigned int *)((t10 + 0x10)) = t12;
                    }
                    t23 = t11;
                }
                t13 = (t13 + 0x1);
                t11 = t23;
            }
        }
    } else {
        t32 = a7;
        t34 = a4;
        t35 = 0x0;
        for (;;) {
            if ((int)t35 >= (int)0x5) {
                break;
            }
            t36 = 0x0;
            for (;;) {
                if ((int)t36 >= (int)0x3) {
                    break;
                }
                t32 = (*(signed char *)((a4 + 0x1)));
                t34 = t32;
                t32 = (FUN_0c162860(t34, a7));
                t34 = t32;
                if (t32 != 0) {
                    *(unsigned int *)((t34 + 0x4)) = 0xC16B9D2;
                    t32 = a7;
                    t33 = t34;
                    *(unsigned char *)((t34 + 0x2)) = t32;
                    t33 = (t33 + 0x28);
                    t32 = 0xC;
                    t32 = (FUN_0c187798(t34));
                    t33 = t34;
                    *(volatile int *)(((int)stk + 0));
                    t33 = (t33 + 0x34);
                    t32 = 0xC;
                    t32 = (FUN_0c187798(t34));
                    t33 = 0x41C;
                    t34 = (t43 + t33);
                    t32 = t36;
                    *(unsigned char *)((t34 + 0x2)) = t32;
                    t32 = t35;
                    *(unsigned char *)((t34 + 0x3)) = t32;
                    t44 = t33;
                }
                t33 = t44;
                t36 = (t36 + 0x1);
            }
            t35 = (t35 + 0x1);
        }
    }
    *(int *)((int)stk + 32) = a7;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t55 = FUN_0c03f444(0x5, 0x0, 0x1);
    t64 = t55;
    if (t55 != 0) {
        (((struct oAC_ushort *)(t55))->v) = 0x1F;
        (((struct oA9_uchar *)(t55))->v) = 0x21;
        *(unsigned int *)((t55 + 0x4)) = 0xC16BB24;
        *(unsigned char *)((t55 + 0x2)) = (*(signed char *)(((int)stk + 24)));
        (((struct o48_float *)(t55))->v) = 0.0f;
        (((struct o44_float *)(t55))->v) = 0.0f;
        (((struct o40_float *)(t55))->v) = 0.0f;
        FUN_0c037498(((((struct oC4_int *)(t55))->v)), (0x3 & (*(signed char *)((t55 + 0x2)))), 0x4B, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t55))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t55))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t55 + 0x10)) = (*(int *)(((int)stk + 20)));
        t64 = 0xF;
    }
    return t64;
}
