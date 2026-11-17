/* game/unsorted: functions 0C12D3E4-0C12D4B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12d3e4(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c12d3e4(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0xA, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x15));
        t1 = t0;
        if (t0 == 0) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x400);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0199999996f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0199999996f);
            t0 = *(short *)((a4 + 0x1C));
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 60.0f);
            if (!(((float)t0 / 60.0f) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            t0 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o18_float *)(t0))->v) = u0;
            t1 = 0x18;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = t0;
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x200);
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.00999999978f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
        t0 = *(short *)((a4 + 0x1C));
        (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 60.0f);
        if (!(((float)t0 / 60.0f) > 0.0f)) {
            (((struct o14_uchar *)(a4))->v) = 0xA;
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = (((struct oC4_int *)(a4))->v);
        u0 = (((struct o20_float *)(t0))->v);
        (((struct o1C_float *)(t0))->v) = u0;
        (((struct o18_float *)(t0))->v) = u0;
        t1 = 0x18;
    }
    return t1;
}
