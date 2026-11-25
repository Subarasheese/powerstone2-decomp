/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f444();
int FUN_0c052cf8(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c058542(int, int);
int FUN_0c058716(int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0cff96(int, int, float);
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c0da628(int);
int FUN_0c13683e(int, int, int, int, int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c16328c(int, int, int, float);
int FUN_0c1636ae(int, int, int);
int FUN_0c169568(int, int, int);
int math_atan2_angle16(float, float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c140ef0(int a4, int a5);
int FUN_0c1687dc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1697b8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c140b18(int a4, int a5);
int FUN_0c055c60(int a4, int a5);
int FUN_0c0f18d4(int a4, int a5, int a6, int a7);
int FUN_0c13c634(int a4);
float FUN_0c14b84a(int a4, int a5, int a6, int a7);
int FUN_0c0db70e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0dbc8c(int a4, int a5, int a6, int a7);
int FUN_0c139010(int a4, int a5, int a6, int a7);
int FUN_0c162c4e(int a4, int a5, int a6, int a7);
int FUN_0c12d268(int a4, int a5);
void FUN_0c13691a(int a4, int a5, int a6, int a7);

int FUN_0c140ef0(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t38;
    register int t20;
    register int t32;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x2));
    t38 = t3;
    if (t3 == 0) {
    } else {
        *(unsigned int *)((t3 + 0x4)) = 0xC141090;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x5, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) + 100.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0xF;
        FUN_0c03744a(((((struct oC8_int *)(t3))->v)), 0x0, 0xF, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(t3))->v)) + 0x6)) = 0x41F;
        (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x4)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
        t20 = (((struct oC8_int *)(t3))->v);
        (((struct o70_float *)(t20))->v) = (((((struct o70_float *)(t20))->v)) + 220.0f);
        (((struct o88_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.699999988f;
        (((struct o14_float *)(((((struct oC8_int *)(t3))->v))))->v) = 0.0f;
        FUN_0c03744a(((((struct oCC_int *)(t3))->v)), 0x1, 0xF, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oCC_int *)(t3))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oCC_int *)(t3))->v)) + 0x6)) = 0x21F;
        (((struct o68_uint *)((*(int *)(((0xC4 + t3) + 0x8)))))->v) = (((((struct oC4_int *)(t3))->v)) + 0x28);
        t32 = (((struct oCC_int *)(t3))->v);
        (((struct o70_float *)(t32))->v) = (((((struct o70_float *)(t32))->v)) + 220.0f);
        (((struct o88_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.699999988f;
        (((struct o18_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oCC_int *)(t3))->v))))->v) = 0.0f;
        t38 = 0x20;
    }
    return t38;
}



int FUN_0c140b18(int a4, int a5)
{
    int stk[5];
    register int t2;
    register int t3;
    register float t14;
    register float u17;
    register float u18;
    register float u19;
    register float t25;
    register float u28;
    register float u29;
    register float u30;
    register int t31;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t2 = FUN_0c037320(0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x1, 0x0, t2);
    if (t3 == 0) {
        return t3;
    }
    *(unsigned int *)((t3 + 0x4)) = 0xC140CC0;
    *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    *(unsigned int *)((t3 + 0x10)) = a4;
    FUN_0c03733c(t3, 0x0, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(t3))->v) = 0x1;
    (((struct oAC_ushort *)(t3))->v) = 0xF;
    (((struct oA9_uchar *)(t3))->v) = 0x21;
    thunk_FUN_0c058310(((*(int *)(((((*(int *)((((unsigned char)(*(signed char *)(((int)stk + 16))) << 2) + 0xC2A22FC))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t3 + 0x28));
    (((struct o48_float *)(t3))->v) = 1.0f;
    (((struct o44_float *)(t3))->v) = 1.0f;
    (((struct o40_float *)(t3))->v) = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((t3 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
    *(int *)((int)stk + 12) = (t3 + 0x28);
    t14 = math_sin_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000));
    u17 = (((struct o28_float *)(t3))->v);
    u18 = (t14 * (math_cos_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000))));
    u19 = u17;
    u19 = u19 + 50.0f * u18;
    (((struct o28_float *)(t3))->v) = u19;
    (((struct o2C_float *)(t3))->v) = (((((struct o2C_float *)(t3))->v)) - (((math_cos_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000))) * 50.0f)));
    *(int *)((int)stk + 12) = (t3 + 0x30);
    t25 = math_sin_angle16(((-(*(int *)((t3 + 0x34)))) + 0x14000));
    u28 = (((struct o30_float *)(t3))->v);
    u29 = (t25 * (math_sin_angle16(((-(*(int *)((t3 + 0x38)))) + 0x14000))));
    u30 = u28;
    u30 = u30 + 50.0f * u29;
    (((struct o30_float *)(t3))->v) = u30;
    *(int *)((int)stk + 12) = 0xF0;
    *(int *)((int)stk + 8) = 0x0;
    t31 = *(signed char *)((t3 + 0x1));
    *(int *)((int)stk + 4) = (~((int)0x1 << (int)t31));
    *(int *)((int)stk + 0) = 0x100;
    FUN_0c064d24(t3, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t31)), 0x0, 0xF0);
    return FUN_0c07e2f4(t3, ((*(signed char *)(((int)stk + 16))) + 0x60));
}

