/* game/unsorted: functions 0C16E9CC-0C16EE8A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
extern int FUN_0c03f346();
float math_sin_angle16(int);
int FUN_0c16ec20(int a4, int a5, int a6, int a7);

int FUN_0c16ec20(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o0_float *)0xC16EDB0)->v);
    u1 = math_sin_angle16((int)(((float)((int)((int)0xB4 / (int)(*(short *)((a4 + 0x1C))))) * ((((struct o8_float *)0xC16EDB0)->v))) / ((((struct oC_float *)0xC16EDB0)->v))));
    u2 = u0;
    u2 = u2 + ((((struct o14_float *)0xC16EDB0)->v)) * u1;
    (((struct o88_float *)(t0))->v) = u2;
    (((struct o70_float *)(t0))->v) = ((((((struct o88_float *)(t0))->v)) / u0) * ((((struct o18_float *)0xC16EDB0)->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
