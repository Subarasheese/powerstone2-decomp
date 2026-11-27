/* Straight-line functions with calls and guards (batch gen_aes): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12c388(int);
float math_sin_angle16(int);
int FUN_0c12bee6(int a4, int a5, int a6, int a7, float f4);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c12bee6(int a4, int a5, int a6, int a7, float f4)
{
    int t1;
    int t0;
    float u0;
    int t2;

    t1 = (((struct o10_int *)(a4))->v);
    if (((int)(*(signed char *)(t1 + 0x17)) <= (int)0x2) && (t0 = *(signed char *)(t1 + 0x3715), t0 == 26)) {
    } else {
        (((struct o1E_ushort *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
    } else {
        FUN_0c12c388(a4);
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o18_float *)(t1))->v) = 0.0f;
        (((struct o1C_float *)(t1))->v) = 0.0f;
        (((struct o20_float *)(t1))->v) = 0.0f;
        (((struct o1C_ushort *)(a4))->v) = 0x14;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct o1C_ushort *)(a4))->v) = 0x10E;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t2 = 0x14;
        }
        return t2;
    } else {
        if (t0 != 2) {
            if (t0 == 3) {
                (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x3);
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = (((math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f))) + 1.0f) / (1.0f + 1.0f));
                (((struct o18_float *)(t1))->v) = ((0.300000012f) + 0.699999988f * u0);
                u0 = (((math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f))) + 1.0f) / (1.0f + 1.0f));
                (((struct o20_float *)(t1))->v) = ((0.300000012f) + 0.699999988f * u0);
                u0 = (((math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f))) + 1.0f) / (1.0f + 1.0f));
                (((struct o1C_float *)(t1))->v) = ((0.300000012f) + 0.699999988f * u0);
                t1 = (int)((int)((((struct o1C_short *)(a4))->v)) % (int)0x168);
                t2 = t1;
                if (t1 == 90) {
                    t1 = (((struct o1E_short *)(a4))->v);
                    t2 = t1;
                    if (t1 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                        t2 = 0x14;
                    }
                }
                return t2;
            }
            if (t0 == 4) {
                (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x3);
                t1 = (((struct oC4_int *)(a4))->v);
                u0 = math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f));
                (((struct o18_float *)(t1))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
                u0 = math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f));
                (((struct o1C_float *)(t1))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
                u0 = math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f));
                (((struct o20_float *)(t1))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
                t1 = (int)((int)((((struct o1C_short *)(a4))->v)) % (int)0x168);
                t2 = t1;
                if (t1 == 0x10E) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 5) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 6) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x3);
        t0 = (((struct oC4_int *)(a4))->v);
        u0 = math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f));
        (((struct o18_float *)(t0))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
        u0 = math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f));
        (((struct o1C_float *)(t0))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
        u0 = math_sin_angle16((int)(((float)((((struct o1C_short *)(a4))->v)) * 65536.0f) / 360.0f));
        (((struct o20_float *)(t0))->v) = (((u0 + 1.0f) / (1.0f + 1.0f)) * 1.0f);
        t0 = (((struct o1C_short *)(a4))->v);
        t1 = t0;
        if (t0 != 0x1C2) {
        } else {
            if (((((struct o1E_short *)(a4))->v)) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x4;
            }
            t1 = 0x14;
        }
        return t1;
    }
}
