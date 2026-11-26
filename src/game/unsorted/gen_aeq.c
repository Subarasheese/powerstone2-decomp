/* Straight-line functions with calls and guards (batch gen_aeq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c03ea04(int, int);
int FUN_0c03f0aa(void);
int FUN_0c04a080(void);
int FUN_0c04a69a(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c05aeac(void);
int FUN_0c05af8a(void);
int FUN_0c05b048(int, int);
int FUN_0c0bbf8e(void);
int nlRand(void);
int FUN_0c04a13e(int a4, int a5, int a6, int a7);

int FUN_0c04a13e(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t0;
    register int t30;
    register int t13;
    register int t18;
    register int t31;
    register int t35;

    t0 = *(signed char *)0xC541F43;
    t30 = 0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
        } else {
            t30 = 1;
        }
    } else {
        (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
        (((struct oE_ushort *)0xC541F42)->v) = 0x21;
        FUN_0c03f0aa();
        if ((*(signed char *)0xC5429B4) != 2) {
            FUN_0c04a080();
        } else {
            FUN_0c04a69a();
        }
        FUN_0c0bbf8e();
        (((struct o0_uchar *)0xC542235)->v) = 0x0;
        FUN_0c03ea04(0x4, 0x0);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        t13 = (int)((int)(nlRand()) % (int)0x5);
        FUN_0c056e44(0x14, t13);
        (((struct o4_uint *)0xC542440)->v) = 0xFF000080;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000080;
        (((struct o8_uint *)0xC542440)->v) = 0xFF008080;
        (((struct o0_uchar *)0xC40F820)->v) = 0x0;
        (((struct o1_uchar *)0xC40F820)->v) = 0x0;
        (((struct o2_uchar *)0xC40F820)->v) = 0x0;
        (((struct o3_uchar *)0xC40F820)->v) = 0x0;
        (((struct o2_uchar *)0xC542235)->v) = (*(signed char *)0xC542360);
        (((struct o7_uchar *)0xC542235)->v) = 0x0;
        t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(signed char *)0xC542237) << 2) + 0xC240DA0)))))(0xC40F820, 0xC542430, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        FUN_0c05aeac();
        FUN_0c05af8a();
        if ((*(signed char *)0xC542362) != 1) {
            FUN_0c059c54(0x1);
            FUN_0c05b048(0x3C, 0x0);
        }
        *(unsigned char *)0xC542362 = 0x0;
        FUN_0c059c7a((*(int *)((((*(signed char *)0xC542236) << 2) + 0xC1B7C50))), 0x0);
        t30 = 1;
    }
    if (t30) {
        t31 = (((struct oE_short *)0xC541F42)->v);
        (((struct oE_ushort *)0xC541F42)->v) = (t31 - 1);
        t35 = (short)(t31 - 1);
        if ((int)(short)(t31 - 1) <= 0) {
            (((struct o1_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F43) + 0x1);
            (((struct o1F_uchar *)0xC542235)->v) = 0x0;
            t35 = 0x5C;
        }
    } else {
        t35 = 0x0;
    }
    return t35;
}
