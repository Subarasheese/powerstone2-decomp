/* game/unsorted: functions 0C1605F4-0C1606CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c1605f4(int a4);

int FUN_0c1605f4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
    if ((int)(short)(t1 + 0x1) >= (int)0x8) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    FUN_0c037498(t0, (*(int *)(((((*(short *)((a4 + 0x1C))) << 2) << 1) + 0xC2A2C90))), 0x12, (*(int *)0xC4B40CC));
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x2D8);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 != 3) {
                    return t1;
                }
                return FUN_0c03f346(a4);
            }
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.0799999982f);
            if (!(((((struct o84_float *)(t0))->v)) > 0.0f)) {
                (((struct o84_float *)(t0))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct o84_float *)(t0))->v);
            (((struct o8C_float *)(t0))->v) = u0;
            (((struct o88_float *)(t0))->v) = u0;
            return 0x88;
        }
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0299999993f);
    u0 = (((struct o84_float *)(t0))->v);
    (((struct o8C_float *)(t0))->v) = u0;
    (((struct o88_float *)(t0))->v) = u0;
    t1 = 0x84;
    if (((((struct o84_float *)(t0))->v)) > 0.5f) {
        *(unsigned short *)((a4 + 0x1E)) = 0x6;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
