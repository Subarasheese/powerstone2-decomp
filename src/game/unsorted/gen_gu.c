/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o158_int { char p[0x158]; int v; };
struct o160_int { char p[0x160]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c07e3fc(int, int);
int FUN_0c11fbec(void);
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c120504(int, int, int, int);
int FUN_0c120654(int, int, int, int);
int FUN_0c120906(int, int, int, int, int);
int FUN_0c120e9e(int, int, int, int);
int FUN_0c1211b0(void);
int FUN_0c145c74(int, int);
int FUN_0c145d1c(int, int);
int FUN_0c145eb2(int, int, int);
int FUN_0c1470ea(int, int, int, float);
int FUN_0c147222(int, int, int, float);
float nlRoundOff(float);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int FUN_0c1472dc(int a4);
float FUN_0c11f5c2(int a4);
int FUN_0c061ff4(int a4, int a5, int a6, int a7);
int FUN_0c0cacac(int a4, int a5, int a6, int a7);

int FUN_0c1472dc(int a4)
{
    int stk[10];
    register int t3;
    register int t4;
    register int t16;
    int t18;
    register int t19;
    register int t29;
    register int t30;
    register int t31;
    register int t33;
    register int t46;
    register int t50;
    register int t67;
    register int t73;
    register int t74;
    register int t94;
    register int t98;
    register float t102;
    register int t128;
    register int t132;
    register int t138;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x14)) = *(struct mv3 *)(0xC2A2640); }
    FUN_0c058adc((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x14), ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x9A0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 8) + 0x14)); }
    if ((int)(*(signed char *)((a4 + 0x14))) <= (int)0x2) {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x3C;
        t3 = *(short *)((a4 + 0x1C));
        *(unsigned int *)(((int)stk + 12)) = (0xC4 + a4);
        t4 = *(int *)(((0xC4 + a4) + 0x8));
        *(unsigned int *)(((int)stk + 8)) = t4;
        FUN_0c0588bc(((*(int *)(((*(int *)(((int)stk + 12))) + 0xC))) + 0x6C), ((*(int *)(((int)stk + 8))) + 0x6C), (t4 + 0x84), t3, 0x3C, 0x0);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0xC))) + 0x6C)) = *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0x8))) + 0x6C)); }
    }
    t16 = (((struct oD0_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = t16;
    t18 = FUN_0c145eb2(((*(int *)(((int)stk + 8))) + 0x84), (t16 + 0x6C), (a4 + 0x28));
    if (t18 == 0) {
        t19 = (((struct oD0_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t19)) = *(struct mv3 *)((t19 + 0x6C)); }
    }
    (((struct o88_float *)(((((struct oD0_int *)(a4))->v))))->v) = 0.0f;
    nlSubVector3op((((int)stk + 8) + 0x14), (((((struct oD0_int *)(a4))->v)) + 0x84), (((int)stk + 8) + 0x14));
    FUN_0c145c74((a4 + 0x34), (((int)stk + 8) + 0x14));
    t29 = *(signed char *)((a4 + 0x14));
    if (t29 != 0) {
        if (t29 != 1) {
            if (t29 != 2) {
                if (t29 == 3) {
                    t30 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t30 - 1);
                    if ((int)(short)(t30 - 1) >= 0) {
                        t31 = (((struct oC4_int *)(a4))->v);
                        (((struct o8C_float *)(t31))->v) = (((((struct o8C_float *)(t31))->v)) - 0.0799999982f);
                        t33 = (((struct oC4_int *)(a4))->v);
                        (((struct o74_float *)(t33))->v) = (((((struct o74_float *)(t33))->v)) + 320.0f);
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        *(unsigned short *)((a4 + 0x1C)) = 0x0;
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x26);
                    }
                    t46 = (((struct oC4_int *)(a4))->v);
                    *(unsigned short *)((t46 + 0x6)) = ((*(short *)((t46 + 0x6))) | 0x1000);
                    t138 = (FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v))));
                } else {
                    if (t29 == 4) {
                        t50 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t50 + 0x1);
                        t138 = (short)(t50 + 0x1);
                        if ((int)(short)(t50 + 0x1) > (int)0x28) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t138 = 0x14;
                        }
                    } else {
                        t138 = t29;
                        if (t29 == 5) {
                            t138 = (FUN_0c03f346(a4));
                        }
                    }
                }
            } else {
                t67 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t67))->v) = (((((struct o80_int *)(t67))->v)) + 0x1800);
                nlSubVector3op((((int)stk + 8) + 0x14), (((((struct oD0_int *)(a4))->v)) + 0x84), (a4 + 0x28));
                (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((nlScalor((((int)stk + 8) + 0x14))) / 4000.0f);
                t73 = *(short *)((a4 + 0x1C));
                t74 = ((~(((~t73) + 0x1) & 0x7)) + 0x1);
                if ((int)t73 >= 0) {
                    t74 = (t73 & 0x7);
                }
                if (t74 == 0) {
                    FUN_0c147222((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x2))), a4, ((((struct o41C_float *)(a4))->v)));
                }
                if (((0x1 & t18) == 0) && ((t18 & 0x2) == 0)) {
                } else {
                    FUN_0c1470ea((*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x1))), (((((struct oD0_int *)(a4))->v)) + 0x84), ((((struct o41C_float *)(a4))->v)));
                }
                t94 = (((struct oC4_int *)(a4))->v);
                *(unsigned short *)((t94 + 0x6)) = ((*(short *)((t94 + 0x6))) | 0x1000);
                FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
                t98 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t98 + 0x1);
                t138 = (short)(t98 + 0x1);
                if ((int)(short)(t98 + 0x1) > (int)0x3C) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t102 = nlRoundOff((((((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v)) / 0.0799999982f));
                    *(unsigned short *)((a4 + 0x1C)) = (int)t102;
                    t138 = (int)t102;
                }
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            t138 = 0xC4;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A23A0); }
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0xA, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A2664); }
        t128 = (((struct oC4_int *)(a4))->v);
        (((struct o84_float *)(t128))->v) = (((((struct o84_float *)(t128))->v)) * ((((struct o41C_float *)(a4))->v)));
        t132 = (((struct oC4_int *)(a4))->v);
        (((struct o88_float *)(t132))->v) = (((((struct o88_float *)(t132))->v)) * ((((struct o41C_float *)(a4))->v)));
        FUN_0c059e60((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC532498), 0x25);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t138 = 0xC4;
    }
    return t138;
}

