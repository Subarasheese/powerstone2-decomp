/* game/menu/select: functions 0C11C6DC-0C11C7AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c187798(void);
int FUN_0c11c6dc(int a4, int a5, int a6, int a7);

int FUN_0c11c6dc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0x16, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        FUN_0c05a080(0x1B, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0x3B)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), 0x3C, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)0x3D) && ((int)t0 <= (int)0x78)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), 0x78, 0x3C);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x78) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
