/* game/unsorted: functions 0C0CAFC0-0C0CB1CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
int FUN_0c03f346(int);
int FUN_0c064f80(int);
int FUN_0c07e3fc(int, int);
int FUN_0c187798(void);
int FUN_0c0cb03e(int a4, int a5, int a6);

int FUN_0c0cb03e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    t1 = ((int (*)(void))(FUN_0c187798))();
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) == 0) {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
    } else {
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    }
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        if ((*(short *)((a4 + 0x1E))) == 0) {
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 7) {
                FUN_0c07e3fc(a4, 0xE);
            } else {
                t1 = FUN_0c064f80((((short)t0 * (short)0x3938) + 0xC532498));
                t2 = 0x5;
                if (t1 != 0) {
                    t2 = 0x4;
                }
                FUN_0c07e3fc(a4, t2);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
        }
        if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 7) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        }
    }
    t0 = *(signed char *)((0x41D + (*(int *)((a4 + 0x10)))));
    if (t0 != 5) {
        return FUN_0c03f346(a4);
    }
    return t0;
}
