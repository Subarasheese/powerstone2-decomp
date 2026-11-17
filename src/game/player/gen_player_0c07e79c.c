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

int FUN_0c07e868(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t5;
    register int t17;
    register int t18;
    register int t23;
    register int t24;
    register int t30;
    register int t34;
    register int t38;
    register int t45;
    register int t50;
    register int t51;
    register int t53;
    register int t58;
    register int t65;
    register int t70;
    register int t71;
    register int t73;
    register int t148;
    register int t150;
    register int t151;
    register int t152;
    register int t177;
    register int t179;
    register int t180;
    register int t181;
    register int t182;
    register int t189;
    register int t191;
    register int t192;
    register int t193;
    register int t88;
    register int t76;
    register int t97;
    register int t98;
    int t99;
    register int t146;
    int t147;
    register int t158;
    register int t159;
    int t160;
    register int t175;
    int t176;
    register int t187;
    int t188;

    t5 = 0x0;
    if ((*(signed char *)((a4 + 0x3721))) == 0) {
    } else {
        t5 = (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34) + 0xC2738BD)));
    }
    if ((*(signed char *)((((*(int *)(((((signed char)t5 << 2) + 0xC277FB0) + 0x0))) + (((signed char)a5 << 2) << 1)) + 0x0))) == 0) {
        t17 = *(signed char *)((((*(int *)(((((signed char)t5 << 2) + 0xC277FB0) + 0x0))) + (((signed char)a5 << 2) << 1)) + 0x2));
        t18 = *(int *)(((((signed char)t5 << 2) + 0xC277FB0) + 0x0));
        t88 = t17;
        if (t17 == 0) {
            t88 = (*(signed char *)((a4 + 0x1)));
        }
        t23 = *(signed char *)(((t18 + (((signed char)a5 << 2) << 1)) + 0x5));
        t24 = *(int *)(((((signed char)t5 << 2) + 0xC277FB0) + 0x0));
        t193 = t23;
        if (t23 == 0) {
            t193 = (*(signed char *)((a4 + 0x1)));
        }
        *(unsigned int *)(((int)stk + 16)) = (unsigned char)(*(signed char *)(((t24 + (((signed char)a5 << 2) << 1)) + 0x3)));
        t30 = *(signed char *)(((t24 + (((signed char)a5 << 2) << 1)) + 0x6));
        *(unsigned int *)(((int)stk + 12)) = (unsigned char)(*(signed char *)(((t24 + (((signed char)a5 << 2) << 1)) + 0x4)));
        t191 = (unsigned char)(*(signed char *)(((t24 + (((signed char)a5 << 2) << 1)) + 0x7)));
        t192 = (unsigned char)t30;
    } else {
        t34 = *(signed char *)((((((signed char)a5 << 2) << 1) + (*(int *)(((((signed char)t5 << 2) + 0xC277FB0) + 0x0)))) + 0x1));
        if ((*(signed char *)((a4 + 0x371C))) == 0) {
            t38 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0xE) + (*(int *)(((((unsigned char)t34 << 2) + 0xC278818) + 0x0)))) + 0x2));
            t88 = t38;
            if (t38 == 0) {
                t88 = (*(signed char *)((a4 + 0x1)));
            }
            t45 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0xE) + (*(int *)(((((unsigned char)t34 << 2) + 0xC278818) + 0x0)))) + 0x5));
            t193 = t45;
            if (t45 == 0) {
                t193 = (*(signed char *)((a4 + 0x1)));
            }
            t50 = *(signed char *)((a4 + 0x2));
            t51 = *(int *)(((((unsigned char)t34 << 2) + 0xC278818) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = (unsigned char)(*(signed char *)(((((short)t50 * (short)0xE) + t51) + 0x3)));
            t53 = *(signed char *)(((((short)t50 * (short)0xE) + t51) + 0x6));
            *(unsigned int *)(((int)stk + 12)) = (unsigned char)(*(signed char *)(((((short)t50 * (short)0xE) + t51) + 0x4)));
            t76 = (*(signed char *)(((((short)t50 * (short)0xE) + t51) + 0x7)));
            t192 = (unsigned char)t53;
        } else {
            t58 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0xE) + (*(int *)(((((unsigned char)t34 << 2) + 0xC278818) + 0x0)))) + 0x8));
            t88 = t58;
            if (t58 == 0) {
                t88 = (*(signed char *)((a4 + 0x1)));
            }
            t65 = *(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0xE) + (*(int *)(((((unsigned char)t34 << 2) + 0xC278818) + 0x0)))) + 0xB));
            t193 = t65;
            if (t65 == 0) {
                t193 = (*(signed char *)((a4 + 0x1)));
            }
            t70 = *(signed char *)((a4 + 0x2));
            t71 = *(int *)(((((unsigned char)t34 << 2) + 0xC278818) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = (unsigned char)(*(signed char *)(((((short)t70 * (short)0xE) + t71) + 0x9)));
            t73 = *(signed char *)(((((short)t70 * (short)0xE) + t71) + 0xC));
            *(unsigned int *)(((int)stk + 12)) = (unsigned char)(*(signed char *)(((((short)t70 * (short)0xE) + t71) + 0xA)));
            t76 = (*(signed char *)(((((short)t70 * (short)0xE) + t71) + 0xD)));
            t192 = (unsigned char)t73;
        }
        t191 = (unsigned char)t76;
    }
    if (((*(signed char *)((a4 + 0x2))) == 10) && ((t97 = *(signed char *)((a4 + 0x371A)), t97 == 0) && ((t88 == -1) && ((t98 = *(int *)(((int)stk + 16)), t98 == 2) && (t99 = *(int *)(((int)stk + 12)), t99 == 25))))) {
        if (((signed char)a5 == 2) && ((t146 = *(signed char *)((a4 + 0x3753)), t146 == -1) && (t147 = (((struct o3818_short *)(a4))->v), (unsigned short)t147 == 4))) {
            t148 = t191;
            *(int *)((int)stk + 8) = t148;
            FUN_0c037ac4(a4, 0x1, t193, t192, t148);
            (((struct o3754_uchar *)(a4))->v) = t193;
            (((struct o381A_ushort *)(a4))->v) = ((t192 << 8) | (unsigned char)t191);
        } else {
            t150 = t191;
            *(int *)((int)stk + 8) = t150;
            t151 = t192;
            *(int *)((int)stk + 4) = t151;
            t152 = t193;
            *(int *)((int)stk + 0) = t152;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x4, t152, t151, t150);
        }
    } else {
        if (((*(signed char *)((a4 + 0x2))) == 14) && ((t158 = *(signed char *)((a4 + 0x371A)), t158 == 0) && ((t88 == -1) && ((t159 = *(int *)(((int)stk + 16)), t159 == 2) && (t160 = *(int *)(((int)stk + 12)), t160 == 25))))) {
            if (((signed char)a5 == 2) && ((t175 = *(signed char *)((a4 + 0x3753)), t175 == -1) && (t176 = (((struct o3818_short *)(a4))->v), (unsigned short)t176 == 4))) {
                t177 = t191;
                *(int *)((int)stk + 8) = t177;
                FUN_0c037ac4(a4, 0x1, t193, t192, t177);
                (((struct o3754_uchar *)(a4))->v) = t193;
                (((struct o381A_ushort *)(a4))->v) = ((t192 << 8) | (unsigned char)t191);
            } else {
                t179 = *(signed char *)((a4 + 0x1));
                t180 = t191;
                *(int *)((int)stk + 8) = t180;
                t181 = t192;
                *(int *)((int)stk + 4) = t181;
                t182 = t193;
                *(int *)((int)stk + 0) = t182;
                FUN_0c07e79c(a4, t179, 0x6, 0x40, t182, t181, t180);
            }
        } else {
            if (((signed char)a5 == 2) && ((t187 = *(signed char *)((a4 + 0x3753)), t187 == -1) && (t188 = (((struct o3818_short *)(a4))->v), (unsigned short)t188 == 0x219))) {
                t189 = t191;
                *(int *)((int)stk + 8) = t189;
                FUN_0c037ac4(a4, 0x1, t193, t192, t189);
                (((struct o3754_uchar *)(a4))->v) = t193;
                (((struct o381A_ushort *)(a4))->v) = ((t192 << 8) | (unsigned char)t191);
            } else {
                *(int *)((int)stk + 8) = t191;
                *(int *)((int)stk + 4) = t192;
                *(int *)((int)stk + 0) = t193;
                FUN_0c07e79c(a4, t88, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), t193, t192, t191);
            }
        }
    }
    if ((*(int *)(((((signed char)t5 << 2) + 0xC277FF4) + 0x0))) != 99) {
        return FUN_0c038958(a4, (*(int *)(((((signed char)t5 << 2) + 0xC277FF4) + 0x0))));
    }
    (((struct o446_uchar *)(a4))->v) = 0x0;
    (((struct o447_uchar *)(a4))->v) = 0x0;
    (((struct o445_uchar *)(a4))->v) = 0x0;
    return 0x445;
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

