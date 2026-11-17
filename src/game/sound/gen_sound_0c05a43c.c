/* game/sound: functions 0C05A43C-0C05B26C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o18_int { char p[0x18]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c059c54(int);
int FUN_0c059c7a(int, int);
int FUN_0c05b026(int, int, int, int);
int FUN_0c17a4c0(int, int);
int dbg_printf(int, ...);
int FUN_0c180a6c(int, int, int);
int FUN_0c180bec(int, int, int);
int FUN_0c2b4174(int, int);
int ADXT_Stop(int);
int ADXT_GetStat(int);
int FUN_0c2b4824(int);
int FUN_0c2b48e6(int, int);
int FUN_0c2b49a6(int);
int ADXT_GetErrCode(int);
int FUN_0c2b4a1a(int);
int FUN_0c2b4a2e(int);
int ADXT_SetLpFlg(int, int);
int FUN_0c2b4a4a(int, int);
int FUN_0c05a43c(void);
int FUN_0c05a4a6(int a4, int a5);
int FUN_0c05a4ba(void);
int FUN_0c05a560(int a4, int a5, int a6, int a7);
int FUN_0c05a5a8(int a4);
int FUN_0c05a5d4(void);
int FUN_0c05a670(void);
int FUN_0c05a68a(float f4);
void FUN_0c05a7f8(void);
int FUN_0c05aa9c(int a4);
int FUN_0c05aab2(void);
int FUN_0c05aab6(int a4, int a5);
int FUN_0c05aad0(int a4, int a5, int a6);
int FUN_0c05aae4(int a4, int a5);
int FUN_0c05aaf6(int a4);
int FUN_0c05ab04(int a4);
int FUN_0c05ab12(int a4, int a5);
int FUN_0c05ab24(int a4, int a5, int a6);
void FUN_0c05ab78(int a4);
int FUN_0c05ab7e(int a4, int a5);
int FUN_0c05abb2(int a4, int a5);
int FUN_0c05abcc(int a4, int a5);
int FUN_0c05abfe(int a4);
int FUN_0c05ac14(void);
int FUN_0c05aca8(int a4, int a5);
void FUN_0c05ad20(int a4, int a5, int a6, int a7);
int FUN_0c05ad94(int a4);
int FUN_0c05ada4(int a4);
int FUN_0c05adb4(int a4);
int FUN_0c05adc4(int a4);
int FUN_0c05add4(int a4);
int FUN_0c05ade4(void);
int FUN_0c05aeac(void);
int FUN_0c05aec8(int a4, int a5);
int FUN_0c05af1a(int a4);
int FUN_0c05af44(void);
int bgm_stop_slot(int a4);
int FUN_0c05af8a(void);
int FUN_0c05af9a(int a4, int a5, int a6);
int FUN_0c05afc8(int a4, int a5, int a6);
int FUN_0c05afec(int a4, int a5);
int FUN_0c05b00c(void);
void FUN_0c05b018(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05b048(int a4, int a5);
int FUN_0c05b052(int a4, int a5);
int FUN_0c05b05c(int a4, int a5);
int FUN_0c05b0a0(int a4, int a5);
int FUN_0c05b0b4(int a4, int a5);
int FUN_0c05b0d6(int a4, int a5);
int FUN_0c05b10c(int a4);
int FUN_0c05b122(int a4);
int FUN_0c05b15c(void);
int FUN_0c05b1d4(void);
int FUN_0c05b1e8(void);
int FUN_0c05b204(void);
int FUN_0c05b21e(void);
int FUN_0c05b250(void);

int FUN_0c05a43c(void)
{
    FUN_0c17a4c0(0xA, 0x28);
    *(volatile float *)0xC05A530;
    *(volatile float *)0xC46E170;
    *(volatile float *)0xC46E16C;
    dbg_printf(0xC1C341C);
    FUN_0c17a4c0(0xA, 0x29);
    *(volatile float *)0xC46E168;
    *(volatile float *)0xC46E164;
    return (dbg_printf(0xC1C3430));
}

int FUN_0c05a4a6(int a4, int a5)
{
    *(float *)(((a4 << 2) + 0xC46E174)) = ((float)a5 / 127.0f);
    return 0xC46E174;
}

int FUN_0c05a4ba(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;

    t1 = 0x0;
    for (;;) {
        t3 = t0;
        if ((int)(*(int *)(((0xC46E094 + t1) + 0x4))) > 0) {
            t0 = (*(int *)(((0xC46E094 + t1) + 0x4)));
            t0 = (t0 - 1);
            *(unsigned int *)(((0xC46E094 + t1) + 0x4)) = t0;
            t3 = t0;
            if (t0 == 0) {
                t2 = (*(int *)(((0xC46E094 + t1) + 0x0)));
                if (t2 != 0) {
                    if (t2 != 1) {
                        t5 = t0;
                    } else {
                        t2 = (FUN_0c059c54((*(int *)(((0xC46E094 + t1) + 0x8)))));
                    }
                    t3 = t5;
                } else {
                    t5 = (0xC46E094 + t1);
                    t5 = (t5 + 0x8);
                    t2 = (FUN_0c059c7a((*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4)))));
                }
            }
        }
        t0 = t3;
        t1 = (t1 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC0) {
            break;
        }
    }
    return t2;
}

int FUN_0c05a560(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t2;
    register int t3;

    *(unsigned int *)(((0xC46E094 + ((((a4 << 1) + a4) << 2) << 1)) + 0x0)) = a4;
    *(unsigned int *)(((0xC46E094 + ((((a4 << 1) + a4) << 2) << 1)) + 0x4)) = a5;
    t6 = 0x0;
    if ((int)a7 > 0) {
        t2 = 0x0;
        t3 = 0x0;
        for (;;) {
            t3 = (t3 + 0x1);
            *(unsigned int *)(((((0xC46E094 + ((((a4 << 1) + a4) << 2) << 1)) + 0x8) + t2) + 0x0)) = (*(int *)((a6 + t2)));
            t2 = (t2 + 0x4);
            if ((int)t3 >= (int)a7) {
                break;
            }
        }
        t6 = t2;
    }
    return t6;
}

int FUN_0c05a5a8(int a4)
{
    register int t1;
    register int t2;
    register int t0;

    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((*(int *)(((0xC46E094 + t1) + 0x0))) == a4) {
            t0 = 0x200;
            t0 = (t0 + 0xC46DE94);
            t0 = (t0 + t2);
            *(unsigned int *)((t0 + 0x4)) = 0x0;
        }
        t1 = (t1 + 0x18);
        t2 = (t2 + 0x18);
        if ((unsigned int)t1 >= (unsigned int)0xC0) {
            break;
        }
    }
    return 0xC0;
}

int FUN_0c05a5d4(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = 0x0;
    for (;;) {
        if ((int)(*(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x0))) > 0) {
            t2 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x0));
            *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x0)) = (t2 - 1);
            t3 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4));
            t4 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4));
            u0 = (float)(t3 - (t2 - 1));
            if ((float)(t3 - (t2 - 1)) == 0.0f) {
                u0 = 1.0f;
            }
            if ((float)t4 == 0.0f) {
                *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4)) = 0x1;
            }
            t2 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x8));
            u1 = ((float)((*(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0xC))) - t2) * (u0 / (float)(*(int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x4)))));
            *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC46DE94) + 0x10)) = (int)(u1 + (float)t2);
            t1 = (FUN_0c180bec(t0, 0xA6, (int)(u1 + (float)t2)));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    return t1;
}

int FUN_0c05a670(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC46DE94 + t0);
        t0 = (t0 + 0x14);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        *(unsigned int *)((t1 + 0x10)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x140) {
            break;
        }
    }
    return 0xC46DE94;
}

int FUN_0c05a68a(float f4)
{
    register int t8;
    register int t62;
    register int t32;
    register float u33;
    register int t46;
    register float u49;
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    register int t9;
    register float u10;
    register float u11;
    register float u12;
    register int t61;
    register int t63;
    register int t65;
    int t37;
    register int t38;

    t8 = 0x0;
    for (;;) {
        if ((int)t8 < (int)0x8) {
            t9 = t8;
            t9 = (t9 << 1);
            t3 = t8;
            t2 = 0x140;
            t9 = (t9 + t3);
            t6 = 0xC46DE94;
            t9 = (t9 << 2);
            t2 = (t2 + t6);
            t9 = (t9 << 1);
            t9 = (t9 + t2);
            t3 = (*(int *)((t9 + 0x0)));
            t62 = t2;
            if ((int)t3 > 0) {
                t1 = (*(int *)((t9 + 0x14)));
                if ((int)t1 > 0) {
                    t2 = (*(int *)((t9 + 0x14)));
                    t2 = (t2 - 1);
                    *(unsigned int *)((t9 + 0x14)) = t2;
                    t61 = t1;
                    t62 = t2;
                    t63 = t3;
                    t65 = t4;
                } else {
                    t1 = (*(int *)((t9 + 0x0)));
                    t1 = (t1 - 1);
                    t3 = t1;
                    *(unsigned int *)((t9 + 0x0)) = t1;
                    t2 = (*(int *)((t9 + 0x4)));
                    t2 = (t2 - t3);
                    u12 = (float)t2;
                    t7 = 0x1;
                    if (u12 == 0.0f) {
                        u12 = 1.0f;
                    }
                    t2 = (*(int *)((t9 + 0x4)));
                    if ((float)t2 == 0.0f) {
                        *(unsigned int *)((t9 + 0x4)) = t7;
                    }
                    t2 = (*(int *)((t9 + 0x4)));
                    t3 = (*(int *)((t9 + 0xC)));
                    t32 = *(int *)((t9 + 0x8));
                    t3 = (t3 - t32);
                    u12 = (u12 / (float)t2);
                    u33 = u12;
                    u12 = (float)t3;
                    u12 = (u12 * u33);
                    u12 = (u12 + (float)t32);
                    *(unsigned int *)((t9 + 0x10)) = (int)u12;
                    if ((int)t8 < (int)0x2) {
                        t3 = (*(int *)((t9 + 0x0)));
                        t5 = t8;
                        t5 = (t5 << 2);
                        t5 = (t5 + 0xC46DE80);
                        if (((t3 == 0) && (t37 = *(int *)((t9 + 0xC)), t38 = (t3 == 0), t3 = t37, t3 == 0)) || !(u12 > 0.0f)) {
                            t7 = 0xFFFFFC40;
                            t0 = (FUN_0c2b48e6((*(int *)((t5 + 0x0))), t7));
                            *(unsigned int *)((t9 + 0x10)) = 0x0;
                        } else {
                            t3 = 0x2C0;
                            t2 = t8;
                            t2 = (t2 << 2);
                            t3 = (t3 + t6);
                            t2 = (t2 << 1);
                            t2 = (t2 + t3);
                            t3 = t7;
                            t1 = (*(int *)((t2 + 0x4)));
                            t0 = 0xC05A7F0;
                            u10 = (*(float *)((t0 + 0x0)));
                            t0 = 0xC05A7F4;
                            t1 = (-t1);
                            u11 = (*(float *)((t0 + 0x0)));
                            t1 = (t1 + 0x7F);
                            t0 = 0x300;
                            t3 = (t3 - t8);
                            t46 = t1;
                            t1 = (*(int *)((t6 + t0)));
                            t3 = (t3 & t7);
                            t2 = 0x2D0;
                            t3 = (t3 << 2);
                            t2 = (t2 + t6);
                            t3 = (t3 + t2);
                            u12 = (u12 + (float)t46);
                            u49 = (float)t1;
                            u49 = u49 + u11 * (*(float *)((t3 + 0x0)));
                            t0 = (FUN_0c2b48e6((*(int *)((t5 + 0x0))), (int)((u49 + u12) + u10)));
                            t3 = (int)u12;
                            *(unsigned int *)((t9 + 0x10)) = t3;
                            t63 = t3;
                        }
                        t65 = 0xC2B48E6;
                    } else {
                        t0 = (FUN_0c05b0d6(t8, (int)u12));
                        t65 = t4;
                    }
                }
            } else {
                t61 = t1;
                t63 = t3;
                t65 = t4;
            }
            t1 = t61;
            t8 = (t8 + 0x1);
            t2 = t62;
            t3 = t63;
            t4 = t65;
            continue;
        }
        break;
    }
    return t0;
}

void FUN_0c05a7f8(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = (0xC46DFD4 + t0);
        t0 = (t0 + 0x18);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0xC0) {
            break;
        }
    }
}

int FUN_0c05aa9c(int a4)
{
    return (*(int *)((0xC257758 + (((a4 << 1) + a4) << 2))));
}

int FUN_0c05aab2(void)
{
    return ((int (*)(void))(0xC05AAAE))();
}

int FUN_0c05aab6(int a4, int a5)
{
    return FUN_0c05aab2();
}

int FUN_0c05aad0(int a4, int a5, int a6)
{
    return FUN_0c05aab2();
}

int FUN_0c05aae4(int a4, int a5)
{
    return FUN_0c05aab2();
}

int FUN_0c05aaf6(int a4)
{
    return FUN_0c05aab2();
}

int FUN_0c05ab04(int a4)
{
    return FUN_0c05aab2();
}

int FUN_0c05ab12(int a4, int a5)
{
    return FUN_0c05aab2();
}

int FUN_0c05ab24(int a4, int a5, int a6)
{
    int t1;

    if (((*(signed char *)0xC5429A8) == 3) && (t1 = *(signed char *)0xC5429AB, t1 == 0)) {
        *(volatile int *)(((a6 << 2) + 0xC2576D4));
        return FUN_0c05aab2();
    }
    *(volatile int *)(((a6 << 2) + 0xC257680));
    return FUN_0c05aab2();
}

void FUN_0c05ab78(int a4)
{
    *(unsigned int *)0xC46E198 = a4;
}

int FUN_0c05ab7e(int a4, int a5)
{
    (((struct o4_uint *)0xC46E198)->v) = (((((struct o4_int *)0xC46E198)->v)) + 0x1);
    (((struct o4_uint *)0xC46E198)->v) = (((((struct o4_int *)0xC46E198)->v)) & 0x1);
    *(volatile int *)0xC46E19C;
    *(volatile int *)(((((((struct o0_int *)0xC46E198)->v)) << 2) + 0xC257644));
    return FUN_0c05aab2();
}

int FUN_0c05abb2(int a4, int a5)
{
    *(volatile int *)((((*(int *)0xC46E198) << 2) + 0xC257644));
    return FUN_0c05aab2();
}

int FUN_0c05abcc(int a4, int a5)
{
    register int t3;
    int t2;

    t3 = 0xC257680;
    if (((*(signed char *)0xC5429A8) == 3) && (t2 = *(signed char *)0xC5429AB, t2 == 0)) {
        t3 = 0xC2576D4;
    }
    return (unsigned char)(*(signed char *)(((0x4 + ((*(int *)(((a4 << 2) + t3))) + ((a5 << 2) << 1))) + 0x0)));
}

int FUN_0c05abfe(int a4)
{
    return (unsigned char)(*(signed char *)((((*(int *)((0xC257644 + ((*(int *)0xC46E198) << 2)))) + ((a4 << 2) << 1)) + 0x4)));
}

int FUN_0c05ac14(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = 0xC46DE80;
    t1 = 0xC46DE80;
    t2 = 0xC46DE80;
    t3 = 0xC46DE80;
    t4 = 0xC46DE80;
    for (;;) {
        t6 = t0;
        if ((*(int *)((t4 + 0x0))) != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            t5 = (ADXT_GetErrCode(t0));
            t0 = t5;
            if (t0 != 0) {
                t0 = (*(int *)((t3 + 0x0)));
                t5 = (FUN_0c2b4a1a(t0));
                t0 = (*(int *)((t3 + 0x0)));
                t5 = (ADXT_Stop(t0));
                *(unsigned int *)0xC2577B8 = ((*(int *)0xC2577B8) + 0x1);
            } else {
                t7 = t0;
            }
            t6 = t7;
        } else {
            t7 = t1;
        }
        t4 = (t4 + 0x4);
        t0 = t6;
        t1 = t7;
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        if ((unsigned int)t4 >= (unsigned int)0xC46DE88) {
            break;
        }
    }
    return t5;
}

int FUN_0c05aca8(int a4, int a5)
{
    register int t7;
    register float u2;
    register int t14;

    t7 = 0xFFFFFC40;
    if (a5 != 0) {
        u2 = (float)(*(int *)0xC46E194);
        u2 = u2 + 128.0f * (*(float *)((0xC46E164 + (((0x1 - a4) & 0x1) << 2))));
        t7 = (int)((u2 - (float)(0x7F - a5)) + (*(float *)0xC05AE00));
    }
    t14 = FUN_0c2b48e6((*(int *)((((a4 << 2) + 0xC46DE80) + 0x0))), t7);
    *(unsigned int *)(((((((a4 << 1) + a4) << 2) << 1) + 0xC46DFD4) + 0x10)) = a5;
    return t14;
}

void FUN_0c05ad20(int a4, int a5, int a6, int a7)
{
    if ((*(int *)((((a4 << 2) + 0xC46DE80) + 0x0))) != 0) {
        FUN_0c2b4174((*(int *)((((a4 << 2) + 0xC46DE80) + 0x0))), (*(int *)(((a5 << 2) + 0xC20AFD8))));
        *(unsigned int *)(((0xC46E154 + ((a4 << 2) << 1)) + 0x0)) = a5;
        *(unsigned int *)(((((a4 << 2) << 1) + 0xC46E154) + 0x4)) = a6;
        FUN_0c05aca8(a4, a6);
        if (a7 != 0) {
            ADXT_SetLpFlg((*(int *)(((a4 << 2) + 0xC46DE80))), a7);
    return;
        }
        return;
    }
}

int FUN_0c05ad94(int a4)
{
    return FUN_0c2b4a2e((*(int *)(((a4 << 2) + 0xC46DE80))));
}

int FUN_0c05ada4(int a4)
{
    return FUN_0c2b4824((*(int *)(((a4 << 2) + 0xC46DE80))));
}

int FUN_0c05adb4(int a4)
{
    return FUN_0c2b49a6((*(int *)(((a4 << 2) + 0xC46DE80))));
}

int FUN_0c05adc4(int a4)
{
    return FUN_0c2b4a4a((*(int *)(((a4 << 2) + 0xC46DE80))), 0x1);
}

int FUN_0c05add4(int a4)
{
    return FUN_0c2b4a4a((*(int *)(((a4 << 2) + 0xC46DE80))), 0x0);
}

int FUN_0c05ade4(void)
{
    return (*(int *)0xC46DFFC);
}

int FUN_0c05aeac(void)
{
    register int t0;
    register int t1;

    t0 = 0x2;
    for (;;) {
        t1 = FUN_0c05af1a(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    return t1;
}

int FUN_0c05aec8(int a4, int a5)
{
    register int t0;
    register float u4;

    t0 = 0x2D4;
    if ((a4 & 0x7) == 1) {
        t0 = 0x2DC;
    }
    u4 = ((float)(a5 & 0x7F) * (*(float *)((0xC46DE94 + t0))));
    return FUN_0c180a6c((a4 & 0x7), 0x10A0, (int)(u4 * (*(float *)(((((a4 & 0x7) << 2) + 0xC46E174) + 0x0)))));
}

int FUN_0c05af1a(int a4)
{
    return FUN_0c180a6c(a4, 0x1300A0, 0x0);
}

int FUN_0c05af44(void)
{
    bgm_stop_slot(0x0);
    bgm_stop_slot(0x1);
    return FUN_0c05a5a8(0x0);
}

int bgm_stop_slot(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)(((a4 << 2) + 0xC46DE80));
    if (t0 != 0) {
        t1 = ADXT_GetStat(t0);
        if (t1 != 0) {
            return ADXT_Stop((*(int *)(((a4 << 2) + 0xC46DE80))));
        }
        return t1;
    }
    return 0xC46DE80;
}

int FUN_0c05af8a(void)
{
    FUN_0c180a6c(0x0, 0x400A0, 0x0);
    return FUN_0c05a670();
}

int FUN_0c05af9a(int a4, int a5, int a6)
{
    register int t3;

    t3 = *(signed char *)(((((a4 << 2) << 1) + (*(int *)((((*(int *)0xC46E198) << 2) + 0xC257644)))) + 0x4));
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x4)) = a6;
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x0)) = a6;
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x8)) = (*(int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0x10)));
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)) + 0xC)) = a5;
    return ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2);
}

int FUN_0c05afc8(int a4, int a5, int a6)
{
    register int t1;

    t1 = *(signed char *)(((((a4 << 2) << 1) + 0xC253084) + 0x4));
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2)) + 0x4)) = a6;
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2)) + 0x0)) = a6;
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2)) + 0x8)) = (*(int *)(((0xC46DE94 + ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2)) + 0x10)));
    *(unsigned int *)(((0xC46DE94 + ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2)) + 0xC)) = a5;
    return ((((unsigned char)t1 << 2) + (unsigned char)t1) << 2);
}

int FUN_0c05afec(int a4, int a5)
{
    register float u2;

    u2 = ((float)a5 * ((((struct o0_float *)0xC46E168)->v)));
    return FUN_0c180bec(a4, 0x10A5, (int)(u2 * ((((struct o28_float *)0xC46E168)->v))));
}

int FUN_0c05b00c(void)
{
    bgm_stop_slot(0x1);
    return FUN_0c05a5a8(0x1);
}

void FUN_0c05b018(int a4, int a5, int a6, int a7, int a8)
{
    *(unsigned int *)((a4 + 0x14)) = a6;
    *(unsigned int *)((a4 + 0x4)) = a5;
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(unsigned int *)((a4 + 0x8)) = a7;
    *(unsigned int *)((a4 + 0xC)) = a8;
}

int FUN_0c05b048(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o0_int *)0xC1C3444)->v)), ((((struct o4_int *)0xC1C3444)->v)));
}

int FUN_0c05b052(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o4_int *)0xC1C3444)->v)), ((((struct o0_int *)0xC1C3444)->v)));
}

int FUN_0c05b05c(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, (*(int *)0xC46DFFC), (*(int *)0xC1C3444));
}

int FUN_0c05b0a0(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o0_int *)0xC1C3448)->v)), ((((struct o4_int *)0xC1C3448)->v)));
}

int FUN_0c05b0b4(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o8_int *)0xC1C3444)->v)), ((((struct o0_int *)0xC1C3444)->v)));
}

int FUN_0c05b0d6(int a4, int a5)
{
    register float u2;

    u2 = ((float)(a5 & 0x7F) * (*(float *)0xC46E164));
    return FUN_0c180a6c((a4 & 0x7), 0x4A0, (int)(u2 * (*(float *)((((a4 & 0x7) << 2) + 0xC46E174)))));
}

int FUN_0c05b10c(int a4)
{
    return FUN_0c180a6c((a4 & 0x7), 0x1200A0, 0x0);
}

int FUN_0c05b122(int a4)
{
    int stk[1];
    register int t1;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t1 = 0x800A0;
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        t1 = 0x900A0;
    }
    FUN_0c180a6c(0x0, t1, 0x0);
    if ((*(signed char *)(((int)stk + 0))) == 0) {
        *(unsigned int *)0xC46E194 = 0xFFFFFFD3;
    } else {
        *(unsigned int *)0xC46E194 = 0x0;
    }
    return 0x300;
}

int FUN_0c05b15c(void)
{
    register int t1;

    FUN_0c05b0d6(0x0, 0x7F);
    t1 = 0x1;
    for (;;) {
        FUN_0c05aec8(t1, 0x7F);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    FUN_0c05aca8(0x0, ((((struct o0_int *)0xC46DFE4)->v)));
    FUN_0c05aca8(0x1, ((((struct o18_int *)0xC46DFE4)->v)));
    FUN_0c05afec(0x0, 0x7F);
    FUN_0c05afec(0x1, 0x7F);
    return FUN_0c05afec(0x2, 0x7F);
}

int FUN_0c05b1d4(void)
{
    (((struct o0_float *)0xC46E164)->v) = ((((struct o8_float *)0xC46E164)->v));
    (((struct o4_float *)0xC46E164)->v) = ((((struct oC_float *)0xC46E164)->v));
    return FUN_0c05b15c();
}

int FUN_0c05b1e8(void)
{
    register float u0;

    u0 = *(float *)0xC05B278;
    (((struct o0_float *)0xC46E164)->v) = (((((struct o8_float *)0xC46E164)->v)) * u0);
    (((struct o4_float *)0xC46E164)->v) = (((((struct oC_float *)0xC46E164)->v)) * u0);
    return FUN_0c05b15c();
}

int FUN_0c05b204(void)
{
    (((struct o0_float *)0xC46E164)->v) = (((((struct o8_float *)0xC46E164)->v)) * 0.0f);
    (((struct o4_float *)0xC46E164)->v) = (((((struct oC_float *)0xC46E164)->v)) * 0.0f);
    return FUN_0c05b15c();
}

int FUN_0c05b21e(void)
{
    (((struct o0_float *)0xC46E164)->v) = (((((struct o8_float *)0xC46E164)->v)) * 0.0f);
    (((struct o4_float *)0xC46E164)->v) = (((((struct oC_float *)0xC46E164)->v)) * 0.0f);
    FUN_0c05b15c();
    FUN_0c2b48e6(((((struct o0_int *)0xC46DE80)->v)), 0xFFFFFC40);
    return FUN_0c2b48e6(((((struct o4_int *)0xC46DE80)->v)), 0xFFFFFC40);
}

int FUN_0c05b250(void)
{
    *(unsigned int *)0xC46E1A0 = ((*(int *)0xC46E1A0) + 0x1);
    *(unsigned int *)0xC46E1A0 = ((*(int *)0xC46E1A0) & 0x3);
    return FUN_0c05aab6((*(int *)0xC46E1A0), 0x0);
}
