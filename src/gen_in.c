/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c03f346(int);
int FUN_0c04c87c(int);
int FUN_0c15aed8(int);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c04c270(int a4, int a5, int a6);

int FUN_0c04c270(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
                u0 = math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1));
                *(unsigned int *)((a4 + 0x34)) = (int)(u0 * 5461.0f);
                u1 = math_sin_angle16((int)(u0 * 5461.0f));
                u0 = math_cos_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0xB6));
                u2 = (u1 * 50.0f);
                u3 = ((((struct o30_float *)(a4))->v));
                u3 = u3 + u2 * u0;
                (((struct o30_float *)(a4))->v) = u3;
                u0 = math_sin_angle16(((short)(*(short *)((a4 + 0x1C))) * (short)0xB6));
                u2 = (u1 * 50.0f);
                u1 = ((((struct o28_float *)(a4))->v));
                u1 = u1 + u2 * u0;
                (((struct o28_float *)(a4))->v) = u1;
                u0 = math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13));
                (((struct o2C_float *)(a4))->v) = (u0 * 30.0f);
                if (0.0f > (u0 * 30.0f)) {
                    (((struct o2C_float *)(a4))->v) = (-((((struct o2C_float *)(a4))->v)));
                }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xA) {
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x14;
                        FUN_0c15aed8((a4 + 0x28));
                    }
                }
                t0 = *(signed char *)0xC541F44;
                if ((int)(unsigned char)t0 > (int)0xB) {
                    return FUN_0c03f346(a4);
                }
                return (unsigned char)t0;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                t0 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((t0 << 2) + t0);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t1 = 0x15;
            }
            return t1;
        }
        t0 = *(signed char *)0xC541F44;
        t1 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0xA) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    FUN_0c187798(a4, a5, a6);
    if ((*(signed char *)((a4 + 0x2))) == 4) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c04c87c(a4);
        t0 = *(signed char *)0xC541F44;
        t1 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0xA) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x63;
        t1 = *(signed char *)((a4 + 0x2));
        *(unsigned short *)((a4 + 0x1C)) = ((t1 << 2) + t1);
        t1 = *(signed char *)((a4 + 0x2));
        *(unsigned short *)((a4 + 0x1E)) = ((t1 << 2) + 0x1E);
        t0 = ((t1 << 2) + 0x1E);
    }
    return t0;
}
