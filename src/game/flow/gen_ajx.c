/* Straight-line functions with calls and guards (batch gen_ajx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c0573cc(int, int, int);
int FUN_0c05b052(int, int);
int FUN_0c11f4f0(void);

int FUN_0c11f4f0(void)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC4750AE;
    t2 = t0;
    if (t0 != 0) {
    } else {
        (((struct o2_uchar *)0xC4750AC)->v) = ((*(signed char *)0xC4750AE) + 0x1);
        (((struct o3_uchar *)0xC4750AC)->v) = 0x0;
        (((struct o14_uint *)0xC4750AC)->v) = 0x21;
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
        t2 = (FUN_0c05b052(0x1E, 0x0));
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = (((struct o14_int *)0xC4750AC)->v);
        (((struct o14_uint *)0xC4750AC)->v) = (t0 - 1);
        if ((int)(t0 - 1) <= 0) {
            t0 = *(signed char *)0xC4750AE;
            (((struct o2_uchar *)0xC4750AC)->v) = (t0 + 0x1);
            t2 = (t0 + 0x1);
        }
        t0 = t2;
    } else {
        (((struct o0_uchar *)0xC4750AC)->v) = ((*(signed char *)0xC4750AC) + 0x1);
        (((struct o2_uchar *)0xC4750AC)->v) = 0x0;
        (((struct o1_uchar *)0xC4750AC)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}
