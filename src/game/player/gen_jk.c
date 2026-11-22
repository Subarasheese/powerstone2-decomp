/* Straight-line functions with calls and guards (batch gen_jk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3778_int { char p[0x3778]; int v; };
struct o3778_uint { char p[0x3778]; unsigned int v; };
struct o37DC_float { char p[0x37DC]; float v; };
struct o37E0_float { char p[0x37E0]; float v; };
struct o37E4_float { char p[0x37E4]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c071ae4(int);
int FUN_0c07309e(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0b75ac(int, int, int);
int FUN_0c0b764c(int);
int FUN_0c0b7b7e(int);
int FUN_0c0b7f34(int, int, int, int);
int FUN_0c0b8438(int);
int FUN_0c0c30a8(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0b857c(int a4, int a5, int a6, int a7);
int FUN_0c085098(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0b857c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

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
                                                    t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                                                    if ((unsigned char)t0 != 0) {
                                                        return FUN_0c085d0c(a4);
                                                    }
                                                    FUN_0c038362(a4);
                                                    FUN_0c07da48(a4);
                                                    FUN_0c070320(a4);
                                                    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                                    if (t0 == 2) {
                                                        return FUN_0c085cac(a4, 0x6, 0x0);
                                                    }
                                                    return t0;
                                                }
                                                return FUN_0c07309e(a4);
                                            }
                                            FUN_0c0b8438(a4);
                                            FUN_0c07da48(a4);
                                            FUN_0c070320(a4);
                                            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                            if (t0 == 2) {
                                                return FUN_0c085cac(a4, 0x6, 0x0);
                                            }
                                            return t0;
                                        }
                                        t0 = *(signed char *)((a4 + 0x16));
                                        if (t0 != 0) {
                                            if (t0 != 1) {
                                                if (t0 != 2) {
                                                    if (t0 != 3) {
                                                        return t0;
                                                    }
                                                    t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                                                    if ((unsigned char)t0 != 0) {
                                                        return FUN_0c085d0c(a4);
                                                    }
                                                    return (unsigned char)t0;
                                                }
                                                t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                                                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                                                if (0.0f > ((((struct o50_float *)(a4))->v))) {
                                                    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                                    if (t0 != 0) {
                                                        if (t0 == 2) {
                                                            return FUN_0c085cac(a4, 0x6, 0x0);
                                                        }
                                                        (((struct o16_uchar *)(a4))->v) = 0x3;
                                                        return 0x16;
                                                    }
                                                    return t0;
                                                }
                                                return 0x50;
                                            }
                                            t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                                            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                                            if ((*(signed char *)((a4 + 0x131))) != 0) {
                                                t0 = FUN_0c07d1fc(a4);
                                                if (t0 != 0) {
                                                    (((struct o131_uchar *)(a4))->v) = 0x0;
                                                    t0 = *(signed char *)((a4 + 0x1));
                                                    FUN_0c07e79c(a4, t0, 0x0, 0xA, (t0), 0x0, 0xA);
                                                    (((struct o16_uchar *)(a4))->v) = 0x2;
                                                    return 0x16;
                                                }
                                            }
                                            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                                                t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                                if (t0 != 0) {
                                                    if (t0 == 2) {
                                                        return FUN_0c085cac(a4, 0x6, 0x0);
                                                    }
                                                    t1 = *(signed char *)((a4 + 0x1));
                                                    FUN_0c07e79c(a4, t1, 0x2, 0x11, (t1), 0x2, 0x11);
                                                    (((struct o16_uchar *)(a4))->v) = 0x3;
                                                    return 0x16;
                                                }
                                                return t0;
                                            }
                                            return 0x50;
                                        }
                                        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                        t1 = (unsigned char)t0;
                                        if ((unsigned char)t0 != 0) {
                                            t0 = *(signed char *)((a4 + 0x1));
                                            FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
                                            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
                                            FUN_0c0819c2(a4, 0x4000);
                                            FUN_0c07043c(a4, ((((struct oC_float *)0xC0B80A4)->v)), ((((struct o8_float *)0xC0B80A4)->v)), ((((struct o4_float *)0xC0B80A4)->v)), ((((struct o0_float *)0xC0B80A4)->v)));
                                            (((struct o131_uchar *)(a4))->v) = 0x0;
                                            (((struct o16_uchar *)(a4))->v) = 0x1;
                                            t1 = 0x16;
                                        }
                                        return t1;
                                    }
                                    return FUN_0c071ae4(a4);
                                }
                                t0 = *(signed char *)((a4 + 0x16));
                                if (t0 != 0) {
                                    if (t0 != 1) {
                                        if (t0 != 2) {
                                            if (t0 != 3) {
                                                return t0;
                                            }
                                            t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                                            if ((unsigned char)t0 != 0) {
                                                return FUN_0c085d0c(a4);
                                            }
                                            return (unsigned char)t0;
                                        }
                                        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                                        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                                        if (0.0f > ((((struct o50_float *)(a4))->v))) {
                                            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                            if (t0 != 0) {
                                                if (t0 == 2) {
                                                    return FUN_0c085cac(a4, 0x6, 0x0);
                                                }
                                                (((struct o16_uchar *)(a4))->v) = 0x3;
                                                return 0x16;
                                            }
                                            return t0;
                                        }
                                        return 0x50;
                                    }
                                    t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                                    if ((*(signed char *)((a4 + 0x131))) != 0) {
                                        t0 = FUN_0c07d1fc(a4);
                                        if (t0 != 0) {
                                            (((struct o131_uchar *)(a4))->v) = 0x0;
                                            t0 = *(signed char *)((a4 + 0x1));
                                            FUN_0c07e79c(a4, t0, 0x0, 0xA, (t0), 0x0, 0xA);
                                            (((struct o16_uchar *)(a4))->v) = 0x2;
                                            return 0x16;
                                        }
                                    }
                                    if (0.0f > ((((struct o50_float *)(a4))->v))) {
                                        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                                        if (t0 != 0) {
                                            if (t0 == 2) {
                                                return FUN_0c085cac(a4, 0x6, 0x0);
                                            }
                                            t1 = *(signed char *)((a4 + 0x1));
                                            FUN_0c07e79c(a4, t1, 0x2, 0x11, (t1), 0x2, 0x11);
                                            (((struct o16_uchar *)(a4))->v) = 0x3;
                                            return 0x16;
                                        }
                                        return t0;
                                    }
                                    return 0x50;
                                }
                                t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                t1 = (unsigned char)t0;
                                if ((unsigned char)t0 != 0) {
                                    t0 = *(signed char *)((a4 + 0x1));
                                    FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
                                    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
                                    FUN_0c0819c2(a4, 0x4000);
                                    FUN_0c07043c(a4, ((((struct oC_float *)0xC0B80A4)->v)), ((((struct o8_float *)0xC0B80A4)->v)), ((((struct o4_float *)0xC0B80A4)->v)), ((((struct o0_float *)0xC0B80A4)->v)));
                                    (((struct o131_uchar *)(a4))->v) = 0x0;
                                    (((struct o16_uchar *)(a4))->v) = 0x1;
                                    t1 = 0x16;
                                }
                                return t1;
                            }
                            FUN_0c0b7f34(a4, a5, a6, a7);
                        } else {
                            FUN_0c0b75ac(a4, a5, a6);
                        }
                        FUN_0c07da48(a4);
                        FUN_0c070320(a4);
                    } else {
                        FUN_0c0b7b7e(a4);
                    }
                    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t0 == 2) {
                        return FUN_0c085cac(a4, 0x6, 0x0);
                    }
                    return t0;
                }
                return FUN_0c070980(a4);
            }
            FUN_0c070690(a4, a5, a6);
            FUN_0c07da48(a4);
            FUN_0c070320(a4);
            t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t0 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            return t0;
        }
        return FUN_0c0b764c(a4);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t0;
}

int FUN_0c085098(int a4, int a5, int a6, int a7, float f4)
{
    register int t3;
    register int t4;
    int t5;

    (((struct o3715_uchar *)(a4))->v) = 0x2D;
    FUN_0c081dfc(a4, a5, a6, a7);
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x3);
    t3 = (((struct o3768_int *)(a4))->v);
    if (t3 != 0) {
        t4 = FUN_0c0c30a8(t3, 0x0, a4);
        if ((t4 != 0) && (t5 = *(signed char *)((t3 + 0x41C)), (unsigned char)t5 == 0xCD)) {
            (((struct o3778_uint *)(a4))->v) = t3;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + a4)) = *(struct mv3 *)((((((struct o3778_int *)(a4))->v)) + 0x28)); }
            (((struct o28_float *)(a4))->v) = ((((struct o37DC_float *)(a4))->v));
            (((struct o30_float *)(a4))->v) = (((((struct o37E4_float *)(a4))->v)) + (*(float *)0xC0851D0));
            (((struct o2C_float *)(a4))->v) = ((((struct o37E0_float *)(a4))->v));
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            *(unsigned int *)((a4 + 0x38)) = 0x0;
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            (((struct o3830_ushort *)(a4))->v) = 0x0;
            (((struct o374A_uchar *)(a4))->v) = 0x2;
            (((struct o374B_uchar *)(a4))->v) = 0x2;
            (((struct o41D_uchar *)(t3))->v) = 0x4;
            return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2B, 0xFFFFFFFF, 0x2, 0x2B));
        }
        return FUN_0c085d0c(a4);
    }
    return FUN_0c085d0c(a4);
}
