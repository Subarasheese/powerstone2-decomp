/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o384C_int { char p[0x384C]; int v; };
struct o384C_uint { char p[0x384C]; unsigned int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o386C_uchar { char p[0x386C]; unsigned char v; };
struct o3874_uchar { char p[0x3874]; unsigned char v; };
struct o387C_uchar { char p[0x387C]; unsigned char v; };
struct o3884_uchar { char p[0x3884]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
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
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c038566(void);
int FUN_0c0392d4(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c0584b0(int, int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c0676ce(int);
int FUN_0c0c418c(int, int, int, int, float);
int FUN_0c104d4a(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);
int FUN_0c1053d8(int, int);
int FUN_0c113628(void);
int FUN_0c113a74(void);
int FUN_0c113e72(void);
int FUN_0c114044(int);
int FUN_0c1141f4(int, int, int);
int FUN_0c11468c(int);
int FUN_0c118584(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c145d1c(int, int);
int FUN_0c17b1a0(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3i_sub(int, int, int);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlStoreMatrix(int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int res_cockpit_faces_release_all(void);
int FUN_0c114748(int a4, int a5, int a6, int a7, float f4);
int FUN_0c146b78(int a4, int a5, int a6, int a7);
int FUN_0c16c8e8(int a4, int a5, int a6, int a7);
int FUN_0c03934e(int a4);
void FUN_0c153178(int a4, int a5, int a6, int a7);
int FUN_0c16638c(int a4, int a5, int a6, int a7);
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


/* manual: task on player 0C539708: state 0 set up, 1 two clamped button angles and sub states, 99/80 leave; then four picked bytes
   and the release calls; 321 cases, 506 of 506 instructions */
int FUN_0c114748(int a4, int a5, int a6, int a7, float f4)
{
    signed char *st = (signed char *)a4;
    signed char *p = (signed char *)0xC539708;
    int *g = (int *)0xC474748;
    int *v;
    float in[3], out[3];
    int i, k, n, x, b;
    struct mv3 { int w[3]; };

    switch (st[0x14]) {
    case 0:
        st[0x14]++;
        p[0x371E] = *(signed char *)0xC474778;
        FUN_0c0676ce(p[1]);
        *(struct mv3 *)(p + 0x28) = ((struct mv3 *)0xC291738)[p[2]];
        *(int *)(p + 0x38) = ((int *)0xC2917F8)[p[2]];
        FUN_0c11e1e0((int)p, p[1], 0, 0);
        *(struct mv3 *)(p + 0x384C) = *(struct mv3 *)0xC2A0C6C;
    case 1:
        for (i = 0, b = 0x800, v = (int *)(p + 0x3850); i < 2; i++, v--, b <<= 2) {
            if (FUN_0c104d4a(b))
                *v -= 0x400;
            n = *v &= 0xFFFF;
            x = 0xC000 + i * 0x3000;
            if (n > 0x8000 && n < x)
                *v = x;
            if (FUN_0c104d4a(b >> 1))
                *v += 0x400;
            n = *v &= 0xFFFF;
            x = 0x4000 >> i;
            if (n > x && n < 0x8000)
                *v = x;
            *v &= 0xFFFF;
            if (!FUN_0c104d4a(b + (b >> 1)))
                FUN_0c058854((int)v, 0, *v, 0x400);
        }
        *(int *)(p + 0x34) = *(int *)(p + 0x384C);
        *(int *)(p + 0x38) = *(int *)(p + 0x3850) + ((int *)0xC2917F8)[p[2]];
        in[0] = 0.0f;
        in[1] = -100.0f;
        in[2] = 0.0f;
        FUN_0c058b06((int)out, (int)(p + 0x34), (int)in);
        out[1] += 100.0f;
        nlAddVector3op((int)(p + 0x28), (int)&((struct mv3 *)0xC291738)[p[2]], (int)out);
        n = *g;
        if (st[0x15] == 0) {
            switch (st[0x16]) {
            case 0:
                *g = FUN_0c1053d8(n, 3);
                if (FUN_0c104d70()) {
                    st[0x16]++;
                    *(short *)(st + 0x20) = 0;
                } else {
                    if (!FUN_0c104de4(*g, 3))
                        break;
                    x = *g;
                    if (x != 3) {
                        *g = 3;
                        return x;
                    }
                    *(short *)(st + 0x20) = 0;
                    st[0x16]++;
                }
                return FUN_0c118584(*g);
            case 1:
                if (++*(short *)(st + 0x20) > 10)
                    st[0x16]++;
                break;
            case 2:
                if (n == 3) {
                    st[0x14] = 99;
                    return 0x14;
                }
                if ((unsigned int)n < 3) {
                    st[0x15]++;
                    st[0x16] = 0;
                    v = (int *)0xC474B8C;
                    ((signed char *)*v)[0x14] = 99;
                    *v = 0;
                    v[0x22 + n] = (n == 0 ? FUN_0c113628 : n == 1 ? FUN_0c113a74 : FUN_0c113e72)();
                }
                break;
            }
        } else if (st[0x15] == 1) {
            if (n == 0)
                FUN_0c114044(a4);
            else if (n == 1)
                ((int (*)(int))FUN_0c1141f4)(a4);
            else if (n == 2)
                FUN_0c11468c(a4);
        }
        break;
    case 80:
        FUN_0c03f346(a4, a5, a6, a7);
        break;
    case 99:
        st[0x14] = 80;
        break;
    }
    for (i = 0; i < 4; i++) {
        v = (int *)0xC47477C + i;
        k = (i * 2 | i >> 1) & 3;
        p[0x386C + k * 8] = *v ? ((int *)0xC4739AC)[k * 8 + *v - 1] : 0;
    }
    ((int (*)(int, int, int, int, float))FUN_0c0c418c)(p[1], 0, 0, a7, f4);
    if (*g != 1 || st[0x16] != 6)
        ((int (*)(int))FUN_0c037bf6)((int)p);
    FUN_0c038566();
    return res_cockpit_faces_release_all();
}

/* the position at +0x28 as a member of a member: shc then takes its address before the call and pushes it, as the original does */
struct obj_pos { char pad[0x28]; struct { float x, y, z; } pos; };


/* manual: task handler (set by FUN_0c1535b0; the runner FUN_0c03f40c reads no result): void; the ahead step is written on a nested position
   member so that its address is pushed across nlSin / nlCos as in the original */
void FUN_0c153178(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R2;
    register int R3;
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
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    float dist;
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_5 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = a7;
    v0_9 = *(signed char *)((v0_5 + 0x14));
    v0_4 = (v0_9);
    v0_0 = (0xC179BF0);
    v0_1 = (0x0);
    v0_2 = (0xC20343C);
    v0_3 = (0xC20340C);
    v0_0 = (v0_5);
    v0_5 = (0xC179670);
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if ((v0_9 == 0)) goto L_C1531B4;
    if ((v0_4 != 1)) goto L_C1531B0;
    L_C1532B4:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_4 + 0x1);
    v0_5 = *(signed char *)((v0_0 + 0x2));
    if (!(((int)(short)(v0_4 + 0x1) >= (int)(*(int *)((((*(signed char *)(((0x15 + v0_0) + 0x0))) << 2) + (((((v0_5 << 1) + v0_5) << 2) << 1) + v0_3))))))) goto L_C15341E;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_5 = *(signed char *)((v0_0 + 0x15));
    w0_2 = *(float *)((((((((signed char)v0_5 - 1) << 1) + ((signed char)v0_5 - 1)) << 2) + ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2)) + 0x0));
    w0_3 = *(float *)(((((((signed char)v0_5 << 1) + (signed char)v0_5) << 2) + ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2)) + 0x0));
    R1004 = (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3);
    (((struct o4C_float *)(v0_0))->v) = ((w0_3 - w0_2) / (float)((*(int *)((((signed char)v0_5 << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3)))) - (*(int *)(((((signed char)v0_5 - 1) << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3))))));
    v0_4 = *(signed char *)((v0_0 + 0x2));
    R1004 = ((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2);
    v0_5 = *(signed char *)((v0_0 + 0x15));
    (((struct o50_float *)(v0_0))->v) = ((((((struct o4_float *)((((((((v0_4 << 2) << 1) + v0_4) << 2) << 1) + v0_2) + ((((signed char)v0_5 << 1) + (signed char)v0_5) << 2))))->v)) - ((((struct o4_float *)(((((((signed char)v0_5 - 1) << 1) + ((signed char)v0_5 - 1)) << 2) + (R1004))))->v))) / (float)((*(int *)(((((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3) + ((signed char)v0_5 << 2)))) - (*(int *)(((((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3) + (((signed char)v0_5 - 1) << 2))))));
    v0_8 = *(signed char *)((v0_0 + 0x2));
    R1004 = (v0_2 + (((((v0_8 << 2) << 1) + v0_8) << 2) << 1));
    v0_6 = *(signed char *)((v0_0 + 0x15));
    v0_4 = *(int *)(((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3) + ((signed char)v0_6 << 2)));
    v0_9 = *(int *)(((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3) + (((signed char)v0_6 - 1) << 2)));
    (((struct o54_float *)(v0_0))->v) = ((((((struct o8_float *)(((v0_2 + (((((v0_8 << 2) << 1) + v0_8) << 2) << 1)) + ((((signed char)v0_6 << 1) + (signed char)v0_6) << 2))))->v)) - ((((struct o8_float *)(((((((signed char)v0_6 - 1) << 1) + ((signed char)v0_6 - 1)) << 2) + (R1004))))->v))) / (float)(v0_4 - v0_9));
    v0_5 = (v0_6);
    v0_6 = ((signed char)v0_6);
    v0_7 = ((((((v0_8 << 1) + v0_8) << 2) << 1) + v0_3));
    v0_8 = (v0_8);
    FPUL_ = ((v0_4 - v0_9));
    goto L_C15341E;
    L_C15341E:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + ((((struct o4C_float *)(v0_0))->v)));
    (((struct o44_float *)(v0_0))->v) = (((((struct o44_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    (((struct o48_float *)(v0_0))->v) = (((((struct o48_float *)(v0_0))->v)) + ((((struct o54_float *)(v0_0))->v)));
    v0_4 = (0x40);
    w0_2 = (0.0f);
    if ((((((struct o40_float *)(v0_0))->v)) > 0.0f)) goto L_C153456;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C153456:;
    v0_2 = ((((struct o44_float *)(v0_0))->v)) > w0_2;
    v0_4 = (0x44);
    w0_2 = (0.0f);
    if (v0_2) goto L_C153462;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C153462:;
    v0_4 = (0x48);
    if ((((((struct o48_float *)(v0_0))->v)) > w0_2)) goto L_C15346C;
    *(float *)((v0_0 + v0_4)) = w0_1;
    L_C15346C:;
    if (((int)(*(short *)((v0_0 + 0x1C))) < (int)(*(int *)((0xC2034CC + (((*(signed char *)((v0_0 + 0x2))) << 2) << 1)))))) goto L_C15350C;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    v0_2 = ((0xB4 + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534AC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534B2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_2 = ((0xB8 + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534CC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534D2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_2 = ((0xBC + v0_0));
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C1534EC;
    w0_2 = (0.0500000007f);
    FPUL_ = (0x3D4CCCCD);
    L_C1534F2:;
    *(float *)((v0_2 + 0x0)) = ((*(float *)((v0_2 + 0x0))) - w0_2);
    v0_4 = (0xB4);
    if ((((((struct oB4_float *)(v0_0))->v)) > 0.0f)) goto L_C15350C;
    *(float *)((v0_0 + v0_4)) = w0_1;
    *(float *)((v0_0 + (v0_4 + 0x4))) = w0_1;
    *(float *)((v0_0 + ((v0_4 + 0x4) + 0x4))) = w0_1;
    L_C15350C:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_4 = (v0_2);
    if ((v0_2 == 0)) goto L_C15357E;
    if ((v0_4 == 1)) goto L_C153524;
    if ((v0_4 == 2)) goto L_C15352A;
    if ((v0_4 == 3)) goto L_C15352A;
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_4 = (0x14);
    L_C15357E:;
    return;
    L_C15352A:;
    v0_1 = *(signed char *)((v0_0 + 0x2));
    v0_4 = (v0_1);
    if ((v0_1 == 0)) goto L_C15357E;
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) - (((math_sin_angle16((*(int *)((v0_0 + 0x38))))) * w0_0)));
    w0_1 = math_cos_angle16((*(int *)((v0_0 + 0x38))));
    (((struct o30_float *)(v0_0))->v) = (((((struct o30_float *)(v0_0))->v)) - ((w0_1 * w0_0)));
    w0_2 = ((w0_1 * w0_0));
    goto L_C15357E;
    L_C153524:;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C15352A;
    L_C1534EC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534F2;
    L_C1534CC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534D2;
    L_C1534AC:;
    w0_2 = (0.0199999996f);
    FPUL_ = (0x3CA3D70A);
    goto L_C1534B2;
    L_C1531B0:;
    FUN_0c03f346(v0_0, v0_6, v0_7, v0_8);
    return;
    L_C1531B4:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_1;
    *(unsigned char *)((((((struct oC4_int *)(v0_0))->v)) + 0x0)) = 0x1;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    *(unsigned short *)((v0_0 + 0x1C)) = (*(int *)((((*(signed char *)(((0x15 + v0_0) + 0x0))) << 2) + (((((v0_4 << 1) + v0_4) << 2) << 1) + v0_3))));
    *(unsigned short *)((v0_0 + 0x1E)) = v0_1;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x200);
    (((struct oB4_float *)(v0_0))->v) = w0_0;
    (((struct oB8_float *)(v0_0))->v) = w0_0;
    (((struct oBC_float *)(v0_0))->v) = w0_0;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_5 = *(signed char *)((v0_0 + 0x15));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x40)) = *(struct mv3 *)(((v0_2 + (((((v0_4 << 2) << 1) + v0_4) << 2) << 1)) + (((v0_5 << 1) + v0_5) << 2))); }
    (((struct o54_float *)(v0_0))->v) = w0_1;
    (((struct o50_float *)(v0_0))->v) = w0_1;
    (((struct o4C_float *)(v0_0))->v) = w0_1;
    if (((*(signed char *)((v0_0 + 0x2))) != 0)) goto L_C153280;
    dist = 100.0f;
    ((struct obj_pos *)(v0_0))->pos.x += dist * math_sin_angle16((*(int *)((v0_0 + 0x38))));
    ((struct obj_pos *)(v0_0))->pos.z += dist * math_cos_angle16((*(int *)((v0_0 + 0x38))));
    goto L_C1532B4;
    L_C153280:;
    dist = 90.0f;
    ((struct obj_pos *)(v0_0))->pos.x += dist * math_sin_angle16((*(int *)((v0_0 + 0x38))));
    ((struct obj_pos *)(v0_0))->pos.z += dist * math_cos_angle16((*(int *)((v0_0 + 0x38))));
    goto L_C1532B4;
}

