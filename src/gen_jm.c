/* Straight-line functions with calls and guards (batch gen_jm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o124_uchar { char p[0x124]; unsigned char v; };
struct o125_uchar { char p[0x125]; unsigned char v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_short { char p[0x128]; short v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o371F_uchar { char p[0x371F]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o374E_uchar { char p[0x374E]; unsigned char v; };
struct o374F_uchar { char p[0x374F]; unsigned char v; };
struct o3750_uchar { char p[0x3750]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c013f2e(void);
int FUN_0c014a68(void);
int FUN_0c018e74(int);
int FUN_0c018f0a(int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02bad0(void);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f444(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c064f80(int);
int FUN_0c0673ca(int);
int FUN_0c067438(int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b266c(int);
int FUN_0c0b4fb4(int);
int FUN_0c14dc44(int);
int FUN_0c14f5da(int);
int FUN_0c186740(int, int);
int FUN_0c187798(void);
int FUN_0c187d24(int, int);
int FUN_0c187d88(int);
int FUN_0c187d98(int, int, int);
int math_vec3_accumulate(int, int);
int strncpy(int, int, int);
int FUN_0c15ffcc(int a4, int a5, int a6, int a7, float f4);
int FUN_0c01654e(int a4, int a5);
int FUN_0c0247a0(void);
int FUN_0c0674f4(int a4);
int FUN_0c09f580(int a4);

int FUN_0c15ffcc(int a4, int a5, int a6, int a7, float f4)
{
    int stk[5];
    register int t0;
    register int t36;
    register int t5;
    register int t6;
    register int t13;
    register int t18;
    register int t20;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a7;
    *(float *)(((int)stk + 12)) = f4;
    t0 = FUN_0c03f444(0x5, 0x0, 0x7);
    t36 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15FE00;
        (((struct oAC_ushort *)(t0))->v) = 0x1;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(volatile int *)(((int)stk + 0));
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA4_uint *)(t0))->v) = (*(int *)(((int)stk + 8)));
        *(unsigned int *)(((int)stk + 0)) = 0xC203988;
        t5 = 0x0;
        t6 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t6) + 0x0))), (*(int *)((t6 + 0xC20396C))), 0x3B, (*(int *)0xC4B40CC));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x0)) = 0x0;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t6) + 0x0))) + 0x6)) = 0x9;
            t13 = *(int *)(((int)stk + 0));
            *(volatile int *)((((0xC4 + t0) + t6) + 0x0));
            *(unsigned int *)(((int)stk + 0)) = (t13 + 0xC);
            FUN_0c187798();
            t5 = (t5 + 0x1);
            (((struct o80_uint *)((*(int *)((((0xC4 + t0) + t6) + 0x0)))))->v) = (*(int *)((t6 + 0xC2039DC)));
            t18 = *(int *)((((0xC4 + t0) + t6) + 0x0));
            (((struct o8C_float *)(t18))->v) = 1.0f;
            (((struct o88_float *)(t18))->v) = 1.0f;
            (((struct o84_float *)(t18))->v) = 1.0f;
            t6 = (t6 + 0x4);
            if ((int)t5 >= (int)0x7) {
                break;
            }
        }
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x31;
        t20 = (((struct oC4_int *)(t0))->v);
        (((struct o8C_float *)(t20))->v) = 4.0f;
        (((struct o88_float *)(t20))->v) = 4.0f;
        (((struct o84_float *)(t20))->v) = 4.0f;
        (((struct o74_float *)(((((struct oC8_int *)(t0))->v))))->v) = (*(float *)(((int)stk + 12)));
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x4)))))->v) = (((((struct oC4_int *)(t0))->v)) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x8)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0xC)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x10)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x14)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        (((struct o68_uint *)((*(int *)(((0xC4 + t0) + 0x18)))))->v) = ((*(int *)(((0xC4 + t0) + 0x4))) + 0x28);
        t36 = *(short *)(((int)stk + 16));
        *(unsigned short *)((t0 + 0x1C)) = t36;
    }
    return t36;
}

int FUN_0c01654e(int a4, int a5)
{
    int stk[9];
    register int t0;
    register int t2;
    register int t3;
    register int t6;
    register int t11;
    register int t12;
    register int t15;
    register int t19;
    register int t23;
    register int t29;
    register int t35;
    register int t41;
    register int t44;
    register int t47;
    register int t48;
    register int t49;
    register int t1;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = FUN_0c187d88(a5);
    if (t0 != 0) {
        t2 = (((int)stk + 4) + 0x18);
        t3 = a5;
        for (;;) {
            if ((*(signed char *)((t3 + 0x0))) == 0) {
                t1 = 0x0;
                *(unsigned char *)((t2 + 0x0)) = t1;
                t2 = ((int)stk + 4);
                t2 = (t2 + 0x18);
                t6 = FUN_0c187d88(t2);
                t2 = 0xC20BE1C;
                t1 = a5;
                *(unsigned int *)(((int)stk + 8)) = t6;
                t1 = (t1 - 2);
                t3 = t2;
                t11 = t2;
                t12 = t2;
                t2 = (t2 + 0xAE0);
                *(unsigned int *)(((int)stk + 24)) = t2;
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 4))) << 2);
                *(unsigned int *)(((int)stk + 16)) = t1;
                *(unsigned int *)(((int)stk + 20)) = ((((*(int *)(((int)stk + 4))) == 0)) ? 1 : 0);
                for (;;) {
                    if ((unsigned int)t12 >= (unsigned int)(*(int *)(((int)stk + 24)))) {
                        return 0x0;
                    }
                    t2 = *(int *)((t12 + 0x0));
                    *(unsigned int *)(((int)stk + 4)) = t2;
                    t15 = FUN_0c187d88(t2);
                    if (t15 == (*(int *)(((int)stk + 8)))) {
                        t2 = ((int)stk + 4);
                        t3 = (*(int *)(((int)stk + 4)));
                        t2 = (t2 + 0x18);
                        t19 = FUN_0c187d98(t2, t3, (*(int *)(((int)stk + 8))));
                        if (t19 == 0) {
                            break;
                        }
                        t12 = (t12 + 0xC);
                        t11 = (t11 + 0xC);
                        continue;
                    }
                    t12 = (t12 + 0xC);
                    t11 = (t11 + 0xC);
                }
                t1 = 0x4D;
                *(unsigned char *)((0xC304C24 + ((unsigned char)(*(signed char *)((t1 + (*(int *)0xC304BA0)))) - t0))) = 0x0;
                t23 = *(int *)((((*(int *)(((int)stk + 12))) + t11) + 0x4));
                t3 = t23;
                t2 = 0xC304C24;
                FUN_0c187d24(t2, t3);
                t3 = (*(int *)0xC304BA0);
                t3 = (*(signed char *)((t3 + 0x4D)));
                t3 = (unsigned char)t3;
                t3 = (t3 + 0xC304C24);
                t2 = 0xC304C24;
                FUN_0c187d24(t2, t3);
                t3 = (*(int *)(((int)stk + 16)));
                t2 = a5;
                t29 = FUN_0c187d98(t2, t3, 0x2);
                if (t29 == 0) {
                    if ((*(int *)(((int)stk + 20))) != 0) {
                        t3 = 0xC1A6C68;
                        t2 = (*(int *)0xC304BA0);
                        t2 = (*(signed char *)((t2 + 0x4D)));
                        t2 = (unsigned char)t2;
                        t2 = (t2 - t0);
                        t2 = (t2 - 2);
                        t2 = (t2 + 0xC304C24);
                        strncpy(t2, t3, 0x2);
                        t35 = *(int *)0xC304BA0;
                        *(int *)((int)stk + 0) = (0x4D + t35);
                        t2 = t23;
                        (((struct o4D_uchar *)(t35))->v) = ((*(signed char *)(((0x4D + t35) + 0x0))) - (t0 - (FUN_0c187d88(t2))));
                        return 0x1;
                    }
                    t3 = 0xC1A6C6C;
                    t2 = (*(int *)0xC304BA0);
                    t2 = (*(signed char *)((t2 + 0x4D)));
                    t2 = (unsigned char)t2;
                    t2 = (t2 - t0);
                    t2 = (t2 - 2);
                    t2 = (t2 + 0xC304C24);
                    strncpy(t2, t3, 0x2);
                    t41 = *(int *)0xC304BA0;
                    *(int *)((int)stk + 0) = (0x4D + t41);
                    t2 = t23;
                    (((struct o4D_uchar *)(t41))->v) = ((*(signed char *)(((0x4D + t41) + 0x0))) - (t0 - (FUN_0c187d88(t2))));
                    return 0x1;
                }
                t44 = *(int *)0xC304BA0;
                *(int *)((int)stk + 0) = (0x4D + t44);
                t2 = t23;
                (((struct o4D_uchar *)(t44))->v) = ((*(signed char *)(((0x4D + t44) + 0x0))) - (t0 - (FUN_0c187d88(t2))));
                return 0x1;
            }
            t47 = *(signed char *)((t3 + 0x0));
            if (((int)(unsigned char)t47 >= (int)0x80) && ((int)(unsigned char)t47 <= (int)0x9F)) {
                break;
            }
            t1 = 0xE0;
            if (((int)(unsigned char)t47 >= (int)t1) && ((int)(unsigned char)t47 <= (int)0xFF)) {
                return 0x0;
            }
            t48 = *(signed char *)((t3 + 0x0));
            t3 = (t3 + 0x1);
            *(unsigned char *)((t2 + 0x0)) = t48;
            t49 = *(signed char *)((t2 + 0x0));
            if (((int)(unsigned char)t49 >= (int)0x41) && ((int)(unsigned char)t49 <= (int)0x5A)) {
                t1 = (*(signed char *)((t2 + 0x0)));
                t1 = (t1 + 0x20);
                *(unsigned char *)((t2 + 0x0)) = t1;
            }
            t3 = (t3 + 0x1);
            t2 = (t2 + 0x1);
        }
    }
    return 0x0;
}


int FUN_0c0674f4(int a4)
{
    int t0;
    register int t1;

    (((struct o14_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o37A8_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1.0f;
    (((struct o37A0_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = -2.0f;
    if ((*(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x371A))) != 0) {
        (((struct o371A_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
        FUN_0c03733c((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, (*(int *)(((((*(signed char *)(((0x371A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x0))) << 2) + (0xC4B40DC + (((*(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x1))) << 2) << 1))) + 0x0))));
    }
    (((struct o371C_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o3840_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x270F;
    (((struct o371E_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = a4;
    (((struct o371F_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = a4;
    (((struct o30_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o2C_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o28_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o17C_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1.0f;
    (((struct o124_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x1;
    (((struct o125_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o126_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o128_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = ((int)0x1 << (int)(signed char)a4);
    t1 = (((struct o128_short *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    *(unsigned short *)(((0x12A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x4)) = (~t1);
    *(unsigned short *)(((0x12A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x2)) = (~t1);
    (((struct o12A_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = (~t1);
    (((struct o160_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1000.0f;
    FUN_0c14f5da(a4);
    (((struct o374D_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o374E_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o374F_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o3750_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    FUN_0c067438((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    FUN_0c0673ca((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    t1 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
    if (t1 != 12) {
        if (t1 != 13) {
            if (t1 != 14) {
                
            } else {
                (((struct o38E5_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
                if (((unsigned char)(*(signed char *)0xC541F3D) == 4) && (t0 = *(signed char *)0xC541F41, (unsigned char)t0 == 6)) {
                } else {
                    FUN_0c14dc44((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
                }
            }
            return (FUN_0c085cac((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, 0x0));
        }
        return FUN_0c0b4fb4((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    }
    return FUN_0c0b266c((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
}

int FUN_0c09f580(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t0 = FUN_0c07d1fc(a4);
                if (t0 != 0) {
                    t1 = FUN_0c064f80((((t0 - 1) * 0x3938) + 0xC532498));
                    if (t1 != 0) {
                        t0 = *(signed char *)((a4 + 0x1));
                        FUN_0c07e79c(a4, t0, 0x2, 0xF, (t0), 0x2, 0xF);
                        t0 = *(int *)(((0x118 + a4) + 0x4));
                        t1 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t0))->v) = 1.0f;
                        (((struct o9C_float *)(t0))->v) = 1.0f;
                        (((struct oA0_float *)(t1))->v) = 1.0f;
                        (((struct o9C_float *)(t1))->v) = 1.0f;
                        t0 = *(int *)(((0x118 + a4) + 0x4));
                        t1 = (((struct o118_int *)(a4))->v);
                        (((struct o98_float *)(t0))->v) = 1.0f;
                        (((struct o98_float *)(t1))->v) = 1.0f;
                        (((struct o94_float *)(t0))->v) = 1.0f;
                        (((struct o94_float *)(t1))->v) = 1.0f;
                    } else {
                        t0 = *(signed char *)((a4 + 0x1));
                        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
                        t0 = *(int *)(((0x118 + a4) + 0x4));
                        t1 = (((struct o118_int *)(a4))->v);
                        (((struct oA0_float *)(t0))->v) = 1.0f;
                        (((struct o9C_float *)(t0))->v) = 1.0f;
                        (((struct oA0_float *)(t1))->v) = 1.0f;
                        (((struct o9C_float *)(t1))->v) = 1.0f;
                        t0 = *(int *)(((0x118 + a4) + 0x4));
                        t1 = (((struct o118_int *)(a4))->v);
                        (((struct o98_float *)(t0))->v) = 1.0f;
                        (((struct o98_float *)(t1))->v) = 1.0f;
                        (((struct o94_float *)(t0))->v) = 1.0f;
                        (((struct o94_float *)(t1))->v) = 1.0f;
                        FUN_0c07daea(a4, t1, t0);
                    }
                } else {
                    t0 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
                    t0 = *(int *)(((0x118 + a4) + 0x4));
                    t1 = (((struct o118_int *)(a4))->v);
                    (((struct oA0_float *)(t0))->v) = 1.0f;
                    (((struct o9C_float *)(t0))->v) = 1.0f;
                    (((struct oA0_float *)(t1))->v) = 1.0f;
                    (((struct o9C_float *)(t1))->v) = 1.0f;
                    t0 = *(int *)(((0x118 + a4) + 0x4));
                    t1 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t0))->v) = 1.0f;
                    (((struct o98_float *)(t1))->v) = 1.0f;
                    (((struct o94_float *)(t0))->v) = 1.0f;
                    (((struct o94_float *)(t1))->v) = 1.0f;
                    FUN_0c07daea(a4, t1, t0);
                }
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
                t0 = *(int *)(((0x118 + a4) + 0x4));
                t1 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t0))->v) = 1.0f;
                (((struct o9C_float *)(t0))->v) = 1.0f;
                (((struct oA0_float *)(t1))->v) = 1.0f;
                (((struct o9C_float *)(t1))->v) = 1.0f;
                t0 = *(int *)(((0x118 + a4) + 0x4));
                t1 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = 1.0f;
                (((struct o98_float *)(t1))->v) = 1.0f;
                (((struct o94_float *)(t0))->v) = 1.0f;
                (((struct o94_float *)(t1))->v) = 1.0f;
                FUN_0c07daea(a4, t1, t0);
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            return 0x15;
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
