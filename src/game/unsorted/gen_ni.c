/* Straight-line functions with calls and guards (batch gen_ni): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c165188(int a4, int a5, int a6, int a7);

int FUN_0c165188(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(nlRand()) % (int)0x12)) + 0x1C);
        *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(nlRand()) % (int)0xA)) + 0x7);
    }
    if ((t1 == 0) || (t1 == 1)) {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o18_float *)(t0))->v);
                (((struct o18_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o20_float *)(t0))->v) = (u0 - 0.0500000007f);
                (((struct o1C_float *)(t0))->v) = (u0 - 0.0500000007f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            } else {
                if (0.0f > ((((struct o58_float *)(a4))->v))) {
                    if (!(-5.0f > ((((struct o4C_float *)(a4))->v)))) {
                    } else {
                        u0 = (((struct o58_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(nlRand()) % (int)0x3)) * 0.100000001f));
                        (((struct o58_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                } else {
                    if (((((struct o4C_float *)(a4))->v)) > 5.0f) {
                        u0 = (((struct o58_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(nlRand()) % (int)0x3)) * 0.100000001f));
                        (((struct o58_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                }
                if (0.0f > ((((struct o60_float *)(a4))->v))) {
                    if (!(-5.0f > ((((struct o54_float *)(a4))->v)))) {
                    } else {
                        u0 = (((struct o60_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(nlRand()) % (int)0x3)) * 0.100000001f));
                        (((struct o60_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                } else {
                    if (((((struct o54_float *)(a4))->v)) > 5.0f) {
                        u0 = (((struct o60_float *)(a4))->v);
                        u1 = (-((float)((int)((int)(nlRand()) % (int)0x3)) * 0.100000001f));
                        (((struct o60_float *)(a4))->v) = (u0 * (u1 + -0.600000024f));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                }
            }
        } else {
            if ((*(short *)((a4 + 0x1E))) != 0) {
                (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.0399999991f);
                u0 = (((struct o84_float *)(t0))->v);
                (((struct o8C_float *)(t0))->v) = u0;
                (((struct o88_float *)(t0))->v) = u0;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o18_float *)(t0))->v) = (u0 + 0.0799999982f);
            if ((u0 + 0.0799999982f) > 1.0f) {
                (((struct o18_float *)(t0))->v) = 1.0f;
            }
            u0 = (((struct o18_float *)(t0))->v);
            (((struct o20_float *)(t0))->v) = u0;
            (((struct o1C_float *)(t0))->v) = u0;
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(nlRand()) % (int)0xF)) + 0x1E);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
