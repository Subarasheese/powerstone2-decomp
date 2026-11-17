/* game/unsorted: functions 0C16F14C-0C16F1FE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o404_int { char p[0x404]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c16f14c(int a4, int a5, int a6, int a7);

int FUN_0c16f14c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        (((struct oA8_uchar *)(a4))->v) = t1;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if (((((struct o404_int *)(a4))->v)) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        if ((int)(*(short *)((a4 + 0x1C))) < (int)0x5) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) * 0.800000012f);
            t1 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct o20_float *)(t1))->v) = u0;
            (((struct o1C_float *)(t1))->v) = u0;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t0 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t0 = 0x14;
        }
    }
    return t0;
}
