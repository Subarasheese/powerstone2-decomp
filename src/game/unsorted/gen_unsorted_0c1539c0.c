/* game/unsorted: functions 0C1539C0-0C154DE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3840_short { char p[0x3840]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_int { char p[0x4]; int v; };
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
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
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c1539c0(int a4);
int FUN_0c153a4c(int a4, int a5, int a6, int a7);

int FUN_0c1539c0(int a4)
{
    register int t0;
    register int t1;
    register int t8;
    register int t3;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        t8 = 0x3714;
        if ((*(signed char *)((((t1 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            t0 = 0x5;
            t3 = FUN_0c03f444(t0, 0x0, 0x9);
            t0 = t3;
            t8 = t3;
            if (t3 != 0) {
                *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t0 + 0x4)) = 0xC153A4C;
                *(unsigned int *)((t0 + 0x10)) = ((t1 * 0x3938) + 0xC532498);
                *(unsigned char *)((t0 + 0x2)) = t1;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                (((struct oA9_uchar *)(t0))->v) = 0x1;
                (((struct o48_float *)(t0))->v) = 1.0f;
                (((struct o44_float *)(t0))->v) = 1.0f;
                (((struct o40_float *)(t0))->v) = 1.0f;
                *(unsigned int *)((t0 + 0x38)) = 0x0;
                *(unsigned int *)((t0 + 0x3C)) = 0x0;
                *(unsigned int *)((t0 + 0x34)) = 0x0;
                t8 = 0x40;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return t8;
}

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
