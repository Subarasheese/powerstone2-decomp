/* Straight-line functions with calls and guards (batch gen_abq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c139168(int, int, int);
int FUN_0c1394ee(int, int);
int FUN_0c1396c4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
void FUN_0c139718(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };


void FUN_0c139718(int a4)
{
    int stk[11];
    int R1012;
    int R1008;
    int t35;
    int t151;
    int t243;
    int R1016;
    int R1020;
    float u16;
    float u25;
    float u104;
    float u120;
    int t252;
    int t69;
    float u184;
    float u168;
    float u149;
    float u148;
    float u143;
    float u142;
    int t136;
    int t133;
    int t87;
    int t268;
    int t254;
    int t250;
    int t229;
    int t222;
    int t178;
    int t174;
    int t170;
    int t162;
    int t158;
    int t154;
    int t152;
    int t145;
    int t139;
    int t114;
    int t110;
    int t106;
    int t98;
    int t94;
    int t90;
    int t84;
    int t74;
    int t72;
    int t67;
    int t56;

    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);

    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x34) = *(struct mv3 *)(((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498) + 0x34)); }
    (((struct o34_uint *)(a4))->v) = (((((struct o34_int *)(a4))->v)) + ((((struct o78_int *)(((((struct oD0_int *)(a4))->v))))->v)));
    (((struct o38_uint *)(a4))->v) = (((((struct o38_int *)(a4))->v)) + ((((struct o7C_int *)(((((struct oD0_int *)(a4))->v))))->v)));
    (((struct o3C_uint *)(a4))->v) = (((((struct o3C_int *)(a4))->v)) + ((((struct o80_int *)(((((struct oD0_int *)(a4))->v))))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a4 + 0x28) = *(struct mv3 *)(((((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498) + 0x28)); }
    R1008 = (a4 + 0x28);
    u16 = ((((struct o28_float *)(a4))->v)) + ((((struct o6C_float *)(((((struct oD0_int *)(a4))->v))))->v)) * (math_sin_angle16(((((struct o38_int *)(a4))->v))));
    (((struct o28_float *)(a4))->v) = u16;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o70_float *)(((((struct oD0_int *)(a4))->v))))->v)));
    R1008 = (a4 + 0x30);
    u25 = ((((struct o30_float *)(a4))->v)) + ((((struct o74_float *)(((((struct oD0_int *)(a4))->v))))->v)) * (math_cos_angle16(((((struct o38_int *)(a4))->v))));
    (((struct o30_float *)(a4))->v) = u25;
    if ((*(signed char *)((0x3715 + (((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938) + 0xC532498)))) != 26) {
        if ((int)(*(signed char *)(a4 + 0x14)) < (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
        }
    }
    t35 = *(signed char *)(a4 + 0x14);
    if (t35 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x6, (*(int *)((((*(signed char *)(a4 + 0x1)) << 2) + 0xC4B40FC))));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x6, (*(int *)((((*(signed char *)(a4 + 0x1)) << 2) + 0xC4B40FC))));
    }
    if ((t35 == 0) || (t35 == 1)) {
        R1012 = 0xC2A1C98;
        if ((int)((((struct o1C_short *)(a4))->v)) <= (int)((((struct o4_int *)0xC2A1C94)->v))) {
            R1008 = 0x0;
            t56 = (*(int *)(((R1012) + 0x0)));
            *(int *)((int)stk + 0) = t56;
            FUN_0c0588bc((a4 + 0x40), 0xC2A1C64, 0xC2A1C58, ((((struct o1C_short *)(a4))->v)), t56, 0x0);
        }
        R1012 = 0xC2A1C98;
        t67 = (((struct o1C_short *)(a4))->v);
        if (((int)t67 >= (int)((((struct o4_int *)0xC2A1C94)->v))) && (t69 = (((struct o8_int *)0xC2A1C94)->v), (int)t67 <= (int)t69)) {
            t72 = (*(int *)(((R1012) + 0x0)));
            R1008 = t72;
            t74 = ((((struct o8_int *)0xC2A1C94)->v));
            *(int *)((int)stk + 0) = t74;
            FUN_0c0588bc((a4 + 0x40), 0xC2A1C70, 0xC2A1C64, ((((struct o1C_short *)(a4))->v)), t74, t72);
        }
        t84 = (((struct o1C_short *)(a4))->v);
        (((struct o1C_ushort *)(a4))->v) = (t84 + 0x1);
        if ((short)(t84 + 0x1) != ((((struct o8_int *)0xC2A1C94)->v))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
            t87 = nlRand();
            (((struct o20_ushort *)(a4))->v) = (t87 % 0x40);
            R1012 = (0xC4 + a4);
            t90 = *(int *)(((0xC4 + a4) + 0x4));
            R1008 = (0x78 + t90);
            t94 = ((((struct o78_int *)((*(int *)(((R1012) + 0x8)))))->v));
            *(int *)((int)stk + 0) = t94;
            t98 = (((struct o1C_int *)0xC2A1C94)->v);
            u104 = (float)((((int)((int)(nlRand()) % (int)((((struct o1C_int *)0xC2A1C94)->v)))) - (((int)((unsigned int)((int)((unsigned int)t98 + (unsigned int)0x0)) + ((((int)0x0 > (int)t98)) ? 1u : 0u))) >> 1)) * ((((struct o14_int *)0xC2A1C94)->v)));
            (((struct o78_uint *)(t90))->v) = (((int)((((u104 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) + t94);
            R1012 = (0xC4 + a4);
            t106 = *(int *)(((0xC4 + a4) + 0x4));
            R1008 = (0x7C + t106);
            t110 = ((((struct o7C_int *)((*(int *)(((R1012) + 0x8)))))->v));
            *(int *)((int)stk + 0) = t110;
            t114 = (((struct o20_int *)0xC2A1C94)->v);
            u120 = (float)((((int)((int)(nlRand()) % (int)((((struct o20_int *)0xC2A1C94)->v)))) - (((int)((unsigned int)((int)((unsigned int)t114 + (unsigned int)0x0)) + ((((int)0x0 > (int)t114)) ? 1u : 0u))) >> 1)) * ((((struct o18_int *)0xC2A1C94)->v)));
            (((struct o7C_uint *)(t106))->v) = (((int)((((u120 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) + t110);
        }
    } else {
        if (t35 == 2) {
            if ((int)((((struct o1C_short *)(a4))->v)) < (int)((((struct o1E_short *)(a4))->v))) {
            } else {
                t133 = nlRand();
                R1016 = (t133 % 0x4);
                t136 = nlRand();
                R1020 = (t136 % 0x10);
                R1008 = (a4 + 0x28);
                t139 = R1016;
                *(float *)(((int)stk + 0)) = (float)t139;
                u142 = (((struct o28_float *)(a4))->v);
                u143 = ((float)t139 * (math_cos_angle16(((((R1020) << 8) << 2) << 2))));
                (((struct o28_float *)(a4))->v) = (u142 + 3.0f * u143);
                R1008 = (a4 + 0x2C);
                t145 = R1016;
                *(float *)(((int)stk + 0)) = (float)t145;
                u148 = (((struct o2C_float *)(a4))->v);
                u149 = ((float)t145 * (math_sin_angle16(((((R1020) << 8) << 2) << 2))));
                (((struct o2C_float *)(a4))->v) = (u148 + 3.0f * u149);
                t151 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t151 + 0x1);
                t152 = ((~(((~(short)(t151 + 0x1)) + 0x1) & 0x3)) + 0x1);
                if ((int)(short)(t151 + 0x1) >= 0) {
                    t152 = ((short)(t151 + 0x1) & 0x3);
                }
                if (t152 == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)(0xC2A1BC0); }
                    R1012 = (0xC4 + a4);
                    t154 = *(int *)(((0xC4 + a4) + 0x4));
                    R1008 = (0x78 + t154);
                    t158 = ((((struct o78_int *)((*(int *)(((R1012) + 0x8)))))->v));
                    *(int *)((int)stk + 0) = t158;
                    t162 = (((struct o1C_int *)0xC2A1C94)->v);
                    u168 = (float)((((int)((int)(nlRand()) % (int)((((struct o1C_int *)0xC2A1C94)->v)))) - (((int)((unsigned int)((int)((unsigned int)t162 + (unsigned int)0x0)) + ((((int)0x0 > (int)t162)) ? 1u : 0u))) >> 1)) * ((((struct o14_int *)0xC2A1C94)->v)));
                    (((struct o78_uint *)(t154))->v) = (((int)((((u168 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) + t158);
                    R1012 = (0xC4 + a4);
                    t170 = *(int *)(((0xC4 + a4) + 0x4));
                    R1008 = (0x7C + t170);
                    t174 = ((((struct o7C_int *)((*(int *)(((R1012) + 0x8)))))->v));
                    *(int *)((int)stk + 0) = t174;
                    t178 = (((struct o20_int *)0xC2A1C94)->v);
                    u184 = (float)((((int)((int)(nlRand()) % (int)((((struct o20_int *)0xC2A1C94)->v)))) - (((int)((unsigned int)((int)((unsigned int)t178 + (unsigned int)0x0)) + ((((int)0x0 > (int)t178)) ? 1u : 0u))) >> 1)) * ((((struct o18_int *)0xC2A1C94)->v)));
                    (((struct o7C_uint *)(t170))->v) = (((int)((((u184 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF) + t174);
                    FUN_0c058adc((((int)stk + 8) + 0xC), (((int)stk + 8) + 0xC), (((((struct oC8_int *)(a4))->v)) + 0x28));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)(0xC2A1BC0); }
                    *(float *)(((int)stk + 40)) = 1.0f;
                    FUN_0c058adc((((int)stk + 8) + 0x18), (((int)stk + 8) + 0x18), (((((struct oC8_int *)(a4))->v)) + 0x28));
                    FUN_0c139168((*(signed char *)(a4 + 0x1)), (((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
                }
                if (((int)((int)((((struct o20_short *)(a4))->v)) % (int)0x41)) == 0) {
                    FUN_0c1394ee((*(signed char *)(a4 + 0x1)), (((((struct oC8_int *)(a4))->v)) + 0x28));
                }
            }
            t222 = (((struct o1C_short *)(a4))->v);
            (((struct o1C_ushort *)(a4))->v) = (t222 + 0x1);
            if ((int)(short)(t222 + 0x1) <= (int)(((((struct o1E_short *)(a4))->v)) + ((((struct o0_int *)0xC2A1C94)->v)))) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                (((struct o1C_ushort *)(a4))->v) = 0x0;
            }
        } else {
            if (t35 == 3) {
                t229 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t229 + 0x1);
                if ((int)(short)(t229 + 0x1) > (int)0xA) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    (((struct o1C_ushort *)(a4))->v) = 0x0;
                }
            } else {
                t243 = 0;
                if (t35 == 4) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x15)) + 0x1);
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x6, (*(int *)((((*(signed char *)(a4 + 0x1)) << 2) + 0xC4B40FC))));
                    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x20F;
                    t243 = 1;
                } else if (t35 == 5) {
                    t243 = 1;
                } else {
                    FUN_0c03f346(a4);
                }
                if (t243) {
                    if ((((((struct o1C_short *)(a4))->v)) & 1) != 0) {
                        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(((((0x1 & ((((struct o20_short *)(a4))->v))) << 2) << 2) + 0xC2A1CB8)); }
                        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                    }
                    t250 = (((struct o1C_short *)(a4))->v);
                    if (((int)t250 >= (int)((((struct oC_int *)0xC2A1C94)->v))) && (t252 = (((struct o10_int *)0xC2A1C94)->v), (int)t250 <= (int)t252)) {
                        R1008 = 0x0;
                        t254 = ((((struct o10_int *)0xC2A1C94)->v));
                        *(int *)((int)stk + 0) = t254;
                        FUN_0c0588bc((a4 + 0x40), 0xC2A1C88, 0xC2A1C7C, ((((struct o1C_short *)(a4))->v)), t254, 0x0);
                    }
                    if (((int)((int)((((struct o1C_short *)(a4))->v)) % (int)0x5)) == 0) {
                        FUN_0c1396c4((*(signed char *)(a4 + 0x1)), (a4 + 0x28));
                    }
                    t268 = (((struct o1C_short *)(a4))->v);
                    (((struct o1C_ushort *)(a4))->v) = (t268 + 0x1);
                    if ((int)(short)(t268 + 0x1) > (int)((((struct o10_int *)0xC2A1C94)->v))) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    }
                }
            }
        }
    }
}
