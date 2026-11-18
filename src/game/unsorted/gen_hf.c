/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c0373ee(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c0582de(int, int);
int FUN_0c05ab12(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0e4f8c(int, int, int);
int FUN_0c0e79f4(int, int, int);
int FUN_0c15aed8(int);
float math_cos_angle16(int);
int math_mat_transform_vector(int, int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
extern int nlRand();
float nlScalor(int);
int nlSubVector3op(int, int, int, Stk3);
int FUN_0c1453c4(int a4, int a5, int a6, int a7);
float FUN_0c0e7b54(int a4, int a5, int a6, int a7);
int FUN_0c0e5372(int a4);
int FUN_0c124c04(int a4, int a5, int a6, int a7);

int FUN_0c1453c4(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register int t36;
    register int t2;
    register int t33;
    register int t34;
    register int t1;
    register int t3;

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x4, a7);
    t36 = t0;
    if (t0 == 0) {
    } else {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 << 1);
            t1 = t2;
            t3 = (t3 + 0xC202994);
            t1 = (t1 << 2);
            t1 = (t1 + (0xC4 + t0));
            t1 = (*(int *)((t1 + 0x0)));
            FUN_0c03744a(t1, (*(signed char *)((t3 + 0x3))), (*(signed char *)((t3 + 0x2))), (*(int *)(((((*(signed char *)((a4 + 0x1))) << 2) << 1) + 0xC4B40E0))));
            t2 = (t2 + 0x1);
            *(unsigned short *)((t1 + 0x6)) = (*(short *)((t3 + 0x0)));
            (((struct o7C_uint *)(t1))->v) = (*(int *)((t3 + 0x4)));
        }
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0xC)))))->v) = ((*(int *)(((0xC4 + t0) + 0x8))) + 0x28);
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = 0xC;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x10)) = (((*(int *)(((int)stk + 16))) * 0x3938) + 0xC532498);
        *(unsigned int *)((t0 + 0x4)) = 0xC1455A6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)(((((a6 << 1) + a6) << 2) + 0xC202974)); }
        FUN_0c0582de((((int)stk + 16) + 0x4), ((*(int *)(((((*(int *)(((a6 << 2) + 0xC20298C))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        if (a6 == 0) {
            *(float *)(((int)stk + 24)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 28)) = 1.0f;
            math_mat_transform_vector((((int)stk + 16) + 0x4), (((((struct oC4_int *)(a4))->v)) + 0x28));
            math_vec3_mul_xyz((((int)stk + 16) + 0x4), 5.0f, 5.0f, 5.0f);
        } else {
            *(float *)(((int)stk + 28)) = 0.0f;
            *(float *)(((int)stk + 20)) = 0.0f;
            *(float *)(((int)stk + 24)) = 5.0f;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x4C)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c07e2f4(t0, 0x3);
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t33 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 12) = (((int)0x1 << (int)t33) | 0xFFFFFFF0);
        *(int *)((int)stk + 8) = 0x0;
        t34 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t34));
        *(int *)((int)stk + 0) = 0x100;
        t36 = (FUN_0c064d24(t0, 0x1, 0x1B, 0x0, 0x100, (~((int)0x1 << (int)t34)), 0x0, (((int)0x1 << (int)t33) | 0xFFFFFFF0)));
    }
    return t36;
}

float FUN_0c0e7b54(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
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
    register float w0_0;
    v0_3 = a4;
    v0_6 = a6;
    v0_4 = *(int *)0xC540DD4;
    v0_1 = ((*(int *)((0xC540D94 + (((-(*(signed char *)((v0_3 + 0x3)))) + 0x12) << 2)))));
    v0_5 = (0x0);
    v0_2 = (v0_4);
    v0_0 = (v0_3);
    v0_3 = (0xC540978);
    v0_7 = (0xC540D94);
    if ((v0_4 != 0)) goto L_C0E7B96;
    (((struct o44_uint *)((((*(signed char *)((v0_0 + 0x3))) << 2) + (0x41C + v0_3))))->v) = v0_5;
    v0_4 = ((FUN_0c03f346(v0_0, v0_7, v0_6, a7)));
    L_C0E7D1E:;
    return F0;
    L_C0E7B96:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_3);
    if ((v0_3 == 0)) goto L_C0E7BA6;
    if ((v0_4 == 1)) goto L_C0E7C54;
    goto L_C0E7D1E;
    L_C0E7C54:;
    (((struct o28_float *)(v0_0))->v) = ((((struct o28_float *)(v0_2))->v));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_2))->v)) + 1100.0f);
    w0_0 = (((struct o2C_float *)(v0_2))->v);
    (((struct o2C_float *)(v0_0))->v) = (w0_0 + -70.0f);
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_2 = *(signed char *)((v0_2 + 0x15));
    v0_4 = (v0_2);
    v0_3 = (v0_2);
    w0_0 = ((w0_0 + -70.0f));
    if ((v0_2 == 4)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 5)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 6)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 7)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 == 8)) goto L_C0E7CC4;
    v0_4 = (v0_3);
    if ((v0_3 != 2)) goto L_C0E7D1E;
    v0_2 = *(short *)((v0_0 + 0x1C));
    v0_3 = *(short *)0xC540994;
    v0_4 = (0xC0E7D44);
    F0 = (((float)v0_2 + 30.0f));
    w0_0 = ((float)v0_3);
    FPUL_ = (v0_2);
    if ((((float)v0_2 + 30.0f) > (float)v0_3)) goto L_C0E7D1E;
    L_C0E7CC4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((v0_0 + 0x28)); }
    nlSubVector3op(((int)stk + 0), ((int)stk + 0), (v0_1 + 0x28), *(Stk3 *)(((int)stk + 0)));
    *(float *)(((int)stk + 4)) = 0.0f;
    v0_1 = *(signed char *)((v0_1 + 0x41D));
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E7CFA;
    if ((v0_2 == 2)) goto L_C0E7CFA;
    if ((v0_2 != 10)) goto L_C0E7D0E;
    L_C0E7CFA:;
    w0_0 = nlScalor(((int)stk + 0));
    F0 = (w0_0);
    if ((!(100.0f > w0_0))) goto L_C0E7D0E;
    v0_4 = (0x3C);
    L_C0E7D0A:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_4;
    goto L_C0E7D1E;
    L_C0E7D0E:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_4 = (v0_1);
    if (((int)v0_1 > 0)) goto L_C0E7D1E;
    v0_4 = ((FUN_0c0e79f4(v0_0, 0x0, (*(signed char *)((v0_0 + 0x1))))));
    goto L_C0E7D1E;
    L_C0E7BA6:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    (((struct o126_uchar *)(v0_0))->v) = 0x1;
    FUN_0c0c2ab6(v0_0, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    *(unsigned short *)(((0x12A + v0_0) + 0x2)) = v0_5;
    *(unsigned short *)(((0x12A + v0_0) + 0x4)) = v0_5;
    (((struct o12A_ushort *)(v0_0))->v) = v0_5;
    v0_3 = (FUN_0c042fe0()) != 0;
    v0_4 = (0x1);
    if (v0_3) goto L_C0E7BE8;
    v0_4 = ((*(short *)((0xC1CC114 + ((*(signed char *)((v0_0 + 0x3))) << 1)))));
    goto L_C0E7D0A;
    L_C0E7BE8:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0xF0;
    *(unsigned int *)((v0_0 + 0x3C)) = v0_5;
    *(unsigned int *)((v0_0 + 0x38)) = v0_5;
    *(unsigned int *)((v0_0 + 0x34)) = v0_5;
    FUN_0c0373ee(v0_0, 0x41, (*(int *)0xC4B410C));
    v0_3 = (v0_5);
    L_C0E7C40:;
    if (((int)v0_3 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0E7C30;
    (((struct o132_uchar *)(v0_0))->v) = v0_5;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C0E7C54;
    L_C0E7C30:;
    *(unsigned char *)(((*(int *)((((v0_3 << 2) + (0xC4 + v0_0)) + 0x0))) + 0x0)) = v0_4;
    v0_3 = ((v0_3 + 0x1));
    goto L_C0E7C40;
}

int FUN_0c0e5372(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register float u7;
    register int t8;
    register int t9;
    register float u13;
    register int t14;
    register int t15;
    register float u19;
    int t29;
    register int t33;
    register int t44;
    register int t45;
    register int t53;
    register int t54;
    register float u58;
    register int t59;
    register int t60;
    register float u64;
    register int t65;
    register int t66;
    register float u70;
    int t82;
    register int t89;
    register int t99;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t99 = t0;
        if (t0 != 1) {
        } else {
            if (((*(short *)((a4 + 0x1C))) & 7) == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                t2 = ((int (*)(Stk3))(nlRand))(*(Stk3 *)(((int)stk + 0)));
                t3 = ((~(((~t2) + 0x1) & 0x1F)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x1F);
                }
                u7 = (*(float *)(((int)stk + 0)));
                u7 = u7 + 4.0f * ((float)(t3 - 16));
                *(float *)(((int)stk + 0)) = u7;
                t8 = ((int (*)(void))(nlRand))();
                t9 = ((~(((~t8) + 0x1) & 0x1F)) + 0x1);
                if ((int)t8 >= 0) {
                    t9 = (t8 & 0x1F);
                }
                u13 = (*(float *)(((int)stk + 8)));
                u13 = u13 + 4.0f * ((float)(t9 - 16));
                *(float *)(((int)stk + 8)) = u13;
                t14 = ((int (*)(void))(nlRand))();
                t15 = ((~(((~t14) + 0x1) & 0x1F)) + 0x1);
                if ((int)t14 >= 0) {
                    t15 = (t14 & 0x1F);
                }
                u19 = (*(float *)0xC0E553C);
                u19 = u19 + 1.0f * ((float)(t15 - 16));
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u19);
                FUN_0c15aed8(((int)stk + 0));
            }
            if ((*(short *)((a4 + 0x1C))) == 10) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
            t29 = *(short *)((a4 + 0x1C));
            if ((t29 != 10) && ((t29 != 20) && ((t29 != 50) && (t29 != 60)))) {
            } else {
                FUN_0c05ab12(0xD0, (a4 + 0x28));
            }
            t33 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t33 - 1);
            t99 = (short)(t33 - 1);
            if ((int)(short)(t33 - 1) <= 0) {
                FUN_0c15aed8((a4 + 0x28));
                t99 = (FUN_0c0e4f8c(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
            }
        }
    } else {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        t44 = ((int (*)(void))(nlRand))();
        t45 = ((~(((~t44) + 0x1) & 0xF)) + 0x1);
        if ((int)t44 >= 0) {
            t45 = (t44 & 0xF);
        }
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((((t45 << 8) << 2) << 2))) * 5.0f);
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((((t45 << 8) << 2) << 2))) * 5.0f);
        (((struct o50_float *)(a4))->v) = (float)(*(short *)((a4 + 0x1E)));
        *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 0.75f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        if (((*(short *)((a4 + 0x1C))) & 7) == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
            t53 = ((int (*)(Stk3))(nlRand))(*(Stk3 *)(((int)stk + 0)));
            t54 = ((~(((~t53) + 0x1) & 0x1F)) + 0x1);
            if ((int)t53 >= 0) {
                t54 = (t53 & 0x1F);
            }
            u58 = (*(float *)(((int)stk + 0)));
            u58 = u58 + 4.0f * ((float)(t54 - 16));
            *(float *)(((int)stk + 0)) = u58;
            t59 = ((int (*)(void))(nlRand))();
            t60 = ((~(((~t59) + 0x1) & 0x1F)) + 0x1);
            if ((int)t59 >= 0) {
                t60 = (t59 & 0x1F);
            }
            u64 = (*(float *)(((int)stk + 8)));
            u64 = u64 + 4.0f * ((float)(t60 - 16));
            *(float *)(((int)stk + 8)) = u64;
            t65 = ((int (*)(void))(nlRand))();
            t66 = ((~(((~t65) + 0x1) & 0x1F)) + 0x1);
            if ((int)t65 >= 0) {
                t66 = (t65 & 0x1F);
            }
            u70 = (*(float *)0xC0E553C);
            u70 = u70 + 1.0f * ((float)(t66 - 16));
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u70);
            FUN_0c15aed8(((int)stk + 0));
        }
        if ((*(short *)((a4 + 0x1C))) == 10) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t82 = *(short *)((a4 + 0x1C));
        if ((t82 != 10) && ((t82 != 20) && ((t82 != 50) && (t82 != 60)))) {
        } else {
            FUN_0c05ab12(0xD0, (a4 + 0x28));
        }
        t89 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t89 - 1);
        t99 = (short)(t89 - 1);
        if ((int)(short)(t89 - 1) <= 0) {
            FUN_0c15aed8((a4 + 0x28));
            t99 = (FUN_0c0e4f8c(a4, 0xB, (*(signed char *)((a4 + 0x1)))));
        }
    }
    return t99;
}

