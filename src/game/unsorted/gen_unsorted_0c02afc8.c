/* game/unsorted: functions 0C02AFC8-0C02BAC2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o1004_int { char p[0x1004]; int v; };
struct o1008_int { char p[0x1008]; int v; };
struct o100C_int { char p[0x100C]; int v; };
struct o1010_int { char p[0x1010]; int v; };
struct o1014_int { char p[0x1014]; int v; };
struct o1014_uint { char p[0x1014]; unsigned int v; };
struct o1018_float { char p[0x1018]; float v; };
struct o101C_float { char p[0x101C]; float v; };
struct o1020_float { char p[0x1020]; float v; };
struct o1024_uchar { char p[0x1024]; unsigned char v; };
struct o1025_uchar { char p[0x1025]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1D10_int { char p[0x1D10]; int v; };
struct o1D10_uint { char p[0x1D10]; unsigned int v; };
struct o1D14_int { char p[0x1D14]; int v; };
struct o1D14_uint { char p[0x1D14]; unsigned int v; };
struct o1D18_int { char p[0x1D18]; int v; };
struct o1D18_uint { char p[0x1D18]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0100b0(int, int);
int FUN_0c176b90(int);
int nlCommonTextureReloadA(int, int);
int nl_sprite_draw(int, int, int);
int memset(int, int, int);
int FUN_0c2b37f4(int);
int FUN_0c02afc8(int a4, int a5);
int FUN_0c02b002(void);
int FUN_0c02b06e(int a4);
int FUN_0c02b092(int a4, int a5, int a6);
int FUN_0c02b182(int a4);
int FUN_0c02b310(void);
int FUN_0c02b342(int a4, int a5, int a6);
int FUN_0c02b3ba(int a4, float f4, float f5, float f6);
int FUN_0c02b502(int a4);
int FUN_0c02b50c(float f4);
int FUN_0c02b51c(float f4, float f5);
int FUN_0c02b52c(float f4);
int FUN_0c02b536(int a4);
int FUN_0c02b570(int a4, int a5, int a6);
int FUN_0c02b5da(void);
int FUN_0c02b624(void);
int FUN_0c02b7da(void);
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };


int FUN_0c02afc8(int a4, int a5)
{
    register int t0;
    register int t1;
    int t4;

    t0 = *(int *)0xC30B70C;
    t1 = 0x0;
    for (;;) {
        if (((*(short *)((((t1 << 1) + (0x800 + t0)) + 0x0))) == (short)a4) && (t4 = *(signed char *)((((0xE00 + t0) + t1) + 0x0)), (unsigned char)t4 == (unsigned char)a5)) {
            break;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x200) {
            return 0xFFFFFFFF;
        }
    }
    return t1;
}

int FUN_0c02b002(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC30B70C;
    t2 = 0x0;
    for (;;) {
        t3 = (int)((int)(((((struct o1014_int *)(t1))->v)) + t2) % (int)0x200);
        if (((*(short *)((((t3 << 1) + (0x800 + t1)) + 0x0))) != 0) && (t0 = *(signed char *)((t3 + (0xC00 + t1))), ((unsigned char)t0 & 1) != 0)) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x200) {
                return 0xFFFFFFFF;
            }
            continue;
        }
        break;
    }
    t0 = *(int *)0xC30B70C;
    (((struct o1014_uint *)(t0))->v) = (((((struct o1014_int *)(t0))->v)) + 0x1);
    t0 = *(int *)0xC30B70C;
    (((struct o1014_uint *)(t0))->v) = ((int)((int)((((struct o1014_int *)(t0))->v)) % (int)0x200));
    return t3;
}

int FUN_0c02b06e(int a4)
{
    register int t0;

    t0 = FUN_0c2b37f4(a4);
    return ((((short)((unsigned char)((int)(short)t0 >> 8) - 33) * (short)0x5E) + (unsigned char)t0) - 33);
}

int FUN_0c02b092(int a4, int a5, int a6)
{
    int t6;
    int t7;
    int t4;
    int t15;
    int qe0;
    int t8;
    unsigned int s16;
    int t5;
    int t26;
    int t22;
    int t3;
    int t2;
    int s8;
    int s4;
    int s0;
    int t33;
    int t20;
    int t16;
    int t13;
    int qe1;
    int t11;
    int t10;
    int t9;
    int s12;

    t7 = *(int *)0xC30B70C;
    t2 = (((struct o100C_int *)(t7))->v);
    t3 = (((struct o1010_int *)(t7))->v);
    qe1 = (((t2 * (short)a4) + t3) + 0x10);
    s16 = qe1;
    (*(unsigned int *)&s12) = 0x0;
    qe0 = ((((unsigned char)a6 << 2) << 1) + 0xC20E804);
    (*(unsigned int *)&s8) = (qe0 + 0x2);
    (*(unsigned int *)&s4) = (qe0 + 0x4);
    (*(unsigned int *)&s0) = (qe0 + 0x6);
    t4 = qe1;
    t5 = a5;
    t6 = a6;
    for (;;) {
        t13 = s12;
        if ((int)t13 >= (int)((((struct o1004_int *)((*(int *)0xC30B70C)))->v))) {
            break;
        }
        t4 = t5;
        t9 = 0x0;
        t15 = t13;
        for (;;) {
            t16 = *(int *)0xC30B70C;
            if ((int)t9 >= (int)((((struct o1008_int *)(t16))->v))) {
                break;
            }
            t11 = 0x4;
            t7 = 0xC0;
            t10 = 0x6;
            t8 = (((*(int *)&s16)) + 0x1);
            s16 = t8;
            t8 = (*(signed char *)(((t8 - 1) + 0x0)));
            t20 = t16;
            for (;;) {
                t6 = (((unsigned char)t8) & t7);
                t6 = ((int)t6 << (int)(-t10));
                t22 = t6 == 0;
                t6 = (t6 - 1);
                if (t22) {
                    t15 = (*(short *)((qe0 + 0x0)));
                    *(unsigned short *)(t4) = t15;
                } else {
                    t26 = t6 == 0;
                    t6 = (t6 - 1);
                    if (t26) {
                        t15 = (s8);
                        *(unsigned short *)(t4) = (*(short *)(t15));
                    } else {
                        if (t6 == 0) {
                            t20 = (s4);
                            t33 = (*(short *)(t20));
                        } else {
                            t15 = (s0);
                            t33 = (*(short *)(t15));
                        }
                        *(unsigned short *)(t4) = t33;
                    }
                }
                t7 = (t7 >> 1);
                t7 = (t7 >> 1);
                t11 = (t11 - 0x1);
                t4 = (t4 + 0x2);
                t10 = (t10 - 2);
                if (t11 == 0) {
                    break;
                }
            }
            t9 = (t9 + 0x1);
        }
        t5 = (t5 + 0x40);
        (*(unsigned int *)&s12) = ((s12) + 0x1);
    }
    return 0x1004;
}

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
    memset((*(int *)0xC30B70C), 0x0, 0x800);
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
    nlCommonTextureReloadA((v0_5 + v0_1), (*(int *)((v0_2 + 0x0))));
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
    nl_sprite_draw(((int)stk + 0), R5, R6);
    v0_3 = ((v0_3 + 0x1C));
    v0_4 = ((v0_4 + 0x1));
    goto L_C02B2E8;
    L_C02B2AA:;
    FPUL_ = (((((struct o1004_int *)((*(int *)((v0_2 + 0x0)))))->v)));
    goto L_C02B2B2;
}

int FUN_0c02b310(void)
{
    register int t0;

    t0 = *(int *)0xC30B70C;
    if ((*(signed char *)((t0 + 0x1025))) != 0) {
        memset((0xC00 + t0), 0x0, 0x200);
        (((struct o1025_uchar *)((*(int *)0xC30B70C)))->v) = 0x0;
        *(unsigned int *)0xC30EF10 = 0x0;
    }
    return 0x1025;
}

int FUN_0c02b342(int a4, int a5, int a6)
{
    register int t2;
    register int t3;
    register int t4;
    register int t0;
    int t1;

    t2 = a4;
    t3 = a5;
    t4 = a6;
    for (;;) {
        if ((*(signed char *)((t2 + 0x0))) == 0) {
            break;
        }
        t4 = (*(signed char *)((t2 + 0x0)));
        t4 = (unsigned char)t4;
        if ((((int)t4 >= (int)0x80) && (t1 = 0x9F, (int)t4 <= (int)t1)) || ((t0 = 0xE0, (int)t4 >= (int)t0) && ((int)t4 <= (int)0xFF))) {
            t1 = (*(signed char *)((t2 + 0x0)));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t1;
            t3 = (t3 + 0x1);
            t1 = (*(signed char *)((t2 + 0x0)));
            t2 = (t2 + 0x1);
        } else {
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t1 = (*(int *)0xC20E8A4);
            t4 = (unsigned char)t4;
            t4 = (t4 << 1);
            t4 = (t4 + t1);
            t1 = (*(signed char *)((t4 + 0x0)));
            t4 = (t4 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t1;
            t3 = (t3 + 0x1);
            t1 = (*(signed char *)((t4 + 0x0)));
        }
        *(unsigned char *)((t3 + 0x0)) = t1;
        t3 = (t3 + 0x1);
    }
    *(unsigned char *)((t3 + 0x0)) = 0x0;
    return 0xC20E8A4;
}

int FUN_0c02b3ba(int a4, float f4, float f5, float f6)
{
    int t7;
    int t3;
    int t4;
    int t6;
    int t1;
    int t0;
    int t2;
    float u0;
    float u1;
    float u2;
    int t5;

    t3 = FUN_0c02b310();
    t4 = *(int *)0xC30EF10;
    if ((int)t4 >= (int)0x200) {
        t5 = t3;
    } else {
        t3 = 0xC02B464;
        t6 = ((t4 * 0x1C) + 0xC30B710);
        t4 = a4;
        t7 = t0;
        u0 = f6;
        u1 = f4;
        for (;;) {
            if ((*(signed char *)(t4)) == 0) {
                break;
            }
            t7 = (unsigned char)(*(signed char *)(t4));
            if ((((int)t7 >= (int)0x80) && (t1 = 0x9F, (int)t7 <= (int)t1)) || ((t2 = 0xE0, (int)t7 >= (int)t2) && (t1 = 0xFF, (int)t7 <= (int)t1))) {
                t0 = (*(signed char *)(t4));
                t4 = (t4 + 0x1);
                t7 = *(signed char *)(t4);
                t4 = (t4 + 0x1);
                t7 = (unsigned char)t7;
                t0 = ((((unsigned char)t0) << 8) | t7);
                *(unsigned short *)(t6) = t0;
                t3 = 0x0;
            } else {
                t3 = (*(signed char *)(t4));
                t4 = (t4 + 0x1);
                t0 = (unsigned char)t3;
                t7 = (unsigned char)t3;
                if ((int)t0 < (int)0x60) {
                    t2 = 0x851F;
                    t7 = (t7 + 0x851F);
                    *(unsigned short *)(t6) = t7;
                } else {
                    if ((int)t0 < (int)0x80) {
                        t1 = 0x8520;
                        t7 = (t7 + 0x8520);
                    } else {
                        t7 = (t7 + 0x84FE);
                    }
                    *(unsigned short *)(t6) = t7;
                }
                t3 = 0x1;
            }
            (((struct o3_uchar *)(t6))->v) = t3;
            t2 = 0x1024;
            (((struct o2_uchar *)(t6))->v) = (*(signed char *)((0x1024 + (*(int *)0xC30B70C))));
            (((struct o10_float *)(t6))->v) = (*(float *)(((*(int *)0xC30B70C) + 0x101C)));
            (((struct o14_float *)(t6))->v) = (*(float *)(((*(int *)0xC30B70C) + 0x1020)));
            u2 = (*(float *)(((*(int *)0xC30B70C) + 0x1018)));
            (((struct o18_float *)(t6))->v) = u2;
            (((struct o4_float *)(t6))->v) = u1;
            (((struct o8_float *)(t6))->v) = f5;
            (((struct oC_float *)(t6))->v) = u0;
            t3 = (unsigned char)(*(signed char *)(t6 + 0x3));
            t7 = (*(int *)0xC30B70C);
            if ((t3 & 0x1) != 0) {
                t3 = 0x1004;
                t1 = (*(int *)((t7 + 0x1004)));
                t1 = (((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u))) >> 1);
            } else {
                t3 = 0x1004;
                t1 = (*(int *)((t7 + 0x1004)));
            }
            t3 = (t3 + 0x18);
            u0 = (u0 - 0.00100000005f);
            t0 = *(int *)0xC30EF10;
            u2 = (float)t1;
            u1 = (u1 + ((*(float *)((t7 + t3)))) * u2);
            *(unsigned int *)0xC30EF10 = (t0 + 0x1);
            if ((int)(t0 + 0x1) < (int)0x200) {
                t6 = (t6 + 0x1C);
                continue;
            }
            break;
        }
        t5 = t3;
    }
    return t5;
}

int FUN_0c02b502(int a4)
{
    (((struct o1024_uchar *)((*(int *)0xC30B70C)))->v) = a4;
    return 0x1024;
}

int FUN_0c02b50c(float f4)
{
    (((struct o101C_float *)((*(int *)0xC30B70C)))->v) = f4;
    (((struct o1020_float *)((*(int *)0xC30B70C)))->v) = f4;
    return 0x1020;
}

int FUN_0c02b51c(float f4, float f5)
{
    (((struct o101C_float *)((*(int *)0xC30B70C)))->v) = f4;
    (((struct o1020_float *)((*(int *)0xC30B70C)))->v) = f5;
    return 0x1020;
}

int FUN_0c02b52c(float f4)
{
    (((struct o1018_float *)((*(int *)0xC30B70C)))->v) = f4;
    return 0x1018;
}

int FUN_0c02b536(int a4)
{
    if ((((int)(unsigned char)a4 >= (int)0x80) && ((int)(unsigned char)a4 <= (int)0x9F)) || (((int)(unsigned char)a4 >= (int)0xE0) && ((int)(unsigned char)a4 <= (int)0xFF))) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c02b570(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC30B70C;
    (((struct o1D10_uint *)(t0))->v) = (((((struct o1D10_int *)(t0))->v)) + 0x1);
    if ((int)((((struct o1D10_int *)((*(int *)0xC30B70C)))->v)) >= (int)0x32) {
        t0 = *(int *)0xC30B70C;
        (((struct o1D10_uint *)(t0))->v) = (((((struct o1D10_int *)(t0))->v)) - 50);
    }
    t0 = *(int *)0xC30B70C;
    t1 = 0x1D10;
    if (((((struct o1D10_int *)(t0))->v)) == ((((struct o1D18_int *)(t0))->v))) {
        t2 = (((struct o1D18_int *)(t0))->v);
        (((struct o1D18_uint *)(t0))->v) = (((((struct o1D18_int *)(t0))->v)) + 0x1);
        if ((int)((((struct o1D18_int *)((*(int *)0xC30B70C)))->v)) >= (int)0x32) {
            t0 = *(int *)0xC30B70C;
            (((struct o1D18_uint *)(t0))->v) = (((((struct o1D18_int *)(t0))->v)) - 50);
        }
        t0 = 0x1D18;
        if (((((struct o0_short *)0xC30B6FE)->v)) != 0) {
            if (t2 == ((((struct o1D14_int *)((*(int *)0xC30B70C)))->v))) {
                t2 = *(int *)0xC30B70C;
                (((struct o1D14_uint *)(t2))->v) = ((((struct o1D18_int *)(t2))->v));
            }
            t0 = 0x1D14;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c02b5da(void)
{
    if (((unsigned short)((((struct o4_short *)0xC5426D4)->v)) & 0x2000) == 0) {
        if ((unsigned char)(*(signed char *)0xC30EF9E) == 82) {
            *(unsigned char *)0xC20E8AC = 0x14;
            return 0x1;
        }
        if ((*(signed char *)0xC20E8AC) != 0) {
            *(unsigned char *)0xC20E8AC = ((*(signed char *)0xC20E8AC) - 1);
            return 0x0;
        }
        if (((unsigned short)((((struct o0_short *)0xC5426D4)->v)) & 0x2000) == 0) {
            if ((unsigned char)(*(signed char *)0xC30EF9C) == 82) {
                *(unsigned char *)0xC20E8AC = 0x4;
                return 0x1;
            }
            return 0x0;
        }
        *(unsigned char *)0xC20E8AC = 0x4;
        return 0x1;
    }
    *(unsigned char *)0xC20E8AC = 0x14;
    return 0x1;
}

int FUN_0c02b624(void)
{
    if (((unsigned short)((((struct o4_short *)0xC5426D4)->v)) & 0x1000) == 0) {
        if ((unsigned char)(*(signed char *)0xC30EF9E) == 81) {
            *(unsigned char *)0xC20E8AD = 0x14;
            return 0x1;
        }
        if ((*(signed char *)0xC20E8AD) != 0) {
            *(unsigned char *)0xC20E8AD = ((*(signed char *)0xC20E8AD) - 1);
            return 0x0;
        }
        if (((unsigned short)((((struct o0_short *)0xC5426D4)->v)) & 0x1000) == 0) {
            if ((unsigned char)(*(signed char *)0xC30EF9C) == 81) {
                *(unsigned char *)0xC20E8AD = 0x4;
                return 0x1;
            }
            return 0x0;
        }
        *(unsigned char *)0xC20E8AD = 0x4;
        return 0x1;
    }
    *(unsigned char *)0xC20E8AD = 0x14;
    return 0x1;
}

int FUN_0c02b7da(void)
{
    return memset(((*(int *)0xC30B70C) + 0x102C), 0x0, 0xCF0);
}
