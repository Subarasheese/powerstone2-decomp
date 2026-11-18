/* game/player: functions 0C0CCFC0-0C0CE5F6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o180_uchar { char p[0x180]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o428_uint { char p[0x428]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c042fe0(void);
int FUN_0c043064(void);
int FUN_0c04340c(void);
int FUN_0c05aae4(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c065b96(int, int, int, int, float);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c1625ae(int, int);
int math_atan2_angle16(int, int, int, int, int, float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0ccfc0(int a4);
int FUN_0c0ccfde(int a4);
int FUN_0c0cd134(int a4);
int FUN_0c0cd498(int a4);
int FUN_0c0cd554(int a4, int a5, int a6, int a7);
int FUN_0c0cd5c0(int a4, int a5, int a6, int a7);
int FUN_0c0cd888(int a4);

int FUN_0c0ccfc0(int a4)
{
    register int t3;

    t3 = 0x166;
    if ((*(signed char *)0xC54235E) != 0) {
        (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | ((int)0x1 << (int)(*(signed char *)0xC542363)));
        t3 = 0x12E;
    }
    return t3;
}

int FUN_0c0ccfde(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    (((struct oA8_uchar *)(a4))->v) = 0x1;
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o50_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 35.0f);
            t0 = (int)((int)(FUN_0c179ac0()) % (int)0x168);
            t1 = FUN_0c179ac0();
            t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x1);
            }
            u0 = math_sin_angle16((int)(((float)t0 * 65536.0f) / 360.0f));
            (((struct o4C_float *)(a4))->v) = (((float)t2 + (1.0f + 1.0f)) * u0);
            u0 = math_cos_angle16((int)(((float)t0 * 65536.0f) / 360.0f));
            (((struct o54_float *)(a4))->v) = (((float)t2 + (1.0f + 1.0f)) * u0);
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x258;
            *(unsigned short *)((a4 + 0x1E)) = 0x6;
            t0 = FUN_0c043064();
            if (t0 != 0) {
                (((struct o20_ushort *)(a4))->v) = 0x258;
                *(unsigned short *)((a4 + 0x1C)) = 0x4B0;
            } else {
                (((struct o20_ushort *)(a4))->v) = 0x78;
            }
            (((struct o428_uint *)(a4))->v) = 0x1555;
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            t0 = 0x0;
        } else {
            (((struct o5C_float *)(a4))->v) = -2.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x270F;
            FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
            t0 = 0x1;
        }
        t1 = t0;
    } else {
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o50_float *)(a4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 35.0f);
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x168);
        t2 = FUN_0c179ac0();
        t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1);
        }
        u0 = math_sin_angle16((int)(((float)t0 * 65536.0f) / 360.0f));
        (((struct o4C_float *)(a4))->v) = (((float)t3 + (1.0f + 1.0f)) * u0);
        u0 = math_cos_angle16((int)(((float)t0 * 65536.0f) / 360.0f));
        (((struct o54_float *)(a4))->v) = (((float)t3 + (1.0f + 1.0f)) * u0);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x258;
        *(unsigned short *)((a4 + 0x1E)) = 0x6;
        t0 = FUN_0c043064();
        if (t0 != 0) {
            (((struct o20_ushort *)(a4))->v) = 0x258;
            *(unsigned short *)((a4 + 0x1C)) = 0x4B0;
        } else {
            (((struct o20_ushort *)(a4))->v) = 0x78;
        }
        (((struct o428_uint *)(a4))->v) = 0x1555;
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        t1 = 0x0;
    }
    (((struct o15_uchar *)(a4))->v) = t1;
    return 0x15;
}

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

int FUN_0c0cd498(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x2000);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            }
            return (short)(t0 - 1);
        }
    } else {
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC0CD5A4)->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0CD5A4)->v));
        FUN_0c1625ae((a4 + 0x28), (*(int *)((((*(signed char *)((a4 + 0x424))) << 2) + 0xC2737D0))));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    u0 = (((struct o50_float *)(a4))->v);
    u1 = (((struct o5C_float *)(a4))->v);
    (((struct o50_float *)(a4))->v) = (u0 + u1);
    t0 = 0x50;
    if (0.0f > (u0 + u1)) {
        *(unsigned short *)((a4 + 0x1C)) = 0x3;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c0cd554(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if (t1 != 0) {
        if (t1 != 2) {
            if (t1 != 10) {
                if (t1 != 11) {
                    return t1;
                }
                return ((int (*)(int, int, int, int))(0xC0CD54E))(a4, a5, a6, a7);
            }
            return FUN_0c0cd498(a4);
        }
        return FUN_0c0cd134(a4);
    }
    return FUN_0c0ccfde(a4);
}


int FUN_0c0cd888(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((((t0 << 2) << 1) + 0xC25C264) + 0x0))) > (int)(*(short *)((((((struct o418_int *)(a4))->v)) + 0x2)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    return (*(int *)((((((t0 - 1) << 2) << 1) + 0xC25C264) + 0x4)));
}
