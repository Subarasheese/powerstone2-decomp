/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o16_ushort { char p[0x16]; unsigned short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o200_uint { char p[0x200]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o22C_uint { char p[0x22C]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_int { char p[0x28]; int v; };
struct o28_short { char p[0x28]; short v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_short { char p[0x30]; short v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_short { char p[0x32]; short v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_short { char p[0x34]; short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o36_short { char p[0x36]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_short { char p[0x40]; short v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
struct o46_short { char p[0x46]; short v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4E_short { char p[0x4E]; short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o6D_uchar { char p[0x6D]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_float { char p[0x70]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o80_float { char p[0x80]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o88_float { char p[0x88]; float v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
int ADXSJD_Create(int, int, int);
int ADXT_Destroy(int);
int sys_init(void);
int nl_system_config_init(int);
int _slow_strcpy(void);
int FUN_0c187cac(int, int, int, int, int);
int FUN_0c187d98(int, int, int);
extern int FUN_0c18c9fc();
int FUN_0c1931c0(void);
int FUN_0c1931fa(int, int, int);
int FUN_0c193228(int, int, int);
int FUN_0c19338e(int);
int FUN_0c1933d8(int, int, int, int, int);
int FUN_0c193478(int);
int FUN_0c1935ce(void);
int FUN_0c1936bc(int);
int FUN_0c1937ca(int);
int FUN_0c2b6700(int, int, int, int);
int FUN_0c2d37de(void);
int FUN_0c2d3810(void);
int FUN_0c2d4de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c2d52d4(void);
int FUN_0c2d65ae(int);
extern int FUN_0c2d6a70();
int FUN_0c2d6bb8(void);
int FUN_0c2d73fa(int, int);
int FUN_0c2eb978(int);
int FUN_0c2f3f1c(void);
int FUN_0c2f66f0(void);
int FUN_0c2f6f80(int);
int FUN_0c2f732a(void);
int FUN_0c2f7400(void);
int FUN_0c2f74a4(void);
int FUN_0c2f75a8(void);
int FUN_0c2f7d9c(int);
int FUN_0c2f7e96(int);
int FUN_0c2faac8(int, int, int, int);
int FUN_0c2fb3d0(void);
int FUN_0c2fb41c(int);
int FUN_0c2fb680(int);
int SJRBF_Create(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int kmInitDevice(int);
int kmSetHSyncCallback(int, int);
int kmSetPALEXTCallback(int);
int kmSetVSyncCallback(int, int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyMemCopy(int, int, int);
int kmytex_ABSalloc(int, int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int memset(int, int, int);
int nlSetFatalErrorMode(int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int nlsndG2WriteN(int, int, int);
int strncpy(int, int, int);
int thunk_FUN_0c2c4cb8(int, int);
int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int FUN_0c2f7144(int a4, int a5, int a6, int a7);
int FUN_0c2f811c(int a4, int a5, int a6, int a7);
int kmytex_TXalloc2(int a4, int a5, int a6, int a7);
int FUN_0c192f54(int a4, int a5);
int kmSetUserClipping(int a4, int a5, int a6, int a7);
int ADXT_Create(int a4, int a5, int a6);
int FUN_0c2ee992(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c2f4d3a(void);
int FUN_0c18020e(int a4, int a5);
int FUN_0c2f2ba8(int a4);
int kmSetVertexRenderState(int a4, int a5, int a6, float f4);
int syChainAddHandler(int a4, int a5, int a6, int a7);
void FUN_0c1777e0(int a4, int a5, int a6, int a7);
int kmyGetDisplayParametersInfo(int a4, int a5, int a6);
int FUN_0c2e8d12(int a4, int a5);

int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register int t25;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u31;
    register float u33;
    register int t34;
    register int t36;
    register int t37;
    register float u38;
    register float u41;
    register float u42;
    register float u44;
    register int t12;
    register float u13;
    register float u14;

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 16)) = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t8 = 0x0;
    t9 = a6;
    t10 = a4;
    t11 = a8;
    u15 = (float)(t1 << 16);
    u16 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u17 = 65536.0f;
    u18 = f5;
    u19 = f6;
    u20 = (float)(t0 << 16);
    u21 = (float)(t2 << 16);
    u22 = (float)(t3 << 16);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 12)))) {
            t25 = *(short *)((t10 + 0x0));
            if (((short)((unsigned char)((int)t25 >> 8) | ((t25 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t10 = (t10 + 0x2);
            u16 = (float)(int)(((short)((unsigned char)((int)t25 >> 8) | ((t25 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            u19 = u16;
            t26 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u15);
                t27 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC302ED0;
                u28 = u16;
                u28 = u28 + u13 * u20;
                u16 = u28;
                u17 = (*(float *)((((unsigned char)t27 << 2) + t8)));
                t12 = ((unsigned char)t27 << 2);
                u13 = u19;
                u18 = u20;
                u30 = u16;
                u30 = u30 + u13 * u17;
                u16 = u30;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC3032D0;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u15 = u14;
                u31 = u16;
                u31 = u31 + u13 * u14;
                u16 = u31;
                u13 = u19;
                *(unsigned short *)((t9 + 0x0)) = ((unsigned int)(int)u14 >> 16);
                t9 = (t9 + 0x2);
                u17 = (*(float *)((t12 + t8)));
                u33 = u16;
                u33 = u33 + u13 * u17;
                u16 = u33;
                u17 = u16;
                u20 = u16;
                t26 = (t26 + 0x2);
                *(unsigned short *)((t9 + 0x0)) = (short)((unsigned int)(int)u17 >> 16);
                t9 = (t9 + 0x2);
                if ((int)t26 >= (int)0x20) {
                    break;
                }
            }
            t34 = *(short *)((t10 + 0x0));
            t12 = t34;
            t12 = ((int)t12 >> 8);
            t12 = (unsigned char)t12;
            t12 = (t12 | ((t34 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)t12) != 0) {
                t8 = (*(int *)(((int)stk + 8)));
                return t8;
            }
            t10 = (t10 + 0x2);
            u16 = (float)(((short)t12 & 0x1FFF) + 0x1);
            u19 = u16;
            t36 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u22);
                t37 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC302ED0;
                u38 = u16;
                u38 = u38 + u13 * u21;
                u16 = u38;
                u17 = (*(float *)((((unsigned char)t37 << 2) + t8)));
                t12 = ((unsigned char)t37 << 2);
                u13 = u19;
                u18 = u21;
                u41 = u16;
                u41 = u41 + u13 * u17;
                u16 = u41;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC3032D0;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u22 = u14;
                u42 = u16;
                u42 = u42 + u13 * u14;
                u16 = u42;
                u13 = u19;
                *(unsigned short *)((t11 + 0x0)) = ((unsigned int)(int)u14 >> 16);
                t11 = (t11 + 0x2);
                u17 = (*(float *)((t12 + t8)));
                u44 = u16;
                u44 = u44 + u13 * u17;
                u16 = u44;
                u17 = u16;
                u21 = u16;
                t36 = (t36 + 0x2);
                *(unsigned short *)((t11 + 0x0)) = (short)((unsigned int)(int)u17 >> 16);
                t11 = (t11 + 0x2);
                if ((int)t36 >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x2);
            continue;
        }
        t8 = a5;
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x0)) = ((unsigned int)(int)u15 >> 16);
        *(unsigned short *)((a9 + 0x0)) = (short)((unsigned int)(int)u21 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((unsigned int)(int)u22 >> 16);
        return t8;
    }
    return (*(int *)(((int)stk + 4)));
}

int FUN_0c2f7144(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F13;
    register float F14;
    register float F15;
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
    v0_1 = a7;
    v0_2 = (0xC8E0988);
    v0_0 = (0xC8E0980);
    if ((((((struct o18_short *)0xC8E0970)->v)) != 0)) goto L_C2F7186;
    v0_3 = *(signed char *)0xC8D6791;
    v0_8 = ((unsigned char)v0_3);
    if ((((unsigned char)v0_3 & 8) == 0)) goto L_C2F716E;
    L_C2F7316:;
    return v0_8;
    L_C2F716E:;
    v0_3 = ((int (*)(int, int, int, int))(FUN_0c2d6a70))(0xC8E0984, 0xC8E0980, a6, v0_1);
    *(unsigned short *)((v0_2 + 0x0)) = (*(short *)((v0_0 + 0x0)));
    v0_8 = (v0_3);
    if (((*(short *)((v0_2 + 0x0))) != 0)) goto L_C2F7186;
    goto L_C2F7316;
    L_C2F7186:;
    *(unsigned int *)(((int)stk + 0)) = 0xC8D6791;
    v0_4 = (0xC8E0972);
    v0_5 = (0x1);
    v0_6 = (0xC8E0977);
    v0_3 = (0x0);
    v0_7 = (0xC8E099A);
    L_C2F72F8:;
    v0_8 = (0xC8DFFF4);
    if (((unsigned int)((((struct o0_short *)0xC8E0970)->v)) >= (unsigned int)(*(short *)0xC8DFFF4))) goto L_C2F7308;
    if (((*(signed char *)0xC8E0B04) == 0)) goto L_C2F71F0;
    *(unsigned char *)0xC8E0B04 = v0_3;
    FUN_0c2f3f1c();
    L_C2F71F0:;
    if (((*(short *)((v0_2 + 0x0))) != 0)) goto L_C2F7224;
    if (((*(short *)((v0_0 + 0x0))) == 0)) goto L_C2F7202;
    FUN_0c2d6bb8();
    L_C2F7202:;
    v0_9 = *(signed char *)(((*(int *)(((int)stk + 0))) + 0x0));
    v0_8 = ((unsigned char)v0_9);
    if ((((unsigned char)v0_9 & 8) == 0)) goto L_C2F7210;
    goto L_C2F7316;
    L_C2F7210:;
    v0_8 = ((int (*)(int, int, int, int))(FUN_0c2d6a70))(0xC8E0984, 0xC8E0980, 0x0, v0_1);
    *(unsigned short *)((v0_2 + 0x0)) = (*(short *)((v0_0 + 0x0)));
    v0_8 = (v0_8);
    if (((*(short *)((v0_2 + 0x0))) == 0)) goto L_C2F7316;
    L_C2F7224:;
    v0_8 = (((struct o14_int *)0xC8E0970)->v);
    (((struct o14_uint *)0xC8E0970)->v) = (v0_8 + 0x1);
    *(unsigned char *)((v0_6 + 0x0)) = (*(signed char *)((((v0_8 + 0x1) - 1) + 0x0)));
    *(unsigned short *)((v0_2 + 0x0)) = ((*(short *)((v0_2 + 0x0))) - 1);
    *(unsigned short *)((v0_7 + 0x0)) = ((*(short *)((v0_7 + 0x0))) + 0x1);
    (((struct oA_uchar *)0xC8E0970)->v) = v0_5;
    FUN_0c2f74a4();
    if (((*(signed char *)0xC8E0975) != 0)) goto L_C2F7278;
    if (((*(signed char *)((v0_4 + 0x0))) == 0)) goto L_C2F7298;
    if (((*(signed char *)0xC8E0976) != 0)) goto L_C2F7298;
    v0_9 = (((struct o2C_short *)0xC8E0970)->v);
    v0_8 = (v0_9);
    if (((int)(unsigned short)v0_9 < (int)(unsigned short)((((struct o0_short *)0xC8E09AE)->v)))) goto L_C2F726E;
    FUN_0c2f7e96(v0_8);
    L_C2F726E:;
    FUN_0c2f7d9c(((((struct o2C_short *)0xC8E0970)->v)));
    L_C2F7298:;
    if (((*(signed char *)((v0_4 + 0x0))) == 0)) goto L_C2F72D8;
    *(unsigned char *)((v0_4 + 0x0)) = v0_3;
    (((struct o28_ushort *)0xC8E0970)->v) = (((((struct o28_short *)0xC8E0970)->v)) + ((((struct o3C_short *)0xC8E0970)->v)));
    if (((unsigned int)(*(short *)((v0_7 + 0x0))) <= (unsigned int)((((struct o26_short *)0xC8E0970)->v)))) goto L_C2F72BA;
    FUN_0c2f7400();
    L_C2F72BA:;
    if (((*(signed char *)0xC8E097B) == 0)) goto L_C2F72D8;
    FUN_0c2f75a8();
    (((struct o24_ushort *)0xC8E0970)->v) = ((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((((struct o34_short *)0xC8E0970)->v)));
    (((struct o22_ushort *)0xC8E0970)->v) = v0_5;
    L_C2F72D8:;
    if (((*(signed char *)0xC8E0976) == 0)) goto L_C2F72E4;
    FUN_0c2f732a();
    L_C2F72E4:;
    v0_9 = *(signed char *)0xC8E0978;
    v0_8 = (v0_9);
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != (unsigned char)v0_9)) goto L_C2F72F8;
    (((struct o8_uchar *)0xC8E0970)->v) = (v0_8 + 0x33);
    goto L_C2F72F8;
    L_C2F7278:;
    (((struct o5_uchar *)0xC8E0970)->v) = v0_3;
    if (((*(signed char *)((v0_4 + 0x0))) != 0)) goto L_C2F7298;
    (((struct o24_ushort *)0xC8E0970)->v) = ((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((((struct o34_short *)0xC8E0970)->v)));
    (((struct o22_ushort *)0xC8E0970)->v) = v0_5;
    (((struct o6_ushort *)0xC8E09AE)->v) = v0_3;
    goto L_C2F7298;
    L_C2F7308:;
    if (((*(short *)((v0_2 + 0x0))) != 0)) goto L_C2F7316;
    v0_1 = FUN_0c2d6bb8();
    *(unsigned short *)((v0_0 + 0x0)) = v0_3;
    v0_8 = (v0_1);
    goto L_C2F7316;
}

int FUN_0c2f811c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o38_ushort *)0xC8E0972)->v) = ((((struct o30_short *)0xC8E0972)->v));
    (((struct o3A_ushort *)0xC8E0972)->v) = 0x9;
    (((struct o0_ushort *)0xC8E09B0)->v) = 0x1;
    (((struct o2_ushort *)0xC8E09B0)->v) = 0xFFFFFFF9;
    (((struct o3C_ushort *)0xC8E0972)->v) = 0x200;
    (((struct o20_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o7_uchar *)0xC8E0972)->v) = 0x0;
    (((struct o22_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o2A_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o18_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o4_ushort *)0xC8E09B0)->v) = 0x0;
    (((struct o28_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o0_ushort *)0xC8D67FC)->v) = 0x400;
    (((struct o2_ushort *)0xC8D67FC)->v) = 0x0;
    (((struct o4_ushort *)0xC8D67FC)->v) = 0x0;
    (((struct o26_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o6_uchar *)0xC8E0972)->v) = 0x0;
    (((struct o4_uchar *)0xC8E0972)->v) = 0x1;
    (((struct o0_uchar *)0xC8E0972)->v) = 0x0;
    (((struct o1_uchar *)0xC8E0972)->v) = 0x0;
    (((struct o2_uchar *)0xC8E0972)->v) = 0x0;
    (((struct o8_uchar *)0xC8E0972)->v) = 0x0;
    (((struct o3_uchar *)0xC8E0972)->v) = 0x0;
    if ((*(signed char *)0xC8E001D) != 0) {
        (((struct o24_ushort *)0xC8E0972)->v) = 0x0;
    } else {
        (((struct o24_ushort *)0xC8E0972)->v) = 0x40;
    }
    (((struct oE_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o16_ushort *)0xC8E0972)->v) = 0x0;
    (((struct o8_uint *)0xC8E09B0)->v) = 0xC8DA100;
    (((struct o0_uint *)0xC8E0AF4)->v) = 0xC8DA500;
    (((struct oC_uint *)0xC8E09B0)->v) = (((((struct o8_int *)0xC8E09B0)->v)) + 0x800);
    (((struct o10_uint *)0xC8E09B0)->v) = (((((struct o8_int *)0xC8E09B0)->v)) + 0x1000);
    (((struct o14_uint *)0xC8E09B0)->v) = (((((struct o8_int *)0xC8E09B0)->v)) + 0x1800);
    (((struct o4_uint *)0xC8E0AF4)->v) = (((((struct o8_int *)0xC8E09B0)->v)) + 0x2000);
    (((struct o8_uint *)0xC8E0AF4)->v) = (((((struct o8_int *)0xC8E09B0)->v)) + 0x2800);
    t0 = (((struct o8_int *)0xC8E09B0)->v);
    (((struct oC_uint *)0xC8E0AF4)->v) = (t0 + 0x3000);
    t1 = (t0 + 0x3000);
    t0 = 0x0;
    t2 = a7;
    for (;;) {
        if ((int)(short)t0 > (int)(unsigned short)((((struct o36_short *)0xC8E0972)->v))) {
            break;
        }
        t1 = (short)t0;
        t2 = (short)t0;
        *(unsigned char *)((((((struct o8_int *)0xC8E09B0)->v)) + t1)) = 0x0;
        t2 = (t2 << 1);
        t1 = ((((struct oC_int *)0xC8E09B0)->v));
        t0 = (t0 + 0x1);
        *(unsigned short *)((t2 + t1)) = 0x0;
        t1 = ((((struct o10_int *)0xC8E09B0)->v));
        *(unsigned short *)((t2 + t1)) = 0x0;
        t1 = ((((struct o14_int *)0xC8E09B0)->v));
        *(unsigned short *)((t2 + t1)) = 0x0;
    }
    t0 = t1;
    t1 = 0xC8E09A8;
    t2 = ((((struct o32_short *)0xC8E0972)->v));
    for (;;) {
        if ((int)(short)t2 >= (int)(unsigned short)((((struct o30_short *)0xC8E0972)->v))) {
            break;
        }
        t1 = ((((struct o32_short *)0xC8E0972)->v));
        t0 = (short)t2;
        t1 = (unsigned short)t1;
        t3 = ((short)t2 - t1);
        t2 = (t2 + 0x1);
        *(unsigned char *)((((((struct o8_int *)0xC8E09B0)->v)) + t0)) = t3;
    }
    return t0;
}

int kmytex_TXalloc2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t13;

    t1 = ((a5 + 0x20) & 0xFFFFFFE0);
    if ((0x1F & a5) == 0) {
        t1 = a5;
    }
    t2 = *(int *)((((((short)a7 << 2) << 2) + 0xC304140) + 0x8));
    t3 = 0x0;
    t4 = 0x0;
    t5 = a5;
    t6 = 0x0;
    if (t2 != 0) {
        t7 = t2;
        t2 = a5;
        t8 = 0x0;
        t9 = 0x0;
        t10 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t7 + 0x10))) >= (unsigned int)t1) {
                if (t9 == 0) {
                    t9 = t7;
                }
                t11 = (*(int *)((t7 + 0xC)));
                if ((t11 & 0x7FF) != 0) {
                    t2 = (*(int *)((t7 + 0xC)));
                    t11 = 0x800;
                    t13 = t2;
                    t2 = (t2 + t11);
                    t2 = (t2 & (0xFFFFF800));
                    t13 = (t13 + (*(int *)((t7 + 0x10))));
                    if (((unsigned int)t2 < (unsigned int)t13) && (t0 = *(int *)((t7 + 0xC)), t11 = t2, t11 = (t11 - t0), (unsigned int)t11 < (unsigned int)t1)) {
                        if ((unsigned int)(t13 - t2) >= (unsigned int)t1) {
                            t8 = 0x2;
                            t10 = t7;
                            t7 = 0x0;
                        } else {
                            t7 = (*(int *)((t7 + 0x8)));
                        }
                    } else {
                        t8 = 0x1;
                        t10 = t7;
                        t7 = 0x0;
                    }
                } else {
                    t2 = (*(int *)((t7 + 0xC)));
                    t8 = 0x1;
                    t10 = t7;
                    t7 = 0x0;
                }
            } else {
                t7 = (*(int *)((t7 + 0x8)));
            }
            if (t7 == 0) {
                break;
            }
        }
        t3 = t9;
        t4 = t10;
        t5 = t2;
        t6 = t8;
    }
    t0 = t4;
    t2 = t6;
    if ((t6 == 0) && (t3 != 0)) {
        t0 = t3;
        t2 = 0x1;
    }
    t3 = 0x3;
    if (t0 != 0) {
        if (t2 == 2) {
            *(unsigned int *)((a6 + 0x0)) = t5;
            t2 = (kmytex_ABSalloc(0x0, t1, a6, a7));
        } else {
            if ((*(int *)((t0 + 0x10))) == t1) {
                kmytex_FBDeQueueEntry(((0xC304140 + (((short)a7 << 2) << 2)) + 0x8), ((0xC304140 + (((short)a7 << 2) << 2)) + 0xC), t0);
                kmytex_FBEnQueueTop((0xC304140 + (((short)a7 << 2) << 2)), ((0xC304140 + (((short)a7 << 2) << 2)) + 0x4), t0);
                *(unsigned int *)((a6 + 0x0)) = (*(int *)((t0 + 0xC)));
                *(unsigned int *)((t0 + 0x14)) = a6;
                *(unsigned short *)((t0 + 0x0)) = 0x1;
                if ((short)a7 == 0) {
                    t4 = ((*(short *)((t0 + 0x0))) | 0x10);
                } else {
                    t4 = ((*(short *)((t0 + 0x0))) | 0x20);
                }
                *(unsigned short *)((t0 + 0x0)) = t4;
                *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) | a4);
                t4 = 0x0;
            } else {
                t5 = kmytex_FBAllocEntry();
                t6 = 0x3;
                if (t5 == 0) {
                } else {
                    *(unsigned int *)((t5 + 0xC)) = (*(int *)((t0 + 0xC)));
                    *(unsigned int *)((t5 + 0x10)) = t1;
                    *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) - t1);
                    *(unsigned int *)((t0 + 0xC)) = ((*(int *)((t0 + 0xC))) + t1);
                    kmytex_FBEnQueueTop((0xC304140 + (((short)a7 << 2) << 2)), ((0xC304140 + (((short)a7 << 2) << 2)) + 0x4), t5);
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((t5 + 0xC)));
                    *(unsigned int *)((t5 + 0x14)) = a6;
                    if ((short)a7 == 0) {
                        t0 = ((*(short *)((t5 + 0x0))) | 0x10);
                    } else {
                        t0 = ((*(short *)((t5 + 0x0))) | 0x20);
                    }
                    *(unsigned short *)((t5 + 0x0)) = t0;
                    *(unsigned short *)((t5 + 0x0)) = ((*(short *)((t5 + 0x0))) | a4);
                    t6 = 0x0;
                }
                t4 = t6;
            }
            t2 = t4;
        }
        t3 = t2;
    }
    return t3;
}

int FUN_0c192f54(int a4, int a5)
{
    int stk[82];
    register int t0;
    register int t5;
    register int t7;
    register int t11;
    register int t13;
    register int t14;
    register int t16;
    register int t17;
    register int t19;
    register int t56;
    register int t58;
    register int t9;
    register int t10;

    *(unsigned int *)(((int)stk + 52)) = a4;
    *(int *)((int)stk + 32) = 0x79;
    *(int *)((int)stk + 28) = 0xC20A728;
    *(int *)((int)stk + 24) = 0xC20A718;
    t0 = ((int (*)(void))(FUN_0c18c9fc))();
    (((struct o0_uint *)0xC8B15F8)->v) = (*(int *)((a5 + 0x14)));
    (((struct o4_uint *)0xC8B15F8)->v) = (*(int *)((a5 + 0x18)));
    (((struct o8_uint *)0xC8B15F8)->v) = (*(int *)((a5 + 0x1C)));
    (((struct oC_uint *)0xC8B15F8)->v) = (*(int *)((a5 + 0x20)));
    (((struct o10_uint *)0xC8B15F8)->v) = 0xC20A738;
    *(int *)((int)stk + 20) = 0x84;
    *(int *)((int)stk + 16) = 0xC20A728;
    *(int *)((int)stk + 12) = 0xC20A718;
    t5 = ((int (*)(void))(FUN_0c18c9fc))();
    FUN_0c1931c0();
    *(int *)((int)stk + 8) = 0x87;
    *(int *)((int)stk + 4) = 0xC20A728;
    *(int *)((int)stk + 0) = 0xC20A718;
    t7 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC20A718, 0xC20A728, 0x87, 0xC20A718, 0xC20A728, 0x84, 0xC20A718, 0xC20A728, 0x79);
    *(unsigned int *)(((int)stk + 48)) = (*(int *)(((int)stk + 52)));
    *(unsigned int *)(((int)stk + 64)) = 0xC8B1664;
    *(unsigned int *)(((int)stk + 60)) = 0xC8B1668;
    *(unsigned int *)(((int)stk + 56)) = 0xC8B166C;
    *(unsigned int *)(((int)stk + 68)) = 0xC8B1670;
    for (;;) {
        t11 = *(int *)(((int)stk + 56));
        t13 = *(int *)(((int)stk + 64));
        t14 = *(int *)(((int)stk + 60));
        *(unsigned int *)(((*(int *)(((int)stk + 68))) + 0x0)) = 0x0;
        *(unsigned int *)((t11 + 0x0)) = 0x0;
        *(unsigned int *)((t14 + 0x0)) = 0x0;
        *(unsigned int *)((t13 + 0x0)) = 0x0;
        t16 = FUN_0c1931fa((*(int *)(((int)stk + 48))), (0xA4 + ((int)stk + 36)), (((int)stk + 36) + 0xC));
        if ((short)t16 != 0) {
            *(unsigned int *)(((int)stk + 36)) = (0xA4 + ((int)stk + 36));
            t17 = FUN_0c193228((0xA4 + ((int)stk + 36)), (((int)stk + 36) + 0x24), ((int)stk + 36));
            if ((short)t17 != 0) {
                t9 = (short)(FUN_0c19338e((((int)stk + 36) + 0x24)));
                if (t9 == -1) {
                    break;
                }
                t10 = 0x0;
                *(unsigned int *)(((int)stk + 44)) = 0x0;
                *(unsigned int *)(((int)stk + 40)) = 0x0;
                *(unsigned int *)(((int)stk + 52)) = ((((t9 << 2) + t9) << 2) + 0xC20A6C8);
                t19 = t9;
                for (;;) {
                    if ((int)t10 >= (int)(*(int *)(((*(int *)(((int)stk + 52))) + 0x0)))) {
                        break;
                    }
                    t19 = (FUN_0c193228((*(int *)(((int)stk + 36))), (((int)stk + 36) + 0x24), ((int)stk + 36)));
                    t19 = (short)t19;
                    if (t19 != 0) {
                        *(int *)((int)stk + 32) = (((int)stk + 36) + 0x4);
                        t19 = (FUN_0c1933d8(t9, t10, (((int)stk + 36) + 0x24), (((int)stk + 32) + 0xC), (((int)stk + 36) + 0x4)));
                        t10 = (t10 + 0x1);
                        continue;
                    }
                    break;
                }
                switch (t9) {
                case 0:
                    t10 = (FUN_0c193478((*(int *)((a5 + 0x4)))));
                    break;
                case 1:
                    t10 = (FUN_0c1935ce());
                    break;
                case 2:
                    t10 = (FUN_0c1936bc((*(int *)((a5 + 0x4)))));
                    break;
                case 3:
                    t10 = (FUN_0c1937ca((*(int *)((a5 + 0x4)))));
                    break;
                default:
                    t10 = 0x4;
                    break;
                }
                if ((short)t10 != 0) {
                    FUN_0c1931c0();
                    return t10;
                }
                continue;
            }
            continue;
        }
        *(int *)((int)stk + 32) = 0xB7;
        *(int *)((int)stk + 28) = 0xC20A728;
        *(int *)((int)stk + 24) = 0xC20A718;
        t56 = ((int (*)(void))(FUN_0c18c9fc))();
        FUN_0c1931c0();
        *(int *)((int)stk + 20) = 0xBA;
        *(int *)((int)stk + 16) = 0xC20A728;
        *(int *)((int)stk + 12) = 0xC20A718;
        t58 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC20A718, 0xC20A728, 0xBA, 0xC20A718, 0xC20A728, 0xB7);
        return 0x0;
    }
    FUN_0c1931c0();
    return 0x4;
}

int kmSetUserClipping(int a4, int a5, int a6, int a7)
{
    int stk[34];
    register int t1;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t10;
    register int t12;
    register int t14;
    register int t17;
    register int t19;
    register int t21;
    register int t23;
    register int t25;
    register int t27;
    register int t29;
    register int t31;
    register int t32;
    register int t37;
    register int t41;
    register int t43;
    register int t44;
    register int t45;
    register int t47;
    register int t49;
    register int t58;
    register int t59;
    register int t60;
    register int t62;

    *(unsigned int *)(((int)stk + 4)) = a7;
    t1 = (((struct o4_int *)0xC2FF634)->v);
    (((struct o68_uint *)(((int)stk + 0)))->v) = ((((struct o0_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0x4)) = t1;
    t3 = (((struct oC_int *)0xC2FF634)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0x8)) = ((((struct o8_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0xC)) = t3;
    t5 = (((struct o14_int *)0xC2FF634)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0x10)) = ((((struct o10_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0x14)) = t5;
    t7 = (((struct o1C_int *)0xC2FF634)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0x18)) = ((((struct o18_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x68) + 0x1C)) = t7;
    t9 = (((struct o24_int *)0xC2FF634)->v);
    (((struct o48_uint *)(((int)stk + 0)))->v) = ((((struct o20_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0x4)) = t9;
    t10 = (((struct o2C_int *)0xC2FF634)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0x8)) = ((((struct o28_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0xC)) = t10;
    t12 = (((struct o34_int *)0xC2FF634)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0x10)) = ((((struct o30_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0x14)) = t12;
    t14 = (((struct o3C_int *)0xC2FF634)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0x18)) = ((((struct o38_int *)0xC2FF634)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x48) + 0x1C)) = t14;
    t17 = (((struct o4_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((((struct o0_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = t17;
    t19 = (((struct oC_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = ((((struct o8_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = t19;
    t21 = (((struct o14_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = ((((struct o10_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = t21;
    t23 = (((struct o1C_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x18)) = ((((struct o18_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x1C)) = t23;
    t25 = (((struct o24_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x20)) = ((((struct o20_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x24)) = t25;
    t27 = (((struct o2C_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x28)) = ((((struct o28_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x2C)) = t27;
    t29 = (((struct o34_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x30)) = ((((struct o30_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x34)) = t29;
    t31 = (((struct o3C_int *)0xC2FF674)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x38)) = ((((struct o38_int *)0xC2FF674)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x3C)) = t31;
    t32 = 0xA0000000;
    if ((0x1 & a6) != 0) {
        t32 = 0x81000040;
    }
    (((struct o48_uint *)(((int)stk + 0)))->v) = (((a5 << 16) | 0x800000) | t32);
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((a6 << 2) + (*(int *)((a4 + 0x0)))))) & 0x3FFFFFF) | 0xE0000000);
    t37 = *(int *)(((a6 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
    kmyMemCopy((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x48), 0x20);
    _builtin_prefetch((void *)(*(int *)(((int)stk + 0))));
    t41 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a6 << 2) + t41)) = ((*(int *)(((a6 << 2) + t41))) + 0x20);
    *(unsigned int *)(((int)stk + 0)) = 0x2;
    for (;;) {
        t43 = *(int *)((a4 + 0x0));
        t44 = *(int *)(((a6 << 2) + t43));
        t45 = *(int *)(((a6 << 2) + t43));
        (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t44 >> 16) >> 8);
        (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t44 >> 16) >> 8);
        kmyMemCopy(((t45 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x8), 0x40);
        _builtin_prefetch((void *)((t45 & 0x3FFFFFF) | 0xE0000000));
        _builtin_prefetch((void *)(((t45 & 0x3FFFFFF) | 0xE0000000) + 0x20));
        t47 = *(int *)((a4 + 0x0));
        *(unsigned int *)(((a6 << 2) + t47)) = ((*(int *)(((a6 << 2) + t47))) + 0x40);
        t49 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t49 - 1);
        if ((t49 - 1) == 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 120)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    *(unsigned int *)(((int)stk + 124)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x4)));
    *(unsigned int *)(((int)stk + 128)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x8)));
    *(unsigned int *)(((int)stk + 132)) = (*(int *)(((*(int *)(((int)stk + 4))) + 0xC)));
    t58 = *(int *)((a4 + 0x0));
    t59 = *(int *)(((a6 << 2) + t58));
    t60 = *(int *)(((a6 << 2) + t58));
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t59 >> 16) >> 8);
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t59 >> 16) >> 8);
    kmyMemCopy(((t60 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x68), 0x20);
    _builtin_prefetch((void *)((t60 & 0x3FFFFFF) | 0xE0000000));
    t62 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a6 << 2) + t62)) = ((*(int *)(((a6 << 2) + t62))) + 0x20);
    return 0x0;
}


int FUN_0c2ee992(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[8];

    if (((unsigned char)a4 != 0) && ((unsigned char)a4 != 27)) {
        (((struct o24_uchar *)0xC8D7030)->v) = 0x0;
    } else {
        (((struct o24_uchar *)0xC8D7030)->v) = a7;
    }
    (((struct oC_uchar *)0xC8D7170)->v) = ((signed char)(a10 >> 0));
    FUN_0c2d52d4();
    (((struct o3_uchar *)0xC8D83CE)->v) = 0x0;
    (((struct o0_uchar *)0xC8D7030)->v) = a4;
    if (((unsigned char)a4 != 0) && (((unsigned char)a4 != 1) && ((unsigned char)a4 != 2))) {
        if ((unsigned char)a4 == 3) {
        } else {
            if ((unsigned char)a4 == 7) {
            } else {
                if (((unsigned char)a4 != 8) && ((unsigned char)a4 != 9)) {
                    if ((unsigned char)a4 != 12) {
                        if ((unsigned char)a4 != 18) {
                            if (((unsigned char)a4 != 26) && ((unsigned char)a4 != 27)) {
                                if ((unsigned char)a4 != 29) {
                                    if ((unsigned char)a4 != 101) {
                                        FUN_0c2d65ae(0xC1C);
                                    } else {
                                        (((struct o1_uchar *)0xC8D7030)->v) = a5;
                                        if ((int)(unsigned char)a5 <= (int)0x1) {
                                            FUN_0c2d3810();
                                            FUN_0c2faac8(a4, a5, a6, (*(signed char *)0xC8D7054));
                                            FUN_0c2fb680(0x8);
                                            FUN_0c2d4de8(0x1, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                                            (((struct o3_uchar *)0xC8D83CE)->v) = 0x1;
                                        } else {
                                            (((struct o8_ushort *)0xC8D7170)->v) = 0x0;
                                            (((struct o0_ushort *)0xC8D7170)->v) = 0x4;
                                            FUN_0c2faac8(a4, a5, a6, (*(signed char *)0xC8D7054));
                                            FUN_0c2d4de8(0x0, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                                        }
                                    }
                                } else {
                                    (((struct o0_ushort *)0xC8D83CE)->v) = 0x0;
                                    if ((unsigned char)a4 == 8) {
                                        (((struct oD_uchar *)0xC8D7170)->v) = 0x2;
                                    } else {
                                        (((struct oD_uchar *)0xC8D7170)->v) = 0x4;
                                    }
                                    (((struct o0_ushort *)0xC8D7170)->v) = 0x4;
                                    (((struct o8_ushort *)0xC8D7170)->v) = 0x0;
                                    FUN_0c2fb3d0();
                                    FUN_0c2d4de8(0x0, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                                }
                            }
                        } else {
                            (((struct o1_uchar *)0xC8D7030)->v) = a5;
                            if ((int)(unsigned char)a5 <= (int)0x1) {
                                FUN_0c2d3810();
                                FUN_0c2faac8(a4, a5, a6, (*(signed char *)0xC8D7054));
                                FUN_0c2fb680(0x8);
                                FUN_0c2d4de8(0x1, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                                (((struct o3_uchar *)0xC8D83CE)->v) = 0x1;
                            } else {
                                (((struct o8_ushort *)0xC8D7170)->v) = 0x0;
                                (((struct o0_ushort *)0xC8D7170)->v) = 0x4;
                                FUN_0c2faac8(a4, a5, a6, (*(signed char *)0xC8D7054));
                                FUN_0c2d4de8(0x0, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                            }
                        }
                    } else {
                        FUN_0c2d37de();
                        FUN_0c2fb41c(a5);
                        FUN_0c2d4de8(0x3, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                        (((struct o3_uchar *)0xC8D83CE)->v) = 0x1;
                    }
                } else {
                    (((struct o0_ushort *)0xC8D83CE)->v) = 0x0;
                    if ((unsigned char)a4 == 8) {
                        (((struct oD_uchar *)0xC8D7170)->v) = 0x2;
                    } else {
                        (((struct oD_uchar *)0xC8D7170)->v) = 0x4;
                    }
                    (((struct o0_ushort *)0xC8D7170)->v) = 0x4;
                    (((struct o8_ushort *)0xC8D7170)->v) = 0x0;
                    FUN_0c2fb3d0();
                    FUN_0c2d4de8(0x0, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                }
            }
        }
    } else {
        (((struct o1_uchar *)0xC8D7030)->v) = a5;
        if ((int)(unsigned char)a5 <= (int)0x1) {
            FUN_0c2d3810();
            FUN_0c2faac8(a4, a5, a6, (*(signed char *)0xC8D7054));
            FUN_0c2fb680(0x8);
            FUN_0c2d4de8(0x1, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            (((struct o3_uchar *)0xC8D83CE)->v) = 0x1;
        } else {
            (((struct o8_ushort *)0xC8D7170)->v) = 0x0;
            (((struct o0_ushort *)0xC8D7170)->v) = 0x4;
            FUN_0c2faac8(a4, a5, a6, (*(signed char *)0xC8D7054));
            FUN_0c2d4de8(0x0, 0x0, a5, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
    }
    (((struct o2_uchar *)0xC8D7030)->v) = a6;
    (((struct o1_uchar *)0xC8D7030)->v) = a5;
    (((struct o6_uchar *)0xC8D7030)->v) = ((signed char)(a10 >> 0));
    (((struct o4_uchar *)0xC8D7030)->v) = ((signed char)(a8 >> 0));
    (((struct o5_uchar *)0xC8D7030)->v) = ((signed char)(a9 >> 0));
    return 0xC8D7035;
}

int FUN_0c2f4d3a(void)
{
    register int t0;
    register int t1;

    if (((unsigned char)(*(signed char *)(((*(int *)0xC8DFD50) + 0x0))) & 0x20) == 32) {
        (((struct o39_uchar *)0xC8DFF6C)->v) = 0x0;
        (((struct o31_uchar *)0xC8DFF6C)->v) = 0x0;
    } else {
        (((struct o39_uchar *)0xC8DFF6C)->v) = 0x1;
    }
    t0 = *(int *)0xC8DFD50;
    *(unsigned int *)0xC8DFD50 = (t0 + 0x1);
    (((struct o2D_uchar *)0xC8DFF6C)->v) = ((int)((unsigned char)(*(signed char *)((((t0 + 0x1) - 1) + 0x0))) & 0x80) >> 7);
    t0 = *(signed char *)0xC8DFFA5;
    if ((unsigned char)t0 != 1) {
        t1 = (unsigned char)t0;
        if ((unsigned char)(*(signed char *)0xC8DFF99) == ((unsigned char)(*(signed char *)0xC8DFF77) ^ 0x1)) {
            (((struct oB_uchar *)0xC8DFF6C)->v) = ((*(signed char *)0xC8DFF77) ^ 0x1);
            *(unsigned int *)0xC8DFD50 = (((unsigned short)((((struct o0_short *)0xC8DFF6C)->v)) - 2) + (*(int *)0xC8DFD50));
            (((struct o33_uchar *)0xC8DFF6C)->v) = 0x0;
            t0 = 0xC8DFF9F;
            if ((*(signed char *)0xC8DFF9E) != 0) {
                t0 = FUN_0c2f66f0();
                (((struct o32_uchar *)0xC8DFF6C)->v) = 0x0;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o2C_uchar *)0xC8DFF6C)->v) = ((*(signed char *)(((*(int *)0xC8DFD50) + 0x0))) & 0x80);
        t1 = *(int *)0xC8DFD50;
        *(unsigned int *)0xC8DFD50 = (t1 + 0x1);
        (((struct o2B_uchar *)0xC8DFF6C)->v) = ((*(signed char *)((((t1 + 0x1) - 1) + 0x0))) & 0x40);
        if ((unsigned short)((((struct o0_short *)0xC8DFF6C)->v)) == 3) {
            t1 = *(int *)0xC8DFD50;
            *(unsigned int *)0xC8DFD50 = (t1 + 0x1);
            (((struct o2E_uchar *)0xC8DFF6C)->v) = (*(signed char *)((((t1 + 0x1) - 1) + 0x0)));
        } else {
            (((struct o2E_uchar *)0xC8DFF6C)->v) = (*(signed char *)0xC8D67B1);
        }
        if ((*(signed char *)0xC8DFF99) == (*(signed char *)0xC8DFF76)) {
            (((struct oA_uchar *)0xC8DFF6C)->v) = ((*(signed char *)0xC8DFF76) ^ 0x1);
            if ((*(signed char *)0xC8DFF98) != 0) {
                (((struct o32_uchar *)0xC8DFF6C)->v) = 0x1;
                FUN_0c2f66f0();
                (((struct o32_uchar *)0xC8DFF6C)->v) = 0x0;
            }
            FUN_0c2eb978(0x12);
            t1 = *(signed char *)0xC8DFF9A;
            if ((*(signed char *)0xC8DFF97) != 0) {
                FUN_0c2d73fa((unsigned char)t1, 0x0);
            } else {
                FUN_0c2f6f80((unsigned char)t1);
            }
        }
        (((struct o28_uchar *)0xC8DFF6C)->v) = (*(signed char *)0xC8DFF92);
        (((struct o24_uchar *)0xC8DFF6C)->v) = 0x8;
        (((struct o25_uchar *)0xC8DFF6C)->v) = 0x3;
        (((struct o29_uchar *)0xC8DFF6C)->v) = 0x0;
        (((struct o9_uchar *)0xC8DFF6C)->v) = (*(signed char *)0xC8DFF76);
        (((struct oD_uchar *)0xC8DFF6C)->v) = 0x0;
        t0 = 0xC8DFF79;
    }
    return t0;
}

int FUN_0c18020e(int a4, int a5)
{

    register int R3;
    register int R7;
    int R10;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_4 = a5;
    R12 = a4;  /* manual: the original keeps the driver image in r12 (mov r4,r12) and reads it through r12 below */
    v0_1 = nlsndG2Read((0xC4 + v0_3));
    (((struct o8_uint *)0xC86CC34)->v) = v0_1;
    v0_0 = (v0_4);
    if (((unsigned int)v0_1 >= (unsigned int)0x6E0)) goto L_C180238;
    v0_0 = (0xFFFFFFFF);
    L_C1803AE:;
    return v0_0;
    L_C180238:;
    v0_3 = (0xC86CC04);
    if ((v0_0 != 0)) goto L_C180244;
    v0_1 = (0x200000);
    L_C18024C:;
    *(unsigned int *)((v0_3 + 0x0)) = v0_1;
    v0_1 = (0xA0702C00);
    v0_2 = nlsndG2Read(v0_1);
    nlsndG2Write((0x1 | (v0_2 & 0xFFFE)), v0_1);
    nlsndG2Write(v0_0, 0xA0702800);
    v0_2 = nlsndG2Read(v0_1);
    nlsndG2Write((0x1 | (v0_2 & 0xFFFE)), v0_1);
    v0_2 = nlsndG2Read((R12 + 0x54));
    nlsndG2WriteN(R12, 0xA0800000, ((unsigned int)v0_2 >> 2));
    nlsndG2Write(v0_0, 0xA0800050);
    R10 = (0xFFFE);
    v0_5 = (0x8);
    v0_0 = (0x8);
    v0_2 = (0xA0800000);
    v0_3 = (0xA0800060);
    L_C1802CA:;
    if ((v0_5 != 0)) goto L_C1802C0;
    v0_3 = nlsndG2Read(v0_1);
    nlsndG2Write((v0_3 & R10), v0_1);
    v0_1 = (0xC86CD00);
    v0_3 = (0x0);
    v0_4 = (0xFFFFFFFF);
    v0_6 = (0x0);
    L_C1802FA:;
    if (((int)v0_6 < (int)v0_0)) goto L_C1802E4;
    v0_5 = (0xC86CC40);
    v0_6 = (v0_3);
    L_C180346:;
    if (((int)v0_6 < (int)v0_0)) goto L_C180324;
    (((struct oC_uint *)0xC86CBF0)->v) = (((((struct o84_int *)(R12))->v)) + v0_2);
    (((struct o10_uint *)0xC86CBF0)->v) = (((((struct o80_int *)(R12))->v)) + 0xA0800010);
    v0_4 = (0xC86CBF4);
    v0_1 = (0xC86CBF8);
    v0_2 = ((v0_2 + ((((struct oC8_int *)(R12))->v))));
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    *(unsigned int *)((v0_4 + 0x0)) = 0xA0800400;
    (((struct o18_uint *)0xC86CBF0)->v) = v0_3;
    (((struct o0_uint *)0xC86CBF0)->v) = v0_3;
    (((struct o0_uint *)0xC86CC34)->v) = 0xC86CC10;
    (((struct o20_uint *)0xC86CBF0)->v) = v0_3;
    R12 = (0xA080005C);
    v0_0 = (0x400000);
    v0_1 = (v0_3);
    L_C180388:;
    v0_2 = (nlsndG2Read(R12)) != 0;
    if (v0_2) goto L_C18039C;
    v0_2 = (int)(v0_1 + 0x1) < (int)v0_0;
    v0_1 = ((v0_1 + 0x1));
    if (v0_2) goto L_C180388;
    v0_0 = (0xFFFFFF00);
    goto L_C1803AE;
    L_C18039C:;
    v0_0 = nlsndG2Read(0xA070289C);
    nlsndG2Write((v0_0 & 0x7F7), 0xA070289C);
    v0_0 = (0x0);
    goto L_C1803AE;
    L_C180324:;
    *(unsigned char *)((((unsigned char)((((v0_6 << 1) + v0_6) << 2) << 1) + v0_5) + 0x0)) = v0_4;
    *(unsigned char *)((((unsigned char)((((v0_6 << 1) + v0_6) << 2) << 1) + v0_5) + 0x1)) = v0_3;
    *(unsigned int *)(((((unsigned char)((((v0_6 << 1) + v0_6) << 2) << 1) + v0_5) + 0x4) + 0x4)) = v0_4;
    *(unsigned int *)(((((unsigned char)((((v0_6 << 1) + v0_6) << 2) << 1) + v0_5) + 0x4) + 0x0)) = v0_4;
    v0_6 = ((v0_6 + 0x1));
    goto L_C180346;
    L_C1802E4:;
    *(unsigned int *)((((signed char)(((v0_6 << 1) + v0_6) << 2) + v0_1) + 0x0)) = v0_4;
    *(unsigned int *)((((signed char)(((v0_6 << 1) + v0_6) << 2) + v0_1) + 0x4)) = v0_3;
    *(unsigned int *)((((signed char)(((v0_6 << 1) + v0_6) << 2) + v0_1) + 0x8)) = v0_3;
    v0_6 = ((v0_6 + 0x1));
    goto L_C1802FA;
    L_C1802C0:;
    nlsndG2Write(0xFFFFFFFF, v0_3);
    v0_5 = ((v0_5 - 1));
    v0_3 = ((v0_3 + 0x4));
    goto L_C1802CA;
    L_C180244:;
    v0_4 = (0x200);
    if ((v0_0 != 0x200)) goto L_C180250;
    v0_1 = (0x800000);
    goto L_C18024C;
    L_C180250:;
    v0_0 = (0xFFFFFFFE);
    goto L_C1803AE;
}


int kmSetVertexRenderState(int a4, int a5, int a6, float f4)
{
    register int t4;

    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x0)) = ((((struct o90_int *)(a5))->v));
    if (((*(int *)(((*(int *)((a4 + 0x4))) + 0x0))) & 128) != 0) {
        t4 = *(int *)((a4 + 0x4));
        *(unsigned int *)((t4 + 0x0)) = (((*(int *)((t4 + 0x0))) & 0xFFFFFFBF) | (((((-(*(int *)0xC8D1DC0)) + 0x1) << 2) << 2) << 2));
    }
    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x4)) = ((((struct o94_int *)(a5))->v));
    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x8)) = ((((struct o98_int *)(a5))->v));
    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0xC)) = ((((struct o9C_int *)(a5))->v));
    *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = 0x20;
    *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x0)) = ((unsigned int)((unsigned int)((*(int *)(((*(int *)((a4 + 0x4))) + 0x0))) & 0x7000000) >> 16) >> 8);
    if ((((((struct o90_int *)(a5))->v)) & 0x4900) != 0) {
    } else {
        if ((((((struct o90_int *)(a5))->v)) & 0x200) != 0) {
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x10)) = ((((struct o70_int *)(a5))->v));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x14)) = (*(int *)((((a5 + 0x70) + 0x4) + 0x0)));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x18)) = (*(int *)(((((a5 + 0x70) + 0x4) + 0x4) + 0x0)));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x1C)) = (*(int *)((((((a5 + 0x70) + 0x4) + 0x4) + 0x4) + 0x0)));
        } else {
            if ((((((struct o90_int *)(a5))->v)) & 0x400) != 0) {
                *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = 0x40;
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x20)) = ((((struct o70_int *)(a5))->v));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x24)) = (*(int *)((((a5 + 0x70) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x28)) = (*(int *)(((((a5 + 0x70) + 0x4) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x2C)) = (*(int *)((((((a5 + 0x70) + 0x4) + 0x4) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x30)) = ((((struct o80_int *)(a5))->v));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x34)) = (*(int *)((((a5 + 0x80) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x38)) = (*(int *)(((((a5 + 0x80) + 0x4) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x3C)) = (*(int *)((((((a5 + 0x80) + 0x4) + 0x4) + 0x4) + 0x0)));
            } else {
                if ((((((struct o90_int *)(a5))->v)) & 0x1000) != 0) {
                    *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = 0x40;
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x20)) = ((((struct o70_int *)(a5))->v));
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x24)) = (*(int *)((((a5 + 0x70) + 0x4) + 0x0)));
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x28)) = (*(int *)(((((a5 + 0x70) + 0x4) + 0x4) + 0x0)));
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x2C)) = (*(int *)((((((a5 + 0x70) + 0x4) + 0x4) + 0x4) + 0x0)));
                } else {
                    if ((((((struct o90_int *)(a5))->v)) & 0x2000) != 0) {
                        *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x10)) = ((((((int)(((((struct o70_float *)(a5))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o74_float *)(a5))->v)) * 255.0f) << 16)) | ((int)(((((struct o78_float *)(a5))->v)) * 255.0f) << 8)) | (int)(((((struct o7C_float *)(a5))->v)) * 255.0f));
                        *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x14)) = ((((((int)(((((struct o80_float *)(a5))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o84_float *)(a5))->v)) * 255.0f) << 16)) | ((int)(((((struct o88_float *)(a5))->v)) * 255.0f) << 8)) | (int)(((((struct o8C_float *)(a5))->v)) * 255.0f));
                    }
                }
            }
        }
    }
    return 0x0;
}

int syChainAddHandler(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t4;
    int t5;
    register int t8;
    register int t48;
    register int t3;
    int t6;
    register int t79;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 8)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t5 = *(int *)((0xC8C1884 + (((int)t1 >> 4) << 2)));
    t4 = t5;
    for (;;) {
        if ((t4 != 0) && (t6 = *(int *)((t4 + 0xC)), t3 = t6, (unsigned int)t3 < (unsigned int)(a6 | 0x80000000))) {
            t5 = t4;
            t4 = (*(int *)((t4 + 0x4)));
            continue;
        }
        break;
    }
    t8 = 0x1;
    for (;;) {
        if (((*(int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0xC))) & 0x80000000) != 0) {
            t8 = (t8 + 0x1);
            if ((unsigned int)t8 >= (unsigned int)0x100) {
                break;
            }
            continue;
        }
        break;
    }
    if ((unsigned int)t8 >= (unsigned int)0x100) {
        t79 = 0x0;
    } else {
        if ((t4 == 0) && (t5 == 0)) {
            if ((int)t1 < (int)0x900) {
                (((struct o200_uint *)((((int)_builtin_get_vbr()) + ((((0xFFFFFE00 + t1) >> 1) >> 1) >> 1))))->v) = 0xC2BB33A;
            } else {
                if (t1 == 0x900) {
                    kmSetVSyncCallback(0xC2BB35E, 0x0);
                } else {
                    if (t1 == 0x920) {
                        kmSetHSyncCallback(0xC2BB3A8, 0x0);
                    } else {
                        (((struct o22C_uint *)(((int)_builtin_get_vbr())))->v) = 0xC2BB3CE;
                    }
                }
            }
            *(unsigned int *)((0xC8C1884 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC8C0884);
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x4)) = 0x0;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x0)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0xC)) = (a6 | 0x80000000);
            t48 = *(short *)(((int)stk + 4));
            if (((int)t1 >> 8) == 10) {
                (((struct o0_uint *)0xA05F6920)->v) = (((((struct o0_int *)0xA05F6920)->v)) | ((int)0x1 << (int)(((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1) + 0xC)));
            } else {
                if (((int)t1 >> 8) == 11) {
                    (((struct o4_uint *)0xA05F6920)->v) = (((((struct o4_int *)0xA05F6920)->v)) | ((int)0x1 << (int)((unsigned int)((unsigned int)((unsigned int)(unsigned char)t48 >> 2) >> 2) >> 1)));
                }
            }
        } else {
            if (t4 == (*(int *)((0xC8C1884 + (((int)t1 >> 4) << 2))))) {
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x4)) = t4;
                *(unsigned int *)((0xC8C1884 + (((int)t1 >> 4) << 2))) = (((t8 << 2) << 2) + 0xC8C0884);
            } else {
                *(unsigned int *)((t5 + 0x4)) = (((t8 << 2) << 2) + 0xC8C0884);
                *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x4)) = t4;
            }
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x0)) = (*(int *)(((int)stk + 0)));
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0x8)) = a7;
            *(unsigned int *)(((((t8 << 2) << 2) + 0xC8C0884) + 0xC)) = (a6 | 0x80000000);
        }
        t79 = t8;
    }
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 8))) & 0xF) << 2) << 2) >> 4));
    return t79;
}

