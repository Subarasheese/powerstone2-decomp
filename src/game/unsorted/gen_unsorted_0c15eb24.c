/* game/unsorted: functions 0C15EB24-0C15ED7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c15eb24(int a4, int a5, int a6, int a7, float f4);

int FUN_0c15eb24(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                    if (t0 != 4) {
                    } else {
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.000312499993f);
                        t0 = 0x40;
                        if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC2038D0) + 0x8))) + 0x186);
                            t2 = *(signed char *)((a4 + 0x2));
                            (((struct o20_ushort *)(a4))->v) = (*(int *)(((0xC2038D0 + ((short)t2 * (short)0x1C)) + 0xC)));
                            FUN_0c187798((0xC2038D0 + ((short)t2 * (short)0x1C)), a5, a6);
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t0 = 0x14;
                        }
                        t1 = t0;
                    }
                    t0 = t1;
                } else {
                    t1 = (((struct o20_short *)(a4))->v);
                    (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                    t2 = 0x20;
                    if ((int)(short)(t1 - 1) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t2 = 0x15;
                    }
                    t0 = t2;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u0 = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * (math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13))));
                (((struct o40_float *)(a4))->v) = ((((u0 * 0.200000003f)) + 1.0f) / 320.0f);
                t0 = *(short *)((a4 + 0x1C));
                t2 = t0;
                if ((int)t0 > 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 20.0f) * 16384.0f));
            (((struct o40_float *)(a4))->v) = ((1.0f - ((u0 * 1.0f))) / 320.0f);
            t1 = *(short *)((a4 + 0x1C));
            t2 = t1;
            if ((int)t1 <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o44_float *)(a4))->v) = 0.00312500005f;
            t2 = 0x44;
        }
        t1 = t2;
    }
    return t1;
}
