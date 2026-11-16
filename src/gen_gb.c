/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c125254(int a4, int a5);
int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4);
int FUN_0c031788(int a4, int a5, int a6, int a7, float f4);

int FUN_0c125254(int a4, int a5)
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
    register int t9;

    if ((signed char)a5 != 0) {
        if ((signed char)a5 != 1) {
            if ((signed char)a5 == 2) {
                t8 = FUN_0c03f444(0x5, 0x0, 0x1);
                t9 = t8;
                if (t8 == 0) {
                } else {
                    *(unsigned char *)((t8 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    (((struct oA8_uchar *)(t8))->v) = 0x1;
                    (((struct oAC_ushort *)(t8))->v) = 0x1F;
                    (((struct oA9_uchar *)(t8))->v) = 0x21;
                    *(unsigned int *)((t8 + 0x4)) = 0xC12512E;
                    *(unsigned int *)((t8 + 0x10)) = a4;
                    FUN_0c187798(t8);
                    FUN_0c187798(t0);
                    (((struct o48_float *)(t1))->v) = 0.699999988f;
                    (((struct o44_float *)(t1))->v) = 0.699999988f;
                    (((struct o40_float *)(t1))->v) = 0.699999988f;
                    *(unsigned short *)((t1 + 0x1C)) = 0x0;
                    t0 = (((struct oC4_int *)(t1))->v);
                    FUN_0c03744a(t0, 0x2, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                    *(unsigned char *)((t0 + 0x0)) = 0x1;
                    *(unsigned short *)((t0 + 0x6)) = 0xF;
                    (((struct o8C_float *)(t0))->v) = 1.0f;
                    (((struct o88_float *)(t0))->v) = 1.0f;
                    (((struct o84_float *)(t0))->v) = 1.0f;
                    t9 = 0x84;
                }
                t0 = t9;
            } else {
                t1 = (signed char)a5;
                if ((signed char)a5 == 3) {
                    t8 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t9 = t8;
                    if (t8 != 0) {
                        *(unsigned char *)((t8 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        (((struct oA8_uchar *)(t8))->v) = 0x1;
                        (((struct oAC_ushort *)(t8))->v) = 0x1F;
                        (((struct oA9_uchar *)(t8))->v) = 0x21;
                        *(unsigned int *)((t8 + 0x4)) = 0xC1251CE;
                        *(unsigned int *)((t8 + 0x10)) = a4;
                        FUN_0c187798(t8);
                        FUN_0c187798(t2);
                        (((struct o48_float *)(t3))->v) = 0.600000024f;
                        (((struct o44_float *)(t3))->v) = 0.600000024f;
                        (((struct o40_float *)(t3))->v) = 0.600000024f;
                        *(unsigned short *)((t3 + 0x1C)) = 0x0;
                        t2 = (((struct oC4_int *)(t3))->v);
                        FUN_0c03744a(t2, 0x3, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                        *(unsigned char *)((t2 + 0x0)) = 0x1;
                        *(unsigned short *)((t2 + 0x6)) = 0xF;
                        t9 = 0xF;
                    }
                    t1 = t9;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            t0 = FUN_0c03f444(0x5, 0x0, 0x1);
            t2 = t0;
            if (t0 == 0) {
            } else {
                *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                (((struct oA8_uchar *)(t0))->v) = 0x1;
                (((struct oAC_ushort *)(t0))->v) = 0x1F;
                (((struct oA9_uchar *)(t0))->v) = 0x21;
                *(unsigned int *)((t0 + 0x4)) = 0xC1250A8;
                *(unsigned int *)((t0 + 0x10)) = a4;
                FUN_0c187798(t0);
                FUN_0c187798(t4);
                (((struct o48_float *)(t5))->v) = 0.699999988f;
                (((struct o44_float *)(t5))->v) = 0.699999988f;
                (((struct o40_float *)(t5))->v) = 0.699999988f;
                *(unsigned short *)((t5 + 0x1C)) = 0x0;
                t0 = (((struct oC4_int *)(t5))->v);
                FUN_0c03744a(t0, 0x1, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0xF;
                (((struct o8C_float *)(t0))->v) = 1.0f;
                (((struct o88_float *)(t0))->v) = 1.0f;
                (((struct o84_float *)(t0))->v) = 1.0f;
                t2 = 0x84;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t2 = t1;
        if (t1 == 0) {
        } else {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0xF;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC124F0C;
            *(unsigned int *)((t1 + 0x10)) = a4;
            FUN_0c187798(t1);
            FUN_0c187798(t6);
            (((struct o48_float *)(t7))->v) = 1.0f;
            (((struct o44_float *)(t7))->v) = 1.0f;
            (((struct o40_float *)(t7))->v) = 1.0f;
            *(unsigned short *)((t7 + 0x1C)) = 0x0;
            t1 = (((struct oC4_int *)(t7))->v);
            FUN_0c03744a(t1, 0x0, 0xA, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t1 + 0x0)) = 0x1;
            *(unsigned short *)((t1 + 0x6)) = 0x31;
            (((struct o8C_float *)(t1))->v) = 1.5f;
            (((struct o88_float *)(t1))->v) = 1.5f;
            (((struct o84_float *)(t1))->v) = 1.5f;
            t2 = 0x84;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c0356ae(int a4, int a5, int a6, int a7, float f4)
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
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;

    t16 = *(signed char *)((a4 + 0x14));
    if (t16 != 0) {
        if (t16 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t16 = *(signed char *)((a4 + 0x15));
        if (t16 != 0) {
            if (t16 != 1) {
                t17 = t16;
                if (t16 != 2) {
                } else {
                    t16 = *(short *)0xC54099A;
                    t18 = *(signed char *)((a4 + 0x2));
                    switch (t18) {
                    case 0:
                        if (1.0f > (float)((int)((int)t16 / (int)0x2710))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x2710)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 1:
                        if (1.0f > (float)((int)((int)t16 / (int)0x3E8))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x3E8)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 2:
                        if (1.0f > (float)((int)((int)t16 / (int)0x64))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x64)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 3:
                        if (1.0f > (float)((int)((int)t16 / (int)0xA))) {
                            (((struct oA8_uchar *)(a4))->v) = 0x0;
                        }
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0xA)) % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 4:
                        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t16 % (int)0xA));
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                        break;
                    case 5:
                        *(unsigned short *)((a4 + 0x1C)) = 0xC;
                        break;
                    }
                    FUN_0c03733c(a4, (*(short *)((a4 + 0x1C))), (*(int *)0xC4B40D0));
                    t16 = (((struct oC4_int *)(a4))->v);
                    *(unsigned char *)((t16 + 0x0)) = 0x1;
                    *(unsigned short *)((t16 + 0x6)) = 0x31F;
                    *(volatile signed char *)((a4 + 0x2));
                    t18 = ((int (*)(int, int, int))(FUN_0c187798))(t16, 0xC1AA570, 0x31F);
                    *(volatile signed char *)((a4 + 0x2));
                    t16 = ((int (*)(int, int))(FUN_0c187798))(t0, t1);
                    (((struct o18_float *)(t2))->v) = 1.0f;
                    (((struct o1C_float *)(t2))->v) = ((((struct o0_float *)0xC0359A8)->v));
                    (((struct o20_float *)(t2))->v) = 0.0f;
                    t0 = (((struct oC8_int *)(a4))->v);
                    *(unsigned char *)((t0 + 0x0)) = 0x1;
                    *(unsigned short *)((t0 + 0x6)) = t3;
                    *(volatile signed char *)((a4 + 0x2));
                    t1 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t4, t3);
                    *(volatile signed char *)((a4 + 0x2));
                    t0 = ((int (*)(int, int))(FUN_0c187798))(t5, t6);
                    (((struct o18_float *)(t7))->v) = ((((struct o4_float *)0xC0359A8)->v));
                    (((struct o1C_float *)(t7))->v) = ((((struct o8_float *)0xC0359A8)->v));
                    (((struct o20_float *)(t7))->v) = f4;
                    t0 = 0x22;
                    if ((*(short *)0xC54099A) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    t17 = t0;
                }
                t0 = t17;
            } else {
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) != 0) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                t0 = *(short *)0xC54099A;
                t2 = *(signed char *)((a4 + 0x2));
                switch (t2) {
                case 0:
                    if (1.0f > (float)((int)((int)t0 / (int)0x2710))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x2710)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 1:
                    if (1.0f > (float)((int)((int)t0 / (int)0x3E8))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x3E8)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 2:
                    if (1.0f > (float)((int)((int)t0 / (int)0x64))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0x64)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 3:
                    if (1.0f > (float)((int)((int)t0 / (int)0xA))) {
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)((int)((int)(*(short *)0xC54099A) / (int)0xA)) % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 4:
                    *(unsigned short *)((a4 + 0x1C)) = ((int)((int)t0 % (int)0xA));
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1A);
                    break;
                case 5:
                    *(unsigned short *)((a4 + 0x1C)) = 0xC;
                    break;
                }
                FUN_0c03733c(a4, (*(short *)((a4 + 0x1C))), (*(int *)0xC4B40D0));
                t0 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int, int, int))(FUN_0c187798))(t0, 0xC1AA570, 0x31F);
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int, int))(FUN_0c187798))(t8, t9);
                (((struct o18_float *)(t10))->v) = 1.0f;
                (((struct o1C_float *)(t10))->v) = ((((struct o0_float *)0xC0359A8)->v));
                (((struct o20_float *)(t10))->v) = 0.0f;
                t0 = (((struct oC8_int *)(a4))->v);
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = t11;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int, int, int))(FUN_0c187798))(t0, t12, t11);
                *(volatile signed char *)((a4 + 0x2));
                t0 = ((int (*)(int, int))(FUN_0c187798))(t13, t14);
                (((struct o18_float *)(t15))->v) = ((((struct o4_float *)0xC0359A8)->v));
                (((struct o1C_float *)(t15))->v) = ((((struct o8_float *)0xC0359A8)->v));
                (((struct o20_float *)(t15))->v) = f4;
                t0 = 0x22;
                if ((*(short *)0xC54099A) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) != 0) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t2 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c031788(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 == 2) {
                    u0 = (((struct o0_float *)0xC031A6C)->v);
                    t3 = (((struct oC4_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - u0);
                    t3 = (((struct oC8_int *)(a4))->v);
                    (((struct o74_float *)(t3))->v) = (((((struct o74_float *)(t3))->v)) - u0);
                    t3 = 0x74;
                    if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > ((((struct o4_float *)0xC031A6C)->v)))) {
                        t4 = *(signed char *)((a4 + 0x2));
                        *(unsigned short *)((a4 + 0x1C)) = ((-(((t4 << 2) + t4) << 1)) + 0xB);
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t4 = t3;
                } else {
                    if (t2 == 3) {
                        t3 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                        t5 = (short)(t3 - 1);
                        if ((short)(t3 - 1) == 0) {
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                            *(unsigned short *)((a4 + 0x1C)) = 0x5;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t3 = t5;
                    } else {
                        if (t2 == 4) {
                            u0 = (((struct o8_float *)0xC031A6C)->v);
                            t5 = (((struct oC4_int *)(a4))->v);
                            (((struct o6C_float *)(t5))->v) = (((((struct o6C_float *)(t5))->v)) - u0);
                            t5 = (((struct oC4_int *)(a4))->v);
                            (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) + u0);
                            t5 = (((struct oC8_int *)(a4))->v);
                            (((struct o6C_float *)(t5))->v) = (((((struct o6C_float *)(t5))->v)) + u0);
                            t5 = (((struct oC8_int *)(a4))->v);
                            (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) - u0);
                            t5 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
                            t6 = (short)(t5 - 1);
                            if ((short)(t5 - 1) == 0) {
                                *(unsigned short *)((a4 + 0x1C)) = 0x46;
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                t6 = 0x15;
                            }
                            t5 = t6;
                        } else {
                            t6 = t2;
                            if (t2 == 5) {
                                t2 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                                t6 = (short)(t2 - 1);
                                if ((short)(t2 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t6 = 0x14;
                                }
                            }
                            t5 = t6;
                        }
                        t3 = t5;
                    }
                    t4 = t3;
                }
                t2 = t4;
            } else {
                t3 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                t4 = (short)(t3 - 1);
                if ((short)(t3 - 1) != 0) {
                } else {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.100000001f;
                    (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                    (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t4 = 0x15;
                }
                t2 = t4;
            }
            t3 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t4 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                t2 = (((struct oC4_int *)(a4))->v);
                *(unsigned char *)((t2 + 0x0)) = 0x0;
                *(unsigned short *)((t2 + 0x6)) = 0x11F;
                *(volatile signed char *)((a4 + 0x2));
                t5 = ((int (*)(int, int, int))(FUN_0c187798))(t2, a5, a6);
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(int))(FUN_0c187798))(t0);
                t0 = (((struct oC8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498) + 0x19))), (*(int *)0xC4B40D0));
                *(unsigned char *)((t0 + 0x0)) = 0x0;
                *(unsigned short *)((t0 + 0x6)) = 0x31F;
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                *(volatile signed char *)((a4 + 0x2));
                t2 = ((int (*)(void))(FUN_0c187798))();
                (((struct o18_float *)(t0))->v) = 0.100000001f;
                (((struct o1C_float *)(t0))->v) = 0.100000001f;
                (((struct o20_float *)(t0))->v) = 0.100000001f;
                t0 = *(signed char *)((a4 + 0x2));
                *(unsigned short *)((a4 + 0x1C)) = ((((t0 << 2) + t0) << 1) + 0x1);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t4 = 0x15;
            }
            t3 = t4;
        }
        return t3;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                u0 = (((struct o0_float *)0xC031A6C)->v);
                t2 = (((struct oC4_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - u0);
                t2 = (((struct oC8_int *)(a4))->v);
                (((struct o74_float *)(t2))->v) = (((((struct o74_float *)(t2))->v)) - u0);
                t2 = 0x74;
                if (!(((((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v)) > ((((struct o4_float *)0xC031A6C)->v)))) {
                    t3 = *(signed char *)((a4 + 0x2));
                    *(unsigned short *)((a4 + 0x1C)) = ((-(((t3 << 2) + t3) << 1)) + 0xB);
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t3 = t2;
            } else {
                if (t0 == 3) {
                    t2 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                    t4 = (short)(t2 - 1);
                    if ((short)(t2 - 1) == 0) {
                        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x5;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t4 = 0x15;
                    }
                    t2 = t4;
                } else {
                    if (t0 == 4) {
                        u0 = (((struct o8_float *)0xC031A6C)->v);
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) - u0);
                        t4 = (((struct oC4_int *)(a4))->v);
                        (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) + u0);
                        t4 = (((struct oC8_int *)(a4))->v);
                        (((struct o6C_float *)(t4))->v) = (((((struct o6C_float *)(t4))->v)) + u0);
                        t4 = (((struct oC8_int *)(a4))->v);
                        (((struct o70_float *)(t4))->v) = (((((struct o70_float *)(t4))->v)) - u0);
                        t4 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
                        t5 = (short)(t4 - 1);
                        if ((short)(t4 - 1) == 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x46;
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            t5 = 0x15;
                        }
                        t4 = t5;
                    } else {
                        t5 = t0;
                        if (t0 == 5) {
                            t0 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                            t6 = (short)(t0 - 1);
                            if ((short)(t0 - 1) == 0) {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t6 = 0x14;
                            }
                            t5 = t6;
                        }
                        t4 = t5;
                    }
                    t2 = t4;
                }
                t3 = t2;
            }
            t0 = t3;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((short)(t2 - 1) != 0) {
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                (((struct o74_float *)(((((struct oC4_int *)(a4))->v))))->v) = 0.100000001f;
                (((struct o74_float *)(((((struct oC8_int *)(a4))->v))))->v) = 0.0f;
                (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t3 = 0x15;
            }
            t0 = t3;
        }
        t2 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t3 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x11F;
            *(volatile signed char *)((a4 + 0x2));
            t4 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            *(volatile signed char *)((a4 + 0x2));
            t0 = ((int (*)(int))(FUN_0c187798))(t1);
            t0 = (((struct oC8_int *)(a4))->v);
            FUN_0c03744a(t0, 0x0, (*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x1C) + 0xC1A9498) + 0x19))), (*(int *)0xC4B40D0));
            *(unsigned char *)((t0 + 0x0)) = 0x0;
            *(unsigned short *)((t0 + 0x6)) = 0x31F;
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            *(volatile signed char *)((a4 + 0x2));
            t1 = ((int (*)(void))(FUN_0c187798))();
            (((struct o18_float *)(t0))->v) = 0.100000001f;
            (((struct o1C_float *)(t0))->v) = 0.100000001f;
            (((struct o20_float *)(t0))->v) = 0.100000001f;
            t0 = *(signed char *)((a4 + 0x2));
            *(unsigned short *)((a4 + 0x1C)) = ((((t0 << 2) + t0) << 1) + 0x1);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t3 = 0x15;
        }
        t2 = t3;
    }
    return t2;
}
