/* Straight-line functions with calls and guards (batch gen_jq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c087ecc(int a4, float f4);
int FUN_0c087d60(int a4);

int FUN_0c087ecc(int a4, float f4)
{
    int t1;
    register int t2;
    register int t3;

    t2 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
    t3 = (short)(t2 - 1);
    if ((int)(short)(t2 - 1) <= 0) {
        if (((unsigned char)(*(signed char *)((a4 + 0x3721))) != 14) && (t3 = (((struct o22_short *)(a4))->v), t3 == 0)) {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                (((struct o20_ushort *)(a4))->v) = 0x16;
            } else {
                (((struct o20_ushort *)(a4))->v) = 0x0;
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        }
        if ((((((struct o20_short *)(a4))->v)) != 0) && (t1 = *(signed char *)((a4 + 0x3721)), (unsigned char)t1 != 14)) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t3 = 0x20;
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x3A, 0xFFFFFFFF, 0x3, 0x3A);
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t3 = 0x17;
        }
    }
    return t3;
}

int FUN_0c087d60(int a4)
{
    int t1;
    register int t2;
    register int t3;

    t2 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
    t3 = (short)(t2 - 1);
    if ((int)(short)(t2 - 1) <= 0) {
        if (((unsigned char)(*(signed char *)((a4 + 0x3721))) != 14) && (t3 = (((struct o22_short *)(a4))->v), t3 == 0)) {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                (((struct o20_ushort *)(a4))->v) = 0x16;
            } else {
                (((struct o20_ushort *)(a4))->v) = 0x0;
            }
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        }
        if ((((((struct o20_short *)(a4))->v)) != 0) && (t1 = *(signed char *)((a4 + 0x3721)), (unsigned char)t1 != 14)) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t3 = 0x20;
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x38, 0xFFFFFFFF, 0x3, 0x38);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t3 = 0x17;
        }
    }
    return t3;
}
