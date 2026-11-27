/* manual: the two-point trail (6 history entries at object+0x748, 24 spline entries, bounding box, fade); 31 hand cases, 2122 of 2123 instructions */

int FUN_0c03f346(int, int, int, int);
int FUN_0c17b1a0(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlSubVector3op(int, int, int);
void FUN_0c158f5a(int a4, int a5, int a6, int a7);

typedef struct { int w[3]; } V3_158f5a;
#define CP(d, s) (*(V3_158f5a *)(d) = *(V3_158f5a *)(s))
#define MUL(p, f) math_vec3_mul_xyz(p, f, f, f)

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c158f5a.txt) */
void FUN_0c158f5a(int a4, int a5, int a6, int a7)
{
    float v[12];
    float mx[3], mn[3];
    int V = (int)v;
    int m = *(int *)(a4 + 196);
    int P = m + 0x748;
    int ph = *(signed char *)(a4 + 20);
    int c, i, j, k, n, q, d, T, mode, skip, lo;
    float fa, fb, f;

    if (ph != 0 && ph != 1) {
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    if (ph == 0 && *(signed char *)(a4 + 21) == 0)
        *(char *)(a4 + 168) = 0;
    nlSelectMatrixStack(1);
    FUN_0c17b1a0(*(int *)(m + 104));
    nlCalcPoint(a4 + 40, V);
    nlCalcPoint(m + 108, V + 12);

    if (ph == 0) {
        if (*(signed char *)(a4 + 21) == 0) {
            CP(P, V);
            CP(P + 12, V + 12);
            *(int *)V |= 1;
            *(int *)(V + 12) |= 1;
            (*(char *)(a4 + 21))++;
            return;
        }
        CP(V + 24, P);
        CP(V + 36, P + 12);
        CP(P, V);
        CP(P + 12, V + 12);
        nlSubVector3op(V + 24, V + 24, V);
        nlSubVector3op(V + 36, V + 36, V + 12);
        MUL(V + 24, 0.2f);
        MUL(V + 36, 0.2f);
        for (c = 1; c < 6; c++) {
            q = P + c * 24;
            CP(q, q - 24);
            CP(q + 12, q - 12);
            nlAddVector3op(q, q, V + 24);
            nlAddVector3op(q + 12, q + 12, V + 36);
        }
        nlCalcPoint(a4 + 40, V);
        nlCalcPoint(m + 108, V + 12);
        CP(V + 24, P);
        CP(V + 36, P + 12);
        nlSubVector3op(V + 24, V + 24, V);
        nlSubVector3op(V + 36, V + 36, V + 12);
        MUL(V + 24, 0.0434782617f);
        MUL(V + 36, 0.0434782617f);
        *(int *)V |= 1;
        *(int *)(V + 12) |= 1;
        CP(*(int *)(m + 8) + 112, V);
        CP(*(int *)(m + 8) + 144, V + 12);
        for (c = 1; c < 24; c++) {
            q = *(int *)(m + 8) + 112 + c * 64;
            CP(q, q - 64);
            CP(q + 32, q - 32);
            nlAddVector3op(q, q, V + 24);
            nlAddVector3op(q + 32, q + 32, V + 36);
            *(int *)q |= 1;
            *(int *)(q + 32) |= 1;
        }
        *(char *)(a4 + 168) = 1;
        *(char *)(a4 + 21) = 0;
        (*(char *)(a4 + 20))++;
        return;
    }

    /* phase 1: nothing to do when both points are where they were */
    if (*(float *)V == *(float *)P && *(float *)(V + 4) == *(float *)(P + 4) && *(float *)(V + 8) == *(float *)(P + 8)
        && *(float *)(V + 12) == *(float *)(P + 12) && *(float *)(V + 16) == *(float *)(P + 16)
        && *(float *)(V + 20) == *(float *)(P + 20))
        return;
    mode = *(signed char *)(a4 + 22) & 0x70;
    skip = mode >= 0x60 && *(short *)(a4 + 30) % (*(signed char *)(a4 + 22) & 15) != 0;
    if (!skip)
        for (c = 5; c > 0; c--) {
            q = P + c * 24;
            CP(q, q - 24);
            CP(q + 12, q - 12);
        }
    CP(P, V);
    CP(P + 12, V + 12);
    k = (*(signed char *)(a4 + 22) & 15) * 4;
    lo = 1;
    switch (mode) {
    case 0x10:
        fa = fb = *(float *)(0xC203608 + k);
        goto smooth;
    case 0x20:
        fa = fb = *(float *)(0xC20361C + k);
        goto smooth;
    case 0x70:
        if (skip)
            break;
        fa = fb = *(float *)0xC20361C;
        goto smooth;
    case 0x30:
        fa = *(float *)(0xC203634 + k);
        fb = *(float *)(0xC203640 + k);
        lo = 0;
    smooth:
        for (c = 5; c >= lo; c--) {
            q = P + c * 24;
            nlAddVector3op(V, q, q + 12);
            MUL(V, 0.5f);
            nlSubVector3op(V + 12, q, V);
            f = c > 1 ? fb : fa;
            MUL(V + 12, f);
            nlAddVector3op(q, V, V + 12);
            MUL(V + 12, -1.0f);
            nlAddVector3op(q + 12, V, V + 12);
        }
        break;
    case 0x40:
    case 0x50:
        fa = *(float *)((mode == 0x40 ? 0xC20364C : 0xC203664) + k);
        if (mode == 0x50)
            fb = *(float *)(0xC20367C + k);
        for (c = 5; c > 0; c--) {
            q = P + c * 24;
            nlSubVector3op(V, q, q + 12);
            if (mode == 0x50)
                CP(V + 12, V);
            MUL(V, fa);
            if (mode == 0x50)
                MUL(V + 12, fb);
            nlAddVector3op(q, q + 12, V);
            if (mode == 0x50)
                nlAddVector3op(q + 12, q + 12, V + 12);
        }
        break;
    }

    /* the 6x8 points of the trail and their bounding box */
    mx[0] = mx[1] = mx[2] = -999999.0f;
    mn[0] = mn[1] = mn[2] = 999999.0f;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 2; j++) {
            q = P + i * 24 + j * 12;
            if (i) {
                nlAddVector3op(V, q, q + 24);
                MUL(V, 0.5f);
            } else
                CP(V, q);
            CP(V + 12, q + 24);
            nlAddVector3op(V + 24, q + 24, q + 48);
            MUL(V + 24, 0.5f);
            for (k = 0; k < 6; k++) {
                T = 0xC2035C0 + k * 12;
                d = *(int *)(m + 8) + 112 + (j - i * 12 - k * 2 + 46) * 32;
                for (n = 0; n < 3; n++) {
                    *(float *)(d + n * 4) = v[3 + n] * *(float *)(T + 4) + *(float *)T * v[n] + *(float *)(T + 8) * v[6 + n];
                    if (*(float *)(d + n * 4) > mx[n])
                        mx[n] = *(float *)(d + n * 4);
                    if (mn[n] > *(float *)(d + n * 4))
                        mn[n] = *(float *)(d + n * 4);
                    if (n == 0)
                        *(int *)d |= 1;
                }
            }
        }
    fa = nlScalor((int)mx);
    fb = nlScalor((int)mn);
    if (!(fa > fb))
        fa = fb;
    *(float *)(*(int *)(m + 8) + 20) = fa;
    *(float *)(*(int *)(m + 8) + 52) = fa;

    if (--*(short *)(a4 + 30) <= 0)
        (*(char *)(a4 + 20))++;
    if (*(short *)(a4 + 30) < 8) {
        f = (float)*(short *)(a4 + 30) * 16.0f / 255.0f;
        for (n = 180; n < 192; n += 4) {
            *(float *)(a4 + n) -= f;
            if (0.0f > *(float *)(a4 + n))
                *(float *)(a4 + n) = 0.0f;
        }
    }
}
#undef CP
#undef MUL