int FUN_0c055c60(int a4, int a5)
{
    int stk[33];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t8;
    register int t57;
    register float u58;
    register float u51;
    int t15;
    register int t20;
    register int t30;
    register int t37;
    register int t60;
    register int t3;
    register float u6;
    register float u7;
    register float u44;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t0 = a5;
    t1 = 0xC532498;
    t2 = 0xC532498;
    t4 = 0xC532498;
    t5 = 0x0;
    for (;;) {
        t8 = *(int *)(((int)stk + 0));
        t57 = t0;
        u58 = u6;
        if ((*(signed char *)((((t8 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            u6 = ((((struct o2C_float *)(((t8 * 0x3938) + 0xC532498)))->v));
            u7 = (*(float *)0xC54109C);
            u7 = (u7 + -400.0f);
            t57 = t0;
            u51 = u6;
            if (u6 > u7) {
                t3 = t5;
                t3 = (t3 << 1);
                t15 = *(signed char *)((t1 + 0x2));
                t3 = (t3 + t5);
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 0) + 0xC));
                if ((t15 != 12) && (t15 != 13)) {
                    u7 = ((((struct o28_float *)(t4))->v));
                    t5 = (t5 + 0x1);
                    *(float *)((t3 + 0x0)) = u7;
                    u7 = ((((struct o2C_float *)(t4))->v));
                    u7 = (u7 + -50.0f);
                    t20 = ((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC));
                    t5 = (t5 + 0x1);
                    (((struct o4_float *)(t3))->v) = u7;
                    u7 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t3))->v) = u7;
                    u7 = ((((struct o28_float *)(t4))->v));
                    *(float *)((t20 + 0x0)) = u7;
                    u7 = ((((struct o2C_float *)(t4))->v));
                    u7 = (u7 + 250.0f);
                    (((struct o4_float *)(t20))->v) = u7;
                    u7 = ((((struct o30_float *)(t4))->v));
                    (((struct o8_float *)(t20))->v) = u7;
                    t57 = t0;
                    u44 = u6;
                } else {
                    t0 = t3;
                    thunk_FUN_0c058310((((((struct oC4_int *)(t2))->v)) + 0x28), t0);
                    u7 = ((((struct o4_float *)(((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC))))->v));
                    t30 = ((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC));
                    t5 = (t5 + 0x1);
                    t0 = t5;
                    t0 = (t0 << 1);
                    u7 = (u7 - 100.0f);
                    t0 = (t0 + t5);
                    t0 = (t0 << 2);
                    t0 = (t0 + (((int)stk + 0) + 0xC));
                    (((struct o4_float *)(t30))->v) = u7;
                    thunk_FUN_0c058310((((((struct oC4_int *)(t2))->v)) + 0x28), t0);
                    u7 = ((((struct o4_float *)(((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC))))->v));
                    t37 = ((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC));
                    t5 = (t5 + 0x1);
                    u7 = (u7 + 100.0f);
                    (((struct o4_float *)(t37))->v) = u7;
                }
                u51 = u44;
            }
            u58 = u51;
        }
        t60 = *(int *)(((int)stk + 0));
        u6 = u58;
        t0 = t57;
        t2 = (t2 + 0x3938);
        *(unsigned int *)(((int)stk + 0)) = (t60 + 0x1);
        t4 = (t4 + 0x3938);
        t1 = (t1 + 0x3938);
        if ((int)(t60 + 0x1) >= (int)0x4) {
            break;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t5 << 1) + t5) << 2) + (((int)stk + 0) + 0xC))) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    return (FUN_0c052cf8((*(int *)(((int)stk + 8))), (t5 + 0x1), (((int)stk + 0) + 0xC)));
}