void FUN_0c1777e0(int a4, int a5, int a6, int a7)
{
    register int t9;

    (((struct oC_uint *)0xC83CFE0)->v) = 0x0;
    if ((a4 != 0) && ((a4 != 21) && ((a4 != 21) && (a4 != 21)))) {
    } else {
        (((struct oC_uint *)0xC83CFE0)->v) = 0x1;
    }
    (((struct o10_uint *)0xC83CFE0)->v) = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        (((struct o10_uint *)0xC83CFE0)->v) = 0x1;
    }
    _builtin_set_imask(0xE);
    if ((int)(*(int *)0xA05F689C) >= (int)0x8) {
        (((struct o0_uint *)0xC83CF94)->v) = 0x1;
    } else {
        (((struct o0_uint *)0xC83CF94)->v) = 0x0;
    }
    _builtin_set_gbr((void *)(0xC8B85C0));
    sys_init();
    (((struct o18_ushort *)0xC8A6C94)->v) = 0x0;
    (((struct o1A_ushort *)0xC8A6C94)->v) = 0x0;
    if ((0x80 & a5) != 0) {
        (((struct o18_ushort *)0xC8A6C94)->v) = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        (((struct o1A_ushort *)0xC8A6C94)->v) = 0x1;
    }
    (((struct o2C_uint *)0xC83CFE0)->v) = (*(int *)((((a5 & 0xF) << 2) + 0xC205A74)));
    t9 = 0x0;
    if (a7 == 1) {
        t9 = 0x10000;
    }
    kmInitDevice(t9);
    if (((((struct o10_int *)0xC83CFE0)->v)) == 1) {
        kmSetPALEXTCallback(0xC1773F0);
    }
    FUN_0c2b6700((*(int *)((((((a4 << 1) + a4) << 2) + 0xC205924) + 0x4))), ((((struct o2C_int *)0xC83CFE0)->v)), ((((struct o18_short *)0xC8A6C94)->v)), ((((struct o1A_short *)0xC8A6C94)->v)));
    (((struct o14_ushort *)0xC8A6C94)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC205924) + 0x8)));
    (((struct o16_ushort *)0xC8A6C94)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC205924) + 0xA)));
    (((struct o4_uint *)0xC8A6C94)->v) = 0xFFFFFFFF;
    (((struct oC_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o1C_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o0_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o30_float *)0xC8A6C94)->v) = 0.0f;
    (((struct o34_float *)0xC8A6C94)->v) = 0.0f;
    (((struct o38_float *)0xC8A6C94)->v) = 0.0f;
    (((struct o3C_float *)0xC8A6C94)->v) = 0.0f;
    (((struct o20_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o24_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o28_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o2C_uint *)0xC8A6C94)->v) = 0x0;
    (((struct o0_float *)0xC8B85E8)->v) = 1.0f;
    (((struct o1C_uint *)0xC8B85E8)->v) = 0x0;
    (((struct o0_uint *)0xFF000038)->v) = 0xC;
    (((struct o4_uint *)0xFF000038)->v) = 0xC;
    (((struct o14_uint *)0xC83CFE0)->v) = a6;
    nl_system_config_init(0x200000);
    nlSetFatalErrorMode(0x0);
    (((struct o34_uint *)0xC83CFE0)->v) = 0x0;
    (((struct o4_uint *)0xC83CF94)->v) = 0x68;
    (((struct o0_uint *)0xC83CFE0)->v) = 0x0;
    (((struct o4_uint *)0xC83CFE0)->v) = 0x0;
    (((struct o0_uint *)0xC2A6090)->v) = 0x0;
    (((struct o4_uint *)0xC2A6090)->v) = 0x0;
    (((struct o8_uint *)0xC2A6090)->v) = 0x0;
    _builtin_set_imask(0x0);
}

