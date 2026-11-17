/* game/unsorted: functions 0C12E10C-0C12E57E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12e10c(int a4);
int FUN_0c12e21c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c12e10c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = FUN_0c03f444(0x5, 0x0, (*(int *)0xC201D50));
    t2 = t1;
    if (t1 != 0) {
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t4 = t3;
            t4 = (t4 << 2);
            t5 = t3;
            t4 = (t4 + (0xC4 + t1));
            t5 = (t5 << 2);
            t5 = (t5 + t3);
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t4 = (*(int *)((t4 + 0x0)));
            t5 = (t5 + 0xC201CB0);
            FUN_0c03744a(t4, (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4))), (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned short *)((t4 + 0x6)) = (*(short *)((t5 + 0x8)));
            (((struct o14_float *)(t4))->v) = ((((struct o24_float *)(t5))->v));
            t4 = ((int (*)(void))(FUN_0c187798))();
            t4 = ((int (*)(void))(FUN_0c187798))();
            t3 = (t3 + 0x1);
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x4)) = 0xC12E21C;
        t3 = ((int (*)(int))(FUN_0c187798))(0x1);
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x38)) = 0x0;
        *(unsigned int *)((t1 + 0x34)) = 0x0;
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o1B_uchar *)(t1))->v) = 0x0;
        (((struct o14_uchar *)(t1))->v) = 0x0;
        (((struct o15_uchar *)(t1))->v) = 0x0;
        (((struct o16_uchar *)(t1))->v) = 0x0;
        (((struct o17_uchar *)(t1))->v) = 0x0;
        *(unsigned short *)((t1 + 0x1C)) = 0x14;
        *(unsigned short *)((t1 + 0x1E)) = 0x12;
        (((struct o20_ushort *)(t1))->v) = t0;
        (((struct o22_ushort *)(t1))->v) = 0xA;
        t2 = 0x22;
    }
    return t2;
}

int FUN_0c12e21c(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x1B))) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    if ((*(signed char *)((a4 + 0x14))) != 0) {
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.0500000007f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0500000007f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0199999996f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0199999996f);
            t0 = *(short *)((a4 + 0x1E));
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((float)t0 / (1.0f + 1.0f));
            if (!(((float)t0 / (1.0f + 1.0f)) > 0.0f)) {
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
    } else {
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.0199999996f);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0199999996f);
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = 0x2;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    t0 = *(signed char *)((a4 + 0x16));
    switch (t0) {
    case 0:
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o20_ushort *)(a4))->v) = 0x12;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    case 1:
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((short)((t0 - 1) + 0x1) == 0) {
            (((struct o20_ushort *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        break;
    case 2:
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00999999978f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0399999991f);
        t0 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = ((float)t0 / (1.0f + 1.0f));
        if (!(((float)t0 / (1.0f + 1.0f)) > 0.0f)) {
            (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        break;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = t0;
            } else {
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00999999978f);
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.0399999991f);
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
                t0 = (((struct o22_short *)(a4))->v);
                (((struct o14_float *)(((((struct oD0_int *)(a4))->v))))->v) = ((float)t0 / (1.0f + 1.0f));
                if (!(((float)t0 / (1.0f + 1.0f)) > 0.0f)) {
                    (((struct o14_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct o1B_uchar *)(a4))->v) = 0xA;
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                t1 = 0x22;
            }
            t0 = t1;
        } else {
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0399999991f);
            t1 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + 0x1000);
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((short)((t1 - 1) + 0x1) == 0) {
                (((struct o22_ushort *)(a4))->v) = 0x2;
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t2 = 0x17;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((short)(t0 - 1) == 0) {
            (((struct o22_ushort *)(a4))->v) = 0x12;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t2 = 0x17;
        }
        t1 = t2;
    }
    return t1;
}
