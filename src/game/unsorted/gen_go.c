/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o428_uchar { char p[0x428]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c043064(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058906(int, int, int, int, int, int);
int FUN_0c058968(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c05aaf6(int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0d60a8(int);
int FUN_0c0d60bc(int);
int FUN_0c0db188(int, int);
int FUN_0c1171f0(int);
int FUN_0c139168(int, int, int);
int FUN_0c1394ee(int, int);
int FUN_0c1396c4(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0cc8b0(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
float FUN_0c139718(int a4, int a5, int a6, int a7);
void FUN_0c111164(int a4, int a5, int a6, int a7);
int FUN_0c0444d2(int a4, float f4);
int FUN_0c0d9ebc(int a4, int a5, int a6, int a7);
int FUN_0c117ebe(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c0cc8b0(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register int t14;
    int t23;
    register int t28;
    register int t30;
    register int t35;
    register int t37;
    register int t38;
    register int t42;
    register int t46;
    register int t51;
    register int t54;
    register int t58;
    register int t62;
    register int t68;
    register int t70;
    register int t71;
    register int t75;
    register int t79;
    register int t84;
    register int t87;
    register int t91;
    register int t95;
    register int t99;
    register int t100;
    register int t105;
    register int t109;
    register int t113;
    register int t118;
    register int t121;
    register int t125;
    register int t129;
    register int t163;
    register int t195;
    register int t164;
    register int t194;
    register int t176;
    register int t181;
    register int t182;
    register int t183;
    register int t197;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = *(int *)0xC4B40CC;
    if (a7 != 0) {
        t1 = FUN_0c037320(0x46, t0);
        t197 = 0x0;
        if ((int)t1 < 0) {
        } else {
            t2 = FUN_0c03f444(0x9, 0x0, (t1 + 0x2));
            t197 = 0x0;
            if (t2 == 0) {
            } else {
                FUN_0c03733c(t2, 0x46, (*(int *)0xC4B40CC));
                *(unsigned char *)((t2 + 0x1)) = a10;
                *(unsigned int *)((t2 + 0x4)) = 0xC0CC7A8;
                (((struct oAC_ushort *)(t2))->v) = 0xF;
                (((struct oA9_uchar *)(t2))->v) = 0x40;
                (((struct oA8_uchar *)(t2))->v) = 0x1;
                FUN_0c0c25c4(t2);
                (((struct o41D_uchar *)(t2))->v) = 0x0;
                (((struct o41C_uchar *)(t2))->v) = 0xC2;
                (((struct o424_uchar *)(t2))->v) = (*(int *)(((int)stk + 4)));
                (((struct o1B_uchar *)(t2))->v) = (*(int *)(((int)stk + 12)));
                *(unsigned char *)((t2 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                (((struct o1A_uchar *)(t2))->v) = 0x0;
                (((struct oAA_uchar *)(t2))->v) = 0x1;
                (((struct oAB_uchar *)(t2))->v) = 0x1;
                (((struct o160_float *)(t2))->v) = 60.0f;
                t14 = 0x45;
                if ((*(signed char *)((t2 + 0x2))) == 0) {
                    t14 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t2 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12)));
                }
                FUN_0c0c2ab6(t2, t14);
                (((struct o12E_ushort *)(t2))->v) = 0x0;
                (((struct o12C_ushort *)(t2))->v) = 0x0;
                (((struct o420_ushort *)(t2))->v) = (*(short *)0xC27603A);
                FUN_0c0c212c(t2);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a8); }
                *(unsigned int *)((t2 + 0x38)) = (*(int *)0xC5413E8);
                (((struct o428_uchar *)(t2))->v) = (*(int *)(((int)stk + 0)));
                *(unsigned short *)(((0x428 + t2) + 0x4)) = 0x4B0;
                *(unsigned char *)(((0x428 + t2) + 0x1)) = 0x0;
                *(unsigned char *)(((0x428 + t2) + 0x2)) = 0x0;
                FUN_0c0c2aa2(t2, a9);
                if ((*(signed char *)((t2 + 0x1A))) != 0) {
                    t23 = *(signed char *)((t2 + 0x1));
                    if ((t23 != 0) && (t23 != 1)) {
                        if ((t23 == 2) || (t23 == 3)) {
                            *(unsigned int *)(((int)stk + 0)) = 0x2;
                            *(unsigned int *)(((int)stk + 8)) = 0x3;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 0)) = 0x0;
                        *(unsigned int *)(((int)stk + 8)) = 0x1;
                    }
                    t28 = (((struct oCC_int *)(t2))->v);
                    *(unsigned char *)((t28 + 0x0)) = 0x1;
                    *(unsigned short *)((t28 + 0x6)) = 0x21;
                    (((struct o6C_float *)(t28))->v) = -45.0f;
                    (((struct o74_float *)(t28))->v) = 0.0f;
                    (((struct o70_float *)(t28))->v) = 130.0f;
                    t30 = (((struct oD0_int *)(t2))->v);
                    FUN_0c037498(t30, 0x2, 0x46, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t30 + 0x0)) = 0x1;
                    *(unsigned short *)((t30 + 0x6)) = 0x25;
                    (((struct o6C_float *)(t30))->v) = 90.0f;
                    (((struct o74_float *)(t30))->v) = 0.0f;
                    (((struct o70_float *)(t30))->v) = 0.0f;
                    (((struct o7C_uint *)(t30))->v) = 0x8000;
                    (((struct o68_uint *)(t30))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t35 = (((struct oD4_int *)(t2))->v);
                    FUN_0c037498(t35, (*(int *)(((int)stk + 0))), 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t35 + 0x0)) = 0x1;
                    *(unsigned short *)((t35 + 0x6)) = 0x231;
                    t37 = *(int *)(((int)stk + 0));
                    *(unsigned int *)(((int)stk + 4)) = ((t37 * 0x3938) + 0xC532498);
                    t38 = *(signed char *)((((t37 * 0x3938) + 0xC532498) + 0x3719));
                    (((struct o18_float *)(t35))->v) = (*(float *)((((((t38 << 1) + t38) << 2) + 0xC2737A0) + 0x0)));
                    t42 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o1C_float *)(t35))->v) = ((((struct o4_float *)(((((t42 << 1) + t42) << 2) + 0xC2737A0)))->v));
                    t46 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o20_float *)(t35))->v) = ((((struct o8_float *)(((((t46 << 1) + t46) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t35))->v) = 0.280000001f;
                    (((struct o88_float *)(t35))->v) = 0.280000001f;
                    (((struct o84_float *)(t35))->v) = 0.280000001f;
                    (((struct o70_float *)(t35))->v) = 0.0f;
                    (((struct o6C_float *)(t35))->v) = 0.0f;
                    (((struct o74_float *)(t35))->v) = 1.0f;
                    (((struct o68_uint *)(t35))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t51 = (((struct oD8_int *)(t2))->v);
                    FUN_0c037498(t51, 0x5, 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t51 + 0x0)) = 0x1;
                    *(unsigned short *)((t51 + 0x6)) = 0x231;
                    t54 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o18_float *)(t51))->v) = (*(float *)((((((t54 << 1) + t54) << 2) + 0xC2737A0) + 0x0)));
                    t58 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o1C_float *)(t51))->v) = ((((struct o4_float *)(((((t58 << 1) + t58) << 2) + 0xC2737A0)))->v));
                    t62 = *(signed char *)(((*(int *)(((int)stk + 4))) + 0x3719));
                    (((struct o20_float *)(t51))->v) = ((((struct o8_float *)(((((t62 << 1) + t62) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t51))->v) = 0.280000001f;
                    (((struct o88_float *)(t51))->v) = 0.280000001f;
                    (((struct o84_float *)(t51))->v) = 0.280000001f;
                    (((struct o70_float *)(t51))->v) = 0.0f;
                    (((struct o6C_float *)(t51))->v) = 0.0f;
                    (((struct o74_float *)(t51))->v) = 1.0f;
                    (((struct o68_uint *)(t51))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t68 = (((struct oDC_int *)(t2))->v);
                    FUN_0c037498(t68, (*(int *)(((int)stk + 8))), 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t68 + 0x0)) = 0x1;
                    *(unsigned short *)((t68 + 0x6)) = 0x231;
                    t70 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 0)) = ((t70 * 0x3938) + 0xC532498);
                    t71 = *(signed char *)((((t70 * 0x3938) + 0xC532498) + 0x3719));
                    (((struct o18_float *)(t68))->v) = (*(float *)((((((t71 << 1) + t71) << 2) + 0xC2737A0) + 0x0)));
                    t75 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o1C_float *)(t68))->v) = ((((struct o4_float *)(((((t75 << 1) + t75) << 2) + 0xC2737A0)))->v));
                    t79 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o20_float *)(t68))->v) = ((((struct o8_float *)(((((t79 << 1) + t79) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t68))->v) = 0.280000001f;
                    (((struct o88_float *)(t68))->v) = 0.280000001f;
                    (((struct o84_float *)(t68))->v) = 0.280000001f;
                    (((struct o70_float *)(t68))->v) = 0.0f;
                    (((struct o6C_float *)(t68))->v) = 0.0f;
                    (((struct o74_float *)(t68))->v) = 1.0f;
                    (((struct o68_uint *)(t68))->v) = (((((struct oD0_int *)(t2))->v)) + 0x28);
                    t84 = (((struct oE0_int *)(t2))->v);
                    FUN_0c037498(t84, 0x5, 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t84 + 0x0)) = 0x1;
                    *(unsigned short *)((t84 + 0x6)) = 0x231;
                    t87 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o18_float *)(t84))->v) = (*(float *)((((((t87 << 1) + t87) << 2) + 0xC2737A0) + 0x0)));
                    t91 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o1C_float *)(t84))->v) = ((((struct o4_float *)(((((t91 << 1) + t91) << 2) + 0xC2737A0)))->v));
                    t95 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x3719));
                    (((struct o20_float *)(t84))->v) = ((((struct o8_float *)((0xC2737A0 + (((t95 << 1) + t95) << 2))))->v));
                    (((struct o8C_float *)(t84))->v) = 0.280000001f;
                    (((struct o88_float *)(t84))->v) = 0.280000001f;
                    (((struct o84_float *)(t84))->v) = 0.280000001f;
                    (((struct o70_float *)(t84))->v) = 0.0f;
                    (((struct o6C_float *)(t84))->v) = 0.0f;
                    (((struct o74_float *)(t84))->v) = 1.0f;
                    (((struct o68_uint *)(t84))->v) = (((((struct oD0_int *)(t2))->v)) + 0x28);
                } else {
                    t99 = (((struct oCC_int *)(t2))->v);
                    *(unsigned char *)((t99 + 0x0)) = 0x1;
                    *(unsigned short *)((t99 + 0x6)) = 0x21;
                    (((struct o6C_float *)(t99))->v) = -45.0f;
                    (((struct o74_float *)(t99))->v) = 0.0f;
                    (((struct o70_float *)(t99))->v) = 130.0f;
                    t100 = (((struct oD0_int *)(t2))->v);
                    FUN_0c037498(t100, (*(signed char *)((t2 + 0x1))), 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t100 + 0x0)) = 0x1;
                    *(unsigned short *)((t100 + 0x6)) = 0x231;
                    t105 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o18_float *)(t100))->v) = (*(float *)((((((t105 << 1) + t105) << 2) + 0xC2737A0) + 0x0)));
                    t109 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o1C_float *)(t100))->v) = ((((struct o4_float *)(((((t109 << 1) + t109) << 2) + 0xC2737A0)))->v));
                    t113 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o20_float *)(t100))->v) = ((((struct o8_float *)(((((t113 << 1) + t113) << 2) + 0xC2737A0)))->v));
                    (((struct o8C_float *)(t100))->v) = 0.280000001f;
                    (((struct o88_float *)(t100))->v) = 0.280000001f;
                    (((struct o84_float *)(t100))->v) = 0.280000001f;
                    (((struct o70_float *)(t100))->v) = 0.0f;
                    (((struct o6C_float *)(t100))->v) = 0.0f;
                    (((struct o74_float *)(t100))->v) = 1.0f;
                    (((struct o68_uint *)(t100))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                    t118 = (((struct oD4_int *)(t2))->v);
                    FUN_0c037498(t118, 0x5, 0x48, (*(int *)0xC4B40CC));
                    *(unsigned char *)((t118 + 0x0)) = 0x1;
                    *(unsigned short *)((t118 + 0x6)) = 0x231;
                    t121 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o18_float *)(t118))->v) = (*(float *)((((((t121 << 1) + t121) << 2) + 0xC2737A0) + 0x0)));
                    t125 = *(signed char *)((0x3719 + (((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938) + 0xC532498)));
                    (((struct o1C_float *)(t118))->v) = ((((struct o4_float *)(((((t125 << 1) + t125) << 2) + 0xC2737A0)))->v));
                    t129 = *(signed char *)(((0xC532498 + ((short)(*(signed char *)((t2 + 0x1))) * (short)0x3938)) + 0x3719));
                    (((struct o20_float *)(t118))->v) = ((((struct o8_float *)((0xC2737A0 + (((t129 << 1) + t129) << 2))))->v));
                    (((struct o8C_float *)(t118))->v) = 0.280000001f;
                    (((struct o88_float *)(t118))->v) = 0.280000001f;
                    (((struct o84_float *)(t118))->v) = 0.280000001f;
                    (((struct o70_float *)(t118))->v) = 0.0f;
                    (((struct o6C_float *)(t118))->v) = 0.0f;
                    (((struct o74_float *)(t118))->v) = 1.0f;
                    (((struct o68_uint *)(t118))->v) = (((((struct oCC_int *)(t2))->v)) + 0x28);
                }
                FUN_0c05aaf6(0x8E);
                t197 = t2;
            }
        }
    } else {
        t163 = FUN_0c037320(0xA, t0);
        t195 = 0x0;
        if ((int)t163 >= 0) {
            t164 = FUN_0c03f444(0x9, 0x0, t163);
            t194 = 0x0;
            if (t164 != 0) {
                FUN_0c03733c(t164, 0xA, (*(int *)0xC4B40CC));
                *(unsigned char *)((t164 + 0x1)) = a10;
                *(unsigned int *)((t164 + 0x4)) = 0xC0CC7A8;
                (((struct oAC_ushort *)(t164))->v) = 0xF;
                (((struct oA9_uchar *)(t164))->v) = 0x40;
                (((struct oA8_uchar *)(t164))->v) = 0x1;
                FUN_0c0c25c4(t164);
                (((struct o41D_uchar *)(t164))->v) = 0x0;
                (((struct o41C_uchar *)(t164))->v) = 0xC2;
                (((struct o424_uchar *)(t164))->v) = (*(int *)(((int)stk + 4)));
                (((struct o1B_uchar *)(t164))->v) = (*(int *)(((int)stk + 12)));
                *(unsigned char *)((t164 + 0x2)) = (*(signed char *)(((int)stk + 8)));
                (((struct o1A_uchar *)(t164))->v) = 0x0;
                t176 = 0x45;
                if ((*(signed char *)((t164 + 0x2))) == 0) {
                    t176 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t164 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12)));
                }
                FUN_0c0c2ab6(t164, t176);
                (((struct o12E_ushort *)(t164))->v) = 0x0;
                (((struct o12C_ushort *)(t164))->v) = 0x0;
                (((struct o420_ushort *)(t164))->v) = (*(short *)0xC27603A);
                FUN_0c0c212c(t164);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t164 + 0x28)) = *(struct mv3 *)(a8); }
                if ((int)t163 > 0) {
                    t181 = (t164 + 0x28);
                    t182 = a8;
                    t183 = 0x0;
                    for (;;) {
                        if (t183 != 4) {
                            t181 = t183;
                            t181 = (t181 << 2);
                            t182 = t183;
                            t181 = (t181 + (0xC4 + t164));
                            t182 = (t182 << 1);
                            t181 = (*(int *)((t181 + 0x0)));
                            t182 = (t182 + t183);
                            t182 = (t182 << 2);
                            t181 = (t181 + 0x6C);
                            t182 = (t182 + 0xC273740);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(t181) = *(struct mv3 *)(t182); }
                        }
                        t183 = (t183 + 0x1);
                        if ((int)t183 >= (int)t163) {
                            break;
                        }
                    }
                }
                *(unsigned int *)((t164 + 0x38)) = (unsigned short)((*(short *)0xC5413E8) + 0x8000);
                (((struct o428_uchar *)(t164))->v) = (*(int *)(((int)stk + 0)));
                *(unsigned short *)(((0x428 + t164) + 0x4)) = 0x12C;
                FUN_0c0c2aa2(t164, a9);
                t194 = t164;
            }
            t195 = t194;
        }
        t197 = t195;
    }
    return t197;
}

