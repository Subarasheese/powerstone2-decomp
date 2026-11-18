/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o178_float { char p[0x178]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o180_float { char p[0x180]; float v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C8_int { char p[0x2C8]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
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
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04e052(int, int, int, float);
int FUN_0c052364(int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0528c6(int);
int FUN_0c052962(int);
int FUN_0c052ba8(int);
int FUN_0c0537ac(int, int, int, int);
int FUN_0c0537d4(int);
int FUN_0c053a94(int);
int FUN_0c053eb2(int, int, int, int);
int FUN_0c053efe(int, int, int);
int FUN_0c053f16(int, int, int, int);
int FUN_0c053f34(int);
int FUN_0c054058(int, int, int, int, float, float);
int FUN_0c0546f4(int);
int FUN_0c0547ee(int, int, int);
int FUN_0c05490a(int, int, int, int);
extern int FUN_0c056b68();
int FUN_0c064f80(int);
int FUN_0c06593a(int, int);
int FUN_0c067438(int);
int FUN_0c067734(int);
int FUN_0c0733b0(int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c080d2a(int);
int FUN_0c081dfc(int);
int FUN_0c081e68(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0d04c4(int, int);
extern int FUN_0c0dd728();
int FUN_0c0dd746(int, int, int);
int FUN_0c0dd78a(int);
extern int FUN_0c0dd7d2();
int FUN_0c0e2700(int, int, int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3i_add(int, int, int);
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
int nlAddVector3op(int, int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(int, int, int, float, float, float);
int nlObjPutTrnsl(int, float);
int nlRand(void);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c083e00(int a4, int a5);
int FUN_0c04e0b0(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c05283e(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0dd80e(int a4, int a5, int a6, int a7, float f4);
int FUN_0c057402(void);

int FUN_0c083e00(int a4, int a5)
{
    int stk[19];
    register int t14;
    register int t15;
    register int t60;
    register int t61;
    register int t69;
    register int t70;
    register int t76;
    register int t80;
    register int t81;
    register int t99;
    register int t100;
    register int t119;
    register int t120;
    register int t127;
    register int t128;
    register int t129;
    register float u135;
    register float u136;
    register float u137;
    register float u138;
    register float u141;
    register int t178;
    register int t168;
    register int t34;
    register int t35;
    register int t39;
    register int t40;
    int t96;
    register int t107;
    register int t108;
    register int t112;
    register int t113;
    int t125;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x4)) = *(struct mv3 *)(0xC1C5DB8); }
    (((struct o3743_uchar *)(a4))->v) = 0x0;
    (((struct o382A_ushort *)(a4))->v) = 0x0;
    (((struct o3757_uchar *)(a4))->v) = 0x0;
    FUN_0c0733b0(a4);
    if ((*(signed char *)((a4 + 0x371D))) == 1) {
        (((struct o371D_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c067734(a4);
    if ((unsigned int)(signed char)a5 >= (unsigned int)0x12) {
        (((struct o374A_uchar *)(a4))->v) = 0x3C;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        t178 = 0x382E;
    } else {
        switch (((signed char)a5 << 1)) {
            case 0:
            {
                if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                    t168 = (FUN_0c085cac(a4, 0xE, 0x0));
                } else {
                    (((struct o3715_uchar *)(a4))->v) = 0x17;
                    (((struct o15_uchar *)(a4))->v) = a5;
                    FUN_0c081dfc(a4);
                    FUN_0c067438(a4);
                    if (((((struct o28_float *)(a4))->v)) > 0.0f) {
                        *(unsigned int *)((a4 + 0x38)) = 0x4000;
                    } else {
                        *(unsigned int *)((a4 + 0x38)) = 0xC000;
                    }
                    t14 = *(signed char *)((a4 + 0x2));
                    t15 = *(signed char *)(((0x371C + a4) + 0x0));
                    (((struct o3790_float *)(a4))->v) = ((((struct o40_float *)(((((((t15 << 1) + t15) << 2) << 2) << 1) + (0xC259E54 + (((((t14 << 1) + t14) << 2) << 2) << 2)))))->v));
                    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
                    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o3790_float *)(a4))->v)));
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o374A_uchar *)(a4))->v) = 0x3C;
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t168 = 0x382E;
                }
            }
                break;
            case 2:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                if ((unsigned char)(*(signed char *)((a4 + 0x3721))) == 25) {
                    FUN_0c07e868(a4, 0x9, 0x0, 0x0);
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o54_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    (((struct o16_uchar *)(a4))->v) = 0x0;
                } else {
                    if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                        *(int *)((int)stk + 8) = 0xB;
                        *(int *)((int)stk + 4) = 0x0;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        t34 = 0xB;
                        t35 = 0x0;
                        t39 = 0x0;
                        t40 = 0xB;
                    } else {
                        *(int *)((int)stk + 8) = 0x2F;
                        *(int *)((int)stk + 4) = 0x5;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        t34 = 0x2F;
                        t35 = 0x5;
                        t39 = 0x5;
                        t40 = 0x2F;
                    }
                    FUN_0c07e79c(a4, 0xFFFFFFFF, t39, t40, 0xFFFFFFFF, t35, t34);
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o54_float *)(a4))->v) = 0.0f;
                    (((struct o4C_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 0.0f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    (((struct o16_uchar *)(a4))->v) = 0x1;
                }
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 4:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                *(int *)((int)stk + 8) = 0x2B;
                *(int *)((int)stk + 4) = 0x2;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2B, 0xFFFFFFFF, 0x2, 0x2B);
                (((struct o3850_uint *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 6:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                (((struct o28_float *)(a4))->v) = -700.0f;
                (((struct o2C_float *)(a4))->v) = 0.0f;
                (((struct o30_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 9.5f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 9.5f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 8:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 25.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 25.0f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 20.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(int *)((int)stk + 8) = 0xB;
                *(int *)((int)stk + 4) = 0x0;
                t60 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t60;
                t61 = t60;
                *(int *)((int)stk + 0) = t61;
                FUN_0c07e79c(a4, t60, 0x0, 0xB, t61, 0x0, 0xB);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 10:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 35.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(int *)((int)stk + 8) = 0xB;
                *(int *)((int)stk + 4) = 0x0;
                t69 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((int)stk + 12)) = t69;
                t70 = t69;
                *(int *)((int)stk + 0) = t70;
                FUN_0c07e79c(a4, t69, 0x0, 0xB, t70, 0x0, 0xB);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 12:
            {
                if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                    t168 = (FUN_0c085cac(a4, 0xE, 0x0));
                } else {
                    (((struct o3715_uchar *)(a4))->v) = 0x17;
                    (((struct o15_uchar *)(a4))->v) = a5;
                    FUN_0c081dfc(a4);
                    FUN_0c067438(a4);
                    t76 = math_angle_between_points_xz((a4 + 0x28), (((int)stk + 12) + 0x4));
                    *(unsigned int *)((a4 + 0x38)) = t76;
                    (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(t76)) * 10.0f);
                    (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 10.0f);
                    (((struct o60_float *)(a4))->v) = 0.0f;
                    (((struct o58_float *)(a4))->v) = 0.0f;
                    (((struct o50_float *)(a4))->v) = 40.0f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    t80 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t80;
                    t81 = t80;
                    *(int *)((int)stk + 0) = t81;
                    FUN_0c07e79c(a4, t80, 0x0, 0xB, t81, 0x0, 0xB);
                    (((struct o374A_uchar *)(a4))->v) = 0x3C;
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t168 = 0x382E;
                }
            }
                break;
            case 14:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c067438(a4);
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 16:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081dfc(a4);
                FUN_0c067438(a4);
                FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                *(unsigned int *)((a4 + 0x38)) = 0x0;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(0x0)) * 5.0f);
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f);
                (((struct o50_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 18:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                *(int *)((int)stk + 8) = 0x22;
                *(int *)((int)stk + 4) = 0x2;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x22, 0xFFFFFFFF, 0x2, 0x22);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 20:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                *(int *)((int)stk + 8) = 0x14;
                *(int *)((int)stk + 4) = 0x2;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x14, 0xFFFFFFFF, 0x2, 0x14);
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 22:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                t99 = 0x0;
                t100 = 0x0;
                for (;;) {
                    if ((int)t99 >= (int)(*(signed char *)((a4 + 0x1)))) {
                        break;
                    }
                    t96 = 0x1;
                    t96 = ((int)t96 << (int)t99);
                    t99 = (t99 + 0x1);
                    if ((((*(short *)(((0xC54099A) + 0x0)))) & t96) == 0) {
                        t100 = (t100 + 0x1);
                    }
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((t100 << 1) + t100) << 2) + 0xC1C98FC)); }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2000.0f);
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                if (((((struct o160_float *)(a4))->v)) == 0.0f) {
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    t107 = 0xB;
                    t108 = 0x0;
                    t112 = 0x0;
                    t113 = 0xB;
                } else {
                    *(int *)((int)stk + 8) = 0x2F;
                    *(int *)((int)stk + 4) = 0x5;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    t107 = 0x2F;
                    t108 = 0x5;
                    t112 = 0x5;
                    t113 = 0x2F;
                }
                FUN_0c07e79c(a4, 0xFFFFFFFF, t112, t113, 0xFFFFFFFF, t108, t107);
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 24:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081e68(a4);
                FUN_0c067438(a4);
                (((struct o3756_uchar *)(a4))->v) = 0x1;
                if (((((struct o160_float *)(a4))->v)) > 0.0f) {
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    t119 = *(signed char *)((a4 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = t119;
                    t120 = t119;
                    *(int *)((int)stk + 0) = t120;
                    FUN_0c07e79c(a4, t119, 0x0, 0xB, t120, 0x0, 0xB);
                } else {
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB);
                }
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0xA;
                (((struct o28_float *)(a4))->v) = 0.0f;
                (((struct o2C_float *)(a4))->v) = -20000.0f;
                (((struct o30_float *)(a4))->v) = -750.0f;
                t127 = 0xA;
                t128 = 0x0;
                t129 = 0x0;
                for (;;) {
                    if ((int)t128 >= (int)(*(signed char *)((a4 + 0x1)))) {
                        break;
                    }
                    t127 = 0xC54099A;
                    t125 = 0x1;
                    t125 = ((int)t125 << (int)t128);
                    t128 = (t128 + 0x1);
                    if ((((*(short *)((t127 + 0x0)))) & t125) != 0) {
                        t129 = (t129 + 0x1);
                    }
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((((((0x3 - t129) << 1) + (0x3 - t129)) << 2) + 0xC1C98FC)); }
                *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (0x37C4 + a4)));
                u135 = (((struct o37C4_float *)(a4))->v);
                u136 = (((struct o28_float *)(a4))->v);
                u137 = (((struct o37CC_float *)(a4))->v);
                u138 = (((struct o30_float *)(a4))->v);
                u141 = ((u138 - u137) * (u138 - u137));
                u141 = u141 + ((u136 - u135)) * ((u136 - u135));
                (((struct o3790_float *)(a4))->v) = (math_signed_sqrt(u141));
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * (((((struct o3790_float *)(a4))->v)) / 30.0f));
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * (((((struct o3790_float *)(a4))->v)) / 30.0f));
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 10.0f;
                (((struct o5C_float *)(a4))->v) = -1.5f;
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 26:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o4C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                    FUN_0c081dfc(a4);
                    *(int *)((int)stk + 8) = 0xB;
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0xB, 0xFFFFFFFF, 0x0, 0xB);
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                    (((struct o17_uchar *)(a4))->v) = 0x1;
                    t168 = 0x17;
                } else {
                    FUN_0c07e868(a4, 0x9, 0x0, 0x0);
                    (((struct o17_uchar *)(a4))->v) = 0x0;
                    (((struct o374A_uchar *)(a4))->v) = 0x3C;
                    (((struct o382E_ushort *)(a4))->v) = 0x0;
                    t168 = 0x382E;
                }
            }
                break;
            case 28:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 30:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c081dfc(a4);
                FUN_0c067438(a4);
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                FUN_0c07e868(a4, 0x2, 0x0, 0x0);
                *(unsigned int *)((a4 + 0x38)) = 0x4000;
                (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(0x4000)) * ((((struct o0_float *)0xC08464C)->v)));
                (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o0_float *)0xC08464C)->v)));
                (((struct o60_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC08464C)->v));
                (((struct o5C_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            case 32:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c07e868(a4, 0x7, 0x0, 0x0);
                FUN_0c080d2a(a4);
                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
            default:
            {
                (((struct o3715_uchar *)(a4))->v) = 0x17;
                (((struct o15_uchar *)(a4))->v) = a5;
                FUN_0c067438(a4);
                *(unsigned short *)((a4 + 0x1C)) = 0x28;
                (((struct o374A_uchar *)(a4))->v) = 0x3C;
                (((struct o382E_ushort *)(a4))->v) = 0x0;
                t168 = 0x382E;
            }
                break;
        }
        t178 = t168;
    }
    return t178;
}

