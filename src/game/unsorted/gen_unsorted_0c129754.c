/* game/unsorted: functions 0C129754-0C1297A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c129754(int a4, int a5, int a6, int a7);

int FUN_0c129754(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8)));
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8)));
    return 0xA8;
}
