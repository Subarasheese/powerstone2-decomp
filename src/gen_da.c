/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o118_int { char p[0x118]; int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o377C_int { char p[0x377C]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
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
int FUN_0c037bf6(int);
int FUN_0c038362(int);
extern int FUN_0c03f346();
int FUN_0c042fe0(void);
int FUN_0c04307c(void);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b4b20(void);
int FUN_0c0b507a(int, int, int);
int FUN_0c0b54c8(int);
int FUN_0c0b69c0(int, int, int, int);
int FUN_0c0bc25e(void);
int FUN_0c14af80(int);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c153a4c(int a4, int a5, int a6, int a7);
int FUN_0c0b562a(int a4, int a5, int a6, int a7);
int FUN_0c0bedb2(int a4, int a5, int a6);

int FUN_0c153a4c(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
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
                t0 = (((struct oD8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                t1 = t0;
            }
            t0 = (((struct oDC_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 0x444);
            (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((0xA8 + (*(int *)((a4 + 0x10))))));
            *(volatile int *)((a4 + 0x10));
            FUN_0c187798(t1);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) + 250.0f));
            if (((((struct o3840_short *)((*(int *)((a4 + 0x10)))))->v)) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            if ((*(signed char *)((0x3714 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            t0 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2));
            if ((t0 != 12) && (t0 != 13)) {
                return t0;
            }
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
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
        t0 = (((struct oD8_int *)(a4))->v);
        *(unsigned char *)((t0 + 0x0)) = 0x0;
        t1 = t0;
    }
    t0 = (((struct oDC_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0xB6);
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 0x444);
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((0xA8 + (*(int *)((a4 + 0x10))))));
    *(volatile int *)((a4 + 0x10));
    FUN_0c187798(t1);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x1))) + 250.0f));
    if (((((struct o3840_short *)((*(int *)((a4 + 0x10)))))->v)) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(signed char *)((0x3714 + (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498)))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2));
    if ((t0 != 12) && (t0 != 13)) {
        return t0;
    }
    return ((int (*)(int))(FUN_0c03f346))(a4);
}

