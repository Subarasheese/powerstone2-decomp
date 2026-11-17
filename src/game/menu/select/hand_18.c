/* @runtime _quick_evn_mvn=0C18778C */
/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c11bb5e, a model that drifts in and wobbles. Set-up gives it a random spin (one of 8 turns) and a
   random direction (one of 32) at radius 50; then each frame it rises (+0x2C, by 240 over the run), wobbles (the sine of a
   wandering angle, +0x1E, that turns back now and then) and runs four timed segments of the timeline at 0C2921C8 (frame
   counts scaled by the speed byte +2 / 60): two moves along the curves at 0C292190 and two colour fades. */

typedef struct { int w[4]; } C16;
typedef struct { int w[3]; } V12;

int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c037498(int, int, int, int);
float math_sin_angle16(int);
float math_cos_angle16(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define F32(o)  (*(float *)(e + (o)))
#define M       (*(char **)(e + 0xC4))
#define TL      ((int *)0x0C2921C8)
#define CURVE   0x0C292190
#define AT(k)   (TL[k] * C8(2) / 60)

void FUN_0c11bb5e(int a4, int a5, int a6, int a7)
{
    char *e = (char *)a4;
    int r, ang;

    switch (C8(0x14)) {
    case 0:
        C8(0x14)++;
        *(unsigned char *)(e + 0xA8) = 1;
        *(short *)(e + 0xAC) = 31;
        *(unsigned char *)(e + 0xA9) = 33;
        *(V12 *)(e + 64) = *(V12 *)0x0C2A0C84;
        FUN_0c037498((int)M, 3, 22, *(int *)0x0C4B410C);
        *(short *)(M + 6) = 575;
        *(V12 *)(M + 132) = *(V12 *)CURVE;
        *(C16 *)(M + 20) = *(C16 *)0x0C2A0CA0;
        *(int *)(M + 124) = (int)((float)(FUN_0c179ac0() % 8) * 360.0f / 8.0f * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
        r = FUN_0c179ac0() % 32;
        ang = (int)((float)(r * 360 / 32) * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
        *(float *)(M + 108) = math_sin_angle16(ang) * 50.0f;
        *(float *)(M + 116) = math_cos_angle16(ang) * 50.0f;
        S16(0x1E) = (FUN_0c179ac0() % 32 << 11) + *(int *)0x0C2921EC;
    case 1:
        break;
    default:
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    F32(76) = (((float *)0x0C2921C0)[1] - ((float *)0x0C2921C0)[0]) / 360.0f * (float)S16(0x1C) / (float)AT(0);
    *(int *)(e + 56) = (int)((1.0f - math_sin_angle16(S16(0x1E)) * 32768.0f) * F32(76));
    if (FUN_0c179ac0() % 20 == 0)
        S16(0x20) = 1 - S16(0x20);
    if (S16(0x20))
        S16(0x1E) += *(int *)0x0C2921F0;
    else
        S16(0x1E) -= *(int *)0x0C2921F0;
    if (!(S16(0x1C) > AT(0)))
        F32(44) = (float)S16(0x1C) * 240.0f / (float)AT(0) + 50.0f;
    if (S16(0x1C) >= AT(1) && !(S16(0x1C) > AT(2)))
        FUN_0c0588bc((int)(M + 132), CURVE + 12, CURVE, S16(0x1C), AT(2), AT(1));
    if (S16(0x1C) >= AT(7) && !(S16(0x1C) > AT(8)))
        FUN_0c0588bc((int)(e + 64), CURVE + 36, CURVE + 24, S16(0x1C), AT(8), AT(7));
    if (S16(0x1C) >= AT(3) && !(S16(0x1C) > AT(4)))
        FUN_0c058a6e((int)(M + 20), 0x0C2A0CA0, 0x0C2A0C90, S16(0x1C), AT(4), AT(3));
    if (S16(0x1C) >= AT(5) && !(S16(0x1C) > AT(6)))
        FUN_0c058a6e((int)(M + 20), 0x0C2A0C90, 0x0C2A0CA0, S16(0x1C), AT(6), AT(5));
    if (++S16(0x1C) > AT(0))
        C8(0x14)++;
}
