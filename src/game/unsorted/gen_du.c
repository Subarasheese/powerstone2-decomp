/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3840_short { char p[0x3840]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05ab04(int);
int FUN_0c065a90(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c15d494(int, int, int, int, int, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
void FUN_0c153a4c(int a4, int a5, int a6, int a7);
int FUN_0c0f6454(int a4, int a5, int a6, int a7);

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c153a4c.txt) */
void FUN_0c153a4c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
            return;
        }
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        FUN_0c03744a(t0, 0x0, 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t0 = (((struct oC8_int *)(a4))->v);
        FUN_0c03744a(t0, 0x0, 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t0 = (((struct oCC_int *)(a4))->v);
        FUN_0c03744a(t0, 0x5, 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t0 = (((struct oD0_int *)(a4))->v);
        FUN_0c03744a(t0, 0x4, 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t0 = (((struct oD4_int *)(a4))->v);
        FUN_0c03744a(t0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x374E))), 0xE, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        (((struct o8C_float *)(t0))->v) = 0.699999988f;
        (((struct o88_float *)(t0))->v) = 0.699999988f;
        (((struct o84_float *)(t0))->v) = 0.699999988f;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
        t0 = (((struct oD8_int *)(a4))->v);
        FUN_0c03744a(t0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x374F))), 0xE, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1F;
        (((struct o8C_float *)(t0))->v) = 0.699999988f;
        (((struct o88_float *)(t0))->v) = 0.699999988f;
        (((struct o84_float *)(t0))->v) = 0.699999988f;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
        t0 = (((struct oDC_int *)(a4))->v);
        FUN_0c03744a(t0, 0x0, 0x49, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x21F;
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        t1 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
        switch (t1) {
        case 0:
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.100000001f;
            (((struct o20_float *)(t0))->v) = 0.100000001f;
            break;
        case 1:
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.899999976f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            break;
        case 2:
            (((struct o18_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.400000006f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            break;
        case 3:
            (((struct o18_float *)(t0))->v) = 0.0f;
            (((struct o1C_float *)(t0))->v) = 0.699999988f;
            (((struct o20_float *)(t0))->v) = 0.25f;
            break;
        }
        t0 = (((struct oE0_int *)(a4))->v);
        FUN_0c03744a(t0, (*(signed char *)((a4 + 0x2))), 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x23F;
        (((struct o8C_float *)(t0))->v) = 0.300000012f;
        (((struct o88_float *)(t0))->v) = 0.300000012f;
        (((struct o84_float *)(t0))->v) = 0.300000012f;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 30.0f);
        t1 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
        switch (t1) {
        case 0:
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.800000012f;
            (((struct o20_float *)(t0))->v) = 0.800000012f;
            break;
        case 1:
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o20_float *)(t0))->v) = 0.699999988f;
            break;
        case 2:
            (((struct o18_float *)(t0))->v) = 0.699999988f;
            (((struct o1C_float *)(t0))->v) = 0.800000012f;
            (((struct o20_float *)(t0))->v) = 1.0f;
            break;
        case 3:
            (((struct o18_float *)(t0))->v) = 0.699999988f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o20_float *)(t0))->v) = 0.800000012f;
            break;
        }
        t0 = (((struct oE4_int *)(a4))->v);
        FUN_0c03744a(t0, 0x5, 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o8C_float *)(t0))->v) = 0.300000012f;
        (((struct o88_float *)(t0))->v) = 0.300000012f;
        (((struct o84_float *)(t0))->v) = 0.300000012f;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 30.0f);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if (((((struct o160_float *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))->v)) == 0.0f) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x666);
        t0 = (((struct oDC_int *)(a4))->v);
        u0 = math_sin_angle16((*(short *)((a4 + 0x1E))));
        u1 = ((u0 + 1.0f) * ((math_sin_angle16((*(short *)((a4 + 0x1E))))) + 1.0f));
        u0 = ((u1 * 0.25f) / 4.0f);
        (((struct o8C_float *)(t0))->v) = (u0 + 0.5f);
        (((struct o88_float *)(t0))->v) = (u0 + 0.5f);
        (((struct o84_float *)(t0))->v) = (u0 + 0.5f);
        t0 = (((struct o3840_short *)((*(int *)((a4 + 0x10)))))->v);
        if ((int)((int)((int)t0 / (int)0x78)) >= (int)0xA) {
            t1 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x1));
            if ((*(short *)((0xC542868 + ((((t1 << 2) + t1) << 2) << 1)))) != 0) {
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0500000007f);
                if (((((struct o58_float *)(a4))->v)) > 0.75f) {
                    (((struct o58_float *)(a4))->v) = 0.75f;
                }
            } else {
                u0 = (((struct o58_float *)(a4))->v);
                (((struct o58_float *)(a4))->v) = (u0 - 0.00499999989f);
                if (0.5f > (u0 - 0.00499999989f)) {
                    (((struct o58_float *)(a4))->v) = 0.5f;
                }
            }
            t1 = (((struct oE0_int *)(a4))->v);
            FUN_0c03744a(t1, 0x4, 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0x23F;
            u0 = ((((struct o70_float *)(t1))->v));
            u0 = u0 + 40.0f * ((((((struct o58_float *)(a4))->v)) + 0.5f));
            (((struct o70_float *)(t1))->v) = u0;
            (((struct o84_float *)(t1))->v) = ((((struct o58_float *)(a4))->v));
            (((struct o88_float *)(t1))->v) = ((((struct o58_float *)(a4))->v));
            t2 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
            switch (t2) {
            case 0:
                (((struct o18_float *)(t1))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o1C_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o20_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                break;
            case 1:
                (((struct o18_float *)(t1))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.100000024f);
                u0 = -u0;
                (((struct o1C_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o20_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                break;
            case 2:
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o18_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.400000006f);
                u0 = -u0;
                (((struct o1C_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                (((struct o20_float *)(t1))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                break;
            case 3:
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o18_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.300000012f);
                u0 = -u0;
                (((struct o1C_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.550000012f);
                u0 = -u0;
                (((struct o20_float *)(t1))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                break;
            }
        } else {
            if ((int)((int)((int)t0 % (int)0x78)) >= (int)0x3C) {
                t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x1));
                if ((*(short *)((0xC542868 + ((((t0 << 2) + t0) << 2) << 1)))) != 0) {
                    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) + 0.0500000007f);
                    if (((((struct o58_float *)(a4))->v)) > 0.75f) {
                        (((struct o58_float *)(a4))->v) = 0.75f;
                    }
                } else {
                    u0 = (((struct o58_float *)(a4))->v);
                    (((struct o58_float *)(a4))->v) = (u0 - 0.00499999989f);
                    if (0.5f > (u0 - 0.00499999989f)) {
                        (((struct o58_float *)(a4))->v) = 0.5f;
                    }
                }
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x4, 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x23F;
                u0 = ((((struct o70_float *)(t0))->v));
                u0 = u0 + 40.0f * ((((((struct o58_float *)(a4))->v)) + 0.5f));
                (((struct o70_float *)(t0))->v) = u0;
                (((struct o84_float *)(t0))->v) = ((((struct o58_float *)(a4))->v));
                (((struct o88_float *)(t0))->v) = ((((struct o58_float *)(a4))->v));
                t1 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
                switch (t1) {
                case 0:
                    (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    break;
                case 1:
                    (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.100000024f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    break;
                case 2:
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.400000006f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    (((struct o20_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    break;
                case 3:
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.300000012f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.550000012f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    break;
                }
            } else {
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, (((int)((int)((((struct o3840_short *)((*(int *)((a4 + 0x10)))))->v)) / (int)0x78)) + 0x1A), ((((struct o4_int *)0xC4B40CC)->v)));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x23F;
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 45.0f);
                (((struct o84_float *)(t0))->v) = 8.0f;
                (((struct o88_float *)(t0))->v) = 8.0f;
                t1 = (int)((int)((((struct o3840_short *)((*(int *)((a4 + 0x10)))))->v)) / (int)0x78);
                if ((t1 != 0) && (t1 != 1)) {
                    if ((t1 != 2) && (t1 != 3)) {
                        if ((t1 != 4) && (t1 != 5)) {
                            if ((t1 != 6) && (t1 != 7)) {
                                if ((t1 == 8) || (t1 == 9)) {
                                    (((struct o18_float *)(t0))->v) = 0.0f;
                                    (((struct o1C_float *)(t0))->v) = 0.0f;
                                    (((struct o20_float *)(t0))->v) = 1.0f;
                                }
                            } else {
                                (((struct o18_float *)(t0))->v) = 0.0f;
                                (((struct o1C_float *)(t0))->v) = 1.0f;
                                (((struct o20_float *)(t0))->v) = 0.0f;
                            }
                        } else {
                            (((struct o18_float *)(t0))->v) = 1.0f;
                            (((struct o1C_float *)(t0))->v) = 1.0f;
                            (((struct o20_float *)(t0))->v) = 0.0f;
                        }
                    } else {
                        (((struct o18_float *)(t0))->v) = 1.0f;
                        (((struct o1C_float *)(t0))->v) = 0.5f;
                        (((struct o20_float *)(t0))->v) = 0.0f;
                    }
                } else {
                    (((struct o18_float *)(t0))->v) = 1.0f;
                    (((struct o1C_float *)(t0))->v) = 0.0f;
                    (((struct o20_float *)(t0))->v) = 0.0f;
                }
            }
        }
        *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x0;
    } else {
        *(unsigned short *)((a4 + 0x1E)) = 0xFFFFC000;
        t0 = (((struct oDC_int *)(a4))->v);
        u0 = (((struct o160_float *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))->v);
        (((struct o8C_float *)(t0))->v) = ((u0 * 0.5f) / 1000.0f);
        (((struct o84_float *)(t0))->v) = ((u0 * 0.5f) / 1000.0f);
        t0 = (((struct oDC_int *)(a4))->v);
        u0 = math_sin_angle16((*(short *)((a4 + 0x1E))));
        u1 = ((u0 + 1.0f) * ((math_sin_angle16((*(short *)((a4 + 0x1E))))) + 1.0f));
        (((struct o88_float *)(t0))->v) = ((((u1 * 0.25f) / 4.0f)) + 0.5f);
        if ((*(signed char *)((0x3720 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))) == 0) {
            t0 = (((struct oE0_int *)(a4))->v);
            FUN_0c03744a(t0, (*(signed char *)((a4 + 0x2))), 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0x23F;
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 30.0f);
            (((struct o84_float *)(t0))->v) = 0.300000012f;
            (((struct o88_float *)(t0))->v) = 0.300000012f;
            t1 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
            switch (t1) {
            case 0:
                (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                break;
            case 1:
                (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.100000024f);
                u0 = -u0;
                (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                break;
            case 2:
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.400000006f);
                u0 = -u0;
                (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                (((struct o20_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                break;
            case 3:
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                u0 = -u0;
                (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.300000012f);
                u0 = -u0;
                (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.550000012f);
                u0 = -u0;
                (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                break;
            }
            *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x1;
        } else {
            if ((*(signed char *)0xC54235E) == 0) {
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x11, 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x23F;
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 30.0f);
                (((struct o84_float *)(t0))->v) = 0.300000012f;
                (((struct o88_float *)(t0))->v) = 0.300000012f;
                t1 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
                switch (t1) {
                case 0:
                    (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    break;
                case 1:
                    (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.100000024f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    break;
                case 2:
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.400000006f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    (((struct o20_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    break;
                case 3:
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.300000012f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.550000012f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    break;
                }
            } else {
                t0 = (((struct oE0_int *)(a4))->v);
                FUN_0c03744a(t0, 0x10, 0x48, ((((struct o0_int *)0xC4B40CC)->v)));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x23F;
                (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 30.0f);
                (((struct o84_float *)(t0))->v) = 0.300000012f;
                (((struct o88_float *)(t0))->v) = 0.300000012f;
                t1 = *(signed char *)((0x3719 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)));
                switch (t1) {
                case 0:
                    (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    break;
                case 1:
                    (((struct o18_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.100000024f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    break;
                case 2:
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.400000006f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    (((struct o20_float *)(t0))->v) = ((((((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.0f) / (1.0f + 1.0f))) + 1.0f);
                    break;
                case 3:
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.699999988f);
                    u0 = -u0;
                    (((struct o18_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.699999988f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.300000012f);
                    u0 = -u0;
                    (((struct o1C_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 1.0f);
                    u0 = (((math_sin_angle16(((((struct o20_short *)(a4))->v)))) + 1.0f) * 0.550000012f);
                    u0 = -u0;
                    (((struct o20_float *)(t0))->v) = ((u0 / (1.0f + 1.0f)) + 0.800000012f);
                    break;
                }
            }
            *(unsigned char *)((((((struct oE4_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    t0 = *(signed char *)((0x3759 + (*(int *)((a4 + 0x10)))));
    if (t0 != 1) {
        if (t0 == 2) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, ((int)((int)((int)((int)(unsigned short)(*(short *)((a4 + 0x1C))) / (int)0x3)) % (int)0x3)), 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0x3F;
            (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
            (((struct o8C_float *)(t0))->v) = 0.5f;
            (((struct o88_float *)(t0))->v) = 0.5f;
            (((struct o84_float *)(t0))->v) = 0.5f;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 0.0f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = (((struct oD0_int *)(a4))->v);
            t1 = *(short *)((a4 + 0x1C));
            t2 = (((struct o0_int *)0xC4B40CC)->v);
            t3 = (unsigned short)t1;
            if ((int)(unsigned short)t1 < 0) {
                t3 = ((unsigned short)t1 + 0x7);
            }
            t1 = ((~(((~(((t3 >> 1) >> 1) >> 1)) + 0x1) & 0x1)) + 0x1);
            if ((int)(((t3 >> 1) >> 1) >> 1) >= 0) {
                t1 = ((((t3 >> 1) >> 1) >> 1) & 0x1);
            }
            FUN_0c03744a(t0, (t1 + 0x3), 0x59, t2);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            *(unsigned short *)((t0 + 0x6)) = 0x3F;
            (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
            (((struct o8C_float *)(t0))->v) = 0.5f;
            (((struct o88_float *)(t0))->v) = 0.5f;
            (((struct o84_float *)(t0))->v) = 0.5f;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 0.0f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    } else {
        t0 = (((struct oC4_int *)(a4))->v);
        FUN_0c03744a(t0, ((int)((int)((int)((int)(unsigned short)(*(short *)((a4 + 0x1C))) / (int)0x3)) % (int)0x3)), 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t0 = (((struct oC8_int *)(a4))->v);
        FUN_0c03744a(t0, ((int)((int)((int)((int)(unsigned short)(*(short *)((a4 + 0x1C))) / (int)0x3)) % (int)0x3)), 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t0 = (((struct oCC_int *)(a4))->v);
        FUN_0c03744a(t0, 0x5, 0x59, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
        t1 = *(short *)((a4 + 0x1C));
        t2 = (unsigned short)t1;
        if ((int)(unsigned short)t1 < 0) {
            t2 = ((unsigned short)t1 + 0x7);
        }
        t1 = ((~(((~(((t2 >> 1) >> 1) >> 1)) + 0x1) & 0x1)) + 0x1);
        if ((int)(((t2 >> 1) >> 1) >> 1) >= 0) {
            t1 = ((((t2 >> 1) >> 1) >> 1) & 0x1);
        }
        t2 = 0xFFFFF1C8;
        if (t1 != 0) {
            t2 = 0xE38;
        }
        (((struct o80_uint *)(t0))->v) = t2;
        t0 = (((struct oD0_int *)(a4))->v);
        t1 = *(short *)((a4 + 0x1C));
        t2 = (((struct o0_int *)0xC4B40CC)->v);
        t3 = (unsigned short)t1;
        if ((int)(unsigned short)t1 < 0) {
            t3 = ((unsigned short)t1 + 0x7);
        }
        t1 = ((~(((~(((t3 >> 1) >> 1) >> 1)) + 0x1) & 0x1)) + 0x1);
        if ((int)(((t3 >> 1) >> 1) >> 1) >= 0) {
            t1 = ((((t3 >> 1) >> 1) >> 1) & 0x1);
        }
        FUN_0c03744a(t0, (t1 + 0x3), 0x59, t2);
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x3F;
        (((struct o68_uint *)(t0))->v) = (((((struct oE0_int *)(a4))->v)) + 0x28);
        (((struct o8C_float *)(t0))->v) = 0.5f;
        (((struct o88_float *)(t0))->v) = 0.5f;
        (((struct o84_float *)(t0))->v) = 0.5f;
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 100.0f);
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 200.0f);
    }
    if ((*(signed char *)((0x374D + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))) == 2) {
        t0 = (((struct oD4_int *)(a4))->v);
        FUN_0c037498(t0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x374E))), 0xE, ((((struct o0_int *)0xC4B40CC)->v)));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        (((struct o6C_float *)(t0))->v) = (30.0f * (math_sin_angle16(((((struct o20_short *)(a4))->v)))));
        (((struct o74_float *)(t0))->v) = (30.0f * (math_cos_angle16(((((struct o20_short *)(a4))->v)))));
        t0 = (((struct oD8_int *)(a4))->v);
        FUN_0c037498(t0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x374F))), 0xE, ((((struct o0_int *)0xC4B40CC)->v)));
        (((struct o6C_float *)(t0))->v) = (-((math_sin_angle16(((((struct o20_short *)(a4))->v)))) * 30.0f));
        (((struct o74_float *)(t0))->v) = (-((math_cos_angle16(((((struct o20_short *)(a4))->v)))) * 30.0f));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
    } else {
        if ((*(signed char *)((0x374D + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))) == 1) {
            t0 = (((struct oD4_int *)(a4))->v);
            FUN_0c037498(t0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x374E))), 0xE, ((((struct o0_int *)0xC4B40CC)->v)));
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (30.0f * (math_sin_angle16(((((struct o20_short *)(a4))->v)))));
            (((struct o74_float *)(t0))->v) = (30.0f * (math_cos_angle16(((((struct o20_short *)(a4))->v)))));
        } else {
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t0 = (((struct oDC_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 0x444);
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((0xA8 + (*(int *)((a4 + 0x10))))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) + 250.0f));
    if (((((struct o3840_short *)((*(int *)((a4 + 0x10)))))->v)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(signed char *)((0x3714 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2));
    if ((t0 != 12) && (t0 != 13)) {
        return;
    }
    ((int (*)(int))(FUN_0c03f346))(a4);
    return;
}

int FUN_0c0f6454(int a4, int a5, int a6, int a7)
{
    int stk[8];

    int R3;
    float F1;
    float F2;
    float F3;
    float F4;
    int T_;
    int v0_0;
    int v0_1;
    int v0_10;
    int v0_11;
    int v0_12;
    int v0_2;
    int v0_3;
    int v0_4;
    int v0_5;
    int v0_6;
    int v0_7;
    int v0_8;
    int v0_9;
    float w0_0;
    float w0_1;
    float w0_2;
    float w0_3;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_9 = a4;
    v0_10 = a5;
    v0_11 = a6;
    v0_6 = a7;
    v0_12 = *(signed char *)((v0_9 + 0x14));
    v0_5 = (v0_12);
    v0_7 = (0x3938);
    v0_4 = (0x0);
    v0_1 = (0x16C);
    v0_3 = (0x1);
    v0_0 = (v0_9);
    v0_2 = (0x5B0);
    v0_8 = (0xC532498);
    w0_3 = (0.0599999987f);
    w0_2 = (0.0500000007f);
    w0_1 = (1.0f);
    w0_0 = (0.0f);
    if ((v0_12 == 0)) goto L_C0F64AC;
    if ((v0_5 != 1)) goto L_C0F6498;
    v0_2 = FUN_0c065a90(v0_0);
    R1004 = v0_2;
    if ((v0_2 == 0)) goto L_C0F67E4;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    v0_2 = (v0_4);
    L_C0F67DE:;
    if (!(((int)v0_2 < (int)0x4))) goto L_C0F67E4;
    if (((((int)v0_3 << (int)v0_2) & (R1004)) == 0)) goto L_C0F67DC;
    if (((*(signed char *)((0x3715 + ((v0_2 * v0_7) + v0_8)))) == 23)) goto L_C0F67DC;
    FUN_0c085cac(((v0_2 * v0_7) + v0_8), 0x17, 0x7, v0_6);
    goto L_C0F67DC;
    L_C0F67E4:;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    L_C0F67F0:;
    v0_0 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) - v0_1);
    v0_5 = (0x80);
    L_C0F6AF8:;
    return v0_5;
    L_C0F67DC:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C0F67DE;
    L_C0F6498:;
    if ((v0_5 != 2)) goto L_C0F64A0;
    v0_1 = FUN_0c065a90(v0_0);
    R1004 = v0_1;
    if ((v0_1 == 0)) goto L_C0F6866;
    v0_1 = (v0_4);
    L_C0F6860:;
    if (!(((int)v0_1 < (int)0x4))) goto L_C0F6866;
    if (((((int)v0_3 << (int)v0_1) & (R1004)) == 0)) goto L_C0F685E;
    v0_9 = (((v0_1 * v0_7) + v0_8));
    if (((*(signed char *)((((v0_1 * v0_7) + v0_8) + 0x3715))) == 23)) goto L_C0F685E;
    FUN_0c085cac(v0_9, 0x17, 0x7, v0_6);
    FUN_0c05ab04(0xCB);
    goto L_C0F685E;
    L_C0F6866:;
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C0F68DA;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned char *)((((((struct oCC_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = w0_1;
    (((struct o88_float *)(v0_1))->v) = w0_1;
    (((struct o84_float *)(v0_1))->v) = w0_1;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = w0_0;
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    (((struct o18_float *)(v0_1))->v) = w0_0;
    *(unsigned char *)((((((struct oD8_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_1 = (((struct oD8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = 1.04999995f;
    (((struct o88_float *)(v0_1))->v) = 1.04999995f;
    (((struct o84_float *)(v0_1))->v) = 1.04999995f;
    v0_1 = (((struct oD8_int *)(v0_0))->v);
    *(unsigned short *)((v0_1 + 0x6)) = ((*(short *)((v0_1 + 0x6))) | 0x200);
    v0_1 = (((struct oD8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = w0_0;
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    (((struct o18_float *)(v0_1))->v) = w0_0;
    FUN_0c05ab04(0xCB);
    L_C0F6926:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + v0_2);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - v0_2);
    v0_5 = (0x80);
    v0_1 = (((((struct o80_int *)(((((struct oC4_int *)(v0_0))->v))))->v)));
    v0_0 = ((*(int *)(((0xC4 + v0_0) + 0x8))));
    L_C0F6AEE:;
    *(unsigned int *)((v0_0 + v0_5)) = v0_1;
    goto L_C0F6AF8;
    L_C0F68DA:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + w0_2);
    if ((w0_1 > ((((struct o20_float *)(((((struct oCC_int *)(v0_0))->v))))->v)))) goto L_C0F68FA;
    (((struct o20_float *)(((((struct oCC_int *)(v0_0))->v))))->v) = w0_1;
    L_C0F68FA:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    w0_0 = (((struct o20_float *)(v0_1))->v);
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    (((struct o18_float *)(v0_1))->v) = w0_0;
    v0_1 = (((struct oD8_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = (((((struct o20_float *)(v0_1))->v)) + w0_3);
    v0_1 = (((struct oD8_int *)(v0_0))->v);
    w0_0 = (((struct o20_float *)(v0_1))->v);
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    (((struct o18_float *)(v0_1))->v) = w0_0;
    goto L_C0F6926;
    L_C0F685E:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C0F6860;
    L_C0F64A0:;
    if ((v0_5 != 3)) goto L_C0F64A8;
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C0F6980;
    if ((v0_5 == 1)) goto L_C0F6994;
    if ((v0_5 == 2)) goto L_C0F6A32;
    if ((v0_5 == 3)) goto L_C0F6A72;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C0F6ACA:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + v0_2);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) - v0_2);
    v0_5 = (0x80);
    v0_1 = (((((struct o80_int *)(((((struct oC4_int *)(v0_0))->v))))->v)));
    v0_0 = ((*(int *)(((0xC4 + v0_0) + 0x8))));
    goto L_C0F6AEE;
    L_C0F6A72:;
    v0_1 = (((struct oD0_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_2);
    v0_1 = (((struct oD0_int *)(v0_0))->v);
    w0_0 = (((struct o8C_float *)(v0_1))->v);
    (((struct o88_float *)(v0_1))->v) = w0_0;
    (((struct o84_float *)(v0_1))->v) = w0_0;
    if ((((((struct o8C_float *)(((((struct oD0_int *)(v0_0))->v))))->v)) > 0.0f)) goto L_C0F6AA4;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C0F6AA4:;
    v0_1 = (((struct oD0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_1))->v) = (((((struct o80_int *)(v0_1))->v)) + v0_2);
    goto L_C0F6ACA;
    L_C0F6A32:;
    v0_3 = (((struct oD0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_3))->v) = (((((struct o20_float *)(v0_3))->v)) + w0_2);
    v0_3 = (((struct oD0_int *)(v0_0))->v);
    w0_0 = (((struct o20_float *)(v0_3))->v);
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    (((struct o18_float *)(v0_3))->v) = w0_0;
    if ((w0_1 > ((((struct o20_float *)(((((struct oD0_int *)(v0_0))->v))))->v)))) goto L_C0F6A62;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C0F6A62:;
    v0_3 = (((struct oD0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_3))->v) = (((((struct o80_int *)(v0_3))->v)) + v0_1);
    goto L_C0F6ACA;
    L_C0F6994:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) - w0_2);
    if ((((((struct o8C_float *)(((((struct oCC_int *)(v0_0))->v))))->v)) > 0.0f)) goto L_C0F69F4;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o48_float *)(v0_0))->v) = w0_0;
    *(unsigned char *)((((((struct oD0_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_1 = (((struct oD0_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_1))->v) = w0_1;
    (((struct o88_float *)(v0_1))->v) = w0_1;
    (((struct o84_float *)(v0_1))->v) = w0_1;
    v0_1 = (((struct oD0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_1))->v) = w0_0;
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    (((struct o18_float *)(v0_1))->v) = w0_0;
    v0_1 = *(int *)(((0xC4 + v0_0) + 0x4));
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned char *)(((*(int *)(((0xC4 + v0_0) + 0x8))) + 0x0)) = v0_4;
    *(unsigned char *)((v0_1 + 0x0)) = v0_4;
    *(unsigned char *)((v0_3 + 0x0)) = v0_4;
    *(unsigned char *)((((((struct oD4_int *)(v0_0))->v)) + 0x0)) = v0_4;
    L_C0F69F4:;
    v0_1 = *(int *)(((0xC4 + v0_0) + 0x8));
    v0_3 = *(int *)(((0xC4 + v0_0) + 0x4));
    w0_0 = (((struct o8C_float *)(v0_1))->v);
    v0_4 = (((struct oC4_int *)(v0_0))->v);
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x10));
    (((struct o88_float *)(v0_1))->v) = w0_0;
    (((struct o84_float *)(v0_1))->v) = w0_0;
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    (((struct o84_float *)(v0_3))->v) = w0_0;
    (((struct o8C_float *)(v0_4))->v) = w0_0;
    (((struct o88_float *)(v0_4))->v) = w0_0;
    (((struct o84_float *)(v0_4))->v) = w0_0;
    (((struct o8C_float *)(v0_5))->v) = w0_0;
    (((struct o88_float *)(v0_5))->v) = w0_0;
    (((struct o84_float *)(v0_5))->v) = w0_0;
    goto L_C0F6ACA;
    L_C0F6980:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o12E_ushort *)(v0_0))->v) = v0_4;
    (((struct oAA_uchar *)(v0_0))->v) = v0_4;
    (((struct oAB_uchar *)(v0_0))->v) = v0_4;
    goto L_C0F6994;
    L_C0F64A8:;
    v0_5 = ((FUN_0c03f346(v0_0, v0_10, v0_11, v0_6)));
    goto L_C0F6AF8;
    L_C0F64AC:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F64C8;
    if ((v0_5 == 1)) goto L_C0F64F0;
    if ((v0_5 == 2)) goto L_C0F65A8;
    if ((v0_5 != 3)) goto L_C0F64C4;
    v0_2 = (((struct oD4_int *)(v0_0))->v);
    (((struct o14_float *)(v0_2))->v) = (((((struct o14_float *)(v0_2))->v)) + w0_3);
    if ((w0_1 > ((((struct o14_float *)(((((struct oD4_int *)(v0_0))->v))))->v)))) goto L_C0F66E4;
    (((struct o14_float *)(((((struct oD4_int *)(v0_0))->v))))->v) = w0_1;
    L_C0F66E4:;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = (((((struct o20_float *)(v0_2))->v)) - w0_2);
    if ((((((struct o20_float *)(((((struct oCC_int *)(v0_0))->v))))->v)) > 0.0f)) goto L_C0F6762;
    *(unsigned char *)((((((struct oCC_int *)(v0_0))->v)) + 0x0)) = v0_4;
    (((struct o20_float *)(((((struct oCC_int *)(v0_0))->v))))->v) = w0_0;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    (((struct o12E_ushort *)(v0_0))->v) = (((((struct o12E_short *)(v0_0))->v)) | 0xF);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_0 + 0x38)));
    *(unsigned int *)(((int)stk + 28)) = v0_4;
    *(unsigned int *)(((int)stk + 20)) = v0_4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((v0_0 + 0x28)); }
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 200.0f);
    FUN_0c15d494(0x0, (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), 0xFFFFFFFF, 0.5f);
    L_C0F6762:;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    w0_0 = (((struct o20_float *)(v0_2))->v);
    (((struct o1C_float *)(v0_2))->v) = w0_0;
    (((struct o18_float *)(v0_2))->v) = w0_0;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) - v0_1);
    v0_0 = (((struct oCC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + v0_1);
    v0_5 = (0x80);
    goto L_C0F6AF8;
    L_C0F64C4:;
    goto L_C0F6AF8;
    L_C0F65A8:;
    v0_5 = (0xD0);
    if (((*(signed char *)((((((struct oD0_int *)(v0_0))->v)) + 0x0))) == 0)) goto L_C0F6604;
    v0_2 = *(int *)((v0_0 + v0_5));
    (((struct o20_float *)(v0_2))->v) = (((((struct o20_float *)(v0_2))->v)) - w0_2);
    if ((((((struct o20_float *)(((((struct oD0_int *)(v0_0))->v))))->v)) > 0.0f)) goto L_C0F65D8;
    (((struct o20_float *)(((((struct oD0_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned char *)((((((struct oD0_int *)(v0_0))->v)) + 0x0)) = v0_4;
    L_C0F65D8:;
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    w0_3 = (((struct o20_float *)(v0_2))->v);
    (((struct o1C_float *)(v0_2))->v) = w0_3;
    (((struct o18_float *)(v0_2))->v) = w0_3;
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_2);
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    w0_3 = (((struct o8C_float *)(v0_2))->v);
    (((struct o88_float *)(v0_2))->v) = w0_3;
    (((struct o84_float *)(v0_2))->v) = w0_3;
    L_C0F6604:;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_2);
    if ((w0_1 > ((((struct o8C_float *)(((((struct oCC_int *)(v0_0))->v))))->v)))) goto L_C0F6660;
    (((struct o8C_float *)(((((struct oCC_int *)(v0_0))->v))))->v) = w0_1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    *(unsigned short *)((v0_2 + 0x6)) = ((*(short *)((v0_2 + 0x6))) | 0x200);
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = w0_1;
    (((struct o1C_float *)(v0_2))->v) = w0_1;
    (((struct o18_float *)(v0_2))->v) = w0_1;
    *(unsigned char *)((((((struct oD4_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_2 = (((struct oD4_int *)(v0_0))->v);
    *(unsigned short *)((v0_2 + 0x6)) = ((*(short *)((v0_2 + 0x6))) | 0x400);
    (((struct o14_float *)(((((struct oD4_int *)(v0_0))->v))))->v) = w0_0;
    L_C0F6660:;
    v0_2 = *(int *)(((0xC4 + v0_0) + 0x8));
    v0_3 = *(int *)(((0xC4 + v0_0) + 0x4));
    w0_0 = (((struct o8C_float *)(v0_2))->v);
    v0_4 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_2))->v) = w0_0;
    (((struct o84_float *)(v0_2))->v) = w0_0;
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    (((struct o84_float *)(v0_3))->v) = w0_0;
    (((struct o8C_float *)(v0_4))->v) = w0_0;
    (((struct o88_float *)(v0_4))->v) = w0_0;
    (((struct o84_float *)(v0_4))->v) = w0_0;
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_2))->v) = (((((struct o80_int *)(v0_2))->v)) + v0_1);
    goto L_C0F67F0;
    L_C0F64F0:;
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + w0_2);
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    w0_2 = (((struct o8C_float *)(v0_2))->v);
    (((struct o88_float *)(v0_2))->v) = w0_2;
    (((struct o84_float *)(v0_2))->v) = w0_2;
    if ((w0_1 > ((((struct o8C_float *)(((((struct oD0_int *)(v0_0))->v))))->v)))) goto L_C0F6578;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    *(unsigned short *)((v0_2 + 0x6)) = ((*(short *)((v0_2 + 0x6))) | 0x200);
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    (((struct o20_float *)(v0_2))->v) = w0_1;
    (((struct o1C_float *)(v0_2))->v) = w0_1;
    (((struct o18_float *)(v0_2))->v) = w0_1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_0;
    (((struct o88_float *)(v0_2))->v) = w0_0;
    (((struct o84_float *)(v0_2))->v) = w0_0;
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_2 = (((struct oC8_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_0;
    (((struct o88_float *)(v0_2))->v) = w0_0;
    (((struct o84_float *)(v0_2))->v) = w0_0;
    *(unsigned char *)((((((struct oCC_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_2 = (((struct oCC_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_0;
    (((struct o88_float *)(v0_2))->v) = w0_0;
    (((struct o84_float *)(v0_2))->v) = w0_0;
    L_C0F6578:;
    v0_0 = (((struct oD0_int *)(v0_0))->v);
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + v0_1);
    v0_5 = (0x80);
    goto L_C0F6AF8;
    L_C0F64C8:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    *(unsigned char *)((((((struct oD0_int *)(v0_0))->v)) + 0x0)) = v0_3;
    v0_2 = (((struct oD0_int *)(v0_0))->v);
    (((struct o8C_float *)(v0_2))->v) = w0_0;
    (((struct o88_float *)(v0_2))->v) = w0_0;
    (((struct o84_float *)(v0_2))->v) = w0_0;
    FUN_0c05ab04(0xC9);
    goto L_C0F64F0;
}
