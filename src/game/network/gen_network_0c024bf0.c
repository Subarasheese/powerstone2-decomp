/* game/network: functions 0C024BF0-0C024C96, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
int FUN_0c01a9c0(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c186740(int, int, int);
int strcpy(int, int);
int FUN_0c024bf0(void);

int FUN_0c024bf0(void)
{
    int stk[36];
    register int t0;
    int t3;

    t0 = FUN_0c022050();
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 6)) {
            FUN_0c0221b0();
            *(unsigned int *)0xC30A3F8 = 0x1;
            return (FUN_0c01a9c0());
        }
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4));
    }
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x74;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x5;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = (*(signed char *)0xC30A348);
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = ((int)((*(signed char *)0xC30A348) & 0xFF00) >> 8);
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    return (strcpy(0xC3053B8, 0xC1A8C1C));
}
