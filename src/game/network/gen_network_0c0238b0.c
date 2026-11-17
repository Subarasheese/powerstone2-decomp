/* game/network: functions 0C0238B0-0C023934, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c013ee0(void);
int FUN_0c0185b4(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0238b0(void);

int FUN_0c0238b0(void)
{
    int stk[3];
    register int t0;
    register int t10;
    register int t13;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    *(unsigned char *)0xC30AF89 = 0x3;
    FUN_0c01e9e4();
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned short *)0xC30EF6C = 0x16;
    FUN_0c013ee0();
    FUN_0c0185b4();
    t10 = FUN_0c022050();
    t13 = t10;
    if (t10 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t13 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t13;
}