int FUN_0c04e0b0(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[5];
    register int t0;
    register int t2;
    register int t5;
    register int t18;
    register int t23;
    register int t26;
    register int t27;
    register float u76;
    register float u77;
    register float u83;
    register float u84;
    register float u90;
    register float u91;
    register int t116;
    register int t117;
    register int t118;
    register int t138;
    register float u190;
    register int t200;
    register int t201;
    register int t204;
    register int t205;
    register float u206;
    register float u208;
    register int t240;
    register int t241;
    register int t247;
    register int t248;
    register int t255;
    register int t257;
    register int t260;
    register int t261;
    register int t268;
    register int t269;
    register int t270;
    register int t271;
    register int t273;
    register int t286;
    register int t290;
    register int t291;
    register int t293;
    register int t303;
    register int t305;
    register int t317;
    register int t319;
    register int t321;
    register int t332;
    register int t344;
    register int t346;
    register int t357;
    register int t369;
    register int t387;
    register float u174;
    register float u179;
    register int t272;

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
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((t2 + 0x8)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((t2 + 0x14)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((t2 + 0x14)); }
        (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
        t5 = (((struct oF4_int *)(a4))->v);
        (((struct o70_float *)(t5))->v) = (((((struct o70_float *)(t5))->v)) - 20.0f);
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)(*(signed char *)((a4 + 0x1B)))) {
        t387 = (FUN_0c03f346(a4, a5, a6, a7));
    } else {
        t18 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t18 + 0x1);
        if ((int)(short)(t18 + 0x1) < (int)(*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x0)))) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t23 = *(short *)((a4 + 0x1C));
            t26 = *(int *)((((((((short)t23 - 1) << 2) << 2) << 1) + t2) + 0x0));
            t27 = *(int *)(((((((short)t23 << 2) << 2) << 1) + t2) + 0x0));
            if (((*(int *)(((((((short)t23 << 2) << 2) << 1) + t2) + 0x4))) & 0x2) != 0) {
                (((struct o80_uint *)(t0))->v) = (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x1C)));
            } else {
                FUN_0c04e052((t0 + 0x78), (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x14))), (*(int *)((a4 + 0x34))), (float)(t27 - t26));
                FUN_0c04e052((t0 + 0x7C), (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x18))), (*(int *)((a4 + 0x38))), (float)(t27 - t26));
                FUN_0c04e052((0x80 + t0), (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x1C))), (*(int *)((a4 + 0x3C))), (float)(t27 - t26));
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 0x1) != 0) {
                (((struct o4C_float *)(a4))->v) = ((((((struct o8_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o28_float *)(a4))->v))) / (float)(t27 - t26));
                (((struct o50_float *)(a4))->v) = ((((((struct oC_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o2C_float *)(a4))->v))) / (float)(t27 - t26));
                (((struct o54_float *)(a4))->v) = ((((((struct o10_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o30_float *)(a4))->v))) / (float)(t27 - t26));
                (((struct o58_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            } else {
                u76 = ((float)(t27 - t26) * ((((struct o4C_float *)(a4))->v)));
                u77 = (u76 * (1.0f + 1.0f));
                (((struct o58_float *)(a4))->v) = (((((((struct o8_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o28_float *)(a4))->v))) - u77) / ((float)(t27 - t26) * (float)(t27 - t26)));
                u83 = ((float)(t27 - t26) * ((((struct o50_float *)(a4))->v)));
                u84 = (u83 * (1.0f + 1.0f));
                (((struct o5C_float *)(a4))->v) = (((((((struct oC_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o2C_float *)(a4))->v))) - u84) / ((float)(t27 - t26) * (float)(t27 - t26)));
                u90 = ((float)(t27 - t26) * ((((struct o54_float *)(a4))->v)));
                u91 = (u90 * (1.0f + 1.0f));
                (((struct o60_float *)(a4))->v) = (((((((struct o10_float *)((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2)))->v)) - ((((struct o30_float *)(a4))->v))) - u91) / ((float)(t27 - t26) * (float)(t27 - t26)));
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
                t117 = (((struct oDC_int *)(a4))->v);
                *(unsigned short *)((t117 + 0x6)) = ((*(short *)((t117 + 0x6))) | 0x200);
                (((struct o18_float *)(t117))->v) = 1.0f;
                (((struct o20_float *)(t117))->v) = 1.0f;
                (((struct o1C_float *)(t117))->v) = 1.0f;
                t116 = 0x1C;
                t118 = 0x1C;
                for (;;) {
                    if ((unsigned int)t118 > (unsigned int)0x2C) {
                        break;
                    }
                    t117 = 0xC4;
                    t117 = (t117 + a4);
                    t117 = (t117 + t118);
                    t117 = (*(int *)((t117 + 0x0)));
                    t118 = (t118 + 0x4);
                    t116 = (*(short *)((t117 + 0x6)));
                    t116 = (t116 | 0x200);
                    *(unsigned short *)((t117 + 0x6)) = t116;
                    t116 = 0x20;
                    *(float *)((t117 + t116)) = 1.0f;
                    t116 = 0x1C;
                    *(float *)((t117 + t116)) = 1.0f;
                    t116 = 0x18;
                    *(float *)((t117 + t116)) = 1.0f;
                }
            }
            if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 32) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
                (((struct oB0_float *)(a4))->v) = 1.0f;
                (((struct o1A_uchar *)(a4))->v) = (int)(float)(t27 - t26);
            }
            if ((0x200 & (*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4)))) != 0) {
                (((struct o7C_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
                t138 = (((struct oF4_int *)(a4))->v);
                (((struct o70_float *)(t138))->v) = (((((struct o70_float *)(t138))->v)) - 20.0f);
            }
        }
        *(unsigned int *)(((int)stk + 0)) = ((((struct oC4_int *)(a4))->v));
        nlAddVector3op((a4 + 0x4C), (a4 + 0x4C), (a4 + 0x58));
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        math_vec3i_add((a4 + 0x34), (a4 + 0x34), ((*(int *)(((int)stk + 0))) + 0x78));
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 4) != 0) {
            if (((*(short *)((a4 + 0x1E))) & 0x2) != 0) {
                u174 = (((((struct o2C_float *)(a4))->v)) + 5.0f);
            } else {
                u174 = (((((struct o2C_float *)(a4))->v)) - 5.0f);
            }
            (((struct o2C_float *)(a4))->v) = u174;
        } else {
            if (((*(short *)((a4 + 0x1E))) & 64) != 0) {
                u179 = (((((struct o2C_float *)(a4))->v)) + 0.100000001f);
            } else {
                u179 = (((((struct o2C_float *)(a4))->v)) - 0.100000001f);
            }
            (((struct o2C_float *)(a4))->v) = u179;
        }
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 8) != 0) {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.00555555569f);
            if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
                (((struct o40_float *)(a4))->v) = 0.0f;
            }
            u190 = (((struct o40_float *)(a4))->v);
            (((struct o48_float *)(a4))->v) = u190;
            (((struct o44_float *)(a4))->v) = u190;
        }
        if (((*(int *)(((((((*(short *)((a4 + 0x1C))) << 2) << 2) << 1) + t2) + 0x4))) & 16) != 0) {
            t200 = (((struct oDC_int *)(a4))->v);
            t201 = *(short *)((a4 + 0x1C));
            t204 = *(int *)((((((((short)t201 - 1) << 2) << 2) << 1) + t2) + 0x0));
            t205 = *(int *)(((((((short)t201 << 2) << 2) << 1) + t2) + 0x0));
            u206 = (((struct o18_float *)(t200))->v);
            (((struct o18_float *)(t200))->v) = (u206 - (1.0f / (float)(t205 - t204)));
            if (0.0f > (u206 - (1.0f / (float)(t205 - t204)))) {
                (((struct o18_float *)(t200))->v) = 0.0f;
            }
            u208 = (((struct o18_float *)(t200))->v);
            (((struct o20_float *)(t200))->v) = u208;
            (((struct o1C_float *)(t200))->v) = u208;
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
        t240 = *(int *)(((0xC4 + a4) + 0xC));
        *(unsigned int *)(((int)stk + 0)) = t240;
        t241 = *(short *)((a4 + 0x1E));
        mdl_vtx_iter_begin((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x10))) + 0x8))), (*(int *)((t240 + 0x8))));
        t247 = (((t241 << 8) << 2) << 2);
        for (;;) {
            t248 = mdl_vtx_iter_next();
            if (t248 != 0) {
                break;
            }
            mdl_vtx_get_pos((((int)stk + 0) + 0x8));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((math_cos_angle16(t247)) * (*(float *)(((int)stk + 16)))) / 14.0f)));
            mdl_vtx_set_pos((((int)stk + 0) + 0x8));
            t247 = (t247 + 0xE38);
        }
        t255 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t255))->v) = (((((struct o80_int *)(t255))->v)) + 0x222);
        t257 = (((struct oF0_int *)(a4))->v);
        (((struct o7C_uint *)(t257))->v) = (((((struct o7C_int *)(t257))->v)) + 0x2D8);
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        t260 = (((struct o22_short *)(a4))->v);
        t268 = t260;
        t270 = 0x222;
        if ((int)t260 > (int)0x2) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
            t261 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t261 + 0x1);
            if ((int)((((struct o20_short *)(a4))->v)) > (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = 0x7;
            }
            t268 = 0x20;
            t270 = (t261 + 0x1);
        }
        t269 = 0x2D8;
        t271 = 0x7;
        t273 = t272;
        for (;;) {
            if ((int)t271 > (int)0xA) {
                break;
            }
            t268 = 0x20;
            t273 = t271;
            t269 = (*(short *)((a4 + t268)));
            t273 = (t273 << 2);
            if (t271 == t269) {
                t269 = 0xC4;
                t269 = (t269 + a4);
                t273 = (t273 + t269);
                t270 = (*(int *)((t273 + 0x0)));
                *(unsigned char *)((t270 + 0x0)) = 0x1;
            } else {
                t270 = 0xC4;
                t270 = (t270 + a4);
                t273 = (t273 + t270);
                t269 = (*(int *)((t273 + 0x0)));
                *(unsigned char *)((t269 + 0x0)) = 0x0;
            }
            t271 = (t271 + 0x1);
        }
        t286 = *(short *)((a4 + 0x1C));
        t387 = (((t286 << 2) << 2) << 1);
        if (((*(int *)(((t2 + (((t286 << 2) << 2) << 1)) + 0x4))) & 0x100) == 0) {
        } else {
            t290 = *(signed char *)((a4 + 0x18));
            if (t290 != 0) {
                if (t290 != 1) {
                    if (t290 != 2) {
                        if (t290 != 3) {
                            if (t290 != 4) {
                                if (t290 != 5) {
                                    t387 = t290;
                                    if (t290 != 6) {
                                    } else {
                                        t291 = (((struct oF4_int *)(a4))->v);
                                        (((struct o70_float *)(t291))->v) = (((((struct o70_float *)(t291))->v)) - (1.0f + 1.0f));
                                        t293 = *(signed char *)((a4 + 0x19));
                                        (((struct o19_uchar *)(a4))->v) = (t293 - 1);
                                        t387 = 0x19;
                                        if ((int)(signed char)(t293 - 1) <= 0) {
                                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                            t387 = 0x18;
                                        }
                                    }
                                } else {
                                    t303 = (((struct oF4_int *)(a4))->v);
                                    (((struct o70_float *)(t303))->v) = (((((struct o70_float *)(t303))->v)) + 0.666700006f);
                                    t305 = *(signed char *)((a4 + 0x19));
                                    (((struct o19_uchar *)(a4))->v) = (t305 - 1);
                                    t387 = 0x19;
                                    if ((int)(signed char)(t305 - 1) <= 0) {
                                        (((struct o19_uchar *)(a4))->v) = 0x5;
                                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                        t387 = 0x18;
                                    }
                                }
                            } else {
                                t317 = (((struct oCC_int *)(a4))->v);
                                (((struct o7C_uint *)(t317))->v) = (((((struct o7C_int *)(t317))->v)) - 0x111);
                                t319 = (((struct oF4_int *)(a4))->v);
                                (((struct o70_float *)(t319))->v) = (((((struct o70_float *)(t319))->v)) + 0.666700006f);
                                t321 = *(signed char *)((a4 + 0x19));
                                (((struct o19_uchar *)(a4))->v) = (t321 - 1);
                                t387 = 0x19;
                                if ((int)(signed char)(t321 - 1) <= 0) {
                                    (((struct o19_uchar *)(a4))->v) = 0xF;
                                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                    t387 = 0x18;
                                }
                            }
                        } else {
                            t332 = *(signed char *)((a4 + 0x19));
                            (((struct o19_uchar *)(a4))->v) = (t332 - 1);
                            t387 = 0x19;
                            if ((int)(signed char)(t332 - 1) <= 0) {
                                (((struct o19_uchar *)(a4))->v) = 0x1E;
                                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                                t387 = 0x18;
                            }
                        }
                    } else {
                        t344 = (((struct oCC_int *)(a4))->v);
                        (((struct o7C_uint *)(t344))->v) = (((((struct o7C_int *)(t344))->v)) + 0x199);
                        t346 = *(signed char *)((a4 + 0x19));
                        (((struct o19_uchar *)(a4))->v) = (t346 - 1);
                        t387 = 0x19;
                        if ((int)(signed char)(t346 - 1) <= 0) {
                            (((struct o19_uchar *)(a4))->v) = 0xA;
                            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                            t387 = 0x18;
                        }
                    }
                } else {
                    t357 = *(signed char *)((a4 + 0x19));
                    (((struct o19_uchar *)(a4))->v) = (t357 - 1);
                    t387 = 0x19;
                    if ((int)(signed char)(t357 - 1) <= 0) {
                        (((struct o19_uchar *)(a4))->v) = 0x14;
                        (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                        t387 = 0x18;
                    }
                }
            } else {
                (((struct o19_uchar *)(a4))->v) = 0x64;
                (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                t369 = *(signed char *)((a4 + 0x19));
                (((struct o19_uchar *)(a4))->v) = (t369 - 1);
                t387 = 0x19;
                if ((int)(signed char)(t369 - 1) <= 0) {
                    (((struct o19_uchar *)(a4))->v) = 0x14;
                    (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
                    t387 = 0x18;
                }
            }
        }
    }
    return t387;
}

int FUN_0c05283e(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t2;
    register int t8;
    register int t10;
    register int t11;
    register int t14;
    register int t21;
    register int t34;
    register int t48;
    register int t62;
    register int t71;
    register int t85;
    register int t99;
    register int t113;
    register int t122;
    register int t135;
    register int t138;
    register int t145;
    register int t158;
    register int t172;
    register int t186;
    register int t195;
    register int t209;
    register int t223;
    register int t237;
    register int t246;

    t0 = *(signed char *)((a4 + 0x6));
    if (t0 != 2) {
        if (t0 != 3) {
            if (t0 != 8) {
                if (t0 != 11) {
                    if (t0 != 36) {
                        if (t0 != 28) {
                            if (t0 != 17) {
                                if (t0 != 29) {
                                    if (t0 != 31) {
                                        if (t0 != 32) {
                                            if (t0 != 37) {
                                                if (t0 != 34) {
                                                    if (t0 != 35) {
                                                        t2 = *(signed char *)((a4 + 0xA));
                                                        if (t2 != 0) {
                                                            if (t2 != 1) {
                                                                return t2;
                                                            }
                                                            *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC8 + a4)) = *(struct mv3 *)(0xC1B8E88); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xF8 + a4)) = *(struct mv3 *)(0xC1B8E94); }
                                                            (((struct o180_uint *)(a4))->v) = 0x0;
                                                            (((struct o240_uint *)(a4))->v) = 0xC2414B4;
                                                            (((struct o244_uint *)(a4))->v) = 0xC2414C0;
                                                            return FUN_0c052364((*(signed char *)((a4 + 0x0))), 0xFFFFFFFF);
                                                        }
                                                        FUN_0c0528c6(a4);
                                                        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC8 + a4)) = *(struct mv3 *)(0xC1B8E88); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xF8 + a4)) = *(struct mv3 *)(0xC1B8E94); }
                                                        (((struct o180_uint *)(a4))->v) = 0x0;
                                                        (((struct o240_uint *)(a4))->v) = 0xC2414B4;
                                                        (((struct o244_uint *)(a4))->v) = 0xC2414C0;
                                                        return FUN_0c052364((*(signed char *)((a4 + 0x0))), 0xFFFFFFFF);
                                                    }
                                                    return FUN_0c053f16(a4, a5, a6, a7);
                                                }
                                                return FUN_0c053efe(a4, a5, a6);
                                            }
                                            return FUN_0c053a94(a4);
                                        }
                                        return FUN_0c053eb2(a4, a5, a6, a7);
                                    }
                                    return FUN_0c0537d4(a4);
                                }
                                return FUN_0c0537ac(a4, a5, a6, a7);
                            }
                            t8 = *(signed char *)((a4 + 0xA));
                            if (t8 != 0) {
                                if (t8 != 1) {
                                    return t8;
                                }
                                return ((int (*)(int, int, int, int))(FUN_0c056b68))(a4, a5, a6, a7);
                            }
                            FUN_0c052ba8(a4);
                            return ((int (*)(int))(FUN_0c056b68))(a4);
                        }
                        t10 = *(signed char *)((a4 + 0xA));
                        if (t10 != 0) {
                            if (t10 != 1) {
                                return t10;
                            }
                            t11 = (((struct o2C8_int *)(a4))->v);
                            if (((unsigned short)(*(short *)0xC542864) & 0x200) != 0) {
                                t14 = *(short *)0xC542864;
                                if (((unsigned short)t14 & 0x800) != 0) {
                                    *(unsigned int *)((t11 + 0x20)) = ((*(int *)((t11 + 0x20))) + 0x100);
                                } else {
                                    if (((unsigned short)t14 & 0x400) != 0) {
                                        *(unsigned int *)((t11 + 0x20)) = ((*(int *)((t11 + 0x20))) - 0x100);
                                    }
                                }
                                t21 = *(short *)0xC542864;
                                if (((unsigned short)t21 & 0x2000) != 0) {
                                    *(unsigned int *)((t11 + 0x1C)) = ((*(int *)((t11 + 0x1C))) + 0x100);
                                } else {
                                    if (((unsigned short)t21 & 0x1000) != 0) {
                                        *(unsigned int *)((t11 + 0x1C)) = ((*(int *)((t11 + 0x1C))) - 0x100);
                                    }
                                }
                            }
                            if (((unsigned short)(*(short *)0xC542864) & 0x100) != 0) {
                                t34 = *(short *)0xC542864;
                                if (((unsigned short)t34 & 0x2000) != 0) {
                                    (((struct o18_float *)(t11))->v) = (((((struct o18_float *)(t11))->v)) + 10.0f);
                                } else {
                                    if (((unsigned short)t34 & 0x1000) != 0) {
                                        (((struct o18_float *)(t11))->v) = (((((struct o18_float *)(t11))->v)) - 10.0f);
                                    }
                                }
                            }
                            if (((unsigned short)(*(short *)0xC542864) & 128) != 0) {
                                t48 = *(short *)0xC542864;
                                if (((unsigned short)t48 & 0x2000) != 0) {
                                    (((struct o38_float *)(t11))->v) = (((((struct o38_float *)(t11))->v)) + 10.0f);
                                } else {
                                    if (((unsigned short)t48 & 0x1000) != 0) {
                                        (((struct o38_float *)(t11))->v) = (((((struct o38_float *)(t11))->v)) - 10.0f);
                                    }
                                }
                            }
                            if (((unsigned short)(*(short *)0xC542864) & 64) != 0) {
                                t62 = *(short *)0xC542864;
                                if (((unsigned short)t62 & 0x800) != 0) {
                                    (((struct o34_float *)(t11))->v) = (((((struct o34_float *)(t11))->v)) - 10.0f);
                                } else {
                                    if (((unsigned short)t62 & 0x400) != 0) {
                                        (((struct o34_float *)(t11))->v) = (((((struct o34_float *)(t11))->v)) + 10.0f);
                                    }
                                }
                                t71 = *(short *)0xC542864;
                                if (((unsigned short)t71 & 0x2000) != 0) {
                                    (((struct o3C_float *)(t11))->v) = (((((struct o3C_float *)(t11))->v)) - 10.0f);
                                } else {
                                    if (((unsigned short)t71 & 0x1000) != 0) {
                                        (((struct o3C_float *)(t11))->v) = (((((struct o3C_float *)(t11))->v)) + 10.0f);
                                    }
                                }
                            }
                            if (((unsigned short)(*(short *)0xC5428B4) & 0x100) != 0) {
                                t85 = *(short *)0xC5428B4;
                                if (((unsigned short)t85 & 0x2000) != 0) {
                                    (((struct o18_float *)(t11))->v) = (((((struct o18_float *)(t11))->v)) + 100.0f);
                                } else {
                                    if (((unsigned short)t85 & 0x1000) != 0) {
                                        (((struct o18_float *)(t11))->v) = (((((struct o18_float *)(t11))->v)) - 100.0f);
                                    }
                                }
                            }
                            if (((unsigned short)(*(short *)0xC5428B4) & 128) != 0) {
                                t99 = *(short *)0xC5428B4;
                                if (((unsigned short)t99 & 0x2000) != 0) {
                                    (((struct o38_float *)(t11))->v) = (((((struct o38_float *)(t11))->v)) + 100.0f);
                                } else {
                                    if (((unsigned short)t99 & 0x1000) != 0) {
                                        (((struct o38_float *)(t11))->v) = (((((struct o38_float *)(t11))->v)) - 100.0f);
                                    }
                                }
                            }
                            if (((unsigned short)(*(short *)0xC5428B4) & 64) != 0) {
                                t113 = *(short *)0xC5428B4;
                                if (((unsigned short)t113 & 0x800) != 0) {
                                    (((struct o34_float *)(t11))->v) = (((((struct o34_float *)(t11))->v)) - 100.0f);
                                } else {
                                    if (((unsigned short)t113 & 0x400) != 0) {
                                        (((struct o34_float *)(t11))->v) = (((((struct o34_float *)(t11))->v)) + 100.0f);
                                    }
                                }
                                t122 = *(short *)0xC5428B4;
                                if (((unsigned short)t122 & 0x2000) != 0) {
                                    (((struct o3C_float *)(t11))->v) = (((((struct o3C_float *)(t11))->v)) - 100.0f);
                                } else {
                                    if (((unsigned short)t122 & 0x1000) != 0) {
                                        (((struct o3C_float *)(t11))->v) = (((((struct o3C_float *)(t11))->v)) + 100.0f);
                                    }
                                }
                            }
                            return ((int (*)(int, int, int, int))(FUN_0c056b68))(a4, t11, 0xC542854, 0x1000);
                        }
                        FUN_0c052962(a4);
                        t135 = (((struct o2C8_int *)(a4))->v);
                        if (((unsigned short)(*(short *)0xC542864) & 0x200) != 0) {
                            t138 = *(short *)0xC542864;
                            if (((unsigned short)t138 & 0x800) != 0) {
                                *(unsigned int *)((t135 + 0x20)) = ((*(int *)((t135 + 0x20))) + 0x100);
                            } else {
                                if (((unsigned short)t138 & 0x400) != 0) {
                                    *(unsigned int *)((t135 + 0x20)) = ((*(int *)((t135 + 0x20))) - 0x100);
                                }
                            }
                            t145 = *(short *)0xC542864;
                            if (((unsigned short)t145 & 0x2000) != 0) {
                                *(unsigned int *)((t135 + 0x1C)) = ((*(int *)((t135 + 0x1C))) + 0x100);
                            } else {
                                if (((unsigned short)t145 & 0x1000) != 0) {
                                    *(unsigned int *)((t135 + 0x1C)) = ((*(int *)((t135 + 0x1C))) - 0x100);
                                }
                            }
                        }
                        if (((unsigned short)(*(short *)0xC542864) & 0x100) != 0) {
                            t158 = *(short *)0xC542864;
                            if (((unsigned short)t158 & 0x2000) != 0) {
                                (((struct o18_float *)(t135))->v) = (((((struct o18_float *)(t135))->v)) + 10.0f);
                            } else {
                                if (((unsigned short)t158 & 0x1000) != 0) {
                                    (((struct o18_float *)(t135))->v) = (((((struct o18_float *)(t135))->v)) - 10.0f);
                                }
                            }
                        }
                        if (((unsigned short)(*(short *)0xC542864) & 128) != 0) {
                            t172 = *(short *)0xC542864;
                            if (((unsigned short)t172 & 0x2000) != 0) {
                                (((struct o38_float *)(t135))->v) = (((((struct o38_float *)(t135))->v)) + 10.0f);
                            } else {
                                if (((unsigned short)t172 & 0x1000) != 0) {
                                    (((struct o38_float *)(t135))->v) = (((((struct o38_float *)(t135))->v)) - 10.0f);
                                }
                            }
                        }
                        if (((unsigned short)(*(short *)0xC542864) & 64) != 0) {
                            t186 = *(short *)0xC542864;
                            if (((unsigned short)t186 & 0x800) != 0) {
                                (((struct o34_float *)(t135))->v) = (((((struct o34_float *)(t135))->v)) - 10.0f);
                            } else {
                                if (((unsigned short)t186 & 0x400) != 0) {
                                    (((struct o34_float *)(t135))->v) = (((((struct o34_float *)(t135))->v)) + 10.0f);
                                }
                            }
                            t195 = *(short *)0xC542864;
                            if (((unsigned short)t195 & 0x2000) != 0) {
                                (((struct o3C_float *)(t135))->v) = (((((struct o3C_float *)(t135))->v)) - 10.0f);
                            } else {
                                if (((unsigned short)t195 & 0x1000) != 0) {
                                    (((struct o3C_float *)(t135))->v) = (((((struct o3C_float *)(t135))->v)) + 10.0f);
                                }
                            }
                        }
                        if (((unsigned short)(*(short *)0xC5428B4) & 0x100) != 0) {
                            t209 = *(short *)0xC5428B4;
                            if (((unsigned short)t209 & 0x2000) != 0) {
                                (((struct o18_float *)(t135))->v) = (((((struct o18_float *)(t135))->v)) + 100.0f);
                            } else {
                                if (((unsigned short)t209 & 0x1000) != 0) {
                                    (((struct o18_float *)(t135))->v) = (((((struct o18_float *)(t135))->v)) - 100.0f);
                                }
                            }
                        }
                        if (((unsigned short)(*(short *)0xC5428B4) & 128) != 0) {
                            t223 = *(short *)0xC5428B4;
                            if (((unsigned short)t223 & 0x2000) != 0) {
                                (((struct o38_float *)(t135))->v) = (((((struct o38_float *)(t135))->v)) + 100.0f);
                            } else {
                                if (((unsigned short)t223 & 0x1000) != 0) {
                                    (((struct o38_float *)(t135))->v) = (((((struct o38_float *)(t135))->v)) - 100.0f);
                                }
                            }
                        }
                        if (((unsigned short)(*(short *)0xC5428B4) & 64) != 0) {
                            t237 = *(short *)0xC5428B4;
                            if (((unsigned short)t237 & 0x800) != 0) {
                                (((struct o34_float *)(t135))->v) = (((((struct o34_float *)(t135))->v)) - 100.0f);
                            } else {
                                if (((unsigned short)t237 & 0x400) != 0) {
                                    (((struct o34_float *)(t135))->v) = (((((struct o34_float *)(t135))->v)) + 100.0f);
                                }
                            }
                            t246 = *(short *)0xC5428B4;
                            if (((unsigned short)t246 & 0x2000) != 0) {
                                (((struct o3C_float *)(t135))->v) = (((((struct o3C_float *)(t135))->v)) - 100.0f);
                            } else {
                                if (((unsigned short)t246 & 0x1000) != 0) {
                                    (((struct o3C_float *)(t135))->v) = (((((struct o3C_float *)(t135))->v)) + 100.0f);
                                }
                            }
                        }
                        return ((int (*)(int, int, int, int))(FUN_0c056b68))(a4, t135, 0xC542854, 0x1000);
                    }
                    return FUN_0c0546f4(a4);
                }
                return FUN_0c054058(a4, a5, a6, a7, f4, f5);
            }
            return FUN_0c053f34(a4);
        }
        return FUN_0c0547ee(a4, a5, a6);
    }
    return FUN_0c05490a(a4, a5, a6, a7);
}

