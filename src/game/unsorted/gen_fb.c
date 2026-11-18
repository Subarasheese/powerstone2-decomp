/* Straight-line functions with calls and guards (batch gen_fb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c059df2(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c166fac(int, int, int, int);
int FUN_0c167e80(int, int, int);
float math_cos_angle16(int);
extern float math_sin_angle16();
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0c7d5a(int a4);
int FUN_0c14b012(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c7d5a(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register float t8;
    register float u10;
    register float u11;
    register float u12;
    register float t14;
    register float u16;
    register float u17;
    register float u18;
    register float u24;
    register float u26;
    register float t28;
    register float u29;
    register float u31;
    register float u32;
    register float t43;
    register float u45;
    register float u46;
    register float u47;
    register float t49;
    register float u51;
    register float u52;
    register float u53;
    register float u58;
    register float u60;
    register float t62;
    register float u63;
    register float u65;
    register float u66;
    register int t79;
    register float u19;
    register float u20;
    register float u54;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        t79 = (FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1)))));
    } else {
        t5 = *(signed char *)((a4 + 0x41C));
        if ((unsigned char)t5 != 41) {
            if ((unsigned char)t5 != 42) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
                if ((unsigned short)((((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == 0x31C) {
                    t8 = ((float (*)(int, Stk3))(math_sin_angle16))((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))), *(Stk3 *)(((int)stk + 0)));
                    u10 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u11 = (t8 * u10);
                    u12 = (*(float *)(((int)stk + 0)));
                    u12 = u12 + 155.0f * u11;
                    *(float *)(((int)stk + 0)) = u12;
                    u19 = 122.0f;
                    u20 = 155.0f;
                } else {
                    t14 = ((float (*)(int))(math_sin_angle16))((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                    u16 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                    u17 = (t14 * u16);
                    u18 = (*(float *)(((int)stk + 0)));
                    u18 = u18 + 159.0f * u17;
                    *(float *)(((int)stk + 0)) = u18;
                    u19 = 129.0f;
                    u20 = 159.0f;
                }
                u24 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u26 = (*(float *)(((int)stk + 4)));
                u26 = u26 + u19 * u24;
                *(float *)(((int)stk + 4)) = u26;
                t28 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u29 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u31 = (t28 * u29);
                u32 = (*(float *)(((int)stk + 8)));
                u32 = u32 + u20 * u31;
                *(float *)(((int)stk + 8)) = u32;
                FUN_0c167e80((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34));
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x69);
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
            if ((unsigned short)((((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == 0x31C) {
                t43 = ((float (*)(int, Stk3))(math_sin_angle16))((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))), *(Stk3 *)(((int)stk + 0)));
                u45 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u46 = (t43 * u45);
                u47 = (*(float *)(((int)stk + 0)));
                u47 = u47 + 119.0f * u46;
                *(float *)(((int)stk + 0)) = u47;
                u54 = 122.0f;
            } else {
                t49 = ((float (*)(int))(math_sin_angle16))((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
                u51 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
                u52 = (t49 * u51);
                u53 = (*(float *)(((int)stk + 0)));
                u53 = u53 + 119.0f * u52;
                *(float *)(((int)stk + 0)) = u53;
                u54 = 129.0f;
            }
            u58 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
            u60 = (*(float *)(((int)stk + 4)));
            u60 = u60 + u54 * u58;
            *(float *)(((int)stk + 4)) = u60;
            t62 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
            u63 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
            u65 = (t62 * u63);
            u66 = (*(float *)(((int)stk + 8)));
            u66 = u66 + 119.0f * u65;
            *(float *)(((int)stk + 8)) = u66;
            FUN_0c166fac((*(signed char *)((a4 + 0x1))), ((int)stk + 0), ((((short)t0 * (short)0x3938) + 0xC532498) + 0x34), (*(signed char *)((a4 + 0x41F))));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x63);
        }
        FUN_0c0c213c(a4);
        FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t79 = 0x376C;
    }
    return t79;
}

int FUN_0c14b012(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a7;
    w0_0 = f4;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((v0_1 + 0x10)));
    v0_5 = *(signed char *)((v0_1 + 0x14));
    v0_4 = (v0_5);
    v0_0 = (v0_1);
    v0_1 = (((((struct oC4_int *)(v0_1))->v)));
    if ((v0_5 == 0)) goto L_C14B032;
    if ((v0_4 == 1)) goto L_C14B048;
    v0_4 = ((FUN_0c03f346(v0_0, v0_2, a6, v0_3)));
    L_C14B1CA:;
    return v0_4;
    L_C14B048:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C14B05E;
    if (!(((*(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))))) == 19))) goto L_C14B05E;
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + 0x222);
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C14B0C0;
    if ((v0_4 == 1)) goto L_C14B106;
    if ((v0_4 == 2)) goto L_C14B128;
    if ((v0_4 == 3)) goto L_C14B152;
    goto L_C14B1A8;
    L_C14B05E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    return 0x14;
    L_C14B1A8:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_4 = ((math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58))));
    goto L_C14B1CA;
    L_C14B152:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14B1A8;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532560))) + 0x28), (((int)stk + 0) + 0x4));
    (((struct o28_float *)(v0_0))->v) = (*(float *)(((int)stk + 4)));
    (((struct o30_float *)(v0_0))->v) = (*(float *)(((int)stk + 12)));
    (((struct o2C_float *)(v0_0))->v) = ((*(float *)(((int)stk + 8))) + 2000.0f);
    (((struct o50_float *)(v0_0))->v) = -20.0f;
    (((struct o5C_float *)(v0_0))->v) = 0.0f;
    goto L_C14B1A8;
    L_C14B128:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14B1A8;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = 20.0f;
    (((struct o5C_float *)(v0_0))->v) = 5.0f;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x50;
    goto L_C14B1A8;
    L_C14B106:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14B1A8;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = 3.0f;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x4B;
    goto L_C14B1A8;
    L_C14B0C0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(0xC202B4C); }
    FUN_0c0582de((v0_0 + 0x28), ((*(int *)((((short)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C14B1A8;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = 0.800000012f;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x4E;
    goto L_C14B1A8;
    L_C14B032:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x258;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x15B;
    goto L_C14B048;
}
