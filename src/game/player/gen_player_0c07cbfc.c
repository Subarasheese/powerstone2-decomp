/* game/player: functions 0C07CBFC-0C07D6AA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374C_uchar { char p[0x374C]; unsigned char v; };
struct o3752_uchar { char p[0x3752]; unsigned char v; };
struct o3759_uchar { char p[0x3759]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3774_int { char p[0x3774]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o382A_short { char p[0x382A]; short v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o3834_short { char p[0x3834]; short v; };
struct o3836_short { char p[0x3836]; short v; };
struct o383A_short { char p[0x383A]; short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_short { char p[0x383C]; short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o3864_int { char p[0x3864]; int v; };
struct o3864_uint { char p[0x3864]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o74_short { char p[0x74]; short v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0385e0(int, int);
int FUN_0c042fe0(void);
int FUN_0c059df2(int, int);
int FUN_0c0676ce(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
float FUN_0c07cbfc(int a4, int a5, int a6);
int FUN_0c07cce0(int a4, int a5, float f4);
float FUN_0c07cd84(int a4, int a5, int a6);
int FUN_0c07ce58(int a4, int a5, float f4);
int FUN_0c07cf5c(int a4);
int FUN_0c07cffa(int a4);
int FUN_0c07d030(int a4, int a5);
int FUN_0c07d060(int a4, int a5);
float FUN_0c07d086(int a4, int a5, float f4);
int FUN_0c07d15c(int a4);
int FUN_0c07d1fc(int a4);
int thunk_FUN_0c0385e0(int a4, int a5);
int FUN_0c07d2c4(int a4, int a5);
int FUN_0c07d2f2(int a4);
int FUN_0c07d38a(int a4);
int FUN_0c07d440(int a4);
int FUN_0c07d4b4(int a4);
int FUN_0c07d4ec(int a4);
int FUN_0c07d536(int a4);
int math_angle_between_points_xz(int a4, int a5);


int FUN_0c07cce0(int a4, int a5, float f4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u8;
    float u9;
    register float u6;
    register float u7;
    register float u11;
    int t12;
    register int t13;
    register int t22;
    register int t23;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1000 = a5;
    R1004 = 0x0;
    t0 = 0xC532498;
    t1 = a5;
    t2 = 0xC532498;
    t3 = 0x0;
    t4 = 0xC532498;
    t5 = 0xC532498;
    u8 = f4;
    u9 = 100000.0f;
    for (;;) {
        if (((*(signed char *)((((t3 * 0x3938) + 0xC532498) + 0x3714))) != 0) && ((u7 = 0.0f, u11 = (((struct o160_float *)(((t3 * 0x3938) + 0xC532498)))->v), u11 > u7) && ((a4 != ((t3 * 0x3938) + 0xC532498)) && (t12 = *(signed char *)((t4 + 0x3719)), t13 = *(signed char *)((a4 + 0x3719)), t13 != t12)))) {
            t1 = t2;
            t0 = a4;
            u6 = (FUN_0c07cbfc(t0, t1, (R1000)));
            u7 = 0.0f;
            u8 = u6;
            if ((u6 != u7) && (u9 > u8)) {
                u9 = u8;
                R1004 = ((*(signed char *)((t5 + 0x1))) + 0x1);
            }
        } else {
            t22 = t0;
            t23 = t1;
        }
        t0 = t22;
        t1 = t23;
        t3 = (t3 + 0x1);
        t5 = (t5 + 0x3938);
        t2 = (t2 + 0x3938);
        t4 = (t4 + 0x3938);
        if ((int)t3 >= (int)0x4) {
            break;
        }
    }
    return (R1004);
}



int FUN_0c07cf5c(int a4)
{
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x200) != 0) {
        if ((int)((((struct o383A_short *)(a4))->v)) < (int)0xE10) {
            (((struct o383A_ushort *)(a4))->v) = (((((struct o383A_short *)(a4))->v)) + 0x1);
        }
        if (((((struct o383A_short *)(a4))->v)) == 20) {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x61);
        }
    } else {
        (((struct o383A_ushort *)(a4))->v) = 0x0;
    }
    if (((unsigned short)((((struct o42C_short *)(a4))->v)) & 128) != 0) {
        if ((int)((((struct o383C_short *)(a4))->v)) < (int)0xE10) {
            (((struct o383C_ushort *)(a4))->v) = (((((struct o383C_short *)(a4))->v)) + 0x1);
        }
        if (((((struct o383C_short *)(a4))->v)) == 20) {
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x61);
        }
    } else {
        (((struct o383C_ushort *)(a4))->v) = 0x0;
    }
    return 0x0;
}

int FUN_0c07cffa(int a4)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x372E))) != 0) {
        t2 = *(signed char *)((a4 + 0x371D));
        if ((t2 == 3) || ((t2 == 5) || (t2 == 6))) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
        }
        (((struct o372E_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07d030(int a4, int a5)
{
    register int t0;
    register float u3;
    register float u4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x2));
    u3 = (((struct o37B8_float *)(a4))->v);
    u4 = ((*(float *)((((a5 << 2) + (0xC25C6A4 + (((t0 << 1) + t0) << 2))) + 0x0))) * 1.0f);
    (((struct o37B8_float *)(a4))->v) = (u3 - u4);
    t5 = (((t0 << 1) + t0) << 2);
    if (0.0f > (u3 - u4)) {
        (((struct o37B8_float *)(a4))->v) = 0.0f;
        t5 = 0x37B8;
    }
    return t5;
}

int FUN_0c07d060(int a4, int a5)
{
    if ((((unsigned short)(((((struct o430_short *)(a4))->v)) | (((((struct o3836_short *)(a4))->v)) | ((((struct o3834_short *)(a4))->v)))) & (unsigned short)a5) & 0x280) != 0) {
        return 0x1;
    }
    return 0x0;
}

float FUN_0c07d086(int a4, int a5, float f4)
{
    register int t0;
    register float u0;

    if ((signed char)a5 == 0) {
        t0 = (((struct o3770_int *)(a4))->v);
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + f4 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(t0))->v) = u0;
        t0 = (((struct o3770_int *)(a4))->v);
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + f4 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(t0))->v) = u0;
        (((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o2C_float *)(a4))->v));
        *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
    } else {
        t0 = (((struct o3770_int *)(a4))->v);
        u0 = ((((struct o28_float *)(a4))->v));
        u0 = u0 + f4 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(t0))->v) = u0;
        t0 = (((struct o3770_int *)(a4))->v);
        u0 = ((((struct o30_float *)(a4))->v));
        u0 = u0 + f4 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(t0))->v) = u0;
        (((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v) = ((((struct o2C_float *)(a4))->v));
        *(unsigned int *)((((((struct o3770_int *)(a4))->v)) + 0x38)) = (*(int *)((a4 + 0x38)));
    }
    return f4;
}



int thunk_FUN_0c0385e0(int a4, int a5)
{
    return FUN_0c0385e0(a4, a5);
}

int FUN_0c07d2c4(int a4, int a5)
{
    int t1;

    if ((((unsigned short)((((struct o430_short *)(a4))->v)) & 0x3F80) != 0) && (t1 = *(signed char *)((a5 + 0x0)), t1 != 0)) {
        *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
    }
    if (((((struct o160_float *)(a4))->v)) != 0.0f) {
        (((struct o3759_uchar *)(a4))->v) = 0x1;
    }
    return (unsigned char)(*(signed char *)((a5 + 0x0)));
}

int FUN_0c07d2f2(int a4)
{
    register int t7;

    if ((*(signed char *)((a4 + 0x3715))) == 26) {
        (((struct o3752_uchar *)(a4))->v) = 0x0;
        return 0x3752;
    }
    if (((((struct o3774_int *)(a4))->v)) != 0) {
        t7 = ((((((struct o3864_int *)(a4))->v)) - (int)(((float)(*(signed char *)((a4 + 0x373D))) * 737280.0f) / 360.0f)) & 0xFFFF);
    } else {
        t7 = (((*(int *)((a4 + 0x38))) - (int)(((float)(*(signed char *)((a4 + 0x373D))) * 737280.0f) / 360.0f)) & 0xFFFF);
    }
    (((struct o3864_uint *)(a4))->v) = t7;
    if ((int)(*(signed char *)((a4 + 0x130))) < 0) {
        (((struct o130_uchar *)(a4))->v) = 0x0;
    }
    (((struct o3752_uchar *)(a4))->v) = 0x1;
    return 0x3752;
}

int FUN_0c07d38a(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = 0x0;
    if ((*(signed char *)((a4 + 0x3752))) != 0) {
        if ((*(float *)(((((*(signed char *)(((0x3752 + a4) + 0x0))) - 1) << 2) + (*(int *)((0xC25AEA4 + ((*(signed char *)((a4 + 0x373E))) << 2))))))) > 0.0f) {
            u0 = (((struct o28_float *)(a4))->v);
            u1 = ((math_sin_angle16(((((struct o3864_int *)(a4))->v)))) * (*(float *)((((*(signed char *)(((0x3752 + a4) + 0x0))) << 2) + (*(int *)(((((*(signed char *)(((0x373E + a4) + 0x0))) << 2) + 0xC25AEA4) + 0x0)))))));
            u2 = u0;
            u2 = u2 + 1.0f * u1;
            (((struct o28_float *)(a4))->v) = u2;
            u0 = (((struct o30_float *)(a4))->v);
            u1 = ((math_cos_angle16(((((struct o3864_int *)(a4))->v)))) * (*(float *)((((*(signed char *)(((0x3752 + a4) + 0x0))) << 2) + (*(int *)(((0xC25AEA4 + ((*(signed char *)(((0x373E + a4) + 0x0))) << 2)) + 0x0)))))));
            u2 = u0;
            u2 = u2 + 1.0f * u1;
            (((struct o30_float *)(a4))->v) = u2;
            (((struct o3752_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3752))) + 0x1);
            t0 = 0x1;
        } else {
            (((struct o3752_uchar *)(a4))->v) = 0x0;
            t0 = 0x0;
        }
    }
    return t0;
}

int FUN_0c07d440(int a4)
{
    register int t0;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t15;
    register int t6;

    t0 = (((struct o118_int *)(a4))->v);
    if ((int)(*(signed char *)(((t0 + 0x7E) + 0x0))) < 0) {
        t6 = (*(int *)0xC4B4524);
    } else {
        t6 = (*(int *)((((*(signed char *)(((t0 + 0x7E) + 0x0))) << 2) + 0xC4B4528)));
    }
    t9 = 0x0;
    t10 = 0x0;
    for (;;) {
        t11 = (((struct o74_short *)(t0))->v);
        t12 = *(int *)((t6 + 0x4));
        t10 = (t10 + (unsigned char)(*(signed char *)((((((t11 + (short)t9) << 2) << 1) + t12) + 0x4))));
        t15 = *(signed char *)((((((t11 + (short)t9) << 2) << 1) + t12) + 0x5));
        t9 = (t9 + 0x1);
        if (((unsigned char)t15 & 0xC0) != 0) {
            break;
        }
    }
    return t10;
}

int FUN_0c07d4b4(int a4)
{
    int t0;
    int t1;
    float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x3715));
    if ((((t0 != 23) && (t0 != 29)) || ((t0 == 23) && (t1 = *(signed char *)((a4 + 0x15)), t1 == 1))) && (u2 = (((struct o2C_float *)(a4))->v), u3 = *(float *)0xC541098, u3 > u2)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c07d4ec(int a4)
{
    int t0;
    register int t1;
    int t2;

    if ((((((struct o376C_int *)(a4))->v)) == 0) && (t0 = *(signed char *)((a4 + 0x3720)), t0 == 0)) {
        t0 = FUN_0c042fe0();
        if ((t0 != 0) && ((t1 = *(signed char *)((a4 + 0x371D)), t1 == 0) && (t2 = *(signed char *)((a4 + 0x374C)), (t2 & 2) != 0))) {
            (((struct o374C_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x374C))) & 0xFFFFFFFD);
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c07d536(int a4)
{
    int t0;

    if ((((((struct o382A_short *)(a4))->v)) == 0) && (t0 = *(signed char *)((a4 + 0x3743)), t0 == 0)) {
        if ((*(signed char *)((a4 + 0x371E))) != (*(signed char *)((a4 + 0x371F)))) {
            (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
            return FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
        }
        return 0x371F;
    }
    t0 = *(signed char *)((a4 + 0x3743));
    if ((unsigned char)t0 != 32) {
        if ((unsigned char)t0 != 64) {
            if ((unsigned char)t0 != 96) {
                if ((unsigned char)t0 != 0x80) {
                    if ((unsigned char)t0 != 0xA0) {
                        if ((unsigned char)t0 != 0xC0) {
                        } else {
                            (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
                            if ((unsigned int)((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x2D)) > (unsigned int)0x1E) {
                                if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x3)) != 0) {
                                    (((struct o371E_uchar *)(a4))->v) = 0xA;
                                }
                            }
                            FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
                        }
                    } else {
                        (((struct o371E_uchar *)(a4))->v) = 0x6;
                        FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
                    }
                } else {
                    (((struct o371E_uchar *)(a4))->v) = 0x5;
                    FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
                }
            } else {
                t0 = *(int *)0xC542260;
                if (((unsigned int)(t0 & 0x6) >> 1) != 0) {
                    if (((unsigned int)(t0 & 0x6) >> 1) != 1) {
                        if (((unsigned int)(t0 & 0x6) >> 1) != 2) {
                            if (((unsigned int)(t0 & 0x6) >> 1) != 3) {
                            } else {
                                (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
                            }
                        } else {
                            (((struct o371E_uchar *)(a4))->v) = 0x8;
                        }
                    } else {
                        (((struct o371E_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x371F)));
                    }
                } else {
                    (((struct o371E_uchar *)(a4))->v) = 0x7;
                }
                FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
            }
        } else {
            (((struct o371E_uchar *)(a4))->v) = 0x4;
            FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
        }
    } else {
        (((struct o371E_uchar *)(a4))->v) = 0x9;
        FUN_0c0676ce((*(signed char *)((a4 + 0x1))));
    }
    t0 = (((struct o382A_short *)(a4))->v);
    (((struct o382A_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o3743_uchar *)(a4))->v) = 0x0;
        (((struct o382A_ushort *)(a4))->v) = 0x0;
    }
    return 0x382A;
}

int math_angle_between_points_xz(int a4, int a5)
{
    register float u0;
    register float u1;
    register float u4;
    register float u6;
    int t8;
    register int t10;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u4 = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    u4 = -u4;
    u6 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u6 = 9.99999997e-07f;
    }
    t8 = math_atan_angle16((u4 / u6));
    t10 = (0xFFFF & t8);
    if (0.0f > u6) {
        t10 = ((0xFFFF & t8) + 0x8000);
    }
    return (unsigned short)(t10 + 0x4000);
}
