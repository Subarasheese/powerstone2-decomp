/* Straight-line functions with calls and guards (batch gen_sc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1354a6(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
float math_tan_angle16(int);
int nlRand(void);
int FUN_0c1354f8(int a4, int a5, int a6, int a7, float f4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };


int FUN_0c1354f8(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    float u0;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 == 1) {
        } else {
            if (t0 == 2) {
                t0 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                }
                u0 = *(float *)0xC135858;
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - u0);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - u0);
                if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                return FUN_0c1354a6(a4);
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        if ((*(signed char *)(a4 + 0x2)) != 0) {
            (((struct o1C_ushort *)(a4))->v) = 0xA;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 50.0f);
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            t0 = (int)((int)(nlRand()) % (int)0x5A);
            u0 = math_sin_angle16((0xFFFF & (((int)(((float)t0 * 65536.0f) / 360.0f) + ((((struct o38_int *)(a4))->v))) - 8192)));
            (((struct o4C_float *)(a4))->v) = (u0 * 20.0f);
            t0 = (int)((int)(nlRand()) % (int)0x5A);
            u0 = math_cos_angle16((0xFFFF & (((int)(((float)t0 * 65536.0f) / 360.0f) + ((((struct o38_int *)(a4))->v))) - 8192)));
            (((struct o54_float *)(a4))->v) = (u0 * 20.0f);
            t0 = nlRand();
            (((struct o5C_float *)(a4))->v) = ((float)(t0 % 0x2) + 0.5f);
            (((struct o50_float *)(a4))->v) = (-((math_tan_angle16(((((struct o34_int *)(a4))->v)))) * 20.0f));
            if (-10.0f > ((((struct o50_float *)(a4))->v))) {
                (((struct o50_float *)(a4))->v) = -10.0f;
            }
        } else {
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o1C_ushort *)(a4))->v) = 0xF;
        }
    }
    FUN_0c1354a6(a4);
    if ((*(signed char *)(a4 + 0x2)) != 0) {
        if (((((struct o50_float *)(a4))->v)) > 10.0f) {
            (((struct o50_float *)(a4))->v) = 10.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
        }
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0xF;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * (1.0f + 1.0f));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * (1.0f + 1.0f));
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
        t0 = 0x50;
    } else {
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = 0x30;
    }
    return t0;
}
