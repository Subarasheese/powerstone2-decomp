/* game/unsorted: functions 0C155104-0C1564B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c155104(int a4, int a5);
int FUN_0c15530c(int a4, float f4, float f5, float f6);
int FUN_0c15597a(int a4, int a5);

int FUN_0c155104(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x5);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC154E00;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o22_ushort *)(t0))->v) = a5;
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t2 = (((struct oC4_int *)(t0))->v);
        t3 = *(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x3719));
        FUN_0c03744a(t2, ((t3 << 1) + t3), 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        u0 = ((float)a5 * 159.0f);
        (((struct o6C_float *)(t2))->v) = (u0 + -280.0f);
        (((struct o70_float *)(t2))->v) = -192.0f;
        t2 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t2, (*(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2))), 0x13, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = (u0 + -280.0f);
        (((struct o70_float *)(t2))->v) = -192.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oCC_int *)(t0))->v);
        t3 = *(signed char *)((((a4 * 0x3938) + 0xC532498) + 0x2));
        t4 = t3;
        if (((*(signed char *)0xC541F62) != 0) && (t3 == 0)) {
            t4 = 0x10;
        }
        FUN_0c03744a(t2, t4, 0x12, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        u0 = ((float)a5 * 159.0f);
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = (u0 + -280.0f);
        (((struct o70_float *)(t2))->v) = -217.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t2, (((a4 << 1) + a4) + 0x2), 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = ((((float)a5 * 159.0f)) + -296.0f);
        (((struct o70_float *)(t2))->v) = -170.0f;
        (((struct o74_float *)(t2))->v) = 10000.0f;
        t2 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t2, 0x6, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t2))->v) = (u0 + -280.0f);
        (((struct o70_float *)(t2))->v) = -192.0f;
        (((struct o74_float *)(t2))->v) = (*(float *)0xC1553B0);
        t1 = 0x74;
    }
    return t1;
}

int FUN_0c15530c(int a4, float f4, float f5, float f6)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 == 3) {
                    t2 = *(signed char *)((a4 + 0x2));
                    if ((*(float *)((0xC475A04 + (t2 << 2)))) == ((((struct o160_float *)(((t2 * 0x3938) + 0xC532498)))->v))) {
                    } else {
                        *(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2))) = 60.0f;
                        t2 = *(signed char *)((a4 + 0x2));
                        if ((*(float *)((0xC475A04 + (t2 << 2)))) > ((((struct o160_float *)(((t2 * 0x3938) + 0xC532498)))->v))) {
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A24) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((0xC475A04 + (t2 << 2))) = ((((struct o160_float *)(((t2 * 0x3938) + 0xC532498)))->v));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t2 << 2))));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A54) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                        }
                        t2 = *(signed char *)((a4 + 0x2));
                        if (((((struct o160_float *)(((t2 * 0x3938) + 0xC532498)))->v)) > (*(float *)((0xC475A04 + (t2 << 2))))) {
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A24) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((((t2 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                            t2 = *(signed char *)((a4 + 0x2));
                            *(float *)((0xC475A04 + (t2 << 2))) = ((((struct o160_float *)(((t2 * 0x3938) + 0xC532498)))->v));
                            t2 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t2 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A14 + (t2 << 2))));
                            t2 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t2 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t2 << 2))));
                            t2 = *(signed char *)(((0x2 + a4) + 0x0));
                            *(float *)((((t2 << 2) + 0xC475A54) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                        }
                    }
                    t2 = *(signed char *)((a4 + 0x2));
                    if ((*(float *)((0xC4759F4 + (t2 << 2)))) > 0.0f) {
                        t3 = *(signed char *)((a4 + 0x2));
                        *(float *)((0xC4759F4 + (t3 << 2))) = ((*(float *)((0xC4759F4 + (t3 << 2)))) - 1.0f);
                    } else {
                        if ((*(float *)((0xC475A14 + (t2 << 2)))) != (*(float *)((0xC475A04 + (t2 << 2))))) {
                            t2 = *(signed char *)((a4 + 0x2));
                            if ((*(float *)((0xC475A24 + (t2 << 2)))) > (*(float *)((0xC475A04 + (t2 << 2))))) {
                                t2 = *(signed char *)((a4 + 0x2));
                                if (((*(float *)((0xC475A04 + (t2 << 2)))) + 3.0f) > (*(float *)((0xC475A14 + (t2 << 2))))) {
                                    t2 = *(signed char *)((a4 + 0x2));
                                    *(float *)((((t2 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                                } else {
                                    t2 = *(signed char *)((a4 + 0x2));
                                    *(float *)((0xC475A14 + (t2 << 2))) = ((*(float *)((0xC475A14 + (t2 << 2)))) - 3.0f);
                                }
                                t2 = *(signed char *)(((0x2 + a4) + 0x0));
                                *(float *)((((t2 << 2) + 0xC475A44) + 0x0)) = (*(float *)((0xC475A14 + (t2 << 2))));
                            }
                            t2 = *(signed char *)(((0x2 + a4) + 0x0));
                            if ((*(float *)((0xC475A04 + (t2 << 2)))) > (*(float *)((0xC475A24 + (t2 << 2))))) {
                                t2 = *(signed char *)(((0x2 + a4) + 0x0));
                                if ((*(float *)((0xC475A14 + (t2 << 2)))) > ((*(float *)((0xC475A04 + (t2 << 2)))) + -3.0f)) {
                                    t2 = *(signed char *)(((0x2 + a4) + 0x0));
                                    *(float *)((((t2 << 2) + 0xC475A14) + 0x0)) = (*(float *)((0xC475A04 + (t2 << 2))));
                                } else {
                                    t2 = *(signed char *)((a4 + 0x2));
                                    *(float *)((0xC475A14 + (t2 << 2))) = ((*(float *)((0xC475A14 + (t2 << 2)))) + 3.0f);
                                }
                                t2 = *(signed char *)(((0x2 + a4) + 0x0));
                                *(float *)((((t2 << 2) + 0xC475A34) + 0x0)) = (*(float *)((0xC475A14 + (t2 << 2))));
                            }
                        }
                    }
                    t2 = *(signed char *)((a4 + 0x2));
                    if ((*(float *)((0xC475A14 + (t2 << 2)))) != (*(float *)((0xC475A04 + (t2 << 2))))) {
                        t2 = *(signed char *)(((0x2 + a4) + 0x0));
                        if (((*(float *)((0xC475A24 + (t2 << 2)))) > (*(float *)(((0xC475A04 + (t2 << 2)) + 0x0)))) && (t0 = (((struct oD4_int *)(a4))->v), u0 = (((struct o18_float *)(t0))->v), u0 > 0.0f)) {
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                            if (0.0f > ((((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v))) {
                                (((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                                (((struct o1C_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                                (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                            }
                        }
                        t0 = *(signed char *)(((0x2 + a4) + 0x0));
                        if (((*(float *)(((0xC475A04 + (t0 << 2)) + 0x0))) > (*(float *)((0xC475A24 + (t0 << 2))))) && (t1 = (((struct oD4_int *)(a4))->v), u1 = (((struct o18_float *)(t1))->v), 1.0f > u1)) {
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.100000001f);
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.100000001f);
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.100000001f);
                            if (((((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 1.0f) {
                                (((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
                                (((struct o1C_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
                                (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 1.0f;
                            }
                        }
                    } else {
                        if (((((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v)) > 0.0f) {
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                            t0 = (((struct oD4_int *)(a4))->v);
                            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                            if (0.0f > ((((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v))) {
                                (((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                                (((struct o1C_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                                (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
                            }
                        }
                    }
                    if (((((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v)) == 0.0f) {
                        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
                        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
                    } else {
                        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x1;
                    }
                    (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((((*(float *)((0xC475A34 + ((*(signed char *)((a4 + 0x2))) << 2)))) / 1000.0f) * 71.0f) / 100.0f)) + 0.289999992f);
                    (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = ((((((*(float *)((0xC475A44 + ((*(signed char *)((a4 + 0x2))) << 2)))) / 1000.0f) * 71.0f) / 100.0f)) + 0.289999992f);
                    (((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v) = ((((((*(float *)((0xC475A54 + ((*(signed char *)((a4 + 0x2))) << 2)))) / 1000.0f) * 71.0f) / 100.0f)) + 0.289999992f);
                    u0 = (((*(float *)((0xC475A34 + ((*(signed char *)((a4 + 0x2))) << 2)))) / 1000.0f) * 70.0f);
                    u0 = u0 + 159.0f * (float)(*(signed char *)((a4 + 0x1)));
                    (((struct o6C_float *)(((((struct oD4_int *)(a4))->v))))->v) = (u0 + -249.0f);
                    t0 = (((struct oD4_int *)(a4))->v);
                    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x222);
                    if ((0x1 & (*(int *)0xC542260)) != 0) {
                        (((struct o84_float *)(((((struct oD8_int *)(a4))->v))))->v) = 1.0f;
                        (((struct o88_float *)(((((struct oD8_int *)(a4))->v))))->v) = 1.0f;
                    } else {
                        (((struct o84_float *)(((((struct oD8_int *)(a4))->v))))->v) = 0.800000012f;
                        (((struct o88_float *)(((((struct oD8_int *)(a4))->v))))->v) = 0.800000012f;
                    }
                    return 0x88;
                }
                return FUN_0c03f346(a4, 0xC475A04, 0xC475A14, 0xC532498);
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.00999999978f);
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.00999999978f);
            t0 = (((struct oCC_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.00999999978f);
            t0 = (((struct oD0_int *)(a4))->v);
            (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.00999999978f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                (((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v) = 1.0f;
                *(float *)((0xC4759F4 + ((*(signed char *)((a4 + 0x2))) << 2))) = 0.0f;
                t0 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A04 + (t0 << 2))) = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                t0 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A14 + (t0 << 2))) = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                t0 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A24 + (t0 << 2))) = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                t0 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A34 + (t0 << 2))) = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                t0 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A44 + (t0 << 2))) = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                t0 = *(signed char *)((a4 + 0x2));
                *(float *)((0xC475A54 + (t0 << 2))) = ((((struct o160_float *)(((t0 * 0x3938) + 0xC532498)))->v));
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
    (((struct o84_float *)(((((struct oCC_int *)(a4))->v))))->v) = 0.0f;
    (((struct o84_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
    (((struct o18_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o1C_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    (((struct o20_float *)(((((struct oD4_int *)(a4))->v))))->v) = 0.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c15597a(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t29;
    register int t6;
    register int t8;
    register int t11;
    register float u12;
    register int t14;
    register int t17;
    register int t20;
    register int t23;
    register int t26;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x8, 0x0, 0x6);
    t29 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned int *)((t0 + 0x4)) = 0xC15530C;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned char *)((t0 + 0x2)) = (*(int *)(((int)stk + 0)));
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / 320.0f);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / 320.0f);
        (((struct o30_float *)(t0))->v) = -2.0f;
        (((struct o44_float *)(t0))->v) = 0.00312500005f;
        (((struct o40_float *)(t0))->v) = 0.00312500005f;
        (((struct o48_float *)(t0))->v) = 1.56250002e-09f;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t6 = (((struct oC4_int *)(t0))->v);
        t8 = *(signed char *)((((*(int *)(((int)stk + 0))) * 0x3938) + 0xC535BB1));
        FUN_0c03744a(t6, (((t8 << 1) + t8) + 0x1), 0x14, (*(int *)0xC4B40D4));
        *(unsigned char *)((t6 + 0x0)) = 0x1;
        *(unsigned short *)((t6 + 0x6)) = 0x1F;
        t11 = *(int *)(((int)stk + 4));
        u12 = ((float)t11 * 159.0f);
        (((struct o6C_float *)(t6))->v) = (u12 + -280.0f);
        (((struct o70_float *)(t6))->v) = -181.0f;
        (((struct o74_float *)(t6))->v) = -100000.0f;
        t14 = (((struct oC8_int *)(t0))->v);
        FUN_0c03744a(t14, 0x0, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t14 + 0x0)) = 0x1;
        *(unsigned short *)((t14 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t14))->v) = (u12 + -280.0f);
        (((struct o70_float *)(t14))->v) = -181.0f;
        (((struct o74_float *)(t14))->v) = -200000.0f;
        t17 = (((struct oCC_int *)(t0))->v);
        FUN_0c03744a(t17, 0x1, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t17 + 0x0)) = 0x1;
        *(unsigned short *)((t17 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t17))->v) = (u12 + -280.0f);
        (((struct o70_float *)(t17))->v) = -181.0f;
        (((struct o74_float *)(t17))->v) = -300000.0f;
        t20 = (((struct oD0_int *)(t0))->v);
        FUN_0c03744a(t20, 0xC, 0x10, (*(int *)0xC4B40D4));
        *(unsigned char *)((t20 + 0x0)) = 0x1;
        *(unsigned short *)((t20 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t20))->v) = (u12 + -280.0f);
        (((struct o70_float *)(t20))->v) = -181.0f;
        (((struct o74_float *)(t20))->v) = -300000.0f;
        t23 = (((struct oD4_int *)(t0))->v);
        FUN_0c03744a(t23, 0x2, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t23 + 0x0)) = 0x1;
        *(unsigned short *)((t23 + 0x6)) = 0x21F;
        (((struct o6C_float *)(t23))->v) = (u12 + -280.0f);
        (((struct o70_float *)(t23))->v) = -181.0f;
        (((struct o74_float *)(t23))->v) = 10000.0f;
        t26 = (((struct oD8_int *)(t0))->v);
        FUN_0c03744a(t26, 0x3, 0x15, (*(int *)0xC4B40D4));
        *(unsigned char *)((t26 + 0x0)) = 0x1;
        *(unsigned short *)((t26 + 0x6)) = 0x1F;
        (((struct o6C_float *)(t26))->v) = ((((float)t11 * 159.0f)) + -240.0f);
        (((struct o70_float *)(t26))->v) = -192.0f;
        (((struct o74_float *)(t26))->v) = -400000.0f;
        t29 = 0x74;
    }
    return t29;
}
