/* game/unsorted: functions 0C129EC4-0C12AE50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064f02(int);
int FUN_0c07d1fc(int);
int FUN_0c07e2f4(int, int);
int FUN_0c1297bc(int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c12a3b8(int a4, int a5, int a6);

int FUN_0c12a3b8(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t7;
    register int t9;
    register int t13;
    register int t17;
    register int t21;
    register float u33;
    register float t35;
    register float u38;
    register float u40;
    register float u44;
    register float t46;
    register float u49;
    register int t50;
    register int t63;
    register int t64;
    register float u69;
    register float t71;
    register float u74;
    register float u76;
    register float u80;
    register float t82;
    register float u85;
    register int t86;
    register int t87;
    register int t89;
    register int t102;
    register int t106;
    register int t107;
    register int t109;
    register int t127;
    register float u128;
    register int t135;
    register float u139;
    register int t140;
    register int t143;
    register int t146;
    register int t149;
    register int t153;
    register int t157;
    register int t161;
    register int t165;
    register int t182;
    register int t186;
    register float u195;
    register int t196;
    register int t200;
    register int t204;
    register int t208;
    register int t220;
    register int t246;
    register int t228;
    register int t229;
    register int t230;
    register int t288;
    register float u290;
    register int t293;
    register int t312;
    register int t315;
    register float u317;
    register float u318;
    register float u319;
    register float t320;
    register int t322;
    register int t325;
    register int t336;
    register int t340;
    register int t344;
    register int t348;
    register int t352;
    register float u354;
    register float t356;
    register float u359;
    register float u361;
    register float u365;
    register float t367;
    register float u370;
    register int t371;
    register int t372;
    register int t399;
    register int t434;
    register int t459;
    register int t276;
    register int t269;
    float u166;
    register int t261;
    register int t253;
    register int t249;
    register int t242;
    register int t243;
    register int t295;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    t7 = (((struct oC4_int *)(a4))->v);
                    (((struct o78_uint *)(t7))->v) = (((((struct o78_int *)(t7))->v)) + 0xB6);
                    t9 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x84 + t9);
                    (((struct o84_float *)(t9))->v) = ((((((struct o40_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                    t13 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x88 + t13);
                    (((struct o88_float *)(t13))->v) = ((((((struct o44_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                    t17 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x8C + t17);
                    (((struct o8C_float *)(t17))->v) = ((((((struct o48_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                    t21 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x80 + t21);
                    (((struct o80_uint *)(t21))->v) = (((((struct o80_int *)(t21))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x11)) * 65536.0f) / 360.0f));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    if ((*(signed char *)((a4 + 0x131))) != 0) {
                        (((struct o131_uchar *)(a4))->v) = 0x0;
                        u33 = *(float *)((0xC2A1004 + (((((struct o22_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u33;
                        t35 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                        *(float *)(((int)stk + 0)) = (u33 * t35);
                        u38 = (u33 * t35);
                        (((struct o4C_float *)(a4))->v) = (u38 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                        u40 = *(float *)((0xC2A1004 + (((((struct o22_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u40;
                        (((struct o50_float *)(a4))->v) = (u40 * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                        u44 = *(float *)((0xC2A1004 + (((((struct o22_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u44;
                        t46 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                        *(float *)(((int)stk + 0)) = (u44 * t46);
                        u49 = (u44 * t46);
                        (((struct o54_float *)(a4))->v) = (u49 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                        t50 = FUN_0c07d1fc(a4);
                        if ((signed char)t50 != 0) {
                            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                        }
                    }
                    t63 = *(short *)((a4 + 0x1C));
                    t64 = ((~(((~t63) + 0x1) & 0x7)) + 0x1);
                    if ((int)t63 >= 0) {
                        t64 = (t63 & 0x7);
                    }
                    if (t64 == 0) {
                        if ((int)((((struct o20_short *)(a4))->v)) < (int)0xE) {
                            u69 = *(float *)((0xC2A0FF4 + (((((struct o22_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u69;
                            t71 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                            *(float *)(((int)stk + 0)) = (u69 * t71);
                            u74 = (u69 * t71);
                            (((struct o4C_float *)(a4))->v) = (u74 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                            u76 = *(float *)((0xC2A0FF4 + (((((struct o22_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u76;
                            (((struct o50_float *)(a4))->v) = (u76 * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                            u80 = *(float *)((0xC2A0FF4 + (((((struct o22_short *)(a4))->v)) << 2)));
                            *(float *)(((int)stk + 0)) = u80;
                            t82 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                            *(float *)(((int)stk + 0)) = (u80 * t82);
                            u85 = (u80 * t82);
                            (((struct o54_float *)(a4))->v) = (u85 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                            t86 = *(short *)((a4 + 0x1C));
                            t87 = ((~(((~t86) + 0x1) & 0xF)) + 0x1);
                            if ((int)t86 >= 0) {
                                t87 = (t86 & 0xF);
                            }
                            t89 = 0x64;
                            if (t87 == 0) {
                                t89 = 0x63;
                            }
                            FUN_0c07e2f4(a4, t89);
                        } else {
                            FUN_0c07e2f4(a4, 0x65);
                        }
                    }
                    t102 = FUN_0c064f02(a4);
                    if (t102 == 0) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x1;
                    }
                    if (((((struct o20_short *)(a4))->v)) != 14) {
                        t106 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t106 - 1);
                        if ((short)(t106 - 1) != 0) {
                            t107 = FUN_0c064f02(a4);
                            t276 = t107;
                            if (t107 == 0) {
                            } else {
                                t109 = *(short *)((a4 + 0x1E));
                                t276 = t109;
                                if (t109 == 0) {
                                } else {
                                    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t276 = 0x14;
                                }
                            }
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t276 = 0x14;
                        }
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t276 = 0x14;
                    }
                } else {
                    if (t0 == 4) {
                        *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
                        *(int *)((int)stk + 0) = (0x48 + a4);
                        t127 = (int)((int)(FUN_0c179ac0()) % (int)0x64);
                        u128 = (((struct o48_float *)(a4))->v);
                        (((struct o48_float *)(a4))->v) = (u128 + (((float)t127 / 1000.0f) + -0.050999999f));
                        (((struct o44_float *)(a4))->v) = (u128 + (((float)t127 / 1000.0f) + -0.050999999f));
                        (((struct o40_float *)(a4))->v) = (u128 + (((float)t127 / 1000.0f) + -0.050999999f));
                        (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
                        (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
                        (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
                        t135 = (((struct oC8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x80 + t135);
                        (((struct o80_uint *)(t135))->v) = (((((struct o80_int *)(t135))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x11)) * 65536.0f) / 360.0f));
                        u139 = (((struct o48_float *)(a4))->v);
                        (((struct o48_float *)(a4))->v) = (u139 - 0.00999999978f);
                        (((struct o44_float *)(a4))->v) = (u139 - 0.00999999978f);
                        (((struct o40_float *)(a4))->v) = (u139 - 0.00999999978f);
                        t140 = (((struct oC4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x84 + t140);
                        (((struct o84_float *)(t140))->v) = (((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f) + -0.0500000007f);
                        t143 = (((struct oC4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x88 + t143);
                        (((struct o88_float *)(t143))->v) = (((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f) + -0.0500000007f);
                        t146 = (((struct oC4_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x8C + t146);
                        (((struct o8C_float *)(t146))->v) = (((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f) + -0.0500000007f);
                        t149 = (((struct oC8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x84 + t149);
                        (((struct o84_float *)(t149))->v) = ((((((struct o40_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                        t153 = (((struct oC8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x88 + t153);
                        (((struct o88_float *)(t153))->v) = ((((((struct o44_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                        t157 = (((struct oC8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x8C + t157);
                        (((struct o8C_float *)(t157))->v) = ((((((struct o48_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                        t161 = (((struct oC8_int *)(a4))->v);
                        *(int *)((int)stk + 0) = (0x80 + t161);
                        (((struct o80_uint *)(t161))->v) = (((((struct o80_int *)(t161))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x11)) * 65536.0f) / 360.0f));
                        t165 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t165 - 1);
                        t269 = 0x40;
                        if (((short)(t165 - 1) != 0) && (u166 = (((struct o40_float *)(a4))->v), !(0.100000001f > u166))) {
                        } else {
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                            (((struct o12A_ushort *)(a4))->v) = 0x0;
                            (((struct o12C_ushort *)(a4))->v) = 0x0;
                            (((struct o12E_ushort *)(a4))->v) = 0x0;
                            *(unsigned short *)((a4 + 0x1C)) = 0xF;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t269 = 0x14;
                        }
                    } else {
                        if (t0 == 5) {
                            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.200000003f);
                            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.200000003f);
                            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.200000003f);
                            (((struct o84_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o40_float *)(a4))->v));
                            (((struct o88_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o44_float *)(a4))->v));
                            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = ((((struct o48_float *)(a4))->v));
                            t182 = (((struct oC8_int *)(a4))->v);
                            *(int *)((int)stk + 0) = (0x80 + t182);
                            (((struct o80_uint *)(t182))->v) = (((((struct o80_int *)(t182))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x11)) * 65536.0f) / 360.0f));
                            (((struct o12A_ushort *)(a4))->v) = 0x0;
                            (((struct o12C_ushort *)(a4))->v) = 0x0;
                            (((struct o12E_ushort *)(a4))->v) = 0x0;
                            t186 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t186 - 1);
                            t261 = (short)(t186 - 1);
                            if ((short)(t186 - 1) != 0) {
                            } else {
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t261 = 0x14;
                            }
                        } else {
                            if (t0 == 6) {
                                *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0xB6);
                                u195 = (((struct o48_float *)(a4))->v);
                                (((struct o48_float *)(a4))->v) = (u195 - 0.00499999989f);
                                (((struct o44_float *)(a4))->v) = (u195 - 0.00499999989f);
                                (((struct o40_float *)(a4))->v) = (u195 - 0.00499999989f);
                                t196 = (((struct oC8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x84 + t196);
                                (((struct o84_float *)(t196))->v) = ((((((struct o40_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                                t200 = (((struct oC8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x88 + t200);
                                (((struct o88_float *)(t200))->v) = ((((((struct o44_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                                t204 = (((struct oC8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x8C + t204);
                                (((struct o8C_float *)(t204))->v) = ((((((struct o48_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                                t208 = (((struct oC8_int *)(a4))->v);
                                *(int *)((int)stk + 0) = (0x80 + t208);
                                (((struct o80_uint *)(t208))->v) = (((((struct o80_int *)(t208))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x11)) * 65536.0f) / 360.0f));
                                t253 = 0x40;
                                if (0.0f > ((((struct o40_float *)(a4))->v))) {
                                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                                    (((struct o12C_ushort *)(a4))->v) = 0x0;
                                    (((struct o12E_ushort *)(a4))->v) = 0x0;
                                    *(unsigned short *)((a4 + 0x1C)) = 0x5A;
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t253 = 0x14;
                                }
                            } else {
                                if (t0 == 7) {
                                    t220 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t220 - 1);
                                    t249 = (short)(t220 - 1);
                                    if ((short)(t220 - 1) == 0) {
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t249 = 0x14;
                                    }
                                } else {
                                    t246 = t0;
                                    if (t0 == 8) {
                                        t228 = (*(int *)0xC532438);
                                        t229 = 0x0;
                                        t230 = a6;
                                        for (;;) {
                                            if (t228 == 0) {
                                                break;
                                            }
                                            t230 = (*(int *)((t228 + 0xC)));
                                            if (((*(int *)((t228 + 0x4)))) == 0xC12A3B8) {
                                                t229 = (t229 + 0x1);
                                            }
                                            t228 = t230;
                                        }
                                        if ((unsigned short)t229 == 1) {
                                            FUN_0c059e60((*(int *)((a4 + 0x10))), 0x22);
                                        } else {
                                            t242 = t229;
                                            t243 = t230;
                                        }
                                        t246 = (FUN_0c03f346(a4, t242, t243));
                                    }
                                    t249 = t246;
                                }
                                t253 = t249;
                            }
                            t261 = t253;
                        }
                        t269 = t261;
                    }
                    t276 = t269;
                }
                t459 = t276;
            } else {
                if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
                    (((struct o14_uchar *)(a4))->v) = 0x6;
                    t459 = 0x14;
                } else {
                    *(volatile int *)((a4 + 0x10));
                    t288 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
                    u290 = 225.0f;
                    u290 = u290 + 1000.0f * ((((struct o44_float *)(a4))->v));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u290);
                    *(volatile int *)((a4 + 0x10));
                    t293 = ((int (*)(int))(FUN_0c187798))((((int)stk + 4) + 0xC));
                    (((struct o4_float *)(t295))->v) = (((((struct o4_float *)(t295))->v)) + ((((((((struct o44_float *)(a4))->v)) * 1000.0f) / (1.0f + 1.0f))) + 0.0f));
                    *(float *)(((int)stk + 4)) = ((*(float *)((t295 + 0x0))) - ((((struct o28_float *)(a4))->v)));
                    *(float *)(((int)stk + 12)) = (((((struct o4_float *)(t295))->v)) - ((((struct o2C_float *)(a4))->v)));
                    *(float *)(((int)stk + 8)) = (((((struct o8_float *)(t295))->v)) - ((((struct o30_float *)(a4))->v)));
                    if ((*(float *)(((int)stk + 4))) == 0.0f) {
                        *(float *)(((int)stk + 4)) = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 12))) == 0.0f) {
                        *(float *)(((int)stk + 12)) = 9.99999997e-07f;
                    }
                    if ((*(float *)(((int)stk + 8))) == 0.0f) {
                        *(float *)(((int)stk + 8)) = 9.99999997e-07f;
                    }
                    t312 = math_atan_angle16(((-(*(float *)(((int)stk + 8)))) / (*(float *)(((int)stk + 4)))));
                    t315 = t312;
                    if (0.0f > (*(float *)(((int)stk + 4)))) {
                        t315 = (t312 + 0x8000);
                    }
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t315 + 0x4000);
                    u317 = *(float *)(((int)stk + 8));
                    u318 = *(float *)(((int)stk + 4));
                    u319 = (u317 * u317);
                    u319 = u319 + u318 * u318;
                    t320 = math_signed_sqrt(u319);
                    t322 = math_atan_angle16(((-t320) / (*(float *)(((int)stk + 12)))));
                    t325 = t322;
                    if (0.0f > (*(float *)(((int)stk + 12)))) {
                        t325 = (t322 + 0x8000);
                    }
                    *(unsigned int *)((a4 + 0x34)) = ((-(unsigned short)(t325 + 0x4000)) + 0xB6);
                    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + (((*(float *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC2A0FE4) + 0x0))) / 2000.0f) / 80.0f));
                    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + (((*(float *)((((((((struct o22_short *)(a4))->v)) << 2) + 0xC2A0FE4) + 0x0))) / 2000.0f) / 80.0f));
                    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (((*(float *)(((0xC2A0FE4 + (((((struct o22_short *)(a4))->v)) << 2)) + 0x0))) / 2000.0f) / 80.0f));
                    t336 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x84 + t336);
                    (((struct o84_float *)(t336))->v) = ((((((struct o40_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                    t340 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x88 + t340);
                    (((struct o88_float *)(t340))->v) = ((((((struct o44_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                    t344 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x8C + t344);
                    (((struct o8C_float *)(t344))->v) = ((((((struct o48_float *)(a4))->v)) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x64)) / 1000.0f)) + -0.0500000007f);
                    t348 = (((struct oC8_int *)(a4))->v);
                    *(int *)((int)stk + 0) = (0x80 + t348);
                    (((struct o80_uint *)(t348))->v) = (((((struct o80_int *)(t348))->v)) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x11)) * 65536.0f) / 360.0f));
                    t352 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t352 - 1);
                    t459 = (short)(t352 - 1);
                    if ((short)(t352 - 1) != 0) {
                    } else {
                        u354 = *(float *)((0xC2A0FF4 + (((((struct o22_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u354;
                        t356 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                        *(float *)(((int)stk + 0)) = (u354 * t356);
                        u359 = (u354 * t356);
                        (((struct o4C_float *)(a4))->v) = (u359 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                        u361 = *(float *)((0xC2A0FF4 + (((((struct o22_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u361;
                        (((struct o50_float *)(a4))->v) = (u361 * (math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))));
                        u365 = *(float *)((0xC2A0FF4 + (((((struct o22_short *)(a4))->v)) << 2)));
                        *(float *)(((int)stk + 0)) = u365;
                        t367 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
                        *(float *)(((int)stk + 0)) = (u365 * t367);
                        u370 = (u365 * t367);
                        (((struct o54_float *)(a4))->v) = (u370 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
                        t371 = FUN_0c064f02(a4);
                        t372 = 0x0;
                        if (t371 == 0) {
                            t372 = 0x1;
                        }
                        *(unsigned short *)((a4 + 0x1E)) = t372;
                        (((struct o131_uchar *)(a4))->v) = 0x0;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t459 = 0x14;
                    }
                }
            }
        } else {
            if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
                (((struct o14_uchar *)(a4))->v) = 0x8;
                t459 = 0x14;
            } else {
                t399 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t399 - 1);
                t459 = (short)(t399 - 1);
                if ((short)(t399 - 1) != 0) {
                } else {
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    FUN_0c07e2f4(a4, 0x63);
                    FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
                    FUN_0c1297bc(a4, 0x1);
                    FUN_0c1297bc(a4, 0x2);
                    FUN_0c1297bc(a4, 0x3);
                    FUN_0c1297bc(a4, 0x1);
                    FUN_0c1297bc(a4, 0x2);
                    FUN_0c1297bc(a4, 0x3);
                    *(unsigned short *)((a4 + 0x1C)) = 0xF0;
                    *(unsigned short *)((a4 + 0x1E)) = 0x50;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t459 = 0x14;
                }
            }
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
            (((struct o14_uchar *)(a4))->v) = 0x8;
            t459 = 0x14;
        } else {
            t434 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t434 - 1);
            t459 = (short)(t434 - 1);
            if ((short)(t434 - 1) != 0) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c07e2f4(a4, 0x63);
                FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
                FUN_0c1297bc(a4, 0x1);
                FUN_0c1297bc(a4, 0x2);
                FUN_0c1297bc(a4, 0x3);
                FUN_0c1297bc(a4, 0x1);
                FUN_0c1297bc(a4, 0x2);
                FUN_0c1297bc(a4, 0x3);
                *(unsigned short *)((a4 + 0x1C)) = 0xF0;
                *(unsigned short *)((a4 + 0x1E)) = 0x50;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t459 = 0x14;
            }
        }
    }
    return t459;
}
