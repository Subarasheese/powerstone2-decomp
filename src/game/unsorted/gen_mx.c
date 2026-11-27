/* Straight-line functions with calls and guards (batch gen_mx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0444d2(int a4, float f4);

/* manual: state machine on byte a4[0x14]: 0 clears a8; 1 two flag bits; 2,3,4,5,6,8,9 copy the 4 vectors of the slot's player to a4 (2: guard on its a8, the 0x1555 store before the last copy; 3,4: fade of its +0xCC object, 20-frame count; 5: count; 6,9: flag test; 8: guard, sets a8); other states tail-call FUN_0c03f346; 59 cases, 590 of 590 instructions */
int FUN_0c0444d2(int a4, float f4)
{
    struct mv3 { int w[3]; };
    register int t0;
    register int p;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        *(unsigned char *)(a4 + 0xA8) = 0x0;
    } else if (t0 == 1) {
        if (((unsigned char)(*(signed char *)0xC3BD445) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) != 0) {
            *(unsigned char *)(a4 + 0x14) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x2));
        t1 = t0;
        if (((unsigned char)(*(signed char *)0xC3BD447) & ((int)0x1 << (int)t0)) == 0) {
        } else {
            *(unsigned char *)(a4 + 0x14) = 0x8;
            t1 = 0x8;
        }
        return t1;
    } else if ((unsigned int)t0 <= 9 && ((0x37C >> t0) & 1)) {
        p = *(int *)(0xC40DC64 + (*(signed char *)((((short)(*(signed char *)(a4 + 0x2)) * (short)0x3938) + 0xC532498) + 0x2) << 2));
        if ((t0 == 2 || t0 == 8) && *(signed char *)(p + 0xA8) == 0) {
            return 0xA8;
        }
        *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(p + 0x28);
        *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(p + 0x34);
        *(struct mv3 *)(*(int *)(a4 + 0xC4) + 0x6C) = *(struct mv3 *)(*(int *)(p + 0xC4) + 0x6C);
        if (t0 == 2) {
            *(unsigned int *)(*(int *)(a4 + 0xC4) + 0x78) = 0x1555;
        }
        *(struct mv3 *)(*(int *)(a4 + 0xC4) + 0x78) = *(struct mv3 *)(*(int *)(p + 0xC4) + 0x78);
        if (t0 == 2 || t0 == 8) {
            *(unsigned char *)(a4 + 0xA8) = 0x1;
        } else if (t0 == 3) {
            t1 = *(signed char *)0xC54225A;
            if ((t1 & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) == 0) {
                return t1;
            }
            t1 = *(int *)(p + 0xCC);
            *(float *)(t1 + 0x18) = 1.0f;
            *(float *)(t1 + 0x1C) = 1.0f;
            *(float *)(t1 + 0x20) = 1.0f;
            *(unsigned char *)t1 = 0x1;
            *(unsigned short *)(a4 + 0x1C) = 0x14;
        } else if (t0 == 4 || t0 == 5) {
            if (t0 == 4) {
                t1 = *(int *)(p + 0xCC);
                if (*(float *)(t1 + 0x18) > 0.0f) {
                    *(float *)(t1 + 0x18) = *(float *)(t1 + 0x18) - 0.0500000007f;
                    *(float *)(t1 + 0x1C) = *(float *)(t1 + 0x1C) - 0.0500000007f;
                    *(float *)(t1 + 0x20) = *(float *)(t1 + 0x20) - 0.0500000007f;
                    if (0.0f > *(float *)(t1 + 0x18)) {
                        *(float *)(t1 + 0x18) = 0.0f;
                        *(float *)(t1 + 0x1C) = 0.0f;
                        *(float *)(t1 + 0x20) = 0.0f;
                        *(unsigned char *)t1 = 0x0;
                    }
                }
            }
            t1 = *(short *)(a4 + 0x1C);
            *(unsigned short *)(a4 + 0x1C) = (t1 - 1);
            if ((short)(t1 - 1) != 0) {
                return (short)(t1 - 1);
            }
            if (t0 == 4) {
                *(unsigned short *)(a4 + 0x1C) = 0x14;
            }
        } else if (*(signed char *)(p + 0xA8) != 0) {
            return 0xA8;
        }
    } else {
        return FUN_0c03f346(a4, 0x0, 0x1, 0xC532498);
    }
    *(unsigned char *)(a4 + 0x14) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
