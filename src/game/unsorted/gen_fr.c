/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o100_int { char p[0x100]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o375E_uchar { char p[0x375E]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c073566(int, int);
int FUN_0c07bdd0(int, int);
float FUN_0c07cd84(int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c216e(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c2870(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c9de8(int);
int FUN_0c0c9e1a(void);
int FUN_0c0cff2e(int, int);
int FUN_0c104cc8(int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c12ebe4(int, int);
int FUN_0c144984(int, int, int);
int FUN_0c14c7e8(int);
int FUN_0c14c866(int, int);
int FUN_0c150160(int, int, float, float, float, float);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c15aed8(int);
int FUN_0c16a40c(int);
int FUN_0c17c450(int);
int FUN_0c2b176e(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int bgm_stop_slot(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlCalcPoint44(int, int);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
float nlScalor(int, Stk3);
int nlSelectMatrixStack(int);
int nlSubVector3op(int, int, int);
int nl_sprite_draw(int);
int thunk_FUN_0c058310(int, int);
int draw_project_point_sprite(int a4);
int FUN_0c09e6f0(int a4);
int FUN_0c143814(int a4, int a5, int a6);
int FUN_0c1118ac(int a4);
int FUN_0c117d5a(int a4);
int FUN_0c0c9e1e(int a4);
int FUN_0c14cd44(int a4, int a5);
int FUN_0c13052c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f29a8(int a4);
int FUN_0c14c96a(int a4);
int FUN_0c14188c(int a4, int a5);
int FUN_0c144d6a(int a4);
int FUN_0c14fed8(int a4, int a5, float f4, float f5);
int FUN_0c0ffdae(int a4);
int FUN_0c2b1830(int a4, int a5);
void FUN_0c06130a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c08ba8c(int a4);
int FUN_0c13f398(int a4);
void FUN_0c061416(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c07ce58(int a4, int a5, float f4);
int FUN_0c16a6e0(int a4);
int FUN_0c0df30a(int a4);

int draw_project_point_sprite(int a4)
{
    int stk[38];
    register int t1;
    register int t2;
    register int t4;
    register float u18;
    register float u22;
    register float u23;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 0));
    t2 = t1;
    t4 = (((int)stk + 0) + 0x48);
    for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((t1 + 80)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x3C)) = *(struct mv3 *)((((int)stk + 0) + 0x4C)); }
    nlSelectMatrixStack(0x2);
    nlCalcPoint((((int)stk + 0) + 0x3C), (((int)stk + 0) + 0x30));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((((int)stk + 0) + 0x30)); }
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 1.0f);
    nlSelectMatrixStack(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x14));
    nlCalcPoint44((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x4));
    nlSelectMatrixStack(0x1);
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 60)) = (((((*(float *)(((int)stk + 20))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    u18 = (((((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 480.0f);
    u18 = -u18;
    *(float *)(((int)stk + 64)) = (u18 + 480.0f);
    *(float *)(((int)stk + 68)) = (-((*(float *)(((int)stk + 56))) * 1.0f));
    u22 = *(float *)(((int)stk + 60));
    u23 = (((((*(float *)(((int)stk + 4))) / (*(float *)(((int)stk + 16)))) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4C)) = *(struct mv3 *)((((int)stk + 0) + 0x3C)); }
    *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) * (u23 - u22));
    *(float *)(((int)stk + 92)) = ((*(float *)(((int)stk + 92))) * (u23 - u22));
    *(unsigned int *)(((int)stk + 120)) = 0x2;
    *(unsigned int *)(((int)stk + 128)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 132)) = 0x0;
    return (nl_sprite_draw((((int)stk + 0) + 0x48)));
}

int FUN_0c09e6f0(int a4)
{
    register int t0;
    register int t1;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o3770_int *)(a4))->v)) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
    (((struct o374B_uchar *)(a4))->v) = 0x2;
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x2;
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = nlRand();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        FUN_0c12ebe4(a4, 0x1);
    }
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x3);
            FUN_0c073566(a4, 0x33);
            FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
            FUN_0c12ebe4(a4, 0x2);
            FUN_0c12ebe4(a4, 0x3);
            FUN_0c12ebe4(a4, 0x7);
            FUN_0c14fed8((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 1.0f, 200.0f);
            FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
            FUN_0c059e60(a4, 0x2);
            FUN_0c059e60(a4, 0x24);
            FUN_0c07bdd0(a4, 0x24);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t1 = (((struct o3770_int *)(a4))->v);
            (((struct o18_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x18))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x27;
            t0 = 0x27;
        }
    }
    return t0;
}

