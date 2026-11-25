/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o381E_short { char p[0x381E]; short v; };
struct o3820_short { char p[0x3820]; short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3832_ushort { char p[0x3832]; unsigned short v; };
struct o3838_short { char p[0x3838]; short v; };
struct o383E_short { char p[0x383E]; short v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o3842_ushort { char p[0x3842]; unsigned short v; };
struct o3844_ushort { char p[0x3844]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o426_short { char p[0x426]; short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f444();
int FUN_0c042fe0(void);
int FUN_0c043064(void);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c068170(void);
int FUN_0c068174(void);
int FUN_0c068178(void);
int FUN_0c06817c(int);
int FUN_0c07ca6a(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07d4b4(int);
int FUN_0c07d536(int);
int FUN_0c07dbd8(int, int);
int FUN_0c07dd18(int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e328(int, int);
int FUN_0c07e44c(int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c32ec(int);
int FUN_0c0c3e3a(int);
int FUN_0c0c7f4c(int);
int FUN_0c0c8c90(int);
int FUN_0c0c8d00(int);
int FUN_0c0c8e8c(int);
int FUN_0c0c8f2e(int);
int FUN_0c0c8f70(int);
int FUN_0c122714(int);
int FUN_0c14ea40(int);
int FUN_0c14eaaa(int, int, int, int);
int FUN_0c14eb2c(int);
int FUN_0c15e078(int, int, int, int);
int FUN_0c1614c8(int, int);
int FUN_0c1632e0(int, int, int, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c068230(int a4, int a5, int a6, int a7);
int FUN_0c123010(int a4, int a5, int a6, int a7);
void FUN_0c0c8fd4(int a4);
int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4);
void FUN_0c14eb84(int a4, int a5, int a6, int a7);



/* FUN_0c0c8fd4, written by hand from the original (1,404 bytes; the generated C was 3,064).
   An effect object a4: byte +0x41C is its kind (55, 73, 36, 53, 114, 77 or other = nothing), byte +21 the step of that kind, word +28/+30
   frame counters, floats +40..+48 a position, +80/+92 a velocity. The record of the kind is 52 bytes at 0x0C2738B8 + kind * 52.
   Pool constants, decoded from the words: -2.0f (0xC0000000), 1.3f (0x3FA66666), 17.0f (0x41880000), -17.0f (0xC1880000), 0.5f (0x3F000000). */

#define KIND(o) (*(unsigned char *)((o) + 1052))
#define REC(o) (0xC2738B8 + (unsigned short)KIND(o) * (unsigned short)52)

struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c0c8fd4(int a4)
{
    int stk[6];
    int g;
    int r;
    int path;
    int k;

    g = 0xC532498 + (short)(*(signed char *)(a4 + 1)) * (short)0x3938;
    k = KIND(a4);
    switch (k) {
    case 55:
        if (FUN_0c0c3e3a(a4) != 0) {
            return;
        }
        switch (*(signed char *)(a4 + 21)) {
        case 0:
            FUN_0c0c8c90(a4);
            break;
        case 1:
            FUN_0c0c8d00(a4);
            break;
        case 2:
            FUN_0c0c8e8c(a4);
            break;
        case 3:
            FUN_0c0c8f2e(a4);
            break;
        }
        return;
    case 73:
        r = *(signed char *)(a4 + 21);
        if (r == 0) {
            *(float *)(a4 + 40) = 17.0f;
            *(float *)(a4 + 44) = -17.0f;
            *(float *)(a4 + 48) = 0.0f;
            *(int *)(a4 + 52) = 0;
            *(int *)(a4 + 56) = 0x4000;
            *(int *)(a4 + 60) = 0;
            *(int *)(a4 + 164) = *(int *)(g + 236) + 40;
            *(short *)(a4 + 28) = 180;
            *(short *)(a4 + 298) = 0;
            *(short *)(a4 + 300) = 0;
            *(short *)(a4 + 302) = 0;
            *(short *)(a4 + 30) = 30;
            *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
        } else if (r != 1) {
            return;
        }
        path = 0;
        if (FUN_0c07d2c4(g, a4 + 30) != 0 && *(float *)(g + 352) > 0.0f) {
            if (*(signed char *)(0xC5421F8 + 61) != 2) {
                return;
            }
            *(short *)(a4 + 28) = *(short *)(a4 + 28) - 1;
            if (*(short *)(a4 + 28) > 0) {
                return;
            }
            path = 1;
        }
        math_mat_get_translate(*(int *)(a4 + 164), (int)&stk[3]);
        *(Stk3 *)&stk[0] = *(Stk3 *)(a4 + 40);
        math_mat_transform_vector((int)&stk[0], *(int *)(a4 + 164));
        *(float *)&stk[3] = *(float *)&stk[3] + *(float *)&stk[0];
        *(float *)&stk[4] = *(float *)&stk[4] + *(float *)&stk[1];
        *(float *)&stk[5] = *(float *)&stk[5] + *(float *)&stk[2];
        *(Stk3 *)(a4 + 40) = *(Stk3 *)&stk[3];
        if (path == 0) {
            FUN_0c0c2d56(a4, 6, *(signed char *)(a4 + 1));
            return;
        }
        FUN_0c1632e0(-1, a4 + 40, 17, 0.5f);
        FUN_0c05aae4(209, a4 + 40);
        goto done11;
    case 36:
        FUN_0c07dbd8(g, KIND(a4));
        goto done11;
    case 53:
    case 114:
        if (FUN_0c0c3e3a(a4) != 0) {
            return;
        }
        r = *(signed char *)(a4 + 21);
        if (r == 0) {
            FUN_0c0c2ab6(a4, *(signed char *)(REC(a4) + 19));
            FUN_0c07e328(a4, *(signed char *)(REC(a4) + 14));
            *(short *)(a4 + 298) = 15;
            *(short *)(a4 + 1062) = 0;
            if (k == 53) {
                *(short *)(a4 + 28) = 0;
            }
            *(int *)(a4 + 60) = 0;
            *(float *)(a4 + 72) = 1.29999995f;
            *(float *)(a4 + 68) = 1.29999995f;
            *(float *)(a4 + 64) = 1.29999995f;
            *(signed char *)(a4 + 170) = 1;
            *(signed char *)(a4 + 171) = *(signed char *)(REC(a4) + 22);
            *(float *)(a4 + 80) = 0.0f;
            *(float *)(a4 + 92) = -2.0f;
            *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
        } else if (r != 1) {
            return;
        }
        if (k == 53) {
            FUN_0c0c7f4c(a4);
        }
        break;
    case 77:
        if (*(signed char *)(0xC5421F8 + 63) == 0 && *(signed char *)0xC540F98 != 0) {
            goto done11;
        }
        r = *(signed char *)(a4 + 21);
        if (r == 0) {
            FUN_0c1614c8(a4, 2);
            FUN_0c0c2ab6(a4, *(signed char *)(REC(a4) + 18));
            *(short *)(a4 + 28) = 0;
            *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
        } else if (r == 1) {
            r = *(short *)(a4 + 28);
            if (r == 120 || r == 140 || r == 160) {
                FUN_0c0c8f70(a4);
                FUN_0c059df2(*(signed char *)(a4 + 1), 114);
            }
            *(short *)(a4 + 28) = *(short *)(a4 + 28) + 1;
            if (*(short *)(a4 + 28) >= 170) {
                *(short *)(a4 + 30) = 60;
                *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
            }
        } else if (r == 2) {
            *(short *)(a4 + 30) = *(short *)(a4 + 30) - 1;
            if (*(short *)(a4 + 30) <= 0) {
                goto done11;
            }
            *(signed char *)(a4 + 168) = *(short *)(a4 + 30) % 2;
        }
        break;
    default:
        return;
    }
    /* the end of kinds 53, 114 and 77: advance the motion, then (53, 114) count the time out */
    r = FUN_0c0c2ce4(a4);
    if (r == 2) {
        FUN_0c0c2d56(a4, 3, *(signed char *)(a4 + 1));
        return;
    }
    if (r != 0) {
        *(float *)(a4 + 80) = 0.0f;
        *(float *)(a4 + 92) = -2.0f;
    }
    *(float *)(a4 + 44) = *(float *)(a4 + 44) + *(float *)(a4 + 80);
    *(float *)(a4 + 80) = *(float *)(a4 + 80) + *(float *)(a4 + 92);
    if (k == 77) {
        return;
    }
    if (*(signed char *)(a4 + 305) == 0) {
        *(short *)(a4 + 1062) = *(short *)(a4 + 1062) + 1;
        if (*(short *)(a4 + 1062) > 1200) {
            FUN_0c0c2d56(a4, 11, *(signed char *)(a4 + 1));
        }
    } else {
        FUN_0c0c2d56(a4, 11, *(signed char *)(a4 + 1));
    }
    if (*(short *)(a4 + 1062) > 1080) {
        *(signed char *)(a4 + 168) = *(signed char *)(0xC5421F8 + 104) & 1;
    }
    return;
done11:
    FUN_0c0c2d56(a4, 11, *(signed char *)(a4 + 1));
}
#undef KIND
#undef REC



void FUN_0c14eb84(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    float u0;

    t0 = *(signed char *)(a4 + 0x14);
    if ((unsigned int)t0 >= (unsigned int)0xC) {
        return;
    }
    switch ((t0 << 1)) {
        case 0:
        {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            (((struct o1C_ushort *)(a4))->v) = 0x14;
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)(t0) = 0x1;
            (((struct o6_ushort *)(t0))->v) = (((((struct o6_short *)(t0))->v)) | 0xC00);
            (((struct o90_float *)(t0))->v) = -19.5f;
            (((struct o98_float *)(t0))->v) = 19.5499992f;
            (((struct o94_float *)(t0))->v) = 0.0f;
            (((struct o14_float *)(t0))->v) = 1.0f;
            return;
        }
        case 2:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            nlAddVector3op((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0xA;
                (((struct oA0_uint *)(t0))->v) = 0xFFFFF99A;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 4:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct oA0_int *)(t0))->v)));
            u0 = ((((struct o6C_float *)(t0))->v)) + 10.0f * (math_sin_angle16((((((struct o7C_int *)(t0))->v)) - 16384)));
            (((struct o6C_float *)(t0))->v) = u0;
            u0 = ((((struct o74_float *)(t0))->v)) + 10.0f * (math_cos_angle16((((((struct o7C_int *)(t0))->v)) - 16384)));
            (((struct o74_float *)(t0))->v) = u0;
            if (!(500.0f > ((((struct o74_float *)(t0))->v)))) {
                (((struct o74_float *)(t0))->v) = 500.0f;
            }
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0x1E;
                (((struct o90_float *)(t0))->v) = (-(((((struct o6C_float *)(t0))->v)) / 30.0f));
                (((struct o98_float *)(t0))->v) = (-(((((struct o74_float *)(t0))->v)) / 30.0f));
                (((struct o94_float *)(t0))->v) = 0.0f;
                (((struct oA0_uint *)(t0))->v) = 0xFFFFF889;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 6:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            nlAddVector3op((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct oA0_int *)(t0))->v)));
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0x14;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x6C) = *(struct mv3 *)(0xC202C6C); }
                (((struct o74_float *)(t0))->v) = 0.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x78) = *(struct mv3 *)(0xC202C84); }
                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                t0 = (((struct oCC_int *)(a4))->v);
                (((struct o6_ushort *)(t0))->v) = (((((struct o6_short *)(t0))->v)) | 0x400);
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            }
            FUN_0c14ea40(a4);
    return;
        }
        case 8:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0500000007f);
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) + 0.0500000007f);
            t0 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o14_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                t0 = (((struct oD0_int *)(a4))->v);
                *(unsigned char *)(t0) = 0x1;
                (((struct o94_float *)(t0))->v) = -20.0f;
                (((struct o1C_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 10:
        {
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + ((((struct o94_float *)(t0))->v)));
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o70_float *)(t0))->v) = 0.0f;
                (((struct o1C_ushort *)(a4))->v) = 0x0;
            }
            return;
        }
        case 12:
        {
            t0 = *(signed char *)((0xC202D08 + ((((struct o1C_short *)(a4))->v))));
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) - (float)t0);
            t1 = (((struct oD0_int *)(a4))->v);
            u0 = ((((struct o70_float *)(t1))->v)) + ((1.0f + 1.0f)) * (float)t0;
            (((struct o70_float *)(t1))->v) = u0;
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1);
            if ((float)t0 != 0.0f) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o70_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
                t0 = (((struct oD0_int *)(a4))->v);
                (((struct o70_float *)(t0))->v) = 0.0f;
                (((struct o98_float *)(t0))->v) = -49.9000015f;
                (((struct o1C_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 14:
        {
            t0 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0xA;
            }
            return;
        }
        case 16:
        {
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = (((((struct o74_float *)(t0))->v)) + ((((struct o98_float *)(t0))->v)));
            FUN_0c14eaaa(a4, a5, a6, a7);
            FUN_0c14eb2c(a4);
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o74_float *)(t0))->v) = 0.100000001f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)(t0) = 0x1;
                (((struct o8C_float *)(t0))->v) = 1.0f;
                (((struct o98_float *)(t0))->v) = -0.0166666675f;
                (((struct o6_ushort *)(t0))->v) = (((((struct o6_short *)(t0))->v)) | 0x410);
                (((struct o14_float *)(t0))->v) = 0.0f;
                (((struct o74_float *)(t0))->v) = 41.0f;
                t0 = (((struct oD4_int *)(a4))->v);
                *(unsigned char *)(t0) = 0x1;
                (((struct o6_ushort *)(t0))->v) = (((((struct o6_short *)(t0))->v)) | 0x400);
                (((struct o14_float *)(t0))->v) = 1.0f;
                (((struct o1E_ushort *)(a4))->v) = 0x28;
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            }
            return;
        }
        case 18:
        {
            FUN_0c14eb2c(a4);
            if (((((struct o0_int *)0xC542440)->v)) != -1) {
                (((struct o0_uint *)0xC542440)->v) = (((((struct o0_int *)0xC542440)->v)) + 0x11111111);
                (((struct o4_uint *)0xC542440)->v) = (((((struct o4_int *)0xC542440)->v)) + 0x11111111);
                (((struct o8_uint *)0xC542440)->v) = (((((struct o8_int *)0xC542440)->v)) + 0x11111111);
                if (((((struct o0_int *)0xC542440)->v)) == -1) {
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                    FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, 0x6, (*(int *)0xC4B410C));
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                }
            }
            t0 = (((struct oC8_int *)(a4))->v);
            if (((((struct o14_float *)(t0))->v)) != 1.0f) {
                u0 = (((struct o14_float *)(t0))->v);
                (((struct o14_float *)(t0))->v) = (u0 + 0.0625f);
                if (!(1.0f > (u0 + 0.0625f))) {
                    (((struct o14_float *)(t0))->v) = 1.0f;
                }
            }
            if (((((struct o1E_short *)(a4))->v)) != 0) {
                (((struct o1E_ushort *)(a4))->v) = (((((struct o1E_short *)(a4))->v)) - 1);
            } else {
                t0 = (((struct oD4_int *)(a4))->v);
                if (((((struct o14_float *)(t0))->v)) > 0.0f) {
                    u0 = (((struct o14_float *)(t0))->v);
                    (((struct o14_float *)(t0))->v) = (u0 - 0.0625f);
                    if (!((u0 - 0.0625f) > 0.0f)) {
                        (((struct o14_float *)(t0))->v) = 0.0f;
                    }
                }
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) + ((((struct o98_float *)(t0))->v)));
            if (!(((((struct o8C_float *)(t0))->v)) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                *(unsigned char *)(t0) = 0x0;
            }
            return;
        }
        case 20:
        {
            return;
        }
        default:
        {
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
    }
}

