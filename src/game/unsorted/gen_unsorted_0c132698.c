/* game/unsorted: functions 0C132698-0C132714, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c132698(int a4, int a5, int a6, int a7);

int FUN_0c132698(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x8) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.200000003f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.200000003f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + 0.200000003f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
        return 0x20;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
