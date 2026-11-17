/* game/unsorted: functions 0C148A48-0C148CEA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c148a9c(int a4, int a5, int a6, int a7);

int FUN_0c148a9c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2ab6(a4, 0x15, a6, a7);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = ((int (*)(int, int, int, int))(0xC1489F8))(a4, a5, a6, a7);
    if (t0 != 0) {
        return FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
    }
    return t0;
}
