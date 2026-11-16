/* Straight-line functions with calls and guards (batch gen_mp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c149fc4(int);
int FUN_0c149ff6(int a4, int a5, int a6, int a7);
int FUN_0c04daa6(int a4, int a5, int a6, int a7);

int FUN_0c149ff6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c149fc4(a4);
            (((struct o24_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
            if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o54_float *)(a4))->v)) > 0.0f)) {
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + -0.0250000004f);
            if (0.0f > ((((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
            }
            return 0x14;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o4C_float *)(a4))->v) = 0.467000008f;
        (((struct o58_float *)(a4))->v) = -0.0155999996f;
        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = 0xA8;
    }
    return t1;
}

int FUN_0c04daa6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t0 = (((struct oC8_int *)(a4))->v);
                    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1.0f);
                    t0 = (((struct oC4_int *)(a4))->v);
                    (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 1.0f);
                    t1 = *(signed char *)0xC541F44;
                    if ((int)(unsigned char)t1 >= (int)0x5) {
                        return FUN_0c03f346(a4, 0xC541F3C, t0, a7);
                    }
                    return (unsigned char)t1;
                }
                t0 = *(signed char *)0xC541F44;
                t1 = (unsigned char)t0;
                if ((int)(unsigned char)t0 >= (int)0x3) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                return t1;
            }
            t0 = (((struct oC8_int *)(a4))->v);
            u0 = (((struct o4_float *)0xC04DC10)->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + u0);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - u0);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
    } else {
        t0 = (((struct oC8_int *)(a4))->v);
        u0 = (((struct o0_float *)0xC04DC10)->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - u0);
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + u0);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((int)(unsigned char)t0 >= (int)0x2) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x168;
        t1 = 0x168;
    }
    return t1;
}
