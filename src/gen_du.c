/* Straight-line functions with calls and guards (batch gen_du): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c01599c(void);
int FUN_0c01a9c0(void);
int FUN_0c01cd2c(int);
int FUN_0c021eb4(void);
int FUN_0c021ee2(void);
int FUN_0c021f28(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c025564(void);
int FUN_0c02568a(void);
int FUN_0c02a94e(void);
int FUN_0c02b692(int, int, int);
int FUN_0c02b7fc(void);
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c043064(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05afc8(int, int, int);
int FUN_0c0a7170(int);
int FUN_0c0a7194(int);
int FUN_0c0a7278(int);
int FUN_0c0bbf58(int);
int FUN_0c0d60a8(int);
int FUN_0c0d60bc(int);
int FUN_0c0db188(int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c11a22e(int, int, int);
int FUN_0c11aed4(int, int, int);
int FUN_0c11b374(int, int);
int FUN_0c11b6ba(int);
int FUN_0c11bae2(int, int);
int FUN_0c11c036(int, int);
int FUN_0c11c2a8(int, int);
int FUN_0c11c4c8(int);
int FUN_0c11c672(int, int);
int FUN_0c11c7ac(int);
int FUN_0c11c8b2(void);
int FUN_0c11c8be(int);
int FUN_0c11cb1c(int);
int FUN_0c11cc74(int);
int FUN_0c11cd98(int);
int FUN_0c11cffe(int);
int FUN_0c11dbaa(void);
int FUN_0c11dc7e(void);
int FUN_0c179ac0(void);
int FUN_0c17b1a0(int);
int FUN_0c17b4b0(int);
int FUN_0c17c130(int, int, int);
int FUN_0c1864e0(int, int);
int FUN_0c186740(int, int);
int FUN_0c187798(int, int, int);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_mul_xyz(int, float, float, float);
int math_vec3i_add(int, int, int);
int nlCalcPoint(int, int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c11dcb0(int a4, int a5, int a6, int a7);
int FUN_0c0d9ebc(int a4, int a5, int a6, int a7);
int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4);
int FUN_0c025778(int a4, int a5, int a6, int a7);
int FUN_0c1257e6(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c0a7430(int a4, int a5, int a6, int a7);

int FUN_0c11dcb0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 == 1) {
            return t2;
        }
        if (t2 != 2) {
            if (t2 == 10) {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                return 0x0;
            }
            if (t2 == 20) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x14;
                (((struct o14_uchar *)(((((struct o4_int *)0xC473C48)->v))))->v) = 0x14;
                return 0x14;
            }
            if (t2 == 30) {
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x1E;
                (((struct o14_uchar *)(((((struct o4_int *)0xC473C48)->v))))->v) = 0x1E;
                return 0x14;
            }
            if (t2 == 80) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t3 = t2;
            if (t2 == 99) {
                (((struct o14_uchar *)(a4))->v) = 0x50;
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x63;
                (((struct o14_uchar *)(((((struct o4_int *)0xC473C48)->v))))->v) = 0x63;
                t3 = 0x14;
            }
            return t3;
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c11cd98(a4);
            FUN_0c11a22e(a4, ((((struct o0_int *)0xC473CC0)->v)), 0x0);
            FUN_0c11a22e(a4, ((((struct o4_int *)0xC473CC0)->v)), 0x1);
        }
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c05a080(0x20, 0x0);
            FUN_0c05afc8(0x20, 0x1, 0x1);
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x2;
        }
        if ((*(short *)((a4 + 0x1E))) == 1) {
            FUN_0c05afc8(0x20, 0x20, 0x28);
        }
        if ((*(short *)((a4 + 0x1E))) == 40) {
            FUN_0c05afc8(0x20, 0x40, 0x1);
        }
        t2 = *(short *)((a4 + 0x1E));
        if (((int)t2 >= (int)0x3C) && ((int)t2 <= (int)0xC8)) {
            if ((*(short *)((a4 + 0x1E))) == 60) {
                FUN_0c05a080(0x8, 0x0);
            }
            if ((*(short *)((a4 + 0x1E))) == 0xC8) {
                FUN_0c05a080(0x9, 0x0);
            }
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)0x28)) == 0) {
                FUN_0c11c2a8(0x0, 0x0);
                FUN_0c11c2a8(0x0, 0x1);
            }
        }
        if (((((struct o8_int *)0xC473CC0)->v)) != -1) {
            if ((*(short *)((a4 + 0x1E))) == 120) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x0);
            }
            if ((*(short *)((a4 + 0x1E))) == 124) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x1);
            }
            if ((*(short *)((a4 + 0x1E))) == 0x80) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x2);
            }
            if ((*(short *)((a4 + 0x1E))) == 0x84) {
                FUN_0c11bae2(((((struct o8_int *)0xC473CC0)->v)), 0x3);
            }
        }
        if ((*(short *)((a4 + 0x1E))) == 120) {
            FUN_0c11c4c8(a4);
        }
        if ((*(short *)((a4 + 0x1E))) == 0x8C) {
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x3;
        }
        t2 = *(short *)((a4 + 0x1E));
        if (((int)t2 >= (int)0x8C) && ((int)t2 <= (int)0x12C)) {
            t2 = *(short *)((a4 + 0x1E));
            t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
            if ((int)t2 >= 0) {
                t3 = (t2 & 0x1);
            }
            if (t3 == 0) {
                FUN_0c11c036(0x0, 0x3C);
                FUN_0c11c036(0x1, 0x3C);
            }
        }
        if (((((struct o8_int *)0xC473CC0)->v)) != -1) {
            if ((*(short *)((a4 + 0x1E))) == 0xDC) {
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0xB;
            }
            if ((*(short *)((a4 + 0x1E))) == 0x118) {
                (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0xD;
            }
        }
        if ((*(short *)((a4 + 0x1E))) == 0x140) {
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x4;
        }
        if ((*(short *)((a4 + 0x1E))) == 0x12C) {
            FUN_0c11cc74(a4);
            FUN_0c11cb1c(a4);
            FUN_0c11cb1c(a4);
        }
        t2 = *(short *)((a4 + 0x1E));
        if (((int)t2 >= (int)((((struct o0_int *)0xC2922E4)->v))) && (t0 = (((struct o4_int *)0xC2922E4)->v), (int)t2 <= (int)t0)) {
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)((((struct o8_int *)0xC2922E4)->v)))) == ((((struct oC_int *)0xC2922E4)->v))) {
                FUN_0c11c672(a4, 0x0);
            }
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)((((struct o10_int *)0xC2922E4)->v)))) == ((((struct o14_int *)0xC2922E4)->v))) {
                FUN_0c11c672(a4, 0x1);
            }
        }
        t0 = *(short *)((a4 + 0x1E));
        if (((int)t0 >= (int)((((struct o0_int *)0xC2922E4)->v))) && (t1 = (((struct o4_int *)0xC2922E4)->v), (int)t0 <= (int)t1)) {
            t0 = (((struct o0_int *)0xC292438)->v);
            (((struct o20_ushort *)(a4))->v) = (((int)((int)((((((struct o4_int *)0xC292438)->v)) - t0) * ((*(short *)((a4 + 0x1E))) - ((((struct o0_int *)0xC2922E4)->v)))) / (int)((((struct o4_int *)0xC2922E4)->v)))) + t0);
            if ((*(short *)((a4 + 0x1E))) == ((((struct o0_int *)0xC2922E4)->v))) {
                FUN_0c05a080(0x10, 0x0);
            }
            if (((int)((int)((*(short *)((a4 + 0x1E))) - ((((struct o0_int *)0xC2922E4)->v))) % (int)((((struct o20_short *)(a4))->v)))) == 0) {
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0xF)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0xF);
                }
                t0 = 0xF;
                if (t1 == 0) {
                    t0 = 0x10;
                }
                FUN_0c05a080(t0, 0x0);
            }
        }
        if ((*(short *)((a4 + 0x1E))) == 0x212) {
            FUN_0c11c7ac(a4);
        }
        if ((*(short *)((a4 + 0x1E))) == 0x226) {
            FUN_0c05a080(0x16, 0x0);
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x5;
            FUN_0c05afc8(0x20, 0x0, 0x1);
        }
        if ((*(short *)((a4 + 0x1E))) == 0x2BC) {
            FUN_0c11c8be(a4);
            if ((*(short *)((a4 + 0x1E))) == 0x2BC) {
                FUN_0c11cffe(a4);
            }
        }
        t0 = (((struct o2C_int *)0xC473CC0)->v);
        switch (t0) {
        case 0:
            if ((*(short *)((a4 + 0x1E))) == 0x29E) {
                if (((((struct oC_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11aed4(a4, ((((struct oC_int *)0xC473CC0)->v)), 0x0);
                }
                if (((((struct o10_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11aed4(a4, ((((struct o10_int *)0xC473CC0)->v)), 0x1);
                }
                if (((((struct o14_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11aed4(a4, ((((struct o14_int *)0xC473CC0)->v)), 0x2);
                }
            }
            break;
        case 1:
            if ((*(short *)((a4 + 0x1E))) == 0x29E) {
                FUN_0c11b6ba(a4);
            }
            break;
        case 2:
            if ((*(short *)((a4 + 0x1E))) == 0x29E) {
                if (((((struct oC_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11b374(a4, 0x0);
                }
                if (((((struct o10_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11b374(a4, 0x1);
                }
                if (((((struct o14_int *)0xC473CC0)->v)) != -1) {
                    FUN_0c11b374(a4, 0x2);
                }
            }
            break;
        }
        if ((*(short *)((a4 + 0x1E))) == 0x384) {
            (((struct o14_uchar *)(((((struct o0_int *)0xC473C48)->v))))->v) = 0x7;
        }
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x7D0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        t0 = (((struct o30_int *)0xC473CC0)->v);
        t1 = t0;
        if (t0 == 1) {
            FUN_0c11c8b2();
            (((struct o14_uchar *)(a4))->v) = 0x1;
            t1 = (FUN_0c05afc8(0x20, 0x0, 0x1));
        }
        return t1;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o0_uint *)0xC473C48)->v) = (FUN_0c11dbaa());
    t0 = FUN_0c11dc7e();
    (((struct o4_uint *)0xC473C48)->v) = t0;
    return t0;
}

int FUN_0c0d9ebc(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t22;
    register int t23;
    register int t32;
    register int t38;
    register int t52;
    register int t57;
    register int t59;
    register int t64;
    register int t75;
    register int t77;
    register int t82;
    register int t84;
    register int t89;
    register int t97;
    register int t109;
    register int t124;
    register int t125;
    register int t202;
    register int t203;
    register int t208;
    register int t209;
    register int t214;
    register int t217;
    register int t220;
    register int t222;
    register int t17;
    register int t246;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
            t17 = a4;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x16C);
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((*(short *)((a4 + 0x1E))))) * 3932160.0f) / 360.0f);
        }
    } else {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t17 = a4;
    }
    t22 = *(signed char *)((a4 + 0x14));
    if (t22 != 0) {
        if (t22 != 1) {
            if (t22 == 2) {
                t23 = ((int (*)(int))(FUN_0c187798))(t17);
                FUN_0c0bbf58(a4);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0199999996f);
                t32 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t32 - 1);
                t246 = (short)(t32 - 1);
                if ((short)(t32 - 1) != 0) {
                } else {
                    (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0xFFFFFFFF;
                    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0xFFFFFFFF;
                    (((struct o132_uchar *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t246 = 0x14;
                }
            } else {
                if (t22 == 3) {
                    t38 = ((int (*)(int))(FUN_0c187798))(t17);
                    FUN_0c0bbf58(a4);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    if ((*(signed char *)((a4 + 0x132))) != 0) {
                        (((struct o132_uchar *)(a4))->v) = 0x0;
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    t52 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t52 - 1);
                    t246 = (short)(t52 - 1);
                    if ((short)(t52 - 1) != 0) {
                    } else {
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x32;
                        (((struct o14_uchar *)(a4))->v) = 0x9;
                        t246 = 0x14;
                    }
                } else {
                    if (t22 == 4) {
                        t57 = (((struct oD0_int *)(a4))->v);
                        (((struct o78_uint *)(t57))->v) = (((((struct o78_int *)(t57))->v)) + (int)(((float)0x1 * 65536.0f) / 360.0f));
                        t59 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t59 - 1);
                        t246 = (short)(t59 - 1);
                        if ((short)(t59 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t246 = 0x14;
                        }
                    } else {
                        if (t22 == 5) {
                            t64 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t64 - 1);
                            t246 = (short)(t64 - 1);
                            if ((short)(t64 - 1) != 0) {
                            } else {
                                *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
                                *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
                                FUN_0c0db188(a4, 0x0);
                                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t246 = 0x14;
                            }
                        } else {
                            if (t22 == 6) {
                                t75 = (((struct oD0_int *)(a4))->v);
                                (((struct o78_uint *)(t75))->v) = (((((struct o78_int *)(t75))->v)) - 3276);
                                t77 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t77 - 1);
                                t246 = (short)(t77 - 1);
                                if ((short)(t77 - 1) != 0) {
                                } else {
                                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t246 = 0x14;
                                }
                            } else {
                                if (t22 == 7) {
                                    t82 = (((struct oD0_int *)(a4))->v);
                                    (((struct o78_uint *)(t82))->v) = (((((struct o78_int *)(t82))->v)) - 182);
                                    t84 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t84 - 1);
                                    t246 = (short)(t84 - 1);
                                    if ((short)(t84 - 1) != 0) {
                                    } else {
                                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t246 = 0x14;
                                    }
                                } else {
                                    if (t22 == 8) {
                                        t89 = (((struct oD0_int *)(a4))->v);
                                        (((struct o78_uint *)(t89))->v) = (((((struct o78_int *)(t89))->v)) + (int)((3.0f * 65536.0f) / 360.0f));
                                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                                        t97 = *(short *)((a4 + 0x1C));
                                        *(unsigned short *)((a4 + 0x1C)) = (t97 - 1);
                                        t246 = (short)(t97 - 1);
                                        if ((short)(t97 - 1) == 0) {
                                            *(unsigned short *)((a4 + 0x1C)) = 0x32;
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t246 = 0x14;
                                        }
                                    } else {
                                        if (t22 == 9) {
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                                            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0199999996f);
                                            t109 = *(short *)((a4 + 0x1C));
                                            *(unsigned short *)((a4 + 0x1C)) = (t109 - 1);
                                            t246 = (short)(t109 - 1);
                                            if ((short)(t109 - 1) == 0) {
                                                thunk_FUN_0c05abb2(0x45, 0x0);
                                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 500.0f);
                                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                                                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                                                *(unsigned short *)((a4 + 0x1C)) = (((short)((int)((int)(FUN_0c179ac0()) % (int)0x5)) * (short)0x3C) + 0x1E0);
                                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                                t246 = 0x14;
                                            }
                                        } else {
                                            t124 = FUN_0c042fe0();
                                            t246 = t124;
                                            if (t124 != 0) {
                                                t125 = FUN_0c043010();
                                                t246 = t125;
                                                if (t125 == 0) {
                                                    (((struct o14_uchar *)(a4))->v) = 0x1;
                                                    t246 = 0x14;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            t202 = FUN_0c043064();
            t246 = t202;
            if (t202 != 0) {
            } else {
                t203 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t203 - 1);
                t246 = (short)(t203 - 1);
                if ((short)(t203 - 1) != 0) {
                } else {
                    thunk_FUN_0c05abb2(0x44, 0x0);
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct oAC_ushort *)(a4))->v) = 0x40F;
                    (((struct oA9_uchar *)(a4))->v) = 0x21;
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                    (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
                    *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t208 = FUN_0c179ac0();
                    t209 = ((~(((~t208) + 0x1) & 0x7)) + 0x1);
                    if ((int)t208 >= 0) {
                        t209 = (t208 & 0x7);
                    }
                    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((0xC287C50 + t209)));
                    *(volatile signed char *)((a4 + 0x2));
                    t214 = ((int (*)(void))(FUN_0c187798))();
                    *(volatile signed char *)((a4 + 0x2));
                    t217 = ((int (*)(void))(FUN_0c187798))();
                    *(volatile signed char *)((a4 + 0x2));
                    t220 = ((int (*)(void))(FUN_0c187798))();
                    t222 = FUN_0c0d60a8((*(signed char *)((a4 + 0x2))));
                    if (t222 != 0) {
                        FUN_0c0d60bc((*(signed char *)((a4 + 0x2))));
                    }
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t246 = 0x14;
                }
            }
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t246 = 0x14;
    }
    return t246;
}

int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t7;
    register int t12;
    register float u17;
    register float u18;
    register float u21;
    register float u22;
    register float u23;
    register float u27;
    register float u29;
    register float t30;
    register int t40;
    register int t42;
    register int t43;
    register int t51;
    register int t53;
    register int t54;
    register int t58;
    register float t60;
    register float u63;
    register float u70;
    register int t86;
    register int t90;
    register int t103;
    register int t106;
    register int t107;
    register int t114;
    register float u115;
    register int t116;
    register float u117;
    register int t118;
    register int t184;
    register int t185;
    register int t194;
    register int t199;
    register float t201;
    register float u204;
    register float u211;
    register int t221;
    register int t226;
    register int t15;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t7 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
            t226 = (short)(t7 - 1);
            if ((short)(t7 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t226 = 0x14;
            }
        } else {
            if (t0 == 2) {
                t12 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t12 - 1);
                t226 = (short)(t12 - 1);
                if ((short)(t12 - 1) != 0) {
                } else {
                    *(volatile int *)((a4 + 0x10));
                    FUN_0c187798((((int)stk + 4) + 0x8), 0x3C, a6);
                    (((struct o4_float *)(t15))->v) = (((((struct o4_float *)(t15))->v)) + 200.0f);
                    u17 = *(float *)((t15 + 0x0));
                    u18 = (((struct o28_float *)(a4))->v);
                    *(float *)(((int)stk + 8)) = (((((struct o4_float *)(t15))->v)) - ((((struct o2C_float *)(a4))->v)));
                    u21 = (((struct o30_float *)(a4))->v);
                    u22 = (((struct o8_float *)(t15))->v);
                    u23 = (u17 - u18);
                    if ((u17 - u18) == 0.0f) {
                        u23 = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    u27 = (u22 - u21);
                    if ((u22 - u21) == 0.0f) {
                        u27 = 9.99999997e-07f;
                    }
                    u29 = (u27 * u27);
                    u29 = u29 + u23 * u23;
                    t30 = math_signed_sqrt(u29);
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-t30) / (*(float *)(((int)stk + 8))))));
                    if (0.0f > (*(float *)(((int)stk + 8)))) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t40 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
                    *(int *)((int)stk + 0) = t40;
                    t42 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
                    t43 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t43 + (int)(((float)((t42 + t40) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t43 + (int)(((float)((t42 + t40) + 0x50) * 65536.0f) / 360.0f)));
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-u27) / u23)));
                    if (0.0f > u23) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t51 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
                    *(int *)((int)stk + 0) = t51;
                    t53 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
                    t54 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t54 + (int)(((float)((t53 + t51) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t54 + (int)(((float)((t53 + t51) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x3C)) = (int)(float)((int)((int)(FUN_0c179ac0()) % (int)0x168));
                    t58 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                    t60 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                    *(float *)(((int)stk + 0)) = ((float)(t58 + 0x3C) * t60);
                    u63 = ((float)(t58 + 0x3C) * t60);
                    (((struct o4C_float *)(a4))->v) = (u63 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    (((struct o50_float *)(a4))->v) = ((float)(t58 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    u70 = ((float)(t58 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(a4))->v) = (u70 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t226 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    t86 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t86 - 1);
                    t226 = (short)(t86 - 1);
                    if ((short)(t86 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        t226 = 0x14;
                    }
                } else {
                    if (t0 == 4) {
                        t90 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t90 - 1);
                        if ((short)(t90 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = 0x7;
                        }
                        if (((((struct o404_int *)(a4))->v)) != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o14_uchar *)(a4))->v) = 0x5;
                        }
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                        t226 = 0x30;
                    } else {
                        if (t0 == 5) {
                            t103 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t103 - 1);
                            t226 = (short)(t103 - 1);
                            if ((short)(t103 - 1) == 0) {
                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
                                t106 = (((struct oC4_int *)(a4))->v);
                                (((struct o20_float *)(t106))->v) = 1.0f;
                                (((struct o1C_float *)(t106))->v) = 1.0f;
                                (((struct o18_float *)(t106))->v) = 1.0f;
                                (((struct o14_float *)(t106))->v) = 1.0f;
                                t107 = (((struct oC8_int *)(a4))->v);
                                (((struct o20_float *)(t107))->v) = 1.0f;
                                (((struct o1C_float *)(t107))->v) = 1.0f;
                                (((struct o18_float *)(t107))->v) = 1.0f;
                                (((struct o14_float *)(t107))->v) = 1.0f;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o14_uchar *)(a4))->v) = 0x6;
                                t226 = 0x14;
                            }
                        } else {
                            if (t0 == 6) {
                                t114 = (((struct oC4_int *)(a4))->v);
                                u115 = (((struct o20_float *)(t114))->v);
                                (((struct o20_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o1C_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o18_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o14_float *)(t114))->v) = (u115 - 0.0500000007f);
                                t116 = (((struct oC8_int *)(a4))->v);
                                u117 = (((struct o20_float *)(t116))->v);
                                (((struct o20_float *)(t116))->v) = (u117 - 0.0500000007f);
                                (((struct o1C_float *)(t116))->v) = (u117 - 0.0500000007f);
                                (((struct o18_float *)(t116))->v) = (u117 - 0.0500000007f);
                                (((struct o14_float *)(t116))->v) = (u117 - 0.0500000007f);
                                t118 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t118 - 1);
                                t226 = (short)(t118 - 1);
                                if ((short)(t118 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = 0x7;
                                    t226 = 0x14;
                                }
                            } else {
                                t226 = t0;
                                if (t0 == 7) {
                                    t226 = (FUN_0c03f346(a4, 0x3C, a6, a7));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        t184 = *(int *)((a4 + 0x10));
        t185 = *(int *)((t184 + 0x10));
        *(volatile float *)((t184 + 0x28));
        *(volatile float *)((t185 + 0x28));
        *(volatile float *)((t185 + 0x2C));
        *(volatile float *)((t184 + 0x2C));
        *(volatile float *)((t185 + 0x30));
        *(volatile float *)((t184 + 0x30));
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFC000;
        t194 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
        *(int *)((int)stk + 0) = t194;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)((((int)((int)(FUN_0c179ac0()) % (int)0xA)) + t194) - 10) * 65536.0f) / 360.0f));
        t199 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
        t201 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        *(float *)(((int)stk + 0)) = ((float)(t199 + 0x3C) * t201);
        u204 = ((float)(t199 + 0x3C) * t201);
        (((struct o4C_float *)(a4))->v) = (u204 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o50_float *)(a4))->v) = ((float)(t199 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        u211 = ((float)(t199 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u211 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        FUN_0c059e60((*(int *)((a4 + 0x10))), 0x24);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t221 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t221 - 1);
        t226 = (short)(t221 - 1);
        if ((short)(t221 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t226 = 0x14;
        }
    }
    return t226;
}


int FUN_0c1257e6(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[8];

    register int R1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_6 = a4;
    v0_1 = a7;
    w0_2 = f4;
    w0_0 = f5;
    w0_0 = f6;
    v0_5 = *(signed char *)(((((short)(*(signed char *)((v0_6 + 0x1))) * (short)0x3938) + 0xC532498) + 0x15));
    v0_0 = (v0_6);
    v0_6 = (0x0);
    v0_2 = (0xC532498);
    v0_3 = (v0_5);
    v0_4 = (0xC532498);
    if ((v0_5 == 0)) goto L_C125822;
    if ((v0_3 != 2)) goto L_C125844;
    L_C125822:;
    v0_8 = (0x3938);
    if (((*(signed char *)((0x15 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_2)))) == 2)) goto L_C125880;
    if (((*(signed char *)((0x3715 + (((short)(*(signed char *)((v0_0 + 0x1))) * (short)v0_8) + v0_2)))) == 26)) goto L_C125880;
    L_C125844:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_6;
    v0_7 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_1)));
    L_C125C98:;
    return v0_7;
    L_C125880:;
    v0_5 = *(signed char *)((v0_0 + 0x14));
    v0_7 = (v0_5);
    if ((v0_5 == 0)) goto L_C125898;
    if ((v0_7 == 1)) goto L_C1258BC;
    if ((v0_7 != 2)) goto L_C125894;
    v0_7 = ((FUN_0c03f346(v0_0, v0_2, v0_3, v0_1)));
    goto L_C125C98;
    L_C125894:;
    goto L_C125C98;
    L_C1258BC:;
    v0_8 = *(signed char *)((v0_0 + 0x15));
    v0_7 = (v0_8);
    v0_2 = (0x9);
    v0_3 = (0x1);
    v0_1 = (0xC179AC0);
    v0_5 = (0x80);
    v0_1 = (0x28);
    w0_3 = (100.0f);
    w0_2 = (0.0f);
    w0_0 = (0.111111112f);
    w0_1 = (1.0f);
    if ((v0_8 == 0)) goto L_C1258F8;
    if ((v0_7 == 1)) goto L_C125912;
    if ((v0_7 == 2)) goto L_C12592A;
    if ((v0_7 != 3)) goto L_C1258EC;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    thunk_FUN_0c058310((((((struct oC4_int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_4)))->v)) + 0x28), (v0_0 + 0x28));
    *(float *)(((int)stk + 12)) = w0_2;
    *(float *)(((int)stk + 8)) = w0_2;
    *(float *)(((int)stk + 16)) = w0_3;
    FUN_0c17b4b0(0x1);
    FUN_0c17b1a0(((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_4) + 0x1840));
    nlCalcPoint((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14));
    FUN_0c0e2390((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), (v0_0 + 0x28));
    v0_4 = (((struct o20_short *)(v0_0))->v);
    v0_6 = (((struct o22_short *)(v0_0))->v);
    v0_7 = (((struct oC4_int *)(v0_0))->v);
    (((struct o84_float *)(v0_7))->v) = ((float)v0_4 / (float)v0_6);
    (((struct o8C_float *)(v0_7))->v) = ((float)v0_4 / (float)v0_6);
    (((struct o88_float *)(v0_7))->v) = ((float)v0_4 / (float)v0_6);
    math_vec3_mul_xyz((((int)stk + 0) + 0x14), (w0_1 - ((float)v0_4 / (float)v0_6)), (w0_1 - ((float)v0_4 / (float)v0_6)), (w0_1 - ((float)v0_4 / (float)v0_6)));
    FUN_0c17c130((v0_0 + 0x28), (v0_0 + 0x28), (((int)stk + 0) + 0x14));
    math_vec3i_add((v0_7 + 0x78), (v0_7 + 0x78), (0x9C + v0_7));
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    if ((((((struct o20_short *)(v0_0))->v)) != 0)) goto L_C125B44;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    L_C125B44:;
    v0_4 = (int)((int)(*(short *)((v0_0 + 0x1C))) % (int)v0_2);
    *(unsigned int *)(((int)stk + 0)) = ((-v0_4) + 0x9);
    v0_7 = (((-v0_4) + 0x9));
    v0_8 = (0x4);
    L_C125BCA:;
    *(unsigned int *)(((int)stk + 4)) = v0_8;
    if (((unsigned int)v0_8 < (unsigned int)v0_1)) goto L_C125B58;
    goto L_C125C98;
    L_C125B58:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_4 = *(int *)((((0xC4 + v0_0) + (*(int *)(((int)stk + 4)))) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 - 1);
    v0_4 = (v0_4);
    if (((int)(v0_6 - 1) >= (int)v0_3)) goto L_C125BAC;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned char *)((v0_4 + 0x0)) = v0_3;
    (((struct o78_uint *)(v0_4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)v0_5)) << 8) << 1);
    (((struct o7C_uint *)(v0_4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)v0_5)) << 8) << 1);
    (((struct o80_uint *)(v0_4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)v0_5)) << 8) << 1);
    L_C125BAC:;
    v0_6 = *(int *)(((int)stk + 0));
    (((struct o88_float *)(v0_4))->v) = ((float)v0_6 * w0_1);
    (((struct o84_float *)(v0_4))->v) = ((float)v0_6 * w0_0);
    (((struct o8C_float *)(v0_4))->v) = ((((struct o84_float *)(v0_4))->v));
    v0_7 = (0x8C);
    v0_8 = (((*(int *)(((int)stk + 4))) + 0x4));
    w0_2 = (((float)v0_6 * w0_0));
    FPUL_ = (v0_6);
    goto L_C125BCA;
    L_C1258EC:;
    if ((v0_7 != 4)) goto L_C1258F4;
    *(float *)(((int)stk + 12)) = w0_2;
    *(float *)(((int)stk + 8)) = w0_2;
    *(float *)(((int)stk + 16)) = w0_3;
    FUN_0c17b4b0(0x1);
    FUN_0c17b1a0(((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_4) + 0x1840));
    nlCalcPoint((((int)stk + 0) + 0x8), (v0_0 + 0x28));
    v0_2 = (0x4);
    L_C125C76:;
    if (((unsigned int)v0_2 < (unsigned int)v0_1)) goto L_C125C3C;
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) - 1);
    v0_7 = (0x20);
    if ((((((struct o20_short *)(v0_0))->v)) != 0)) goto L_C125C98;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_7 = (0x14);
    goto L_C125C98;
    L_C125C3C:;
    v0_3 = *(int *)((((0xC4 + v0_0) + v0_2) + 0x0));
    (((struct o88_float *)(v0_3))->v) = (((((struct o88_float *)(v0_3))->v)) - w0_1);
    (((struct o84_float *)(v0_3))->v) = (((((struct o84_float *)(v0_3))->v)) - w0_0);
    v0_6 = (v0_3);
    w0_3 = (0.0f);
    if ((!(0.0f > ((((struct o88_float *)(v0_3))->v))))) goto L_C125C64;
    (((struct o88_float *)(v0_6))->v) = w0_2;
    L_C125C64:;
    v0_7 = (0x84);
    if ((!(w0_3 > ((((struct o84_float *)(v0_6))->v))))) goto L_C125C6E;
    *(float *)((v0_6 + v0_7)) = w0_2;
    L_C125C6E:;
    *(float *)((v0_6 + (v0_7 + 0x8))) = (*(float *)((v0_6 + v0_7)));
    v0_2 = ((v0_2 + 0x4));
    goto L_C125C76;
    L_C1258F4:;
    goto L_C125C98;
    L_C12592A:;
    thunk_FUN_0c058310((((((struct oC4_int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + v0_4)))->v)) + 0x28), (v0_0 + 0x28));
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) + 0x1);
    *(unsigned int *)(((int)stk + 0)) = ((((struct oC4_int *)(v0_0))->v));
    w0_2 = (0.300000012f);
    if ((((*(short *)((v0_0 + 0x1C))) & 2) == 0)) goto L_C125984;
    v0_8 = *(int *)(((int)stk + 0));
    v0_7 = (0x84);
    v0_6 = (v0_8);
    w0_3 = ((((((struct o84_float *)(v0_8))->v)) - w0_2));
    L_C12598C:;
    *(float *)((v0_6 + v0_7)) = w0_3;
    v0_6 = *(int *)(((int)stk + 0));
    w0_2 = (((struct o84_float *)(v0_6))->v);
    (((struct o8C_float *)(v0_6))->v) = w0_2;
    (((struct o88_float *)(v0_6))->v) = w0_2;
    math_vec3i_add(((*(int *)(((int)stk + 0))) + 0x78), ((*(int *)(((int)stk + 0))) + 0x78), ((*(int *)(((int)stk + 0))) + 0x9C));
    if (((int)(*(signed char *)(((v0_4 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938)) + 0x17))) < (int)0x3)) goto L_C1259CE;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C1259CE:;
    v0_4 = (int)((int)(*(short *)((v0_0 + 0x1C))) % (int)v0_2);
    *(unsigned int *)(((int)stk + 0)) = ((-v0_4) + 0x9);
    v0_7 = (((-v0_4) + 0x9));
    v0_8 = (0x4);
    L_C125A54:;
    *(unsigned int *)(((int)stk + 4)) = v0_8;
    if (((unsigned int)v0_8 < (unsigned int)v0_1)) goto L_C1259E2;
    goto L_C125C98;
    L_C1259E2:;
    v0_6 = *(int *)(((int)stk + 0));
    v0_4 = *(int *)((((0xC4 + v0_0) + (*(int *)(((int)stk + 4)))) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (v0_6 - 1);
    v0_4 = (v0_4);
    if (((int)(v0_6 - 1) >= (int)v0_3)) goto L_C125A36;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned char *)((v0_4 + 0x0)) = v0_3;
    (((struct o78_uint *)(v0_4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)v0_5)) << 8) << 1);
    (((struct o7C_uint *)(v0_4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)v0_5)) << 8) << 1);
    (((struct o80_uint *)(v0_4))->v) = ((((int)((int)(FUN_0c179ac0()) % (int)v0_5)) << 8) << 1);
    L_C125A36:;
    v0_6 = *(int *)(((int)stk + 0));
    (((struct o88_float *)(v0_4))->v) = ((float)v0_6 * w0_1);
    (((struct o84_float *)(v0_4))->v) = ((float)v0_6 * w0_0);
    (((struct o8C_float *)(v0_4))->v) = ((((struct o84_float *)(v0_4))->v));
    v0_7 = (0x8C);
    v0_8 = (((*(int *)(((int)stk + 4))) + 0x4));
    w0_2 = (((float)v0_6 * w0_0));
    FPUL_ = (v0_6);
    goto L_C125A54;
    L_C125984:;
    v0_8 = *(int *)(((int)stk + 0));
    v0_7 = (0x84);
    v0_6 = (v0_8);
    w0_3 = ((((((struct o84_float *)(v0_8))->v)) + w0_2));
    goto L_C12598C;
    L_C125912:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    (((struct o48_float *)(v0_0))->v) = w0_1;
    (((struct o44_float *)(v0_0))->v) = w0_1;
    (((struct o40_float *)(v0_0))->v) = w0_1;
    goto L_C12592A;
    L_C1258F8:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = v0_6;
    (((struct o48_float *)(v0_0))->v) = w0_2;
    (((struct o44_float *)(v0_0))->v) = w0_2;
    (((struct o40_float *)(v0_0))->v) = w0_2;
    v0_7 = (0x40);
    goto L_C125C98;
    L_C125898:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o9C_uint *)(v0_1))->v) = 0x1555;
    (((struct oA0_uint *)(v0_1))->v) = 0x71C;
    (((struct oA4_uint *)(v0_1))->v) = 0x1C71;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_6;
    goto L_C1258BC;
}

int FUN_0c0a7430(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0A73D6))(a4, a5, a6, a7);
            }
            return FUN_0c0a7278(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A71E2))(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0a7170(a4);
                }
                return FUN_0c0a7194(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0A70E6))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A6FB4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A6F14))(a4, a5, a6, a7);
}
