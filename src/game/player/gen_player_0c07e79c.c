/* game/player: functions 0C07E79C-0C080320, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3722_uchar { char p[0x3722]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3733_uchar { char p[0x3733]; unsigned char v; };
struct o3738_uchar { char p[0x3738]; unsigned char v; };
struct o3753_uchar { char p[0x3753]; unsigned char v; };
struct o3754_uchar { char p[0x3754]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o3764_int { char p[0x3764]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3784_float { char p[0x3784]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3818_ushort { char p[0x3818]; unsigned short v; };
struct o381A_ushort { char p[0x381A]; unsigned short v; };
struct o381E_short { char p[0x381E]; short v; };
struct o3834_short { char p[0x3834]; short v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383C_short { char p[0x383C]; short v; };
struct o404_int { char p[0x404]; int v; };
struct o428_short { char p[0x428]; short v; };
struct o42A_short { char p[0x42A]; short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o432_short { char p[0x432]; short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o90_float { char p[0x90]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c0388e2(int, int, int, int);
int FUN_0c038958(int, int);
float FUN_0c064d9c(int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c064f8e(int, int);
int FUN_0c07d15c(int);
int FUN_0c081dfc(int);
extern int FUN_0c085cac();
int FUN_0c0c30a8(int, int, int);
int FUN_0c0c3258(int, int);
float math_signed_sqrt(float);
int FUN_0c07e79c(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c07e868(int a4, int a5, int a6, int a7);
int FUN_0c07eaf4(int a4, int a5, int a6);
int FUN_0c07ebb0(int a4);
int FUN_0c07ebd0(int a4);
int FUN_0c07ebe6(int a4);
int FUN_0c07ec9a(int a4);
int FUN_0c07ecc6(int a4, int a5, int a6);
int FUN_0c07ef30(int a4, int a5, int a6);
int FUN_0c07efee(int a4, int a5);
int FUN_0c07f096(int a4);
int FUN_0c07f0fc(int a4);
int FUN_0c07f118(int a4);
int FUN_0c07f172(int a4);
int FUN_0c07f18c(int a4);
int FUN_0c07f312(int a4, int a5);
int FUN_0c07f566(void);
int FUN_0c07f56a(int a4);
int FUN_0c07f610(int a4);
int FUN_0c07f67c(int a4);
int FUN_0c07f720(int a4, int a5, int a6);
int FUN_0c07f9a2(int a4, int a5, float f4, float f5, float f6);
int FUN_0c07fae8(int a4);
int FUN_0c07fb42(int a4);
int FUN_0c07fbb8(int a4);
int FUN_0c07fdba(int a4);

int FUN_0c07e79c(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    FUN_0c037ac4(a4, 0x0, a5, a6, a7);
    FUN_0c037ac4(a4, 0x1, a8, a9, a10);
    (((struct o3753_uchar *)(a4))->v) = a5;
    (((struct o3818_ushort *)(a4))->v) = ((a6 << 8) | (unsigned char)a7);
    (((struct o3754_uchar *)(a4))->v) = a8;
    (((struct o381A_ushort *)(a4))->v) = ((a9 << 8) | (unsigned char)a10);
    u0 = (((struct o37B0_float *)(a4))->v);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    (((struct o90_float *)(((((struct o118_int *)(a4))->v))))->v) = u0;
    (((struct o90_float *)(t0))->v) = u0;
    if ((*(signed char *)((a4 + 0x2))) != 12) {
        t0 = (((struct o48_int *)((0xC4 + a4)))->v);
        t1 = *(int *)(((0xC4 + a4) + 0x3C));
        t2 = *(int *)(((0xC4 + a4) + 0x38));
        *(unsigned char *)((((((struct o44_int *)((0xC4 + a4)))->v)) + 0x0)) = 0x1;
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned char *)((t1 + 0x0)) = 0x1;
    }
    return FUN_0c0388e2(a4, a5, a6, a7);
}


int FUN_0c07eaf4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = (((struct o42C_short *)(a4))->v);
    if (((unsigned short)t0 & 0x3C00) != 0) {
        t1 = 0x8000;
        if (((unsigned short)t0 & 0x3C00) == 0x2000) {
        } else {
            t1 = 0x6000;
            if (((unsigned short)t0 & 0x3C00) == 0x2400) {
            } else {
                t1 = 0x4000;
                if (((unsigned short)t0 & 0x3C00) == 0x400) {
                } else {
                    t1 = 0x2000;
                    if (((unsigned short)t0 & 0x3C00) == 0x1400) {
                    } else {
                        t1 = 0x0;
                        if (((unsigned short)t0 & 0x3C00) == 0x1000) {
                        } else {
                            t1 = 0xE000;
                            if (((unsigned short)t0 & 0x3C00) == 0x1800) {
                            } else {
                                t1 = 0xA000;
                                if (((unsigned short)t0 & 0x3C00) == 0x800) {
                                    t1 = 0xC000;
                                }
                            }
                        }
                    }
                }
            }
        }
        t0 = t1;
        if (((((struct o42A_short *)(a4))->v)) != 0) {
            t0 = (unsigned short)((((struct o428_short *)(a4))->v));
        }
        t1 = t0;
    } else {
        t1 = ((-(*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8)))) + (*(int *)((a4 + 0x38))));
    }
    return t1;
}

int FUN_0c07ebb0(int a4)
{
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o37A4_float *)(a4))->v)));
    (((struct o37A4_float *)(a4))->v) = (((((struct o37A4_float *)(a4))->v)) + ((((struct o37A0_float *)(a4))->v)));
    return 0x37A4;
}

int FUN_0c07ebd0(int a4)
{
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07ebe6(int a4)
{
    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x100) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07ec9a(int a4)
{
    register int t0;
    register int t2;
    register float t1;

    t0 = FUN_0c064ee4(a4, 0x2);
    t2 = t0;
    if (t0 != 0) {
        t1 = FUN_0c064d9c(t0);
        (((struct o37B4_float *)(a4))->v) = (t1 + -1.0f);
        (((struct o2C_float *)(a4))->v) = (t1 + -1.0f);
        t2 = 0x2C;
    }
    return t2;
}


int FUN_0c07ef30(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    int t7;
    register int t15;
    register int t16;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    int t13;
    register int t22;
    int t23;

    t0 = (((struct o430_short *)(a4))->v);
    t1 = *(signed char *)((a4 + 0x3716));
    t7 = 0x200;
    if (((t1 != 5) && (t1 != 6)) || (((t2 = *(signed char *)((a4 + 0x3715)), t2 != 0) && (t3 = *(signed char *)((a4 + 0x3715)), t3 != 1)) || ((t4 = *(signed char *)((a4 + 0x38DD)), t4 == 0) || (t5 = *(signed char *)((a4 + 0x38DD)), (int)t5 >= (int)0x6)))) {
        t7 = ((unsigned short)t0 & 0x200);
    }
    if ((t7 & 0x200) != 0) {
        if (((*(signed char *)((a4 + 0x3732))) == 0) && (t13 = *(signed char *)((a6 + 0x0)), t13 == 0)) {
            t15 = *(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC259414));
            t16 = 0x0;
            for (;;) {
                if ((*(signed char *)((t15 + (((signed char)t16 << 2) << 2)))) == 99) {
                    return 0x0;
                }
                if (((*(signed char *)((((((signed char)t16 << 2) << 2) + t15) + 0x0))) == 0) && ((t22 = *(int *)((((((signed char)t16 << 2) << 2) + t15) + 0x8)), t22 == 0) && (t23 = *(int *)((((((signed char)t16 << 2) << 2) + t15) + 0x4)), ((t23 & t7) & 0x200) != 0))) {
                    break;
                }
                t16 = (t16 + 0x1);
            }
            *(unsigned char *)((a5 + 0x0)) = t16;
        }
        (((struct o3731_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07efee(int a4, int a5)
{
    register int t4;
    register int t6;
    int t7;

    t4 = *(int *)((0xC259414 + ((*(signed char *)((a4 + 0x2))) << 2)));
    if (((*(signed char *)((((((signed char)a5 << 2) << 2) + t4) + 0x0))) != 99) && ((t6 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x8)), t6 == 0) && (t7 = *(int *)((((((signed char)a5 << 2) << 2) + t4) + 0x4)), ((((((unsigned short)((((struct o430_short *)(a4))->v)) | (unsigned short)((((struct o3834_short *)(a4))->v))) | ((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x3C00)) & 0x3E00) & t7) & 0x200) != 0))) {
        (((struct o3731_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07f096(int a4)
{
    int t1;
    int t11;

    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) && (t1 = (((struct o42C_short *)(a4))->v), ((unsigned short)t1 & 0x100) != 0)) {
        return 0x2;
    }
    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & 128) != 0) && (t11 = (((struct o42C_short *)(a4))->v), ((unsigned short)t11 & 0x100) != 0)) {
        return 0x3;
    }
    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07f0fc(int a4)
{
    register int t0;

    t0 = (((struct o430_short *)(a4))->v);
    if (((0x80 & (unsigned short)t0) != 0) && ((0x200 & (unsigned short)t0) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07f118(int a4)
{
    register int t0;
    int t1;
    register int t3;
    register int t4;

    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t1 = FUN_0c07f096(a4);
        t0 = 0x0;
        if ((t1 != 0) && (t1 != 1)) {
            t3 = FUN_0c07ecc6(a4, 0x0, 0x0);
            t4 = t1;
            if (t3 == 0) {
                t4 = (t1 + 0x3);
            }
            (((struct o375A_uchar *)(a4))->v) = (t4 - 1);
            t1 = 0x2;
            if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                t1 = 0x0;
            }
            (((struct o3731_uchar *)(a4))->v) = t1;
            t0 = 0x1;
        }
    }
    return t0;
}

int FUN_0c07f172(int a4)
{
    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 128) != 0) {
        (((struct o3731_uchar *)(a4))->v) = 0x2;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07f18c(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    R4 = a4;
    *(unsigned char *)(((int)stk + 4)) = 0x0;
    *(unsigned char *)(((int)stk + 0)) = 0x0;
    (((struct o375A_uchar *)(R4))->v) = 0x63;
    v0_2 = (unsigned char)(*(signed char *)((R4 + 0x3721))) != 41;
    v0_1 = (0x0);
    v0_0 = (R4);
    R4 = (0x80);
    if (v0_2) goto L_C07F1FC;
    if (((int)((((struct o383A_short *)(v0_0))->v)) <= 0)) goto L_C07F1C8;
    if ((((unsigned short)((((struct o432_short *)(v0_0))->v)) & 0x200) != 0)) goto L_C07F222;
    L_C07F1C8:;
    if (((int)((((struct o383C_short *)(v0_0))->v)) <= 0)) goto L_C07F1DA;
    if ((((unsigned short)((((struct o432_short *)(v0_0))->v)) & R4) != 0)) goto L_C07F282;
    L_C07F1DA:;
    v0_1 = (FUN_0c07f0fc(v0_0)) != 0;
    if (!(v0_1)) goto L_C07F304;
    goto L_C07F282;
    L_C07F304:;
    v0_1 = (0x0);
    L_C07F306:;
    return v0_1;
    L_C07F282:;
    (((struct o3731_uchar *)(v0_0))->v) = 0x2;
    L_C07F300:;
    v0_1 = (0x1);
    goto L_C07F306;
    L_C07F222:;
    (((struct o3731_uchar *)(v0_0))->v) = v0_1;
    goto L_C07F300;
    L_C07F1FC:;
    if (((*(signed char *)((v0_0 + 0x371C))) == 0)) goto L_C07F24A;
    v0_3 = FUN_0c07f096(v0_0);
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C07F228;
    v0_3 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) != 0;
    if (v0_3) goto L_C07F21C;
    v0_2 = ((v0_2 + 0x3));
    L_C07F21C:;
    (((struct o375A_uchar *)(v0_0))->v) = (v0_2 - 1);
    goto L_C07F222;
    L_C07F228:;
    v0_2 = (FUN_0c07f172(v0_0)) == 0;
    if (v0_2) goto L_C07F304;
    v0_2 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_2) goto L_C07F242;
    (((struct o375A_uchar *)(v0_0))->v) = v0_1;
    goto L_C07F282;
    L_C07F242:;
    (((struct o375A_uchar *)(v0_0))->v) = 0x3;
    goto L_C07F282;
    L_C07F24A:;
    if ((((unsigned short)((((struct o430_short *)(v0_0))->v)) & R4) != 0)) goto L_C07F282;
    if (((*(signed char *)((v0_0 + 0x3716))) == 5)) goto L_C07F264;
    if (((*(signed char *)((v0_0 + 0x3716))) != 6)) goto L_C07F28A;
    L_C07F264:;
    v0_1 = (0x38DE);
    if (((*(signed char *)((v0_0 + 0x38DE))) == 0)) goto L_C07F28A;
    if (((int)(*(signed char *)((v0_0 + v0_1))) >= (int)0x6)) goto L_C07F28A;
    v0_1 = (0x3715);
    if (((*(signed char *)((v0_0 + 0x3715))) == 0)) goto L_C07F282;
    if (((*(signed char *)((v0_0 + v0_1))) != 1)) goto L_C07F28A;
    goto L_C07F282;
    L_C07F28A:;
    if (((*(signed char *)((v0_0 + 0x3715))) != 5)) goto L_C07F2E2;
    v0_1 = (0x3721);
    if (((*(signed char *)((v0_0 + 0x3721))) == 0)) goto L_C07F2CC;
    if ((!((((((struct o168_float *)(v0_0))->v)) + (*(float *)((((unsigned char)(*(signed char *)((v0_0 + v0_1))) << 2) + 0xC25C7A4)))) > ((((struct o2C_float *)(v0_0))->v))))) goto L_C07F2E2;
    goto L_C07F304;
    L_C07F2E2:;
    v0_1 = (signed char)(FUN_0c07ef30(v0_0, (((int)stk + 0) + 0x4), ((int)stk + 0))) == 0;
    if (v0_1) goto L_C07F304;
    (((struct o3733_uchar *)(v0_0))->v) = (*(signed char *)(((int)stk + 4)));
    (((struct o3738_uchar *)(v0_0))->v) = (*(signed char *)(((int)stk + 0)));
    goto L_C07F300;
    L_C07F2CC:;
    if (((((((struct o168_float *)(v0_0))->v)) + (*(float *)((0xC25C764 + ((*(signed char *)((v0_0 + 0x2))) << 2))))) > ((((struct o2C_float *)(v0_0))->v)))) goto L_C07F304;
    goto L_C07F2E2;
}

int FUN_0c07f312(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_3 = a4;
    v0_5 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_1 = (FUN_0c064f80(v0_3)) != 0;
    v0_0 = (v0_3);
    if (v0_1) goto L_C07F330;
    L_C07F556:;
    v0_5 = (0x0);
    L_C07F558:;
    return v0_5;
    L_C07F330:;
    v0_1 = (0xA);
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C07F33C;
    if (((*(signed char *)((v0_0 + 0x3721))) != 0)) goto L_C07F556;
    v0_2 = (((struct o3768_int *)(v0_0))->v);
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C07F556;
    v0_2 = (FUN_0c0c3258(v0_0, v0_5)) == 0;
    if (v0_2) goto L_C07F556;
    (((struct o3717_uchar *)(v0_0))->v) = v0_1;
    (((struct o3718_uchar *)(v0_0))->v) = 0x1;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c085cac))(v0_0, 0xA, 0x1, R7);
    L_C07F552:;
    v0_5 = (0x1);
    goto L_C07F558;
    L_C07F33C:;
    v0_3 = (((struct o3768_int *)(v0_0))->v);
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C07F348;
    goto L_C07F556;
    L_C07F348:;
    v0_3 = (FUN_0c0c30a8(v0_2, 0x0, v0_0)) != 0;
    if (v0_3) goto L_C07F35A;
    goto L_C07F556;
    L_C07F35A:;
    v0_4 = (0x0);
    v0_3 = (0xC2738B8);
    if (((*(signed char *)((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34)))) != 1)) goto L_C07F44E;
    v0_6 = *(signed char *)((v0_2 + 0x41C));
    v0_5 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 == 0xC4)) goto L_C07F3A4;
    if ((v0_5 == 72)) goto L_C07F3E8;
    if ((v0_5 == 70)) goto L_C07F400;
    if ((v0_5 == 71)) goto L_C07F460;
    if ((v0_5 == 0xC7)) goto L_C07F412;
    if ((v0_5 == 0xCC)) goto L_C07F422;
    if ((v0_5 == 0xCA)) goto L_C07F432;
    if (!((v0_5 == 0xCD))) goto L_C07F44E;
    (((struct o3717_uchar *)(v0_0))->v) = 0x2D;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c085cac))(v0_0, 0x2D, 0x0, R7);
    goto L_C07F552;
    L_C07F44E:;
    if (!(((*(signed char *)((v0_3 + ((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34)))) != 2))) goto L_C07F460;
    v0_7 = (0x34);
    if (((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34) + v0_3) + 0x0))) != 0)) goto L_C07F556;
    if (((*(signed char *)((v0_2 + 0x41D))) != 2)) goto L_C07F556;
    v0_8 = *(signed char *)((v0_2 + 0x41C));
    v0_5 = (0xC3);
    v0_6 = ((unsigned char)v0_8);
    R7 = (v0_8);
    if (((unsigned char)v0_8 == 0xC3)) goto L_C07F4B8;
    v0_8 = ((*(short *)((0xC278D18 + ((*(signed char *)(((v0_3 + ((unsigned short)(unsigned char)R7 * (unsigned short)v0_7)) + 0x4))) << 1)))) & ((int)0x1 << (int)(*(signed char *)((v0_0 + 0x2))))) != 0;
    v0_3 = ((v0_3 + ((unsigned short)(unsigned char)R7 * (unsigned short)v0_7)));
    if (v0_8) goto L_C07F4E8;
    goto L_C07F4B8;
    L_C07F460:;
    (((struct o3717_uchar *)(v0_0))->v) = v0_1;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c085cac))(v0_0, 0xA, 0x0, R7);
    goto L_C07F552;
    L_C07F4B8:;
    if ((v0_6 != v0_5)) goto L_C07F50C;
    v0_2 = *(signed char *)((v0_2 + 0x424));
    if ((((*(short *)((((*(signed char *)(((((v0_2 << 2) + v0_2) << 1) + 0xC278842))) << 1) + 0xC278D18))) & ((int)0x1 << (int)(*(signed char *)((v0_0 + 0x2))))) != 0)) goto L_C07F4E8;
    if ((v0_6 != v0_5)) goto L_C07F50C;
    if (((*(signed char *)((v0_0 + 0x371C))) == 0)) goto L_C07F50C;
    L_C07F4E8:;
    (((struct o3717_uchar *)(v0_0))->v) = v0_1;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_6 = (0x0);
    L_C07F518:;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c085cac))(v0_0, 0xA, v0_6, R7);
    goto L_C07F552;
    L_C07F50C:;
    (((struct o3717_uchar *)(v0_0))->v) = v0_1;
    (((struct o3718_uchar *)(v0_0))->v) = 0x2;
    v0_6 = (0x2);
    goto L_C07F518;
    L_C07F432:;
    v0_7 = (0x2B);
    L_C07F3EA:;
    (((struct o3717_uchar *)(v0_0))->v) = v0_7;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_5 = (v0_7);
    v0_6 = (0x0);
    L_C07F3F6:;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c085cac))(v0_0, v0_5, v0_6, R7);
    goto L_C07F552;
    L_C07F422:;
    (((struct o3717_uchar *)(v0_0))->v) = 0x2A;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_5 = (0x2A);
    v0_6 = (0x0);
    goto L_C07F3F6;
    L_C07F412:;
    (((struct o3717_uchar *)(v0_0))->v) = 0x1F;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_5 = (0x1F);
    v0_6 = (0x0);
    goto L_C07F3F6;
    L_C07F400:;
    (((struct o3717_uchar *)(v0_0))->v) = 0x1E;
    (((struct o3718_uchar *)(v0_0))->v) = 0x1;
    v0_5 = (0x1E);
    v0_6 = (0x1);
    goto L_C07F3F6;
    L_C07F3E8:;
    v0_7 = (0x1E);
    goto L_C07F3EA;
    L_C07F3A4:;
    (((struct o3717_uchar *)(v0_0))->v) = 0x12;
    (((struct o3718_uchar *)(v0_0))->v) = v0_4;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c085cac))(v0_0, 0x12, 0x0, R7);
    goto L_C07F552;
}

int FUN_0c07f566(void)
{
    return 0x1;
}

int FUN_0c07f56a(int a4)
{
    register int t0;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t0 = FUN_0c07d15c(a4);
    if (t0 != 0) {
        if ((((*(signed char *)0xC54235E) != 0) && (t2 = *(signed char *)0xC542363, (t0 - 1) == t2)) || ((t3 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x371D)), t3 == 2) || ((t4 = *(signed char *)((a4 + 0x3715)), t5 = (int)(((unsigned int)(t4 << 2)) >> 31), t6 = *(signed char *)(((((t4 << 2) << 1) + 0xC25AA84) + 0x0)), t6 == 0) || ((t7 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x3715)), t8 = (int)(((unsigned int)(t7 << 2)) >> 31), t9 = *(signed char *)(((((t7 << 2) << 1) + 0xC25AA84) + 0x1)), t9 == 0) || ((t10 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x371D)), t10 == 1) || (t11 = *(signed char *)(((((t0 - 1) * 0x3938) + 0xC532498) + 0x3719)), t12 = *(signed char *)((a4 + 0x3719)), t12 == t11)))))) {
            return 0x0;
        }
        return t0;
    }
    return 0x0;
}

int FUN_0c07f610(int a4)
{
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;

    t0 = (((struct o376C_int *)(a4))->v);
    if (t0 != 0) {
        t1 = FUN_0c07d15c(t0);
        if (t1 != 0) {
            if (((*(signed char *)((((((*(signed char *)((a4 + 0x3715))) << 2) << 1) + 0xC25AA84) + 0x0))) != 0) && ((t5 = *(signed char *)(((((t1 - 1) * 0x3938) + 0xC532498) + 0x3715)), t6 = (int)(((unsigned int)(t5 << 2)) >> 31), t7 = *(signed char *)(((((t5 << 2) << 1) + 0xC25AA84) + 0x1)), t7 != 0) && ((t8 = *(signed char *)(((((t1 - 1) * 0x3938) + 0xC532498) + 0x371D)), t8 != 1) && (t9 = *(signed char *)(((((t1 - 1) * 0x3938) + 0xC532498) + 0x3719)), t10 = *(signed char *)((a4 + 0x3719)), t10 != t9)))) {
                return t1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c07f67c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    float u0;
    register float u1;
    register float u2;

    if ((((((struct o3764_int *)(a4))->v)) != 0) && ((t0 = *(signed char *)((a4 + 0x3715)), t1 = (int)(((unsigned int)(t0 << 2)) >> 31), t2 = *(signed char *)(((((t0 << 2) << 1) + 0xC25AA84) + 0x0)), t2 != 0) && ((t3 = (((struct o3764_int *)(a4))->v), t4 = *(signed char *)((t3 + 0x3715)), t5 = (int)(((unsigned int)(t4 << 2)) >> 31), t6 = *(signed char *)(((((t4 << 2) << 1) + 0xC25AA84) + 0x3)), t6 != 0) && ((t7 = (((struct o3764_int *)(a4))->v), t8 = *(signed char *)((0x371D + t7)), t8 != 1) && (u0 = (((struct o3784_float *)(a4))->v), !(u0 > 200.0f)))))) {
        u0 = (((struct o2C_float *)(a4))->v);
        u1 = (((struct o2C_float *)(((((struct o3764_int *)(a4))->v))))->v);
        u2 = (u0 - u1);
        if (0.0f > (u0 - u1)) {
            u2 = ((-u0) + u1);
        }
        if (u2 > 50.0f) {
            return 0x0;
        }
        return 0x1;
    }
    return 0x0;
}



int FUN_0c07fae8(int a4)
{
    int t0;
    register int t1;

    if ((((((struct o3768_int *)(a4))->v)) != 0) && (t0 = (((struct o3768_int *)(a4))->v), t1 = *(signed char *)((t0 + 0x41C)), (unsigned char)t1 == 0xC8)) {
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            if (((((struct o2C_float *)(a4))->v)) > (((((struct o2C_float *)(((((struct o3768_int *)(a4))->v))))->v)) + (*(float *)0xC07FBEC))) {
                t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
                if (t0 != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t0 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c07fb42(int a4)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;

    t5 = FUN_0c064f80(a4);
    if ((t5 != 0) && ((t0 = (((struct o3768_int *)(a4))->v), t0 != 0) && (t1 = (((struct o3768_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x41C)), (unsigned char)t2 == 0xC8))) {
        t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if ((t0 != 0) && (t3 = (((struct o3768_int *)(a4))->v), t4 = *(signed char *)((0x424 + t3)), t4 != 4)) {
            t0 = *(signed char *)((a4 + 0x2));
            if ((t0 != 4) && ((t0 != 5) && ((t0 != 9) && (t0 != 15)))) {
                *(volatile signed char *)((a4 + 0x371C));
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c07fbb8(int a4)
{
    register int t1;
    register int t9;
    register int t10;
    int t11;
    register float u12;
    register float u13;

    t1 = ((((struct o404_int *)(a4))->v));
    for (;;) {
        if (t1 == 0) {
            return 0x0;
        }
        if (((*(int *)((t1 + 0x4))) != 0) && ((t9 = *(int *)((t1 + 0x4)), t10 = *(signed char *)((t9 + 0x0)), t10 == 9) && (t11 = *(int *)((t1 + 0x4)), u12 = (((struct o2C_float *)(a4))->v), u13 = (((struct o2C_float *)(t11))->v), !(u12 > u13)))) {
            break;
        }
        t1 = (*(int *)((t1 + 0x0)));
    }
    return 0x1;
}

int FUN_0c07fdba(int a4)
{
    register int t0;
    register int t1;

    t0 = (((struct o3768_int *)(a4))->v);
    if (t0 != 0) {
        t1 = FUN_0c0c30a8(t0, 0x0, a4);
        if (t1 != 0) {
            if ((*(signed char *)((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((t0 + 0x41C))) * (unsigned short)0x34)))) == 1) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
