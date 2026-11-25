/* game/player: functions 0C0ABC34-0C0ACAEA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059ef6(int, int);
int FUN_0c064f80(int);
int FUN_0c07053a(int, int, float);
int FUN_0c070642(int);
int FUN_0c07075c(int);
int FUN_0c071774(int);
int FUN_0c072c34(int);
int FUN_0c07d1fc(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085204(int, float);
int FUN_0c085d0c(int);
int FUN_0c0ab2ee(int);
int FUN_0c0ab3aa(int);
int FUN_0c0ab444(int);
int FUN_0c0ab85c(int);
int FUN_0c0abc6c(int);
int FUN_0c0abea8(int);
int FUN_0c0ac09c(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c14f824(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0abc34(int a4);
int FUN_0c0abcd4(int a4);
int FUN_0c0abdae(int a4);
int FUN_0c0abdf4(int a4);
int FUN_0c0abe16(int a4);
int FUN_0c0abe42(int a4);
int FUN_0c0abf1c(int a4);
int FUN_0c0ac044(int a4);
int FUN_0c0ac0ce(int a4);
int FUN_0c0ac11c(int a4);
int FUN_0c0ac196(int a4);
int FUN_0c0ac2ac(int a4);
int FUN_0c0ac3ae(int a4);
int FUN_0c0ac3d0(int a4);
int FUN_0c0ac520(int a4);
int FUN_0c0ac5cc(int a4);
int FUN_0c0ac654(int a4);
int FUN_0c0ac7e8(int a4);
int FUN_0c0ac910(int a4);
int FUN_0c0ac94e(int a4);
int FUN_0c0ac9a4(int a4);
int FUN_0c0ac9d8(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c0abc34(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
    FUN_0c037bf6(a4);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}

int FUN_0c0abcd4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x0, 0xA, (t0), 0x0, 0xA);
            (((struct o16_uchar *)(a4))->v) = 0x2;
            return 0x16;
        }
    }
    t0 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t0 = t1;
        if (t1 != 0) {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, 0x11, (t1), 0x2, 0x11);
            (((struct o16_uchar *)(a4))->v) = 0x3;
            t0 = 0x16;
        }
    }
    return t0;
}

int FUN_0c0abdae(int a4)
{
    register int t8;
    register int t4;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t8 = 0x50;
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        t8 = t4;
        if (t4 != 0) {
            (((struct o16_uchar *)(a4))->v) = 0x3;
            t8 = 0x16;
        }
    }
    return t8;
}

int FUN_0c0abdf4(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0abe16(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0abdf4(a4);
            }
            return FUN_0c0abdae(a4);
        }
        return FUN_0c0abcd4(a4);
    }
    return FUN_0c0abc6c(a4);
}

int FUN_0c0abe42(int a4)
{
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x21, 0xFFFFFFFF, 0x2, 0x21);
    FUN_0c037bf6(a4);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}


int FUN_0c0ac044(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x15, (t0), 0x2, 0x15);
        FUN_0c07053a(a4, 0xFFFFFFE8, ((((struct o0_float *)0xC0AC108)->v)));
        (((struct o50_float *)(a4))->v) = ((((struct o8_float *)0xC0AC108)->v));
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o16_uchar *)(a4))->v) = 0x3;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0ac0ce(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0ac09c(a4);
            }
            return FUN_0c0ac044(a4);
        }
        return FUN_0c0abf1c(a4);
    }
    return FUN_0c0abea8(a4);
}

int FUN_0c0ac11c(int a4)
{
    register int t0;

    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t0 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0xA, (t0), 0x2, 0xA);
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    return 0x14;
}

int FUN_0c0ac196(int a4)
{
    int t0;
    int t1;
    int t3;
    int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if (((((struct o1C_short *)(a4))->v)) != 0) {
        (((struct o38_uint *)(a4))->v) = (unsigned short)(((((struct o38_int *)(a4))->v)) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - ((((struct o38_int *)(a4))->v))) / (int)((((struct o1C_short *)(a4))->v)))));
        (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        if ((*(signed char *)(a4 + 0x371A)) == 0) {
            t0 = *(signed char *)(a4 + 0x1);
            t1 = 0xB;
            t2 = (t0);
            t3 = t0;
            t0 = 0xB;
        } else {
            t3 = *(signed char *)(a4 + 0x1);
            t1 = 0x1E;
            t2 = (t3);
            t0 = 0x1E;
        }
        FUN_0c07e79c(a4, t3, 0x2, t0, t2, 0x2, t1);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        (((struct o38_uint *)(a4))->v) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, ((((struct o0_float *)0xC0AC34C)->v)));
        (((struct o5C_float *)(a4))->v) = ((((struct o8_float *)0xC0AC34C)->v));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}


int FUN_0c0ac3ae(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0ac3d0(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0ac3ae(a4);
        }
        return FUN_0c0ac2ac(a4);
    }
    return FUN_0c0ac196(a4);
}

int FUN_0c0ac520(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x371A))) == 0) {
        t0 = *(signed char *)((a4 + 0x1));
        t1 = 0x3;
        t2 = (t0);
        t3 = t0;
        t0 = 0x3;
    } else {
        t3 = *(signed char *)((a4 + 0x1));
        t1 = 0x12;
        t2 = (t3);
        t0 = 0x12;
    }
    FUN_0c07e79c(a4, t3, 0x2, t0, t2, 0x2, t1);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = -1.0f;
    return 0x5C;
}

int FUN_0c0ac5cc(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x4, (t0), 0x2, 0x4);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}


int FUN_0c0ac7e8(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;
    register float u1;
    float u2;
    register float u3;

    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        (((struct o16_uchar *)(a4))->v) = 0x3;
        return 0x16;
    }
    t1 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t1 != 0) && ((t0 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t0))->v), u0 > u1) && (u2 = (((struct o0_float *)0xC0AC980)->v), u3 = (((struct o3780_float *)(a4))->v), u2 > u3))) {
        u0 = (((struct o4_float *)0xC0AC980)->v);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
    }
    t0 = 0x131;
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t1 = FUN_0c07d1fc(a4);
        t0 = t1;
        if (t1 != 0) {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, 0x6, (t1), 0x2, 0x6);
            t1 = *(int *)(((0x118 + a4) + 0x4));
            t3 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            (((struct oA0_float *)(t3))->v) = 1.0f;
            (((struct o9C_float *)(t3))->v) = 1.0f;
            t1 = *(int *)(((0x118 + a4) + 0x4));
            t3 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o98_float *)(t3))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t3))->v) = 1.0f;
            (((struct o50_float *)(a4))->v) = ((((struct o10_float *)0xC0AC980)->v));
            (((struct o5C_float *)(a4))->v) = -1.0f;
            (((struct o131_uchar *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t0 = 0x16;
        }
    }
    return t0;
}

int FUN_0c0ac910(int a4)
{
    register int t3;
    register int t5;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t3 = FUN_0c07ecc6(a4, 0x0, 0x0);
    t5 = t3;
    if (t3 != 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t5 = 0x16;
    }
    return t5;
}

int FUN_0c0ac94e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0ac9a4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    return FUN_0c0ac94e(a4);
                }
                return FUN_0c0ac910(a4);
            }
            return FUN_0c0ac7e8(a4);
        }
        return FUN_0c0ac654(a4);
    }
    return FUN_0c0ac5cc(a4);
}

int FUN_0c0ac9d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D50C)))))(a4, a5, a6, a7);
            }
                break;
            case 4:
            {
                FUN_0c0ab3aa(a4);
            }
                break;
            case 6:
            {
                FUN_0c070642(a4);
            }
                break;
            case 8:
            {
                FUN_0c07075c(a4);
            }
                break;
            case 10:
            {
                FUN_0c0ac520(a4);
            }
                break;
            case 12:
            {
                FUN_0c0ab2ee(a4);
            }
                break;
            case 14:
            {
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    FUN_0c0ab444(a4);
                } else {
                    FUN_0c0ab85c(a4);
                }
            }
                break;
            case 16:
            {
                if ((*(signed char *)((a4 + 0x371A))) != 0) {
                    FUN_0c0abe42(a4);
                } else {
                    FUN_0c0abc34(a4);
                }
            }
                break;
            case 18:
            {
                FUN_0c071774(a4);
            }
                break;
            case 24:
            {
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    FUN_0c0abc34(a4);
                } else {
                    FUN_0c0abe42(a4);
                }
            }
                break;
            case 26:
            {
                *(volatile signed char *)((a4 + 0x371A));
                FUN_0c0ac11c(a4);
            }
                break;
            default:
            {
                FUN_0c072c34(a4);
            }
                break;
        }
    } else {
        t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D50C)))))(a4, a5, a6, a7);
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    return 0x94;
}
