/* game/stage: functions 0C0E91A0-0C0EA276, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03ea04(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c052c00(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d04b4(int);
int FUN_0c0e9220(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int FUN_0c0e91a0(int a4, int a5, int a6);
int FUN_0c0e9246(void);
int FUN_0c0e92f8(int a4);
int FUN_0c0e9338(void);
int FUN_0c0e9348(int a4);
int FUN_0c0e9378(void);
int FUN_0c0e9398(int a4);
int FUN_0c0e956e(void);
void FUN_0c0e99c8(void);
int FUN_0c0e99e4(int a4);
int FUN_0c0e9a32(int a4, int a5, int a6, int a7);
int FUN_0c0e9a88(int a4, int a5, float f4);
int FUN_0c0e9ada(int a4, int a5, int a6, float f4);

int FUN_0c0e91a0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        FUN_0c187798(t0, a5, a6);
        if ((*(int *)0xC540D94) != 0) {
            t5 = 0x6F0;
            t5 = (t5 + 0xC540978);
            t5 = (t5 + t2);
            t0 = t5;
            t4 = (FUN_0c17c130(t0, t5, ((*(int *)0xC540D94) + 0x28)));
        } else {
            t0 = 0x6F0;
            t0 = (t0 + 0xC540978);
            t0 = (t0 + t1);
            (((struct o8_float *)(t0))->v) = 0.0f;
            (((struct o4_float *)(t0))->v) = 0.0f;
            *(float *)((t0 + 0x0)) = 0.0f;
            t4 = 0x4;
            t5 = t0;
        }
        t3 = (t3 + 0xC);
        t0 = t5;
        t1 = (t1 + 0xC);
        t2 = (t2 + 0xC);
        if ((unsigned int)t3 >= (unsigned int)0x30) {
            break;
        }
    }
    return t4;
}

int FUN_0c0e9246(void)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register int t10;
    register int t11;
    register int t13;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((int)stk + 0) + (t0 << 2))) = t0;
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t2 = 0xA;
    for (;;) {
        t3 = FUN_0c179ac0();
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        t6 = FUN_0c179ac0();
        t7 = ((~(((~t6) + 0x1) & 0x3)) + 0x1);
        if ((int)t6 >= 0) {
            t7 = (t6 & 0x3);
        }
        t10 = *(int *)((((t4 << 2) + ((int)stk + 0)) + 0x0));
        t2 = (t2 - 0x1);
        *(unsigned int *)((((t4 << 2) + ((int)stk + 0)) + 0x0)) = (*(int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)));
        *(unsigned int *)((((t7 << 2) + ((int)stk + 0)) + 0x0)) = t10;
        if (t2 == 0) {
            break;
        }
    }
    t11 = 0x0;
    for (;;) {
        t13 = FUN_0c0e9220((*(int *)((((int)stk + 0) + (t11 << 2)))), t11, t7);
        t11 = (t11 + 0x1);
        if ((int)t11 >= (int)0x4) {
            break;
        }
    }
    return t13;
}

int FUN_0c0e92f8(int a4)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC54223C = a4;
    *(unsigned short *)0xC540996 = 0x0;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t0 << 2) << 1) + t0) << 2) + 0xC286D34) + (((t1 << 1) + t1) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0e9338(void)
{
    register int t0;

    t0 = *(signed char *)0xC54223C;
    if (t0 == 0) {
        return FUN_0c0e9246();
    }
    return t0;
}

int FUN_0c0e9348(int a4)
{
    *(volatile signed char *)0xC54223C;
    
    return (FUN_0c052c00(0x2000, 0x1000, a4));
}

int FUN_0c0e9378(void)
{
    if ((*(signed char *)0xC54223C) != 0) {
        
    } else {
        thunk_FUN_0c05abb2(0x59, 0x0);
    }
    return FUN_0c0e9348(0xA);
}

int FUN_0c0e9398(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        t0 = 0x0;
                        if (a4 == 5) {
                            *(unsigned short *)0xC540996 = 0x0;
                            t1 = FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)));
                            *(unsigned short *)0xC540996 = 0x0;
                            t2 = FUN_0c0cfecc(((((struct o20_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o24_int *)0xC1CCBD0)->v)));
                            *(unsigned short *)0xC540996 = 0x0;
                            t0 = (((0x0 + t1) + t2) + (FUN_0c0cfecc(((((struct o10_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o14_int *)0xC1CCBD0)->v)))));
                        }
                        t1 = t0;
                    } else {
                        *(unsigned short *)0xC540996 = 0x0;
                        t0 = FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)));
                        *(unsigned short *)0xC540996 = 0x0;
                        t2 = FUN_0c0cfecc(((((struct o20_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o24_int *)0xC1CCBD0)->v)));
                        *(unsigned short *)0xC540996 = 0x0;
                        t3 = FUN_0c0cfecc(((((struct o18_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o1C_int *)0xC1CCBD0)->v)));
                        *(unsigned short *)0xC540996 = 0x0;
                        t1 = ((((0x0 + t0) + t2) + t3) + (FUN_0c0cfecc(((((struct o8_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct oC_int *)0xC1CCBD0)->v)))));
                    }
                    t0 = t1;
                } else {
                    *(unsigned short *)0xC540996 = 0x0;
                    t1 = FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)));
                    *(unsigned short *)0xC540996 = 0x0;
                    t2 = FUN_0c0cfecc(((((struct o18_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o1C_int *)0xC1CCBD0)->v)));
                    *(unsigned short *)0xC540996 = 0x0;
                    t0 = ((t1 + t2) + (FUN_0c0cfecc(((((struct o0_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o4_int *)0xC1CCBD0)->v)))));
                }
                t1 = t0;
            } else {
                *(unsigned short *)0xC540996 = 0x0;
                t1 = (0x0 + (FUN_0c0cfecc(((((struct o10_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o14_int *)0xC1CCBD0)->v)))));
            }
            t0 = t1;
        } else {
            *(unsigned short *)0xC540996 = 0x0;
            t1 = FUN_0c0cfecc(((((struct o8_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct oC_int *)0xC1CCBD0)->v)));
            *(unsigned short *)0xC540996 = 0x0;
            t0 = ((0x0 + t1) + (FUN_0c0cfecc(((((struct o20_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o24_int *)0xC1CCBD0)->v)))));
        }
        t1 = t0;
    } else {
        t0 = FUN_0c0cfecc(((((struct o0_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o4_int *)0xC1CCBD0)->v)));
        *(unsigned short *)0xC540996 = 0x0;
        t2 = FUN_0c0cfecc(((((struct o18_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o1C_int *)0xC1CCBD0)->v)));
        *(unsigned short *)0xC540996 = 0x0;
        t1 = (((0x0 + t0) + t2) + (FUN_0c0cfecc(((((struct o28_int *)0xC1CCBD0)->v)), 0xC540996, ((((struct o2C_int *)0xC1CCBD0)->v)))));
    }
    t0 = 0x0;
    if ((int)t1 < 0) {
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0e956e(void)
{
    register int t0;
    int t1;

    t0 = *(short *)0xC540998;
    *(unsigned short *)0xC540998 = (t0 - 1);
    if (((int)(short)(t0 - 1) <= 0) && (t1 = *(signed char *)0xC54223C, t1 == 0)) {
        *(unsigned short *)0xC540998 = 0x12C;
        return thunk_FUN_0c05abb2(0x4A, 0x0);
    }
    return 0x20;
}

void FUN_0c0e99c8(void)
{
    
}

int FUN_0c0e99e4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(signed char *)0xC54098D;
    if ((t0 & 0xF0) != 16) {
        t2 = (t0 & 0xF0);
        if (((t0 & 0xF0) == 32) || ((t0 & 0xF0) == 48)) {
            t3 = (t0 & 0xF0);
            if ((int)t1 >= (int)0xD) {
                t3 = 0xE;
                if ((int)t1 <= (int)0xE) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t3 = 0x14;
                }
            }
            t2 = t3;
        }
        t3 = t2;
    } else {
        t2 = (t0 & 0xF0);
        if ((int)t1 >= (int)0x8) {
            t0 = 0xE;
            if ((int)t1 > (int)0xE) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            t2 = t0;
        }
        t3 = t2;
    }
    return t3;
}

int FUN_0c0e9a32(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return FUN_0c0e99e4(a4);
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
        (((struct oA4_uint *)(a4))->v) = ((*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94))) + 0x64);
    }
    return FUN_0c0e99e4(a4);
}

int FUN_0c0e9a88(int a4, int a5, float f4)
{

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_1 = a5;
    w0_0 = f4;
    v0_0 = ((*(int *)((((v0_1 << 2) + (0xC4 + v0_0)) + 0x0))));
    w0_2 = (0.0f);
    w0_1 = (1.0f);
    if ((!(0.0f > w0_0))) goto L_C0E9AA6;
    v0_1 = (0x20);
    if ((!(((((struct o20_float *)(v0_0))->v)) > w0_2))) goto L_C0E9AD6;
    L_C0E9AAE:;
    w0_2 = (((struct o20_float *)(v0_0))->v);
    (((struct o20_float *)(v0_0))->v) = (w0_2 + w0_0);
    v0_1 = (0x20);
    w0_3 = (0.0f);
    if (((w0_2 + w0_0) > 0.0f)) goto L_C0E9AC4;
    *(float *)((v0_0 + v0_1)) = w0_3;
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    L_C0E9ACC:;
    w0_0 = *(float *)((v0_0 + v0_1));
    (((struct o1C_float *)(v0_0))->v) = w0_0;
    (((struct o18_float *)(v0_0))->v) = w0_0;
    v0_1 = (0x18);
    L_C0E9AD6:;
    return v0_1;
    L_C0E9AC4:;
    if ((w0_1 > (*(float *)((v0_0 + v0_1))))) goto L_C0E9ACC;
    *(float *)((v0_0 + v0_1)) = w0_1;
    goto L_C0E9ACC;
    L_C0E9AA6:;
    v0_1 = (0x20);
    if ((!(w0_1 > ((((struct o20_float *)(v0_0))->v))))) goto L_C0E9AD6;
    goto L_C0E9AAE;
}

int FUN_0c0e9ada(int a4, int a5, int a6, float f4)
{
    int stk[12];
    register int t0;
    register int t1;
    register int t6;
    register int t11;
    register int t22;
    register int t38;
    register int t59;
    register int t65;
    register int t63;
    register int t69;
    register int t82;
    register int t84;
    register int t90;
    register int t92;
    register int t101;
    register int t96;
    register int t97;
    register int t115;
    register int t121;
    register int t133;
    register int t138;
    register int t149;
    register int t167;
    register int t186;
    register int t190;
    register int t195;
    register int t210;
    register int t218;
    register int t220;
    register int t238;
    register int t310;
    register int t317;
    register int t316;
    register int t328;
    register int t330;
    register int t339;
    register int t334;
    register int t335;
    register int t348;
    register int t351;
    register int t353;
    register int t356;
    register int t357;
    register int t362;
    register int t367;
    register int t378;
    register int t394;
    register int t415;
    register int t421;
    register int t419;
    register int t425;
    register int t438;
    register int t440;
    register int t446;
    register int t448;
    register int t457;
    register int t452;
    register int t453;
    register int t471;
    register int t477;
    register int t491;
    register int t496;
    register int t507;
    register int t525;
    register int t544;
    register int t548;
    register int t553;
    register int t568;
    register int t576;
    register int t578;
    register int t596;
    register int t672;
    register int t679;
    register int t678;
    register int t692;
    register int t694;
    register int t703;
    register int t698;
    register int t699;
    register int t77;
    register int t287;
    register float u107;
    register float u112;
    register int t203;
    register int t234;
    register float u302;
    register float u307;
    register int t344;
    register int t350;
    register int t433;
    register int t648;
    register float u463;
    register float u468;
    register int t561;
    register int t592;
    register float u664;
    register float u669;
    register int t708;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    if (t1 == 3) {
                        t6 = *(signed char *)((a4 + 0x16));
                        switch (t6) {
                        case 0:
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o20_ushort *)(a4))->v) = 0x12C;
                            t22 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t22 - 1);
                            if ((int)(short)(t22 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 1:
                            t11 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t11 - 1);
                            if ((int)(short)(t11 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 2:
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                            break;
                        }
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                        if ((*(short *)((a4 + 0x1E))) == 1) {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                        } else {
                            t38 = *(short *)((a4 + 0x1E));
                            if (t38 == 2) {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                            } else {
                                if (t38 == 6) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                                } else {
                                    if ((*(short *)((a4 + 0x1E))) == 7) {
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                    }
                                }
                            }
                        }
                        FUN_0c0e9a88(a4, 0x1, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                        t59 = *(signed char *)0xC54098D;
                        t65 = t59;
                        if (t59 != 8) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                            (((struct o20_ushort *)(a4))->v) = 0x4;
                            (((struct o2C_float *)(a4))->v) = 3350.0f;
                            thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                            t63 = (((struct oCC_int *)(a4))->v);
                            (((struct o20_float *)(t63))->v) = 0.0f;
                            (((struct o1C_float *)(t63))->v) = 0.0f;
                            (((struct o18_float *)(t63))->v) = 0.0f;
                            *(int *)((int)stk + 0) = 0x0;
                            t65 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                        }
                        return t65;
                    }
                    if (t1 == 4) {
                        FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                        t69 = *(short *)((a4 + 0x1E));
                        if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t69 / 10.0f));
                            t77 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                        } else {
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t69 / 10.0f));
                            t77 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                        }
                        *(unsigned short *)((a4 + 0x1E)) = t77;
                        (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                        t82 = *(short *)((a4 + 0x1E));
                        t84 = t82;
                        if ((int)t82 > 0) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o2C_float *)(a4))->v) = 3350.0f;
                            t84 = 0x2C;
                        }
                        return t84;
                    }
                    if (t1 == 5) {
                        FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                        (((struct o2C_float *)(a4))->v) = 3350.0f;
                        t90 = *(signed char *)0xC54098D;
                        if (t90 != 9) {
                            return t90;
                        }
                        if ((int)t90 > (int)0xE) {
                            return t90;
                        }
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x3;
                        *(int *)((int)stk + 44) = a4;
                        *(int *)((int)stk + 40) = 0x0;
                        *(int *)((int)stk + 36) = 0x1;
                        *(unsigned int *)(((int)stk + 24)) = 0x1;
                        *(unsigned int *)(((int)stk + 28)) = 0x258;
                        t92 = FUN_0c03f444(0x5, 0x0, 0x1);
                        t101 = t92;
                        if (t92 != 0) {
                            *(unsigned char *)((t92 + 0x1)) = 0xFFFFFFFF;
                            *(unsigned int *)((t92 + 0x4)) = 0xC0EA19E;
                            (((struct oA8_uchar *)(t92))->v) = 0x1;
                            (((struct oAC_ushort *)(t92))->v) = 0x201;
                            (((struct oA9_uchar *)(t92))->v) = 0x21;
                            *(unsigned char *)((t92 + 0x2)) = (*(int *)(((int)stk + 24)));
                            *(volatile int *)(((int)stk + 24));
                            t96 = ((int (*)(void))(FUN_0c187798))();
                            t97 = (((struct oC4_int *)(t92))->v);
                            FUN_0c037498(t97, 0x0, 0xF2, (*(int *)0xC4B410C));
                            *(unsigned char *)((t97 + 0x0)) = 0x1;
                            *(unsigned short *)((t97 + 0x6)) = 0x1;
                            t101 = *(short *)(((int)stk + 28));
                            *(unsigned short *)((t92 + 0x1C)) = t101;
                        }
                        return t101;
                    }
                    if (t1 == 6) {
                        if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                            u107 = (((((struct o28_float *)(a4))->v)) + 5.0f);
                        } else {
                            u107 = (((((struct o28_float *)(a4))->v)) - 5.0f);
                        }
                        (((struct o28_float *)(a4))->v) = u107;
                        if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                            u112 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                        } else {
                            u112 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                        }
                        (((struct o30_float *)(a4))->v) = u112;
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        t115 = *(signed char *)0xC54098D;
                        t287 = t115;
                        if (t115 != 10) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            (((struct o16_uchar *)(a4))->v) = 0x0;
                            (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                            (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                            *(unsigned short *)((a4 + 0x1E)) = 0x0;
                            (((struct o50_float *)(a4))->v) = 3.0f;
                            thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                            t121 = (((struct oD4_int *)(a4))->v);
                            (((struct o20_float *)(t121))->v) = 0.0f;
                            (((struct o1C_float *)(t121))->v) = 0.0f;
                            (((struct o18_float *)(t121))->v) = 0.0f;
                            t287 = 0x18;
                        }
                    } else {
                        if (t1 == 7) {
                            t133 = *(signed char *)((a4 + 0x16));
                            switch (t133) {
                            case 0:
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                (((struct o20_ushort *)(a4))->v) = 0x12C;
                                t149 = (((struct o20_short *)(a4))->v);
                                (((struct o20_ushort *)(a4))->v) = (t149 - 1);
                                if ((int)(short)(t149 - 1) <= 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                }
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                                break;
                            case 1:
                                t138 = (((struct o20_short *)(a4))->v);
                                (((struct o20_ushort *)(a4))->v) = (t138 - 1);
                                if ((int)(short)(t138 - 1) <= 0) {
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                }
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                                break;
                            case 2:
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                                break;
                            }
                            FUN_0c0e9a88(a4, 0x2, -0.0199999996f);
                            FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                            if ((*(short *)((a4 + 0x1E))) == 1) {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                            } else {
                                t167 = *(short *)((a4 + 0x1E));
                                if (t167 == 2) {
                                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                                } else {
                                    if (t167 == 6) {
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                                    } else {
                                        if ((*(short *)((a4 + 0x1E))) == 7) {
                                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                        }
                                    }
                                }
                            }
                            t186 = *(signed char *)0xC54098D;
                            t287 = t186;
                            if (t186 != 13) {
                            } else {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                                (((struct o20_ushort *)(a4))->v) = 0x4;
                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                                t190 = (((struct oD0_int *)(a4))->v);
                                (((struct o20_float *)(t190))->v) = 0.0f;
                                (((struct o1C_float *)(t190))->v) = 0.0f;
                                (((struct o18_float *)(t190))->v) = 0.0f;
                                *(int *)((int)stk + 0) = 0x0;
                                t287 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                            }
                        } else {
                            if (t1 == 8) {
                                t195 = *(short *)((a4 + 0x1E));
                                if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t195 / 10.0f));
                                    t203 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                                } else {
                                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t195 / 10.0f));
                                    t203 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                                }
                                *(unsigned short *)((a4 + 0x1E)) = t203;
                                FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                                FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                                (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                                t210 = *(short *)((a4 + 0x1E));
                                t287 = t210;
                                if ((int)t210 <= 0) {
                                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                    (((struct o2C_float *)(a4))->v) = 7850.0f;
                                    t287 = 0x2C;
                                }
                            } else {
                                if (t1 == 9) {
                                    FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                                    FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                                    (((struct o2C_float *)(a4))->v) = 7850.0f;
                                    t287 = 0x2C;
                                } else {
                                    t287 = t1;
                                    if (t1 == 10) {
                                        t218 = *(signed char *)((a4 + 0x16));
                                        t287 = t218;
                                        if (t218 == 0) {
                                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                            t220 = *(signed char *)0xC54223C;
                                            if (t220 != 0) {
                                                if (t220 != 1) {
                                                    (((struct o2C_float *)(a4))->v) = 7850.0f;
                                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                                                    t234 = 0xD0;
                                                } else {
                                                    (((struct o2C_float *)(a4))->v) = 3350.0f;
                                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                                                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                                    t234 = 0xCC;
                                                }
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = -150.0f;
                                                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                                                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                                t234 = 0xC8;
                                            }
                                            t238 = *(int *)((a4 + t234));
                                            (((struct o20_float *)(t238))->v) = 1.0f;
                                            (((struct o1C_float *)(t238))->v) = 1.0f;
                                            (((struct o18_float *)(t238))->v) = 1.0f;
                                            t287 = 0x18;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    return t287;
                }
                if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                    u302 = (((((struct o28_float *)(a4))->v)) + 5.0f);
                } else {
                    u302 = (((((struct o28_float *)(a4))->v)) - 5.0f);
                }
                (((struct o28_float *)(a4))->v) = u302;
                if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                    u307 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                } else {
                    u307 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                }
                (((struct o30_float *)(a4))->v) = u307;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                t310 = *(signed char *)0xC54098D;
                t317 = t310;
                if (t310 != 5) {
                } else {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                    (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o50_float *)(a4))->v) = 3.0f;
                    thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                    t316 = (((struct oD4_int *)(a4))->v);
                    (((struct o20_float *)(t316))->v) = 0.0f;
                    (((struct o1C_float *)(t316))->v) = 0.0f;
                    (((struct o18_float *)(t316))->v) = 0.0f;
                    t317 = 0x18;
                }
                return t317;
            }
            (((struct o2C_float *)(a4))->v) = -150.0f;
            t328 = *(signed char *)0xC54098D;
            if (t328 != 4) {
                return t328;
            }
            if ((int)t328 > (int)0xE) {
                return t328;
            }
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            *(int *)((int)stk + 44) = a4;
            *(int *)((int)stk + 40) = 0x0;
            *(int *)((int)stk + 36) = 0x1;
            *(unsigned int *)(((int)stk + 24)) = 0x0;
            *(unsigned int *)(((int)stk + 28)) = 0x258;
            t330 = FUN_0c03f444(0x5, 0x0, 0x1);
            t339 = t330;
            if (t330 != 0) {
                *(unsigned char *)((t330 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t330 + 0x4)) = 0xC0EA19E;
                (((struct oA8_uchar *)(t330))->v) = 0x1;
                (((struct oAC_ushort *)(t330))->v) = 0x201;
                (((struct oA9_uchar *)(t330))->v) = 0x21;
                *(unsigned char *)((t330 + 0x2)) = (*(int *)(((int)stk + 24)));
                *(volatile int *)(((int)stk + 24));
                t334 = ((int (*)(void))(FUN_0c187798))();
                t335 = (((struct oC4_int *)(t330))->v);
                FUN_0c037498(t335, 0x0, 0xF2, (*(int *)0xC4B410C));
                *(unsigned char *)((t335 + 0x0)) = 0x1;
                *(unsigned short *)((t335 + 0x6)) = 0x1;
                t339 = *(short *)(((int)stk + 28));
                *(unsigned short *)((t330 + 0x1C)) = t339;
            }
            return t339;
        }
        if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
            (((struct o15_uchar *)(a4))->v) = 0xA;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t344 = 0x16;
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t344 = 0x15;
        }
        return t344;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    t348 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1;
    t351 = 0x1;
    for (;;) {
        if ((int)t351 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t350 = 0xC4;
        t350 = (t350 + a4);
        t353 = *(int *)((((t351 << 2) + t350) + 0x0));
        t351 = (t351 + 0x1);
        *(unsigned short *)((t353 + 0x6)) = ((*(short *)((t353 + 0x6))) | 0x200);
    }
    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
    t356 = (((struct oC8_int *)(a4))->v);
    (((struct o20_float *)(t356))->v) = f4;
    (((struct o1C_float *)(t356))->v) = f4;
    (((struct o18_float *)(t356))->v) = f4;
    t357 = *(signed char *)((a4 + 0x15));
    if (t357 != 0) {
        if (t357 != 1) {
            if (t357 != 2) {
                if (t357 == 3) {
                    t362 = *(signed char *)((a4 + 0x16));
                    switch (t362) {
                    case 0:
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o20_ushort *)(a4))->v) = 0x12C;
                        t378 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t378 - 1);
                        if ((int)(short)(t378 - 1) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                        break;
                    case 1:
                        t367 = (((struct o20_short *)(a4))->v);
                        (((struct o20_ushort *)(a4))->v) = (t367 - 1);
                        if ((int)(short)(t367 - 1) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                        break;
                    case 2:
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                        break;
                    }
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                    if ((*(short *)((a4 + 0x1E))) == 1) {
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                    } else {
                        t394 = *(short *)((a4 + 0x1E));
                        if (t394 == 2) {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                        } else {
                            if (t394 == 6) {
                                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                            } else {
                                if ((*(short *)((a4 + 0x1E))) == 7) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                }
                            }
                        }
                    }
                    FUN_0c0e9a88(a4, 0x1, -0.0199999996f);
                    FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                    t415 = *(signed char *)0xC54098D;
                    t421 = t415;
                    if (t415 != 8) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                        (((struct o20_ushort *)(a4))->v) = 0x4;
                        (((struct o2C_float *)(a4))->v) = 3350.0f;
                        thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                        t419 = (((struct oCC_int *)(a4))->v);
                        (((struct o20_float *)(t419))->v) = 0.0f;
                        (((struct o1C_float *)(t419))->v) = 0.0f;
                        (((struct o18_float *)(t419))->v) = 0.0f;
                        *(int *)((int)stk + 0) = 0x0;
                        t421 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                    }
                    return t421;
                }
                if (t357 == 4) {
                    FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                    FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                    t425 = *(short *)((a4 + 0x1E));
                    if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t425 / 10.0f));
                        t433 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                    } else {
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t425 / 10.0f));
                        t433 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                    }
                    *(unsigned short *)((a4 + 0x1E)) = t433;
                    (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                    t438 = *(short *)((a4 + 0x1E));
                    t440 = t438;
                    if ((int)t438 > 0) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o2C_float *)(a4))->v) = 3350.0f;
                        t440 = 0x2C;
                    }
                    return t440;
                }
                if (t357 == 5) {
                    FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                    FUN_0c0e9a88(a4, 0x2, 0.0199999996f);
                    (((struct o2C_float *)(a4))->v) = 3350.0f;
                    t446 = *(signed char *)0xC54098D;
                    if (t446 != 9) {
                        return t446;
                    }
                    if ((int)t446 > (int)0xE) {
                        return t446;
                    }
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    *(unsigned short *)((a4 + 0x1E)) = 0x3;
                    *(int *)((int)stk + 44) = a4;
                    *(int *)((int)stk + 40) = 0x0;
                    *(int *)((int)stk + 36) = 0x1;
                    *(unsigned int *)(((int)stk + 24)) = 0x1;
                    *(unsigned int *)(((int)stk + 28)) = 0x258;
                    t448 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t457 = t448;
                    if (t448 != 0) {
                        *(unsigned char *)((t448 + 0x1)) = 0xFFFFFFFF;
                        *(unsigned int *)((t448 + 0x4)) = 0xC0EA19E;
                        (((struct oA8_uchar *)(t448))->v) = 0x1;
                        (((struct oAC_ushort *)(t448))->v) = 0x201;
                        (((struct oA9_uchar *)(t448))->v) = 0x21;
                        *(unsigned char *)((t448 + 0x2)) = (*(int *)(((int)stk + 24)));
                        *(volatile int *)(((int)stk + 24));
                        t452 = ((int (*)(void))(FUN_0c187798))();
                        t453 = (((struct oC4_int *)(t448))->v);
                        FUN_0c037498(t453, 0x0, 0xF2, (*(int *)0xC4B410C));
                        *(unsigned char *)((t453 + 0x0)) = 0x1;
                        *(unsigned short *)((t453 + 0x6)) = 0x1;
                        t457 = *(short *)(((int)stk + 28));
                        *(unsigned short *)((t448 + 0x1C)) = t457;
                    }
                    return t457;
                }
                if (t357 == 6) {
                    if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                        u463 = (((((struct o28_float *)(a4))->v)) + 5.0f);
                    } else {
                        u463 = (((((struct o28_float *)(a4))->v)) - 5.0f);
                    }
                    (((struct o28_float *)(a4))->v) = u463;
                    if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                        u468 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
                    } else {
                        u468 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
                    }
                    (((struct o30_float *)(a4))->v) = u468;
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                    t471 = *(signed char *)0xC54098D;
                    t648 = t471;
                    if (t471 != 10) {
                    } else {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        (((struct o16_uchar *)(a4))->v) = 0x0;
                        (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                        (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                        *(unsigned short *)((a4 + 0x1E)) = 0x0;
                        (((struct o50_float *)(a4))->v) = 3.0f;
                        thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                        *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                        t477 = (((struct oD4_int *)(a4))->v);
                        (((struct o20_float *)(t477))->v) = 0.0f;
                        (((struct o1C_float *)(t477))->v) = 0.0f;
                        (((struct o18_float *)(t477))->v) = 0.0f;
                        t648 = 0x18;
                    }
                } else {
                    if (t357 == 7) {
                        t491 = *(signed char *)((a4 + 0x16));
                        switch (t491) {
                        case 0:
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            (((struct o20_ushort *)(a4))->v) = 0x12C;
                            t507 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t507 - 1);
                            if ((int)(short)(t507 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 1:
                            t496 = (((struct o20_short *)(a4))->v);
                            (((struct o20_ushort *)(a4))->v) = (t496 - 1);
                            if ((int)(short)(t496 - 1) <= 0) {
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            }
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.75f);
                            break;
                        case 2:
                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 3.0f);
                            break;
                        }
                        FUN_0c0e9a88(a4, 0x2, -0.0199999996f);
                        FUN_0c0e9a88(a4, 0x4, 0.0199999996f);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3F);
                        if ((*(short *)((a4 + 0x1E))) == 1) {
                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + 5.0f);
                        } else {
                            t525 = *(short *)((a4 + 0x1E));
                            if (t525 == 2) {
                                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - 5.0f);
                            } else {
                                if (t525 == 6) {
                                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + 5.0f);
                                } else {
                                    if ((*(short *)((a4 + 0x1E))) == 7) {
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 5.0f);
                                    }
                                }
                            }
                        }
                        t544 = *(signed char *)0xC54098D;
                        t648 = t544;
                        if (t544 != 13) {
                        } else {
                            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                            *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                            (((struct o20_ushort *)(a4))->v) = 0x4;
                            (((struct o2C_float *)(a4))->v) = 7850.0f;
                            thunk_FUN_0c05abb2(0x41, (a4 + 0x28));
                            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                            t548 = (((struct oD0_int *)(a4))->v);
                            (((struct o20_float *)(t548))->v) = 0.0f;
                            (((struct o1C_float *)(t548))->v) = 0.0f;
                            (((struct o18_float *)(t548))->v) = 0.0f;
                            *(int *)((int)stk + 0) = 0x0;
                            t648 = (FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0));
                        }
                    } else {
                        if (t357 == 8) {
                            t553 = *(short *)((a4 + 0x1E));
                            if ((int)((((struct o20_short *)(a4))->v)) >= 0) {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((float)t553 / 10.0f));
                                t561 = ((*(short *)((a4 + 0x1E))) - ((((struct o20_short *)(a4))->v)));
                            } else {
                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((float)t553 / 10.0f));
                                t561 = ((*(short *)((a4 + 0x1E))) + ((((struct o20_short *)(a4))->v)));
                            }
                            *(unsigned short *)((a4 + 0x1E)) = t561;
                            FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                            FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                            (((struct o20_ushort *)(a4))->v) = (-((((struct o20_short *)(a4))->v)));
                            t568 = *(short *)((a4 + 0x1E));
                            t648 = t568;
                            if ((int)t568 <= 0) {
                                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                t648 = 0x2C;
                            }
                        } else {
                            if (t357 == 9) {
                                FUN_0c0e9a88(a4, 0x4, -0.0199999996f);
                                FUN_0c0e9a88(a4, 0x3, 0.0199999996f);
                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                t648 = 0x2C;
                            } else {
                                t648 = t357;
                                if (t357 == 10) {
                                    t576 = *(signed char *)((a4 + 0x16));
                                    t648 = t576;
                                    if (t576 == 0) {
                                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                        t578 = *(signed char *)0xC54223C;
                                        if (t578 != 0) {
                                            if (t578 != 1) {
                                                (((struct o2C_float *)(a4))->v) = 7850.0f;
                                                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                                                t592 = 0xD0;
                                            } else {
                                                (((struct o2C_float *)(a4))->v) = 3350.0f;
                                                *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                                *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                                                *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                                t592 = 0xCC;
                                            }
                                        } else {
                                            (((struct o2C_float *)(a4))->v) = -150.0f;
                                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                                            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                                            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                                            t592 = 0xC8;
                                        }
                                        t596 = *(int *)((a4 + t592));
                                        (((struct o20_float *)(t596))->v) = f4;
                                        (((struct o1C_float *)(t596))->v) = f4;
                                        (((struct o18_float *)(t596))->v) = f4;
                                        t648 = 0x18;
                                    }
                                }
                            }
                        }
                    }
                }
                return t648;
            }
            if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                u664 = (((((struct o28_float *)(a4))->v)) + 5.0f);
            } else {
                u664 = (((((struct o28_float *)(a4))->v)) - 5.0f);
            }
            (((struct o28_float *)(a4))->v) = u664;
            if (((*(short *)((a4 + 0x1E))) & 0x4) != 0) {
                u669 = (((((struct o30_float *)(a4))->v)) + (1.0f + 1.0f));
            } else {
                u669 = (((((struct o30_float *)(a4))->v)) - (1.0f + 1.0f));
            }
            (((struct o30_float *)(a4))->v) = u669;
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            t672 = *(signed char *)0xC54098D;
            t679 = t672;
            if (t672 != 5) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x0;
                (((struct o28_float *)(a4))->v) = ((((struct o58_float *)(a4))->v));
                (((struct o30_float *)(a4))->v) = ((((struct o60_float *)(a4))->v));
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o50_float *)(a4))->v) = 3.0f;
                thunk_FUN_0c05abb2(0x40, (a4 + 0x28));
                *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x1;
                t678 = (((struct oD4_int *)(a4))->v);
                (((struct o20_float *)(t678))->v) = 0.0f;
                (((struct o1C_float *)(t678))->v) = 0.0f;
                (((struct o18_float *)(t678))->v) = 0.0f;
                t679 = 0x18;
            }
            return t679;
        }
        (((struct o2C_float *)(a4))->v) = -150.0f;
        t692 = *(signed char *)0xC54098D;
        if (t692 != 4) {
            return t692;
        }
        if ((int)t692 > (int)0xE) {
            return t692;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x3;
        *(int *)((int)stk + 44) = a4;
        *(int *)((int)stk + 40) = 0x0;
        *(int *)((int)stk + 36) = 0x1;
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        *(unsigned int *)(((int)stk + 28)) = 0x258;
        t694 = FUN_0c03f444(0x5, 0x0, 0x1);
        t703 = t694;
        if (t694 != 0) {
            *(unsigned char *)((t694 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t694 + 0x4)) = 0xC0EA19E;
            (((struct oA8_uchar *)(t694))->v) = 0x1;
            (((struct oAC_ushort *)(t694))->v) = 0x201;
            (((struct oA9_uchar *)(t694))->v) = 0x21;
            *(unsigned char *)((t694 + 0x2)) = (*(int *)(((int)stk + 24)));
            *(volatile int *)(((int)stk + 24));
            t698 = ((int (*)(void))(FUN_0c187798))();
            t699 = (((struct oC4_int *)(t694))->v);
            FUN_0c037498(t699, 0x0, 0xF2, (*(int *)0xC4B410C));
            *(unsigned char *)((t699 + 0x0)) = 0x1;
            *(unsigned short *)((t699 + 0x6)) = 0x1;
            t703 = *(short *)(((int)stk + 28));
            *(unsigned short *)((t694 + 0x1C)) = t703;
        }
        return t703;
    }
    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        (((struct o15_uchar *)(a4))->v) = 0xA;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t708 = 0x16;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t708 = 0x15;
    }
    return t708;
}
