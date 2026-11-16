/* Straight-line functions with calls and guards (batch gen_os): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o386C_uchar { char p[0x386C]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c013f2e(void);
int FUN_0c0185b4(void);
int FUN_0c01b0fc(void);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int FUN_0c038f70(void);
int FUN_0c03f40c(int);
int FUN_0c045ac8(void);
int FUN_0c045cf4(void);
int FUN_0c045f10(void);
int FUN_0c047064(int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int FUN_0c067a58(void);
int FUN_0c070320(int);
int FUN_0c0705e2(int);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c07101a(int, int, int, int);
int FUN_0c071ae4(int);
int FUN_0c072bd4(int);
int FUN_0c07309e(int);
int FUN_0c07bc8c(int);
int FUN_0c07bcc2(int, int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0a1546(int);
int FUN_0c0a16a4(int, int, int, int);
int FUN_0c0a196e(int, int, int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c418c(int, int, int, int, float);
float FUN_0c0e2340(int);
int FUN_0c0f4202(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187798(void);
int FUN_0c187d74(int, int);
int math_atan_angle16(float);
int pdVibMxStop(int);
int res_cockpit_faces_release_all(void);
int thunk_FUN_0c066b82(void);
int thunk_FUN_0c0a19dc(int);
int FUN_0c0277a0(void);
int FUN_0c08ba8c(int a4);
int FUN_0c0a1b6e(int a4, int a5, int a6, int a7);
int FUN_0c028698(void);
int FUN_0c027c84(void);
int FUN_0c0240c4(void);
int FUN_0c07c25a(int a4, int a5);
int FUN_0c023b60(void);
int FUN_0c027b94(int a4);
int FUN_0c045fe0(int a4, int a5, int a6, int a7);
int FUN_0c028370(void);
int FUN_0c0c41c4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0277a0(void)
{
    int stk[36];

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register float F7;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C02781E;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C027810;
    return (FUN_0c02aa9e());
    L_C027810:;
    v0_0 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    L_C02781E:;
    v0_1 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (v0_1 + 0x1);
    v0_2 = (0xC30540C);
    if (((int)(short)((v0_1 + 0x1) - 1) >= (int)0x12C)) goto L_C02784C;
    if (((int)(*(short *)((v0_2 + 0x0))) < (int)0x3C)) goto L_C02789E;
    v0_0 = (FUN_0c021ed2()) != 0;
    if (v0_0) goto L_C02784C;
    v0_1 = FUN_0c021ee2();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C02789E;
    L_C02784C:;
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x6;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x9;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x5)) = (*(signed char *)0xC305420);
    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    FUN_0c01e9e4();
    FUN_0c01b0fc();
    *(unsigned short *)0xC30EF6C = 0x0;
    v0_1 = (((int)stk + 0) + 0x10);
    v0_0 = ((FUN_0c0573c0(0xFF000000, 0x0, 0x14)));
    v0_2 = v0_1;
    L_C02789E:;
    return v0_0;
}

int FUN_0c08ba8c(int a4)
{
    int stk[9];
    register float t20;
    register float u21;
    register float u24;
    register int t30;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x37;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x37, 0xFFFFFFFF, 0x3, 0x37);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t30 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x39;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x39, 0xFFFFFFFF, 0x3, 0x39);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        FUN_0c187798();
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o30_float *)(a4))->v)));
        t20 = FUN_0c0e2340(((int)stk + 12));
        u21 = t20;
        if (200.0f > t20) {
            u21 = 200.0f;
        }
        u24 = u21;
        if (u21 == 0.0f) {
            u24 = 9.99999975e-05f;
        }
        (((struct o3790_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v))) + -50.0f);
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o3790_float *)(a4))->v)) / u24)));
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t30 = 0x17;
    }
    return t30;
}

int FUN_0c0a1b6e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    switch (t0) {
    case 0:
        t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D1EC)))))(a4, a5, a6, a7);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 2:
        FUN_0c0705e2(a4);
        break;
    case 3:
        FUN_0c070690(a4, a5, a6);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 4:
        FUN_0c070980(a4);
        break;
    case 5:
        FUN_0c07101a(a4, a5, a6, a7);
        break;
    case 6:
        thunk_FUN_0c0a19dc(a4);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 7:
        FUN_0c0a16a4(a4, a5, a6, a7);
        break;
    case 8:
        FUN_0c0a196e(a4, a5, a6, a7);
        break;
    case 9:
        FUN_0c071ae4(a4);
        break;
    case 12:
        FUN_0c0a1546(a4);
        break;
    case 13:
        FUN_0c072bd4(a4);
        break;
    case 14:
        FUN_0c07309e(a4);
        break;
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t0;
}

int FUN_0c028698(void)
{
    int stk[37];
    register int t0;
    register int t40;
    register int t8;
    int t3;

    t0 = FUN_0c022050();
    t40 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 3)) {
            FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0x8), 0x1);
            t8 = *(signed char *)(((int)stk + 8));
            if (t8 != 0) {
                if (t8 != 1) {
                    if (t8 != 2) {
                    } else {
                        (((struct o1_uchar *)0xC309859)->v) = 0x4;
                    }
                    t40 = t8;
                } else {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x0;
                    t40 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                (((struct o0_uchar *)0xC309859)->v) = 0x1;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                t40 = t8;
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t40 = (FUN_0c02aa9e());
            } else {
                t40 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t40;
}

int FUN_0c027c84(void)
{
    int stk[37];
    register int t0;
    register int t40;
    register int t8;
    int t3;

    t0 = FUN_0c022050();
    t40 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        if (((*(signed char *)(((int)stk + 0))) == 101) && (t3 = *(signed char *)(((int)stk + 4)), t3 == 2)) {
            FUN_0c1864e0((*(int *)0xC309994), (((int)stk + 0) + 0x8), 0x1);
            t8 = *(signed char *)(((int)stk + 8));
            if (t8 != 0) {
                if (t8 != 1) {
                    if (t8 != 2) {
                    } else {
                        (((struct o1_uchar *)0xC309859)->v) = 0x4;
                    }
                    t40 = t8;
                } else {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                    *(unsigned short *)0xC30EF6C = 0x0;
                    t40 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                (((struct o0_uchar *)0xC309859)->v) = 0x1;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                t40 = t8;
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t40 = (FUN_0c02aa9e());
            } else {
                t40 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t40;
}

int FUN_0c0240c4(void)
{
    int stk[36];
    register int t0;
    register int t38;
    register int t2;
    register int t3;
    register int t10;
    register int t20;
    int t17;

    t0 = FUN_0c022050();
    t38 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 == 96) {
            if ((*(signed char *)(((int)stk + 4))) == 5) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t10 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                if ((*(signed char *)(((int)stk + 0))) != 0) {
                    (((struct o0_uchar *)0xC309859)->v) = 0x1;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    (((struct o3_uchar *)0xC309859)->v) = 0x0;
                    t38 = (FUN_0c187d74(0xC3053B8, 0xC1A8BDC));
                } else {
                    (((struct o0_uchar *)0xC309859)->v) = 0xD;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    (((struct o3_uchar *)0xC309859)->v) = 0x0;
                    (((struct o9_uchar *)0xC305414)->v) = 0x0;
                    (((struct o0_uchar *)0xC305414)->v) = 0x0;
                    t38 = t10;
                }
            } else {
                if ((t2 == 96) && (t17 = *(signed char *)(((int)stk + 4)), t17 == 6)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t20 = FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
                    if ((*(signed char *)(((int)stk + 0))) != 0) {
                        (((struct o0_uchar *)0xC309859)->v) = 0xD;
                        (((struct o1_uchar *)0xC309859)->v) = 0x0;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        (((struct o3_uchar *)0xC309859)->v) = 0x0;
                        (((struct o9_uchar *)0xC305414)->v) = 0x0;
                        (((struct o0_uchar *)0xC305414)->v) = 0x0;
                        t38 = (FUN_0c187d74(0xC3053B8, 0xC1A8BEC));
                    } else {
                        (((struct o0_uchar *)0xC309859)->v) = 0x1;
                        (((struct o1_uchar *)0xC309859)->v) = 0x0;
                        (((struct o2_uchar *)0xC309859)->v) = 0x0;
                        (((struct o3_uchar *)0xC309859)->v) = 0x0;
                        t38 = t20;
                    }
                } else {
                    t38 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                }
            }
        } else {
            t38 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
        }
    }
    return t38;
}

int FUN_0c07c25a(int a4, int a5)
{

    register int R0;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a5;
    v0_1 = (0xC540978);
    v0_2 = (0xC532498);
    v0_5 = (0xC532498);
    L_C07C340:;
    if (((unsigned int)v0_2 < (unsigned int)v0_1)) goto L_C07C284;
    return R0;
    L_C07C284:;
    v0_5 = FUN_0c07bcc2(v0_2, v0_0);
    R0 = (v0_5);
    v0_3 = (v0_5);
    v0_4 = (v0_2);
    if ((v0_5 == 99)) goto L_C07C33C;
    v0_6 = (FUN_0c07bc8c(v0_4)) != 0;
    v0_5 = (0xC471A9C);
    if (v0_6) goto L_C07C30A;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    if (((*(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0))) == 0)) goto L_C07C2DC;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    v0_7 = *(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0));
    *(unsigned short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x0)) = (v0_7 - 1);
    if (((short)(v0_7 - 1) != 0)) goto L_C07C2DC;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    FUN_0c0f4202(v0_3, ((v0_5 + (((v0_6 << 1) + v0_6) << 2)) + 0x4), 0x1);
    L_C07C2DC:;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x2));
    R0 = (v0_6);
    if ((v0_6 == 0)) goto L_C07C33C;
    v0_4 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2));
    *(unsigned short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2)) = (v0_6 - 1);
    R0 = ((short)(v0_6 - 1));
    if (((short)(v0_6 - 1) == 0)) goto L_C07C336;
    L_C07C33C:;
    v0_2 = ((v0_2 + 0x3938));
    v0_5 = (0x3938);
    goto L_C07C340;
    L_C07C336:;
    R0 = ((pdVibMxStop(v0_3)));
    v0_4 = (0xC2B3FD8);
    goto L_C07C33C;
    L_C07C30A:;
    v0_6 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)((((((v0_6 << 1) + v0_6) << 2) + v0_5) + 0x2));
    R0 = (v0_6);
    v0_5 = (v0_5);
    if ((v0_6 == 0)) goto L_C07C33C;
    v0_4 = *(signed char *)((v0_4 + 0x1));
    v0_6 = *(short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2));
    *(unsigned short *)(((v0_5 + (((v0_4 << 1) + v0_4) << 2)) + 0x2)) = (v0_6 - 1);
    R0 = ((short)(v0_6 - 1));
    v0_5 = ((v0_5 + (((v0_4 << 1) + v0_4) << 2)));
    if (((short)(v0_6 - 1) != 0)) goto L_C07C33C;
    goto L_C07C336;
}

int FUN_0c023b60(void)
{
    int stk[36];
    register int t1;
    register int t6;
    register int t10;
    register int t44;
    register int t15;

    FUN_0c013f2e();
    t1 = FUN_0c022050();
    if (t1 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    t6 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t6 + 0x1);
    if ((short)(t6 + 0x1) == 16) {
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    t10 = *(short *)0xC30EF6C;
    t44 = t10;
    if ((int)t10 >= (int)0x24) {
        FUN_0c01e9e4();
        (((struct o1_uchar *)0xC30541F)->v) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC305414;
        (((struct o0_uchar *)0xC30541F)->v) = (*(signed char *)0xC305414);
        *(unsigned short *)0xC30EF6C = 0x0;
        FUN_0c0185b4();
        t15 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x0));
        if (t15 != 1) {
            switch (t15) {
            case 0:
                (((struct o1_uchar *)0xC309859)->v) = 0x7;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            case 2:
                (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x1);
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            case 3:
                (((struct o1_uchar *)0xC309859)->v) = ((*(signed char *)0xC30985A) + 0x2);
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            case 4:
                (((struct o0_uchar *)0xC309859)->v) = 0x8;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                break;
            }
            t44 = t15;
        } else {
            (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x70;
            *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x4;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x5;
            *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = ((*(signed char *)0xC305414) + 0x1);
            t44 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
            (((struct o1_uchar *)0xC309859)->v) = 0x6;
            (((struct o2_uchar *)0xC309859)->v) = 0x0;
        }
    }
    return t44;
}

int FUN_0c027b94(int a4)
{
    int stk[33];
    register int t0;
    register int t1;
    register int t22;
    register int t35;

    t0 = *(signed char *)0xC30985B;
    if (t0 != 0) {
        t35 = t0;
        if (t0 != 1) {
        } else {
            t1 = *(short *)0xC30EF6C;
            *(unsigned short *)0xC30EF6C = (t1 + 0x1);
            t35 = (short)((t1 + 0x1) - 1);
            if ((int)(short)((t1 + 0x1) - 1) >= (int)0x20) {
                *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
                *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x2;
                FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
                FUN_0c0185b4();
                (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
                (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                *(unsigned char *)0xC30AF9A = 0x0;
                *(unsigned short *)0xC30EF6C = 0x0;
                t35 = 0x0;
            }
        }
    } else {
        *(unsigned short *)0xC30EF6C = 0x0;
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o1_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985B) + 0x1);
        t22 = *(short *)0xC30EF6C;
        *(unsigned short *)0xC30EF6C = (t22 + 0x1);
        t35 = (short)((t22 + 0x1) - 1);
        if ((int)(short)((t22 + 0x1) - 1) >= (int)0x20) {
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x75;
            *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x2;
            FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
            FUN_0c0185b4();
            (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) + 0x1);
            (((struct o1_uchar *)0xC30985A)->v) = 0x0;
            *(unsigned char *)0xC30AF9A = 0x0;
            *(unsigned short *)0xC30EF6C = 0x0;
            t35 = 0x0;
        }
    }
    return t35;
}

int FUN_0c045fe0(int a4, int a5, int a6, int a7)
{
    register int t1;

    (((struct o3_uchar *)0xC40F820)->v) = 0x0;
    (((struct o2_uchar *)0xC40F820)->v) = 0x0;
    (((struct o1_uchar *)0xC40F820)->v) = 0x0;
    (((struct o0_uchar *)0xC40F820)->v) = 0x0;
    FUN_0c047064(0xC40F820, a5, a6, a7);
    t1 = *(signed char *)0xC541F42;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            FUN_0c045f10();
        } else {
            FUN_0c045cf4();
        }
    } else {
        FUN_0c045ac8();
        FUN_0c045cf4();
    }
    *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
    FUN_0c067a58();
    FUN_0c03f40c(0x2);
    FUN_0c03f40c(0x1);
    FUN_0c03f40c(0x5);
    FUN_0c03f40c(0x6);
    FUN_0c03f40c(0x8);
    res_cockpit_faces_release_all();
    FUN_0c038e88(0x2);
    FUN_0c038e88(0x1);
    FUN_0c038f70();
    FUN_0c038e88(0x5);
    FUN_0c038e88(0x6);
    FUN_0c038e88(0x8);
    FUN_0c060c00();
    thunk_FUN_0c066b82();
    FUN_0c063f24();
    FUN_0c038566();
    FUN_0c038548(0x2);
    FUN_0c038548(0x1);
    FUN_0c038548(0x5);
    FUN_0c038548(0x6);
    res_cockpit_faces_release_all();
    FUN_0c038e88(0x2);
    return (FUN_0c038e88(0x1));
}

int FUN_0c028370(void)
{
    int stk[37];
    register int t0;
    register int t49;
    register int t2;
    register int t3;
    register int t9;
    int t18;

    t0 = FUN_0c022050();
    t49 = t0;
    if (t0 != 0) {
        FUN_0c0220c4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 8));
        t3 = *(int *)0xC309994;
        if (t2 == 101) {
            if ((*(signed char *)(((int)stk + 4))) == 2) {
                FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                t9 = *(signed char *)(((int)stk + 0));
                t49 = t9;
                if (t9 == 1) {
                    (((struct o14_uchar *)(((int)stk + 0)))->v) = 0x76;
                    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x14) + 0x1);
                    *(unsigned char *)((((((int)stk + 0) + 0x14) + 0x1) + 0x0)) = 0x3;
                    *(unsigned char *)(((((int)stk + 0) + 0x14) + 0x2)) = 0x1;
                    FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x14), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    (((struct o0_uchar *)0xC30985A)->v) = 0x2;
                    (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                    *(unsigned short *)0xC30EF6C = 0x0;
                    t49 = (FUN_0c0573cc(0xFF000000, 0x0, 0x14));
                }
            } else {
                if ((t2 == 101) && (t18 = *(signed char *)(((int)stk + 4)), t18 == 4)) {
                    FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                    t49 = *(signed char *)(((int)stk + 0));
                    if (t49 == 1) {
                        (((struct o0_uchar *)0xC30985A)->v) = 0x7;
                        *(unsigned short *)0xC30EF6C = 0x0;
                    } else {
                        (((struct o0_uchar *)0xC30985A)->v) = ((*(signed char *)0xC30985A) - 1);
                    }
                } else {
                    if ((*(signed char *)0xC30AF9A) != 0) {
                        t49 = (FUN_0c02aa9e());
                    } else {
                        t49 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC30AF9A) != 0) {
                t49 = (FUN_0c02aa9e());
            } else {
                t49 = (FUN_0c0222a4((((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4)));
            }
        }
    }
    return t49;
}

int FUN_0c0c41c4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    if ((*(signed char *)0xC5429CB) != 0) {
        t0 = 0xC5429CB;
        t1 = 0xC532498;
        for (;;) {
            (((struct o18_uchar *)((0x386C + t1)))->v) = 0x0;
            (((struct o10_uchar *)((0x386C + t1)))->v) = 0x0;
            *(unsigned char *)(((0x386C + t1) + 0x8)) = 0x0;
            (((struct o386C_uchar *)(t1))->v) = 0x0;
            t2 = 0x3714;
            if ((*(signed char *)((t1 + 0x3714))) != 0) {
                t3 = 0x3720;
                if ((*(signed char *)((t1 + 0x3720))) == 0) {
                    t4 = (0x386C + t1);
                    t5 = 0x0;
                    t6 = a6;
                    t7 = a7;
                    for (;;) {
                        t0 = (*(signed char *)((t5 + (((*(signed char *)((t1 + 0x1))) << 2) + 0xC542367))));
                        if (t0 != 0) {
                            t8 = 0xC2738B8;
                            if ((*(signed char *)((t8 + ((short)(*(signed char *)((t5 + (((*(signed char *)((t1 + 0x1))) << 2) + 0xC542367)))) * (short)0x34)))) == 2) {
                                t0 = 0x16F;
                                t6 = 0x0;
                                t0 = (t0 + 0xC5421F8);
                                t8 = (*(signed char *)((t5 + (((*(signed char *)((t1 + 0x1))) << 2) + t0))));
                                for (;;) {
                                    t7 = 0x0;
                                    t4 = 0xC27B588;
                                    t4 = (t4 + ((t6 << 2) << 1));
                                    for (;;) {
                                        t0 = (unsigned char)t8;
                                        t7 = (t7 + 0x1);
                                        if ((unsigned char)(*(signed char *)((t4 + 0x0))) == t0) {
                                            t0 = 0x386C;
                                            t0 = (t0 + t1);
                                            t0 = (t0 + ((t6 << 2) << 1));
                                            *(unsigned char *)((t0 + 0x0)) = t8;
                                        }
                                        t4 = (t4 + 0x1);
                                        if ((int)t7 >= (int)0x8) {
                                            break;
                                        }
                                    }
                                    t6 = (t6 + 0x1);
                                    if ((int)t6 >= (int)0x4) {
                                        break;
                                    }
                                }
                            }
                        }
                        t5 = (t5 + 0x1);
                        if ((int)t5 >= (int)0x4) {
                            break;
                        }
                    }
                    t3 = (FUN_0c0c418c((*(signed char *)((t1 + 0x1))), t5, t6, t7, f4));
                }
                t2 = t3;
            }
            t0 = 0x3938;
            t1 = (t1 + t0);
            if ((unsigned int)t1 >= (unsigned int)0xC540978) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}