float FUN_0c11f5c2(int a4)
{
    int stk[12];

    register int R1;
    register int R7;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_5 = a4;
    v0_4 = *(signed char *)0xC4750AE;
    v0_3 = (v0_4);
    v0_2 = (0x2);
    v0_0 = (0x0);
    v0_1 = (0xC4750AC);
    if ((v0_4 == 0)) goto L_C11F630;
    if ((v0_3 == 1)) goto L_C11F68E;
    if ((v0_3 != 2)) goto L_C11F5F0;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F758;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x12C;
    L_C11F758:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C11F76E;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    L_C11F76E:;
    v0_2 = FUN_0c1211b0();
    v0_3 = (v0_2);
    if (!((v0_2 != 0))) goto L_C11F8CC;
    *(unsigned char *)((v0_1 + 0x2)) = 0x3;
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_3 = (v0_0);
    goto L_C11F8CC;
    L_C11F8CC:;
    return F0;
    L_C11F5F0:;
    if ((v0_3 != 3)) goto L_C11F5F8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC2018AC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)(0xC2018B8); }
    FUN_0c120504(0x3, 0xF, (((int)stk + 8) + 0x10), (((int)stk + 8) + 0x4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC2018C4); }
    *(int *)((int)stk + 4) = (((int)stk + 8) + 0x10);
    v0_3 = (((struct o158_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = (v0_1 + 0xC);
    FUN_0c120906(0x0, (*(int *)(((*(int *)(((int)stk + 8))) + 0x14))), (*(int *)(((v0_1 + 0xC) + 0x18))), v0_3, (((int)stk + 8) + 0x10));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC2018D0); }
    v0_3 = (((struct o160_int *)(v0_1))->v);
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    v0_4 = (0x0);
    v0_6 = ((((int)stk + 8) + 0x10));
    if (((unsigned int)v0_3 > (unsigned int)0x0)) goto L_C11F7F4;
    v0_7 = (v0_4);
    L_C11F7F6:;
    FUN_0c120654(0x0, v0_7, v0_6, R7);
    v0_4 = FUN_0c11fbec();
    v0_3 = (v0_4);
    v0_3 = (v0_4);
    if (((unsigned char)v0_4 == 0)) goto L_C11F836;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC2018DC); }
    v0_2 = v0_2;
    *(int *)((int)stk + 4) = v0_2;
    *(int *)((int)stk + 0) = 0xC201828;
    FUN_0c120018(0x5, (unsigned char)v0_3, 0x0, (((int)stk + 0) + 0x18), 0xC201828, v0_2);
    *(unsigned char *)((((unsigned char)v0_3 + (0xC4 + v0_1)) + 0x0)) = ((*(signed char *)((((unsigned char)v0_3 + (0xC4 + v0_1)) + 0x0))) + 0x1);
    L_C11F8B2:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    v0_3 = (v0_0);
    goto L_C11F8CC;
    L_C11F836:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x10)) = *(struct mv3 *)(0xC2018E8); }
    FUN_0c120e9e(0x0, (((int)stk + 8) + 0x10), v0_6, R7);
    goto L_C11F8B2;
    L_C11F7F4:;
    v0_7 = ((*(int *)(((int)stk + 8))));
    goto L_C11F7F6;
    L_C11F5F8:;
    if ((v0_3 != 4)) goto L_C11F600;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F89C;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned int *)((v0_1 + 0x18)) = 0x1E0;
    L_C11F89C:;
    v0_2 = FUN_0c1211b0();
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C11F8A8;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    L_C11F8A8:;
    v0_2 = *(int *)((v0_1 + 0x18));
    *(unsigned int *)((v0_1 + 0x18)) = (v0_2 - 1);
    if (((int)(v0_2 - 1) > 0)) goto L_C11F8CC;
    goto L_C11F8B2;
    L_C11F600:;
    *(unsigned char *)((v0_1 + 0x1)) = ((*(signed char *)((v0_1 + 0x1))) + 0x1);
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    v0_3 = (v0_0);
    goto L_C11F8CC;
    L_C11F68E:;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C11F720;
    v0_3 = *(int *)((v0_1 + 0x14));
    *(unsigned int *)((v0_1 + 0x14)) = (v0_3 - 1);
    if (((int)(v0_3 - 1) > 0)) goto L_C11F76E;
    *(unsigned int *)((v0_1 + 0x14)) = 0x50;
    v0_4 = (v0_0);
    v0_6 = (0xFF);
    v0_7 = (0x4);
    w0_0 = (140.0f);
    w0_1 = (-210.0f);
    L_C11F6B0:;
    v0_5 = *(signed char *)(((*(int *)((v0_1 + 0x18))) + 0xC2A0D36));
    v0_3 = (v0_5);
    v0_8 = ((unsigned char)v0_5);
    if (((*(signed char *)((((unsigned char)v0_5 + (0xC4 + v0_1)) + 0x1))) == 0)) goto L_C11F6CC;
    v0_5 = (0x81);
    L_C11F6CE:;
    if ((v0_8 != v0_6)) goto L_C11F6E0;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    *(unsigned char *)((v0_1 + 0x4)) = v0_0;
    goto L_C11F76E;
    L_C11F6E0:;
    w0_2 = w0_1;
    w0_2 = w0_2 + w0_0 * (float)v0_4;
    *(float *)(((int)stk + 36)) = w0_2;
    *(float *)(((int)stk + 40)) = w0_1;
    v0_8 = v0_2;
    *(int *)((int)stk + 4) = v0_8;
    *(int *)((int)stk + 0) = 0xC201828;
    FUN_0c120018(v0_5, ((unsigned char)v0_3 + 0x1), (*(signed char *)((((unsigned char)v0_3 + (0xC4 + v0_1)) + 0x1))), (((int)stk + 0) + 0x24), 0xC201828, v0_8);
    v0_3 = (int)(v0_4 + 0x1) < (int)v0_7;
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) + 0x1);
    v0_4 = ((v0_4 + 0x1));
    if (v0_3) goto L_C11F6B0;
    goto L_C11F76E;
    L_C11F6CC:;
    v0_5 = (0x0);
    goto L_C11F6CE;
    L_C11F720:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    goto L_C11F76E;
    L_C11F630:;
    *(unsigned char *)((v0_1 + 0x2)) = ((*(signed char *)((v0_1 + 0x2))) + 0x1);
    *(unsigned char *)((v0_1 + 0x3)) = v0_0;
    *(unsigned int *)((v0_1 + 0x14)) = v0_0;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    *(unsigned int *)((v0_1 + 0x20)) = v0_0;
    *(unsigned int *)((v0_1 + 0x24)) = v0_0;
    v0_4 = (0x90);
    v0_3 = (0x8F);
    v0_5 = (0x3E7);
    v0_7 = (v0_0);
    R7 = (0x79);
    L_C11F68A:;
    if (((int)v0_7 < (int)v0_4)) goto L_C11F652;
    goto L_C11F68E;
    L_C11F652:;
    v0_6 = (((0xC4 + v0_1) + v0_7));
    if (((*(signed char *)((((0xC4 + v0_1) + v0_7) + 0x0))) == 0)) goto L_C11F688;
    if (((int)v0_7 > (int)R7)) goto L_C11F674;
    v0_8 = *(int *)((v0_1 + 0x20));
    v0_6 = *(signed char *)((v0_6 + 0x0));
    *(unsigned int *)((v0_1 + 0x20)) = (v0_8 + v0_6);
    if (((int)(v0_8 + v0_6) <= (int)v0_5)) goto L_C11F688;
    *(unsigned int *)((v0_1 + 0x20)) = v0_5;
    L_C11F688:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C11F68A;
    L_C11F674:;
    if (((int)v0_7 > (int)v0_3)) goto L_C11F688;
    v0_8 = *(int *)((v0_1 + 0x24));
    v0_6 = *(signed char *)((v0_6 + 0x0));
    *(unsigned int *)((v0_1 + 0x24)) = (v0_8 + v0_6);
    if (((int)(v0_8 + v0_6) <= (int)v0_5)) goto L_C11F688;
    *(unsigned int *)((v0_1 + 0x24)) = v0_5;
    goto L_C11F688;
}