int FUN_0c143814(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)(((a6 << 2) + 0xC2A2330));
    nlRand();
    u0 = (((struct o8_float *)0xC143958)->v);
    u1 = (((struct o10_float *)0xC143958)->v);
    t1 = t0;
    t2 = (-(int)(((float)((int)((int)(nlRand()) % (int)0x1E)) * ((((struct o0_float *)0xC143958)->v))) / ((((struct o4_float *)0xC143958)->v))));
    t3 = t0;
    for (;;) {
        t5 = FUN_0c037320((*(int *)((t1 + 0x0))), (*(int *)((((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC) + 0x4))));
        t6 = FUN_0c03f444(0x5, 0x0, t5);
        t4 = t6;
        if (t6 != 0) {
            FUN_0c03733c(t6, (*(int *)((t3 + 0x0))), (*(int *)((((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40DC) + 0x4))));
            *(unsigned int *)((t6 + 0x4)) = 0xC143932;
            *(unsigned char *)((t6 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t6))->v) = 0x1F;
            (((struct oA9_uchar *)(t6))->v) = 0x21;
            u2 = (((struct o4_float *)(t3))->v);
            (((struct o48_float *)(t6))->v) = u2;
            (((struct o44_float *)(t6))->v) = u2;
            (((struct o40_float *)(t6))->v) = u2;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x28)) = *(struct mv3 *)(a5); }
            (((struct o2C_float *)(t6))->v) = (((((struct o2C_float *)(t6))->v)) + ((((struct o8_float *)(t3))->v)));
            (((struct o4C_float *)(t6))->v) = ((math_cos_angle16(t2)) * u1);
            (((struct o54_float *)(t6))->v) = ((math_sin_angle16(t2)) * u1);
            (((struct o50_float *)(t6))->v) = u0;
            t5 = FUN_0c15aed8((t6 + 0x28));
            *(unsigned int *)((t6 + 0x38)) = t2;
            t4 = t5;
        }
        t1 = (t1 + 0xC);
        t2 = (t2 + 0x1555);
        t3 = (t3 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)(t0 + 0x48)) {
            break;
        }
    }
    return t4;
}

int FUN_0c1118ac(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t2 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                    if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                        return FUN_0c03f346(a4);
                    }
                    return t2;
                }
                return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    t0 = 0x0;
    if ((int)(*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) >= 0) {
        t0 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC291350); }
    FUN_0c1171f0(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(volatile int *)0xC4B410C;
    return FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), t0);
}

int FUN_0c117d5a(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c104cc8(0x3FCF);
    if (t0 != 0) {
        bgm_stop_slot(0x0);
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            if ((*(signed char *)((a4 + 0x2))) != 0) {
                FUN_0c05aab6(0x0, 0x7);
            }
            return FUN_0c03f346(a4);
        }
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xF)) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((-(*(short *)((a4 + 0x1E)))) + 0x1);
        }
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = *(short *)((a4 + 0x1E));
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), (0xC291B10 + (((t1 << 1) + t1) << 2)));
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        return (t0 + 0x1);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xA, 0xD, (*(int *)0xC4B410C));
    t0 = (((struct oC4_int *)(a4))->v);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)((t0 + 0x6C)); }
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xF)) == 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((-(*(short *)((a4 + 0x1E)))) + 0x1);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    t1 = *(short *)((a4 + 0x1E));
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), (0xC291B10 + (((t1 << 1) + t1) << 2)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    return (t0 + 0x1);
}

