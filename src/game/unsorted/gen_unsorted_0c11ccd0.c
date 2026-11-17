/* game/unsorted: functions 0C11CCD0-0C11CD98, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c11ccd0(int a4, int a5, int a6, int a7);

int FUN_0c11ccd0(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03733c(a4, 0x21, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t0 = ((int (*)(void))(FUN_0c187798))();
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC4_int *)(a4))->v)));
        t0 = ((int (*)(int))(FUN_0c187798))(((((struct oC8_int *)(a4))->v)));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 1:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        break;
    case 2:
        break;
    default:
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC292314);
    return FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC292314);
}
