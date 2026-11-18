/* game/unsorted: functions 0C163514-0C163876, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c163514(int a4, int a5, int a6, int a7);
int FUN_0c163670(int a4, int a5, int a6);
int FUN_0c16367e(int a4, int a5, int a6, int a7);
int FUN_0c1636ae(int a4, int a5, int a6);

int FUN_0c163514(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x7;
            }
            FUN_0c03744a(t0, (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0900000036f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = u0;
        (((struct o88_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o20_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.0799999982f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) < (int)0xA) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        if (((*(short *)((a4 + 0x1C))) & 3) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x7) {
                *(unsigned short *)((a4 + 0x1E)) = 0x7;
            }
            FUN_0c03744a(t0, (*(short *)((a4 + 0x1E))), 0x9, (*(int *)0xC4B40CC));
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0199999996f);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0900000036f);
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = u0;
        (((struct o88_float *)(t0))->v) = u0;
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o20_float *)(t0))->v) = (u0 + 0.0799999982f);
            (((struct o1C_float *)(t0))->v) = (u0 + 0.0799999982f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) < (int)0xA) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
            }
        }
    }
    FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
    return FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
}

int FUN_0c163670(int a4, int a5, int a6)
{
    (((struct o41C_uchar *)(a4))->v) = a5;
    *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
    return a6;
}

int FUN_0c16367e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

