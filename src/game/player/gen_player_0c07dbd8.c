/* game/player: functions 0C07DBD8-0C07E2A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o389C_uchar { char p[0x389C]; unsigned char v; };
struct o389E_ushort { char p[0x389E]; unsigned short v; };
struct o38A0_ushort { char p[0x38A0]; unsigned short v; };
struct o38A2_ushort { char p[0x38A2]; unsigned short v; };
struct o38A4_uchar { char p[0x38A4]; unsigned char v; };
struct o38A6_ushort { char p[0x38A6]; unsigned short v; };
struct o38A8_ushort { char p[0x38A8]; unsigned short v; };
struct o38AA_ushort { char p[0x38AA]; unsigned short v; };
struct o38AC_uchar { char p[0x38AC]; unsigned char v; };
struct o38AE_ushort { char p[0x38AE]; unsigned short v; };
struct o38B0_ushort { char p[0x38B0]; unsigned short v; };
struct o38B2_ushort { char p[0x38B2]; unsigned short v; };
struct o38B4_uchar { char p[0x38B4]; unsigned char v; };
struct o38B6_ushort { char p[0x38B6]; unsigned short v; };
struct o38B8_ushort { char p[0x38B8]; unsigned short v; };
struct o38BA_ushort { char p[0x38BA]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aaf6(int);
int FUN_0c064e70(int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c081ee8(int, int);
int FUN_0c0bb68c(int);
extern int FUN_0c0c2d56();
int FUN_0c0c42c4(int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c15877c(int, int);
int FUN_0c15eda8(int, int);
int FUN_0c15fcf8(int, int);
int FUN_0c161c66(int);
int FUN_0c162146(int, int);
int FUN_0c187798(void);
extern float _builtin_sqrtf(float);
int FUN_0c07dbd8(int a4, int a5);
int FUN_0c07dcd8(int a4, int a5, int a6);
int FUN_0c07dd18(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c07dbd8(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a5 != 74) && (a5 != 120)) {
        if (a5 != 36) {
            if (a5 != 62) {
                t1 = a5;
                if (a5 != 65) {
                } else {
                    t2 = 0x38B4;
                    if ((*(signed char *)((a4 + 0x38B4))) == 0) {
                        (((struct o38B4_uchar *)(a4))->v) = a5;
                        (((struct o38B6_ushort *)(a4))->v) = 0x0;
                        (((struct o38B8_ushort *)(a4))->v) = 0x438;
                        (((struct o38BA_ushort *)(a4))->v) = 0x30C;
                        t2 = 0x38BA;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                t1 = 0x38AC;
                if ((*(signed char *)((a4 + 0x38AC))) == 0) {
                    t3 = FUN_0c162146(a4, 0x0);
                    t4 = t3;
                    if (t3 != 0) {
                        (((struct o38AC_uchar *)(a4))->v) = a5;
                        (((struct o38AE_ushort *)(a4))->v) = ((((struct o24_short *)(t3))->v));
                        (((struct o38B0_ushort *)(a4))->v) = 0x258;
                        (((struct o38B2_ushort *)(a4))->v) = 0x0;
                        t4 = 0x38B2;
                    }
                    t1 = t4;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = 0x38A4;
            if ((*(signed char *)((a4 + 0x38A4))) == 0) {
                t3 = FUN_0c161c66(a4);
                t4 = t3;
                if (t3 != 0) {
                    (((struct o38A4_uchar *)(a4))->v) = a5;
                    (((struct o38A6_ushort *)(a4))->v) = ((((struct o24_short *)(t3))->v));
                    (((struct o38A8_ushort *)(a4))->v) = 0x258;
                    (((struct o38AA_ushort *)(a4))->v) = 0x0;
                    t4 = 0x38AA;
                }
                t2 = t4;
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        t1 = 0x371C;
        if (((*(signed char *)((a4 + 0x2))) == 14) && (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0)) {
        } else {
            t0 = FUN_0c15eda8(a4, a5);
            t3 = t0;
            if (t0 != 0) {
                (((struct o389C_uchar *)(a4))->v) = a5;
                (((struct o389E_ushort *)(a4))->v) = ((((struct o24_short *)(t0))->v));
                (((struct o38A0_ushort *)(a4))->v) = 0x384;
                (((struct o38A2_ushort *)(a4))->v) = 0x0;
                t3 = 0x38A2;
            }
            t1 = t3;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c07dcd8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC542361) == 0) {
        t0 = 0x3720;
        if ((*(signed char *)((a4 + 0x3720))) == 0) {
            t1 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((((short)t1 * (short)0x98) + 0xC541CDC) + 0x20)) = ((*(int *)(((((short)t1 * (short)0x98) + 0xC541CDC) + 0x20))) + a5);
            t1 = *(signed char *)((a4 + 0x1));
            t0 = (((short)t1 * (short)0x98) + 0xC541CDC);
            if ((unsigned int)(*(int *)(((((short)t1 * (short)0x98) + 0xC541CDC) + 0x20))) > (unsigned int)0x5F5E0FF) {
                t1 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((0xC541CDC + ((short)t1 * (short)0x98)) + 0x20)) = 0x5F5E0FF;
                t0 = ((short)t1 * (short)0x98);
            }
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c07dd18(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[10];

    register int R1;
    register int R2;
    register float F2;
    register float F3;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    v0_5 = a4;
    v0_3 = a6;
    v0_2 = a7;
    w0_4 = f4;
    w0_3 = f5;
    v0_0 = (v0_5);
    if ((((((struct o160_float *)(v0_5))->v)) != 0.0f)) goto L_C07DD3C;
    L_C07E288:;
    v0_6 = (0x0);
    L_C07E28A:;
    return v0_6;
    L_C07DD3C:;
    v0_1 = (0x0);
    v0_4 = ((*(int *)0xC532458));
    w0_0 = (9999.0f);
    L_C07DF12:;
    v0_5 = (0xC2738B8);
    if ((v0_4 == 0)) goto L_C07DF1E;
    v0_3 = *(signed char *)((v0_4 + 0x41C));
    v0_6 = *(signed char *)(((((unsigned short)(unsigned char)v0_3 * (unsigned short)0x34) + v0_5) + 0x0));
    v0_5 = (v0_3);
    v0_3 = (v0_6);
    if ((v0_6 == 3)) goto L_C07DDCA;
    if (((unsigned char)v0_5 == 79)) goto L_C07DDCA;
    if (((unsigned char)v0_5 == 80)) goto L_C07DDCA;
    if (((unsigned char)v0_5 == 81)) goto L_C07DDCA;
    if (((unsigned char)v0_5 == 82)) goto L_C07DDCA;
    if (((unsigned char)v0_5 == 121)) goto L_C07DDCA;
    if (((*(signed char *)((v0_0 + 0x371D))) != 4)) goto L_C07DDA8;
    if (((unsigned char)v0_5 == 25)) goto L_C07DDCA;
    L_C07DDA8:;
    if ((v0_3 == 4)) goto L_C07DDCA;
    if ((v0_3 != 6)) goto L_C07DDBE;
    if (((*(short *)((v0_4 + 0x1E))) != 6)) goto L_C07DDCA;
    L_C07DDBE:;
    if ((v0_3 == 9)) goto L_C07DDCA;
    L_C07DF10:;
    v0_4 = ((*(int *)((v0_4 + 0xC))));
    goto L_C07DF12;
    L_C07DDCA:;
    if (((*(signed char *)((v0_4 + 0x41D))) == 2)) goto L_C07DDD6;
    goto L_C07DF10;
    L_C07DDD6:;
    *(float *)(((int)stk + 28)) = ((((struct o28_float *)(v0_4))->v));
    *(float *)(((int)stk + 36)) = ((((struct o30_float *)(v0_4))->v));
    v0_6 = (0xA4);
    if ((((((struct oA4_int *)(v0_4))->v)) == 0)) goto L_C07DE3C;
    math_mat_get_translate((*(int *)((v0_4 + v0_6))), (((int)stk + 0) + 0x1C));
    FUN_0c187798();
    math_mat_transform_vector((((int)stk + 0) + 0x10), ((((struct oA4_int *)(v0_4))->v)));
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + (*(float *)(((int)stk + 16))));
    *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + (*(float *)(((int)stk + 20))));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + (*(float *)(((int)stk + 24))));
    L_C07DE3C:;
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) - ((((struct o28_float *)(v0_0))->v)));
    w0_4 = (((struct o30_float *)(v0_0))->v);
    w0_5 = *(float *)(((int)stk + 36));
    *(float *)(((int)stk + 36)) = (w0_5 - w0_4);
    w0_3 = *(float *)(((int)stk + 28));
    w0_1 = ((w0_5 - w0_4) * (w0_5 - w0_4));
    w0_1 = w0_1 + w0_3 * w0_3;
    v0_5 = (*(signed char *)((v0_0 + 0x371D))) != 4;
    w0_2 = (w0_3);
    w0_1 = (_builtin_sqrtf(w0_1));
    w0_2 = (100.0f);
    w0_4 = ((w0_5 - w0_4));
    w0_3 = (w0_3);
    if (v0_5) goto L_C07DEC0;
    if (((unsigned char)(*(signed char *)((v0_4 + 0x41C))) != 25)) goto L_C07DEC0;
    w0_4 = (150.0f);
    v0_5 = (((150.0f > w0_1)));
    if ((!v0_5)) goto L_C07DF10;
    if ((!(w0_2 > _builtin_fabsf((((((struct o2C_float *)(v0_4))->v)) - ((((struct o2C_float *)(v0_0))->v))))))) goto L_C07DF10;
    if ((w0_0 > w0_1)) goto L_C07DF0C;
    goto L_C07DF10;
    L_C07DF0C:;
    v0_1 = (v0_4);
    w0_0 = (w0_1);
    goto L_C07DF10;
    L_C07DEC0:;
    v0_5 = (0xC6);
    if (((unsigned char)(*(signed char *)((v0_4 + 0x41C))) != 0xC6)) goto L_C07DEEA;
    w0_4 = (120.0f);
    if ((!(120.0f > w0_1))) goto L_C07DF10;
    if ((!(w0_2 > _builtin_fabsf((((((struct o2C_float *)(v0_4))->v)) - ((((struct o2C_float *)(v0_0))->v))))))) goto L_C07DF10;
    if ((!(w0_0 > w0_1))) goto L_C07DF10;
    goto L_C07DF0C;
    L_C07DEEA:;
    if ((!(w0_2 > w0_1))) goto L_C07DF10;
    v0_5 = (FUN_0c064e70(v0_4, ((int)stk + 0))) == 0;
    if (v0_5) goto L_C07DF10;
    if ((!(w0_2 > _builtin_fabsf(((*(float *)(((int)stk + 0))) - ((((struct o2C_float *)(v0_0))->v))))))) goto L_C07DF10;
    if ((!(w0_0 > w0_1))) goto L_C07DF10;
    goto L_C07DF0C;
    L_C07DF1E:;
    if ((v0_1 != 0)) goto L_C07DF26;
    goto L_C07E288;
    L_C07DF26:;
    v0_7 = *(signed char *)((v0_5 + ((unsigned short)(unsigned char)(*(signed char *)((v0_1 + 0x41C))) * (unsigned short)0x34)));
    v0_6 = (v0_7);
    v0_4 = (0xC11F9C8);
    v0_4 = (0xC059DF2);
    v0_4 = (0xC0C2D56);
    v0_4 = (0x34);
    if ((v0_7 == 3)) goto L_C07DF62;
    if ((v0_6 != 6)) goto L_C07DF46;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(v0_1, 0xA, (*(signed char *)((v0_0 + 0x1))), v0_2);
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x30);
    v0_1 = *(signed char *)((v0_1 + 0x424));
    v0_6 = (v0_1);
    if ((v0_1 == 0)) goto L_C07E120;
    if ((v0_6 == 1)) goto L_C07E12A;
    if ((v0_6 == 2)) goto L_C07E134;
    if ((v0_6 == 3)) goto L_C07E13E;
    if ((v0_6 == 4)) goto L_C07E148;
    if ((v0_6 == 5)) goto L_C07E152;
    if (!((v0_6 == 6))) goto L_C07E284;
    FUN_0c07dcd8(v0_0, 0x1F40, v0_3);
    v0_5 = (0xA);
    goto L_C07E164;
    L_C07E284:;
    v0_6 = (0x1);
    goto L_C07E28A;
    L_C07E164:;
    FUN_0c07c4b0((*(signed char *)((v0_0 + 0x1))), v0_5);
    goto L_C07E284;
    L_C07E152:;
    FUN_0c07dcd8(v0_0, 0x1388, v0_3);
    v0_5 = (0x8);
    goto L_C07E164;
    L_C07E148:;
    FUN_0c07dcd8(v0_0, 0xBB8, v0_3);
    v0_5 = (0x5);
    goto L_C07E164;
    L_C07E13E:;
    FUN_0c07dcd8(v0_0, 0x7D0, v0_3);
    v0_5 = (0x4);
    goto L_C07E164;
    L_C07E134:;
    FUN_0c07dcd8(v0_0, 0x64, v0_3);
    v0_5 = (0x1);
    goto L_C07E164;
    L_C07E12A:;
    FUN_0c07dcd8(v0_0, 0x1F4, v0_3);
    v0_5 = (0x2);
    goto L_C07E164;
    L_C07E120:;
    FUN_0c07dcd8(v0_0, 0x3E8, v0_3);
    v0_5 = (0x3);
    goto L_C07E164;
    L_C07DF46:;
    if ((v0_6 != 0)) goto L_C07DF4E;
    if (((*(signed char *)((v0_0 + 0x3721))) != 0)) goto L_C07E1B2;
    if (((unsigned char)(*(signed char *)((v0_1 + 0x41C))) != 25)) goto L_C07E1B2;
    FUN_0c081ee8(v0_0, v0_1);
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0xE);
    L_C07E1B2:;
    v0_3 = *(signed char *)((v0_1 + 0x41C));
    v0_5 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 79)) goto L_C07E1DE;
    if ((v0_5 == 80)) goto L_C07E1DE;
    if ((v0_5 == 81)) goto L_C07E1DE;
    if ((v0_5 == 82)) goto L_C07E1DE;
    if ((v0_5 != 121)) goto L_C07E284;
    L_C07E1DE:;
    FUN_0c11f9c8((*(signed char *)((v0_0 + 0x1))), (unsigned char)(*(signed char *)((v0_1 + 0x41C))), ((((struct o24_short *)(v0_1))->v)));
    L_C07E27A:;
    v0_5 = (0xA);
    v0_3 = ((*(signed char *)((v0_0 + 0x1))));
    L_C07E280:;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(v0_1, v0_5, v0_3, v0_2);
    goto L_C07E284;
    L_C07DF4E:;
    if ((v0_6 != 4)) goto L_C07DF56;
    v0_6 = (0x374D);
    if (((int)(*(signed char *)((v0_0 + 0x374D))) >= (int)0x3)) goto L_C07E288;
    *(unsigned char *)((((*(signed char *)((v0_0 + v0_6))) + (0x374E + v0_0)) + 0x0)) = (*(signed char *)((v0_1 + 0x424)));
    (((struct o374D_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x374D))) + 0x1);
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c0c2d56))(v0_1, 0xA, (*(signed char *)((v0_0 + 0x1))), v0_2);
    FUN_0c07c4b0((*(signed char *)((v0_0 + 0x1))), 0x5);
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x12);
    if (((int)(*(signed char *)((v0_0 + 0x374D))) >= (int)0x3)) goto L_C07E252;
    if (((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)))) != 0)) goto L_C07E252;
    FUN_0c05aaf6((0x93 + (*(signed char *)((v0_0 + 0x1)))));
    L_C07E252:;
    FUN_0c15fcf8((*(signed char *)((v0_1 + 0x424))), (v0_1 + 0x28));
    goto L_C07E284;
    L_C07DF56:;
    if ((v0_6 != 9)) goto L_C07DF5E;
    FUN_0c11f9c8((*(signed char *)((v0_0 + 0x1))), (unsigned char)(*(signed char *)((v0_1 + 0x41C))), ((((struct o24_short *)(v0_1))->v)));
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x51);
    goto L_C07E27A;
    L_C07DF5E:;
    goto L_C07E284;
    L_C07DF62:;
    v0_3 = *(signed char *)((v0_1 + 0x41C));
    v0_6 = ((unsigned char)v0_3);
    if (((unsigned char)v0_3 == 74)) goto L_C07DF94;
    if ((v0_6 == 120)) goto L_C07DF94;
    if ((v0_6 == 117)) goto L_C07DFC4;
    v0_2 = *(signed char *)((v0_1 + 0x41C));
    v0_6 = ((unsigned char)v0_2);
    if (((unsigned char)v0_2 == 16)) goto L_C07E090;
    if ((v0_6 == 17)) goto L_C07E090;
    if ((v0_6 == 18)) goto L_C07E090;
    if ((v0_6 == 83)) goto L_C07E090;
    if ((v0_6 == 84)) goto L_C07E090;
    if ((v0_6 == 85)) goto L_C07E090;
    if ((v0_6 == 86)) goto L_C07E090;
    if ((v0_6 == 87)) goto L_C07E090;
    if ((v0_6 == 88)) goto L_C07E090;
    if ((v0_6 == 104)) goto L_C07E090;
    L_C07E0B0:;
    v0_6 = (0x160);
    v0_5 = (0x4C);
    w0_4 = (1000.0f);
    if ((!(((((struct o160_float *)(v0_0))->v)) > 1000.0f))) goto L_C07E0C0;
    *(float *)((v0_0 + v0_6)) = w0_4;
    L_C07E0C0:;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), v0_5);
    FUN_0c11f9c8((*(signed char *)((v0_0 + 0x1))), (unsigned char)(*(signed char *)((v0_1 + 0x41C))), ((((struct o24_short *)(v0_1))->v)));
    v0_1 = ((int (*)(int, int, int))(FUN_0c0c2d56))(v0_1, 0xA, (*(signed char *)((v0_0 + 0x1))));
    FUN_0c0bb68c(v0_0);
    goto L_C07E284;
    L_C07E090:;
    v0_2 = *(signed char *)(((0x41C + v0_1) + 0x0));
    v0_3 = *(short *)(((v0_5 + ((unsigned short)(unsigned char)v0_2 * (unsigned short)v0_4)) + 0x1A));
    (((struct o160_float *)(v0_0))->v) = (((((struct o160_float *)(v0_0))->v)) + (float)v0_3);
    v0_5 = ((v0_5 + ((unsigned short)(unsigned char)v0_2 * (unsigned short)v0_4)));
    FPUL_ = (v0_3);
    goto L_C07E0B0;
    L_C07DFC4:;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o28_float *)(v0_0))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o2C_float *)(v0_0))->v)));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o30_float *)(v0_0))->v)));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 50.0f);
    FUN_0c15877c((*(signed char *)((v0_0 + 0x1))), (((int)stk + 0) + 0x4));
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x13);
    FUN_0c0c42c4(v0_0);
    FUN_0c11f9c8((*(signed char *)((v0_0 + 0x1))), (unsigned char)(*(signed char *)((v0_1 + 0x41C))), ((((struct o24_short *)(v0_1))->v)));
    v0_5 = (0xB);
    v0_3 = ((*(signed char *)((v0_0 + 0x1))));
    goto L_C07E280;
    L_C07DF94:;
    FUN_0c07dbd8(v0_0, (unsigned char)(*(signed char *)((v0_1 + 0x41C))));
    FUN_0c11f9c8((*(signed char *)((v0_0 + 0x1))), (unsigned char)(*(signed char *)((v0_1 + 0x41C))), ((((struct o24_short *)(v0_1))->v)));
    v0_1 = ((int (*)(int, int, int))(FUN_0c0c2d56))(v0_1, 0xA, (*(signed char *)((v0_0 + 0x1))));
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0x51);
    goto L_C07E284;
}
