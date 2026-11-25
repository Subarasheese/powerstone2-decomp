/* Straight-line functions with calls and guards (batch gen_xi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int thunk_FUN_0c03f346();
int FUN_0c01bd78(int a4, int a5, int a6, int a7, float f4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c01bd78(int a4, int a5, int a6, int a7, float f4)
{
    float u0;
    int t1;
    int t0;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o30_float *)(a4))->v) = 5.0f;
        (((struct o4C_float *)(a4))->v) = (*(float *)((0xC20E1BC + (((*(signed char *)(a4 + 0x2)) << 2) << 1))));
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC20E1BC + (((*(signed char *)(a4 + 0x2)) << 2) << 1))))->v));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o40_float *)(a4))->v) = 25.0f;
        (((struct o44_float *)(a4))->v) = 25.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.5f;
        (((struct o54_float *)(a4))->v) = 0.100000001f;
        (((struct o1C_ushort *)(a4))->v) = 0x10;
        (((struct o1E_ushort *)(a4))->v) = 0x5;
    }
    if ((t0 == 0) || (t0 == 1)) {
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
        u0 = (1.0f + 1.0f) + 23.0f * (math_sin_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)));
        (((struct o40_float *)(a4))->v) = u0;
        u0 = (1.0f + 1.0f) + 23.0f * (math_sin_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)));
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o28_float *)(a4))->v) = ((-10.0f) + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v)));
        u0 = (-0.0f) + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
        (((struct o2C_float *)(a4))->v) = u0;
        t1 = (((struct o1C_short *)(a4))->v);
        if (t1 != 0) {
            return t1;
        }
        t1 = (((struct o1E_short *)(a4))->v);
        (((struct o1E_ushort *)(a4))->v) = (t1 - 1);
        if ((short)(t1 - 1) != 0) {
            (((struct o1C_ushort *)(a4))->v) = 0x10;
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            return 0xB0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1E_ushort *)(a4))->v) = 0x0;
        (((struct o44_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = ((-10.0f) + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v)));
        u0 = (-0.0f) + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
        (((struct o2C_float *)(a4))->v) = u0;
    } else if (t0 == 2) {
    } else {
        if (t0 == 3) {
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
            (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)))) + 1.0f);
            (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)))) + 1.0f);
            (((struct o28_float *)(a4))->v) = ((-10.0f) + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v)));
            u0 = (-0.0f) + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
            (((struct o2C_float *)(a4))->v) = u0;
            t1 = (((struct o1C_short *)(a4))->v);
            if (t1 == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o40_float *)(a4))->v) = 0.0f;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
            }
            return t1;
        }
        if (t0 == 4) {
            return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
        }
        return t0;
    }
    if ((*(signed char *)0xC305046) == 2) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x10;
    }
    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
    u0 = (1.0f + 1.0f) + (*(float *)0xC01C060) * (math_sin_angle16(((((((struct o1E_short *)(a4))->v)) << 8) << 2)));
    (((struct o40_float *)(a4))->v) = u0;
    u0 = (1.0f + 1.0f) + (*(float *)0xC01C060) * (math_sin_angle16(((((((struct o1E_short *)(a4))->v)) << 8) << 2)));
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o28_float *)(a4))->v) = ((-10.0f) + ((((struct o40_float *)(a4))->v)) * ((((struct o4C_float *)(a4))->v)));
    u0 = (-0.0f) + ((((struct o44_float *)(a4))->v)) * ((((struct o50_float *)(a4))->v));
    (((struct o2C_float *)(a4))->v) = u0;
    return 0x2C;
}
