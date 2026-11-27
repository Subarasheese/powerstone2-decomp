/* Straight-line functions with calls and guards (batch gen_rf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o254_uint { char p[0x254]; unsigned int v; };
struct o260_float { char p[0x260]; float v; };
struct o264_uint { char p[0x264]; unsigned int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c054a62(int, int);
float FUN_0c056b68(int, int, int, int);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
float FUN_0c054058(int a4, int a5, int a6, int a7, float f4, float f5);

/* manual: the state-byte machine of a spawn (states 0 / 1 / 2 share one tail: copy a 128-byte table to +0x248, draw the angles with nlRand, rotate the 12-byte vector); 127 hand cases, see notes */
float FUN_0c054058(int a4, int a5, int a6, int a7, float f4, float f5)
{
    float d[3];
    float v[3];
    float res;
    int ang, k, i, tab, ap;
    int row = (signed char)*(signed char *)0xC542237;
    signed char *o = (signed char *)a4;
    row = ((((((row << 2) << 2) << 1) + row) << 2) + 0xC2580CC) + ((short)*(signed char *)0xC54223C * (short)0x2C);
    if (*(signed char *)row == 0) {
        ang = *(int *)(row + 0x28);
    } else {
        d[0] = *(float *)(row + 0x10) - *(float *)(row + 4);
        d[2] = *(float *)(row + 0x18) - *(float *)(row + 0xC);
        if (d[2] == 0.0f) d[2] = 9.99999997e-07f;
        ang = math_atan2_angle16(a4, a5, a6, a7, d[0], d[2]);
    }
    k = o[10];
    ap = 0xC532498;
    res = 0.0f;
    if (k == 0) {
        o[10] += 2;
        o[11] = 30;
        o[12] = *(signed char *)0xC542252;
        for (i = 0; i < 4; i++) if (*(signed char *)(ap + i * 0x3938 + 0x3714)) break;
        o[14] = i;
        tab = 0xC1B90D0;
    } else if (k == 1) {
        if (o[11]) {
            o[11]--;
            if (o[11] <= 0) FUN_0c05258e(1, 0x14, 0x4000, 0x1E, 0);
            res = FUN_0c056b68(a4, a5, a6, a7);
        }
        if (o[12] == *(signed char *)0xC542252) return res;
        o[12] = *(signed char *)0xC542252;
        o[10]++;
        i = o[14];
        do {
            i++;
            if (i > 3) i = 0;
        } while (*(signed char *)(ap + i * 0x3938 + 0x3714) == 0);
        o[14] = i;
        tab = 0xC1B90D0;
    } else if (k == 2) {
        o[10]--;
        o[11] = 30;
        tab = 0xC1B9150;
    } else {
        return res;
    }
    { struct b128 { int w[32]; }; *(struct b128 *)(a4 + 0x248) = *(struct b128 *)tab; }
    *(unsigned int *)(a4 + 0x264) = *(int *)(0xC1B91D0 + (nlRand() % 4) * 4);
    *(unsigned int *)(a4 + 0x268) = (unsigned short)(*(int *)(0xC1B91E0 + (nlRand() % 5) * 4) + ang);
    if (k == 2) {
        *(float *)(a4 + 0x260) = *(float *)(0xC24151C + (o[13] == 0) * 4);
    } else {
        o[13] = nlRand() % 2;
        *(float *)(a4 + 0x260) = *(float *)(0xC24151C + o[13] * 4);
    }
    i = *(int *)(ap + o[14] * 0x3938 + 0x38);
    { struct mv3 { int w[3]; }; *(struct mv3 *)v = *(struct mv3 *)(0xC258E8C + *(signed char *)(ap + o[14] * 0x3938 + 2) * 12); }
    *(float *)(a4 + 0x280) = v[1];
    {
        float c = math_cos_angle16(i);
        float s = math_sin_angle16(i);
        *(float *)(a4 + 0x27C) = s * v[2] + v[0] * c;
        s = -(math_sin_angle16(i) * v[0]);
        *(float *)(a4 + 0x284) = s + v[2] * math_cos_angle16(i);
    }
    *(unsigned int *)(a4 + 0x254) = o[14] + 5;
    FUN_0c054a62(a4, a4 + 0x248);
    if (k != 2) FUN_0c05258e(0x63, 0x14, 0x100, 0xF, 0);
    if (k == 0) o[12] = *(signed char *)0xC542252;
    return FUN_0c056b68(a4, a5, a6, a7);
}
