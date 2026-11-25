/* game/flow: functions 0C041E4C-0C0433F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o151_uchar { char p[0x151]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_uchar { char p[0x168]; unsigned char v; };
struct o169_uchar { char p[0x169]; unsigned char v; };
struct o16E_uchar { char p[0x16E]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3B_uchar { char p[0x3B]; unsigned char v; };
struct o3E_uchar { char p[0x3E]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
struct o81_uchar { char p[0x81]; unsigned char v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
struct o83_uchar { char p[0x83]; unsigned char v; };
struct o84_uchar { char p[0x84]; unsigned char v; };
struct o85_uchar { char p[0x85]; unsigned char v; };
struct o86_uchar { char p[0x86]; unsigned char v; };
struct o87_uchar { char p[0x87]; unsigned char v; };
struct o88_uchar { char p[0x88]; unsigned char v; };
int FUN_0c035646(void);
int FUN_0c03f0aa(void);
int FUN_0c03fd58(int, int);
int FUN_0c03ffbe(void);
int FUN_0c03fffa(void);
int FUN_0c041b58(int, int);
int FUN_0c042574(void);
int FUN_0c042be0(void);
int FUN_0c0d5188(void);
int FUN_0c0522be(int);
int FUN_0c056ce0(int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059bd6(int);
int FUN_0c05a044(void);
int game_reset_objects(void);
int FUN_0c05b052(int, int);
int FUN_0c05f690(int, int);
int FUN_0c067784(void);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0bb4ac(void);
int FUN_0c0f6b1c(int, int, int);
int FUN_0c121200(float);
int nlRand(void);
int FUN_0c041e4c(void);
int FUN_0c0421a6(void);
int FUN_0c042218(void);
int FUN_0c0423ba(void);
int FUN_0c042456(void);
int FUN_0c042528(void);
int FUN_0c042544(void);
int FUN_0c042740(int a4, int a5, int a6, int a7);
int FUN_0c042800(float f4);
int FUN_0c0429fa(int a4, int a5, int a6, int a7);
int FUN_0c042ae4(void);
int FUN_0c042b68(int a4, int a5, int a6, int a7);
int FUN_0c042e72(void);
int FUN_0c042eae(void);
int FUN_0c042eee(void);
int FUN_0c042f06(void);
int FUN_0c042f9e(int a4, int a5, int a6, int a7);
int FUN_0c042fce(void);
int FUN_0c042fe0(void);
int FUN_0c042ff8(void);
int FUN_0c043010(void);
int FUN_0c043064(void);
int FUN_0c04307c(void);
int FUN_0c04309a(int a4);
int FUN_0c0430c0(void);
int FUN_0c04331a(void);
int FUN_0c043326(void);
int FUN_0c043350(void);
int FUN_0c0433b0(void);
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };



int FUN_0c0421a6(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)0xC542361) != 0) {
        t0 = FUN_0c03ffbe();
        t1 = t0;
        if (t0 == 0) {
        } else {
            *(unsigned int *)0xC542208 = 0x1;
            t1 = (FUN_0c05a044());
        }
        t0 = t1;
    } else {
        t1 = FUN_0c03fffa();
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)0xC542208 = 0x1;
            t2 = (FUN_0c05a044());
        }
        t0 = t2;
    }
    t1 = *(int *)0xC542208;
    *(unsigned int *)0xC542208 = (t1 - 1);
    t2 = t0;
    if ((int)(t1 - 1) <= 0) {
        t0 = *(signed char *)0xC5421FA;
        (((struct o0_uchar *)0xC5421FA)->v) = (t0 + 0x1);
        t2 = (t0 + 0x1);
    }
    return t2;
}

int FUN_0c042218(void)
{
    int t24;
    int t86;
    int t9;
    int t10;
    int t4;
    int t25;
    int t1;
    int t29;
    int t8;
    int t11;
    int t0;
    int t5;
    int t3;
    int t2;

    t0 = *(int *)0xC542A10;
    t1 = *(signed char *)0xC542B8C;
    t2 = *(signed char *)0xC542B8A;
    t3 = *(signed char *)0xC542B8B;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t8 = (((int)0x1 << (int)t4) & t0) != 0;
        t4 = (t4 + 0x1);
        if (t8) {
            t5 = (t5 + 0x1);
        }
        if ((int)t4 >= (int)0x10) {
            break;
        }
    }
    t86 = 0x1C3;
    if ((int)t5 >= (int)0xC) {
    } else {
        t9 = 0x1C3;
        t10 = 0x0;
        for (;;) {
            if ((((int)0x1 << (int)t10) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                t11 = ((t10 * 0x3938) + 0xC532498);
                t9 = (*(signed char *)(t11 + 0x2));
                if ((t9 != 12) && (t9 != 13)) {
                    t9 = (*(signed char *)(t11 + 0x2));
                    *(unsigned int *)0xC542A10 = ((*(int *)0xC542A10) | ((int)0x1 << (int)t9));
                }
            }
            t10 = (t10 + 0x1);
            if ((int)t10 >= (int)0x4) {
                break;
            }
        }
        t24 = 0x0;
        t25 = 0x0;
        for (;;) {
            t29 = (((int)0x1 << (int)t25) & (*(int *)0xC542A10)) != 0;
            t25 = (t25 + 0x1);
            if (t29) {
                t24 = (t24 + 0x1);
            }
            if ((int)t25 >= (int)0x10) {
                break;
            }
        }
        (((struct o2_uchar *)0xC542B8A)->v) = 0x1;
        if ((int)t24 >= (int)0x1) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x2;
        }
        if ((int)t24 >= (int)0x2) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x3;
        }
        if ((int)t24 >= (int)0x3) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x4;
        }
        if ((int)t24 >= (int)0x4) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x5;
        }
        if ((int)t24 >= (int)0x5) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x6;
        }
        if ((int)t24 >= (int)0x6) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x7;
        }
        if ((int)t24 >= (int)0x7) {
            (((struct o2_uchar *)0xC542B8A)->v) = 0x8;
        }
        if ((int)t24 >= (int)0x8) {
            (((struct o0_uchar *)0xC542B8A)->v) = 0x1;
        }
        if ((int)t24 >= (int)0x9) {
            (((struct o0_uchar *)0xC542B8A)->v) = 0x2;
        }
        if ((int)t24 >= (int)0x7) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x1;
        }
        if ((int)t24 >= (int)0x8) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x2;
        }
        if ((int)t24 >= (int)0x9) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x3;
        }
        if ((int)t24 >= (int)0xA) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x4;
        }
        if ((int)t24 >= (int)0xB) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x5;
        }
        if ((int)t24 >= (int)0xC) {
            (((struct o1_uchar *)0xC542B8A)->v) = 0x6;
        }
        if ((int)t1 > (int)(*(signed char *)0xC542B8C)) {
            (((struct o2_uchar *)0xC542B8A)->v) = t1;
        }
        if ((int)t2 > (int)(*(signed char *)0xC542B8A)) {
            (((struct o0_uchar *)0xC542B8A)->v) = t2;
        }
        *(unsigned char *)0xC5429B2 = (*(signed char *)0xC542B8A);
        if ((int)t3 > (int)(*(signed char *)0xC542B8B)) {
            (((struct o1_uchar *)0xC542B8A)->v) = t3;
        }
        if (t0 == (*(int *)0xC542A10)) {
            if (t1 == (*(signed char *)0xC542B8C)) {
                if (t2 == (*(signed char *)0xC542B8A)) {
                    if (t3 != (*(signed char *)0xC542B8B)) {
                        *(unsigned char *)0xC54232B = 0x1;
                    }
                    t86 = 0x1C3;
                } else {
                    *(unsigned char *)0xC54232B = 0x1;
                    t86 = 0x1C2;
                }
            } else {
                *(unsigned char *)0xC54232B = 0x1;
                t86 = 0x1C4;
            }
        } else {
            *(unsigned char *)0xC54232B = 0x1;
            t86 = 0x48;
        }
    }
    return t86;
}

int FUN_0c0423ba(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0d5188();
    t1 = 0x8;
    if (t0 != 0) {
        t1 = 0xA;
    }
    (((struct o0_uchar *)0xC5421F9)->v) = t1;
    (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
    return 0x0;
}

int FUN_0c042456(void)
{
    int t0;

    if (((*(signed char *)0xC5429B1) == 0) && (t0 = *(signed char *)0xC3BD447, t0 != 0)) {
        if ((*(signed char *)0xC5421E1) != 0) {
            if ((*(signed char *)0xC542361) == 0) {
                if ((*(signed char *)0xC542236) != 3) {
                    (((struct o0_uchar *)0xC5421F9)->v) = 0x6;
                } else {
                    (((struct o0_uchar *)0xC541F41)->v) = 0x7;
                    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                    *(unsigned char *)0xC542264 = 0x1;
                }
            } else {
                (((struct o0_uchar *)0xC5421F9)->v) = 0x6;
            }
        } else {
            if ((*(signed char *)0xC54235E) == 2) {
                t0 = FUN_0c0d5188();
                if (t0 != 0) {
                    (((struct o0_uchar *)0xC5421F9)->v) = 0xA;
                    (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
                    (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
                } else {
                    FUN_0c042218();
                    (((struct o0_uchar *)0xC541F41)->v) = 0x7;
                    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                    *(unsigned char *)0xC542264 = 0x1;
                }
            } else {
                (((struct o0_uchar *)0xC5421F9)->v) = 0x6;
            }
        }
    } else {
        (((struct o0_uchar *)0xC5421F9)->v) = 0x7;
    }
    (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
    (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
    return 0x0;
}

int FUN_0c042528(void)
{
    register int t0;

    t0 = *(signed char *)0xC5421FA;
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(void))(0xC0424E4))();
        }
        return FUN_0c0421a6();
    }
    return ((int (*)(void))(0xC041F28))();
}

int FUN_0c042544(void)
{
    int stk[3];
    register int t1;
    register int t3;

    FUN_0c0430c0();
    t1 = FUN_0c03fd58(0x0, ((int)stk + 0));
    t3 = FUN_0c0f6b1c((*(signed char *)0xC542360), t1, ((int)stk + 0));
    (((struct o0_uint *)0xC40DC58)->v) = t3;
    (((struct o4_uint *)0xC40DC58)->v) = 0x0;
    return t3;
}

int FUN_0c042740(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if ((*(signed char *)0xC5421FB) == 0) {
        t0 = *(signed char *)0xC5421FB;
        (((struct o1_uchar *)0xC5421FA)->v) = (t0 + 0x1);
        t1 = (t0 + 0x1);
        t0 = 0xC532498;
        t2 = 0xC532498;
        t3 = 0xC532498;
        t4 = 0xC532498;
        for (;;) {
            if ((*(signed char *)((t4 + 0x3714))) != 0) {
                t1 = 0xC085CAC;
                t2 = 0x0;
                t0 = t3;
                FUN_0c085cac(t0, t2, 0x0, a7);
            } else {
                t5 = t1;
                t6 = t0;
                t7 = t2;
            }
            t4 = (t4 + 0x3938);
            t1 = t5;
            t0 = t6;
            t2 = t7;
            t3 = (t3 + 0x3938);
            if ((unsigned int)t4 >= (unsigned int)0xC540978) {
                break;
            }
        }
        FUN_0c0522be((*(int *)0xC241BC8));
        (((struct o3B_uchar *)0xC5421FA)->v) = 0x2;
        if ((*(signed char *)0xC542361) != 0) {
            FUN_0c042544();
        } else {
            FUN_0c042574();
        }
        FUN_0c035646();
        *(unsigned char *)0xC40F828 = 0x0;
        t0 = 0x0;
        for (;;) {
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                *(unsigned char *)0xC40F828 = ((*(signed char *)0xC40F828) | ((int)0x1 << (int)t0));
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        t0 = 0x3714;
    } else {
        (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
        (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c042800(float f4)
{

    int v0_0;
    int v0_2;
    int v0_5;
    int v0_1;
    int v0_4;
    int v0_3;
    int v0_6;
    float F8;
    int T_;
    int R3;
    int R2;
    int R1;
    int v0_9;
    int v0_10;
    int v0_11;
    int v0_8;
    int v0_7;
    v0_2 = *(signed char *)0xC5421FB;
    v0_5 = (v0_2);
    v0_1 = (0x0);
    v0_0 = (0xC5421F8);
    v0_4 = (0xC40DC58);
    if ((v0_2 == 0)) goto L_C042850;
    if ((v0_5 == 1)) goto L_C04285E;
    (((struct o2_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x2)) + 0x1);
    (((struct o3_uchar *)(v0_0))->v) = v0_1;
    if (((*(signed char *)(v0_0 + 0x169)) != 0)) goto L_C0429E2;
    (((struct o3E_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x3E)) + 0x1);
    v0_5 = (0x3E);
    v0_4 = (0x4);
    if (((int)(*(signed char *)(v0_0 + 0x3E)) >= 0)) goto L_C04295E;
    *(unsigned char *)((v0_0 + v0_5)) = v0_1;
    L_C04295E:;
    if (((int)(*(signed char *)((v0_0 + v0_5))) <= (int)v0_4)) goto L_C042966;
    *(unsigned char *)((v0_0 + v0_5)) = v0_4;
    L_C042966:;
    (((struct o16E_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x16E)) | ((int)(*(signed char *)(((0x151 + v0_0) + 0x0))) << (int)(*(signed char *)(((0x3E + v0_0) + 0x0)))));
    v0_5 = (0x3938);
    v0_6 = (0x98);
    v0_2 = (0xC541CDC);
    v0_3 = (v0_1);
    v0_7 = (0xC532498);
    v0_8 = (0xC541CDC);
    v0_9 = (0xFFFFFFFF);
    L_C0429DE:;
    if (!(((int)v0_3 < (int)v0_4))) goto L_C0429E2;
    if (((*(signed char *)(((v0_3 * v0_5) + 0xC535BAC))) == 0)) goto L_C0429CA;
    (((struct o56_uchar *)(v0_2))->v) = (*(signed char *)(v0_0 + 0x3E));
    (((struct o80_uchar *)(v0_2))->v) = (*(signed char *)(v0_0 + 0x167));
    v0_10 = *(signed char *)(v0_0 + 0x3E);
    v0_11 = *(signed char *)(v0_0 + 0x168);
    (((struct o81_uchar *)(v0_2))->v) = v0_11;
    *(unsigned char *)(((v0_10 + (0x84 + v0_2)) + 0x0)) = v0_11;
    (((struct o83_uchar *)(v0_2))->v) = (*(signed char *)(v0_0 + 0x16E));
    goto L_C0429D6;
    L_C0429E2:;
    (((struct o169_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (0x169);
    L_C0429E6:;
    return v0_5;
    L_C0429D6:;
    v0_2 = ((v0_2 + v0_6));
    v0_3 = (v0_3 + 0x1);
    v0_7 = ((v0_7 + v0_5));
    v0_8 = ((v0_8 + v0_6));
    goto L_C0429DE;
    L_C0429CA:;
    if (((*(signed char *)(v0_7 + 0x3720)) == 0)) goto L_C0429D6;
    (((struct o82_uchar *)(v0_8))->v) = v0_9;
    goto L_C0429D6;
    L_C04285E:;
    (((struct o10_uint *)(v0_0))->v) = (((((struct o10_int *)(v0_0))->v)) - 1);
    v0_2 = (v0_4);
    if ((((((struct o4_int *)(v0_4))->v)) != 0)) goto L_C042894;
    v0_2 = *(signed char *)((0x14 + (*(int *)(v0_2))));
    v0_5 = (v0_2);
    if ((v0_2 == 2)) goto L_C042882;
    if (((int)(*(int *)0xC542208) <= 0)) goto L_C042882;
    goto L_C0429E6;
    L_C042882:;
    (((struct o3_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x3)) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = v0_1;
    v0_5 = ((*(signed char *)(((*(int *)(v0_4)) + 0x2))));
    L_C0428C8:;
    (((struct o168_uchar *)(v0_0))->v) = v0_5;
    goto L_C0429E6;
    L_C042894:;
    v0_3 = (0x3);
    if (((*(signed char *)((0x14 + (*(int *)(v0_2))))) != 2)) goto L_C0428D0;
    if (((*(signed char *)((0x14 + ((((struct o4_int *)(v0_2))->v))))) == 2)) goto L_C0428B4;
    if (((*(signed char *)((0x14 + (*(int *)(v0_2))))) != 2)) goto L_C0428D0;
    L_C0428B4:;
    (((struct o14_uchar *)(((((struct o4_int *)(v0_2))->v))))->v) = v0_3;
    (((struct o3_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x3)) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = v0_1;
    v0_5 = ((*(signed char *)(((*(int *)(v0_4)) + 0x2))));
    goto L_C0428C8;
    L_C0428D0:;
    v0_6 = *(signed char *)((0x14 + ((((struct o4_int *)(v0_2))->v))));
    v0_5 = (v0_6);
    if ((v0_6 != 2)) goto L_C0428FA;
    (((struct o14_uchar *)((*(int *)(v0_2))))->v) = v0_3;
    (((struct o3_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x3)) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = 0x1;
    v0_1 = *(signed char *)((((((struct o4_int *)(v0_4))->v)) + 0x2));
    (((struct o168_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (v0_1);
    goto L_C0429E6;
    L_C0428FA:;
    if (((int)((((struct o10_int *)(v0_0))->v)) > 0)) goto L_C0429E6;
    (((struct o14_uchar *)((*(int *)(v0_2))))->v) = 0x2;
    (((struct o14_uchar *)(((((struct o4_int *)(v0_4))->v))))->v) = v0_3;
    (((struct o3_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x3)) + 0x1);
    (((struct o151_uchar *)(v0_0))->v) = v0_1;
    v0_1 = *(signed char *)(((*(int *)(v0_2)) + 0x2));
    (((struct o168_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (v0_1);
    goto L_C0429E6;
    L_C042850:;
    (((struct o3_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x3)) + 0x1);
    (((struct o10_uint *)(v0_0))->v) = 0x258;
    FUN_0c121200(f4);
    goto L_C04285E;
}

int FUN_0c0429fa(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    t0 = *(signed char *)0xC5421FB;
    switch (t0) {
    case 0:
        (((struct o3_uchar *)0xC5421F8)->v) = ((*(signed char *)0xC5421FB) + 0x1);
        (((struct o10_uint *)0xC5421F8)->v) = 0x3C;
        t0 = FUN_0c03ffbe();
        if (t0 != 0) {
            (((struct o10_uint *)0xC5421F8)->v) = 0x1;
        }
        break;
    case 1:
        t0 = FUN_0c03ffbe();
        if (t0 != 0) {
            (((struct o10_uint *)0xC5421F8)->v) = 0x1;
        }
        break;
    case 2:
        (((struct o3_uchar *)0xC5421F8)->v) = ((*(signed char *)0xC5421FB) + 0x1);
        t0 = *(int *)((((*(signed char *)0xC542349) << 2) + 0xC40DC58));
        FUN_0c056ce0((t0 + 0x28), ((((struct o38_int *)(t0))->v)));
        (((struct o10_uint *)0xC5421F8)->v) = 0x21;
        *(unsigned char *)0xC542254 = 0x1;
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
        t0 = FUN_0c05b052(0x1E, 0x0);
        break;
    case 3:
        break;
    default:
        if ((*(signed char *)0xC5429B4) == 2) {
            (((struct o0_uchar *)0xC541F41)->v) = 0xA;
        } else {
            (((struct o0_uchar *)0xC541F41)->v) = 0x4;
        }
        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
        (((struct o0_uchar *)0xC5421F8)->v) = 0x0;
        (((struct o1_uchar *)0xC5421F8)->v) = 0x0;
        return FUN_0c0bb4ac();
    }
    t1 = (((struct o10_int *)0xC5421F8)->v);
    (((struct o10_uint *)0xC5421F8)->v) = (t1 - 1);
    t2 = t0;
    if ((int)(t1 - 1) <= 0) {
        t0 = *(signed char *)0xC5421FB;
        (((struct o3_uchar *)0xC5421F8)->v) = (t0 + 0x1);
        t2 = (t0 + 0x1);
    }
    return t2;
}

int FUN_0c042ae4(void)
{
    register float u0;
    register int t1;
    register int t2;
    register int t4;

    u0 = *(float *)0xC042B5C;
    t1 = 0xC532498;
    t2 = 0xC532498;
    for (;;) {
        t4 = 0x3714;
        if ((*(signed char *)((t1 + 0x3714))) != 0) {
            (((struct o160_float *)(t2))->v) = u0;
            t4 = 0x160;
        }
        t1 = (t1 + 0x3938);
        t2 = (t2 + 0x3938);
        if ((unsigned int)t1 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t4;
}

int FUN_0c042b68(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((((~(*(signed char *)0xC542239)) & (*(int *)0xC40DC50)) & ((int)0x1 << (int)t1)) != 0) {
            (((struct o3714_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x1;
            FUN_0c085cac(((t1 * 0x3938) + 0xC532498), 0x14, 0x2, a7);
            t0 = (t0 + 0x1);
        } else {
            (((struct o3756_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x1;
            (((struct o3714_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x0;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    FUN_0c067784();
    return FUN_0c041b58(t0, (*(int *)0xC40DC50));
}

int FUN_0c042e72(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5421FA;
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = FUN_0c0d5188();
            t1 = 0x63;
            if (t0 != 0) {
                t1 = 0xA;
            }
            (((struct o0_uchar *)0xC5421F9)->v) = t1;
            (((struct o1_uchar *)0xC5421F9)->v) = 0x0;
            (((struct o2_uchar *)0xC5421F9)->v) = 0x0;
            (((struct o3_uchar *)0xC5421F9)->v) = 0x0;
            return 0x0;
        }
        return ((int (*)(void))(0xC042D1A))();
    }
    FUN_0c042be0();
    return ((int (*)(void))(0xC042D1A))();
}

int FUN_0c042eae(void)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)0xC5421FA;
    t2 = t0;
    if (t0 == 0) {
        (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
        *(unsigned int *)0xC54220C = 0x21;
        t2 = (FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E));
    }
    t0 = *(int *)0xC54220C;
    *(unsigned int *)0xC54220C = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        t2 = 0x0;
    }
    return t2;
}

int FUN_0c042eee(void)
{
    FUN_0c059bd6(0x2);
    FUN_0c05f690(0x0, (*(int *)0xC40DC50));
    return game_reset_objects();
}

int FUN_0c042f06(void)
{
    (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
    (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
    *(unsigned int *)0xC54220C = 0x0;
    return 0x0;
}

int FUN_0c042f9e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC5421FA;
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o0_uchar *)0xC541F41)->v) = 0xB;
            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
            (((struct o3_uchar *)0xC541F41)->v) = 0x0;
            (((struct o0_uchar *)0xC5421F8)->v) = 0x0;
            (((struct o1_uchar *)0xC5421F8)->v) = 0x0;
            return 0x0;
        }
        return ((int (*)(int, int, int, int))(0xC042F16))(a4, a5, 0xC5421F8, a7);
    }
    FUN_0c042f06();
    return ((int (*)(void))(0xC042F16))();
}

int FUN_0c042fce(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = 0x6;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    (((struct o0_uchar *)0xC5421F8)->v) = 0x0;
    (((struct o1_uchar *)0xC5421F8)->v) = 0x0;
    return 0x0;
}

int FUN_0c042fe0(void)
{
    int t1;

    if (((*(signed char *)0xC5421F8) == 1) && (t1 = *(signed char *)0xC5421F9, t1 == 3)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c042ff8(void)
{
    int t1;

    if (((*(signed char *)0xC5421F8) == 1) && (t1 = *(signed char *)0xC5421F9, t1 == 4)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c043010(void)
{
    register int t1;
    register int t2;
    int t3;

    if (((*(signed char *)0xC5421F8) == 1) && ((t1 = *(signed char *)0xC5421F9, t1 == 3) && ((t2 = *(signed char *)0xC5421FA, (int)t2 >= (int)0x2) && (t3 = *(signed char *)0xC5421FA, (int)t3 <= (int)0x3)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c043064(void)
{
    int t1;

    if (((*(signed char *)0xC5421F8) == 1) && (t1 = *(signed char *)0xC5421F9, t1 == 6)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c04307c(void)
{
    register int t1;
    int t2;

    if (((*(signed char *)0xC5421F8) == 1) && ((t1 = *(signed char *)0xC5421F9, t1 == 3) && (t2 = *(signed char *)0xC5421FA, t2 == 99))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c04309a(int a4)
{
    (((struct o56_uchar *)((((short)(signed char)a4 * (short)0x98) + 0xC541CDC)))->v) = 0xFFFFFFFF;
    *(unsigned char *)(((0x84 + (((short)(signed char)a4 * (short)0x98) + 0xC541CDC)) + 0x4)) = 0xFFFFFFFF;
    *(unsigned char *)(((0x84 + (((short)(signed char)a4 * (short)0x98) + 0xC541CDC)) + 0x3)) = 0xFFFFFFFF;
    *(unsigned char *)(((0x84 + (((short)(signed char)a4 * (short)0x98) + 0xC541CDC)) + 0x2)) = 0xFFFFFFFF;
    *(unsigned char *)(((0x84 + (((short)(signed char)a4 * (short)0x98) + 0xC541CDC)) + 0x1)) = 0xFFFFFFFF;
    (((struct o84_uchar *)((((short)(signed char)a4 * (short)0x98) + 0xC541CDC)))->v) = 0xFFFFFFFF;
    return 0xFFFFFFFF;
}


int FUN_0c04331a(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o1_uchar *)0xC541F41)->v) = 0x0;
    return 0x0;
}

int FUN_0c043326(void)
{
    *(unsigned char *)0xC5421F8 = 0x0;
    *(unsigned char *)0xC3BD447 = (*(signed char *)0xC40DC50);
    FUN_0c06780e((*(int *)0xC40DC54));
    FUN_0c06785c();
    return FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1);
}

int FUN_0c043350(void)
{
    *(unsigned char *)0xC5421F8 = 0x0;
    (((struct o2_uchar *)0xC3BD445)->v) = (*(signed char *)0xC40DC50);
    (((struct o0_uchar *)0xC3BD445)->v) = 0x0;
    FUN_0c06780e((*(int *)0xC40DC54));
    FUN_0c06785c();
    return FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1);
}

int FUN_0c0433b0(void)
{
    *(unsigned char *)0xC5421F8 = 0x0;
    (((struct o2_uchar *)0xC3BD445)->v) = (*(signed char *)0xC3BD445);
    (((struct o0_uchar *)0xC3BD445)->v) = 0x0;
    (((struct o3_uchar *)0xC3BD445)->v) = 0x0;
    FUN_0c06780e((*(int *)0xC40DC54));
    FUN_0c06785c();
    return FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1);
}
