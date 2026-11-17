/* game/network: functions 0C0243F4-0C024444, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c013f2e(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0243f4(void);

int FUN_0c0243f4(void)
{
    int stk[3];
    register int t1;
    register int t6;
    register int t9;

    FUN_0c013f2e();
    t1 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t1 - 1);
    if ((int)(short)(t1 - 1) < (int)0x2) {
        *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    }
    t6 = FUN_0c022050();
    t9 = t6;
    if (t6 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t9 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t9;
}
