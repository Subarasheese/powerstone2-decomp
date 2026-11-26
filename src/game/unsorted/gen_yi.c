/* Straight-line functions with calls and guards (batch gen_yi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c03f346(int);
int FUN_0c05ab12(int, int);
int FUN_0c16cace(int a4);

int FUN_0c16cace(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o5C_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) / 5.0f);
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            t0 = 0xCD;
            if (!(((((struct o60_float *)(a4))->v)) > 0.300000012f)) {
            } else {
                t0 = 0xD1;
                if (!(((((struct o60_float *)(a4))->v)) > 0.800000012f)) {
                    t0 = 0xD0;
                }
            }
            FUN_0c05ab12(t0, (a4 + 0x28));
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x6C);
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        if ((*(short *)((a4 + 0x1C))) == 0) {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        u0 = (((struct oB0_float *)(a4))->v);
        (((struct oB0_float *)(a4))->v) = (u0 - 0.0625f);
        if (!((u0 - 0.0625f) > 0.0f)) {
            return FUN_0c03f346(a4);
        }
        return 0xB0;
    }
    if (!(((((struct o58_float *)(a4))->v)) > ((((struct o40_float *)(a4))->v)))) {
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) * 0.100000001f);
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}
