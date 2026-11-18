/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c060028(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0d04c4(int, int);
int FUN_0c0d558c(int);
int FUN_0c0d55a2(int);
int FUN_0c0d5c10(int, int);
int FUN_0c133384(int);
int FUN_0c138fae(int);
int FUN_0c1393f4(int);
int FUN_0c139d06(int, int, int, int, int);
extern int FUN_0c14f824();
int FUN_0c1660d4(int, int);
int FUN_0c169524(int, int, int);
int FUN_0c16957c(int, int, int);
int FUN_0c16958a(int, int, int, int);
int FUN_0c17b1a0(int);
int ai_clear_op_state(void);
float math_cos_angle16(int);
float math_interval_overlap(float, float, float, float);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c57e0(int a4);
int FUN_0c0324e4(int a4, int a5, int a6, int a7);
int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0d55b4(int a4);
void FUN_0c139d98(int a4, int a5, int a6, int a7);
int FUN_0c031788(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0be4c6(int a4, float f4);
int FUN_0c03a2ce(int a4, int a5, int a6);
void FUN_0c1333cc(int a4, int a5, int a6, int a7);
int FUN_0c165560(int a4, int a5, int a6, int a7, float f4);
int FUN_0c062668(int a4, int a5, int a6, int a7);
int FUN_0c16a112(int a4, int a5, int a6, int a7);
int FUN_0c032240(int a4, int a5, int a6, int a7);

int FUN_0c0c57e0(int a4)
{
    int stk[5];
    register int t0;
    register float u4;
    register float u5;
    register float t7;
    register float u8;
    register float u10;
    register float u11;
    register float u13;
    register float u14;
    register float t16;
    register float u17;
    register float u19;
    register float u20;
    register float t27;
    register float u28;
    register float u30;
    register float u31;
    register int t32;
    register int t33;
    register int t37;
    register float u53;
    register float u65;
    register float t67;
    register float t69;
    register int t81;
    register float u22;
    int t34;
    register int t74;

    t0 = *(signed char *)((a4 + 0x1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
    if ((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x6))) == 7) {
        u4 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u5 = ((((struct o2C_float *)(a4))->v));
        u5 = u5 + 150.0f * u4;
        (((struct o2C_float *)(a4))->v) = u5;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t7 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        u8 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u10 = (t7 * u8);
        u11 = ((((struct o28_float *)(a4))->v));
        u11 = u11 + 50.0f * u10;
        (((struct o28_float *)(a4))->v) = u11;
        *(int *)((int)stk + 0) = (a4 + 0x30);
        u22 = 50.0f;
    } else {
        u13 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u14 = ((((struct o2C_float *)(a4))->v));
        u14 = u14 + 170.0f * u13;
        (((struct o2C_float *)(a4))->v) = u14;
        *(int *)((int)stk + 0) = (a4 + 0x28);
        t16 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        u17 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
        u19 = (t16 * u17);
        u20 = ((((struct o28_float *)(a4))->v));
        u20 = u20 + 110.0f * u19;
        (((struct o28_float *)(a4))->v) = u20;
        *(int *)((int)stk + 0) = (a4 + 0x30);
        u22 = 110.0f;
    }
    t27 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u28 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u30 = (t27 * u28);
    u31 = ((((struct o30_float *)(a4))->v));
    u31 = u31 + u22 * u30;
    (((struct o30_float *)(a4))->v) = u31;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    t32 = *(signed char *)((a4 + 0x1));
    t33 = *(signed char *)(((((short)t32 * (short)0x3938) + 0xC532498) + 0x2));
    t37 = t33;
    if ((t33 == 8) && (t34 = *(signed char *)(((((short)t32 * (short)0x3938) + 0xC532498) + 0x371C)), t34 != 0)) {
        t37 = 0xC;
    }
    *(unsigned int *)(((int)stk + 4)) = ((t37 << 2) << 1);
    if ((*(signed char *)((a4 + 0x41F))) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x380C)); }
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + 120.0f);
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o30_float *)(a4))->v)));
        nlVoidUnitVector((((int)stk + 4) + 0x4));
        u53 = *(float *)(((((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4) + (*(int *)(((int)stk + 4)))) + 0x0));
        (((struct o4C_float *)(a4))->v) = ((*(float *)(((int)stk + 8))) * u53);
        (((struct o50_float *)(a4))->v) = ((*(float *)(((int)stk + 12))) * u53);
        (((struct o54_float *)(a4))->v) = ((*(float *)(((int)stk + 16))) * u53);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t74 = (((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4) + (*(int *)(((int)stk + 4))));
    } else {
        u65 = *(float *)(((*(int *)(((int)stk + 4))) + ((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4)));
        t67 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        (((struct o4C_float *)(a4))->v) = (t67 * u65);
        t69 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        (((struct o54_float *)(a4))->v) = (t69 * u65);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        t74 = (((((((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xB))) << 2) << 2) << 2) << 1) + 0xC25B9D4) + (*(int *)(((int)stk + 4))));
    }
    t81 = *(short *)((t74 + 0x4));
    *(unsigned short *)((a4 + 0x1C)) = t81;
    return t81;
}

