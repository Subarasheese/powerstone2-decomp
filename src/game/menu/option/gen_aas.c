/* Straight-line functions with calls and guards (batch gen_aas): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c01cd2c(int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c01a186(int a4, int a5, int a6, int a7);

int FUN_0c01a186(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o40_float *)(a4))->v) = 1.29999995f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o2C_float *)(a4))->v) = -145.0f;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
    }
    if ((t1 == 0) || (t1 == 1)) {
        if ((*(signed char *)0xC30B701) == 0) {
            (((struct o28_float *)(a4))->v) = -113.0f;
        } else {
            (((struct o28_float *)(a4))->v) = 113.0f;
        }
        FUN_0c012c34(a4);
        t2 = FUN_0c01cd2c(0x101);
        t3 = (short)t2;
        if (((short)t2 != 0) && (t0 = *(signed char *)0xC30B707, t0 != 0)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t3 = 0x22;
        }
        t0 = t3;
        if ((*(signed char *)0xC30B706) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            (((struct o28_float *)(a4))->v) = 113.0f;
            t0 = 0x28;
        }
        return t0;
    } else {
        if (t1 != 2) {
            return thunk_FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = FUN_0c01c62a(a4);
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
}
