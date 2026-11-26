/* Straight-line functions with calls and guards (batch gen_sx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03733c(int, int, int);
int FUN_0c1219b6(int a4, int a5);

int FUN_0c1219b6(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 3) {
        } else {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 == 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0xFFFFFFFF;
            }
            if ((t0 == 0) || (t0 == 1)) {
                if ((*(short *)((a4 + 0x1C))) != (*(signed char *)0xC4759E8)) {
                    *(unsigned short *)((a4 + 0x1C)) = (*(signed char *)0xC4759E8);
                    t2 = (FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C)));
                } else {
                    t1 = *(signed char *)0xC4759EC;
                    t4 = t1;
                    if (t1 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t2 = t4;
                }
                t1 = t2;
            } else {
                if (t0 != 2) {
                } else {
                    FUN_0c03733c(a4, 0xE, (*(int *)0xC4B410C));
                    *(unsigned short *)((a4 + 0x1E)) = 0x20;
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                t2 = t0;
                if ((t0 == 2) || (t0 == 3)) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if (((*(short *)((a4 + 0x1E))) & 6) != 0) {
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                    } else {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    t0 = *(short *)((a4 + 0x1E));
                    t4 = t0;
                    if ((int)t0 <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x1;
                        FUN_0c03733c(a4, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + 0xC201A44))), (*(int *)0xC4B410C));
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        t4 = 0xA8;
                    }
                    t2 = t4;
                }
                t1 = t2;
            }
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 == 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t2 = t1;
        if ((t1 == 0) || (t1 == 1)) {
            if ((*(signed char *)((a4 + 0x3))) == (*(signed char *)0xC4759E8)) {
                (((struct o44_float *)(a4))->v) = 1.39999998f;
                (((struct o40_float *)(a4))->v) = 1.39999998f;
            } else {
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            t2 = 0x40;
        }
        t0 = t2;
    }
    return t0;
}
