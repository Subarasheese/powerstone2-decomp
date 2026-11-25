/* Straight-line functions with calls and guards (batch gen_yu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15530c(int a4);

/* manual: Power Stone 2 gauge stepper (state byte +0x14: 0 zero the floats, 1 wait, 2 ramp, 3 follow the player float and light the objects, else FUN_0c03f346); the four-object and six-array runs are loops, the two state 3 swap blocks are one; cases: 36 old + 113 hand, 756 of 756 instructions */
int FUN_0c15530c(int a4)
{
    char *a = (char *)a4;
    float *x = (float *)0xC4759F4;
    int idx;
    int k;
    int s;
    float *o;
    float p;

    s = *(signed char *)(a + 0x14);
    if (s == 0) {
        for (k = 0; k < 4; k++)
            *(float *)(*(int *)(a + 0xC4 + 4 * k) + 0x84) = 0.0f;
        o = (float *)*(int *)(a + 0xD4);
        o[6] = 0.0f;
        o[7] = 0.0f;
        o[8] = 0.0f;
        *(short *)(a + 0x1C) = 60;
        goto step;
    }
    if (s == 1) {
        short c = *(short *)(a + 0x1C) - 1;

        *(short *)(a + 0x1C) = c;
        if (c != 0)
            return c;
        *(unsigned char *)(a + 0xA8) = 1;
        *(short *)(a + 0x1C) = 100;
        goto step;
    }
    if (s == 2) {
        short c;

        for (k = 0; k < 4; k++)
            *(float *)(*(int *)(a + 0xC4 + 4 * k) + 0x84) += 0.01f;
        c = *(short *)(a + 0x1C) - 1;
        *(short *)(a + 0x1C) = c;
        if (c != 0)
            return c;
        for (k = 0; k < 4; k++)
            *(float *)(*(int *)(a + 0xC4 + 4 * k) + 0x84) = 1.0f;
        idx = *(signed char *)(a + 2);
        x[idx] = 0.0f;
        for (k = 1; k < 7; k++)
            x[4 * k + idx] = *(float *)(0xC532498 + *(signed char *)(a + 2) * 0x3938 + 0x160);
        *(unsigned short *)(*(int *)(a + 0xC4) + 6) = 1;
        goto step;
    }
    if (s != 3)
        return FUN_0c03f346(a4, 0xC475A04, 0xC475A14, 0xC532498);
    idx = *(signed char *)(a + 2);
    p = *(float *)(0xC532498 + idx * 0x3938 + 0x160);
    if (x[4 + idx] != p) {
        x[idx] = 60.0f;
        if (x[4 + idx] > p || p > x[4 + idx]) {
            int lt = x[4 + idx] > p;

            x[12 + idx] = x[4 + idx];
            x[8 + idx] = x[4 + idx];
            x[4 + idx] = p;
            x[16 + idx] = lt ? x[4 + idx] : x[8 + idx];
            x[20 + idx] = x[8 + idx];
            x[24 + idx] = x[4 + idx];
        }
    }
    if (x[idx] > 0.0f)
        x[idx] -= 1.0f;
    else if (x[8 + idx] != x[4 + idx]) {
        if (x[12 + idx] > x[4 + idx]) {
            if (x[4 + idx] + 3.0f > x[8 + idx])
                x[8 + idx] = x[4 + idx];
            else
                x[8 + idx] -= 3.0f;
            x[20 + idx] = x[8 + idx];
        }
        if (x[4 + idx] > x[12 + idx]) {
            if (x[8 + idx] > x[4 + idx] + -3.0f)
                x[8 + idx] = x[4 + idx];
            else
                x[8 + idx] += 3.0f;
            x[16 + idx] = x[8 + idx];
        }
    }
    o = (float *)*(int *)(a + 0xD4);
    if (x[4 + idx] == x[8 + idx] || x[12 + idx] > x[4 + idx]) {
        if (o[6] > 0.0f) {
            o[6] -= 0.1f;
            o[7] -= 0.1f;
            o[8] -= 0.1f;
            if (0.0f > o[6]) {
                o[6] = 0.0f;
                o[7] = 0.0f;
                o[8] = 0.0f;
            }
        }
    } else if (x[4 + idx] > x[12 + idx]) {
        if (1.0f > o[6]) {
            o[6] += 0.1f;
            o[7] += 0.1f;
            o[8] += 0.1f;
            if (o[6] > 1.0f) {
                o[6] = 1.0f;
                o[7] = 1.0f;
                o[8] = 1.0f;
            }
        }
    }
    k = o[6] != 0.0f;
    *(unsigned char *)*(int *)(a + 0xD4) = k;
    *(unsigned char *)*(int *)(a + 0xD8) = k;
    for (k = 0; k < 3; k++)
        *(float *)(*(int *)(a + 0xC8 + 4 * k) + 0x84) = x[4 * (4 + k) + idx] / 1000.0f * 71.0f / 100.0f + 0.29f;
    o = (float *)*(int *)(a + 0xD4);
    p = x[16 + idx] / 1000.0f * 70.0f;
    p = p + 159.0f * (float)*(signed char *)(a + 1);
    o[27] = p + -249.0f;
    ((int *)o)[32] += 0x222;
    o = (float *)*(int *)(a + 0xD8);
    if (*(int *)0xC542260 & 1) {
        o[33] = 1.0f;
        o[34] = 1.0f;
    } else {
        o[33] = 0.8f;
        o[34] = 0.8f;
    }
    return 0x88;
step:
    *(signed char *)(a + 0x14) += 1;
    return 0x14;
}
