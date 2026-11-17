/* game/effect: functions 0C152E84-0C152EF6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c152e84(int a4, int a5, int a6, int a7);

int FUN_0c152e84(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) >= (int)0x4) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x4;
        return FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x17, (*(int *)0xC4B40CC));
    }
    return (short)(t0 - 1);
}
