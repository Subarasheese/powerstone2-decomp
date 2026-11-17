/* game/unsorted: functions 0C0F78E8-0C0F7944, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0f78e8(int a4, int a5, int a6, int a7);

int FUN_0c0f78e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t0 = *(signed char *)0xC541F43;
        t1 = (unsigned char)t0;
        if ((int)(unsigned char)t0 >= (int)0xB) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1.0f);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 1.0f);
    t1 = *(signed char *)0xC541F43;
    if ((int)(unsigned char)t1 >= (int)0xC) {
        return FUN_0c03f346(a4, t0, 0xC541F3C, a7);
    }
    return (unsigned char)t1;
}
