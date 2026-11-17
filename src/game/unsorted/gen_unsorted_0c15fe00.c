/* game/unsorted: functions 0C15FE00-0C15FFBC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c15fe00(int a4, int a5, int a6, int a7);

int FUN_0c15fe00(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x4, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1E)) = 0x4;
        (((struct o20_ushort *)(a4))->v) = 0x1;
        (((struct o22_ushort *)(a4))->v) = 0x1E;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x4;
                    t0 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
                    if ((int)(short)(t0 + 0x1) > (int)0x4) {
                        (((struct o20_ushort *)(a4))->v) = 0x1;
                    }
                    t0 = 0xC;
                    for (;;) {
                        FUN_0c037498((*(int *)((((0xC4 + a4) + t0) + 0x0))), ((((struct o20_short *)(a4))->v)), 0x3B, (*(int *)0xC4B40CC));
                        t0 = (t0 + 0x4);
                        if ((unsigned int)t0 >= (unsigned int)0x1C) {
                            break;
                        }
                    }
                }
                t0 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0x22;
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o22_ushort *)(a4))->v) = 0x1E;
                    t0 = (((struct oCC_int *)(a4))->v);
                    t3 = *(signed char *)((t0 + 0x0));
                    *(unsigned char *)((t0 + 0x0)) = (t3 ^ 0x1);
                    t1 = (t3 ^ 0x1);
                }
            }
            t0 = t1;
        } else {
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0833333358f);
            if (!(((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f)) {
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            }
            t1 = (((struct oC8_int *)(a4))->v);
            u0 = (((struct o8C_float *)(t1))->v);
            (((struct o88_float *)(t1))->v) = u0;
            (((struct o84_float *)(t1))->v) = u0;
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o14_float *)(t1))->v) = (((((struct o14_float *)(t1))->v)) + 0.0166666675f);
            t1 = 0x14;
            if (!(1.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
                (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
                t1 = 0xDC;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = (((struct oC8_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x410);
        (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 5.0f;
        (((struct o88_float *)(t0))->v) = 5.0f;
        (((struct o84_float *)(t0))->v) = 5.0f;
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0833333358f);
        if (!(((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f)) {
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = (((struct o8C_float *)(t0))->v);
        (((struct o88_float *)(t0))->v) = u0;
        (((struct o84_float *)(t0))->v) = u0;
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + 0.0166666675f);
        t0 = 0x14;
        if (!(1.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v)))) {
            (((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
            t0 = 0xDC;
        }
        t1 = t0;
    }
    return t1;
}
