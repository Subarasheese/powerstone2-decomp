/* Straight-line functions with calls and guards (batch gen_jb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o1004_int { char p[0x1004]; int v; };
struct o1025_uchar { char p[0x1025]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0100b0(int, int);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01e9e4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02afc8(int, int);
int FUN_0c02b002(void);
int FUN_0c02b06e(int);
int FUN_0c02b092(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c07d6cc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07ed90(int, int);
extern int FUN_0c085cac();
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c135b00(int, int, int, int, float);
int FUN_0c176b90(int);
int FUN_0c176ba0(int, int);
int FUN_0c17f470(int, int, int);
int FUN_0c186740(int, int);
int FUN_0c187b48(int, int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c024208(void);
int FUN_0c02b182(int a4);
int FUN_0c06d3b2(int a4, int a5, int a6, int a7);
int FUN_0c0a19dc(int a4, int a5);


int FUN_0c02b182(int a4)
{
    int stk[20];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R8;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    v0_0 = a4;
    if ((v0_0 != 0)) goto L_C02B1AA;
    v0_0 = (0x1025);
    if (((*(signed char *)(((*(int *)0xC30B70C) + 0x1025))) == 0)) goto L_C02B1AA;
    L_C02B2FA:;
    return v0_0;
    L_C02B1AA:;
    FUN_0c187b48((*(int *)0xC30B70C), 0x0, 0x800);
    FUN_0c176b90(0x0);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    v0_5 = (((struct o1004_int *)((*(int *)0xC30B70C)))->v);
    *(float *)(((int)stk + 36)) = ((float)v0_5 / 32.0f);
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 52)) = 0x1025;
    v0_0 = (0x800);
    v0_1 = (0x3E8);
    v0_2 = (0xC30B70C);
    v0_3 = (0xC30B710);
    v0_4 = (0x0);
    w0_0 = (32.0f);
    FPUL_ = (v0_5);
    L_C02B2E8:;
    if (!(((int)v0_4 < (int)(*(int *)0xC30EF10)))) goto L_C02B2F0;
    v0_6 = FUN_0c02afc8((*(short *)((v0_3 + 0x0))), (*(signed char *)((v0_3 + 0x2))));
    v0_5 = (v0_6);
    if (((int)v0_6 >= 0)) goto L_C02B266;
    v0_6 = FUN_0c02b002();
    v0_5 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C02B2F0;
    *(unsigned short *)((((v0_5 << 1) + (0x800 + (*(int *)((v0_2 + 0x0))))) + 0x0)) = (*(short *)((v0_3 + 0x0)));
    *(unsigned char *)((((0xE00 + (*(int *)((v0_2 + 0x0)))) + v0_5) + 0x0)) = (*(signed char *)((v0_3 + 0x2)));
    v0_6 = FUN_0c02b06e((*(short *)((v0_3 + 0x0))));
    FUN_0c02b092((short)v0_6, (*(int *)((v0_2 + 0x0))), (*(signed char *)((v0_3 + 0x2))));
    FUN_0c0100b0((*(int *)((v0_2 + 0x0))), v0_0);
    FUN_0c176ba0((v0_5 + v0_1), (*(int *)((v0_2 + 0x0))));
    goto L_C02B266;
    L_C02B2F0:;
    v0_0 = *(int *)((v0_2 + 0x0));
    (((struct o1025_uchar *)(v0_0))->v) = 0x1;
    v0_0 = (v0_0);
    goto L_C02B2FA;
    L_C02B266:;
    v0_6 = *(int *)((v0_2 + 0x0));
    *(unsigned char *)((((0xC00 + v0_6) + v0_5) + 0x0)) = ((*(signed char *)((((0xC00 + v0_6) + v0_5) + 0x0))) | 0x1);
    *(unsigned int *)(((int)stk + 0)) = (v0_5 + v0_1);
    *(float *)(((int)stk + 4)) = ((((struct o4_float *)(v0_3))->v));
    *(float *)(((int)stk + 8)) = ((((struct o8_float *)(v0_3))->v));
    *(float *)(((int)stk + 12)) = ((((struct oC_float *)(v0_3))->v));
    if ((((unsigned char)(*(signed char *)((v0_3 + 0x3))) & 1) == 0)) goto L_C02B2AA;
    v0_5 = (((struct o1004_int *)((*(int *)((v0_2 + 0x0)))))->v);
    FPUL_ = ((((int)((unsigned int)((int)((unsigned int)v0_5 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_5)) ? 1u : 0u))) >> 1));
    L_C02B2B2:;
    *(float *)(((int)stk + 32)) = ((float)FPUL_ / w0_0);
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 32))) * ((((struct o10_float *)(v0_3))->v)));
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 36))) * ((((struct o14_float *)(v0_3))->v)));
    *(float *)(((int)stk + 44)) = ((((struct o18_float *)(v0_3))->v));
    FUN_0c17f470(((int)stk + 0), R5, R6);
    v0_3 = ((v0_3 + 0x1C));
    v0_4 = ((v0_4 + 0x1));
    goto L_C02B2E8;
    L_C02B2AA:;
    FPUL_ = (((((struct o1004_int *)((*(int *)((v0_2 + 0x0)))))->v)));
    goto L_C02B2B2;
}

int FUN_0c06d3b2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    if (t0 != 0) {
        if ((t0 != 4) && (t0 != 9)) {
            if (t0 != 5) {
                if (t0 != 6) {
                    if (t0 == 7) {
                        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
                    }
                    if (t0 == 8) {
                        FUN_0c037bf6(a4);
                        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                        t0 = 0x50;
                        if (0.0f > ((((struct o50_float *)(a4))->v))) {
                            t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                            t2 = t1;
                            if (t1 != 0) {
                                t2 = (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x6, 0x0));
                            }
                            t0 = t2;
                        }
                        return t0;
                    }
                    FUN_0c037bf6(a4);
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    if ((int)(short)(t0 - 1) <= 0) {
                        return ((int (*)(int))(FUN_0c085d0c))(a4);
                    }
                    t0 = FUN_0c07d6cc(a4);
                    t1 = *(int *)((a4 + 0x38));
                    t2 = (unsigned short)(t1 - t0);
                    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
                        t2 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
                    }
                    if (((int)t2 <= (int)0xFFFFF8E4) || ((int)t2 >= (int)0x71C)) {
                        t1 = 0x38E;
                        if ((int)t2 > 0) {
                            t1 = 0xFFFFFC72;
                        }
                        *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) + t1) & 0xFFFF);
                    }
                    return t0;
                }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (((-((((struct o2C_float *)(a4))->v))) + 1000.0f) / (float)(*(short *)((a4 + 0x1C)))));
                if ((*(short *)((a4 + 0x1C))) != 0) {
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                }
                t0 = FUN_0c037bf6(a4);
                t1 = (unsigned char)t0;
                if ((unsigned char)t0 != 0) {
                    t1 = (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x1B, 0x1));
                }
                return t1;
            }
            return (((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0x1B, 0x1, a7));
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            t0 = (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x5, 0x7));
        } else {
            FUN_0c07ed90(a4, 0x0);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t1 = 0x50;
            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                t2 = FUN_0c07ecc6(a4, 0x0, 0x0);
                t1 = t2;
                if (t2 != 0) {
                    t1 = (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x6, 0x0));
                }
            }
            t0 = t1;
        }
        return t0;
    }
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return ((int (*)(int))(FUN_0c085d0c))(a4);
    }
    t0 = FUN_0c07d6cc(a4);
    t1 = *(int *)((a4 + 0x38));
    t2 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t2 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    if (((int)t2 <= (int)0xFFFFF8E4) || ((int)t2 >= (int)0x71C)) {
        t1 = 0x38E;
        if ((int)t2 > 0) {
            t1 = 0xFFFFFC72;
        }
        *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) + t1) & 0xFFFF);
    }
    return t0;
}

int FUN_0c0a19dc(int a4, int a5)
{
    int stk[7];
    register int t3;
    register int t4;
    register int t16;
    register float u19;
    register float u21;
    register int t47;
    register int t48;
    register int t60;
    register float u62;
    register float u65;
    register int t89;
    int t6;
    int t50;
    register int t92;

    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    if ((*(int *)(((((short)(*(short *)((a4 + 0x1C))) * (short)0x38) + 0xC1C614C) + 0x0))) != 0) {
        t3 = *(short *)((a4 + 0x1C));
        t4 = *(short *)((a4 + 0x1E));
        if (((int)(*(int *)(((((short)t3 * (short)0x38) + 0xC1C614C) + 0x0))) <= (int)t4) && (t6 = *(int *)(((((short)t3 * (short)0x38) + 0xC1C614C) + 0x4)), (int)t6 >= (int)t4)) {
            thunk_FUN_0c058310(((*(int *)(((((*(int *)(((((short)(*(short *)((a4 + 0x1C))) * (short)0x38) + 0xC1C614C) + 0x8))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), ((int)stk + 0));
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)(*(int *)(((((short)(*(short *)((a4 + 0x1C))) * (short)0x38) + 0xC1C614C) + 0xC))))) == 0) {
                t16 = *(short *)((a4 + 0x1C));
                u19 = (((struct o18_float *)((0xC1C614C + ((short)t16 * (short)0x38))))->v);
                u21 = ((((struct o14_float *)((0xC1C614C + ((short)t16 * (short)0x38))))->v));
                u21 = u21 + u19 * (float)((((struct o20_short *)(a4))->v));
                FUN_0c135b00(a4, ((int)stk + 0), (*(int *)(((0xC1C614C + ((short)t16 * (short)0x38)) + 0x10))), 0x2, u21);
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
        }
    }
    if ((*(int *)(((((short)(*(short *)((a4 + 0x1C))) * (short)0x38) + 0xC1C614C) + 0x1C))) != 0) {
        t47 = *(short *)((a4 + 0x1C));
        t48 = *(short *)((a4 + 0x1E));
        if (((int)(*(int *)((((((short)t47 * (short)0x38) + 0xC1C614C) + 0x1C) + 0x0))) <= (int)t48) && (t50 = *(int *)((((((short)t47 * (short)0x38) + 0xC1C614C) + 0x1C) + 0x4)), (int)t50 >= (int)t48)) {
            thunk_FUN_0c058310(((*(int *)(((((*(int *)(((((short)(*(short *)((a4 + 0x1C))) * (short)0x38) + 0xC1C614C) + 0x24))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), ((int)stk + 0));
            if (((int)((int)(*(short *)((a4 + 0x1E))) % (int)(*(int *)(((((short)(*(short *)((a4 + 0x1C))) * (short)0x38) + 0xC1C614C) + 0x28))))) == 0) {
                t60 = *(short *)((a4 + 0x1C));
                u62 = (((struct o18_float *)(((0xC1C614C + ((short)t60 * (short)0x38)) + 0x1C)))->v);
                u65 = ((((struct o14_float *)(((0xC1C614C + ((short)t60 * (short)0x38)) + 0x1C)))->v));
                u65 = u65 + u62 * (float)((((struct o20_short *)(a4))->v));
                FUN_0c135b00(a4, ((int)stk + 0), (*(int *)((((0xC1C614C + ((short)t60 * (short)0x38)) + 0x1C) + 0x10))), 0x2, u65);
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            }
        }
    }
    t89 = FUN_0c037bf6(a4);
    if ((unsigned char)t89 != 0) {
        t92 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    } else {
        t92 = (FUN_0c038362(a4));
    }
    return t92;
}
