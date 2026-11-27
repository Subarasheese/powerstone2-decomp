/* Straight-line functions with calls and guards (batch gen_agc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15e4d2(int, int);
int FUN_0c15e5d4(int a4, int a5, int a6, int a7);

int FUN_0c15e5d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
    }
    if ((t1 == 0) || (t1 == 1)) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            FUN_0c15e4d2(a4, a5);
        }
        t1 = *(signed char *)((t0 + 0x41D));
        t0 = t1;
        if (t1 != 7) {
            t0 = t1;
            if (t1 != 5) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t0 = 0x14;
            }
        }
        return t0;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
