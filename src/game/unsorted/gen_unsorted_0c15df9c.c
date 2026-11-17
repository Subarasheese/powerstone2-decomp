/* game/unsorted: functions 0C15DF9C-0C15E064, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c15df9c(int a4, int a5, int a6, int a7);

int FUN_0c15df9c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1E))) > (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        } else {
            t0 = 0x0;
            for (;;) {
                FUN_0c037498((*(int *)((((0xC4 + a4) + t0) + 0x0))), (*(short *)((a4 + 0x1E))), 0x21, (*(int *)0xC4B40CC));
                t0 = (t0 + 0x4);
                if ((unsigned int)t0 >= (unsigned int)0x20) {
                    break;
                }
            }
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
        if ((unsigned int)t0 >= (unsigned int)0x20) {
            break;
        }
    }
    return 0x70;
}
