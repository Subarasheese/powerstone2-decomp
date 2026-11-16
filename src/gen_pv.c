/* Straight-line functions with calls and guards (batch gen_pv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o375A_uchar { char p[0x375A]; unsigned char v; };
struct o37B8_float { char p[0x37B8]; float v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c016244(void);
int FUN_0c016252(int);
int FUN_0c01626a(void);
int FUN_0c016288(void);
int FUN_0c016296(void);
int FUN_0c0162a6(void);
int FUN_0c017c96(void);
int FUN_0c017d4c(void);
int FUN_0c01f6f8(void);
int FUN_0c030dd0(int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f444(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c09c9c8(int);
int FUN_0c0c2a80(int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4770(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4b76(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c08(int);
int FUN_0c0c8c36(int);
int FUN_0c0cff96(int, int);
int FUN_0c0d04c4(int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c106510(void);
int FUN_0c10af4c(void);
int FUN_0c186380(int);
int FUN_0c186740(int, int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
float FUN_0c039846(int a4, float f4);
int FUN_0c05d05c(void);
int FUN_0c09b45c(int a4);
int FUN_0c0d0110(int a4, int a5);
int FUN_0c0ca5d8(int a4, int a5, int a6);
int FUN_0c0d1e00(int a4);
int FUN_0c0f7552(int a4);
int FUN_0c0f9d56(int a4);
int FUN_0c10af74(void);
int FUN_0c122058(int a4, int a5);
int FUN_0c121d90(int a4, int a5);
int FUN_0c01b16a(int a4);
int FUN_0c017314(void);
int FUN_0c065fb0(int a4, int a5);
int FUN_0c0663a8(int a4, int a5);
int FUN_0c09ca20(int a4, int a5);
int FUN_0c029caa(void);
int FUN_0c030866(int a4);

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

int FUN_0c05d05c(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC5429B5) == 0) {
        if (((((struct o3C_int *)0xC5423CC)->v)) == 0) {
            t0 = 0xC2578D0;
            if (((((struct o0_int *)0xC5423CC)->v)) == 1) {
                t0 = 0xC2578CC;
            }
            t1 = (FUN_0c030dd0(t0, 0x0));
        } else {
            t0 = 0x0;
            for (;;) {
                if ((unsigned int)t0 > (unsigned int)(*(int *)0xC54240C)) {
                    break;
                }
                t2 = *(int *)0xC54240C;
                if ((*(int *)(((((t0 << 2) << 2) + 0xC5423C4) + 0x8))) == 1) {
                    t3 = 0xC2578D4;
                    if (t2 == 3) {
                        t3 = 0xC2578E4;
                    }
                    FUN_0c030dd0(t3, t0);
                } else {
                    t3 = 0xC2578DC;
                    if (t2 == 3) {
                        t3 = 0xC2578F4;
                    }
                    FUN_0c030dd0(t3, t0);
                }
                t0 = (t0 + 0x1);
            }
            t1 = 0x70;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c09b45c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = -20.0f;
        (((struct o5C_float *)(a4))->v) = -1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c0d0110(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct o0_int *)0xC540F90)->v))) {
            *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x0)) = 0x0;
            *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x4)) = 0x0;
            *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x8)) = 0x0;
            return 0x0;
        }
        if ((*(int *)(((0xC540F18 + (t0 << 2)) + 0x0))) == (*(signed char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    (((struct o0_uint *)0xC540F90)->v) = (((((struct o0_int *)0xC540F90)->v)) - 1);
    t1 = (((struct o0_int *)0xC540F90)->v);
    t2 = *(int *)((((t1 << 2) + 0xC540F18) + 0x0));
    *(unsigned int *)((((t1 << 2) + 0xC540F18) + 0x0)) = (*(int *)(((0xC540F18 + (t0 << 2)) + 0x0)));
    *(unsigned int *)(((0xC540F18 + (t0 << 2)) + 0x0)) = t2;
    t1 = *(int *)((((((((struct o0_int *)0xC540F90)->v)) << 2) + 0xC540F18) + 0x0));
    t2 = (0xC540F18 + (t0 << 2));
    t3 = ((((struct o0_int *)0xC540F90)->v));
    t4 = (t0 << 2);
    for (;;) {
        if ((int)t3 >= (int)(((((struct o4_int *)0xC540F90)->v)) - 1)) {
            break;
        }
        t4 = t3;
        t4 = (t4 << 2);
        t4 = (t4 + 0xC540F18);
        t2 = (*(int *)((t4 + 0x4)));
        t3 = (t3 + 0x1);
        *(unsigned int *)((t4 + 0x0)) = t2;
    }
    *(unsigned int *)(((((((((struct o4_int *)0xC540F90)->v)) - 1) << 2) + 0xC540F18) + 0x0)) = t1;
    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x0)) = 0x0;
    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x4)) = 0x0;
    *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x8)) = 0x0;
    return 0x0;
}

int FUN_0c0ca5d8(int a4, int a5, int a6)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t1 < (unsigned int)0xC) {
        switch ((t1 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4);
            }
            case 10:
            {
                return FUN_0c0c5024(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t1;
}

int FUN_0c0d1e00(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)((a4 + 0x15));
            if (t0 != 0) {
                if (t0 != 1) {
                    t0 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1C7AD0));
                } else {
                    t0 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1C7AB8));
                }
                t2 = t0;
            } else {
                t2 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1C7AA0));
            }
            t0 = t2;
            if ((*(signed char *)0xC54223C) != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t2 = (*(int *)((t2 + 0x0)));
            FUN_0c0d04c4((t2 + 0x6), (t2 + 0x78));
            t1 = (t1 + 0x1);
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                t1 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1C7AD0));
            } else {
                t1 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1C7AB8));
            }
            t2 = t1;
        } else {
            t2 = (FUN_0c0cff96((*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))), 0xC1C7AA0));
        }
        t1 = t2;
        if ((*(signed char *)0xC54223C) != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0f7552(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if (((*(signed char *)((t1 + 0x15))) != (*(signed char *)((t1 + 0x16)))) && (t0 = *(signed char *)((t1 + 0x15)), t0 == 1)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = t0;
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.100000001f);
            if (!(1.0f > ((((struct oB4_float *)(a4))->v)))) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0222222228f);
            if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                (((struct oB4_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
        }
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t1 = 0xB8;
    }
    return t1;
}

int FUN_0c0f9d56(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if (((*(signed char *)((t1 + 0x15))) != (*(signed char *)((t1 + 0x16)))) && (t0 = *(signed char *)((t1 + 0x15)), t0 == 1)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = t0;
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.100000001f);
            if (!(1.0f > ((((struct oB4_float *)(a4))->v)))) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0222222228f);
            if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                (((struct oB4_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x96;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
        }
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t1 = 0xB8;
    }
    return t1;
}

int FUN_0c10af74(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return FUN_0c106510();
        }
        t0 = *(signed char *)0xC541F46;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                } else {
                    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                }
                t1 = (unsigned char)t0;
            } else {
                t0 = *(signed char *)((0x14 + (*(int *)0xC474C0C)));
                if (t0 == 99) {
                    (((struct o1_uchar *)0xC541F45)->v) = 0x2;
                    *(unsigned int *)0xC474C0C = 0x0;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
            (((struct o2_uchar *)0xC541F45)->v) = 0x0;
            t1 = FUN_0c10af4c();
            *(unsigned int *)0xC474C0C = t1;
            t0 = t1;
        }
        return t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c122058(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x3));
    t20 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 3) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x4, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 2) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 1) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        t20 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t20;
        *(unsigned int *)((t3 + 0x4)) = 0xC121E64;
    }
    return t20;
}

int FUN_0c121d90(int a4, int a5)
{
    int stk[3];
    register int t2;
    register int t3;
    register int t20;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t2 = FUN_0c037320((*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
    *(unsigned int *)(((int)stk + 8)) = t2;
    t3 = FUN_0c03f444(0x5, 0x0, (t2 + 0x3));
    t20 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 0))), (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 3) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x13, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 2) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x17, (*(int *)0xC4B410C));
        FUN_0c03744a((*(int *)(((((((((struct oC0_int *)(t3))->v)) - 1) << 2) + (0xC4 + t3)) + 0x0))), 0x0, 0x15, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x80;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        t20 = *(signed char *)(((int)stk + 4));
        *(unsigned char *)((t3 + 0x3)) = t20;
        *(unsigned int *)((t3 + 0x4)) = 0xC121BA8;
    }
    return t20;
}

int FUN_0c01b16a(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(signed char *)((a4 + 0x2));
            t2 = t0;
            if (t0 == 13) {
                u0 = 1.20000005f;
                u0 = u0 + 0.200000003f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
                (((struct o40_float *)(a4))->v) = u0;
                u0 = 1.0f;
                u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2)));
                (((struct o44_float *)(a4))->v) = u0;
                t2 = 0x44;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o28_float *)(a4))->v) = (*(float *)((0xC20E128 + (((*(signed char *)((a4 + 0x3))) << 2) << 1))));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)((0xC20E128 + (((*(signed char *)((a4 + 0x3))) << 2) << 1))))->v));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t1 = *(signed char *)((a4 + 0x2));
        t2 = t1;
        if (t1 == 13) {
            u0 = 1.20000005f;
            u0 = u0 + 0.200000003f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)));
            (((struct o40_float *)(a4))->v) = u0;
            u0 = 1.0f;
            u0 = u0 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 2)));
            (((struct o44_float *)(a4))->v) = u0;
            t2 = 0x44;
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c017314(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c016244();
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    FUN_0c016252(0x2);
                }
                FUN_0c017d4c();
                return FUN_0c017c96();
            }
            t0 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
            if (((unsigned char)t0 & 28) == 0) {
                t1 = FUN_0c01626a();
                if (t1 == 0) {
                    FUN_0c016252(0x3);
                } else {
                    FUN_0c016252(0x1);
                    FUN_0c0162a6();
                }
                FUN_0c017d4c();
                return FUN_0c017c96();
            }
            return (unsigned char)t0;
        }
        FUN_0c016252(0x0);
    } else {
        t0 = FUN_0c016288();
        if (t0 != 0) {
            FUN_0c016252(0x1);
            FUN_0c016296();
        } else {
            FUN_0c016252(0x3);
        }
    }
    FUN_0c017d4c();
    return FUN_0c017c96();
}

int FUN_0c065fb0(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    float u22;

    u0 = (((struct o8_float *)(a4))->v);
    u1 = (((struct o8_float *)(a5))->v);
    u2 = (((struct oC_float *)((a5 + 0x8)))->v);
    u3 = (((struct oC_float *)((a4 + 0x8)))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u3 + u2) - u4);
    u6 = (((struct oC_float *)((a5 + 0x8)))->v);
    u7 = (((struct o14_float *)((a4 + 0x8)))->v);
    u8 = (((struct o8_float *)((a4 + 0x8)))->v);
    u9 = (((struct o8_float *)((a5 + 0x8)))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u7 + u6) - u11);
    u13 = (((struct oC_float *)((a5 + 0x8)))->v);
    u14 = (((struct o10_float *)((a4 + 0x8)))->v);
    u15 = (((struct o4_float *)((a4 + 0x8)))->v);
    u16 = (((struct o4_float *)((a5 + 0x8)))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u14 + u13) - u18);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u21)) && (u22 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u22)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0663a8(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u11;
    register float u13;
    register float u14;
    register float u15;
    register float u16;
    register float u18;
    register float u21;
    float u22;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    u2 = (((struct oC_float *)(a4))->v);
    u3 = (((struct oC_float *)(a5))->v);
    u4 = (u0 - u1);
    if (0.0f > (u0 - u1)) {
        u4 = ((-u0) + u1);
    }
    *(float *)((((int)stk + 0) + 0x0)) = ((u2 + u3) - u4);
    u6 = (((struct o10_float *)(a4))->v);
    u7 = (((struct o10_float *)(a5))->v);
    u8 = (((struct o4_float *)(a4))->v);
    u9 = (((struct o4_float *)(a5))->v);
    u11 = (u8 - u9);
    if (0.0f > (u8 - u9)) {
        u11 = ((-u8) + u9);
    }
    (((struct o4_float *)(((int)stk + 0)))->v) = ((u6 + u7) - u11);
    u13 = (((struct o14_float *)(a4))->v);
    u14 = (((struct o14_float *)(a5))->v);
    u15 = (((struct o8_float *)(a4))->v);
    u16 = (((struct o8_float *)(a5))->v);
    u18 = (u15 - u16);
    if (0.0f > (u15 - u16)) {
        u18 = ((-u15) + u16);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = ((u13 + u14) - u18);
    if (!(0.0f > (*(float *)((((int)stk + 0) + 0x0)))) && ((u21 = (((struct o8_float *)(((int)stk + 0)))->v), !(0.0f > u21)) && (u22 = (((struct o4_float *)(((int)stk + 0)))->v), !(0.0f > u22)))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c09ca20(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    float u0;

    t1 = 0x0;
    if (((*(signed char *)((a4 + 0x371A))) != 0) && (u0 = (((struct o37B8_float *)(a4))->v), !(0.0f > u0))) {
        t2 = FUN_0c09c9c8(a4);
        t1 = 0x0;
        if ((t2 != 0) && ((t2 == 3) || (t0 = (((struct o38F8_int *)(a4))->v), (int)t0 < (int)0x2))) {
            if (a5 == 1) {
                t0 = 0x0;
                if (t2 == 0) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    t5 = t2;
                    if (t1 == 0) {
                        t5 = (t2 + 0x3);
                    }
                    (((struct o375A_uchar *)(a4))->v) = (t5 - 1);
                    if (t5 == 1) {
                        t1 = 0x2;
                        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                            t1 = 0x0;
                        }
                        (((struct o3731_uchar *)(a4))->v) = t1;
                    }
                    FUN_0c085cac(a4, 0x1A, 0x0);
                    t0 = 0x1;
                }
                t1 = t0;
            } else {
                t0 = 0x0;
                if ((a5 != 2) || (t2 != 0)) {
                    t5 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    t6 = t2;
                    if (t5 == 0) {
                        t6 = (t2 + 0x3);
                    }
                    (((struct o375A_uchar *)(a4))->v) = (t6 - 1);
                    if (t6 == 1) {
                        t2 = 0x2;
                        if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                            t2 = 0x0;
                        }
                        (((struct o3731_uchar *)(a4))->v) = t2;
                    }
                    FUN_0c085cac(a4, 0x1A, 0x0);
                    t0 = 0x1;
                }
                t1 = t0;
            }
        }
    }
    return t1;
}

int FUN_0c029caa(void)
{
    int stk[33];
    register int t0;
    register int t1;
    register int t10;
    register int t37;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = *(signed char *)0xC309861;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t37 = 0x0;
                if (t0 != 3) {
                } else {
                    t1 = FUN_0c01f6f8();
                    t37 = 0x0;
                    if (t1 != 0) {
                        t37 = 0x1;
                    }
                }
            } else {
                t10 = *(short *)0xC30540C;
                *(unsigned short *)0xC30540C = (t10 - 1);
                if ((int)(short)(t10 - 1) < 0) {
                    *(unsigned char *)0xC309861 = ((*(signed char *)0xC309861) + 0x1);
                }
                t37 = 0x0;
            }
        } else {
            *(unsigned char *)0xC309861 = ((*(signed char *)0xC309861) + 0x1);
            *(unsigned short *)0xC30540C = 0x3C;
            FUN_0c186380((*(int *)0xC309994));
            t37 = 0x0;
        }
    } else {
        *(unsigned char *)0xC309861 = ((*(signed char *)0xC309861) + 0x1);
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x7F;
        *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x4) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x4), (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
        t37 = 0x0;
    }
    return t37;
}

int FUN_0c030866(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = (((struct o78_int *)(a4))->v);
    (((struct o6C_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC542854) + 0x14)));
    t0 = (((struct o78_int *)(a4))->v);
    t1 = *(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC542854) + 0x10));
    if (((unsigned short)t1 & 0x3C00) != 0) {
        if ((int)((((struct o70_short *)(a4))->v)) < (int)0xF) {
            (((struct o70_ushort *)(a4))->v) = (((((struct o70_short *)(a4))->v)) + 0x1);
        }
    } else {
        (((struct o70_ushort *)(a4))->v) = 0x0;
    }
    t0 = (unsigned short)t1;
    if ((int)((((struct o70_short *)(a4))->v)) >= (int)0xF) {
        t1 = *(short *)(((a4 + 0x70) + 0x2));
        *(unsigned short *)(((a4 + 0x70) + 0x2)) = (t1 ^ 0x1);
        t0 = (short)(t1 ^ 0x1);
        if ((short)(t1 ^ 0x1) != 0) {
            t1 = (((struct o78_int *)(a4))->v);
            t3 = *(short *)(((0xC542854 + ((((t1 << 2) + t1) << 2) << 1)) + 0x10));
            (((struct o6C_uint *)(a4))->v) = (unsigned short)t3;
            t0 = (unsigned short)t3;
        }
    }
    return t0;
}
