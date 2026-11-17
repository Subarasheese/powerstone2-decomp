/* game/unsorted: functions 0C15F1A4-0C15FCF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int);
int FUN_0c15f9b4(int a4, int a5, int a6, int a7);
int FUN_0c15fa0c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c15fa88(int a4);

int FUN_0c15f9b4(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t9;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15F6EC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 8)));
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798(t5);
        (((struct oAC_ushort *)(t8))->v) = 0xF;
        (((struct oA9_uchar *)(t8))->v) = 0x21;
        t9 = 0xA9;
    }
    return t9;
}

int FUN_0c15fa0c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t10;
    register float u8;
    register int t5;
    register int t9;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(float *)(((int)stk + 0)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 16)));
        *(unsigned int *)((t0 + 0x4)) = 0xC15F6EC;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 12)));
        *(volatile int *)(((int)stk + 8));
        FUN_0c187798(t0);
        *(volatile int *)(((int)stk + 4));
        FUN_0c187798(t5);
        u8 = *(float *)(((int)stk + 0));
        (((struct o48_float *)(t9))->v) = u8;
        (((struct o44_float *)(t9))->v) = u8;
        (((struct o40_float *)(t9))->v) = u8;
        (((struct oAC_ushort *)(t9))->v) = 0x1F;
        (((struct oA9_uchar *)(t9))->v) = 0x21;
        t10 = 0xA9;
    }
    return t10;
}

int FUN_0c15fa88(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t3 = FUN_0c03f444(0x5, 0x0, 0x1);
    t4 = t3;
    if (t3 != 0) {
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x4)) = 0xC15FB04;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c187798(t3);
        FUN_0c187798(t0);
        FUN_0c187798(t1);
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x1;
        t0 = (((struct oC4_int *)(t2))->v);
        FUN_0c03744a(t0, 0x0, 0x4E, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0xF;
        t4 = 0xF;
    }
    return t4;
}
