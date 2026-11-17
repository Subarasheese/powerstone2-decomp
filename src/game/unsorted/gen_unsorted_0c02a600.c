/* game/unsorted: functions 0C02A600-0C02A654, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02a600(int a4);

int FUN_0c02a600(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t11;

    t0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        *(unsigned short *)0xC30EF6C = 0x0;
        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
    }
    t8 = FUN_0c022050();
    t11 = t8;
    if (t8 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t11 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t11;
}