int FUN_0c061ff4(int a4, int a5, int a6, int a7)
{
    int stk[9];
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
    register int t192;
    register int t26;
    register float u42;
    register float u55;
    register int t57;
    register int t67;
    register float u85;
    register int t92;
    register int t103;
    register float u121;
    register int t132;
    register int t143;
    register float u43;
    register float u44;
    float u56;
    register float u64;
    register float u76;
    register float u83;
    register float u99;
    register float u112;
    register float u119;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC1C4AB8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C4AC4); }
    u0 = (((struct o8_float *)(a6))->v);
    u1 = (((struct o8_float *)(a7))->v);
    u2 = (((struct oC_float *)((a7 + 0x8)))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    (((struct o18_float *)(((int)stk + 0)))->v) = ((u3 + u2) - u4);
    u6 = (((struct o10_float *)((a6 + 0x8)))->v);
    u7 = (((struct o10_float *)((a7 + 0x8)))->v);
    u8 = (((struct o4_float *)((a6 + 0x8)))->v);
    u9 = (((struct o4_float *)((a7 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)((a6 + 0x8)))->v);
    u14 = (((struct o14_float *)((a7 + 0x8)))->v);
    u15 = (((struct o8_float *)((a6 + 0x8)))->v);
    u16 = (((struct o8_float *)((a7 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = ((u13 + u14) - u18);
    t192 = 0x0;
    if (!(((((struct o18_float *)(((int)stk + 0)))->v)) > 0.0f)) {
    } else {
        t192 = 0x0;
        if (!(((((struct o8_float *)((((int)stk + 0) + 0x18)))->v)) > 0.0f)) {
        } else {
            t192 = 0x0;
            if (0.0f > ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v))) {
            } else {
                t26 = FUN_0c061284(a4, a5);
                if (t26 != 0) {
                    (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                    t192 = 0x2;
                } else {
                    u42 = (((struct o4_float *)((((int)stk + 0) + 0x18)))->v);
                    if ((u42 > 9.0f) && ((u43 = (((struct o18_float *)(((int)stk + 0)))->v), u42 > u43) || (u44 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), u42 > u44))) {
                        u55 = (((struct o18_float *)(((int)stk + 0)))->v);
                        if (!(u55 > u42) && (u56 = (((struct o8_float *)((((int)stk + 0) + 0x18)))->v), !(u55 > u56))) {
                            t57 = FUN_0c0612cc(a4, a5);
                            if (t57 != 0) {
                                if (((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v))) {
                                    u64 = (-(*(float *)(((int)stk + 24))));
                                } else {
                                    u64 = (*(float *)(((int)stk + 24)));
                                }
                                *(float *)(((int)stk + 0)) = u64;
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                t67 = FUN_0c0612cc(a5, a4);
                                if (t67 != 0) {
                                    if (!(((((struct o8_float *)(a6))->v)) > ((((struct o8_float *)(a7))->v)))) {
                                        u76 = (-(*(float *)(((int)stk + 24))));
                                    } else {
                                        u76 = (*(float *)(((int)stk + 24)));
                                    }
                                    *(float *)(((int)stk + 12)) = u76;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                } else {
                                    if (((((struct o8_float *)(a7))->v)) > ((((struct o8_float *)(a6))->v))) {
                                        u83 = (-(*(float *)(((int)stk + 24))));
                                    } else {
                                        u83 = (*(float *)(((int)stk + 24)));
                                    }
                                    *(float *)(((int)stk + 12)) = (u83 / (1.0f + 1.0f));
                                    u85 = (u83 / (1.0f + 1.0f));
                                    u85 = -u85;
                                    *(float *)(((int)stk + 0)) = u85;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                    FUN_0c060c80(a5, ((int)stk + 0), a7);
                                }
                            }
                        } else {
                            t92 = FUN_0c0612cc(a4, a5);
                            if (t92 != 0) {
                                if (((((struct o8_float *)((a6 + 0x8)))->v)) > ((((struct o8_float *)((a7 + 0x8)))->v))) {
                                    u99 = (-(*(float *)(((int)stk + 32))));
                                } else {
                                    u99 = (*(float *)(((int)stk + 32)));
                                }
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u99);
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                t103 = FUN_0c0612cc(a5, a4);
                                if (t103 != 0) {
                                    if (!(((((struct o8_float *)((a6 + 0x8)))->v)) > ((((struct o8_float *)((a7 + 0x8)))->v)))) {
                                        u112 = (-(*(float *)(((int)stk + 32))));
                                    } else {
                                        u112 = (*(float *)(((int)stk + 32)));
                                    }
                                    *(float *)(((int)stk + 20)) = u112;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                } else {
                                    if (((((struct o8_float *)((a7 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                                        u119 = (-(*(float *)(((int)stk + 32))));
                                    } else {
                                        u119 = (*(float *)(((int)stk + 32)));
                                    }
                                    *(float *)(((int)stk + 20)) = (u119 / (1.0f + 1.0f));
                                    u121 = (u119 / (1.0f + 1.0f));
                                    u121 = -u121;
                                    *(float *)(((int)stk + 8)) = u121;
                                    FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                    FUN_0c060c80(a5, ((int)stk + 0), a7);
                                }
                            }
                        }
                    } else {
                        if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a7 + 0x8)))->v))) {
                            t132 = FUN_0c0612cc(a4, a5);
                            if (t132 != 0) {
                                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)));
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                            } else {
                                *(float *)(((int)stk + 16)) = ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v));
                                FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                                FUN_0c061222(a5, a4);
                                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                                FUN_0c06130a(a4, a6, (a6 + 0x8), (a7 + 0x8));
                            }
                        } else {
                            t143 = FUN_0c0612cc(a5, a4);
                            if (t143 != 0) {
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v)));
                                FUN_0c060c80(a4, (((int)stk + 0) + 0xC), a6);
                            } else {
                                *(float *)(((int)stk + 4)) = ((((struct o4_float *)((((int)stk + 0) + 0x18)))->v));
                                FUN_0c060c80(a5, ((int)stk + 0), a7);
                                FUN_0c061222(a4, a5);
                                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                                FUN_0c06130a(a5, a7, (a7 + 0x8), (a6 + 0x8));
                            }
                        }
                    }
                    t192 = 0x1;
                }
            }
        }
    }
    return t192;
}

