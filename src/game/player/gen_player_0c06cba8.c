/* game/player: functions 0C06CBA8-0C06CEBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o384C_short { char p[0x384C]; short v; };
int FUN_0c037bf6(int);
int pl_falcon_special2_phase4(int);
int FUN_0c06cc18(int);
int FUN_0c06ccf0(int);
int FUN_0c085d0c(int);
int FUN_0c06cba8(int a4);
int FUN_0c06ce38(int a4);
int FUN_0c06ce5a(int a4);

int FUN_0c06cba8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        t0 = *(int *)((a4 + 0x38));
        t1 = (((struct o384C_short *)(a4))->v);
        t2 = *(short *)((a4 + 0x1C));
        t3 = (unsigned short)(t1 - t0);
        if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
            t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)t2)));
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c06ce38(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c06ce5a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c06ce38(a4);
                }
                return pl_falcon_special2_phase4(a4);
            }
            return FUN_0c06ccf0(a4);
        }
        return FUN_0c06cc18(a4);
    }
    return pl_falcon_special2_phase4(a4);
}
