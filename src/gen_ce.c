/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03733c(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c070320(int);
int FUN_0c07da48(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2380(int, int);
int FUN_0c0c3054(int, int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int math_vec3_accumulate(int, int);
int FUN_0c087ae8(int a4);
int FUN_0c0a3bd6(int a4);
int FUN_0c0b046c(int a4);
int FUN_0c119c18(int a4, int a5, int a6, int a7);


int FUN_0c0a3bd6(int a4)
{
    register int t9;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x11);
        FUN_0c187798();
        FUN_0c187798();
        (((struct o50_float *)(a4))->v) = 20.0f;
        t9 = 0x50;
    } else {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x3);
        FUN_0c187798();
        FUN_0c187798();
        (((struct o50_float *)(a4))->v) = 20.0f;
        (((struct o5C_float *)(a4))->v) = -2.79999995f;
        t9 = 0x5C;
    }
    return t9;
}

int FUN_0c0b046c(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if ((((((struct o20_short *)(a4))->v)) != 0) && (t0 != 0)) {
            t1 = 0x1;
            t2 = 0x1;
            if (t0 == 2) {
                t1 = 0x6;
                t2 = 0x0;
            }
            return FUN_0c085cac(a4, t1, t2);
        }
        return FUN_0c085d0c(a4);
    }
    FUN_0c038362(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    FUN_0c07da48(a4);
    return FUN_0c070320(a4);
}

int FUN_0c119c18(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 20) {
            if (t0 != 30) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            return 0xA8;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03733c(a4, 0xF, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x40F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c187798();
        FUN_0c18778c();
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    return 0xA8;
}
