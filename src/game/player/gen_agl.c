/* Straight-line functions with calls and guards (batch gen_agl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0f44fc(int a4, int a5);

int FUN_0c0f44fc(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        *(unsigned int *)(((0xC540D94 + ((*(signed char *)(((0x41C + a4) + 0x1))) << 2)) + 0x0)) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0x20;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = 0x16;
        }
        t0 = t1;
    } else {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0500000007f);
        if (!(((((struct o48_float *)(a4))->v)) > 0.0f)) {
            (((struct o48_float *)(a4))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x2;
            (((struct o15_uchar *)(a4))->v) = 0x2;
        }
        (((struct o40_float *)(a4))->v) = ((((struct o48_float *)(a4))->v));
        t0 = 0x40;
    }
    return t0;
}
