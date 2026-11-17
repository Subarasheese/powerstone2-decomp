/* game/unsorted: functions 0C12B034-0C12B50E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(int, int, int);
int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4);

int FUN_0c12b034(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t7;
    register int t12;
    register float u17;
    register float u18;
    register float u21;
    register float u22;
    register float u23;
    register float u27;
    register float u29;
    register float t30;
    register int t40;
    register int t42;
    register int t43;
    register int t51;
    register int t53;
    register int t54;
    register int t58;
    register float t60;
    register float u63;
    register float u70;
    register int t86;
    register int t90;
    register int t103;
    register int t106;
    register int t107;
    register int t114;
    register float u115;
    register int t116;
    register float u117;
    register int t118;
    register int t184;
    register int t185;
    register int t194;
    register int t199;
    register float t201;
    register float u204;
    register float u211;
    register int t221;
    register int t226;
    register int t15;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t7 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t7 - 1);
            t226 = (short)(t7 - 1);
            if ((short)(t7 - 1) != 0) {
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t226 = 0x14;
            }
        } else {
            if (t0 == 2) {
                t12 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t12 - 1);
                t226 = (short)(t12 - 1);
                if ((short)(t12 - 1) != 0) {
                } else {
                    *(volatile int *)((a4 + 0x10));
                    FUN_0c187798((((int)stk + 4) + 0x8), 0x3C, a6);
                    (((struct o4_float *)(t15))->v) = (((((struct o4_float *)(t15))->v)) + 200.0f);
                    u17 = *(float *)((t15 + 0x0));
                    u18 = (((struct o28_float *)(a4))->v);
                    *(float *)(((int)stk + 8)) = (((((struct o4_float *)(t15))->v)) - ((((struct o2C_float *)(a4))->v)));
                    u21 = (((struct o30_float *)(a4))->v);
                    u22 = (((struct o8_float *)(t15))->v);
                    u23 = (u17 - u18);
                    if ((u17 - u18) == 0.0f) {
                        u23 = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    u27 = (u22 - u21);
                    if ((u22 - u21) == 0.0f) {
                        u27 = 9.99999997e-07f;
                    }
                    u29 = (u27 * u27);
                    u29 = u29 + u23 * u23;
                    t30 = math_signed_sqrt(u29);
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-t30) / (*(float *)(((int)stk + 8))))));
                    if (0.0f > (*(float *)(((int)stk + 8)))) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t40 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
                    *(int *)((int)stk + 0) = t40;
                    t42 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
                    t43 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t43 + (int)(((float)((t42 + t40) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x34)) = (-(unsigned short)(t43 + (int)(((float)((t42 + t40) + 0x50) * 65536.0f) / 360.0f)));
                    *(unsigned int *)(((int)stk + 4)) = (math_atan_angle16(((-u27) / u23)));
                    if (0.0f > u23) {
                        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x8000);
                    }
                    t51 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
                    *(int *)((int)stk + 0) = t51;
                    t53 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
                    t54 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t54 + (int)(((float)((t53 + t51) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t54 + (int)(((float)((t53 + t51) + 0x50) * 65536.0f) / 360.0f));
                    *(unsigned int *)((a4 + 0x3C)) = (int)(float)((int)((int)(FUN_0c179ac0()) % (int)0x168));
                    t58 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                    t60 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                    *(float *)(((int)stk + 0)) = ((float)(t58 + 0x3C) * t60);
                    u63 = ((float)(t58 + 0x3C) * t60);
                    (((struct o4C_float *)(a4))->v) = (u63 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    (((struct o50_float *)(a4))->v) = ((float)(t58 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    u70 = ((float)(t58 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                    (((struct o54_float *)(a4))->v) = (u70 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t226 = 0x14;
                }
            } else {
                if (t0 == 3) {
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    t86 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t86 - 1);
                    t226 = (short)(t86 - 1);
                    if ((short)(t86 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o14_uchar *)(a4))->v) = 0x4;
                        t226 = 0x14;
                    }
                } else {
                    if (t0 == 4) {
                        t90 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t90 - 1);
                        if ((short)(t90 - 1) == 0) {
                            (((struct o14_uchar *)(a4))->v) = 0x7;
                        }
                        if (((((struct o404_int *)(a4))->v)) != 0) {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o14_uchar *)(a4))->v) = 0x5;
                        }
                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                        t226 = 0x30;
                    } else {
                        if (t0 == 5) {
                            t103 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t103 - 1);
                            t226 = (short)(t103 - 1);
                            if ((short)(t103 - 1) == 0) {
                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
                                *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
                                t106 = (((struct oC4_int *)(a4))->v);
                                (((struct o20_float *)(t106))->v) = 1.0f;
                                (((struct o1C_float *)(t106))->v) = 1.0f;
                                (((struct o18_float *)(t106))->v) = 1.0f;
                                (((struct o14_float *)(t106))->v) = 1.0f;
                                t107 = (((struct oC8_int *)(a4))->v);
                                (((struct o20_float *)(t107))->v) = 1.0f;
                                (((struct o1C_float *)(t107))->v) = 1.0f;
                                (((struct o18_float *)(t107))->v) = 1.0f;
                                (((struct o14_float *)(t107))->v) = 1.0f;
                                *(unsigned short *)((a4 + 0x1C)) = 0x14;
                                (((struct o14_uchar *)(a4))->v) = 0x6;
                                t226 = 0x14;
                            }
                        } else {
                            if (t0 == 6) {
                                t114 = (((struct oC4_int *)(a4))->v);
                                u115 = (((struct o20_float *)(t114))->v);
                                (((struct o20_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o1C_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o18_float *)(t114))->v) = (u115 - 0.0500000007f);
                                (((struct o14_float *)(t114))->v) = (u115 - 0.0500000007f);
                                t116 = (((struct oC8_int *)(a4))->v);
                                u117 = (((struct o20_float *)(t116))->v);
                                (((struct o20_float *)(t116))->v) = (u117 - 0.0500000007f);
                                (((struct o1C_float *)(t116))->v) = (u117 - 0.0500000007f);
                                (((struct o18_float *)(t116))->v) = (u117 - 0.0500000007f);
                                (((struct o14_float *)(t116))->v) = (u117 - 0.0500000007f);
                                t118 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t118 - 1);
                                t226 = (short)(t118 - 1);
                                if ((short)(t118 - 1) == 0) {
                                    (((struct o14_uchar *)(a4))->v) = 0x7;
                                    t226 = 0x14;
                                }
                            } else {
                                t226 = t0;
                                if (t0 == 7) {
                                    t226 = (FUN_0c03f346(a4, 0x3C, a6, a7));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        t184 = *(int *)((a4 + 0x10));
        t185 = *(int *)((t184 + 0x10));
        *(volatile float *)((t184 + 0x28));
        *(volatile float *)((t185 + 0x28));
        *(volatile float *)((t185 + 0x2C));
        *(volatile float *)((t184 + 0x2C));
        *(volatile float *)((t185 + 0x30));
        *(volatile float *)((t184 + 0x30));
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFC000;
        t194 = ((int)((int)(FUN_0c179ac0()) % (int)0xA));
        *(int *)((int)stk + 0) = t194;
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (int)(((float)((((int)((int)(FUN_0c179ac0()) % (int)0xA)) + t194) - 10) * 65536.0f) / 360.0f));
        t199 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
        t201 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        *(float *)(((int)stk + 0)) = ((float)(t199 + 0x3C) * t201);
        u204 = ((float)(t199 + 0x3C) * t201);
        (((struct o4C_float *)(a4))->v) = (u204 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o50_float *)(a4))->v) = ((float)(t199 + 0x3C) * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        u211 = ((float)(t199 + 0x3C) * (math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u211 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        FUN_0c059e60((*(int *)((a4 + 0x10))), 0x24);
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t221 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t221 - 1);
        t226 = (short)(t221 - 1);
        if ((short)(t221 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t226 = 0x14;
        }
    }
    return t226;
}
