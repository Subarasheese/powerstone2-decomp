/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o421_uchar { char p[0x421]; unsigned char v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
int ADXSJD_GetCof(int);
int FUN_0c01e99c(void);
int FUN_0c07bcc2(int a4, int a5);

int FUN_0c07bcc2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((unsigned char)(*(signed char *)0xC541F3D) == 2) {
        if (((*(signed char *)((a4 + 0x421))) & 0x2) == 0) {
            t0 = 0x63;
            if (((*(signed char *)((a4 + 0x422))) & 0x2) != 0) {
                t0 = (*(int *)((0x4 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593D4))));
            }
            t1 = t0;
        } else {
            t1 = (*(int *)((0x0 + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593D4))));
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x1));
        if (((signed char)t1 != 0) && ((signed char)t1 != 2)) {
            t1 = (ADXSJD_GetCof(0x7));
            t2 = 0x8;
        } else {
            t1 = (ADXSJD_GetCof(0x1));
            t2 = 0x2;
        }
        t3 = ADXSJD_GetCof(t2);
        if (((*(int *)((t1 + 0x0))) & 0x100) != 0) {
            (((struct o421_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x421))) | 0x2);
        }
        if ((0x100 & (*(int *)((t3 + 0x0)))) != 0) {
            (((struct o422_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x422))) | 0x2);
        }
        t1 = 0;
        if (((*(signed char *)((a4 + 0x421))) & 0x2) == 0) {
            if (((*(signed char *)((a4 + 0x422))) & 0x2) != 0) {
                t2 = 0x1;
                t1 = 1;
            }
        } else {
            t2 = 0x0;
            t1 = 1;
        }
        if (t1) {
            t1 = FUN_0c01e99c();
            if ((signed char)t1 == 0) {
                t1 = *(signed char *)((a4 + 0x1));
                if ((signed char)t1 != 0) {
                    t3 = 0x63;
                    if ((signed char)t1 == 1) {
                        t3 = (*(int *)(((t2 << 2) + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                    }
                    t1 = t3;
                } else {
                    t1 = (*(int *)(((t2 << 2) + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                }
                t3 = t1;
            } else {
                t1 = *(signed char *)((a4 + 0x1));
                t3 = 0x63;
                if ((t1 == 2) || (t1 == 3)) {
                    t3 = (*(int *)(((t2 << 2) + ((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC2593F4))));
                }
            }
            t1 = t3;
        } else {
            t1 = 0x63;
        }
        t0 = t1;
    }
    return t0;
}
