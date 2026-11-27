/* Straight-line functions with calls and guards (batch gen_aep): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c05aab6(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c018b28(int a4, int a5, int a6, int a7);

int FUN_0c018b28(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                return thunk_FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                t3 = 0;
                if (t2 != 2) {
                    if (t2 == 3) {
                        t3 = 1;
                    }
                    t4 = t2;
                } else {
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 1;
                    }
                    t4 = (short)(t2 - 1);
                }
                if (t3) {
                    u0 = (((struct o50_float *)(a4))->v);
                    u1 = (((struct o2C_float *)(a4))->v);
                    (((struct o2C_float *)(a4))->v) = (u1 - u0);
                    if (!((u1 - u0) > -60.0f)) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o2C_float *)(a4))->v) = -60.0f;
                        (((struct o0_uchar *)0xC30A51A)->v) = 0x0;
                    }
                    t2 = 0x2C;
                } else {
                    t2 = t4;
                }
                return t2;
            }
            t2 = FUN_0c01cd2c(0x101);
            if ((short)t2 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
                FUN_0c05aab6(0x0, 0x3);
                (((struct o2_ushort *)0xC30A51A)->v) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            } else {
                t2 = FUN_0c01cd2c(0x240);
                if (((short)t2 == 0) && (t0 = *(int *)0xC30A3F8, t0 == 0)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    FUN_0c05aab6(0x0, 0x4);
                }
            }
            if ((*(signed char *)0xC309859) == 13) {
                *(unsigned char *)((a4 + 0x2)) = 0x2;
                return 0x2;
            }
            return FUN_0c01c714((a4 + 0x2), 0x2, 0x3);
        }
        u0 = (((struct o50_float *)(a4))->v);
        u1 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (u1 + u0);
        if (!(0.0f > (u1 + u0))) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o2C_float *)(a4))->v) = 0.0f;
            t0 = 0x2C;
        } else {
            t2 = FUN_0c01cd2c(0x240);
            t3 = (short)t2;
            if (((short)t2 == 0) && (t1 = *(int *)0xC30A3F8, t1 == 0)) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                t3 = (FUN_0c05aab6(0x0, 0x4));
            }
            t0 = t3;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = -60.0f;
    (((struct o30_float *)(a4))->v) = 3.0f;
    (((struct o50_float *)(a4))->v) = 6.0f;
    if ((*(signed char *)0xC309859) != 13) {
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned char *)((a4 + 0x2)) = 0x2;
        t0 = 0x2;
    }
    return t0;
}
