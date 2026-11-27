/* Straight-line functions with calls and guards (batch gen_ajm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03733c(int, int, int);
int nlRand(void);
int FUN_0c0f7688(int a4);

int FUN_0c0f7688(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    }
    (((struct o16_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x15)));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = t0;
            if (t0 != 2) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 8);
                (((struct oB4_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
                if ((int)(*(short *)((a4 + 0x1C))) <= 0) {
                    (((struct oB4_float *)(a4))->v) = 0.0f;
                    *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
                    t0 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (((int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u))) >> 1);
                    if ((int)(*(short *)((a4 + 0x1E))) < (int)0x14) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x5A;
                    }
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct oA8_uchar *)(a4))->v) = 0x0;
                }
                u0 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                t1 = 0xB8;
            }
            t0 = t1;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x40);
            (((struct oB4_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) / 256.0f);
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x100) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x100;
                (((struct o15_uchar *)(a4))->v) = 0x2;
            }
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            t0 = 0xB8;
        }
        t1 = t0;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        t0 = *(short *)((a4 + 0x1C));
        t1 = t0;
        if ((int)t0 >= 0) {
        } else {
            t0 = nlRand();
            t3 = (t0 % 0x2);
            FUN_0c03733c(a4, (t3 + 0x7), (*(int *)0xC4B410C));
            if (t3 == 0) {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                if ((((((struct o20_short *)(a4))->v)) & 0x1) == 0) {
                    (((struct o40_float *)(a4))->v) = 1.0f;
                } else {
                    (((struct o40_float *)(a4))->v) = -1.0f;
                }
            } else {
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                if ((((((struct o22_short *)(a4))->v)) & 0x1) != 0) {
                    (((struct o40_float *)(a4))->v) = -1.0f;
                } else {
                    (((struct o40_float *)(a4))->v) = 1.0f;
                }
            }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = 0x1;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t1 = 0xA8;
        }
    }
    return t1;
}