int FUN_0c13c634(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037320(0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 == 0) {
    } else {
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        *(unsigned int *)((t1 + 0x4)) = 0xC13C4C0;
        *(unsigned char *)((t1 + 0x2)) = 0xFFFFFFFF;
        u0 = ((((struct o28_float *)(t1))->v));
        u0 = u0 + 1.0f * (((float)((int)((int)(nlRand()) % (int)0xC9)) + -100.0f));
        (((struct o28_float *)(t1))->v) = u0;
        u0 = ((((struct o30_float *)(t1))->v));
        u0 = u0 + 1.0f * (((float)((int)((int)(nlRand()) % (int)0xC9)) + -100.0f));
        (((struct o30_float *)(t1))->v) = u0;
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 64.0f);
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c037498(((((struct oC4_int *)(t1))->v)), 0x0, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0xF;
        FUN_0c037498(((((struct oC8_int *)(t1))->v)), 0x1, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oC8_int *)(t1))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC8_int *)(t1))->v)) + 0x6)) = 0x1F;
        t2 = (((struct oC8_int *)(t1))->v);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        FUN_0c037498(((((struct oCC_int *)(t1))->v)), 0x2, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((t1 + 0x1))) << 2)))));
        *(unsigned char *)((((((struct oCC_int *)(t1))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oCC_int *)(t1))->v)) + 0x6)) = 0x1F;
        t2 = (((struct oCC_int *)(t1))->v);
        (((struct o8C_float *)(t2))->v) = 1.0f;
        (((struct o88_float *)(t2))->v) = 1.0f;
        (((struct o84_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x10)) = a4;
        t0 = 0x84;
    }
    return t0;
}

float FUN_0c14b84a(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_5 = a4;
    v0_6 = *(signed char *)((v0_5 + 0x14));
    v0_0 = *(int *)((v0_5 + 0x10));
    v0_3 = (v0_6);
    v0_1 = ((0x38F8 + v0_0));
    v0_2 = (v0_0);
    v0_0 = (v0_5);
    v0_4 = (0x1);
    v0_5 = (0x0);
    if ((v0_6 == 0)) goto L_C14B874;
    if ((v0_3 == 1)) goto L_C14B88E;
    v0_3 = ((FUN_0c03f346(v0_0, v0_4, v0_5, a7)));
    L_C14B994:;
    return F0;
    L_C14B88E:;
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_6);
    if ((v0_6 == 0)) goto L_C14B89E;
    if (!((v0_3 == 1))) goto L_C14B91C;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 - 1);
    v0_3 = ((short)(v0_4 - 1));
    if (((int)(short)(v0_4 - 1) > 0)) goto L_C14B91C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_3 = (0x14);
    goto L_C14B91C;
    L_C14B91C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(0xC202BAC); }
    FUN_0c0582de((v0_0 + 0x28), (((((struct oD4_int *)(v0_2))->v)) + 0x28));
    *(float *)((((int)stk + 0) + 0x0)) = (((((struct o1C_float *)(v0_1))->v)) - ((((struct o28_float *)(v0_0))->v)));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o20_float *)(v0_1))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    w0_0 = (((struct o30_float *)(v0_0))->v);
    w0_1 = (((struct o24_float *)(v0_1))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (w0_1 - w0_0);
    *(unsigned int *)((v0_0 + 0x38)) = (math_atan2_angle16((*(float *)((((int)stk + 0) + 0x0))), (w0_1 - w0_0)));
    w0_1 = (((struct o8_float *)(((int)stk + 0)))->v);
    w0_0 = *(float *)((((int)stk + 0) + 0x0));
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    w0_0 = math_signed_sqrt(w0_1);
    v0_1 = math_atan2_angle16((-((((struct o4_float *)(((int)stk + 0)))->v))), w0_0);
    *(unsigned int *)((v0_0 + 0x34)) = v0_1;
    v0_3 = (v0_1);
    goto L_C14B994;
    L_C14B89E:;
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_3 + 0x1);
    v0_5 = (v0_5);
    if (((int)(short)(v0_3 + 0x1) < (int)0xC)) goto L_C14B8B6;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C14B8B6:;
    L_C14B8D8:;
    v0_3 = (0xC0);
    if (((int)v0_5 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C14B8BA;
    goto L_C14B91C;
    L_C14B8BA:;
    v0_3 = *(short *)((v0_0 + 0x1E));
    if (((int)(((int)((unsigned int)((int)((unsigned int)v0_3 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_3)) ? 1u : 0u))) >> 1) < (int)v0_5)) goto L_C14B8D6;
    *(unsigned char *)(((*(int *)((((v0_5 << 2) + (0xC4 + v0_0)) + 0x0))) + 0x0)) = v0_4;
    L_C14B8D6:;
    v0_5 = ((v0_5 + 0x1));
    goto L_C14B8D8;
    L_C14B874:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    *(unsigned short *)((v0_0 + 0x1E)) = v0_5;
    goto L_C14B88E;
}




