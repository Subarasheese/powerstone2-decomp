/* Straight-line functions with calls and guards (batch gen_ez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o42C_short { char p[0x42C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d04c4(int, int);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
extern int FUN_0c0f105c();
int FUN_0c14f824(int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c14cff8(int a4, int a5, int a6, int a7);
int FUN_0c15bff8(int a4);
int FUN_0c0e6580(int a4, float f4);
int FUN_0c12d4cc(int a4, int a5, int a6, int a7);
int FUN_0c164fa8(int a4, int a5, int a6, int a7);
int FUN_0c063286(int a4, int a5, int a6);
int FUN_0c0f109a(int a4, int a5, int a6, int a7);
int FUN_0c0a46d4(int a4, int a5, int a6, int a7);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int FUN_0c14cff8(int a4, int a5, int a6, int a7)
{
    int stk[5];
    int t1;
    int t0;
    int R1012;
    int t33;
    float u12;
    float u16;
    int t24;

    R1012 = *(int *)((int)stk + 12);

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
        t33 = t1;
        if (t1 == 0) {
        } else {
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x47, (*(int *)0xC4B40CC));
            (((struct o1_uchar *)(t1))->v) = (*(signed char *)(a4 + 0x1));
            (((struct o2_uchar *)(t1))->v) = (*(signed char *)(((int)stk + 16)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0x1F;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            (((struct o4_uint *)(t1))->v) = 0xC14CE60;
            (((struct o10_uint *)(t1))->v) = a4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1 + 0x28) = *(struct mv3 *)(a4 + 0x28); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t1 + 0x34) = *(struct mv3 *)(a4 + 0x34); }
            (((struct o38_uint *)(t1))->v) = (((((struct o38_int *)(t1))->v)) + (*(int *)(((t0 << 2) + 0xC2A272C))));
            R1012 = (t1 + 0x28);
            u12 = ((((struct o28_float *)(t1))->v)) + 80.0f * (math_sin_angle16(((((struct o38_int *)(t1))->v))));
            (((struct o28_float *)(t1))->v) = u12;
            R1012 = (t1 + 0x30);
            u16 = ((((struct o30_float *)(t1))->v)) + 80.0f * (math_cos_angle16(((((struct o38_int *)(t1))->v))));
            (((struct o30_float *)(t1))->v) = u16;
            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 150.0f);
            (((struct o40_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o4C_float *)(t1))->v) = ((math_sin_angle16(((((struct o38_int *)(t1))->v)))) * 25.0f);
            (((struct o54_float *)(t1))->v) = ((math_cos_angle16(((((struct o38_int *)(t1))->v)))) * 25.0f);
            (((struct o60_float *)(t1))->v) = 0.0f;
            (((struct o58_float *)(t1))->v) = 0.0f;
            (((struct o38_uint *)(t1))->v) = ((int)((int)(nlRand()) % (int)0x64));
            (((struct o1C_ushort *)(t1))->v) = 0x96;
            R1012 = 0xF0;
            t24 = *(signed char *)(t1 + 0x1);
            FUN_0c064d24(t1, 0x1, 0x31, 0x0, 0x100, (~((int)0x1 << (int)t24)), 0x0, 0xF0);
            (((struct o1B_uchar *)(t1))->v) = t0;
            if ((*(signed char *)(t0 + 0xC2A2754)) == 0) {
                (((struct o12A_ushort *)(t1))->v) = 0x0;
                (((struct o20_ushort *)(t1))->v) = 0x8;
            }
            FUN_0c07e2f4(t1, 0x60);
            *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1;
            t33 = 0x1;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0xA) continue;
        break;
    }
    return t33;
}

int FUN_0c15bff8(int a4)
{
    int stk[3];
    int t30;
    int t90;
    int t1;
    int t41;
    int t62;
    int t31;
    float u53;
    float u76;
    int t2;

    t1 = (((struct o10_int *)(a4))->v);
    if (((*(signed char *)(a4 + 0x2)) == 12) && (t2 = (((struct o20_short *)(a4))->v), t2 != 0)) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        t90 = 0x20;
    } else {
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((short)(*(signed char *)(t1 + 0x1)) * (short)0x2F8) + 0xC5411C4)); }
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((((struct o28_float *)(t1))->v)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(t1))->v)));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o30_float *)(t1))->v)));
        nlVoidUnitVector(((int)stk + 0));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((*(float *)(((int)stk + 0))) * ((((struct o378C_float *)(t1))->v))) * 200.0f)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - (((((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o378C_float *)(t1))->v))) * 200.0f)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - (((((((struct o4_float *)(((int)stk + 0)))->v)) * ((((struct o378C_float *)(t1))->v))) * 200.0f)));
        t30 = (((struct oC4_int *)(a4))->v);
        t31 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t31 + 0x1);
        if ((int)(short)(t31 + 0x1) >= (int)0x8) {
            (((struct o1C_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c037498(t30, (*(int *)((((((*(signed char *)(a4 + 0x2)) - 11) << 2) + (0xC2A2B14 + ((((((struct o1C_short *)(a4))->v)) << 2) << 1))) + 0x0))), 0x12, (*(int *)0xC4B40CC));
        (((struct o80_uint *)(t30))->v) = (((((struct o80_int *)(t30))->v)) - 0x2D8);
        t41 = *(signed char *)(a4 + 0x14);
        switch (t41) {
        case 0:
            (((struct o84_float *)(t30))->v) = (((((struct o84_float *)(t30))->v)) + 0.0599999987f);
            u76 = (((struct o84_float *)(t30))->v);
            (((struct o8C_float *)(t30))->v) = u76;
            (((struct o88_float *)(t30))->v) = u76;
            t90 = 0x84;
            if (((((struct o84_float *)(t30))->v)) > 1.0f) {
                (((struct o1E_ushort *)(a4))->v) = 0x6;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t90 = 0x14;
            }
            break;
        case 1:
            t62 = (((struct o1E_short *)(a4))->v);
            (((struct o1E_ushort *)(a4))->v) = (t62 - 1);
            t90 = (short)(t62 - 1);
            if ((int)(short)(t62 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                t90 = 0x14;
            }
            break;
        case 2:
            (((struct o84_float *)(t30))->v) = (((((struct o84_float *)(t30))->v)) - 0.0799999982f);
            if (!(((((struct o84_float *)(t30))->v)) > 0.0f)) {
                (((struct o84_float *)(t30))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            }
            u53 = (((struct o84_float *)(t30))->v);
            (((struct o8C_float *)(t30))->v) = u53;
            (((struct o88_float *)(t30))->v) = u53;
            t90 = 0x88;
            break;
        default:
            t90 = t41;
            if (t41 != 3) {
            } else {
                t90 = (FUN_0c03f346(a4));
            }
            break;
        }
    }
    return t90;
}


int FUN_0c12d4cc(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t40;
    register int t2;
    register int t3;
    register float u5;
    register float u6;
    register float u7;
    register float u21;
    register float t22;
    register float u25;
    register float t27;
    register float u30;
    register int t33;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t40 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12D692;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0x7)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x7);
        }
        u5 = *(float *)((0xC2A113C + (t3 << 2)));
        (((struct o48_float *)(t0))->v) = (u5 + 3.0f);
        (((struct o44_float *)(t0))->v) = (u5 + 3.0f);
        (((struct o40_float *)(t0))->v) = (u5 + 3.0f);
        u6 = (((struct o0_float *)0xC12D6BC)->v);
        u7 = (((struct o4_float *)0xC12D6BC)->v);
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * u7) / u6));
        *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * u7) / u6));
        *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) + (int)(((float)((int)((int)(nlRand()) % (int)0x168)) * u7) / u6));
        *(unsigned int *)((t0 + 0x34)) = ((*(int *)((t0 + 0x34))) & 0xFFFF);
        *(unsigned int *)((t0 + 0x38)) = ((*(int *)((t0 + 0x38))) & 0xFFFF);
        *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) & 0xFFFF);
        u21 = (((struct o10_float *)0xC12D6BC)->v);
        t22 = math_cos_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
        u25 = (t22 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
        (((struct o4C_float *)(t0))->v) = (u25 * u21);
        t27 = math_sin_angle16(((-(*(int *)((t0 + 0x38)))) + 0x14000));
        u30 = (t27 * (math_sin_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(t0))->v) = (u30 * u21);
        (((struct o50_float *)(t0))->v) = (-((math_cos_angle16(((-(*(int *)((t0 + 0x34)))) + 0x14000))) * u21));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x41F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oB0_float *)(t0))->v) = 1.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1C)) = 0x8;
        t33 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 0)) = t33;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 0))), 0x2, (*(int *)((((signed char)t33 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        t40 = 0xF;
    }
    return t40;
}

int FUN_0c164fa8(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t0;
    register int t44;
    register int t3;
    register int t13;
    register int t15;
    register int t18;
    register int t19;
    register float u21;
    register float u22;
    register float u23;
    register float t24;
    register float u25;
    register int t28;
    register int t30;
    register int t33;
    register int t34;
    register float t43;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2, a7);
    t44 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 20)));
        *(unsigned int *)((t0 + 0x4)) = 0xC164E18;
        FUN_0c07e3ae(t0, 0x74);
        *(int *)((int)stk + 12) = 0xF0;
        *(int *)((int)stk + 8) = 0x0;
        t3 = *(int *)(((int)stk + 20));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t3));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x3, 0x9, 0x0, 0x100, (~((int)0x1 << (int)t3)), 0x0, 0xF0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 16)))); }
        nlSubVector3op((((int)stk + 16) + 0x18), (*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 16))));
        if ((*(float *)(((int)stk + 48))) == 0.0f) {
            *(float *)(((int)stk + 48)) = 9.99999997e-07f;
        }
        t13 = math_atan2_angle16((*(float *)(((int)stk + 40))), (*(float *)(((int)stk + 48))));
        t15 = (t13 & 0xFFFF);
        if ((int)((t13 & 0xFFFF) - (*(int *)((t0 + 0x38)))) > (int)0x8000) {
            t15 = ((t13 & 0xFFFF) - 0x10000);
        }
        t18 = *(int *)((t0 + 0x38));
        t19 = t15;
        if ((int)(t15 - (*(int *)((t0 + 0x38)))) < (int)0xFFFF8000) {
            t19 = (t15 + 0x10000);
        }
        *(unsigned int *)((t0 + 0x38)) = ((t18 + (t19 - t18)) & 0xFFFF);
        u21 = *(float *)(((int)stk + 40));
        u22 = *(float *)(((int)stk + 48));
        u23 = (u22 * u22);
        u23 = u23 + u21 * u21;
        t24 = math_signed_sqrt(u23);
        u25 = t24;
        if (t24 == 0.0f) {
            u25 = 9.99999997e-07f;
        }
        t28 = math_atan2_angle16((-(*(float *)(((int)stk + 44)))), u25);
        t30 = (t28 & 0xFFFF);
        if ((int)((t28 & 0xFFFF) - (*(int *)((t0 + 0x34)))) > (int)0x8000) {
            t30 = ((t28 & 0xFFFF) - 0x10000);
        }
        t33 = *(int *)((t0 + 0x34));
        t34 = t30;
        if ((int)(t30 - (*(int *)((t0 + 0x34)))) < (int)0xFFFF8000) {
            t34 = (t30 + 0x10000);
        }
        *(unsigned int *)((t0 + 0x34)) = ((t33 + (t34 - t33)) & 0xFFFF);
        nlUnitMatrix();
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0xC)) = *(struct mv3 *)(0xC2A325C); }
        *(float *)(((int)stk + 36)) = 5.0f;
        nlRotateAY((*(int *)((t0 + 0x38))));
        nlRotateAX((*(int *)((t0 + 0x34))));
        nlCalcPoint((((int)stk + 16) + 0xC), (t0 + 0x4C));
        *(unsigned int *)((t0 + 0x34)) = (((*(int *)((t0 + 0x34))) + 0x4000) & 0xFFFF);
        t43 = nlScalor((((int)stk + 16) + 0x18));
        *(unsigned short *)((t0 + 0x1E)) = (int)(t43 / 5.0f);
        t44 = (int)(t43 / 5.0f);
    }
    return t44;
}

int FUN_0c063286(int a4, int a5, int a6)
{
    int stk[6];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register int t151;
    register int t23;
    register float u62;
    register float u99;
    register float u21;
    float u22;
    register float u63;
    register float u64;
    float u100;
    register float u113;
    register float u119;
    register float u130;

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4B48); }
    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a6))->v);
    u2 = (((struct oC_float *)((a6 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a6 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a6 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u7 + u6) - u11);
    u13 = (((struct oC_float *)((a6 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a6 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = ((u14 + u13) - u18);
    t151 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u21 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u21 > 0.0f) && (u22 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u22 > 0.0f))) {
        t23 = FUN_0c0612ee(a5);
        if (t23 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t151 = 0x2;
        } else {
            u62 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u62 > 9.0f) && ((u63 = (((struct oC_float *)(((int)stk + 0)))->v), u62 > u63) || (u64 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u62 > u64))) {
                u99 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u99 > u62) && (u100 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u99 > u100))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u113 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u113 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u113;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u119 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u119 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u119;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u130 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u130 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u130);
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                    FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
                }
            }
            t151 = 0x1;
        }
    }
    return t151;
}


int FUN_0c0a46d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    float u0;
    register float u1;

    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        (((struct o3850_uint *)(a4))->v) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4, a5, a6)));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(((((struct o3850_int *)(a4))->v)))) * (*(float *)0xC25D344));
        u1 = (math_cos_angle16(((((struct o3850_int *)(a4))->v))));
    } else {
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (*(float *)0xC25D344));
        u1 = (math_cos_angle16((*(int *)((a4 + 0x38)))));
    }
    (((struct o54_float *)(a4))->v) = (u1 * (*(float *)0xC25D344));
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(12.0f > u1) && !(u1 > 30.0f)) {
        t0 = *(short *)((a4 + 0x1C));
        t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x7);
        }
        if (t1 == 0) {
            FUN_0c07e2f4(a4, 0x5);
        }
    }
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 30) {
        FUN_0c07e2f4(a4, 0x6);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
        return FUN_0c085d0c(a4);
    }
    u1 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if (!(((((struct o0_float *)0xC0A4938)->v)) > u1) && (u0 = (((struct o4_float *)0xC0A4938)->v), !(u1 > u0))) {
        u0 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t0 = ((~(((~(int)u0) + 0x1) & 0x7)) + 0x1);
        if ((int)(int)u0 >= 0) {
            t0 = ((int)u0 & 0x7);
        }
        if (t0 == 0) {
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    return FUN_0c038362(a4);
}
