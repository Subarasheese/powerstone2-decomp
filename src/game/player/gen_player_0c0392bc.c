/* game/player: functions 0C0392BC-0C03A56E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c039a12(int);
int FUN_0c039df8(int);
int FUN_0c03a536(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int, int);
int math_mat_get_translate(int, int);
int math_vec3i_sub(int, int, int);
int FUN_0c0584b0(int, int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
float math_sin_angle16(int);
int nlCalcPoint(int, int);
int nlStoreMatrix(int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int);
int nlSelectMatrixStack(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslateV(int);
int FUN_0c17c130(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int memset(int, int, int);
int FUN_0c0392bc(int a4);
int FUN_0c0392d4(int a4, int a5, int a6);
int FUN_0c03934e(int a4);
int FUN_0c0397a4(void);
int FUN_0c0397a8(int a4, float f4, float f5);
int FUN_0c0397ba(int a4, float f4, float f5);
int FUN_0c0397cc(float f4, float f5);
int FUN_0c0397da(float f4, float f5);
int FUN_0c0397e8(int a4, float f4, float f5);
int FUN_0c0397fa(int a4, float f4, float f5);
int FUN_0c03980c(int a4, float f4, float f5);
int FUN_0c039824(int a4);
float FUN_0c039846(int a4, float f4);
int FUN_0c0398f0(int a4, int a5, int a6);
int FUN_0c03999c(int a4, int a5, int a6, int a7);
int FUN_0c039edc(int a4);
int FUN_0c039ee6(int a4);
int FUN_0c039f24(void);
int FUN_0c039f82(void);
int FUN_0c039fbc(void);
int FUN_0c03a028(int a4);
int FUN_0c03a0cc(int a4, int a5);
int FUN_0c03a178(int a4, int a5);

int FUN_0c0392bc(int a4)
{
    return memset((((*(signed char *)((a4 + 0x1))) << 2) + 0xC3BD880), 0x0, 0x4);
}

int FUN_0c0392d4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x371A));
    if (a5 != 0) {
        t1 = (((t0 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
        if (a5 != 1) {
            t1 = (((0x21E4 + (0x444 + a4)) + (t0 * 0x2D0)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
            if (a5 != 2) {
                t1 = (((0x2784 + (0x444 + a4)) + (t0 * 0x2D0)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
                if (a5 != 3) {
                    t1 = (((0x2D24 + (0x444 + a4)) + (t0 * 0x2D0)) + (((((a6 << 2) << 1) + a6) << 2) << 2));
                    if (a5 != 4) {
                        t1 = 0x0;
                    }
                }
            }
        }
        t0 = t1;
    } else {
        t0 = (*(int *)(((0xC4 + a4) + (a6 << 2))));
    }
    return t0;
}


int FUN_0c0397a4(void)
{
    return 0x0;
}

int FUN_0c0397a8(int a4, float f4, float f5)
{
    if (f5 > ((((struct o4_float *)(a4))->v))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397ba(int a4, float f4, float f5)
{
    if (((((struct o4_float *)(a4))->v)) > f5) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397cc(float f4, float f5)
{
    if (f5 > f4) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397da(float f4, float f5)
{
    if (f5 > f4) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397e8(int a4, float f4, float f5)
{
    if (((((struct o8_float *)(a4))->v)) > f5) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0397fa(int a4, float f4, float f5)
{
    if (f5 > ((((struct o8_float *)(a4))->v))) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c03980c(int a4, float f4, float f5)
{
    if (!(f5 > f4)) {
        if (((((struct o4_float *)(a4))->v)) > 1.0f) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0xFFFFFFFF;
}

int FUN_0c039824(int a4)
{
    if (((((struct o0_float *)0xC039984)->v)) > ((((struct o4_float *)(a4))->v))) {
        if (((((struct o8_float *)(a4))->v)) > ((((struct o4_float *)0xC039984)->v))) {
            return 0xFFFFFFFF;
        }
        return 0x0;
    }
    return 0x0;
}

float FUN_0c039846(int a4, float f4)
{
    int stk[3];
    register float u0;
    register int t1;
    register int t2;
    register int t7;
    register float u12;
    register int t16;
    register int t46;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register float u9;
    register float u10;
    register float u11;
    register float u13;
    register int t43;
    register float u47;
    register float u48;
    register float u40;
    register float u41;

    u0 = *(float *)0xC03998C;
    t1 = 0xC03998C;
    t2 = a4;
    t7 = 0x0;
    u12 = f4;
    for (;;) {
        if ((int)(short)t7 >= (int)(*(int *)((a4 + 0x2C)))) {
            break;
        }
        t4 = (short)t7;
        u13 = u0;
        t16 = t4;
        t4 = (t4 << 1);
        t4 = (t4 + t16);
        t6 = (short)t7;
        t3 = (short)t7;
        t4 = (t4 << 2);
        t6 = (t6 << 2);
        t8 = 0x0;
        t3 = (t3 << 1);
        for (;;) {
            if ((int)(short)t8 >= (int)(*(int *)((a4 + 0x2C)))) {
                break;
            }
            t46 = t2;
            if ((short)t7 != (short)t8) {
                t1 = (*(int *)((a4 + 0x3C)));
                u10 = (*(float *)((((short)t8 << 2) + t1)));
                u11 = (*(float *)((t6 + t1)));
                if (u11 > u10) {
                    t5 = (*(int *)((a4 + 0x30)));
                    t2 = ((int)stk + 0);
                    t1 = (FUN_0c0e2390(t2, (((((short)t8 << 1) + (short)t8) << 2) + t5), (t5 + t4)));
                    t2 = ((int)stk + 0);
                    u9 = (FUN_0c0e2340(t2));
                    u12 = u9;
                    if (u13 > u12) {
                        t1 = (*(int *)((a4 + 0x24)));
                        u13 = u12;
                        *(unsigned short *)((t3 + t1)) = t8;
                        t1 = 0x40;
                        t1 = (*(int *)((a4 + t1)));
                        *(float *)((t6 + t1)) = u12;
                        t43 = t1;
                    }
                } else {
                    t43 = t1;
                    t46 = t2;
                    u40 = u10;
                    u41 = u11;
                }
                u47 = u40;
                u48 = u41;
            } else {
                t43 = t1;
                u47 = u10;
                u48 = u11;
            }
            u10 = u47;
            u11 = u48;
            t1 = t43;
            t8 = (t8 + 0x1);
            t2 = t46;
        }
        t7 = (t7 + 0x1);
    }
    return u9;
}


int FUN_0c03999c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a6 != 0) {
        t0 = (((a5 * 0x10E0) + ((0x444 + a4) + 0x24)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
        if (a6 != 1) {
            t1 = (((0x21E4 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
            if (a6 != 2) {
                t1 = (((0x2784 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
                if (a6 != 3) {
                    t1 = (((0x2D24 + (0x444 + a4)) + (a5 * 0x2D0)) + (((((a7 << 2) << 1) + a7) << 2) << 2));
                    if (a6 != 4) {
                        t1 = 0x0;
                    }
                }
            }
            t0 = t1;
        }
        t1 = t0;
    } else {
        t1 = (*(int *)(((0xC4 + a4) + (a7 << 2))));
    }
    return t1;
}

int FUN_0c039edc(int a4)
{
    *(unsigned int *)(((a4 << 2) + 0xC3C7E00)) = 0x0;
    return 0xC3C7E00;
}

int FUN_0c039ee6(int a4)
{
    register int t1;
    register int t2;

    *(unsigned int *)(((a4 << 2) + 0xC3C7E00)) = 0x0;
    t1 = ((a4 << 1) + 0xC3C7DF8);
    t2 = 0x0;
    for (;;) {
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x1);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return 0x2;
}

int FUN_0c039f24(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0xC540978;
    t1 = 0xC3C7E00;
    t2 = 0xC532498;
    for (;;) {
        if ((*(int *)((t1 + 0x0))) != 0) {
            t4 = 0x0;
            for (;;) {
                t3 = 0x371A;
                *(unsigned char *)((t2 + t3)) = t4;
                t0 = t2;
                t3 = (FUN_0c039df8(t0));
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)0x2) {
                    break;
                }
            }
            t3 = 0x371A;
            *(unsigned char *)((t2 + t3)) = 0x0;
        } else {
            t4 = t0;
        }
        t0 = t4;
        t2 = (t2 + 0x3938);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t3;
}

int FUN_0c039f82(void)
{
    register int t0;
    register int t1;

    t0 = 0xC3C7E00;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x1;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC3C7E10) {
            break;
        }
    }
    t0 = FUN_0c039f24();
    t1 = 0xC3C7E00;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC3C7E10) {
            break;
        }
    }
    *(unsigned int *)0xC3BD890 = 0x0;
    *(unsigned int *)0xC3C7DD4 = 0x0;
    return t0;
}

int FUN_0c039fbc(void)
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

    t0 = FUN_0c039f24();
    *(unsigned int *)0xC3BD890 = 0x0;
    *(unsigned int *)0xC3C7DD4 = 0x0;
    t1 = t0;
    t0 = 0xC3C7DD4;
    t2 = 0xC3BD890;
    t3 = 0xC532498;
    t4 = 0xC3C7E00;
    t5 = 0xC532498;
    for (;;) {
        if ((unsigned int)t5 >= (unsigned int)0xC540978) {
            break;
        }
        t1 = 0x3714;
        t3 = t5;
        t2 = (*(signed char *)((t3 + t1)));
        if (t2 != 0) {
            t1 = (FUN_0c039a12(t3));
            *(unsigned int *)((t4 + 0x0)) = 0x1;
        } else {
            t6 = t0;
            t7 = t2;
            t8 = t3;
        }
        t5 = (t5 + 0x3938);
        t0 = t6;
        t2 = t7;
        t3 = t8;
        t4 = (t4 + 0x4);
    }
    return t1;
}

int FUN_0c03a028(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t3 = *(signed char *)((a4 + 0x1));
    t4 = *(signed char *)(((0x371A + a4) + 0x0));
    t5 = *(int *)((((t4 << 2) + (0xC3C7DD8 + ((t3 << 2) << 1))) + 0x0));
    t6 = *(signed char *)((((0xC3C7DF8 + (t3 << 1)) + t4) + 0x0));
    t3 = 0xA8;
    if ((*(signed char *)((a4 + 0xA8))) != 0) {
        t4 = *(signed char *)((a4 + 0x2));
        t7 = t4;
        if ((int)t4 < (int)(*(int *)0xC1B71E4)) {
            t4 = 0xC54208F;
            if (((*(signed char *)((a4 + 0x375B))) != 0) && ((t0 = *(signed char *)0xC54208F, t0 != 0) && (t1 = *(signed char *)0xC542092, t1 != 0))) {
            } else {
                t0 = (nlSelectMatrixStack(0x1));
                t1 = t2;
                t2 = 0x0;
                t8 = t5;
                for (;;) {
                    if ((int)t2 >= (int)t6) {
                        break;
                    }
                    t5 = t8;
                    t0 = (*(signed char *)((t5 + 0x1)));
                    t9 = t0;
                    t0 = 0x371A;
                    t1 = (*(signed char *)((a4 + t0)));
                    t0 = (FUN_0c03999c(a4, t1, (*(signed char *)((t5 + 0x0))), t9));
                    t1 = t0;
                    t9 = (*(int *)((t1 + 0x8)));
                    if (t9 != 0) {
                        t0 = (FUN_0c03a536(t5, t1));
                    } else {
                        t5 = t9;
                        t10 = t1;
                    }
                    t8 = (t8 + 0x48);
                    t9 = t5;
                    t1 = t10;
                    t2 = (t2 + 0x1);
                }
                t4 = t0;
            }
            t7 = t4;
        }
        t3 = t7;
    }
    return t3;
}

int FUN_0c03a0cc(int a4, int a5)
{
    int stk[9];
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t10;
    register int t13;
    register int t14;
    register int t30;
    register int t32;
    register int t33;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t11 = *(int *)((a4 + 0x28));
    *(unsigned int *)(((int)stk + 16)) = ((((struct o44_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x2C)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((a4 + 0x34)));
    t7 = *(int *)((a4 + 0x30));
    *(unsigned int *)(((int)stk + 4)) = t7;
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x38)));
    t6 = 0x44;
    t8 = a4;
    t9 = a5;
    t12 = 0x0;
    for (;;) {
        if ((int)t12 >= (int)(*(int *)(((int)stk + 20)))) {
            break;
        }
        t14 = *(short *)((t11 + 0x0));
        t11 = (t11 + 0x2);
        t6 = (*(int *)(((int)stk + 16)));
        t13 = t14;
        t13 = (t13 << 2);
        if ((*(int *)((t13 + t6))) != 0) {
            t10 = t14;
            t10 = (t10 << 1);
            t8 = (*(int *)(((int)stk + 4)));
            t10 = (t10 + t14);
            t9 = ((int)stk + 0);
            t9 = (t9 + 0x18);
            t10 = (t10 << 2);
            t8 = (t8 + t10);
            t6 = (nlCalcPoint(t8, t9));
            t6 = (*(int *)(((int)stk + 8)));
            t9 = ((int)stk + 0);
            t8 = (*(int *)((t13 + t6)));
            t8 = (t8 << 2);
            t8 = (t8 + (*(int *)(((int)stk + 0))));
            t9 = (t9 + 0x18);
            t6 = (FUN_0c0e2390(t8, t9, ((*(int *)(((int)stk + 12))) + t10)));
        } else {
            t30 = t7;
            t32 = t8;
            t33 = t9;
        }
        t12 = (t12 + 0x1);
        t7 = t30;
        t8 = t32;
        t9 = t33;
    }
    return t6;
}

int FUN_0c03a178(int a4, int a5)
{
    int stk[9];
    register float u5;
    register int t7;
    register float u8;
    register int t9;
    register float u10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register float u20;
    register float u30;
    register float u42;
    register float u40;
    register float u52;
    register float u53;
    register int t54;
    register float u58;
    register int t60;
    register float u63;
    register int t17;
    register int t18;
    register int t19;
    register float u21;
    register int t66;
    register int t67;
    register int t68;
    register float u69;

    *(unsigned int *)(((int)stk + 4)) = a5;
    t16 = *(int *)((a4 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = ((((struct o44_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((a4 + 0x2C)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x34)));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)((a4 + 0x38)));
    u5 = (((struct o20_float *)(a4))->v);
    t7 = *(int *)((a4 + 0x3C));
    *(float *)(((int)stk + 12)) = ((((struct o18_float *)(a4))->v));
    u8 = (((struct o1C_float *)(a4))->v);
    *(float *)(((int)stk + 32)) = u8;
    t9 = *(int *)0xC542260;
    u10 = (((struct o14_float *)(a4))->v);
    *(unsigned int *)(((int)stk + 20)) = ((t9 << 8) << 2);
    t11 = 0x14;
    t12 = ((t9 << 8) << 2);
    t13 = a4;
    t14 = a5;
    t15 = 0x0;
    u20 = u8;
    for (;;) {
        if ((int)t15 >= (int)(*(int *)(((int)stk + 24)))) {
            break;
        }
        t19 = *(short *)((t16 + 0x0));
        t16 = (t16 + 0x2);
        t11 = (*(int *)(((int)stk + 8)));
        t13 = t19;
        t13 = (t13 << 2);
        t12 = (*(int *)((t13 + t11)));
        if (t12 != 0) {
            t18 = (*(int *)(((int)stk + 20)));
            t11 = t13;
            u30 = *(float *)((t7 + t11));
            t11 = 0xC03A404;
            u20 = (*(float *)((t11 + 0x0)));
            t12 = (int)(u30 * u20);
            t18 = (t18 + t12);
            if (u30 != 0.0f) {
                t11 = 0x8;
                u21 = 1.0f;
                u21 = (u21 + u21);
                u21 = (u21 / (u30 * (*(float *)((((int)stk + 4) + t11)))));
            } else {
                u21 = 1.0f;
            }
            if (u21 > 1.0f) {
                u21 = 1.0f;
            } else {
                if (u10 > u21) {
                    u21 = u10;
                }
            }
            t11 = 0x1C;
            u20 = (*(float *)((((int)stk + 4) + t11)));
            u42 = 1.0f;
            if ((u21 * u20) > 1.0f) {
            } else {
                u40 = (u21 * u20);
                if (u10 > (u21 * u20)) {
                    u40 = u10;
                }
                u42 = u40;
            }
            t11 = (*(int *)(((int)stk + 16)));
            t12 = (*(int *)(((int)stk + 4)));
            t17 = (*(int *)((t13 + t11)));
            t17 = (t17 << 2);
            t17 = (t17 + t12);
            t13 = t17;
            t11 = (math_vec3_mul_xyz(t13, u21, u42, u21));
            t12 = t19;
            t19 = (t19 << 1);
            t19 = (t19 + t12);
            t19 = (t19 << 2);
            t12 = 0xC17C130;
            t19 = (t19 + (*(int *)(((int)stk + 28))));
            t14 = t19;
            t13 = t19;
            t11 = (FUN_0c17c130(t13, t14, t17));
            t13 = t18;
            u52 = *(float *)((t19 + 0x0));
            t12 = t19;
            u20 = (math_sin_angle16(t13));
            t11 = 0x4;
            u53 = u52;
            u53 = u53 + u5 * u20;
            t12 = (t12 + t11);
            t13 = t18;
            *(float *)((t19 + 0x0)) = u53;
            t54 = t12;
            *(int *)((int)stk + 0) = t54;
            t13 = (t13 << 1);
            t12 = t19;
            u20 = (math_sin_angle16(t13));
            t11 = 0x8;
            t12 = (t12 + t11);
            t13 = t18;
            u58 = (*(float *)((t54 + 0x0)));
            u58 = u58 + u5 * u20;
            t13 = (t13 << 1);
            *(float *)((t54 + 0x0)) = u58;
            t60 = t12;
            *(int *)((int)stk + 0) = t60;
            t12 = t18;
            t13 = (t13 + t12);
            t14 = t17;
            u20 = (math_sin_angle16(t13));
            u63 = (*(float *)((t60 + 0x0)));
            u63 = u63 + u5 * u20;
            t12 = 0xC17A870;
            *(float *)((t60 + 0x0)) = u63;
            t13 = t19;
            t11 = (nlCalcPoint(t13, t14));
        } else {
            t66 = t12;
            t67 = t13;
            t68 = t14;
            u69 = u20;
        }
        u20 = u69;
        t12 = t66;
        t13 = t67;
        t14 = t68;
        t15 = (t15 + 0x1);
    }
    return t11;
}


