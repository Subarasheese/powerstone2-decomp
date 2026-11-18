/* Straight-line functions with calls and guards (batch gen_fi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037518(int, int, int, int);
int FUN_0c0375d8(int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07d15c(int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int math_mat_get_translate(int, int);
int math_vec3_accumulate(int, int);
int nlAddVector3op(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c09a87c(int a4, int a5, int a6, int a7);
int FUN_0c037646(int a4, int a5, int a6);
int FUN_0c0485f2(int a4, int a5, int a6, int a7);
int FUN_0c0e8190(int a4, int a5, int a6, int a7);
int FUN_0c12bcbe(int a4, int a5, int a6, int a7);
int FUN_0c1682b0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c09a87c(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t43;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        t43 = (FUN_0c085d0c(a4, a5, a6, a7));
    } else {
        t3 = ((int (*)(int, int, int))(FUN_0c037bf6))(((((struct o3770_int *)(a4))->v)), a5, a6);
        FUN_0c038362(((((struct o3770_int *)(a4))->v)));
        t6 = ((int (*)(int))(FUN_0c037bf6))(a4);
        if ((unsigned char)t6 == 0) {
        } else {
            *(int *)((int)stk + 20) = 0x4;
            *(int *)((int)stk + 16) = 0x5;
            t7 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 32)) = t7;
            t8 = t7;
            *(int *)((int)stk + 12) = t8;
            FUN_0c07e79c(a4, t7, 0x5, 0x4, t8, 0x5, 0x4);
            t10 = *(int *)(((0x118 + a4) + 0x4));
            t11 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t10))->v) = 1.0f;
            (((struct o9C_float *)(t10))->v) = 1.0f;
            (((struct oA0_float *)(t11))->v) = 1.0f;
            (((struct o9C_float *)(t11))->v) = 1.0f;
            t12 = *(int *)(((0x118 + a4) + 0x4));
            t13 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t12))->v) = 1.0f;
            (((struct o98_float *)(t13))->v) = 1.0f;
            (((struct o94_float *)(t12))->v) = 1.0f;
            (((struct o94_float *)(t13))->v) = 1.0f;
            *(int *)((int)stk + 8) = 0x6;
            *(int *)((int)stk + 4) = 0x5;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x6, 0xFFFFFFFF, 0x5, 0x6);
            t16 = (((struct o3770_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 28)) = t16;
            t17 = *(int *)(((t16 + 0x118) + 0x4));
            t18 = (((struct o118_int *)(t16))->v);
            (((struct oA0_float *)(t17))->v) = 1.0f;
            (((struct o9C_float *)(t17))->v) = 1.0f;
            (((struct oA0_float *)(t18))->v) = 1.0f;
            (((struct o9C_float *)(t18))->v) = 1.0f;
            t19 = (((struct o3770_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 24)) = t19;
            t20 = *(int *)(((t19 + 0x118) + 0x4));
            t21 = (((struct o118_int *)(t19))->v);
            (((struct o98_float *)(t20))->v) = 1.0f;
            (((struct o98_float *)(t21))->v) = 1.0f;
            (((struct o94_float *)(t20))->v) = 1.0f;
            (((struct o94_float *)(t21))->v) = 1.0f;
            (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
            FUN_0c07db58(a4, t21, (t19 + 0x118));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x10);
            FUN_0c059e60(((((struct o3770_int *)(a4))->v)), 0xC);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (((int)stk + 24) + 0xC));
            FUN_0c14f238((((int)stk + 24) + 0xC), (a4 + 0x34), (*(signed char *)((a4 + 0x1))), 0x3);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct o3770_int *)(a4))->v)) + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        FUN_0c038362(a4);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t43 = 0x374B;
    }
    return t43;
}

int FUN_0c037646(int a4, int a5, int a6)
{
    int stk[12];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t11;
    register int t50;
    register int t3;
    register int t9;
    register int t10;
    register int t12;
    register int t13;
    register int t14;
    register int t52;
    register int t53;
    register int t54;
    register int t59;
    register int t61;
    register int t62;
    register int t63;
    register int t64;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 24)) = (((int)stk + 0) + 0x28);
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 0) + 0x2C);
    t7 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 32)) = (t7 * 0x10E0);
    *(unsigned int *)(((int)stk + 0)) = (t7 << 2);
    *(unsigned int *)(((int)stk + 4)) = (t7 * 0x2D0);
    t6 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = t6;
    t4 = (t7 << 2);
    t5 = (t7 * 0x2D0);
    t8 = a6;
    t11 = 0x1;
    for (;;) {
        if ((int)t11 < (int)0x5) {
            t5 = t11;
            t5 = (t5 << 2);
            t6 = (*(int *)(((int)stk + 20)));
            t5 = (t5 << 2);
            t5 = (t5 << 1);
            t6 = (t6 + 0x10);
            t6 = (t6 + t5);
            t3 = t11;
            t12 = (*(int *)((t6 + 0x18)));
            switch (t3) {
            case 1:
                t5 = (*(int *)(((int)stk + 32)));
                t4 = (t0 + 0x444);
                t4 = (t4 + 0x4);
                *(unsigned int *)(((int)stk + 36)) = (((t0 + 0x444) + 0x24) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            case 2:
                t4 = (t0 + 0x444);
                t5 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0xC);
                *(unsigned int *)(((int)stk + 36)) = ((0x21E4 + (t0 + 0x444)) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            case 3:
                t4 = (t0 + 0x444);
                t5 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0x14);
                *(unsigned int *)(((int)stk + 36)) = ((0x2784 + (t0 + 0x444)) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            case 4:
                t4 = (t0 + 0x444);
                t5 = (*(int *)(((int)stk + 4)));
                t4 = (t4 + 0x1C);
                *(unsigned int *)(((int)stk + 36)) = ((0x2D24 + (t0 + 0x444)) + t5);
                t5 = (*(int *)(((int)stk + 0)));
                t4 = (t4 + t5);
                *(unsigned int *)((t4 + 0x0)) = t12;
                break;
            }
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            t10 = (*(int *)((t6 + 0x1C)));
            t9 = (*(int *)(((int)stk + 36)));
            if ((int)t12 > 0) {
                for (;;) {
                    t14 = t10;
                    t13 = t9;
                    *(unsigned int *)((t13 + 0x8)) = (*(int *)((t14 + 0x0)));
                    t7 = (t0 + 0x444);
                    t5 = (*(int *)((t14 + 0x4)));
                    *(unsigned int *)((t13 + 0xC)) = t5;
                    *(unsigned int *)((t13 + 0x10)) = (*(int *)((t14 + 0x8)));
                    t5 = (*(int *)(((int)stk + 24)));
                    *(unsigned int *)((t5 + 0x0)) = (*(int *)((t14 + 0xC)));
                    t5 = (*(int *)(((int)stk + 28)));
                    *(unsigned int *)((t5 + 0x0)) = (*(int *)((t14 + 0x10)));
                    t8 = (*(int *)(((int)stk + 8)));
                    t6 = (*(int *)(((int)stk + 12)));
                    t3 = (FUN_0c037518(t6, t7, t8, (((int)stk + 0) + 0x28)));
                    t4 = 0x68;
                    t4 = (t4 + t13);
                    t5 = 0xC187798;
                    *(unsigned int *)((t4 + 0x0)) = t3;
                    t4 = t13;
                    t4 = (t4 + 0x6C);
                    t3 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((t14 + 0x24)); }
                    t4 = t13;
                    t4 = (t4 + 0x78);
                    t3 = 0xC;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)((t14 + 0x30)); }
                    t50 = *(int *)(((int)stk + 16));
                    t10 = (t10 + 0x3C);
                    t5 = 0x90;
                    *(unsigned int *)(((int)stk + 16)) = (t50 + 0x1);
                    t9 = (t9 + t5);
                    if ((int)(t50 + 0x1) >= (int)t12) {
                        break;
                    }
                }
            } else {
                t52 = t6;
                t53 = t7;
                t54 = t8;
            }
            t3 = t11;
            t6 = t52;
            t7 = t53;
            t8 = t54;
            if (t3 == 1) {
                t7 = (*(int *)(((int)stk + 8)));
                t8 = (*(int *)(((int)stk + 20)));
                t6 = (*(int *)(((int)stk + 12)));
                t3 = (FUN_0c0375d8(t6, t7, t8));
            } else {
                t59 = t4;
                t61 = t5;
                t62 = t6;
                t63 = t7;
                t64 = t8;
            }
            t4 = t59;
            t11 = (t11 + 0x1);
            t5 = t61;
            t6 = t62;
            t7 = t63;
            t8 = t64;
            continue;
        }
        break;
    }
    return 0x0;
}

int FUN_0c0485f2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register float u0;

    t0 = ((~(((~a6) + 0x1) & 0x1)) + 0x1);
    if ((int)a6 >= 0) {
        t0 = (a6 & 0x1);
    }
    t1 = (int)((unsigned int)((int)((unsigned int)a6 + (unsigned int)0x0)) + ((((int)0x0 > (int)a6)) ? 1u : 0u));
    t2 = ((t1 >> 1) + t0);
    t3 = t0;
    if ((int)((t1 >> 1) + t0) > (int)0x14) {
        t2 = 0x14;
        t3 = 0x0;
    }
    t0 = FUN_0c03f444(0x8, 0x0, t2, a7);
    t1 = t0;
    if (t0 != 0) {
        if ((int)t2 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = *(int *)((((t4 << 2) + (0xC4 + t0)) + 0x0));
                t6 = 0x2;
                if ((t3 != 0) && (t4 == (t2 - 1))) {
                    t6 = 0x3;
                }
                FUN_0c037498(t5, 0x0, t6, (*(int *)0xC4B410C));
                *(unsigned char *)((t5 + 0x0)) = 0x0;
                *(unsigned short *)((t5 + 0x6)) = 0x1F;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t5 + 0x6C)) = *(struct mv3 *)(((a5 * 0x34) + 0xC240A7C)); }
                u0 = (float)((((t4 << 2) << 2) - t4) + 0xF0);
                t6 = t4;
                t4 = (t4 + 0x1);
                (((struct o6C_float *)(t5))->v) = (((((struct o6C_float *)(t5))->v)) + u0);
                (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) - 15.0f);
                (((struct o74_float *)(t5))->v) = (((((struct o74_float *)(t5))->v)) + (float)t6);
                (((struct o8C_float *)(t5))->v) = 1.0f;
                (((struct o88_float *)(t5))->v) = 1.0f;
                (((struct o84_float *)(t5))->v) = 1.0f;
                if ((int)t4 >= (int)t2) {
                    break;
                }
            }
        }
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned int *)((t0 + 0x4)) = 0xC048548;
        u0 = (((struct o0_float *)0xC0487C8)->v);
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) / u0);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) / u0);
        (((struct o30_float *)(t0))->v) = ((((struct o4_float *)0xC0487C8)->v));
        u0 = (((struct o8_float *)0xC0487C8)->v);
        (((struct o44_float *)(t0))->v) = u0;
        (((struct o40_float *)(t0))->v) = u0;
        (((struct o48_float *)(t0))->v) = ((((struct oC_float *)0xC0487C8)->v));
        t1 = 0x48;
    }
    return t1;
}

int FUN_0c0e8190(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = ((((struct o41C_short *)(v0_1))->v)) == ((((struct o24_short *)((*(int *)((v0_1 + 0x10)))))->v));
    v0_0 = (v0_1);
    v0_1 = ((0x41C + v0_1));
    if (v0_2) goto L_C0E81AC;
    L_C0E82E8:;
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(v0_0, R5, R6, a7);
    L_C0E81AC:;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E81BC;
    if ((v0_1 == 1)) goto L_C0E81DC;
    L_C0E82F4:;
    return v0_1;
    L_C0E81DC:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0E81F0;
    if ((v0_1 == 1)) goto L_C0E8216;
    if ((v0_1 == 2)) goto L_C0E8276;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    L_C0E82DC:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0E82F4;
    goto L_C0E82E8;
    L_C0E8276:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = (*(signed char *)((v0_0 + 0x131))) == 0;
    if (v0_1) goto L_C0E82DC;
    v0_1 = FUN_0c07d15c(v0_0);
    R13 = (v0_1);
    if ((v0_1 == 0)) goto L_C0E82DC;
    *(unsigned char *)((v0_0 + 0x1)) = (R13 - 1);
    FUN_0c073ed0(v0_0, (R13 - 1), ((*(int *)(((((*(signed char *)0xC542237) + 0x10) << 2) + 0xC25ACBC))) + 0x64));
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    (((struct o12E_ushort *)(v0_0))->v) = (((((struct o12E_short *)(v0_0))->v)) & (~((int)0x1 << (int)(R13 - 1))));
    v0_1 = (0x12E);
    goto L_C0E82F4;
    L_C0E8216:;
    v0_2 = 0.0f > ((((struct o54_float *)((*(int *)((v0_0 + 0x10)))))->v));
    if (v0_2) goto L_C0E825C;
    math_mat_get_translate(((*(int *)((v0_0 + 0x10))) + 0x64), (v0_0 + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x4C)); }
    goto L_C0E82F4;
    L_C0E825C:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x3C;
    FUN_0c07e420(v0_0, 0x8);
    (((struct o12A_ushort *)(v0_0))->v) = 0xFFFFFFFF;
    goto L_C0E8276;
    L_C0E81F0:;
    math_mat_get_translate(((*(int *)((v0_0 + 0x10))) + 0x64), (v0_0 + 0x28));
    v0_2 = (int)(*(signed char *)(((*(int *)((v0_0 + 0x10))) + 0x15))) < (int)0x3;
    v0_1 = (0x15);
    if (v0_2) goto L_C0E82F4;
    *(unsigned char *)((v0_0 + v0_1)) = ((*(signed char *)((v0_0 + v0_1))) + 0x1);
    FUN_0c064d5a(v0_0, 0xC1CC118);
    goto L_C0E8216;
    L_C0E81BC:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    (((struct oA8_uchar *)(v0_0))->v) = 0x0;
    FUN_0c064d5a(v0_0, 0xC1CC124);
    (((struct oAC_ushort *)(v0_0))->v) = 0x1;
    goto L_C0E81DC;
}

int FUN_0c12bcbe(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return FUN_0c03f346(a4, 0x222, 0xA, a7);
                }
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0x222);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
                if ((*(signed char *)((a4 + 0x2))) == 0) {
                    u0 = (((((struct o2C_float *)(a4))->v)) + 100.0f);
                } else {
                    u0 = (((((struct o2C_float *)(a4))->v)) + 150.0f);
                }
                (((struct o2C_float *)(a4))->v) = u0;
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 - 0.100000001f);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t3 = (short)(t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
                return t3;
            }
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0x222);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
            if ((*(signed char *)((a4 + 0x2))) == 0) {
                u0 = (((((struct o2C_float *)(a4))->v)) + 100.0f);
            } else {
                u0 = (((((struct o2C_float *)(a4))->v)) + 150.0f);
            }
            (((struct o2C_float *)(a4))->v) = u0;
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            if (((short)(t2 - 1) != 0) && (t0 = *(int *)((a4 + 0x10)), t1 = *(signed char *)((0x3715 + t0)), t1 == 26)) {
                t0 = t1;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            u0 = (((((struct o2C_float *)(a4))->v)) + 100.0f);
        } else {
            u0 = (((((struct o2C_float *)(a4))->v)) + 150.0f);
        }
        (((struct o2C_float *)(a4))->v) = u0;
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
        (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x222);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        u0 = (((((struct o2C_float *)(a4))->v)) + 100.0f);
    } else {
        u0 = (((((struct o2C_float *)(a4))->v)) + 150.0f);
    }
    (((struct o2C_float *)(a4))->v) = u0;
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c1682b0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t2 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) + 0x800);
        t2 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) - 0x800);
        if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)((t0 - 1) + 0x1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return 0x14;
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
                (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
            }
            return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        }
        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x3);
        (((struct o14_uchar *)(a4))->v) = 0x2;
        return 0x14;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x3C, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x3C, (*(int *)0xC4B40CC));
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A35B4); }
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0xF;
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0xF;
    (((struct o12C_ushort *)(a4))->v) = 0x0;
    (((struct o12E_ushort *)(a4))->v) = 0xF0;
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x800);
    if (((*(signed char *)((a4 + 0x131))) == 0) && (t1 = (((struct o404_int *)(a4))->v), t1 == 0)) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)((t0 - 1) + 0x1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return 0x14;
        }
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
        if ((int)(short)((t0 + 0x1) - 1) < (int)0xA) {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.100000001f);
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.100000001f);
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        }
        return nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    }
    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x3);
    (((struct o14_uchar *)(a4))->v) = 0x2;
    return 0x14;
}
