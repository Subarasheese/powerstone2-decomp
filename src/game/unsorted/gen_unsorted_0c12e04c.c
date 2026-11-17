/* game/unsorted: functions 0C12E04C-0C12E0F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12e04c(int a4, int a5, int a6, int a7);

int FUN_0c12e04c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t1 = *(short *)((a4 + 0x1E));
        (((struct o18_float *)(t0))->v) = ((float)t1 / 5.0f);
        if (!(1.0f > ((float)t1 / 5.0f))) {
            (((struct o18_float *)(t0))->v) = 1.0f;
        }
        u0 = (((struct o18_float *)(t0))->v);
        (((struct o20_float *)(t0))->v) = u0;
        (((struct o1C_float *)(t0))->v) = u0;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x1000);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x1000);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x1000);
        if (((((struct o84_float *)(t0))->v)) > 0.0f) {
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.0333333351f);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.0333333351f);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0333333351f);
            t1 = 0x8C;
        } else {
            (((struct o8C_float *)(t0))->v) = 0.0f;
            (((struct o88_float *)(t0))->v) = 0.0f;
            (((struct o84_float *)(t0))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    return FUN_0c03f346(a4, t0, a6, a7);
}
