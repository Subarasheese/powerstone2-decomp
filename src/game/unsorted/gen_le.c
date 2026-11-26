/* Straight-line functions with calls and guards (batch gen_le): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0d04c4(int, int);
int FUN_0c0dd3dc(int);
int FUN_0c0dd3ec(int);
float math_sin_angle16(int);
int FUN_0c0dd428(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c0dd428(int a4, int a5, int a6, int a7)
{
    int stk[6];
    int t9;
    int t14;
    int t20;
    int t2;
    int t36;
    int t4;
    int t23;
    float u30;
    float u46;
    int t8;
    int t67;
    int t49;
    int t39;
    int t33;
    int t32;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)(a4 + 0x14);
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t4 = *(signed char *)(a4 + 0x2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)((0xC1CA094 + (((t4 << 1) + t4) << 2))); }
        FUN_0c0dd3dc(a4);
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t9 = 0x0;
        for (;;) {
            if ((int)t9 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t8 = (*(int *)((((t9 << 2) + (0xC4 + a4)) + 0x0)));
            FUN_0c0d04c4((t8 + 0x6), (t8 + 0x78));
            t9 = (t9 + 0x1);
        }
    }
    t14 = *(signed char *)(a4 + 0x15);
    if (t14 != 0) {
        if (t14 != 1) {
            if (t14 != 2) {
                return t14;
            }
            t20 = *(signed char *)(a4 + 0x16);
            if (t20 == 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0x3C;
            }
            if ((t20 == 0) || (t20 == 1)) {
                t23 = *(signed char *)(a4 + 0x2);
                u30 = ((((struct o8_float *)(((((t23 << 1) + t23) << 2) + 0xC1CA094)))->v)) + (((float)((((struct o1C_short *)(a4))->v)) / 2.5f)) * (math_sin_angle16((((((struct o1C_short *)(a4))->v)) << 13)));
                (((struct o30_float *)(a4))->v) = u30;
                (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
                t32 = (((struct o1C_short *)(a4))->v);
                if ((int)t32 <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                    t33 = *(signed char *)(a4 + 0x2);
                    (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t33 << 1) + t33) << 2))))->v));
                    return FUN_0c0dd3dc(a4);
                }
                return t32;
            } else {
                return t20;
            }
        }
        t36 = *(signed char *)(a4 + 0x16);
        if (t36 == 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            (((struct o1C_ushort *)(a4))->v) = 0x3C;
        }
        if ((t36 == 0) || (t36 == 1)) {
            t39 = *(signed char *)(a4 + 0x2);
            u46 = ((((struct o8_float *)(((((t39 << 1) + t39) << 2) + 0xC1CA094)))->v)) + (((float)((((struct o1C_short *)(a4))->v)) / 10.0f)) * (math_sin_angle16((((((struct o1C_short *)(a4))->v)) << 13)));
            (((struct o30_float *)(a4))->v) = u46;
            (((struct o1C_ushort *)(a4))->v) = (((((struct o1C_short *)(a4))->v)) - 1);
            if ((int)((((struct o1C_short *)(a4))->v)) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
                t49 = *(signed char *)(a4 + 0x2);
                (((struct o30_float *)(a4))->v) = ((((struct o8_float *)((0xC1CA094 + (((t49 << 1) + t49) << 2))))->v));
            }
        }
        return FUN_0c0dd3ec(a4);
    }
    FUN_0c0dd3ec(a4);
    t67 = 0x15;
    if ((*(signed char *)(a4 + 0x15)) != 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(a4 + 0x28); }
        t67 = (FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0))));
    }
    return t67;
}