int FUN_0c0b562a(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t18;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t29;
    register int t31;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register float u93;
    register float t106;
    register float t123;
    register int t139;
    register int t140;
    register int t143;
    register int t144;
    register int t145;
    register float u191;
    register float t204;
    register float t221;
    register int t237;
    register int t238;
    register int t241;
    register int t246;
    register int t248;
    register int t249;
    register int t251;
    register int t252;
    register int t253;
    register int t256;
    register int t257;
    register int t261;
    register int t262;
    register int t263;
    register int t82;
    register int t180;

    t0 = *(signed char *)((a4 + 0x3715));
    if (t0 != 7) {
        if (t0 != 19) {
            if (t0 != 20) {
                if (t0 != 23) {
                    *(unsigned int *)(((int)stk + 16)) = (0x38F8 + a4);
                    t1 = *(signed char *)((a4 + 0x16));
                    if (t1 != 0) {
                        if (t1 != 1) {
                            return t1;
                        }
                        t2 = FUN_0c037bf6(a4);
                        if ((int)(*(signed char *)0xC54098D) >= (int)0x5) {
                            t4 = FUN_0c042fe0();
                            if (t4 != 0) {
                                t5 = FUN_0c04307c();
                                if (t5 != 0) {
                                    FUN_0c0b507a(a4, 0x7, 0x8);
                                    return FUN_0c038362(a4);
                                }
                                t7 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
                                if ((int)(short)(t7 - 1) <= 0) {
                                    t8 = FUN_0c179ac0();
                                    t9 = ((~(((~t8) + 0x1) & 0x7)) + 0x1);
                                    if ((int)t8 >= 0) {
                                        t9 = (t8 & 0x7);
                                    }
                                    if (t9 != 8) {
                                        if (t9 == 4) {
                                            if ((*(int *)(((*(int *)(((int)stk + 16))) + 0x2C))) != 0) {
                                                return FUN_0c0b507a(a4, 0x7, 0x4);
                                            }
                                            return t9;
                                        }
                                        return FUN_0c0b507a(a4, 0x7, t9);
                                    }
                                    return t9;
                                }
                                return FUN_0c038362(a4);
                            }
                            return t4;
                        }
                        return t2;
                    }
                    *(int *)((int)stk + 8) = 0x0;
                    *(int *)((int)stk + 4) = 0x0;
                    t18 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t18;
                    *(int *)((int)stk + 0) = t18;
                    FUN_0c07e79c(a4, (*(int *)(((int)stk + 12))), 0x0, 0x0, t18, 0x0, 0x0);
                    t21 = *(int *)(((0x118 + a4) + 0x4));
                    t22 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t21))->v) = 1.0f;
                    (((struct o9C_float *)(t21))->v) = 1.0f;
                    (((struct oA0_float *)(t22))->v) = 1.0f;
                    (((struct o9C_float *)(t22))->v) = 1.0f;
                    t23 = *(int *)(((0x118 + a4) + 0x4));
                    t24 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t23))->v) = 1.0f;
                    (((struct o98_float *)(t24))->v) = 1.0f;
                    (((struct o94_float *)(t23))->v) = 1.0f;
                    (((struct o94_float *)(t24))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC1C6E38 + ((FUN_0c0b4b20()) << 2))));
                    (((struct o12C_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t29 = FUN_0c037bf6(a4);
                    if ((int)(*(signed char *)0xC54098D) >= (int)0x5) {
                        t31 = FUN_0c042fe0();
                        if (t31 != 0) {
                            t32 = FUN_0c04307c();
                            if (t32 != 0) {
                                FUN_0c0b507a(a4, 0x7, 0x8);
                                return FUN_0c038362(a4);
                            }
                            t34 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
                            if ((int)(short)(t34 - 1) <= 0) {
                                t35 = FUN_0c179ac0();
                                t36 = ((~(((~t35) + 0x1) & 0x7)) + 0x1);
                                if ((int)t35 >= 0) {
                                    t36 = (t35 & 0x7);
                                }
                                if (t36 != 8) {
                                    if (t36 == 4) {
                                        if ((*(int *)(((*(int *)(((int)stk + 16))) + 0x2C))) != 0) {
                                            return FUN_0c0b507a(a4, 0x7, 0x4);
                                        }
                                        return t36;
                                    }
                                    return FUN_0c0b507a(a4, 0x7, t36);
                                }
                                return t36;
                            }
                            return FUN_0c038362(a4);
                        }
                        return t31;
                    }
                    return t29;
                }
                t44 = *(signed char *)((a4 + 0x16));
                if (t44 != 0) {
                    if (t44 != 1) {
                        return t44;
                    }
                    (((struct o374B_uchar *)(a4))->v) = 0x1;
                    t45 = *(short *)((a4 + 0x1C));
                    if ((int)t45 < 0) {
                        *(int *)((int)stk + 24) = a4;
                        t46 = *(signed char *)((a4 + 0x17));
                        switch (t46) {
                        case 0:
                            (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = 0x0;
                            (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x0;
                            (((struct o22_ushort *)(a4))->v) = 0x3C;
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t123 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(t123 * 16384.0f));
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(t123 * 16384.0f) - 16384);
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            if ((int)((((struct o20_short *)(a4))->v)) >= (int)0x4) {
                                FUN_0c059e60(a4, 0x25);
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            }
                            break;
                        case 1:
                            t106 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(t106 * 16384.0f));
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(t106 * 16384.0f) - 16384);
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            if ((int)((((struct o20_short *)(a4))->v)) >= (int)0x4) {
                                FUN_0c059e60(a4, 0x25);
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            }
                            break;
                        case 2:
                            u93 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2))));
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u93 * 5461.0f));
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u93 * 5461.0f) - 16384);
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                                (((struct o22_ushort *)(a4))->v) = 0x0;
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                                (((struct oBC_float *)(a4))->v) = 1.0f;
                                (((struct oB8_float *)(a4))->v) = 1.0f;
                                (((struct oB4_float *)(a4))->v) = 1.0f;
                            }
                            break;
                        default:
                            if (t46 == 3) {
                                t47 = FUN_0c037bf6(a4);
                                if ((unsigned char)t47 == 0) {
                                    return FUN_0c038362(a4);
                                }
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                return 0x17;
                            }
                            if (t46 == 4) {
                                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.020833334f);
                                t82 = 0xB4;
                                if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                                    (((struct oB4_float *)(a4))->v) = 0.0f;
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    t82 = 0x17;
                                }
                            } else {
                                if (t46 == 5) {
                                    (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.013888889f);
                                    t82 = 0xB8;
                                    if (!(((((struct oB8_float *)(a4))->v)) > 0.0f)) {
                                        (((struct oB8_float *)(a4))->v) = 0.0f;
                                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                        t82 = 0x17;
                                    }
                                } else {
                                    t82 = t46;
                                    if (t46 == 6) {
                                        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.00625000009f);
                                        t82 = 0xBC;
                                        if (!(((((struct oBC_float *)(a4))->v)) > 0.400000006f)) {
                                            (((struct oBC_float *)(a4))->v) = 0.400000006f;
                                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                            t82 = 0x17;
                                        }
                                    }
                                }
                            }
                            return t82;
                        }
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = (t45 - 1);
                    }
                } else {
                    *(int *)((int)stk + 12) = 0x4;
                    *(int *)((int)stk + 8) = 0x6;
                    t139 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 16)) = t139;
                    t140 = t139;
                    *(int *)((int)stk + 4) = t140;
                    FUN_0c07e79c(a4, t139, 0x6, 0x4, t140, 0x6, 0x4);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0xC6;
                    (((struct o445_uchar *)(a4))->v) = 0x0;
                    (((struct o3830_ushort *)(a4))->v) = 0x0;
                    (((struct o12E_ushort *)(a4))->v) = 0x0;
                    (((struct o374B_uchar *)(a4))->v) = 0x1;
                    t143 = *(short *)((a4 + 0x1C));
                    if ((int)t143 < 0) {
                        *(int *)((int)stk + 24) = a4;
                        t144 = *(signed char *)((a4 + 0x17));
                        switch (t144) {
                        case 0:
                            (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = 0x0;
                            (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = 0x0;
                            (((struct o20_ushort *)(a4))->v) = 0x0;
                            (((struct o22_ushort *)(a4))->v) = 0x3C;
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t221 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(t221 * 16384.0f));
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(t221 * 16384.0f) - 16384);
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            if ((int)((((struct o20_short *)(a4))->v)) >= (int)0x4) {
                                FUN_0c059e60(a4, 0x25);
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            }
                            break;
                        case 1:
                            t204 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(t204 * 16384.0f));
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(t204 * 16384.0f) - 16384);
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            if ((int)((((struct o20_short *)(a4))->v)) >= (int)0x4) {
                                FUN_0c059e60(a4, 0x25);
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            }
                            break;
                        case 2:
                            u191 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2))));
                            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u191 * 5461.0f));
                            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u191 * 5461.0f) - 16384);
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                            if ((int)((((struct o22_short *)(a4))->v)) < 0) {
                                (((struct o22_ushort *)(a4))->v) = 0x0;
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                                (((struct oBC_float *)(a4))->v) = 1.0f;
                                (((struct oB8_float *)(a4))->v) = 1.0f;
                                (((struct oB4_float *)(a4))->v) = 1.0f;
                            }
                            break;
                        default:
                            if (t144 == 3) {
                                t145 = FUN_0c037bf6(a4);
                                if ((unsigned char)t145 == 0) {
                                    return FUN_0c038362(a4);
                                }
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                return 0x17;
                            }
                            if (t144 == 4) {
                                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.020833334f);
                                t180 = 0xB4;
                                if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                                    (((struct oB4_float *)(a4))->v) = 0.0f;
                                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                    t180 = 0x17;
                                }
                            } else {
                                if (t144 == 5) {
                                    (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - 0.013888889f);
                                    t180 = 0xB8;
                                    if (!(((((struct oB8_float *)(a4))->v)) > 0.0f)) {
                                        (((struct oB8_float *)(a4))->v) = 0.0f;
                                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                        t180 = 0x17;
                                    }
                                } else {
                                    t180 = t144;
                                    if (t144 == 6) {
                                        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.00625000009f);
                                        t180 = 0xBC;
                                        if (!(((((struct oBC_float *)(a4))->v)) > 0.400000006f)) {
                                            (((struct oBC_float *)(a4))->v) = 0.400000006f;
                                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                            t180 = 0x17;
                                        }
                                    }
                                }
                            }
                            return t180;
                        }
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = (t143 - 1);
                    }
                }
            } else {
                t237 = *(signed char *)((a4 + 0x16));
                if (t237 != 0) {
                    if (t237 != 1) {
                        return t237;
                    }
                    (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x2;
                    t238 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                } else {
                    *(int *)((int)stk + 8) = 0x0;
                    *(int *)((int)stk + 4) = 0x0;
                    t241 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t241;
                    *(int *)((int)stk + 0) = t241;
                    FUN_0c07e79c(a4, (*(int *)(((int)stk + 12))), 0x0, 0x0, t241, 0x0, 0x0);
                    FUN_0c059e60(a4, 0xB);
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o1A_uchar *)((0x38F8 + a4)))->v) = 0x2;
                    t246 = ((int (*)(void))(FUN_0c187798))();
                }
            }
            FUN_0c037bf6(a4);
            return FUN_0c038362(a4);
        }
        t248 = *(signed char *)((a4 + 0x16));
        if (t248 != 0) {
            if (t248 != 1) {
                if (t248 != 2) {
                    return t248;
                }
                t249 = FUN_0c037bf6(a4);
                if ((unsigned char)t249 != 0) {
                    FUN_0c0b507a(a4, 0x0, 0x0);
                    return FUN_0c0b54c8(a4);
                }
                return FUN_0c038362(a4);
            }
            t251 = FUN_0c037bf6(a4);
            if ((unsigned char)t251 != 0) {
                *(int *)((int)stk + 12) = 0x1;
                *(int *)((int)stk + 8) = 0x6;
                t252 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 16)) = t252;
                t253 = t252;
                *(int *)((int)stk + 4) = t253;
                FUN_0c07e79c(a4, t252, 0x6, 0x1, t253, 0x6, 0x1);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return 0x16;
            }
            return FUN_0c038362(a4);
        }
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x6;
        t256 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t256;
        t257 = t256;
        *(int *)((int)stk + 4) = t257;
        FUN_0c07e79c(a4, t256, 0x6, 0x0, t257, 0x6, 0x0);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c14af80(a4);
        t261 = FUN_0c037bf6(a4);
        if ((unsigned char)t261 != 0) {
            *(int *)((int)stk + 12) = 0x1;
            *(int *)((int)stk + 8) = 0x6;
            t262 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 16)) = t262;
            t263 = t262;
            *(int *)((int)stk + 4) = t263;
            FUN_0c07e79c(a4, t262, 0x6, 0x1, t263, 0x6, 0x1);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        return FUN_0c038362(a4);
    }
    return FUN_0c0b69c0(a4, a5, a6, a7);
}

