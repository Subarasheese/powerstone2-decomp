/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(void);
int FUN_0c11dbdc(int a4, int a5, int a6, int a7);

int FUN_0c11dbdc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != 10) {
                if (t0 != 20) {
                    if (t0 != 30) {
                        t1 = t0;
                        if (t0 != 99) {
                        } else {
                            (((struct o14_uchar *)(a4))->v) = 0xA;
                            t1 = 0x14;
                        }
                        t2 = t1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        t2 = 0xA8;
                    }
                    t1 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    t1 = 0xA8;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03733c(a4, 0x15, (*(int *)0xC4B410C));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    return (FUN_0c187798());
}
