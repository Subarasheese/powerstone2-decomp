/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05f22c(int);
int FUN_0c073ed0(int, int, int, float);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085f66(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0e0548(int, int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c104e6a(int, int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int FUN_0c11ea4e(int);
int FUN_0c15c344(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c107c84(int a4, int a5);
int FUN_0c0cc094(int a4, int a5, int a6, int a7);
int FUN_0c0e05b6(int a4);
int FUN_0c0877ba(int a4, int a5, int a6);
int FUN_0c0a63a0(int a4, int a5, int a6, int a7);
int FUN_0c09feee(int a4, int a5, int a6, int a7);
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c107c84(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_2 = a5;
    v0_5 = *(signed char *)((v0_3 + 0x15));
    v0_1 = (v0_5);
    v0_0 = (0xC117944);
    v0_4 = (0x0);
    v0_0 = (v0_3);
    if ((v0_5 == 0)) goto L_C107CB6;
    if ((v0_1 == 1)) goto L_C107CD4;
    if ((v0_1 != 2)) goto L_C107CAA;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = v0_4;
    L_C107E22:;
    v0_4 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_4);
    if ((v0_4 == 0)) goto L_C107E36;
    if ((v0_1 == 1)) goto L_C107E60;
    if (!((v0_1 == 2))) goto L_C107E94;
    v0_2 = FUN_0c05f22c(0x3FCF);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C107E94;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_1 = (0x14);
    goto L_C107E94;
    L_C107E94:;
    return v0_1;
    L_C107E60:;
    v0_4 = FUN_0c117d54();
    v0_1 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C107E94;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    return FUN_0c117e76();
    L_C107E36:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    if ((((((struct o0_int *)0xC473CE0)->v)) == 0)) goto L_C107E54;
    if ((((((struct o1C_int *)0xC473CE0)->v)) == 0)) goto L_C107E54;
    *(int *)((int)stk + 0) = 0x44;
    *(unsigned int *)(((int)stk + 0)) = 0x44;
    L_C107E58:;
    v0_1 = ((FUN_0c117944(*(int *)((int)stk + 0))));
    goto L_C107E94;
    L_C107E54:;
    *(int *)((int)stk + 0) = 0x45;
    *(unsigned int *)(((int)stk + 0)) = 0x45;
    goto L_C107E58;
    L_C107CAA:;
    if ((v0_1 != 3)) goto L_C107CB2;
    goto L_C107E22;
    L_C107CB2:;
    goto L_C107E94;
    L_C107CD4:;
    v0_6 = *(signed char *)((v0_0 + 0x16));
    v0_1 = (v0_6);
    v0_5 = (0xC474B8C);
    if ((v0_6 == 0)) goto L_C107CF6;
    if ((v0_1 == 1)) goto L_C107D0E;
    if ((v0_1 == 2)) goto L_C107D3E;
    if ((v0_1 == 3)) goto L_C107DCE;
    if ((v0_1 != 4)) goto L_C107CF2;
    (((struct o14_uchar *)(((((struct o74_int *)(v0_5))->v))))->v) = 0x63;
    (((struct o74_uint *)(v0_5))->v) = v0_4;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C107E06;
    if ((v0_1 == 1)) goto L_C107E0C;
    goto L_C107E94;
    L_C107E0C:;
    v0_1 = (0x15);
    v0_2 = (((*(signed char *)((v0_0 + 0x15))) + 0x1));
    L_C107E12:;
    *(unsigned char *)((v0_0 + v0_1)) = v0_2;
    goto L_C107E94;
    L_C107E06:;
    v0_1 = (0x14);
    v0_2 = (0x62);
    goto L_C107E12;
    L_C107CF2:;
    goto L_C107E94;
    L_C107DCE:;
    v0_2 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    v0_1 = (0x22);
    if (((int)(short)(v0_2 + 0x1) <= (int)0xA)) goto L_C107E94;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    goto L_C107E94;
    L_C107D3E:;
    (((struct o20_ushort *)(v0_0))->v) = (FUN_0c104e6a(((((struct o20_short *)(v0_0))->v)), 0x1));
    *(unsigned char *)((((((struct o74_int *)(v0_5))->v)) + 0x2)) = (*(signed char *)((v0_0 + 0x20)));
    v0_1 = (FUN_0c104db8()) == 0;
    if (v0_1) goto L_C107DA4;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = 0x1;
    (((struct o22_ushort *)(v0_0))->v) = v0_4;
    *(unsigned char *)((((((struct o74_int *)(v0_5))->v)) + 0x2)) = (*(signed char *)((v0_0 + 0x20)));
    L_C107DBA:;
    return FUN_0c1186d4(((((struct o20_short *)(v0_0))->v)));
    L_C107DA4:;
    v0_3 = FUN_0c104d70();
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C107E94;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = v0_4;
    goto L_C107DBA;
    L_C107D0E:;
    v0_6 = FUN_0c117d54();
    v0_1 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C107D1C;
    goto L_C107E94;
    L_C107D1C:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + 0x74);
    (((struct o74_uint *)(v0_5))->v) = (FUN_0c1187ba());
    (((struct o20_ushort *)(v0_0))->v) = v0_4;
    v0_0 = *(signed char *)((v0_0 + 0x20));
    *(unsigned char *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x2)) = v0_0;
    v0_1 = (v0_0);
    goto L_C107E94;
    L_C107CF6:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(int *)((int)stk + 0) = 0x43;
    v0_0 = FUN_0c117944(0x43);
    (((struct o10_uint *)0xC473CE0)->v) = 0x1;
    v0_1 = (v0_0);
    goto L_C107E94;
    L_C107CB6:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = v0_4;
    v0_1 = (int)(FUN_0c11ea4e(0x103)) >= (int)0x2;
    v0_5 = (0x2);
    if (v0_1) goto L_C107CD4;
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    v0_1 = (0x15);
    goto L_C107E94;
}


int FUN_0c0e05b6(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 == 4) {
                        t1 = (((struct oC8_int *)(a4))->v);
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + 0xDA);
                        if ((int)((((struct o78_int *)(((((struct oC8_int *)(a4))->v))))->v)) >= (int)0xCCC) {
                            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xCCC;
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                            t1 = *(signed char *)(a4 + 0x1);
                            t2 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x14));
                            if (t2 == 1) {
                                t3 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3739));
                                if (t3 == 24) {
                                    t1 = *(signed char *)(a4 + 0x1);
                                    (((struct o30_float *)((0xC532498 + ((short)t1 * (short)0x3938))))->v) = ((((struct o30_float *)((0xC532498 + ((short)t1 * (short)0x3938))))->v) + 400.0f);
                                    return FUN_0c073ed0(a4, (*(signed char *)(a4 + 0x1)), ((*(int *)(((((*(signed char *)0xC542237) + 0x10) << 2) + 0xC25ACBC))) + 0xDC), 1.0f);
                                }
                                return t3;
                            }
                            return t2;
                        }
                        return 0x78;
                    }
                    t1 = t0;
                    if (t0 == 5) {
                        t0 = (((struct oC8_int *)(a4))->v);
                        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 0xDA);
                        t0 = 0x78;
                        if ((int)((((struct o78_int *)(((((struct oC8_int *)(a4))->v))))->v)) <= 0) {
                            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
                            FUN_0c0e0548(a4, 0x0);
                            (((struct o1C_ushort *)(a4))->v) = 0xB4;
                            t0 = 0xB4;
                        }
                        t1 = t0;
                    }
                    return t1;
                }
                t0 = (((struct oC8_int *)(a4))->v);
                (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) - 0.0500000007f);
                if (!(((((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v)) > 1.0f)) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                    (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                    *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0xF;
                    return FUN_0c059dae((*(signed char *)(a4 + 0x1)), 0xA);
                }
                return 0x88;
            }
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o88_float *)(t0))->v) = (((((struct o88_float *)(t0))->v)) + 0.100000001f);
            if (1.5f > ((((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v))) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.5f;
            }
            return 0x88;
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) - 0xDA);
        t0 = 0x78;
        if ((int)((((struct o78_int *)(((((struct oC8_int *)(a4))->v))))->v)) > 0) {
        } else {
            (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
            *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x1F;
            t1 = (((struct oC8_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = 1.0f;
            (((struct o88_float *)(t1))->v) = 1.0f;
            (((struct o84_float *)(t1))->v) = 1.0f;
            FUN_0c059dae((*(signed char *)(a4 + 0x1)), 0xA);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            t0 = 0x16;
        }
        return t0;
    }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0xDA);
    t0 = 0x78;
    if ((int)((((struct o78_int *)(((((struct oC8_int *)(a4))->v))))->v)) < (int)0xCCC) {
    } else {
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0xCCC;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        t0 = 0x16;
    }
    return t0;
}

int FUN_0c0877ba(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t3;
    register int t4;
    register int t23;
    register int t31;
    register float u53;
    register float u57;
    register int t86;
    int t41;
    int t47;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        t86 = t0;
        if (t0 == 1) {
            FUN_0c037bf6(a4, a5, a6);
            if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                t3 = FUN_0c07ecc6(a4, 0x0, 0x0);
                if (t3 != 0) {
                    t4 = FUN_0c085f66(a4);
                    if (t4 == 0) {
                        FUN_0c081dfc(a4);
                    } else {
                        FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                    }
                    t86 = (FUN_0c085cac(a4, 0x6, 0x0));
                } else {
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    t86 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
                }
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t86 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
            }
        }
    } else {
        t23 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t23 != 0) {
            t31 = FUN_0c085f66(a4);
            if (t31 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            (((struct o50_float *)(a4))->v) = 0.0f;
            t86 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0));
        } else {
            if (!(20.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t41 = (((struct o22_short *)(a4))->v), t41 == 0)) {
                if (((unsigned char)(*(signed char *)((a4 + 0x3721))) == 29) && (t47 = *(signed char *)((a4 + 0x131)), t47 != 0)) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x52);
                    u53 = ((((struct o28_float *)(a4))->v));
                    u53 = u53 + 200.0f * (math_sin_angle16((*(int *)((a4 + 0x38)))));
                    *(float *)(((int)stk + 0)) = u53;
                    u57 = ((((struct o30_float *)(a4))->v));
                    u57 = u57 + 200.0f * (math_cos_angle16((*(int *)((a4 + 0x38)))));
                    *(float *)(((int)stk + 8)) = u57;
                    *(float *)(((int)stk + 4)) = ((((struct o2C_float *)(a4))->v));
                    FUN_0c15c344(a4, ((int)stk + 0), 0x0);
                }
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            }
            t86 = 0x8C;
            if (!(35.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                t86 = 0x17;
            }
        }
    }
    return t86;
}

int FUN_0c0a63a0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(0xC0A634C))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A62D6))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A6260))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A6180))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A614C))(a4, a5, a6, a7);
}

int FUN_0c09feee(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC09FDD8))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC09FD44))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC09FB92))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC09FADC))(a4, a5, a6, a7);
}
