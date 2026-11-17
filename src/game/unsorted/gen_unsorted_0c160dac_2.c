/* game/unsorted: functions 0C160DAC-0C161102, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c160f02(int a4, int a5, int a6, int a7);

int FUN_0c160f02(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(int *)((a4 + 0x10));
    if (((*(signed char *)0xC540F98) == 0) && (t0 = *(signed char *)((t1 + 0x3715)), t0 != 23)) {
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t1))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(t1))->v));
        (((struct o2C_float *)(a4))->v) = (((((struct o168_float *)(t1))->v)) + (*(float *)0xC160FAC));
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c03f346(a4, t1, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t2 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0xB4) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    return FUN_0c03f346(a4, t1, a6, a7);
}
