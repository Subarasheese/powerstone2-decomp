/* Straight-line functions with calls and guards (batch gen_acn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c124c04(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


int FUN_0c124c04(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    float u0;
    int t2;

    t1 = (((struct o10_int *)(a4))->v);
    t2 = a5;
    if (((*(signed char *)(t1 + 0x3715)) == 26) && (t0 = (((struct o3818_short *)(t1))->v), (unsigned short)t0 == 0x113)) {
    } else {
        if ((int)(*(signed char *)(a4 + 0x14)) < (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
        }
        t2 = 0x3;
    }
    (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 3) {
            if (t0 == 4) {
            } else {
                return t0;
            }
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            (((struct o1C_ushort *)(a4))->v) = 0x8;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, t2, a6, a7);
        }
        return (short)(t0 - 1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(t1 + 0x34); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(t1 + 0x28); }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xAAA);
    t1 = (((struct o1E_short *)(a4))->v);
    u0 = math_sin_angle16((int)(((float)((t1 << 2) + t1) * 65536.0f) / 360.0f));
    (((struct o8C_float *)(t0))->v) = ((1.0f) + 0.300000012f * u0);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 2730);
    t1 = (((struct o1E_short *)(a4))->v);
    u0 = math_sin_angle16((int)(((float)(((t1 << 2) + t1) + 0x1E) * 65536.0f) / 360.0f));
    (((struct o8C_float *)(t0))->v) = ((1.0f) + 0.300000012f * u0);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xE38);
    if (1.5f > ((((struct o8C_float *)(t0))->v))) {
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * 1.02999997f);
    }
    return 0x8C;
}
