/* Straight-line functions with calls and guards (batch gen_lc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0502ca(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


/* manual: setup / ramp / hold state machine of two byte states (+0x14: 0 set 12 slots to 0, apply the weights of the modes below the mode byte, 1 apply the weight of the mode byte, 100 frames, 2 idle; +0x15: 180/20/120/20/60 frame timers with a 0.05 ramp); the 12 weight stores of the original are one store at offset x of the slot table and the weight table; 54 cases, 465 of 484 instructions */
int FUN_0c0502ca(int a4)
{
    int r5, o, s, p, n, lo, hi, x, f, m, t, v, rl;

    r5 = 0xC241434;
    s = *(signed char *)(a4 + 0x14);
    if (s > 2 || s < 0) {
        FUN_0c03f346(a4, r5, 0xC5421F8, 2);
    } else if (s != 2) {
        for (p = s; p < 2; p++) {
            if (p == 0) {
                *(unsigned char *)(a4 + 0xA8) = 1;
                for (x = 0; x < 0x30; x += 4) {
                    *(float *)(*(int *)(a4 + 0xC4 + x) + 0x88) = 0.0f;
                }
            }
            f = *(signed char *)0xC542366;
            m = *(signed char *)0xC542236;
            lo = p ? m : 0;
            hi = p ? m : m - 1;
            if (m > 4) {
                hi = -1;
            }
            for (n = hi; n >= lo; n--) {
                if (n == 4) {
                    x = 0x28 + (f & 8) / 2;
                } else if (n == 3) {
                    x = 0x20 + (f & 8) / 2;
                } else if (n == 2) {
                    x = 0x18 + (f & 2) * 2;
                } else if (n == 1) {
                    x = 8 + (f & 1) * 8 + (f & 2) * 2;
                } else {
                    x = (f & 1) * 4;
                }
                o = *(int *)(a4 + 0xC4 + x);
                if (p) {
                    r5 = o;
                }
                *(float *)(o + 0x88) = *(float *)(0xC241434 + x) * (float)*(short *)(a4 + 0x1C) / 100.0f;
            }
            if (p == 0) {
                *(unsigned short *)(a4 + 0x1C) = 0;
                *(unsigned char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
            } else {
                v = *(short *)(a4 + 0x1C);
                *(unsigned short *)(a4 + 0x1C) = v + 1;
                if ((short)v == 100) {
                    *(unsigned char *)(a4 + 0x14) = 0;
                }
            }
        }
    }
    t = *(signed char *)(a4 + 0x15);
    if (t < 0 || t > 4) {
        return FUN_0c03f346(a4, r5, 0xC5421F8, 2);
    }
    rl = 20;
    if (t == 0) {
        *(unsigned char *)(a4 + 0xA8) = 1;
        *(float *)(a4 + 0xB0) = 0.0f;
        *(unsigned short *)(a4 + 0x1E) = 0xB4;
        *(unsigned char *)(a4 + 0x15) = *(signed char *)(a4 + 0x15) + 1;
    } else if (t == 2) {
        *(float *)(a4 + 0xB0) = *(float *)(a4 + 0xB0) + 0.0500000007f;
        rl = 120;
    } else if (t == 4) {
        *(float *)(a4 + 0xB0) = *(float *)(a4 + 0xB0) - 0.0500000007f;
        rl = 60;
    }
    v = *(short *)(a4 + 0x1E);
    *(unsigned short *)(a4 + 0x1E) = v - 1;
    v = (short)(v - 1);
    if (v == 0) {
        *(unsigned short *)(a4 + 0x1E) = rl;
        *(unsigned char *)(a4 + 0x15) = *(signed char *)(a4 + 0x15) + 1;
        v = 0x15;
    }
    return v;
}
