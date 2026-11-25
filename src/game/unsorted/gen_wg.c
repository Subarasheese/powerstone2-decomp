/* Straight-line functions with calls and guards (batch gen_wg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int FUN_0c059e0e(int, int, int);
int FUN_0c169706(int, int);
int FUN_0c169922(int, int);
int FUN_0c16a40c(int);
int FUN_0c16a464(int, int);
int FUN_0c16a53e(int, int);
int FUN_0c16a7e4(int a4);

int FUN_0c16a7e4(int a4)
{
    int stk[3];
    register int t0;
    register int t17;
    register int t23;
    register int t18;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o18_uchar *)(a4))->v) = 0x3;
    }
    if ((t0 == 0) || (t0 == 1)) {
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x5;
            FUN_0c16a464(a4, 0x1);
            FUN_0c16a53e(a4, 0x1);
            FUN_0c169922(a4, 0x0);
            FUN_0c169706(a4, 0x0);
            FUN_0c059e0e((*(signed char *)((a4 + 0x1))), 0x73, (a4 + 0x28));
        }
        FUN_0c16a40c(a4);
        t17 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t17 - 1);
        t23 = 0x22;
        if ((int)(short)(t17 - 1) <= 0) {
            t18 = *(signed char *)((a4 + 0x18));
            (((struct o18_uchar *)(a4))->v) = (t18 - 1);
            if ((int)(signed char)(t18 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t23 = 0x17;
        }
        return t23;
    } else {
        FUN_0c16a464(a4, 0x0);
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return FUN_0c16a53e(a4, 0x0);
    }
}
