/* Straight-line functions with calls and guards (batch gen_jl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
int FUN_0c03f346(int, int, int, int);
extern int FUN_0c03f40c();
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aae4(int, int);
int FUN_0c05f222(void);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c070320(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0ae6dc(int, int, int);
int FUN_0c0fc67e(void);
int FUN_0c0fc6b6(void);
int FUN_0c0fc6e6(void);
int FUN_0c0fe0b2(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
int FUN_0c1171f0(int);
int FUN_0c142168(int, int);
int FUN_0c1422d0(int, int);
int FUN_0c142430(int, int);
int FUN_0c14349c(int, int, int, int);
int FUN_0c16f7ba(void);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int FUN_0c0b04e8(int a4);
int FUN_0c0fc776(void);
int FUN_0c11978c(int a4, int a5, int a6, int a7);
int FUN_0c11c4f2(int a4, int a5, int a6, int a7);
int FUN_0c14ce60(int a4, int a5, int a6, int a7);

int FUN_0c0b04e8(int a4)
{
    int stk[7];
    register int t6;
    register int t37;
    register int t40;
    register int t41;
    register int t43;
    register int t44;
    register int t50;
    register int t63;

    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if ((*(short *)((a4 + 0x1E))) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            FUN_0c0ae6dc(a4, 0x0, (((int)stk + 12) + 0x4));
            t6 = 0x63;
            if ((*(short *)((a4 + 0x1C))) != 0) {
                t6 = 0x61;
            }
            FUN_0c14349c(a4, 0x0, t6, (((int)stk + 12) + 0x4));
            FUN_0c142168(a4, 0x0);
            if (((*(short *)((a4 + 0x1C))) & 0x1) == 0) {
                FUN_0c1422d0(a4, 0x0);
            }
            FUN_0c142430(a4, 0x0);
            FUN_0c142430(a4, 0x1);
        }
    }
    if ((int)((((struct o22_short *)(a4))->v)) > 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c059e60(a4, 0x20);
            FUN_0c059e60(a4, 0x9);
        }
    }
    t37 = FUN_0c037bf6(a4);
    if ((unsigned char)t37 != 0) {
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(int *)((int)stk + 8) = 0x1D;
            *(int *)((int)stk + 4) = 0x1;
            t40 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t40;
            t41 = t40;
            *(int *)((int)stk + 0) = t41;
            FUN_0c07e79c(a4, t40, 0x1, 0x1D, t41, 0x1, 0x1D);
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            t63 = 0x1;
        } else {
            *(int *)((int)stk + 8) = 0x11;
            *(int *)((int)stk + 4) = 0x1;
            t43 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t43;
            t44 = t43;
            *(int *)((int)stk + 0) = t44;
            FUN_0c07e79c(a4, t43, 0x1, 0x11, t44, 0x1, 0x11);
            (((struct o17_uchar *)(a4))->v) = 0x3;
            t63 = 0x17;
        }
    } else {
        FUN_0c038362(a4);
        t50 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t50 != 0) {
            if (t50 == 2) {
                t63 = (FUN_0c085cac(a4, 0x6, 0x0));
            } else {
                (((struct o17_uchar *)(a4))->v) = 0x2;
                t63 = 0x17;
            }
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t63 = (FUN_0c070320(a4));
        }
    }
    return t63;
}


int FUN_0c11978c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t0 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 99) {
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
    }
    *(volatile int *)((a4 + 0x10));
    t1 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
    FUN_0c1171f0(a4);
    t1 = 0x0;
    for (;;) {
        *(volatile short *)(((0x41C + t0) + 0x8));
        *(volatile short *)(((0x41C + t0) + 0xC));
        t3 = *(int *)((((t1 << 2) + (0xC4 + a4)) + 0x0));
        FUN_0c03744a(t3, 0xC, 0x1, (*(int *)0xC4B410C));
        t4 = *(short *)(((0x41C + t0) + 0x8));
        t5 = *(short *)(((0x41C + t0) + 0xC));
        t6 = (t4 - t5);
        if ((int)(t4 - t5) < 0) {
            t6 = 0x0;
        }
        if (((*(int *)((((*(int *)((((t6 + t1) << 2) + 0xC474410))) << 2) + 0xC473D04))) & 0x1000) != 0) {
            *(unsigned char *)((t3 + 0x0)) = 0x1;
        } else {
            *(unsigned char *)((t3 + 0x0)) = 0x0;
        }
        *(unsigned short *)((t3 + 0x6)) = 0x21F;
        t4 = ((int (*)(int))(FUN_0c187798))(((t6 + t1) << 2));
        FUN_0c18778c();
        t4 = ((int (*)(void))(FUN_0c187798))();
        t2 = FUN_0c0588bc((t3 + 0x6C), 0xC291E40, 0xC291E34, t1, 0x4, 0x0);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x5) {
            break;
        }
    }
    return t2;
}

int FUN_0c11c4f2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            if (t4 == 99) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t4;
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct o4_int *)0xC2922D0)->v))) && (t0 = (((struct o8_int *)0xC2922D0)->v), (int)t4 <= (int)t0)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922B8, 0xC2922AC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2922D0)->v))) && (t1 = (((struct o10_int *)0xC2922D0)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922C4, 0xC2922B8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03733c(a4, 0x19, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x41F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        if ((*(signed char *)((a4 + 0x2))) != 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC2922D0)->v))) && (t2 = (((struct o8_int *)0xC2922D0)->v), (int)t0 <= (int)t2)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922B8, 0xC2922AC, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC2922D0)->v))), (((((struct o4_int *)0xC2922D0)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2922D0)->v))) && (t3 = (((struct o10_int *)0xC2922D0)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((0xB0 + a4), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
            FUN_0c0588bc((a4 + 0x40), 0xC2922C4, 0xC2922B8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2922D0)->v))), (((((struct oC_int *)0xC2922D0)->v))));
        }
    }
    if ((int)(*(short *)((a4 + 0x1C))) < (int)((((struct o0_int *)0xC2922D0)->v))) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c14ce60(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x2);
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x1555);
        if (0.0f > ((((struct o50_float *)(a4))->v))) {
            t0 = FUN_0c064f80(a4);
            if (t0 != 0) {
                t0 = FUN_0c064ee4(a4, 0x2);
                if (t0 == 0) {
                    u0 = ((((struct o50_float *)(a4))->v));
                    u0 *= -0.699999988f;
                    (((struct o50_float *)(a4))->v) = u0;
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
                    if ((int)(short)(t0 + 0x1) > (int)0x2) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    } else {
                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                        t0 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
                    }
                    t1 = t0;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                t0 = t1;
            } else {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
            }
            t1 = t0;
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t1 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
        return t1;
    }
    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xC16);
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x222);
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o12A_ushort *)(a4))->v) = (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1)))));
    }
    if (((((struct o404_int *)(a4))->v)) != 0) {
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o4C_float *)(a4))->v) = ((-((((struct o4C_float *)(a4))->v))) / 5.0f);
        (((struct o54_float *)(a4))->v) = ((-((((struct o54_float *)(a4))->v))) / 5.0f);
        t0 = *(signed char *)((a4 + 0x1B));
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        if (t1 == 0) {
            FUN_0c05aae4(0x2E, (a4 + 0x28));
        }
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + ((int)((int)(FUN_0c179ac0()) % (int)0x14)));
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    } else {
        t0 = (math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C)));
    }
    return t0;
}