int FUN_0c0324e4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - 0.200000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t1 = t2;
            } else {
                if (t0 == 3) {
                    t2 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t2))->v) = (((((struct o8C_float *)(t2))->v)) - 0.0299999993f);
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t3 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x71F;
                        (((struct o14_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x19;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t2 = t3;
                } else {
                    if (t0 == 4) {
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o1C_float *)(t3))->v) = (((((struct o1C_float *)(t3))->v)) + 0.0399999991f);
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t3))->v) = (((((struct o20_float *)(t3))->v)) + 0.0399999991f);
                        t3 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x19;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t3 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = (((struct oC4_int *)(a4))->v);
                            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.0399999991f);
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t4 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t4 = 0x14;
                            }
                        }
                        t3 = t4;
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.300000012f;
                *(unsigned short *)((a4 + 0x1C)) = 0x19;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A978C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A978C) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A978C) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A978C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A978C) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.0f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)0xC54099A;
                t2 = *(signed char *)((a4 + 0x2));
                switch (t2) {
                case 0:
                    if (1.0f > (float)((int)((int)t0 / (int)0x2710))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x2710)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 1:
                    if (1.0f > (float)((int)((int)t0 / (int)0x3E8))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x3E8)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 2:
                    if (1.0f > (float)((int)((int)t0 / (int)0x64))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x64)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 3:
                    if (1.0f > (float)((int)((int)t0 / (int)0xA))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0xA)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 4:
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t0 % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 5:
                    *(unsigned short *)((a4 + 0x1C)) = 0xC;
                    break;
                }
                FUN_0c03733c(a4, (*(short *)((a4 + 0x1C))), (*(int *)0xC4B40D0));
                t0 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA570)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA570) + 0xC)); }
                (((struct o18_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = ((((struct o0_float *)0xC0359A8)->v));
                (((struct o20_float *)(t0))->v) = 0.0f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA570)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1AA570) + 0xC)); }
                (((struct o18_float *)(t0))->v) = ((((struct o4_float *)0xC0359A8)->v));
                (((struct o1C_float *)(t0))->v) = ((((struct o8_float *)0xC0359A8)->v));
                (((struct o20_float *)(t0))->v) = 0.0f;
                t0 = 0x22;
                if ((*(short *)0xC54099A) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0d55b4(int a4)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t4;
    register int t19;
    register int t22;
    register int t23;
    register float t25;
    register float u26;
    register int t28;
    register int t29;
    register int t32;
    register int t34;
    register int t35;
    register int t38;
    register int t42;
    register int t50;
    register int t60;
    register int t63;
    register int t77;
    register int t80;
    register int t81;
    register float t83;
    register float u84;
    register int t86;
    register int t87;
    register int t90;
    register int t92;
    register int t93;
    register int t96;
    register int t47;
    register int t48;
    register int t49;
    register int t56;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 == 3) {
                        if ((int)((((struct o80_int *)(((((struct oC8_int *)(a4))->v))))->v)) < (int)0x1BBB) {
                            t4 = (((struct oC8_int *)(a4))->v);
                            (((struct o80_uint *)(t4))->v) = (((((struct o80_int *)(t4))->v)) + 0xB6);
                        }
                        if ((*(short *)((a4 + 0x1C))) == 60) {
                            FUN_0c0d5c10(a4, ((*(short *)((a4 + 0x1C))) - 3));
                        }
                        t19 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t19 - 1);
                        if ((int)(short)(t19 - 1) <= 0) {
                            (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x1BBB;
                            (((struct o15_uchar *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0x78;
                            return FUN_0c0d558c(a4);
                        }
                        return (short)(t19 - 1);
                    }
                    return t1;
                }
                (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFE556;
                t22 = (((struct oC8_int *)(a4))->v);
                *(int *)((int)stk + 8) = (0x80 + t22);
                t23 = *(short *)(((0x1C + a4) + 0x0));
                *(unsigned short *)(((((int)stk + 8) + 0x4) + 0x0)) = t23;
                t25 = math_cos_angle16((int)(((float)((*(short *)(((int)stk + 12))) << 16) / 180.0f) * 8.0f));
                u26 = (((float)t23 / 180.0f) * t25);
                (((struct o80_uint *)(t22))->v) = (((((struct o80_int *)(t22))->v)) - (int)(u26 * 6826.0f));
                t28 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t28 - 1);
                t29 = (short)(t28 - 1);
                if ((int)(short)(t28 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    *(unsigned short *)((a4 + 0x1C)) = 0x78;
                    t29 = 0x78;
                }
                return t29;
            }
            t32 = (((struct oC8_int *)(a4))->v);
            (((struct o80_uint *)(t32))->v) = (((((struct o80_int *)(t32))->v)) - 2075);
            t34 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t34 - 1);
            t35 = (short)(t34 - 1);
            if ((int)(short)(t34 - 1) > 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                t35 = 0xB4;
            }
            return t35;
        }
        t38 = FUN_0c0d55a2(a4);
        if (t38 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            return thunk_FUN_0c05abb2(0x4E, (a4 + 0x28));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        return (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x1BBB;
    t42 = *(signed char *)((a4 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC1C815C + (((t42 << 1) + t42) << 2))); }
    FUN_0c0d558c(a4);
    FUN_0c0d5c10(a4, 0x0);
    FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
    t50 = 0x0;
    for (;;) {
        if ((int)t50 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t49 = t50;
        t49 = (t49 << 2);
        if (t50 != 1) {
            t48 = 0xC4;
            t48 = (t48 + a4);
            t48 = (t48 + t49);
            t48 = (*(int *)((t48 + 0x0)));
            FUN_0c0d04c4((t48 + 0x6), (t48 + 0x78));
        } else {
            t47 = 0xC4;
            t47 = (t47 + a4);
            t49 = (t49 + t47);
            *(unsigned short *)(((*(int *)((t49 + 0x0))) + 0x6)) = 0x9;
            t56 = t47;
        }
        t50 = (t50 + 0x1);
        t47 = t56;
    }
    t60 = *(signed char *)((a4 + 0x15));
    if (t60 != 0) {
        if (t60 != 1) {
            if (t60 != 2) {
                if (t60 == 3) {
                    if ((int)((((struct o80_int *)(((((struct oC8_int *)(a4))->v))))->v)) < (int)0x1BBB) {
                        t63 = (((struct oC8_int *)(a4))->v);
                        (((struct o80_uint *)(t63))->v) = (((((struct o80_int *)(t63))->v)) + 0xB6);
                    }
                    if ((*(short *)((a4 + 0x1C))) == 60) {
                        FUN_0c0d5c10(a4, ((*(short *)((a4 + 0x1C))) - 3));
                    }
                    t77 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t77 - 1);
                    if ((int)(short)(t77 - 1) <= 0) {
                        (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x1BBB;
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x78;
                        return FUN_0c0d558c(a4);
                    }
                    return (short)(t77 - 1);
                }
                return t60;
            }
            (((struct o80_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xFFFFE556;
            t80 = (((struct oC8_int *)(a4))->v);
            *(int *)((int)stk + 8) = (0x80 + t80);
            t81 = *(short *)(((0x1C + a4) + 0x0));
            *(unsigned short *)(((((int)stk + 8) + 0x4) + 0x0)) = t81;
            t83 = math_cos_angle16((int)(((float)((*(short *)(((int)stk + 12))) << 16) / 180.0f) * 8.0f));
            u84 = (((float)t81 / 180.0f) * t83);
            (((struct o80_uint *)(t80))->v) = (((((struct o80_int *)(t80))->v)) - (int)(u84 * 6826.0f));
            t86 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t86 - 1);
            t87 = (short)(t86 - 1);
            if ((int)(short)(t86 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                t87 = 0x78;
            }
            return t87;
        }
        t90 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t90))->v) = (((((struct o80_int *)(t90))->v)) - 2075);
        t92 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t92 - 1);
        t93 = (short)(t92 - 1);
        if ((int)(short)(t92 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            *(unsigned short *)((a4 + 0x1C)) = 0xB4;
            t93 = 0xB4;
        }
        return t93;
    }
    t96 = FUN_0c0d55a2(a4);
    if (t96 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        return thunk_FUN_0c05abb2(0x4E, (a4 + 0x28));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
    return (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
}

void FUN_0c139d98(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t6;
    register int t19;
    register int t28;
    register int t30;
    register int t67;
    register int t71;
    register int t73;
    register int t83;
    register int t87;
    register int t89;
    register int t99;
    register int t117;
    register int t20;
    int t69;
    int t85;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x34)); }
    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 != 2) {
                FUN_0c03f346(a4, 0xC532498, a6, a7);
            } else {
                if ((int)(*(short *)((a4 + 0x1E))) < (int)0x2) {
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x3)) == 0) {
                        t19 = (*(int *)((0xC2A1DC8 + (((*(short *)((a4 + 0x1E))) << 1) << 2))));
                        for (;;) {
                            if ((int)t19 > (int)(*(int *)((((((*(short *)((a4 + 0x1E))) << 1) << 2) + 0xC2A1DC8) + 0x4)))) {
                                break;
                            }
                            t20 = t19;
                            t20 = (t20 << 2);
                            *(unsigned int *)(((int)stk + 20)) = 0x0;
                            *(unsigned int *)(((int)stk + 24)) = (*(int *)((t20 + 0xC2A1CD8)));
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            *(float *)(((int)stk + 8)) = (*(float *)(((0xC2A1D08 + t20) + 0x0)));
                            (((struct o4_float *)(((int)stk + 8)))->v) = (*(float *)((t20 + 0xC2A1D38)));
                            *(float *)(((int)stk + 16)) = (*(float *)(((0xC2A1D08 + t20) + 0x0)));
                            t28 = *(int *)((t20 + 0xC2A1D68));
                            t30 = (*(int *)((0xC2A1D98 + t20)));
                            *(int *)((int)stk + 4) = t30;
                            FUN_0c139d06((*(signed char *)(((0x1 + (((short)t0 * (short)0x3938) + 0xC532498)) + 0x0))), (((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), t28, t30);
                            t19 = (t19 + 0x1);
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    }
                }
                if ((*(short *)((a4 + 0x1C))) == 0) {
                    FUN_0c1393f4((*(signed char *)((a4 + 0x1))));
                }
                if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(((((0x1 & ((((struct o20_short *)(a4))->v))) << 2) << 2) + 0xC2A1DF4)); }
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                }
                t67 = *(short *)((a4 + 0x1C));
                if (((int)t67 >= (int)((((struct o4_int *)0xC2A1DE0)->v))) && (t69 = (((struct o8_int *)0xC2A1DE0)->v), (int)t67 <= (int)t69)) {
                    t71 = ((((struct o4_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 4) = t71;
                    t73 = ((((struct o8_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 0) = t73;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1BCC, 0xC2A1BC0, (*(short *)((a4 + 0x1C))), t73, t71);
                }
                t83 = *(short *)((a4 + 0x1C));
                if (((int)t83 >= (int)((((struct oC_int *)0xC2A1DE0)->v))) && (t85 = (((struct o10_int *)0xC2A1DE0)->v), (int)t83 <= (int)t85)) {
                    t87 = ((((struct oC_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 4) = t87;
                    t89 = ((((struct o10_int *)0xC2A1DE0)->v));
                    *(int *)((int)stk + 0) = t89;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A1BC0, 0xC2A1BCC, (*(short *)((a4 + 0x1C))), t89, t87);
                }
                t99 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t99 + 0x1);
                if ((int)(short)(t99 + 0x1) > (int)((((struct o0_int *)0xC2A1DE0)->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
            }
        } else {
            t117 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t117 + 0x1);
            if ((int)(short)(t117 + 0x1) <= (int)0x14) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x10, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct oAC_ushort *)(a4))->v) = 0xF;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A1BD8); }
            }
        }
    } else {
        if (20.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            FUN_0c138fae((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1))));
        }
    }
}

