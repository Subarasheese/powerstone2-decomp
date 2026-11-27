/* Straight-line functions with calls and guards (batch gen_mc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c01cc56(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b50c(float);
int FUN_0c05aab6(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int thunk_FUN_0c03f346();
int FUN_0c01c004(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };


int FUN_0c01c004(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    float u0;
    float u1;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x10;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x410);
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct oB0_float *)(a4))->v) = 0.899999976f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
        (((struct o40_float *)(a4))->v) = (math_cos_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)));
        (((struct o44_float *)(a4))->v) = (math_cos_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)));
        t1 = (((struct o1C_short *)(a4))->v);
        t2 = t1;
        if (t1 != 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o1C_ushort *)(a4))->v) = 0x10;
            t2 = 0x10;
        }
        return t2;
    } else {
        t1 = 0;
        if (t0 != 2) {
            if (t0 == 3) {
                t1 = 1;
            } else if (t0 == 4) {
            } else {
                if (t0 == 5) {
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
                    (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)))) + 1.0f);
                    (((struct o44_float *)(a4))->v) = ((-(math_cos_angle16(((((((struct o1C_short *)(a4))->v)) << 8) << 2)))) + 1.0f);
                    t2 = (((struct o1C_short *)(a4))->v);
                    if (t2 == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                        (((struct o44_float *)(a4))->v) = 0.0f;
                        (((struct o40_float *)(a4))->v) = 0.0f;
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                    }
                    return t2;
                }
                if (t0 == 6) {
                    return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
                }
                return t0;
            }
        } else {
            t0 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                return (short)(t0 - 1);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            *(unsigned char *)(((FUN_0c01cc56((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x0))), 0xC01BD78)) + 0x2)) = 0x0;
            if ((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x2))) != 0) {
                t0 = FUN_0c01cc56((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x2))), 0xC01BD78);
                t2 = 0x2;
                if ((*(short *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC20E2B4) + 0x2))) == 41) {
                    t2 = 0x1;
                }
                (((struct o2_uchar *)(t0))->v) = t2;
            }
            (((struct o1C_ushort *)(a4))->v) = 0x50;
            t1 = 1;
        }
        if (t1) {
            t0 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
                return (short)(t0 - 1);
            }
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t0 = 0x25;
            if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                t0 = 0x24;
            }
            FUN_0c05aab6(0x0, t0);
        }
        if ((*(signed char *)0xC305046) == 2) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            (((struct o1C_ushort *)(a4))->v) = 0x10;
        }
        (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) + 0x1);
        u0 = (0.899999976f) + 0.0500000007f * (math_sin_angle16(((((((struct o1E_short *)(a4))->v)) << 8) << 2)));
        (((struct oB0_float *)(a4))->v) = u0;
        if ((((((struct o1E_short *)(a4))->v)) & 1) != 0) {
            if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                FUN_0c02b50c((1.0f + 1.0f));
                FUN_0c02b502(0x7);
                t0 = 0xC1A7668;
                u0 = 152.0f;
            } else {
                FUN_0c02b50c((1.0f + 1.0f));
                FUN_0c02b502(0x7);
                t0 = 0xC1A7678;
                u0 = 176.0f;
            }
            t1 = t0;
            u1 = u0;
        } else {
            if ((int)((((struct o20_short *)(a4))->v)) < (int)((((struct o22_short *)(a4))->v))) {
                FUN_0c02b50c((1.0f + 1.0f));
                FUN_0c02b502(0x1);
                t0 = 0xC1A7668;
                u0 = 152.0f;
            } else {
                FUN_0c02b50c((1.0f + 1.0f));
                FUN_0c02b502(0x4);
                t0 = 0xC1A7678;
                u0 = 176.0f;
            }
            t1 = t0;
            u1 = u0;
        }
        FUN_0c02b3ba(t1, u1, 108.0f, 637.0f);
        return (FUN_0c02b50c(1.0f));
    }
}