int FUN_0c0c9e1e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = FUN_0c0c216e(a4);
    if (t2 == 0) {
        t2 = FUN_0c0c2870(a4);
        if (t2 != 0) {
            return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
        }
        t2 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715));
        if ((t2 != 5) && ((t2 != 6) && ((t2 != 7) || (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x15)), t0 != 1)))) {
            (((struct oA4_uint *)(a4))->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x28)); }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
            *(unsigned int *)((a4 + 0x38)) = (*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38)));
        } else {
            (((struct o28_float *)(a4))->v) = 34.0f;
            (((struct o2C_float *)(a4))->v) = -21.7000008f;
            (((struct o30_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x38)) = 0x4000;
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            (((struct oA4_uint *)(a4))->v) = (((((struct o100_int *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + 0x28);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0x0;
            (((struct o78_uint *)(t0))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                FUN_0c0c9e1a();
            }
        } else {
            FUN_0c0c9de8(a4);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c14cd44(int a4, int a5)
{
    register int t3;
    register int t4;

    t3 = FUN_0c037320(0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    t4 = FUN_0c03f444(0x1, 0x0, t3);
    if (t4 != 0) {
        *(unsigned char *)((t4 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        FUN_0c03733c(t4, 0x1, (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x28)) = *(struct mv3 *)(0xC202C60); }
        FUN_0c0582de((t4 + 0x28), (((((struct oD4_int *)(a4))->v)) + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        *(unsigned char *)((t4 + 0x2)) = a5;
        *(unsigned int *)((t4 + 0x4)) = 0xC14CAD2;
        (((struct oA8_uchar *)(t4))->v) = 0x1;
        (((struct oAC_ushort *)(t4))->v) = 0xF;
        (((struct oA9_uchar *)(t4))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t4 + 0x10)) = a4;
        (((struct o48_float *)(t4))->v) = 1.0f;
        (((struct o44_float *)(t4))->v) = 1.0f;
        (((struct o40_float *)(t4))->v) = 1.0f;
        FUN_0c064d24(t4, 0x1, 0x20, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((t4 + 0x1))))), 0x0, 0xF0);
        return FUN_0c07e2f4(t4, 0x60);
    }
    return t4;
}

int FUN_0c13052c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];
    register float u0;
    register float u1;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register int t19;
    register int t22;
    register float t25;
    register float t27;
    register float t28;
    register float u31;
    register float u32;

    *(unsigned int *)(((int)stk + 0)) = a7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(a6); }
    u0 = (((struct o0_float *)0xC130668)->v);
    u1 = (((struct o4_float *)0xC130668)->v);
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) + ((((float)((int)((int)(nlRand()) % (int)0x28)) + u0) * u1)));
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o8_float *)((((int)stk + 0) + 0x4)))->v)) + ((((float)((int)((int)(nlRand()) % (int)0x28)) + u0) * u1)));
    (((struct o10_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(((int)stk + 0)))->v)) - (*(float *)((a5 + 0x0))));
    (((struct o4_float *)((((int)stk + 0) + 0x10)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)) - ((((struct o4_float *)(a5))->v)));
    u14 = (((struct o8_float *)((((int)stk + 0) + 0x4)))->v);
    u15 = (((struct o8_float *)(a5))->v);
    (((struct o8_float *)((((int)stk + 0) + 0x10)))->v) = (u14 - u15);
    u16 = (((struct o10_float *)(((int)stk + 0)))->v);
    u17 = ((u14 - u15) * (u14 - u15));
    u17 = u17 + u16 * u16;
    t19 = math_atan2_angle16(((((struct o4_float *)((((int)stk + 0) + 0x10)))->v)), _builtin_sqrtf(u17));
    t22 = t19;
    if (((int)t19 >= (int)0xC000) && ((int)t19 <= (int)0xEAAB)) {
    } else {
        t22 = 0xEAAB;
        if (((int)t19 >= (int)0x4000) && ((int)t19 <= (int)0xEAAB)) {
            t22 = 0x0;
        }
    }
    t25 = math_cos_angle16(t22);
    t27 = math_cos_angle16((*(int *)(((int)stk + 0))));
    t28 = math_sin_angle16(t22);
    u31 = (f4 * t25);
    u32 = (f4 * t25);
    *(float *)((a4 + 0x0)) = (u32 * (math_sin_angle16((*(int *)(((int)stk + 0))))));
    (((struct o4_float *)(a4))->v) = (f4 * t28);
    (((struct o8_float *)(a4))->v) = (u31 * t27);
    return t22;
}