int FUN_0c031788(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                u0 = (((struct o0_float *)0xC031A6C)->v);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - u0);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t1))->v) = (((((struct o74_float *)(t1))->v)) - u0);
                t1 = 0x74;
                if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > ((((struct o4_float *)0xC031A6C)->v)))) {
                    t2 = *(signed char *)((a4 + 0x2));
                    *(unsigned short *)((a4 + 0x1C)) = ((-(((t2 << 2) + t2) << 1)) + 0xB);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                t2 = t1;
            } else {
                if (t0 == 3) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t3 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x5;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t1 = t3;
                } else {
                    if (t0 == 4) {
                        u0 = (((struct o8_float *)0xC031A6C)->v);
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o6C_float *)(t3))->v) = (((((struct o6C_float *)(t3))->v)) - u0);
                        t3 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t3))->v) = (((((struct o70_float *)(t3))->v)) + u0);
                        t3 = (((struct oC8_int *)(a4))->v);
                        (((struct o6C_float *)(t3))->v) = (((((struct o6C_float *)(t3))->v)) + u0);
                        t3 = (((struct oC8_int *)(a4))->v);
                        (((struct o70_float *)(t3))->v) = (((((struct o70_float *)(t3))->v)) - u0);
                        t3 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                        t4 = (short)(t3 - 1);
                        if ((short)(t3 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x46;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t3 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t4 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t4 = 0x14;
                            }
                        }
                        t3 = t4;
                    }
                    t1 = t3;
                }
                t2 = t1;
            }
            t0 = t2;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.100000001f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498) + 0xC)); }
            (((struct o18_float *)(t0))->v) = 0.100000001f;
            (((struct o1C_float *)(t0))->v) = 0.100000001f;
            (((struct o20_float *)(t0))->v) = 0.100000001f;
            t0 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = ((((t0 << 2) + t0) << 1) + 0x1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0be4c6(int a4, float f4)
{
    int stk[42];
    register int t1;
    register int t14;
    register int t15;
    register int t2;
    register int t3;
    register int t4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u11;
    register int t24;
    register int t25;
    register int t27;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register float u35;
    register int t38;
    register int t58;
    register int t61;
    register int t65;
    register int t70;
    register int t97;
    register int t23;
    register int t26;
    register int t28;
    register float u34;
    register int t78;
    register int t79;

    *(unsigned short *)(((int)stk + 24)) = (*(short *)0xC472664);
    t1 = *(short *)(((int)stk + 24));
    t14 = 0x0;
    t15 = (0x0 + (((int)stk + 4) + 0x24));
    if ((int)(unsigned short)t1 > 0) {
        t2 = 0x0;
        t3 = (0x0 + (((int)stk + 4) + 0x24));
        t4 = 0xC4724E4;
        for (;;) {
            u5 = *(float *)((t4 + 0x0));
            u6 = (((struct o28_float *)(a4))->v);
            u7 = (((struct o30_float *)(a4))->v);
            u8 = (((struct o8_float *)(t4))->v);
            u11 = ((u8 - u7) * (u8 - u7));
            u11 = u11 + ((u5 - u6)) * ((u5 - u6));
            t2 = (t2 + 0x1);
            *(float *)((t3 + 0x0)) = (math_signed_sqrt(u11));
            t4 = (t4 + 0xC);
            t3 = (t3 + 0x4);
            if ((int)(unsigned short)t2 >= (int)(unsigned short)t1) {
                break;
            }
        }
        t14 = t2;
        t15 = t3;
        t24 = (unsigned short)t2;
    } else {
        t25 = a4;
    }
    t27 = t26;
    t29 = t28;
    t30 = 0x0;
    t31 = t14;
    t32 = t15;
    u35 = f4;
    for (;;) {
        if ((int)(unsigned short)t30 >= (int)(unsigned short)t1) {
            break;
        }
        t29 = t30;
        t32 = (unsigned short)t29;
        t32 = (t32 << 2);
        t27 = (unsigned short)t29;
        t31 = t32;
        t24 = (unsigned short)t30;
        t25 = t32;
        t23 = t24;
        t32 = (unsigned short)t30;
        t38 = t27;
        t27 = (t27 << 1);
        t24 = (t24 << 1);
        t24 = (t24 + t23);
        t32 = (t32 << 2);
        t27 = (t27 + t38);
        t24 = (t24 << 2);
        t23 = (unsigned short)t29;
        t24 = (t24 + 0xC4724E4);
        t27 = (t27 << 2);
        *(unsigned int *)(((int)stk + 16)) = (t32 + (((int)stk + 4) + 0x24));
        *(unsigned int *)(((int)stk + 12)) = t24;
        t27 = (t27 + 0xC4724E4);
        t31 = (t31 + (((int)stk + 4) + 0x24));
        if ((int)t23 < (int)(unsigned short)t1) {
            for (;;) {
                u34 = (*(float *)(((*(int *)(((int)stk + 16))) + 0x0)));
                if (u34 > ((*(float *)((t31 + 0x0))))) {
                    t24 = t25;
                    t24 = (t24 + (((int)stk + 4) + 0x24));
                    *(unsigned int *)(((int)stk + 8)) = t24;
                    t23 = (((int)stk + 4) + 0x18);
                    u35 = (*(float *)((t24 + 0x0)));
                    *(unsigned int *)(((int)stk + 4)) = (t32 + (((int)stk + 4) + 0x24));
                    u34 = (*(float *)(((t32 + (((int)stk + 4) + 0x24)) + 0x0)));
                    *(float *)((t24 + 0x0)) = u34;
                    t24 = t27;
                    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u35;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t24); }
                    t23 = t27;
                    t24 = (*(int *)(((int)stk + 12)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t24); }
                    t24 = (((int)stk + 4) + 0x18);
                    t23 = (*(int *)(((int)stk + 12)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t23) = *(struct mv3 *)(t24); }
                    t24 = t25;
                    t24 = (t24 + 0xC472464);
                    t23 = t32;
                    t23 = (t23 + 0xC472464);
                    *(unsigned int *)(((int)stk + 20)) = t24;
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((t24 + 0x0)));
                    *(unsigned int *)(((int)stk + 8)) = t23;
                    *(unsigned int *)((t24 + 0x0)) = (*(int *)((t23 + 0x0)));
                    t24 = (*(int *)(((int)stk + 8)));
                    *(unsigned int *)((t24 + 0x0)) = (*(int *)(((int)stk + 4)));
                }
                t29 = (t29 + 0x1);
                t27 = (t27 + 0xC);
                t25 = (t25 + 0x4);
                t31 = (t31 + 0x4);
                if ((int)(unsigned short)t29 >= (int)(unsigned short)t1) {
                    break;
                }
            }
        }
        t30 = (t30 + 0x1);
    }
    if ((*(short *)(((int)stk + 24))) != 0) {
        t58 = ((int)((int)(nlRand()) % (int)(unsigned short)t1));
        *(int *)((int)stk + 0) = t58;
        t61 = (int)((int)(t58 * ((int)((int)(nlRand()) % (int)(unsigned short)t1))) / (int)(unsigned short)t1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)((0xC4724E4 + (((t61 << 1) + t61) << 2))); }
        t65 = ((int)((int)(nlRand()) % (int)(unsigned short)t1));
        *(int *)((int)stk + 0) = t65;
        t78 = 0x1;
        t79 = (*(int *)((0xC472464 + (((int)((int)(t65 * ((int)((int)(nlRand()) % (int)(unsigned short)t1))) / (int)(unsigned short)t1)) << 2))));
    } else {
        t70 = *(signed char *)0xC472462;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)((((((struct o78_int *)((((unsigned short)(unsigned char)t70 * (unsigned short)0x264) + 0xC471ACC)))->v)) + 0x28)); }
        t78 = 0x0;
        t79 = ((((struct o78_int *)((((unsigned short)(unsigned char)t70 * (unsigned short)0x264) + 0xC471ACC)))->v));
    }
    (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t79;
    (((struct o6C_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o18_float *)(((int)stk + 4)))->v));
    (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x18)))->v));
    (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o8_float *)((((int)stk + 4) + 0x18)))->v));
    (((struct o22_ushort *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = t78;
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    t97 = ai_clear_op_state();
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    return t97;
}

int FUN_0c03a2ce(int a4, int a5, int a6)
{
    int stk[15];
    register int t0;
    register int t3;
    register int t5;
    register int t25;
    register int t27;
    register int t28;
    register int t30;
    register int t43;
    register float u52;
    register int t58;
    register int t71;
    register int t73;
    register int t74;
    register int t76;
    register int t90;
    register float u102;
    register int t20;
    register int t21;
    register int t124;
    register int t26;
    register int t29;
    register float u31;
    register int t68;
    register int t72;
    register int t75;
    register float u77;
    register int t121;
    register int t93;
    register int t95;
    register int t111;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)((a4 + 0x2));
    *(unsigned int *)(((int)stk + 28)) = ((((struct o44_int *)(a4))->v));
    t3 = *(int *)((a4 + 0x28));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x2C)));
    t5 = *(int *)((a4 + 0x34));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x24)));
    *(unsigned int *)(((int)stk + 16)) = ((((struct o40_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x38)));
    if (t0 != 1) {
        if (t0 != 2) {
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((a4 + 0x4)); }
        }
        t20 = a5;
        t21 = a6;
    } else {
        math_mat_get_translate(((((struct o68_int *)((*(int *)(((int)stk + 0)))))->v)), (((int)stk + 0) + 0x30));
        nlCalcPoint((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x24));
    }
    FUN_0c17b1a0(((*(int *)(((int)stk + 0))) + 0x28));
    if (t0 != 0) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        t25 = 0xC03A420;
        t27 = 0x0;
        t28 = t3;
        t30 = t0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 20))) >= (int)(*(int *)(((int)stk + 24)))) {
                break;
            }
            t29 = *(short *)((t28 + 0x0));
            t28 = (t28 + 0x2);
            t26 = t29;
            t26 = (t26 << 2);
            *(unsigned int *)(((int)stk + 0)) = t26;
            t25 = (*(int *)(((int)stk + 28)));
            if ((*(int *)((t26 + t25))) != 0) {
                t27 = t29;
                t27 = (t27 << 1);
                t25 = (*(int *)(((int)stk + 0)));
                t27 = (t27 + (*(int *)(((int)stk + 8))));
                t30 = (*(int *)((t5 + t25)));
                *(unsigned int *)(((int)stk + 32)) = t27;
                t27 = (*(short *)((t27 + 0x0)));
                t30 = (t30 << 2);
                t30 = (t30 + a5);
                t25 = (short)t27;
                t25 = (t25 << 2);
                t26 = (*(int *)((t5 + t25)));
                t27 = (short)t27;
                t26 = (t26 << 2);
                t26 = (t26 + a5);
                *(unsigned int *)(((int)stk + 4)) = t26;
                t43 = t26;
                if ((int)t27 < 0) {
                    t43 = (((int)stk + 0) + 0x24);
                }
                t27 = ((int)stk + 0);
                t27 = (t27 + 0x30);
                t25 = (nlSubVector3op(t27, t30, t43));
                t26 = 0xC17C2A0;
                t27 = ((int)stk + 0);
                t27 = (t27 + 0x30);
                u31 = (nlScalor(t27));
                if (u31 == 0.0f) {
                    u31 = 9.99999997e-07f;
                }
                t25 = (*(int *)(((int)stk + 0)));
                t27 = ((int)stk + 0);
                t26 = (*(int *)(((int)stk + 16)));
                u52 = u31;
                u31 = (*(float *)((t26 + t25)));
                u31 = (u31 / u52);
                t27 = (t27 + 0x30);
                t25 = (math_vec3_mul_xyz(t27, u31, u31, u31));
                t26 = (*(int *)(((int)stk + 32)));
                t27 = t30;
                t58 = (((int)stk + 0) + 0x24);
                if ((int)(*(short *)((t26 + 0x0))) < 0) {
                } else {
                    t58 = (*(int *)(((int)stk + 4)));
                }
                t25 = (nlAddVector3op(t27, t58, (((int)stk + 0) + 0x30)));
                t26 = (*(int *)(((int)stk + 12)));
                t27 = t30;
                t25 = (nlCalcPoint(t27, ((((t29 << 1) + t29) << 2) + t26)));
                t25 = (*(int *)((t30 + 0x0)));
                t25 = (t25 | 0x1);
                *(unsigned int *)((t30 + 0x0)) = t25;
            } else {
                t68 = t27;
            }
            t26 = (*(int *)(((int)stk + 20)));
            t27 = t68;
            t26 = (t26 + 0x1);
            *(unsigned int *)(((int)stk + 20)) = t26;
        }
        t124 = t25;
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t71 = 0xC03A420;
        t73 = 0x0;
        t74 = t3;
        t76 = t0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((int)stk + 24)))) {
                break;
            }
            t76 = *(short *)((t74 + 0x0));
            t74 = (t74 + 0x2);
            t71 = (*(int *)(((int)stk + 28)));
            t72 = t76;
            t72 = (t72 << 2);
            if ((*(int *)((t72 + t71))) != 0) {
                t71 = t76;
                t71 = (t71 << 2);
                t73 = t76;
                t75 = (*(int *)((t5 + t71)));
                t73 = (t73 << 1);
                t71 = (*(int *)(((int)stk + 8)));
                t75 = (t75 << 2);
                t73 = (*(short *)((t73 + t71)));
                t75 = (t75 + a5);
                t71 = (short)t73;
                t71 = (t71 << 2);
                t90 = *(int *)((t5 + t71));
                t73 = (short)t73;
                *(unsigned int *)(((int)stk + 0)) = ((t90 << 2) + a5);
                if ((int)t73 < 0) {
                    t72 = t75;
                    t71 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x30)) = *(struct mv3 *)(t72); }
                    t93 = t72;
                    t95 = t73;
                } else {
                    t73 = ((int)stk + 0);
                    t73 = (t73 + 0x30);
                    t71 = (nlSubVector3op(t73, t75, ((t90 << 2) + a5)));
                }
                t72 = t93;
                t73 = t95;
                t73 = ((int)stk + 0);
                t73 = (t73 + 0x30);
                u77 = (nlScalor(t73));
                t72 = t76;
                if (u77 == 0.0f) {
                    u77 = 9.99999997e-07f;
                }
                t71 = (*(int *)(((int)stk + 16)));
                t72 = (t72 << 2);
                t73 = ((int)stk + 0);
                u102 = u77;
                u77 = (*(float *)((t72 + t71)));
                u77 = (u77 / u102);
                t73 = (t73 + 0x30);
                t71 = (math_vec3_mul_xyz(t73, u77, u77, u77));
                t71 = (*(int *)(((int)stk + 8)));
                t72 = t76;
                t72 = (t72 << 1);
                if ((int)(*(short *)((t72 + t71))) < 0) {
                    t72 = ((int)stk + 0);
                    t72 = (t72 + 0x30);
                    t71 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t75) = *(struct mv3 *)(t72); }
                    t111 = t72;
                } else {
                    t73 = t75;
                    t71 = (nlAddVector3op(t73, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x30)));
                }
                t72 = t111;
                t72 = (*(int *)(((int)stk + 12)));
                t73 = t75;
                t71 = (nlCalcPoint(t73, ((((t76 << 1) + t76) << 2) + t72)));
                t71 = (*(int *)((t75 + 0x0)));
                t71 = (t71 | 0x1);
                *(unsigned int *)((t75 + 0x0)) = t71;
            } else {
                t121 = t73;
            }
            t72 = (*(int *)(((int)stk + 4)));
            t73 = t121;
            t72 = (t72 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t72;
        }
        t124 = t71;
    }
    return t124;
}

