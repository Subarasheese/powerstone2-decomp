/* Straight-line functions with calls and guards (batch gen_jd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10A8_int { char p[0x10A8]; int v; };
struct o10A8_uint { char p[0x10A8]; unsigned int v; };
struct o10AC_uint { char p[0x10AC]; unsigned int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10BC_uint { char p[0x10BC]; unsigned int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10C8_uint { char p[0x10C8]; unsigned int v; };
struct o10CC_uint { char p[0x10CC]; unsigned int v; };
struct o10D0_uint { char p[0x10D0]; unsigned int v; };
struct o10D4_uint { char p[0x10D4]; unsigned int v; };
struct o10D8_uint { char p[0x10D8]; unsigned int v; };
struct o10DC_uint { char p[0x10DC]; unsigned int v; };
struct o10E0_uint { char p[0x10E0]; unsigned int v; };
struct o10E4_uint { char p[0x10E4]; unsigned int v; };
struct o10E8_uint { char p[0x10E8]; unsigned int v; };
struct o10EC_uint { char p[0x10EC]; unsigned int v; };
struct o10F0_uint { char p[0x10F0]; unsigned int v; };
struct o10F8_uint { char p[0x10F8]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o3850_short { char p[0x3850]; short v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o38F8_int { char p[0x38F8]; int v; };
struct o38F8_uint { char p[0x38F8]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o430_short { char p[0x430]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o448_uint { char p[0x448]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8C_uint { char p[0xF8C]; unsigned int v; };
struct oFA8_uint { char p[0xFA8]; unsigned int v; };
struct oFAC_uint { char p[0xFAC]; unsigned int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFBC_int { char p[0xFBC]; int v; };
struct oFBC_uint { char p[0xFBC]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
struct oFE0_uint { char p[0xFE0]; unsigned int v; };
struct oFE4_uint { char p[0xFE4]; unsigned int v; };
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int FUN_0c037bf6(int);
int FUN_0c05261c(int);
int FUN_0c059e60(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c059f20(int, int);
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c06a406(int);
int FUN_0c06a444(int);
int FUN_0c07bdd0(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0a312c(int);
int FUN_0c0c2d56(int, int, int, int, float);
extern int FUN_0c0c3010();
int copy_device(void);
int FUN_0c1366b0(int, int, int);
int FUN_0c138c30(int);
int FUN_0c13ad68(int, int, int, int);
int FUN_0c14f0c2(int, int);
int FUN_0c14fc70(int, int);
int FUN_0c15009e(int, float, float, float, float, float);
int FUN_0c162c4e(int, int, int, int);
int adxf_ChkPrmPt(int, int);
int FUN_0c2b4ddc(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c2bca16(int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2d9f88(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int fx29_spawn_burst8(int, int);
int kdGetDevice(int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(int, int, int, int);
int mpdrv_init_memory(void);
int mpdrv_memset_l(int, int, int);
int mpdrv_swapmode(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int thunk_FUN_0c2d9e70(int, int);
int trigger(void);
int FUN_0c0e40f8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06b5c0(int a4);
void FUN_0c0a57f0(int a4, int a5, int a6);
int FUN_0c13451c(int a4);
int FUN_0c2d9fd4(void);
int FUN_0c2b5036(int a4, int a5, int a6, int a7);
int FUN_0c2bc7e4(int a4, int a5, int a6, int a7);
int FUN_0c0a52a6(int a4, int a5, int a6, int a7, float f4);
int ADXF_LoadPartition(int a4, int a5, int a6, int a7);

int FUN_0c0e40f8(int a4, int a5, int a6, int a7, float f4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t3;
    register int t6;
    register int t10;
    register int t26;
    register int t40;
    register int t48;
    register int t49;
    register int t51;
    register int t53;
    register float t89;
    register float t91;
    register int t92;
    register int t95;
    register float u98;
    register float u100;
    register float u101;
    register float u102;
    register float u104;
    register float u106;
    register float u107;
    register float u108;
    register float u109;
    register float u110;
    register float u111;
    register float u112;
    register float u116;
    register float u118;
    register float u119;
    register float u120;
    register float u122;
    register float u124;
    register float u125;
    register float u126;
    register float u127;
    register float u133;
    register float u145;
    register int t93;
    register int t94;
    register int t148;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)((a4 + 0x38)) = (*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38)));
    t3 = *(signed char *)((a4 + 0x15));
    if (t3 != 0) {
        if (t3 == 1) {
            if ((*(int *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x0))) == 0) {
                t6 = (((struct oCC_int *)(a4))->v);
                (((struct o8C_float *)(t6))->v) = (((((struct o8C_float *)(t6))->v)) + 0.100000001f);
                if (!(1.0f > ((((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v)))) {
                    t10 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t10 + 0x6)) = ((*(short *)((t10 + 0x6))) & 0xFFEF);
                    (((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))), a7, 1.0f);
                }
            } else {
                if ((*(short *)((a4 + 0x1E))) != 0) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((*(short *)((a4 + 0x1E))) != 0) {
                        t26 = (((struct oC4_int *)(a4))->v);
                        (((struct o8C_float *)(t26))->v) = ((-((((struct o8C_float *)(t26))->v))) + (1.0f + 1.0f));
                    } else {
                        (((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v) = 1.0f;
                    }
                }
                t40 = (((struct oCC_int *)(a4))->v);
                (((struct o8C_float *)(t40))->v) = (((((struct o8C_float *)(t40))->v)) + 0.0199999996f);
                (((struct o8C_float *)((*(int *)(((0xC4 + a4) + 0x4)))))->v) = ((((struct o8C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v));
                if (!(1.0f > ((((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v)))) {
                    t48 = *(int *)(((0xC4 + a4) + 0x4));
                    (((struct o8C_float *)((*(int *)(((0xC4 + a4) + 0x8)))))->v) = 1.0f;
                    (((struct o8C_float *)(t48))->v) = 1.0f;
                    t49 = (((struct oC4_int *)(a4))->v);
                    *(unsigned short *)((t49 + 0x6)) = ((*(short *)((t49 + 0x6))) & 0xFFEF);
                    t51 = (((struct oC8_int *)(a4))->v);
                    *(unsigned short *)((t51 + 0x6)) = ((*(short *)((t51 + 0x6))) & 0xFFEF);
                    t53 = (((struct oCC_int *)(a4))->v);
                    *(unsigned short *)((t53 + 0x6)) = ((*(short *)((t53 + 0x6))) & 0xFFEF);
                    FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))), a7, 1.0f);
                }
            }
        }
    } else {
        math_mat_get_translate((a4 + 0x64), (((int)stk + 0) + 0x18));
        t89 = math_cos_angle16((*(int *)((a4 + 0x38))));
        t91 = math_sin_angle16((*(int *)((a4 + 0x38))));
        t92 = 0xC0E426C;
        t95 = 0x0;
        for (;;) {
            if ((int)t95 < (int)(*(int *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x4)))) {
                t94 = t95;
                t94 = (t94 << 1);
                t93 = t95;
                t94 = (t94 + t93);
                t94 = (t94 << 2);
                t92 = 0x18;
                u98 = *(float *)((((int)stk + 0) + t92));
                t92 = 0x8;
                u100 = *(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + t92));
                t92 = 0x20;
                u101 = u98;
                u101 = u101 + t89 * (*(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + 0x0)));
                u102 = u101;
                u102 = u102 + t91 * u100;
                *(float *)(((int)stk + 0)) = u102;
                u104 = *(float *)((((int)stk + 0) + t92));
                t92 = 0x8;
                u106 = *(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + t92));
                t92 = 0x8;
                u107 = (u104 - (((*(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + 0x0))) * t91)));
                u107 = u107 + t89 * u106;
                *(float *)((((int)stk + 0) + t92)) = u107;
                t92 = 0x4;
                u108 = *(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + t92));
                t92 = 0x1C;
                u109 = *(float *)((((int)stk + 0) + t92));
                t92 = 0x4;
                t93 = 0xC162C4E;
                *(float *)((((int)stk + 0) + t92)) = (u109 + u108);
                t92 = 0xC;
                u110 = *(float *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + t92));
                t92 = 0x14;
                *(float *)((((int)stk + 0) + t92)) = (t89 * u110);
                t92 = 0xC;
                u111 = *(float *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + t92));
                t92 = 0xC;
                *(float *)((((int)stk + 0) + t92)) = (t91 * u111);
                t92 = 0x10;
                u112 = *(float *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + t92));
                t92 = 0x10;
                *(float *)((((int)stk + 0) + t92)) = u112;
                t92 = (*(signed char *)((a4 + 0x1)));
                t92 = (FUN_0c162c4e(t92, (*(int *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x0))), ((int)stk + 0), (((int)stk + 0) + 0xC)));
                t92 = 0x18;
                u116 = *(float *)((((int)stk + 0) + t92));
                t92 = 0x8;
                u118 = *(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + t92));
                t92 = 0x20;
                u119 = u116;
                u119 = u119 + t89 * (*(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + 0x0)));
                u120 = u119;
                u120 = u120 + t91 * u118;
                *(float *)(((int)stk + 0)) = u120;
                u122 = *(float *)((((int)stk + 0) + t92));
                t92 = 0x8;
                u124 = *(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + t92));
                t92 = 0x8;
                u125 = (u122 - (((*(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + 0x0))) * t91)));
                u125 = u125 + t89 * u124;
                *(float *)((((int)stk + 0) + t92)) = u125;
                t92 = 0x4;
                u126 = *(float *)((((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x2C) + t94) + t92));
                t92 = 0x1C;
                u127 = *(float *)((((int)stk + 0) + t92));
                t92 = 0x4;
                *(float *)((((int)stk + 0) + t92)) = (u127 + u126);
                t93 = (*(int *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + 0x0)));
                if (t93 == 0) {
                    t93 = 0xC14F0C2;
                    t92 = (FUN_0c14f0c2(0x0, ((int)stk + 0)));
                    t92 = 0xCC;
                    t93 = (*(int *)((a4 + t92)));
                    t92 = (*(short *)((t93 + 0x6)));
                    t92 = (t92 | 0x10);
                    *(unsigned short *)((t93 + 0x6)) = t92;
                    t92 = 0xCC;
                    t93 = (*(int *)((a4 + t92)));
                    t92 = (t92 - 64);
                    *(float *)((t93 + t92)) = 0.5f;
                    t148 = t93;
                } else {
                    t92 = 0xC0E4358;
                    t93 = 0xC15009E;
                    u133 = *(float *)((t92 + 0x0));
                    t92 = 0x8;
                    t92 = (FUN_0c15009e(((int)stk + 0), 0.100000001f, 0.100000001f, 0.100000001f, (*(float *)((((((((t1 - 2) << 2) << 2) + (t1 - 2)) << 2) + 0xC1CBC98) + t92))), u133));
                    t92 = 0xC4;
                    t93 = (*(int *)((a4 + t92)));
                    t92 = (*(short *)((t93 + 0x6)));
                    t92 = (t92 | 0x10);
                    *(unsigned short *)((t93 + 0x6)) = t92;
                    t92 = 0xC8;
                    t93 = (*(int *)((a4 + t92)));
                    t92 = (*(short *)((t93 + 0x6)));
                    t92 = (t92 | 0x10);
                    *(unsigned short *)((t93 + 0x6)) = t92;
                    t92 = 0xCC;
                    t93 = (*(int *)((a4 + t92)));
                    t92 = (*(short *)((t93 + 0x6)));
                    t92 = (t92 | 0x10);
                    *(unsigned short *)((t93 + 0x6)) = t92;
                    t92 = 0x8C;
                    t93 = (*(int *)(((0xC4 + a4) + 0x4)));
                    *(float *)(((*(int *)(((0xC4 + a4) + 0x8))) + t92)) = 0.5f;
                    *(float *)((t93 + t92)) = 0.5f;
                    t92 = (t92 + 0x38);
                    t93 = (*(int *)((a4 + t92)));
                    t92 = 0xC0E4360;
                    u145 = *(float *)((t92 + 0x0));
                    t92 = 0x8C;
                    *(float *)((t93 + t92)) = u145;
                    t92 = 0xA;
                    *(unsigned short *)((a4 + 0x1E)) = t92;
                    t92 = (math_mat_get_translate((a4 + 0x64), ((int)stk + 0)));
                    t93 = 0xC059CFC;
                    t92 = (thunk_FUN_0c05abb2(0x45, ((int)stk + 0)));
                }
                t95 = (t95 + 0x1);
                t93 = t148;
                continue;
            }
            break;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}

int FUN_0c06b5c0(int a4)
{
    int stk[8];
    register int t0;
    register int t4;
    register int t5;
    register int t7;
    register int t49;
    register int t51;
    register int t58;
    register int t59;
    register int t64;
    register int t66;
    register int t67;
    register int t85;
    register int t96;
    register int t136;
    register int t137;
    int t50;
    register int t141;
    register float u74;
    register float u70;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        (((struct o3850_uint *)(a4))->v) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        t4 = *(int *)((a4 + 0x38));
        t5 = (((struct o3850_short *)(a4))->v);
        t7 = (unsigned short)(t5 - t4);
        if ((0x8000 & (unsigned short)(t5 - t4)) != 0) {
            t7 = ((unsigned short)(t5 - t4) | 0xFFFF0000);
        }
        if ((int)t7 <= (int)0xFFFFFE94) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x16C);
            FUN_0c06a406(a4);
        } else {
            if ((int)t7 >= (int)0x16C) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x16C);
                FUN_0c06a406(a4);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t7 + (unsigned int)0x0)) + ((((int)0x0 > (int)t7)) ? 1u : 0u))) >> 1));
            }
        }
        if (((int)((unsigned int)(*(int *)0xC542260) % (unsigned int)0x14)) == 0) {
            FUN_0c07bdd0(a4, 0x20);
        }
    } else {
        FUN_0c06a444(a4);
    }
    t49 = (((struct o430_short *)(a4))->v);
    *(unsigned int *)(((int)stk + 12)) = (unsigned short)t49;
    if ((((unsigned short)t49 & 128) == 0) && (t50 = *(int *)(((int)stk + 12)), (t50 & 0x100) == 0)) {
        t51 = FUN_0c064ee4(a4, 0x2);
        *(unsigned int *)(((int)stk + 16)) = t51;
        if (t51 != 0) {
            (((struct o50_float *)(a4))->v) = 30.0f;
            (((struct o5C_float *)(a4))->v) = -2.5f;
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o374B_uchar *)(a4))->v) = 0x1;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
            *(int *)((int)stk + 8) = 0x8;
            *(int *)((int)stk + 4) = 0x0;
            t58 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((int)stk + 12)) = t58;
            t59 = t58;
            *(int *)((int)stk + 0) = t59;
            FUN_0c07e79c(a4, t58, 0x0, 0x8, t59, 0x0, 0x8);
            FUN_0c06a444(a4);
            (((struct o3721_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t141 = 0x15;
        } else {
            if ((*(short *)((a4 + 0x1C))) != 0) {
                t64 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t64 - 1);
                if ((short)(t64 - 1) == 0) {
                    *(int *)((int)stk + 8) = 0x23;
                    *(int *)((int)stk + 4) = 0x2;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x23, 0xFFFFFFFF, 0x2, 0x23);
                    t66 = (((struct o118_int *)(a4))->v);
                    (((struct o98_float *)(t66))->v) = 10.0f;
                    (((struct o94_float *)(t66))->v) = 10.0f;
                    t67 = (((struct o11C_int *)(a4))->v);
                    (((struct o98_float *)(t67))->v) = 10.0f;
                    (((struct o94_float *)(t67))->v) = 10.0f;
                    u70 = 10.0f;
                }
                u74 = u70;
            }
            if ((*(short *)((a4 + 0x1E))) == 0) {
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    if (((unsigned short)((((struct o430_short *)(a4))->v)) & 0x200) != 0) {
                        FUN_0c07bdd0(a4, 0x21);
                        t85 = ((int (*)(int, int, int))(FUN_0c0c3010))(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
                        *(int *)((int)stk + 8) = 0x24;
                        *(int *)((int)stk + 4) = 0x2;
                        *(int *)((int)stk + 0) = 0xFFFFFFFF;
                        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x24, 0xFFFFFFFF, 0x2, 0x24);
                        *(unsigned short *)((a4 + 0x1C)) = 0x8;
                        *(unsigned short *)((a4 + 0x1E)) = 0xC;
                        (((struct o20_ushort *)(a4))->v) = 0x1;
                        thunk_FUN_0c05abb2(0x46, (a4 + 0x28));
                    }
                } else {
                    t96 = ((int (*)(int, int, int, float))(FUN_0c0c3010))(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0, u74);
                    *(int *)((int)stk + 8) = 0x24;
                    *(int *)((int)stk + 4) = 0x2;
                    *(int *)((int)stk + 0) = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x24, 0xFFFFFFFF, 0x2, 0x24);
                    *(unsigned short *)((a4 + 0x1C)) = 0x8;
                    *(unsigned short *)((a4 + 0x1E)) = 0xE;
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
                }
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x8)) = *(struct mv3 *)((((((struct o376C_int *)(a4))->v)) + 0x28)); }
            (((struct o28_float *)(a4))->v) = (((((struct o8_float *)(((int)stk + 12)))->v)) - (((math_sin_angle16((*(int *)((a4 + 0x38))))) * 30.0f)));
            (((struct o30_float *)(a4))->v) = (((((struct o8_float *)((((int)stk + 12) + 0x8)))->v)) - (((math_cos_angle16((*(int *)((a4 + 0x38))))) * 30.0f)));
            (((struct o2C_float *)(a4))->v) = (((((struct o4_float *)((((int)stk + 12) + 0x8)))->v)) + 50.0f);
            t141 = 0x2C;
        }
    } else {
        (((struct o50_float *)(a4))->v) = 30.0f;
        (((struct o5C_float *)(a4))->v) = -2.5f;
        (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 5.0f));
        (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 5.0f));
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o374B_uchar *)(a4))->v) = 0x1;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 50.0f);
        *(int *)((int)stk + 8) = 0x8;
        *(int *)((int)stk + 4) = 0x0;
        t136 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t136;
        t137 = t136;
        *(int *)((int)stk + 0) = t137;
        FUN_0c07e79c(a4, t136, 0x0, 0x8, t137, 0x0, 0x8);
        FUN_0c06a444(a4);
        (((struct o3721_uchar *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t141 = 0x15;
    }
    return t141;
}

void FUN_0c0a57f0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(33.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    (((struct o50_float *)(a4))->v) = -13.5f;
                    (((struct o5C_float *)(a4))->v) = -2.0f;
                }
                return;
            }
            if (t0 == 3) {
                t1 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
                    t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                    if (t1 != 0) {
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        FUN_0c0a3058(a4, 0xFFFFFFFF, 0x4, 0x2A);
                        FUN_0c14fc70((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
                        FUN_0c059f20((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))));
    return;
                    }
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return;
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    return;
            }
            if (t0 == 4) {
                t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
                if ((unsigned char)t0 != 0) {
                    FUN_0c085cac(a4, 0xE, 0x0);
    return;
                }
                return;
            }
            return;
        }
        FUN_0c0a312c(a4);
        if ((int)(*(short *)((a4 + 0x1E))) >= 0) {
            t0 = *(int *)((a4 + 0x38));
            t1 = (((struct o3850_short *)(a4))->v);
            t2 = *(int *)((a4 + 0x38));
            t3 = (unsigned short)(t1 - t0);
            if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
                t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
            }
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)(t2 + ((int)((int)t3 / (int)(*(short *)((a4 + 0x1E))))));
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        if ((*(short *)((a4 + 0x1C))) == 4) {
            FUN_0c07d030(a4, 0x2);
            FUN_0c138c30(a4);
        }
        t0 = ((int (*)(int))(FUN_0c037bf6))(a4);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((short)(t0 + 0x1) != 0xB4) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x14);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
        }
        return;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0xF);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x4;
    (((struct o3850_uint *)(a4))->v) = (FUN_0c07d774(a4));
    (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0x28)); }
}

int FUN_0c13451c(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R10;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_3 = a4;
    v0_4 = *(signed char *)((v0_3 + 0x18));
    v0_2 = (v0_4);
    v0_1 = ((*(int *)((v0_3 + 0x10))));
    v0_0 = (v0_3);
    v0_3 = (0x0);
    w0_0 = (0.200000003f);
    w0_1 = (0.0199999996f);
    if ((v0_4 == 0)) goto L_C13454E;
    if ((v0_2 == 1)) goto L_C13455A;
    if ((v0_2 != 2)) goto L_C13454A;
    w0_2 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_2 + w0_1);
    v0_2 = (0x40);
    if ((!((w0_2 + w0_1) > w0_0))) goto L_C1346A0;
    *(float *)((v0_0 + v0_2)) = w0_0;
    L_C1346A0:;
    v0_2 = (FUN_0c064f80(v0_0)) == 0;
    if (v0_2) goto L_C1346EE;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) + 0x1);
    fx29_spawn_burst8(v0_0, 0x0);
    FUN_0c059e9a(v0_1, 0x24, (v0_0 + 0x28));
    FUN_0c05261c((*(int *)0xC241C34));
    (((struct o12A_ushort *)(v0_0))->v) = (~((int)0x1 << (int)(*(signed char *)((v0_0 + 0x1)))));
    FUN_0c07e2f4(v0_0, 0x63);
    v0_2 = (0x40);
    w0_0 = ((((((struct o40_float *)(v0_0))->v)) * (1.0f + 1.0f)));
    L_C134708:;
    *(float *)((v0_0 + v0_2)) = w0_0;
    w0_0 = (((struct o40_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    v0_2 = (0x44);
    L_C134742:;
    return v0_2;
    L_C1346EE:;
    (((struct o50_float *)(v0_0))->v) = (((((struct o50_float *)(v0_0))->v)) + ((((struct o5C_float *)(v0_0))->v)));
    v0_2 = (0x2C);
    w0_0 = ((((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v))));
    goto L_C134708;
    L_C13454A:;
    (((struct o40_float *)(v0_0))->v) = (((((struct o40_float *)(v0_0))->v)) + 0.00999999978f);
    v0_2 = (0x40);
    w0_0 = (0.100000001f);
    FPUL_ = (0x3C23D70A);
    if ((!(((((struct o40_float *)(v0_0))->v)) > 0.100000001f))) goto L_C134734;
    *(float *)((v0_0 + v0_2)) = w0_0;
    L_C134734:;
    w0_0 = *(float *)((v0_0 + v0_2));
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    (((struct o12A_ushort *)(v0_0))->v) = v0_3;
    v0_2 = (0x12A);
    goto L_C134742;
    L_C13455A:;
    (((struct o22_ushort *)(v0_0))->v) = (((((struct o22_short *)(v0_0))->v)) + 0x1);
    w0_2 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_2 + w0_1);
    v0_2 = (0x40);
    if ((!((w0_2 + w0_1) > w0_0))) goto L_C134572;
    *(float *)((v0_0 + v0_2)) = w0_0;
    L_C134572:;
    w0_0 = *(float *)((v0_0 + v0_2));
    (((struct o48_float *)(v0_0))->v) = w0_0;
    (((struct o44_float *)(v0_0))->v) = w0_0;
    if ((((((struct o22_short *)(v0_0))->v)) != 32)) goto L_C1345AE;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) + 0x1);
    (((struct o54_float *)(v0_0))->v) = 0.0f;
    (((struct o4C_float *)(v0_0))->v) = 0.0f;
    (((struct o60_float *)(v0_0))->v) = 0.0f;
    (((struct o58_float *)(v0_0))->v) = 0.0f;
    (((struct o50_float *)(v0_0))->v) = -10.0f;
    (((struct o5C_float *)(v0_0))->v) = -5.0f;
    L_C1345AE:;
    v0_2 = (0xC532498);
    w0_0 = (20.0f);
    if (((int)((((struct o22_short *)(v0_0))->v)) >= (int)0x10)) goto L_C134660;
    thunk_FUN_0c058310((((((struct oF4_int *)((((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x3938) + v0_2)))->v)) + 0x28), ((int)stk + 0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x4C)) = *(struct mv3 *)((v0_1 + 0x28)); }
    (((struct o50_float *)(v0_0))->v) = ((*(float *)(((int)stk + 4))) + w0_0);
    (((struct o28_float *)(v0_0))->v) = (((((struct o28_float *)(v0_0))->v)) + ((((((struct o4C_float *)(v0_0))->v)) - ((((struct o28_float *)(v0_0))->v))) / 5.0f));
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((((struct o50_float *)(v0_0))->v)) - ((((struct o2C_float *)(v0_0))->v))) / 5.0f));
    v0_2 = (0x30);
    w0_0 = ((((((struct o30_float *)(v0_0))->v)) + ((((((struct o54_float *)(v0_0))->v)) - ((((struct o30_float *)(v0_0))->v))) / 5.0f)));
    L_C13468C:;
    *(float *)((v0_0 + v0_2)) = w0_0;
    goto L_C134742;
    L_C134660:;
    thunk_FUN_0c058310((((((struct oF4_int *)((((short)(*(signed char *)((v0_1 + 0x1))) * (short)0x3938) + v0_2)))->v)) + 0x28), ((int)stk + 0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    v0_2 = (0x2C);
    w0_0 = (((*(float *)(((int)stk + 4))) + w0_0));
    goto L_C13468C;
    L_C13454E:;
    (((struct o18_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x18))) + 0x1);
    (((struct o22_ushort *)(v0_0))->v) = v0_3;
    goto L_C13455A;
}

int FUN_0c2d9fd4(void)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t11;
    register int t13;
    register int t15;
    register int t21;
    register int t24;
    register int t26;
    register int t31;
    register int t32;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;

    (((struct o10B4_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct o10B8_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    t2 = 0x0;
    t3 = 0x6000;
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)0xC8D4D84;
        *(unsigned int *)((((0xFE8 + t5) + t2) + 0x0)) = (((((struct oFC8_int *)(t5))->v)) + t4);
        t7 = *(int *)0xC8D4D84;
        t9 = ((0xFE8 + t7) + t2);
        t2 = (t2 + 0x4);
        (((struct o60_uint *)(t9))->v) = (((((struct oFC8_int *)(t7))->v)) + t3);
        t3 = (t3 + 0x400);
        t4 = (t4 + 0x400);
        if ((unsigned int)t2 >= (unsigned int)0x60) {
            break;
        }
    }
    t11 = *(int *)0xC8D4D84;
    (((struct o10A8_uint *)(t11))->v) = ((((struct oFC4_int *)(t11))->v));
    t13 = *(int *)0xC8D4D84;
    (((struct o10AC_uint *)(t13))->v) = (((((struct oFC4_int *)(t13))->v)) + 0x3000);
    t15 = *(int *)0xC8D4D84;
    (((struct oFCC_uint *)(t15))->v) = ((((struct o10A8_int *)(t15))->v));
    mpdrv_memset_l(((*(int *)0xC8D4D84) + 0x4), 0x0, 0x8);
    mpdrv_memset_l(((*(int *)0xC8D4D84) + 0x28), 0x0, 0x108);
    t21 = 0x0;
    for (;;) {
        mpdrv_clear_deviceinfo((((*(int *)0xC8D4D84) + 0x44C) + t21));
        t21 = (t21 + 0x78);
        if ((unsigned int)t21 >= (unsigned int)0xB40) {
            break;
        }
    }
    t24 = 0x0;
    for (;;) {
        t26 = ((0xF90 + (*(int *)0xC8D4D84)) + t24);
        t24 = (t24 + 0x1);
        *(unsigned char *)((t26 + 0x0)) = 0x0;
        if ((int)t24 >= (int)0x18) {
            break;
        }
    }
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(signed char *)0xC3007BC);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = (*(signed char *)0xC3007BD);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x2)) = (*(signed char *)0xC3007BE);
    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x3)) = (*(signed char *)0xC3007BF);
    t31 = *(volatile int *)0xA05F689C;
    t32 = 0xF;
    if ((int)(unsigned char)t31 <= (int)0x1) {
        t32 = 0x7;
    }
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x4) + 0x4);
    t34 = 0xA05F689C;
    t35 = ((((int)stk + 0) + 0x4) + 0x4);
    t36 = (((int)stk + 0) + 0x4);
    t37 = 0x0;
    t38 = 0x0;
    t39 = t21;
    for (;;) {
        if (((*(signed char *)((t36 + 0x0))) & (signed char)t32) != 0) {
            t35 = t38;
            t34 = (*(int *)0xC8D4D84);
            t35 = (t35 + 0x1);
            t39 = 0x0;
            *(unsigned char *)((((0xF90 + t34) + t37) + 0x0)) = 0x52;
            for (;;) {
                t39 = (t39 + 0x1);
                t34 = (*(int *)0xC8D4D84);
                *(unsigned char *)((((0xF90 + t34) + t35) + 0x0)) = 0x45;
                t35 = (t35 + 0x1);
                if ((int)t39 >= (int)0x5) {
                    break;
                }
            }
        }
        t36 = (t36 + 0x1);
        t38 = (t38 + 0x6);
        t37 = (t37 + 0x6);
        if ((unsigned int)t36 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
            break;
        }
    }
    (((struct o10C0_uint *)((*(int *)0xC8D4D84)))->v) = 0xC3500000;
    (((struct oFDC_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct oFD8_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct oFE0_uint *)((*(int *)0xC8D4D84)))->v) = 0x1;
    (((struct o10C8_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct o10EC_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct o10E8_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct o10CC_uint *)((*(int *)0xC8D4D84)))->v) = 0x5;
    (((struct o10D0_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct o10D8_uint *)((*(int *)0xC8D4D84)))->v) = 0xA;
    (((struct o10DC_uint *)((*(int *)0xC8D4D84)))->v) = 0x5;
    (((struct o10E0_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct o10E4_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct oFAC_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct oFB0_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    (((struct oFBC_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC8D4D84) + 0x0)) = 0x54524F50;
    *(unsigned int *)(((*(int *)0xC8D4D84) + 0x24)) = 0x20564544;
    (((struct o448_uint *)((*(int *)0xC8D4D84)))->v) = 0x4F464E49;
    (((struct oF8C_uint *)((*(int *)0xC8D4D84)))->v) = 0x4C424E45;
    (((struct oFA8_uint *)((*(int *)0xC8D4D84)))->v) = 0x54415453;
    (((struct oFE4_uint *)((*(int *)0xC8D4D84)))->v) = 0x52444152;
    (((struct o10BC_uint *)((*(int *)0xC8D4D84)))->v) = 0x54554F54;
    (((struct o10D4_uint *)((*(int *)0xC8D4D84)))->v) = 0x43515244;
    (((struct o10F0_uint *)((*(int *)0xC8D4D84)))->v) = 0x434E5546;
    (((struct o10F8_uint *)((*(int *)0xC8D4D84)))->v) = 0x20444E45;
    mpdrv_swapmode(0x0);
    return (mpdrv_init_memory());
}

int FUN_0c2b5036(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R1;
    register int R2;
    register float F0;
    register float F2;
    register float F5;
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
    v0_8 = a4;
    v0_10 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_8;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    v0_6 = adxf_ChkPrmPt((*(int *)(((int)stk + 0))), v0_3);
    v0_5 = (v0_6);
    v0_0 = (v0_3);
    v0_1 = (v0_3);
    v0_2 = (v0_10);
    if (((int)v0_6 >= 0)) goto L_C2B5062;
    L_C2B51E6:;
    v0_0 = (v0_5);
    L_C2B51E8:;
    return v0_0;
    L_C2B5062:;
    v0_5 = (int)(ADXSTM_GetFad(v0_2, (((int)stk + 0) + 0x4))) >= 0;
    if (v0_5) goto L_C2B5094;
    v0_8 = (0xC2FF08C);
    v0_10 = (v0_2);
    L_C2B50A6:;
    FUN_0c2c30aa(v0_8, v0_10, v0_3, v0_4, *(int *)((int)stk + 0));
    v0_0 = (0xFFFFFFFF);
    goto L_C2B51E8;
    L_C2B5094:;
    v0_5 = ADXF_Open(v0_2, (((int)stk + 0) + 0x14));
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    if ((v0_5 != 0)) goto L_C2B50B0;
    v0_8 = (0xC2FF0BC);
    v0_10 = (v0_2);
    goto L_C2B50A6;
    L_C2B50B0:;
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((((v0_5 << 2) + 0xC8CC044) + 0x0)));
    *(unsigned int *)((((v0_5 << 2) + 0xC8CC044) + 0x0)) = v0_0;
    *(unsigned int *)((v0_1 + 0x8)) = (*(int *)(((int)stk + 4)));
    (((struct o12_uchar *)(v0_1))->v) = 0x1;
    *(unsigned int *)(((int)stk + 24)) = (v0_1 + 0x14);
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)((v0_1 + 0xC)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0xC8BC744;
    v0_6 = (0x0);
    v0_5 = (0xFFFFFFFF);
    v0_7 = (0xC8BC740);
    v0_0 = (0x0);
    v0_9 = (0x0);
    L_C2B51AA:;
    v0_8 = (0x3);
    if (((int)v0_9 < (int)0x3)) goto L_C2B50E8;
    if ((v0_9 != 3)) goto L_C2B51BE;
    FUN_0c2c30aa(0xC2FF0EC, v0_2, v0_3, v0_4, *(int *)((int)stk + 0));
    L_C2B51BE:;
    if ((v0_5 != -4)) goto L_C2B51CC;
    FUN_0c2c30aa(0xC2FF11C, v0_2, v0_3, v0_4, *(int *)((int)stk + 0));
    L_C2B51CC:;
    *(unsigned short *)((v0_1 + 0x10)) = (*(short *)(((int)stk + 16)));
    *(unsigned int *)((v0_1 + 0x4)) = (((((unsigned short)(*(short *)((v0_1 + 0x10))) << 2) << 1) + (*(int *)(((*(int *)((v0_1 + 0x0))) + 0x4)))) + 0x14);
    ADXF_Close((*(int *)(((int)stk + 8))));
    goto L_C2B51E6;
    L_C2B50E8:;
    v0_8 = (int)(FUN_0c2b4ddc((*(int *)(((int)stk + 8))), 0x1, v0_7, v0_4, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))) <= 0;
    if (v0_8) goto L_C2B51A8;
    v0_8 = (v0_0);
    if (((*(int *)((v0_1 + 0xC))) != 0)) goto L_C2B5126;
    v0_8 = (0x10000);
    if (((int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) <= (int)0x10000)) goto L_C2B5110;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_8;
    v0_5 = (0xFFFFFFFC);
    v0_8 = (0xFFFFFFFC);
    goto L_C2B51BE;
    L_C2B5110:;
    v0_9 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_8 = (v0_9);
    if (((int)(*(int *)(((int)stk + 12))) >= (int)v0_9)) goto L_C2B511E;
    v0_8 = ((*(int *)(((int)stk + 12))));
    L_C2B5120:;
    *(unsigned int *)((v0_1 + 0xC)) = v0_8;
    v0_8 = (0x2);
    L_C2B5126:;
    v0_10 = (0x200);
    v0_9 = (0x200);
    if (((int)v0_8 >= (int)0x200)) goto L_C2B5188;
    L_C2B512E:;
    if (((*(int *)((v0_7 + (v0_8 << 2)))) != 0)) goto L_C2B513C;
    v0_8 = ((v0_8 + 0x2));
    L_C2B5178:;
    v0_10 = (int)(v0_6 + 0x1) < (int)(*(int *)((v0_1 + 0xC)));
    v0_6 = ((v0_6 + 0x1));
    if (v0_10) goto L_C2B5184;
    v0_5 = (v0_0);
    goto L_C2B51BE;
    L_C2B5184:;
    if (((int)v0_8 < (int)v0_9)) goto L_C2B512E;
    L_C2B5188:;
    v0_9 = (v0_0);
    goto L_C2B51AA;
    L_C2B513C:;
    v0_3 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 16)) = (v0_3 + 0x1);
    v0_4 = *(int *)(((int)stk + 24));
    *(unsigned short *)(((((((v0_3 + 0x1) - 1) << 2) << 1) + v0_4) + 0x0)) = v0_6;
    *(unsigned int *)(((((((v0_3 + 0x1) - 1) << 2) << 1) + v0_4) + 0x4)) = ((int)((int)((*(int *)((v0_7 + (v0_8 << 2)))) + 0x7FF) / (int)0x800));
    *(unsigned short *)(((((((v0_3 + 0x1) - 1) << 2) << 1) + v0_4) + 0x2)) = ((int)((int)((*(int *)((v0_7 + ((v0_8 + 0x1) << 2)))) + 0x7FF) / (int)0x800));
    v0_8 = (((v0_8 + 0x1) + 0x1));
    v0_10 = ((((((v0_3 + 0x1) - 1) << 2) << 1) + v0_4));
    v0_3 = (0x800);
    v0_4 = (0x7FF);
    goto L_C2B5178;
    L_C2B511E:;
    v0_8 = (v0_8);
    goto L_C2B5120;
    L_C2B51A8:;
    v0_9 = ((v0_9 + 0x1));
    goto L_C2B51AA;
}

int FUN_0c2bc7e4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = mpdrv_frame_recv_pre(a4, a5, a6, a7);
    if (t2 == -2) {
        (((struct o10E8_uint *)((*(int *)0xC8D4D84)))->v) = 0x1;
    } else {
        if ((int)t2 < 0) {
            t3 = (((struct o34_int *)0xC8C1ECC)->v);
            if (t3 != 0) {
                t4 = ((int (*)(int, int, int, int))(t3))(0x2, 0xFFFFFFF8, ((((struct o4_int *)0xC8C1ECC)->v)), t2);
            }
        } else {
            mpdrv_frame_recv_main();
            t3 = (((struct o0_int *)0xC8C214C)->v);
            t4 = *(volatile int *)0xA05F810C;
            t5 = *(volatile int *)0xA05F80DC;
            *(unsigned short *)(((0xC8C1EF8 + (t3 << 1)) + 0x0)) = ((t4 & 0x3FF) + ((unsigned short)(*(short *)(((0xC8C1EFC + (t3 << 1)) + 0x0))) * (unsigned short)(t5 & 0x3FF)));
            copy_device();
            mpdrv_frame_recv_post();
            t3 = FUN_0c2d9f88();
            t4 = t3;
            if (t3 != 0) {
                t3 = (((struct o38_int *)0xC8C1ECC)->v);
                if (t3 != 0) {
                    t5 = ((int (*)(void))(t3))();
                    if (t5 != 0) {
                        (((struct oC_uint *)0xC8C214C)->v) = (trigger());
                        t3 = 0xC8C2158;
                    }
                    t5 = t3;
                } else {
                    (((struct oC_uint *)0xC8C214C)->v) = (trigger());
                    t5 = 0xC8C2158;
                }
                t3 = (((struct oFBC_int *)((*(int *)0xC8D4D84)))->v);
                t6 = 0xFBC;
                t7 = t5;
                t5 = t3;
                if ((t3 != 0) && (t0 = (((struct oC_int *)0xC8C214C)->v), t0 != 0)) {
                    t0 = *(volatile int *)0xA05F8040;
                    (((struct o4_uint *)0xC8C214C)->v) = t0;
                    *(volatile unsigned int *)0xA05F8040 = ((((struct oFBC_int *)((*(int *)0xC8D4D84)))->v));
                    t0 = *(volatile int *)0xA05F80E8;
                    *(volatile unsigned int *)0xA05F80E8 = (t0 | 0x8);
                    (((struct o8_uint *)0xC8C214C)->v) = 0x1;
                    (((struct o28_uint *)0xC8C214C)->v) = (((((struct o28_int *)0xC8C214C)->v)) + 0x1);
                    t6 = (t0 | 0x8);
                    t7 = 0xC8C2154;
                    t5 = 0xC8C2150;
                    t0 = 0xC8C2174;
                }
                t4 = t6;
                t3 = t7;
                t6 = t5;
                t5 = t0;
            }
            t0 = t4;
            t4 = t3;
            t3 = t6;
            t6 = t5;
            t5 = 0x0;
            t7 = 0xC8C1F08;
            for (;;) {
                if ((int)t5 >= (int)0x30) {
                    break;
                }
                if ((*(int *)((t7 + 0x8))) != 0) {
                    t6 = (*(int *)((t7 + 0x0)));
                    t0 = (thunk_FUN_0c2d9e70(t6, (*(int *)((t7 + 0x4)))));
                    if (t0 != 0) {
                        t8 = *(int *)((t7 + 0x8));
                        *(unsigned int *)((t7 + 0x8)) = 0x0;
                        t6 = (*(int *)((t7 + 0x0)));
                        t0 = (FUN_0c2bca16(t6));
                        t9 = t0;
                        t6 = (*(int *)((t7 + 0x0)));
                        t0 = (kdGetDevice(t6));
                        t4 = (t8);
                        t6 = (*(int *)((t7 + 0x0)));
                        t0 = (((int (*)(int, int, int, int))(t4))(t6, (*(int *)((t7 + 0x4))), t0, t9));
                    }
                } else {
                    t8 = t4;
                    t9 = t3;
                    t10 = t6;
                }
                t4 = t8;
                t7 = (t7 + 0xC);
                t3 = t9;
                t6 = t10;
                t5 = (t5 + 0x1);
            }
            (((struct o10E8_uint *)((*(int *)0xC8D4D84)))->v) = 0x0;
            (((struct o0_uint *)0xC8C214C)->v) = (((((struct o0_int *)0xC8C214C)->v)) ^ 0x1);
            (((struct o0_uint *)0xC8C1ECC)->v) = (((((struct o0_int *)0xC8C1ECC)->v)) + 0x1);
        }
    }
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int FUN_0c0a52a6(int a4, int a5, int a6, int a7, float f4)
{
    int stk[4];
    register int t0;
    register int t5;
    register float u2;
    register int t3;
    register int t4;
    register int t19;
    register int t22;
    register int t24;
    register int t27;
    register int t29;
    register int t36;
    register int t43;
    register int t44;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            t5 = t0;
            if (t0 == 2) {
                FUN_0c085d0c(a4, a5, a6, a7);
                u2 = *(float *)0xC0A54F4;
                t3 = (((struct o118_int *)(a4))->v);
                (((struct o98_float *)(t3))->v) = u2;
                (((struct o94_float *)(t3))->v) = u2;
                t4 = (((struct o11C_int *)(a4))->v);
                (((struct o98_float *)(t4))->v) = u2;
                (((struct o94_float *)(t4))->v) = u2;
                t5 = 0x94;
            }
            return t5;
        }
        if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == 5) {
            FUN_0c059e60(a4, 0x20);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
            t19 = FUN_0c07ecc6(a4, 0x0, 0x0);
            if (t19 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return FUN_0c1366b0((*(signed char *)((a4 + 0x1))), (a4 + 0x28), 0x1);
            }
            t22 = FUN_0c037bf6(a4);
            t24 = (unsigned char)t22;
            if ((unsigned char)t22 != 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t24 = 0x15;
            }
            return t24;
        }
        t27 = FUN_0c037bf6(a4);
        t29 = (unsigned char)t27;
        if ((unsigned char)t27 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t29 = 0x15;
        }
        return t29;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    FUN_0c13ad68((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), a7);
    FUN_0c07d030(a4, 0x0);
    t36 = (((struct o38F8_int *)(a4))->v);
    (((struct o38F8_uint *)(a4))->v) = (t36 + 0x1);
    if ((t36 + 0x1) == 1) {
        FUN_0c059e60(a4, 0xA);
    }
    FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x1, 0x15);
    t43 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t43))->v) = 5.0f;
    (((struct o94_float *)(t43))->v) = 5.0f;
    t44 = (((struct o11C_int *)(a4))->v);
    (((struct o98_float *)(t44))->v) = 5.0f;
    (((struct o94_float *)(t44))->v) = 5.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(0xC25D238); }
    (((struct o50_float *)(a4))->v) = 15.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC25D238); }
    (((struct o5C_float *)(a4))->v) = -2.0f;
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
}

int ADXF_LoadPartition(int a4, int a5, int a6, int a7)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
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
    v0_7 = a4;
    v0_8 = a5;
    v0_0 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    *(unsigned int *)(((int)stk + 20)) = v0_3;
    v0_5 = adxf_ChkPrmPt((*(int *)(((int)stk + 4))), v0_0);
    v0_4 = (v0_5);
    v0_1 = (v0_0);
    v0_2 = (v0_8);
    if (((int)v0_5 >= 0)) goto L_C2B4EBC;
    L_C2B5020:;
    v0_3 = (v0_4);
    L_C2B5022:;
    return v0_3;
    L_C2B4EBC:;
    v0_4 = (int)(ADXSTM_GetFad(v0_2, (((int)stk + 0) + 0x8))) >= 0;
    if (v0_4) goto L_C2B4ED0;
    v0_7 = (0xC2FEFC4);
    v0_8 = (v0_2);
    L_C2B4EE2:;
    FUN_0c2c30aa(v0_7, v0_8, v0_0, v0_3, *(int *)((int)stk + 0));
    v0_3 = (0xFFFFFFFF);
    goto L_C2B5022;
    L_C2B4ED0:;
    v0_4 = ADXF_Open(v0_2, (((int)stk + 0) + 0x18));
    *(unsigned int *)(((int)stk + 16)) = v0_4;
    if ((v0_4 != 0)) goto L_C2B4EEC;
    v0_7 = (0xC2FEFFC);
    v0_8 = (v0_2);
    goto L_C2B4EE2;
    L_C2B4EEC:;
    memset(v0_1, 0x0, 0x18);
    *(unsigned int *)((((*(int *)(((int)stk + 4))) << 2) + 0xC8CC044)) = v0_1;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    *(unsigned int *)((v0_1 + 0x8)) = (*(int *)(((int)stk + 8)));
    (((struct o12_uchar *)(v0_1))->v) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = (v0_1 + 0x14);
    *(unsigned int *)(((int)stk + 32)) = ((v0_1 + 0x14) + 0x2);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)((v0_1 + 0xC)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0xC8BA6C4;
    *(unsigned int *)(((int)stk + 28)) = 0xC8BA6C8;
    v0_7 = (0x0);
    v0_4 = (0xFFFFFFFF);
    v0_5 = (0x0);
    v0_6 = (0xC8BA6C0);
    L_C2B4FFA:;
    v0_8 = (0x3);
    if (((int)v0_7 < (int)0x3)) goto L_C2B4F32;
    if ((v0_7 != 3)) goto L_C2B500E;
    FUN_0c2c30aa(0xC2FF02C, v0_2, v0_0, v0_3, *(int *)((int)stk + 0));
    L_C2B500E:;
    if ((v0_4 != -4)) goto L_C2B501C;
    FUN_0c2c30aa(0xC2FF05C, v0_2, v0_0, v0_3, *(int *)((int)stk + 0));
    L_C2B501C:;
    ADXF_Close((*(int *)(((int)stk + 16))));
    goto L_C2B5020;
    L_C2B4F32:;
    v0_9 = (int)(FUN_0c2b4ddc((*(int *)(((int)stk + 16))), 0x1, v0_6, v0_3, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))) <= 0;
    if (v0_9) goto L_C2B4FF8;
    v0_0 = (0x800);
    if (((*(int *)((v0_1 + 0xC))) != 0)) goto L_C2B4FB4;
    v0_7 = (0x10000);
    if (((int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) <= (int)0x10000)) goto L_C2B4F7C;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_7;
    v0_4 = (0xFFFFFFFC);
    v0_7 = (0xFFFFFFFC);
    goto L_C2B500E;
    L_C2B4F7C:;
    v0_3 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_7 = (v0_3);
    if (((int)(*(int *)(((int)stk + 20))) >= (int)v0_3)) goto L_C2B4F8A;
    v0_3 = ((*(int *)(((int)stk + 20))));
    L_C2B4F8C:;
    *(unsigned short *)((v0_1 + 0x10)) = v0_3;
    *(unsigned int *)((v0_1 + 0xC)) = (unsigned short)v0_3;
    *(unsigned int *)((v0_1 + 0x4)) = (((unsigned int)((((unsigned short)v0_3 + 0x1) << 1) + 0x16) >> 2) << 2);
    *(unsigned short *)(((*(int *)(((int)stk + 12))) + 0x0)) = ((int)((int)(*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) / (int)v0_0));
    v0_7 = (v0_8);
    L_C2B4FB8:;
    v0_8 = (((v0_7 << 2) + v0_6));
    v0_3 = (0x200);
    if (((int)v0_7 >= (int)0x200)) goto L_C2B4FF4;
    L_C2B4FC4:;
    v0_9 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_9 + 0x1);
    *(unsigned short *)((((((v0_9 + 0x1) - 1) << 1) + (*(int *)(((int)stk + 32)))) + 0x0)) = ((int)((int)((*(int *)((v0_8 + 0x0))) + 0x7FF) / (int)v0_0));
    if (((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)((v0_1 + 0xC))))) goto L_C2B4FEC;
    v0_4 = (v0_5);
    goto L_C2B500E;
    L_C2B4FEC:;
    v0_9 = (int)(v0_7 + 0x2) < (int)v0_3;
    v0_7 = ((v0_7 + 0x2));
    v0_8 = ((v0_8 + 0x8));
    if (v0_9) goto L_C2B4FC4;
    L_C2B4FF4:;
    v0_7 = (v0_5);
    goto L_C2B4FFA;
    L_C2B4F8A:;
    v0_3 = (v0_7);
    goto L_C2B4F8C;
    L_C2B4FB4:;
    v0_7 = (0x1);
    goto L_C2B4FB8;
    L_C2B4FF8:;
    v0_7 = ((v0_7 + 0x1));
    goto L_C2B4FFA;
}
