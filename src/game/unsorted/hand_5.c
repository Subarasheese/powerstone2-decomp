/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, slice 5. */
typedef struct { int w[3]; } S12;
typedef struct { int w[10]; } S40;

int mdl_vtx_set_pos(int a4)
{
    *(S12 *)*(int *)0xC3BD868 = *(S12 *)a4;
    *(unsigned int *)*(int *)0xC3BD868 |= 1;
    return 0;
}

float FUN_0c058328(int a4, int a5);
int FUN_0c15270e(int a4, int a5);
int FUN_0c063f4a(int a4);
int FUN_0c05d1a0(int a4);
int FUN_0c05d800(int a4);
int FUN_0c135f7c(int a4, int a5);
int FUN_0c03f06a(int a4);

float math_mat_row0_length(int a4)
{
    return FUN_0c058328(a4, 0);
}

void boot_advance_to_version_screen(void)
{
    char *g = (char *)0xC541F3C;
    g[5] = g[5] + 1;
    *(short *)(g + 16) = 180;
}

int FUN_0c0448f6(int a4)
{
    char *p = (char *)(a4 + 0x41C);
    p[4] = 0;
    p[5] = 1;
    return FUN_0c15270e(a4, (int)p);
}

void FUN_0c02440e(int a4)
{
    int p;
    for (p = a4; p != 0; p = *(int *)(p + 12))
        FUN_0c063f4a(p);
}

int FUN_0c0d5c9a(int a4)
{
    char *t = (char *)0xC5421F8;
    if (t[93] != 0 || t[92] != 0)
        return FUN_0c05d1a0(*(signed char *)(a4 + 9));
    return FUN_0c05d800(*(signed char *)(a4 + 9));
}

void FUN_0c0300da(void)
{
    unsigned int i;
    for (i = 0; i < 160; i += 40)
        *(S40 *)(0xC5426C4 + i) = *(S40 *)(0xC542764 + i);
}

void FUN_0c03b9f0(int a4, int a5)
{
    signed char c = a5;
    int i;
    for (i = 0; i < 6; i++) {
        char *r = (char *)FUN_0c135f7c(a4, c);
        if (r != 0)
            r[2] = i;
    }
}

int stage_type02_update(int a4)
{
    signed char s = *(signed char *)(a4 + 0x375A);
    switch (s) {
    case 0: return ((int (*)(int))0x0C09A21E)(a4);
    case 1: return ((int (*)(int))0x0C099680)(a4);
    case 2: return ((int (*)(int))0x0C099FFE)(a4);
    case 3: return ((int (*)(int))0x0C09A434)(a4);
    case 4: return ((int (*)(int))0x0C099774)(a4);
    case 5: return ((int (*)(int))0x0C09A074)(a4);
    }
    return s;
}

void obj_release_all_but_class(int a4)
{
    short i;
    for (i = 0; i < 10; i++) {
        if (i != a4) {
            int p;
            for (p = ((int *)0xC532434)[i]; p != 0; p = *(int *)(p + 12))
                FUN_0c03f06a(p);
            ((int *)0xC532434)[i] = 0;
            ((int *)0xC53245C)[i] = 0;
        }
    }
}

void FUN_0c0d0cc8(void)
{
    unsigned int i;
    for (i = 0; i < 48; i += 12)
        /* 12-byte copy (_quick_odd_mvn, r1 = 0xC540978+0x6F0+i, r2 = 0xC1C7940+48*(signed char)*(0xC5421F8+68)+i): not
           comparable (stubbed; the call target is checked) */
        *(S12 *)(0xC540978 + 0x6F0 + i) = *(S12 *)(0xC1C7940 + *(signed char *)(0xC5421F8 + 68) * 48 + i);
}

int FUN_0c0522be(int a4);

void FUN_0c053a1a(int a4, int a5, int a6, int a7, int a8)
{
    unsigned int p;
    unsigned int end = 0xC5410FC + 0xBE0;
    FUN_0c0522be(0xC2414F4);
    for (p = 0xC5410FC; p < end; p += 0x2F8) {
        *(int *)(p + 0x1A0) = a4;
        *(int *)(p + 0x19C) = a5;
        *(int *)(p + 0x1FC + 4) = a6;
        *(int *)(p + 0x1FC) = a6;
        *(int *)(p + 0x240) = a7;
        /* 12-byte copy (_quick_odd_mvn) of a8 to p+0x228 */
        *(S12 *)(p + 0x228) = *(S12 *)a8;
    }
}