int kmyGetDisplayParametersInfo(int a4, int a5, int a6)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t4;
    register int t35;
    register int t73;
    register int t74;
    register int t34;
    register int t64;
    register int t80;

    t0 = (((struct o4_int *)0xC300E0C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((((struct o0_int *)0xC300E0C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = t0;
    t2 = (((struct oC_int *)0xC300E0C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x8)) = ((((struct o8_int *)0xC300E0C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0xC)) = t2;
    t4 = (((struct o14_int *)0xC300E0C)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x10)) = ((((struct o10_int *)0xC300E0C)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x14)) = t4;
    if ((unsigned int)a4 >= (unsigned int)0xC) {
    } else {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)((a6 + 0x0)) = ((((struct o0_int *)0xC8D063C)->v));
            }
                break;
            case 2:
            {
                *(unsigned int *)((a6 + 0x0)) = ((((struct o4_int *)0xC8D063C)->v));
            }
                break;
            case 4:
            {
                *(unsigned int *)((a6 + 0x0)) = ((((struct o4_int *)0xC8D05CC)->v));
            }
                break;
            case 6:
            {
                *(unsigned int *)((a6 + 0x0)) = (*(int *)(((((int)stk + 0) + 0x8) + (((((struct o4_int *)0xC8D05CC)->v)) << 2))));
            }
                break;
            case 8:
            {
                kmyGetDisplayRegionSize(((((struct o0_int *)0xC8D05CC)->v)), a6, 0x0, a5);
            }
                break;
            case 10:
            {
                kmyGetDisplayRegionSize(((((struct o0_int *)0xC8D05CC)->v)), 0x0, a6, a5);
            }
                break;
            case 12:
            {
                kmyGetDisplayRegionSize(((((struct o0_int *)0xC8D05CC)->v)), ((int)stk + 0), (((int)stk + 0) + 0x4), a5);
                *(unsigned int *)((a6 + 0x0)) = ((*(int *)(((int)stk + 0))) * (*(int *)(((int)stk + 4))));
            }
                break;
            case 14:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0xC)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = ((((struct o0_int *)0xC8D063C)->v));
                }
            }
                break;
            case 16:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x10)));
                } else {
                    if (((((struct o0_int *)0xC8D0684)->v)) == 0) {
                        if (((((((struct o0_int *)0xC8D05CC)->v)) & 0x1) != 1) && ((t34 = (((struct o0_int *)0xC8D05CC)->v), (t34 & 0x2C) == 32) && (0x1 != 0))) {
                            t35 = (((struct o4_int *)0xC8D063C)->v);
                            *(unsigned int *)((a6 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t35 + (unsigned int)0x0)) + ((((int)0x0 > (int)t35)) ? 1u : 0u))) >> 1);
                        } else {
                            *(unsigned int *)((a6 + 0x0)) = ((((struct o4_int *)0xC8D063C)->v));
                        }
                    } else {
                        *(unsigned int *)((a6 + 0x0)) = ((((struct o4_int *)0xC8D0684)->v));
                    }
                }
            }
                break;
            case 18:
            {
                if (a5 != 0) {
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x8)));
                } else {
                    *(unsigned int *)((a6 + 0x0)) = ((((struct o4_int *)0xC8D05CC)->v));
                }
            }
                break;
            case 20:
            {
                if (a5 != 0) {
                    t64 = (*(int *)((a5 + 0x4)));
                } else {
                    t64 = (*(int *)(((((int)stk + 0) + 0x8) + (((((struct o4_int *)0xC8D05CC)->v)) << 2))));
                }
                *(unsigned int *)((a6 + 0x0)) = t64;
            }
                break;
            default:
            {
                if (a5 != 0) {
                    t80 = (((*(int *)((a5 + 0x2C))) << 2) << 1);
                } else {
                    t73 = *(int *)(((((int)stk + 0) + 0x8) + (((((struct o4_int *)0xC8D05CC)->v)) << 2)));
                    t74 = t73;
                    if ((int)t73 < 0) {
                        t74 = (t73 + 0x7);
                    }
                    t80 = (((((struct o0_int *)0xC8D063C)->v)) * (((t74 >> 1) >> 1) >> 1));
                }
                *(unsigned int *)((a6 + 0x0)) = t80;
            }
                break;
        }
    }
    return 0x0;
}

