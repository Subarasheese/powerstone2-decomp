/* game/menu/select: functions 0C11C80C-0C11C8EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c18778c(void);
int FUN_0c11c80c(int a4, int a5, int a6, int a7);
int FUN_0c11c8b2(void);
int FUN_0c11c8be(int a4);

int FUN_0c11c80c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        FUN_0c03733c(a4, 0x34, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x21F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c18778c();
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xF0)) {
        FUN_0c0588bc((a4 + 0x40), 0xC292308, 0xC2922FC, (*(short *)((a4 + 0x1C))), 0xF0, 0x0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xF0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    return (short)(t0 + 0x1);
}

int FUN_0c11c8b2(void)
{
    (((struct o14_uchar *)((*(int *)0xC473C44)))->v) = 0x63;
    return 0x14;
}

int FUN_0c11c8be(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC11C80C;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)0xC473C44 = t0;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}