int FUN_0c0f29a8(int a4)
{
    int stk[21];
    int t5;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R13;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    v0_0 = (v0_0);
    if ((v0_2 == 0)) goto L_C0F29C4;
    if ((v0_1 == 1)) goto L_C0F29F4;
    L_C0F2AAE:;
    return v0_1;
    L_C0F29F4:;
    t5 = *(short *)((v0_0 + 0x1C));
    *(unsigned int *)(((int)stk + 16)) = (((t5 & 0xC) >> 1) >> 1);
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x14) + 0x10);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x14) + 0x30);
    (((struct o30_float *)((((int)stk + 0) + 0x14)))->v) = ((float)(0x3 & t5) * 0.125f);
    (((struct o20_float *)((((int)stk + 0) + 0x14)))->v) = ((float)(0x3 & t5) * 0.125f);
    (((struct o10_float *)((((int)stk + 0) + 0x14)))->v) = ((float)(0x3 & t5) * 0.125f);
    (((struct o14_float *)(((int)stk + 0)))->v) = ((float)(0x3 & t5) * 0.125f);
    *(unsigned int *)(((int)stk + 8)) = ((((int)stk + 0) + 0x14) + 0x18);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x14) + 0x38);
    w0_0 = (((struct o14_float *)(((int)stk + 0)))->v);
    (((struct o38_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    (((struct o28_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    (((struct o18_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    (((struct o8_float *)((((int)stk + 0) + 0x14)))->v) = (w0_0 + 0.125f);
    w0_0 = ((float)(*(int *)(((int)stk + 16))) * 0.125f);
    (((struct o4_float *)(((((int)stk + 0) + 0x14) + 0x28)))->v) = (1.0f - w0_0);
    (((struct o4_float *)(((((int)stk + 0) + 0x14) + 0x20)))->v) = (1.0f - w0_0);
    (((struct o4_float *)(((((int)stk + 0) + 0x14) + 0x8)))->v) = (1.0f - w0_0);
    (((struct o4_float *)((((int)stk + 0) + 0x14)))->v) = (1.0f - w0_0);
    v0_1 = *(int *)(((int)stk + 4));
    v0_2 = *(int *)(((int)stk + 12));
    v0_3 = *(int *)(((int)stk + 8));
    (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = ((1.0f - w0_0) + -0.125f);
    (((struct o4_float *)(v0_1))->v) = ((1.0f - w0_0) + -0.125f);
    (((struct o4_float *)(v0_3))->v) = ((1.0f - w0_0) + -0.125f);
    (((struct o4_float *)(v0_2))->v) = ((1.0f - w0_0) + -0.125f);
    FUN_0c0cff2e((*(int *)((((((struct oC4_int *)(v0_0))->v)) + 0x8))), (((int)stk + 0) + 0x14));
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) - 1);
    v0_2 = *(short *)((v0_0 + 0x1E));
    v0_1 = (v0_2);
    if (((int)v0_2 > 0)) goto L_C0F2AAE;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_1 = (v0_2);
    if (((int)v0_2 < (int)0x10)) goto L_C0F2AAE;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    v0_1 = (0x0);
    goto L_C0F2AAE;
    L_C0F29C4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((0xC1CE198 + (((v0_1 << 1) + v0_1) << 2))); }
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(signed char *)((v0_0 + 0x2))) << 2);
    goto L_C0F29F4;
}

int FUN_0c14c96a(int a4)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;

    t4 = *(signed char *)((a4 + 0x14));
    t5 = *(int *)((a4 + 0x10));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(((((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x468) + 0x2D0) + 0x84)); }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t4 = *(signed char *)((t5 + 0x14));
            t6 = t4;
            if (t4 == 1) {
                t4 = *(signed char *)((t5 + 0x3739));
                t6 = t4;
                if (t4 == 1) {
                    t4 = 0x17;
                    if ((int)(*(signed char *)((t5 + 0x17))) > (int)0x1) {
                        FUN_0c14c866(a4, 0x0);
                        (((struct o15_uchar *)(a4))->v) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        t4 = 0x0;
                    }
                    t6 = t4;
                }
            }
            return t6;
        }
        if (((*(signed char *)((t5 + 0x14))) == 1) && ((t0 = *(signed char *)((t5 + 0x3739)), t0 == 1) && (t1 = *(signed char *)((t5 + 0x17)), (int)t1 <= (int)0x5))) {
            return FUN_0c14c7e8(a4);
        }
        (((struct o15_uchar *)(a4))->v) = 0x0;
        return FUN_0c14c866(a4, 0x1);
    }
    if ((*(signed char *)((t5 + 0x3714))) != 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o26_uchar *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = (((0x468 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)) + 0x2D0) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(((((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x468) + 0x2D0) + 0x84)); }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t0 = *(signed char *)((t5 + 0x14));
            t1 = t0;
            if (t0 == 1) {
                t0 = *(signed char *)((t5 + 0x3739));
                t4 = t0;
                if (t0 == 1) {
                    t0 = 0x17;
                    if ((int)(*(signed char *)((t5 + 0x17))) > (int)0x1) {
                        FUN_0c14c866(a4, 0x0);
                        (((struct o15_uchar *)(a4))->v) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        t0 = 0x0;
                    }
                    t4 = t0;
                }
                t1 = t4;
            }
            return t1;
        }
        if (((*(signed char *)((t5 + 0x14))) == 1) && ((t2 = *(signed char *)((t5 + 0x3739)), t2 == 1) && (t3 = *(signed char *)((t5 + 0x17)), (int)t3 <= (int)0x5))) {
            return FUN_0c14c7e8(a4);
        }
        (((struct o15_uchar *)(a4))->v) = 0x0;
        return FUN_0c14c866(a4, 0x1);
    }
    return 0x3714;
}

int FUN_0c14188c(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t28;
    register int t19;
    register float u21;
    register float u24;
    register float u25;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t28 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t3 + 0x4)) = 0xC14199C;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t3 + 0x2)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x40)) = *(struct mv3 *)(0xC202300); }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5325A4))) + 0x28), (t3 + 0x28));
        nlSubVector3op((((int)stk + 0) + 0x8), (t3 + 0x28), (a4 + 0x28));
        *(float *)(((int)stk + 12)) = 0.0f;
        FUN_0c17c450((((int)stk + 0) + 0x8));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x4C)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
        *(unsigned int *)((t3 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16)))));
        t19 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 4)) = (0xC20230C + ((t19 << 2) << 1));
        u21 = *(float *)(((0xC20230C + ((t19 << 2) << 1)) + 0x0));
        math_vec3_mul_xyz((((int)stk + 0) + 0x8), u21, u21, u21);
        u24 = *(float *)0xC1419F0;
        u25 = (((struct o4_float *)((*(int *)(((int)stk + 4)))))->v);
        math_vec3_mul_xyz((t3 + 0x4C), (u25 / u24), (u25 / u24), (u25 / u24));
        t28 = (nlAddVector3op((t3 + 0x28), (t3 + 0x28), (((int)stk + 0) + 0x8)));
    }
    return t28;
}