int FUN_0c124c04(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t2 = *(int *)((a4 + 0x10));
    t3 = a5;
    if ((((*(signed char *)((t2 + 0x3715))) == 26) && (t0 = (((struct o3818_short *)(t2))->v), (unsigned short)t0 == 0x113)) || (t1 = *(signed char *)((a4 + 0x14)), (int)t1 >= (int)0x3)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t3 = 0x3;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 3) {
            if (t0 == 4) {
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
                u0 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                if ((int)(short)(t1 - 1) <= 0) {
                    return FUN_0c03f346(a4, t3, a6, a7);
                }
                return (short)(t1 - 1);
            }
            return t0;
        }
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, t3, a6, a7);
        }
        return (short)(t0 - 1);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((t2 + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((t2 + 0x28)); }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xAAA);
    t1 = *(short *)((a4 + 0x1E));
    u0 = math_sin_angle16((int)(((float)((t1 << 2) + t1) * 65536.0f) / 360.0f));
    u1 = 1.0f;
    u1 = u1 + 0.300000012f * u0;
    (((struct o8C_float *)(t0))->v) = u1;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 2730);
    t1 = *(short *)((a4 + 0x1E));
    u0 = math_sin_angle16((int)(((float)(((t1 << 2) + t1) + 0x1E) * 65536.0f) / 360.0f));
    u1 = 1.0f;
    u1 = u1 + 0.300000012f * u0;
    (((struct o8C_float *)(t0))->v) = u1;
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xE38);
    if (1.5f > ((((struct o8C_float *)(t0))->v))) {
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) * 1.02999997f);
    }
    return 0x8C;
}
