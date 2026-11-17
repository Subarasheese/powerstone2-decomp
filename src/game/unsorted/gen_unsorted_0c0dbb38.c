/* game/unsorted: functions 0C0DBB38-0C0DBBF2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0bbf58(int);
int FUN_0c0db380(int);
int FUN_0c187798(int, int, int);
int FUN_0c0dbb38(int a4, int a5, int a6, int a7);

int FUN_0c0dbb38(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t10;
    register int t14;
    register int t17;
    register int t23;
    register int t26;
    register int t29;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c187798(a4, a5, a6);
            FUN_0c0bbf58(a4);
            t10 = 0x132;
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                FUN_0c0db380(a4);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t10 = 0x14;
            }
            return t10;
        }
        t14 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t14 - 1);
        t17 = (short)(t14 - 1);
        if ((short)(t14 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0xFFFFFFFF, 0xFFFFFFEF);
            (((struct o132_uchar *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t17 = 0x14;
        }
        return t17;
    }
    t23 = 0x1;
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        t23 = 0x168;
    }
    *(unsigned short *)((a4 + 0x1C)) = t23;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t26 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t26 - 1);
    t29 = (short)(t26 - 1);
    if ((short)(t26 - 1) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0xFFFFFFFF, 0xFFFFFFEF);
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t29 = 0x14;
    }
    return t29;
}
