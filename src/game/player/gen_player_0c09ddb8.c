/* game/player: functions 0C09DDB8-0C09DEA8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c09ddb8(int a4, int a5, int a6, int a7);
int FUN_0c09de6a(int a4, int a5, int a6);
int FUN_0c09de8c(int a4, int a5, int a6, int a7);

int FUN_0c09ddb8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC09DA94))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC09DD7C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC09D358))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC09D74E))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09C98C))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09CFDC))(a4, a5, a6, a7);
}

int FUN_0c09de6a(int a4, int a5, int a6)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c09de8c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c09de6a(a4, a5, a6);
    }
    return ((int (*)(int, int, int, int))(0xC09DE0C))(a4, a5, a6, a7);
}
