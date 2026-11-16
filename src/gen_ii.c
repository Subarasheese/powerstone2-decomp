/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int);
int FUN_0c060c80(int, int, int);
int FUN_0c0612ee(int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int);
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c8c08();
int FUN_0c0d522c(int);
int FUN_0c0d52aa(int, int, int);
int FUN_0c0d5328(void);
extern int FUN_0c0d532c();
extern int FUN_0c0f105c();
int FUN_0c187798(int, int, int);
int FUN_0c0f109a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c062f0a(int a4, int a5, int a6);

int FUN_0c0f109a(int a4, int a5, int a6, int a7, float f4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(signed char *)0xC540F98) != 0) {
            (((struct o1A_uchar *)(a4))->v) = 0x1;
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
                t0 = ((int (*)(int, int, int, float))(FUN_0c0f105c))(a4, a5, a6, f4);
                FUN_0c0d5328();
                t0 = FUN_0c0c3e3a(a4);
                if (t0 != 0) {
                    return FUN_0c03f346(a4);
                }
                return t0;
            }
            t0 = ((int (*)(int, int, int, float))(FUN_0c0f105c))(a4, a5, a6, f4);
            t0 = *(signed char *)((a4 + 0x3));
            return FUN_0c0d52aa(a4, (((t0 << 2) << 2) + 0xC288350), (*(int *)(((((t0 << 2) << 2) + 0xC288350) + 0xC))));
        }
        t0 = ((int (*)(int, int, int, float))(FUN_0c0f105c))(a4, a5, a6, f4);
        return FUN_0c0d522c(a4);
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c187798(a4, a5, a6);
    *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC288350) + 0xC)));
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        *(unsigned int *)((a4 + 0x10)) = (*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94)));
    }
    (((struct o41C_uchar *)(a4))->v) = 0xC8;
    (((struct o424_uchar *)(a4))->v) = 0x6;
    FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    FUN_0c0c212c(a4);
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct o1A_uchar *)(a4))->v) = 0x0;
    if ((*(signed char *)0xC540F98) != 0) {
        (((struct o1A_uchar *)(a4))->v) = 0x1;
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
                            return ((int (*)(int))(FUN_0c0d532c))(a4);
                        }
                        return ((int (*)(int))(FUN_0c0c8c08))(a4);
                    }
                    return ((int (*)(int))(FUN_0c0c5024))(a4);
                }
                return ((int (*)(int))(FUN_0c0c4c1c))(a4);
            }
            t0 = ((int (*)(int))(FUN_0c0f105c))(a4);
            FUN_0c0d5328();
            t0 = FUN_0c0c3e3a(a4);
            if (t0 != 0) {
                return FUN_0c03f346(a4);
            }
            return t0;
        }
        t0 = ((int (*)(int))(FUN_0c0f105c))(a4);
        t0 = *(signed char *)((a4 + 0x3));
        return FUN_0c0d52aa(a4, (((t0 << 2) << 2) + 0xC288350), (*(int *)(((((t0 << 2) << 2) + 0xC288350) + 0xC))));
    }
    t0 = ((int (*)(int))(FUN_0c0f105c))(a4);
    return FUN_0c0d522c(a4);
}

int FUN_0c062f0a(int a4, int a5, int a6)
{
    int stk[6];
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u12;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u19;
    register int t147;
    register int t24;
    register float u63;
    register float u100;
    register float u22;
    float u23;
    register float u64;
    register float u65;
    float u101;
    register float u114;
    register float u120;
    register float u131;

    FUN_0c187798(a4, a5, a6);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a6))->v);
    u3 = (((struct oC_float *)((a6 + 0x8)))->v);
    u4 = (((struct oC_float *)((a4 + 0x8)))->v);
    u5 = (u1 - u2);
    if (0.0f > (u1 - u2)) {
        u5 = ((-u1) + u2);
    }
    (((struct oC_float *)(((int)stk + 0)))->v) = ((u4 + u3) - u5);
    u7 = (((struct o10_float *)((a4 + 0x8)))->v);
    u8 = (((struct o10_float *)((a6 + 0x8)))->v);
    u9 = (((struct o4_float *)((a4 + 0x8)))->v);
    u10 = (((struct o4_float *)((a6 + 0x8)))->v);
    u12 = (u9 - u10);
    if (0.0f > (u9 - u10)) {
        u12 = ((-u9) + u10);
    }
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = ((u7 + u8) - u12);
    u14 = (((struct o14_float *)((a4 + 0x8)))->v);
    u15 = (((struct o14_float *)((a6 + 0x8)))->v);
    u16 = (((struct o8_float *)((a4 + 0x8)))->v);
    u17 = (((struct o8_float *)((a6 + 0x8)))->v);
    u19 = (u16 - u17);
    if (0.0f > (u16 - u17)) {
        u19 = ((-u16) + u17);
    }
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = ((u14 + u15) - u19);
    t147 = 0x0;
    if ((((((struct oC_float *)(((int)stk + 0)))->v)) > 0.0f) && ((u22 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u22 > 0.0f) && (u23 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v), u23 > 0.0f))) {
        t24 = FUN_0c0612ee(a5);
        if (t24 != 0) {
            (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
            t147 = 0x2;
        } else {
            u63 = (((struct o4_float *)((((int)stk + 0) + 0xC)))->v);
            if ((u63 > 9.0f) && ((u64 = (((struct oC_float *)(((int)stk + 0)))->v), u63 > u64) || (u65 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), u63 > u65))) {
                u100 = (((struct oC_float *)(((int)stk + 0)))->v);
                if (!(u100 > u63) && (u101 = (((struct o8_float *)((((int)stk + 0) + 0xC)))->v), !(u100 > u101))) {
                    if (((((struct o8_float *)(a4))->v)) > ((((struct o8_float *)(a6))->v))) {
                        u114 = (-(*(float *)(((int)stk + 12))));
                    } else {
                        u114 = (*(float *)(((int)stk + 12)));
                    }
                    *(float *)(((int)stk + 0)) = u114;
                } else {
                    if (((((struct o8_float *)((a4 + 0x8)))->v)) > ((((struct o8_float *)((a6 + 0x8)))->v))) {
                        u120 = (-(*(float *)(((int)stk + 20))));
                    } else {
                        u120 = (*(float *)(((int)stk + 20)));
                    }
                    *(float *)(((int)stk + 8)) = u120;
                }
                FUN_0c060c80(a5, ((int)stk + 0), a6);
            } else {
                if (((((struct o4_float *)((a4 + 0x8)))->v)) > ((((struct o4_float *)((a6 + 0x8)))->v))) {
                    u131 = (-(*(float *)(((int)stk + 16))));
                } else {
                    u131 = (*(float *)(((int)stk + 16)));
                }
                *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u131);
                FUN_0c060c80(a5, ((int)stk + 0), a6);
                if (((((struct o4_float *)((a6 + 0x8)))->v)) > ((((struct o4_float *)((a4 + 0x8)))->v))) {
                    (((struct o135_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x4)));
                }
                FUN_0c06130a(a5, a6, (a6 + 0x8), (a4 + 0x8));
            }
            t147 = 0x1;
        }
    }
    return t147;
}
