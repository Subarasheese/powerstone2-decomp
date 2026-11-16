/* Straight-line functions with calls and guards (batch gen_pa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3722_uchar { char p[0x3722]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c02c828(void);
int FUN_0c02c89c(void);
int FUN_0c03681e(void);
int FUN_0c036864(int);
int FUN_0c036b46(int);
int FUN_0c036b76(void);
int FUN_0c036de8(int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c03ec80(void);
int FUN_0c0453ca(void);
int FUN_0c0453f0(void);
int FUN_0c04549c(void);
int FUN_0c0457a6(void);
int FUN_0c04587e(void);
int FUN_0c045942(void);
int FUN_0c045a22(void);
int FUN_0c047064(int, int, int, int);
int FUN_0c04a556(int, int, int, int);
int FUN_0c0524bc(void);
float FUN_0c064d9c(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c070320(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07053a(int, int, float);
int FUN_0c0705e2(int);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c07101a(int, int, int, int);
int FUN_0c071450(int, int, int, int);
int FUN_0c071736(int);
int FUN_0c071ae4(int);
int FUN_0c0725fa(int);
int FUN_0c072bd4(int);
int FUN_0c07309e(int);
int FUN_0c07c25a(void);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c08ce34(int);
int FUN_0c0aeb60(int, int, int, int);
int FUN_0c0aeb9a(int);
int FUN_0c0af164(int);
int FUN_0c0af568(int, int, int);
int FUN_0c0b9430(int);
int FUN_0c0b9f22(int);
int FUN_0c10208a(int, int);
int FUN_0c173370(void);
int FUN_0c08d05c(int a4, int a5, int a6, int a7);
int FUN_0c0afe10(int a4, int a5, int a6, int a7);
int FUN_0c0ba0c8(int a4, int a5, int a6, int a7);
int FUN_0c09209c(int a4, int a5, int a6);
int FUN_0c07ecc6(int a4, int a5, int a6);
int FUN_0c1717f0(int a4, int a5, int a6);
int FUN_0c0922cc(int a4, int a5, int a6);
int FUN_0c0b7bf4(int a4, int a5, int a6);
int FUN_0c096144(int a4, int a5, int a6);
int FUN_0c02c8c2(int a4, int a5, int a6, int a7);
int FUN_0c045a38(int a4, int a5, int a6, int a7);

int FUN_0c08d05c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    if (t0 != 9) {
                                        if (t0 != 12) {
                                            if (t0 != 13) {
                                                if (t0 != 14) {
                                                    t0 = FUN_0c037bf6(a4, a5, a6);
                                                    if ((unsigned char)t0 != 0) {
                                                        return FUN_0c085d0c(a4);
                                                    }
                                                    FUN_0c038362(a4);
                                                    FUN_0c07da48(a4);
                                                    return FUN_0c070320(a4);
                                                }
                                                return FUN_0c07309e(a4);
                                            }
                                            return FUN_0c072bd4(a4);
                                        }
                                        return FUN_0c0725fa(a4);
                                    }
                                    return FUN_0c071ae4(a4);
                                }
                                return FUN_0c071736(a4);
                            }
                            return FUN_0c071450(a4, a5, a6, a7);
                        }
                        return FUN_0c08ce34(a4);
                    }
                    return FUN_0c07101a(a4, a5, a6, a7);
                }
                return FUN_0c070980(a4);
            }
            return FUN_0c070690(a4, a5, a6);
        }
        return FUN_0c0705e2(a4);
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c0afe10(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t0 = FUN_0c037bf6(a4, a5, a6);
                if ((unsigned char)t0 != 0) {
                    return FUN_0c085d0c(a4);
                }
                FUN_0c038362(a4);
                FUN_0c07da48(a4);
                return FUN_0c070320(a4);
            }
            case 4:
            {
                return FUN_0c0aeb60(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c070690(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c070980(a4);
            }
            case 10:
            {
                return FUN_0c0af164(a4);
            }
            case 12:
            {
                return FUN_0c0aeb9a(a4);
            }
            case 14:
            {
                return FUN_0c0af568(a4, a5, a6);
            }
            case 16:
            {
                return ((int (*)(int, int, int, int))(0xC0AF81C))(a4, a5, a6, a7);
            }
            case 18:
            {
                return FUN_0c071ae4(a4);
            }
            case 24:
            {
                return ((int (*)(int, int, int, int))(0xC0AFAEE))(a4, a5, a6, a7);
            }
            case 26:
            {
                return ((int (*)(int, int, int, int))(0xC0AFCA4))(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c07309e(a4);
            }
        }
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c0ba0c8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    if (t0 != 0) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 6) {
                            if (t0 != 7) {
                                if (t0 != 8) {
                                    if (t0 != 9) {
                                        if (t0 != 12) {
                                            if (t0 != 13) {
                                                if (t0 != 14) {
                                                    t0 = FUN_0c037bf6(a4, a5, a6);
                                                    if ((unsigned char)t0 != 0) {
                                                        return FUN_0c085d0c(a4);
                                                    }
                                                    FUN_0c038362(a4);
                                                    FUN_0c07da48(a4);
                                                    return FUN_0c070320(a4);
                                                }
                                                return FUN_0c07309e(a4);
                                            }
                                            return FUN_0c072bd4(a4);
                                        }
                                        return ((int (*)(int, int, int, int))(0xC0B9E58))(a4, a5, a6, a7);
                                    }
                                    return FUN_0c071ae4(a4);
                                }
                                return ((int (*)(int, int, int, int))(0xC0B9BAC))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(0xC0B9916))(a4, a5, a6, a7);
                        }
                        return FUN_0c0b9430(a4);
                    }
                    return FUN_0c07101a(a4, a5, a6, a7);
                }
                return FUN_0c070980(a4);
            }
            return FUN_0c070690(a4, a5, a6);
        }
        return FUN_0c0b9f22(a4);
    }
    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c09209c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
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
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 200.0f);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, ((((struct o8_float *)0xC0921DC)->v)), ((((struct o4_float *)0xC0921DC)->v)), ((((struct o0_float *)0xC0921DC)->v)), 1.0f);
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c038362(a4);
}

int FUN_0c07ecc6(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c064ee4(a4, 0x2);
    if (t0 != 0) {
        (((struct o37B4_float *)(a4))->v) = (FUN_0c064d9c(t0));
        if ((*(signed char *)((a4 + 0x371D))) == 2) {
            FUN_0c081dfc(a4);
            (((struct o3722_uchar *)(a4))->v) = 0x0;
            t0 = 0x2;
        } else {
            u0 = 0.0f;
            if (a6 == 0) {
                u0 = (*(float *)((0xC1C5E5C + ((*(signed char *)((a4 + 0x2))) << 2))));
            }
            if (((((struct o37B4_float *)(a4))->v)) > (((((struct o2C_float *)(a4))->v)) + u0)) {
                FUN_0c081dfc(a4);
                (((struct o371D_uchar *)(a4))->v) = 0x2;
                (((struct o3722_uchar *)(a4))->v) = 0x0;
                t1 = 0x2;
            } else {
                t2 = FUN_0c064f80(a4);
                if (t2 != 0) {
                    (((struct o3722_uchar *)(a4))->v) = 0x0;
                    (((struct o37A4_float *)(a4))->v) = 0.0f;
                    t2 = 0x1;
                } else {
                    t3 = 0x0;
                    if (a5 != 0) {
                        t4 = *(signed char *)((a4 + 0x3722));
                        (((struct o3722_uchar *)(a4))->v) = (t4 + 0x1);
                        t3 = 0x0;
                        if ((int)(signed char)(t4 + 0x1) < (int)0x14) {
                            t3 = 0x1;
                        }
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            (((struct o3722_uchar *)(a4))->v) = 0x0;
            (((struct o37A4_float *)(a4))->v) = 0.0f;
            t0 = 0x1;
        } else {
            t2 = 0x0;
            if (a5 != 0) {
                t3 = *(signed char *)((a4 + 0x3722));
                (((struct o3722_uchar *)(a4))->v) = (t3 + 0x1);
                t4 = 0x0;
                if ((int)(signed char)(t3 + 0x1) < (int)0x14) {
                    t4 = 0x1;
                }
                t2 = t4;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c1717f0(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;

    t0 = *(signed char *)0xC475DC3;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c036de8(0x15, a5, a6);
    }
    FUN_0c03681e();
    FUN_0c036b76();
    t3 = *(signed char *)0xC542237;
    if (t3 != 10) {
        if (t3 != 11) {
            if (t3 != 12) {
                if (t3 != 13) {
                    if (t3 != 14) {
                        *(unsigned char *)0xC475DBC = 0x0;
                        FUN_0c173370();
                        if ((int)(*(signed char *)0xC542237) <= (int)0x9) {
                            return FUN_0c036864((*(signed char *)0xC542237));
                        }
                        return 0x3F;
                    }
                    *(unsigned char *)0xC475DBC = 0x6;
                    FUN_0c173370();
                    return (FUN_0c036b46(0x7));
                }
                *(unsigned char *)0xC475DBC = 0x6;
                FUN_0c173370();
                return (FUN_0c036b46(0x26));
            }
            *(unsigned char *)0xC475DBC = 0x6;
            FUN_0c173370();
            return (FUN_0c036b46(0x25));
        }
        return (FUN_0c036b46(0x14));
    }
    return (FUN_0c036b46(0x2));
}

int FUN_0c0922cc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x12, (t0), 0x2, 0x12);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, 35.0f, -3.5f, 600.0f, 100.0f);
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0b7bf4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x8, (t0), 0x2, 0x8);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07053a(a4, 0x2C, 30.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c096144(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 100.0f);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xA, (t0), 0x2, 0xA);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c02c8c2(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 4) {
                if ((unsigned char)t0 != 5) {
                } else {
                    FUN_0c02c89c();
                }
            } else {
                FUN_0c04a556(a4, a5, a6, a7);
            }
        } else {
            FUN_0c10208a(a4, a5);
        }
    } else {
        FUN_0c02c828();
    }
    FUN_0c0524bc();
    FUN_0c03ec80();
    return FUN_0c07c25a();
}

int FUN_0c045a38(int a4, int a5, int a6, int a7)
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
            if ((unsigned char)t1 != 2) {
                if ((unsigned char)t1 != 3) {
                    if ((unsigned char)t1 != 4) {
                        if ((unsigned char)t1 != 5) {
                            FUN_0c045a22();
                        } else {
                            FUN_0c045942();
                        }
                    } else {
                        FUN_0c04587e();
                    }
                } else {
                    FUN_0c0457a6();
                }
            } else {
                FUN_0c04549c();
            }
        } else {
            FUN_0c0453f0();
        }
    } else {
        FUN_0c0453ca();
        FUN_0c0453f0();
    }
    return ((int (*)(void))(0xC046042))();
}
