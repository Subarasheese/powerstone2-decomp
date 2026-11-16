/* Straight-line functions with calls and guards (batch gen_ao): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c13dffc(int);
int FUN_0c187798(int, int, int);
int FUN_0c13e09e(int a4, int a5, int a6, int a7);

int FUN_0c13e09e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;

    t8 = *(signed char *)((a4 + 0x14));
    if (t8 != 0) {
        if (t8 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        *(volatile int *)((a4 + 0x10));
        FUN_0c187798(a4, a5, a6);
        FUN_0c13dffc(a4);
        t8 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
        t9 = 0x15;
        if (((int)(short)(t8 - 1) > 0) && ((t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((t0 + 0x14)), (int)t1 <= (int)0x1) && (t2 = *(int *)((a4 + 0x10)), t3 = *(signed char *)((t2 + 0x15)), (int)t3 <= 0))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t9 = 0x14;
        }
        return t9;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o20_ushort *)(a4))->v) = 0x5;
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(a4, a5, a6);
    FUN_0c13dffc(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = 0x15;
    if (((int)(short)(t0 - 1) > 0) && ((t4 = *(int *)((a4 + 0x10)), t5 = *(signed char *)((t4 + 0x14)), (int)t5 <= (int)0x1) && (t6 = *(int *)((a4 + 0x10)), t7 = *(signed char *)((t6 + 0x15)), (int)t7 <= 0))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
