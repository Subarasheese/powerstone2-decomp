/* game/unsorted: functions 0C04D76C-0C04E828, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oDC_int { char p[0xDC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c03f346(int);
int FUN_0c04e052(int, int, int, float);
int math_vec3i_add(int, int, int);
float math_cos_angle16(int);
int FUN_0c17c130(int, int, int);
extern int FUN_0c187798();
int FUN_0c04e0b0(int a4, int a5, int a6);

int FUN_0c04e0b0(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t22;
    register int t27;
    register int t30;
    register int t31;
    register float u80;
    register float u81;
    register float u87;
    register float u88;
    register float u94;
    register float u95;
    register int t120;
    register int t121;
    register int t122;
    register int t142;
    register float u194;
    register int t204;
    register int t205;
    register int t208;
    register int t209;
    register float u210;
    register float u212;
    register int t244;
    register int t245;
    register int t251;
    register int t252;
    register int t259;
    register int t261;
    register int t264;
    register int t265;
    register int t272;
    register int t273;
    register int t274;
    register int t275;
    register int t277;
    register int t290;
    register int t294;
    register int t295;
    register int t297;
    register int t307;
    register int t309;
    register int t321;
    register int t323;
    register int t325;
    register int t336;
    register int t348;
    register int t350;
    register int t361;
    register int t373;
    register int t391;
    register float u178;
    register float u183;
    register int t276;

    t0 = (((struct oC4_int *)(a4))->v);
    t2 = *(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC240DBC));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x7;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o1A_uchar *)(a4))->v) = 0x0;
        (((struct o18_uchar *)(a4))->v) = 0x0;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((t0 + 0x6)) = 0x1;
        t4 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        t5 = ((int (*)(void))(FUN_0c187798))();
        t6 = ((int (*)(void))(FUN_0c187798))();
        (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
        t8 = (((struct oF4_int *)(a4))->v);
        (((struct o70_float *)(t8))->v) = (((((struct o70_float *)(t8))->v)) - 20.0f);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)(*(signed char *)((a4 + 0x1B)))) {
        t391 = (FUN_0c03f346(a4));
    } else {
        t22 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t22 + 0x1);
        if ((int)(short)(t22 + 0x1) < (int)(*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x0)))) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t27 = *(short *)((a4 + 0x1C));
            t30 = *(int *)((((((((short)t27 - 1) << 2) << 2) << 1) + t2) + 0x0));
            t31 = *(int *)(((((((short)t27 << 2) << 2) << 1) + t2) + 0x0));
            if (((*(int *)(((((((short)t27 << 2) << 2) << 1) + t2) + 0x4))) & 0x2) != 0) {
                (((struct o80_uint *)(t0))->v) = (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x1C)));
            } else {
                FUN_0c04e052((t0 + 0x78), (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x14))), (*(int *)((a4 + 0x34))), (float)(t31 - t30));
                FUN_0c04e052((t0 + 0x7C), (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x18))), (*(int *)((a4 + 0x38))), (float)(t31 - t30));
                FUN_0c04e052((0x80 + t0), (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x1C))), (*(int *)((a4 + 0x3C))), (float)(t31 - t30));
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 0x1) != 0) {
                (((struct o4C_float *)(a4))->v) = ((((((struct o8_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(t31 - t30));
                (((struct o50_float *)(a4))->v) = ((((((struct oC_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o2C_float *)(a4))->v))) / (float)(t31 - t30));
                (((struct o54_float *)(a4))->v) = ((((((struct o10_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(t31 - t30));
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            } else {
                u80 = ((float)(t31 - t30) * ((((struct o4C_float *)(a4))->v)));
                u81 = (u80 * (1.0f + 1.0f));
                (((struct o58_float *)(a4))->v) = (((((((struct o8_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o28_float *)(a4))->v))) - u81) / ((float)(t31 - t30) * (float)(t31 - t30)));
                u87 = ((float)(t31 - t30) * ((((struct o50_float *)(a4))->v)));
                u88 = (u87 * (1.0f + 1.0f));
                (((struct o5C_float *)(a4))->v) = (((((((struct oC_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o2C_float *)(a4))->v))) - u88) / ((float)(t31 - t30) * (float)(t31 - t30)));
                u94 = ((float)(t31 - t30) * ((((struct o54_float *)(a4))->v)));
                u95 = (u94 * (1.0f + 1.0f));
                (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o30_float *)(a4))->v))) - u95) / ((float)(t31 - t30) * (float)(t31 - t30)));
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 64) != 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            } else {
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 128) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 0.0f;
            } else {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 16) != 0) {
                t121 = (((struct oDC_int *)(a4))->v);
                *(unsigned short *)((t121 + 0x6)) = ((*(short *)((t121 + 0x6))) | 0x200);
                (((struct o18_float *)(t121))->v) = 1.0f;
                (((struct o20_float *)(t121))->v) = 1.0f;
                (((struct o1C_float *)(t121))->v) = 1.0f;
                t120 = 0x1C;
                t122 = 0x1C;
                for (;;) {
                    if ((unsigned int)t122 > (unsigned int)0x2C) {
                        break;
                    }
                    t121 = 0xC4;
                    t121 = (t121 + a4);
                    t121 = (t121 + t122);
                    t121 = (*(int *)((t121 + 0x0)));
                    t122 = (t122 + 0x4);
                    t120 = (*(short *)((t121 + 0x6)));
                    t120 = (t120 | 0x200);
                    *(unsigned short *)((t121 + 0x6)) = t120;
                    t120 = 0x20;
                    *(float *)((t121 + t120)) = 1.0f;
                    t120 = 0x1C;
                    *(float *)((t121 + t120)) = 1.0f;
                    t120 = 0x18;
                    *(float *)((t121 + t120)) = 1.0f;
                }
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 32) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o1A_uchar *)(a4))->v) = (int)(float)(t31 - t30);
            }
            if ((0x200 & (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4)))) != 0) {
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
                t142 = (((struct oF4_int *)(a4))->v);
                (((struct o70_float *)(t142))->v) = (((((struct o70_float *)(t142))->v)) - 20.0f);
            }
        }
        *(unsigned int *)(((int)stk + 0)) = ((((struct oC4_int *)(a4))->v));
        FUN_0c17c130((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
        FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        math_vec3i_add((a4 + 0x34), (a4 + 0x34), ((*(int *)(((int)stk + 0))) + 0x78));
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 4) != 0) {
            if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                u178 = (((((struct o2C_float *)(a4))->v)) + 5.0f);
            } else {
                u178 = (((((struct o2C_float *)(a4))->v)) - 5.0f);
            }
            (((struct o2C_float *)(a4))->v) = u178;
        } else {
            if (((*(short *)((a4 + 0x1E))) & 64) != 0) {
                u183 = (((((struct o2C_float *)(a4))->v)) + 0.100000001f);
            } else {
                u183 = (((((struct o2C_float *)(a4))->v)) - 0.100000001f);
            }
            (((struct o2C_float *)(a4))->v) = u183;
        }
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 8) != 0) {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00555555569f);
            if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                (((struct o40_float *)(a4))->v) = 0.0f;
            }
            u194 = (((struct o40_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = u194;
            (((struct o44_float *)(a4))->v) = u194;
        }
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 16) != 0) {
            t204 = (((struct oDC_int *)(a4))->v);
            t205 = *(short *)((a4 + 0x1C));
            t208 = *(int *)((((((((short)t205 - 1) << 2) << 2) << 1) + t2) + 0x0));
            t209 = *(int *)(((((((short)t205 << 2) << 2) << 1) + t2) + 0x0));
            u210 = (((struct o18_float *)(t204))->v);
            (((struct o18_float *)(t204))->v) = (u210 - (1.0f / (float)(t209 - t208)));
            if (0.0f > (u210 - (1.0f / (float)(t209 - t208)))) {
                (((struct o18_float *)(t204))->v) = 0.0f;
            }
            u212 = (((struct o18_float *)(t204))->v);
            (((struct o20_float *)(t204))->v) = u212;
            (((struct o1C_float *)(t204))->v) = u212;
        }
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 128) != 0) {
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.00833333377f);
            if (((((struct oB0_float *)(a4))->v)) > 1.0f) {
                (((struct oB0_float *)(a4))->v) = 1.0f;
            }
        }
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 32) != 0) {
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - (1.0f / (float)(*(signed char *)(((0x1A + a4) + 0x0)))));
        }
        *(unsigned int *)(((int)stk + 4)) = (0xC4 + a4);
        t244 = *(int *)(((0xC4 + a4) + 0xC));
        *(unsigned int *)(((int)stk + 0)) = t244;
        t245 = *(short *)((a4 + 0x1E));
        mdl_vtx_iter_begin((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x10))) + 0x8))), (*(int *)((t244 + 0x8))));
        t251 = (((t245 << 8) << 2) << 2);
        for (;;) {
            t252 = mdl_vtx_iter_next();
            if (t252 != 0) {
                break;
            }
            mdl_vtx_get_pos((((int)stk + 0) + 0x8));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((math_cos_angle16(t251)) * (*(float *)(((int)stk + 16)))) / 14.0f)));
            mdl_vtx_set_pos((((int)stk + 0) + 0x8));
            t251 = (t251 + 0xE38);
        }
        t259 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t259))->v) = (((((struct o80_int *)(t259))->v)) + 0x222);
        t261 = (((struct oF0_int *)(a4))->v);
        (((struct o7C_uint *)(t261))->v) = (((((struct o7C_int *)(t261))->v)) + 0x2D8);
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t264 = (((struct o22_short *)(a4))->v);
        t272 = t264;
        t274 = 0x222;
        if ((int)t264 > (int)0x2) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t265 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t265 + 0x1);
            if ((int)((((struct o20_short *)(a4))->v)) > (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = 0x7;
            }
            t272 = 0x20;
            t274 = (t265 + 0x1);
        }
        t273 = 0x2D8;
        t275 = 0x7;
        t277 = t276;
        for (;;) {
            if ((int)t275 > (int)0xA) {
                break;
            }
            t272 = 0x20;
            t277 = t275;
            t273 = (*(short *)((a4 + t272)));
            t277 = (t277 << 2);
            if (t275 == t273) {
                t273 = 0xC4;
                t273 = (t273 + a4);
                t277 = (t277 + t273);
                t274 = (*(int *)((t277 + 0x0)));
                *(unsigned char *)((t274 + 0x0)) = 0x1;
            } else {
                t274 = 0xC4;
                t274 = (t274 + a4);
                t277 = (t277 + t274);
                t273 = (*(int *)((t277 + 0x0)));
                *(unsigned char *)((t273 + 0x0)) = 0x0;
            }
            t275 = (t275 + 0x1);
        }
        t290 = *(short *)((a4 + 0x1C));
        t391 = (((t290 << 2) << 2) << 1);
        if (((*(int *)(((t2 + (((t290 << 2) << 2) << 1)) + 0x4))) & 0x100) == 0) {
        } else {
            t294 = *(signed char *)((a4 + 0x18));
            if (t294 != 0) {
                if (t294 != 1) {
                    if (t294 != 2) {
                        if (t294 != 3) {
                            if (t294 != 4) {
                                if (t294 != 5) {
                                    t391 = t294;
                                    if (t294 != 6) {
                                    } else {
                                        t295 = (((struct oF4_int *)(a4))->v);
                                        (((struct o70_float *)(t295))->v) = (((((struct o70_float *)(t295))->v)) - (1.0f + 1.0f));
                                        t297 = *(signed char *)((a4 + 0x19));
                                        (((struct o19_uchar *)(a4))->v) = (t297 - 1);
                                        t391 = 0x19;
                                        if ((int)(signed char)(t297 - 1) <= 0) {
                                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                            t391 = 0x18;
                                        }
                                    }
                                } else {
                                    t307 = (((struct oF4_int *)(a4))->v);
                                    (((struct o70_float *)(t307))->v) = (((((struct o70_float *)(t307))->v)) + 0.666700006f);
                                    t309 = *(signed char *)((a4 + 0x19));
                                    (((struct o19_uchar *)(a4))->v) = (t309 - 1);
                                    t391 = 0x19;
                                    if ((int)(signed char)(t309 - 1) <= 0) {
                                        (((struct o19_uchar *)(a4))->v) = 0x5;
                                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                        t391 = 0x18;
                                    }
                                }
                            } else {
                                t321 = (((struct oCC_int *)(a4))->v);
                                (((struct o7C_uint *)(t321))->v) = (((((struct o7C_int *)(t321))->v)) - 0x111);
                                t323 = (((struct oF4_int *)(a4))->v);
                                (((struct o70_float *)(t323))->v) = (((((struct o70_float *)(t323))->v)) + 0.666700006f);
                                t325 = *(signed char *)((a4 + 0x19));
                                (((struct o19_uchar *)(a4))->v) = (t325 - 1);
                                t391 = 0x19;
                                if ((int)(signed char)(t325 - 1) <= 0) {
                                    (((struct o19_uchar *)(a4))->v) = 0xF;
                                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                    t391 = 0x18;
                                }
                            }
                        } else {
                            t336 = *(signed char *)((a4 + 0x19));
                            (((struct o19_uchar *)(a4))->v) = (t336 - 1);
                            t391 = 0x19;
                            if ((int)(signed char)(t336 - 1) <= 0) {
                                (((struct o19_uchar *)(a4))->v) = 0x1E;
                                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                t391 = 0x18;
                            }
                        }
                    } else {
                        t348 = (((struct oCC_int *)(a4))->v);
                        (((struct o7C_uint *)(t348))->v) = (((((struct o7C_int *)(t348))->v)) + 0x199);
                        t350 = *(signed char *)((a4 + 0x19));
                        (((struct o19_uchar *)(a4))->v) = (t350 - 1);
                        t391 = 0x19;
                        if ((int)(signed char)(t350 - 1) <= 0) {
                            (((struct o19_uchar *)(a4))->v) = 0xA;
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                            t391 = 0x18;
                        }
                    }
                } else {
                    t361 = *(signed char *)((a4 + 0x19));
                    (((struct o19_uchar *)(a4))->v) = (t361 - 1);
                    t391 = 0x19;
                    if ((int)(signed char)(t361 - 1) <= 0) {
                        (((struct o19_uchar *)(a4))->v) = 0x14;
                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                        t391 = 0x18;
                    }
                }
            } else {
                (((struct o19_uchar *)(a4))->v) = 0x64;
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                t373 = *(signed char *)((a4 + 0x19));
                (((struct o19_uchar *)(a4))->v) = (t373 - 1);
                t391 = 0x19;
                if ((int)(signed char)(t373 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0x14;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                    t391 = 0x18;
                }
            }
        }
    }
    return t391;
}
