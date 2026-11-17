/* game/player: functions 0C0B1C5C-0C0B4AFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int math_mat_get_translate(int, int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0b2888(int, int, int);
int FUN_0c0b2ac2(int);
int FUN_0c0b3a4c(int, int, int);
int FUN_0c0b3a7e(int, int, int);
int FUN_0c145c2c(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
int math_atan2_angle16(float, float);
int nlCalcVector(int, int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c17c450(int);
int FUN_0c0b3aac(int a4);

int FUN_0c0b3aac(int a4)
{
    int stk[11];
    register int t0;
    register int t10;
    register float u19;
    register float u20;
    register float u21;
    register float t22;
    register float u23;
    register int t30;
    register int t46;
    register int t53;
    register int t55;
    register int t75;
    register int t83;
    register int t116;
    register float u125;
    register float u126;
    register float u127;
    register float t128;
    register float u129;
    register int t137;
    register int t167;
    register int t168;
    register int t181;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    math_mat_get_translate((((((struct oD4_int *)(a4))->v)) + 0x28), (((int)stk + 12) + 0x14));
                    FUN_0c0e2390((((int)stk + 12) + 0x14), ((*(int *)((a4 + 0x10))) + 0x28), (((int)stk + 12) + 0x14));
                    FUN_0c17c450((((int)stk + 12) + 0x14));
                    (((struct o3850_uint *)(a4))->v) = (math_atan2_angle16((*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 40)))));
                    (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) & 0xFFFF);
                    t10 = *(int *)((a4 + 0x38));
                    *(unsigned int *)((a4 + 0x38)) = (t10 & 0xFFFF);
                    (((struct o3868_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) - (t10 & 0xFFFF));
                    FUN_0c0b3a4c((0x3868 + a4), 0x2000, 0xFFFFE000);
                    FUN_0c0b3a7e((0x26A4 + a4), ((((struct o3868_int *)(a4))->v)), 0x38E);
                    nlPushMatrix((((0x468 + a4) + 0x90) + 0x28));
                    nlInvertMatrix(0x0);
                    nlCalcVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                    nlPopMatrix(0x1);
                    u19 = *(float *)(((int)stk + 20));
                    u20 = *(float *)(((int)stk + 28));
                    u21 = (u20 * u20);
                    u21 = u21 + u19 * u19;
                    t22 = math_signed_sqrt(u21);
                    u23 = t22;
                    if (t22 == 0.0f) {
                        u23 = 9.99999975e-06f;
                    }
                    *(unsigned int *)(((int)stk + 12)) = (unsigned short)(math_atan_angle16(((-(*(float *)(((int)stk + 24)))) / u23)));
                    FUN_0c0b3a4c(((int)stk + 12), 0x2000, 0xFFFFE000);
                    FUN_0c0b3a7e((0x26A0 + a4), (*(int *)(((int)stk + 12))), 0x222);
                    t30 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t30 + 0x1);
                    if (((short)(t30 + 0x1) & 3) == 0) {
                        FUN_0c145c2c((*(signed char *)((a4 + 0x1))));
                    }
                    (((struct o8C_float *)(((0x468 + a4) + 0x90)))->v) = (((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) + 1.0f);
                    if (8.0f > ((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v))) {
                    } else {
                        (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 8.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0x3;
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    }
                    FUN_0c037bf6(a4);
                    t181 = (FUN_0c038362(a4));
                } else {
                    if (t0 == 4) {
                        FUN_0c037bf6(a4);
                        t46 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t46 - 1);
                        if ((int)(short)(t46 - 1) > 0) {
                            t181 = (FUN_0c038362(a4));
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = 0xA;
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            t181 = 0x16;
                        }
                    } else {
                        if (t0 == 5) {
                            FUN_0c037bf6(a4);
                            t53 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t53 - 1);
                            if ((int)(short)(t53 - 1) <= 0) {
                                (((struct o37B0_float *)(a4))->v) = 1.0f;
                                *(int *)((int)stk + 8) = 0x1;
                                *(int *)((int)stk + 4) = 0x1;
                                t55 = *(signed char *)((a4 + 0x1));
                                *(unsigned int *)(((int)stk + 16)) = t55;
                                *(int *)((int)stk + 0) = t55;
                                FUN_0c07e79c(a4, (*(int *)(((int)stk + 16))), 0x1, 0x1, t55, 0x1, 0x1);
                                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                t181 = 0x16;
                            } else {
                                t181 = (FUN_0c038362(a4));
                            }
                        } else {
                            if (t0 == 6) {
                                (((struct o8C_float *)(((0x468 + a4) + 0x90)))->v) = (((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) - 1.0f);
                                if (!(((((struct o8C_float *)(((0x468 + a4) + 0x90)))->v)) > 0.0f)) {
                                    (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 0.0f;
                                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                }
                                FUN_0c037bf6(a4);
                                t181 = (FUN_0c038362(a4));
                            } else {
                                if (t0 == 7) {
                                    FUN_0c0b3a7e((0x26A4 + a4), 0x0, 0x38E);
                                    FUN_0c0b3a7e((0x26A0 + a4), 0x0, 0x38E);
                                    t75 = (((struct o4E0_int *)(a4))->v);
                                    (((struct o4E0_uint *)(a4))->v) = (t75 - 0x111);
                                    if ((int)(t75 - 0x111) <= 0) {
                                        (((struct o4E0_uint *)(a4))->v) = 0x0;
                                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                                    }
                                    FUN_0c037bf6(a4);
                                    t181 = (FUN_0c038362(a4));
                                } else {
                                    t83 = FUN_0c037bf6(a4);
                                    if ((unsigned char)t83 != 0) {
                                        t181 = (FUN_0c0b2888(a4, 0x0, 0x0));
                                    } else {
                                        t181 = (FUN_0c038362(a4));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                math_mat_get_translate((((((struct oD4_int *)(a4))->v)) + 0x28), (((int)stk + 12) + 0x14));
                FUN_0c0e2390((((int)stk + 12) + 0x14), ((*(int *)((a4 + 0x10))) + 0x28), (((int)stk + 12) + 0x14));
                FUN_0c17c450((((int)stk + 12) + 0x14));
                (((struct o3850_uint *)(a4))->v) = (math_atan2_angle16((*(float *)(((int)stk + 32))), (*(float *)(((int)stk + 40)))));
                (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) & 0xFFFF);
                t116 = *(int *)((a4 + 0x38));
                *(unsigned int *)((a4 + 0x38)) = (t116 & 0xFFFF);
                (((struct o3868_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) - (t116 & 0xFFFF));
                FUN_0c0b3a4c((0x3868 + a4), 0x2000, 0xFFFFE000);
                FUN_0c0b3a7e((0x26A4 + a4), ((((struct o3868_int *)(a4))->v)), 0x1C7);
                nlPushMatrix((((0x468 + a4) + 0x90) + 0x28));
                nlInvertMatrix(0x0);
                nlCalcVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                nlPopMatrix(0x1);
                u125 = *(float *)(((int)stk + 20));
                u126 = *(float *)(((int)stk + 28));
                u127 = (u126 * u126);
                u127 = u127 + u125 * u125;
                t128 = math_signed_sqrt(u127);
                u129 = t128;
                if (t128 == 0.0f) {
                    u129 = 9.99999975e-06f;
                }
                *(unsigned int *)(((int)stk + 12)) = (unsigned short)(math_atan_angle16(((-(*(float *)(((int)stk + 24)))) / u129)));
                FUN_0c0b3a4c(((int)stk + 12), 0xAAA, 0xFFFFE000);
                FUN_0c0b3a7e((0x26A0 + a4), (*(int *)(((int)stk + 12))), 0x111);
                FUN_0c037bf6(a4);
                t137 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t137 - 1);
                if ((int)(short)(t137 - 1) > 0) {
                    t181 = (FUN_0c038362(a4));
                } else {
                    FUN_0c059e60(a4, 0x28);
                    *(unsigned short *)((a4 + 0x1C)) = 0x3;
                    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                    t181 = 0x16;
                }
            }
        } else {
            FUN_0c0b2ac2(a4);
            (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x111);
            if ((int)((((struct o4E0_int *)(a4))->v)) < (int)0x2000) {
            } else {
                (((struct o4E0_uint *)(a4))->v) = 0x2000;
                *(unsigned short *)((a4 + 0x1C)) = 0x30;
                *(unsigned short *)((a4 + 0x1E)) = 0x30;
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            }
            FUN_0c037bf6(a4);
            t181 = (FUN_0c038362(a4));
        }
    } else {
        (((struct o37B0_float *)(a4))->v) = 1.0f;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x1;
        t167 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 16)) = t167;
        t168 = t167;
        *(int *)((int)stk + 0) = t168;
        FUN_0c07e79c(a4, t167, 0x1, 0x0, t168, 0x1, 0x0);
        *(unsigned short *)((((0x468 + a4) + 0x90) + 0x6)) = 0x1F;
        (((struct o88_float *)(((0x468 + a4) + 0x90)))->v) = 1.0f;
        (((struct o84_float *)(((0x468 + a4) + 0x90)))->v) = 1.0f;
        (((struct o8C_float *)((0x90 + (0x468 + a4))))->v) = 0.0f;
        FUN_0c059e60(a4, 0x5);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c0b2ac2(a4);
        (((struct o4E0_uint *)(a4))->v) = (((((struct o4E0_int *)(a4))->v)) + 0x111);
        if ((int)((((struct o4E0_int *)(a4))->v)) < (int)0x2000) {
        } else {
            (((struct o4E0_uint *)(a4))->v) = 0x2000;
            *(unsigned short *)((a4 + 0x1C)) = 0x30;
            *(unsigned short *)((a4 + 0x1E)) = 0x30;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        FUN_0c037bf6(a4);
        t181 = (FUN_0c038362(a4));
    }
    return t181;
}
