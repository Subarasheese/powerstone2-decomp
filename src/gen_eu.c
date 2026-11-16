/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3D_uchar { char p[0x3D]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o44_short { char p[0x44]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o66_uchar { char p[0x66]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
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
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c031c5a(void);
int FUN_0c031e6c(void);
int FUN_0c035024(void);
int FUN_0c0353e8(void);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c041026(int, int, int, int);
int FUN_0c041084(int);
int FUN_0c0410fa(void);
int FUN_0c041124(void);
int FUN_0c041218(void);
int FUN_0c041340(void);
int FUN_0c042fe0(void);
int FUN_0c056d12(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05aaf6(int);
int FUN_0c05ab04(int);
int FUN_0c05b052(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c073682(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d5188(void);
int FUN_0c1210e8(void);
int FUN_0c16c730(void);
int FUN_0c179ac0(void);
extern int FUN_0c187798();
int math_atan2_angle16(int, int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0cd134(int a4);
int FUN_0c165b50(int a4);
int FUN_0c041450(void);
int FUN_0c0b6b58(int a4, int a5, float f4);
int FUN_0c137f8e(int a4, int a5, int a6, int a7);

int FUN_0c0cd134(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register float F5;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_3 = (FUN_0c042fe0()) == 0;
    v0_2 = (0xC5421F8);
    v0_4 = ((0x428 + v0_1));
    v0_0 = (0xC064EE4);
    v0_0 = (v0_1);
    w0_0 = (0.0f);
    if (v0_3) goto L_C0CD160;
    v0_3 = (0xE2);
    L_C0CD162:;
    v0_5 = *(signed char *)((v0_2 + 0x180));
    v0_6 = *(signed char *)((v0_2 + 0x180));
    v0_1 = ((unsigned char)(v0_5 + v0_3));
    v0_2 = ((unsigned char)v0_6);
    if (((int)(unsigned char)(v0_5 + v0_3) >= (int)(unsigned char)v0_6)) goto L_C0CD188;
    v0_5 = *(signed char *)((v0_0 + 0x19));
    v0_3 = ((unsigned char)v0_5);
    if (!(((int)v0_2 >= (int)(unsigned char)v0_5))) goto L_C0CD454;
    if (((int)v0_1 <= (int)v0_3)) goto L_C0CD19A;
    goto L_C0CD454;
    L_C0CD454:;
    v0_5 = ((FUN_0c0c2d56(v0_0, 0xB, (*(signed char *)((v0_0 + 0x1))))));
    L_C0CD484:;
    return v0_5;
    L_C0CD19A:;
    if (((*(short *)((v0_0 + 0x1C))) == 0x270F)) goto L_C0CD1B2;
    v0_5 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_5 - 1);
    if (((short)(v0_5 - 1) != 0)) goto L_C0CD1B2;
    goto L_C0CD454;
    L_C0CD1B2:;
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C0CD1C6;
    if ((v0_5 != 1)) goto L_C0CD1C2;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x400);
    v0_1 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_1) goto L_C0CD468;
    v0_1 = (FUN_0c064ee4(v0_0, 0x2)) == 0;
    if (v0_1) goto L_C0CD464;
    goto L_C0CD454;
    L_C0CD464:;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    L_C0CD468:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_5 = (0x50);
    goto L_C0CD484;
    L_C0CD1C2:;
    goto L_C0CD484;
    L_C0CD1C6:;
    w0_2 = (999.0f);
    w0_1 = (-1.0f);
    if (((int)(*(signed char *)((v0_0 + 0x424))) >= (int)0x3)) goto L_C0CD2CA;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + (*(int *)((v0_4 + 0x0))));
    v0_5 = (0x16);
    if (((int)(*(int *)((v0_4 + 0x0))) < (int)0x4FA)) goto L_C0CD1F0;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) - 21);
    L_C0CD1F0:;
    v0_4 = *(signed char *)((v0_0 + v0_5));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C0CD220;
    if (!((v0_5 != 1))) goto L_C0CD3D8;
    goto L_C0CD484;
    L_C0CD3D8:;
    v0_1 = (v0_0);
    if (((int)((((struct o20_short *)(v0_0))->v)) >= (int)0x3C)) goto L_C0CD3EE;
    (((struct oA8_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0xA8))) ^ 0x1);
    L_C0CD3EE:;
    v0_1 = (FUN_0c064f80(v0_1)) == 0;
    if (v0_1) goto L_C0CD406;
    v0_1 = (FUN_0c064ee4(v0_0, 0x2)) != 0;
    if (v0_1) goto L_C0CD454;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    L_C0CD406:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_5 = (0x20);
    if (((short)(v0_1 - 1) != 0)) goto L_C0CD484;
    (((struct o12E_ushort *)(v0_0))->v) = 0x0;
    goto L_C0CD454;
    L_C0CD220:;
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0CD26C;
    v0_4 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_4) goto L_C0CD26C;
    v0_4 = (FUN_0c064ee4(v0_0, 0x2)) == 0;
    if (v0_4) goto L_C0CD242;
    goto L_C0CD454;
    L_C0CD242:;
    w0_0 = ((((struct o50_float *)(v0_0))->v));
    w0_0 *= -0.699999988f;
    (((struct o50_float *)(v0_0))->v) = w0_0;
    FPUL_ = (0xBF333333);
    if (((*(short *)((v0_0 + 0x1E))) != 6)) goto L_C0CD260;
    FUN_0c05aae4(0x2E, (v0_0 + 0x28));
    L_C0CD260:;
    v0_4 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_4 - 1);
    if (((short)(v0_4 - 1) == 0)) goto L_C0CD338;
    L_C0CD26C:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_1 = math_atan2_angle16(v0_1, v0_2, v0_3, ((int)stk + 4), ((int)stk + 4), ((((struct o4C_float *)(v0_0))->v)), ((((struct o54_float *)(v0_0))->v)));
    v0_1 = (FUN_0c065b96(v0_0, v0_1, 0x4000, (*(int *)(((int)stk + 0))), w0_2)) != 0;
    if (!(v0_1)) goto L_C0CD39A;
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 + 0x2000) & 0xC000);
    v0_5 = (((v0_1 + 0x2000) & 0xC000));
    if ((((v0_1 + 0x2000) & 0xC000) == 0)) goto L_C0CD2BC;
    if ((v0_5 == 0x8000)) goto L_C0CD2BC;
    if ((v0_5 == 0x4000)) goto L_C0CD2C0;
    if ((v0_5 == 0xC000)) goto L_C0CD2C0;
    goto L_C0CD39A;
    L_C0CD39A:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_5 = ((math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58))));
    goto L_C0CD484;
    L_C0CD2C0:;
    v0_5 = (0x4C);
    L_C0CD2C2:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) * w0_1);
    goto L_C0CD39A;
    L_C0CD2BC:;
    v0_5 = (0x54);
    goto L_C0CD2C2;
    L_C0CD338:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_5 = (0x16);
    goto L_C0CD484;
    L_C0CD2CA:;
    v0_4 = *(signed char *)((v0_0 + 0x16));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C0CD300;
    if ((v0_5 != 1)) goto L_C0CD2DA;
    goto L_C0CD3D8;
    L_C0CD2DA:;
    goto L_C0CD484;
    L_C0CD300:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x16C);
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0CD342;
    v0_4 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_4) goto L_C0CD342;
    v0_1 = (FUN_0c064ee4(v0_0, 0x2)) == 0;
    if (v0_1) goto L_C0CD32A;
    goto L_C0CD454;
    L_C0CD32A:;
    FUN_0c05aae4(0x2E, (v0_0 + 0x28));
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    goto L_C0CD338;
    L_C0CD342:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_1 = math_atan2_angle16(v0_1, v0_2, v0_3, ((int)stk + 4), ((int)stk + 4), ((((struct o4C_float *)(v0_0))->v)), ((((struct o54_float *)(v0_0))->v)));
    v0_1 = (FUN_0c065b96(v0_0, v0_1, 0x4000, (*(int *)(((int)stk + 0))), w0_2)) == 0;
    if (v0_1) goto L_C0CD39A;
    v0_1 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = ((v0_1 + 0x2000) & 0xC000);
    v0_5 = (((v0_1 + 0x2000) & 0xC000));
    if ((((v0_1 + 0x2000) & 0xC000) == 0)) goto L_C0CD38E;
    if ((v0_5 == 0x8000)) goto L_C0CD38E;
    if ((v0_5 == 0x4000)) goto L_C0CD392;
    if ((v0_5 == 0xC000)) goto L_C0CD392;
    goto L_C0CD39A;
    L_C0CD392:;
    v0_5 = (0x4C);
    L_C0CD394:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) * w0_1);
    goto L_C0CD39A;
    L_C0CD38E:;
    v0_5 = (0x54);
    goto L_C0CD394;
    L_C0CD188:;
    v0_5 = *(signed char *)((v0_0 + 0x19));
    v0_3 = ((unsigned char)v0_5);
    if (((int)v0_2 >= (int)(unsigned char)v0_5)) goto L_C0CD19A;
    if (((int)v0_1 <= (int)v0_3)) goto L_C0CD19A;
    goto L_C0CD454;
    L_C0CD160:;
    v0_3 = (0xC4);
    goto L_C0CD162;
}

