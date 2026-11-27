/* Straight-line functions with calls and guards (batch gen_os): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0f74c0(int);
int FUN_0c0f7624(int);
int FUN_0c0f780e(int);
float math_sin_angle16(int);
int FUN_0c0f6d16(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0f6d16(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        if ((t0 == 0) || (t0 == 1)) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            u0 = 1.0f;
            u0 = u0 + 0.25f * (float)(*(short *)((a4 + 0x1C)));
            (((struct o40_float *)(a4))->v) = u0;
            (((struct o28_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 2.8125f);
            (((struct o2C_float *)(a4))->v) = (((float)(*(short *)((a4 + 0x1C))) / 60.0f) * 4.5703125f);
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 / 128.0f);
            (((struct o44_float *)(a4))->v) = (u0 / 128.0f);
            if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x78;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x1;
                (((struct o22_ushort *)(a4))->v) = 0xAAA;
            }
        } else {
            switch (t0) {
            case 2:
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                t0 = (((struct o20_short *)(a4))->v);
                u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
                (((struct o40_float *)(a4))->v) = (((((float)t0 / 960.0f) * u0)) + 1.0f);
                (((struct o44_float *)(a4))->v) = (1.0f - ((((float)t0 / 960.0f) * u0)));
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
                (((struct o6C_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 3000.0f);
                if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 3:
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) / 30.0f) * 32768.0f));
                (((struct o40_float *)(a4))->v) = (1.0f - ((u0 * 0.5f)));
                (((struct o44_float *)(a4))->v) = (((u0 * 0.5f)) + 1.0f);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
                if ((int)(*(short *)((a4 + 0x1C))) > 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                    (((struct o22_ushort *)(a4))->v) = 0xE38;
                }
                break;
            case 4:
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t1 = *(short *)((a4 + 0x1C));
                u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
                u1 = (((float)t1 * 0.100000001f) / 60.0f);
                (((struct o40_float *)(a4))->v) = (((u1 * u0)) + 1.0f);
                (((struct o44_float *)(a4))->v) = (1.0f - ((u1 * u0)));
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x1E) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            case 5:
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t0 = *(short *)((a4 + 0x1C));
                u0 = math_sin_angle16(((*(short *)((a4 + 0x1E))) << 13));
                u1 = (((float)t0 * 0.100000001f) / 60.0f);
                (((struct o40_float *)(a4))->v) = (1.0f - ((u1 * u0)));
                (((struct o44_float *)(a4))->v) = (((u1 * u0)) + 1.0f);
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) * 0.0078125f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) * 0.0078125f);
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0187500007f);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    FUN_0c0f74c0(a4);
                    t0 = FUN_0c0f780e(a4);
                    FUN_0c0f7624(t0);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                break;
            }
        }
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 == 0) {
            (((struct o80_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x6AAA;
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        if ((t0 == 0) || (t0 == 1)) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 18);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o22_short *)(a4))->v)));
            t1 = 0x22;
            if ((int)((((struct o22_short *)(a4))->v)) <= (int)0xFFFFFEEF) {
                (((struct o22_ushort *)(a4))->v) = 0xFFFFFEEF;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
            t2 = t1;
        } else {
            t1 = t0;
            if (t0 != 2) {
            } else {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x12);
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o22_short *)(a4))->v)));
                t0 = 0x22;
                if ((int)((((struct o22_short *)(a4))->v)) >= (int)0x111) {
                    (((struct o22_ushort *)(a4))->v) = 0x111;
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                    t0 = 0x16;
                }
                t1 = t0;
            }
            t2 = t1;
        }
        return t2;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
