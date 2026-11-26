/* Straight-line functions with calls and guards (batch gen_ka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o44_float { char p[0x44]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0ea14c(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c012202(int a4, int a5, int a6, int a7);
int FUN_0c0ea19e(int a4, int a5, int a6, int a7);

int FUN_0c012202(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = (((struct o41C_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t2 = t0;
                if (t0 != 3) {
                } else {
                    thunk_FUN_0c03f346(a4, a5, a6, a7);
                    (((struct o19_uchar *)(t1))->v) = 0x4;
                    t2 = 0x19;
                }
                t0 = t2;
            } else {
                t2 = FUN_0c01c62a(a4);
                t0 = (signed char)t2;
                if ((signed char)t2 != 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = 150.0f;
        (((struct o30_float *)(a4))->v) = 3.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o40_float *)(a4))->v) = 0.699999988f;
        (((struct o44_float *)(a4))->v) = 1.0f;
    }
    u0 = -130.0f;
    if ((*(signed char *)((t1 + 0x1A))) == 0) {
        u0 = -60.0f;
    }
    (((struct o2C_float *)(a4))->v) = u0;
    t0 = *(signed char *)((t1 + 0x19));
    if (t0 == 3) {
        (((struct o1B_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    if (t0 == -1) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        return 0x14;
    }
    return FUN_0c012c34(a4);
}

int FUN_0c0ea19e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    return FUN_0c0ea14c(a4, 0x71C);
}
