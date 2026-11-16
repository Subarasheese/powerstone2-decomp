/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o204_float { char p[0x204]; float v; };
struct o208_int { char p[0x208]; int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_int { char p[0x210]; int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o214_int { char p[0x214]; int v; };
struct o214_uint { char p[0x214]; unsigned int v; };
struct o218_int { char p[0x218]; int v; };
struct o218_uint { char p[0x218]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o3748_uchar { char p[0x3748]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o430_short { char p[0x430]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
int FUN_0c018e74(int);
int FUN_0c019a06(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02b7da(void);
int FUN_0c02bae6(void);
int FUN_0c02c324(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0573d8(void);
int FUN_0c05aab6(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07d7be(int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c187b48(int, int, int);
float math_cos_angle16(int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c011492(void);
int FUN_0c0253be(void);
float FUN_0c052640(int a4, int a5, int a6);
int FUN_0c018b28(int a4, int a5, int a6, int a7);
int FUN_0c07d838(int a4, int a5, int a6, int a7);
int FUN_0c0c30a8(int a4, int a5, int a6);

int FUN_0c011492(void)
{
    register int t0;
    register int t1;
    register int t10;
    register int t3;
    register int t5;
    register int t12;
    register int t18;
    register int t14;
    register int t20;
    register int t22;
    register int t24;
    register int t26;
    register int t31;
    register int t28;
    register int t38;
    register int t40;
    register int t42;
    register int t47;
    register int t44;

    t0 = *(signed char *)0xC30EF68;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 == 2) {
                t1 = (((struct o6_short *)0xC30EF66)->v);
                (((struct o6_ushort *)0xC30EF66)->v) = (t1 + 0x1);
                t10 = (short)(t1 + 0x1);
                if ((int)(short)(t1 + 0x1) >= (int)0x10) {
                    (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                    (((struct o2_uchar *)0xC30EF66)->v) = 0x3;
                    FUN_0c0573cc(0xFF000000, 0x0, 0x14);
                    t3 = (((struct o6_short *)0xC30EF66)->v);
                    (((struct o6_ushort *)0xC30EF66)->v) = (t3 + 0x1);
                    t10 = (short)(t3 + 0x1);
                    if ((int)(short)(t3 + 0x1) >= (int)0x14) {
                        t5 = *(signed char *)0xC30EF69;
                        if ((unsigned char)t5 != 2) {
                            t10 = (unsigned char)t5;
                            if (((unsigned char)t5 == 0) || ((unsigned char)t5 == 1)) {
                                (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                                (((struct o4_uchar *)0xC30EF66)->v) = 0x0;
                                t10 = 0x0;
                            }
                        } else {
                            (((struct o0_uchar *)0xC30EF66)->v) = 0x0;
                            (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                            t10 = 0x0;
                        }
                    }
                }
                return t10;
            }
            if ((unsigned char)t0 == 3) {
                t12 = (((struct o6_short *)0xC30EF66)->v);
                (((struct o6_ushort *)0xC30EF66)->v) = (t12 + 0x1);
                t18 = (short)(t12 + 0x1);
                if ((int)(short)(t12 + 0x1) >= (int)0x14) {
                    t14 = *(signed char *)0xC30EF69;
                    if ((unsigned char)t14 != 2) {
                        t18 = (unsigned char)t14;
                        if (((unsigned char)t14 == 0) || ((unsigned char)t14 == 1)) {
                            (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                            (((struct o4_uchar *)0xC30EF66)->v) = 0x0;
                            t18 = 0x0;
                        }
                    } else {
                        (((struct o0_uchar *)0xC30EF66)->v) = 0x0;
                        (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                        t18 = 0x0;
                    }
                }
                return t18;
            }
            if ((unsigned char)t0 == 4) {
                t20 = *(int *)((0xC20B858 + ((unsigned char)(*(signed char *)0xC30EF69) << 2)));
                return ((int (*)(void))(t20))();
            }
            return (unsigned char)t0;
        }
        if ((int)((((struct o6_short *)0xC30EF66)->v)) < (int)0x14) {
            t22 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t22 + 0x1);
            return (t22 + 0x1);
        }
        FUN_0c01c714(0xC30EF69, 0x2, 0x2);
        t24 = FUN_0c01cd2c(0x40);
        if ((short)t24 != 0) {
            FUN_0c05aab6(((short)(short)t24 - 1), 0x4);
            (((struct o2_uchar *)0xC30EF66)->v) = 0x3;
            (((struct o3_uchar *)0xC30EF66)->v) = 0x2;
            (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
            return FUN_0c0573cc(0xFF000000, 0x0, 0x14);
        }
        t26 = FUN_0c01cd2c(0x101);
        t31 = (short)t26;
        if ((short)t26 != 0) {
            FUN_0c05aab6(((short)(short)t26 - 1), 0x3);
            t28 = *(signed char *)0xC30EF69;
            t31 = (unsigned char)t28;
            if (((unsigned char)t28 == 0) || (((unsigned char)t28 == 1) || ((unsigned char)t28 == 2))) {
                (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                t31 = 0x0;
            }
        }
        return t31;
    }
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
    (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
    FUN_0c01e9e4();
    FUN_0c187b48(0xC30EF7C, 0x0, 0x20);
    FUN_0c019a06(0xC30EF69);
    if ((int)((((struct o6_short *)0xC30EF66)->v)) < (int)0x14) {
        t38 = (((struct o6_short *)0xC30EF66)->v);
        (((struct o6_ushort *)0xC30EF66)->v) = (t38 + 0x1);
        return (t38 + 0x1);
    }
    FUN_0c01c714(0xC30EF69, 0x2, 0x2);
    t40 = FUN_0c01cd2c(0x40);
    if ((short)t40 != 0) {
        FUN_0c05aab6(((short)(short)t40 - 1), 0x4);
        (((struct o2_uchar *)0xC30EF66)->v) = 0x3;
        (((struct o3_uchar *)0xC30EF66)->v) = 0x2;
        (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
        return FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    t42 = FUN_0c01cd2c(0x101);
    t47 = (short)t42;
    if ((short)t42 != 0) {
        FUN_0c05aab6(((short)(short)t42 - 1), 0x3);
        t44 = *(signed char *)0xC30EF69;
        t47 = (unsigned char)t44;
        if (((unsigned char)t44 == 0) || (((unsigned char)t44 == 1) || ((unsigned char)t44 == 2))) {
            (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
            (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
            t47 = 0x0;
        }
    }
    return t47;
}


float FUN_0c052640(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((((((struct o214_int *)(a4))->v)) != -1) && (t0 = (((struct o210_int *)(a4))->v), t0 != 0)) {
        (((struct o210_uint *)(a4))->v) = (((((struct o210_int *)(a4))->v)) - 1);
    }
    if (((((struct o210_int *)(a4))->v)) == 0) {
        (((struct o204_float *)(a4))->v) = 0.0f;
        (((struct o208_uint *)(a4))->v) = 0x0;
        (((struct o214_uint *)(a4))->v) = 0xFFFFFFFF;
        (((struct o218_uint *)(a4))->v) = 0x63;
    }
    t0 = (((struct o218_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    (((struct o204_float *)(a4))->v) = 0.0f;
                    (((struct o208_uint *)(a4))->v) = 0x0;
                    (((struct o214_uint *)(a4))->v) = 0xFFFFFFFF;
                    (((struct o218_uint *)(a4))->v) = 0x63;
                } else {
                    if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
                        (((struct o20C_uint *)(a4))->v) = 0x8000;
                    }
                    (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
                    (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
                    t0 = (((struct o208_int *)(a4))->v);
                    u0 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
                    (((struct o204_float *)(a4))->v) = ((float)t0 * u0);
                    u1 = u0;
                }
                u0 = u1;
            } else {
                (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) + ((int)((int)0x8000 / (int)((((struct o214_int *)(a4))->v)))));
                if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
                    (((struct o20C_uint *)(a4))->v) = 0x8000;
                }
                (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
                (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
                t0 = (((struct o208_int *)(a4))->v);
                u1 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
                (((struct o204_float *)(a4))->v) = ((float)t0 * u1);
                u0 = u1;
            }
            u1 = u0;
        } else {
            t0 = (int)((int)(((((struct o208_int *)(a4))->v)) * ((((struct o210_int *)(a4))->v))) / (int)((((struct o214_int *)(a4))->v)));
            if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
                (((struct o20C_uint *)(a4))->v) = 0x8000;
            }
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
            u0 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
            (((struct o204_float *)(a4))->v) = ((float)t0 * u0);
            u1 = u0;
        }
        u0 = u1;
    } else {
        t0 = (((struct o214_int *)(a4))->v);
        t1 = (int)((int)(((((struct o208_int *)(a4))->v)) * ((((struct o210_int *)(a4))->v))) / (int)t0);
        (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) + ((int)((int)0x8000 / (int)t0)));
        if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
            (((struct o20C_uint *)(a4))->v) = 0x8000;
        }
        (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
        (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
        u1 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
        (((struct o204_float *)(a4))->v) = ((float)t1 * u1);
        u0 = u1;
    }
    (((struct o4_float *)(a5))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o204_float *)(a4))->v)));
    (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + ((((struct o204_float *)(a4))->v)));
    return u0;
}

int FUN_0c018b28(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                return thunk_FUN_0c03f346(a4, a5, a6, a7);
            }
            return t2;
        }
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    t3 = t2;
                    if (t2 != 3) {
                    } else {
                        u0 = (((struct o50_float *)(a4))->v);
                        u1 = (((struct o2C_float *)(a4))->v);
                        (((struct o2C_float *)(a4))->v) = (u1 - u0);
                        if (!((u1 - u0) > -60.0f)) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o2C_float *)(a4))->v) = -60.0f;
                            (((struct o0_uchar *)0xC30A51A)->v) = 0x0;
                        }
                        t3 = 0x2C;
                    }
                    t2 = t3;
                } else {
                    t3 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
                    t2 = (short)(t3 - 1);
                    if ((short)(t3 - 1) == 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        u0 = (((struct o50_float *)(a4))->v);
                        u1 = (((struct o2C_float *)(a4))->v);
                        (((struct o2C_float *)(a4))->v) = (u1 - u0);
                        if (!((u1 - u0) > -60.0f)) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o2C_float *)(a4))->v) = -60.0f;
                            (((struct o0_uchar *)0xC30A51A)->v) = 0x0;
                        }
                        t2 = 0x2C;
                    }
                }
                return t2;
            }
            t2 = FUN_0c01cd2c(0x101);
            if ((short)t2 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x10;
                FUN_0c05aab6(0x0, 0x3);
                (((struct o2_ushort *)0xC30A51A)->v) = ((*(signed char *)((a4 + 0x2))) + 0x1);
            } else {
                t2 = FUN_0c01cd2c(0x240);
                if (((short)t2 == 0) && (t0 = *(int *)0xC30A3F8, t0 == 0)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    FUN_0c05aab6(0x0, 0x4);
                }
            }
            if ((*(signed char *)0xC309859) == 13) {
                *(unsigned char *)((a4 + 0x2)) = 0x2;
                return 0x2;
            }
            return FUN_0c01c714((a4 + 0x2), 0x2, 0x3);
        }
        u0 = (((struct o50_float *)(a4))->v);
        u1 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (u1 + u0);
        if (!(0.0f > (u1 + u0))) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o2C_float *)(a4))->v) = 0.0f;
            t0 = 0x2C;
        } else {
            t2 = FUN_0c01cd2c(0x240);
            t3 = (short)t2;
            if (((short)t2 == 0) && (t1 = *(int *)0xC30A3F8, t1 == 0)) {
            } else {
                (((struct o15_uchar *)(a4))->v) = 0x3;
                t3 = (FUN_0c05aab6(0x0, 0x4));
            }
            t0 = t3;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o28_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = -60.0f;
    (((struct o30_float *)(a4))->v) = 3.0f;
    (((struct o50_float *)(a4))->v) = 6.0f;
    if ((*(signed char *)0xC309859) != 13) {
        *(unsigned char *)((a4 + 0x2)) = 0x0;
        t0 = 0x0;
    } else {
        *(unsigned char *)((a4 + 0x2)) = 0x2;
        t0 = 0x2;
    }
    return t0;
}

