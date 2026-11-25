/* game/unsorted: functions 0C0516D8-0C051878, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0d5188(void);
int FUN_0c04f148(int, int);
int FUN_0c04f29e(void);
int FUN_0c04f420(void);
int FUN_0c04f5a4(void);
int FUN_0c04fe1c(void);
int FUN_0c0506e8(void);
int FUN_0c0d04b4(int);
int FUN_0c0516d8(void);
int FUN_0c05180a(int a4);
int FUN_0c051852(void);


int FUN_0c05180a(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(a4, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, a4, (*(int *)0xC4B410C));
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0517E0;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        t0 = 0xA9;
    }
    return t0;
}

int FUN_0c051852(void)
{
    register int t1;
    register int t2;
    register int t4;
    register int t0;

    t1 = 0x0;
    t2 = 0xC1B8D4C;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC1B8D54)) {
            break;
        }
        t4 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (FUN_0c05180a(t4));
        t1 = (t1 + 0x1);
    }
    return t0;
}
