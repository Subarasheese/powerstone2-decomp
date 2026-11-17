/* Library code: C that behaves like this game's own bytes. */
/* nl screen/frame buffer wrappers (0c0ddf30-0c0dfe20) */

int FUN_0c0fd8c0(int, int);
int FUN_0c0fb3fe(int);
float math_exp_float(float x);
float math_pow_float(float x, float y);
float math_ln_float(float x);
float math_ldexp_float(float value, int exp_add);
struct o0_uint { unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
float math_sin_angle16(int);
float math_sin_float(float);
int kmFlipFrameBuffer(void);
int FUN_0c0f61c0(void);
int FUN_0c0f9bb2(void);
extern float _builtin_sqrtf(float);
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c0f8180(int);
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c0f8920(int);
int kmSetBackGroundRenderState(int a4);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0ddeb0(void);
int kmActivateFrameBuffer(int, int, int, int);
extern int FUN_0c0f7b60();
int FUN_0c0f94a0(int, int, int, int);
typedef struct { unsigned int bits; } PackedColor;
int kmSetFogTableColor(PackedColor argb);
typedef struct { unsigned int value; } packed_color;
int kmSetFogVertexColor(packed_color color);
typedef struct { unsigned int v; } PACKED;
int kmSetBorderColor(PACKED c);
int FUN_0c0efc6a(int, int, int, int, int, int);
int FUN_0c0fb236(int);
int FUN_0c0fdaca(int, int);
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
int FUN_0c0f9c20(int, int);
int gfx_set_frame_time_weights(int, int, int, int);
int _divls(void);
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
int kmSetColorClampValue(PACKED lo, PACKED hi);
struct o6_short { char p[0x6]; short v; };
int kmSetBackGroundPlane(int, int, int, int);
struct o10_float { char p[0x10]; float v; };
struct o20_int { char p[0x20]; int v; };
float math_tan_reduce_quadrant(int *quadrant, float x);

int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int a4);
int nlSysMetricsDiffTime(int a4, int a5);
int gfx_set_background_plane(int a4, int a5, int a6, float f4);
float math_signed_sqrt(float f4);
float math_floor_float(float x);
int math_rand_next(void);
float math_tan_angle16(int angle_arg);


void gfx_set_border_color(unsigned int c)
{
    PACKED p;
    p.v = c | 0xFF000000;
    kmSetBorderColor(p);
}


int FUN_0c0de730(void)
{
    int stk[1];

    FUN_0c0fb236(((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}


int nlSysMetricsDiffTime(int a4, int a5)
{
    return (a4 - a5);
}


void nlSetColorClampValue(unsigned int lo, unsigned int hi)
{
    PACKED a, b;
    a.v = lo;
    b.v = hi;
    kmSetColorClampValue(a, b);
}


float math_signed_sqrt(float f4)
{
    if (0.0f > f4) {
        return (-_builtin_sqrtf((-f4)));
    }
    return _builtin_sqrtf(f4);
}


int math_atan_angle16(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = (1.0f / f4);
    if (!(_builtin_fabsf(f4) > 1.0f)) {
        u0 = f4;
    }
    t0 = 0xD;
    u1 = 0.0f;
    for (;;) {
        t1 = (t0 << 1);
        t2 = t0;
        t0 = (t0 - 1);
        u2 = ((float)t2 * (float)t2);
        u3 = (u2 * u0);
        u2 = (((float)t1 + u1) + 1.0f);
        u1 = (u3 * u0);
        u1 = (u1 / u2);
        if ((int)t0 < (int)0x1) {
            break;
        }
    }
    u2 = ((((u0 / (u1 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f);
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(u2 + 0.5f) & 0xFFFF));
    }
    if (-1.0f > f4) {
        return (unsigned short)(0xC000 - ((int)(u2 + 0.5f) & 0xFFFF));
    }
    return ((int)(u2 + 0.5f) & 0xFFFF);
}


float math_ceil_float(float f4)
{
    register float t0;

    t0 = math_floor_float((-f4));
    return (-t0);
}


float math_cos_angle16(int a4)
{
    register int t1;

    t1 = (unsigned short)a4;
    if ((int)(unsigned short)a4 > (int)0x8000) {
        t1 = (0x10000 - (unsigned short)a4);
    }
    return math_sin_angle16((0x4000 - t1));
}


float math_cot_angle16(int a4)
{
    register float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = math_tan_angle16((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}


float math_rsqrt_float(float x)
{
    if (x == 0.0f)
        return 3.40282347e+38f;
    return 1.0f / _builtin_sqrtf(x);
}


/* ldexpf-style helper: returns value * 2^exp_add by adjusting the exponent field of the float. */
float math_ldexp_float(float value, int exp_add)
{
    union { float as_float; int as_int; } bits;
    int exp;

    if (value == 0.0f) {
        return 0.0f;
    }
    bits.as_float = value;
    exp = exp_add + (unsigned char)(bits.as_int >> 23);
    if (exp < 1) {
        bits.as_int = (bits.as_int & 0x80000000) | (((bits.as_int & 0x7FFFFF) | 0x800000) >> (1 - exp));
    } else if (exp > 254) {
        bits.as_int = (bits.as_int & 0x80000000) | 0x7F800000;
    } else {
        bits.as_int = (bits.as_int & 0x807FFFFF) | (exp << 23);
    }
    return bits.as_float;
}


/* x to the power y: whole powers by repeated squaring (a negative one through 1 / x), others as exp(y ln x); 0 for a
   negative x, and for 0 to a positive power; 1 for 0 to any other */
float math_pow_float(float x, float y)
{
    int n = (int)y;
    float b, r;

    if (x == 0.0f) {
        if (y > 0.0f)
            return 0.0f;
        return 1.0f;
    }
    if ((float)n == y) {
        b = x;
        if (n < 0) {
            n = -n;
            b = 1.0f / x;
        }
        r = 1.0f;
        for (;;) {
            if (n & 1)
                r = r * b;
            n = (n + (0 > n)) >> 1;
            if (n == 0)
                return r;
            b = b * b;
        }
    }
    if (0.0f > x)
        return 0.0f;
    return math_exp_float(y * math_ln_float(x));
}
