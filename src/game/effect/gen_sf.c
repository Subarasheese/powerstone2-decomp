/* Straight-line functions with calls and guards (batch gen_sf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c132d28(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c132d70(int a4, int a5, int a6, int a7, float f4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };


int FUN_0c132d70(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        }
        t0 = *(signed char *)(a4 + 0x15);
        if (t0 == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o1E_ushort *)(a4))->v) = 0x0;
        }
        if ((t0 == 0) || (t0 == 1)) {
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) + 0.100000001f);
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) + 0.100000001f);
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + 0.100000001f);
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.00999999978f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.00999999978f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
            if (((((struct o40_float *)(a4))->v)) > 1.0f) {
                (((struct o40_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o44_float *)(a4))->v)) > 1.0f) {
                (((struct o44_float *)(a4))->v) = 1.0f;
            }
            if (((((struct o48_float *)(a4))->v)) > 1.0f) {
                (((struct o48_float *)(a4))->v) = 1.0f;
            }
            t1 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t1 + 0x1);
            if ((int)(short)(t1 + 0x1) >= (int)0x1E) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o1E_ushort *)(a4))->v) = 0x0;
                (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                (((struct o12A_ushort *)(a4))->v) = 0x0;
            }
        } else {
            if (t0 != 2) {
            } else {
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct o1E_short *)(a4))->v);
                (((struct o1E_ushort *)(a4))->v) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    (((struct o1E_ushort *)(a4))->v) = 0x0;
                }
            }
        }
        if (((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        }
        if (((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        }
        if (((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v)) > 1.0f) {
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
        }
        if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
            (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(a4 + 0x40); }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c132d28(a4);
    }
    if (((((struct o1C_short *)(a4))->v)) != 0) {
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
    }
    t0 = (((struct o1C_short *)(a4))->v);
    t1 = t0;
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o1C_ushort *)(a4))->v) = 0x28;
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * 40.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * 40.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / -40.0f);
        (((struct o5C_float *)(a4))->v) = 0.100000001f;
        (((struct o60_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / -40.0f);
        (((struct o48_float *)(a4))->v) = 0.00999999978f;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)(a4 + 0x1))));
        t1 = 0x12A;
    }
    return t1;
}
