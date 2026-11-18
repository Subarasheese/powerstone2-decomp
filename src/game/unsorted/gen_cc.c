/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c0373ee(int, int, int);
int FUN_0c037bf6(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
extern int FUN_0c085f66();
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0e79f4(int, int, int);
extern int FUN_0c187798();
int math_vec3_accumulate(int, int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
float FUN_0c0e7b54(int a4, int a5, int a6, int a7);
int FUN_0c0868cc(int a4, int a5, int a6, int a7);


int FUN_0c0868cc(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x280) == 0) && (t0 = (((struct o22_short *)(a4))->v), t0 == 0)) {
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        t0 = ((int (*)(int, int, int, int))(FUN_0c085f66))(a4, a5, a6, a7);
        if (t0 == 0) {
            FUN_0c081dfc(a4);
        } else {
            FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0x4, (*(signed char *)((a4 + 0x1))));
        }
        return FUN_0c085d0c(a4);
    }
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)(((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) - (*(int *)((a4 + 0x38))));
        if ((((((struct o3850_int *)(a4))->v)) & 0x8000) != 0) {
            (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) | 0xFFFF0000);
        }
        t0 = (((struct o3850_int *)(a4))->v);
        if (((int)t0 > (int)0x16C) || ((int)t0 < (int)0xFFFFFE94)) {
            if ((int)((((struct o3850_int *)(a4))->v)) > 0) {
                (((struct o3850_uint *)(a4))->v) = 0x16C;
            } else {
                (((struct o3850_uint *)(a4))->v) = 0xFFFFFE94;
            }
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((((struct o3850_short *)(a4))->v)));
        }
        t0 = 0x16C;
    }
    FUN_0c037bf6(a4, t0);
    t0 = ((int (*)(int))(FUN_0c085f66))(a4);
    if (t0 == 0) {
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        FUN_0c081dfc(a4);
        return FUN_0c085d0c(a4);
    }
    if (((((struct o22_short *)(a4))->v)) != 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            t0 = ((int (*)(int))(FUN_0c085f66))(a4);
            if (t0 == 0) {
                FUN_0c081dfc(a4);
            }
            if ((*(signed char *)((a4 + 0x371D))) == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x1E, 0xFFFFFFFF, 0x3, 0x1E);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            return 0x16;
        }
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) * 10.0f);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
