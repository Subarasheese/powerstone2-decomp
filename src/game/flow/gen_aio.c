/* Straight-line functions with calls and guards (batch gen_aio): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c120da2(int, int, Stk3);
float math_sin_angle16(int);
int FUN_0c11fe4a(int a4, float f4, float f5, float f6);

int FUN_0c11fe4a(int a4, float f4, float f5, float f6)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t12;
    register float u13;
    register float t17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u42;
    register int t60;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o44_float *)(a4))->v) = 0.00937500037f;
        (((struct o40_float *)(a4))->v) = 0.00937500037f;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t5 = *(signed char *)((a4 + 0x16));
        if (t5 != 0) {
            t60 = t5;
            if (t5 != 1) {
            } else {
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x14);
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
                if ((int)((((struct o20_short *)(a4))->v)) >= (int)0x168) {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 0x168);
                }
                t12 = (((struct o22_short *)(a4))->v);
                u13 = (((struct o4_float *)0xC11FFA8)->v);
                t17 = math_sin_angle16((int)(((float)((((struct o20_short *)(a4))->v)) * ((((struct o8_float *)0xC11FFA8)->v))) / ((((struct oC_float *)0xC11FFA8)->v))));
                u18 = (((struct o14_float *)0xC11FFA8)->v);
                u19 = (((struct o18_float *)0xC11FFA8)->v);
                u20 = (((float)t12 / u13) * t17);
                u21 = (((float)t12 / u13) * t17);
                (((struct o40_float *)(a4))->v) = ((u18 - u20) * u19);
                (((struct o44_float *)(a4))->v) = ((u21 + u18) * u19);
                t60 = 0x22;
                if ((int)((((struct o22_short *)(a4))->v)) <= 0) {
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    (((struct o44_float *)(a4))->v) = 0.00937500037f;
                    (((struct o40_float *)(a4))->v) = 0.00937500037f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2018F4); }
                    t60 = (FUN_0c120da2(0x0, ((int)stk + 0), *(Stk3 *)(((int)stk + 0))));
                }
            }
        } else {
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - 0.200000003f);
            u42 = (((struct o0_float *)0xC11FFA8)->v);
            t60 = 0x30;
            if (!(((((struct o30_float *)(a4))->v)) > u42)) {
                (((struct o30_float *)(a4))->v) = u42;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x3C;
                t60 = 0x22;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t60 = 0x14;
    }
    return t60;
}
