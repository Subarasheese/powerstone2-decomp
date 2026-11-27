/* Straight-line functions with calls and guards (batch gen_ajt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0d87d8(int a4, int a5, int a6, int a7);

int FUN_0c0d87d8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x14));
    t2 = 0;
    if (t1 != 0) {
        if (t1 == 1) {
            t2 = 1;
        }
    } else {
        if (((*(signed char *)((a4 + 0x2))) == 0) && ((t0 = *(signed char *)0xC54098D, t0 != 12) && (t0 != 13))) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x5DC;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 1;
    }
    if (t2) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        t0 = t2;
    } else {
        t0 = t1;
    }
    return t0;
}
