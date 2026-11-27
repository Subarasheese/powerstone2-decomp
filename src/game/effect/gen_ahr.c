/* Straight-line functions with calls and guards (batch gen_ahr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
int FUN_0c05f22c(int);
int FUN_0c115e20(void);
int FUN_0c116c12(int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c116366(int a4);

int FUN_0c116366(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            switch (t0) {
            case 2:
                break;
            case 3:
                t0 = FUN_0c05f22c(0x3FCF);
                t1 = t0;
                if (t0 != 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t1 = 0x17;
                }
                return t1;
            case 4:
                FUN_0c117944(((*(int *)(((((*(signed char *)((a4 + 0x18))) << 2) << 1) + 0xC1FC770)))));
                FUN_0c116c12(a4, 0x2);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return 0x17;
            case 5:
                break;
            default:
                t1 = t0;
                if (t0 != 6) {
                } else {
                    t0 = FUN_0c05f22c(0x3FCF);
                    t1 = t0;
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x1;
                        (((struct o18_uchar *)(a4))->v) = 0x0;
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t1 = 0x17;
                    }
                }
                return t1;
            }
            t0 = FUN_0c117d54();
            if ((int)t0 < 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                return FUN_0c117e76();
            }
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t0 = FUN_0c115e20();
        if (t0 == 0) {
            (((struct o18_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o18_uchar *)(a4))->v) = 0x1;
        }
    }
    FUN_0c117944(((*(int *)(((((*(signed char *)((a4 + 0x18))) << 2) << 1) + 0xC1FC76C)))));
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}
