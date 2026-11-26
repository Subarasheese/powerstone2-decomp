/* Straight-line functions with calls and guards (batch gen_agf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c012134(int a4, int a5, int a6, int a7);

int FUN_0c012134(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = (((struct o41C_int *)(a4))->v);
    if (t0 == 0) {
        (((struct o40_float *)(a4))->v) = 0.100000001f;
        (((struct o44_float *)(a4))->v) = 0.100000001f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
        t2 = 0x40;
        if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o19_uchar *)(t1))->v) = 0x2;
            t3 = FUN_0c01cc56(0x15, 0xC012202);
            (((struct o41C_uint *)(t3))->v) = t1;
            t2 = t3;
        }
        t3 = t2;
    } else {
        if (t0 != 2) {
            t2 = t0;
            if (t0 != 3) {
            } else {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.100000001f);
                t0 = 0x40;
                if (!(((((struct o40_float *)(a4))->v)) > 0.100000001f)) {
                    thunk_FUN_0c03f346(a4, (0x41C + a4), a6, a7);
                    (((struct o19_uchar *)(t1))->v) = 0x5;
                    t0 = 0x19;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            t2 = *(signed char *)((t1 + 0x19));
            t1 = t2;
            if (t2 == 4) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            t0 = t1;
        }
        t3 = t0;
    }
    return t3;
}