int FUN_0c07ecc6(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c064ee4(a4, 0x2);
    if (t0 != 0) {
        (((struct o37B4_float *)(a4))->v) = (FUN_0c064d9c(t0));
        if ((*(signed char *)((a4 + 0x371D))) == 2) {
            FUN_0c081dfc(a4);
            (((struct o3722_uchar *)(a4))->v) = 0x0;
            t0 = 0x2;
        } else {
            u0 = 0.0f;
            if (a6 == 0) {
                u0 = (*(float *)((0xC1C5E5C + ((*(signed char *)((a4 + 0x2))) << 2))));
            }
            if (((((struct o37B4_float *)(a4))->v)) > (((((struct o2C_float *)(a4))->v)) + u0)) {
                FUN_0c081dfc(a4);
                (((struct o371D_uchar *)(a4))->v) = 0x2;
                (((struct o3722_uchar *)(a4))->v) = 0x0;
                t1 = 0x2;
            } else {
                t2 = FUN_0c064f80(a4);
                if (t2 != 0) {
                    (((struct o3722_uchar *)(a4))->v) = 0x0;
                    (((struct o37A4_float *)(a4))->v) = 0.0f;
                    t2 = 0x1;
                } else {
                    t3 = 0x0;
                    if (a5 != 0) {
                        t4 = *(signed char *)((a4 + 0x3722));
                        (((struct o3722_uchar *)(a4))->v) = (t4 + 0x1);
                        t3 = 0x0;
                        if ((int)(signed char)(t4 + 0x1) < (int)0x14) {
                            t3 = 0x1;
                        }
                    }
                    t2 = t3;
                }
                t1 = t2;
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t0 = FUN_0c064f80(a4);
        if (t0 != 0) {
            (((struct o3722_uchar *)(a4))->v) = 0x0;
            (((struct o37A4_float *)(a4))->v) = 0.0f;
            t0 = 0x1;
        } else {
            t2 = 0x0;
            if (a5 != 0) {
                t3 = *(signed char *)((a4 + 0x3722));
                (((struct o3722_uchar *)(a4))->v) = (t3 + 0x1);
                t4 = 0x0;
                if ((int)(signed char)(t3 + 0x1) < (int)0x14) {
                    t4 = 0x1;
                }
                t2 = t4;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
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

int FUN_0c07f720(int a4, int a5, int a6)
{
    int stk[10];
    int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u11;
    register float u43;
    register float u20;
    register int t47;
    register int t1;
    register float u9;
    register float u10;
    register float u12;
    register int t13;
    register int t14;
    register int t15;
    register int t38;
    register int t40;
    register int t41;
    register int t42;
    int t23;
    register int t24;
    register float u37;
    int t27;
    register int t28;
    register float u35;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = 0xC07F810;
    t2 = 0xC532498;
    t3 = a5;
    t4 = a6;
    t5 = 0xC532498;
    t6 = 0x0;
    t7 = 0xC532498;
    t8 = 0xC532498;
    u11 = 99999.0f;
    for (;;) {
        u43 = u9;
        if ((a4 != ((t6 * 0x3938) + 0xC532498)) && ((t0 = 0x3719, t13 = *(signed char *)((((t6 * 0x3938) + 0xC532498) + t0)), t1 = t13, t14 = *(signed char *)((a4 + t0)), t14 != t1) && (t0 = 0x3714, t15 = *(signed char *)((((t6 * 0x3938) + 0xC532498) + t0)), t15 != 0))) {
            t0 = 0x28;
            u10 = (*(float *)((a4 + t0)));
            u9 = (*(float *)((t8 + t0)));
            t0 = 0x30;
            u12 = (*(float *)((a4 + t0)));
            u10 = (u10 - u9);
            u12 = (u12 - (*(float *)((t8 + t0))));
            u9 = u12;
            u9 = (u9 * u12);
            u20 = u9;
            u20 = u20 + u10 * u10;
            u9 = u20;
            t1 = 0xC064F8E;
            t3 = ((int)stk + 0);
            u12 = (math_signed_sqrt(u9));
            t3 = (t3 + 0x8);
            t2 = a4;
            t0 = (FUN_0c064f8e(t2, t3));
            if ((t0 != 0) && (t23 = *(signed char *)(((int)stk + 9)), t24 = (t0 == 0), t0 = t23, t0 == 2)) {
                t0 = 0x1C;
                u9 = (*(float *)((((int)stk + 0) + t0)));
                t3 = ((int)stk + 0);
                t3 = (t3 + 0x8);
                u12 = (u12 - u9);
                t2 = t5;
                t0 = (FUN_0c064f8e(t2, t3));
                if ((t0 != 0) && (t27 = *(signed char *)(((int)stk + 9)), t28 = (t0 == 0), t0 = t27, t0 == 2)) {
                    t0 = 0x1C;
                    u9 = (*(float *)((((int)stk + 0) + t0)));
                    u12 = (u12 - u9);
                    if (u11 > u12) {
                        t0 = (*(signed char *)((t7 + 0x1)));
                        t1 = (*(int *)(((int)stk + 0)));
                        u11 = u12;
                        *(unsigned int *)((t1 + 0x0)) = t0;
                        t38 = t1;
                    }
                    u35 = u9;
                }
                u37 = u35;
            }
            u43 = u37;
        } else {
            t38 = t1;
            t40 = t2;
            t41 = t3;
            t42 = t4;
        }
        u9 = u43;
        t1 = t38;
        t2 = t40;
        t3 = t41;
        t4 = t42;
        t6 = (t6 + 0x1);
        t7 = (t7 + 0x3938);
        t5 = (t5 + 0x3938);
        t8 = (t8 + 0x3938);
        if ((int)t6 >= (int)0x4) {
            break;
        }
    }
    t47 = 0x0;
    if (u11 == 99999.0f) {
    } else {
        *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u11;
        t47 = 0x1;
    }
    return t47;
}

int FUN_0c07f9a2(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u1 = (((struct o160_float *)(a4))->v);
    t8 = 0x0;
    if ((u1 > 1.0f) && (t0 = (((struct o381E_short *)(a4))->v), t0 == 0)) {
        t9 = 0xC07F9FC;
        t10 = t0;
        t0 = 0xC532498;
        t11 = a5;
        t12 = 0xC532498;
        t13 = 0xC532498;
        t14 = 0x0;
        t15 = 0xC532498;
        t16 = 0x0;
        u2 = u1;
        u1 = 1.0f;
        u3 = f4;
        u4 = 100000.0f;
        for (;;) {
            if ((int)t14 >= (int)0x4) {
                break;
            }
            t10 = (t14 * 0x3938);
            t10 = (t10 + 0xC532498);
            if ((a4 != t10) && (t9 = 0x3714, t1 = *(signed char *)((t12 + t9)), t1 != 0)) {
                t9 = 0x28;
                t10 = 0xC1794E0;
                u5 = (*(float *)((a4 + t9)));
                u1 = (*(float *)((t15 + t9)));
                t9 = 0x30;
                u6 = (*(float *)((a4 + t9)));
                u7 = (*(float *)((t15 + t9)));
                u5 = (u5 - u1);
                u6 = (u6 - u7);
                u7 = u5;
                u1 = u6;
                u1 = (u1 * u6);
                u6 = u1;
                u6 = u6 + u7 * u5;
                u1 = u6;
                u3 = u1;
                u7 = (math_signed_sqrt(u3));
                u3 = u7;
                if (u4 > u3) {
                    t16 = t13;
                    t9 = (*(signed char *)((t16 + 0x1)));
                    t10 = a5;
                    u4 = u3;
                    *(unsigned int *)((t10 + 0x0)) = t9;
                    t17 = t9;
                    t18 = t10;
                }
                t19 = t17;
                t17 = t18;
            } else {
                t19 = t9;
                t17 = t10;
                t18 = t0;
                t20 = t11;
                u5 = u2;
                u6 = u1;
            }
            u2 = u5;
            u1 = u6;
            t9 = t19;
            t15 = (t15 + 0x3938);
            t10 = t17;
            t0 = t18;
            t11 = t20;
            t12 = (t12 + 0x3938);
            t14 = (t14 + 0x1);
            t13 = (t13 + 0x3938);
        }
        t0 = 0x0;
        if ((t16 != 0) && ((t2 = *(signed char *)((a4 + 0x3715)), t3 = (int)(((unsigned int)(t2 << 2)) >> 31), t4 = *(signed char *)(((((t2 << 2) << 1) + 0xC25AA84) + 0x0)), t4 != 0) && ((t5 = *(signed char *)((t16 + 0x3715)), t6 = (int)(((unsigned int)(t5 << 2)) >> 31), t7 = *(signed char *)(((((t5 << 2) << 1) + 0xC25AA84) + 0x2)), t7 == 2) && ((u0 = (((struct o160_float *)(t16))->v), u0 == 0.0f) && !(u4 > 200.0f))))) {
            u0 = (((struct o2C_float *)(a4))->v);
            u1 = (((struct o2C_float *)(t16))->v);
            u2 = (u0 - u1);
            if (0.0f > (u0 - u1)) {
                u2 = ((-u0) + u1);
            }
            t1 = 0x1;
            if (u2 > 50.0f) {
                t1 = 0x0;
            }
            t0 = t1;
        }
        t8 = t0;
    }
    return t8;
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
