/* game/unsorted: functions 0C128410-0C128588, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c128410(int a4);
int FUN_0c128498(int a4, int a5, int a6, int a7, float f4);

int FUN_0c128410(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC128498;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c187798();
        FUN_0c187798();
        (((struct o54_float *)(t1))->v) = 0.0f;
        (((struct o50_float *)(t1))->v) = 0.0f;
        (((struct o4C_float *)(t1))->v) = 0.0f;
        t0 = 0x4C;
    }
    return t0;
}

int FUN_0c128498(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 4)) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.100000001f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.0333333351f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.0333333351f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.0333333351f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
