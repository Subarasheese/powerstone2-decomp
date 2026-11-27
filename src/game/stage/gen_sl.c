/* Straight-line functions with calls and guards (batch gen_sl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c059e60(int, int);
float math_cos_angle16(int);
int FUN_0c0b6b58(int a4, int a5, float f4);

int FUN_0c0b6b58(int a4, int a5, float f4)
{
    float u0;
    int t0;
    int t1;
    float u1;
    int t3;
    float u2;
    int t2;

    t0 = *(signed char *)(a4 + 0x17);
    if (t0 == 0) {
        (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = 0x0;
        (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = 0x0;
        (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = 0x0;
        (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = 80.4241104f;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        *(unsigned short *)((((0x468 + a4) + 0x2D0) + 0x6)) = 0x1F;
        (((struct o78_uint *)(((0x468 + a4) + 0x2D0)))->v) = 0xFFFFC000;
        (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = 1.0f;
        (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = 1.0f;
        (((struct o8C_float *)((0x2D0 + (0x468 + a4))))->v) = 1.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
        (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 16384.0f));
        (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 16384.0f) - 16384);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t1 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) < (int)0x4) {
        } else {
            FUN_0c059e60(a4, 0x25);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
            t1 = 0x17;
        }
        t2 = t1;
    } else {
        if (t0 != 2) {
            if (t0 == 3) {
                u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                u2 = (280.424103f) + 50.0f * (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = u2;
                u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                u0 = (1.0f + 1.0f) + 1.0f * u1;
                (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                t1 = 0x22;
                if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                    t1 = 0x17;
                }
                t3 = t1;
            } else {
                if (t0 == 4) {
                    t1 = 0x16;
                    if ((int)(*(signed char *)(a4 + 0x16)) >= (int)0x3) {
                        (((struct o22_ushort *)(a4))->v) = 0xA;
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                        t1 = 0x17;
                    }
                    t3 = t1;
                } else {
                    t1 = t0;
                    if (t0 == 5) {
                        u0 = (((struct o0_float *)0xC0B6F10)->v);
                        t0 = (((struct o22_short *)(a4))->v);
                        u1 = (((struct o4_float *)0xC0B6F10)->v);
                        (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = (int)(((float)t0 / u0) * u1);
                        (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = (-(int)(((float)t0 / u0) * u1));
                        u1 = (80.4241104f) + ((((struct o8_float *)0xC0B6F10)->v)) * (((float)((((struct o22_short *)(a4))->v)) / u0));
                        (((struct o74_float *)(((0x468 + a4) + 0x240)))->v) = u1;
                        t0 = (((struct o22_short *)(a4))->v);
                        (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = (((float)t0 / u0) * (1.0f + 1.0f));
                        (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = (((float)t0 / u0) * (1.0f + 1.0f));
                        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                        t0 = 0x22;
                        if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = 0x0;
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = 0x0;
                            (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = 0x0;
                            (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = 80.4241104f;
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                            t0 = 0x17;
                        }
                        t1 = t0;
                    }
                    t3 = t1;
                }
            }
            t0 = t3;
        } else {
            u0 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2))));
            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 5461.0f));
            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 5461.0f) - 16384);
            u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
            (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = (int)((-u0) * 5461.0f);
            u2 = (80.4241104f) + 200.0f * (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
            (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = u2;
            u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
            u0 = (1.0f + 1.0f) + 1.0f * u1;
            (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
            (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            t1 = 0x20;
            if ((int)((((struct o20_short *)(a4))->v)) < (int)0x8) {
            } else {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x17)) + 0x1);
                t1 = 0x17;
            }
            t0 = t1;
        }
        t2 = t0;
    }
    return t2;
}
