/* Straight-line functions with calls and guards (batch gen_ny): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3868_int { char p[0x3868]; int v; };
struct o3868_uint { char p[0x3868]; unsigned int v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oD4_int { char p[0xD4]; int v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b2888(int, int, int);
int FUN_0c0b2ac2(int);
int FUN_0c0b3a4c(int, int, int);
int FUN_0c0b3a7e(int, int, int);
int FUN_0c145c2c(int);
int FUN_0c17c450(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
int math_mat_get_translate(int, int);
float math_signed_sqrt(float);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSubVector3op(int, int, int);
int FUN_0c0b3aac(int a4, int a5, int a6);
struct o10_int { char p[0x10]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c0b3aac(int a4, int a5, int a6)
{
    int stk[11];
    int t169;
    int t0;
    int t1;
    int t73;
    int t2;
    int t28;
    float t40;
    float u41;
    int t48;
    float t146;
    float u147;
    int t154;
    int t99;
    int t89;
    int t70;
    int t63;
    int t61;
    int t17;
    int t101;
    int R1012;
    int R1008;
    int R1004;
    int t155;
    int t134;
    int t93;
    int t71;
    int t64;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
    } else {
        (((struct o37B0_float *)(a4))->v) = 1.0f;
        R1012 = 0x0;
        R1008 = 0x1;
        t1 = *(signed char *)(a4 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t1;
        t2 = t1;
        R1004 = t2;
        FUN_0c07e79c(a4, t1, 0x1, 0x0, t2, 0x1, 0x0);
        *(unsigned short *)((((0x468 + a4) + 0x90) + 0x6)) = 0x1F;
        (((struct o88_float *)(((0x468 + a4) + 0x90)))->v) = 1.0f;
        (((struct o84_float *)(((0x468 + a4) + 0x90)))->v) = 1.0f;
        (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 0.0f;
        FUN_0c059e60(a4, 0x5);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        FUN_0c0b2ac2(a4);
        (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x111);
        if ((int)((((struct o4E0_int *)(a4))->v)) < (int)0x2000) {
        } else {
            (((struct o4E0_uint *)(a4))->v) = 0x2000;
            (((struct o1C_ushort *)(a4))->v) = 0x30;
            (((struct o1E_ushort *)(a4))->v) = 0x30;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        }
        t17 = ((int (*)(int))(FUN_0c037bf6))(a4);
        t169 = (FUN_0c038362(a4));
    } else {
        if (t0 != 2) {
            if (t0 == 3) {
                math_mat_get_translate((((((struct oD4_int *)(a4))->v)) + 0x28), (((int)stk + 12) + 0x14));
                nlSubVector3op((((int)stk + 12) + 0x14), (((((struct o10_int *)(a4))->v)) + 0x28), (((int)stk + 12) + 0x14));
                FUN_0c17c450((((int)stk + 12) + 0x14));
                (((struct o3850_uint *)(a4))->v) = (math_atan2_angle16((*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 40)))));
                (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) & 0xFFFF);
                t28 = (((struct o38_int *)(a4))->v);
                (((struct o38_uint *)(a4))->v) = (t28 & 0xFFFF);
                (((struct o3868_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) - (t28 & 0xFFFF));
                FUN_0c0b3a4c((0x3868 + a4), 0x2000, 0xFFFFE000);
                FUN_0c0b3a7e((0x26A4 + a4), ((((struct o3868_int *)(a4))->v)), 0x38E);
                nlPushMatrix((((0x468 + a4) + 0x90) + 0x28));
                nlInvertMatrix(0x0);
                nlCalcVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                nlPopMatrix(0x1);
                t40 = math_signed_sqrt((((*(float *)(((int)stk + 28))) * (*(float *)(((int)stk + 28)))) + (*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 20)))));
                u41 = t40;
                if (t40 == 0.0f) {
                    u41 = 9.99999975e-06f;
                }
                *(unsigned int *)(((int)stk + 12)) = (unsigned short)(math_atan_angle16(((-(*(float *)(((int)stk + 24)))) / u41)));
                FUN_0c0b3a4c(((int)stk + 12), 0x2000, 0xFFFFE000);
                FUN_0c0b3a7e((0x26A0 + a4), (*(int *)(((int)stk + 12))), 0x222);
                t48 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t48 + 0x1);
                if (((short)(t48 + 0x1) & 3) == 0) {
                    FUN_0c145c2c((*(signed char *)(a4 + 0x1)));
                }
                (((struct o8C_float *)(((0x468 + a4) + 0x90)))->v) = (((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) + 1.0f);
                if (8.0f > ((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v))) {
                } else {
                    (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 8.0f;
                    (((struct o1C_ushort *)(a4))->v) = 0x3;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                }
                t61 = ((int (*)(int))(FUN_0c037bf6))(a4);
                t169 = (FUN_0c038362(a4));
            } else {
                if (t0 == 4) {
                    t63 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                    t64 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t64 - 1);
                    if ((int)(short)(t64 - 1) > 0) {
                        t169 = (FUN_0c038362(a4));
                    } else {
                        (((struct o1C_ushort *)(a4))->v) = 0xA;
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                        t169 = 0x16;
                    }
                } else {
                    if (t0 == 5) {
                        t70 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                        t71 = (((struct o1C_short *)(a4))->v);
                        (((struct o1C_ushort *)(a4))->v) = (t71 - 1);
                        if ((int)(short)(t71 - 1) <= 0) {
                            (((struct o37B0_float *)(a4))->v) = 1.0f;
                            R1012 = 0x1;
                            R1008 = 0x1;
                            t73 = *(signed char *)(a4 + 0x1);
                            *(unsigned int *)(((int)stk + 16)) = t73;
                            R1004 = t73;
                            FUN_0c07e79c(a4, (*(int *)(((int)stk + 16))), 0x1, 0x1, t73, 0x1, 0x1);
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                            t169 = 0x16;
                        } else {
                            t169 = (FUN_0c038362(a4));
                        }
                    } else {
                        if (t0 == 6) {
                            (((struct o8C_float *)(((0x468 + a4) + 0x90)))->v) = (((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) - 1.0f);
                            if (!(((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) > 0.0f)) {
                                (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 0.0f;
                                (((struct o1C_ushort *)(a4))->v) = 0x1E;
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                            }
                            t89 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                            t169 = (FUN_0c038362(a4));
                        } else {
                            if (t0 == 7) {
                                FUN_0c0b3a7e((0x26A4 + a4), 0x0, 0x38E);
                                FUN_0c0b3a7e((0x26A0 + a4), 0x0, 0x38E);
                                t93 = (((struct o4E0_int *)(a4))->v);
                                (((struct o4E0_uint *)(a4))->v) = (t93 - 0x111);
                                if ((int)(t93 - 0x111) <= 0) {
                                    (((struct o4E0_uint *)(a4))->v) = 0x0;
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                                }
                                t99 = ((int (*)(int))(FUN_0c037bf6))(a4);
                                t169 = (FUN_0c038362(a4));
                            } else {
                                t101 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                                if ((unsigned char)t101 != 0) {
                                    t169 = (FUN_0c0b2888(a4, 0x0, 0x0));
                                } else {
                                    t169 = (FUN_0c038362(a4));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            math_mat_get_translate((((((struct oD4_int *)(a4))->v)) + 0x28), (((int)stk + 12) + 0x14));
            nlSubVector3op((((int)stk + 12) + 0x14), (((((struct o10_int *)(a4))->v)) + 0x28), (((int)stk + 12) + 0x14));
            FUN_0c17c450((((int)stk + 12) + 0x14));
            (((struct o3850_uint *)(a4))->v) = (math_atan2_angle16((*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 40)))));
            (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) & 0xFFFF);
            t134 = (((struct o38_int *)(a4))->v);
            (((struct o38_uint *)(a4))->v) = (t134 & 0xFFFF);
            (((struct o3868_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) - (t134 & 0xFFFF));
            FUN_0c0b3a4c((0x3868 + a4), 0x2000, 0xFFFFE000);
            FUN_0c0b3a7e((0x26A4 + a4), ((((struct o3868_int *)(a4))->v)), 0x1C7);
            nlPushMatrix((((0x468 + a4) + 0x90) + 0x28));
            nlInvertMatrix(0x0);
            nlCalcVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
            nlPopMatrix(0x1);
            t146 = math_signed_sqrt((((*(float *)(((int)stk + 28))) * (*(float *)(((int)stk + 28)))) + (*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 20)))));
            u147 = t146;
            if (t146 == 0.0f) {
                u147 = 9.99999975e-06f;
            }
            *(unsigned int *)(((int)stk + 12)) = (unsigned short)(math_atan_angle16(((-(*(float *)(((int)stk + 24)))) / u147)));
            FUN_0c0b3a4c(((int)stk + 12), 0xAAA, 0xFFFFE000);
            FUN_0c0b3a7e((0x26A0 + a4), (*(int *)(((int)stk + 12))), 0x111);
            t154 = ((int (*)(int))(FUN_0c037bf6))(a4);
            t155 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t155 - 1);
            if ((int)(short)(t155 - 1) > 0) {
                t169 = (FUN_0c038362(a4));
            } else {
                FUN_0c059e60(a4, 0x28);
                (((struct o1C_ushort *)(a4))->v) = 0x3;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                t169 = 0x16;
            }
        }
    }
    return t169;
}
