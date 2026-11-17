/* game/unsorted: functions 0C156A24-0C1575BA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c155104(int, int);
int FUN_0c15597a(int, int);
int FUN_0c1564b0(int, int);
int FUN_0c156a24(int a4, int a5);
int FUN_0c156b40(int a4, int a5, int a6, int a7);
int FUN_0c156e04(int a4);
int FUN_0c156f78(int a4);
int FUN_0c15739c(int a4);
int FUN_0c1574d4(int a4);

int FUN_0c156a24(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x2);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156924;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x2, 0x16, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        u0 = -302.0f;
        u0 = u0 + 159.0f * (float)a5;
        (((struct o6C_float *)(t2))->v) = u0;
        (((struct o70_float *)(t2))->v) = -156.0f;
        (((struct o74_float *)(t2))->v) = -20000.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0x3, 0x16, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = u0;
        (((struct o70_float *)(t2))->v) = -156.0f;
        (((struct o74_float *)(t2))->v) = -30000.0f;
        t1 = 0x74;
    }
    return t1;
}

int FUN_0c156b40(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x14));
    if ((unsigned int)t1 >= (unsigned int)0xC) {
        return FUN_0c03f346(a4, 0x1, 0x0, a7);
    }
    switch ((t1 << 1)) {
        case 0:
        {
            if (((*(signed char *)0xC542237) == 6) && (t0 = *(signed char *)0xC54223C, t0 == 0)) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                return 0xA8;
            }
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x4000);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x4000);
            (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v) = 5.0f;
            (((struct o88_float *)(((((struct oD0_int *)(a4))->v))))->v) = 5.0f;
            *(volatile signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = 0x19;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        case 2:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0xF;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 4:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x444);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x444);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(volatile signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = 0x15;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 6:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 8:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.00499999989f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00499999989f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.00499999989f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.00499999989f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 10:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.00600000005f);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.00200000009f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.00600000005f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.00200000009f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 12:
        {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.00499999989f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) - 0.00499999989f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(volatile signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = 0x15;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 14:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 16:
        {
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 18:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        case 20:
        {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1;
                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1;
                *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        default:
        {
            if ((*(float *)((0xC5325F8 + ((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938)))) > 0.0f) {
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v) = 5.0f;
                (((struct o88_float *)(((((struct oD0_int *)(a4))->v))))->v) = 5.0f;
                t0 = 0x88;
            } else {
                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                t1 = 0x84;
                if (((((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v)) > 1.0f) {
                    t2 = (((struct oD0_int *)(a4))->v);
                    (((struct o84_float *)(t2))->v) = (((((struct o84_float *)(t2))->v)) - 0.100000001f);
                    t2 = (((struct oD0_int *)(a4))->v);
                    (((struct o88_float *)(t2))->v) = (((((struct o88_float *)(t2))->v)) - 0.100000001f);
                    t1 = 0x88;
                }
                t0 = t1;
            }
            return t0;
        }
    }
}

int FUN_0c156e04(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0x4);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156B40;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0xC, 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -192.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, (*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2))), 0x13, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -192.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, (*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2))), 0x12, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -217.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t2, 0x6, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -192.0f;
        (((struct o74_float *)(t2))->v) = 40000.0f;
        t1 = 0x74;
    }
    return t1;
}

int FUN_0c156f78(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    t1 = *(signed char *)((a4 + 0x2));
                    if ((*(float *)((0xC475A04 + (t1 << 2)))) == ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v))) {
                    } else {
                        *(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2))) = 60.0f;
                        t1 = *(signed char *)((a4 + 0x2));
                        if ((*(float *)((0xC475A04 + (t1 << 2)))) > ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v))) {
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A24) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((0xC475A04 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A54) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                        }
                        t1 = *(signed char *)((a4 + 0x2));
                        if (((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v)) > (*(float *)((0xC475A04 + (t1 << 2))))) {
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A24) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                            t1 = *(signed char *)((a4 + 0x2));
                            *(float *)((0xC475A04 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                            t1 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t1 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            t1 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t1 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            t1 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)(((0xC475A54 + (t1 << 2)) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                        }
                    }
                    if ((*(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2)))) > 0.0f) {
                        t1 = *(signed char *)((a4 + 0x2));
                        *(float *)((0xC4759F4 + (t1 << 2))) = ((*(float *)((0xC4759F4 + (t1 << 2)))) - 1.0f);
                    } else {
                        t1 = *(signed char *)((a4 + 0x2));
                        if ((*(float *)((0xC475A14 + (t1 << 2)))) != (*(float *)((0xC475A04 + (t1 << 2))))) {
                            t1 = *(signed char *)((a4 + 0x2));
                            if ((*(float *)((0xC475A24 + (t1 << 2)))) > (*(float *)((0xC475A04 + (t1 << 2))))) {
                                t1 = *(signed char *)((a4 + 0x2));
                                if (((*(float *)((0xC475A04 + (t1 << 2)))) + 3.0f) > (*(float *)((0xC475A14 + (t1 << 2))))) {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                                } else {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((0xC475A14 + (t1 << 2))) = ((*(float *)((0xC475A14 + (t1 << 2)))) - 3.0f);
                                }
                                t1 = *(signed char *)(((0x2 + a4) + 0x0));
                                *(float *)((((t1 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            }
                            t1 = *(signed char *)((a4 + 0x2));
                            if ((*(float *)((0xC475A04 + (t1 << 2)))) > (*(float *)((0xC475A24 + (t1 << 2))))) {
                                t1 = *(signed char *)((a4 + 0x2));
                                if ((*(float *)((0xC475A14 + (t1 << 2)))) > ((*(float *)((0xC475A04 + (t1 << 2)))) + -3.0f)) {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((((t1 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t1 << 2))));
                                } else {
                                    t1 = *(signed char *)((a4 + 0x2));
                                    *(float *)((0xC475A14 + (t1 << 2))) = ((*(float *)((0xC475A14 + (t1 << 2)))) + 3.0f);
                                }
                                t1 = *(signed char *)(((0x2 + a4) + 0x0));
                                *(float *)((((t1 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A14 + (t1 << 2))));
                            }
                        }
                    }
                    (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = (((((*(float *)((0xC475A34 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 0.88499999f) / 1000.0f)) + 0.115000002f);
                    (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = (((((*(float *)((0xC475A44 + ((*(signed char *)((a4 + 0x2))) << 2)))) * 0.88499999f) / 1000.0f)) + 0.115000002f);
                    return 0x84;
                }
                return FUN_0c03f346(a4, 0xC475A04, 0x3938, 0xC475A14);
            }
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00999999978f);
            t1 = (((struct oCC_int *)(a4))->v);
            (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.00999999978f);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                *(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0.0f;
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A04 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A14 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A24 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A34 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A44 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                t1 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A54 + (t1 << 2))) = ((((struct o160_float *)(((t1 * 0x3938) + 0xC532498)))->v));
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            return t2;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    if (((*(signed char *)0xC542237) == 6) && (t0 = *(signed char *)0xC54223C, t0 == 0)) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t0 = 0xA8;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
        (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
        (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c15739c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x8, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC156F78;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t2, 0xD, 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -100000.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, 0xA, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -200000.0f;
        t2 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t2, 0xB, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = 38.0f;
        (((struct o70_float *)(t2))->v) = -181.0f;
        (((struct o74_float *)(t2))->v) = -300000.0f;
        t1 = 0x74;
    }
    return t1;
}

int FUN_0c1574d4(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54235E) != 0) {
        t0 = a4;
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t3 = t0;
            if ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                t0 = (t2 * 0x3938);
                t0 = (t0 + 0xC532498);
                t3 = *(signed char *)((t0 + 0x2));
                t0 = t3;
                if ((t3 != 12) && (t0 != 13)) {
                    t0 = t2;
                    FUN_0c155104(t0, t1);
                    t0 = t2;
                    FUN_0c15597a(t0, t1);
                    t0 = t2;
                    FUN_0c1564b0(t0, t1);
                    t0 = t2;
                    FUN_0c156a24(t0, t1);
                    t1 = (t1 + 0x1);
                } else {
                    t3 = t0;
                }
            }
            t2 = (t2 + 0x1);
            t0 = t3;
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t0 = 0x0;
        t2 = t1;
        for (;;) {
            t1 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2));
            if ((t1 == 12) || (t1 == 13)) {
                t2 = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        FUN_0c156e04(t2);
        return FUN_0c15739c(t2);
    }
    t0 = 0x0;
    for (;;) {
        t1 = 0x3714;
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            FUN_0c155104(t0, t0);
            FUN_0c15597a(t0, t0);
            FUN_0c1564b0(t0, t0);
            t1 = (FUN_0c156a24(t0, t0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}
