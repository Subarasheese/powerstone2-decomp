/* Straight-line functions with calls and guards (batch gen_or): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_uchar { char p[0x10]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c037bf6(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c06817c(int);
int FUN_0c074602(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0b4b20(void);
int FUN_0c0b5398(int);
int FUN_0c0b562a(int, int, int, int);
int FUN_0c0b6a18(int);
int FUN_0c0b711a(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c186740(int, int, int);
int thunk_FUN_0c0385e0(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c08a998(int a4);
int FUN_0c07a85e(int a4);
int FUN_0c0b551e(int a4);
int FUN_0c029220(void);
int FUN_0c075b5c(int a4);
int FUN_0c085a80(int a4, int a5, int a6, int a7);

int FUN_0c08a998(int a4)
{
    int stk[6];
    register int t19;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xE2;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE2, 0xFFFFFFFF, 0x3, 0xE2);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t19 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xE5;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE5, 0xFFFFFFFF, 0x3, 0xE5);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / 10.0f);
        if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        }
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 16.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t19 = 0x17;
    }
    return t19;
}

int FUN_0c07a85e(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c074602(a4);
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    t1 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8));
    t2 = 0x27;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    t3 = 0x28;
                    if ((unsigned char)t1 != 4) {
                        if ((unsigned char)t1 != 5) {
                            t4 = 0x30;
                            if ((unsigned char)t1 != 6) {
                                t4 = 0x27;
                            }
                            t1 = t4;
                        } else {
                            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                            t1 = 0x18;
                        }
                        t3 = t1;
                    }
                    t1 = t3;
                } else {
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                    (((struct o372C_uchar *)(a4))->v) = 0x1;
                    t1 = 0x31;
                }
                t3 = t1;
            } else {
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                t3 = 0x27;
            }
            t1 = t3;
        } else {
            (((struct o372C_uchar *)(a4))->v) = 0x1;
            t1 = 0x31;
        }
        t2 = t1;
    }
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, (unsigned char)t2, 0xFFFFFFFF, 0x4, (unsigned char)t2);
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    t1 = *(int *)(((0x118 + a4) + 0x4));
    t2 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f) && (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0)) {
        FUN_0c06817c(a4);
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c0b551e(int a4)
{
    int stk[10];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t13;
    register int t16;
    register int t31;
    register int t1;
    register int t2;
    register float u8;
    register int t23;
    register int t25;

    (((struct o30_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    t0 = 0xC0B55F8;
    t3 = a4;
    t4 = ((0x38F8 + a4) + 0xC);
    t5 = 0x0;
    t6 = (0x38F8 + a4);
    t7 = 0x0;
    for (;;) {
        if (!((*(float *)(((((0x38F8 + a4) + 0xC) + (t7 << 2)) + 0x0))) > 0.0f)) {
            t2 = (0x38F8 + a4);
            t2 = (t2 + (t7 << 2));
            *(float *)((t2 + 0x0)) = ((*(float *)((t2 + 0x0))) + 0.416666657f);
            u8 = (*(float *)((((0x38F8 + a4) + (t7 << 2)) + 0x0)));
            t0 = (FUN_0c0b4b20());
            t2 = 0xC25D654;
            t0 = (t0 << 2);
            t1 = t7;
            t1 = (t1 << 2);
            t13 = *(int *)((t2 + t0));
            t1 = (t1 << 2);
            t0 = 0x8;
            t1 = (t1 + t13);
            if (u8 > (*(float *)((t1 + t0)))) {
                t0 = (FUN_0c0b4b20());
                t1 = 0xC25D654;
                t0 = (t0 << 2);
                t16 = *(int *)((t1 + t0));
                t0 = 0x8;
                *(float *)((t6 + 0x0)) = (*(float *)(((t16 + t5) + t0)));
            } else {
                t23 = t2;
            }
        } else {
            *(float *)((t4 + 0x0)) = ((*(float *)((t4 + 0x0))) - 1.0f);
            t23 = t2;
            t25 = t3;
        }
        t2 = t23;
        t3 = t25;
        t7 = (t7 + 0x1);
        t4 = (t4 + 0x4);
        t5 = (t5 + 0x10);
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x3) {
            break;
        }
    }
    t31 = *(signed char *)((a4 + 0x14));
    switch (t31) {
    case 0:
        FUN_0c0b562a(a4, 0x0, 0x0, 0x0);
        break;
    case 1:
        FUN_0c0b6a18(a4);
        break;
    case 2:
        FUN_0c0b711a(a4);
        break;
    }
    FUN_0c0b5398(a4);
    return thunk_FUN_0c0385e0(a4);
}

int FUN_0c029220(void)
{
    int stk[100];

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
    register float F0;
    register float F7;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = FUN_0c022050();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0292BA;
    FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    if (((*(signed char *)0xC30AF9A) == 0)) goto L_C0292AC;
    return (FUN_0c02aa9e());
    L_C0292AC:;
    v0_0 = ((FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    L_C0292BA:;
    v0_1 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (v0_1 + 0x1);
    v0_2 = (0xC30540C);
    if (((int)(short)((v0_1 + 0x1) - 1) >= (int)0x12C)) goto L_C0292E8;
    if (((int)(*(short *)((v0_2 + 0x0))) < (int)0x3C)) goto L_C029320;
    v0_0 = (FUN_0c021ed2()) != 0;
    if (v0_0) goto L_C0292E8;
    v0_1 = FUN_0c021ee2();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C029320;
    L_C0292E8:;
    (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x75;
    *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
    *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x6;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x9;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x3)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x4)) = 0x1;
    *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x5)) = (*(signed char *)0xC305420);
    v0_0 = FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned int *)0xC30A3F8 = ((*(int *)0xC30A3F8) + 0x1);
    v0_0 = (v0_0);
    v0_2 = ((((int)stk + 0) + 0x10));
    L_C029320:;
    return v0_0;
}

int FUN_0c075b5c(int a4)
{
    int t0;
    register int t1;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (a4 + 0x28));
    FUN_0c074602(a4);
    t0 = *(signed char *)((((((struct o418_int *)(a4))->v)) + 0x8));
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                t0 = *(signed char *)((a4 + 0x373B));
                if ((t0 != 0) && ((t0 != 2) && (t0 != 3))) {
                    if (t0 == 1) {
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x44, 0xFFFFFFFF, 0x4, 0x44);
                        (((struct o372C_uchar *)(a4))->v) = 0x1;
                        (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
                    }
                } else {
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x46, 0xFFFFFFFF, 0x4, 0x46);
                    (((struct o372C_uchar *)(a4))->v) = 0x0;
                    (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
                }
            } else {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x44, 0xFFFFFFFF, 0x4, 0x44);
                (((struct o372C_uchar *)(a4))->v) = 0x1;
                (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
            }
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x46, 0xFFFFFFFF, 0x4, 0x46);
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
        }
    } else {
        t0 = *(signed char *)((a4 + 0x373B));
        if ((t0 != 0) && ((t0 != 2) && (t0 != 3))) {
            if (t0 == 1) {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x44, 0xFFFFFFFF, 0x4, 0x44);
                (((struct o372C_uchar *)(a4))->v) = 0x1;
                (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
            }
        } else {
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x46, 0xFFFFFFFF, 0x4, 0x46);
            (((struct o372C_uchar *)(a4))->v) = 0x0;
            (((struct o50_float *)(a4))->v) = (*(float *)0xC075D50);
        }
    }
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
    FUN_0c037bf6(a4, t1, (0x118 + a4));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c085a80(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t3;
    register int t35;
    register int t36;
    register int t37;
    register int t38;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x28;
    FUN_0c081dfc(a4, a5, a6, a7);
    (((struct o371D_uchar *)(a4))->v) = 0x0;
    (((struct o3724_uchar *)(a4))->v) = 0x0;
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t3 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x5, a4);
        if (t3 != 0) {
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(((((struct o3768_int *)(a4))->v))))->v)) + (*(float *)0xC085BC8));
            *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3768_int *)(a4))->v)) + 0x38)));
        }
    }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)(((int)stk + 12))) == 0) {
        *(int *)((int)stk + 8) = 0x4;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x4, 0xFFFFFFFF, 0x2, 0x4);
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0xE);
        FUN_0c059e60(a4, 0x0);
    } else {
        *(int *)((int)stk + 8) = 0x5;
        *(int *)((int)stk + 4) = 0x2;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x5, 0xFFFFFFFF, 0x2, 0x5);
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    t35 = *(int *)(((0x118 + a4) + 0x4));
    t36 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t35))->v) = 1.0f;
    (((struct o9C_float *)(t35))->v) = 1.0f;
    (((struct oA0_float *)(t36))->v) = 1.0f;
    (((struct o9C_float *)(t36))->v) = 1.0f;
    t37 = *(int *)(((0x118 + a4) + 0x4));
    t38 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t37))->v) = 1.0f;
    (((struct o98_float *)(t38))->v) = 1.0f;
    (((struct o94_float *)(t37))->v) = 1.0f;
    (((struct o94_float *)(t38))->v) = 1.0f;
    return 0x94;
}
