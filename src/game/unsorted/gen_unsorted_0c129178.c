/* game/unsorted: functions 0C129178-0C12922A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c129178(int a4, int a5, int a6, int a7);

int FUN_0c129178(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, 0x1, a6, a7);
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 30.0f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00284999982f);
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
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = 0.800000012f;
        (((struct o84_float *)(t0))->v) = 0.800000012f;
        (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.00300000003f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
