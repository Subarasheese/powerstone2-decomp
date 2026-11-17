/* game/player: functions 0C06CAE4-0C06CB82, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3735_uchar { char p[0x3735]; unsigned char v; };
int FUN_0c071dfe(int);
int FUN_0c072070(int);
int FUN_0c07335e(int);
int FUN_0c07e2c4(int);
int FUN_0c1575d4(int, int);
int FUN_0c06cae4(int a4, int a5, int a6, int a7);

int FUN_0c06cae4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c07e2c4(a4);
    if (t0 == 0) {
        t1 = *(signed char *)((a4 + 0x3732));
        if ((t1 == 5) || ((t1 == 1) || ((t1 == 7) || ((t1 == 8) || ((t1 == 9) || ((t1 == 12) || ((t1 == 13) || (t1 == 6)))))))) {
            if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0xC)) == 0) {
                FUN_0c1575d4((*(signed char *)((a4 + 0x1))), 0x0);
            }
        }
        (((struct o3735_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3735))) + 0x1);
        t1 = *(signed char *)((a4 + 0x3732));
        if (t1 != 10) {
            if (t1 != 11) {
                if (t1 != 15) {
                    t1 = *(int *)((0xC25914C + ((*(signed char *)((a4 + 0x2))) << 2)));
                    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
                }
                return FUN_0c07335e(a4);
            }
            return FUN_0c072070(a4);
        }
        return FUN_0c071dfe(a4);
    }
    return t0;
}
