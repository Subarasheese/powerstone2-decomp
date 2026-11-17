/* game/unsorted: functions 0C0838EC-0C083A1A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
int FUN_0c067734(int);
int FUN_0c081dfc(int);
int FUN_0c0838ec(int a4, int a5);

int FUN_0c0838ec(int a4, int a5)
{
    int stk[1];
    register int t4;
    register int t6;
    register int t15;
    register int t27;

    *(unsigned char *)(((int)stk + 0)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3729_uchar *)(a4))->v) = (*(signed char *)(((int)stk + 0)));
    (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC532498);
    FUN_0c067734(a4);
    (((struct o14_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
    t4 = (((struct o3770_int *)(a4))->v);
    (((struct o18_uchar *)(t4))->v) = 0x0;
    (((struct o17_uchar *)(t4))->v) = 0x0;
    (((struct o16_uchar *)(t4))->v) = 0x0;
    (((struct o15_uchar *)(t4))->v) = 0x0;
    (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
    t6 = (((struct o3770_int *)(a4))->v);
    (((struct o3716_uchar *)(t6))->v) = (*(signed char *)((t6 + 0x3715)));
    (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
    (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = (*(signed char *)(((int)stk + 0)));
    (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
    FUN_0c067734(((((struct o3770_int *)(a4))->v)));
    t15 = *(signed char *)((a4 + 0x372A));
    *(unsigned char *)((t15 + 0xC471A98)) = ((*(signed char *)((t15 + 0xC471A98))) + 0x1);
    if ((*(signed char *)((a4 + 0x3729))) != 3) {
        FUN_0c081dfc(a4);
    }
    FUN_0c081dfc(((((struct o3770_int *)(a4))->v)));
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
    (((struct o3830_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    t27 = *(signed char *)((a4 + 0x3729));
    if (t27 != 0) {
        switch (t27) {
        case 1:
            break;
        case 2:
            (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
            break;
        case 3:
            (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
            break;
        }
    } else {
        (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    }
    (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    return 0x382A;
}
