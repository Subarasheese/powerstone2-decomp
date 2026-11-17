/* game/unsorted: functions 0C0DB188-0C0DB352, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c0db188(int a4, int a5);

int FUN_0c0db188(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t11;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0DB21C;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        t6 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t6, 0x6, 0x81, (*(int *)0xC4B410C));
        *(unsigned char *)((t6 + 0x0)) = 0x1;
        *(unsigned short *)((t6 + 0x6)) = 0xF;
        t8 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t8, 0x7, 0x81, (*(int *)0xC4B410C));
        *(unsigned char *)((t8 + 0x0)) = 0x1;
        *(unsigned short *)((t8 + 0x6)) = 0xF;
        t11 = 0xF;
    }
    return t11;
}