int FUN_0c2e8d12(int a4, int a5)
{

    register int R1;
    int R10;
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
    v0_3 = a4;
    v0_4 = a5;
    v0_6 = *(int *)0xC8D66E8;
    v0_0 = (0x0);
    v0_1 = (0xC8D66F6);
    v0_2 = (0xC8D66F7);
    v0_5 = (v0_6);
    if ((((unsigned short)((((struct oB0_short *)(v0_6))->v)) & 0x1000) != 0)) goto L_C2E8D34;
    L_C2E8EB0:;
    v0_6 = (0x0);
    L_C2E8EB2:;
    return v0_6;
    L_C2E8D34:;
    v0_7 = ((unsigned char)(*(signed char *)((v0_1 + 0x0))));
    v0_8 = (0xC8D66F4);
    if (((unsigned char)v0_3 != 0)) goto L_C2E8DD6;
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C2E8D54;
    if ((v0_6 == 2)) goto L_C2E8D84;
    if ((v0_6 == 4)) goto L_C2E8DA2;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0xCF);
    L_C2E8DD0:;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    *(unsigned char *)((v0_1 + 0x0)) = v0_0;
    L_C2E8EA0:;
    if (((int)(unsigned char)(*(signed char *)((v0_2 + 0x0))) < (int)0x1)) goto L_C2E8EB0;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    v0_6 = (0x1);
    goto L_C2E8EB2;
    L_C2E8DA2:;
    if (((unsigned int)v0_4 > (unsigned int)(unsigned short)((((struct o40_short *)(v0_5))->v)))) goto L_C2E8DC2;
    if (((unsigned int)v0_4 < (unsigned int)(unsigned short)((((struct o42_short *)(v0_5))->v)))) goto L_C2E8DC2;
    L_C2E8DB6:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) | 0x10);
    v0_3 = (0x1);
    L_C2E8DBE:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_3;
    goto L_C2E8EA0;
    L_C2E8DC2:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0xCF);
    goto L_C2E8DD0;
    L_C2E8D84:;
    if (((unsigned int)v0_4 > (unsigned int)(unsigned short)((((struct o48_short *)(v0_5))->v)))) goto L_C2E8DC2;
    if (((unsigned int)v0_4 < (unsigned int)(unsigned short)((((struct o4A_short *)(v0_5))->v)))) goto L_C2E8DC2;
    L_C2E8D98:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) | 0x20);
    v0_3 = (0x3);
    goto L_C2E8DBE;
    L_C2E8D54:;
    if (((unsigned int)v0_4 > (unsigned int)(unsigned short)((((struct o40_short *)(v0_5))->v)))) goto L_C2E8D68;
    if (((unsigned int)v0_4 >= (unsigned int)(unsigned short)((((struct o42_short *)(v0_5))->v)))) goto L_C2E8DB6;
    L_C2E8D68:;
    if (((unsigned int)v0_4 <= (unsigned int)(unsigned short)((((struct o48_short *)(v0_5))->v)))) goto L_C2E8D76;
    goto L_C2E8EA0;
    L_C2E8D76:;
    if (((unsigned int)v0_4 >= (unsigned int)(unsigned short)((((struct o4A_short *)(v0_5))->v)))) goto L_C2E8D98;
    goto L_C2E8EA0;
    L_C2E8DD6:;
    v0_6 = (v0_7);
    R10 = ((unsigned char)(*(signed char *)((v0_8 + 0x0))));
    v0_3 = (0x10);
    if ((v0_7 == 1)) goto L_C2E8E00;
    if ((v0_6 == 3)) goto L_C2E8E4E;
    goto L_C2E8EA0;
    L_C2E8E4E:;
    if (((unsigned int)v0_4 > (unsigned int)(unsigned short)((((struct o4C_short *)(v0_5))->v)))) goto L_C2E8E94;
    if (((unsigned int)v0_4 < (unsigned int)(unsigned short)((((struct o4E_short *)(v0_5))->v)))) goto L_C2E8E94;
    if (((v0_3 & R10) == 0)) goto L_C2E8E6C;
    if (((0x20 & R10) != 0)) goto L_C2E8E84;
    L_C2E8E6C:;
    if ((((((struct o44_short *)(v0_5))->v)) != ((((struct o4C_short *)(v0_5))->v)))) goto L_C2E8E90;
    if ((((((struct o46_short *)(v0_5))->v)) != ((((struct o4E_short *)(v0_5))->v)))) goto L_C2E8E90;
    L_C2E8E84:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0xCF);
    L_C2E8E90:;
    v0_7 = (0x4);
    L_C2E8E9E:;
    *(unsigned char *)((v0_1 + 0x0)) = v0_7;
    goto L_C2E8EA0;
    L_C2E8E94:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0xCF);
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    L_C2E8E9C:;
    v0_7 = (0x2);
    goto L_C2E8E9E;
    L_C2E8E00:;
    if (((unsigned int)v0_4 > (unsigned int)(unsigned short)((((struct o44_short *)(v0_5))->v)))) goto L_C2E8E44;
    if (((unsigned int)v0_4 < (unsigned int)(unsigned short)((((struct o46_short *)(v0_5))->v)))) goto L_C2E8E44;
    if (((v0_3 & R10) == 0)) goto L_C2E8E1E;
    if (((0x20 & R10) != 0)) goto L_C2E8E36;
    L_C2E8E1E:;
    if ((((((struct o44_short *)(v0_5))->v)) != ((((struct o4C_short *)(v0_5))->v)))) goto L_C2E8E9C;
    if ((((((struct o46_short *)(v0_5))->v)) != ((((struct o4E_short *)(v0_5))->v)))) goto L_C2E8E9C;
    L_C2E8E36:;
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0xCF);
    goto L_C2E8E9C;
    L_C2E8E44:;
    *(unsigned char *)((v0_8 + 0x0)) = ((*(signed char *)((v0_8 + 0x0))) & 0xCF);
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    goto L_C2E8E90;
}

