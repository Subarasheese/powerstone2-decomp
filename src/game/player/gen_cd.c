/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o418_int { char p[0x418]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c0c2380(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c0c4b76(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c089270(int a4, int a5, int a6);
int FUN_0c0cc2b0(int a4, int a5, int a6);

int FUN_0c089270(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register int t11;
    register int t12;
    register int t36;
    register int t40;
    int t24;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t1 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t1 != 0) {
            t3 = FUN_0c085f66(a4);
            if (t3 == 0) {
                FUN_0c081dfc(a4);
            } else {
                FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
            }
            return FUN_0c085d0c(a4);
        }
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t11 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t11 != 0) {
                t12 = FUN_0c085f66(a4);
                if (t12 == 0) {
                    FUN_0c081dfc(a4);
                } else {
                    FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    FUN_0c037bf6(a4, a5, a6);
    if (!(18.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t24 = (((struct o22_short *)(a4))->v), t24 == 0)) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        FUN_0c0c2380(a4, ((((struct o376C_int *)(a4))->v)));
    }
    FUN_0c038362(a4);
    t36 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t36 - 1);
    t40 = (short)(t36 - 1);
    if ((int)(short)(t36 - 1) > 0) {
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xEA, 0xFFFFFFFF, 0x3, 0xEA);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t40 = 0x17;
    }
    return t40;
}

