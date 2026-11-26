/* Straight-line functions with calls and guards (batch gen_ahb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4B_uchar { char p[0x4B]; unsigned char v; };
int FUN_0c016244(void);
int FUN_0c017a2e(void);
int FUN_0c017be8(void);
int FUN_0c017c70(int, int, int);
int FUN_0c0167da(void);

int FUN_0c0167da(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c016244();
    t1 = *(int *)0xC304BA0;
    if (t0 != (unsigned char)(*(signed char *)((t1 + 0x4F)))) {
        t2 = *(signed char *)((t1 + 0x4F));
        if (((unsigned char)t2 != 0) && ((unsigned char)t2 != 1)) {
            t3 = 0;
            if ((unsigned char)t2 != 2) {
                if ((unsigned char)t2 != 3) {
                } else {
                    t3 = 1;
                }
            } else {
                t2 = *(signed char *)((t1 + 0x4A));
                if (((unsigned char)t2 & 28) == 0) {
                    t3 = 1;
                } else {
                    return (unsigned char)t2;
                }
            }
            if (t3) {
                t2 = *(signed char *)((t1 + 0x4A));
                if (((unsigned char)t2 & 32) == 0) {
                    (((struct o4B_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4B))) & 0x4);
                    t3 = *(int *)0xC304BA0;
                    (((struct o4B_uchar *)(t3))->v) = ((*(signed char *)((t3 + 0x4B))) | (*(signed char *)(((0x4F + t3) + 0x0))));
                } else {
                    return (unsigned char)t2;
                }
            }
        } else {
            t2 = *(signed char *)((t1 + 0x4A));
            if (((unsigned char)t2 & 2) == 0) {
                (((struct o4B_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4F))) | 0x4);
            } else {
                return (unsigned char)t2;
            }
        }
        FUN_0c017c70(t1, 0xC304BA0, t0);
        FUN_0c017be8();
        return FUN_0c017a2e();
    }
    return 0x4F;
}