int FUN_0c07d838(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register float u0;

    if (((((struct o376C_int *)(a4))->v)) != 0) {
        return 0x0;
    }
    if ((*(signed char *)((a4 + 0x371D))) != 0) {
        return 0x0;
    }
    if (((((struct o3760_int *)(a4))->v)) == 0) {
        return 0x0;
    }
    if (!(250.0f > ((((struct o3780_float *)(a4))->v)))) {
        return 0x0;
    }
    if (0.0f > (((((struct o2C_float *)(a4))->v)) - ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)))) {
        u0 = ((-((((struct o2C_float *)(a4))->v))) + ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)));
    } else {
        u0 = (((((struct o2C_float *)(a4))->v)) - ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)));
    }
    if (u0 > 100.0f) {
        return 0x0;
    }
    t4 = (((struct o3760_int *)(a4))->v);
    t5 = *(signed char *)((t4 + 0x3715));
    if ((((t5 != 7) && (t5 != 8)) || ((t0 = *(signed char *)((t4 + 0x3735)), (int)(unsigned char)t0 > (int)0xF) || (t1 = *(signed char *)((t4 + 0x134)), t1 == 0))) && (((t5 != 26) || (t2 = *(signed char *)((t4 + 0x3735)), (int)(unsigned char)t2 > (int)0xF)) && ((t5 != 8) || (t3 = *(signed char *)((t4 + 0x3735)), (int)(unsigned char)t3 > (int)0xF)))) {
        return 0x0;
    }
    t0 = (((struct o430_short *)(a4))->v);
    if (((unsigned short)t0 & 0x100) != 0) {
        (((struct o3748_uchar *)(a4))->v) = 0x1;
        return 0xC;
    }
    if (((unsigned short)t0 & 0x3C00) != 0) {
        (((struct o3748_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x1));
        t1 = FUN_0c07eaf4(a4, t5, a6);
        t2 = *(short *)(((0xC5413E8 + ((short)t0 * (short)0x2F8)) + 0x0));
        t0 = FUN_0c07d6cc(a4);
        t3 = (unsigned short)((unsigned short)(t2 + t1) - t0);
        if ((0x8000 & (unsigned short)((unsigned short)(t2 + t1) - t0)) != 0) {
            t3 = ((unsigned short)((unsigned short)(t2 + t1) - t0) | 0xFFFF0000);
        }
        if (((*(signed char *)((0x3715 + ((((struct o3760_int *)(a4))->v))))) != 26) && (((int)t3 >= (int)0xFFFFF1C8) && ((int)t3 <= (int)0xE38))) {
            return 0x9;
        }
        if (((int)t3 > 0) && ((int)t3 <= (int)0x471C)) {
            return 0xA;
        }
        if (((int)t3 < 0) && ((int)t3 >= (int)0xFFFFB8E4)) {
            return 0xB;
        }
        return FUN_0c07d7be(a4);
    }
    return 0x0;
}

