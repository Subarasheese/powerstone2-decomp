/* Straight-line functions with calls and guards (batch gen_mj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c04b3ae(int, int, int, int, int, int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
int FUN_0c179ac0(void);
int FUN_0c187798(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e294c(int a4);
int FUN_0c04b528(int a4);
int FUN_0c0d53dc(int a4, int a5, int a6, int a7);

int FUN_0c0e294c(int a4)
{
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t19;
    register float u13;

    FUN_0c179ac0();
    t3 = 0xC1CB03C;
    t4 = (-(int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * 65536.0f) / 360.0f));
    t5 = 0xC1CB03C;
    for (;;) {
        t8 = FUN_0c037320((*(int *)((t3 + 0x0))), (*(int *)0xC4B410C));
        t9 = FUN_0c03f444(0x5, 0x0, t8);
        t19 = t9;
        if (t9 != 0) {
            FUN_0c03733c(t9, (*(int *)((t5 + 0x0))), (*(int *)0xC4B410C));
            *(unsigned int *)((t9 + 0x4)) = 0xC0E2888;
            *(unsigned char *)((t9 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t9))->v) = 0x1F;
            (((struct oA9_uchar *)(t9))->v) = 0x21;
            u13 = (((struct o4_float *)(t5))->v);
            (((struct o48_float *)(t9))->v) = u13;
            (((struct o44_float *)(t9))->v) = u13;
            (((struct o40_float *)(t9))->v) = u13;
            FUN_0c187798();
            (((struct o2C_float *)(t9))->v) = (((((struct o2C_float *)(t9))->v)) + ((((struct o8_float *)(t5))->v)));
            (((struct o4C_float *)(t9))->v) = ((math_cos_angle16(t4)) * 6.0f);
            (((struct o54_float *)(t9))->v) = ((math_sin_angle16(t4)) * 6.0f);
            (((struct o50_float *)(t9))->v) = 16.0f;
            *(unsigned int *)((t9 + 0x38)) = t4;
            t4 = (t4 + 0x71C);
            t19 = 0x50;
        }
        t3 = (t3 + 0xC);
        t5 = (t5 + 0xC);
        if ((unsigned int)t3 >= (unsigned int)0xC1CB084) {
            break;
        }
    }
    return t19;
}

int FUN_0c04b528(int a4)
{
    int stk[6];
    register int t5;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register float u17;
    register int t18;
    register int t19;
    register int t36;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x1E;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    t5 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t5 - 1);
    t36 = (short)(t5 - 1);
    if ((int)(short)(t5 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 0.800000012f);
        if ((int)(*(short *)((a4 + 0x1E))) < (int)0x3) {
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
        }
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
        t11 = FUN_0c179ac0();
        t12 = ((~(((~t11) + 0x1) & 0x3F)) + 0x1);
        if ((int)t11 >= 0) {
            t12 = (t11 & 0x3F);
        }
        *(float *)(((int)stk + 8)) = ((float)(t12 - 32) * 100.0f);
        t14 = FUN_0c179ac0();
        t15 = ((~(((~t14) + 0x1) & 0x1F)) + 0x1);
        if ((int)t14 >= 0) {
            t15 = (t14 & 0x1F);
        }
        u17 = 600.0f;
        u17 = u17 + 10.0f * (float)t15;
        *(float *)(((int)stk + 0)) = u17;
        t18 = FUN_0c179ac0();
        t19 = ((~(((~t18) + 0x1) & 0x1)) + 0x1);
        if ((int)t18 >= 0) {
            t19 = (t18 & 0x1);
        }
        if (t19 == 0) {
            *(float *)(((int)stk + 0)) = (-(*(float *)(((int)stk + 0))));
        }
        *(float *)(((int)stk + 4)) = 5000.0f;
        FUN_0c04b3ae(((int)stk + 0), ((((struct o20_short *)(a4))->v)), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) & 0x7);
        t36 = 0x20;
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0x6) {
        t36 = (FUN_0c03f346(a4));
    }
    return t36;
}

int FUN_0c0d53dc(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)((a4 + 0x41D));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 7) {
                                if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                    return t0;
                                }
                                return ((int (*)(int, int, int, int))(FUN_0c0d532c))(a4, a5, a6, a7);
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c0c8c08))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int))(FUN_0c0c5024))(a4, a5, a6);
                    }
                    return ((int (*)(int, int, int))(FUN_0c0c4c1c))(a4, a5, a6);
                }
                return FUN_0c0d5328();
            }
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (0xC1C8144 + (((t0 << 1) + t0) << 2)), 0x0);
        }
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x0;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 4) {
                    if (t0 != 5) {
                        if (t0 != 7) {
                            if ((t0 != 3) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                                return t0;
                            }
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            return FUN_0c0d5328();
        }
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (0xC1C8144 + (((t0 << 1) + t0) << 2)), 0x0);
    }
    return FUN_0c0d522c(a4);
}
