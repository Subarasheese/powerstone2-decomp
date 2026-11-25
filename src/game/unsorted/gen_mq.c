/* Straight-line functions with calls and guards (batch gen_mq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct part { unsigned char f0; char p1[5]; short f6; char p8[0x74]; int angle; char p80[4]; float x; float y; };
struct obj {
    char p0[2]; signed char no; char p3[0x11]; signed char state; char p15[7]; short timer; char p1E[4]; short f22;
    char p24[0x84]; unsigned char fA8; char pA9[0x1B]; struct part *c4, *c8, *cc, *d0, *d4;
};
int FUN_0c03f346(int, int, int, int);

/* manual: update callback of an object (state machine on +0x14, timer +0x1C) moving its five parts; 221 cases, 347 of 347 instructions */
void FUN_0c154e00(struct obj *a4, int a5, int a6, int a7)
{
    int t;
    float dx, dy;

    switch (a4->state) {
    case 0:
        a4->c4->angle -= 0x4000;
        a4->c8->angle -= 0x4000;
        a4->cc->x = 0.0f;
        a4->d0->x = 0.0f;
        a4->d0->y = 0.0f;
        a4->d4->f0 = 0;
        a4->d4->x = 5.0f;
        a4->d4->y = 5.0f;
        a4->timer = a4->no * 12 + 1;
        t = a4->f22 * 12 + 1;
        goto set;
    case 1:
        if (--a4->timer)
            return;
        a4->fA8 = 1;
        t = 15;
        goto set;
    case 2:
        a4->c4->angle += 0x444;
        a4->c8->angle += 0x444;
        if (--a4->timer)
            return;
        a4->timer = 45 - a4->no * 12;
        t = 45 - a4->f22 * 12;
        goto set;
    case 3:
        t = 20;
        break;
    case 4:
    case 5:
        if (a4->state == 4) {
            dx = -0.005f;
            dy = 0.005f;
            t = 50;
        } else {
            dx = 0.006f;
            dy = -0.002f;
            t = 40;
        }
        a4->c4->x += dx;
        a4->c4->y += dy;
        a4->c8->x += dx;
        a4->c8->y += dy;
        break;
    case 6:
        a4->c4->x -= 0.005f;
        a4->c8->x -= 0.005f;
        if (--a4->timer)
            return;
        a4->timer = a4->no * 10 + 1;
        t = a4->f22 * 10 + 1;
        goto set;
    case 7:
    case 9:
        t = 10;
        break;
    case 8:
        a4->cc->x += 0.1f;
        t = 40;
        break;
    case 10:
        a4->d0->x += 0.1f;
        a4->d0->y += 0.1f;
        if (--a4->timer)
            return;
        a4->c4->f6 = 1;
        a4->c8->f6 = 1;
        a4->cc->f6 = 1;
        a4->d0->f6 = 1;
        goto next;
    case 11:
        if (*(float *)(0xC5325F8 + a4->no * 0x3938) > 0.0f) {
            a4->d4->f0 = 0;
            a4->d4->x = 5.0f;
            a4->d4->y = 5.0f;
        } else {
            a4->d4->f0 = 1;
            if (a4->d4->x > 1.0f) {
                a4->d4->x -= 0.1f;
                a4->d4->y -= 0.1f;
            }
        }
        return;
    default:
        FUN_0c03f346((int)a4, 0, 1, a7);
        return;
    }
    if (--a4->timer)
        return;
set:
    a4->timer = t;
next:
    a4->state++;
}
