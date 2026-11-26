/* Straight-line functions with calls and guards (batch gen_ajo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
int FUN_0c02f7a0(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c10085a(void);
int FUN_0c1006a2(void);

int FUN_0c1006a2(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o1_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F45) + 0x1);
        (((struct o10_ushort *)0xC541F44)->v) = 0x0;
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x14);
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t1 = (((struct o10_short *)0xC541F44)->v);
        (((struct o10_ushort *)0xC541F44)->v) = (t1 + 0x1);
        t2 = (short)(t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0x14) {
            t1 = *(signed char *)0xC541F45;
            (((struct o1_uchar *)0xC541F44)->v) = (t1 + 0x1);
            t2 = (t1 + 0x1);
        }
        t1 = t2;
    } else {
        t2 = (unsigned char)t0;
        if ((unsigned char)t0 != 2) {
        } else {
            (((struct o1_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F45) + 0x1);
            FUN_0c10085a();
            FUN_0c02f7a0();
            (((struct o0_uchar *)0xC541F44)->v) = 0x6;
            (((struct o1_uchar *)0xC541F44)->v) = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}
