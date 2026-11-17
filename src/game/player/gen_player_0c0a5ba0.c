/* game/player: functions 0C0A5BA0-0C0A5C34, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
int FUN_0c037bf6(int);
int FUN_0c07f566(void);
int FUN_0c0a5ba0(int a4);
int FUN_0c0a5bc2(int a4, int a5, int a6, int a7);
int FUN_0c0a5bfe(int a4);

int FUN_0c0a5ba0(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0a5bc2(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c0a5ba0(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A5B52))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0A5B30))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A5ABC))(a4, a5, a6, a7);
}

int FUN_0c0a5bfe(int a4)
{
    register int t0;

    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x1;
    }
    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x0;
    }
    return 0x63;
}
