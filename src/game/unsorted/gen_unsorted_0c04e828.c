/* game/unsorted: functions 0C04E828-0C04E8A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04e828(int a4, int a5, int a6, int a7);

int FUN_0c04e828(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct oC4_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o14_float *)(t0))->v) = 0.0f;
    }
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
            u0 = (((struct o14_float *)(t0))->v);
            (((struct o14_float *)(t0))->v) = (u0 - 0.0111111114f);
            if (!((u0 - 0.0111111114f) > 0.0f)) {
                return FUN_0c03f346(a4, t0, a6, a7);
            }
            u0 = (((struct o20_float *)(t0))->v);
            (((struct o1C_float *)(t0))->v) = u0;
            (((struct o18_float *)(t0))->v) = u0;
            return 0x18;
        }
        t2 = t1;
        if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0x6) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        return t2;
    }
    u0 = (((struct o14_float *)(t0))->v);
    (((struct o14_float *)(t0))->v) = (u0 + 0.0111111114f);
    t1 = 0x14;
    if (!(1.0f > (u0 + 0.0111111114f))) {
        (((struct o14_float *)(t0))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
