/* Straight-line functions with calls and guards (batch gen_aer): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085d0c(int);
int FUN_0c0bb6ac(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c0c3258(int, int);
int FUN_0c11f9c8(int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c082032(int a4, int a5, int a6, int a7, float f4);
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c082032(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];
    int R1004;
    int R1008;
    int R1012;
    int t1;
    int t10;
    int t12;
    int t45;
    int t70;
    int t65;
    int t55;
    int t5;
    int t71;
    int t56;
    int t53;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xA;
    FUN_0c081dfc(a4, a5, a6, a7);
    t1 = *(signed char *)(((int)stk + 12));
    if (t1 != 0) {
        if (t1 == 1) {
            if (((((struct o3768_int *)(a4))->v)) != 0) {
                t5 = FUN_0c0c3258(a4, ((((struct o3768_int *)(a4))->v)));
                if (t5 != 0) {
                    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
                    t10 = 0x31;
                    if ((*(signed char *)((0xC2738BD + ((unsigned short)(unsigned char)(*(signed char *)(a4 + 0x3721)) * (unsigned short)0x34)))) == 11) {
                        t10 = 0x17;
                    }
                    t12 = t10;
                    R1012 = t12;
                    R1008 = 0x2;
                    R1004 = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, t10, 0xFFFFFFFF, 0x2, t12);
                    FUN_0c059df2((*(signed char *)(a4 + 0x1)), 0xE);
                    FUN_0c07c4b0((*(signed char *)(a4 + 0x1)), 0x5);
                    FUN_0c0bb6ac(a4);
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    return 0x15;
                }
                return FUN_0c085d0c(a4);
            }
            return FUN_0c085d0c(a4);
        }
        if (t1 == 2) {
            (((struct o38_uint *)(a4))->v) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_sin_angle16(((((struct o38_int *)(a4))->v)))) * 130.0f)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v)) - (((math_cos_angle16(((((struct o38_int *)(a4))->v)))) * 130.0f)));
            R1012 = 0x2C;
            R1008 = 0x2;
            R1004 = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2C, 0xFFFFFFFF, 0x2, 0x2C);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            return 0x15;
        }
        return FUN_0c085d0c(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4);
    }
    FUN_0c059df2((*(signed char *)(a4 + 0x1)), 0xE);
    if ((*(signed char *)((0xC535BB8 + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938)))) == 0) {
        FUN_0c05aaf6((0x9B + (*(signed char *)(a4 + 0x1))));
    }
    t45 = *(signed char *)((((((struct o3768_int *)(a4))->v)) + 0x41C));
    if (((unsigned char)t45 != 0xC3) && ((unsigned char)t45 != 0xC5)) {
        FUN_0c059e60(a4, 0xE);
    }
    t53 = *(signed char *)((0x41C + ((((struct o3768_int *)(a4))->v))));
    if ((unsigned char)t53 != 71) {
        if ((unsigned char)t53 != 0xC9) {
            t55 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
            if (t55 == 0) {
                return FUN_0c085d0c(a4);
            }
            t56 = (((struct o3768_int *)(a4))->v);
            *(unsigned int *)(((int)stk + 12)) = t56;
            FUN_0c11f9c8((*(signed char *)(a4 + 0x1)), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x41C))), ((((struct o24_short *)(t56))->v)));
            FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
            return FUN_0c07e868(a4, 0xA);
        }
        t65 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
        if (t65 == 0) {
            return FUN_0c085d0c(a4);
        }
        FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
        R1012 = 0xE;
        R1008 = 0x3;
        R1004 = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xE, 0xFFFFFFFF, 0x3, 0xE);
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x16;
    }
    t70 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x0, a4);
    if (t70 == 0) {
        return FUN_0c085d0c(a4);
    }
    t71 = (((struct o3768_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 12)) = t71;
    FUN_0c11f9c8((*(signed char *)(a4 + 0x1)), (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 12))) + 0x41C))), ((((struct o24_short *)(t71))->v)));
    FUN_0c081ee8(a4, ((((struct o3768_int *)(a4))->v)));
    R1012 = 0xB0;
    R1008 = 0x3;
    R1004 = 0xFFFFFFFF;
    return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB0, 0xFFFFFFFF, 0x3, 0xB0));
}
