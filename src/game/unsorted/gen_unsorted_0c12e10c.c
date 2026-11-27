/* game/unsorted: functions 0C12E10C-0C12E57E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c12e10c(int a4);
int FUN_0c12e21c(int a4, int a5, int a6, int a7, float f4);


/* manual: four part animations (state bytes 14-17, timers 1C-22, sub-objects C4-D0) in one loop: wait, move/grow, fade; 451 cases, 393 of 393 instructions */
int FUN_0c12e21c(int a4, int a5, int a6, int a7, float f4)
{
    signed char *s;
    short *t;
    char **o;
    float v, x, y;
    int i, ph, r;

    if (*(signed char *)(a4 + 0x1B) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    for (i = 0; i < 4; i++) {
        s = (signed char *)(a4 + 0x14) + i;
        t = (short *)(a4 + 0x1C) + i;
        o = (char **)(a4 + 0xC4) + i;
        ph = r = *s;
        if (i < 2) {
            ph = (unsigned)ph <= i ? ph + 1 : 3;
        }
        if ((unsigned)ph > 2) {
            continue;
        }
        r = 0x22;
        if (ph != 0) {
            x = 0.04f;
            y = 0.01f;
            if (i == 0) {
                x = -0.05f;
                y = 0.1f;
            } else if (i == 1) {
                x = y = 0.02f;
            }
            *(float *)(*o + 0x84) += x;
            *(float *)(*o + 0x88) += y;
            *(float *)(*o + 0x8C) += x;
            if (i > 1) {
                *(int *)(*o + 0x7C) += 0x1000;
            }
        }
        if (ph == 2) {
            v = *t / 2.0f;
            *(float *)(*o + 0x14) = v;
            if (!(v > 0.0f)) {
                *(float *)(*o + 0x14) = 0.0f;
                **o = 0;
                if (i == 3) {
                    *(char *)(a4 + 0x1B) = 10;
                }
                (*s)++;
            }
            (*t)--;
        } else if (ph == 0 || i == 0) {
            if (--*t == 0) {
                if (i == 0) {
                    **o = 0;
                } else {
                    *t = 0x12;
                }
                (*s)++;
                r = 0x17;
            }
        } else if ((*t)-- == 0) {
            *t = 2;
            (*s)++;
            r = 0x17;
        }
    }
    return r;
}
