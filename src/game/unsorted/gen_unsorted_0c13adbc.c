/* game/unsorted: functions 0C13ADBC-0C13B7A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c18778c(int);
int FUN_0c187798(int);
int FUN_0c13b08c(int a4, int a5, int a6, int a7);
int FUN_0c13b0d8(int a4, int a5, int a6, int a7);
int FUN_0c13b1a8(int a4, int a5, int a6);
int FUN_0c13b35e(int a4, int a5, int a6, int a7);
int FUN_0c13b632(int a4, int a5, int a6, int a7);

int FUN_0c13b08c(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13ADBC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}

int FUN_0c13b0d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        FUN_0c0588bc((a4 + 0x40), 0xC2A2028, 0xC2A201C, (*(short *)((a4 + 0x1C))), 0x18, 0x0);
        FUN_0c058a6e((0xB0 + a4), 0xC2A2044, 0xC2A2034, (*(short *)((a4 + 0x1C))), 0x18, 0x0);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (short)(t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x18) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x21F;
    FUN_0c18778c(a4);
    return FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
}

int FUN_0c13b1a8(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t7;
    register int t4;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t7 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B0D8;
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t7 = (FUN_0c187798(t4));
    }
    return t7;
}

int FUN_0c13b35e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B1EE;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}

int FUN_0c13b632(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t8;
    register int t5;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t8 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13B3E0;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        t8 = (FUN_0c187798(t5));
    }
    return t8;
}
