/* Straight-line functions with calls and guards (batch gen_no): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c07cb70(int, int, int, int);
int FUN_0c07cffa(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07eaf4(int, int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int, int);
int FUN_0c08076a(int);
int FUN_0c083cf0(int, int, int, int);
int FUN_0c085cac(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c068acc(int a4, int a5, int a6, int a7);

#define F(T, o) (*(T *)(a4 + (o)))
#define GO(a, b) do { F(unsigned char, 0x3717) = (a); F(unsigned char, 0x3718) = (b); return FUN_0c085cac(a4, (a), (b), a7); } while (0)

/* manual: FUN_0c068acc(fighter) one step of the fighter state machine (state byte +0x371D: 3, 5, 6 or other): the early-out calls, the
   blend of the angle +0x38 toward +0x3850 over +0x1C frames, else the 3-range step (-th, +th, half) with its effect block; the 12 written-out
   copies (3 states x 3 ranges + effects) are one code each, set by the state; 518 cases, 981 of 981 instructions */
int FUN_0c068acc(int a4, int a5, int a6, int a7)
{
    static const unsigned short idt[6] = { 0x312, 0x311, 0x3A2, 0x3C1, 0x3C2, 0x3BF };
    int t, r, d, th, k, id, fx, q, s;
    float w;

    if (FUN_0c07cffa(a4)) GO(2, 0);
    r = FUN_0c083cf0(a4, a5, a6, a7);
    if (r) return r;
    t = F(signed char, 0x371D);
    if (t == 3 || t == 5 || t == 6) {
        if (FUN_0c07f18c(a4)) {
            r = FUN_0c07fea4(a4, 0, a6);
            if (r) return r;
        }
    } else {
        if (FUN_0c07f18c(a4)) {
            if (F(float, 0x168) + 50.0f > F(float, 0x2C)) {
                F(float, 0x2C) = F(float, 0x168);
                F(float, 0x17C) = 1.0f;
            }
            r = FUN_0c07fea4(a4, 0, a6);
            if (r) return r;
        }
        if (FUN_0c07cb70(a4, a5, a6, a7)) {
            r = F(short, 0x20) - 1;
            F(unsigned short, 0x20) = r;
            if ((short)r == 0) GO(0x25, 0);
        } else {
            F(unsigned short, 0x20) = 5;
        }
    }
    if (FUN_0c07ebe6(a4)) GO(5, 2);
    if (!FUN_0c07ebd0(a4)) {
        F(int, 0x38) = F(int, 0x3850);
        t = F(signed char, 0x371D);
        if (t != 3 && t != 5 && t != 6 && F(short, 0x1C) != 0) GO(0, 0);
        FUN_0c08076a(a4);
        GO(2, 0);
    }
    r = FUN_0c07ecc6(a4, 1, 0);
    if (r == 0) GO(5, 7);
    if (r == 2) GO(6, 0);
    t = F(signed char, 0x371D);
    if (F(short, 0x1C) != 0) {
        q = *(volatile int *)(a4 + 0x38);
        s = *(volatile short *)(a4 + 0x3850);
        d = (short)(s - q);
        F(int, 0x38) += d / F(short, 0x1C);
        F(float, 0x4C) = math_sin_angle16(F(int, 0x3850)) * 4.0f;
        F(float, 0x54) = math_cos_angle16(F(int, 0x3850)) * 4.0f;
        r = F(short, 0x1C) - 1;
        F(unsigned short, 0x1C) = r;
        if (t == 3 || t == 5 || t == 6) return r;
        if ((short)r == 0) return FUN_0c07e868(a4, 2, a6, a7);
        return (short)r;
    }
    if (!FUN_0c07ebd0(a4)) return FUN_0c08076a(a4);
    d = *(short *)(0xC5413E8 + ((short)F(signed char, 1) * (short)0x2F8));
    F(unsigned int, 0x3850) = (unsigned short)(FUN_0c07eaf4(a4, a5, a6) + d);
    if (t == 3) {
        th = 0x71C;
    } else if (t == 5 || t == 6) {
        th = 0x38E;
    } else {
        th = 0xE38;
        if (F(signed char, 2) == 11 && F(signed char, 0x3721) == 0 && F(signed char, 0x371C) != 0) th = 0x38E;
    }
    q = *(volatile int *)(a4 + 0x38);
    s = *(volatile short *)(a4 + 0x3850);
    d = (short)(s - q);
    if (d <= -th) {
        F(int, 0x38) -= th;
        k = 0;
    } else if (d >= th) {
        F(int, 0x38) += th;
        k = 1;
    } else {
        F(int, 0x38) += d / 2;
        k = 2;
    }
    if (t == 6) return FUN_0c08076a(a4);
    fx = 0;
    if (t == 3 || t == 5) {
        if (t == 3 && F(short, 0x1E) != 0) return FUN_0c08076a(a4);
        id = idt[(t == 5) * 3 + k];
        w = t == 3 ? 5.0f : 30.0f;
        if ((unsigned short)F(short, 0x3818) != id) fx = 1;
    } else {
        id = 25 - k;
        w = 30.0f;
        if (F(signed char, 2) == 11 && (unsigned short)F(short, 0x3818) != id && F(signed char, 0x3721) == 0 && F(signed char, 0x371C) != 0) fx = 2;
    }
    if (fx) {
        if (fx == 1) {
            FUN_0c07e79c(a4, -1, 3, id & 255, -1, 3, id & 255);
        } else {
            q = F(signed char, 1);
            FUN_0c07e79c(a4, q, 0, id, q, 0, id);
        }
        q = F(int, 0x118);
        *(float *)(q + 0x98) = w;
        *(float *)(q + 0x94) = w;
        q = F(int, 0x11C);
        *(float *)(q + 0x98) = w;
        *(float *)(q + 0x94) = w;
        if (fx == 1) {
            if (k != 2) FUN_0c059df2(F(signed char, 1), t == 3 ? 0x5B : 0x64);
            F(unsigned short, 0x22) = nlRand() % 40 + 0x28;
        }
    }
    if ((t == 3 || t == 5) && F(short, 0x22) != 0) {
        r = F(short, 0x22);
        F(unsigned short, 0x22) = r - 1;
        if ((short)(r - 1) <= 0) {
            FUN_0c059df2(F(signed char, 1), t == 3 ? 0x5B : 0x64);
            F(unsigned short, 0x22) = nlRand() % 40 + 0x28;
        }
    }
    return FUN_0c08076a(a4);
}
