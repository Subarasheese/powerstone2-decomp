/* game/unsorted: functions 0C080C90-0C081792, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3723_uchar { char p[0x3723]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c080c90(int a4);
int FUN_0c080d2a(int a4, int a5, int a6, int a7);
float FUN_0c081006(int a4);
int FUN_0c0812d2(int a4, int a5, int a6, int a7);
int FUN_0c081516(int a4, int a5);

int FUN_0c080c90(int a4)
{
    register int t0;

    (((struct o3715_uchar *)(a4))->v) = 0x4;
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    (((struct o3723_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x371D));
    if (t0 != 3) {
        if (t0 != 5) {
            if (t0 != 6) {
                return FUN_0c07e868(a4, 0x5);
            }
            return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD7, 0xFFFFFFFF, 0x3, 0xD7));
        }
        return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBA, 0xFFFFFFFF, 0x3, 0xBA));
    }
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9E, 0xFFFFFFFF, 0x3, 0x9E));
}

int FUN_0c080d2a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c07eaf4(a4, a5, a6);
    t2 = *(int *)(((0xC5413E8 + ((short)t0 * (short)0x2F8)) + 0x0));
    t0 = *(signed char *)((a4 + 0x371D));
    if ((t0 != 3) && ((t0 != 5) && (t0 != 6))) {
        if ((*(signed char *)((a4 + 0x3730))) == 4) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t2 + t1))) * ((((struct o14_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v)));
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t2 + t1))) * ((((struct o14_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v)));
        }
        if ((*(signed char *)((a4 + 0x3721))) == 0) {
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o50_float *)(a4))->v) = ((((struct o10_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v));
            t3 = *(signed char *)((a4 + 0x2));
            t4 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o5C_float *)(a4))->v) = (((((struct o18_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v)) * ((((struct o37A8_float *)(a4))->v)));
        } else {
            if (((*(signed char *)((0xC2738C9 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) & 1) == 0) {
                t3 = *(signed char *)((a4 + 0x2));
                t4 = *(signed char *)(((0x371C + a4) + 0x0));
                (((struct o50_float *)(a4))->v) = ((((struct o20_float *)((((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v));
                t3 = *(signed char *)((a4 + 0x2));
                t4 = *(signed char *)(((0x371C + a4) + 0x0));
                t5 = (((((((t3 << 1) + t3) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1));
                t3 = 0x24;
                u0 = ((((struct o37A8_float *)(a4))->v));
            } else {
                t4 = *(signed char *)((a4 + 0x2));
                t6 = *(signed char *)(((0x371C + a4) + 0x0));
                (((struct o50_float *)(a4))->v) = ((((struct o28_float *)((((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC259E54) + (((((t6 << 1) + t6) << 2) << 2) << 1))))->v));
                t4 = *(signed char *)((a4 + 0x2));
                t6 = *(signed char *)(((0x371C + a4) + 0x0));
                t5 = (((((((t4 << 1) + t4) << 2) << 2) << 2) + 0xC259E54) + (((((t6 << 1) + t6) << 2) << 2) << 1));
                t3 = 0x2C;
                u0 = ((((struct o37A8_float *)(a4))->v));
            }
            (((struct o5C_float *)(a4))->v) = ((*(float *)((t3 + t5))) * u0);
        }
    } else {
        t3 = *(signed char *)((a4 + 0x371D));
        t4 = 0x0;
        if (t3 != 3) {
            t5 = 0x1;
            if (t3 != 5) {
                t6 = 0x2;
                if (t3 != 6) {
                    t6 = t0;
                }
                t5 = t6;
            }
            t4 = t5;
        }
        if ((*(signed char *)((a4 + 0x3730))) == 4) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u0 = ((((struct o8_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u1 = ((((struct o37A8_float *)(a4))->v));
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((t2 + t1))) * ((((struct oC_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v)));
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((t2 + t1))) * ((((struct oC_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v)));
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u0 = ((((struct o8_float *)((0xC25AA54 + ((t4 << 2) << 2))))->v));
            u1 = ((((struct o37A8_float *)(a4))->v));
        }
        (((struct o5C_float *)(a4))->v) = (u0 * u1);
    }
    return 0x5C;
}

float FUN_0c081006(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t0 = *(signed char *)((a4 + 0x371D));
    if ((t0 != 3) && ((t0 != 5) && (t0 != 6))) {
        if ((*(signed char *)((a4 + 0x3730))) == 4) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            t1 = *(signed char *)((a4 + 0x2));
            t2 = *(signed char *)(((0x371C + a4) + 0x0));
            u0 = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o14_float *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC259E54) + (((((t2 << 1) + t2) << 2) << 2) << 1))))->v)));
            (((struct o4C_float *)(a4))->v) = (u0 * 0.400000006f);
            t1 = *(signed char *)((a4 + 0x2));
            t2 = *(signed char *)(((0x371C + a4) + 0x0));
            u0 = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o14_float *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC259E54) + (((((t2 << 1) + t2) << 2) << 2) << 1))))->v)));
            (((struct o54_float *)(a4))->v) = (u0 * 0.400000006f);
            u1 = (u0 * 0.400000006f);
        }
        if ((*(signed char *)((a4 + 0x3721))) == 0) {
            t1 = *(signed char *)((a4 + 0x2));
            t2 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o50_float *)(a4))->v) = ((((struct o10_float *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC259E54) + (((((t2 << 1) + t2) << 2) << 2) << 1))))->v));
            t1 = *(signed char *)((a4 + 0x2));
            t2 = *(signed char *)(((0x371C + a4) + 0x0));
            (((struct o5C_float *)(a4))->v) = (((((struct o18_float *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC259E54) + (((((t2 << 1) + t2) << 2) << 2) << 1))))->v)) * ((((struct o37A8_float *)(a4))->v)));
        } else {
            if (((*(signed char *)((0xC2738C9 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) & 1) == 0) {
                t1 = *(signed char *)((a4 + 0x2));
                t2 = *(signed char *)(((0x371C + a4) + 0x0));
                (((struct o50_float *)(a4))->v) = ((((struct o20_float *)((((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC259E54) + (((((t2 << 1) + t2) << 2) << 2) << 1))))->v));
                t1 = *(signed char *)((a4 + 0x2));
                t2 = *(signed char *)(((0x371C + a4) + 0x0));
                t3 = (((((((t1 << 1) + t1) << 2) << 2) << 2) + 0xC259E54) + (((((t2 << 1) + t2) << 2) << 2) << 1));
                t1 = 0x24;
                u0 = ((((struct o37A8_float *)(a4))->v));
            } else {
                t2 = *(signed char *)((a4 + 0x2));
                t4 = *(signed char *)(((0x371C + a4) + 0x0));
                (((struct o50_float *)(a4))->v) = ((((struct o28_float *)((((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1))))->v));
                t2 = *(signed char *)((a4 + 0x2));
                t4 = *(signed char *)(((0x371C + a4) + 0x0));
                t3 = (((((((t2 << 1) + t2) << 2) << 2) << 2) + 0xC259E54) + (((((t4 << 1) + t4) << 2) << 2) << 1));
                t1 = 0x2C;
                u0 = ((((struct o37A8_float *)(a4))->v));
            }
            (((struct o5C_float *)(a4))->v) = ((*(float *)((t1 + t3))) * u0);
        }
        u0 = u1;
    } else {
        t1 = *(signed char *)((a4 + 0x371D));
        t2 = 0x0;
        if (t1 != 3) {
            t3 = 0x1;
            if (t1 != 5) {
                t4 = 0x2;
                if (t1 != 6) {
                    t4 = t0;
                }
                t3 = t4;
            }
            t2 = t3;
        }
        if ((*(signed char *)((a4 + 0x3730))) == 4) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC25AA54 + ((t2 << 2) << 2))))->v));
            u1 = ((((struct o8_float *)((0xC25AA54 + ((t2 << 2) << 2))))->v));
            u2 = ((((struct o37A8_float *)(a4))->v));
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct oC_float *)((0xC25AA54 + ((t2 << 2) << 2))))->v)));
            u3 = math_cos_angle16((*(int *)((a4 + 0x38))));
            u4 = (((struct oC_float *)((0xC25AA54 + ((t2 << 2) << 2))))->v);
            (((struct o54_float *)(a4))->v) = (u3 * u4);
            (((struct o50_float *)(a4))->v) = ((((struct o4_float *)((0xC25AA54 + ((t2 << 2) << 2))))->v));
            u5 = (u3 * u4);
            u1 = ((((struct o8_float *)((0xC25AA54 + ((t2 << 2) << 2))))->v));
            u2 = ((((struct o37A8_float *)(a4))->v));
        }
        (((struct o5C_float *)(a4))->v) = (u1 * u2);
        u0 = u5;
    }
    return u0;
}

int FUN_0c0812d2(int a4, int a5, int a6, int a7)
{
    register int t7;

    *(volatile signed char *)((a4 + 0x1));
    FUN_0c07eaf4(a4, a5, a6);
    if ((*(signed char *)((a4 + 0x3730))) == 4) {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o5C_float *)(a4))->v) = -1.29999995f;
        t7 = 0x5C;
    } else {
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 25.0f;
        (((struct o5C_float *)(a4))->v) = -1.70000005f;
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 6.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 6.0f);
        t7 = 0x54;
    }
    return t7;
}

int FUN_0c081516(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x371D));
    if (t0 != 3) {
        if (t0 != 5) {
            if (t0 != 6) {
                t0 = 0x6;
                if (((*(signed char *)((a4 + 0x3721))) == 0) && (a5 != 0)) {
                    t0 = 0x7;
                }
                return FUN_0c07e868(a4, t0);
            }
            return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD8, 0xFFFFFFFF, 0x3, 0xD8));
        }
        return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBB, 0xFFFFFFFF, 0x3, 0xBB));
    }
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9F, 0xFFFFFFFF, 0x3, 0x9F));
}
