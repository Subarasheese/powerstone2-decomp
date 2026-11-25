/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
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
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c060028(int, int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0d04c4(int, int);
int FUN_0c0d558c(int);
int FUN_0c0d55a2(int);
int FUN_0c0d5c10(int, int);
int FUN_0c133384(int);
int FUN_0c138fae(int);
int FUN_0c1393f4(int);
int FUN_0c139d06(int, int, int, int, int);
extern int FUN_0c14f824();
int FUN_0c1660d4(int, int);
int FUN_0c169524(int, int, int);
int FUN_0c16957c(int, int, int);
int FUN_0c16958a(int, int, int, int);
int FUN_0c17b1a0(int);
int ai_clear_op_state(void);
float math_cos_angle16(int);
float math_interval_overlap(float, float, float, float);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlRand(void);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c57e0(int a4);
int FUN_0c0324e4(int a4, int a5, int a6, int a7);
int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0d55b4(int a4);
void FUN_0c139d98(int a4, int a5, int a6, int a7);
int FUN_0c031788(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0be4c6(int a4, float f4);
int FUN_0c03a2ce(int a4, int a5, int a6);
void FUN_0c1333cc(int a4, int a5, int a6, int a7);
int FUN_0c165560(int a4, int a5, int a6, int a7, float f4);
int FUN_0c062668(int a4, int a5, int a6, int a7);
int FUN_0c16a112(int a4, int a5, int a6, int a7);
int FUN_0c032240(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };




int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    int t2;
    int qa0;

    qa0 = 0xC54099A;
    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o1C_ushort *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
    }
    t0 = *(signed char *)(a4 + 0x15);
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)qa0;
                t2 = *(signed char *)(a4 + 0x2);
                switch (t2) {
                case 0:
                    if (1.0f > (float)((int)((int)t0 / (int)0x2710))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    (((struct o1C_ushort *)(a4))->v) = ((int)((int)((int)((int)(*(short *)qa0) / (int)0x2710)) % (int)0xA));
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1A);
                    break;
                case 1:
                    if (1.0f > (float)((int)((int)t0 / (int)0x3E8))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    (((struct o1C_ushort *)(a4))->v) = ((int)((int)((int)((int)(*(short *)qa0) / (int)0x3E8)) % (int)0xA));
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1A);
                    break;
                case 2:
                    if (1.0f > (float)((int)((int)t0 / (int)0x64))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    (((struct o1C_ushort *)(a4))->v) = ((int)((int)((int)((int)(*(short *)qa0) / (int)0x64)) % (int)0xA));
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1A);
                    break;
                case 3:
                    if (1.0f > (float)((int)((int)t0 / (int)0xA))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    (((struct o1C_ushort *)(a4))->v) = ((int)((int)((int)((int)(*(short *)qa0) / (int)0xA)) % (int)0xA));
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1A);
                    break;
                case 4:
                    (((struct o1C_ushort *)(a4))->v) = ((int)((int)t0 % (int)0xA));
                    (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) + 0x1A);
                    break;
                case 5:
                    (((struct o1C_ushort *)(a4))->v) = 0xC;
                    break;
                }
                FUN_0c03733c(a4, ((((struct o1C_short *)(a4))->v)), (*(int *)0xC4B40D0));
                t0 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)(t0) = 0x1;
                (((struct o6_ushort *)(t0))->v) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x6C) = *(struct mv3 *)((((short)(*(signed char *)(a4 + 0x2)) * (short)0x1C) + 0xC1AA570)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)(a4 + 0x2)) * (short)0x1C) + 0xC1AA570) + 0xC)); }
                (((struct o18_float *)(t0))->v) = 1.0f;
                (((struct o1C_float *)(t0))->v) = ((((struct o0_float *)0xC0359A8)->v));
                (((struct o20_float *)(t0))->v) = 0.0f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)(t0) = 0x1;
                (((struct o6_ushort *)(t0))->v) = 0x31F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t0 + 0x6C) = *(struct mv3 *)((((short)(*(signed char *)(a4 + 0x2)) * (short)0x1C) + 0xC1AA570)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t0)) = *(struct mv3 *)(((((short)(*(signed char *)(a4 + 0x2)) * (short)0x1C) + 0xC1AA570) + 0xC)); }
                (((struct o18_float *)(t0))->v) = ((((struct o4_float *)0xC0359A8)->v));
                (((struct o1C_float *)(t0))->v) = ((((struct o8_float *)0xC0359A8)->v));
                (((struct o20_float *)(t0))->v) = 0.0f;
                t0 = 0x22;
                if ((*(short *)qa0) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    t0 = 0x14;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            (((struct o1C_ushort *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}


/* manual: player power-up change task: copies the player's position and angle; state 0 waits for the model, 1 waits 20 frames then
   sets the look, 2 spawns the two particle groups, blinks, plays the two ramps and ends; 124 cases, 290 of 290 instructions */
#define B(a) (*(signed char *)(a))
#define H(a) (*(short *)(a))
#define I(a) (*(int *)(a))
#define F(a) (*(float *)(a))
#define PL(s) (0xC532498 + (s) * 0x3938)
void FUN_0c139d98(int a4, int a5, int a6, int a7)
{
    typedef struct { int w[4]; } Mv4;
    int v[3];
    int w[3];
    int p, i, k;
    int *t, *q;
    short *h;

    p = PL(B(a4 + 1));
    if (B(p + 0x3715) != 26)
        B(a4 + 0x14) = 3;
    { typedef struct { int w[6]; } Mv6; *(Mv6 *)(a4 + 0x28) = *(Mv6 *)(p + 0x28); }
    h = (short *)(a4 + 0x1C);
    switch (B(a4 + 0x14)) {
    default:
        FUN_0c03f346(a4, 0xC532498, a6, a7);
        break;
    case 0:
        if (20.0f > F(I(p + 0x118) + 0x8C))
            return;
        B(a4 + 0x14)++;
        FUN_0c138fae(B(p + 1));
        break;
    case 1:
        if (++h[0] <= 20)
            return;
        B(a4 + 0x14)++;
        h[0] = 0;
        FUN_0c03744a(I(a4 + 0xC4), 0, 0x10, I(0xC4B40FC + B(a4 + 1) * 4));
        B(a4 + 0xA8) = 1;
        H(a4 + 0xAC) = 15;
        B(a4 + 0xA9) = 0x21;
        H(I(a4 + 0xC4) + 6) = 0x21F;
        *(Mv4 *)(I(a4 + 0xC4) + 0x14) = *(Mv4 *)0xC2A1BD8;
        break;
    case 2:
        if (h[1] < 2 && h[0] % 3 == 0) {
            for (t = (int *)0xC2A1DC8 + h[1] * 2, i = t[0]; i <= t[1]; i++) {
                q = (int *)0xC2A1CD8 + i;
                w[0] = 0;
                w[1] = q[0];
                w[2] = 0;
                v[0] = v[2] = q[12];
                v[1] = q[24];
                FUN_0c139d06(B(p + 1), (int)v, (int)w, q[36], q[48]);
            }
            h[1]++;
        }
        if (h[0] == 0)
            FUN_0c1393f4(B(a4 + 1));
        if (h[0] & 1) {
            *(Mv4 *)(I(a4 + 0xC4) + 0x14) = *(Mv4 *)(0xC2A1DF4 + (h[2] & 1) * 16);
            h[2]++;
        }
        t = (int *)0xC2A1DE0;
        for (k = 0; k <= 12; k += 12, t += 2)
            if (h[0] >= t[1] && h[0] <= t[2])
                FUN_0c0588bc(I(a4 + 0xC4) + 0x84, 0xC2A1BCC - k, 0xC2A1BC0 + k, h[0], t[2], t[1]);
        if (++h[0] > I(0xC2A1DE0))
            B(a4 + 0x14)++;
        break;
    }
}
#undef B
#undef H
#undef I
#undef F
#undef PL






int FUN_0c062668(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u8;
    register float t9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    float t14;
    register int t96;
    register int t15;
    register int t42;
    register int t54;
    register int t57;
    register float u60;
    register float u63;
    int t40;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC1C4AE8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC1C4AF4); }
    u0 = (((struct oC_float *)((a6 + 0x8)))->v);
    u1 = (((struct oC_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 0)) = (u1 + u0);
    u2 = (((struct o8_float *)((a7 + 0x8)))->v);
    u3 = (((struct o8_float *)((a6 + 0x8)))->v);
    u4 = (((struct o8_float *)(a6))->v);
    u5 = (((struct o8_float *)(a7))->v);
    u8 = ((u2 - u3) * (u2 - u3));
    u8 = u8 + ((u5 - u4)) * ((u5 - u4));
    t9 = math_signed_sqrt(u8);
    u10 = (((struct o4_float *)((a6 + 0x8)))->v);
    u11 = (((struct o10_float *)((a6 + 0x8)))->v);
    u12 = (((struct o4_float *)((a7 + 0x8)))->v);
    *(float *)(((int)stk + 4)) = u12;
    u13 = (((struct oC_float *)((a7 + 0x8)))->v);
    t14 = math_interval_overlap((u12 + u13), (u12 - u13), (u10 + u11), (u10 - u11));
    t96 = 0x0;
    if (!(((u1 + u0) - t9) > 0.0f)) {
    } else {
        t96 = 0x0;
        if (!(t14 > 0.0f)) {
        } else {
            t15 = FUN_0c061284(a5, a4);
            if (t15 != 0) {
                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                t96 = 0x2;
            } else {
                if ((t14 > 9.0f) && (t14 > ((u1 + u0) - t9))) {
                    FUN_0c06151a(a5, a4, a7, a6, ((u1 + u0) - t9));
                } else {
                    if (((((struct o4_float *)((a7 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                        if (((*(signed char *)((a4 + 0x0))) == 0) && (t40 = *(signed char *)((a5 + 0x126)), t40 == 0)) {
                            FUN_0c06151a(a5, a4, a7, a6, ((u1 + u0) - t9));
                        } else {
                            t42 = FUN_0c0612cc(a5, a4);
                            if (t42 != 0) {
                                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - t14);
                                FUN_0c060c80(a4, (((int)stk + 4) + 0x4), a6);
                            } else {
                                *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + t14);
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                                FUN_0c061222(a4, a5);
                                (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x4)));
                                FUN_0c061416(a5, a7, (a7 + 0x8), (a6 + 0x8));
                            }
                        }
                    } else {
                        FUN_0c060028((a6 + 0x8), (a7 + 0x8), (((int)stk + 4) + 0x1C));
                        t54 = FUN_0c0612cc(a4, a5);
                        if (t54 != 0) {
                            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) - t14);
                            FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                        } else {
                            t57 = FUN_0c0612cc(a5, a4);
                            if (t57 != 0) {
                                u60 = ((*(float *)(((int)stk + 32))) * ((u1 + u0) - t9));
                                u60 = -u60;
                                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + u60);
                                u63 = ((*(float *)(((int)stk + 40))) * ((u1 + u0) - t9));
                                u63 = -u63;
                                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + u63);
                            } else {
                                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + ((((*(float *)(((int)stk + 32))) * ((u1 + u0) - t9)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + ((((*(float *)(((int)stk + 40))) * ((u1 + u0) - t9)) / (1.0f + 1.0f))));
                                *(float *)(((int)stk + 8)) = (-(*(float *)(((int)stk + 20))));
                                *(float *)(((int)stk + 16)) = (-(*(float *)(((int)stk + 28))));
                                FUN_0c060c80(a5, (((int)stk + 4) + 0x10), a7);
                            }
                            FUN_0c060c80(a4, (((int)stk + 4) + 0x4), a6);
                            (((struct o135_uchar *)(a4))->v) = (*(signed char *)((a7 + 0x4)));
                        }
                    }
                }
                t96 = 0x1;
            }
        }
    }
    return t96;
}


