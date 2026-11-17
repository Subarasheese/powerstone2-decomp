/* game/unsorted: functions 0C051A14-0C051AAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c051a14(int a4, int a5, int a6, int a7);
int FUN_0c051a3e(int a4);
int FUN_0c051a86(void);

int FUN_0c051a14(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}

int FUN_0c051a3e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(a4, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, a4, (*(int *)0xC4B410C));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC051A14;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}

int FUN_0c051a86(void)
{
    register int t1;
    register int t2;
    register int t4;
    register int t0;

    t1 = 0x0;
    t2 = 0xC1B8D70;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC1B8D78)) {
            break;
        }
        t4 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (FUN_0c051a3e(t4));
        t1 = (t1 + 0x1);
    }
    return t0;
}
