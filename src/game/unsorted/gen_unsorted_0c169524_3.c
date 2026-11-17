/* game/unsorted: functions 0C169524-0C16AC2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c059e0e(int, int, int);
int FUN_0c169706(int, int);
int FUN_0c169b38(int, int);
int FUN_0c16a464(int, int);
extern int FUN_0c16a53e();
int FUN_0c16a8b6(int a4, int a5, int a6);

int FUN_0c16a8b6(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t3;
    register int t5;
    register int t10;
    register int t15;
    register int t17;
    register int t21;
    register int t23;
    register int t25;
    register int t30;
    register int t35;
    register int t37;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return ((int (*)(int, int, int))(FUN_0c16a53e))(a4, 0x0, a6);
        }
        t1 = *(signed char *)((a4 + 0x17));
        if (t1 != 0) {
            if (t1 != 1) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o17_uchar *)(a4))->v) = 0x0;
                return FUN_0c16a464(a4, 0x0);
            }
            t3 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t3 - 1);
            t5 = 0x22;
            if ((int)(short)(t3 - 1) <= 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t5 = 0x17;
            }
            return t5;
        }
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x14;
        FUN_0c16a464(a4, 0x1);
        t10 = ((int (*)(int, int))(FUN_0c16a53e))(a4, 0x1);
        FUN_0c169b38(a4, 0x0);
        FUN_0c169706(a4, 0x1);
        FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x66, (a4 + 0x28));
        t15 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t15 - 1);
        t17 = 0x22;
        if ((int)(short)(t15 - 1) <= 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t17 = 0x17;
        }
        return t17;
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o17_uchar *)(a4))->v) = 0x0;
    t21 = *(signed char *)((a4 + 0x17));
    if (t21 != 0) {
        if (t21 != 1) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            return FUN_0c16a464(a4, 0x0);
        }
        t23 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t23 - 1);
        t25 = 0x22;
        if ((int)(short)(t23 - 1) <= 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t25 = 0x17;
        }
        return t25;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o22_ushort *)(a4))->v) = 0x14;
    FUN_0c16a464(a4, 0x1);
    t30 = ((int (*)(int, int))(FUN_0c16a53e))(a4, 0x1);
    FUN_0c169b38(a4, 0x0);
    FUN_0c169706(a4, 0x1);
    FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x66, (a4 + 0x28));
    t35 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t35 - 1);
    t37 = 0x22;
    if ((int)(short)(t35 - 1) <= 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t37 = 0x17;
    }
    return t37;
}
