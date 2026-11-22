/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064f80(int);
int FUN_0c07053a(int, int, float);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int, int, int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f56a(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c08e382(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c150be8(int, int);
int FUN_0c15a808(int, int, int);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c07746c(int a4);
int FUN_0c0af6a8(int a4);
int FUN_0c06ed36(int a4);
int FUN_0c092b18(int a4);
int FUN_0c15abcc(int a4);
int FUN_0c0a40dc(int a4);

int FUN_0c07746c(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = FUN_0c0752a8(a4);
    if (t1 != 1) {
        if (t1 != 2) {
            if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t0 = (((struct o22_short *)(a4))->v), t0 == 0)) {
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x29, 0xFFFFFFFF, 0x4, 0x29);
                u0 = *(float *)0xC077648;
                t0 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = u0;
                (((struct o94_float *)(t0))->v) = u0;
                t0 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t0))->v) = u0;
                (((struct o94_float *)(t0))->v) = u0;
                (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
            }
            FUN_0c037bf6(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    if ((*(signed char *)((a4 + 0x135))) != 2) {
        FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    (((struct o372C_uchar *)(a4))->v) = 0x0;
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c0af6a8(int a4)
{
    int t0;
    register int t1;

    if ((int)(*(short *)((a4 + 0x1E))) > 0) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        if ((*(short *)((a4 + 0x1E))) == 0) {
            FUN_0c059e60(a4, 0x2);
        }
    }
    FUN_0c037bf6(a4);
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o131_uchar *)(a4))->v) = 0x0;
            t0 = FUN_0c07f56a(a4);
            if (t0 != 0) {
                (((struct o372A_uchar *)(a4))->v) = (t0 - 1);
                (((struct o3728_uchar *)(a4))->v) = 0x3;
                return FUN_0c085cac(a4, 0x21, 0x0);
            }
        }
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07daea(a4, t1, (0x118 + a4));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c06ed36(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if ((*(short *)((a4 + 0x1C))) != 0) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        } else {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
        }
        FUN_0c037bf6(a4);
        if ((*(short *)((a4 + 0x1E))) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        t0 = *(short *)((a4 + 0x1E));
        if (t0 == 0) {
            return FUN_0c085d0c(a4);
        }
        return t0;
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        t0 = 0xD3;
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 15) {
            t0 = 0x46;
        }
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, t0, 0xFFFFFFFF, 0x3, (t0));
    } else {
        t0 = 0xD5;
        if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 15) {
            t0 = 0x48;
        }
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, t0, 0xFFFFFFFF, 0x3, (t0));
    }
    *(unsigned short *)((a4 + 0x1E)) = 0x14;
    t0 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 6.0f;
    (((struct o94_float *)(t0))->v) = 6.0f;
    t0 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 6.0f;
    (((struct o94_float *)(t0))->v) = 6.0f;
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}

int FUN_0c092b18(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    u0 = (((struct o0_float *)0xC092C5C)->v);
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / u0));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / u0));
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x9, (t0), 0x2, 0x9);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        FUN_0c07053a(a4, 0x1E, ((((struct oC_float *)0xC092C5C)->v)));
        (((struct o50_float *)(a4))->v) = ((((struct o14_float *)0xC092C5C)->v));
        (((struct o5C_float *)(a4))->v) = -1.0f;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c038362(a4);
}

int FUN_0c15abcc(int a4)
{
    int stk[9];
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t8;
    register int t9;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0xF)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x0)) = (((t3 << 8) << 2) << 2);
        t5 = nlRand();
        t6 = ((~(((~t5) + 0x1) & 0xF)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x4)) = (((t6 << 8) << 2) << 2);
        t8 = nlRand();
        t9 = ((~(((~t8) + 0x1) & 0xF)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x8)) = (((t9 << 8) << 2) << 2);
        *(float *)(((int)stk + 24)) = (((((struct o4C_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 28)) = (((((struct o50_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 32)) = (((((struct o54_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 0.0f;
        FUN_0c15a808((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    }
    return (FUN_0c03f346(a4));
}

int FUN_0c0a40dc(int a4)
{
    register int t0;
    register int t1;

    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x8);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            return FUN_0c07daea(a4, t1, t0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
