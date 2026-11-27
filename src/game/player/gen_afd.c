/* Straight-line functions with calls and guards (batch gen_afd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
struct o37E8_float { char p[0x37E8]; float v; };
struct o37EC_float { char p[0x37EC]; float v; };
struct o37F0_float { char p[0x37F0]; float v; };
struct o3858_uint { char p[0x3858]; unsigned int v; };
struct o385C_uint { char p[0x385C]; unsigned int v; };
struct o3860_uint { char p[0x3860]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c037bf6(int);
int FUN_0c05253c(int, int, int, int, int, int);
int FUN_0c059f20(int, int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int);
int FUN_0c07b8c2(int a4, int a5, int a6, int a7);

int FUN_0c07b8c2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct o3770_int *)(a4))->v);
    if ((*(signed char *)((t0 + 0x14))) != 2) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    if ((*(signed char *)((t0 + 0x3729))) != 3) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x5D, 0xFFFFFFFF, 0x4, 0x5D);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        (((struct o372B_uchar *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = (((((struct oE4_int *)(((((struct o3770_int *)(a4))->v))))->v)) + 0x28);
        (((struct o37E8_float *)(a4))->v) = 0.0f;
        (((struct o37EC_float *)(a4))->v) = 0.0f;
        (((struct o37F0_float *)(a4))->v) = (((((struct o378C_float *)(((((struct o3770_int *)(a4))->v))))->v)) * 180.0f);
        (((struct o3858_uint *)(a4))->v) = 0x8000;
        (((struct o385C_uint *)(a4))->v) = 0x0;
        (((struct o3860_uint *)(a4))->v) = 0x0;
        FUN_0c037bf6(a4);
        (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3770_int *)(a4))->v))))->v));
        (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)(((((struct o3770_int *)(a4))->v))))->v));
        (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3770_int *)(a4))->v))))->v));
        *(unsigned int *)((a4 + 0x38)) = (*(int *)((((((struct o3770_int *)(a4))->v)) + 0x38)));
        (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
        return 0x3770;
    } else {
        if (t0 != 2) {
            (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
            return 0x3770;
        }
        (((struct oA4_uint *)(a4))->v) = (((((struct oE4_int *)(((((struct o3770_int *)(a4))->v))))->v)) + 0x28);
        math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (a4 + 0x28));
        math_mat_transform_vector((0x37E8 + a4), ((((struct oA4_int *)(a4))->v)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o37E8_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o37EC_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o37F0_float *)(a4))->v)));
        (((struct oA4_uint *)(a4))->v) = 0x0;
        FUN_0c07db58(a4);
        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
        FUN_0c05253c(0x3, 0x1, 0x14, 0xA, 0x14, 0x0);
        t0 = *(signed char *)((0x3721 + ((((struct o3770_int *)(a4))->v))));
        t1 = 0x6F;
        if ((unsigned char)t0 != 48) {
            t1 = 0x9D;
            if ((unsigned char)t0 != 49) {
                t1 = 0x9E;
                if ((unsigned char)t0 != 50) {
                    t1 = 0x9F;
                    if ((unsigned char)t0 != 0xCE) {
                        t1 = 0x6F;
                    }
                }
            }
        }
        return FUN_0c073ed0(((((struct o3770_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD18) + (((t1 << 2) + t1) << 2)));
    }
}