int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t7;
    register int t12;
    register float u15;
    register float u16;
    register float u19;
    register float u20;
    register float u21;
    register float u25;
    register float u27;
    register float t28;
    register int t38;
    register int t40;
    register int t41;
    register int t49;
    register int t51;
    register int t52;
    register int t56;
    register float t58;
    register float u61;
    register float u68;
    register int t84;
    register int t88;
    register int t101;
    register int t104;
    register int t105;
    register int t112;
    register float u113;
    register int t114;
    register float u115;
    register int t116;
    register int t182;
    register int t183;
    register int t192;
    register int t197;
    register float t199;
    register float u202;
    register float u209;
    register int t219;
    register int t224;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t7 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
            t224 = (short)(t7 - 1);
            if ((short)(t7 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t224 = 0x14;
            }
        } else {
            if (t0 == 2) {
                t12 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t12 - 1);
                t224 = (short)(t12 - 1);
                if ((short)(t12 - 1) != 0) {
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x380C)); }
                    (((struct o4_float *)((((int)stk + 4) + 0x8)))->v) = (((((struct o4_float *)((((int)stk + 4) + 0x8)))->v)) + 200.0f);
                    u15 = (((struct o8_float *)(((int)stk + 4)))->v);
                    u16 = (((struct o28_float *)(a4))->v);
                    *(float *)(((int)stk + 8)) = (((((struct o4_float *)((((int)stk + 4) + 0x8)))->v)) - ((((struct o2C_float *)(a4))->v)));
                    u19 = (((struct o30_float *)(a4))->v);
                    u20 = (((struct o8_float *)((((int)stk + 4) + 0x8)))->v);
                    u21 = (u15 - u16);
                    if ((u15 - u16) == 0.0f) {
                        u21 = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    u25 = (u20 - u19);
                    if ((u20 - u19) == 0.0f) {
                        u25 = 9.99999997e-07f;
                    }
                    u27 = (u25 * u25);
                    u27 = u27 + u21 * u21;
                    t28 = math_signed_sqrt(u27);
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-t28) / (*(float *)(((int)stk + 8))))));
                    if (0.0f > (*(float *)(((int)stk + 8)))) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t38 = ((int)((int)(nlRand()) % (int)0xA));
                    *(int *)((int)stk + 0) = t38;
                    t40 = (int)((int)(nlRand()) % (int)0xA);
                    t41 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t41 + (int)(((float)((t40 + t38) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t41 + (int)(((float)((t40 + t38) + 0x50) * 65536.0f) / 360.0f)));
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-u25) / u21)));
                    if (0.0f > u21) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t49 = ((int)((int)(nlRand()) % (int)0xA));
                    *(int *)((int)stk + 0) = t49;
                    t51 = (int)((int)(nlRand()) % (int)0xA);
                    t52 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t52 + (int)(((float)((t51 + t49) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t52 + (int)(((float)((t51 + t49) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x3C)) = (int)(float)((int)((int)(nlRand()) % (int)0x168));
                    t56 = (int)((int)(nlRand()) % (int)0x14);
                    t58 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                    *(float *)(((int)stk + 0)) = ((float)(t56 + 0x3C) * t58);
                    u61 = ((float)(t56 + 0x3C) * t58);
                    (((struct o4C_float *)(a4))->v) = (u61 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    (((struct o50_float *)(a4))->v) = ((float)(t56 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    u68 = ((float)(t56 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(a4))->v) = (u68 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t224 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    t84 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t84 - 1);
                    t224 = (short)(t84 - 1);
                    if ((short)(t84 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        t224 = 0x14;
                    }
                } else {
                    if (t0 == 4) {
                        t88 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t88 - 1);
                        if ((short)(t88 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = 0x7;
                        }
                        if (((((struct o404_int *)(a4))->v)) != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o14_uchar *)(a4))->v) = 0x5;
                        }
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                        t224 = 0x30;
                    } else {
                        if (t0 == 5) {
                            t101 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t101 - 1);
                            t224 = (short)(t101 - 1);
                            if ((short)(t101 - 1) == 0) {
                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
                                t104 = (((struct oC4_int *)(a4))->v);
                                (((struct o20_float *)(t104))->v) = 1.0f;
                                (((struct o1C_float *)(t104))->v) = 1.0f;
                                (((struct o18_float *)(t104))->v) = 1.0f;
                                (((struct o14_float *)(t104))->v) = 1.0f;
                                t105 = (((struct oC8_int *)(a4))->v);
                                (((struct o20_float *)(t105))->v) = 1.0f;
                                (((struct o1C_float *)(t105))->v) = 1.0f;
                                (((struct o18_float *)(t105))->v) = 1.0f;
                                (((struct o14_float *)(t105))->v) = 1.0f;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o14_uchar *)(a4))->v) = 0x6;
                                t224 = 0x14;
                            }
                        } else {
                            if (t0 == 6) {
                                t112 = (((struct oC4_int *)(a4))->v);
                                u113 = (((struct o20_float *)(t112))->v);
                                (((struct o20_float *)(t112))->v) = (u113 - 0.0500000007f);
                                (((struct o1C_float *)(t112))->v) = (u113 - 0.0500000007f);
                                (((struct o18_float *)(t112))->v) = (u113 - 0.0500000007f);
                                (((struct o14_float *)(t112))->v) = (u113 - 0.0500000007f);
                                t114 = (((struct oC8_int *)(a4))->v);
                                u115 = (((struct o20_float *)(t114))->v);
                                (((struct o20_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o1C_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o18_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o14_float *)(t114))->v) = (u115 - 0.0500000007f);
                                t116 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t116 - 1);
                                t224 = (short)(t116 - 1);
                                if ((short)(t116 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = 0x7;
                                    t224 = 0x14;
                                }
                            } else {
                                t224 = t0;
                                if (t0 == 7) {
                                    t224 = (FUN_0c03f346(a4, 0x3C, a6, a7));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        t182 = *(int *)((a4 + 0x10));
        t183 = *(int *)((t182 + 0x10));
        *(volatile float *)((t182 + 0x28));
        *(volatile float *)((t183 + 0x28));
        *(volatile float *)((t183 + 0x2C));
        *(volatile float *)((t182 + 0x2C));
        *(volatile float *)((t183 + 0x30));
        *(volatile float *)((t182 + 0x30));
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFC000;
        t192 = ((int)((int)(nlRand()) % (int)0xA));
        *(int *)((int)stk + 0) = t192;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)((((int)((int)(nlRand()) % (int)0xA)) + t192) - 10) * 65536.0f) / 360.0f));
        t197 = (int)((int)(nlRand()) % (int)0x14);
        t199 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        *(float *)(((int)stk + 0)) = ((float)(t197 + 0x3C) * t199);
        u202 = ((float)(t197 + 0x3C) * t199);
        (((struct o4C_float *)(a4))->v) = (u202 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o50_float *)(a4))->v) = ((float)(t197 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        u209 = ((float)(t197 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u209 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        FUN_0c059e60((*(int *)((a4 + 0x10))), 0x24);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t219 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t219 - 1);
        t224 = (short)(t219 - 1);
        if ((short)(t219 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t224 = 0x14;
        }
    }
    return t224;
}

