/* game/item: functions 0C16BD38-0C16C150, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_int { char p[0x404]; int v; };
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
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
extern int FUN_0c150010();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c16bd38(int a4, int a5, int a6, int a7);
int FUN_0c16be0a(int a4, int a5, int a6, int a7);
int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4);

int FUN_0c16bd38(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    if (a7 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x10);
            FUN_0c064d24(t1, 0x3, 0x4F, 0x0, 0x100, (t0), 0x0, 0xFFFFFEF0);
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BE3C;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x2);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BE3C;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c16be0a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (~((int)0x1 << (int)a4));
    if ((int)a4 < 0) {
        t0 = 0xF;
    }
    if (a7 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c07e3ae(t1, 0x9C);
            FUN_0c064d24(t1, 0x3, 0x4F, 0x0, 0x100, (t0), 0x0, 0xFFFFFEF0);
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BF34;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x2);
        t2 = 0x0;
        if (t1 != 0) {
            FUN_0c187798();
            FUN_0c187798();
            u0 = *(float *)0xC16BF34;
            (((struct o4C_float *)(t1))->v) = (u0 * (math_sin_angle16((*(int *)((a6 + 0x4))))));
            (((struct o54_float *)(t1))->v) = (u0 * (math_cos_angle16((*(int *)((a6 + 0x4))))));
            (((struct o50_float *)(t1))->v) = 0.0f;
            (((struct o5C_float *)(t1))->v) = 0.0f;
            FUN_0c187798();
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c16bf02(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 != 2) {
                return t4;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0x3C) {
                u0 = *(float *)0xC16C070;
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        t0 = ((int (*)(int, int, int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(0x1, 0x1F, a6);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = t2;
        *(volatile int *)((a4 + 0xC4));
        t0 = ((int (*)(int, int))(FUN_0c187798))(t1, t2);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t3 = (((struct o404_int *)(a4))->v), t3 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0x3C) {
                u0 = *(float *)0xC16C070;
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
            }
            return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        t0 = ((int (*)(int, float, float, float, float))(FUN_0c150010))((a4 + 0x28), 1.0f, 1.0f, 1.0f, 1.0f);
    }
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}
