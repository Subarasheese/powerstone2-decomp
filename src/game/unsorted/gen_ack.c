/* Straight-line functions with calls and guards (batch gen_ack): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c149560(int, int);
int FUN_0c1495c0(int, int, int);
int FUN_0c149762(int a4);

int FUN_0c149762(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC542363;
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t2 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC202A08 + (((t2 << 1) + t2) << 2))); }
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        FUN_0c149560(a4, 0x1);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    if ((t1 == 0) || (t1 == 1)) {
        t2 = *(signed char *)(((*(int *)(((0xC535D90 + ((short)t0 * (short)0x3938)) + 0x10))) + 0x41D));
        if (t2 != 5) {
            if (t2 != 4) {
                if (t2 != 7) {
                    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    }
                    t0 = *(short *)((a4 + 0x1C));
                    if (t0 == 0) {
                        return FUN_0c1495c0(a4, 0x2, 0x0);
                    }
                    return t0;
                }
                return t2;
            }
            return t2;
        }
        return t2;
    } else {
        return t1;
    }
}
