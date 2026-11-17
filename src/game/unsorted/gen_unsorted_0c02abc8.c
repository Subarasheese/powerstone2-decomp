/* game/unsorted: functions 0C02ABC8-0C02AC4E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o37_uchar { char p[0x37]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02abc8(void);
int FUN_0c02ac0a(void);

int FUN_0c02abc8(void)
{
    int stk[2];
    register int t0;
    register int t3;

    t0 = (((struct o0_short *)0xC30EF6C)->v);
    (((struct o0_ushort *)0xC30EF6C)->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c01e9e4();
        (((struct o37_uchar *)0xC30EF6C)->v) = 0x0;
        FUN_0c036de8(0x20, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o0_uchar *)0xC309859)->v) = 0x9;
        (((struct o1_uchar *)0xC309859)->v) = 0x1;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
        (((struct o3_uchar *)0xC309859)->v) = 0x0;
        (((struct o4_uchar *)0xC309859)->v) = 0x0;
        t3 = 0xC30985A;
    }
    return t3;
}

int FUN_0c02ac0a(void)
{
    int stk[35];
    register int t2;
    register int t3;
    register int t6;

    t2 = ((int (*)(void))((*(int *)((((*(signed char *)0xC30985A) << 2) + 0xC20E778)))))();
    t3 = FUN_0c022050();
    t6 = t3;
    if (t3 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t6 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    return t6;
}