int FUN_0c0cacac(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register float u0;

    t7 = *(signed char *)((a4 + 0x2));
    if (t7 != 0) {
        if (t7 != 1) {
            if (t7 != 2) {
                if (t7 == 3) {
                    t8 = *(signed char *)((a4 + 0x1));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC532498 + ((short)t8 * (short)0x3938)) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((0xC532498 + ((short)t8 * (short)0x3938)) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((0xC532498 + ((short)t8 * (short)0x3938)) + 0x34)); }
                    if ((*(signed char *)(((0xC532498 + ((short)t8 * (short)0x3938)) + 0x3715))) != 7) {
                        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                    }
                    if ((*(signed char *)(((0xC532498 + ((short)t8 * (short)0x3938)) + 0x3732))) != 11) {
                        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                    }
                    t9 = *(short *)((a4 + 0x1C));
                    if (t9 == (unsigned short)((((struct o3818_short *)((0xC532498 + ((short)t8 * (short)0x3938))))->v))) {
                        return t9;
                    }
                    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
                }
                if (t7 == 4) {
                    t8 = *(signed char *)((a4 + 0x1));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x34)); }
                    t9 = *(short *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x1E));
                    *(unsigned short *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x1E)) = (t9 + 0x1);
                    if ((short)(t9 + 0x1) == 8) {
                        FUN_0c07e3fc(a4, 0xA);
                    }
                    if (((*(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x3715))) == 7) && ((t0 = *(signed char *)(((((short)t8 * (short)0x3938) + 0xC532498) + 0x3732)), t0 == 15) && (t1 = *(short *)((a4 + 0x1C)), t2 = (((struct o3818_short *)((((short)t8 * (short)0x3938) + 0xC532498)))->v), t1 == (unsigned short)t2))) {
                        if (!(22.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t8 * (short)0x3938) + 0xC532498)))->v))))->v)))) {
                            return ((int (*)(int))(FUN_0c03f346))(a4);
                        }
                        return 0x8C;
                    }
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                if (t7 == 5) {
                    t0 = *(signed char *)((a4 + 0x1));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
                    t1 = *(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1E));
                    *(unsigned short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1E)) = (t1 + 0x1);
                    if ((short)(t1 + 0x1) == 8) {
                        FUN_0c07e3fc(a4, 0xC);
                    }
                    if (((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) == 7) && ((t3 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3732)), t3 == 15) && ((t4 = *(short *)((a4 + 0x1C)), t5 = (((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), t4 == (unsigned short)t5) && (t6 = (((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u0 = (((struct o8C_float *)(t6))->v), 23.0f > u0)))) {
                        return 0x8C;
                    }
                    return ((int (*)(int))(FUN_0c03f346))(a4);
                }
                return t7;
            }
            t0 = *(signed char *)((a4 + 0x1));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x28)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x4C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x34)); }
            if ((*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3715))) != 7) {
                return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
            }
            if ((*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3732))) != 11) {
                return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
            }
            if ((*(short *)((a4 + 0x1C))) != (unsigned short)((((struct o3818_short *)((0xC532498 + ((short)t0 * (short)0x3938))))->v))) {
                return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
                return (short)(t0 - 1);
            }
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t0 = *(signed char *)((a4 + 0x1));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x4C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x34)); }
        if ((*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3715))) != 7) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        t1 = *(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3732));
        if (t1 == 10) {
            return t1;
        }
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x1C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x4C)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x34)); }
    if ((*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3715))) != 32) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    if ((*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3739))) != 16) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    if ((*(short *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x1C))) != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
    }
    t1 = 0x3740;
    if ((*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3740))) == 0xFF) {
    } else {
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)(((0xC532498 + ((short)t0 * (short)0x3938)) + 0x3740))))));
        t1 = 0x12A;
    }
    return t1;
}