float FUN_0c139718(int a4, int a5, int a6, int a7)
{
    int stk[11];

    register int R2;
    register int R3;
    int R9;
    register float F2;
    register float F3;
    register float F12;
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
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_6 = a4;
    v0_8 = a5;
    v0_3 = a6;
    v0_4 = a7;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x34)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_6 + 0x1))) * (short)0x3938) + 0xC532498) + 0x34)); }
    *(unsigned int *)((v0_6 + 0x34)) = ((*(int *)((v0_6 + 0x34))) + ((((struct o78_int *)(((((struct oD0_int *)(v0_6))->v))))->v)));
    *(unsigned int *)((v0_6 + 0x38)) = ((*(int *)((v0_6 + 0x38))) + ((((struct o7C_int *)(((((struct oD0_int *)(v0_6))->v))))->v)));
    *(unsigned int *)((v0_6 + 0x3C)) = ((*(int *)((v0_6 + 0x3C))) + ((((struct o80_int *)(((((struct oD0_int *)(v0_6))->v))))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_6 + 0x28)) = *(struct mv3 *)(((((short)(*(signed char *)((v0_6 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28)); }
    *(int *)((int)stk + 4) = (v0_6 + 0x28);
    w0_0 = ((((struct o28_float *)(v0_6))->v));
    w0_0 = w0_0 + ((((struct o6C_float *)(((((struct oD0_int *)(v0_6))->v))))->v)) * (math_sin_angle16((*(int *)((v0_6 + 0x38)))));
    (((struct o28_float *)(v0_6))->v) = w0_0;
    (((struct o2C_float *)(v0_6))->v) = (((((struct o2C_float *)(v0_6))->v)) + ((((struct o70_float *)(((((struct oD0_int *)(v0_6))->v))))->v)));
    *(int *)((int)stk + 4) = (v0_6 + 0x30);
    w0_0 = (((struct o74_float *)(((((struct oD0_int *)(v0_6))->v))))->v);
    w0_1 = ((((struct o30_float *)(v0_6))->v));
    w0_1 = w0_1 + w0_0 * (math_cos_angle16((*(int *)((v0_6 + 0x38)))));
    (((struct o30_float *)(v0_6))->v) = w0_1;
    v0_0 = (v0_6);
    w0_3 = (w0_0);
    if (((*(signed char *)((0x3715 + (((short)(*(signed char *)((v0_6 + 0x1))) * (short)0x3938) + 0xC532498)))) == 26)) goto L_C139804;
    v0_6 = (0x3);
    if (((int)(*(signed char *)((v0_0 + 0x14))) >= (int)0x3)) goto L_C139804;
    (((struct o14_uchar *)(v0_0))->v) = v0_6;
    L_C139804:;
    v0_9 = *(signed char *)((v0_0 + 0x14));
    v0_6 = (v0_9);
    v0_5 = (0xC2A1C58);
    v0_1 = (0xC179AC0);
    v0_1 = (0xC2A1CA8);
    v0_2 = (0xC2A1C94);
    v0_7 = (0xC0588BC);
    R9 = (0xFFFF);
    w0_0 = (0.5f);
    w0_1 = (65536.0f);
    w0_2 = (360.0f);
    if ((v0_9 == 0)) goto L_C139888;
    if ((v0_6 == 1)) goto L_C1398CE;
    if ((v0_6 != 2)) goto L_C139830;
    if (!(((int)(*(short *)((v0_0 + 0x1C))) >= (int)(*(short *)((v0_0 + 0x1E)))))) goto L_C139BE8;
    v0_5 = nlRand();
    v0_6 = (v0_5);
    v0_7 = ((((int)stk + 8) + 0x4));
    if (((int)v0_5 < 0)) goto L_C139A34;
    v0_6 = ((v0_6 & 0x3));
    goto L_C139A3E;
    L_C139BE8:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_2 = *(int *)((v0_2 + 0x0));
    v0_3 = *(short *)((v0_0 + 0x1E));
    v0_6 = ((v0_3 + v0_2));
    if (((int)(short)(v0_1 + 0x1) > (int)(v0_3 + v0_2))) goto L_C139C0C;
    L_C139CEA:;
    return w0_3;
    L_C139C0C:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x0;
    v0_6 = (0x0);
    goto L_C139CEA;
    L_C139A3E:;
    *(unsigned int *)((v0_7 + 0x0)) = v0_6;
    v0_8 = nlRand();
    v0_6 = (v0_8);
    v0_5 = ((((int)stk + 8) + 0x8));
    if (((int)v0_8 < 0)) goto L_C139A4E;
    v0_6 = ((v0_6 & 0xF));
    L_C139A58:;
    *(unsigned int *)((v0_5 + 0x0)) = v0_6;
    *(int *)((int)stk + 4) = (v0_0 + 0x28);
    v0_6 = *(int *)((v0_7 + 0x0));
    *(float *)(((int)stk + 0)) = (float)v0_6;
    w0_3 = (((struct o28_float *)(v0_0))->v);
    w0_4 = ((float)v0_6 * (math_cos_angle16(((((*(int *)((v0_5 + 0x0))) << 8) << 2) << 2))));
    w0_3 = w0_3;
    w0_3 = w0_3 + 3.0f * w0_4;
    (((struct o28_float *)(v0_0))->v) = w0_3;
    *(int *)((int)stk + 4) = (v0_0 + 0x2C);
    v0_6 = *(int *)((v0_7 + 0x0));
    *(float *)(((int)stk + 0)) = (float)v0_6;
    w0_3 = (((struct o2C_float *)(v0_0))->v);
    w0_4 = ((float)v0_6 * (math_sin_angle16(((((*(int *)((v0_5 + 0x0))) << 8) << 2) << 2))));
    w0_3 = w0_3;
    w0_3 = w0_3 + 3.0f * w0_4;
    (((struct o2C_float *)(v0_0))->v) = w0_3;
    v0_5 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_5 + 0x1);
    v0_6 = ((short)(v0_5 + 0x1));
    w0_3 = (3.0f);
    if (((int)(short)(v0_5 + 0x1) < 0)) goto L_C139AD0;
    v0_6 = ((v0_6 & 0x3));
    L_C139ADA:;
    if ((v0_6 != 0)) goto L_C139BCE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)(0xC2A1BC0); }
    *(unsigned int *)(((int)stk + 8)) = (0xC4 + v0_0);
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x4));
    *(int *)((int)stk + 4) = (0x78 + v0_5);
    v0_6 = ((((struct o78_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8)))))->v));
    *(int *)((int)stk + 0) = v0_6;
    v0_7 = *(int *)(((v0_1 + 0x8) + 0x0));
    w0_4 = (float)((((int)((int)(nlRand()) % (int)(*(int *)(((v0_1 + 0x8) + 0x0))))) - (((int)((unsigned int)((int)((unsigned int)v0_7 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_7)) ? 1u : 0u))) >> 1)) * (*(int *)((v0_1 + 0x0))));
    (((struct o78_uint *)(v0_5))->v) = (((int)((((w0_4 * w0_1) / w0_2)) + w0_0) & R9) + v0_6);
    *(unsigned int *)(((int)stk + 8)) = (0xC4 + v0_0);
    v0_5 = *(int *)(((0xC4 + v0_0) + 0x4));
    *(int *)((int)stk + 4) = (0x7C + v0_5);
    v0_6 = ((((struct o7C_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8)))))->v));
    *(int *)((int)stk + 0) = v0_6;
    v0_7 = *(int *)(((v0_1 + 0xC) + 0x0));
    w0_4 = (float)((((int)((int)(nlRand()) % (int)(*(int *)(((v0_1 + 0xC) + 0x0))))) - (((int)((unsigned int)((int)((unsigned int)v0_7 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_7)) ? 1u : 0u))) >> 1)) * (*(int *)((v0_1 + 0x4))));
    (((struct o7C_uint *)(v0_5))->v) = (((int)((((w0_4 * w0_1) / w0_2)) + w0_0) & R9) + v0_6);
    FUN_0c058adc((((int)stk + 8) + 0xC), (((int)stk + 8) + 0xC), (((((struct oC8_int *)(v0_0))->v)) + 0x28));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)(0xC2A1BC0); }
    *(float *)(((int)stk + 40)) = 1.0f;
    FUN_0c058adc((((int)stk + 8) + 0x18), (((int)stk + 8) + 0x18), (((((struct oC8_int *)(v0_0))->v)) + 0x28));
    FUN_0c139168((*(signed char *)((v0_0 + 0x1))), (((int)stk + 8) + 0x18), (((int)stk + 8) + 0xC));
    L_C139BCE:;
    if ((((int)((int)((((struct o20_short *)(v0_0))->v)) % (int)0x41)) != 0)) goto L_C139BE8;
    FUN_0c1394ee((*(signed char *)((v0_0 + 0x1))), (((((struct oC8_int *)(v0_0))->v)) + 0x28));
    goto L_C139BE8;
    L_C139AD0:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x3)) + 0x1));
    goto L_C139ADA;
    L_C139A4E:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0xF)) + 0x1));
    goto L_C139A58;
    L_C139A34:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x3)) + 0x1));
    goto L_C139A3E;
    L_C139830:;
    if ((v0_6 != 3)) goto L_C139838;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_6 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)0xA)) goto L_C139CEA;
    goto L_C139C0C;
    L_C139838:;
    if ((v0_6 != 4)) goto L_C139840;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned char *)((((((struct oC8_int *)(v0_0))->v)) + 0x0)) = 0x0;
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x2, 0x6, (*(int *)((((*(signed char *)((v0_0 + 0x1))) << 2) + 0xC4B40FC))));
    *(unsigned short *)((((((struct oC4_int *)(v0_0))->v)) + 0x6)) = 0x20F;
    L_C139C5E:;
    if ((((*(short *)((v0_0 + 0x1C))) & 1) == 0)) goto L_C139C88;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(v0_0))->v)) + 0x14)) = *(struct mv4 *)(((((0x1 & ((((struct o20_short *)(v0_0))->v))) << 2) << 2) + 0xC2A1CB8)); }
    (((struct o20_ushort *)(v0_0))->v) = (((((struct o20_short *)(v0_0))->v)) + 0x1);
    L_C139C88:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_6 = (v0_1);
    if (((int)v0_1 < (int)(*(int *)((v0_2 + 0xC))))) goto L_C139CB4;
    if (((int)v0_6 > (int)(*(int *)((v0_2 + 0x10))))) goto L_C139CB4;
    *(int *)((int)stk + 4) = 0x0;
    v0_1 = (*(int *)((v0_2 + 0x10)));
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c0588bc((v0_0 + 0x40), (v0_5 + 0x30), (v0_5 + 0x24), (*(short *)((v0_0 + 0x1C))), v0_1, 0x0);
    L_C139CB4:;
    if ((((int)((int)(*(short *)((v0_0 + 0x1C))) % (int)0x5)) != 0)) goto L_C139CCC;
    FUN_0c1396c4((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), v0_3, v0_4);
    L_C139CCC:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_6 = ((short)(v0_1 + 0x1));
    if (((int)(short)(v0_1 + 0x1) <= (int)(*(int *)((v0_2 + 0x10))))) goto L_C139CEA;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_6 = (0x14);
    goto L_C139CEA;
    L_C139840:;
    if ((v0_6 != 5)) goto L_C139848;
    goto L_C139C5E;
    L_C139848:;
    v0_6 = ((FUN_0c03f346(v0_0, v0_8, v0_3, v0_4)));
    goto L_C139CEA;
    L_C1398CE:;
    *(unsigned int *)(((int)stk + 8)) = (v0_2 + 0x4);
    if (((int)(*(short *)((v0_0 + 0x1C))) > (int)(*(int *)(((v0_2 + 0x4) + 0x0))))) goto L_C1398FA;
    *(int *)((int)stk + 4) = 0x0;
    v0_3 = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c0588bc((v0_0 + 0x40), (v0_5 + 0xC), v0_5, (*(short *)((v0_0 + 0x1C))), v0_3, 0x0);
    L_C1398FA:;
    *(unsigned int *)(((int)stk + 8)) = (v0_2 + 0x4);
    v0_3 = *(short *)((v0_0 + 0x1C));
    v0_6 = (v0_3);
    if (((int)v0_3 < (int)(*(int *)(((v0_2 + 0x4) + 0x0))))) goto L_C13992E;
    if (((int)v0_6 > (int)(*(int *)((v0_2 + 0x8))))) goto L_C13992E;
    v0_3 = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    *(int *)((int)stk + 4) = v0_3;
    v0_4 = (*(int *)((v0_2 + 0x8)));
    *(int *)((int)stk + 0) = v0_4;
    FUN_0c0588bc((v0_0 + 0x40), (v0_5 + 0x18), (v0_5 + 0xC), (*(short *)((v0_0 + 0x1C))), v0_4, v0_3);
    L_C13992E:;
    v0_3 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_3 + 0x1);
    v0_6 = ((short)(v0_3 + 0x1));
    if (((short)(v0_3 + 0x1) == (*(int *)((v0_2 + 0x8))))) goto L_C139940;
    goto L_C139CEA;
    L_C139940:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = nlRand();
    v0_6 = (v0_2);
    v0_3 = (0x20);
    if (((int)v0_2 < 0)) goto L_C139954;
    v0_6 = ((v0_6 & 0x3F));
    L_C13995E:;
    *(unsigned short *)(((v0_3 + v0_0) + 0x0)) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = (0xC4 + v0_0);
    v0_2 = *(int *)(((0xC4 + v0_0) + 0x4));
    *(int *)((int)stk + 4) = (0x78 + v0_2);
    v0_3 = ((((struct o78_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8)))))->v));
    *(int *)((int)stk + 0) = v0_3;
    v0_4 = *(int *)(((v0_1 + 0x8) + 0x0));
    w0_4 = (float)((((int)((int)(nlRand()) % (int)(*(int *)(((v0_1 + 0x8) + 0x0))))) - (((int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u))) >> 1)) * (*(int *)((v0_1 + 0x0))));
    (((struct o78_uint *)(v0_2))->v) = (((int)((((w0_4 * w0_1) / w0_2)) + w0_0) & R9) + v0_3);
    *(unsigned int *)(((int)stk + 8)) = (0xC4 + v0_0);
    v0_0 = *(int *)(((0xC4 + v0_0) + 0x4));
    *(int *)((int)stk + 4) = (0x7C + v0_0);
    v0_2 = ((((struct o7C_int *)((*(int *)(((*(int *)(((int)stk + 8))) + 0x8)))))->v));
    *(int *)((int)stk + 0) = v0_2;
    v0_3 = (int)((int)(nlRand()) % (int)(*(int *)(((v0_1 + 0xC) + 0x0))));
    v0_4 = *(int *)(((v0_1 + 0xC) + 0x0));
    v0_1 = *(int *)((v0_1 + 0x4));
    v0_4 = (int)((unsigned int)((int)((unsigned int)v0_4 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_4)) ? 1u : 0u));
    w0_4 = (float)((v0_3 - (v0_4 >> 1)) * v0_1);
    w0_1 = ((w0_4 * w0_1) / w0_2);
    (((struct o7C_uint *)(v0_0))->v) = (((int)(w0_1 + w0_0) & R9) + v0_2);
    v0_6 = (((v0_3 - (v0_4 >> 1)) * v0_1));
    FPUL_ = ((int)(w0_1 + w0_0));
    goto L_C139CEA;
    L_C139954:;
    v0_6 = (((~(((~v0_6) + 0x1) & 0x3F)) + 0x1));
    goto L_C13995E;
    L_C139888:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), 0x0, 0x6, (*(int *)((((*(signed char *)((v0_0 + 0x1))) << 2) + 0xC4B40FC))));
    FUN_0c03744a(((((struct oC8_int *)(v0_0))->v)), 0x1, 0x6, (*(int *)((((*(signed char *)((v0_0 + 0x1))) << 2) + 0xC4B40FC))));
    goto L_C1398CE;
}

