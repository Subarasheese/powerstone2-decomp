/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c16e17c, a chain (whip) attached to a fighter (the parent, +0x10; its hand at 0C203DA0 through its
   matrix +100). Each link (+0xC4, +0xC0 of them) is placed between the hand and the last link and turned to face the
   one before it (atan2 into its +124 / +120). Mode 1 (+0x15): the chain swings out in a circle (radius +0x1E grows by +0x22
   to 250, or shrinks to 100 and ends), its tip pulled halfway to the target each frame. Otherwise it hangs: it falls by
   gravity (+0x5C, -2), is kept within 100 of the hand and above the floor (+0x168), or follows the fighter it holds
   (parent +0x41D 4 / 5). It runs only while the parent's move (+0x24) is the one it was made for (+0x41C). */

typedef struct { float x, y, z; } V3;

int FUN_0c03f346(int, int, int, int);
void FUN_0c16e178(void);
int FUN_0c0582de(int, int);
int FUN_0c064f80(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
float FUN_0c0e2390(int, int, int);
float FUN_0c0e2340(int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlSelectMatrixStack(int);
void nlUnitMatrix(void);
void nlSetTranslate(int);
float nlInvertMatrix(int);
int math_mat_get_translate(int, int);
void nlCalcPoint(int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define F32(o)  (*(float *)(e + (o)))
#define LINK(i) (((char **)(e + 0xC4))[i])
#define HAND()  (tmp = *(V3 *)0x0C203DA0, FUN_0c0582de((int)&tmp, (int)(par + 100)))
#define PLB(par, o) ((char *)0x0C532498 + *(signed char *)((par) + 1) * 14648 + (o))
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };


/* manual: chain (whip) update, swinging or hanging; one link loop for both; 243 cases, 840 of 840 instructions */
void FUN_0c16e17c(int a4, int a5, int a6, int a7)
{
    char *e = (char *)a4;
    char *par = *(char **)(e + 0x10);
    V3 tmp, d, cur, prev;
    float r, f, len, h;
    int n, i, mode, swing;

    if (*(short *)(e + 1052) != *(short *)(par + 36)) {
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    switch (C8(0x14)) {
    case 0:
        C8(0x14)++;
        (((struct oA8_uchar *)(e))->v) = 1;
        F32(80) = 0.0f;
        F32(92) = 0.0f;
        *(unsigned char *)(e + 170) = 1;
        *(unsigned char *)(e + 171) = 1;
    case 1:
        break;
    default:
        return;
    }
    *(signed char *)(e + 0xA8) = *(signed char *)(par + 0xA8);
    (((struct oAA_uchar *)(e))->v) = *(signed char *)(e + 0xA8) != 0;

    swing = C8(0x15) == 1;
    if (swing) {
        if (*(signed char *)(par + 1053) != 7) {
            S16(0x22) = -50;
            goto start;
        }
        if (C8(0x16) == 0 && *(signed char *)PLB(par, 23) >= 2) {
            S16(0x22) = -15;
start:
            FUN_0c16e178();
            C8(0x16) = 1;
        }
        if (C8(0x16) == 0) {
            if (250.0f > (float)S16(0x1E))
                S16(0x1E) += S16(0x22);
            if ((float)S16(0x1E) > 250.0f)
                S16(0x1E) = 250;
        } else {
            if ((float)S16(0x1E) > 100.0f)
                S16(0x1E) += S16(0x22);
            if (!((float)S16(0x1E) > 100.0f)) {
                S16(0x1E) = 100;
                C8(0x15) = 0;
            }
        }
        r = (float)S16(0x1E);
        S16(0x1C) += 2730;
        HAND();
        tmp.z += (float)S16(0x1E) * math_cos_angle16(S16(0x1C));
        tmp.x += (float)S16(0x1E) * math_sin_angle16(S16(0x1C));
        tmp.y -= (float)S16(0x1E) / 3.0f;
        FUN_0c0e2390((int)&d, (int)&tmp, (int)(e + 40));
        math_vec3_mul_xyz((int)&d, 0.5f, 0.5f, 0.5f);
        nlAddVector3op((int)(e + 40), (int)&d, (int)(e + 40));
        FUN_0c0e2390((int)&d, (int)&tmp, (int)(e + 40));
        FUN_0c0e2340((int)&d);
        if (++S16(0x20) > 5 && C8(0x16) == 0 && (S16(0x20) & 15) == 0)
            FUN_0c16e178();
    } else {
        mode = *(signed char *)(par + 1053);
        if (FUN_0c064f80(a4)) {
            F32(80) = 0.0f;
            F32(92) = 0.0f;
        } else if ((mode == 4 || mode == 5) && *(signed char *)(par + 1) >= 0
                   && *(float *)PLB(par, 360) + 10.0f > F32(44)) {
            F32(80) = 0.0f;
            F32(92) = 0.0f;
            F32(44) = *(float *)PLB(par, 360) + 10.0f;
            F32(72) = F32(68) = F32(64) = *(float *)PLB(par, 14220);
        } else {
            F32(92) = -2.0f;
            F32(72) = F32(68) = F32(64) = 1.0f;
        }
        F32(80) += F32(92);
        F32(44) += F32(80);
        HAND();
        FUN_0c0e2390((int)&d, (int)(e + 40), (int)&tmp);
        len = FUN_0c0e2340((int)&d);
        if (len > 100.0f) {
            f = 100.0f / len;
            math_vec3_mul_xyz((int)&d, f, f, f);
            nlAddVector3op((int)(e + 40), (int)&tmp, (int)&d);
        }
        if (*(signed char *)(par + 1053) == 7 && *(signed char *)PLB(par, 23) < 2) {
            C8(0x15) = 1;
            C8(0x16) = 0;
            C8(1) = *(signed char *)(par + 1);
            F32(80) = 0.0f;
            F32(92) = 0.0f;
            S16(0x1C) = 0;
            S16(0x1E) = 50;
            S16(0x20) = 0;
            S16(0x22) = 15;
        }
    }
    nlSelectMatrixStack(1);
    nlUnitMatrix();
    nlSetTranslate((int)(e + 40));
    nlInvertMatrix(0);
    n = (((struct oC0_int *)(e))->v);
    HAND();
    prev = *(V3 *)(e + 40);
    for (i = 1; i < n; i++) {
        math_mat_get_translate((int)(LINK(swing ? 0 : i) + 40), (int)&cur);
        if (swing) {
            f = (float)(n - i) / (float)n * r;
        } else {
            f = ((float)(n - i) + -0.899999976f) / (float)n * 100.0f;
            cur.y += F32(80);
            if (F32(360) > cur.y)
                cur.y = F32(360);
        }
        FUN_0c0e2390((int)&d, (int)&cur, (int)&tmp);
        len = FUN_0c0e2340((int)&d);
        if (swing || len > f) {
            f = f / len;
            math_vec3_mul_xyz((int)&d, f, f, f);
            nlAddVector3op((int)&cur, (int)&tmp, (int)&d);
        }
        nlCalcPoint((int)&cur, (int)(LINK(i) + 108));
        FUN_0c0e2390((int)&d, (int)&prev, (int)&cur);
        prev = cur;
        h = math_signed_sqrt(d.z * d.z + d.x * d.x);
        if (h == 0.0f)
            h = 9.99999997e-07f;
        *(int *)(LINK(i) + 124) = math_atan2_angle16(d.x, d.z);
        *(int *)(LINK(i) + 120) = math_atan2_angle16(-d.y, h) + -16384;
    }
}
