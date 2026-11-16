/* Straight-line functions with calls and guards (batch gen_lo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0eef50(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0eefa2(int a4, int a5, int a6, int a7);

int FUN_0c0eefa2(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, 0x1, a6, a7);
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
        t1 = *(signed char *)((a4 + 0x2));
        if ((t1 != 0) && (t1 != 1)) {
            t1 = *(signed char *)0xC54098D;
            if (((int)t1 >= (int)0xD) && ((int)t1 <= (int)0xE)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            if ((*(int *)((a4 + 0x10))) != 0) {
                if ((*(signed char *)((a4 + 0x15))) == 0) {
                    t1 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
                    t2 = t1;
                    if (t1 == 5) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t2 = 0xA8;
                    }
                    return t2;
                }
                if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x7) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
                return FUN_0c0eef50(a4, 0x71C);
            }
            return 0x15;
        }
        FUN_0c0eef50(a4, 0x71C);
        t1 = *(signed char *)0xC54098D;
        t2 = 0x15;
        if ((int)t1 >= (int)0x8) {
            t2 = 0x15;
            if ((int)t1 > (int)0xE) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        *(unsigned int *)((a4 + 0x10)) = (*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0)));
    }
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, 0x1, a6);
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x222);
    t1 = *(signed char *)((a4 + 0x2));
    if ((t1 != 0) && (t1 != 1)) {
        t1 = *(signed char *)0xC54098D;
        if (((int)t1 >= (int)0xD) && ((int)t1 <= (int)0xE)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        if ((*(int *)((a4 + 0x10))) != 0) {
            if ((*(signed char *)((a4 + 0x15))) == 0) {
                t1 = *(signed char *)((0x15 + (*(int *)((a4 + 0x10)))));
                t2 = t1;
                if (t1 == 5) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct oA8_uchar *)(a4))->v) = t0;
                    t2 = 0xA8;
                }
                return t2;
            }
            if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) >= (int)0x7) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            return FUN_0c0eef50(a4, 0x71C);
        }
        return 0x15;
    }
    FUN_0c0eef50(a4, 0x71C);
    t0 = *(signed char *)0xC54098D;
    t1 = 0x15;
    if ((int)t0 >= (int)0x8) {
        t2 = 0x15;
        if ((int)t0 > (int)0xE) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t1 = t2;
    }
    return t1;
}