int FUN_0c144d6a(int a4)
{
    int stk[5];
    register int t1;
    register int t2;
    register float u6;
    register int t9;
    register float u18;
    register float u23;
    register float u37;
    register float u42;
    register int t43;

    *(unsigned int *)(((int)stk + 4)) = (*(signed char *)((a4 + 0x2)));
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            t43 = t1;
            if (t1 != 2) {
            } else {
                t2 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 0)) = (((t2 << 1) + t2) << 2);
                nlSubVector3op((((int)stk + 0) + 0x8), ((*(int *)(((int)stk + 0))) + 0xC2028FC), ((((t2 << 1) + t2) << 2) + 0xC2028B4));
                u6 = *(float *)0xC144F2C;
                math_vec3_mul_xyz((((int)stk + 0) + 0x8), u6, u6, u6);
                nlAddVector3op((a4 + 0x28), (a4 + 0x28), (((int)stk + 0) + 0x8));
                t9 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t9 - 1);
                t43 = (short)(t9 - 1);
                if ((int)(short)(t9 - 1) <= 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0xC2028FC)); }
                    t43 = (FUN_0c144984(a4, 0x3, 0x0));
                }
            }
        } else {
            u18 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u18 + 0.0319999978f);
            if (!(1.0f > (u18 + 0.0319999978f))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            u23 = (((struct o48_float *)(a4))->v);
            (((struct o44_float *)(a4))->v) = u23;
            (((struct o40_float *)(a4))->v) = u23;
            t43 = 0x40;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o48_float *)(a4))->v) = 0.680000007f;
        (((struct o44_float *)(a4))->v) = 0.680000007f;
        (((struct o40_float *)(a4))->v) = 0.680000007f;
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        u37 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u37 + 0.0319999978f);
        if (!(1.0f > (u37 + 0.0319999978f))) {
            (((struct o48_float *)(a4))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        u42 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u42;
        (((struct o40_float *)(a4))->v) = u42;
        t43 = 0x40;
    }
    return t43;
}

int FUN_0c14fed8(int a4, int a5, float f4, float f5)
{
    int stk[32];
    register int t1;
    register int t2;
    register int t4;
    register float u8;
    register float u11;
    register float u12;
    register float u14;
    register float t15;
    register float u16;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register int t29;
    register int t31;
    register int t32;
    register int t35;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t1 = *(int *)((((short)(*(signed char *)(((int)stk + 16))) * (short)0x3938) + 0xC5324D0));
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 8) + 0x18) + 0x60);
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 8) + 0x18);
    *(unsigned int *)(((int)stk + 28)) = 0xC2030D8;
    *(unsigned int *)(((int)stk + 8)) = 0x2;
    t2 = 0xC203058;
    for (;;) {
        t4 = (*(int *)(((int)stk + 24)));
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((*(int *)(((int)stk + 12)))); }
            u8 = ((math_sin_angle16((t1 + 0x4000))) * ((((struct o4_float *)(t2))->v)));
            u11 = *(float *)((t4 + 0x0));
            u12 = ((math_cos_angle16((t1 + 0x4000))) * (*(float *)((t2 + 0x0))));
            u14 = (u12 * f5);
            *(float *)((t4 + 0x0)) = (u11 + (((u8 * f5)) - u14));
            *(int *)((int)stk + 4) = (0x8 + t4);
            t15 = math_cos_angle16((t1 + 0x4000));
            u16 = (((struct o4_float *)(t2))->v);
            u19 = (((struct o8_float *)(t4))->v);
            u20 = ((math_sin_angle16((t1 + 0x4000))) * (*(float *)((t2 + 0x0))));
            u21 = (t15 * u16);
            u22 = (u20 * f5);
            u22 = u22 + f5 * u21;
            (((struct o8_float *)(t4))->v) = (u19 + u22);
            (((struct o4_float *)(t4))->v) = (((((struct o4_float *)(t4))->v)) + ((f4 * 16.0f)));
            t4 = (t4 + 0xC);
            t2 = (t2 + 0x8);
            if ((unsigned int)t4 >= (unsigned int)(*(int *)(((int)stk + 20)))) {
                break;
            }
        }
        t29 = (*(int *)(((int)stk + 28)));
        *(int *)((int)stk + 4) = t29;
        *(int *)((int)stk + 0) = 0xC202E68;
        t31 = FUN_0c1502e8((*(signed char *)(((int)stk + 16))), 0x8, 0x0, (((int)stk + 8) + 0x18), 0xC202E68, t29);
        t32 = t31;
        if (t31 != 0) {
            (((struct o10_float *)((0x41C + t31)))->v) = f4;
            *(unsigned short *)((t31 + 0x1E)) = 0x0;
            t32 = 0x0;
        }
        t35 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t35 - 1);
        if ((t35 - 1) == 0) {
            break;
        }
    }
    return t32;
}