int FUN_0c165b50(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC53256C))) + 0x28), (a4 + 0x28));
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oCC_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 8.65999985f);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
                t1 = (((struct oD0_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 8.65999985f);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
                t1 = (((struct oD4_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 0.0f);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) - 10.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    t1 = (((struct oD8_int *)(a4))->v);
                    *(unsigned char *)((t1 + 0x0)) = 0x1;
                    (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 150.0f);
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                t1 = (((struct oD8_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 10.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x6B);
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if ((*(int *)(((*(int *)((a4 + 0x10))) + 0x10))) == 0) {
                return FUN_0c03f346(a4);
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1E) {
            u0 = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
        } else {
            u0 = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
        }
        (((struct o6C_float *)(t0))->v) = u0;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1.0f);
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
        if (t0 == 0) {
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x3);
            }
            switch (t1) {
            case 0:
                *(unsigned short *)((a4 + 0x1E)) = 0xFFFFFBBC;
                break;
            case 1:
                *(unsigned short *)((a4 + 0x1E)) = 0xFFFFF99A;
                break;
            case 2:
                *(unsigned short *)((a4 + 0x1E)) = 0x444;
                break;
            case 3:
                *(unsigned short *)((a4 + 0x1E)) = 0x666;
                break;
            }
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1E) {
            u0 = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
        } else {
            u0 = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
        }
        (((struct o6C_float *)(t0))->v) = u0;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 1.0f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oCC_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 86.5999985f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
            t0 = (((struct oD0_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 86.5999985f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
            t0 = (((struct oD4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 0.0f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 100.0f);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned int *)(((*(int *)((a4 + 0x10))) + 0x10)) = (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498);
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((*(int *)(((*(int *)((a4 + 0x10))) + 0x10))) + 0x1)));
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c03744a(t0, 0x0, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    (((struct o70_float *)(t0))->v) = 60.0f;
    t0 = (((struct oC8_int *)(a4))->v);
    FUN_0c03744a(t0, 0x1, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    (((struct o70_float *)(t0))->v) = -60.0f;
    t0 = (((struct oCC_int *)(a4))->v);
    FUN_0c03744a(t0, 0x2, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct o80_uint *)(t0))->v) = 0x5555;
    t0 = (((struct oD0_int *)(a4))->v);
    FUN_0c03744a(t0, 0x2, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct o80_uint *)(t0))->v) = 0xAAAA;
    t0 = (((struct oD4_int *)(a4))->v);
    FUN_0c03744a(t0, 0x2, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct o80_uint *)(t0))->v) = 0x10000;
    t0 = (((struct oD8_int *)(a4))->v);
    FUN_0c03744a(t0, 0x3, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x6A);
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    *(unsigned short *)((a4 + 0x1E)) = 0xFFFFF99A;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c041450(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R6;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    FUN_0c0410fa();
    v0_0 = (FUN_0c0d5188()) == 0;
    if (v0_0) goto L_C041476;
    v0_1 = ((FUN_0c041340()));
    L_C04148C:;
    v0_6 = (0x4);
    v0_5 = (0xC532498);
    v0_2 = (0x1);
    v0_3 = (0x3938);
    v0_8 = (0xC3BD447);
    v0_4 = (0x0);
    if (((*(signed char *)0xC5429B4) == 1)) goto L_C0414C4;
    R4 = (v0_4);
    L_C0414C0:;
    if (!(((int)R4 < (int)v0_6))) goto L_C0414C4;
    if (((*(signed char *)((0x3715 + ((R4 * v0_3) + v0_5)))) != 41)) goto L_C0414BE;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & (~((int)v0_2 << (int)R4)));
    goto L_C0414BE;
    L_C0414C4:;
    v0_0 = (0xC5421F8);
    if ((v0_1 == 0)) goto L_C04159A;
    if (((unsigned char)(*(signed char *)0xC541F3D) == 1)) goto L_C04159A;
    *(unsigned char *)((v0_0 + 0x1)) = ((*(signed char *)((v0_0 + 0x1))) + 0x1);
    *(unsigned char *)((v0_0 + 0x2)) = v0_4;
    *(unsigned char *)((v0_0 + 0x3)) = v0_4;
    *(unsigned char *)((v0_0 + 0x4)) = v0_4;
    (((struct o5C_uchar *)(v0_0))->v) = v0_2;
    (((struct o3D_uchar *)(v0_0))->v) = v0_4;
    FUN_0c041026(R4, v0_1, R6, R7);
    R4 = (0x98);
    v0_1 = (v0_4);
    R6 = (0xC541CDC);
    L_C04155A:;
    if (((int)v0_1 < (int)v0_6)) goto L_C041518;
    v0_3 = *(signed char *)0xC5429B4;
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C04156E;
    if ((v0_1 != 4)) goto L_C04158E;
    L_C04156E:;
    v0_1 = (v0_4);
    L_C04158A:;
    if (!(((int)v0_1 < (int)v0_6))) goto L_C04158E;
    if (((((int)v0_2 << (int)v0_1) & (unsigned char)(*(signed char *)((v0_8 + 0x0)))) == 0)) goto L_C041588;
    *(unsigned int *)((((v0_1 * R4) + R6) + 0x24)) = (*(int *)((((v0_1 * R4) + R6) + 0x20)));
    goto L_C041588;
    L_C04158E:;
    *(unsigned char *)(((v0_0 + 0x41) + 0x1)) = ((*(signed char *)(((v0_0 + 0x41) + 0x0))) & 0xF);
    L_C041764:;
    v0_0 = *(signed char *)0xC5429B4;
    v0_7 = (v0_0);
    if ((v0_0 != 2)) goto L_C041780;
    return FUN_0c1210e8();
    L_C041780:;
    return v0_7;
    L_C041588:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C04158A;
    L_C041518:;
    if ((((*(signed char *)(((v0_0 + 0x41) + 0x0))) & ((int)v0_2 << (int)v0_1)) == 0)) goto L_C041558;
    v0_7 = *(signed char *)((((v0_1 * v0_3) + v0_5) + 0x2));
    R7 = (v0_7);
    if ((v0_7 == 12)) goto L_C041558;
    if ((R7 == 13)) goto L_C041558;
    v0_7 = (0x44);
    if (((int)((((struct o44_short *)(((v0_1 * R4) + R6)))->v)) >= (int)0x63)) goto L_C041558;
    *(unsigned short *)((((v0_1 * R4) + R6) + v0_7)) = ((*(short *)((((v0_1 * R4) + R6) + v0_7))) + 0x1);
    L_C041558:;
    v0_1 = ((v0_1 + 0x1));
    goto L_C04155A;
    L_C04159A:;
    v0_8 = *(signed char *)((v0_0 + 0x2));
    v0_7 = (v0_8);
    v0_6 = (0xC073682);
    R4 = ((v0_0 + 0xC));
    if ((v0_8 == 0)) goto L_C0415C2;
    if ((v0_7 == 1)) goto L_C04160C;
    if ((v0_7 == 2)) goto L_C041660;
    if ((v0_7 != 3)) goto L_C0415B6;
    v0_1 = FUN_0c041084(0x5A);
    v0_3 = (v0_1);
    if ((v0_1 != 1)) goto L_C0416C8;
    FUN_0c05ab04(0xCC);
    L_C0416C8:;
    if ((v0_3 != 2)) goto L_C041764;
    FUN_0c05ab04(0xCC);
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    FUN_0c031c5a();
    FUN_0c16c730();
    (((struct o66_uchar *)(v0_0))->v) = v0_2;
    *(unsigned int *)((v0_0 + 0xC)) = 0x78;
    goto L_C041764;
    L_C0415B6:;
    if ((v0_7 != 4)) goto L_C0415BE;
    v0_2 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C041744;
    *(unsigned char *)((v0_0 + 0x2)) = 0x63;
    (((struct o66_uchar *)(v0_0))->v) = v0_4;
    v0_2 = ((0xE4E0 + v0_5));
    v0_0 = (v0_5);
    L_C04173C:;
    if (((unsigned int)v0_0 < (unsigned int)v0_2)) goto L_C041734;
    goto L_C041764;
    L_C041734:;
    FUN_0c073682(v0_0, 0x10);
    v0_0 = ((v0_0 + v0_3));
    goto L_C04173C;
    L_C041744:;
    v0_2 = *(int *)(((v0_0 + 0xC) + 0x0));
    v0_7 = (v0_2);
    R4 = ((v0_0 + 0xC));
    if (!((v0_2 != 118))) goto L_C04174E;
    if ((v0_7 != 110)) goto L_C041764;
    FUN_0c05aaf6(0x88);
    goto L_C041764;
    L_C04174E:;
    FUN_0c056d12(R4, v0_1, R6, R7);
    goto L_C041764;
    L_C0415BE:;
    goto L_C041764;
    L_C041660:;
    v0_2 = *(int *)((R4 + 0x0));
    *(unsigned int *)((R4 + 0x0)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C0416AC;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    (((struct o38_ushort *)(v0_0))->v) = 0x9;
    (((struct o3A_ushort *)(v0_0))->v) = 0x5A;
    (((struct o66_uchar *)(v0_0))->v) = v0_4;
    FUN_0c0353e8();
    FUN_0c059c7a(0x1B, 0x0);
    FUN_0c059c54(0xF);
    v0_2 = ((0xE4E0 + v0_5));
    v0_0 = (v0_5);
    L_C0416A4:;
    if (((unsigned int)v0_0 < (unsigned int)v0_2)) goto L_C04169C;
    goto L_C041764;
    L_C04169C:;
    FUN_0c073682(v0_0, 0xF);
    v0_0 = ((v0_0 + v0_3));
    goto L_C0416A4;
    L_C0416AC:;
    if (((*(int *)((v0_0 + 0xC))) == 118)) goto L_C04174E;
    goto L_C041764;
    L_C04160C:;
    R4 = ((v0_0 + 0x38));
    if ((((((struct o38_short *)(v0_0))->v)) != 0)) goto L_C041624;
    if (((*(short *)((R4 + 0x2))) != 30)) goto L_C041624;
    FUN_0c05b052(0x1E, 0x0);
    L_C041624:;
    v0_1 = (FUN_0c041084(0x5A)) == 2;
    if (v0_1) goto L_C041630;
    goto L_C041764;
    L_C041630:;
    if (((*(signed char *)((v0_0 + 0x166))) == 0)) goto L_C04163E;
    *(unsigned char *)((v0_0 + 0x2)) = 0x63;
    goto L_C041764;
    L_C04163E:;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    FUN_0c035024();
    FUN_0c059c7a(0x1A, 0x0);
    (((struct o66_uchar *)(v0_0))->v) = v0_2;
    *(unsigned int *)((v0_0 + 0xC)) = 0x78;
    FUN_0c16c730();
    goto L_C041764;
    L_C0415C2:;
    v0_1 = (FUN_0c041084(0x3C)) == 2;
    if (v0_1) goto L_C0415CE;
    goto L_C041764;
    L_C0415CE:;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    FUN_0c031e6c();
    FUN_0c05aaf6(0x89);
    FUN_0c0353e8();
    (((struct o38_ushort *)(v0_0))->v) = 0x9;
    (((struct o3A_ushort *)(v0_0))->v) = 0x5A;
    goto L_C041764;
    L_C0414BE:;
    R4 = ((R4 + 0x1));
    goto L_C0414C0;
    L_C041476:;
    if (((*(signed char *)0xC5429B4) != 0)) goto L_C041486;
    v0_7 = ((FUN_0c041124()));
    L_C04148A:;
    v0_1 = (v0_7);
    goto L_C04148C;
    L_C041486:;
    v0_7 = ((FUN_0c041218()));
    goto L_C04148A;
}

