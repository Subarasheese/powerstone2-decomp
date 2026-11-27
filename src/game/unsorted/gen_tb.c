/* Straight-line functions with calls and guards (batch gen_tb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c059e0e(int, int, int);
int FUN_0c169706(int, int);
int FUN_0c169b38(int, int, int, int);
int FUN_0c16a464(int, int);
extern int FUN_0c16a53e();
int FUN_0c16a8b6(int a4, int a5, int a6);

int FUN_0c16a8b6(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;
    register int t4;
    register int t7;
    register int t15;
    register int t17;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t4 = *(signed char *)((a4 + 0x17));
        if (t4 != 0) {
        } else {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x14;
            FUN_0c16a464(a4, 0x1);
            t7 = ((int (*)(int, int))(FUN_0c16a53e))(a4, 0x1);
            FUN_0c169b38(a4, 0x0, 0x0, 0x0);
            FUN_0c169706(a4, 0x1);
            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x66, (a4 + 0x28));
        }
        if ((t4 == 0) || (t4 == 1)) {
            t15 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t15 - 1);
            t17 = 0x22;
            if ((int)(short)(t15 - 1) <= 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t17 = 0x17;
            }
            return t17;
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            return FUN_0c16a464(a4, 0x0);
        }
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return ((int (*)(int, int, int))(FUN_0c16a53e))(a4, 0x0, a6);
    }
}
