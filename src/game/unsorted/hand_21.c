/* @runtime _quick_evn_mvn=0C18778C */
/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c13831c, a bird that flies in along a path (timeline 0C2A1A44, curve 0C2A19FC), then homes in on a
   target (FUN_0c137f74: the fighter +1's point, side +0x20 bit 0): it turns its heading (+0x38) and pitch (+0x34) towards
   it a step at a time (546, or 1.72 degrees and 1092 when +2 is set), banks with the turn (+0x22), flaps (the wing model
   +0xC8 swaps shape every other frame), and dives once within 1000 (+0x20 bit 1). It flies at 17 per frame and leaves
   after 300 frames or when the fighter is hit (+0x131, +0x404), with a sound at its place. */

typedef struct { int w[3]; } V12;
typedef struct { int w[4]; } C16;
typedef struct { float x, y, z; } V3;

int FUN_0c03f346(int, int, int, int);
void FUN_0c03744a(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c059e60(int, int);
int FUN_0c15aed8(int);
int FUN_0c05ab12(int, int);
int FUN_0c137f74(int, int, int);
float FUN_0c0e2390(int, int, int);
float FUN_0c0e2340(int);
int math_atan_angle16(float);
float math_signed_sqrt(float);
float math_sin_angle16(int);
float math_cos_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c150010(int, int, int, float, float, float, float);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define I32(o)  (*(int *)(e + (o)))
#define F32(o)  (*(float *)(e + (o)))
#define P(o)    (*(char **)(e + (o)))
#define TL      ((int *)0x0C2A1A44)
#define CURVE   0x0C2A19FC
#define BANKS   ((int *)0x0C4B40FC)

void FUN_0c13831c(int a4, int a5, int a6, int a7)
{
    char *e = (char *)a4;
    V3 t;
    int a, d, r;
    float h;

    switch (C8(0x14)) {
    case 0:
        C8(0x14)++;
        *(unsigned char *)(e + 0xA8) = 1;
        *(short *)(e + 0xAC) = 31;
        *(unsigned char *)(e + 0xA9) = 33;
        *(V12 *)(e + 64) = *(V12 *)0x0C2A199C;
        FUN_0c03744a((int)P(0xC4), 0, 13, BANKS[C8(1)]);
        FUN_0c03744a((int)P(0xC8), 2, 13, BANKS[C8(1)]);
        FUN_0c03744a((int)P(0xD0), 3, 13, BANKS[C8(1)]);
        *P(0xC4) = 1;
        *(short *)(P(0xC4) + 6) = 15;
        *(V12 *)(P(0xC4) + 132) = *(V12 *)0x0C2A19A8;
        *P(0xC8) = 0;
        *(short *)(P(0xC8) + 6) = 543;
        *(V12 *)(P(0xC8) + 132) = *(V12 *)(CURVE + 48);
        *(C16 *)(P(0xC8) + 20) = *(C16 *)0x0C2A1A60;
        *(int *)(P(0xCC) + 128) = TL[4];
    case 1:
        if (!(S16(0x1C) > TL[1]))
            FUN_0c0588bc((int)(e + 64), CURVE + 12, CURVE, S16(0x1C), TL[1], 0);
        if (S16(0x1C) >= TL[1] && !(S16(0x1C) > TL[2]))
            FUN_0c0588bc((int)(e + 64), CURVE + 24, CURVE + 12, S16(0x1C), TL[2], TL[1]);
        if (++S16(0x1C) >= S16(0x1E)) {
            C8(0x14)++;
            S16(0x1C) = 0;
            S16(0x20) = FUN_0c179ac0() % 2;
            r = FUN_0c179ac0() % 2;
            if (r == 0)
                FUN_0c059e60(0x0C532498 + C8(1) * 14648, 38);
            else if (r == 1)
                FUN_0c059e60(0x0C532498 + C8(1) * 14648, 39);
        }
        return;
    case 2:
        break;
    default:
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }

    if (*(unsigned char *)(e + 305) || *(int *)(e + 1028)) {
        C8(0x14) = 3;
        t = *(V3 *)(e + 40);
        t.y -= 200.0f;
        FUN_0c15aed8((int)&t);
        FUN_0c05ab12(208, (int)(e + 40));
        return;
    }
    if (!(S16(0x1C) > TL[3]))
        FUN_0c0588bc((int)(e + 64), CURVE + 36, CURVE + 24, S16(0x1C), TL[3], 0);
    if (C8(2) == 0) {
        if (S16(0x1C) > 20 && S16(0x1C) < 70) {
            FUN_0c137f74(C8(1), (int)&t, S16(0x20) & 1);
            FUN_0c0e2390((int)&t, (int)&t, (int)(e + 40));
            if (t.x == 0.0f)
                t.x = 9.99999997e-07f;
            a = math_atan_angle16(-t.z / t.x) & 0xFFFF;
            if (0.0f > t.x)
                a += 0x8000;
            d = (unsigned short)(a + 0x4000) - I32(0x38);
            if (d & 0x8000) {
                d = -546;
                S16(0x22)--;
            } else {
                d = 546;
                S16(0x22)++;
            }
            I32(0x38) = (unsigned short)(I32(0x38) + d);
            if (t.y == 0.0f)
                t.y = 9.99999997e-07f;
            h = math_signed_sqrt(t.z * t.z + t.x * t.x);
            a = math_atan_angle16(-h / t.y);
            if (0.0f > t.y)
                a += 0x8000;
            d = -(unsigned short)(0x4000 + a) - I32(0x34);
            if (d & 0x8000)
                d = -546;
            else
                d = 546;
            I32(0x34) = (unsigned short)(I32(0x34) + d);
        }
    } else {
        if (S16(0x1C) > 5 && S16(0x1C) < *(int *)0x0C2A1A78) {
            FUN_0c137f74(C8(1), (int)&t, S16(0x20) & 1);
            t.y += 100.0f;
            FUN_0c0e2390((int)&t, (int)&t, (int)(e + 40));
            if (t.x == 0.0f)
                t.x = 9.99999997e-07f;
            a = math_atan_angle16(-t.z / t.x) & 0xFFFF;
            if (0.0f > t.x)
                a += 0x8000;
            d = (unsigned short)(a + 0x4000) - I32(0x38);
            if (d & 0x8000) {
                d = -(int)(*(float *)0x0C2A1A74 * 65536.0f / 360.0f);
                S16(0x22)--;
            } else {
                S16(0x22)++;
                d = (int)(*(float *)0x0C2A1A74 * 65536.0f / 360.0f);
            }
            I32(0x38) = (unsigned short)(I32(0x38) + d);
            if (t.y == 0.0f)
                t.y = 9.99999997e-07f;
            h = math_signed_sqrt(t.z * t.z + t.x * t.x);
            a = math_atan_angle16(-h / t.y);
            if (0.0f > t.y)
                a += 0x8000;
            d = -(unsigned short)(0x4000 + a) - I32(0x34);
            if (d & 0x8000)
                d = -1092;
            else
                d = 1092;
            I32(0x34) = (unsigned short)(I32(0x34) + d);
        }
    }
    if (S16(0x20) & 2) {
        *P(0xC8) = 1;
        if (S16(0x1C) & 1)
            *(V12 *)(P(0xC8) + 132) = *(V12 *)(CURVE + 48);
        else
            *(V12 *)(P(0xC8) + 132) = *(V12 *)(CURVE + 60);
    }
    *(int *)(P(0xD0) + 128) += 10920;
    FUN_0c137f74(C8(1), (int)&t, S16(0x20) & 1);
    FUN_0c0e2390((int)&t, (int)&t, (int)(e + 40));
    if (!(S16(0x20) & 2) && *(float *)0x0C2A1A70 > FUN_0c0e2340((int)&t))
        S16(0x20) |= 2;
    if (S16(0x20) & 2) {
        *(int *)(P(0xC4) + 128) += *(int *)(P(0xCC) + 128);
        if (!(*(int *)(P(0xCC) + 128) > TL[6]))
            *(int *)(P(0xCC) + 128) += TL[5];
    } else {
        if (S16(0x1C) >= 70 && S16(0x22) != 0) {
            if (S16(0x22) > 0)
                S16(0x22)--;
            else
                S16(0x22)++;
        }
        *(int *)(P(0xC4) + 128) = (unsigned short)-(S16(0x22) * 364);
        if (S16(0x1C) > 0 && *(unsigned int *)0x0C542260 % 12 == 0)
            FUN_0c150010((int)(e + 40), 0, 0, 0.800000012f, 0.800000012f, 0.800000012f, 1.0f);
    }
    F32(0x4C) = math_sin_angle16(I32(0x38)) * 17.0f;
    F32(0x50) = -(math_sin_angle16(I32(0x34)) * 17.0f);
    F32(0x54) = math_cos_angle16(I32(0x38)) * 17.0f;
    FUN_0c17c130((int)(e + 40), (int)(e + 40), (int)(e + 76));
    if (++S16(0x1C) == 300) {
        C8(0x14) = 3;
        FUN_0c15aed8((int)(e + 40));
        FUN_0c05ab12(208, (int)(e + 40));
    }
}