int FUN_0c0dd80e(int a4, int a5, int a6, int a7, float f4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    v0_7 = a4;
    v0_4 = a5;
    v0_1 = a6;
    v0_2 = a7;
    w0_0 = f4;
    v0_0 = (v0_7);
    if (((*(signed char *)0xC54223C) == 0)) goto L_C0DD878;
    return FUN_0c03f346(v0_0, v0_4, v0_1, v0_2);
    L_C0DD878:;
    v0_7 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_7);
    v0_3 = (0x1);
    v0_6 = (0xFFFFFFFF);
    v0_5 = (0x0);
    if ((v0_7 == 0)) goto L_C0DD88E;
    if ((v0_2 == 1)) goto L_C0DD914;
    L_C0DDDCC:;
    return v0_2;
    L_C0DD914:;
    v0_8 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_8);
    v0_7 = (0xC059CFC);
    v0_7 = (0x3C);
    if ((v0_8 == 0)) goto L_C0DD948;
    if ((v0_2 == 1)) goto L_C0DD9C0;
    if ((v0_2 != 2)) goto L_C0DD92C;
    v0_3 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0DDC68;
    if ((v0_2 == 1)) goto L_C0DDC80;
    goto L_C0DDDCC;
    L_C0DDC80:;
    w0_0 = math_sin_angle16(((*(short *)((v0_0 + 0x1C))) << 13));
    v0_3 = *(short *)((v0_0 + 0x1C));
    w0_1 = ((((struct o60_float *)(v0_0))->v));
    w0_1 = w0_1 + (((float)v0_3 / 5.0f)) * w0_0;
    (((struct o30_float *)(v0_0))->v) = w0_1;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_4 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_4);
    w0_1 = (((float)v0_3 / 5.0f));
    w0_0 = (w0_0);
    FPUL_ = (v0_3);
    if (((int)v0_4 <= 0)) goto L_C0DDCB8;
    goto L_C0DDDCC;
    L_C0DDCB8:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x1, v0_1);
    (((struct o30_float *)(v0_0))->v) = ((((struct o60_float *)(v0_0))->v));
    v0_2 = (0x30);
    goto L_C0DDDCC;
    L_C0DDC68:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xA;
    (((struct o60_float *)(v0_0))->v) = ((((struct o30_float *)(v0_0))->v));
    v0_2 = ((int (*)(int, int, int))(FUN_0c0dd7d2))(v0_0, v0_4, v0_1);
    goto L_C0DDC80;
    L_C0DD92C:;
    if ((v0_2 != 3)) goto L_C0DD934;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    *(unsigned short *)(((0x12A + v0_0) + 0x4)) = v0_5;
    *(unsigned short *)(((0x12A + v0_0) + 0x2)) = v0_5;
    (((struct o12A_ushort *)(v0_0))->v) = v0_5;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x4, v0_1);
    thunk_FUN_0c05abb2(0x41, (v0_0 + 0x28));
    FUN_0c0e2700((v0_0 + 0x28), 0x1, 0x0, 0x0);
    return FUN_0c0cf440((v0_0 + 0x28), 0x0, 0x0);
    L_C0DD934:;
    if ((v0_2 != 4)) goto L_C0DD93C;
    v0_3 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0DDD26;
    if ((v0_2 == 1)) goto L_C0DDD32;
    goto L_C0DDDCC;
    L_C0DDD32:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_3);
    if (((int)v0_3 > 0)) goto L_C0DDDCC;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x5, v0_1);
    v0_1 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((0xC1CA0C4 + (((v0_1 << 1) + v0_1) << 2))); }
    goto L_C0DDDCC;
    L_C0DDD26:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xB4;
    goto L_C0DDD32;
    L_C0DD93C:;
    if ((v0_2 != 5)) goto L_C0DD944;
    v0_4 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_4);
    if ((v0_4 == 0)) goto L_C0DDD70;
    if ((v0_2 == 1)) goto L_C0DDD7E;
    goto L_C0DDDCC;
    L_C0DDD7E:;
    *(unsigned short *)((v0_0 + 0x1C)) = ((*(short *)((v0_0 + 0x1C))) - 1);
    if ((((*(short *)((v0_0 + 0x1C))) & 4) == 0)) goto L_C0DDDB0;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    L_C0DDDB4:;
    v0_4 = *(short *)((v0_0 + 0x1C));
    v0_2 = (v0_4);
    if (((int)v0_4 > 0)) goto L_C0DDDCC;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x0, v0_1);
    (((struct o126_uchar *)(v0_0))->v) = v0_3;
    (((struct o12E_ushort *)(v0_0))->v) = v0_6;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0xA8);
    goto L_C0DDDCC;
    L_C0DDDB0:;
    (((struct oA8_uchar *)(v0_0))->v) = v0_5;
    goto L_C0DDDB4;
    L_C0DDD70:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = v0_7;
    goto L_C0DDD7E;
    L_C0DD944:;
    goto L_C0DDDCC;
    L_C0DD9C0:;
    v0_2 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_2 + 0x1);
    if (((int)(short)(v0_2 + 0x1) < (int)v0_7)) goto L_C0DD9DE;
    (((struct o136_uchar *)(v0_0))->v) = v0_5;
    (((struct o20_ushort *)(v0_0))->v) = v0_5;
    thunk_FUN_0c05abb2(0x40, (v0_0 + 0x28));
    L_C0DD9DE:;
    v0_7 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_7);
    v0_3 = (0xC1CA120);
    v0_8 = (0xC064F80);
    v0_8 = (0xC0583BC);
    w0_1 = (0.0f);
    w0_0 = (5.5f);
    if ((v0_7 == 0)) goto L_C0DDA0A;
    if ((v0_2 == 1)) goto L_C0DDAB8;
    if ((v0_2 != 2)) goto L_C0DD9FE;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_2) goto L_C0DDB2E;
    FUN_0c0dd746(v0_0, v0_4, v0_1);
    L_C0DDB80:;
    thunk_FUN_0c05abb2(0x54, (v0_0 + 0x28));
    v0_0 = v0_5;
    *(int *)((int)stk + 0) = v0_0;
    v0_2 = ((FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, v0_0)));
    goto L_C0DDDCC;
    L_C0DDB2E:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_1 = *(signed char *)((v0_0 + 0x17));
    v0_0 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_2 = ((math_vec3i_add(((*(int *)(((int)stk + 4))) + 0x78), (v0_0 + 0x78), ((((v0_1 << 1) + v0_1) << 2) + v0_3))));
    goto L_C0DDDCC;
    L_C0DD9FE:;
    if ((v0_2 != 3)) goto L_C0DDA06;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_2) goto L_C0DDBAE;
    v0_2 = (0x50);
    if ((!(-27.5f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0DDBAC;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x2, v0_1);
    goto L_C0DDB80;
    L_C0DDBAC:;
    *(float *)((v0_0 + v0_2)) = w0_1;
    L_C0DDBAE:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_0 + 0x4C));
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    math_vec3i_add(((*(int *)(((int)stk + 4))) + 0x78), (v0_5 + 0x78), ((((v0_2 << 1) + v0_2) << 2) + v0_3));
    FUN_0c0dd78a(v0_0);
    v0_3 = *(signed char *)((v0_0 + 0x17));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0DDBF6;
    if ((v0_2 == 1)) goto L_C0DDC04;
    if ((v0_2 == 2)) goto L_C0DDC16;
    if ((v0_2 == 3)) goto L_C0DDC28;
    goto L_C0DDDCC;
    L_C0DDC28:;
    v0_2 = (0x180);
    if ((((((struct o180_float *)(v0_0))->v)) > 0.0f)) goto L_C0DDC36;
    goto L_C0DDDCC;
    L_C0DDC36:;
    return FUN_0c0dd746(v0_0, v0_4, v0_1);
    L_C0DDC16:;
    v0_2 = (0x180);
    if ((0.0f > ((((struct o180_float *)(v0_0))->v)))) goto L_C0DDC24;
    goto L_C0DDDCC;
    L_C0DDC24:;
    goto L_C0DDC36;
    L_C0DDC04:;
    v0_2 = (0x178);
    if ((((((struct o178_float *)(v0_0))->v)) > 0.0f)) goto L_C0DDC12;
    goto L_C0DDDCC;
    L_C0DDC12:;
    goto L_C0DDC36;
    L_C0DDBF6:;
    v0_2 = (0x178);
    if ((0.0f > ((((struct o178_float *)(v0_0))->v)))) goto L_C0DDC36;
    goto L_C0DDDCC;
    L_C0DDA06:;
    goto L_C0DDDCC;
    L_C0DDAB8:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) - w0_0);
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    v0_1 = (v0_0);
    if (v0_2) goto L_C0DDACE;
    (((struct o50_float *)(v0_0))->v) = w0_1;
    L_C0DDACE:;
    nlAddVector3op((v0_0 + 0x28), (v0_0 + 0x28), (v0_1 + 0x4C));
    v0_1 = *(signed char *)((v0_0 + 0x17));
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_4 = ((v0_2 + 0x78));
    v0_1 = ((((v0_1 << 1) + v0_1) << 2));
    math_vec3i_add(((*(int *)(((int)stk + 4))) + 0x78), v0_4, (v0_1 + v0_3));
    FUN_0c0dd78a(v0_0);
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) <= 0)) goto L_C0DDB0C;
    goto L_C0DDDCC;
    L_C0DDB0C:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_2 = (0x16);
    goto L_C0DDDCC;
    L_C0DDA0A:;
    (((struct o126_uchar *)(v0_0))->v) = v0_5;
    (((struct o12E_ushort *)(v0_0))->v) = 0xF0;
    (((struct o12A_ushort *)(v0_0))->v) = v0_6;
    (((struct o136_uchar *)(v0_0))->v) = v0_5;
    (((struct o20_ushort *)(v0_0))->v) = v0_5;
    if (((*(signed char *)((v0_0 + 0x18))) == 0)) goto L_C0DDA52;
    v0_1 = nlRand();
    v0_2 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C0DDA36;
    v0_2 = ((v0_2 & 0x1));
    L_C0DDA40:;
    (((struct o17_uchar *)(v0_0))->v) = (*(signed char *)((0xC1CA0E8 + v0_2)));
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    L_C0DDA62:;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1E;
    v0_1 = *(signed char *)((v0_0 + 0x17));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)(((((v0_1 << 1) + v0_1) << 2) + 0xC1CA0F0)); }
    goto L_C0DDDCC;
    L_C0DDA36:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1)) + 0x1));
    goto L_C0DDA40;
    L_C0DDA52:;
    (((struct o17_uchar *)(v0_0))->v) = (*(signed char *)((0xC1CA0EA + (*(signed char *)((v0_0 + 0x2))))));
    (((struct o16_uchar *)(v0_0))->v) = 0x3;
    goto L_C0DDA62;
    L_C0DD948:;
    v0_2 = (0x1B);
    if (((int)(*(signed char *)((v0_0 + 0x1B))) < 0)) goto L_C0DD99C;
    v0_4 = *(signed char *)((0x15 + (*(int *)((0xC540D94 + ((*(signed char *)((v0_0 + v0_2))) << 2))))));
    v0_2 = (v0_4);
    if ((v0_4 == 2)) goto L_C0DD964;
    goto L_C0DDDCC;
    L_C0DD964:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x1, v0_1);
    (((struct o17_uchar *)(v0_0))->v) = v0_6;
    (((struct o18_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0x18);
    goto L_C0DDDCC;
    L_C0DD99C:;
    v0_3 = FUN_0c06593a(v0_0, (*(int *)0xC540DC4));
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C0DD9AE;
    goto L_C0DDDCC;
    L_C0DD9AE:;
    v0_1 = ((int (*)(int, int, int))(FUN_0c0dd728))(v0_0, 0x1, v0_1);
    (((struct o17_uchar *)(v0_0))->v) = 0x2;
    (((struct o18_uchar *)(v0_0))->v) = v0_5;
    v0_2 = (0x18);
    goto L_C0DDDCC;
    L_C0DD88E:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o15_uchar *)(v0_0))->v) = v0_5;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    (((struct o128_ushort *)(v0_0))->v) = 0x40;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((0xC1CA0C4 + (((v0_2 << 1) + v0_2) << 2))); }
    FUN_0c07e420(v0_0, 0x5);
    (((struct o12E_ushort *)(v0_0))->v) = v0_6;
    v0_2 = (((struct oC4_int *)(v0_0))->v);
    (((struct o70_float *)(v0_2))->v) = (((((struct o70_float *)(v0_2))->v)) - 10.0f);
    (((struct oAA_uchar *)(v0_0))->v) = v0_3;
    (((struct oAB_uchar *)(v0_0))->v) = 0x4;
    FUN_0c0d04c4((0xAC + v0_0), (v0_0 + 0x34));
    v0_7 = (v0_3);
    v0_8 = (0xC0D04C4);
    L_C0DD90C:;
    if (((int)v0_7 < (int)((((struct oC0_int *)(v0_0))->v)))) goto L_C0DD8F4;
    goto L_C0DD914;
    L_C0DD8F4:;
    v0_2 = *(int *)((((v0_7 << 2) + (0xC4 + v0_0)) + 0x0));
    FUN_0c0d04c4((v0_2 + 0x6), (v0_2 + 0x78));
    v0_7 = ((v0_7 + 0x1));
    goto L_C0DD90C;
}

