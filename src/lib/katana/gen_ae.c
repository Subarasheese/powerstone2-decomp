/* Straight-line functions with calls and guards (batch gen_ae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o138_short { char p[0x138]; short v; };
struct o13A_short { char p[0x13A]; short v; };
struct o13C_short { char p[0x13C]; short v; };
struct o13C_ushort { char p[0x13C]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o144_short { char p[0x144]; short v; };
struct o144_ushort { char p[0x144]; unsigned short v; };
struct o146_short { char p[0x146]; short v; };
struct o146_ushort { char p[0x146]; unsigned short v; };
struct o158_int { char p[0x158]; int v; };
struct o158_uint { char p[0x158]; unsigned int v; };
struct o15C_short { char p[0x15C]; short v; };
struct o15C_ushort { char p[0x15C]; unsigned short v; };
struct o160_int { char p[0x160]; int v; };
struct o160_uint { char p[0x160]; unsigned int v; };
struct o164_uint { char p[0x164]; unsigned int v; };
struct o168_int { char p[0x168]; int v; };
struct o168_uint { char p[0x168]; unsigned int v; };
struct o16E_uchar { char p[0x16E]; unsigned char v; };
struct o16F_uchar { char p[0x16F]; unsigned char v; };
struct o170_uchar { char p[0x170]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2A_uchar { char p[0x2A]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_short { char p[0x34]; short v; };
struct o39_uchar { char p[0x39]; unsigned char v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o54_uchar { char p[0x54]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAC_short { char p[0xAC]; short v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB0_short { char p[0xB0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Ocbi(int, int);
extern int FUN_0c182050();
int FUN_0c187a88(int, int, int);
int FUN_0c18ceb0(int, int, int, int, int, int);
int FUN_0c19a2e4(void);
int FUN_0c19af74(int);
int FUN_0c19c0a6(int);
int FUN_0c19c0dc(int);
int FUN_0c1a2184(int);
int FUN_0c1a3198(int, int, int);
int FUN_0c1a39f0(int, int);
int FUN_0c2b5498(int, int, int);
int FUN_0c2c14a8(void);
int FUN_0c2c2100(int, int, int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2cb558(int, int, int);
int FUN_0c2cb900(int);
int FUN_0c2cc2c2(void);
int FUN_0c2d0b9a(int);
int FUN_0c2d1956(int);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d52d4(void);
int FUN_0c2d54a0(int);
int FUN_0c2d63be(void);
int FUN_0c2d65ae(int);
int FUN_0c2d69a4(void);
int FUN_0c2d69fc(void);
int FUN_0c2d7612(int);
int FUN_0c2d779a(int);
int FUN_0c2d77bc(int);
int FUN_0c2d9fd4(void);
int FUN_0c2db8e0(int, int, int);
int FUN_0c2e1e24(int);
int FUN_0c2e930a(int);
int FUN_0c2eb978(int);
int FUN_0c2ec358(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ee56c(void);
int FUN_0c2ee63c(void);
int FUN_0c2eeb84(int, int);
int FUN_0c2eef70(void);
int FUN_0c2ef050(void);
int SJRBF_Create(int, int, int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
int adxf_SetCmdHstry(int, int, int, int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int fmMngBit2Num(int, int);
int fmMngExecServer(void);
int fmMngFormat(int, int, int);
int fmMngInit(int, int, int);
int fmMngMcpy4(int, int, int);
int fmMngRead(int, int);
int fmMngWrite(int, int);
int fmcalccrc(int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyConnectInterrupt(int, int, int);
int kmyEnableInterrupt(void);
int kmyGetNativeBufferStatus(int, int);
int kmyInitDMADevice(void);
int kmyInitializeCallback(void);
int kmyInitializeDriver(void);
int kmyInitializeFog(void);
int kmyInitializeInterrupt(void);
int kmyInitializeTA(int);
int kmyRegisterCallback(int, int, int);
int kmyRegisterPALEXTCallback(int);
int kmyRequestCallback(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int nlLineCalcFogB(int, int, int, float);
int nlLineCalcFogC(int, int, int, float);
int search_dir(int, int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_fclose(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_memcmp(int, int);
int vmsfs_unmount(int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
float nl_display_triangle_spd(int a4, int a5, int a6);
float nl_display_triangle_spd_ofst(int a4, int a5, int a6);
int FUN_0c1a36ac(int a4, int a5, int a6, float f4, float f5);
int FUN_0c2c1bfc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2cc84e(int a4);
int ADXF_ReadNw(int a4, int a5, int a6, int a7);
int mpdrv_init(int a4, int a5, int a6);
int FUN_0c2ec1b0(int a4);
int FUN_0c2d2d8c(int a4);
int vmsfs_fsetattr(int a4, int a5, int a6, int a7);
int fmMngReadSctAllData(int a4);
int FUN_0c2c93e0(int a4, int a5, int a6, int a7);
int FUN_0c2d3c22(int a4);
int FUN_0c2e93ac(void);
int FUN_0c2fac60(int a4);
int FUN_0c2fd042(int a4);
int nlLineCalcColor(int a4, int a5, int a6, int a7);
float in_fmods(int a4, float f4, float f5);
int FUN_0c1a3438(int a4, int a5);
int kmInitDevice(int a4);
int FUN_0c1900d8(int a4, int a5, int a6);
int syBtCfgSet(int a4, int a5, int a6);
int FUN_0c2cff16(int a4, int a5, int a6, int a7);
int FUN_0c2d00f0(int a4, int a5);
int FUN_0c2c8d40(void);
int FUN_0c2cf7f4(void);
int FUN_0c2ef504(void);
int FUN_0c2f36de(int a4, int a5, int a6, int a7);
int FUN_0c198acc(int a4);
int FUN_0c2cfe38(void);
int FUN_0c2d578e(void);
int FUN_0c19a564(int a4, int a5, int a6);

float nl_display_triangle_spd(int a4, int a5, int a6)
{
    register int t0;
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u123;
    register float u124;
    register float u125;
    register float u126;
    float u38[4];
    float u54[4];
    float u70[4];
    float u85[4];
    float u101[4];
    float u117[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    *(volatile float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u4;
    u1 = u5;
    u2 = u3;
    u3 = u14[0];
    u4 = u14[1];
    u5 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = u2;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = 0.0f;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u6 = *(float *)((t7 + 0x0));
            u7 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u8 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t7 + 0x8)))->v);
            *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t8 = t4;
            t4 = (t4 - 0x8);
            u38[0] = u6;
            u38[1] = u7;
            u38[2] = u8;
            u38[3] = 1.0f;
            _builtin_ftrv(u38, u38);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = 0.0f;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t9 + 0x0)));
                u4 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t9 + 0x8)))->v);
                *(volatile float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t10 = t4;
                t4 = (t4 - 0x8);
                u54[0] = u3;
                u54[1] = u4;
                u54[2] = u5;
                u54[3] = 1.0f;
                _builtin_ftrv(u54, u54);
                u3 = u54[0];
                u4 = u54[1];
                u5 = u54[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u38[2] * (1.0f / u38[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u38[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u38[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u38[1] * (1.0f / u38[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t9 + 0x0)));
                u4 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t9 + 0x8)))->v);
                *(volatile float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u70[0] = u3;
                u70[1] = u4;
                u70[2] = u5;
                u70[3] = 1.0f;
                _builtin_ftrv(u70, u70);
                u3 = u70[0];
                u4 = u70[1];
                u5 = u70[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u38[2] * (1.0f / u38[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u38[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u38[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u38[1] * (1.0f / u38[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u123 = u38[2]; u124 = (1.0f / u38[0]); u125 = u38[0]; u126 = u38[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u6 = *(float *)((t7 + 0x0));
            u7 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u8 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            u9 = (((struct o8_float *)((t7 + 0x8)))->v);
            *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
            u2 = u9;
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u85[0] = u6;
            u85[1] = u7;
            u85[2] = u8;
            u85[3] = 1.0f;
            _builtin_ftrv(u85, u85);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u3);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = 0.0f;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t7 + 0x0)));
                u4 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t7 + 0x8)))->v);
                *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t8 = t4;
                t4 = (t4 - 0x8);
                u101[0] = u3;
                u101[1] = u4;
                u101[2] = u5;
                u101[3] = 1.0f;
                _builtin_ftrv(u101, u101);
                u3 = u101[0];
                u4 = u101[1];
                u5 = u101[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u85[2] * (1.0f / u85[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u85[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u85[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u85[1] * (1.0f / u85[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)((t7 + 0x0)));
                u4 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u6 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u5 = u6;
                u6 = (((struct o8_float *)((t7 + 0x8)))->v);
                *(volatile float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4));
                u2 = u6;
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u117[0] = u3;
                u117[1] = u4;
                u117[2] = u5;
                u117[3] = 1.0f;
                _builtin_ftrv(u117, u117);
                u3 = u117[0];
                u4 = u117[1];
                u5 = u117[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u85[2] * (1.0f / u85[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u85[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u85[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u85[1] * (1.0f / u85[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u123 = u85[2]; u124 = (1.0f / u85[0]); u125 = u85[0]; u126 = u85[1]; break;
        }
        u5 = (u5 * (1.0f / u3));
        *(float *)(((t4 - 0x8) + 0x0)) = u0;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u4 = (u4 * (1.0f / u3));
        *(float *)(((t4 - 0x8) + 0x0)) = u5;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u3);
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u3;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u0;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = (u123 * u124);
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = u124;
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = u125;
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u126 * u124);
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}

float nl_display_triangle_spd_ofst(int a4, int a5, int a6)
{
    register int t0;
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u124;
    register float u125;
    register float u126;
    register float u127;
    float u39[4];
    float u55[4];
    float u71[4];
    float u86[4];
    float u102[4];
    float u118[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    u2 = (((struct o8_float *)(t1))->v);
    *(volatile float *)((((t1 + 0x8) + 0x0) + 4));
    u3 = (((struct o8_float *)((t1 + 0x8)))->v);
    u4 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u5 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u6 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u0;
    u14[1] = u1;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u5;
    u1 = u6;
    u2 = u3;
    u3 = u4;
    u4 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = u2;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u9 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t8 = t4;
            t4 = (t4 - 0x8);
            u39[0] = u7;
            u39[1] = u8;
            u39[2] = u9;
            u39[3] = 1.0f;
            _builtin_ftrv(u39, u39);
            *(float *)(((t4 - 0x8) + 0x0)) = u6;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u4;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t9 + 0x0)));
                u5 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t9 + 0x8)))->v));
                u3 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t10 = t4;
                t4 = (t4 - 0x8);
                u55[0] = u4;
                u55[1] = u5;
                u55[2] = u6;
                u55[3] = 1.0f;
                _builtin_ftrv(u55, u55);
                u4 = u55[0];
                u5 = u55[1];
                u6 = u55[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[2] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u39[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u39[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[1] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t9 + 0x0)));
                u5 = (*(float *)(((t9 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t9))->v);
                *(volatile float *)((((t9 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t9 + 0x8)))->v));
                u3 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u71[0] = u4;
                u71[1] = u5;
                u71[2] = u6;
                u71[3] = 1.0f;
                _builtin_ftrv(u71, u71);
                u4 = u71[0];
                u5 = u71[1];
                u6 = u71[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[2] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u39[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u39[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[1] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u39[2]; u125 = (1.0f / u39[0]); u126 = u39[0]; u127 = u39[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            u9 = (((struct o8_float *)(t7))->v);
            *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t4 - 0x8) + 0x0)) = u0;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u86[0] = u7;
            u86[1] = u8;
            u86[2] = u9;
            u86[3] = 1.0f;
            _builtin_ftrv(u86, u86);
            *(float *)(((t4 - 0x8) + 0x0)) = u6;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u4;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u2;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t7 + 0x0)));
                u5 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
                u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t8 = t4;
                t4 = (t4 - 0x8);
                u102[0] = u4;
                u102[1] = u5;
                u102[2] = u6;
                u102[3] = 1.0f;
                _builtin_ftrv(u102, u102);
                u4 = u102[0];
                u5 = u102[1];
                u6 = u102[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[2] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u86[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u86[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[1] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u4 = (*(float *)((t7 + 0x0)));
                u5 = (*(float *)(((t7 + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                u7 = (((struct o8_float *)(t7))->v);
                *(volatile float *)((((t7 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t7 + 0x8)))->v));
                u3 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u0;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u118[0] = u4;
                u118[1] = u5;
                u118[2] = u6;
                u118[3] = 1.0f;
                _builtin_ftrv(u118, u118);
                u4 = u118[0];
                u5 = u118[1];
                u6 = u118[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[2] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u86[0]);
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = u86[0];
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[1] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u86[2]; u125 = (1.0f / u86[0]); u126 = u86[0]; u127 = u86[1]; break;
        }
        u6 = (u6 * (1.0f / u4));
        *(float *)(((t4 - 0x8) + 0x0)) = u0;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u5 = (u5 * (1.0f / u4));
        *(float *)(((t4 - 0x8) + 0x0)) = u6;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = (1.0f / u4);
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u4;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u0;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = (u124 * u125);
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = u125;
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = u126;
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u127 * u125);
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}

int FUN_0c1a36ac(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t5;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t25;

    (((struct o4_float *)(((int)stk + 0)))->v) = f5;
    (((struct o8_float *)(((int)stk + 0)))->v) = f4;
    t1 = 0x1;
    if (((unsigned short)(*(short *)((((((int)stk + 0) + 0x4) + 0x6) + 0x0))) & 0x8000) == 0x8000) {
        t1 = 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = t1;
    *(unsigned short *)((a5 + 0x0)) = (*(short *)((((((int)stk + 0) + 0x4) + 0x6) + 0x0)));
    t4 = *(short *)((a5 + 0x0));
    t5 = _builtin_get_fpscr();
    *(unsigned short *)((a5 + 0x0)) = ((int)(t4 & 0x7FF0) >> 4);
    _builtin_set_fpscr((t5 & 0xFFE7FFFF));
    FUN_0c1a39f0(((int)stk + 0), (((((int)stk + 0) + 0x4) + 0x6) - 2));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c187a88(a6, (((int)stk + 0) + 0x1), 0x3);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c1a39f0(((int)stk + 0), (((((int)stk + 0) + 0x4) + 0x6) - 6));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c187a88((a6 + 0x3), ((int)stk + 0), 0x4);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c1a3198(a6, 0x7, 0x3);
    if ((int)(*(short *)((a5 + 0x0))) > 0) {
        t16 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t16 | 0x80);
        t25 = (t16 | 0x80);
    } else {
        t17 = *(short *)((a5 + 0x0));
        *(unsigned short *)((a5 + 0x0)) = (t17 + 0x1);
        t18 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t18 & 0x7F);
        t19 = (t18 & 0x7F);
        t20 = (t17 + 0x1);
        for (;;) {
            if (((unsigned char)(*(signed char *)((a6 + 0x0))) & 0x80) != 0) {
                break;
            }
            t20 = (_builtin_get_fpscr());
            t20 = (t20 & 0xFFE7FFFF);
            _builtin_set_fpscr(t20);
            t19 = (FUN_0c1a3198(a6, 0x7, 0x1));
            t20 = (*(short *)((a5 + 0x0)));
            t20 = (t20 - 1);
            *(unsigned short *)((a5 + 0x0)) = t20;
        }
        t25 = t19;
    }
    return t25;
}

int FUN_0c2c1bfc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[3];

    register int R0;
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
    v0_6 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    v0_2 = vmsfs_xcreate(v0_6, (*(int *)(((int)stk + 4))), a8, ((int)stk + 0));
    v0_0 = (v0_0);
    v0_5 = (v0_2);
    v0_1 = (v0_6);
    if (((int)v0_2 < 0)) goto L_C2C1CD6;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x1)) = a9;
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    v0_2 = *(int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x34)) = ((v0_0 << 1) + (*(int *)((((((v0_2 << 2) + v0_2) << 2) << 2) + 0xC303C68))));
    v0_2 = (0x0);
    v0_4 = (v0_3);
    v0_3 = (0x200);
    v0_6 = (((v0_1 * 0x148) + 0xC8C4604));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C2C1C76;
    L_C2C1C60:;
    v0_6 = vmsfs_xwrite1((*(int *)(((int)stk + 0))), v0_4);
    v0_5 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C2C1CCE;
    v0_5 = (unsigned int)(v0_2 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + v0_3));
    if (v0_5) goto L_C2C1C60;
    L_C2C1C76:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    v0_2 = vmsfs_fopen(v0_1, (*(int *)(((int)stk + 4))), ((int)stk + 0));
    v0_5 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C2C1CD6;
    v0_2 = ((*(int *)(((int)stk + 8))));
    v0_4 = (0x0);
    v0_6 = (((((v0_1 << 8) << 2) << 1) + 0xC8C5064));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C2C1CCC;
    v0_1 = (0xFFFFFF10);
    L_C2C1CA6:;
    v0_7 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_6);
    v0_5 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C2C1CCE;
    v0_5 = (vmsfs_memcmp(v0_6, v0_2)) == 0;
    if (v0_5) goto L_C2C1CC4;
    v0_5 = (v0_1);
    L_C2C1CCE:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    L_C2C1CD6:;
    return v0_5;
    L_C2C1CC4:;
    v0_5 = (unsigned int)(v0_4 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + v0_3));
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C2C1CA6;
    L_C2C1CCC:;
    v0_5 = (0x0);
    goto L_C2C1CCE;
}

int FUN_0c2cc84e(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c2cc2c2();
    if (t0 != 0) {
        *(unsigned int *)(((((FUN_0c2e1e24(a4)) << 2) + 0xC8BF09C) + 0x0)) = (((((struct o0_int *)0xC8BF0DC)->v)) - (*(int *)0xFFD8000C));
        kmyGetNativeBufferStatus((*(int *)((t0 + 0x3C))), 0xC8BEFE4);
        t1 = t0;
        for (;;) {
            if ((*(int *)((t1 + 0x14))) == 3) {
                break;
            }
            t1 = (*(int *)((t1 + 0x10)));
            if (t1 == 0) {
                kmiFLWCTRLRotateReadyQueue(0x0);
                kmyRequestCallback(0x5);
                return 0x0;
            }
        }
        t0 = *(int *)((t1 + 0x1C));
        if ((unsigned int)t0 < (unsigned int)((((struct o3C_int *)0xC8BF0DC)->v))) {
            if (((((struct o18_int *)0xC8BF124)->v)) != 0) {
                (((struct oC_uint *)0xC8BF124)->v) = (((((struct oC_int *)0xC8BF124)->v)) | ((int)0x1 << (int)t0));
            } else {
                (((struct o0_uint *)0xC8BF124)->v) = (((((struct o0_int *)0xC8BF124)->v)) & (~((int)0x1 << (int)t0)));
            }
        }
        *(unsigned int *)((t1 + 0x1C)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x14)) = 0x4;
        kmiFLWCTRLRotateReadyQueue(0x0);
        kmyRequestCallback(0x5);
    }
    return 0x0;
}

int ADXF_ReadNw(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t18;
    register int t29;
    register int t32;
    register int t63;

    *(int *)((int)stk + 0) = a6;
    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF298, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
        t63 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            FUN_0c2c30aa(0xC2FF2C4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
            t63 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                FUN_0c2c30aa(0xC2FF2F4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                t63 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    FUN_0c2c30aa(0xC2FF31C, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                    t63 = 0xFFFFFFFD;
                } else {
                    t63 = 0x0;
                    if ((*(signed char *)((a4 + 0x1))) == 2) {
                    } else {
                        if ((*(int *)((a4 + 0x8))) != 0) {
                            FUN_0c2c30aa(0xC2FF358, 0x0, 0x0, 0x0, *(int *)((int)stk + 4));
                            t63 = 0xFFFFFFFF;
                        } else {
                            *(unsigned int *)(((int)stk + 4)) = (((a5 << 8) << 2) << 1);
                            t18 = SJRBF_Create(a6, (((a5 << 8) << 2) << 1), 0x0);
                            t63 = 0xFFFFFFFE;
                            if (t18 == 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x28)) = a6;
                                *(unsigned int *)((a4 + 0x2C)) = (*(int *)(((int)stk + 4)));
                                if ((*(int *)0xC8CC444) == 1) {
                                    ADXF_Ocbi((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                                }
                                ADXCRS_Lock();
                                t29 = FUN_0c2b5498(a4, a5, t18);
                                *(unsigned int *)(((int)stk + 4)) = t29;
                                if ((int)t29 <= 0) {
                                    t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t18 + 0x0))) + 0xC)))))(t18, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t18;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                *(int *)((int)stk + 0) = a6;
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                                t63 = (*(int *)(((int)stk + 4)));
                            }
                        }
                    }
                }
            }
        }
    }
    return t63;
}

int mpdrv_init(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC8D4D84 = 0xC8D3C88;
    *(unsigned int *)0xC8D4C4C = a4;
    (((struct oFC8_uint *)((*(int *)0xC8D4D84)))->v) = a6;
    if ((((((struct oFC4_int *)((*(int *)0xC8D4D84)))->v)) & 0x1F) != 0) {
        t0 = *(int *)0xC8D4D84;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC8D4D84;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC8D4D84;
    if ((0x1F & ((((struct oFC8_int *)(t0))->v))) != 0) {
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC8D4D84;
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC8D4D84;
    (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) | 0xA0000000);
    t0 = *(int *)0xC8D4D84;
    (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) | 0xA0000000);
    FUN_0c2d9fd4();
    t0 = 0xC300800;
    t1 = 0xC300800;
    t2 = 0xC300800;
    t3 = 0xC300800;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC8D4D84)) + (*(int *)((t3 + 0x0)))) + 0x0))) != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            mpdrv_set_dreq_ns(t0);
        } else {
            t4 = t0;
            t5 = t1;
        }
        t3 = (t3 + 0x4);
        t0 = t4;
        t1 = t5;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0xC300810) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC8D4D84)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v))))->v) = 0x6155404F;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x10)) = 0x0;
    t0 = *(int *)0xC8D4D84;
    (((struct o80_uint *)(((((struct o10F4_int *)(t0))->v))))->v) = (((((struct o10C0_int *)(t0))->v)) | ((((struct o10D0_int *)(t0))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC8D4D84)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

int FUN_0c2ec1b0(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)0xC8D679A;
    if (((unsigned char)t2 & 1) == 0) {
        return FUN_0c2eb978(0x11);
    }
    t3 = a4;
    if (((unsigned char)t2 & 8) == 0) {
        t3 = 0x1E;
    }
    if ((((unsigned char)(*(signed char *)0xC8D6793) & 0x80) == 0) && ((t0 = *(signed char *)0xC8D6795, ((unsigned char)t0 & 32) == 0) && (t1 = *(signed char *)0xC8D6794, ((unsigned char)t1 & 0x80) == 0))) {
        if (((unsigned char)(*(signed char *)0xC8D679A) & 6) == 0) {
            FUN_0c2d69a4();
            FUN_0c2d69fc();
            FUN_0c2ee56c();
            FUN_0c2ee63c();
        }
        t0 = 0x0;
        if ((0x4 & (unsigned char)(*(signed char *)0xC8D679A)) != 0) {
            t0 = 0x1;
        }
        return FUN_0c2eeb84(t3, t0);
    }
    t0 = 0x0;
    for (;;) {
        if ((unsigned short)(*(short *)((0xC8E0048 + ((unsigned char)t0 << 1)))) == 0) {
            break;
        }
        if ((unsigned char)t0 != 3) {
            t0 = (t0 + 0x1);
            continue;
        }
        return (unsigned char)t0;
    }
    *(unsigned short *)((0xC8E0048 + ((unsigned char)t0 << 1))) = t3;
    t0 = *(signed char *)0xC8D6791;
    *(unsigned char *)0xC8D6791 = (t0 | 0x8);
    return (t0 | 0x8);
}

int FUN_0c2d2d8c(int a4)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t5;
    register int t14;
    register int t19;
    register int t23;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = FUN_0c2d4768(0x305, 0x1);
    t1 = FUN_0c2d4768(0x304, 0x1);
    FUN_0c2d487c(0x306, 0x40, 0x1);
    FUN_0c2d487c(0x307, 0x3, 0x1);
    FUN_0c2d487c(0x308, 0x84, 0x1);
    t5 = *(signed char *)(((int)stk + 0));
    FUN_0c1a2184(0x1);
    t14 = (t0 & 0xFE);
    if ((0x2 & (unsigned char)t5) != 0) {
        t14 = ((t0 | 0x1) & 0x1F);
        if ((0x8 & (unsigned char)t5) != 0) {
            t14 = (((t0 | 0x1) & 0x1F) | 0x20);
        }
    }
    t19 = (t1 & 0xEF);
    if ((0x4 & (unsigned char)t5) != 0) {
        t19 = (t1 | 0x10);
    }
    t23 = (t14 & 0xFB);
    if ((0x10 & (unsigned char)t5) != 0) {
        t23 = (t14 | 0x4);
    }
    FUN_0c2d487c(0x304, (unsigned char)t19, 0x1);
    return FUN_0c2d487c(0x305, (unsigned char)t23, 0x1);
}


int fmMngReadSctAllData(int a4)
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

    t2 = *(int *)((a4 + 0xC));
    t3 = *(int *)((a4 + 0x4));
    t4 = FUN_0c2db8e0(t3, t2, 0x40);
    t5 = 0xFFFFFFFF;
    if (t4 != -1) {
        t4 = *(int *)((a4 + 0x14));
        t6 = FUN_0c2db8e0((t3 + ((((t4 + 0x1) << 2) << 2) << 2)), (((((t4 + 0x1) << 2) << 2) << 2) + t2), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t7 = 0xFFFFFFFF;
        if (t6 != -1) {
            t6 = fmMngBit2Num((((((t4 + 0x1) << 2) << 2) << 2) + t2), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t6;
            t4 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t8 = 0x0;
                if ((int)t6 > 0) {
                    t9 = (t3 + 0x40);
                    t3 = t6;
                    for (;;) {
                        t6 = FUN_0c2db8e0(t9, (a4 + 0x34), 0x40);
                        if (t6 == -1) {
                            break;
                        }
                        if ((unsigned short)((((struct o34_short *)(a4))->v)) != 0xFFFF) {
                            t6 = fmcalccrc(0x3E, (a4 + 0x34));
                            if (((unsigned short)((((struct o3E_short *)((a4 + 0x34)))->v)) == (unsigned short)t6) && (t0 = (((struct o34_short *)(a4))->v), t1 = *(int *)((a4 + 0x14)), (int)(unsigned short)t0 < (int)t1)) {
                                fmMngMcpy4((a4 + 0x34), ((((((unsigned short)((((struct o34_short *)(a4))->v)) + 0x1) << 2) << 2) << 2) + t2), 0x40);
                            }
                            t3 = (t3 - 1);
                            t9 = (t9 + 0x40);
                            if ((int)t3 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t8 = 0xFFFFFFFF;
                }
                t4 = t8;
            }
            t7 = t4;
        }
        t5 = t7;
    }
    return t5;
}

int FUN_0c2c93e0(int a4, int a5, int a6, int a7)
{
    int stk[63];
    register int t6;

    (((struct o0_uint *)0xC8D05CC)->v) = a4;
    FUN_0c2cb558(a4, a5, a6);
    *(unsigned int *)(((int)stk + 8)) = 0x353;
    *(unsigned int *)(((int)stk + 20)) = 0x211;
    *(unsigned int *)(((int)stk + 0)) = 0x88;
    *(unsigned int *)(((int)stk + 4)) = 0x343;
    *(unsigned int *)(((int)stk + 12)) = 0x24;
    *(unsigned int *)(((int)stk + 16)) = 0x208;
    *(unsigned int *)(((int)stk + 24)) = 0x51;
    *(unsigned int *)(((int)stk + 28)) = 0x3;
    *(unsigned int *)(((int)stk + 32)) = 0x319;
    *(unsigned int *)(((int)stk + 36)) = 0xF;
    *(unsigned int *)(((int)stk + 116)) = 0x208;
    *(unsigned int *)(((int)stk + 120)) = 0x15;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)(((int)stk + 56)) = 0x0;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0x16;
    if ((a4 & 0x10) != 0) {
        *(unsigned int *)(((int)stk + 108)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 108)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x1;
    *(unsigned int *)(((int)stk + 76)) = 0x0;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    *(unsigned int *)(((int)stk + 92)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 96)) = 0x0;
    *(unsigned int *)(((int)stk + 100)) = 0x1E0;
    *(unsigned int *)(((int)stk + 248)) = 0x90;
    *(unsigned int *)(((int)stk + 240)) = 0x23;
    *(unsigned int *)(((int)stk + 244)) = 0x23;
    *(unsigned int *)(((int)stk + 248)) = 0xA5;
    *(unsigned int *)(((int)stk + 240)) = 0x24;
    *(unsigned int *)(((int)stk + 244)) = 0x24;
    (((struct o8_uint *)0xC8D0678)->v) = 0x1E0;
    (((struct o0_uint *)0xC8D0678)->v) = ((*(int *)(((int)stk + 12))) + ((((struct o8_int *)0xC8D0678)->v)));
    (((struct o4_uint *)0xC8D0678)->v) = (*(int *)(((int)stk + 12)));
    t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o8_int *)0xC8D05CC)->v))))(((int)stk + 0), 0x24, 0x1E0, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    return 0x0;
}

int FUN_0c2d3c22(int a4)
{
    int t0;
    register int t1;
    register int t2;

    *(unsigned short *)((a4 + 0x0)) = 0x0;
    t1 = *(signed char *)0xC8D2621;
    t2 = (((struct o0_int *)0xC8D25F0)->v);
    if ((unsigned char)t1 == 0) {
        if (((*(signed char *)(((t2 + 0x3C) + 0x0))) & 4) != 0) {
            if (((*(signed char *)(((t2 + 0x3C) + 0x0))) & 32) == 0) {
                return 0x0;
            }
            return 0x2;
        }
        return 0x0;
    }
    if ((unsigned char)t1 != 2) {
        if ((unsigned char)t1 != 4) {
            if ((unsigned char)t1 != 8) {
                return 0x0;
            }
            if (((*(signed char *)(((t2 + 0x20) + 0x0))) & 16) == 0) {
                (((struct o31_uchar *)0xC8D25F0)->v) = 0x0;
                return 0x0;
            }
            return 0x1;
        }
        if ((((*(signed char *)(((t2 + 0x20) + 0x0))) & 4) == 0) && (t0 = *(signed char *)(((t2 + 0x3C) + 0x0)), (unsigned char)(t0 & 0x1) != 0)) {
            (((struct o31_uchar *)0xC8D25F0)->v) = 0x2;
            t0 = (((struct o0_int *)0xC8D25F0)->v);
            *(unsigned char *)((t0 + 0x8)) = ((*(signed char *)((t0 + 0x8))) & 0xFD);
            t0 = (((struct o0_int *)0xC8D25F0)->v);
            (((struct o3C_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x3C) + 0x0))) & 0xFE);
        }
        return 0x0;
    }
    if (((*(signed char *)((t2 + 0x8))) & 32) != 0) {
        *(unsigned short *)((a4 + 0x0)) = (FUN_0c2d4768(0xA7, 0x2));
    }
    return 0x2;
}

int FUN_0c2e93ac(void)
{
    register int t1;

    (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0x7F);
    (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xFE);
    (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xBF);
    (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) & 0xFB);
    (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xEF);
    (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xBF);
    (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xDF);
    (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xF7);
    (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) & 0xFB);
    (((struct oB_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FB) & 0xDF);
    (((struct oB_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FB) & 0xBF);
    (((struct oB_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FB) & 0x7F);
    (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xBF);
    (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xDF);
    (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xEF);
    (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xF7);
    (((struct o22_ushort *)0xC8D25F0)->v) = 0x0;
    (((struct oB_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FB) & 0xEF);
    (((struct oB_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FB) & 0xF7);
    (((struct oB_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FB) & 0xFB);
    (((struct o5_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F5) & 0xBF);
    (((struct o5_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F5) & 0xDF);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xFD);
    (((struct o5_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F5) & 0xFD);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xFB);
    (((struct oA_ushort *)0xC8D6724)->v) = 0x0;
    (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xFE);
    (((struct oD_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FD) & 0x7F);
    (((struct oD_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FD) & 0xBF);
    (((struct o0_uchar *)0xC8D6724)->v) = 0x0;
    if (((*(signed char *)(((((((struct o0_int *)0xC8D25F0)->v)) + 0x24) + 0x0))) & 16) != 0) {
        t1 = FUN_0c2d4768(0x304, 0x1);
        if (((unsigned short)t1 & 16) != 0) {
            t1 = ((*(signed char *)0xC8D25FC) | 0x4);
        } else {
            t1 = ((*(signed char *)0xC8D25FC) & 0xFB);
        }
    } else {
        t1 = ((*(signed char *)0xC8D25FC) & 0xFB);
    }
    (((struct oC_uchar *)0xC8D25F0)->v) = t1;
    return t1;
}

int FUN_0c2fac60(int a4)
{
    int stk[5];
    register int t1;
    register int t4;
    register int t6;
    register int t12;
    register int t23;
    register int t0;
    register int t3;
    register int t5;

    t1 = a4;
    t4 = 0x0;
    t6 = 0x1F4;
    for (;;) {
        if ((signed char)t4 != 0) {
            return t0;
        }
        t12 = (unsigned short)t6 == 0;
        t6 = (t6 - 1);
        if (t12) {
            break;
        }
        t5 = 0xC8E0308;
        t0 = (*(signed char *)((t5 + 0x0)));
        t0 = (unsigned char)t0;
        t3 = 0x1;
        if (t0 != 2) {
            if (t0 == 8) {
                t3 = 0xC2EEF70;
                t0 = (FUN_0c2eef70());
                t1 = 0x2;
                *(unsigned char *)((t5 + 0x0)) = t1;
            } else {
                t4 = t3;
            }
        } else {
            t1 = ((int)stk + 0);
            t0 = (FUN_0c2d54a0(t1));
            t0 = (signed char)t0;
            if (t0 != 0) {
                t1 = 0xC8D67C2;
                *(unsigned short *)((t1 + 0x0)) = 0x0;
                t1 = 0xC8D7081;
                t0 = (*(signed char *)((t1 + 0x0)));
                t0 = (unsigned char)t0;
                if (t0 == 1) {
                    t1 = 0xC8D7070;
                    t23 = *(int *)((t1 + 0x0));
                    *(unsigned int *)((t1 + 0x0)) = (t23 + 0x1);
                    *(unsigned char *)((((t23 + 0x1) - 0x1) + 0x0)) = (*(signed char *)(((int)stk + 0)));
                    t3 = 0xC8D706C;
                    *(unsigned short *)((t3 + 0x0)) = ((*(short *)((t3 + 0x0))) + 0x1);
                    t1 = 0xC8E032C;
                    t0 = (FUN_0c2ec410(t1, 0x0));
                    t1 = 0xC8E0300;
                    if ((*(short *)((t3 + 0x0))) == (*(short *)((t1 + 0x0)))) {
                        t3 = 0xC2EF050;
                        t0 = (FUN_0c2ef050());
                        t1 = 0x8;
                        *(unsigned char *)((t5 + 0x0)) = t1;
                    }
                } else {
                    t1 = 0x8;
                    *(unsigned char *)((t5 + 0x0)) = t1;
                }
            } else {
                t4 = t3;
            }
        }
    }
    return (FUN_0c2d65ae(0x17D4));
}

int FUN_0c2fd042(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC8D66E8;
    if (((unsigned short)((((struct oB0_short *)(t0))->v)) & 0x100) != 0) {
        t1 = *(signed char *)0xC8D66CF;
        if (((unsigned char)(*(signed char *)0xC8D678A) & 0x4) != 0) {
            if ((unsigned char)t1 == 0) {
                FUN_0c2d63be();
                (((struct o0_uchar *)0xC8D66CF)->v) = 0x1;
                FUN_0c2ec410(0xC8D6674, (unsigned short)((((struct oAA_short *)((*(int *)0xC8D66E8)))->v)));
                *(unsigned char *)0xC8D6685 = 0x9;
            }
        } else {
            if ((unsigned char)t1 != 0) {
                FUN_0c2ec410(0xC8D6674, (unsigned short)((((struct oAC_short *)(t0))->v)));
                *(unsigned char *)0xC8D6685 = 0xA;
            }
        }
    }
    t0 = a4;
    if (((unsigned char)(*(signed char *)0xC8D678A) & 0x4) != 0) {
        t0 = (FUN_0c2e930a(a4));
    }
    FUN_0c2d1956(t0);
    t0 = *(signed char *)0xC8D677F;
    t1 = (unsigned char)t0;
    if (((unsigned char)t0 & 32) == 0) {
        if (((unsigned char)(*(signed char *)0xC8D6529) & 0x4) != 0) {
            *(unsigned char *)0xC8D6685 = 0x0;
            t0 = 0x0;
        } else {
            t2 = *(signed char *)0xC8D677F;
            *(unsigned char *)0xC8D677F = (t2 | 0x20);
            t0 = (t2 | 0x20);
        }
        t1 = t0;
    }
    return t1;
}

int nlLineCalcColor(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t0 = a6;
    for (;;) {
        t1 = ((int (*)(int, int, int, int))(FUN_0c182050))(a4, a5, t0, a7);
        t2 = ((int (*)(int))(FUN_0c182050))(a5);
        if ((t1 & t2) != 0) {
            break;
        }
        if ((t1 == 0) && (t2 == 0)) {
            return 0x1;
        }
        t3 = t2;
        if (t1 != 0) {
            t3 = t1;
        }
        if (t1 == 0) {
            t0 = a5;
        } else {
            t0 = a4;
        }
        if ((t3 & 0x1) != 0) {
            nlLineCalcFogB(a4, a5, t0, ((((struct o8_float *)0xC86CE60)->v)));
        } else {
            if ((t3 & 0x2) != 0) {
                nlLineCalcFogB(a4, a5, t0, ((((struct o0_float *)0xC86CE60)->v)));
            } else {
                if ((t3 & 0x4) != 0) {
                    nlLineCalcFogC(a4, a5, t0, ((((struct oC_float *)0xC86CE60)->v)));
                } else {
                    if ((t3 & 0x8) != 0) {
                        nlLineCalcFogC(a4, a5, t0, ((((struct o4_float *)0xC86CE60)->v)));
                    }
                }
            }
        }
    }
    return 0x0;
}

float in_fmods(int a4, float f4, float f5)
{
    int stk[7];
    register float u16;
    register float u17;
    register int t18;
    register float u24;
    register float u27;
    register float u31;
    register int t1;
    register int t2;

    (((struct o18_float *)(((int)stk + 0)))->v) = f4;
    (((struct o14_float *)(((int)stk + 0)))->v) = f5;
    if ((((*(int *)(((((int)stk + 0) + 0x18) + 0x0))) & 0x7F800000) != 0x7F800000) && ((t1 = *(int *)(((int)stk + 20)), (t1 & 0x7F800000) != 0x7F800000) || (t2 = *(int *)(((int)stk + 20)), (t2 & 0x7FFFFF) == 0))) {
        if ((*(float *)(((int)stk + 20))) == 0.0f) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)0xC20AED8);
        } else {
            if (((*(int *)(((((int)stk + 0) + 0x14) + 0x0))) & 0x7F800000) == 0x7F800000) {
                *(unsigned int *)((a4 + 0x0)) = 0x0;
                (((struct o10_float *)(((int)stk + 0)))->v) = f4;
            } else {
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((((int)stk + 0) + 0x18) + 0x0))) & 0x80000000);
                *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x18) + 0x0))) & 0x7FFFFFFF);
                *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x14) + 0x0))) & 0x7FFFFFFF);
                u16 = (((struct o14_float *)(((int)stk + 0)))->v);
                u17 = (((struct o18_float *)(((int)stk + 0)))->v);
                *(float *)(((int)stk + 12)) = (u17 / u16);
                t18 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 0)) = t18;
                *(unsigned int *)(((int)stk + 4)) = (t18 & 0x80000000);
                if ((int)(0x7F800000 & (*(int *)(((int)stk + 0)))) < (int)0x4F800000) {
                    *(float *)(((int)stk + 12)) = (float)(int)(u17 / u16);
                }
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | (*(int *)(((int)stk + 4))));
                u24 = *(float *)(((int)stk + 12));
                u27 = u24;
                if (u24 > 2.14748365e+09f) {
                    u27 = (u24 + -4.2949673e+09f);
                }
                *(unsigned int *)((a4 + 0x0)) = (int)u27;
                u31 = (float)(int)u27;
                if ((int)(int)u27 < 0) {
                    u31 = ((float)(int)u27 + 4.2949673e+09f);
                }
                (((struct o10_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) - ((u31 * ((((struct o14_float *)(((int)stk + 0)))->v)))));
                *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) | (*(int *)(((int)stk + 8))));
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)0xC20AED8);
    }
    return ((((struct o10_float *)(((int)stk + 0)))->v));
}

int FUN_0c1a3438(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t26;
    register int t10;
    register int t43;
    register int t30;
    register int t31;
    int t35;
    int t12;
    int t13;

    t0 = (int)((int)a5 / (int)0x8);
    t1 = ((~(((~a5) + 0x1) & 0x7)) + 0x1);
    if ((int)a5 >= 0) {
        t1 = (a5 & 0x7);
    }
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)((int)0x80 << (int)(-t1));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)((unsigned char)((int)0x80 << (int)(-t1)) >> 1);
    *(unsigned char *)(((int)stk + 4)) = ((unsigned char)((unsigned char)((int)0x80 << (int)(-t1)) >> 1) >> 1);
    t5 = (int)((int)(a5 - 1) / (int)0x8);
    t6 = ((~(((~(a5 - 1)) + 0x1) & 0x7)) + 0x1);
    if ((int)(a5 - 1) >= 0) {
        t6 = ((a5 - 1) & 0x7);
    }
    t26 = 0x0;
    if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (*(int *)(((int)stk + 0)))) != 0) {
        t10 = *(signed char *)(((t0 + a4) + 0x0));
        *(unsigned int *)(((int)stk + 0)) = (unsigned char)t10;
        t26 = 0x1;
        if ((((unsigned char)t10 & (*(int *)(((int)stk + 8)))) == 0) && (t12 = *(signed char *)(((int)stk + 4)), t13 = *(int *)(((int)stk + 0)), ((unsigned char)t12 & t13) == 0)) {
            t26 = 0x0;
            if (((unsigned char)(*(signed char *)(((t5 + a4) + 0x0))) & (unsigned char)((int)0x80 << (int)(-t6))) != 0) {
                t26 = 0x1;
            }
        }
    }
    t43 = 0x0;
    if (t26 == 1) {
        t30 = (t5 + a4);
        t31 = ((int)0x80 << (int)(-t6));
        for (;;) {
            if ((((unsigned char)(*(signed char *)((t30 + 0x0))) & (unsigned char)t31) != 0) && ((unsigned int)t30 >= (unsigned int)a4)) {
                t35 = (~t31);
                t31 = (t31 << 1);
                *(unsigned char *)((t30 + 0x0)) = ((*(signed char *)((t30 + 0x0))) & t35);
                if ((unsigned char)t31 == 0) {
                    t31 = 0x1;
                    t30 = (t30 - 1);
                }
                continue;
            }
            break;
        }
        t43 = 0x1;
        if ((unsigned int)t30 >= (unsigned int)a4) {
            *(unsigned char *)((t30 + 0x0)) = ((*(signed char *)((t30 + 0x0))) | t31);
            t43 = 0x0;
        }
    }
    return t43;
}

int kmInitDevice(int a4)
{
    register int t1;

    (((struct o0_uint *)0xC8BE7A8)->v) = (a4 & 0xFFFF0000);
    (((struct o4_uint *)0xC8BE7A8)->v) = 0xC2FF5CC;
    (((struct o8_uint *)0xC8BE7A8)->v) = 0xC2FF628;
    t1 = 0x800000;
    if (((((struct o0_int *)0xC8BE7A8)->v)) == 0x10000) {
        t1 = 0x1000000;
    }
    *(unsigned int *)0xC8BEFA0 = t1;
    kmyInitializeDriver();
    kmyInitializeCallback();
    kmyRegisterCallback(0x8, 0xC2B658E, 0xC8BF104);
    kmyRegisterCallback(0xB, 0xC2B6592, 0xC8BF10C);
    kmyRegisterPALEXTCallback(0xC2B6598);
    FUN_0c2cb900(a4);
    kmyInitializeFog();
    (((struct o10_uint *)0xC8BF0E8)->v) = 0xF;
    (((struct oC_uint *)0xC8BF0E8)->v) = 0x28;
    (((struct o8_uint *)0xC8BF0E8)->v) = 0x0;
    (((struct o4_uint *)0xC8BF0E8)->v) = 0x0;
    kmyInitializeInterrupt();
    kmyConnectInterrupt(0x1E, 0xC2B6580, 0x0);
    kmyInitDMADevice();
    kmyEnableInterrupt();
    kmyInitializeTA(0xC8BEF7C);
    (((struct o0_uint *)0xC8BF0E8)->v) = 0x0;
    return 0x0;
}

int FUN_0c1900d8(int a4, int a5, int a6)
{
    int stk[2];

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
    v0_2 = a4;
    v0_4 = a5;
    v0_7 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    v0_0 = FUN_0c19a2e4();
    v0_3 = (0x0);
    v0_1 = (v0_2);
    v0_2 = (v0_0);
    if ((v0_0 == -1)) goto L_C1901A4;
    v0_7 = *(int *)0xC8A73C0;
    v0_5 = (0xC8A738C);
    v0_6 = ((v0_2 * 0x174));
    v0_0 = (((v0_2 * 0x174) + v0_7));
    v0_2 = (0x0);
    v0_4 = (0x174);
    v0_7 = (v0_7);
    v0_8 = (0x1);
    L_C19012E:;
    if (!(((int)v0_2 < (int)(unsigned char)(*(signed char *)((v0_5 + 0x0)))))) goto L_C190136;
    if ((((((struct o138_short *)((v0_6 + v0_7)))->v)) == 0)) goto L_C19012C;
    if ((((v0_2 * v0_4) + v0_7) != v0_1)) goto L_C19012C;
    (((struct o13C_ushort *)(v0_0))->v) = v0_2;
    v0_3 = (v0_8);
    goto L_C190136;
    L_C190136:;
    if ((v0_3 == 0)) goto L_C1901A4;
    (((struct o144_ushort *)(v0_0))->v) = ((((struct o144_short *)(v0_1))->v));
    if ((((((struct o146_short *)(v0_1))->v)) != 0)) goto L_C190152;
    (((struct o146_ushort *)(v0_0))->v) = (*(short *)(((*(int *)(((int)stk + 4))) + 0x0)));
    L_C190158:;
    v0_2 = (0x158);
    if ((((((struct o158_int *)(v0_1))->v)) != 0)) goto L_C190168;
    (((struct o158_uint *)(v0_0))->v) = (*(int *)(((int)stk + 0)));
    L_C19016C:;
    (((struct o160_uint *)(v0_0))->v) = ((((struct o160_int *)(v0_1))->v));
    (((struct o15C_ushort *)(v0_0))->v) = ((((struct o15C_short *)(v0_1))->v));
    (((struct o16E_uchar *)(v0_0))->v) = (*(signed char *)((v0_1 + 0x16E)));
    (((struct o16F_uchar *)(v0_0))->v) = (*(signed char *)((v0_1 + 0x16F)));
    (((struct o170_uchar *)(v0_0))->v) = (*(signed char *)((v0_1 + 0x170)));
    (((struct o168_uint *)(v0_0))->v) = ((((struct o168_int *)(v0_1))->v));
    v0_1 = (FUN_0c19c0a6(v0_0)) != 0;
    if (v0_1) goto L_C1901A4;
    v0_1 = (FUN_0c19c0dc(v0_0)) == 0;
    if (!(v0_1)) goto L_C1901A4;
    v0_2 = (v0_0);
    goto L_C1901AA;
    L_C1901A4:;
    v0_2 = (0x0);
    L_C1901AA:;
    return v0_2;
    L_C190168:;
    *(unsigned int *)((v0_0 + v0_2)) = (*(int *)((v0_1 + v0_2)));
    goto L_C19016C;
    L_C190152:;
    (((struct o146_ushort *)(v0_0))->v) = ((((struct o146_short *)(v0_1))->v));
    goto L_C190158;
    L_C19012C:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C19012E;
}

int syBtCfgSet(int a4, int a5, int a6)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = fmMngInit(0x2, v0_1, v0_2);
    v0_3 = (v0_0);
    v0_0 = (v0_4);
    if ((v0_4 != -8)) goto L_C2C289E;
    v0_4 = fmMngFormat(0x0, v0_1, v0_2);
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C2C2942;
    L_C2C28A2:;
    v0_0 = (fmMngRead(0x5, ((int)stk + 0))) != 0;
    v0_4 = (((int)stk + 0));
    if (v0_0) goto L_C2C2942;
    v0_0 = (0xC2C2778);
    L_C2C28B4:;
    v0_5 = fmMngExecServer();
    v0_0 = (v0_5);
    if ((v0_5 == 2)) goto L_C2C28B4;
    if ((v0_0 != 1)) goto L_C2C2942;
    v0_0 = (((FUN_0c2c2100(v0_0, v0_1, v0_2)) + 0x10));
    if ((v0_3 != 0)) goto L_C2C28E8;
    v0_1 = (0x8);
    v0_2 = (v0_4);
    L_C2C28E0:;
    if (!((v0_1 != 0))) goto L_C2C2946;
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((v0_2 + 0x0)));
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 - 1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C2C28E0;
    L_C2C2946:;
    v0_0 = (0x0);
    L_C2C2948:;
    return v0_0;
    L_C2C28E8:;
    v0_5 = (0x5);
    v0_0 = ((v0_0 + 0x7));
    v0_1 = ((v0_4 + 0x7));
    v0_2 = (0x0);
    R7 = (0x1);
    L_C2C2920:;
    if (((int)v0_2 < (int)v0_5)) goto L_C2C28F6;
    v0_1 = fmMngWrite(0x5, v0_4);
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C2C2942;
    L_C2C2932:;
    v0_1 = fmMngExecServer();
    v0_0 = (v0_1);
    if ((v0_1 == 2)) goto L_C2C2932;
    if ((v0_0 == 1)) goto L_C2C2946;
    L_C2C2942:;
    v0_0 = (0xFFFFFFFF);
    goto L_C2C2948;
    L_C2C28F6:;
    if (((v0_3 & R7) == 0)) goto L_C2C2918;
    *(unsigned char *)((v0_1 + 0x0)) = (*(signed char *)((v0_0 + 0x0)));
    if ((v0_2 != 4)) goto L_C2C2918;
    *(unsigned char *)(((v0_1 - 0x1) + 0x0)) = (*(signed char *)(((v0_0 - 1) + 0x0)));
    *(unsigned char *)((((v0_1 - 0x1) - 0x1) + 0x0)) = (*(signed char *)((((v0_0 - 1) - 1) + 0x0)));
    *(unsigned char *)(((((v0_1 - 0x1) - 0x1) - 0x1) + 0x0)) = (*(signed char *)(((((v0_0 - 1) - 1) - 1) + 0x0)));
    v0_0 = ((((v0_0 - 1) - 1) - 1));
    v0_1 = ((((v0_1 - 0x1) - 0x1) - 0x1));
    L_C2C2918:;
    v0_3 = ((v0_3 >> 1));
    v0_0 = ((v0_0 - 1));
    v0_1 = ((v0_1 - 1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C2C2920;
    L_C2C289E:;
    if ((v0_0 != 0)) goto L_C2C2942;
    goto L_C2C28A2;
}

int FUN_0c2cff16(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC8D25BD;
    t1 = 0x29;
    if ((*(signed char *)((((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8) + 0x29))) == 0) {
        *(unsigned char *)((((short)((short)(unsigned char)t0 * (short)0x32) + 0xC8D1DD8) + 0x0)) = 0x2A;
        t0 = 0x0;
        for (;;) {
            t2 = (signed char)t0;
            t0 = (t0 + 0x1);
            *(unsigned char *)(((t2 + (((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8) + 0x1)) + 0x0)) = 0x20;
            if ((int)(signed char)t0 >= (int)0x28) {
                break;
            }
        }
        (((struct o29_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2A_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2B_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2C_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2D_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2E_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o2F_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o30_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        (((struct o31_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
        t1 = 0x31;
    }
    return t1;
}

int FUN_0c2d00f0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = 0x0;
    for (;;) {
        if ((int)(unsigned char)t1 >= (int)0x28) {
            return t0;
        }
        t0 = (*(signed char *)((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x0)));
        if (t0 != 66) {
            if (t0 != 68) {
                break;
            }
            t1 = (t1 + 0x1);
            continue;
        }
        t1 = (t1 + 0x1);
    }
    *(unsigned char *)((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x0)) = 0x44;
    t0 = 0x0;
    for (;;) {
        t2 = FUN_0c2d0b9a((*(signed char *)((a4 + (unsigned char)t0))));
        if (((signed char)t2 != 0) && ((int)(unsigned char)t0 < (int)0x28)) {
            t2 = *(signed char *)((a4 + (unsigned char)t0));
            t3 = ((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x1) + (unsigned char)t0);
            t0 = (t0 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t2;
            continue;
        }
        break;
    }
    *(unsigned char *)((((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x1) + (unsigned char)t0) + 0x0)) = 0x3A;
    (((struct o29_uchar *)(((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2A_uchar *)(((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8)))->v) = (*(signed char *)0xC8D25A8);
    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x1)) = (*(signed char *)0xC8D25A9);
    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x2)) = (*(signed char *)0xC8D25AA);
    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x2A) + 0x3)) = (*(signed char *)0xC8D25AB);
    (((struct o2E_uchar *)(((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8)))->v) = (*(signed char *)0xC8D25A8);
    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x1)) = (*(signed char *)0xC8D25A9);
    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x2)) = (*(signed char *)0xC8D25AA);
    t0 = *(signed char *)0xC8D25AB;
    *(unsigned char *)(((((short)((short)(unsigned char)t1 * (short)0x32) + 0xC8D1DD8) + 0x2E) + 0x3)) = t0;
    *(unsigned char *)((a5 + 0x0)) = t1;
    return t0;
}

int FUN_0c2c8d40(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t7;
    register int t10;
    int t11;
    register int t12;
    register int t13;
    register int t17;
    register int t26;
    register int t22;

    t0 = (((struct o0_int *)0xC8D0A34)->v);
    (((struct o0_uint *)0xC8D0A34)->v) = 0xF;
    t1 = (((struct o18_int *)0xC8D0A34)->v);
    t2 = (((struct o8_int *)0xA05F6900)->v);
    if ((t2 & t1) != 0) {
        t3 = 0x0;
        for (;;) {
            if (((t2 & t1) & ((int)0x1 << (int)t3)) != 0) {
                break;
            }
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x4) {
                (((struct o0_uint *)0xC8D0A34)->v) = t0;
                return 0x0;
            }
        }
        t7 = *(int *)((0xC303EA8 + (t3 << 2)));
        (((struct o0_uint *)0xC8D0A34)->v) = t7;
        (((struct o8_uint *)0xA05F6900)->v) = ((int)0x1 << (int)t3);
        *(unsigned int *)0xC8D0C80 = t7;
        t10 = ((int (*)(int, int, int, int))((*(int *)(((((t7 << 2) << 2) + 0xC8D0A60) + 0x0)))))(0xC8D0C80, (*(int *)(((((t7 << 2) << 2) + 0xC8D0A60) + 0xC))), ((int)0x1 << (int)t3), 0xA05F6908);
    } else {
        t11 = (((struct o14_int *)0xC8D0A34)->v);
        t12 = (((struct o0_int *)0xA05F6900)->v);
        if ((t12 & t11) != 0) {
            t13 = 0x0;
            for (;;) {
                if (((t12 & t11) & ((int)0x1 << (int)t13)) != 0) {
                    break;
                }
                t13 = (t13 + 0x1);
                if ((int)t13 >= (int)0x16) {
                    (((struct o0_uint *)0xC8D0A34)->v) = t0;
                    return 0x0;
                }
            }
            t17 = *(int *)((0xC303E50 + (t13 << 2)));
            (((struct o0_uint *)0xC8D0A34)->v) = t17;
            if (t17 == 18) {
                *(unsigned int *)0xFFA0002C = ((*(int *)0xFFA0002C) & 0xFFFFFFFC);
                t22 = ((int)0x1 << (int)t13);
            } else {
                if (t17 == 20) {
                    t22 = (((int)0x1 << (int)t13) | 0x3);
                } else {
                    t22 = ((int)0x1 << (int)t13);
                }
            }
            (((struct o0_uint *)0xA05F6900)->v) = t22;
            *(unsigned int *)0xC8D0C80 = t17;
            t26 = ((int (*)(int, int, int, int))((*(int *)(((((t17 << 2) << 2) + 0xC8D0A60) + 0x0)))))(0xC8D0C80, (*(int *)(((((t17 << 2) << 2) + 0xC8D0A60) + 0xC))), t22, 0xFFA0002C);
        }
    }
    (((struct o0_uint *)0xC8D0A34)->v) = t0;
    return 0x0;
}

int FUN_0c2cf7f4(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    if (((*(signed char *)0xC8D6638) == 0)) goto L_C2CF81A;
    (((struct o8_uint *)0xC8D662C)->v) = (((((struct o8_int *)0xC8D662C)->v)) + 0x1);
    v0_1 = *(signed char *)0xC8D6632;
    (((struct o6_uchar *)0xC8D662C)->v) = (v0_1 + 0x1);
    v0_2 = ((unsigned char)(v0_1 + 0x1));
    v0_0 = (0xC8D6632);
    if (((unsigned char)(v0_1 + 0x1) != 10)) goto L_C2CF8CE;
    *(unsigned char *)((v0_0 + 0x0)) = 0x0;
    L_C2CF81A:;
    v0_1 = (0xC8D6778);
    v0_0 = (0xC8D6788);
    if ((((unsigned char)(*(signed char *)0xC8D6788) & 16) == 0)) goto L_C2CF8C6;
    if ((((unsigned char)(*(signed char *)((v0_0 + 0x0))) & 32) != 0)) goto L_C2CF898;
    v0_0 = (signed char)(FUN_0c2d7612(0x0)) == 0;
    if (v0_0) goto L_C2CF8C6;
    (((struct o10_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x10) + 0x0))) | 0x20);
    v0_0 = *(signed char *)0xC8D6449;
    FUN_0c2ec410(0xC8D662C, ((((unsigned char)v0_0 << 2) + (unsigned char)v0_0) << 1));
    L_C2CF8C6:;
    return FUN_0c2ec358();
    L_C2CF898:;
    v0_0 = (signed char)(FUN_0c2ec430(((((struct o0_int *)0xC8D662C)->v)))) == 0;
    if (v0_0) goto L_C2CF8C6;
    FUN_0c2d779a(0x0);
    if ((((unsigned char)(*(signed char *)0xC8D6455) & 2) == 0)) goto L_C2CF8BC;
    FUN_0c2d77bc(0x0);
    L_C2CF8BC:;
    (((struct o10_uchar *)(v0_1))->v) = ((*(signed char *)(((v0_1 + 0x10) + 0x0))) & 0xCE);
    goto L_C2CF8C6;
    L_C2CF8CE:;
    return v0_2;
}

int FUN_0c2ef504(void)
{
    register int t0;
    register int t1;

    (((struct oE_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o0_ushort *)0xC8D26EC)->v) = 0x80;
    (((struct o2_uchar *)0xC8D26EC)->v) = 0x0;
    (((struct o9_uchar *)0xC8D26EC)->v) = 0x0;
    (((struct oC_uchar *)0xC8D26EC)->v) = 0x0;
    (((struct oF_uchar *)0xC8D26EC)->v) = 0xFF;
    (((struct oE_uchar *)0xC8D26EC)->v) = 0xBF;
    (((struct o11_uchar *)0xC8D26EC)->v) = 0xFF;
    (((struct o10_uchar *)0xC8D26EC)->v) = 0xBF;
    (((struct o13_uchar *)0xC8D26EC)->v) = 0xFF;
    (((struct o12_uchar *)0xC8D26EC)->v) = 0xBF;
    (((struct o14_uchar *)0xC8D26EC)->v) = 0x0;
    (((struct o39_uchar *)0xC8D26EC)->v) = 0x10;
    (((struct o3A_uchar *)0xC8D26EC)->v) = 0x2;
    t0 = 0x0;
    for (;;) {
        *(unsigned char *)((((unsigned char)t0 + 0xC8D2701) + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        if ((int)(unsigned char)t0 >= (int)0x10) {
            break;
        }
    }
    (((struct o4_uint *)0xC8D701C)->v) = 0xC8D684C;
    (((struct o8_uint *)0xC8D701C)->v) = 0xC8D684C;
    (((struct o0_uint *)0xC8D701C)->v) = 0xC8D701B;
    *(unsigned short *)0xC8D684A = 0x0;
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned short *)(((0xC8D2B88 + (short)t0) + 0x0)) = 0xFB;
        *(unsigned short *)((((short)t0 + 0xC8D2B88) + 0x2)) = 0x0;
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x8C);
        if ((int)(unsigned char)t1 >= (int)0x8) {
            break;
        }
    }
    (((struct o1_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o2_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o5_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o0_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o3_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o4_uchar *)0xC8D7085)->v) = 0x0;
    (((struct o0_uchar *)0xC8D83DA)->v) = 0x17;
    (((struct o1_uchar *)0xC8D83DA)->v) = 0x3;
    (((struct o2_uchar *)0xC8D83DA)->v) = 0x0;
    (((struct o7_uchar *)0xC8D26EC)->v) = 0x0;
    (((struct o8_uchar *)0xC8D26EC)->v) = 0x0;
    (((struct oC_uchar *)0xC8D7085)->v) = 0x1;
    return 0x44;
}

int FUN_0c2f36de(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t1 = 0x80;
    if (((unsigned char)(*(signed char *)0xC8D679A) & 0x80) != 0) {
        t1 = ((*(signed char *)0xC8D679B) & 0x7F);
    }
    t2 = *(signed char *)0xC8D679A;
    t3 = 0xFA0;
    if (((unsigned char)t2 & 64) != 0) {
        t3 = 0x200;
    }
    t4 = (unsigned char)t2;
    t2 = a7;
    t5 = (*(short *)0xC8DA100);
    for (;;) {
        t6 = (((struct o0_short *)0xC8E00BE)->v);
        (((struct o0_ushort *)0xC8E00BE)->v) = (t6 - 1);
        if ((unsigned short)((t6 - 1) + 0x1) == 0) {
            break;
        }
        t2 = (*(int *)0xC8E00C0);
        t4 = (*(signed char *)((t2 + 0x0)));
        t4 = (unsigned char)t4;
        t4 = (t4 & 0x7F);
        if (t4 != 17) {
            t4 = (unsigned short)t5;
            t5 = (t5 + 0x1);
            *(unsigned char *)((0xC8DA102 + t4)) = (*(signed char *)((t2 + 0x0)));
        }
        t6 = (*(int *)0xC8E00C0);
        t6 = (t6 + 0x1);
        *(unsigned int *)0xC8E00C0 = t6;
        t6 = (t6 - 1);
        t7 = *(signed char *)((t6 + 0x0));
        t6 = (unsigned char)t1;
        if ((((unsigned char)t7 & 0x7F) == t6) || (t0 = (((unsigned char)t7 & 0x7F) == t6), t6 = (unsigned short)t5, (int)t6 > (int)(unsigned short)t3)) {
            t4 = (*(signed char *)0xC8D6791);
            t4 = (t4 | 0x80);
            *(unsigned char *)0xC8D6791 = t4;
        }
    }
    (((struct o0_ushort *)0xC8E00BE)->v) = 0x0;
    *(unsigned short *)0xC8DA100 = t5;
    return t4;
}

int FUN_0c198acc(int a4)
{
    register int t0;
    register int t1;
    int t2;
    int t3;
    register int t4;
    int t5;
    register int t6;
    int t7;
    register int t8;
    register int t9;

    t8 = 0x0;
    for (;;) {
        t9 = *(short *)((((t8 * 0x1C) + 0xC8A8FDC) + 0xE));
        if ((((unsigned short)t9 & 0x1) != 0) && (((0x8 & (unsigned short)t9) != 0) && (((t0 = *(int *)((((t8 * 0x1C) + 0xC8A8FDC) + 0x4)), t1 = *(int *)((((t8 * 0x1C) + 0xC8A8FDC) + 0x0)), t1 == (t0 & a4)) || ((a4 == -1) || ((((a4 == 0)) ? 1 : 0) != 0))) && (t2 = *(signed char *)((((t8 * 0x1C) + 0xC8A8FDC) + 0x19)), (unsigned char)t2 == 1)))) {
            return t8;
        }
        t8 = (t8 + 0x1);
        if ((int)t8 >= (int)0x20) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((t0 * 0x1C) + 0xC8A8FDC) + 0xE));
        if ((((unsigned short)t1 & 0x1) != 0) && (((0x4 & (unsigned short)t1) != 0) && (t3 = *(int *)((((t0 * 0x1C) + 0xC8A8FDC) + 0x4)), t4 = *(int *)((((t0 * 0x1C) + 0xC8A8FDC) + 0x0)), t4 == (t3 & a4)))) {
            return t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((t0 * 0x1C) + 0xC8A8FDC) + 0xE));
        if ((((unsigned short)t1 & 0x1) != 0) && (((0x2 & (unsigned short)t1) != 0) && (t5 = *(int *)((((t0 * 0x1C) + 0xC8A8FDC) + 0x4)), t6 = *(int *)((((t0 * 0x1C) + 0xC8A8FDC) + 0x0)), t6 == (t5 & a4)))) {
            return t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(short *)((((t0 * 0x1C) + 0xC8A8FDC) + 0xE));
        if ((((unsigned short)t1 & 0x1) != 0) && (((0x2 & (unsigned short)t1) != 0) && (t7 = *(int *)((((t0 * 0x1C) + 0xC8A8FDC) + 0x0)), t7 == 0))) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            return 0xFFFFFFFF;
        }
    }
    return t0;
}

int FUN_0c2cfe38(void)
{
    register int t1;
    register int t3;

    *(unsigned char *)0xC8D25BC = 0x0;
    *(unsigned char *)((((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8) + 0x0)) = 0x2A;
    t1 = 0x0;
    for (;;) {
        t3 = (signed char)t1;
        t1 = (t1 + 0x1);
        *(unsigned char *)(((t3 + (((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8) + 0x1)) + 0x0)) = 0x20;
        if ((int)(signed char)t1 >= (int)0x28) {
            break;
        }
    }
    (((struct o29_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2A_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2B_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2C_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2D_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2E_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o2F_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o30_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    (((struct o31_uchar *)(((short)((short)(unsigned char)(*(signed char *)0xC8D25BD) * (short)0x32) + 0xC8D1DD8)))->v) = 0x0;
    return 0x31;
}

int FUN_0c2d578e(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    int t8;
    register int t9;

    FUN_0c2d52d4();
    t9 = *(int *)0xC8D25F0;
    if ((((int)(unsigned char)(*(signed char *)((t9 + 0x48))) >= (int)0xC1) && (t0 = *(int *)0xC8D25F0, t1 = *(signed char *)((t0 + 0x48)), (int)(unsigned char)t1 <= (int)0xCE)) || (((t2 = *(int *)0xC8D25F0, t3 = *(signed char *)((t2 + 0x48)), (int)(unsigned char)t3 >= (int)0x91) && (t4 = *(int *)0xC8D25F0, t5 = *(signed char *)((t4 + 0x48)), (int)(unsigned char)t5 <= (int)0x9D)) || (t6 = *(int *)0xC8D25F0, t7 = *(signed char *)((0x48 + t6)), ((unsigned char)t7 & 0xE0) == 0xE0))) {
        (((struct o54_uchar *)(t9))->v) = ((*(signed char *)(((t9 + 0x54) + 0x0))) & 0xFE);
        (((struct o48_uchar *)((*(int *)0xC8D25F0)))->v) = 0xC0;
        t0 = *(int *)0xC8D25F0;
        (((struct o54_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x54) + 0x0))) | 0x4);
        t0 = FUN_0c2ec410(0xC8D268C, 0xC8);
        *(unsigned char *)0xC8D2664 = 0x1;
        t1 = t0;
    } else {
        if (((int)(unsigned char)(*(signed char *)((t9 + 0x48))) >= (int)0x71) && (t8 = *(signed char *)((t9 + 0x48)), (int)(unsigned char)t8 <= (int)0x76)) {
            (((struct o54_uchar *)(t9))->v) = ((*(signed char *)(((t9 + 0x54) + 0x0))) & 0xFE);
            (((struct o48_uchar *)((*(int *)0xC8D25F0)))->v) = 0x70;
            t0 = *(int *)0xC8D25F0;
            (((struct o54_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x54) + 0x0))) | 0x4);
            t0 = FUN_0c2ec410(0xC8D268C, 0x64);
            *(unsigned char *)0xC8D2664 = 0x1;
            t2 = t0;
        } else {
            *(unsigned char *)0xC8D2664 = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c19a564(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t3 = FUN_0c19af74(a4);
    t4 = 0xFFFFFFFC;
    if (t3 == 0) {
        t3 = *(int *)0xC8A73C0;
        t5 = 0xFFFFFFFC;
        if ((unsigned short)((((struct o13A_short *)(((a4 * 0x174) + t3)))->v)) != 1) {
        } else {
            t6 = 0x0;
            for (;;) {
                if ((int)t6 >= (int)(unsigned char)(*(signed char *)0xC8A738C)) {
                    (((struct o164_uint *)(((a4 * 0x174) + t3)))->v) = a5;
                    (((struct o168_uint *)(((a4 * 0x174) + t3)))->v) = a6;
                    return 0x0;
                }
                if ((((((struct o138_short *)(((t6 * 0x174) + t3)))->v)) != 0) && ((t0 = (((struct o13C_short *)(((t6 * 0x174) + t3)))->v), (unsigned short)t0 == (unsigned short)a4) && ((t1 = (((struct o13A_short *)(((t6 * 0x174) + t3)))->v), (int)(unsigned short)t1 < (int)0xA) && (t2 = (((struct o13A_short *)(((t6 * 0x174) + t3)))->v), (int)(unsigned short)t2 > 0)))) {
                    break;
                }
                t6 = (t6 + 0x1);
            }
            FUN_0c18ceb0(a4, a5, t6, ((((struct o158_int *)(((t6 * 0x174) + t3)))->v)), (((((struct o144_short *)(((t6 * 0x174) + t3)))->v))), (((((struct o146_short *)(((t6 * 0x174) + t3)))->v))));
            (((struct o168_uint *)(((t6 * 0x174) + t3)))->v) = a6;
            (((struct o13C_ushort *)(((t6 * 0x174) + t3)))->v) = 0xFFFF;
            t5 = 0x0;
        }
        t4 = t5;
    }
    return t4;
}
