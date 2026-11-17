/* game/unsorted: functions 0C16C8E8-0C16D1CC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c16c8e8(int a4, int a5, int a6, int a7);
int FUN_0c16cd3c(int a4);
int FUN_0c16cdc2(int a4, int a5, int a6, int a7);
int FUN_0c16ce4c(int a4);
int FUN_0c16cf42(int a4, int a5, int a6, int a7);

int FUN_0c16c8e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + 0.00999999978f);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + 0.00999999978f);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + 0.00999999978f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                t0 = (((struct o20_short *)(a4))->v);
                switch (t0) {
                case 1:
                    (((struct o20_ushort *)(a4))->v) = 0x2;
                    break;
                case 2:
                    (((struct o20_ushort *)(a4))->v) = 0x3;
                    break;
                case 3:
                    (((struct o20_ushort *)(a4))->v) = 0x4;
                    break;
                case 4:
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    break;
                }
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
            }
            if (!(((((struct o2C_float *)(a4))->v)) > ((*(float *)0xC54109C) + 500.0f))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o50_float *)(a4))->v) = -2.0f;
                (((struct o54_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t0 = FUN_0c037320(0x20, (*(int *)0xC4B40CC));
                t1 = FUN_0c03f444(0x6, 0x0, t0);
                t2 = t1;
                if (t1 != 0) {
                    FUN_0c03733c(t1, 0x20, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    FUN_0c187798();
                    *(unsigned int *)((t1 + 0x4)) = 0xC16CACE;
                    (((struct oAC_ushort *)(t1))->v) = 0x41F;
                    (((struct oB0_float *)(t1))->v) = 1.0f;
                    (((struct o60_float *)(t1))->v) = 1.20000005f;
                    (((struct o58_float *)(t1))->v) = ((1.20000005f * (1.0f + 1.0f)) / 3.0f);
                    if ((int)t0 > 0) {
                        t3 = 0x0;
                        t4 = 0x0;
                        for (;;) {
                            t4 = (t4 + 0x1);
                            t5 = *(int *)((((0xC4 + t1) + t3) + 0x0));
                            *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x1000);
                            (((struct o24_float *)((*(int *)((((0xC4 + t1) + t3) + 0x0)))))->v) = 1.20000005f;
                            t3 = (t3 + 0x4);
                            if ((int)t4 >= (int)t0) {
                                break;
                            }
                        }
                    }
                    t0 = FUN_0c179ac0();
                    t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
                    if ((int)t0 >= 0) {
                        t3 = (t0 & 0x1);
                    }
                    (((struct o17_uchar *)(t1))->v) = t3;
                    t2 = t3;
                }
                return t2;
            }
            return 0x2C;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = FUN_0c179ac0();
            t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t2 = (t0 & 0x3);
            }
            u0 = *(float *)(((((t2 << 2) << 1) + 0xC2A39AC) + 0x0));
            (((struct o50_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = ((-u0) / (1.0f + 1.0f));
            (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)((((t2 << 2) << 1) + 0xC2A39AC)))->v));
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            (((struct o20_ushort *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            FUN_0c05aae4(0x65, (a4 + 0x28));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t1 = 0xA8;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x2));
    t1 = FUN_0c179ac0();
    t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x7);
    }
    *(unsigned short *)((a4 + 0x1C)) = (t2 + (t0 << 1));
    (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFEAAB;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o18_float *)(t0))->v) = 0.0f;
    (((struct o1C_float *)(t0))->v) = 0.0f;
    (((struct o20_float *)(t0))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c16cd3c(int a4)
{
    register int t2;
    register int t8;

    FUN_0c037320(0x4D, (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t8 = t2;
    if (t2 != 0) {
        *(unsigned int *)((t2 + 0x4)) = 0xC16CDC2;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned char *)((t2 + 0x2)) = 0x0;
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x4D, (*(int *)0xC4B40D8));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        FUN_0c187798();
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + 50.0f);
        t8 = 0x2C;
    }
    return t8;
}

int FUN_0c16cdc2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    FUN_0c16ce4c(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c16ce4c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    u0 = *(float *)0xC16CF94;
    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c037320(0x4D, (*(int *)0xC4B40D8));
        t3 = FUN_0c03f444(0x1, 0x0, t2);
        t1 = t3;
        if (t3 != 0) {
            *(unsigned int *)((t3 + 0x4)) = 0xC16CF42;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t3 + 0x2)) = t0;
            FUN_0c03744a(((((struct oC4_int *)(t3))->v)), 0x1, 0x4D, (*(int *)0xC4B40D8));
            (((struct oA8_uchar *)(t3))->v) = 0x1;
            (((struct oAC_ushort *)(t3))->v) = 0x2F;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c187798();
            *(unsigned int *)((t3 + 0x10)) = a4;
            *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x3F;
            t2 = (((struct oC4_int *)(t3))->v);
            (((struct o8C_float *)(t2))->v) = u0;
            (((struct o88_float *)(t2))->v) = u0;
            (((struct o84_float *)(t2))->v) = u0;
            FUN_0c07e3ae(t3, (*(signed char *)0xC27489F));
            FUN_0c064d24(t3, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0x0);
            (((struct o12A_ushort *)(t3))->v) = 0x0;
            t1 = 0x12A;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t1;
}

int FUN_0c16cf42(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if (((*(signed char *)0xC542237) == 0) && (t0 = *(signed char *)0xC540F98, t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 10.0f));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (((((struct o50_float *)(a4))->v)) / 10.0f));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 10.0f));
        u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
        u1 = ((((struct o2C_float *)(a4))->v));
        u1 = u1 + 5.0f * u0;
        (((struct o2C_float *)(a4))->v) = u1;
        u0 = math_sin_angle16((int)(((float)((((struct o20_short *)(a4))->v)) * 65536.0f) / 360.0f));
        u1 = ((((struct o2C_float *)(a4))->v));
        u1 = u1 + 5.0f * u0;
        (((struct o2C_float *)(a4))->v) = u1;
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0xB4);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x4);
        (((struct o20_ushort *)(a4))->v) = ((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x168));
        t0 = (((struct o20_short *)(a4))->v);
        if (((int)t0 > 0) && ((int)t0 < (int)0x5)) {
            FUN_0c07e3ae(a4, (*(signed char *)0xC273FE2));
            FUN_0c064d24(a4, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))), 0x0, 0x0);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned int *)((a4 + 0x34)) = (-(int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x2D)) * 65536.0f) / 360.0f));
    *(unsigned int *)((a4 + 0x38)) = (0x2AAA * (*(signed char *)((a4 + 0x2))));
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
    u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
    (((struct o4C_float *)(a4))->v) = (u1 * 20.0f);
    (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 20.0f);
    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
    (((struct o54_float *)(a4))->v) = (u1 * 20.0f);
    *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(FUN_0c179ac0()) % (int)0xB4));
    (((struct o20_ushort *)(a4))->v) = ((int)((int)(FUN_0c179ac0()) % (int)0xB4));
    *(unsigned short *)((a4 + 0x1C)) = 0x1E0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
