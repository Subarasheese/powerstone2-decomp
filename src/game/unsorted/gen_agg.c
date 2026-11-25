/* Straight-line functions with calls and guards (batch gen_agg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
int FUN_0c036de8(int);
int FUN_0c03f0aa(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c059ce8(int);
int FUN_0c05b052(int, int);
int FUN_0c05b7e0(int);
int FUN_0c06780e(int);
int FUN_0c04a408(void);

int FUN_0c04a408(void)
{
    int stk[2];
    register int t0;
    register int t9;
    register int t11;
    register int t10;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
        *(unsigned short *)0xC541F50 = 0x21;
        *(unsigned char *)0xC542254 = 0x1;
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c059ce8((*(int *)((((*(signed char *)0xC542236) << 2) + 0xC1B7C50))));
        FUN_0c05b052(0x1E, 0x0);
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t9 = *(short *)0xC541F50;
        *(unsigned short *)0xC541F50 = (t9 - 1);
        t11 = (short)(t9 - 1);
        if ((int)(short)(t9 - 1) <= 0) {
            t10 = *(signed char *)0xC541F43;
            (((struct o0_uchar *)0xC541F43)->v) = (t10 + 0x1);
            t11 = (t10 + 0x1);
        }
        return t11;
    } else {
        *(unsigned char *)0xC53D0E8 = 0x0;
        *(unsigned char *)0xC5397B0 = 0x0;
        *(unsigned char *)0xC535E78 = 0x0;
        *(unsigned char *)0xC532540 = 0x0;
        FUN_0c03f0aa();
        FUN_0c036de8(0x7);
        FUN_0c036de8(0x11);
        FUN_0c06780e((*(int *)0xC40F82C));
        return FUN_0c05b7e0(0x5);
    }
}
