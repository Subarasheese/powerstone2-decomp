/* Straight-line functions with calls and guards (batch gen_aid): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
int nlRand(void);
int FUN_0c0ecec4(int a4);

int FUN_0c0ecec4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x78;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = 0x16;
        }
        t0 = t1;
    } else {
        t1 = nlRand();
        t2 = (t1 % 0x8);
        (((struct o15_uchar *)(a4))->v) = (*(int *)((0xC1CCFA8 + (t2 << 2))));
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t0 = 0x16;
    }
    return t0;
}