void FUN_0c111164(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 20) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x14)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912D4, 0xC2912C8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                    FUN_0c058906((a4 + 0x34), 0xC291304, 0xC2912F8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912EC, 0xC2912E0, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                        FUN_0c058968((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC29132C, 0xC291314, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                        FUN_0c058968((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291338, 0xC291320, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                if ((int)t1 >= (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                }
                return;
            }
            if (t0 == 21) {
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x14)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912D4, 0xC2912C8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                    FUN_0c058906((a4 + 0x34), 0xC291304, 0xC2912F8, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912EC, 0xC2912E0, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= (int)0xF) && ((int)t1 <= (int)0x28)) {
                        FUN_0c058968((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC29132C, 0xC291314, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                        FUN_0c058968((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291338, 0xC291320, (*(short *)((a4 + 0x1C))), 0x28, 0xF);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                if ((int)t1 >= (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                } else {
                    *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                }
                return;
            }
            if (t0 == 22) {
                return;
            }
            if (t0 == 30) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0x14) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912C8, 0xC2912D4, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                    FUN_0c058906((a4 + 0x34), 0xC2912F8, 0xC291304, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912E0, 0xC2912EC, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                        FUN_0c058968((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC291314, 0xC29132C, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                        FUN_0c058968((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291320, 0xC291338, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = 0x1;
                }
                return;
            }
            if (t0 == 31) {
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= (int)0x14) && ((int)t1 <= (int)0x28)) {
                    FUN_0c0588bc((a4 + 0x28), 0xC2912C8, 0xC2912D4, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                    FUN_0c058906((a4 + 0x34), 0xC2912F8, 0xC291304, (*(short *)((a4 + 0x1C))), 0x28, 0x14);
                }
                t1 = *(short *)((a4 + 0x1C));
                if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                    FUN_0c0588bc((a4 + 0x40), 0xC2912E0, 0xC2912EC, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                    t1 = *(short *)((a4 + 0x1C));
                    if (((int)t1 >= 0) && ((int)t1 <= (int)0x19)) {
                        FUN_0c058968((((((struct oC8_int *)(a4))->v)) + 0x78), 0xC291314, 0xC29132C, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                        FUN_0c058968((((((struct oCC_int *)(a4))->v)) + 0x78), 0xC291320, 0xC291338, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o78_uint *)(t1))->v) = (((((struct o78_int *)(t1))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o7C_uint *)(t1))->v) = (((((struct o7C_int *)(t1))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        t1 = *(int *)(((0xC4 + a4) + 0x8));
                        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
                        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
                    }
                }
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
                if ((int)(short)(t1 + 0x1) > (int)0x28) {
                    (((struct o14_uchar *)(a4))->v) = 0x1;
                }
                return;
            }
            if (t0 == 40) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                return;
            }
            if (t0 == 50) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                return;
            }
            if (t0 == 99) {
                FUN_0c03f346(a4, a5, a6, a7);
    return;
            }
            return;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)(0xC291314); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)(0xC291320); }
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + ((((struct o78_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o7C_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
        t0 = *(int *)(((0xC4 + a4) + 0x8));
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + ((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v)));
        (((struct o6C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_cos_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
        (((struct o70_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = (-((*(float *)0xC291310) * (math_sin_angle16(((((struct o80_int *)((*(int *)(((0xC4 + a4) + 0x4)))))->v))))));
        return;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, 0xE, (*(int *)0xC4B410C));
    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x1, 0xE, (*(int *)0xC4B410C));
    FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x2, 0xE, (*(int *)0xC4B410C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC2912C8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2912E0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0xC2912F8); }
}

int FUN_0c0444d2(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                    t1 = *(signed char *)0xC54225A;
                    t2 = t1;
                    if ((t1 & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) == 0) {
                    } else {
                        t1 = (((struct oCC_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v);
                        (((struct o18_float *)(t1))->v) = 1.0f;
                        (((struct o1C_float *)(t1))->v) = 1.0f;
                        (((struct o20_float *)(t1))->v) = 1.0f;
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    return t2;
                }
                if (t0 == 4) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                    t1 = (((struct oCC_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v);
                    if (((((struct o18_float *)(t1))->v)) > 0.0f) {
                        (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) - 0.0500000007f);
                        (((struct o1C_float *)(t1))->v) = (((((struct o1C_float *)(t1))->v)) - 0.0500000007f);
                        (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - 0.0500000007f);
                        if (0.0f > ((((struct o18_float *)(t1))->v))) {
                            (((struct o18_float *)(t1))->v) = 0.0f;
                            (((struct o1C_float *)(t1))->v) = 0.0f;
                            (((struct o20_float *)(t1))->v) = 0.0f;
                            *(unsigned char *)((t1 + 0x0)) = 0x0;
                        }
                    }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    return t2;
                }
                if (t0 == 5) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) != 0) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    return t2;
                }
                if (t0 == 6) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                    t1 = 0xA8;
                    if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA8))) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                if (t0 == 8) {
                    t1 = 0xA8;
                    if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA8))) == 0) {
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                        (((struct oA8_uchar *)(a4))->v) = 0x1;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t1 = 0x14;
                    }
                    return t1;
                }
                if (t0 == 9) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                    t0 = 0xA8;
                    if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA8))) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t0 = 0x14;
                    }
                    return t0;
                }
                return FUN_0c03f346(a4, 0x0, 0x1, 0xC532498);
            }
            t0 = 0xA8;
            if ((*(signed char *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0xA8))) == 0) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x28)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2)))) + 0x34)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x6C)); }
                (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x1555;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x78)) = *(struct mv3 *)((((((struct oC4_int *)((*(int *)((0xC40DC64 + ((*(signed char *)(((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498) + 0x2))) << 2))))))->v)) + 0x78)); }
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
        if (((unsigned char)(*(signed char *)0xC3BD445) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t0 = *(signed char *)((a4 + 0x2));
        t1 = t0;
        if (((unsigned char)(*(signed char *)0xC3BD447) & ((int)0x1 << (int)t0)) == 0) {
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x8;
            t1 = 0x8;
        }
        return t1;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}

int FUN_0c0d9ebc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t22;
    register int t31;
    register int t50;
    register int t55;
    register int t57;
    register int t62;
    register int t73;
    register int t75;
    register int t80;
    register int t82;
    register int t87;
    register int t95;
    register int t107;
    register int t122;
    register int t123;
    register int t200;
    register int t201;
    register int t206;
    register int t207;
    register int t210;
    register int t212;
    register int t214;
    register int t217;
    register int t241;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x16C);
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((*(short *)((a4 + 0x1E))))) * 3932160.0f) / 360.0f);
        }
    } else {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t22 = *(signed char *)((a4 + 0x14));
    if (t22 != 0) {
        if (t22 != 1) {
            if (t22 == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0199999996f);
                t31 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t31 - 1);
                t241 = (short)(t31 - 1);
                if ((short)(t31 - 1) != 0) {
                } else {
                    (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0xFFFFFFFF;
                    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0xFFFFFFFF;
                    (((struct o132_uchar *)(a4))->v) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t241 = 0x14;
                }
            } else {
                if (t22 == 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                    FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0)));
                    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                    if ((*(signed char *)((a4 + 0x132))) != 0) {
                        (((struct o132_uchar *)(a4))->v) = 0x0;
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0xA;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    t50 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t50 - 1);
                    t241 = (short)(t50 - 1);
                    if ((short)(t50 - 1) != 0) {
                    } else {
                        (((struct o12A_ushort *)(a4))->v) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                        *(unsigned short *)((a4 + 0x1C)) = 0x32;
                        (((struct o14_uchar *)(a4))->v) = 0x9;
                        t241 = 0x14;
                    }
                } else {
                    if (t22 == 4) {
                        t55 = (((struct oD0_int *)(a4))->v);
                        (((struct o78_uint *)(t55))->v) = (((((struct o78_int *)(t55))->v)) + (int)(((float)0x1 * 65536.0f) / 360.0f));
                        t57 = *(short *)((a4 + 0x1C));
                        *(unsigned short *)((a4 + 0x1C)) = (t57 - 1);
                        t241 = (short)(t57 - 1);
                        if ((short)(t57 - 1) != 0) {
                        } else {
                            *(unsigned short *)((a4 + 0x1C)) = 0x14;
                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                            t241 = 0x14;
                        }
                    } else {
                        if (t22 == 5) {
                            t62 = *(short *)((a4 + 0x1C));
                            *(unsigned short *)((a4 + 0x1C)) = (t62 - 1);
                            t241 = (short)(t62 - 1);
                            if ((short)(t62 - 1) != 0) {
                            } else {
                                *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
                                *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
                                FUN_0c0db188(a4, 0x0);
                                *(unsigned short *)((a4 + 0x1C)) = 0xA;
                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                t241 = 0x14;
                            }
                        } else {
                            if (t22 == 6) {
                                t73 = (((struct oD0_int *)(a4))->v);
                                (((struct o78_uint *)(t73))->v) = (((((struct o78_int *)(t73))->v)) - 3276);
                                t75 = *(short *)((a4 + 0x1C));
                                *(unsigned short *)((a4 + 0x1C)) = (t75 - 1);
                                t241 = (short)(t75 - 1);
                                if ((short)(t75 - 1) != 0) {
                                } else {
                                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                    t241 = 0x14;
                                }
                            } else {
                                if (t22 == 7) {
                                    t80 = (((struct oD0_int *)(a4))->v);
                                    (((struct o78_uint *)(t80))->v) = (((((struct o78_int *)(t80))->v)) - 182);
                                    t82 = *(short *)((a4 + 0x1C));
                                    *(unsigned short *)((a4 + 0x1C)) = (t82 - 1);
                                    t241 = (short)(t82 - 1);
                                    if ((short)(t82 - 1) != 0) {
                                    } else {
                                        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                        t241 = 0x14;
                                    }
                                } else {
                                    if (t22 == 8) {
                                        t87 = (((struct oD0_int *)(a4))->v);
                                        (((struct o78_uint *)(t87))->v) = (((((struct o78_int *)(t87))->v)) + (int)((3.0f * 65536.0f) / 360.0f));
                                        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                                        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                                        t95 = *(short *)((a4 + 0x1C));
                                        *(unsigned short *)((a4 + 0x1C)) = (t95 - 1);
                                        t241 = (short)(t95 - 1);
                                        if ((short)(t95 - 1) == 0) {
                                            *(unsigned short *)((a4 + 0x1C)) = 0x32;
                                            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                            t241 = 0x14;
                                        }
                                    } else {
                                        if (t22 == 9) {
                                            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
                                            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                                            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
                                            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0199999996f);
                                            t107 = *(short *)((a4 + 0x1C));
                                            *(unsigned short *)((a4 + 0x1C)) = (t107 - 1);
                                            t241 = (short)(t107 - 1);
                                            if ((short)(t107 - 1) == 0) {
                                                thunk_FUN_0c05abb2(0x45, 0x0);
                                                (((struct oA8_uchar *)(a4))->v) = 0x0;
                                                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 500.0f);
                                                (((struct o12A_ushort *)(a4))->v) = 0x0;
                                                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                                                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                                                *(unsigned short *)((a4 + 0x1C)) = (((short)((int)((int)(nlRand()) % (int)0x5)) * (short)0x3C) + 0x1E0);
                                                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                                                t241 = 0x14;
                                            }
                                        } else {
                                            t122 = FUN_0c042fe0();
                                            t241 = t122;
                                            if (t122 != 0) {
                                                t123 = FUN_0c043010();
                                                t241 = t123;
                                                if (t123 == 0) {
                                                    (((struct o14_uchar *)(a4))->v) = 0x1;
                                                    t241 = 0x14;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            t200 = FUN_0c043064();
            t241 = t200;
            if (t200 != 0) {
            } else {
                t201 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t201 - 1);
                t241 = (short)(t201 - 1);
                if ((short)(t201 - 1) != 0) {
                } else {
                    thunk_FUN_0c05abb2(0x44, 0x0);
                    (((struct oA8_uchar *)(a4))->v) = 0x1;
                    (((struct oAC_ushort *)(a4))->v) = 0x40F;
                    (((struct oA9_uchar *)(a4))->v) = 0x21;
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                    (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
                    *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x1;
                    t206 = nlRand();
                    t207 = ((~(((~t206) + 0x1) & 0x7)) + 0x1);
                    if ((int)t206 >= 0) {
                        t207 = (t206 & 0x7);
                    }
                    *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((0xC287C50 + t207)));
                    t210 = *(signed char *)((a4 + 0x2));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287B30 + (((t210 << 1) + t210) << 2))); }
                    t212 = *(signed char *)((a4 + 0x2));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((0xC287B90 + (((t212 << 1) + t212) << 2))); }
                    t214 = *(signed char *)((a4 + 0x2));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((0xC287BF0 + (((t214 << 1) + t214) << 2))); }
                    t217 = FUN_0c0d60a8((*(signed char *)((a4 + 0x2))));
                    if (t217 != 0) {
                        FUN_0c0d60bc((*(signed char *)((a4 + 0x2))));
                    }
                    (((struct o12A_ushort *)(a4))->v) = 0x0;
                    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                    *(unsigned short *)((a4 + 0x1C)) = 0x32;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t241 = 0x14;
                }
            }
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t241 = 0x14;
    }
    return t241;
}

