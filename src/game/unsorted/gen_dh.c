/* Straight-line functions with calls and guards (batch gen_dh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o19C8_uchar { char p[0x19C8]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o42C_short { char p[0x42C]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int, int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07d030(int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
extern int FUN_0c085f66();
int FUN_0c0c2d56(int, int, int);
int FUN_0c130364(int);
int FUN_0c1328b4(int, int);
int FUN_0c08679c(int a4, int a5, int a6, int a7);
int FUN_0c09ffce(int a4, int a5, int a6, int a7);

int FUN_0c08679c(int a4, int a5, int a6, int a7)
{
    int t0;

    if ((((unsigned short)((((struct o42C_short *)(a4))->v)) & 0x280) == 0) && (t0 = (((struct o22_short *)(a4))->v), t0 == 0)) {
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
        FUN_0c081dfc(a4);
        return FUN_0c085d0c(a4);
    }
    if (((((struct o22_short *)(a4))->v)) != 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) - 1);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 != 0) {
        if ((*(signed char *)((a4 + 0x371D))) == 2) {
            FUN_0c085cac(a4, 0xD, 0x0);
        }
        return FUN_0c070320(a4);
    }
    return FUN_0c085d0c(a4);
}

int FUN_0c09ffce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        t1 = a5;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            t2 = 0x1B;
            if ((*(signed char *)((a4 + 0x375A))) == 1) {
                t2 = 0x1C;
            }
            if (t0 == t2) {
                FUN_0c130364(a4);
                FUN_0c07d030(a4, 0x1);
            } else {
                t0 = t2;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x3) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o19C8_uchar *)(a4))->v) = 0x0;
            t1 = 0x1C;
            if ((*(signed char *)((a4 + 0x375A))) == 1) {
                t1 = 0x1D;
            }
            FUN_0c1328b4(a4, t1);
        }
    }
    if ((*(signed char *)((a4 + 0x375A))) == 1) {
        t1 = FUN_0c037bf6(a4, t0);
        if ((unsigned char)t1 != 0) {
            return FUN_0c085d0c(a4);
        }
        return FUN_0c038362(a4);
    }
    t1 = FUN_0c037bf6(a4, t0);
    if ((unsigned char)t1 == 0) {
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC0A0148);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            return 0x16;
        }
        return FUN_0c038362(a4);
    }
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = (*(float *)0xC0A0148);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
