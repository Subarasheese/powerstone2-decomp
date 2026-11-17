/* @runtime _quick_evn_mvn=0C18778C */
/* Hand-written C: FUN_0c0fa178, a rotating counter on the HUD (three models: 0xC4 a dial, 0xC8, 0xCC a digit; 0xD0 a second
   dial) that follows g_game_work's count (+14). The dials turn by one step (L0, an angle) per count, with a half-turn kick when
   the count wraps between L1 and 0; when the count changes the digit flashes, rolls (FUN_0c058a6e) to the new value's model
   (0C1FB5C8) and settles; when g_game_work+22 is set it blinks. 0C5429A8 picks the other layout (7 steps of 0x1000, 512). */

typedef struct { int w[4]; } Colour;

int FUN_0c03f346(int, int, int, int);
void FUN_0c03744a(int, int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0fa158(void);
int FUN_0c02da2e(void);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define P(o)    (*(char **)(e + (o)))
#define GW      ((char *)0x0C541F3C)
#define BANK    (*(int *)0x0C4B4118)
#define ALT     (*(unsigned char *)0x0C5429A8)
#define ROLL(e) FUN_0c058a6e((int)(P(0xCC) + 20), 0x0C28E5A0, 0x0C28E590, S16(0x1C), 8, 0)

void FUN_0c0fa178(int a4, int a5, int a6, int a7)
{
    char *e = (char *)a4;
    int step, top, speed, v, i;

    if (ALT == 0) {
        step = -3640;
        top = 8;
        speed = 455;
    } else {
        top = 7;
        step = -4096;
        speed = 512;
    }
    switch (C8(0x14)) {
    case 0:
        C8(0x14)++;
        *(unsigned char *)(e + 0xA8) = 1;
        *(short *)(e + 0xAC) = 15;
        FUN_0c03744a((int)P(0xC4), 0, 6, BANK);
        *(float *)(P(0xC4) + 0x70) = -115.0f;
        FUN_0c03744a((int)P(0xC8), 0, 7, BANK);
        FUN_0c03744a((int)P(0xCC), 0, 8, BANK);
        *(short *)(P(0xCC) + 6) = 1039;
        *(Colour *)(P(0xCC) + 20) = *(Colour *)0x0C28E590;
        S16(0x1C) = 0;
        S16(0x20) = -1;
        S16(0x1E) = *(short *)(GW + 14);
        *(int *)(P(0xD0) + 0x78) = S16(0x1E) * step;
        *(int *)(P(0xC4) + 0x78) = S16(0x1E) * step;
    case 1:
        break;
    default:
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    S16(0x22) = S16(0x1E);
    S16(0x1E) = *(short *)(GW + 14);
    *(int *)(P(0xD0) + 0x78) = S16(0x1E) * step;
    if (S16(0x22) == top && S16(0x1E) == 0)
        *(int *)(P(0xC4) + 0x78) -= 0x8000;
    else if (S16(0x22) == 0 && S16(0x1E) == top)
        *(int *)(P(0xC4) + 0x78) += 0x8000;
    FUN_0c058854((int)(P(0xC4) + 0x78), *(int *)(P(0xD0) + 0x78), *(int *)(P(0xC4) + 0x78), speed);

    switch (C8(0x16)) {
    case 0:
        if (S16(0x1E) != C8(0x17)) {
            C8(0x16) = 1;
            C8(0x18) = 4;
        }
        break;
    case 1:
        if (--C8(0x18) <= 0) {
            FUN_0c0fa158();
            C8(0x16) = 0;
            C8(0x17) = (char)S16(0x1E);
        }
        break;
    }

    switch (C8(0x15)) {
    case 0:
        if (S16(0x1E) != S16(0x20)) {
            C8(0x15) = 1;
            return;
        }
        if (*(short *)(GW + 22))
            C8(0x15) = 16;
        return;
    case 1:
        ROLL(e);
        if (--S16(0x1C) < 0) {
            C8(0x15)++;
            S16(0x1C) = 0;
        }
        return;
    case 2:
        C8(0x15)++;
        S16(0x20) = S16(0x1E);
        i = S16(0x20);
        if (i < 0)
            i = 0;
        if (i > 8)
            i = 8;
        v = ((int *)0x0C1FB5C8)[i];
        if (v == 15 && ALT == 0 && FUN_0c02da2e() == 0)
            v = 16;
        FUN_0c03744a((int)P(0xCC), 0, v, BANK);
        *(short *)(P(0xCC) + 6) = 1039;
    case 3:
        ROLL(e);
        if (S16(0x1E) != S16(0x20)) {
            C8(0x15) = 1;
            return;
        }
        if (*(short *)(GW + 22)) {
            C8(0x15) = 16;
            return;
        }
        if (++S16(0x1C) > 8) {
            C8(0x15) = 0;
            S16(0x1C) = 8;
        }
        return;
    case 16:
        *(Colour *)(P(0xCC) + 20) = *(Colour *)0x0C28E5A0;
        *P(0xCC) = 0;
        S16(0x1C) = 16;
        C8(0x15)++;
    case 17:
        S16(0x1C)--;
        *P(0xCC) = (S16(0x1C) & 4) >> 2;
        if (S16(0x1C) > 0)
            return;
        *(Colour *)(P(0xCC) + 20) = *(Colour *)0x0C28E5A0;
        *P(0xCC) = 1;
        C8(0x15) = 0;
        return;
    }
}