int FUN_0c0ffdae(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC1FBBD0); }
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    t0 = *(int *)0xC472B98;
    t1 = 0xC1FBC04;
    if ((*(signed char *)0xC5429A8) == 0) {
        t1 = 0xC1FBBE0;
    }
    (((struct o2C_float *)(a4))->v) = (*(float *)(((t0 << 2) + t1)));
    u0 = 1.0f;
    if ((*(int *)0xC472B28) == 0) {
    } else {
        u0 = (*(float *)0xC0FFF7C);
    }
    (((struct oBC_float *)(a4))->v) = u0;
    (((struct oB8_float *)(a4))->v) = u0;
    (((struct oB4_float *)(a4))->v) = u0;
    if ((int)((((struct o22_short *)(a4))->v)) < (int)0x23) {
        t0 = 0x0;
        t1 = 0x23;
        t2 = ((((struct oC4_int *)(a4))->v));
        t3 = 0xC1FBBC0;
        t4 = 0xC1FBBD0;
        t5 = ((((struct o22_short *)(a4))->v));
    } else {
        t0 = 0x23;
        t1 = 0x32;
        t2 = ((((struct oC4_int *)(a4))->v));
        t3 = 0xC1FBBD0;
        t4 = 0xC1FBBC0;
        t5 = ((((struct o22_short *)(a4))->v));
    }
    FUN_0c058a6e((t2 + 0x14), t3, t4, t5, t1, t0);
    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0x32) {
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    return 0x22;
}

int FUN_0c2b1830(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    if ((unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1) <= (unsigned int)(*(int *)(((a4 - 32) + 0x4)))) {
    } else {
        t1 = (*(int *)(((a4 - 32) + 0x4)));
    }
    FUN_0c2b176e();
    t2 = *(int *)0xC8B9DC8;
    t3 = (*(int *)((t2 + 0x0)));
    t4 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t3 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t3 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t4 = t3;
        t3 = (*(int *)((t3 + 0x0)));
    }
    t2 = *(int *)((t3 + 0x4));
    if (t2 == (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t4 + 0x0)) = (*(int *)((t3 + 0x0)));
        t5 = t3;
    } else {
        *(unsigned int *)((t3 + 0x4)) = (t2 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        t5 = (t3 + ((((t2 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    if (a4 != (t5 + 0x20)) {
        if ((unsigned int)a4 < (unsigned int)(t5 + 0x20)) {
            if ((unsigned int)(((((t1 << 2) << 2) << 1) + t5) + 0x20) > (unsigned int)(t5 + 0x20)) {
                t2 = (((((t1 << 2) << 2) << 1) + t5) + 0x20);
                t3 = a4;
                for (;;) {
                    t6 = t3;
                    t3 = (t3 - 32);
                    t7 = t2;
                    t2 = (t2 - 32);
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(t7) = *(struct mv8 *)(t6); }
                    if ((unsigned int)t2 <= (unsigned int)(t5 + 0x20)) {
                        break;
                    }
                }
            }
        } else {
            if (((unsigned int)a4 > (unsigned int)(t5 + 0x20)) && ((unsigned int)(t5 + 0x20) < (unsigned int)(((((t1 << 2) << 2) << 1) + t5) + 0x20))) {
                t2 = (t5 + 0x20);
                t3 = a4;
                for (;;) {
                    t6 = t3;
                    t3 = (t3 + 0x20);
                    t7 = t2;
                    t2 = (t2 + 0x20);
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(t7) = *(struct mv8 *)(t6); }
                    if ((unsigned int)t2 >= (unsigned int)(((((t1 << 2) << 2) << 1) + t5) + 0x20)) {
                        break;
                    }
                }
            }
        }
    }
    *(unsigned int *)((t5 + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    *(unsigned int *)0xC8B9DC8 = t4;
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
    return (t5 + 0x20);
}

void FUN_0c06130a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[4];
    register float u1;
    register float u2;
    register float u3;
    register float u5;
    register float u6;
    register float u7;
    register float u9;
    register float u11;
    register float u19;
    register float u18;
    register float u64;
    register float u63;

    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC1C4A58); }
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        u1 = *(float *)((a7 + 0x0));
        u2 = *(float *)((a6 + 0x0));
        u3 = (u1 - u2);
        if (0.0f > (u1 - u2)) {
            u3 = ((-u1) + u2);
        }
        u5 = (((struct oC_float *)(a7))->v);
        u6 = (((struct o8_float *)(a7))->v);
        u7 = (((struct o8_float *)(a6))->v);
        u9 = (u6 - u7);
        if (0.0f > (u6 - u7)) {
            u9 = ((-u6) + u7);
        }
        u11 = (((struct o14_float *)(a7))->v);
        if (0.0f > (u5 - u3)) {
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > 2000.0f) {
                u19 = (u5 - u3);
                if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                    u18 = (u5 - u3);
                    u18 = -u18;
                    u19 = u18;
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u19);
                FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
                (((struct o375E_uchar *)(a4))->v) = 0x1;
            }
        }
        if (0.0f > (u11 - u9)) {
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > (*(float *)0xC0614A8)) {
                u64 = (u11 - u9);
                if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                    u63 = (u11 - u9);
                    u63 = -u63;
                    u64 = u63;
                }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u64);
                FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
                (((struct o375E_uchar *)(a4))->v) = 0x1;
            }
        }
    }
}