int FUN_0c117ebe(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_1 = a4;
    v0_6 = a5;
    v0_7 = a6;
    v0_8 = a7;
    w0_0 = f4;
    w0_0 = f5;
    v0_2 = (0x0);
    v0_0 = (v0_1);
    if (((*(signed char *)((0x14 + (*(int *)((v0_1 + 0x10)))))) != 10)) goto L_C117F06;
    v0_5 = (0x15);
    if (((*(signed char *)((v0_0 + 0x15))) != 0)) goto L_C117F06;
    *(unsigned char *)((v0_0 + v0_5)) = ((*(signed char *)((v0_0 + v0_5))) + 0x1);
    if (((*(signed char *)((v0_0 + 0x14))) != 2)) goto L_C117EF8;
    v0_5 = (0xA);
    L_C117EFC:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    (((struct o14_uchar *)(v0_0))->v) = 0x63;
    v0_5 = (0x14);
    L_C118346:;
    return v0_5;
    L_C117EF8:;
    v0_5 = (v0_2);
    goto L_C117EFC;
    L_C117F06:;
    v0_9 = *(signed char *)((v0_0 + 0x14));
    v0_5 = (v0_9);
    v0_1 = (0xC0588BC);
    v0_4 = (0xC291B70);
    v0_1 = (0x8);
    v0_3 = (0xC291B88);
    v0_10 = (0xC058A6E);
    if ((v0_9 == 0)) goto L_C117F74;
    if (!((v0_5 != 1))) goto L_C118124;
    if ((v0_5 != 2)) goto L_C117F28;
    goto L_C118294;
    L_C118124:;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C118142;
    if ((v0_5 == 1)) goto L_C11814C;
    if ((v0_5 == 2)) goto L_C118156;
    if ((v0_5 == 3)) goto L_C118162;
    if ((v0_5 == 4)) goto L_C11816E;
    if (!((v0_5 == 5))) goto L_C11818A;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= (int)0x28)) goto L_C11818A;
    goto L_C118182;
    L_C11818A:;
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    goto L_C118346;
    L_C118182:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C11818A;
    L_C11816E:;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= (int)0x20)) goto L_C11818A;
    goto L_C118182;
    L_C118162:;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= (int)0x18)) goto L_C11818A;
    goto L_C118182;
    L_C118156:;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= (int)0x10)) goto L_C11818A;
    goto L_C118182;
    L_C11814C:;
    if (((int)(*(short *)((v0_0 + 0x1E))) <= (int)v0_1)) goto L_C11818A;
    goto L_C118182;
    L_C118142:;
    if (((int)(*(short *)((v0_0 + 0x1E))) > 0)) goto L_C118182;
    goto L_C11818A;
    L_C118294:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_1))->v) = (((((struct o6C_float *)(v0_1))->v)) + ((((struct o90_float *)(v0_1))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) + (0xC4 + (*(int *)((v0_0 + 0x10))))) + 0x0))) + 0x6C)) = *(struct mv3 *)((v0_1 + 0x6C)); }
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_1))->v) = (((((struct o6C_float *)(v0_1))->v)) + ((((struct o90_float *)(v0_1))->v)));
    v0_1 = (((struct o20_short *)(v0_0))->v);
    (((struct o20_ushort *)(v0_0))->v) = (v0_1 + 0x1);
    v0_5 = (0x20);
    if (((int)(short)(v0_1 + 0x1) < (int)0x10)) goto L_C118346;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_5 = (0x14);
    goto L_C118346;
    L_C117F28:;
    if ((v0_5 != 3)) goto L_C117F30;
    v0_5 = v0_2;
    *(int *)((int)stk + 28) = v0_5;
    v0_6 = v0_1;
    *(int *)((int)stk + 24) = v0_6;
    v0_7 = *(short *)((v0_0 + 0x1C));
    *(unsigned int *)(((int)stk + 44)) = v0_4;
    *(unsigned int *)(((int)stk + 40)) = (v0_4 + 0xC);
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), (v0_4 + 0xC), v0_4, v0_7, v0_6, v0_5);
    v0_4 = v0_2;
    *(int *)((int)stk + 20) = v0_4;
    v0_5 = v0_1;
    *(int *)((int)stk + 16) = v0_5;
    v0_6 = *(short *)((v0_0 + 0x1C));
    *(unsigned int *)(((int)stk + 32)) = v0_3;
    *(unsigned int *)(((int)stk + 36)) = (v0_3 + 0x10);
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (v0_3 + 0x10), v0_3, v0_6, v0_5, v0_4);
    v0_3 = v0_2;
    *(int *)((int)stk + 12) = v0_3;
    v0_4 = v0_1;
    *(int *)((int)stk + 8) = v0_4;
    FUN_0c0588bc((((((struct oC8_int *)(v0_0))->v)) + 0x84), (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 44))), (*(short *)((v0_0 + 0x1C))), v0_4, v0_3);
    v0_2 = v0_2;
    *(int *)((int)stk + 4) = v0_2;
    v0_1 = v0_1;
    *(int *)((int)stk + 0) = v0_1;
    FUN_0c058a6e((((((struct oC8_int *)(v0_0))->v)) + 0x14), (*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))), (*(short *)((v0_0 + 0x1C))), v0_1, v0_2);
    if (((*(int *)(((*(int *)(((((((struct o22_short *)(v0_0))->v)) << 2) + 0xC291C80))) + 0x0))) != (*(signed char *)((v0_0 + 0x2))))) goto L_C118220;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_5 = (v0_1);
    if (((int)v0_1 < (int)0xA)) goto L_C118218;
    goto L_C118346;
    L_C118218:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 + 0x1);
    v0_5 = ((v0_1 + 0x1));
    goto L_C118346;
    L_C118220:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    v0_5 = (v0_1);
    if (((int)v0_1 > 0)) goto L_C11822A;
    goto L_C118346;
    L_C11822A:;
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_5 = ((v0_1 - 1));
    goto L_C118346;
    L_C117F30:;
    if ((v0_5 != 10)) goto L_C117F38;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) + (0xC4 + (*(int *)((v0_0 + 0x10))))) + 0x0))) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)); }
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C11825A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) + (0xC4 + (*(int *)((v0_0 + 0x10))))) + 0x0))) + 0x6C)) = *(struct mv3 *)((((((struct oC4_int *)(v0_0))->v)) + 0x6C)); }
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    v0_5 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) >= 0)) goto L_C118346;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct o20_ushort *)(v0_0))->v) = v0_2;
    v0_5 = (0x20);
    goto L_C118346;
    L_C117F38:;
    if ((v0_5 != 11)) goto L_C117F40;
    goto L_C11825A;
    L_C117F40:;
    if ((v0_5 != 12)) goto L_C117F48;
    goto L_C118294;
    L_C117F48:;
    if ((v0_5 != 13)) goto L_C117F50;
    v0_5 = ((FUN_0c03f346(v0_0, v0_6, v0_7, v0_8)));
    goto L_C118346;
    L_C117F50:;
    if ((v0_5 != 99)) goto L_C117F58;
    (((struct o14_uchar *)(v0_0))->v) = 0xA;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_0 = *(float *)0xC118444;
    (((struct o90_float *)(v0_1))->v) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) + (0xC4 + (*(int *)((v0_0 + 0x10))))) + 0x0))) + 0x6C)) = *(struct mv3 *)((v0_1 + 0x6C)); }
    (((struct o90_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = w0_0;
    v0_5 = (0x90);
    goto L_C118346;
    L_C117F58:;
    goto L_C118346;
    L_C117F74:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_0))->v) = 0x21;
    FUN_0c1171f0(v0_0);
    FUN_0c03744a(((((struct oC8_int *)(v0_0))->v)), 0xD, 0x8, (*(int *)0xC4B410C));
    v0_5 = (((struct oC8_int *)(v0_0))->v);
    *(unsigned int *)(((int)stk + 32)) = v0_5;
    *(unsigned short *)((v0_5 + 0x6)) = 0x21F;
    v0_5 = *(int *)(((int)stk + 32));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x90)) = *(struct mv3 *)((v0_5 + 0x6C)); }
    v0_5 = *(signed char *)((v0_0 + 0x2));
    nlAddVector3op(((*(int *)(((int)stk + 32))) + 0x6C), ((*(int *)(((int)stk + 32))) + 0x90), (0xC291B28 + (((v0_5 << 1) + v0_5) << 2)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 32) + 0x10)) = *(struct mv3 *)(((*(int *)(((int)stk + 32))) + 0x6C)); }
    v0_8 = ((*(int *)0xC4B410C));
    if ((((((struct o22_short *)(v0_0))->v)) != 4)) goto L_C118000;
    if (((*(signed char *)((v0_0 + 0x2))) != 3)) goto L_C118000;
    v0_6 = (0x8);
    v0_7 = (0x9);
    L_C11801A:;
    FUN_0c03744a(((((struct oC4_int *)(v0_0))->v)), v0_6, v0_7, v0_8);
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    *(unsigned short *)((v0_5 + 0x6)) = 0x21F;
    (((struct o70_float *)(v0_5))->v) = (*(float *)(((int)stk + 52)));
    v0_5 = (((struct oC4_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_5))->v) = (((((struct o6C_float *)(v0_5))->v)) - 300.0f);
    (((struct o90_float *)(v0_5))->v) = 18.75f;
    v0_5 = (((struct oC8_int *)(v0_0))->v);
    (((struct o6C_float *)(v0_5))->v) = (((((struct o6C_float *)(v0_5))->v)) - 300.0f);
    (((struct o90_float *)(v0_5))->v) = 18.75f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) + (0xC4 + (*(int *)((v0_0 + 0x10))))) + 0x0))) + 0x6C)) = *(struct mv3 *)((v0_5 + 0x6C)); }
    w0_0 = (18.75f);
    w0_0 = (300.0f);
    if (((*(int *)(((*(int *)(((((((struct o22_short *)(v0_0))->v)) << 2) + 0xC291C80))) + 0x0))) != (*(signed char *)((v0_0 + 0x2))))) goto L_C1180BC;
    v0_5 = (v0_1);
    L_C1180C0:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_5;
    v0_5 = v0_2;
    *(int *)((int)stk + 28) = v0_5;
    v0_6 = v0_1;
    *(int *)((int)stk + 24) = v0_6;
    v0_7 = *(short *)((v0_0 + 0x1C));
    *(unsigned int *)(((int)stk + 44)) = v0_4;
    *(unsigned int *)(((int)stk + 32)) = (v0_4 + 0xC);
    FUN_0c0588bc((((((struct oC4_int *)(v0_0))->v)) + 0x84), (v0_4 + 0xC), v0_4, v0_7, v0_6, v0_5);
    v0_4 = v0_2;
    *(int *)((int)stk + 20) = v0_4;
    v0_5 = v0_1;
    *(int *)((int)stk + 16) = v0_5;
    v0_6 = *(short *)((v0_0 + 0x1C));
    *(unsigned int *)(((int)stk + 36)) = v0_3;
    *(unsigned int *)(((int)stk + 40)) = (v0_3 + 0x10);
    FUN_0c058a6e((((((struct oC4_int *)(v0_0))->v)) + 0x14), (v0_3 + 0x10), v0_3, v0_6, v0_5, v0_4);
    v0_3 = v0_2;
    *(int *)((int)stk + 12) = v0_3;
    v0_4 = v0_1;
    *(int *)((int)stk + 8) = v0_4;
    FUN_0c0588bc((((((struct oC8_int *)(v0_0))->v)) + 0x84), (*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 44))), (*(short *)((v0_0 + 0x1C))), v0_4, v0_3);
    v0_2 = v0_2;
    *(int *)((int)stk + 4) = v0_2;
    v0_3 = v0_1;
    *(int *)((int)stk + 0) = v0_3;
    FUN_0c058a6e((((((struct oC8_int *)(v0_0))->v)) + 0x14), (*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))), (*(short *)((v0_0 + 0x1C))), v0_3, v0_2);
    goto L_C118124;
    L_C1180BC:;
    v0_5 = (v0_2);
    goto L_C1180C0;
    L_C118000:;
    v0_6 = ((*(int *)(((((*(signed char *)((v0_0 + 0x2))) << 2) + (0xC291BA8 + (((((((struct o22_short *)(v0_0))->v)) << 2) << 2) << 1))) + 0x0))));
    v0_7 = (0x8);
    goto L_C11801A;
}
