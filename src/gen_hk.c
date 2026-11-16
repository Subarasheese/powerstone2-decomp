/* Straight-line functions with calls and guards (batch gen_hk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o151_uchar { char p[0x151]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_uchar { char p[0x168]; unsigned char v; };
struct o169_uchar { char p[0x169]; unsigned char v; };
struct o16E_uchar { char p[0x16E]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3E_uchar { char p[0x3E]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
struct o81_uchar { char p[0x81]; unsigned char v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
struct o83_uchar { char p[0x83]; unsigned char v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0349b4(void);
int FUN_0c034d28(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0430c0(void);
extern int FUN_0c056e44();
int FUN_0c0573cc(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05b048(int, int);
int FUN_0c073744(int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07b008(int);
int FUN_0c07b038(int);
int FUN_0c07b0ca(int);
extern int FUN_0c07b1a0();
int FUN_0c07d2c4(int, int);
int FUN_0c07e2c4(int);
int FUN_0c080320(int, float);
extern int FUN_0c085cac();
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int, int);
int FUN_0c0c8c36(int, int, int, int);
int FUN_0c0db880(int);
int FUN_0c121200(float);
int FUN_0c135d1a(int);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c07b1ee(int a4);
int FUN_0c124580(int a4, int a5, int a6, int a7);
int FUN_0c042800(float f4);
int FUN_0c045ac8(void);
int FUN_0c0db8aa(int a4, int a5, int a6, int a7);
int FUN_0c135d78(int a4, int a5, int a6, int a7);
int FUN_0c12f828(int a4, int a5, int a6, int a7);


int FUN_0c124580(int a4, int a5, int a6, int a7)
{
    register int t32;
    register int t35;

    register int R1;
    register int R2;
    register int R10;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_2 = a6;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_4);
    v0_1 = (0xE38);
    if ((v0_4 == 0)) goto L_C1245B8;
    if ((v0_3 != 1)) goto L_C124594;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + v0_1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    (((struct o18_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    (((struct o20_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    (((struct o1C_float *)(v0_1))->v) = (w0_0 - 0.0299999993f);
    w0_0 = (((struct o18_float *)(v0_1))->v);
    v0_3 = (0x18);
    w0_1 = (w0_0);
    FPUL_ = (0x3CF5C28F);
    if ((w0_0 > 0.0f)) goto L_C124776;
    L_C124766:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_3 = (0x15);
    L_C124776:;
    return v0_3;
    L_C124594:;
    if ((v0_3 != 2)) goto L_C12459C;
    return FUN_0c03f346(v0_0, v0_1, v0_2, a7);
    L_C12459C:;
    goto L_C124776;
    L_C1245B8:;
    if (((int)(*(short *)((v0_0 + 0x1C))) <= (int)0xB4)) goto L_C1245C4;
    goto L_C124766;
    L_C1245C4:;
    if (((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 26)) goto L_C1245D2;
    goto L_C124766;
    L_C1245D2:;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 1)) goto L_C1245EA;
    if (((*(signed char *)((0x375A + (*(int *)((v0_0 + 0x10)))))) == 4)) goto L_C1245EA;
    goto L_C124766;
    L_C1245EA:;
    if (((int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) <= (int)0x2)) goto L_C1245FA;
    goto L_C124766;
    L_C1245FA:;
    *(volatile int *)((v0_0 + 0x10));
    FUN_0c187798(v0_0, v0_1, v0_2);
    (((struct o2C_float *)(t32))->v) = (((((struct o2C_float *)(t32))->v)) + 250.0f);
    *(unsigned int *)((t32 + 0x38)) = ((*(int *)((t32 + 0x38))) + t35);
    v0_2 = *(signed char *)((t32 + 0x2));
    v0_3 = (v0_2);
    v0_0 = (t32);
    v0_1 = (t35);
    FPUL_ = (0x437A0000);
    if ((v0_2 == 0)) goto L_C12462E;
    if ((v0_3 == 1)) goto L_C12463A;
    if (!((v0_3 == 2))) goto L_C124668;
    v0_2 = (0xC2A0F20);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
    L_C124668:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((v0_1 + 0x0))))) goto L_C124678;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x1);
    v0_1 = ((v0_1 + 0x10));
    L_C124678:;
    if (((*(int *)((v0_1 + 0x0))) == 0x3E7)) goto L_C124734;
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_2 = (((((struct oC4_int *)(v0_0))->v)));
    FPUL_ = (v0_3);
    if ((((float)(*(int *)((v0_1 + 0x0))) - (float)v0_3) == 0.0f)) goto L_C12470A;
    (((struct o84_float *)(v0_2))->v) = (((((struct o84_float *)(v0_2))->v)) + ((((((struct o4_float *)(v0_1))->v)) - ((((struct o84_float *)(v0_2))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    (((struct o88_float *)(v0_2))->v) = (((((struct o88_float *)(v0_2))->v)) + ((((((struct o8_float *)(v0_1))->v)) - ((((struct o88_float *)(v0_2))->v))) / (float)((*(int *)((v0_1 + 0x0))) - (*(short *)((v0_0 + 0x1C))))));
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_4 = *(int *)((v0_1 + 0x0));
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + ((((((struct oC_float *)(v0_1))->v)) - ((((struct o8C_float *)(v0_2))->v))) / (float)(v0_4 - v0_3)));
    FPUL_ = ((v0_4 - v0_3));
    L_C124734:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_3 = ((v0_1 + 0x1));
    goto L_C124776;
    L_C12470A:;
    (((struct o84_float *)(v0_2))->v) = (((((struct o84_float *)(v0_2))->v)) + ((((struct o4_float *)(v0_1))->v)));
    (((struct o88_float *)(v0_2))->v) = (((((struct o88_float *)(v0_2))->v)) + ((((struct o8_float *)(v0_1))->v)));
    (((struct o8C_float *)(v0_2))->v) = (((((struct o8C_float *)(v0_2))->v)) + ((((struct oC_float *)(v0_1))->v)));
    goto L_C124734;
    L_C124666:;
    v0_1 = ((v0_1 + v0_2));
    goto L_C124668;
    L_C12463A:;
    v0_2 = (0xC2A0EF0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
    L_C12462E:;
    v0_2 = (0xC2A0EC0);
    v0_1 = ((((*(short *)((v0_0 + 0x1E))) << 2) << 2));
    goto L_C124666;
}

int FUN_0c042800(float f4)
{

    register int R1;
    register int R2;
    register int R3;
    register float F8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_2 = *(signed char *)0xC5421FB;
    v0_5 = (v0_2);
    v0_1 = (0x0);
    v0_0 = (0xC5421F8);
    v0_4 = (0xC40DC58);
    if ((v0_2 == 0)) goto L_C042850;
    if ((v0_5 == 1)) goto L_C04285E;
    *(unsigned char *)((v0_0 + 0x2)) = ((*(signed char *)((v0_0 + 0x2))) + 0x1);
    *(unsigned char *)((v0_0 + 0x3)) = v0_1;
    if (((*(signed char *)((v0_0 + 0x169))) != 0)) goto L_C0429E2;
    (((struct o3E_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x3E))) + 0x1);
    v0_5 = (0x3E);
    v0_4 = (0x4);
    if (((int)(*(signed char *)((v0_0 + 0x3E))) >= 0)) goto L_C04295E;
    *(unsigned char *)((v0_0 + v0_5)) = v0_1;
    L_C04295E:;
    if (((int)(*(signed char *)((v0_0 + v0_5))) <= (int)v0_4)) goto L_C042966;
    *(unsigned char *)((v0_0 + v0_5)) = v0_4;
    L_C042966:;
    (((struct o16E_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16E))) | ((int)(*(signed char *)(((0x151 + v0_0) + 0x0))) << (int)(*(signed char *)(((0x3E + v0_0) + 0x0)))));
    v0_5 = (0x3938);
    v0_6 = (0x98);
    v0_2 = (0xC541CDC);
    v0_3 = (v0_1);
    v0_7 = (0xC532498);
    v0_8 = (0xC541CDC);
    v0_9 = (0xFFFFFFFF);
    L_C0429DE:;
    if (!(((int)v0_3 < (int)v0_4))) goto L_C0429E2;
    if (((*(signed char *)(((v0_3 * v0_5) + 0xC535BAC))) == 0)) goto L_C0429CA;
    (((struct o56_uchar *)(v0_2))->v) = (*(signed char *)((v0_0 + 0x3E)));
    (((struct o80_uchar *)(v0_2))->v) = (*(signed char *)((v0_0 + 0x167)));
    v0_10 = *(signed char *)((v0_0 + 0x3E));
    v0_11 = *(signed char *)((v0_0 + 0x168));
    (((struct o81_uchar *)(v0_2))->v) = v0_11;
    *(unsigned char *)(((v0_10 + (0x84 + v0_2)) + 0x0)) = v0_11;
    (((struct o83_uchar *)(v0_2))->v) = (*(signed char *)((v0_0 + 0x16E)));
    goto L_C0429D6;
    L_C0429E2:;
    (((struct o169_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (0x169);
    L_C0429E6:;
    return v0_5;
    L_C0429D6:;
    v0_2 = ((v0_2 + v0_6));
    v0_3 = ((v0_3 + 0x1));
    v0_7 = ((v0_7 + v0_5));
    v0_8 = ((v0_8 + v0_6));
    goto L_C0429DE;
    L_C0429CA:;
    if (((*(signed char *)((v0_7 + 0x3720))) == 0)) goto L_C0429D6;
    (((struct o82_uchar *)(v0_8))->v) = v0_9;
    goto L_C0429D6;
    L_C04285E:;
    *(unsigned int *)((v0_0 + 0x10)) = ((*(int *)((v0_0 + 0x10))) - 1);
    v0_2 = (v0_4);
    if (((*(int *)((v0_4 + 0x4))) != 0)) goto L_C042894;
    v0_2 = *(signed char *)((0x14 + (*(int *)((v0_2 + 0x0)))));
    v0_5 = (v0_2);
    if ((v0_2 == 2)) goto L_C042882;
    if (((int)(*(int *)0xC542208) <= 0)) goto L_C042882;
    goto L_C0429E6;
    L_C042882:;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = v0_1;
    v0_5 = ((*(signed char *)(((*(int *)((v0_4 + 0x0))) + 0x2))));
    L_C0428C8:;
    (((struct o168_uchar *)(v0_0))->v) = v0_5;
    goto L_C0429E6;
    L_C042894:;
    v0_3 = (0x3);
    if (((*(signed char *)((0x14 + (*(int *)((v0_2 + 0x0)))))) != 2)) goto L_C0428D0;
    if (((*(signed char *)((0x14 + (*(int *)((v0_2 + 0x4)))))) == 2)) goto L_C0428B4;
    if (((*(signed char *)((0x14 + (*(int *)((v0_2 + 0x0)))))) != 2)) goto L_C0428D0;
    L_C0428B4:;
    (((struct o14_uchar *)((*(int *)((v0_2 + 0x4)))))->v) = v0_3;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = v0_1;
    v0_5 = ((*(signed char *)(((*(int *)((v0_4 + 0x0))) + 0x2))));
    goto L_C0428C8;
    L_C0428D0:;
    v0_6 = *(signed char *)((0x14 + (*(int *)((v0_2 + 0x4)))));
    v0_5 = (v0_6);
    if ((v0_6 != 2)) goto L_C0428FA;
    (((struct o14_uchar *)((*(int *)((v0_2 + 0x0)))))->v) = v0_3;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = 0x1;
    v0_1 = *(signed char *)(((*(int *)((v0_4 + 0x4))) + 0x2));
    (((struct o168_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (v0_1);
    goto L_C0429E6;
    L_C0428FA:;
    if (((int)(*(int *)((v0_0 + 0x10))) > 0)) goto L_C0429E6;
    (((struct o14_uchar *)((*(int *)((v0_2 + 0x0)))))->v) = 0x2;
    (((struct o14_uchar *)((*(int *)((v0_4 + 0x4)))))->v) = v0_3;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = v0_1;
    v0_1 = *(signed char *)(((*(int *)((v0_2 + 0x0))) + 0x2));
    (((struct o168_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (v0_1);
    goto L_C0429E6;
    L_C042850:;
    *(unsigned char *)((v0_0 + 0x3)) = ((*(signed char *)((v0_0 + 0x3))) + 0x1);
    *(unsigned int *)((v0_0 + 0x10)) = 0x258;
    FUN_0c121200(f4);
    goto L_C04285E;
}

int FUN_0c045ac8(void)
{
    register int t0;
    int t2;
    int t3;
    register int t4;
    register int t12;
    register int t19;
    register int t24;
    register int t25;
    register int t36;
    register int t41;
    register int t42;
    register int t44;
    register int t55;
    register int t65;
    register int t1;
    register int t84;
    register int t26;

    t0 = *(signed char *)0xC3BD447;
    t2 = 0xC3BD447;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)0x4) {
            break;
        }
        t1 = 0x1;
        t2 = (unsigned char)t0;
        t1 = ((int)t1 << (int)t4);
        t4 = (t4 + 0x1);
        if ((t1 & t2) != 0) {
            t3 = (t3 + 0x1);
        }
    }
    if (t3 == 1) {
        (((struct o0_uchar *)0xC542361)->v) = 0x0;
        if ((*(signed char *)0xC3BD448) != 0) {
            (((struct o1_uchar *)0xC542361)->v) = 0x2;
            t12 = ((int (*)(int, int, int))(FUN_0c056e44))(0x20, 0x1, t0);
            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x5A);
            (((struct o1E_uchar *)0xC542236)->v) = 0x1;
            (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            t26 = 0x0;
        } else {
            (((struct o1_uchar *)0xC542361)->v) = 0x1;
            FUN_0c059c54(0x1);
            FUN_0c05b048(0x1, 0x0);
            t19 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
            FUN_0c0349b4();
            FUN_0c034d28();
            (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
            (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
            (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o1_uchar *)0xC541F42)->v) = 0x0;
            (((struct o0_uchar *)0xC542236)->v) = 0x0;
            t24 = 0x3E;
            t25 = 0xC541CDC;
            for (;;) {
                if ((unsigned int)t25 >= (unsigned int)0xC541F3C) {
                    break;
                }
                t24 = 0x82;
                *(unsigned char *)((t25 + t24)) = 0xFFFFFFFF;
                t25 = (t25 + 0x98);
            }
            t26 = t24;
        }
        t84 = t26;
    } else {
        if (t3 == 2) {
            if ((*(signed char *)0xC542361) == 0) {
                if (((unsigned char)(*(signed char *)0xC3BD449) & (unsigned char)t0) == 0) {
                    (((struct o1_uchar *)0xC542361)->v) = 0x1;
                    FUN_0c059c54(0x1);
                    FUN_0c05b048(0x1, 0x0);
                    t36 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
                    FUN_0c0349b4();
                    FUN_0c034d28();
                    (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
                    (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                    (((struct o0_uchar *)0xC542236)->v) = 0x0;
                    t41 = 0x3E;
                    t42 = 0xC541CDC;
                    for (;;) {
                        if ((unsigned int)t42 >= (unsigned int)0xC541F3C) {
                            break;
                        }
                        t41 = 0x82;
                        *(unsigned char *)((t42 + t41)) = 0xFFFFFFFF;
                        t42 = (t42 + 0x98);
                    }
                    t84 = t41;
                } else {
                    (((struct o1_uchar *)0xC3BD448)->v) = ((*(signed char *)0xC3BD449) | t0);
                    (((struct o1_uchar *)0xC542361)->v) = 0x2;
                    t44 = ((int (*)(int, int, int))(FUN_0c056e44))(0x20, 0x1, t0);
                    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x5A);
                    (((struct o1E_uchar *)0xC542236)->v) = 0x1;
                    FUN_0c0430c0();
                    (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                    (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                    t84 = 0x0;
                }
            } else {
                (((struct o1_uchar *)0xC542361)->v) = 0x1;
                FUN_0c059c54(0x1);
                FUN_0c05b048(0x1, 0x0);
                t55 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
                FUN_0c0349b4();
                FUN_0c034d28();
                (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
                (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                t84 = 0x0;
            }
        } else {
            if ((t3 != 3) && (t3 != 4)) {
                t84 = t3;
            } else {
                (((struct o0_uchar *)0xC542361)->v) = 0x1;
                (((struct o1_uchar *)0xC542361)->v) = 0x1;
                FUN_0c059c54(0x1);
                FUN_0c05b048(0x1, 0x0);
                t65 = ((int (*)(int, int))(FUN_0c056e44))(0x20, 0x1);
                FUN_0c0349b4();
                FUN_0c034d28();
                (((struct oA_ushort *)0xC541F42)->v) = 0x4B0;
                (((struct oC_ushort *)0xC541F42)->v) = (*(signed char *)0xC542360);
                (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
                (((struct o1_uchar *)0xC541F42)->v) = 0x0;
                t84 = 0x0;
            }
        }
    }
    (((struct o0_uchar *)0xC3BD448)->v) = 0x0;
    return t84;
}

int FUN_0c0db8aa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return (short)(t0 - 1);
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if ((unsigned int)t0 < (unsigned int)0xC) {
            switch ((t0 << 1)) {
                case 0:
                {
                    return FUN_0c0c4770(a4, a5, a6);
                }
                case 2:
                {
                    return FUN_0c0c47a4(a4, a5, a6);
                }
                case 4:
                {
                    FUN_0c0c4b76(a4, a5, a6);
                    t1 = *(signed char *)0xC54223C;
                    t2 = t1;
                    if (t1 != 2) {
                        *(unsigned short *)((a4 + 0x1C)) = 0x1;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    return t2;
                }
                case 6:
                {
                    return FUN_0c0c4bcc(a4, a5, a6);
                }
                case 8:
                {
                    return FUN_0c0c4c1c(a4, a5, a6);
                }
                case 10:
                {
                    return FUN_0c0c5024(a4, a5, a6);
                }
                case 12:
                {
                    return FUN_0c0c52c4(a4, a5, a6);
                }
                case 14:
                {
                    return FUN_0c0c8c08(a4, a5, a6, a7);
                }
                case 16:
                {
                    return FUN_0c0c8c36(a4, a5, a6, a7);
                }
                case 18:
                case 20:
                {
                    return FUN_0c0db880(a4);
                }
                default:
                {
                    return FUN_0c0c2a80(a4);
                }
            }
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0x4;
        (((struct o160_float *)(a4))->v) = (float)(*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
        (((struct o420_ushort *)(a4))->v) = (int)((((struct o160_float *)(a4))->v));
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        (((struct o126_uchar *)(a4))->v) = 0x0;
        FUN_0c0c2d56(a4, 0x0, (*(signed char *)((a4 + 0x1))));
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((short)(t1 - 1) != 0) {
        } else {
            (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            t2 = 0x15;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c135d78(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - 0.100000001f);
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.100000001f);
                if (0.0f > ((((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                if (0.0f > ((((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v))) {
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.0f;
                }
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                return FUN_0c135d1a(a4);
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (float)((*(signed char *)((a4 + 0x2))) << 1));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (float)((*(signed char *)((a4 + 0x2))) << 1));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.00999999978f;
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    u0 = 0.0500000007f;
    u0 = u0 + 0.0299999993f * (float)(*(signed char *)((a4 + 0x2)));
    if (u0 > ((((struct o48_float *)(a4))->v))) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.00999999978f);
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o84_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
    (((struct o88_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
    (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x14) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (1.0f + 1.0f));
        (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
    }
    return FUN_0c135d1a(a4);
}

int FUN_0c12f828(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 10) {
        if (t0 != 11) {
            if (t0 != 12) {
                if (t0 == 13) {
                    u0 = math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o4C_float *)(a4))->v) = (u1 * 80.0f);
                    u0 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
                    u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(a4))->v) = (u1 * 80.0f);
                    (((struct o50_float *)(a4))->v) = (-((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 80.0f));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                    t1 = (short)(t0 - 1);
                    if ((short)(t0 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
            t1 = (signed char)t0;
            if ((signed char)t0 != 0) {
            } else {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                t1 = 0x20;
                if ((short)(t0 - 1) != 0) {
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x78;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oA4_uint *)(a4))->v) = 0x0;
                    *(unsigned int *)((a4 + 0x34)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x34)));
                    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x38)));
                    *(unsigned int *)((a4 + 0x3C)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x3C)));
                    if ((*(signed char *)((a4 + 0x15))) == 0) {
                        t0 = thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (a4 + 0x28));
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0x31C7);
                        t1 = t0;
                    } else {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0x4000);
                        t1 = 0x15;
                    }
                }
            }
            return t1;
        }
        t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
        t1 = (signed char)t0;
        if ((signed char)t0 != 0) {
        } else {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0666666701f);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
            t1 = 0x20;
        }
        return t1;
    }
    t0 = FUN_0c07e2c4((*(int *)((a4 + 0x10))));
    t1 = (signed char)t0;
    if ((signed char)t0 != 0) {
    } else {
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.0500000007f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.0500000007f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        t1 = 0x20;
    }
    return t1;
}