int FUN_0c08ba8c(int a4)
{
    int stk[9];
    register float t19;
    register float u20;
    register float u23;
    register int t29;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x37;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x37, 0xFFFFFFFF, 0x3, 0x37);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t29 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x39;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x39, 0xFFFFFFFF, 0x3, 0x39);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((0x380C + a4)); }
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o30_float *)(a4))->v)));
        t19 = nlScalor(((int)stk + 12), *(Stk3 *)(((int)stk + 12)));
        u20 = t19;
        if (200.0f > t19) {
            u20 = 200.0f;
        }
        u23 = u20;
        if (u20 == 0.0f) {
            u23 = 9.99999975e-05f;
        }
        (((struct o3790_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v))) + -50.0f);
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o3790_float *)(a4))->v)) / u23)));
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t29 = 0x17;
    }
    return t29;
}

int FUN_0c13f398(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC13F4A0;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        thunk_FUN_0c058310(((*(int *)(((((*(int *)0xC2A2220) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t1 + 0x28));
        u0 = *(float *)0xC13F4F0;
        u1 = math_sin_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000));
        u2 = (((struct o28_float *)(t1))->v);
        u3 = (u1 * (math_cos_angle16(((-(*(int *)((t1 + 0x38)))) + 0x14000))));
        u1 = u2;
        u1 = u1 + u0 * u3;
        (((struct o28_float *)(t1))->v) = u1;
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - (((math_cos_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000))) * u0)));
        u1 = math_sin_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000));
        u2 = (((struct o30_float *)(t1))->v);
        u3 = (u1 * (math_sin_angle16(((-(*(int *)((t1 + 0x38)))) + 0x14000))));
        u1 = u2;
        u1 = u1 + u0 * u3;
        (((struct o30_float *)(t1))->v) = u1;
    } else {
        t0 = t1;
    }
    return t0;
}

void FUN_0c061416(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[4];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u9;
    register float u18;
    register float u17;
    register float u65;
    register float u64;

    *(unsigned int *)(((int)stk + 0)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC1C4A64); }
    if ((*(signed char *)((a4 + 0x0))) == 0) {
        u1 = *(float *)((a7 + 0x0));
        u2 = *(float *)((a6 + 0x0));
        u3 = (((struct oC_float *)(a7))->v);
        u4 = (u1 - u2);
        if (0.0f > (u1 - u2)) {
            u4 = ((-u1) + u2);
        }
        u6 = (((struct o8_float *)(a7))->v);
        u7 = (((struct o8_float *)(a6))->v);
        u9 = (u6 - u7);
        if (0.0f > (u6 - u7)) {
            u9 = ((-u6) + u7);
        }
        if (0.0f > (u3 - u4)) {
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > 1000.0f) {
                u18 = (u3 - u4);
                if ((*(float *)((a7 + 0x0))) > (*(float *)((a6 + 0x0)))) {
                    u17 = (u3 - u4);
                    u17 = -u17;
                    u18 = u17;
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u18);
                FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
            }
        }
        if (0.0f > (u3 - u9)) {
            if ((((((struct o2C_float *)(a4))->v)) - ((((struct o168_float *)(a4))->v))) > (*(float *)0xC0615FC)) {
                u65 = (u3 - u9);
                if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                    u64 = (u3 - u9);
                    u64 = -u64;
                    u65 = u64;
                }
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + u65);
                FUN_0c060c80(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0))));
            }
        }
    }
}

