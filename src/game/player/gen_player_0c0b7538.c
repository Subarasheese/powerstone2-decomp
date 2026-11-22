/* game/player: functions 0C0B7538-0C0B85DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
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
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c059ef6(int, int);
int FUN_0c064f80(int);
int FUN_0c07053a(int, int, float);
int FUN_0c07d1fc(int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085204(int, float);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0b7bf4(int);
int FUN_0c0b8370(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c14f824(int, int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c0b7538(int a4);
int FUN_0c0b7562(int a4);
int FUN_0c0b75ac(int a4);
int FUN_0c0b7612(int a4);
int FUN_0c0b764c(int a4);
int FUN_0c0b76e0(int a4);
int FUN_0c0b7756(int a4);
int FUN_0c0b77f0(int a4);
int FUN_0c0b798e(int a4);
int FUN_0c0b7ae6(int a4);
int FUN_0c0b7b5c(int a4);
int FUN_0c0b7b7e(int a4);
int FUN_0c0b7bb2(int a4);
int FUN_0c0b7cbc(int a4, int a5, int a6);
int FUN_0c0b7e60(int a4);
int FUN_0c0b7f34(int a4, int a5, int a6, int a7);
int FUN_0c0b7f88(int a4);
int FUN_0c0b8028(int a4);
int FUN_0c0b811a(int a4);
int FUN_0c0b817c(int a4);
int FUN_0c0b81e4(int a4);
int FUN_0c0b825e(int a4);
int FUN_0c0b8416(int a4);
int FUN_0c0b8438(int a4);

int FUN_0c0b7538(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x3, (t0), 0x1, 0x3));
}

int FUN_0c0b7562(int a4)
{
    register float u0;
    register int t5;

    u0 = *(float *)0xC0B76B0;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
    t5 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t5, 0x1, 0x9, (t5), 0x1, 0x9));
}


int FUN_0c0b7612(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xA, (t0), 0x1, 0xA);
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC0B76CC)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0B76CC)->v));
    return 0x5C;
}

int FUN_0c0b764c(int a4)
{
    register int t0;

    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b76e0(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x3, (t0), 0x2, 0x3);
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

int FUN_0c0b7756(int a4)
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

int FUN_0c0b77f0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    float u0;
    register float u1;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
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
        (((struct o16_uchar *)(a4))->v) = 0x4;
        t0 = 0x16;
    } else {
        if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
            t1 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
            if ((t1 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
                u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
                u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
                u1 = math_signed_sqrt(u0);
                if (((((struct o0_float *)0xC0B79C0)->v)) > u1) {
                    u0 = (((struct o4_float *)0xC0B79C0)->v);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
                }
            }
        }
        t1 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t2 = FUN_0c07d1fc(a4);
            t1 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x5, (t2), 0x2, 0x5);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t1 = 0x16;
            }
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c0b798e(int a4)
{
    register int t0;
    register int t2;
    register int t4;
    float u0;
    register float u1;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o16_uchar *)(a4))->v) = 0x3;
        t0 = 0x16;
    } else {
        if ((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) {
            t0 = FUN_0c064f80(((((struct o377C_int *)(a4))->v)));
            if ((t0 != 0) && (u0 = (((struct o3810_float *)(a4))->v), u1 = (((struct o2C_float *)(a4))->v), u1 > u0)) {
                u0 = ((((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))) * (((((struct o30_float *)(a4))->v)) - ((((struct o3814_float *)(a4))->v))));
                u0 = u0 + ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v)))) * ((((((struct o28_float *)(a4))->v)) - ((((struct o380C_float *)(a4))->v))));
                u1 = math_signed_sqrt(u0);
                if (((((struct o0_float *)0xC0B7B3C)->v)) > u1) {
                    u0 = (((struct o4_float *)0xC0B7B3C)->v);
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o380C_float *)(a4))->v)) - ((((struct o28_float *)(a4))->v))) / u0));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o3814_float *)(a4))->v)) - ((((struct o30_float *)(a4))->v))) / u0));
                }
            }
        }
        t0 = 0x131;
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t2 = FUN_0c07d1fc(a4);
            t0 = t2;
            if (t2 != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x2, 0x6, (t2), 0x2, 0x6);
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct oA0_float *)(t2))->v) = 1.0f;
                (((struct o9C_float *)(t2))->v) = 1.0f;
                (((struct oA0_float *)(t4))->v) = 1.0f;
                (((struct o9C_float *)(t4))->v) = 1.0f;
                t2 = *(int *)(((0x118 + a4) + 0x4));
                t4 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t2))->v) = 1.0f;
                (((struct o98_float *)(t4))->v) = 1.0f;
                (((struct o94_float *)(t2))->v) = 1.0f;
                (((struct o94_float *)(t4))->v) = 1.0f;
                (((struct o50_float *)(a4))->v) = ((((struct o10_float *)0xC0B7B3C)->v));
                (((struct o5C_float *)(a4))->v) = -1.0f;
                (((struct o131_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t0 = 0x16;
            }
        }
    }
    return t0;
}

int FUN_0c0b7ae6(int a4)
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

int FUN_0c0b7b5c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b7b7e(int a4)
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
                    return FUN_0c0b7b5c(a4);
                }
                return FUN_0c0b7ae6(a4);
            }
            return FUN_0c0b798e(a4);
        }
        return FUN_0c0b77f0(a4);
    }
    return FUN_0c0b7756(a4);
}

int FUN_0c0b7bb2(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}

int FUN_0c0b7cbc(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R5;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a6;
    v0_0 = (v0_0);
    if ((((*(int *)0xC542260) & 3) != 0)) goto L_C0B7CD8;
    FUN_0c14f824((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), v0_1);
    L_C0B7CD8:;
    FUN_0c07da48(v0_0);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    v0_1 = (unsigned char)(FUN_0c037bf6(v0_0)) != 0;
    if (v0_1) goto L_C0B7D0E;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C0B7DF4;
    L_C0B7D0E:;
    v0_1 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_1) goto L_C0B7D70;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x9, v0_2, 0x2, 0x9);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    (((struct o4C_float *)(v0_0))->v) = (((((struct o4C_float *)(v0_0))->v)) * 0.5f);
    (((struct o54_float *)(v0_0))->v) = (((((struct o54_float *)(v0_0))->v)) * 0.5f);
    v0_1 = (0x15);
    v0_2 = (((*(signed char *)((v0_0 + 0x15))) + 0x1));
    L_C0B7DF2:;
    *(unsigned char *)((v0_0 + v0_1)) = v0_2;
    L_C0B7DF4:;
    return v0_1;
    L_C0B7D70:;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0x9, v0_2, 0x2, 0x9);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x78;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x14;
    (((struct o58_float *)(v0_0))->v) = (-(((((struct o4C_float *)(v0_0))->v)) / 20.0f));
    (((struct o60_float *)(v0_0))->v) = (-(((((struct o54_float *)(v0_0))->v)) / 20.0f));
    (((struct o50_float *)(v0_0))->v) = -3.5f;
    (((struct o5C_float *)(v0_0))->v) = -2.0f;
    v0_1 = (((struct o118_int *)(v0_0))->v);
    v0_2 = *(int *)(((0x118 + v0_0) + 0x4));
    (((struct oA0_float *)(v0_2))->v) = 1.0f;
    (((struct o9C_float *)(v0_2))->v) = 1.0f;
    (((struct oA0_float *)(v0_1))->v) = 1.0f;
    (((struct o9C_float *)(v0_1))->v) = 1.0f;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 1.0f;
    (((struct o98_float *)(v0_2))->v) = 1.0f;
    (((struct o94_float *)(v0_1))->v) = 1.0f;
    (((struct o94_float *)(v0_2))->v) = 1.0f;
    v0_1 = (0x15);
    v0_2 = (0x3);
    goto L_C0B7DF2;
}

int FUN_0c0b7e60(int a4)
{
    register int t0;
    register float u0;

    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
            u0 = *(float *)0xC0B7F70;
            t0 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = u0;
            (((struct o94_float *)(t0))->v) = u0;
            t0 = (((struct o11C_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = u0;
            (((struct o94_float *)(t0))->v) = u0;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
            (((struct o15_uchar *)(a4))->v) = 0x2;
            return 0x15;
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c037bf6(a4);
    }
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x10, (t0), 0x2, 0x10);
    u0 = *(float *)0xC0B7F70;
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = u0;
    (((struct o94_float *)(t0))->v) = u0;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * u0);
    (((struct o15_uchar *)(a4))->v) = 0x2;
    return 0x15;
}

int FUN_0c0b7f34(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0b7e60(a4);
            }
            return ((int (*)(int, int, int, int))(0xC0B7E34))(a4, a5, a6, a7);
        }
        return FUN_0c0b7cbc(a4, a5, a6);
    }
    return FUN_0c0b7bf4(a4);
}

int FUN_0c0b7f88(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
    FUN_0c037bf6(a4);
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}

int FUN_0c0b8028(int a4)
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
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x2, 0x11, (t1), 0x2, 0x11);
            (((struct o16_uchar *)(a4))->v) = 0x3;
            return 0x16;
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c0b811a(int a4)
{
    register int t4;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t4 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t4 != 0) {
            if (t4 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            (((struct o16_uchar *)(a4))->v) = 0x3;
            return 0x16;
        }
        return t4;
    }
    return 0x50;
}

int FUN_0c0b817c(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0b81e4(int a4)
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

int FUN_0c0b825e(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
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
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 30.0f);
        (((struct o5C_float *)(a4))->v) = -1.5f;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}

int FUN_0c0b8416(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

