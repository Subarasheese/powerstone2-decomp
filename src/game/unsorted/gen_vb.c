/* Straight-line functions with calls and guards (batch gen_vb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c11a2a8(int a4, int a5, int a6, int a7);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c11a2a8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    float u2;
    float u1;

    if ((*(signed char *)((0x14 + ((((struct o10_int *)(a4))->v))))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 == 1) {
        } else {
            if (t0 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(signed char *)(a4 + 0x2)), 0x23, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x20F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)((((((struct o10_int *)(a4))->v)) + 0x28)); }
        t0 = nlRand();
        t1 = (t0 % 0x10);
        t0 = nlRand();
        u1 = (((((float)(t0 % 0x10) * 360.0f) / 16.0f) * 65536.0f) / 360.0f);
        u2 = ((((struct o28_float *)(a4))->v)) + (((float)t1 * 50.0f) / 16.0f) * (math_cos_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
        (((struct o28_float *)(a4))->v) = u2;
        u2 = ((((struct o2C_float *)(a4))->v)) + (((float)t1 * 50.0f) / 16.0f) * (math_sin_angle16(((int)(u1 + 0.5f) & 0xFFFF)));
        (((struct o2C_float *)(a4))->v) = u2;
        t0 = nlRand();
        u1 = math_sin_angle16((0xFFFF & (int)(((((((float)(t0 % 0x10) * 360.0f) / 16.0f) * 65536.0f) / 360.0f)) + (*(float *)0xC11A4F4))));
        u2 = ((((struct o30_float *)(a4))->v)) + (((float)t1 * 50.0f) / 16.0f) * u1;
        (((struct o30_float *)(a4))->v) = u2;
    }
    t0 = (((struct o1C_short *)(a4))->v);
    if (((int)t0 >= 0) && ((int)t0 <= (int)0xA)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, ((((struct o1C_short *)(a4))->v)), 0xA, 0x0);
    }
    t0 = (((struct o1C_short *)(a4))->v);
    if (((int)t0 >= (int)0xA) && ((int)t0 <= (int)0x14)) {
        FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, ((((struct o1C_short *)(a4))->v)), 0x14, 0xA);
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
