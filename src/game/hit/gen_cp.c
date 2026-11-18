/* Straight-line functions with calls and guards (batch gen_cp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o37D4_float { char p[0x37D4]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c0752a8(int);
int FUN_0c07a6aa(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c081dfc(int);
int FUN_0c085d0c(int);
int FUN_0c085f66(int);
int FUN_0c08e382(int);
int FUN_0c150be8(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08856c(int a4, int a5, int a6, int a7);
int FUN_0c0782ec(int a4);

int FUN_0c08856c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c085f66(a4);
    if (t0 == 0) {
        FUN_0c081dfc(a4);
        (((struct o5C_float *)(a4))->v) = ((((struct o37D4_float *)(a4))->v));
        return FUN_0c085d0c(a4);
    }
    if ((*(signed char *)((a4 + 0x17))) == 1) {
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
        t1 = t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return ((int (*)(int, int, int, int))(0xC08851E))(a4, t1, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0883F2))(a4, t1, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC088398))(a4, t1, a6, a7);
}

int FUN_0c0782ec(int a4)
{
    register int t0;

    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
            FUN_0c037bf6(a4);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        }
        return FUN_0c07a6aa(a4);
    }
    (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC078440)->v));
    (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC078440)->v));
    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
    FUN_0c07db58(a4);
    FUN_0c08e382(a4);
    t0 = *(signed char *)((a4 + 0x135));
    if (t0 != 2) {
        return FUN_0c150be8((a4 + 0x28), (*(int *)((a4 + 0x38))));
    }
    return t0;
}