int FUN_0c0c2ab6(int a4, int a5);
int FUN_0c0c2d56(int a4, int a5, int a6);

void FUN_0c0d4122(int a4, int a5, int a6)
{
    char *p = (char *)a4;
    short *s;
    signed char st = p[21];
    if (st == 0) {
        *(short *)(p + 28) = 300;
        p[0xA8] = 0;
        *(S12 *)(p + 40) = *(S12 *)a5;
        *(int *)(p + 56) = a6;
        p[21] = p[21] + 1;
        *(int *)(p + 60) = 0;
        *(int *)(p + 52) = 0;
        *(int *)(p + 0xA4) = 0;
        FUN_0c0c2ab6(a4, *(signed char *)(0xC2738CA + (unsigned char)p[0x41C] * 52));
        s = (short *)(p + 298);
        s[2] = 0;
        s[0] = 0;
        *(short *)(p + 300) = 0;
    } else if (st != 1) {
        return;
    }
    *(short *)(p + 28) = *(short *)(p + 28) - 1;
    if (*(short *)(p + 28) > 0)
        return;
    FUN_0c0c2d56(a4, 0, *(signed char *)(p + 1));
    s = (short *)(p + 298);
    p[0xA8] = 0;
    s[2] = 0;
    s[0] = 0;
    *(short *)(p + 300) = 0;
    *(short *)(p + 28) = 60;
}

void FUN_0c0f0d7a(int a4)
{
    char *p = (char *)a4;
    *(S12 *)(p + 40) = *(S12 *)(0xC2881F0 + p[2] * 16);
    *(int *)(p + 56) = *(int *)(0xC2881F0 + p[2] * 16 + 12);
    if (p[27] != -1) {
        *(float *)(p + 40) += *(float *)(*(int *)(0xC540978 + 0x41C + p[27] * 4) + 40);
        *(float *)(p + 44) += *(float *)(*(int *)(0xC540978 + 0x41C + p[27] * 4) + 44);
        *(float *)(p + 48) += *(float *)(*(int *)(0xC540978 + 0x41C + p[27] * 4) + 48);
    }
}

int nlRand(void);
int FUN_0c150010(int a4, int a5, int a6, float f4, float f5, float f6, float f7);

