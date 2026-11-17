/* game/player: functions 0C06BB0C-0C06BFB4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3752_uchar { char p[0x3752]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o381C_short { char p[0x381C]; short v; };
struct o382C_short { char p[0x382C]; short v; };
struct o382E_short { char p[0x382E]; short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_short { char p[0x3830]; short v; };
struct o3834_short { char p[0x3834]; short v; };
struct o3834_ushort { char p[0x3834]; unsigned short v; };
struct o3836_ushort { char p[0x3836]; unsigned short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o383E_short { char p[0x383E]; short v; };
struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c042fe0(void);
int FUN_0c064ee4(int, int);
int FUN_0c074862(int, int, int, int);
int FUN_0c07bac8(int);
int FUN_0c07bb0c(int, int, int, int);
int FUN_0c07c858(int);
int FUN_0c07cf5c(int);
int thunk_FUN_0c0385e0(int, int);
int FUN_0c07d38a(int);
int FUN_0c07e2c4(int);
int FUN_0c07ebd0(int);
int FUN_0c0b2c18(int);
int FUN_0c0b551e(int);
int FUN_0c14e040(int);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c06bb0c(int a4, int a5, int a6);
int FUN_0c06bf38(int a4, int a5, int a6, int a7);

int FUN_0c06bb0c(int a4, int a5, int a6)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register float F0;
    register float F1;
    register float F2;
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
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_4 = a4;
    v0_0 = a5;
    v0_3 = a6;
    v0_2 = *(signed char *)((v0_4 + 0x2));
    v0_5 = (v0_2);
    v0_1 = (v0_4);
    if ((v0_2 != 12)) goto L_C06BB2E;
    v0_5 = ((FUN_0c0b2c18(v0_1)));
    L_C06BF12:;
    return v0_5;
    L_C06BB2E:;
    if ((v0_5 != 13)) goto L_C06BB3C;
    v0_5 = ((FUN_0c0b551e(v0_1)));
    goto L_C06BF12;
    L_C06BB3C:;
    FUN_0c187798(v0_4, v0_0, v0_3);
    v0_5 = (0x375B);
    v0_2 = (((int)stk + 0));
    if (((*(signed char *)((v0_1 + 0x375B))) == 0)) goto L_C06BB56;
    goto L_C06BF12;
    L_C06BB56:;
    if (((*(signed char *)((v0_1 + 0x3717))) != 99)) goto L_C06BB98;
    v0_4 = *(signed char *)((v0_1 + 0x14));
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C06BB76;
    if ((v0_5 == 1)) goto L_C06BB7E;
    if ((v0_5 == 2)) goto L_C06BB88;
    if (!((v0_5 == 3))) goto L_C06BB98;
    FUN_0c07bb0c(v0_1, v0_0, v0_3, R7);
    goto L_C06BB98;
    L_C06BB98:;
    v0_6 = (0x0);
    if (((unsigned char)(*(signed char *)((v0_1 + 0x3721))) != 41)) goto L_C06BBE4;
    if (((*(signed char *)((v0_1 + 0x14))) != 0)) goto L_C06BBE4;
    if (((*(signed char *)((v0_1 + 0x3715))) == 10)) goto L_C06BBE4;
    FUN_0c07cf5c(v0_1);
    L_C06BBEC:;
    v0_3 = (0xC5421F8);
    v0_4 = (0x2);
    if (((*(signed char *)0xC542237) != 2)) goto L_C06BC28;
    if (((*(signed char *)((v0_3 + 0x44))) != 1)) goto L_C06BC28;
    if (((int)(*(signed char *)((v0_3 + 0x3D))) >= (int)v0_4)) goto L_C06BC12;
    (((struct o374A_uchar *)(v0_1))->v) = 0x3C;
    (((struct o382E_ushort *)(v0_1))->v) = v0_6;
    L_C06BC12:;
    if ((((*(short *)0xC54099A) & ((int)0x1 << (int)(*(signed char *)((v0_1 + 0x1))))) == 0)) goto L_C06BC28;
    (((struct o374A_uchar *)(v0_1))->v) = v0_4;
    (((struct o382E_ushort *)(v0_1))->v) = v0_6;
    L_C06BC28:;
    if (((*(signed char *)((v0_3 + 0x3D))) != 0)) goto L_C06BC38;
    (((struct o374A_uchar *)(v0_1))->v) = v0_4;
    (((struct o382E_ushort *)(v0_1))->v) = v0_6;
    L_C06BC38:;
    v0_5 = (0x3749);
    if (((*(signed char *)((v0_1 + 0x3749))) == 0)) goto L_C06BC4E;
    *(unsigned char *)((v0_1 + v0_5)) = ((*(signed char *)((v0_1 + v0_5))) - 1);
    (((struct o12A_ushort *)(v0_1))->v) = ((((struct o382C_short *)(v0_1))->v));
    L_C06BC4E:;
    v0_5 = (0x374A);
    if (((*(signed char *)((v0_1 + 0x374A))) == 0)) goto L_C06BC64;
    *(unsigned char *)((v0_1 + v0_5)) = ((*(signed char *)((v0_1 + v0_5))) - 1);
    (((struct o12C_ushort *)(v0_1))->v) = ((((struct o382E_short *)(v0_1))->v));
    L_C06BC64:;
    v0_5 = (0x374B);
    w0_1 = (1.0f);
    if (((*(signed char *)((v0_1 + 0x374B))) == 0)) goto L_C06BC7C;
    *(unsigned char *)((v0_1 + v0_5)) = ((*(signed char *)((v0_1 + v0_5))) - 1);
    (((struct o12E_ushort *)(v0_1))->v) = ((((struct o3830_short *)(v0_1))->v));
    L_C06BC7C:;
    if ((((((struct o37B0_float *)(v0_1))->v)) == w0_1)) goto L_C06BCB0;
    if (((*(signed char *)((v0_1 + 0x3755))) != (*(signed char *)((v0_1 + 0x3753))))) goto L_C06BC9C;
    if ((((((struct o381C_short *)(v0_1))->v)) == ((((struct o3818_short *)(v0_1))->v)))) goto L_C06BCB0;
    L_C06BC9C:;
    (((struct o37B0_float *)(v0_1))->v) = w0_1;
    w0_0 = (((struct o37B0_float *)(v0_1))->v);
    v0_4 = *(int *)(((0x118 + v0_1) + 0x4));
    (((struct o90_float *)(((((struct o118_int *)(v0_1))->v))))->v) = w0_0;
    (((struct o90_float *)(v0_4))->v) = w0_0;
    v0_4 = ((0x118 + v0_1));
    L_C06BCB0:;
    (((struct o376C_uint *)(v0_1))->v) = v0_6;
    if (((*(signed char *)((v0_1 + 0x371D))) != 1)) goto L_C06BCC0;
    (((struct o3770_uint *)(v0_1))->v) = v0_6;
    L_C06BCC0:;
    if (((*(signed char *)((v0_1 + 0x2))) != 14)) goto L_C06BCDC;
    if (((*(signed char *)((v0_1 + 0x371C))) == 0)) goto L_C06BCDC;
    if (((*(signed char *)((v0_1 + 0x38E5))) != 0)) goto L_C06BCDC;
    FUN_0c14e040(v0_1);
    L_C06BCDC:;
    (((struct o38E5_uchar *)(v0_1))->v) = v0_6;
    v0_5 = ((*(signed char *)((v0_1 + 0x38B4))));
    if (((unsigned char)v0_5 != 65)) goto L_C06BDA4;
    (((struct oAC_ushort *)(v0_1))->v) = (((((struct oAC_short *)(v0_1))->v)) | 0x400);
    v0_4 = (((0x389C + v0_1) + 0x18));
    w0_0 = (0.0f);
    if (((int)(*(short *)((((0x389C + v0_1) + 0x18) + 0x4))) <= (int)(*(short *)((((0x389C + v0_1) + 0x18) + 0x6))))) goto L_C06BD44;
    (((struct oB0_float *)(v0_1))->v) = w0_0;
    L_C06BDA4:;
    if (!(((*(signed char *)((v0_1 + 0x14))) == 0))) goto L_C06BEF6;
    v0_5 = *(signed char *)((v0_1 + 0x3715));
    v0_4 = (v0_5);
    if ((v0_5 != 20)) goto L_C06BDBE;
    goto L_C06BEF6;
    L_C06BEF6:;
    thunk_FUN_0c0385e0(v0_1, v0_0);
    FUN_0c07c858(v0_1);
    (((struct o3836_ushort *)(v0_1))->v) = ((((struct o3834_short *)(v0_1))->v));
    (((struct o3834_ushort *)(v0_1))->v) = ((((struct o430_short *)(v0_1))->v));
    v0_5 = (0x3834);
    goto L_C06BF12;
    L_C06BDBE:;
    if ((v0_4 != 26)) goto L_C06BDCA;
    goto L_C06BEF6;
    L_C06BDCA:;
    if (((*(signed char *)((v0_3 + 0x3F))) == 3)) goto L_C06BDD6;
    goto L_C06BEF6;
    L_C06BDD6:;
    v0_3 = (FUN_0c064ee4(v0_1, 0x7)) != 0;
    if (v0_3) goto L_C06BDE6;
    goto L_C06BEF6;
    L_C06BDE6:;
    (((struct o37C4_float *)(v0_1))->v) = (((((struct o28_float *)(v0_1))->v)) - (*(float *)((v0_2 + 0x0))));
    (((struct o37CC_float *)(v0_1))->v) = (((((struct o30_float *)(v0_1))->v)) - ((((struct o8_float *)(v0_2))->v)));
    v0_3 = (FUN_0c07ebd0(v0_1)) == 0;
    if (v0_3) goto L_C06BE10;
    w0_0 = (0.349999994f);
    L_C06BE14:;
    w0_4 = (((struct o37C4_float *)(v0_1))->v);
    w0_5 = (((struct o37F4_float *)(v0_1))->v);
    w0_1 = ((w0_4 - w0_5));
    w0_2 = (w0_5);
    w0_3 = (w0_4);
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C06BE68;
    w0_1 = (((-w0_3) + w0_2));
    L_C06BE6A:;
    if ((!(w0_1 > w0_0))) goto L_C06BE8C;
    if ((!(((((struct o37C4_float *)(v0_1))->v)) > ((((struct o37F4_float *)(v0_1))->v))))) goto L_C06BE82;
    v0_5 = (0x37F4);
    w0_1 = ((((((struct o37F4_float *)(v0_1))->v)) + w0_0));
    L_C06BE88:;
    *(float *)((v0_1 + v0_5)) = w0_1;
    L_C06BE94:;
    w0_4 = (((struct o37CC_float *)(v0_1))->v);
    w0_5 = (((struct o37FC_float *)(v0_1))->v);
    w0_1 = (w0_4);
    w0_2 = (w0_5);
    w0_3 = ((w0_4 - w0_5));
    if ((!(0.0f > (w0_4 - w0_5)))) goto L_C06BEB0;
    w0_1 = (((-w0_1) + w0_2));
    L_C06BEB2:;
    if ((!(w0_1 > w0_0))) goto L_C06BED4;
    if ((!(((((struct o37CC_float *)(v0_1))->v)) > ((((struct o37FC_float *)(v0_1))->v))))) goto L_C06BECA;
    v0_5 = (0x37FC);
    w0_1 = ((((((struct o37FC_float *)(v0_1))->v)) + w0_0));
    L_C06BED0:;
    *(float *)((v0_1 + v0_5)) = w0_1;
    L_C06BEDC:;
    (((struct o28_float *)(v0_1))->v) = ((*(float *)((v0_2 + 0x0))) + ((((struct o37F4_float *)(v0_1))->v)));
    (((struct o30_float *)(v0_1))->v) = (((((struct o8_float *)(v0_2))->v)) + ((((struct o37FC_float *)(v0_1))->v)));
    goto L_C06BEF6;
    L_C06BECA:;
    v0_5 = (0x37FC);
    w0_1 = ((((((struct o37FC_float *)(v0_1))->v)) - w0_0));
    goto L_C06BED0;
    L_C06BED4:;
    (((struct o37FC_float *)(v0_1))->v) = ((((struct o37CC_float *)(v0_1))->v));
    goto L_C06BEDC;
    L_C06BEB0:;
    w0_1 = (w0_3);
    goto L_C06BEB2;
    L_C06BE82:;
    v0_5 = (0x37F4);
    w0_1 = ((((((struct o37F4_float *)(v0_1))->v)) - w0_0));
    goto L_C06BE88;
    L_C06BE8C:;
    (((struct o37F4_float *)(v0_1))->v) = ((((struct o37C4_float *)(v0_1))->v));
    goto L_C06BE94;
    L_C06BE68:;
    w0_1 = (w0_1);
    goto L_C06BE6A;
    L_C06BE10:;
    w0_0 = (0.0399999991f);
    goto L_C06BE14;
    L_C06BD44:;
    v0_5 = (int)((int)((*(short *)((((0x389C + v0_1) + 0x18) + 0x6))) - (*(short *)((((0x389C + v0_1) + 0x18) + 0x4)))) % (int)0xB4);
    v0_4 = (((0x389C + v0_1) + 0x18));
    w0_2 = ((float)v0_5);
    FPUL_ = (v0_5);
    if ((!(50.0f > (float)v0_5))) goto L_C06BD96;
    w0_0 = (float)(int)(w0_2 * 3.5999999f);
    (((struct oB0_float *)(v0_1))->v) = _builtin_fabsf((math_sin_angle16((int)((w0_0 * 65536.0f) / 360.0f))));
    L_C06BD9A:;
    v0_5 = (0xB0);
    if ((!(((((struct oB0_float *)(v0_1))->v)) > w0_1))) goto L_C06BDA4;
    *(float *)((v0_1 + v0_5)) = w0_1;
    goto L_C06BDA4;
    L_C06BD96:;
    (((struct oB0_float *)(v0_1))->v) = w0_0;
    goto L_C06BD9A;
    L_C06BBE4:;
    (((struct o383C_ushort *)(v0_1))->v) = v0_6;
    (((struct o383A_ushort *)(v0_1))->v) = v0_6;
    goto L_C06BBEC;
    L_C06BB88:;
    FUN_0c07bac8(v0_1);
    goto L_C06BB98;
    L_C06BB7E:;
    FUN_0c074862(v0_1, v0_0, v0_3, R7);
    goto L_C06BB98;
    L_C06BB76:;
    FUN_0c06bf38(v0_1, v0_0, v0_3, R7);
    goto L_C06BB98;
}

int FUN_0c06bf38(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t2 = *(signed char *)((a4 + 0x3715));
    if ((t2 != 7) && (t2 != 26)) {
        t2 = FUN_0c07e2c4(a4);
        if (t2 == 0) {
            if ((((((struct o383E_short *)(a4))->v)) != 0) && (t0 = *(signed char *)((a4 + 0x3715)), t0 != 26)) {
                t0 = FUN_0c042fe0();
                if (t0 != 0) {
                    t0 = FUN_0c07d38a(a4);
                    if (t0 != 0) {
                        t0 = *(signed char *)((a4 + 0x3715));
                        if (t0 == 38) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
                            return 0x2C;
                        }
                        return t0;
                    }
                } else {
                    (((struct o3752_uchar *)(a4))->v) = 0x0;
                }
            } else {
                (((struct o3752_uchar *)(a4))->v) = 0x0;
            }
            t0 = *(int *)((((*(signed char *)((a4 + 0x3715))) << 2) + 0xC259094));
            return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
        }
        return t2;
    }
    if ((((((struct o383E_short *)(a4))->v)) != 0) && (t1 = *(signed char *)((a4 + 0x3715)), t1 != 26)) {
        t0 = FUN_0c042fe0();
        if (t0 != 0) {
            t0 = FUN_0c07d38a(a4);
            if (t0 != 0) {
                t0 = *(signed char *)((a4 + 0x3715));
                if (t0 == 38) {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
                    return 0x2C;
                }
                return t0;
            }
        } else {
            (((struct o3752_uchar *)(a4))->v) = 0x0;
        }
    } else {
        (((struct o3752_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(int *)((((*(signed char *)((a4 + 0x3715))) << 2) + 0xC259094));
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, a7);
}