int FUN_0c07ce58(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register float u0;
    register float u1;
    register float u2;
    float u3;
    register float u4;

    if ((*(signed char *)0xC54235E) != 0) {
        t5 = ((*(signed char *)((a4 + 0x1))) + 0x1);
    } else {
        t6 = 0x0;
        t7 = a5;
        t8 = 0x0;
        t9 = 0x0;
        u2 = f4;
        u3 = (*(float *)0xC07CFA8);
        for (;;) {
            if ((int)t9 < (int)0x4) {
                t10 = (t9 * 0x3938);
                t10 = (t10 + 0xC532498);
                if (((*(signed char *)((t10 + 0x3714))) != 0) && ((u0 = 0.0f, u1 = (((struct o160_float *)(t10))->v), u1 > u0) && ((t0 = *(signed char *)((a4 + 0x1)), t1 = *(signed char *)((t10 + 0x1)), t0 != t1) && (t2 = *(signed char *)((t10 + 0x3719)), t3 = *(signed char *)((a4 + 0x3719)), t3 != t2)))) {
                    t7 = t10;
                    t7 = (t7 + 0x28);
                    t6 = a4;
                    u4 = (FUN_0c07cd84(t6, t7, a5));
                    u0 = 0.0f;
                    u2 = u4;
                    if ((u4 != u0) && (u3 > u2)) {
                        u3 = u2;
                        t8 = (t9 * 0x3938);
                        t8 = (t8 + 0xC532498);
                        t8 = (*(signed char *)((t8 + 0x1)));
                        t8 = (t8 + 0x1);
                    }
                } else {
                    t10 = t6;
                    t11 = t7;
                }
                t12 = t10;
                t10 = t11;
            } else {
                t7 = 0x380C;
                t7 = (t7 + a4);
                t6 = a4;
                u4 = (FUN_0c07cd84(t6, t7, a5));
                u0 = 0.0f;
                u2 = u4;
                if ((u4 != u0) && (u3 > u2)) {
                    u3 = u2;
                    t8 = (*(signed char *)((a4 + 0x1)));
                    t8 = (t8 + 0x1);
                }
            }
            t6 = t12;
            t7 = t10;
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)0x5) {
                break;
            }
        }
        if ((t8 != 0) && (t4 = *(signed char *)((a4 + 0x1)), t8 != (t4 + 0x1))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x380C + a4)) = *(struct mv3 *)(((((t8 - 1) * 0x3938) + 0xC532498) + 0x28)); }
            (((struct o377C_uint *)(a4))->v) = (((t8 - 1) * 0x3938) + 0xC532498);
        }
        t5 = t8;
    }
    return t5;
}

int FUN_0c16a6e0(int a4)
{
    int stk[4];
    register int t1;
    int t3;
    register float t6;
    register int t29;
    register int t46;
    register int t49;
    register int t58;
    register int t67;

    *(unsigned int *)(((int)stk + 0)) = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                (((struct o15_uchar *)(a4))->v) = 0x2;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t67 = 0x16;
            } else {
                FUN_0c16a40c(a4);
                t3 = *(signed char *)((a4 + 0x2));
                if ((t3 != 0) && (t3 != 1)) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t67 = 0x16;
                } else {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x380C)); }
                    t6 = nlLength((a4 + 0x28), (((int)stk + 0) + 0x4));
                    t67 = 0xC16A810;
                    if (!(t6 > (*(float *)0xC16A810))) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        t67 = 0x16;
                    }
                }
            }
        } else {
            FUN_0c16a40c(a4);
            if (((((struct o20_short *)(a4))->v)) != 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            }
            t67 = 0x20;
            if ((int)((((struct o20_short *)(a4))->v)) <= 0) {
                t29 = *(signed char *)0xC542235;
                t67 = t29;
                if (t29 != 2) {
                } else {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t67 = 0x16;
                }
            }
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t46 = *(signed char *)((a4 + 0x2));
        t49 = 0x5A;
        if (t46 != 0) {
            t49 = 0x3C;
            if (t46 != 1) {
                t49 = 0xB4;
            }
        }
        (((struct o20_ushort *)(a4))->v) = t49;
        FUN_0c16a40c(a4);
        if (((((struct o20_short *)(a4))->v)) != 0) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        }
        t67 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) <= 0) {
            t58 = *(signed char *)0xC542235;
            t67 = t58;
            if (t58 != 2) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t67 = 0x16;
            }
        }
    }
    return t67;
}

int FUN_0c0df30a(int a4)
{
    int stk[9];
    register int t0;
    register int t24;
    register int t1;
    register int t2;
    register float u7;
    register float u8;
    register float u9;
    register int t10;
    register int t11;
    register float u15;
    register float u18;
    register int t23;

    t0 = (((struct o20_short *)(a4))->v);
    t24 = t0;
    if ((t0 & 7) == 0) {
        t1 = nlRand();
        t2 = ((~(((~t1) + 0x1) & 0xF)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0xF);
        }
        math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), ((int)stk + 0));
        u7 = (((struct o0_float *)0xC0DF468)->v);
        u8 = (((struct o4_float *)0xC0DF468)->v);
        u9 = (((struct o8_float *)0xC0DF468)->v);
        t10 = 0x4;
        t11 = ((t2 << 8) << 1);
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(((int)stk + 0)); }
            *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - u7);
            u15 = (*(float *)(((int)stk + 32)));
            u15 = u15 + u9 * (math_cos_angle16(t11));
            *(float *)(((int)stk + 32)) = u15;
            u18 = (*(float *)(((int)stk + 24)));
            u18 = u18 + u9 * (math_sin_angle16(t11));
            t11 = (t11 + 0x1999);
            *(float *)(((int)stk + 24)) = u18;
            *(float *)(((int)stk + 12)) = ((((struct o4C_float *)(a4))->v));
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 16)) = 0.0f;
            t23 = FUN_0c150160((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), ((((struct o18_float *)0xC0DF468)->v)), ((((struct o14_float *)0xC0DF468)->v)), ((((struct o10_float *)0xC0DF468)->v)), u8);
            t10 = (t10 - 0x1);
            if (t10 == 0) {
                break;
            }
        }
        t24 = t23;
    }
    return t24;
}