void FUN_0c1333cc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                FUN_0c133384(a4);
                t0 = *(signed char *)((a4 + 0x15));
                if (t0 != 0) {
                    if (t0 != 1) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    } else {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                        if ((short)(t0 + 0x1) == 5) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        }
                        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                        if (0.0f > ((((struct o40_float *)(a4))->v))) {
                            (((struct o40_float *)(a4))->v) = 0.0f;
                        }
                        u0 = (((struct o40_float *)(a4))->v);
                        (((struct o48_float *)(a4))->v) = u0;
                        (((struct o44_float *)(a4))->v) = u0;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
                    }
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
                    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                    if ((short)(t0 + 0x1) == 5) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.200000003f);
                    if (0.0f > ((((struct o40_float *)(a4))->v))) {
                        (((struct o40_float *)(a4))->v) = 0.0f;
                    }
                    u0 = (((struct o40_float *)(a4))->v);
                    (((struct o48_float *)(a4))->v) = u0;
                    (((struct o44_float *)(a4))->v) = u0;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
                }
                return;
            }
            FUN_0c03f346(a4, a5, a6, a7);
    return;
        }
        FUN_0c133384(a4);
        if ((*(signed char *)((a4 + 0x15))) != 0) {
            
        } else {
            t0 = FUN_0c064f80(a4);
            if (t0 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o12E_ushort *)(a4))->v) = 0x0;
            } else {
                (((struct o5C_float *)(a4))->v) = -1.0f;
            }
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
        if ((u0 + 0.100000001f) > (1.0f + 1.0f)) {
            (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
        }
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
        }
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    (((struct o50_float *)(a4))->v) = 20.0f;
    t0 = *(int *)((a4 + 0x38));
    t1 = 0xFFFFC000;
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        t1 = 0x4000;
    }
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t1 + t0))) * 5.0f);
    t0 = *(int *)((a4 + 0x38));
    t1 = 0xFFFFC000;
    if ((*(signed char *)((a4 + 0x2))) != 0) {
        t1 = 0x4000;
    }
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t1 + t0))) * 5.0f);
    FUN_0c133384(a4);
    if ((*(signed char *)((a4 + 0x15))) != 0) {
        
    } else {
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o12E_ushort *)(a4))->v) = 0x0;
        } else {
            (((struct o5C_float *)(a4))->v) = -1.0f;
        }
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    if ((u0 + 0.100000001f) > (1.0f + 1.0f)) {
        (((struct o40_float *)(a4))->v) = (1.0f + 1.0f);
    }
    u0 = (((struct o40_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = u0;
    (((struct o44_float *)(a4))->v) = u0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
}

int FUN_0c165560(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register float F12;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = a5;
    w0_0 = f4;
    v0_4 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_4);
    v0_2 = (0x0);
    v0_0 = (v0_0);
    if ((v0_4 == 0)) goto L_C165586;
    if ((v0_1 == 1)) goto L_C165592;
    v0_1 = ((FUN_0c03f346(v0_0, v0_3, a6, a7)));
    L_C1657AE:;
    return v0_1;
    L_C165592:;
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C1655B8;
    v0_1 = FUN_0c07d1fc(v0_0);
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    if ((v0_1 == 0)) goto L_C1655B8;
    (((struct o131_uchar *)(v0_0))->v) = v0_2;
    FUN_0c1660d4(v0_0, ((*(int *)(((int)stk + 0))) + 0xFF));
    L_C16579A:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_2;
    v0_1 = (0x15);
    goto L_C1657AE;
    L_C1655B8:;
    v0_3 = *(int *)0xC542260;
    v0_1 = (v0_3);
    if (((v0_3 & 3) != 0)) goto L_C1655E8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((v0_0 + 0x28)); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 30.0f);
    v0_1 = ((int (*)(int, int))(FUN_0c14f824))((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4));
    L_C1655E8:;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_4);
    v0_3 = (0xC179670);
    v0_3 = (0xC179BF0);
    v0_3 = (0x14000);
    if ((v0_4 == 0)) goto L_C165606;
    if ((v0_1 == 1)) goto L_C165688;
    if ((v0_1 != 2)) goto L_C165602;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_1 = ((short)(v0_3 - 1));
    if (((short)(v0_3 - 1) != 0)) goto L_C1657AE;
    goto L_C16579A;
    L_C165602:;
    goto L_C1657AE;
    L_C165688:;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - ((((struct o50_float *)(v0_0))->v)));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) + ((((struct o58_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) + ((((struct o60_float *)(v0_0))->v)));
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C1657AE;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3))));
    (((struct o58_float *)(v0_0))->v) = (w0_0 * 1.0f);
    (((struct o5C_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3))) * 1.0f);
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3));
    w0_1 = (w0_1 * w0_0);
    (((struct o60_float *)(v0_0))->v) = (w0_1 * 1.0f);
    v0_1 = (0x78);
    w0_0 = (w0_0);
    L_C16572E:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C1657AE;
    L_C165606:;
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = (w0_0 * (math_cos_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3))));
    (((struct o4C_float *)(v0_0))->v) = (w0_0 * 10.0f);
    (((struct o50_float *)(v0_0))->v) = ((math_cos_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3))) * 10.0f);
    w0_1 = math_sin_angle16(((-(*(int *)((v0_0 + 0x34)))) + v0_3));
    w0_0 = math_sin_angle16(((-(*(int *)((v0_0 + 0x38)))) + v0_3));
    w0_1 = (w0_1 * w0_0);
    (((struct o54_float *)(v0_0))->v) = (w0_1 * 10.0f);
    (((struct o58_float *)(v0_0))->v) = 0.0f;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    v0_1 = (0xA);
    w0_0 = (w0_0);
    goto L_C16572E;
    L_C165586:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct o131_uchar *)(v0_0))->v) = v0_2;
    goto L_C16579A;
}

