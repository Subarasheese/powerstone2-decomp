/* Straight-line functions with calls and guards (batch gen_ahf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c13bfc4(int a4, int a5, int a6, int a7, float f4);

int FUN_0c13bfc4(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, (((short)t0 * (short)0x3938) + 0xC532498), a6, a7);
        }
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                u0 = (((struct o48_float *)(a4))->v);
                (((struct o48_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o44_float *)(a4))->v) = (u0 - 0.100000001f);
                (((struct o40_float *)(a4))->v) = (u0 - 0.100000001f);
                if (!(((((struct o48_float *)(a4))->v)) > 0.0f)) {
                    (((struct o48_float *)(a4))->v) = 0.0f;
                    (((struct o44_float *)(a4))->v) = 0.0f;
                    (((struct o40_float *)(a4))->v) = 0.0f;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t1 = (((struct oC4_int *)(a4))->v);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0x4))) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)((a4 + 0x40)); }
            } else {
                if ((int)(*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x15))) >= (int)0x3) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
            }
        } else {
            u0 = (((struct o48_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = (u0 + 0.100000001f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
            (((struct o40_float *)(a4))->v) = (u0 + 0.100000001f);
            if (!(1.0f > ((((struct o48_float *)(a4))->v)))) {
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t1 = (((struct oC4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((0xC4 + a4) + 0x4))) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + t1)) = *(struct mv3 *)((a4 + 0x40)); }
        }
    } else {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x2;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) > 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        }
    }
    t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
    t0 = t1;
    if (t1 != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t0 = 0x14;
    }
    return t0;
}
