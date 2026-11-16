/* Straight-line functions with calls and guards (batch gen_ey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c162860(int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(int);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int thunk_FUN_0c058310(int, int);
int FUN_0c1455a6(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c16b9ec(int a4, int a5, int a6, int a7);

int FUN_0c1455a6(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[3];

    register int R2;
    register int R3;
    register int R10;
    register float F0;
    register float F2;
    register float F3;
    register float F13;
    register float F14;
    register int T_;
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
    v0_4 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_5 = a7;
    w0_0 = f4;
    w0_1 = f5;
    w0_2 = f6;
    v0_7 = *(signed char *)((v0_4 + 0x14));
    v0_3 = (v0_7);
    v0_6 = (0x1);
    v0_0 = (v0_4);
    if ((v0_7 == 0)) goto L_C1455D6;
    if ((v0_3 == 1)) goto L_C1455EE;
    if ((v0_3 != 2)) goto L_C1455D2;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C145830;
    if ((v0_3 == 1)) goto L_C14583E;
    L_C1458B4:;
    return v0_3;
    L_C14583E:;
    v0_6 = (((struct oC8_int *)(v0_0))->v);
    (((struct o84_float *)(v0_6))->v) = (((((struct o84_float *)(v0_6))->v)) - 0.0500000007f);
    v0_3 = (0x84);
    v0_4 = (v0_6);
    w0_0 = (0.0500000007f);
    w0_1 = (0.0f);
    if ((!(0.0f > ((((struct o84_float *)(v0_6))->v))))) goto L_C14585A;
    *(float *)((v0_4 + v0_3)) = w0_1;
    L_C14585A:;
    w0_2 = *(float *)((v0_4 + v0_3));
    *(float *)((v0_4 + (v0_3 + 0x8))) = w0_2;
    *(float *)((v0_4 + ((v0_3 + 0x8) - 4))) = w0_2;
    v0_6 = *(int *)((v0_0 + (((v0_3 + 0x8) - 4) + 0x3C)));
    *(float *)((v0_6 + ((((v0_3 + 0x8) - 4) + 0x3C) - 64))) = ((*(float *)((v0_6 + ((((v0_3 + 0x8) - 4) + 0x3C) - 64)))) - w0_0);
    v0_4 = (v0_6);
    if ((!(0.0f > (*(float *)((v0_6 + ((((v0_3 + 0x8) - 4) + 0x3C) - 64))))))) goto L_C14587C;
    (((struct o84_float *)(v0_4))->v) = w0_1;
    L_C14587C:;
    w0_1 = (((struct o84_float *)(v0_4))->v);
    (((struct o8C_float *)(v0_4))->v) = w0_1;
    (((struct o88_float *)(v0_4))->v) = w0_1;
    w0_1 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_1 - w0_0);
    (((struct o48_float *)(v0_0))->v) = (w0_1 - w0_0);
    (((struct o44_float *)(v0_0))->v) = (w0_1 - w0_0);
    v0_3 = (0x40);
    if ((((((struct o40_float *)(v0_0))->v)) > 0.0f)) goto L_C1458B4;
    v0_3 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_5)));
    goto L_C1458B4;
    L_C145830:;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C14583E;
    L_C1455D2:;
    v0_3 = ((FUN_0c03f346(v0_0, v0_1, v0_2, v0_5)));
    goto L_C1458B4;
    L_C1455EE:;
    v0_4 = *(signed char *)((v0_0 + 0x15));
    v0_3 = (v0_4);
    v0_1 = (0x3);
    v0_2 = (0x2);
    w0_0 = (1.0f);
    if ((v0_4 == 0)) goto L_C145618;
    if ((v0_3 == 1)) goto L_C145650;
    goto L_C1458B4;
    L_C145650:;
    v0_3 = (((struct oC4_int *)(v0_0))->v);
    w0_1 = 0.800000012f;
    w0_1 = w0_1 + 0.400000006f * (math_sin_angle16(((((*(short *)((v0_0 + 0x1C))) << 8) << 2) << 1)));
    (((struct o84_float *)(v0_3))->v) = w0_1;
    w0_1 = (((struct o84_float *)(v0_3))->v);
    (((struct o8C_float *)(v0_3))->v) = w0_1;
    (((struct o88_float *)(v0_3))->v) = w0_1;
    v0_3 = (((struct oC8_int *)(v0_0))->v);
    w0_1 = 0.800000012f;
    w0_1 = w0_1 + 0.400000006f * (math_sin_angle16(((((*(short *)((v0_0 + 0x1C))) << 8) << 2) << 1)));
    (((struct o84_float *)(v0_3))->v) = w0_1;
    w0_1 = (((struct o84_float *)(v0_3))->v);
    (((struct o8C_float *)(v0_3))->v) = w0_1;
    (((struct o88_float *)(v0_3))->v) = w0_1;
    v0_3 = (((struct oCC_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_3))->v) = (((((struct o7C_int *)(v0_3))->v)) - 0x666);
    w0_0 = w0_0;
    w0_0 = w0_0 + 0.200000003f * (math_sin_angle16(((((*(short *)((v0_0 + 0x1C))) << 8) << 2) << 2)));
    (((struct o84_float *)(v0_3))->v) = w0_0;
    w0_0 = (((struct o84_float *)(v0_3))->v);
    (((struct o8C_float *)(v0_3))->v) = w0_0;
    (((struct o88_float *)(v0_3))->v) = w0_0;
    v0_4 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_4 - 1);
    v0_3 = (0x22);
    if (((int)(short)(v0_4 - 1) >= 0)) goto L_C14572A;
    *(unsigned short *)((v0_0 + v0_3)) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    v0_3 = (0x20);
    if (((int)((((struct o20_short *)(v0_0))->v)) < (int)0x4)) goto L_C1456F6;
    *(unsigned short *)((v0_0 + v0_3)) = v0_2;
    L_C1456F6:;
    FUN_0c037498(((((struct oCC_int *)(v0_0))->v)), ((((struct o20_short *)(v0_0))->v)), 0x7, (*(int *)(((((*(signed char *)((v0_0 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    FUN_0c037498(((((struct oD0_int *)(v0_0))->v)), ((((struct o20_short *)(v0_0))->v)), 0x7, (*(int *)(((((*(signed char *)((v0_0 + 0x1))) << 2) << 1) + 0xC4B40E0))));
    L_C14572A:;
    v0_3 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_3 - 1);
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C1457D2;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x4;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), ((int)stk + 0));
    FUN_0c0e2390(((int)stk + 0), ((int)stk + 0), (v0_0 + 0x28));
    FUN_0c17c450((v0_0 + 0x4C));
    FUN_0c17c450(((int)stk + 0));
    FUN_0c17c130((v0_0 + 0x4C), ((int)stk + 0), ((int)stk + 0));
    FUN_0c17c450((v0_0 + 0x4C));
    w0_0 = (5.0f);
    w0_1 = (5.0f);
    w0_2 = (5.0f);
    math_vec3_mul_xyz((v0_0 + 0x4C), w0_0, w0_1, w0_2);
    L_C1457D2:;
    FUN_0c17c130((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 - 1);
    v0_4 = (0x0);
    if (((short)(v0_3 - 1) != 0)) goto L_C145800;
    (((struct o12A_ushort *)(v0_0))->v) = v0_4;
    (((struct o12E_ushort *)(v0_0))->v) = v0_4;
    (((struct o14_uchar *)(v0_0))->v) = v0_2;
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    L_C145800:;
    if (((*(signed char *)((v0_0 + 0x131))) != 0)) goto L_C145810;
    v0_3 = (0x132);
    if (((*(signed char *)((v0_0 + 0x132))) == 0)) goto L_C1458B4;
    L_C145810:;
    (((struct o12A_ushort *)(v0_0))->v) = v0_4;
    (((struct o12E_ushort *)(v0_0))->v) = v0_4;
    (((struct o14_uchar *)(v0_0))->v) = v0_1;
    v0_3 = (0x14);
    goto L_C1458B4;
    L_C145618:;
    (((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x64;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    (((struct o12A_ushort *)(v0_0))->v) = (~((int)v0_6 << (int)(*(signed char *)((v0_0 + 0x1)))));
    (((struct o12E_ushort *)(v0_0))->v) = (((int)v0_6 << (int)(*(signed char *)((v0_0 + 0x1)))) | 0xFFFFFFF0);
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C145650;
    L_C1455D6:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_6;
    FUN_0c059e9a(v0_0, 0x27, (v0_0 + 0x28));
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C1455EE;
}

int FUN_0c16b9ec(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t1;
    register int t9;
    register int t10;
    register int t11;
    register int t13;
    register int t32;
    register int t34;
    register int t35;
    register int t55;
    register int t64;
    register int t3;
    register int t12;
    register int t23;
    register int t17;
    register int t20;
    register int t33;
    register int t36;
    register int t44;
    register int t43;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (a7 != 0) {
        if (a7 != 1) {
            t1 = FUN_0c162860((*(signed char *)((a4 + 0x1))), a7);
            if (t1 != 0) {
                *(unsigned int *)((t1 + 0x4)) = 0xC16B9D2;
                *(unsigned char *)((t1 + 0x2)) = a7;
                FUN_0c187798(t1);
                *(volatile int *)(((int)stk + 0));
                FUN_0c187798(t3);
            }
        } else {
            t9 = a7;
            t10 = a4;
            t11 = a5;
            t13 = 0x0;
            for (;;) {
                if ((int)t13 >= (int)0x3) {
                    break;
                }
                t9 = (*(signed char *)((a4 + 0x1)));
                t11 = a7;
                t10 = t9;
                t9 = (FUN_0c162860(t10, t11));
                t10 = t9;
                if (t9 != 0) {
                    *(unsigned int *)((t10 + 0x4)) = 0xC16B9D2;
                    t9 = a7;
                    *(unsigned char *)((t10 + 0x2)) = t9;
                    t9 = 0xC;
                    t9 = (FUN_0c187798(t10));
                    t10 = t17;
                    *(volatile int *)(((int)stk + 0));
                    t9 = 0xC;
                    t9 = (FUN_0c187798(t10));
                    t11 = 0x41C;
                    t10 = t20;
                    t11 = (t11 + t20);
                    t9 = t13;
                    *(unsigned char *)((t11 + 0x3)) = t9;
                    t9 = (*(signed char *)((t11 + 0x3)));
                    if (t9 == 0) {
                        t12 = t10;
                    } else {
                        *(unsigned int *)((t10 + 0x10)) = t12;
                    }
                    t23 = t11;
                }
                t13 = (t13 + 0x1);
                t11 = t23;
            }
        }
    } else {
        t32 = a7;
        t34 = a4;
        t35 = 0x0;
        for (;;) {
            if ((int)t35 >= (int)0x5) {
                break;
            }
            t36 = 0x0;
            for (;;) {
                if ((int)t36 >= (int)0x3) {
                    break;
                }
                t32 = (*(signed char *)((a4 + 0x1)));
                t34 = t32;
                t32 = (FUN_0c162860(t34, a7));
                t34 = t32;
                if (t32 != 0) {
                    *(unsigned int *)((t34 + 0x4)) = 0xC16B9D2;
                    t32 = a7;
                    t33 = t34;
                    *(unsigned char *)((t34 + 0x2)) = t32;
                    t33 = (t33 + 0x28);
                    t32 = 0xC;
                    t32 = (FUN_0c187798(t34));
                    t33 = t34;
                    *(volatile int *)(((int)stk + 0));
                    t33 = (t33 + 0x34);
                    t32 = 0xC;
                    t32 = (FUN_0c187798(t34));
                    t33 = 0x41C;
                    t34 = (t43 + t33);
                    t32 = t36;
                    *(unsigned char *)((t34 + 0x2)) = t32;
                    t32 = t35;
                    *(unsigned char *)((t34 + 0x3)) = t32;
                    t44 = t33;
                }
                t33 = t44;
                t36 = (t36 + 0x1);
            }
            t35 = (t35 + 0x1);
        }
    }
    *(int *)((int)stk + 32) = a7;
    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t55 = FUN_0c03f444(0x5, 0x0, 0x1);
    t64 = t55;
    if (t55 != 0) {
        (((struct oAC_ushort *)(t55))->v) = 0x1F;
        (((struct oA9_uchar *)(t55))->v) = 0x21;
        *(unsigned int *)((t55 + 0x4)) = 0xC16BB24;
        *(unsigned char *)((t55 + 0x2)) = (*(signed char *)(((int)stk + 24)));
        (((struct o48_float *)(t55))->v) = 0.0f;
        (((struct o44_float *)(t55))->v) = 0.0f;
        (((struct o40_float *)(t55))->v) = 0.0f;
        FUN_0c037498(((((struct oC4_int *)(t55))->v)), (0x3 & (*(signed char *)((t55 + 0x2)))), 0x4B, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t55))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t55))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t55 + 0x10)) = (*(int *)(((int)stk + 20)));
        t64 = 0xF;
    }
    return t64;
}