int FUN_0c057402(void)
{
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;

    nlSelectMatrixStack(0x1);
    nlUnitMatrix();
    t2 = 0x1F;
    if ((*(signed char *)0xC54244F) == 0) {
    } else {
        t3 = *(signed char *)0xC54244E;
        t4 = *(signed char *)0xC54244C;
        if (t4 != 0) {
            if (t4 == 1) {
                if ((*(signed char *)0xC54244D) == 0) {
                    u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t3);
                } else {
                    u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t3);
                    u1 = -u1;
                    u0 = (u1 + 1.0f);
                }
                (((struct oC_float *)0xC40FA58)->v) = -320.0f;
                (((struct o0_float *)0xC40FA58)->v) = -320.0f;
                (((struct o24_float *)0xC40FA58)->v) = 320.0f;
                (((struct o18_float *)0xC40FA58)->v) = 320.0f;
                (((struct o2C_float *)0xC40FA58)->v) = -100.0f;
                (((struct o20_float *)0xC40FA58)->v) = -100.0f;
                (((struct o14_float *)0xC40FA58)->v) = -100.0f;
                (((struct o8_float *)0xC40FA58)->v) = -100.0f;
                (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                t5 = *(int *)0xC542450;
                u1 = (float)((unsigned int)(t5 & 0xFF0000) >> 16);
                if ((int)((unsigned int)(t5 & 0xFF0000) >> 16) < 0) {
                    u1 = ((float)((unsigned int)(t5 & 0xFF0000) >> 16) + 4.2949673e+09f);
                }
                (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t5 = *(int *)0xC542450;
                u1 = (float)((unsigned int)(t5 & 0xFF00) >> 8);
                if ((int)((unsigned int)(t5 & 0xFF00) >> 8) < 0) {
                    u1 = ((float)((unsigned int)(t5 & 0xFF00) >> 8) + 4.2949673e+09f);
                }
                (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
                t5 = *(int *)0xC542450;
                u1 = (float)(unsigned char)t5;
                if ((int)(unsigned char)t5 < 0) {
                    u1 = ((float)(unsigned char)t5 + 4.2949673e+09f);
                }
                (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
                { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC1BFA64) = *(struct mv4 *)(0xC40FA88); }
                (((struct o0_float *)0xC1BFA34)->v) = 640.0f;
                (((struct o20_float *)0xC1BFA34)->v) = 640.0f;
                nlObjPutSetFadeColor(0xC40FA88, 0xC40FA64, 0xC40FA70, 1.0f, 1.0f, 1.0f);
                if (0x1 == 0) {
                } else {
                    u1 = -37.5f;
                    for (;;) {
                        u2 = (u0 * 3.125f);
                        (((struct o1C_float *)0xC40FA58)->v) = u1;
                        (((struct o4_float *)0xC40FA58)->v) = u1;
                        (((struct o28_float *)0xC40FA58)->v) = (u2 + u1);
                        (((struct o10_float *)0xC40FA58)->v) = (u2 + u1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFA90) = *(struct mv3 *)(0xC40FA58); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAB0) = *(struct mv3 *)(0xC40FA64); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAD0) = *(struct mv3 *)(0xC40FA70); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAF0) = *(struct mv3 *)(0xC40FA7C); }
                        nlObjPut(0xC1BFA20);
                        u1 = (u1 + 3.125f);
                        if (!(37.5f > u1)) {
                            break;
                        }
                    }
                }
            } else {
                if (t4 == 2) {
                    *(volatile signed char *)0xC54244D;
                } else {
                    if (t4 == 3) {
                        if ((*(signed char *)0xC54244D) == 0) {
                            u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t3);
                        } else {
                            u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t3);
                            u1 = -u1;
                            u0 = (u1 + 1.0f);
                        }
                        (((struct o0_float *)0xC40FA58)->v) = (u0 + -0.5f);
                        (((struct o18_float *)0xC40FA58)->v) = -0.5f;
                        (((struct oC_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o24_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o10_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o4_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o28_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o1C_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o2C_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o20_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o14_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o8_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                        (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                        t4 = *(int *)0xC542450;
                        u1 = (float)((unsigned int)(t4 & 0xFF0000) >> 16);
                        if ((int)((unsigned int)(t4 & 0xFF0000) >> 16) < 0) {
                            u1 = ((float)((unsigned int)(t4 & 0xFF0000) >> 16) + 4.2949673e+09f);
                        }
                        (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t4 = *(int *)0xC542450;
                        u1 = (float)((unsigned int)(t4 & 0xFF00) >> 8);
                        if ((int)((unsigned int)(t4 & 0xFF00) >> 8) < 0) {
                            u1 = ((float)((unsigned int)(t4 & 0xFF00) >> 8) + 4.2949673e+09f);
                        }
                        (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        t4 = *(int *)0xC542450;
                        u1 = (float)(unsigned char)t4;
                        if ((int)(unsigned char)t4 < 0) {
                            u1 = ((float)(unsigned char)t4 + 4.2949673e+09f);
                        }
                        (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
                        { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC1BFA64) = *(struct mv4 *)(0xC40FA88); }
                        (((struct o0_float *)0xC1BFA34)->v) = 640.0f;
                        (((struct o20_float *)0xC1BFA34)->v) = 640.0f;
                        nlObjPutSetFadeColor(0xC40FA88, (signed char)t3, 0xC40FA58, 1.0f, 1.0f, 1.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFA90) = *(struct mv3 *)(0xC40FA58); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAB0) = *(struct mv3 *)(0xC40FA64); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAD0) = *(struct mv3 *)(0xC40FA70); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAF0) = *(struct mv3 *)(0xC40FA7C); }
                        nlObjPut(0xC1BFA20);
                        (((struct oC_float *)0xC40FA58)->v) = (0.5f - u0);
                        (((struct o24_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o18_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o0_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o4_float *)0xC40FA58)->v) = 0.5f;
                        (((struct o1C_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o10_float *)0xC40FA58)->v) = -0.5f;
                        (((struct o28_float *)0xC40FA58)->v) = -1.0f;
                        (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
                        (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
                        (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFA90) = *(struct mv3 *)(0xC40FA58); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAB0) = *(struct mv3 *)(0xC40FA64); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAD0) = *(struct mv3 *)(0xC40FA70); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAF0) = *(struct mv3 *)(0xC40FA7C); }
                        nlObjPut(0xC1BFA20);
                    }
                }
            }
        } else {
            if ((*(signed char *)0xC54244D) == 0) {
                u0 = ((float)(*(signed char *)0xC54244F) / (float)(signed char)t3);
            } else {
                u1 = ((float)((*(signed char *)0xC54244F) - 1) / (float)(signed char)t3);
                u1 = -u1;
                u0 = (u1 + 1.0f);
            }
            (((struct oC_float *)0xC40FA58)->v) = -320.0f;
            (((struct o0_float *)0xC40FA58)->v) = -320.0f;
            (((struct o24_float *)0xC40FA58)->v) = 320.0f;
            (((struct o18_float *)0xC40FA58)->v) = 320.0f;
            (((struct o1C_float *)0xC40FA58)->v) = -240.0f;
            (((struct o4_float *)0xC40FA58)->v) = -240.0f;
            (((struct o28_float *)0xC40FA58)->v) = 240.0f;
            (((struct o10_float *)0xC40FA58)->v) = 240.0f;
            (((struct o2C_float *)0xC40FA58)->v) = -1.0f;
            (((struct o20_float *)0xC40FA58)->v) = -1.0f;
            (((struct o14_float *)0xC40FA58)->v) = -1.0f;
            (((struct o8_float *)0xC40FA58)->v) = -1.0f;
            (((struct o0_uint *)0xC40FA58)->v) = (((((struct o0_int *)0xC40FA58)->v)) | 0x1);
            (((struct oC_uint *)0xC40FA58)->v) = (((((struct oC_int *)0xC40FA58)->v)) | 0x1);
            (((struct o18_uint *)0xC40FA58)->v) = (((((struct o18_int *)0xC40FA58)->v)) | 0x1);
            (((struct o24_uint *)0xC40FA58)->v) = (((((struct o24_int *)0xC40FA58)->v)) | 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFA90) = *(struct mv3 *)(0xC40FA58); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAB0) = *(struct mv3 *)(0xC40FA64); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAD0) = *(struct mv3 *)(0xC40FA70); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1BFAF0) = *(struct mv3 *)(0xC40FA7C); }
            t3 = *(int *)0xC542450;
            u1 = (float)((unsigned int)(t3 & 0xFF0000) >> 16);
            if ((int)((unsigned int)(t3 & 0xFF0000) >> 16) < 0) {
                u1 = ((float)((unsigned int)(t3 & 0xFF0000) >> 16) + 4.2949673e+09f);
            }
            (((struct o34_float *)0xC40FA58)->v) = (u1 / 255.0f);
            t3 = *(int *)0xC542450;
            u1 = (float)((unsigned int)(t3 & 0xFF00) >> 8);
            if ((int)((unsigned int)(t3 & 0xFF00) >> 8) < 0) {
                u1 = ((float)((unsigned int)(t3 & 0xFF00) >> 8) + 4.2949673e+09f);
            }
            (((struct o38_float *)0xC40FA58)->v) = (u1 / 255.0f);
            t3 = *(int *)0xC542450;
            u1 = (float)(unsigned char)t3;
            if ((int)(unsigned char)t3 < 0) {
                u1 = ((float)(unsigned char)t3 + 4.2949673e+09f);
            }
            (((struct o3C_float *)0xC40FA58)->v) = (u1 / 255.0f);
            (((struct o30_float *)0xC40FA58)->v) = 1.0f;
            { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC1BFA64) = *(struct mv4 *)(0xC40FA88); }
            (((struct o0_float *)0xC1BFA34)->v) = 640.0f;
            (((struct o20_float *)0xC1BFA34)->v) = 640.0f;
            nlObjPutSetFadeColor(0xC40FA88, 0xC40FA58, 0xC40FA70, 1.0f, 1.0f, 1.0f);
            nlObjPutTrnsl(0xC1BFA20, u0);
        }
        if (((*(signed char *)0xC54208F) == 0) && ((t2 = *(signed char *)0xC542092, t2 == 0) && (t1 = *(signed char *)0xC478BFC, t1 == 0))) {
            (((struct o0_uchar *)0xC54244F)->v) = ((*(signed char *)0xC54244F) - 1);
        }
        t2 = 0x1F;
        if ((*(signed char *)0xC54244F) == 0) {
            t1 = 0x1D;
            if ((*(signed char *)0xC54244D) != 0) {
                (((struct o0_uchar *)0xC54244F)->v) = 0x1;
                t1 = 0x1F;
            }
            t2 = t1;
        }
    }
    return t2;
}
