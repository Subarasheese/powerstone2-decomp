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