int FUN_0c162c4e(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t33;
    register int t17;
    register float u22;
    register float u24;
    register int t27;
    register int t28;
    register float u29;
    register int t26;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t1 = *(int *)((((*(signed char *)0xC542237) << 2) + 0xC2A2FD8));
    t3 = *(int *)(((t1 + (a5 * 0x2C)) + 0x4));
    t4 = *(int *)(((*(int *)(((t1 + (a5 * 0x2C)) + 0x0))) + 0x0));
    t5 = FUN_0c037320(t3, t4);
    t6 = FUN_0c03f444(0x1, 0x0, t5);
    t33 = t6;
    if (t6 != 0) {
        FUN_0c03733c(t6, t3, t4);
        *(unsigned int *)((t6 + 0x4)) = 0xC1629B0;
        *(unsigned char *)((t6 + 0x1)) = (*(int *)(((int)stk + 16)));
        (((struct o15_uchar *)(t6))->v) = (*(int *)(((t1 + (a5 * 0x2C)) + 0x14)));
        (((struct oAC_ushort *)(t6))->v) = 0xF;
        (((struct oA9_uchar *)(t6))->v) = 0x21;
        if ((*(int *)(((t1 + (a5 * 0x2C)) + 0xC))) == 0) {
            FUN_0c07e3fc(t6, (*(int *)(((t1 + (a5 * 0x2C)) + 0x10))));
        } else {
            FUN_0c07e420(t6, (*(int *)(((t1 + (a5 * 0x2C)) + 0x10))));
        }
        *(int *)((int)stk + 12) = 0x0;
        t17 = *(int *)(((int)stk + 16));
        *(unsigned short *)(((int)stk + 20)) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 8) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t17));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t6, 0x3, (*(int *)(((t1 + (a5 * 0x2C)) + 0x8))), 0x1, 0x100, (~((int)0x1 << (int)t17)), (~((int)0x1 << (int)t17)), 0x0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x28)) = *(struct mv3 *)((*(int *)(((int)stk + 28)))); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t6 + 0x4C)) = *(struct mv3 *)((*(int *)(((int)stk + 24)))); }
        u22 = (((struct o20_float *)((t1 + (a5 * 0x2C))))->v);
        (((struct o48_float *)(t6))->v) = u22;
        (((struct o44_float *)(t6))->v) = u22;
        (((struct o40_float *)(t6))->v) = u22;
        (((struct o5C_float *)(t6))->v) = ((((struct o1C_float *)((t1 + (a5 * 0x2C))))->v));
        u24 = (((struct o28_float *)((t1 + (a5 * 0x2C))))->v);
        (((struct o60_float *)(t6))->v) = u24;
        (((struct o22_ushort *)(t6))->v) = (*(int *)(((t1 + (a5 * 0x2C)) + 0x18)));
        t27 = t26;
        t28 = 0x0;
        u29 = u24;
        for (;;) {
            if ((int)t28 >= (int)((((struct oC0_int *)(t6))->v))) {
                break;
            }
            t27 = t28;
            t27 = (t27 << 2);
            t27 = (t27 + (0xC4 + t6));
            t27 = (*(int *)((t27 + 0x0)));
            *(unsigned short *)((t27 + 0x6)) = 0x1F;
            u29 = ((((struct o24_float *)((t1 + (a5 * 0x2C))))->v));
            t28 = (t28 + 0x1);
            (((struct o8C_float *)(t27))->v) = u29;
            (((struct o88_float *)(t27))->v) = u29;
            (((struct o84_float *)(t27))->v) = u29;
        }
        t33 = 0xC0;
    }
    return t33;
}


void FUN_0c13691a(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x0, a7);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC136886;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53258C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A16FC, 0xC2A1708);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A1714, 0xC2A1720);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC136886;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53257C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A16FC, 0xC2A1708);
        FUN_0c13683e((*(signed char *)((t0 + 0x1))), (t0 + 0x64), t0, (*(int *)(((*(int *)(((((*(int *)0xC4B40CC) + 0x10) + 0x6A0) + 0x1C))) + 0x0))), 0xA0, 0x60, 0xC2A1714, 0xC2A1720);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC1368C0;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((0xC53255C + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938)))) + 0x28);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A16D0); }
    }
}