int FUN_0c0c30a8(int a4, int a5, int a6)
{
    int stk[1];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = a6;
    if ((v0_0 != 0)) goto L_C0C30B8;
    L_C0C3240:;
    v0_7 = (0x0);
    L_C0C3242:;
    return v0_7;
    L_C0C30B8:;
    v0_5 = *(signed char *)((v0_0 + 0x41C));
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)v0_5;
    v0_3 = (0xC3);
    v0_4 = (v0_5);
    if (((unsigned char)v0_5 == 0xC3)) goto L_C0C30E4;
    if ((((*(signed char *)((((unsigned short)(unsigned char)v0_4 * (unsigned short)0x34) + 0xC2738C0))) & ((int)0x1 << (int)(signed char)v0_2)) == ((int)0x1 << (int)(signed char)v0_2))) goto L_C0C3114;
    L_C0C30E4:;
    if (((*(int *)(((int)stk + 0))) == v0_3)) goto L_C0C30EE;
    goto L_C0C3240;
    L_C0C30EE:;
    v0_4 = *(signed char *)((v0_0 + 0x424));
    if ((((*(signed char *)(((((v0_4 << 2) + v0_4) << 1) + 0xC278843))) & ((int)0x1 << (int)(signed char)v0_2)) == ((int)0x1 << (int)(signed char)v0_2))) goto L_C0C3114;
    goto L_C0C3240;
    L_C0C3114:;
    v0_7 = ((signed char)v0_2);
    v0_6 = (0x1);
    v0_5 = (0xC278D18);
    v0_4 = (0xC2738B8);
    if (((signed char)v0_2 == 0)) goto L_C0C3134;
    if ((v0_7 == 1)) goto L_C0C318C;
    if ((v0_7 == 2)) goto L_C0C31C8;
    if ((v0_7 != 3)) goto L_C0C3130;
    if (((*(signed char *)((v0_0 + 0x41D))) != 2)) goto L_C0C3240;
    *(volatile signed char *)((v0_0 + 0x422));
    *(volatile signed char *)((v0_1 + 0x1));
    L_C0C323C:;
    v0_7 = (0x1);
    goto L_C0C3242;
    L_C0C3130:;
    goto L_C0C323C;
    L_C0C31C8:;
    if (((*(signed char *)((v0_0 + 0x41D))) != 2)) goto L_C0C3240;
    if ((((*(signed char *)((v0_0 + 0x422))) & ((int)v0_6 << (int)(*(signed char *)((v0_1 + 0x1))))) != 0)) goto L_C0C323C;
    v0_6 = *(signed char *)((v0_0 + 0x41C));
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)v0_6;
    v0_2 = (v0_6);
    if (((unsigned char)v0_6 == v0_3)) goto L_C0C3202;
    if ((((*(short *)((v0_5 + ((*(signed char *)(((((unsigned short)(unsigned char)v0_2 * (unsigned short)0x34) + v0_4) + 0x4))) << 1)))) & ((int)0x1 << (int)(*(signed char *)((v0_1 + 0x2))))) != 0)) goto L_C0C323C;
    L_C0C3202:;
    if (((*(int *)(((int)stk + 0))) != v0_3)) goto L_C0C3240;
    v0_0 = *(signed char *)((v0_0 + 0x424));
    if ((((*(short *)((v0_5 + ((*(signed char *)((0xC278842 + (((v0_0 << 2) + v0_0) << 1)))) << 1)))) & ((int)0x1 << (int)(*(signed char *)((v0_1 + 0x2))))) == 0)) goto L_C0C3240;
    goto L_C0C323C;
    L_C0C318C:;
    if (((*(signed char *)((v0_0 + 0x41D))) != 5)) goto L_C0C3240;
    v0_1 = *(signed char *)((v0_1 + 0x3721));
    v0_0 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 15)) goto L_C0C3240;
    if ((v0_0 == 37)) goto L_C0C3240;
    goto L_C0C323C;
    L_C0C3134:;
    if (((*(signed char *)((v0_0 + 0x41D))) == 2)) goto L_C0C3140;
    goto L_C0C3240;
    L_C0C3140:;
    if ((((*(signed char *)((v0_0 + 0x422))) & ((int)v0_6 << (int)(*(signed char *)((v0_1 + 0x1))))) != 0)) goto L_C0C3152;
    goto L_C0C3240;
    L_C0C3152:;
    v0_2 = (0x34);
    if ((((*(short *)((v0_5 + ((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)0x34) + v0_4) + 0x4))) << 1)))) & ((int)v0_6 << (int)(*(signed char *)((v0_1 + 0x2))))) == 0)) goto L_C0C3240;
    v0_0 = *(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_0 + 0x41C))) * (unsigned short)v0_2) + v0_4) + 0x0));
    v0_2 = (v0_0);
    if ((v0_0 == 0)) goto L_C0C323C;
    if ((v0_2 != 1)) goto L_C0C3240;
    goto L_C0C323C;
}