int FUN_0c062668(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    float t14;
    register int t96;
    register int t15;
    register int t42;
    register int t54;
    register int t57;
    register float u60;
    register float u63;
    int t40;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC1C4AE8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C4AF4); }
    u0 = (((struct oC_float *)((a6 + 0x8)))->v);
    u1 = (((struct oC_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u1 + u0);
    u2 = (((struct o8_float *)((a7 + 0x8)))->v);
    u3 = (((struct o8_float *)((a6 + 0x8)))->v);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a7))->v);
    u8 = ((u2 - u3) * (u2 - u3));
    u8 = u8 + ((u5 - u4)) * ((u5 - u4));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)((a6 + 0x8)))->v);
    u11 = (((struct o10_float *)((a6 + 0x8)))->v);
    u12 = (((struct o4_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u12;
    u13 = (((struct oC_float *)((a7 + 0x8)))->v);
    t14 = math_interval_overlap((u12 + u13), (u12 - u13), (u10 + u11), (u10 - u11));
    t96 = 0x0;
    if (!(((u1 + u0) - t9) > 0.0f)) {
    } else {
        t96 = 0x0;
        if (!(t14 > 0.0f)) {
        } else {
            t15 = FUN_0c061284(a5, a4);
            if (t15 != 0) {
                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                t96 = 0x2;
            } else {
                if ((t14 > 9.0f) && (t14 > ((u1 + u0) - t9))) {
                    FUN_0c06151a(a5, a4, a7, a6, ((u1 + u0) - t9));
                } else {
                    if (((((struct o4_float *)((a7 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                        if (((*(signed char *)((a4 + 0x0))) == 0) && (t40 = *(signed char *)((a5 + 0x126)), t40 == 0)) {
                            FUN_0c06151a(a5, a4, a7, a6, ((u1 + u0) - t9));
                        } else {
                            t42 = FUN_0c0612cc(a5, a4);
                            if (t42 != 0) {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - t14);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x4), a6);
                            } else {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + t14);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                                FUN_0c061222(a4, a5);
                                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                                FUN_0c061416(a5, a7, (a7 + 0x8), (a6 + 0x8));
                            }
                        }
                    } else {
                        FUN_0c060028((a6 + 0x8), (a7 + 0x8), (((int)stk + 4) + 0x1C));
                        t54 = FUN_0c0612cc(a4, a5);
                        if (t54 != 0) {
                            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - t14);
                            FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                        } else {
                            t57 = FUN_0c0612cc(a5, a4);
                            if (t57 != 0) {
                                u60 = ((*(float *)(((int)stk + 32))) * ((u1 + u0) - t9));
                                u60 = -u60;
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u60);
                                u63 = ((*(float *)(((int)stk + 40))) * ((u1 + u0) - t9));
                                u63 = -u63;
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u63);
                            } else {
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((((*(float *)(((int)stk + 32))) * ((u1 + u0) - t9)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((((*(float *)(((int)stk + 40))) * ((u1 + u0) - t9)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
                                *(float *)(((int)stk + 16)) = (-(*(float *)(((int)stk + 28))));
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                            }
                            FUN_0c060c80(a4, (((int)stk + 4) + 0x4), a6);
                            (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                        }
                    }
                }
                t96 = 0x1;
            }
        }
    }
    return t96;
}

int FUN_0c16a112(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register float u12;
    register int t13;
    register int t21;
    register int t23;
    register float u27;
    register int t29;
    register float u30;
    register int t31;
    register int t33;
    register int t35;
    register int t37;
    register int t39;
    register int t41;
    register int t43;
    register float u88;
    register int t89;
    register int t97;
    register int t99;
    register float u103;
    register int t105;
    register float u106;
    register int t107;
    register int t109;
    register int t111;
    register int t113;
    register int t115;
    register int t117;
    register int t119;
    register int t138;
    int t14;
    register int t73;
    register int t74;
    int t90;

    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            t138 = t1;
            if (t1 == 2) {
            } else {
                t138 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            if (((((struct o48_float *)(a4))->v)) > 0.5f) {
                (((struct o48_float *)(a4))->v) = 1.0f;
            }
            u12 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u12;
            (((struct o40_float *)(a4))->v) = u12;
            t13 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t13 - 1);
            if (((int)(short)(t13 - 1) > 0) && (t14 = *(signed char *)((a4 + 0x131)), t14 == 0)) {
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x380C)); }
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 100.0f);
            FUN_0c0585a8(a4, (((int)stk + 0) + 0x4), 0x2D8, 4.0f);
            t21 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t21))->v) = (((((struct o7C_int *)(t21))->v)) - 0x1555);
            t23 = (((struct oC8_int *)(a4))->v);
            u27 = 1.0f;
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            } else {
                u27 = (*(float *)0xC16A3E4);
            }
            (((struct o84_float *)(t23))->v) = u27;
            t29 = (((struct oC8_int *)(a4))->v);
            u30 = (((struct o84_float *)(t29))->v);
            (((struct o8C_float *)(t29))->v) = u30;
            (((struct o88_float *)(t29))->v) = u30;
            t31 = (((struct oCC_int *)(a4))->v);
            (((struct o78_uint *)(t31))->v) = (((((struct o78_int *)(t31))->v)) + 0x71C);
            t33 = (((struct oCC_int *)(a4))->v);
            (((struct o7C_uint *)(t33))->v) = (((((struct o7C_int *)(t33))->v)) + 0x1C71);
            t35 = (((struct oD0_int *)(a4))->v);
            (((struct o78_uint *)(t35))->v) = (((((struct o78_int *)(t35))->v)) + 0x71C);
            t37 = (((struct oD0_int *)(a4))->v);
            (((struct o7C_uint *)(t37))->v) = (((((struct o7C_int *)(t37))->v)) + 0x1C71);
            t39 = (((struct oD4_int *)(a4))->v);
            (((struct o78_uint *)(t39))->v) = (((((struct o78_int *)(t39))->v)) + 0x71C);
            t41 = (((struct oD4_int *)(a4))->v);
            (((struct o7C_uint *)(t41))->v) = (((((struct o7C_int *)(t41))->v)) + 0x1C71);
            t43 = FUN_0c16958a(a4, 0x2, 0x2, 0x4);
            if (t43 != 0) {
                FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
                FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t138 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            t73 = 0xCC;
            t74 = (*(int *)((a4 + 0x10)));
        } else {
            t73 = 0xD4;
            t74 = (*(int *)((a4 + 0x10)));
        }
        thunk_FUN_0c058310(((*(int *)((t74 + t73))) + 0x28), (a4 + 0x28));
        FUN_0c16957c(a4, 0x2, 0x2);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
        FUN_0c169524(a4, 0x29, 0x63);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 0.5f) {
            (((struct o48_float *)(a4))->v) = 1.0f;
        }
        u88 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u88;
        (((struct o40_float *)(a4))->v) = u88;
        t89 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t89 - 1);
        if (((int)(short)(t89 - 1) > 0) && (t90 = *(signed char *)((a4 + 0x131)), t90 == 0)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x380C)); }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 100.0f);
        FUN_0c0585a8(a4, (((int)stk + 0) + 0x4), 0x2D8, 4.0f);
        t97 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t97))->v) = (((((struct o7C_int *)(t97))->v)) - 0x1555);
        t99 = (((struct oC8_int *)(a4))->v);
        u103 = 1.0f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        } else {
            u103 = (*(float *)0xC16A3E4);
        }
        (((struct o84_float *)(t99))->v) = u103;
        t105 = (((struct oC8_int *)(a4))->v);
        u106 = (((struct o84_float *)(t105))->v);
        (((struct o8C_float *)(t105))->v) = u106;
        (((struct o88_float *)(t105))->v) = u106;
        t107 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t107))->v) = (((((struct o78_int *)(t107))->v)) + 0x71C);
        t109 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t109))->v) = (((((struct o7C_int *)(t109))->v)) + 0x1C71);
        t111 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t111))->v) = (((((struct o78_int *)(t111))->v)) + 0x71C);
        t113 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t113))->v) = (((((struct o7C_int *)(t113))->v)) + 0x1C71);
        t115 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t115))->v) = (((((struct o78_int *)(t115))->v)) + 0x71C);
        t117 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t117))->v) = (((((struct o7C_int *)(t117))->v)) + 0x1C71);
        t119 = FUN_0c16958a(a4, 0x2, 0x2, 0x4);
        if (t119 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t138 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    }
    return t138;
}

int FUN_0c032240(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0500000007f);
                t1 = 0x8C;
                if (((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 0.5f) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                }
                t2 = t1;
            } else {
                if (t0 == 3) {
                    t1 = (((struct oC8_int *)(a4))->v);
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0500000007f);
                    t1 = 0x8C;
                    if (0.0f > ((((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t1 = 0x15;
                    }
                    t2 = t1;
                } else {
                    if (t0 == 4) {
                        t1 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                        t4 = (short)(t1 - 1);
                        if ((short)(t1 - 1) == 0) {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t4 = 0x15;
                        }
                        t1 = t4;
                    } else {
                        t4 = t0;
                        if (t0 == 5) {
                            t0 = (((struct oC8_int *)(a4))->v);
                            (((struct o14_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - 0.100000001f);
                            if (0.0f > ((((struct o14_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            }
                            t4 = 0x14;
                        }
                        t1 = t4;
                    }
                    t2 = t1;
                }
            }
            t0 = t2;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C) + 0xC)); }
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x1, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x71F;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x6C)) = *(struct mv3 *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A971C) + 0xC)); }
            (((struct o14_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 0.699999988f;
            (((struct o20_float *)(t0))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}