int FUN_0c0b6b58(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                    u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                    u2 = 280.424103f;
                    u2 = u2 + 50.0f * u1;
                    (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = u2;
                    u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                    u0 = (1.0f + 1.0f);
                    u0 = u0 + 1.0f * u1;
                    (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                    (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                    t1 = 0x22;
                    if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                        t1 = 0x17;
                    }
                    t2 = t1;
                } else {
                    if (t0 == 4) {
                        t1 = 0x16;
                        if ((int)(*(signed char *)((a4 + 0x16))) >= (int)0x3) {
                            (((struct o22_ushort *)(a4))->v) = 0xA;
                            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                            t1 = 0x17;
                        }
                        t2 = t1;
                    } else {
                        t1 = t0;
                        if (t0 == 5) {
                            u0 = (((struct o0_float *)0xC0B6F10)->v);
                            t0 = (((struct o22_short *)(a4))->v);
                            u1 = (((struct o4_float *)0xC0B6F10)->v);
                            (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = (int)(((float)t0 / u0) * u1);
                            (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = (-(int)(((float)t0 / u0) * u1));
                            u1 = 80.4241104f;
                            u1 = u1 + ((((struct o8_float *)0xC0B6F10)->v)) * (((float)((((struct o22_short *)(a4))->v)) / u0));
                            (((struct o74_float *)(((0x468 + a4) + 0x240)))->v) = u1;
                            t0 = (((struct o22_short *)(a4))->v);
                            (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = (((float)t0 / u0) * (1.0f + 1.0f));
                            (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = (((float)t0 / u0) * (1.0f + 1.0f));
                            (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                            t0 = 0x22;
                            if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                                (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = 0x0;
                                (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = 0x0;
                                (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = 0x0;
                                (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = 80.4241104f;
                                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                                t0 = 0x17;
                            }
                            t1 = t0;
                        }
                        t2 = t1;
                    }
                }
                t0 = t2;
            } else {
                u0 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2))));
                (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 5461.0f));
                (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 5461.0f) - 16384);
                u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
                (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = (int)((-u0) * 5461.0f);
                u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                u2 = 80.4241104f;
                u2 = u2 + 200.0f * u1;
                (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = u2;
                u1 = (((float)((((struct o22_short *)(a4))->v)) / 60.0f) * (-u0));
                u0 = (1.0f + 1.0f);
                u0 = u0 + 1.0f * u1;
                (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = u0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                t1 = 0x20;
                if ((int)((((struct o20_short *)(a4))->v)) < (int)0x8) {
                } else {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    t1 = 0x17;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
            (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 16384.0f));
            (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 16384.0f) - 16384);
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            t0 = 0x20;
            if ((int)((((struct o20_short *)(a4))->v)) < (int)0x4) {
            } else {
                FUN_0c059e60(a4, 0x25);
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t0 = 0x17;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o7C_uint *)(((0x468 + a4) + 0x120)))->v) = 0x0;
        (((struct o7C_uint *)(((0x468 + a4) + 0x1B0)))->v) = 0x0;
        (((struct o78_uint *)(((0x468 + a4) + 0x240)))->v) = 0x0;
        (((struct o74_float *)((0x240 + (0x468 + a4))))->v) = 80.4241104f;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        *(unsigned short *)((((0x468 + a4) + 0x2D0) + 0x6)) = 0x1F;
        (((struct o78_uint *)(((0x468 + a4) + 0x2D0)))->v) = 0xFFFFC000;
        (((struct o88_float *)(((0x468 + a4) + 0x2D0)))->v) = 1.0f;
        (((struct o84_float *)(((0x468 + a4) + 0x2D0)))->v) = 1.0f;
        (((struct o8C_float *)((0x2D0 + (0x468 + a4))))->v) = 1.0f;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        u0 = math_cos_angle16((((((((struct o20_short *)(a4))->v)) << 8) << 2) << 2));
        (((struct o7C_uint *)((0x120 + (0x468 + a4))))->v) = (0x4000 - (int)(u0 * 16384.0f));
        (((struct o7C_uint *)((0x1B0 + (0x468 + a4))))->v) = ((int)(u0 * 16384.0f) - 16384);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t1 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) < (int)0x4) {
        } else {
            FUN_0c059e60(a4, 0x25);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            t1 = 0x17;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c137f8e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    int t6;
    register int t7;
    register float u0;

    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))) != 26) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t7 = *(signed char *)((a4 + 0x14));
    if (t7 != 0) {
        if (t7 == 1) {
            t7 = *(short *)((a4 + 0x1C));
            if (((int)t7 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t0 = (((struct o8_int *)0xC2A19CC)->v), (int)t7 <= (int)t0)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
            } else {
                t0 = t7;
            }
            if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
                t7 = ((int (*)(int))(FUN_0c187798))(t0);
            } else {
                t7 = ((int (*)(int))(FUN_0c187798))(t0);
            }
            t0 = *(short *)((a4 + 0x1C));
            if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t1 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t1)) {
                FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
                FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
        FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x25);
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x24);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x7, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    t0 = ((int (*)(int))(FUN_0c187798))(0x1F);
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = t2;
    *(volatile int *)((a4 + 0xC4));
    t0 = ((int (*)(int))(FUN_0c187798))(t2);
    *(volatile int *)((a4 + 0xC4));
    t0 = ((int (*)(int, int))(FUN_0c187798))(0x0, 0xC2A19B4);
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = t3;
    *(volatile int *)((a4 + 0xC8));
    t0 = ((int (*)(int))(FUN_0c187798))(t3);
    *(volatile int *)((a4 + 0xC8));
    t0 = ((int (*)(int, int))(FUN_0c187798))(0x0, t4);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = ((math_sin_angle16(((((struct o20_int *)0xC2A19CC)->v)))) * ((((struct o28_float *)0xC2A19CC)->v)));
    (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = ((math_sin_angle16((-((((struct o20_int *)0xC2A19CC)->v))))) * ((((struct o28_float *)0xC2A19CC)->v)));
    (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = ((math_sin_angle16(((((struct o24_int *)0xC2A19CC)->v)))) * ((((struct o2C_float *)0xC2A19CC)->v)));
    (((struct o78_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = (((struct oC8_int *)(a4))->v);
    u0 = ((math_sin_angle16((-((((struct o24_int *)0xC2A19CC)->v))))) * ((((struct o2C_float *)0xC2A19CC)->v)));
    (((struct o78_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o4_int *)0xC2A19CC)->v))) && (t5 = (((struct o8_int *)0xC2A19CC)->v), (int)t0 <= (int)t5)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A19A8, 0xC2A199C, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2A19CC)->v))), (((((struct o4_int *)0xC2A19CC)->v))));
    } else {
        t1 = t0;
    }
    if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        t0 = ((int (*)(int))(FUN_0c187798))(t1);
    } else {
        t0 = ((int (*)(int))(FUN_0c187798))(t1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (((int)t0 >= (int)((((struct o14_int *)0xC2A19CC)->v))) && (t6 = (((struct o0_int *)0xC2A19CC)->v), (int)t0 <= (int)t6)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A199C, 0xC2A19A8, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A19CC)->v))), (((((struct o14_int *)0xC2A19CC)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A19CC)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
