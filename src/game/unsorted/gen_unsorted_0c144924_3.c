/* game/unsorted: functions 0C144924-0C1453BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c144984(int, int, int);
int FUN_0c1449a0(int);
int FUN_0c144c9c(int);
int FUN_0c144d6a(int);
int FUN_0c144e7a(int);
int FUN_0c144eee(int);
int FUN_0c145132(int);
int FUN_0c145224(int);
int FUN_0c1452d2(int a4);

int FUN_0c1452d2(int a4)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        if (((int)(*(signed char *)((a4 + 0x2))) < (int)0x4) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((t0 + 0x1B)), t1 != 0)) {
            FUN_0c144984(a4, 0x1, 0x4B0);
        }
    } else {
        if ((*(signed char *)((0xC535BAC + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o26_uchar *)(a4))->v) = 0x1;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if (((int)(*(signed char *)((a4 + 0x2))) < (int)0x4) && (t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((t2 + 0x1B)), t3 != 0)) {
            FUN_0c144984(a4, 0x1, 0x4B0);
        }
    }
    FUN_0c1449a0(a4);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                return t0;
                            }
                            return FUN_0c145224(a4);
                        }
                        return FUN_0c145132(a4);
                    }
                    return FUN_0c144eee(a4);
                }
                return FUN_0c144e7a(a4);
            }
            return FUN_0c144d6a(a4);
        }
        return FUN_0c144c9c(a4);
    }
    FUN_0c144984(a4, 0x1, 0x78);
    return FUN_0c144c9c(a4);
}
