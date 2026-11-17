/* game/unsorted: functions 0C027668-0C0276DE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int a4, int a5, int a6);
int FUN_0c02aa9e(void);
int FUN_0c186740(int, int, int);
int FUN_0c027668(void);

int FUN_0c027668(void)
{
    int stk[36];
    register int t5;
    register int t12;

    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x77;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    t5 = FUN_0c022050();
    t12 = t5;
    if (t5 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        if ((*(signed char *)0xC30AF9A) != 0) {
            t12 = (FUN_0c02aa9e());
        } else {
            t12 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
        }
    }
    return t12;
}
