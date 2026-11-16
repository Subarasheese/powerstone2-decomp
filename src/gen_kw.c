/* Straight-line functions with calls and guards (batch gen_kw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03f0aa(void);
extern int FUN_0c03f346();
int FUN_0c04a080(void);
int FUN_0c04a69a(void);
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c05aeac(void);
int FUN_0c05af8a(void);
int FUN_0c05b048(int, int);
int FUN_0c0bbf8e(void);
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
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
float math_sin_angle16(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c04a13e(int a4, int a5, int a6, int a7);
int FUN_0c0e03ec(int a4, int a5, int a6, int a7);
int FUN_0c15c1c0(int a4, int a5, int a6, int a7);


int FUN_0c0e03ec(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
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
            return FUN_0c0d52aa(a4, (0xC1CA3B4 + (((t0 << 1) + t0) << 2)), 0x0);
        }
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, a5, a6);
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x2;
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
        return FUN_0c0d52aa(a4, (0xC1CA3B4 + (((t0 << 1) + t0) << 2)), 0x0);
    }
    return FUN_0c0d522c(a4);
}

int FUN_0c15c1c0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register float u21;
    register float u22;
    register float u26;
    register float u27;
    register float u31;
    register float u32;
    register float t35;
    register float u37;
    register int t52;
    register float u68;
    register float u69;
    register float u73;
    register float u74;
    register float u78;
    register float u79;
    register float t82;
    register float u84;
    register int t92;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t92 = t0;
            if (t0 == 2) {
                t92 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
            }
        } else {
            t5 = *(int *)((a4 + 0x10));
            *(volatile signed char *)((t5 + 0x1));
            FUN_0c187798(a4, a5, a6);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), ((int)stk + 0));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
            FUN_0c17c4d0((((int)stk + 0) + 0xC));
            u21 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t5))->v)));
            u22 = (*(float *)(((int)stk + 0)));
            u22 = u22 + 150.0f * u21;
            (((struct o28_float *)(a4))->v) = u22;
            u26 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t5))->v)));
            u27 = (*(float *)(((int)stk + 8)));
            u27 = u27 + 150.0f * u26;
            (((struct o30_float *)(a4))->v) = u27;
            u31 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t5))->v)));
            u32 = (*(float *)(((int)stk + 4)));
            u32 = u32 + 150.0f * u31;
            (((struct o2C_float *)(a4))->v) = u32;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
            t35 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            u37 = (((((struct o378C_float *)(t5))->v)) * 1.5f);
            u37 = u37 + 0.100000001f * t35;
            (((struct o48_float *)(a4))->v) = u37;
            (((struct o44_float *)(a4))->v) = u37;
            (((struct o40_float *)(a4))->v) = u37;
            if (((*(signed char *)((t5 + 0x3715))) == 17) && (t92 = *(signed char *)((t5 + 0x3741)), t92 == 5)) {
            } else {
                t92 = (((int (*)(int))(FUN_0c03f346))(a4));
            }
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t52 = *(int *)((a4 + 0x10));
        *(volatile signed char *)((t52 + 0x1));
        FUN_0c187798(a4, a5, a6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), ((int)stk + 0));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
        FUN_0c17c4d0((((int)stk + 0) + 0xC));
        u68 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t52))->v)));
        u69 = (*(float *)(((int)stk + 0)));
        u69 = u69 + 150.0f * u68;
        (((struct o28_float *)(a4))->v) = u69;
        u73 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t52))->v)));
        u74 = (*(float *)(((int)stk + 8)));
        u74 = u74 + 150.0f * u73;
        (((struct o30_float *)(a4))->v) = u74;
        u78 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t52))->v)));
        u79 = (*(float *)(((int)stk + 4)));
        u79 = u79 + 150.0f * u78;
        (((struct o2C_float *)(a4))->v) = u79;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
        t82 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
        u84 = (((((struct o378C_float *)(t52))->v)) * 1.5f);
        u84 = u84 + 0.100000001f * t82;
        (((struct o48_float *)(a4))->v) = u84;
        (((struct o44_float *)(a4))->v) = u84;
        (((struct o40_float *)(a4))->v) = u84;
        if (((*(signed char *)((t52 + 0x3715))) == 17) && (t92 = *(signed char *)((t52 + 0x3741)), t92 == 5)) {
        } else {
            t92 = (((int (*)(int))(FUN_0c03f346))(a4));
        }
    }
    return t92;
}
