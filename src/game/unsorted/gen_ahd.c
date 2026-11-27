/* Straight-line functions with calls and guards (batch gen_ahd): generated from the code and checked by tests. Calls are
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
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c04c270(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o34_uint { char p[0x34]; unsigned int v; };


int FUN_0c04c270(int a4)
{
    int t0;
    float u0;
    float u1;
    int t2;
    int t1;

    if ((*(signed char *)(a4 + 0x14)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    }
    t0 = *(signed char *)(a4 + 0x15);
    switch (t0) {
    case 0:
        (((struct o1C_ushort *)(a4))->v) = 0x3C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x58) = *(struct mv3 *)(a4 + 0x28); }
        if ((*(signed char *)(a4 + 0x2)) == 4) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            FUN_0c04c87c(a4);
            t0 = *(signed char *)0xC541F44;
            if ((int)(unsigned char)t0 < (int)0xA) {
                return (unsigned char)t0;
            }
            t2 = 0x3C;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x63;
            t0 = *(signed char *)(a4 + 0x2);
            (((struct o1C_ushort *)(a4))->v) = ((t0 << 2) + t0);
            t0 = *(signed char *)(a4 + 0x2);
            (((struct o1E_ushort *)(a4))->v) = ((t0 << 2) + 0x1E);
            return ((t0 << 2) + 0x1E);
        }
        break;
    case 1:
        t0 = *(signed char *)0xC541F44;
        if ((int)(unsigned char)t0 < (int)0xA) {
            return (unsigned char)t0;
        }
        t2 = 0x3C;
        break;
    case 2:
        t0 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            t1 = *(signed char *)(a4 + 0x2);
            t2 = ((t1 << 2) + t1);
        } else {
            return (short)(t0 - 1);
        }
        break;
    default:
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
        u0 = math_sin_angle16((((((((struct o1C_short *)(a4))->v)) << 8) << 2) << 1));
        (((struct o34_uint *)(a4))->v) = (int)(u0 * 5461.0f);
        u1 = math_sin_angle16((int)(u0 * 5461.0f));
        u0 = math_cos_angle16(((short)((((struct o1C_short *)(a4))->v)) * (short)0xB6));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + (u1 * 50.0f) * u0);
        u0 = math_sin_angle16(((short)((((struct o1C_short *)(a4))->v)) * (short)0xB6));
        u1 = ((((struct o28_float *)(a4))->v)) + (u1 * 50.0f) * u0;
        (((struct o28_float *)(a4))->v) = u1;
        u0 = math_sin_angle16((((((struct o1C_short *)(a4))->v)) << 13));
        (((struct o2C_float *)(a4))->v) = (u0 * 30.0f);
        if (0.0f > (u0 * 30.0f)) {
            (((struct o2C_float *)(a4))->v) = (-((((struct o2C_float *)(a4))->v)));
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xA) {
            t0 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o1E_ushort *)(a4))->v) = 0x14;
                FUN_0c15aed8(a4 + 0x28);
            }
        }
        t0 = *(signed char *)0xC541F44;
        if ((int)(unsigned char)t0 > (int)0xB) {
            return FUN_0c03f346(a4);
        }
        return (unsigned char)t0;
    }
    (((struct o1C_ushort *)(a4))->v) = t2;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
    return 0x15;
}
