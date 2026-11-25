/* Straight-line functions with calls and guards (batch gen_aii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c1205c4(int a4, float f4);

int FUN_0c1205c4(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
        if (!(1.0f > (u0 + 0.100000001f))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o48_float *)(a4))->v) = 1.0f;
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        t1 = 0x40;
    }
    return t1;
}
