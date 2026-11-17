/* game/effect: functions 0C13E620-0C13E808, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c13e620(int a4, int a5);

int FUN_0c13e620(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t14;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t14 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC13E518;
        FUN_0c187798();
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c187798();
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct oA8_uchar *)(t3))->v) = 0x0;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t3))->v)), 0x0, 0x5, (*(int *)((((*(signed char *)((t3 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        *(unsigned int *)((t3 + 0x10)) = a4;
        t14 = 0xA8;
    }
    return t14;
}
