/* game/unsorted: functions 0C12D070-0C12D25A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12d070(int a4, int a5);
int FUN_0c12d170(int a4, int a5, int a6, int a7, float f4);


int FUN_0c12d170(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    t0 = *(short *)((a4 + 0x1C));
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
                    if (!(((float)t0 / 10.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t0 = (((struct oC4_int *)(a4))->v);
                    u0 = (((struct o20_float *)(t0))->v);
                    (((struct o1C_float *)(t0))->v) = u0;
                    (((struct o18_float *)(t0))->v) = u0;
                    t1 = 0x18;
                }
                t0 = t1;
            } else {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0700000003f);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.0700000003f);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0700000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        return t1;
    }
    return FUN_0c03f346(a4, (0x12A + a4), a6, a7);
}
