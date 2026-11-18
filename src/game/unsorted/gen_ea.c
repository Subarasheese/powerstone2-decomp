/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38A8_short { char p[0x38A8]; short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
int math_atan2_angle16(float, float);
int math_atan_angle16(float);
extern int math_mat_get_translate();
extern float math_signed_sqrt();
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
float nlScalor(int);
int nlSelectMatrixStack(int);
int nlSetTranslate(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c161830(int a4, int a5, int a6, int a7);

int FUN_0c161830(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t0;
    register int t22;
    register int t30;
    register int t37;
    register float u44;
    register int t46;
    register float u49;
    register float u50;
    register float t54;
    register float u67;
    register float u82;
    register float u83;
    register float u84;
    register float t85;
    register float u87;
    register int t89;
    register int t95;
    register int t110;
    register int t111;
    register int t112;
    register float u113;
    register float u114;
    register float t117;
    register float u125;
    register float u126;
    register float u127;
    register float t128;
    register float u131;
    register int t137;
    register int t2;
    register int t3;
    int t4;
    register int t157;
    register float u19;
    int t23;
    register int t24;
    register int t40;
    register int t41;
    register int t72;
    register float u73;

    t0 = *(int *)((a4 + 0x10));
    if (((unsigned char)(*(signed char *)((((0x389C + t0) + 0x8) + 0x0))) == 36) && ((t2 = *(short *)((((0x389C + t0) + 0x8) + 0x2)), t3 = (((struct o24_short *)(a4))->v), t2 == t3) && (t4 = *(signed char *)((t0 + 0x3714)), t4 != 0))) {
        if (((unsigned short)((((struct oAC_short *)((*(int *)((a4 + 0x10)))))->v)) & 0x400) != 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            u19 = ((((struct oB0_float *)((*(int *)((a4 + 0x10)))))->v));
        } else {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            u19 = 1.0f;
        }
        (((struct oB0_float *)(a4))->v) = u19;
        t22 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0xA8));
        (((struct oA8_uchar *)(a4))->v) = t22;
        if ((t22 != 0) && (t23 = *(int *)((a4 + 0x10)), t24 = (((struct o38A8_short *)(t23))->v), (int)t24 < (int)0x3C)) {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)0xC542260) & 0x1);
        }
        t30 = *(signed char *)((a4 + 0x14));
        if (t30 != 0) {
            if (t30 != 1) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
            }
            t37 = FUN_0c064f80((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498));
            if (t37 != 0) {
                t40 = 0x2C;
                t41 = (0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938));
            } else {
                t40 = 0x168;
                t41 = (0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938));
            }
            u44 = *(float *)((t41 + t40));
            t46 = ((int (*)(int, int))(math_mat_get_translate))((((((struct oC4_int *)(a4))->v)) + 0x28), (((int)stk + 0) + 0x18));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - 5.0f);
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (1.0f + 1.0f));
            u49 = (((struct o2C_float *)(a4))->v);
            u50 = (((struct o50_float *)(a4))->v);
            (((struct o2C_float *)(a4))->v) = (u49 + u50);
            if (!((u49 + u50) > (u44 + 25.0f))) {
                (((struct o2C_float *)(a4))->v) = (u44 + 25.0f);
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
            }
            nlSubVector3op((((int)stk + 0) + 0xC), (a4 + 0x28), (((int)stk + 0) + 0x18));
            t54 = nlScalor((((int)stk + 0) + 0xC));
            if (40.0f > t54) {
                if (t54 != 0.0f) {
                    math_vec3_mul_xyz((((int)stk + 0) + 0xC), (40.0f / t54), (40.0f / t54), (40.0f / t54));
                } else {
                    *(float *)(((int)stk + 20)) = 0.0f;
                    *(float *)(((int)stk + 12)) = 0.0f;
                    *(float *)(((int)stk + 16)) = -40.0f;
                }
                nlAddVector3op((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
                t72 = 0x0;
                u73 = 40.0f;
            } else {
                t72 = 0x0;
                u67 = t54;
                if (t54 > 120.0f) {
                    math_vec3_mul_xyz((((int)stk + 0) + 0xC), (120.0f / t54), (120.0f / t54), (120.0f / t54));
                    nlAddVector3op((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
                    t72 = 0x1;
                    u67 = 120.0f;
                }
                u73 = u67;
            }
            nlSelectMatrixStack(0x1);
            nlUnitMatrix();
            nlSetTranslate((a4 + 0x28));
            nlInvertMatrix(0x0);
            nlSubVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), (a4 + 0x28));
            if (t72 != 0) {
                u82 = *(float *)(((int)stk + 12));
                u83 = *(float *)(((int)stk + 16));
                u84 = (u83 * u83);
                u84 = u84 + u82 * u82;
                t85 = ((float (*)(float))(math_signed_sqrt))(u84);
                u87 = t85;
                if (t85 == 0.0f) {
                    u87 = -9.99999975e-06f;
                }
                t89 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t89))->v) = (math_atan2_angle16((*(float *)(((int)stk + 12))), (-(*(float *)(((int)stk + 16))))));
                (((struct o78_uint *)(t89))->v) = (math_atan_angle16(((-(*(float *)(((int)stk + 20)))) / u87)));
                t95 = (((struct o22_short *)(a4))->v);
                (((struct o22_ushort *)(a4))->v) = (t95 - 1);
                if ((int)(short)(t95 - 1) <= 0) {
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5D);
                    (((struct o22_ushort *)(a4))->v) = 0x28;
                }
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
            t110 = 0x2;
            for (;;) {
                t111 = *(int *)((((t110 << 2) + (0xC4 + a4)) + 0x0));
                t112 = ((int (*)(int, int, Stk3))(math_mat_get_translate))((t111 + 0x28), (((int)stk + 0) + 0xC), *(Stk3 *)(((int)stk + 0)));
                u113 = (((struct o4C_float *)(a4))->v);
                u114 = *(float *)(((int)stk + 16));
                *(float *)(((int)stk + 16)) = (u114 + u113);
                if ((u44 + 25.0f) > (u114 + u113)) {
                    *(float *)(((int)stk + 16)) = (u44 + 25.0f);
                }
                nlSubVector3op((((int)stk + 0) + 0x24), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18));
                t117 = nlScalor((((int)stk + 0) + 0x24));
                if (t117 > (((4.0999999f - (float)t110) / 4.0f) * u73)) {
                    math_vec3_mul_xyz((((int)stk + 0) + 0x24), ((((4.0999999f - (float)t110) / 4.0f) * u73) / t117), ((((4.0999999f - (float)t110) / 4.0f) * u73) / t117), ((((4.0999999f - (float)t110) / 4.0f) * u73) / t117));
                    nlAddVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0x24));
                }
                nlCalcPoint((((int)stk + 0) + 0xC), (t111 + 0x6C));
                nlSubVector3op((((int)stk + 0) + 0x24), ((int)stk + 0), (((int)stk + 0) + 0xC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
                u125 = *(float *)(((int)stk + 36));
                u126 = *(float *)(((int)stk + 40));
                u127 = (u126 * u126);
                u127 = u127 + u125 * u125;
                t128 = ((float (*)(Stk3, float))(math_signed_sqrt))(*(Stk3 *)(((int)stk + 0)), u127);
                u131 = t128;
                if (t128 == 0.0f) {
                    u131 = (*(float *)0xC161D64);
                }
                (((struct o80_uint *)(t111))->v) = (math_atan2_angle16((*(float *)(((int)stk + 36))), (-(*(float *)(((int)stk + 40))))));
                t137 = math_atan_angle16(((-(*(float *)(((int)stk + 44)))) / u131));
                t110 = (t110 + 0x1);
                (((struct o78_uint *)(t111))->v) = t137;
                if ((int)t110 < (int)0x5) continue;
                break;
            }
            t157 = t137;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t157 = 0x22;
        }
    } else {
        t157 = (FUN_0c03f346(a4, t0, a6, a7));
    }
    return t157;
}
