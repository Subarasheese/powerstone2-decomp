/* Straight-line functions with calls and guards (batch gen_hi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
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
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c04d0d4(int);
int FUN_0c04d484(int);
int FUN_0c04d664(float);
int FUN_0c059e9a(int, int, int);
int FUN_0c05ab12(int, int);
int FUN_0c064f80(int);
int FUN_0c0cff96(int, int);
int FUN_0c1272a8(int, int);
int FUN_0c12764c(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c04cca0(int a4);
int FUN_0c155104(int a4, int a5);
int FUN_0c127448(int a4, int a5, int a6, int a7);

int FUN_0c04cca0(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o30_float *)(a4))->v) = -3000.0f;
        FUN_0c04d0d4(a4);
        FUN_0c04d484(a4);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o58_float *)(a4))->v) = ((((struct o6C_float *)(((((struct oD0_int *)(a4))->v))))->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o6C_float *)(((((struct oD4_int *)(a4))->v))))->v));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        (((struct o1A_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0cff96((*(int *)((((((struct oCC_int *)(a4))->v)) + 0x8))), 0xC1B7EAC);
    t0 = (((struct oD8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x16);
    (((struct o7C_uint *)((*(int *)(((0xC4 + a4) + 0x10)))))->v) = ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x14)))))->v));
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x24);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if (((short)(t0 + 0x1) & 3) == 0) {
        FUN_0c04d664((((float)(*(short *)((a4 + 0x1C))) / 90.0f) + (1.0f + 1.0f)));
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c05ab12(0xD0, (a4 + 0x28));
        (((struct o20_ushort *)(a4))->v) = (((int)((int)(FUN_0c179ac0()) % (int)0x18)) + 0x10);
    }
    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    if ((int)(*(int *)((((*(signed char *)((a4 + 0x19))) << 2) + 0xC1B7ED0))) < (int)((((struct o22_short *)(a4))->v))) {
        FUN_0c05ab12(0xD1, (a4 + 0x28));
        (((struct o19_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x19))) + 0x1);
    }
    if ((*(short *)((a4 + 0x1C))) == (*(int *)((0xC1B7EC4 + ((*(short *)((a4 + 0x1E))) << 2))))) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        thunk_FUN_0c05abb2(0x46, 0x0);
    }
    u0 = (((struct o4_float *)0xC04CF48)->v);
    u1 = 3.0f;
    u1 = u1 + ((((struct o0_float *)0xC04CF48)->v)) * (((float)(*(short *)((a4 + 0x1C))) / 300.0f));
    u2 = u1;
    if (u1 > u0) {
        u2 = u0;
    }
    t0 = (((struct oD0_int *)(a4))->v);
    u0 = ((((struct o58_float *)(a4))->v));
    u0 = u0 + u2 * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 13)));
    (((struct o6C_float *)(t0))->v) = u0;
    t0 = (((struct oD4_int *)(a4))->v);
    u0 = ((((struct o5C_float *)(a4))->v));
    u0 = u0 + u2 * (math_sin_angle16(((*(short *)((a4 + 0x1C))) << 14)));
    (((struct o6C_float *)(t0))->v) = u0;
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if ((int)t0 > (int)0x78) {
        t0 = (((struct oD8_int *)(a4))->v);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0xF);
        t0 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 30);
        t1 = 0x78;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xE) {
        return FUN_0c03f346(a4);
    }
    return t1;
}

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

int FUN_0c127448(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        } else {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x4000;
        }
        if (((*(short *)((a4 + 0x1E))) & 2) != 0) {
            u0 = (((((struct o40_float *)(a4))->v)) + 0.200000003f);
        } else {
            u0 = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
        }
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o48_float *)(a4))->v) = u0;
        t4 = *(signed char *)((a4 + 0x15));
        if (t4 != 0) {
            if (t4 != 1) {
                t5 = t4;
                if (t4 == 2) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (*(float *)(((((((struct o20_short *)(a4))->v)) << 2) + 0xC201BBC))));
                    (((struct o48_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
                    t4 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                    t6 = (short)(t4 - 1);
                    if ((short)(t4 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t6 = 0x14;
                    }
                    t5 = t6;
                }
                t4 = t5;
            } else {
                (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                t5 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                t6 = (short)(t5 - 1);
                if ((short)(t5 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    t6 = 0x12A;
                }
                t4 = t6;
            }
            return t4;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 30.0f;
        }
        if (((int)((((struct o20_short *)(a4))->v)) > (int)0x1) && (t0 = *(short *)((a4 + 0x1C)), t0 == 10)) {
            FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
        }
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            if (((int)(*(short *)((a4 + 0x1C))) < (int)0xA) && (t1 = (((struct o20_short *)(a4))->v), (int)t1 > (int)0x1)) {
                FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
            FUN_0c12764c(a4, ((((struct o20_short *)(a4))->v)));
            if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0xB;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if (((*(short *)((a4 + 0x1E))) & 0x1) != 0) {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        } else {
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x4000;
        }
        if (((*(short *)((a4 + 0x1E))) & 2) != 0) {
            u0 = (((((struct o40_float *)(a4))->v)) + 0.200000003f);
        } else {
            u0 = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
        }
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o48_float *)(a4))->v) = u0;
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 == 2) {
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (*(float *)(((((((struct o20_short *)(a4))->v)) << 2) + 0xC201BBC))));
                    (((struct o48_float *)(a4))->v) = ((((struct o40_float *)(a4))->v));
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t4 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    }
                    t1 = t4;
                }
                t0 = t1;
            } else {
                (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t4 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    t4 = 0x12A;
                }
                t0 = t4;
            }
            return t0;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 30.0f);
        if ((int)((((struct o22_short *)(a4))->v)) > 0) {
            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
            if (((((struct o22_short *)(a4))->v)) == 0) {
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1) {
            (((struct o70_float *)(((((struct oC8_int *)(a4))->v))))->v) = 30.0f;
        }
        if (((int)((((struct o20_short *)(a4))->v)) > (int)0x1) && (t2 = *(short *)((a4 + 0x1C)), t2 == 10)) {
            FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
        }
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            if (((int)(*(short *)((a4 + 0x1C))) < (int)0xA) && (t3 = (((struct o20_short *)(a4))->v), (int)t3 > (int)0x1)) {
                FUN_0c1272a8((*(int *)((a4 + 0x10))), (((((struct o20_short *)(a4))->v)) - 1));
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
            FUN_0c12764c(a4, ((((struct o20_short *)(a4))->v)));
            if ((int)((((struct o22_short *)(a4))->v)) > 0) {
                (((struct o22_ushort *)(a4))->v) = 0x0;
                FUN_0c059e9a((*(int *)((a4 + 0x10))), 0x20, (a4 + 0x28));
            }
        }
    }
    if ((*(float *)0xC541098) > ((((struct o2C_float *)(a4))->v))) {
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    return 0x2C;
}