void FUN_0c0c4482(int a4, int a5, int a6)
{
    float v[3];
    int half = a6 / 2;
    int i;
    for (i = 0; i < a5; i++) {
        v[0] = *(float *)(a4 + 40) + (float)(nlRand() % a6 - half);
        v[2] = *(float *)(a4 + 48) + (float)(nlRand() % a6 - half);
        v[1] = *(float *)(a4 + 44) + (float)(nlRand() % a6 - half);
        FUN_0c150010((int)v, a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
    }
}

int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c14b84a(int a4);

void FUN_0c14b7bc(int a4)
{
    char *src = (char *)a4;
    int cnt = FUN_0c037320(11, *(int *)(0xC4B40E0 + src[1] * 8));
    char *o = (char *)FUN_0c03f444(5, 0, cnt);
    int i;
    if (o == 0)
        return;
    FUN_0c03733c((int)o, 11, *(int *)(0xC4B40E0 + src[1] * 8));
    *(int *)(o + 4) = (int)FUN_0c14b84a;
    o[1] = src[1];
    *(short *)(o + 172) = 31;
    o[169] = 33;
    *(int *)(o + 16) = a4;
    *(float *)(o + 72) = 10.0f;
    *(float *)(o + 68) = 10.0f;
    *(float *)(o + 64) = 10.0f;
    if (cnt > 0) {
        i = 0;
        do {
            **(char **)(o + 196 + i * 4) = 0;
            i++;
        } while (i < cnt);
    }
}

int FUN_0c03f346(int a4, int a5, int a6);

void FUN_0c13fb0c(int a4, int a5, int a6)
{
    char *p = (char *)a4;
    float f;
    short n;
    *(S12 *)(p + 40) = *(S12 *)(*(int *)(p + 16) + 40);
    f = *(float *)(p + 80);
    if (!(2147483648.0f > f))
        f = f - 4294967296.0f;
    *(int *)(p + 56) = *(int *)(p + 56) + (int)f;
    *(float *)(p + 80) = *(float *)(p + 80) + *(float *)(p + 92);
    if (*(char *)(*(int *)(p + 16) + 14101) != 26)
        { FUN_0c03f346(a4, a5, a6); return; }
    switch (p[20]) {
    case 0:
        *(float *)(p + 180) = 1.0f;
        *(float *)(p + 184) = 1.0f;
        *(float *)(p + 188) = 1.0f;
        *(float *)(p + 64) = 1.0f;
        *(float *)(p + 68) = 0.6f;
        *(float *)(p + 72) = 1.0f;
        *(float *)(p + 80) = 182.0f;
        *(float *)(p + 92) = 18.0f;
        *(short *)(p + 28) = 50;
        p[20] = p[20] + 1;
        break;
    case 1:
        n = *(short *)(p + 28) - 1;
        *(short *)(p + 28) = n;
        if (n == 0) {
            *(short *)(p + 28) = 50;
            p[20] = p[20] + 1;
        }
        break;
    case 2:
        *(float *)(p + 180) = *(float *)(p + 180) - 0.02f;
        *(float *)(p + 184) = *(float *)(p + 184) - 0.02f;
        *(float *)(p + 188) = *(float *)(p + 188) - 0.02f;
        *(float *)(p + 64) = *(float *)(p + 64) - 0.02f;
        *(float *)(p + 68) = *(float *)(p + 68) + 0.02f;
        *(float *)(p + 72) = *(float *)(p + 72) - 0.02f;
        n = *(short *)(p + 28) - 1;
        *(short *)(p + 28) = n;
        if (n == 0)
            p[20] = p[20] + 1;
        break;
    default:
        { FUN_0c03f346(a4, a5, a6); return; }
    }
}

/* Where the segment A (a5) -> B (a6) crosses the plane a7 (normal q[0..2], offset q[3], word 4 is returned). */
int FUN_0c145dd2(float *a4, float *a5, float *a6, float *a7)
{
    float A[3];
    float B[3];
    float q0 = a7[0], q1 = a7[1], q2 = a7[2], q3 = a7[3];
    float d1, d2, w1, w2, inv;
    *(S12 *)A = *(S12 *)a5;
    *(S12 *)B = *(S12 *)a6;
    d1 = q1 * A[1] + q0 * A[0] + q2 * A[2] + q3;
    d2 = q1 * B[1] + q0 * B[0] + q2 * B[2] + q3;
    if (d1 > 0)
        return 0;
    w2 = -d1;
    w1 = d2;
    if (w2 + w1 == 0) {
        w1 = 1.0f;
        w2 = 1.0f;
    }
    inv = 1.0f / (w2 + w1);
    a4[0] = (w1 * A[0] + w2 * B[0]) * inv;
    a4[1] = (w1 * A[1] + w2 * B[1]) * inv;
    a4[2] = (w1 * A[2] + w2 * B[2]) * inv;
    return *(int *)(a7 + 4);
}

float math_sin_angle16(int);
float math_cos_angle16(int);

void FUN_0c123f20(int a4)
{
    char *o = (char *)a4;
    char *e = (char *)*(int *)(o + 196);
    int ang;
    float s;
    *(short *)(e + 6) = 543;
    *(int *)(e + 104) = a4 + 100;
    *(float *)(o + 76) = 20.0f + 10.0f * (float)(nlRand() % 10);
    *(float *)(o + 84) = *(float *)(o + 76) + 10.0f * (float)(nlRand() % 10) + 1.0f;
    *(float *)(o + 80) = (float)(nlRand() % 8) + 3.5f;
    ang = (int)((float)(nlRand() % 20 + 15) * 65536.0f / 360.0f);
    *(int *)(o + 56) = ang;
    *(float *)(e + 108) = math_sin_angle16(ang) * *(float *)(o + 76);
    *(float *)(e + 116) = math_cos_angle16(*(int *)(o + 56)) * *(float *)(o + 76);
    *(float *)(e + 112) = 10.0f + 10.0f * (float)(nlRand() % 10);
    s = *(float *)(o + 76) / 100.0f + 1.0f;
    *(float *)(e + 140) = s;
    *(float *)(e + 136) = s;
    *(float *)(e + 132) = s;
    *(int *)(e + 124) = (int)((float)(360 / (nlRand() % 36 + 1)) * 65536.0f / 360.0f);
    *(float *)(e + 24) = 0.01f;
    *(float *)(e + 32) = 0.01f;
    *(float *)(e + 28) = 0.01f;
}

typedef struct { int w[4]; } S16;
int FUN_0c1171f0(int a4);
int FUN_0c03744a(int, int, int, int);

#define G110 (*(int **)0xC4739A4)
#define T8 ((int *)0xC473C74)
#define T10 ((int *)0xC473D04)
#define TA ((int *)0xC474410)

/* a5 and a6 are never read as arguments: the original leaves them (or what step 3 left in r5/r6) in the registers of its tail call */
void FUN_0c110844(int a4, int a5, int a6)
{
    char *p = (char *)a4;
    char *e;
    int r4, r11, fl, k;
    signed char st;

    if (G110[14] >= 0 && p[20] != 0)
        p[20] = *(char *)(*(int *)(p + 16) + 20);

    r4 = T8[G110[13]];
    r11 = 0;
    if (r4 >= 0) {
        fl = T10[TA[T8[G110[13]]]];
        if (fl & 32) { r11 = 1; *(short *)(p + 30) = 0; }
        if (fl & 64) { r11 = 1; *(short *)(p + 30) = 1; }
        if (fl & 128) { r11 = 1; *(short *)(p + 30) = 2; }
        if (fl & 256) { r11 = 1; *(short *)(p + 30) = 3; }
        if (fl & 512) { *(short *)(p + 30) = 4; r11 = 1; }
    } else {
        r11 = 1;
    }

    r4 = T8[G110[12]];
    if (r4 < 0) {
        r4 = 0;
    } else {
        a6 = TA[T8[G110[12]]];
        a5 = (int)&T10[a6];
        fl = T10[a6];
        r4 = (fl & (32 | 64 | 128 | 256 | 512)) != 0;
    }

    st = p[20];
    if (st == 0) {
        *(short *)(p + 34) = *(short *)(p + 30);
        p[168] = 1;
        *(short *)(p + 172) = 1055;
        p[169] = 33;
        FUN_0c1171f0(a4);
        FUN_0c03744a(*(int *)(p + 196), 15, 4, *(int *)0xC4B410C);
        e = (char *)*(int *)(p + 196);
        *(short *)(e + 6) = *(short *)(e + 6) | 1536;
        *(S16 *)(*(int *)(p + 196) + 20) = *(S16 *)(0xC29114C + *(short *)(p + 30) * 16);
        p[20] = *(char *)(*(int *)(p + 16) + 20);
        goto case1;
    } else if (st == 1) {
case1:
        if (r11 == 1) {
            if (*(short *)(p + 28) > G110[14])
                goto down;
            *(float *)(*(int *)(p + 196) + 20) = (float)*(short *)(p + 28) / (float)G110[15];
            *(short *)(p + 28) = *(short *)(p + 28) + 1;
            if (*(short *)(p + 28) > G110[14]) {
                *(short *)(p + 28) = G110[14];
                if (*(short *)(p + 28) >= 0)
                    return;
                goto zero;
            }
            return;
        } else {
            if (*(short *)(p + 28) < 0)
                return;
down:
            *(float *)(*(int *)(p + 196) + 20) = (float)*(short *)(p + 28) / (float)G110[15];
            *(short *)(p + 28) = *(short *)(p + 28) - 1;
            if (*(short *)(p + 28) >= 0)
                return;
            goto zero;
        }
    } else if (st == 2) {
        if (r11 == 1 && r4 == 0) {
            *(float *)(*(int *)(p + 196) + 20) = (float)G110[14] / (float)G110[15];
            *(short *)(p + 28) = G110[14];
            return;
        }
        goto zero;
    } else if (st == 4) {
        st = p[21];
        if (st == 0) {
            p[21] = p[21] + 1;
        } else if (st != 1) {
            return;
        }
        e = (char *)*(int *)(p + 196);
        if (*(float *)(e + 20) > 0.01f) {
            char *t = (char *)(0xC29114C + *(short *)(p + 34) * 16);
            *(float *)(e + 20) = *(float *)(e + 20) - (*(float *)t - *(float *)(t + 80)) / (float)G110[15];
        }
        if (G110[14] >= 0)
            return;
        FUN_0c03f346(a4, a5, a6);
        return;
    }
    return;
zero:
    *(short *)(p + 28) = 0;
}

int FUN_0c2b33a8(int a4);
int FUN_0c176b90(int a4);
int FUN_0c17f060(int a4, int a5);

void FUN_0c02ec70(void)
{
    char *e;
    char *end = (char *)(0xC4B10CC + 7928);
    int r10 = 1000;
    int i;

    if (*(int *)0xC4B41D8 == 0) {
        *(int *)0xC4B41D8 = 1;
        *(int *)0xC3BB3D8 = (0xC3BABB8 & -32) + 32;
        *(char *)0xC3BB3DC = 0;
    }
    e = (char *)0xC4B10CC;
    do {
        *(int *)(e + 232) = FUN_0c2b33a8(0);
        for (i = 0; i < 2048; i++)
            ((char *)*(int *)0xC3BB3D8)[i] = 0;
        for (i = 0; i < 1008; i += 16) {
            *(short *)(e + 828 + i) = 32;
            *(short *)(e + 828 + i + 2) = 32;
            *(int *)(e + 828 + i + 4) = 2306;
            *(int *)(e + 828 + i + 8) = *(int *)0xC3BB3D8;
            *(int *)(e + 828 + i + 12) = 0;
        }
        *(short *)(e + 828 + 1008) = -1;
        *(short *)(e + 828 + 1008 + 2) = -1;
        *(int *)(e + 828 + 1008 + 4) = -1;
        *(int *)(e + 828 + 1008 + 8) = -1;
        *(int *)(e + 828 + 1008 + 12) = -1;
        FUN_0c176b90(r10);
        FUN_0c17f060((int)(e + 828), 0);
        *(int *)e = r10;
        *(int *)(e + 236) = r10;
        *(float *)(e + 240) = 0.0f;
        *(float *)(e + 244) = 0.0f;
        *(float *)(e + 248) = 1.0f;
        *(float *)(e + 252) = 1.0f;
        *(float *)(e + 256) = 1.0f;
        *(float *)(e + 260) = 0.0f;
        *(float *)(e + 268) = 1.0f;
        *(float *)(e + 264) = 1.0f;
        *(float *)(e + 272) = 0.0f;
        *(int *)(e + 276) = 0;
        *(float *)(e + 280) = 1.0f;
        *(int *)(e + 284) = -1;
        *(int *)(e + 288) = 5;
        for (i = 0; i < 128; i += 2)
            *(short *)(e + 90 + i) = 0;
        e[11] = -1;
        e[12] = -1;
        for (i = 0; i < 64; i += 2)
            *(short *)(e + 24 + i) = 0;
        e[4] = 1;
        e[5] = 0;
        e[6] = 0;
        e[7] = 0;
        e[8] = 0;
        e[9] = 0;
        e[10] = 0;
        *(short *)(e + 14) = 0;
        *(short *)(e + 16) = 0;
        *(short *)(e + 18) = 0;
        *(short *)(e + 20) = 0;
        *(short *)(e + 218) = 0;
        e[22] = 0;
        e += 3964;
        r10 += 64;
    } while (e < end);
}

int FUN_0c0533a4(int a4);
int FUN_0c0532be(int a4);
int FUN_0c052cf8(int a4, int a5, int a6);

void FUN_0c053a94(int a4)
{
    float arr[30];
    char *o = (char *)a4;
    int n = 0;
    int i;
    float f14 = 200.0f;
    float f15 = -50.0f;

    FUN_0c0533a4(a4);
    for (i = 0; i < 4; i++) {
        char *pl;
        if (FUN_0c0532be(i) == 0)
            continue;
        if (*(signed char *)(0xC53249A + i * 14648) == 12)
            continue;
        if (*(signed char *)(0xC53249A + i * 14648) == 13)
            continue;
        pl = (char *)(0xC532498 + i * 14648);
        arr[n * 3 + 0] = *(float *)(pl + 40);
        arr[n * 3 + 1] = *(float *)(pl + 44) + f15;
        arr[n * 3 + 2] = *(float *)(pl + 48);
        n++;
        arr[n * 3 + 0] = *(float *)(pl + 40);
        arr[n * 3 + 1] = *(float *)(pl + 44) + f14;
        arr[n * 3 + 2] = *(float *)(pl + 48);
        n++;
    }
    for (i = 0; i < *(int *)0xC40F834; i++) {
        *(S12 *)&arr[n * 3] = *(S12 *)(0xC40F838 + 12 * i);
        n++;
    }
    if (n == 0) {
        arr[0] = 0.0f;
        arr[2] = 0.0f;
        arr[1] = *(float *)0xC54109C;
        n = 1;
    }
    *(int *)(o + 24) = 1000;
    FUN_0c052cf8(a4, n, (int)arr);
    *(float *)(o + 200) = *(float *)(o + 200) + (*(float *)(o + 188) - *(float *)(o + 200)) / (float)(*(int *)(o + 508) + 1);
    *(float *)(o + 204) = *(float *)(o + 204) + (*(float *)(o + 192) - *(float *)(o + 204)) / (float)(*(int *)(o + 508) + 1);
    *(float *)(o + 208) = *(float *)(o + 208) + (*(float *)(o + 196) - *(float *)(o + 208)) / (float)(*(int *)(o + 508) + 1);
    *(float *)(o + 248) = *(float *)(o + 248) + (*(float *)(o + 236) - *(float *)(o + 248)) / (float)(*(int *)(o + 512) + 1);
    *(float *)(o + 252) = *(float *)(o + 252) + (*(float *)(o + 240) - *(float *)(o + 252)) / (float)(*(int *)(o + 512) + 1);
    *(float *)(o + 256) = *(float *)(o + 256) + (*(float *)(o + 244) - *(float *)(o + 256)) / (float)(*(int *)(o + 512) + 1);
}

int math_atan2_angle16(float, float);
float math_signed_sqrt(float);

void FUN_0c1377fe(int a4, int a5, int a6)
{
    char *p = (char *)a4;
    float A[3];
    int r13, r4, d, i;
    float s, dist;

    *(S12 *)(p + 40) = *(S12 *)(0xC532498 + (short)p[1] * 14648 + 40);
    if (p[20] == 0) {
        p[20] = p[20] + 1;
        p[168] = 1;
        *(short *)(p + 172) = 15;
        p[169] = 33;
        for (r13 = 0; r13 < 12; r13 += 4) {
            FUN_0c03744a(*(int *)(p + 196 + r13), 0, 8, *(int *)(0xC4B40FC + p[1] * 4));
            *(short *)(*(int *)(p + 196 + r13) + 6) = 543;
            *(S16 *)(*(int *)(p + 196 + r13) + 20) = *(S16 *)0xC2A1900;
        }
    } else if (p[20] != 1) {
        FUN_0c03f346(a4, a5, a6);
        return;
    }
    *(S12 *)A = *(S12 *)(0xC5411C4 + (short)p[1] * 760);
    A[0] = A[0] - *(float *)(p + 40);
    A[1] = A[1] - *(float *)(p + 44);
    A[2] = A[2] - *(float *)(p + 48);
    if (A[2] == 0.0f)
        A[2] = 1e-6f;
    r4 = math_atan2_angle16(A[0], A[2]) & 0xFFFF;
    if (r4 - *(int *)(p + 56) > 0x8000)
        r4 -= 0x10000;
    if (!(r4 - *(int *)(p + 56) >= -32768))
        r4 += 0x10000;
    d = r4 - *(int *)(p + 56);
    *(int *)(p + 56) = (*(int *)(p + 56) + d) & 0xFFFF;
    s = A[2] * A[2] + A[0] * A[0];
    dist = math_signed_sqrt(s);
    if (dist == 0.0f)
        dist = 1e-6f;
    r4 = math_atan2_angle16(-A[1], dist) & 0xFFFF;
    if (r4 - *(int *)(p + 52) > 0x8000)
        r4 -= 0x10000;
    if (!(r4 - *(int *)(p + 52) >= -32768))
        r4 += 0x10000;
    d = r4 - *(int *)(p + 52);
    *(int *)(p + 52) = (*(int *)(p + 52) + d) & 0xFFFF;
    for (i = 0; i < 12; i += 4)
        *(S12 *)(*(int *)(p + 196 + i) + 132) = *(S12 *)(0xC2A18E8 + (*(short *)(p + 28) & 1) * 12);
    for (i = 0; i < 3; i++) {
        char *en = (char *)*(int *)(p + 196 + i * 4);
        int *src = (int *)(0xC2A18C4 + i * 12);
        *(int *)(en + 120) = *(int *)(en + 120) + src[0];
        *(int *)(en + 124) = *(int *)(en + 124) + src[1];
        *(int *)(en + 128) = *(int *)(en + 128) + src[2];
    }
    *(short *)(p + 28) = *(short *)(p + 28) + 1;
    if (*(signed char *)(0xC532498 + (short)p[1] * 14648 + 14101) != 26
        || *(signed char *)(0xC532498 + (short)p[1] * 14648 + 21) > 2)
        p[20] = p[20] + 1;
}

int FUN_0c0588bc(int a4, int a5, int a6, int a7, int a8, int a9);
int nlAddVector3op(int, int, int);

/* the sine-wave wobble of one effect's two particles; a5/a6 are only carried into the call of FUN_0c150010 */
void FUN_0c168c20(int a4, int a5, int a6)
{
    char *p = (char *)a4;
    char *e;
    int k;
    signed char st = p[20];

    if (st == 0) {
        p[20] = p[20] + 1;
        p[168] = 1;
        *(short *)(p + 172) = 31;
        p[169] = 33;
        *(S12 *)(p + 64) = *(S12 *)0xC2A37DC;
        *(float *)(p + 76) = math_sin_angle16(*(int *)(p + 56)) * 10.0f;
        *(float *)(p + 80) = 0.0f;
        *(float *)(p + 84) = math_cos_angle16(*(int *)(p + 56)) * 10.0f;
        FUN_0c03744a(*(int *)(p + 196), nlRand() % 3 + 1, 65, *(int *)0xC4B40D8);
        FUN_0c03744a(*(int *)(p + 200), 0, 43, *(int *)0xC4B40CC);
        a5 = 63;
        a6 = 43;
        *(short *)(*(int *)(p + 196) + 6) = 63;
        *(S12 *)(*(int *)(p + 196) + 132) = *(S12 *)0xC2A37E8;
        *(short *)(*(int *)(p + 200) + 6) = 63;
        *(S12 *)(*(int *)(p + 200) + 132) = *(S12 *)0xC2A37E8;
    } else if (st != 1) {
        FUN_0c03f346(a4, a5, a6);
        return;
    }
    if (p[305] != 0) {
        FUN_0c150010(a4 + 40, a5, a6, 1.0f, 1.0f, 1.0f, 1.0f);
        p[20] = 2;
        return;
    }
    if ((*(int *)0xC542260 & 15) == nlRand() % 16) {
        p[21] = 1 - p[21];
        *(short *)(p + 32) = 0;
    }
    if ((*(int *)0xC542260 & 15) == nlRand() % 16) {
        p[22] = 1 - p[22];
        *(short *)(p + 34) = 0;
    }
    st = p[21];
    if (st == 0) {
        e = (char *)*(int *)(p + 196);
        *(float *)(e + 108) = *(float *)(e + 108) - math_sin_angle16(*(short *)(p + 32) << 9) * 5.0f;
        e = (char *)*(int *)(p + 196);
        if (-(*(float *)(e + 132) * 100.0f) > *(float *)(e + 108)) {
            e = (char *)*(int *)(p + 196);
            *(float *)(e + 108) = -(*(float *)(e + 132) * 100.0f);
        }
    } else if (st == 1) {
        e = (char *)*(int *)(p + 196);
        *(float *)(e + 108) = *(float *)(e + 108) + 5.0f * math_sin_angle16(*(short *)(p + 32) << 9);
        e = (char *)*(int *)(p + 196);
        if (*(float *)(e + 108) > *(float *)(e + 132) * 100.0f) {
            e = (char *)*(int *)(p + 196);
            *(float *)(e + 108) = *(float *)(e + 132) * 100.0f;
        }
    }
    *(short *)(p + 32) = *(short *)(p + 32) + 1;
    st = p[22];
    if (st == 0) {
        e = (char *)*(int *)(p + 196);
        *(float *)(e + 112) = *(float *)(e + 112) - math_sin_angle16(*(short *)(p + 34) << 9) * 5.0f;
        e = (char *)*(int *)(p + 196);
        if (-(*(float *)(e + 136) * 100.0f) > *(float *)(e + 112)) {
            e = (char *)*(int *)(p + 196);
            *(float *)(e + 112) = -(*(float *)(e + 136) * 100.0f);
        }
    } else if (st == 1) {
        e = (char *)*(int *)(p + 196);
        *(float *)(e + 112) = *(float *)(e + 112) + 5.0f * math_sin_angle16(*(short *)(p + 34) << 9);
        e = (char *)*(int *)(p + 196);
        if (*(float *)(e + 112) > *(float *)(e + 136) * 100.0f) {
            e = (char *)*(int *)(p + 196);
            *(float *)(e + 112) = *(float *)(e + 136) * 100.0f;
        }
    }
    *(short *)(p + 34) = *(short *)(p + 34) + 1;
    *(S12 *)(*(int *)(p + 200) + 108) = *(S12 *)(*(int *)(p + 196) + 108);
    if (!(*(short *)(p + 28) > *(int *)0xC2A3804)) {
        FUN_0c0588bc(*(int *)(p + 196) + 132, 0xC2A37E8 + 12, 0xC2A37E8, *(short *)(p + 28), *(int *)0xC2A3804, 0);
        FUN_0c0588bc(*(int *)(p + 200) + 132, 0xC2A37E8 + 12, 0xC2A37E8, *(short *)(p + 28), *(int *)0xC2A3804, 0);
    }
    nlAddVector3op(a4 + 40, a4 + 40, a4 + 76);
    *(short *)(p + 28) = *(short *)(p + 28) + 1;
    if (*(short *)(p + 28) > *(int *)0xC2A3800)
        p[20] = 2;
}

int FUN_0c11e9c8(int a4, int a5);

void FUN_0c1008c4(void)
{
    char *G = (char *)0xC5429C8;
    int *F = (int *)0xC473D04;       /* pad flag word per button slot */
    int *T104 = (int *)0xC474104;
    int *A = (int *)0xC29E4F0;
    int L[192];
    int c = 0;
    int i, j, k, m;

    *(int *)0xC47471C = *(int *)(G + 440);
    *(short *)(G + 448) = *(short *)(G + 448) + 1;
    if (*(unsigned short *)(G + 448) > 99)
        *(short *)(G + 448) = 99;
    if (*(unsigned short *)(G + 448) == 1) {
        *(char *)(G + 1501) = 0;
        *(short *)(G + 1502) = 0;
        for (i = 0; i < 256; i++)
            F[i] = 0;
    }
    *(int *)0xC473CA4 = *(unsigned char *)(G + 1501);
    for (i = 0; i < 192; i++) {
        if (i < 191)
            T104[i] = *(unsigned char *)(G + 77 + i);
    }
    for (i = 191; i < 256; i++)
        F[i] = 0;
    c = 0;
    for (i = 0; i < 192; i++) {
        if (i < 191)
            F[i] = *(int *)(G + 460 + i * 4);
        if (T104[i] > 0)
            F[i] |= 16;
        F[i] &= ~64;
        F[i] &= ~128;
        F[i] &= ~256;
        F[i] &= ~512;
        if (*(unsigned char *)(G + 1492) - 1 == i)
            F[i] |= 64;
        if (*(unsigned char *)(G + 1493) - 1 == i)
            F[i] |= 128;
        if (*(unsigned char *)(G + 1494) - 1 == i)
            F[i] |= 256;
        if (*(unsigned char *)(G + 1495) - 1 == i)
            F[i] |= 512;
        F[i] &= ~32;
        if (c < 5) {
            for (k = 0; k < 5; k++) {
                if (*(unsigned char *)(G + 1496 + k) == i + 1 && T104[i] > 0) {
                    F[i] |= 32;
                    c++;
                }
            }
        }
        L[i] = F[i];
        if (F[i] & 1024)
            continue;
        if (L[i] & 2048)
            L[i] |= 1024;
        if (*(unsigned short *)(G + 448) >= A[i]) {
            if (A[i] != -1)
                L[i] |= 1024;
            if (A[i] == 0) {
                F[i] |= 1024;
                L[i] |= 1024;
            }
        }
        for (k = 0; k < 16; k++) {
            if (*(unsigned char *)(G + 1504) >= ((int *)0xC2A0668)[k]) {
                int *S = *(int **)(0xC2A081C + k * 4);
                for (m = 0; S[m] != -1; m++) {
                    if (S[m] == i)
                        L[i] |= 1024;
                }
            }
        }
        if (*(unsigned short *)(G + 1502) >= ((int *)0xC2A032C)[i] && ((int *)0xC2A032C)[i] != -1)
            L[i] |= 1024;
        for (j = 1; j <= 7; j++) {
            FUN_0c11e9c8(8192, *(int *)(0xC290670 + j * 4));
            if (*(int *)0xC474714 >= *(int *)(0xC2A085C + j * 4)) {
                int *S = *(int **)(0xC2A08BC + j * 4);
                for (m = 0; S[m] != -1; m++) {
                    if (S[m] == i)
                        L[i] |= 1024;
                }
            }
        }
    }
    for (i = 0; i < 192; i++) {
        L[i] &= ~4096;
        if (*(unsigned short *)(G + 448) > 1) {
            if (L[i] & 1024) {
                if (!(F[i] & 1024))
                    L[i] |= 4096;
            }
        }
        F[i] = L[i];
    }
}
