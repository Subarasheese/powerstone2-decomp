/* game/player: functions 0C10B6E4-0C10C7FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
int FUN_0c056e44(int, int);
int FUN_0c10b6e4(int);
int FUN_0c10b7be(int, int, int, int);
int FUN_0c10b7e2(int, int, int, int);
int FUN_0c10b808(int);
int FUN_0c10b97c(int, int, int, int);
int FUN_0c10b9d6(int, int, int, int);
int FUN_0c10bbb8(int, int, int);
int FUN_0c10bda2(int);
int FUN_0c10bdfc(int, int, int, int);
int FUN_0c118412(int);
int FUN_0c10be56(int a4);
int FUN_0c10bea8(int a4, int a5, int a6, int a7);

int FUN_0c10be56(int a4)
{
    FUN_0c056e44(0x23, 0x5);
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x4));
    (((struct o14_uchar *)(((((struct o18_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o18_uint *)0xC474B8C)->v) = 0x0;
    return FUN_0c10b6e4(a4);
}

int FUN_0c10bea8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 99) {
                                        return t0;
                                    }
                                    return FUN_0c10be56(a4);
                                }
                                return FUN_0c10bdfc(a4, a5, a6, a7);
                            }
                            return FUN_0c10bda2(a4);
                        }
                        return FUN_0c10bbb8(a4, a5, a6);
                    }
                    return FUN_0c10b9d6(a4, a5, a6, a7);
                }
                return FUN_0c10b97c(a4, a5, a6, a7);
            }
            return FUN_0c10b7e2(a4, a5, a6, a7);
        }
        return FUN_0c10b808(a4);
    }
    return FUN_0c10b7be(a4, a5, a6, a7);
}
