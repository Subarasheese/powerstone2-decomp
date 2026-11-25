/* Straight-line functions with calls and guards (batch gen_kp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct mv3 { int w[3]; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int);
int FUN_0c05ab04(int);
int FUN_0c07c19c(int);
int FUN_0c032cac(int a4, int a5, int a6, float f4);

/* manual: object task: state a4[0x14] (0 set up, 1 run, else FUN_0c03f346), frame a4[0x1E] follows byte 0C542252, sub-state a4[0x15] moves x/y fields; 233 cases, 372 of 372 instructions */
int FUN_0c032cac(int a4, int a5, int a6, float f4)
{
    char *o = (char *)a4;
    char *p;
    int first, r, k, j;

    r = *(signed char *)(o + 0x14);
    if (r == 0) {
        o[0xA8] = 1;
        *(short *)(o + 0xAC) = 0x1F;
        o[0xA9] = 0x21;
        first = 1;
        goto frame;
    }
    if (r != 1)
        goto leave;
tick:
    if (*(signed char *)0x0C5421F8 == 0 || ((signed char *)0x0C5421F8)[1] != 7)
        ++o[0x14];
    o[0xA8] = *(short *)(o + 0x1E) > 9 ? 0 : 1;
    if (*(short *)(o + 0x1E) != *(signed char *)0x0C542252) {
        first = 0;
frame:
        *(short *)(o + 0x1E) = *(signed char *)0x0C542252;
        FUN_0c03733c(a4, ((signed char *)(0x0C1A9A10 + *(signed char *)(o + 2) * 28))[0x18] + *(short *)(o + 0x1E), *(int *)0x0C4B40D0);
        for (k = 0; k < 2; k++)
            *(struct mv3 *)(o + 0x28 + k * 0x18) = *(struct mv3 *)(0x0C1A9A10 + *(signed char *)(o + 2) * 28 + k * 12);
        for (k = 0; k < 2; k++) {
            *(short *)(*(char **)(o + 0xC4 + k * 4) + 6) = k ? 0x31F : 0x71F;
            for (j = k; j < 4; j++) {
                p = *(char **)(o + 0xC4 + k * 4);
                *(float *)(p + 0x14 + j * 4) = *(float *)(0x0C20EC34 + *(short *)(o + 0x1E) * 16 + j * 4);
            }
        }
        *(short *)(o + 0x1C) = 1;
        if (first) {
            ++o[0x14];
            goto tick;
        }
        o[0x15] = 0;
    }
    r = *(signed char *)(o + 0x15);
    if (r == 0) {
        if ((r = --*(short *)(o + 0x1C)) == 0)
            goto wait;
    } else if (r == 1) {
        *(float *)(o + 0x30) -= 0.2f;
        if ((r = --*(short *)(o + 0x1C)) == 0) {
            FUN_0c05ab04(0xCC);
            FUN_0c07c19c(0x1C);
wait:
            *(short *)(o + 0x1C) = 25;
            goto next;
        }
    } else if (r == 2) {
        *(float *)(o + 0x48) -= 0.04f;
        if ((r = --*(short *)(o + 0x1C)) == 0) {
next:
            ++o[0x15];
            r = 0x15;
        }
    }
    return r;
leave:
    return FUN_0c03f346(a4, a5, a6);
}
