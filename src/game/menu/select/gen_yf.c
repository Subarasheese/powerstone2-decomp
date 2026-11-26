/* Straight-line functions with calls and guards (batch gen_yf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c05ada4(int);
int FUN_0c0fd368(int, int, int);
int FUN_0c1171f0(int);
int FUN_0c0fd5b8(int a4);

int FUN_0c0fd5b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        (((struct o58_uint *)(a4))->v) = 0x0;
    }
    if ((t1 == 0) || (t1 == 1)) {
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        if ((*(signed char *)(((0x41C + t0) + 0x0))) == 1) {
            (((struct o58_uint *)(a4))->v) = (((((struct o58_int *)(a4))->v)) + 0x1);
        } else {
            (((struct o58_uint *)(a4))->v) = 0x0;
        }
        t0 = FUN_0c05ada4(0x1);
        t2 = (int)((int)t0 / (int)0x64);
        FUN_0c0fd368(a4, ((int)((int)t0 % (int)0x64)), 0x0);
        FUN_0c0fd368(a4, ((int)((int)t2 % (int)0x3C)), 0x1);
        return FUN_0c0fd368(a4, ((int)((int)((int)((int)t2 / (int)0x3C)) % (int)0x3C)), 0x2);
    } else {
        return t1;
    }
}
