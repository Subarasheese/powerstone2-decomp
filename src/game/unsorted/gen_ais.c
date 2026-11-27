/* Straight-line functions with calls and guards (batch gen_ais): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12bb5c(int a4, int a5, int a6, int a7);

int FUN_0c12bb5c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t1 == 0) || (t1 == 1)) {
        t1 = *(int *)((a4 + 0x10));
        if (((int)(*(signed char *)((t1 + 0x17))) <= (int)0x3) && (t0 = *(signed char *)((t1 + 0x3715)), t0 == 26)) {
            t1 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
