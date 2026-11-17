/* game/demo: functions 0C053CCC-0C0548A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o254_uint { char p[0x254]; unsigned int v; };
struct o260_float { char p[0x260]; float v; };
struct o264_uint { char p[0x264]; unsigned int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c054a62(int, int);
int FUN_0c056b68(int);
int math_atan2_angle16(int, float, float);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c054058(int a4);

int FUN_0c054058(int a4)
{
    int stk[8];
    register int t0;
    register int t1;
    register float u5;
    register float u6;
    register float u7;
    register int t21;
    register int t23;
    register int t38;
    register int t84;
    register int t43;
    register int t46;
    register int t48;
    register int t50;
    register int t51;
    register int t55;
    register int t59;
    register int t60;
    register int t64;
    register int t66;
    register float t70;
    register float u73;
    register float u74;
    register float u79;
    register int t94;
    register int t96;
    register int t98;
    register int t99;
    register int t103;
    register int t109;
    register int t111;
    register float t115;
    register float u118;
    register float u119;
    register float u124;
    register int t148;
    register int t154;
    register int t156;
    register int t158;
    register int t161;
    register int t165;
    register int t171;
    register float t175;
    register float u178;
    register float u179;
    register float t180;
    register float u184;
    register int t195;
    register float t199;
    register float u202;
    register float u203;
    register float t204;
    register float u208;
    register int t216;
    register int t220;
    register int t226;
    register float t230;
    register float u233;
    register float u234;
    register float t235;
    register float u239;
    register int t250;
    register float t254;
    register float u257;
    register float u258;
    register float t259;
    register float u263;
    register int t269;
    register int t271;
    register int t273;
    register int t274;
    register int t278;
    register int t282;
    register int t283;
    register int t287;
    register int t289;
    register float t293;
    register float u296;
    register float u297;
    register float u302;
    register int t308;
    register int t49;
    register int t97;
    register int t157;
    register int t272;

    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    if ((*(signed char *)(((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C)) + 0x0))) != 0) {
        u5 = (((struct o10_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        (((struct o10_float *)(((int)stk + 4)))->v) = (u5 - ((((struct o4_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v)));
        u6 = (((struct oC_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        u7 = (((struct o18_float *)((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C))))->v);
        (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = (u7 - u6);
        if ((u7 - u6) == 0.0f) {
            (((struct o8_float *)((((int)stk + 4) + 0x10)))->v) = 9.99999997e-07f;
        }
        *(unsigned int *)(((int)stk + 4)) = (math_atan2_angle16((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C)), ((((struct o10_float *)(((int)stk + 4)))->v)), ((((struct o8_float *)((((int)stk + 4) + 0x10)))->v))));
    } else {
        *(unsigned int *)(((int)stk + 4)) = (*(int *)(((((((((t0 << 2) << 2) << 1) + t0) << 2) + 0xC2580CC) + ((short)t1 * (short)0x2C)) + 0x28)));
    }
    t21 = *(signed char *)((a4 + 0xA));
    if (t21 != 0) {
        if (t21 == 1) {
            if ((*(signed char *)((a4 + 0xB))) != 0) {
                t23 = *(signed char *)((a4 + 0xB));
                *(unsigned char *)((a4 + 0xB)) = (t23 - 1);
                if ((int)(signed char)(t23 - 1) <= 0) {
                    *(int *)((int)stk + 0) = 0x0;
                    FUN_0c05258e(0x1, 0x14, 0x4000, 0x1E, 0x0);
                }
                FUN_0c056b68(a4);
            }
            t38 = *(signed char *)((a4 + 0xC));
            t84 = t38;
            if (t38 == (*(signed char *)0xC542252)) {
            } else {
                *(unsigned char *)((a4 + 0xC)) = (*(signed char *)0xC542252);
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                t43 = (*(signed char *)((a4 + 0xE)));
                for (;;) {
                    t43 = (t43 + 0x1);
                    if ((int)t43 > (int)0x3) {
                        t43 = 0x0;
                    }
                    if ((*(signed char *)((((t43 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                        break;
                    }
                }
                *(unsigned char *)((a4 + 0xE)) = t43;
                t46 = 0xC1B90D0;
                t48 = (0x248 + a4);
                for (;;) { t49 = *(int *)t46; t46 = (t46 + 4); if ((unsigned int)((0xC1B90D0 + 128)) < (unsigned int)t46) break; *(unsigned int *)t48 = t49; t48 = (t48 + 4); }
                t50 = FUN_0c179ac0();
                t51 = ((~(((~t50) + 0x1) & 0x3)) + 0x1);
                if ((int)t50 >= 0) {
                    t51 = (t50 & 0x3);
                }
                (((struct o264_uint *)(a4))->v) = (*(int *)((0xC1B91D0 + (t51 << 2))));
                t55 = (*(int *)(((int)stk + 4)));
                *(int *)((int)stk + 0) = t55;
                (((struct o268_uint *)(a4))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)))) + t55);
                t59 = FUN_0c179ac0();
                t60 = ((~(((~t59) + 0x1) & 0x1)) + 0x1);
                if ((int)t59 >= 0) {
                    t60 = (t59 & 0x1);
                }
                *(unsigned char *)((a4 + 0xD)) = t60;
                (((struct o260_float *)(a4))->v) = (*(float *)((0xC24151C + ((*(signed char *)((a4 + 0xD))) << 2))));
                t64 = *(signed char *)((a4 + 0xE));
                *(volatile signed char *)(((((short)t64 * (short)0x3938) + 0xC532498) + 0x2));
                t66 = *(int *)(((((short)t64 * (short)0x3938) + 0xC532498) + 0x38));
                FUN_0c187798((((short)t64 * (short)0x3938) + 0xC532498));
                (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
                t70 = math_cos_angle16(t66);
                u73 = (((struct o4_float *)(((int)stk + 4)))->v);
                u74 = ((math_sin_angle16(t66)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
                u74 = u74 + u73 * t70;
                (((struct o27C_float *)(a4))->v) = u74;
                u79 = (-((math_sin_angle16(t66)) * ((((struct o4_float *)(((int)stk + 4)))->v))));
                u79 = u79 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t66));
                (((struct o284_float *)(a4))->v) = u79;
                (((struct o254_uint *)(a4))->v) = ((*(signed char *)((a4 + 0xE))) + 0x5);
                FUN_0c054a62(a4, (0x248 + a4));
                *(int *)((int)stk + 0) = 0x0;
                FUN_0c05258e(0x63, 0x14, 0x100, 0xF, 0x0);
                t84 = (FUN_0c056b68(a4));
            }
            t308 = t84;
        } else {
            t308 = t21;
            if (t21 == 2) {
                *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) - 1);
                *(unsigned char *)((a4 + 0xB)) = 0x1E;
                t94 = 0xC1B9150;
                t96 = (0x248 + a4);
                for (;;) { t97 = *(int *)t94; t94 = (t94 + 4); if ((unsigned int)((0xC1B9150 + 128)) < (unsigned int)t94) break; *(unsigned int *)t96 = t97; t96 = (t96 + 4); }
                t98 = FUN_0c179ac0();
                t99 = ((~(((~t98) + 0x1) & 0x3)) + 0x1);
                if ((int)t98 >= 0) {
                    t99 = (t98 & 0x3);
                }
                (((struct o264_uint *)(a4))->v) = (*(int *)((0xC1B91D0 + (t99 << 2))));
                t103 = (*(int *)(((int)stk + 4)));
                *(int *)((int)stk + 0) = t103;
                (((struct o268_uint *)(a4))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)))) + t103);
                (((struct o260_float *)(a4))->v) = (*(float *)(((((((*(signed char *)((a4 + 0xD))) == 0)) ? 1 : 0) << 2) + 0xC24151C)));
                t109 = *(signed char *)((a4 + 0xE));
                *(volatile signed char *)(((((short)t109 * (short)0x3938) + 0xC532498) + 0x2));
                t111 = *(int *)(((((short)t109 * (short)0x3938) + 0xC532498) + 0x38));
                FUN_0c187798((((short)t109 * (short)0x3938) + 0xC532498));
                (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
                t115 = math_cos_angle16(t111);
                u118 = (((struct o4_float *)(((int)stk + 4)))->v);
                u119 = ((math_sin_angle16(t111)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
                u119 = u119 + u118 * t115;
                (((struct o27C_float *)(a4))->v) = u119;
                u124 = (-((math_sin_angle16(t111)) * ((((struct o4_float *)(((int)stk + 4)))->v))));
                u124 = u124 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t111));
                (((struct o284_float *)(a4))->v) = u124;
                (((struct o254_uint *)(a4))->v) = ((*(signed char *)((a4 + 0xE))) + 0x5);
                FUN_0c054a62(a4, (0x248 + a4));
                t308 = (FUN_0c056b68(a4));
            }
        }
    } else {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x2);
        *(unsigned char *)((a4 + 0xB)) = 0x1E;
        *(unsigned char *)((a4 + 0xC)) = (*(signed char *)0xC542252);
        t148 = 0x0;
        for (;;) {
            if ((*(signed char *)((((t148 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
                break;
            }
            t148 = (t148 + 0x1);
            if ((int)t148 >= (int)0x4) {
                *(unsigned char *)((a4 + 0xE)) = 0x4;
                t154 = 0xC1B90D0;
                t156 = (0x248 + a4);
                for (;;) { t157 = *(int *)t154; t154 = (t154 + 4); if ((unsigned int)((0xC1B90D0 + 128)) < (unsigned int)t154) break; *(unsigned int *)t156 = t157; t156 = (t156 + 4); }
                t158 = FUN_0c179ac0();
                if ((int)t158 >= 0) {
                    (((struct o264_uint *)(a4))->v) = (*(int *)((0xC1B91D0 + ((t158 & 0x3) << 2))));
                    t161 = (*(int *)(((int)stk + 4)));
                    *(int *)((int)stk + 0) = t161;
                    (((struct o268_uint *)(a4))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)))) + t161);
                    t165 = FUN_0c179ac0();
                    if ((int)t165 >= 0) {
                        *(unsigned char *)((a4 + 0xD)) = (t165 & 0x1);
                        t148 = 0x3938;
                        (((struct o260_float *)(a4))->v) = (*(float *)((0xC24151C + ((*(signed char *)((a4 + 0xD))) << 2))));
                        t148 = ((short)(*(signed char *)((a4 + 0xE))) * (short)t148);
                        t148 = (t148 + 0xC532498);
                        *(volatile signed char *)((t148 + 0x2));
                        t171 = *(int *)((t148 + 0x38));
                        FUN_0c187798(t148);
                        (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
                        t148 = t171;
                        t175 = math_cos_angle16(t148);
                        t148 = t171;
                        u178 = (((struct o4_float *)(((int)stk + 4)))->v);
                        u179 = ((math_sin_angle16(t148)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
                        u179 = u179 + u178 * t175;
                        (((struct o27C_float *)(a4))->v) = u179;
                        t148 = t171;
                        t180 = math_sin_angle16(t148);
                        t148 = t171;
                        u184 = (-(t180 * ((((struct o4_float *)(((int)stk + 4)))->v))));
                        u184 = u184 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t148));
                        (((struct o284_float *)(a4))->v) = u184;
                    } else {
                        *(unsigned char *)((a4 + 0xD)) = ((~(((~t165) + 0x1) & 0x1)) + 0x1);
                        t148 = 0x3938;
                        (((struct o260_float *)(a4))->v) = (*(float *)((0xC24151C + ((*(signed char *)((a4 + 0xD))) << 2))));
                        t148 = ((short)(*(signed char *)((a4 + 0xE))) * (short)t148);
                        t148 = (t148 + 0xC532498);
                        *(volatile signed char *)((t148 + 0x2));
                        t195 = *(int *)((t148 + 0x38));
                        FUN_0c187798(t148);
                        (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
                        t148 = t195;
                        t199 = math_cos_angle16(t148);
                        t148 = t195;
                        u202 = (((struct o4_float *)(((int)stk + 4)))->v);
                        u203 = ((math_sin_angle16(t148)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
                        u203 = u203 + u202 * t199;
                        (((struct o27C_float *)(a4))->v) = u203;
                        t148 = t195;
                        t204 = math_sin_angle16(t148);
                        t148 = t195;
                        u208 = (-(t204 * ((((struct o4_float *)(((int)stk + 4)))->v))));
                        u208 = u208 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t148));
                        (((struct o284_float *)(a4))->v) = u208;
                    }
                } else {
                    (((struct o264_uint *)(a4))->v) = (*(int *)((0xC1B91D0 + (((~(((~t158) + 0x1) & 0x3)) + 0x1) << 2))));
                    t216 = (*(int *)(((int)stk + 4)));
                    *(int *)((int)stk + 0) = t216;
                    (((struct o268_uint *)(a4))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)))) + t216);
                    t220 = FUN_0c179ac0();
                    if ((int)t220 >= 0) {
                        *(unsigned char *)((a4 + 0xD)) = (t220 & 0x1);
                        t148 = 0x3938;
                        (((struct o260_float *)(a4))->v) = (*(float *)((0xC24151C + ((*(signed char *)((a4 + 0xD))) << 2))));
                        t148 = ((short)(*(signed char *)((a4 + 0xE))) * (short)t148);
                        t148 = (t148 + 0xC532498);
                        *(volatile signed char *)((t148 + 0x2));
                        t226 = *(int *)((t148 + 0x38));
                        FUN_0c187798(t148);
                        (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
                        t148 = t226;
                        t230 = math_cos_angle16(t148);
                        t148 = t226;
                        u233 = (((struct o4_float *)(((int)stk + 4)))->v);
                        u234 = ((math_sin_angle16(t148)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
                        u234 = u234 + u233 * t230;
                        (((struct o27C_float *)(a4))->v) = u234;
                        t148 = t226;
                        t235 = math_sin_angle16(t148);
                        t148 = t226;
                        u239 = (-(t235 * ((((struct o4_float *)(((int)stk + 4)))->v))));
                        u239 = u239 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t148));
                        (((struct o284_float *)(a4))->v) = u239;
                    } else {
                        *(unsigned char *)((a4 + 0xD)) = ((~(((~t220) + 0x1) & 0x1)) + 0x1);
                        t148 = 0x3938;
                        (((struct o260_float *)(a4))->v) = (*(float *)((0xC24151C + ((*(signed char *)((a4 + 0xD))) << 2))));
                        t148 = ((short)(*(signed char *)((a4 + 0xE))) * (short)t148);
                        t148 = (t148 + 0xC532498);
                        *(volatile signed char *)((t148 + 0x2));
                        t250 = *(int *)((t148 + 0x38));
                        FUN_0c187798(t148);
                        (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
                        t148 = t250;
                        t254 = math_cos_angle16(t148);
                        t148 = t250;
                        u257 = (((struct o4_float *)(((int)stk + 4)))->v);
                        u258 = ((math_sin_angle16(t148)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
                        u258 = u258 + u257 * t254;
                        (((struct o27C_float *)(a4))->v) = u258;
                        t148 = t250;
                        t259 = math_sin_angle16(t148);
                        t148 = t250;
                        u263 = (-(t259 * ((((struct o4_float *)(((int)stk + 4)))->v))));
                        u263 = u263 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t148));
                        (((struct o284_float *)(a4))->v) = u263;
                    }
                }
                (((struct o254_uint *)(a4))->v) = ((*(signed char *)((a4 + 0xE))) + 0x5);
                t148 = a4;
                FUN_0c054a62(t148, (0x248 + a4));
                *(int *)((int)stk + 0) = 0x0;
                t148 = 0x63;
                FUN_0c05258e(t148, 0x14, 0x100, 0xF, 0x0);
                *(unsigned char *)((a4 + 0xC)) = (*(signed char *)0xC542252);
                t148 = a4;
                return (FUN_0c056b68(t148));
            }
        }
        *(unsigned char *)((a4 + 0xE)) = t148;
        t269 = 0xC1B90D0;
        t271 = (0x248 + a4);
        for (;;) { t272 = *(int *)t269; t269 = (t269 + 4); if ((unsigned int)((0xC1B90D0 + 128)) < (unsigned int)t269) break; *(unsigned int *)t271 = t272; t271 = (t271 + 4); }
        t273 = FUN_0c179ac0();
        t274 = ((~(((~t273) + 0x1) & 0x3)) + 0x1);
        if ((int)t273 >= 0) {
            t274 = (t273 & 0x3);
        }
        (((struct o264_uint *)(a4))->v) = (*(int *)((0xC1B91D0 + (t274 << 2))));
        t278 = (*(int *)(((int)stk + 4)));
        *(int *)((int)stk + 0) = t278;
        (((struct o268_uint *)(a4))->v) = (unsigned short)((*(int *)((0xC1B91E0 + (((int)((int)(FUN_0c179ac0()) % (int)0x5)) << 2)))) + t278);
        t282 = FUN_0c179ac0();
        t283 = ((~(((~t282) + 0x1) & 0x1)) + 0x1);
        if ((int)t282 >= 0) {
            t283 = (t282 & 0x1);
        }
        *(unsigned char *)((a4 + 0xD)) = t283;
        (((struct o260_float *)(a4))->v) = (*(float *)((0xC24151C + ((*(signed char *)((a4 + 0xD))) << 2))));
        t287 = *(signed char *)((a4 + 0xE));
        *(volatile signed char *)(((((short)t287 * (short)0x3938) + 0xC532498) + 0x2));
        t289 = *(int *)(((((short)t287 * (short)0x3938) + 0xC532498) + 0x38));
        FUN_0c187798((((short)t287 * (short)0x3938) + 0xC532498));
        (((struct o280_float *)(a4))->v) = ((((struct o4_float *)((((int)stk + 4) + 0x4)))->v));
        t293 = math_cos_angle16(t289);
        u296 = (((struct o4_float *)(((int)stk + 4)))->v);
        u297 = ((math_sin_angle16(t289)) * ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)));
        u297 = u297 + u296 * t293;
        (((struct o27C_float *)(a4))->v) = u297;
        u302 = (-((math_sin_angle16(t289)) * ((((struct o4_float *)(((int)stk + 4)))->v))));
        u302 = u302 + ((((struct o8_float *)((((int)stk + 4) + 0x4)))->v)) * (math_cos_angle16(t289));
        (((struct o284_float *)(a4))->v) = u302;
        (((struct o254_uint *)(a4))->v) = ((*(signed char *)((a4 + 0xE))) + 0x5);
        FUN_0c054a62(a4, (0x248 + a4));
        *(int *)((int)stk + 0) = 0x0;
        FUN_0c05258e(0x63, 0x14, 0x100, 0xF, 0x0);
        *(unsigned char *)((a4 + 0xC)) = (*(signed char *)0xC542252);
        t308 = (FUN_0c056b68(a4));
    }
    return t308;
}
