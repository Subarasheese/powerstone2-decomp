/* Straight-line functions with calls and guards (batch gen_abg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0df2e0(int, float);
int math_atan_angle16(float);
int nlRand(void);
int FUN_0c0d8b48(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };


int FUN_0c0d8b48(int a4, int a5, int a6, int a7)
{
    int t2;
    int t1;
    int t0;
    float u0;
    int t3;
    float u1;
    float u2;

    if ((int)(*(signed char *)0xC54223C) > (int)0x1) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        t1 = a4;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = 0.0f;
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((-3000.0f) + 50.0f * (float)((((struct o1E_short *)(a4))->v))));
        u0 = (-0.0f) + 10.0f * (((float)((int)((int)(nlRand()) % (int)0xC8)) + -100.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + u0);
        (((struct o4C_float *)(a4))->v) = 15.0f;
        (((struct o50_float *)(a4))->v) = 25.0f;
        (((struct o5C_float *)(a4))->v) = -0.25f;
        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x38E3;
        (((struct o1C_ushort *)(a4))->v) = 0xC8;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t2 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) != 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (FUN_0c0df2e0(t1, (((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v)))));
            t1 = math_atan_angle16((((((struct o50_float *)(a4))->v)) / ((((struct o4C_float *)(a4))->v))));
            t2 = t1;
            if (0.0f > ((((struct o4C_float *)(a4))->v))) {
                t2 = (t1 + 0x8000);
            }
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (unsigned short)t2;
            return 0x80;
        }
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        t1 = 0x12C;
    } else if (t0 == 2) {
        t2 = (int)((int)(nlRand()) % (int)0xA);
        (((struct o44_float *)(a4))->v) = (((float)t2 / 50.0f) + 1.0f);
        (((struct o48_float *)(a4))->v) = (((float)t2 / 50.0f) + 1.0f);
        (((struct o40_float *)(a4))->v) = (((float)t2 / 50.0f) + 1.0f);
        t2 = *(int *)0xC4B410C;
        if ((((((struct o1C_short *)(a4))->v)) & 0x1) != 0) {
            t3 = 0x22;
            u0 = ((((struct o30_float *)(a4))->v));
            u1 = ((((struct o2C_float *)(a4))->v));
            u2 = ((((struct o28_float *)(a4))->v));
        } else {
            t3 = 0x23;
            u0 = ((((struct o30_float *)(a4))->v));
            u1 = ((((struct o2C_float *)(a4))->v));
            u2 = ((((struct o28_float *)(a4))->v));
        }
        FUN_0c03733c(a4, t3, t2);
        (((struct o28_float *)(a4))->v) = u2;
        (((struct o2C_float *)(a4))->v) = u1;
        (((struct o30_float *)(a4))->v) = u0;
        t2 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
        if ((short)(t2 - 1) == 0) {
            t1 = 0x14;
        } else {
            return (short)(t2 - 1);
        }
    } else {
        if (t0 == 3) {
            t2 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t2 - 1);
            if ((short)(t2 - 1) == 0) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t2 - 1);
        }
        return t0;
    }
    (((struct o1C_ushort *)(a4))->v) = t1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    return 0x14;
}
