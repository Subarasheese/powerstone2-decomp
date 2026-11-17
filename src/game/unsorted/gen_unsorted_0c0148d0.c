/* game/unsorted: functions 0C0148D0-0C0148F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0148d0(int a4);

int FUN_0c0148d0(int a4)
{
    register int t1;

    (((struct o28_float *)(a4))->v) = -154.0f;
    (((struct o2C_float *)(a4))->v) = -25.0f;
    t1 = 0x0;
    if ((*(int *)0xC5426EC) != 1) {
        t1 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    return 0xA8;
}
