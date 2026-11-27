/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03ee04(int, float);
int nlObjPutSetFadeColor(int, int, int, float, float, float);
int FUN_0c02e406(int a4, int a5, int a6, float f4);

int FUN_0c02e406(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = *(short *)((a5 + 0x6));
    if (((unsigned short)t0 & 0x200) != 0) {
        if (((unsigned short)(*(short *)((a4 + 0x4))) & 0x200) != 0) {
            return nlObjPutSetFadeColor(0x200, a5, a6, ((((struct oC_float *)(a4))->v)), ((((struct o10_float *)(a4))->v)), ((((struct o14_float *)(a4))->v)));
        }
        return FUN_0c03ee04((*(signed char *)((a4 + 0x1))), f4);
    }
    return (unsigned short)t0;
}
