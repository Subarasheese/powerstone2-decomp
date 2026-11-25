/* Straight-line functions with calls and guards (batch gen_adw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
extern int FUN_0c073566();
int FUN_0c07363a(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b2888(int, int, int, int);
int FUN_0c0b3a7e(int, int, int);
int FUN_0c143dd8(int);
int FUN_0c0b47a0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0b47a0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;

    *(volatile signed char *)((a4 + 0x3729));
    
    *(volatile signed char *)((a4 + 0x3728));
    if (((int)(*(signed char *)((a4 + 0x16))) < (int)0x5) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
    } else {
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            t1 = 0x222;
        } else {
            (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = (*(signed char *)((a4 + 0x3728)));
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            t2 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t2, 0x1, 0x1, (t2), 0x1, 0x1);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        if ((t0 == 0) || (t0 == 1)) {
            (((struct o8C_float *)(((0x468 + a4) + 0x90)))->v) = (((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) - 1.0f);
            if (((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) > 0.0f) {
            } else {
                (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 0.00999999978f;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                t2 = (((struct o3770_int *)(a4))->v);
                (((struct o16_uchar *)(t2))->v) = ((*(signed char *)((t2 + 0x16))) + 0x1);
            }
            t2 = ((int (*)(int, int))(FUN_0c037bf6))(a4, t1);
            return FUN_0c038362(a4);
        } else if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    if (t0 == 5) {
                        (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x222);
                        if ((int)((((struct o4E0_int *)(a4))->v)) >= (int)0x2000) {
                            (((struct o4E0_uint *)(a4))->v) = 0x2000;
                            t1 = ((int (*)(int, int, float))(FUN_0c073566))(a4, 0x7, f4);
                            FUN_0c07363a(a4, 0x7);
                            FUN_0c143dd8(a4);
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        } else {
                            t1 = 0x222;
                        }
                        t2 = ((int (*)(int, int))(FUN_0c037bf6))(a4, t1);
                        return FUN_0c038362(a4);
                    }
                    if (t0 == 6) {
                        t0 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                        if ((int)(short)(t0 - 1) <= 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        }
                        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, 0x222, a6);
                        return FUN_0c038362(a4);
                    }
                    (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) - 0x111);
                    if ((int)((((struct o4E0_int *)(a4))->v)) <= 0) {
                        (((struct o4E0_uint *)(a4))->v) = 0x0;
                    } else {
                        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, 0x222, a6);
                        return FUN_0c038362(a4);
                    }
                } else {
                    (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) - 0x222);
                    if ((int)((((struct o4E0_int *)(a4))->v)) <= 0) {
                        (((struct o4E0_uint *)(a4))->v) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                        t0 = ((int (*)(int, int))(FUN_0c073566))(a4, 0x6);
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    } else {
                        t0 = 0x222;
                    }
                    t1 = ((int (*)(int, int))(FUN_0c037bf6))(a4, t0);
                    return FUN_0c038362(a4);
                }
            } else {
                (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x222);
                if ((int)((((struct o4E0_int *)(a4))->v)) >= (int)0x2000) {
                    (((struct o4E0_uint *)(a4))->v) = 0xAAA;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                }
                t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, 0x222, a6);
                return FUN_0c038362(a4);
            }
        } else {
            FUN_0c0b3a7e((0x26A4 + a4), 0x0, 0x38E);
            FUN_0c0b3a7e((0x26A0 + a4), 0x0, 0x38E);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
            (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) - 0x111);
            if ((int)((((struct o4E0_int *)(a4))->v)) <= 0) {
                (((struct o4E0_uint *)(a4))->v) = 0x0;
                FUN_0c059dae((*(signed char *)((((((struct o3770_int *)(a4))->v)) + 0x1))), 0x7);
                t0 = ((int (*)(int, int))(FUN_0c073566))(a4, 0x6);
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
            return FUN_0c038362(a4);
        }
    }
    return FUN_0c0b2888(a4, 0x0, 0x0, a7);
}