int FUN_0c2f2ba8(int a4)
{
    int stk[27];
    register int t8;
    register int t53;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;

    *(unsigned int *)(((int)stk + 40)) = a4;
    memset((((int)stk + 40) + 0x10), 0x0, 0x3);
    memset((((int)stk + 40) + 0x8), 0x0, 0x5);
    strncpy((((int)stk + 40) + 0x10), 0xC302CD4, 0x2);
    strncpy((((int)stk + 40) + 0x8), 0xC302CD7, 0x4);
    if ((unsigned char)(*(signed char *)(((((int)stk + 40) + 0x10) + 0x0))) == 32) {
        (((struct o10_uchar *)(((int)stk + 40)))->v) = 0x30;
    }
    *(unsigned char *)(((((int)stk + 40) + 0x8) + 0x0)) = ((*(signed char *)(((((int)stk + 40) + 0x8) + 0x0))) + 0x1);
    t8 = FUN_0c187d98(0xC302CD0, 0xC302CDC, 0x3);
    t53 = 0x1;
    if (t8 == 0) {
    } else {
        t9 = FUN_0c187d98(0xC302CD0, 0xC302CE0, 0x3);
        t53 = 0x2;
        if (t9 == 0) {
        } else {
            t10 = FUN_0c187d98(0xC302CD0, 0xC302CE4, 0x3);
            t53 = 0x3;
            if (t10 == 0) {
            } else {
                t11 = FUN_0c187d98(0xC302CD0, 0xC302CE8, 0x3);
                t53 = 0x4;
                if (t11 == 0) {
                } else {
                    t12 = FUN_0c187d98(0xC302CD0, 0xC302CEC, 0x3);
                    t53 = 0x5;
                    if (t12 == 0) {
                    } else {
                        t13 = FUN_0c187d98(0xC302CD0, 0xC302CF0, 0x3);
                        t53 = 0x6;
                        if (t13 == 0) {
                        } else {
                            t14 = FUN_0c187d98(0xC302CD0, 0xC302CF4, 0x3);
                            t53 = 0x7;
                            if (t14 == 0) {
                            } else {
                                t15 = FUN_0c187d98(0xC302CD0, 0xC302CF8, 0x3);
                                t53 = 0x8;
                                if (t15 == 0) {
                                } else {
                                    t16 = FUN_0c187d98(0xC302CD0, 0xC302CFC, 0x3);
                                    t53 = 0x9;
                                    if (t16 == 0) {
                                    } else {
                                        t17 = FUN_0c187d98(0xC302CD0, 0xC302D00, 0x3);
                                        t53 = 0xA;
                                        if (t17 == 0) {
                                        } else {
                                            t18 = FUN_0c187d98(0xC302CD0, 0xC302D04, 0x3);
                                            t53 = 0xB;
                                            if (t18 == 0) {
                                            } else {
                                                t19 = FUN_0c187d98(0xC302CD0, 0xC302D08, 0x3);
                                                t53 = 0xC302CD0;
                                                if (t19 == 0) {
                                                    t53 = 0xC;
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
        }
    }
    *(int *)((int)stk + 36) = ((*(signed char *)0xC302D33));
    *(int *)((int)stk + 32) = ((*(signed char *)0xC302D32));
    *(int *)((int)stk + 28) = ((*(signed char *)0xC302D30));
    *(int *)((int)stk + 24) = ((*(signed char *)0xC302D2F));
    *(int *)((int)stk + 20) = ((*(signed char *)0xC302D2D));
    *(int *)((int)stk + 16) = ((*(signed char *)0xC302D2C));
    *(int *)((int)stk + 12) = (((int)stk + 40) + 0x10);
    *(int *)((int)stk + 8) = (unsigned char)t53;
    *(int *)((int)stk + 4) = (((int)stk + 40) + 0x8);
    *(int *)((int)stk + 0) = 0xC302D0C;
    *(unsigned int *)(((int)stk + 44)) = (((int)stk + 0) + 0x3C);
    FUN_0c187cac((((int)stk + 0) + 0x3C), 0x0, 0x0, 0x0, 0xC302D0C);
    {  /* manual: _slow_strcpy r0 = the word at stk + 40, r1 = the word at stk + 44; returns r0 */
        int d_ = *(int *)(((int)stk + 40)), s_ = *(int *)(((int)stk + 44)), k_;
        for (k_ = 0; (*(char *)(d_ + k_) = *(char *)(s_ + k_)) != 0; k_++) ;
        return d_;
    }
}

