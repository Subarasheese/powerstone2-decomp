/* Straight-line functions with calls and guards (batch gen_abp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38A8_short { char p[0x38A8]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlSetTranslate(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c161830(int a4, int a5, int a6, int a7);

typedef struct { float x, y, z; } Vec;
/* manual: rope of three parts behind an object; 96 cases, 465 of 465 instructions */
int FUN_0c161830(int a4, int a5, int a6, int a7)
{
    char *o = (char *)a4;
    char *own = *(char **)(o + 0x10);
    char *p = own + 0x38A4;
    char *part;
    Vec prev, d, t, e;
    float floor, len, dist, lim, s, x;
    int far, i, ang;

    if (*(unsigned char *)p != 36 || *(short *)(p + 2) != *(short *)(o + 0x24) || *(signed char *)(own + 0x3714) == 0)
        return FUN_0c03f346(a4, (int)own, a6, a7);
    if (*(unsigned short *)(*(char **)(o + 0x10) + 0xAC) & 0x400) {
        *(unsigned short *)(o + 0xAC) |= 0x400;
        s = *(float *)(*(char **)(o + 0x10) + 0xB0);
    } else {
        *(unsigned short *)(o + 0xAC) &= ~0x400;
        s = 1.0f;
    }
    *(float *)(o + 0xB0) = s;
    if ((*(char *)(o + 0xA8) = *(*(char **)(o + 0x10) + 0xA8)) != 0 && *(short *)(*(char **)(o + 0x10) + 0x38A8) < 60)
        *(char *)(o + 0xA8) = *(signed char *)0x0C542260 & 1;
    switch (*(signed char *)(o + 0x14)) {
    case 0:
        *(char *)(o + 0x14) += 1;
        *(char *)(o + 0xA8) = 0;
        *(short *)(o + 0x22) = 0;
        return 0x22;
    case 1:
        *(char *)(o + 0x14) += 1;
        *(float *)(o + 0x50) = 0.0f;
        *(char *)(o + 0xA8) = 1;
        break;
    }

    i = FUN_0c064f80(0x0C532498 + *(signed char *)(o + 1) * 0x3938) ? 0x2C : 0x168;
    floor = *(float *)(0x0C532498 + *(signed char *)(o + 1) * 0x3938 + i);
    floor += 25.0f;
    math_mat_get_translate(*(int *)(o + 0xC4) + 0x28, (int)&t);
    *(float *)(o + 0x50) -= 5.0f;
    *(float *)(o + 0x4C) -= 2.0f;
    if (!((*(float *)(o + 0x2C) += *(float *)(o + 0x50)) > floor)) {
        *(float *)(o + 0x2C) = floor;
        *(float *)(o + 0x50) = 0.0f;
        *(float *)(o + 0x4C) = 0.0f;
    }

    nlSubVector3op((int)&d, a4 + 0x28, (int)&t);
    len = nlScalor((int)&d);
    far = 0;
    if (40.0f > len) {
        dist = 40.0f;
        if (len == 0.0f) {
            d.x = d.z = 0.0f;
            d.y = -40.0f;
            goto place;
        }
    } else if (len > 120.0f) {
        dist = 120.0f;
        far = 1;
    } else {
        dist = len;
        goto placed;
    }
    s = dist / len;
    math_vec3_mul_xyz((int)&d, s, s, s);
place:
    nlAddVector3op(a4 + 0x28, (int)&t, (int)&d);
placed:

    nlSelectMatrixStack(1);
    nlUnitMatrix();
    nlSetTranslate(a4 + 0x28);
    nlInvertMatrix(0);
    nlSubVector3op((int)&d, (int)&t, a4 + 0x28);
    if (far) {
        x = d.x;
        s = d.y;
        s *= s;
        s = math_signed_sqrt(s + x * x);
        if (s == 0.0f)
            s = -0.00001f;
        part = *(char **)(o + 0xC8);
        *(int *)(part + 0x80) = math_atan2_angle16(d.x, -d.y);
        *(int *)(part + 0x78) = math_atan_angle16(-d.z / s);
        if (--*(short *)(o + 0x22) <= 0) {
            FUN_0c059df2(*(signed char *)(o + 1), 0x5D);
            *(short *)(o + 0x22) = 40;
        }
    }

    prev = *(Vec *)(o + 0x28);
    for (i = 2; i < 5; i++) {
        part = ((char **)(o + 0xC4))[i];
        math_mat_get_translate((int)(part + 0x28), (int)&d);
        d.y += *(float *)(o + 0x4C);
        lim = (4.1f - (float)i) / 4.0f * dist;
        if (floor > d.y)
            d.y = floor;
        nlSubVector3op((int)&e, (int)&d, (int)&t);
        len = nlScalor((int)&e);
        if (len > lim) {
            s = lim / len;
            math_vec3_mul_xyz((int)&e, s, s, s);
            nlAddVector3op((int)&d, (int)&t, (int)&e);
        }
        nlCalcPoint((int)&d, (int)(part + 0x6C));
        nlSubVector3op((int)&e, (int)&prev, (int)&d);
        prev = d;
        x = e.x;
        s = e.y;
        s *= s;
        s = math_signed_sqrt(s + x * x);
        if (s == 0.0f)
            s = 0.000001f;
        *(int *)(part + 0x80) = math_atan2_angle16(e.x, -e.y);
        *(int *)(part + 0x78) = ang = math_atan_angle16(-e.z / s);
    }
    return ang;
}
