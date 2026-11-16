/* Straight-line functions with calls and guards (batch gen_kl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c01cd2c(int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0bbf58(int);
int FUN_0c0cff96(int, int);
int FUN_0c0da628(int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c018ccc(int a4, int a5, int a6, int a7);
int FUN_0c0db70e(int a4, int a5, int a6, int a7);
int FUN_0c0dbc8c(int a4, int a5, int a6, int a7);
int FUN_0c139010(int a4, int a5, int a6, int a7);

int FUN_0c018ccc(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    t2 = *(signed char *)((a4 + 0x14));
    t3 = *(int *)((a4 + 0x10));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 == 2) {
                return thunk_FUN_0c03f346(a4, t3, a6, a7);
            }
            return t2;
        }
        (((struct o28_float *)(a4))->v) = (*(float *)((0xC20DF70 + ((*(signed char *)((t3 + 0x2))) << 2))));
        t2 = *(signed char *)((a4 + 0x15));
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    t4 = t2;
                    if (t2 != 3) {
                    } else {
                        FUN_0c012c34(a4);
                        u0 = (((struct o50_float *)(a4))->v);
                        u1 = (((struct o2C_float *)(a4))->v);
                        (((struct o2C_float *)(a4))->v) = (u1 - u0);
                        if (!((u1 - u0) > -260.0f)) {
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            (((struct o2C_float *)(a4))->v) = -260.0f;
                        }
                        t4 = 0x2C;
                    }
                    t2 = t4;
                } else {
                    t4 = FUN_0c01c62a(a4);
                    t5 = (signed char)t4;
                    if ((signed char)t4 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t5 = 0x14;
                    }
                    t2 = t5;
                }
                t4 = t2;
            } else {
                FUN_0c012c34(a4);
                t2 = FUN_0c01cd2c(0x101);
                if ((short)t2 != 0) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    t2 = 0x22;
                } else {
                    t5 = FUN_0c01cd2c(0x240);
                    t2 = (short)t5;
                    if (((short)t5 == 0) && (t0 = *(int *)0xC30A3F8, t0 == 0)) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = 0x3;
                        t2 = 0x15;
                    }
                }
                t4 = t2;
            }
            t0 = t4;
        } else {
            FUN_0c012c34(a4);
            u0 = (((struct o50_float *)(a4))->v);
            u1 = (((struct o2C_float *)(a4))->v);
            (((struct o2C_float *)(a4))->v) = (u1 + u0);
            if (!(-200.0f > (u1 + u0))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o2C_float *)(a4))->v) = -200.0f;
                t2 = 0x2C;
            } else {
                t4 = FUN_0c01cd2c(0x240);
                t5 = (short)t4;
                if (((short)t4 == 0) && (t1 = *(int *)0xC30A3F8, t1 == 0)) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = 0x3;
                    t5 = 0x15;
                }
                t2 = t5;
            }
            t0 = t2;
        }
        return t0;
    }
    (((struct o28_float *)(a4))->v) = (*(float *)((0xC20DF70 + ((*(signed char *)((t3 + 0x2))) << 2))));
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o2C_float *)(a4))->v) = -260.0f;
    (((struct o30_float *)(a4))->v) = 3.0f;
    (((struct o50_float *)(a4))->v) = 6.0f;
    return 0x50;
}

int FUN_0c0db70e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    *(volatile signed char *)(((*(int *)((a4 + 0x10))) + 0x1));
    FUN_0c187798(a4, a5, a6);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, 0x1, 0x2);
        }
        t0 = (((struct o0_int *)0xC472AB8)->v);
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o0_uint *)0xC472AB8)->v) = (t0 - 1);
        t2 = 0xC4;
        if ((t0 - 1) == 0) {
            (((struct o0_uint *)0xC472AB8)->v) = 0x4;
            t0 = (((struct oC_int *)0xC472AB8)->v);
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        if (t0 != 3) {
                            if (t0 != 4) {
                                if (t0 != 5) {
                                    if (t0 != 6) {
                                        t3 = t0;
                                        if (t0 != 7) {
                                        } else {
                                            (((struct oC_uint *)0xC472AB8)->v) = 0x0;
                                            FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E78);
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t3 = 0x14;
                                        }
                                        t0 = t3;
                                    } else {
                                        (((struct oC_uint *)0xC472AB8)->v) = 0x7;
                                        t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E60));
                                    }
                                    t3 = t0;
                                } else {
                                    (((struct oC_uint *)0xC472AB8)->v) = 0x6;
                                    t3 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E48));
                                }
                                t0 = t3;
                            } else {
                                (((struct oC_uint *)0xC472AB8)->v) = 0x5;
                                t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E30));
                            }
                            t3 = t0;
                        } else {
                            (((struct oC_uint *)0xC472AB8)->v) = 0x4;
                            t3 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E18));
                        }
                        t0 = t3;
                    } else {
                        (((struct oC_uint *)0xC472AB8)->v) = 0x3;
                        t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287E00));
                    }
                    t3 = t0;
                } else {
                    (((struct oC_uint *)0xC472AB8)->v) = 0x2;
                    t3 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287DE8));
                }
                t0 = t3;
            } else {
                (((struct oC_uint *)0xC472AB8)->v) = 0x1;
                t0 = (FUN_0c0cff96((*(int *)((t1 + 0x8))), 0xC287DD0));
            }
            t2 = t0;
        }
        return t2;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x2;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0dbc8c(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t10;
    register int t14;
    register int t17;
    register int t28;
    register int t29;
    register int t33;
    register int t36;
    register int t39;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c187798(a4, a5, a6);
            FUN_0c0bbf58(a4);
            t10 = 0x132;
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                FUN_0c0da628(a4);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t10 = 0x14;
            }
            return t10;
        }
        t14 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t14 - 1);
        t17 = (short)(t14 - 1);
        if ((short)(t14 - 1) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
            (((struct o132_uchar *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t17 = 0x14;
        }
        return t17;
    }
    *(volatile signed char *)((a4 + 0x2));
    
    FUN_0c187798(a4, a5, a6);
    t28 = *(signed char *)((a4 + 0x2));
    t29 = ((~(((~t28) + 0x1) & 0x1)) + 0x1);
    if ((int)t28 >= 0) {
        t29 = (t28 & 0x1);
    }
    *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287ED8 + (t29 << 2)))) * 65536.0f) / 360.0f);
    t33 = 0x1;
    if ((int)(*(signed char *)((a4 + 0x2))) >= (int)0x2) {
        t33 = 0x168;
    }
    *(unsigned short *)((a4 + 0x1C)) = t33;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t36 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t36 - 1);
    t39 = (short)(t36 - 1);
    if ((short)(t36 - 1) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t39 = 0x14;
    }
    return t39;
}

int FUN_0c139010(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        FUN_0c187798(a4, a5, a6);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0xB, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct o54_float *)(a4))->v) = 60.0f;
        FUN_0c058b06((a4 + 0x4C), (a4 + 0x34), (a4 + 0x4C));
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0xF);
        }
        if (t1 == 0) {
            FUN_0c059e60((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x28);
        }
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x7);
        }
        *(unsigned short *)((a4 + 0x1E)) = t1;
        t0 = 0xFFFFFFFF;
        if ((*(short *)((a4 + 0x1E))) == 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(FUN_0c179ac0()) % (int)0x5));
            t0 = ((*(short *)((a4 + 0x1E))) + 0x6);
        }
        *(unsigned short *)((a4 + 0x1E)) = t0;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    if ((*(short *)((a4 + 0x1C))) == (*(short *)((a4 + 0x1E)))) {
        FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
