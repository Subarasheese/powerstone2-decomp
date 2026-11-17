/* game/player: functions 0C07D6CC-0C07DB58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o3748_uchar { char p[0x3748]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3764_int { char p[0x3764]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o42C_short { char p[0x42C]; short v; };
struct o430_short { char p[0x430]; short v; };
int FUN_0c059f20(int, int);
int FUN_0c059f78(int, int);
int FUN_0c06588a(int, int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0bb69c(int);
int FUN_0c14f9d6(int, int, int, int);
int FUN_0c1512a0(int, int);
int math_atan_angle16(float);
int FUN_0c07d6cc(int a4);
int FUN_0c07d720(int a4);
int FUN_0c07d774(int a4);
int FUN_0c07d7be(int a4);
int FUN_0c07d838(int a4, int a5, int a6, int a7);
int FUN_0c07d9dc(int a4, int a5);
int FUN_0c07da48(int a4);
int FUN_0c07daea(int a4, int a5, int a6, int a7);

int FUN_0c07d6cc(int a4)
{
    register int t2;
    register float u3;
    register float u4;
    register float u7;
    register float u10;
    int t12;
    register int t14;
    register int t16;

    if (((((struct o3760_int *)(a4))->v)) == 0) {
        t16 = (*(int *)((a4 + 0x38)));
    } else {
        t2 = (((struct o3760_int *)(a4))->v);
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o28_float *)(t2))->v);
        u7 = (((((struct o30_float *)(t2))->v)) - ((((struct o30_float *)(a4))->v)));
        u7 = -u7;
        u10 = (u4 - u3);
        if ((u4 - u3) == 0.0f) {
            u10 = (*(float *)0xC07D7F0);
        }
        t12 = math_atan_angle16((u7 / u10));
        t14 = (0xFFFF & t12);
        if (0.0f > u10) {
            t14 = ((0xFFFF & t12) + 0x8000);
        }
        t16 = (unsigned short)(t14 + 0x4000);
    }
    return t16;
}

int FUN_0c07d720(int a4)
{
    register int t2;
    register float u3;
    register float u4;
    register float u7;
    register float u10;
    int t12;
    register int t14;
    register int t16;

    if (((((struct o3764_int *)(a4))->v)) == 0) {
        t16 = (*(int *)((a4 + 0x38)));
    } else {
        t2 = (((struct o3764_int *)(a4))->v);
        u3 = (((struct o28_float *)(a4))->v);
        u4 = (((struct o28_float *)(t2))->v);
        u7 = (((((struct o30_float *)(t2))->v)) - ((((struct o30_float *)(a4))->v)));
        u7 = -u7;
        u10 = (u4 - u3);
        if ((u4 - u3) == 0.0f) {
            u10 = (*(float *)0xC07D7F0);
        }
        t12 = math_atan_angle16((u7 / u10));
        t14 = (0xFFFF & t12);
        if (0.0f > u10) {
            t14 = ((0xFFFF & t12) + 0x8000);
        }
        t16 = (unsigned short)(t14 + 0x4000);
    }
    return t16;
}

int FUN_0c07d774(int a4)
{
    register float u0;
    register float u1;
    register float u4;
    register float u7;
    int t9;
    register int t11;

    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o380C_float *)(a4))->v);
    u4 = (((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v)));
    u4 = -u4;
    u7 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u7 = (*(float *)0xC07D7F0);
    }
    t9 = math_atan_angle16((u4 / u7));
    t11 = (0xFFFF & t9);
    if (0.0f > u7) {
        t11 = ((0xFFFF & t9) + 0x8000);
    }
    return (unsigned short)(t11 + 0x4000);
}

int FUN_0c07d7be(int a4)
{
    register int t0;

    t0 = (((struct o42C_short *)(a4))->v);
    if ((0x3C00 & (unsigned short)t0) == 0x2000) {
        return 0x1;
    }
    if ((0x3C00 & (unsigned short)t0) == 0x2400) {
        return 0x2;
    }
    if ((0x3C00 & (unsigned short)t0) == 0x400) {
        return 0x3;
    }
    if ((0x3C00 & (unsigned short)t0) == 0x1400) {
        return 0x4;
    }
    if ((0x3C00 & (unsigned short)t0) == 0x1000) {
        return 0x5;
    }
    if ((0x3C00 & (unsigned short)t0) == 0x1800) {
        return 0x6;
    }
    if ((0x3C00 & (unsigned short)t0) == 0x800) {
        return 0x7;
    }
    return 0x8;
}

int FUN_0c07d838(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    int t5;
    register float u0;

    if (((((struct o376C_int *)(a4))->v)) != 0) {
        return 0x0;
    }
    if ((*(signed char *)((a4 + 0x371D))) != 0) {
        return 0x0;
    }
    if (((((struct o3760_int *)(a4))->v)) == 0) {
        return 0x0;
    }
    if (!(250.0f > ((((struct o3780_float *)(a4))->v)))) {
        return 0x0;
    }
    if (0.0f > (((((struct o2C_float *)(a4))->v)) - ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)))) {
        u0 = ((-((((struct o2C_float *)(a4))->v))) + ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)));
    } else {
        u0 = (((((struct o2C_float *)(a4))->v)) - ((((struct o2C_float *)(((((struct o3760_int *)(a4))->v))))->v)));
    }
    if (u0 > 100.0f) {
        return 0x0;
    }
    t4 = (((struct o3760_int *)(a4))->v);
    t5 = *(signed char *)((t4 + 0x3715));
    if ((((t5 != 7) && (t5 != 8)) || ((t0 = *(signed char *)((t4 + 0x3735)), (int)(unsigned char)t0 > (int)0xF) || (t1 = *(signed char *)((t4 + 0x134)), t1 == 0))) && (((t5 != 26) || (t2 = *(signed char *)((t4 + 0x3735)), (int)(unsigned char)t2 > (int)0xF)) && ((t5 != 8) || (t3 = *(signed char *)((t4 + 0x3735)), (int)(unsigned char)t3 > (int)0xF)))) {
        return 0x0;
    }
    t0 = (((struct o430_short *)(a4))->v);
    if (((unsigned short)t0 & 0x100) != 0) {
        (((struct o3748_uchar *)(a4))->v) = 0x1;
        return 0xC;
    }
    if (((unsigned short)t0 & 0x3C00) != 0) {
        (((struct o3748_uchar *)(a4))->v) = 0x1;
        t0 = *(signed char *)((a4 + 0x1));
        t1 = FUN_0c07eaf4(a4, t5, a6);
        t2 = *(short *)(((0xC5413E8 + ((short)t0 * (short)0x2F8)) + 0x0));
        t0 = FUN_0c07d6cc(a4);
        t3 = (unsigned short)((unsigned short)(t2 + t1) - t0);
        if ((0x8000 & (unsigned short)((unsigned short)(t2 + t1) - t0)) != 0) {
            t3 = ((unsigned short)((unsigned short)(t2 + t1) - t0) | 0xFFFF0000);
        }
        if (((*(signed char *)((0x3715 + ((((struct o3760_int *)(a4))->v))))) != 26) && (((int)t3 >= (int)0xFFFFF1C8) && ((int)t3 <= (int)0xE38))) {
            return 0x9;
        }
        if (((int)t3 > 0) && ((int)t3 <= (int)0x471C)) {
            return 0xA;
        }
        if (((int)t3 < 0) && ((int)t3 >= (int)0xFFFFB8E4)) {
            return 0xB;
        }
        return FUN_0c07d7be(a4);
    }
    return 0x0;
}

int FUN_0c07d9dc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c0bb69c(a4);
    if (a5 != 9) {
        if (a5 != 12) {
            (((struct o3717_uchar *)(a4))->v) = 0x15;
            (((struct o3718_uchar *)(a4))->v) = a5;
            t0 = 0x15;
            t1 = a5;
        } else {
            (((struct o3717_uchar *)(a4))->v) = 0x5;
            (((struct o3718_uchar *)(a4))->v) = 0x4;
            t0 = 0x5;
            t1 = 0x4;
        }
        t2 = t0;
        t0 = t1;
    } else {
        (((struct o372A_uchar *)(a4))->v) = (*(signed char *)((((((struct o3760_int *)(a4))->v)) + 0x1)));
        (((struct o3717_uchar *)(a4))->v) = 0x21;
        (((struct o3718_uchar *)(a4))->v) = 0x2;
        t2 = 0x21;
        t0 = 0x2;
    }
    FUN_0c085cac(a4, t2, t0);
    return 0x0;
}

int FUN_0c07da48(int a4)
{
    register int t0;

    (((struct o3790_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    t0 = FUN_0c06588a(a4, (0x3790 + a4), 0xF0, (*(int *)((a4 + 0x38))), 0x8000);
    if ((((((struct o2C_float *)(a4))->v)) + 5.0f) > ((((struct o3790_float *)(a4))->v))) {
        (((struct o2C_float *)(a4))->v) = ((((struct o3790_float *)(a4))->v));
        (((struct o3747_uchar *)(a4))->v) = 0x4;
    } else {
        if (t0 != 0) {
            if ((((((struct o2C_float *)(a4))->v)) + (*(float *)0xC07DBB8)) > ((((struct o3790_float *)(a4))->v))) {
                t0 = *(signed char *)((a4 + 0x3747));
                (((struct o3747_uchar *)(a4))->v) = (t0 - 1);
                if ((signed char)(t0 - 1) == 0) {
                    (((struct o2C_float *)(a4))->v) = ((((struct o3790_float *)(a4))->v));
                    (((struct o3747_uchar *)(a4))->v) = 0x4;
                }
            }
        } else {
            (((struct o3747_uchar *)(a4))->v) = 0x4;
        }
    }
    return 0x0;
}

int FUN_0c07daea(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t18;

    if ((*(signed char *)((a4 + 0x371D))) != 2) {
        FUN_0c14f9d6((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6, a7);
    } else {
        *(float *)(((int)stk + 0)) = ((((struct o28_float *)(a4))->v));
        *(float *)(((int)stk + 8)) = ((((struct o30_float *)(a4))->v));
        *(float *)(((int)stk + 4)) = ((((struct o37B4_float *)(a4))->v));
        FUN_0c1512a0((*(signed char *)((0xC259494 + (*(signed char *)((a4 + 0x2)))))), ((int)stk + 0));
    }
    if ((*(signed char *)((a4 + 0x371D))) == 5) {
        t18 = (FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135)))));
    } else {
        t18 = (FUN_0c059f78((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135)))));
    }
    return t18;
}