int FUN_0c0bedb2(int a4, int a5, int a6)
{
    int stk[6];

    register int R10;
    register int R12;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BEE22:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BEDE8;
    if (((*(int *)(((int)stk + 12))) != 1)) goto L_C0BEE8A;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 8));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x0;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    L_C0BFAA6:;
    FUN_0c0bc25e();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return 0xC472460;
    L_C0BEE8A:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BEF08:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BEEC0;
    if (((*(int *)(((int)stk + 12))) != 1)) goto L_C0BEF74;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o377C_int *)((*(int *)(((int)stk + 20)))))->v));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 20));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    goto L_C0BFAA6;
    L_C0BEF74:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BEFFA:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BEFB0;
    if (((*(int *)(((int)stk + 12))) != 2)) goto L_C0BF062;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 8));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    goto L_C0BFAA6;
    L_C0BF062:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    L_C0BF0A6:;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    if (((int)v0_0 < (int)0x4)) goto L_C0BF06C;
    if (!(((*(int *)(((int)stk + 12))) == 1))) goto L_C0BF224;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    goto L_C0BF12E;
    L_C0BF224:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    L_C0BF29A:;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    if (((int)v0_0 < (int)0x4)) goto L_C0BF260;
    if (!(((*(int *)(((int)stk + 12))) == 2))) goto L_C0BF3F8;
    if (((*(signed char *)0xC542361) == 0)) goto L_C0BF2BA;
    goto L_C0BF3F8;
    L_C0BF3F8:;
    if (((*(signed char *)0xC5429B4) == 0)) goto L_C0BF404;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BF81E:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BF7DC;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C0BF830;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    L_C0BF9A8:;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    if (((int)v0_0 < (int)0x4)) goto L_C0BF968;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C0BF9BC;
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)0xC472462);
    L_C0BFAFC:;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (((*(int *)(((int)stk + 0))) * 0x3938) + 0xC532498);
    w0_0 = *(float *)((((*(int *)(((int)stk + 0))) * 0x3938) + 0xC5324C0));
    *(float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471B38)) = w0_0;
    w0_0 = *(float *)((0xC5324C4 + ((*(int *)(((int)stk + 0))) * 0x3938)));
    *(float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471B3C)) = w0_0;
    w0_0 = *(float *)((0xC5324C8 + ((*(int *)(((int)stk + 0))) * 0x3938)));
    *(float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471B40)) = w0_0;
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    v0_0 = FUN_0c0bc25e();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return v0_0;
    L_C0BF9BC:;
    *(unsigned int *)(((int)stk + 4)) = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)(((int)stk + 12)))));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BFA48:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BF9F0;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 8));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    goto L_C0BFAA6;
    L_C0BF9F0:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BFA42;
    v0_0 = (0x3938);
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC5325F8))) > 0.0f))) goto L_C0BFA42;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC535BB1))) != (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x3719))))) goto L_C0BFA42;
    if (((*(int *)(((int)stk + 12))) != (*(int *)(((int)stk + 4))))) goto L_C0BFA3C;
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
    L_C0BFA3C:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BFA42:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BFA48;
    L_C0BF968:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF9A4;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BF9A4;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BB1))) != (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x3719))))) goto L_C0BF9A4;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF9A4:;
    v0_0 = (((*(int *)(((int)stk + 16))) + 0x1));
    goto L_C0BF9A8;
    L_C0BF830:;
    *(unsigned int *)(((int)stk + 4)) = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)(((int)stk + 12)))));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BF8CC:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BF874;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 8));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    goto L_C0BFAA6;
    L_C0BF874:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF8C6;
    v0_0 = (0x3938);
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC5325F8))) > 0.0f))) goto L_C0BF8C6;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC535BB1))) == (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x3719))))) goto L_C0BF8C6;
    if (((*(int *)(((int)stk + 12))) != (*(int *)(((int)stk + 4))))) goto L_C0BF8C0;
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
    L_C0BF8C0:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF8C6:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BF8CC;
    L_C0BF7DC:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF818;
    v0_0 = (0x3938);
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC5325F8))) > 0.0f))) goto L_C0BF818;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC535BB1))) == (*(signed char *)(((*(int *)(((int)stk + 20))) + 0x3719))))) goto L_C0BF818;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF818:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BF81E;
    L_C0BF404:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BF462:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BF444;
    v0_0 = *(signed char *)0xC472462;
    v0_1 = ((unsigned char)v0_0);
    if (((unsigned char)v0_0 == 0)) goto L_C0BF490;
    if ((v0_1 != 1)) goto L_C0BF47C;
    if (((*(int *)(((int)stk + 12))) != 4)) goto L_C0BF570;
    v0_0 = (0x3);
    L_C0BF708:;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    goto L_C0BFAFC;
    L_C0BF570:;
    if (((*(int *)(((int)stk + 12))) != 3)) goto L_C0BF600;
    v0_1 = (0x160);
    v0_0 = (0xC532498);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC5325F8) > 0.0f))) goto L_C0BF5E4;
    v0_2 = (0xC53D040);
    if ((!((*(float *)((0xC53D040 + v0_1))) > w0_0))) goto L_C0BF5AE;
    v0_1 = (0x3720);
    if (((*(signed char *)((v0_2 + 0x3720))) != 0)) goto L_C0BF59A;
    *(unsigned int *)(((int)stk + 0)) = 0x3;
    goto L_C0BFAFC;
    L_C0BF59A:;
    if (((*(signed char *)((v0_0 + v0_1))) == 0)) goto L_C0BF5A8;
    *(unsigned int *)(((int)stk + 0)) = 0x3;
    goto L_C0BFAFC;
    L_C0BF5A8:;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    goto L_C0BFAFC;
    L_C0BF5AE:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC53CE28) != 0)) goto L_C0BF5BC;
    v0_2 = (0x2);
    L_C0BF614:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF5BC:;
    if (((*(signed char *)((0xC532498 + v0_1))) == 0)) goto L_C0BF5C8;
    v0_0 = (0x2);
    L_C0BF5CA:;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    goto L_C0BFAFC;
    L_C0BF5C8:;
    v0_0 = (0x0);
    goto L_C0BF5CA;
    L_C0BF5E4:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC540760) == 0)) goto L_C0BF622;
    if (((*(signed char *)((0xC539708 + v0_1))) == 0)) goto L_C0BF5FA;
    v0_2 = (0x3);
    L_C0BF5FC:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF5FA:;
    v0_2 = (0x2);
    goto L_C0BF5FC;
    L_C0BF622:;
    *(unsigned int *)(((int)stk + 0)) = 0x3;
    goto L_C0BFAFC;
    L_C0BF600:;
    if (((*(int *)(((int)stk + 12))) != 2)) goto L_C0BF630;
    v0_1 = (0x160);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC5325F8) > 0.0f))) goto L_C0BF61A;
    v0_2 = (0x0);
    goto L_C0BF614;
    L_C0BF61A:;
    if ((!((*(float *)((0xC53D040 + v0_1))) > w0_0))) goto L_C0BF62A;
    goto L_C0BF622;
    L_C0BF62A:;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    goto L_C0BFAFC;
    L_C0BF630:;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    goto L_C0BFAFC;
    L_C0BF47C:;
    if ((v0_1 != 2)) goto L_C0BF484;
    if (((*(int *)(((int)stk + 12))) != 4)) goto L_C0BF640;
    v0_0 = (0x0);
    goto L_C0BF708;
    L_C0BF640:;
    if (((*(int *)(((int)stk + 12))) != 3)) goto L_C0BF6CA;
    v0_1 = (0x160);
    v0_0 = (0xC53D040);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC53D1A0) > 0.0f))) goto L_C0BF6B4;
    v0_2 = (0xC532498);
    if ((!((*(float *)((0xC532498 + v0_1))) > w0_0))) goto L_C0BF67E;
    v0_1 = (0x3720);
    if (((*(signed char *)((v0_2 + 0x3720))) != 0)) goto L_C0BF66A;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    goto L_C0BFAFC;
    L_C0BF66A:;
    if (((*(signed char *)((v0_0 + v0_1))) == 0)) goto L_C0BF678;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    goto L_C0BFAFC;
    L_C0BF678:;
    *(unsigned int *)(((int)stk + 0)) = 0x3;
    goto L_C0BFAFC;
    L_C0BF67E:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC5394F0) != 0)) goto L_C0BF68C;
    v0_2 = (0x1);
    L_C0BF6DE:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF68C:;
    if (((*(signed char *)((0xC53D040 + v0_1))) == 0)) goto L_C0BF698;
    v0_0 = (0x1);
    L_C0BF69A:;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    goto L_C0BFAFC;
    L_C0BF698:;
    v0_0 = (0x3);
    goto L_C0BF69A;
    L_C0BF6B4:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC535BB8) == 0)) goto L_C0BF6EC;
    *(unsigned int *)(((int)stk + 0)) = ((((*(signed char *)((0xC535DD0 + v0_1))) == 0)) ? 1 : 0);
    goto L_C0BFAFC;
    L_C0BF6EC:;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    goto L_C0BFAFC;
    L_C0BF6CA:;
    if (((*(int *)(((int)stk + 12))) != 2)) goto L_C0BF6FA;
    v0_1 = (0x160);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC53D1A0) > 0.0f))) goto L_C0BF6E4;
    v0_2 = (0x3);
    goto L_C0BF6DE;
    L_C0BF6E4:;
    if ((!((*(float *)((0xC532498 + v0_1))) > w0_0))) goto L_C0BF6F4;
    goto L_C0BF6EC;
    L_C0BF6F4:;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    goto L_C0BFAFC;
    L_C0BF6FA:;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    goto L_C0BFAFC;
    L_C0BF484:;
    if ((v0_1 != 3)) goto L_C0BF48C;
    if (((*(int *)(((int)stk + 12))) != 4)) goto L_C0BF70C;
    v0_0 = (0x1);
    goto L_C0BF708;
    L_C0BF70C:;
    if (((*(int *)(((int)stk + 12))) != 3)) goto L_C0BF79C;
    v0_1 = (0x160);
    v0_0 = (0xC539708);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC539868) > 0.0f))) goto L_C0BF780;
    v0_2 = (0xC535DD0);
    if ((!((*(float *)((0xC535DD0 + v0_1))) > w0_0))) goto L_C0BF74A;
    v0_1 = (0x3720);
    if (((*(signed char *)((v0_2 + 0x3720))) != 0)) goto L_C0BF736;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    goto L_C0BFAFC;
    L_C0BF736:;
    if (((*(signed char *)((v0_0 + v0_1))) == 0)) goto L_C0BF744;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    goto L_C0BFAFC;
    L_C0BF744:;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    goto L_C0BFAFC;
    L_C0BF74A:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC535BB8) != 0)) goto L_C0BF758;
    v0_2 = (0x0);
    L_C0BF7B0:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF758:;
    if (((*(signed char *)((0xC539708 + v0_1))) == 0)) goto L_C0BF764;
    v0_0 = (0x0);
    L_C0BF766:;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    goto L_C0BFAFC;
    L_C0BF764:;
    v0_0 = (0x2);
    goto L_C0BF766;
    L_C0BF780:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC5394F0) == 0)) goto L_C0BF7BE;
    if (((*(signed char *)((0xC532498 + v0_1))) == 0)) goto L_C0BF796;
    v0_2 = (0x1);
    L_C0BF798:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF796:;
    v0_2 = (0x0);
    goto L_C0BF798;
    L_C0BF7BE:;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    goto L_C0BFAFC;
    L_C0BF79C:;
    if (((*(int *)(((int)stk + 12))) != 2)) goto L_C0BF7CC;
    v0_1 = (0x160);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC539868) > 0.0f))) goto L_C0BF7B6;
    v0_2 = (0x2);
    goto L_C0BF7B0;
    L_C0BF7B6:;
    if ((!((*(float *)((0xC535DD0 + v0_1))) > w0_0))) goto L_C0BF7C6;
    goto L_C0BF7BE;
    L_C0BF7C6:;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    goto L_C0BFAFC;
    L_C0BF7CC:;
    *(unsigned int *)(((int)stk + 0)) = 0x3;
    goto L_C0BFAFC;
    L_C0BF48C:;
    goto L_C0BFAFC;
    L_C0BF490:;
    if (((*(int *)(((int)stk + 12))) != 4)) goto L_C0BF49A;
    v0_0 = (0x2);
    goto L_C0BF708;
    L_C0BF49A:;
    if (((*(int *)(((int)stk + 12))) != 3)) goto L_C0BF530;
    v0_1 = (0x160);
    v0_0 = (0xC535DD0);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC535F30) > 0.0f))) goto L_C0BF514;
    v0_2 = (0xC539708);
    if ((!((*(float *)((0xC539708 + v0_1))) > w0_0))) goto L_C0BF4D8;
    v0_1 = (0x3720);
    if (((*(signed char *)((v0_2 + 0x3720))) != 0)) goto L_C0BF4C4;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    goto L_C0BFAFC;
    L_C0BF4C4:;
    if (((*(signed char *)((v0_0 + v0_1))) == 0)) goto L_C0BF4D2;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    goto L_C0BFAFC;
    L_C0BF4D2:;
    *(unsigned int *)(((int)stk + 0)) = 0x1;
    goto L_C0BFAFC;
    L_C0BF4D8:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC540760) != 0)) goto L_C0BF4E6;
    v0_2 = (0x3);
    L_C0BF544:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF4E6:;
    if (((*(signed char *)((0xC535DD0 + v0_1))) == 0)) goto L_C0BF4F2;
    v0_0 = (0x3);
    L_C0BF4F4:;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    goto L_C0BFAFC;
    L_C0BF4F2:;
    v0_0 = (0x1);
    goto L_C0BF4F4;
    L_C0BF514:;
    v0_1 = (0x3720);
    if (((*(signed char *)0xC53CE28) == 0)) goto L_C0BF552;
    if (((*(signed char *)((0xC53D040 + v0_1))) == 0)) goto L_C0BF52A;
    v0_2 = (0x2);
    L_C0BF52C:;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    goto L_C0BFAFC;
    L_C0BF52A:;
    v0_2 = (0x3);
    goto L_C0BF52C;
    L_C0BF552:;
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    goto L_C0BFAFC;
    L_C0BF530:;
    if (((*(int *)(((int)stk + 12))) != 2)) goto L_C0BF560;
    v0_1 = (0x160);
    w0_0 = (0.0f);
    if ((!((*(float *)0xC535F30) > 0.0f))) goto L_C0BF54A;
    v0_2 = (0x1);
    goto L_C0BF544;
    L_C0BF54A:;
    if ((!((*(float *)((0xC539708 + v0_1))) > w0_0))) goto L_C0BF55A;
    goto L_C0BF552;
    L_C0BF55A:;
    *(unsigned int *)(((int)stk + 0)) = 0x3;
    goto L_C0BFAFC;
    L_C0BF560:;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    goto L_C0BFAFC;
    L_C0BF444:;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC5325F8))) > 0.0f))) goto L_C0BF45C;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF45C:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BF462;
    L_C0BF2BA:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    v0_0 = (0x0);
    L_C0BF2FE:;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    if (((int)v0_0 < (int)0x4)) goto L_C0BF2C4;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_C0BF3F8;
    *(unsigned int *)(((int)stk + 4)) = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)(((int)stk + 12)))));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BF396:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BF344;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 8));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    goto L_C0BFAA6;
    L_C0BF344:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF390;
    v0_0 = (0x3938);
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC5325F8))) > 0.0f))) goto L_C0BF390;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC535BB8))) != 0)) goto L_C0BF390;
    if (((*(int *)(((int)stk + 12))) != (*(int *)(((int)stk + 4))))) goto L_C0BF38A;
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
    L_C0BF38A:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF390:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BF396;
    L_C0BF2C4:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF2FA;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BF2FA;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BB8))) != 0)) goto L_C0BF2FA;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF2FA:;
    v0_0 = (((*(int *)(((int)stk + 16))) + 0x1));
    goto L_C0BF2FE;
    L_C0BF260:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF296;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BF296;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BB8))) == 0)) goto L_C0BF296;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF296:;
    v0_0 = (((*(int *)(((int)stk + 16))) + 0x1));
    goto L_C0BF29A;
    L_C0BF12E:;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    if (((int)v0_0 < (int)0x4)) goto L_C0BF0F4;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_C0BF224;
    *(unsigned int *)(((int)stk + 4)) = ((int)((int)(FUN_0c179ac0()) % (int)(*(int *)(((int)stk + 12)))));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    L_C0BF1C2:;
    if (((int)(*(int *)(((int)stk + 16))) < (int)0x4)) goto L_C0BF170;
    *(unsigned int *)(((0xC471B44 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = (*(int *)(((int)stk + 8)));
    *(volatile signed char *)0xC472462;
    *(volatile int *)(((int)stk + 8));
    v0_0 = ((int (*)(int, int, int))(FUN_0c187798))(v0_1, v0_2, v0_3);
    *(unsigned short *)(((0xC471AEE + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = 0x1;
    *(unsigned int *)(((0xC471AD4 + ((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264)) + 0x0)) = ((((struct o0_int *)0xC47245C)->v));
    goto L_C0BFAA6;
    L_C0BF170:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF1BC;
    v0_0 = (0x3938);
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC5325F8))) > 0.0f))) goto L_C0BF1BC;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC535BB8))) != 0)) goto L_C0BF1BC;
    if (((*(int *)(((int)stk + 12))) != (*(int *)(((int)stk + 4))))) goto L_C0BF1B6;
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
    L_C0BF1B6:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF1BC:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BF1C2;
    L_C0BF0F4:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF12A;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BF12A;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BB8))) != 0)) goto L_C0BF12A;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF12A:;
    v0_0 = (((*(int *)(((int)stk + 16))) + 0x1));
    goto L_C0BF12E;
    L_C0BF06C:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BF0A2;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BF0A2;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BB8))) == 0)) goto L_C0BF0A2;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    L_C0BF0A2:;
    v0_0 = (((*(int *)(((int)stk + 16))) + 0x1));
    goto L_C0BF0A6;
    L_C0BEFB0:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BEFF4;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BEFF4;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    v0_0 = (0xC532498);
    if (((*(int *)(((int)stk + 20))) == (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498))) goto L_C0BEFF4;
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 16))) * 0x3938) + v0_0);
    L_C0BEFF4:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BEFFA;
    L_C0BEEC0:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BEF02;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BEF02;
    v0_0 = (0x3938);
    if (((*(signed char *)((0xC53249A + ((*(int *)(((int)stk + 16))) * 0x3938)))) == 12)) goto L_C0BEEFE;
    if (((*(signed char *)((0xC53249A + ((*(int *)(((int)stk + 16))) * v0_0)))) != 13)) goto L_C0BEF02;
    L_C0BEEFE:;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    L_C0BEF02:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BEF08;
    L_C0BEDE8:;
    v0_0 = (0x3938);
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x3938) + 0xC535BAC))) == 0)) goto L_C0BEE1C;
    if ((!((*(float *)((((*(int *)(((int)stk + 16))) * v0_0) + 0xC5325F8))) > 0.0f))) goto L_C0BEE1C;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
    L_C0BEE1C:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_C0BEE22;
}
