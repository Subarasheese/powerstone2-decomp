/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o28_short { char p[0x28]; short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2E_uchar { char p[0x2E]; unsigned char v; };
struct o2F_uchar { char p[0x2F]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
int FUN_0c10121c(int, int, int);
int FUN_0c1777c0(void);
int FUN_0c177f40(int, int, int, int);
int FUN_0c183140(int);
int FUN_0c184000(int, int, int);
int FUN_0c18558a(int);
int FUN_0c185600(void);
int FUN_0c187a88(int, int, int);
int FUN_0c187d24(int, int);
int FUN_0c187d98(int, int, int);
int FUN_0c18dad6(int);
int FUN_0c18dcf2(int, int);
int FUN_0c18ea5e(void);
int FUN_0c18ea64(int);
int FUN_0c191a84(int, int);
int FUN_0c19274e(int, int, int, int);
int FUN_0c1931c0(void);
int FUN_0c193cd2(int, int, int);
int FUN_0c197d7c(int, int);
int FUN_0c19c8e4(int, int);
int FUN_0c19c906(int, int);
int FUN_0c19d1d0(int, int);
int FUN_0c19d250(int, int);
int FUN_0c1a027c(int);
int FUN_0c1a02a6(int);
int FUN_0c1a02cc(int, int, int);
int FUN_0c2b10c0(int, int, int);
int FUN_0c2bca16(int);
int FUN_0c2c1bfc(int, int, int, int, int, int);
int FUN_0c2cf374(int);
int FUN_0c2d0b9a(int);
int FUN_0c2d1b2e(int, int, int, int, int, int);
int FUN_0c2d28e8(int, int, int);
int FUN_0c2d4768(int, int);
int FUN_0c2d487c(int, int, int);
int FUN_0c2d52d4(void);
int FUN_0c2d54a0(int);
int FUN_0c2d65ae(int);
int FUN_0c2dee48(int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c2e783e(void);
int FUN_0c2e7e3e(void);
int FUN_0c2e93ac(void);
int FUN_0c2ebeae(void);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ec67a(int);
int FUN_0c2ed436(void);
int FUN_0c2eec44(void);
int FUN_0c2eef70(void);
int FUN_0c2ef050(void);
int FUN_0c2efbd8(void);
int FUN_0c2f3f1c(void);
int FUN_0c2f3f9c(void);
int FUN_0c2f40d2(int, int, int, int, int, int, int);
int FUN_0c2f4194(void);
int FUN_0c2f430c(void);
int FUN_0c2f46d4(void);
int FUN_0c2f5ac0(void);
int FUN_0c2f6bcc(void);
int FUN_0c2f6d04(void);
int FUN_0c2f6db2(void);
extern int FUN_0c2f6eea();
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
int _pd_peripheral_error(int, int, int);
int _pd_peripheral_set_id(int, int);
int _pd_peripheral_set_null(int);
int direntry(int, int);
int get_fat(int, int, int);
int get_vmstime(int, int);
int kdGetDevice(int);
int kmBeginPass(int);
int kmBeginScene(int);
int kmSetWaitVsyncCount(int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmiReadRegister(int);
int kmyRequestCallback(int);
int nlSetWindowSize(float, float, float, float);
int nlSysInitStripContextBG(int);
int nlSysInitStripContextVtx(int);
int search_dir(int, int, int);
int setCullingThreshold(float);
int strlen(int);
int thunk_FUN_0c2c067e(int);
int thunk_FUN_0c2e6fa2(void);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_memcmp(int, int);
int vmsfs_unmount(int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
float nl_display_strip_spd_ofst(int a4, int a5, int a6);
int FUN_0c19ed24(int a4, int a5, int a6, int a7, int a8);
void FUN_0c2b12fa(void);
int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c18ea8c(int a4, int a5, int a6, int a7);
int FUN_0c193e6a(int a4, int a5, int a6, int a7, int a8);
int vmsfs_findfirst(int a4, int a5, int a6, int a7);
int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2c8e20(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c2cc756(int a4, int a5);
int FUN_0c2cfff8(int a4, int a5);
int FUN_0c2d423e(void);
int FUN_0c178350(int a4, int a5, int a6, int a7);
int FUN_0c193fc0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2c1ae8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c19f57e(int a4, int a5, int a6);
int FUN_0c2e423c(int a4);
int FUN_0c2f3e28(int a4, int a5, int a6, int a7);
int FUN_0c17fb00(float f4, float f5, float f6, float f7);
int FUN_0c2eac88(void);
int FUN_0c2c19f8(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2d401c(int a4, int a5, int a6, int a7);
int FUN_0c2efae8(void);
int FUN_0c1935ce(void);
int vmsfs_fread1(int a4, int a5);
int FUN_0c19d2b4(int a4, int a5, int a6, int a7);
int kmGetCurrentScanline(int a4);
int vmsfs_fgetinfo(int a4, int a5, int a6);
int FUN_0c2f57f4(int a4, int a5);
int FUN_0c2fb486(void);
int FUN_0c1942e6(int a4, int a5, int a6);

float nl_display_strip_spd_ofst(int a4, int a5, int a6)
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
    register float u163;
    register float u164;
    register float u165;
    register float u166;
    register int t35;
    float u44[4];
    register int t56;
    float u66[4];
    register int t79;
    float u89[4];
    register int t102;
    float u111[4];
    register int t123;
    float u133[4];
    register int t146;
    float u156[4];

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
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u5;
    u1 = u6;
    u2 = u3;
    u3 = u4;
    u4 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = u2;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t35 = (t6 - 8);
            } else {
                t35 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t35 + 0x0));
            u8 = *(float *)(((t35 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u9 = (((struct o8_float *)(t35))->v);
            *(volatile float *)((((t35 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t35 + 0x8)))->v));
            u3 = (*(float *)(((((t35 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t6 = t3;
            t3 = (t3 - 0x8);
            u44[0] = u7;
            u44[1] = u8;
            u44[2] = u9;
            u44[3] = 1.0f;
            _builtin_ftrv(u44, u44);
            *(float *)(((t3 - 0x8) + 0x0)) = u6;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u4;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = ((((struct o8_float *)(((t35 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t35 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t56 = (t8 - 8);
                } else {
                    t56 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t56 + 0x0)));
                u5 = (*(float *)(((t56 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t56))->v);
                *(volatile float *)((((t56 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t56 + 0x8)))->v));
                u3 = (*(float *)(((((t56 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t8 = t3;
                t3 = (t3 - 0x8);
                u66[0] = u4;
                u66[1] = u5;
                u66[2] = u6;
                u66[3] = 1.0f;
                _builtin_ftrv(u66, u66);
                u4 = u66[0];
                u5 = u66[1];
                u6 = u66[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[2] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u44[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u44[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[1] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = ((((struct o8_float *)(((t56 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t56 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t79 = (t6 - 8);
                } else {
                    t79 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t79 + 0x0)));
                u5 = (*(float *)(((t79 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t79))->v);
                *(volatile float *)((((t79 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t79 + 0x8)))->v));
                u3 = (*(float *)(((((t79 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u89[0] = u4;
                u89[1] = u5;
                u89[2] = u6;
                u89[3] = 1.0f;
                _builtin_ftrv(u89, u89);
                u4 = u89[0];
                u5 = u89[1];
                u6 = u89[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[2] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u44[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u44[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[1] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t79 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t79 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u44[2]; u164 = (1.0f / u44[0]); u165 = u44[0]; u166 = u44[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t102 = (t4 - 8);
            } else {
                t102 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t102 + 0x0));
            u8 = *(float *)(((t102 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            u9 = (((struct o8_float *)(t102))->v);
            *(volatile float *)((((t102 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u4));
            u2 = ((((struct o8_float *)((t102 + 0x8)))->v));
            u3 = (*(float *)(((((t102 + 0x8) + 0x8) + 0x0) + 4)));
            u5 = (u5 * (1.0f / u4));
            *(float *)(((t3 - 0x8) + 0x0)) = u0;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u111[0] = u7;
            u111[1] = u8;
            u111[2] = u9;
            u111[3] = 1.0f;
            _builtin_ftrv(u111, u111);
            *(float *)(((t3 - 0x8) + 0x0)) = u6;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u4);
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u4;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = ((((struct o8_float *)(((t102 + 0x8) + 0x8)))->v));
            u1 = (*(float *)((((((t102 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u2;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t123 = (t6 - 8);
                } else {
                    t123 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t123 + 0x0)));
                u5 = (*(float *)(((t123 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t123))->v);
                *(volatile float *)((((t123 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t123 + 0x8)))->v));
                u3 = (*(float *)(((((t123 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t6 = t3;
                t3 = (t3 - 0x8);
                u133[0] = u4;
                u133[1] = u5;
                u133[2] = u6;
                u133[3] = 1.0f;
                _builtin_ftrv(u133, u133);
                u4 = u133[0];
                u5 = u133[1];
                u6 = u133[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[2] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u111[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u111[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[1] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = ((((struct o8_float *)(((t123 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t123 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t146 = (t4 - 8);
                } else {
                    t146 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u4 = (*(float *)((t146 + 0x0)));
                u5 = (*(float *)(((t146 + 0x0) + 4)));
                _builtin_prefetch((void *)t0);
                u7 = (((struct o8_float *)(t146))->v);
                *(volatile float *)((((t146 + 0x8) + 0x0) + 4));
                u6 = u7;
                u2 = ((((struct o8_float *)((t146 + 0x8)))->v));
                u3 = (*(float *)(((((t146 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u0;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u156[0] = u4;
                u156[1] = u5;
                u156[2] = u6;
                u156[3] = 1.0f;
                _builtin_ftrv(u156, u156);
                u4 = u156[0];
                u5 = u156[1];
                u6 = u156[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[2] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u111[0]);
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = u111[0];
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[1] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = ((((struct o8_float *)(((t146 + 0x8) + 0x8)))->v));
                u1 = (*(float *)((((((t146 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u111[2]; u164 = (1.0f / u111[0]); u165 = u111[0]; u166 = u111[1]; break;
        }
        u6 = (u6 * (1.0f / u4));
        u5 = (u5 * (1.0f / u4));
        *(float *)(((t3 - 0x8) + 0x0)) = u0;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = u6;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = (1.0f / u4);
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u4;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u0;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u1;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = (u163 * u164);
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = u164;
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = u165;
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = (u166 * u164);
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}

int FUN_0c19ed24(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];

    register int R1;
    register int R2;
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
    v0_0 = a6;
    v0_1 = a7;
    *(unsigned char *)(((int)stk + 0)) = v0_0;
    v0_0 = (((unsigned char)v0_1 - 2));
    v0_4 = (v0_4);
    v0_3 = (v0_2);
    v0_1 = (v0_1);
    if (((*(int *)((v0_2 + 0x0))) == 0)) goto L_C19ED4C;
    v0_2 = ((*(int *)((v0_3 + 0x0))));
    L_C19ED5A:;
    v0_3 = *(short *)((v0_2 + 0x4));
    v0_7 = *(int *)((v0_2 + 0x0));
    *(unsigned char *)(((v0_7 + (unsigned short)v0_3) + 0x0)) = (*(signed char *)(((int)stk + 0)));
    *(unsigned char *)((((v0_7 + (unsigned short)v0_3) + 0x1) + 0x0)) = v0_1;
    v0_6 = *(signed char *)(((int)stk + 0));
    v0_5 = ((unsigned char)v0_6);
    v0_8 = (0xC19C8E4);
    v0_3 = ((((v0_7 + (unsigned short)v0_3) + 0x1) + 0x1));
    if (((unsigned char)v0_6 == 1)) goto L_C19ED8E;
    if ((v0_5 == 2)) goto L_C19EDA0;
    if ((v0_5 == 3)) goto L_C19EDCC;
    if ((v0_5 == 0x81)) goto L_C19EDD0;
    if (!((v0_5 == 0x83))) goto L_C19EDE4;
    v0_3 = ((FUN_0c19c8e4(v0_3, (*(int *)((v0_4 + 0x18))))));
    goto L_C19EDE2;
    L_C19EDE4:;
    v0_4 = (0xC1A02CC);
    L_C19EE08:;
    v0_4 = (int)(short)v0_0 > 0;
    v0_0 = ((v0_0 - 1));
    if (v0_4) goto L_C19EDEA;
    v0_0 = *(short *)((v0_2 + 0x4));
    *(unsigned short *)((v0_2 + 0x4)) = (v0_0 + (unsigned char)v0_1);
    v0_5 = ((v0_0 + (unsigned char)v0_1));
    L_C19EE18:;
    return v0_5;
    L_C19EDEA:;
    v0_4 = (short)(FUN_0c1a02cc(a8, 0xC8B6060, 0x1)) == 1;
    v0_5 = v0_3;
    v0_3 = ((v0_3 + 0x1));
    v0_5 = v0_5;
    if (v0_4) goto L_C19EE00;
    v0_4 = (0xFFFFFFFF);
    L_C19EE06:;
    *(unsigned char *)((v0_5 + 0x0)) = v0_4;
    goto L_C19EE08;
    L_C19EE00:;
    v0_4 = ((unsigned char)(*(signed char *)0xC8B6060));
    goto L_C19EE06;
    L_C19EDE2:;
    v0_0 = ((v0_0 - 4));
    goto L_C19EDE4;
    L_C19EDD0:;
    v0_4 = ((*(int *)((v0_4 + 0x14))));
    L_C19EDD2:;
    v0_3 = ((FUN_0c19c8e4(v0_3, v0_4)));
    goto L_C19EDE2;
    L_C19EDCC:;
    v0_4 = ((*(int *)((v0_4 + 0x4))));
    goto L_C19EDD2;
    L_C19EDA0:;
    v0_5 = (*(short *)((v0_4 + 0xC))) != 45;
    v0_0 = ((v0_0 - 2));
    v0_3 = ((FUN_0c19c906(v0_3, (*(short *)((v0_4 + 0xC))))));
    if (v0_5) goto L_C19EDE4;
    *(unsigned char *)((v0_3 + 0x0)) = ((*(short *)((v0_4 + 0xE))) + 0xFF);
    *(unsigned char *)(((v0_3 + 0x1) + 0x0)) = (*(signed char *)((v0_4 + 0x10)));
    v0_0 = ((v0_0 - 2));
    v0_3 = (((v0_3 + 0x1) + 0x1));
    goto L_C19EDE4;
    L_C19ED8E:;
    v0_3 = FUN_0c19c8e4(v0_3, (*(int *)((v0_4 + 0x4))));
    v0_0 = ((v0_0 - 8));
    v0_3 = ((FUN_0c19c8e4(v0_3, (*(int *)((v0_4 + 0x8))))));
    goto L_C19EDE4;
    L_C19ED4C:;
    v0_6 = FUN_0c1a027c(0x0);
    v0_5 = (v0_6);
    v0_2 = (v0_6);
    if ((v0_6 == 0)) goto L_C19EE18;
    *(unsigned int *)((v0_3 + 0x0)) = v0_2;
    goto L_C19ED5A;
}

void FUN_0c2b12fa(void)
{
    register int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;

    if ((*(int *)0xC2FE88C) == 0) {
        return;
    }
    t2 = 0x0;
    for (;;) {
        t3 = kdGetDevice(t2);
        t4 = FUN_0c2bca16(t2);
        *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0x30)) = t4;
        *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0x2C)) = (*(int *)((((t2 * 0x34) + 0xC8B982C) + 0x8)));
        *(unsigned int *)(((0xC8B9D0C + (t2 << 2)) + 0x0)) = (_pd_peripheral_error(((t2 * 0x34) + 0xC8B982C), t4, t3));
        if (((int)((int)t2 % (int)0x6)) == 0) {
            if ((((*(int *)((t4 + 0x0))) & 33) != 0) && ((t0 = *(signed char *)((t3 + 0x2)), t0 == 0) && (t1 = *(signed char *)((t3 + 0x4)), (unsigned char)t1 == 8))) {
                _pd_peripheral_set_id(((t2 * 0x34) + 0xC8B982C), t4);
                FUN_0c2b10c0(((t2 * 0x34) + 0xC8B982C), t3, t2);
            } else {
                _pd_peripheral_set_null(((t2 * 0x34) + 0xC8B982C));
            }
            *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0xC)) = (~(*(int *)((((t2 * 0x34) + 0xC8B982C) + 0x8))));
            if ((*(int *)0xC8B9D6C) == 0) {
                t3 = *(int *)((((t2 * 0x34) + 0xC8B982C) + 0x2C));
                t5 = *(int *)((((t2 * 0x34) + 0xC8B982C) + 0x8));
                *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0x10)) = (t5 & (t3 ^ t5));
                t6 = ((t3 ^ t5) & (*(int *)((((t2 * 0x34) + 0xC8B982C) + 0xC))));
            } else {
                t3 = *(int *)((((t2 * 0x34) + 0xC8B982C) + 0x2C));
                t5 = *(int *)((((t2 * 0x34) + 0xC8B982C) + 0x8));
                *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0x10)) = (t5 | ((t3 ^ t5) ^ 0xFFFFFFFF));
                t6 = (((t3 ^ t5) ^ 0xFFFFFFFF) | (*(int *)((((t2 * 0x34) + 0xC8B982C) + 0xC))));
            }
            *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0x14)) = t6;
        } else {
            *(unsigned int *)((((t2 * 0x34) + 0xC8B982C) + 0x24)) = (t4 + 0x14);
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x18) {
            break;
        }
    }
}

int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register int t15;
    register int t16;
    register float u17;
    register float u19;
    register float u20;
    register float u22;
    register int t23;
    register float u6;
    register float u7;

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (a7 + 0x2);
    t2 = 0x24;
    t3 = a6;
    t4 = 0x0;
    t5 = a4;
    u8 = (float)((((short)(a9 >> 0)) << 2) << 2);
    u9 = 65536.0f;
    u10 = f5;
    u11 = (float)(t0 << 16);
    u12 = (float)((*(short *)(((a7 + 0x2) + 0x0))) << 16);
    u13 = f10;
    for (;;) {
        if ((int)t4 >= (int)a5) {
            t2 = a5;
            *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u11 >> 16);
            *(unsigned short *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((unsigned int)(int)u12 >> 16);
            return t2;
        }
        t15 = *(short *)((t5 + 0x0));
        if ((0x8000 & (short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00))) != 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t5 = (t5 + 0x2);
        u8 = (float)(int)(((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
        u13 = u8;
        for (;;) {
            u8 = ((float)((((short)(a9 >> 0)) << 2) << 2) / 65536.0f);
            u8 = (u8 * u12);
            t16 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            u6 = ((float)((((short)(a8 >> 0)) << 2) << 2) / 65536.0f);
            t2 = 0xC302ED0;
            u17 = u8;
            u17 = u17 + u6 * u11;
            u8 = u17;
            u9 = (*(float *)((((unsigned char)t16 << 2) + t2)));
            u6 = u13;
            u10 = u11;
            u19 = u8;
            u19 = u19 + u6 * u9;
            u8 = u19;
            u6 = ((float)((((short)(a8 >> 0)) << 2) << 2) / 65536.0f);
            t2 = 0xC3032D0;
            u7 = u8;
            u8 = ((float)((((short)(a9 >> 0)) << 2) << 2) / 65536.0f);
            u8 = (u8 * u10);
            u12 = u7;
            u20 = u8;
            u20 = u20 + u6 * u7;
            u8 = u20;
            u6 = u13;
            *(unsigned short *)((t3 + 0x0)) = ((unsigned int)(int)u7 >> 16);
            t3 = (t3 + 0x2);
            u9 = (*(float *)((((unsigned char)t16 << 2) + t2)));
            u22 = u8;
            u22 = u22 + u6 * u9;
            u8 = u22;
            u9 = u8;
            u11 = u8;
            *(unsigned short *)((t3 + 0x0)) = (short)((unsigned int)(int)u9 >> 16);
            t3 = (t3 + 0x2);
            t23 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = (t23 + 0x2);
            if ((int)(t23 + 0x2) >= (int)0x20) {
                break;
            }
        }
        t4 = (t4 + 0x1);
    }
    return t4;
}

int FUN_0c18ea8c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t57;
    register int t4;
    register int t12;
    register int t18;
    register int t24;
    register int t34;
    register int t40;

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned short *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    t0 = FUN_0c18ea5e();
    t57 = 0xFFFFFFFF;
    if (t0 != 0) {
        t4 = *(int *)(((int)stk + 8));
        if ((unsigned short)(*(short *)(((((((t4 << 1) + t4) << 2) << 2) + 0xC8A8F04) + 0x18))) == 1) {
            FUN_0c187a88((t0 + 0x6), ((((((t4 << 1) + t4) << 2) << 2) + 0xC8A8F04) + 0x1C), (unsigned char)(*(signed char *)(((((((t4 << 1) + t4) << 2) << 2) + 0xC8A8F04) + 0x1A))));
            FUN_0c187a88(t0, (*(int *)(((int)stk + 0))), (unsigned char)(*(signed char *)(((((((t4 << 1) + t4) << 2) << 2) + 0xC8A8F04) + 0x1A))));
            t12 = *(short *)(((int)stk + 4));
            if ((unsigned short)t12 == 4) {
                *(unsigned short *)((t0 + 0xC)) = (FUN_0c18dad6(0x806));
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x0)));
                FUN_0c187a88(0xC8A8FC8, t0, 0x6);
                FUN_0c187a88(0xC8A8FCE, (t0 + 0x6), 0x6);
                FUN_0c187a88(0xC8A8FD4, (t0 + 0xC), 0x2);
                t18 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 0)) = (((t18 << 1) + t18) << 2);
                FUN_0c18dcf2((((((t18 << 1) + t18) << 2) + (a4 + 0x8)) + 0x4), 0xC8A8FC8);
                *(unsigned short *)((((a4 + 0x8) + (*(int *)(((int)stk + 0)))) + 0x0)) = 0xE;
                *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
                t24 = FUN_0c197d7c(a4, (*(int *)(((int)stk + 8))));
                if (t24 != 0) {
                    FUN_0c18ea64(t0);
                    t57 = 0xFFFFFFFF;
                } else {
                    FUN_0c18ea64(t0);
                    t57 = 0x0;
                }
            } else {
                if ((unsigned short)t12 == 0) {
                    *(unsigned short *)((t0 + 0xC)) = (FUN_0c18dad6(0x800));
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x0)));
                    FUN_0c187a88(0xC8A8FC8, t0, 0x6);
                    FUN_0c187a88(0xC8A8FCE, (t0 + 0x6), 0x6);
                    FUN_0c187a88(0xC8A8FD4, (t0 + 0xC), 0x2);
                    t34 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 0)) = (((t34 << 1) + t34) << 2);
                    FUN_0c18dcf2((((((t34 << 1) + t34) << 2) + (a4 + 0x8)) + 0x4), 0xC8A8FC8);
                    *(unsigned short *)((((a4 + 0x8) + (*(int *)(((int)stk + 0)))) + 0x0)) = 0xE;
                    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
                    t40 = FUN_0c197d7c(a4, (*(int *)(((int)stk + 8))));
                    if (t40 != 0) {
                        FUN_0c18ea64(t0);
                        t57 = 0xFFFFFFFF;
                    } else {
                        FUN_0c18ea64(t0);
                        t57 = 0x0;
                    }
                } else {
                    FUN_0c18ea64(t0);
                    t57 = 0xFFFFFFFF;
                }
            }
        } else {
            FUN_0c18ea64(t0);
            t57 = 0xFFFFFFFF;
        }
    }
    return t57;
}

int FUN_0c193e6a(int a4, int a5, int a6, int a7, int a8)
{
    int stk[3];
    register int t1;
    register int t53;
    register int t2;
    register int t20;
    register int t21;
    register int t28;
    register int t31;

    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned short *)(((int)stk + 4)) = a7;
    t1 = FUN_0c18558a((*(short *)(((int)stk + 8))));
    t53 = t1;
    if ((int)(short)t1 >= 0) {
        *(unsigned int *)0xC8B57A0 = (((short)t1 * (short)0x34) + 0xC8A2C60);
        t53 = 0x8000;
        if (((short)a4 & 0x8000) == 0) {
            t2 = FUN_0c185600();
            t53 = (short)t2;
            if ((int)(short)t2 >= 0) {
                *(unsigned short *)(((*(int *)0xC8B57A0) + 0x4)) = a4;
                (((struct o0_uint *)0xC8B1A88)->v) = (((short)t2 * (short)0x34) + 0xC8A2C60);
                *(unsigned short *)(((((short)t2 * (short)0x34) + 0xC8A2C60) + 0x6)) = 0x5;
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x8)) = 0x1;
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0xC)) = 0x1;
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x0)) = (t2 + 0x1);
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x2)) = a4;
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0xE)) = (*(short *)(((*(int *)0xC8B57A0) + 0xE)));
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x10)) = (*(short *)(((*(int *)0xC8B57A0) + 0x10)));
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x12)) = (*(short *)(((*(int *)0xC8B57A0) + 0x12)));
                FUN_0c193cd2((((((struct o0_int *)0xC8B1A88)->v)) + 0x1C), ((*(int *)0xC8B57A0) + 0x1C), 0x10);
                t20 = *(int *)0xC8B57A0;
                t21 = (((struct o0_int *)0xC8B1A88)->v);
                (((struct o2E_uchar *)(t21))->v) = (*(signed char *)(((t20 + 0x2E) + 0x0)));
                *(unsigned char *)(((t21 + 0x2E) + 0x1)) = (*(signed char *)(((t20 + 0x2E) + 0x1)));
                *(unsigned char *)(((t21 + 0x2E) + 0x2)) = (*(signed char *)(((t20 + 0x2E) + 0x2)));
                *(unsigned char *)(((t21 + 0x2E) + 0x3)) = (*(signed char *)(((t20 + 0x2E) + 0x3)));
                *(unsigned char *)(((t21 + 0x2E) + 0x4)) = (*(signed char *)(((t20 + 0x2E) + 0x4)));
                *(unsigned char *)(((t21 + 0x2E) + 0x5)) = (*(signed char *)(((t20 + 0x2E) + 0x5)));
                (((struct o10_ushort *)0xC8B1A88)->v) = ((short)(a8 >> 0));
                t28 = (((struct o10_short *)0xC8B1A88)->v);
                (((struct o10_ushort *)0xC8B1A88)->v) = (((int)(0xFF00 & (unsigned short)t28) >> 8) | ((unsigned char)(unsigned short)t28 << 8));
                *(unsigned short *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x14)) = ((short)(a8 >> 0));
                (((struct o4_uint *)0xC8B1A88)->v) = (*(short *)(((int)stk + 4)));
                t31 = *(int *)(((int)stk + 0));
                (((struct o8_uint *)0xC8B1A88)->v) = t31;
                (((struct oC_uint *)0xC8B1A88)->v) = ((((((struct o4_int *)0xC8B1A88)->v)) << 16) | t31);
                *(unsigned int *)((((((struct o0_int *)0xC8B1A88)->v)) + 0x18)) = (*(int *)(((int)stk + 0)));
                t53 = 0x0;
            }
        }
    }
    return t53;
}


int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t2;
    register int t43;
    register int t37;
    register int t6;
    register int t31;
    register int t9;
    register int t11;
    register int t12;
    register int t14;
    register int t32;

    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = vmsfs_diskfree(a4, 0x0);
    t1 = vmsfs_fgetsize(a4, a5);
    t2 = t0;
    if ((int)t1 > 0) {
        t2 = (t0 + t1);
    }
    t43 = t2;
    if ((int)t2 >= 0) {
        t37 = 0xFFFFFF04;
        if ((unsigned int)t2 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                *(int *)((int)stk + 4) = a9;
                *(int *)((int)stk + 0) = a8;
                t32 = (FUN_0c2c19f8(a4, a5, (*(int *)(((int)stk + 12))), a7, a8, a9));
            } else {
                t6 = vmsfs_fcreate(a4, a5, a8, ((int)stk + 8));
                t31 = t6;
                if ((int)t6 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x1)) = a9;
                    t11 = *(int *)(((int)stk + 12));
                    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
                    t9 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = ((*(int *)((((((t9 << 2) + t9) << 2) << 2) + 0xC303C68))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t12 = 0x0;
                        for (;;) {
                            t14 = vmsfs_fwrite1((*(int *)(((int)stk + 8))), t11);
                            if ((int)t14 >= 0) {
                                t12 = (t12 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t12 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                            return t14;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                    t31 = 0x0;
                }
                t32 = t31;
            }
            t37 = t32;
        }
        t43 = t37;
    }
    return t43;
}

int FUN_0c2c8e20(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t7;
    int t11;
    register int t12;
    register int t13;
    register int t17;
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
        FUN_0c2dee48((*(int *)(((((t7 << 2) << 2) + 0xC8D0A60) + 0x0))), 0xC8D0C80, (*(int *)(((((t7 << 2) << 2) + 0xC8D0A60) + 0xC))), 0xA05F6908, f4, f5, f6, f7, f8, f9, f10, f11);
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
            t17 = *(int *)(((t13 << 2) + 0xC303E50));
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
            FUN_0c2dee48((*(int *)(((((t17 << 2) << 2) + 0xC8D0A60) + 0x0))), 0xC8D0C80, (*(int *)(((((t17 << 2) << 2) + 0xC8D0A60) + 0xC))), 0xFFA0002C, f4, f5, f6, f7, f8, f9, f10, f11);
        }
    }
    (((struct o0_uint *)0xC8D0A34)->v) = t0;
    return 0x0;
}

int FUN_0c2cc756(int a4, int a5)
{
    register int t0;

    if (((((struct o0_int *)0xC8BFF98)->v)) == 0) {
    } else {
        t0 = (((struct o0_int *)0xC8BF0E0)->v);
        (((struct o0_uint *)0xC8BF0E0)->v) = (t0 + 0x1);
        *(unsigned int *)((((((t0 + 0x1) - 1) << 2) + 0xC8BF0BC) + 0x0)) = ((*(int *)((((((t0 + 0x1) - 1) << 2) + 0xC8BF0BC) + 0x0))) - (*(int *)0xFFD8000C));
        (((struct o0_uint *)0xC8BF0E0)->v) = (((((struct o0_int *)0xC8BF0E0)->v)) & 0x7);
        (((struct o0_uint *)0xC8BFF98)->v) = 0x0;
        *(unsigned int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x14)) = 0x6;
        if (((((struct o34_int *)0xC8BFF98)->v)) == 0) {
            t0 = *(int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x20));
            if ((unsigned int)t0 < (unsigned int)((((struct o3C_int *)0xC8BF0E0)->v))) {
                if (((((struct o18_int *)0xC8BF128)->v)) != 0) {
                    (((struct oC_uint *)0xC8BF128)->v) = (((((struct oC_int *)0xC8BF128)->v)) | ((int)0x1 << (int)t0));
                } else {
                    (((struct o0_uint *)0xC8BF128)->v) = (((((struct o0_int *)0xC8BF128)->v)) & (~((int)0x1 << (int)t0)));
                }
            }
            *(unsigned int *)((((((struct o4_int *)0xC8BFF98)->v)) + 0x20)) = 0xFFFFFFFF;
        }
        (((struct o8_uint *)0xC8BFF98)->v) = ((((struct o4_int *)0xC8BFF98)->v));
        kmiFLWCTRLRotateReadyQueue(0x0);
        kmyRequestCallback(0x0);
    }
    return 0x0;
}

int FUN_0c2cfff8(int a4, int a5)
{
    int stk[7];

    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = R12;
    *(int *)((int)stk + 24) = v0_1;
    v0_3 = R11;
    *(int *)((int)stk + 20) = v0_3;
    v0_4 = R10;
    *(int *)((int)stk + 16) = v0_4;
    v0_5 = R9;
    *(int *)((int)stk + 12) = v0_5;
    v0_6 = R8;
    *(int *)((int)stk + 8) = v0_6;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned int *)(((int)stk + 16)) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    R11 = (0x0);
    v0_1 = (0x0);
    R8 = (0xC8D1DD8);
    R9 = (v0_0);
    L_C2D00D2:;
    if (((int)(unsigned char)R11 < (int)0x28)) goto L_C2D002C;
    v0_0 = (0x0);
    L_C2D00DC:;
    *(volatile int *)((int)stk + 4);
    *(volatile int *)((int)stk + 8);
    *(volatile int *)((int)stk + 12);
    *(volatile int *)((int)stk + 16);
    return v0_0;
    L_C2D002C:;
    v0_2 = *(signed char *)((((short)((short)(unsigned char)R11 * (short)0x32) + R8) + 0x0));
    R10 = (((short)((short)(unsigned char)R11 * (short)0x32) + R8));
    v0_0 = (v0_2);
    if ((v0_2 == 66)) goto L_C2D0048;
    if ((v0_0 != 68)) goto L_C2D00D0;
    L_C2D0048:;
    R12 = (v0_1);
    v0_3 = (v0_1);
    L_C2D0050:;
    v0_0 = (*(signed char *)(((R10 + 0x1) + (unsigned char)R12))) == 58;
    if (v0_0) goto L_C2D006A;
    if (((int)(unsigned char)R12 < (int)0x28)) goto L_C2D004E;
    L_C2D006A:;
    v0_0 = (signed char)(FUN_0c2d0b9a((*(signed char *)((R9 + (unsigned char)v0_3))))) == 0;
    if (v0_0) goto L_C2D007E;
    if (!(((int)(unsigned char)v0_3 < (int)0x28))) goto L_C2D007E;
    v0_3 = ((v0_3 + 0x1));
    goto L_C2D006A;
    L_C2D007E:;
    v0_2 = (unsigned char)R12 != (unsigned char)v0_3;
    v0_3 = ((unsigned char)v0_3);
    v0_0 = ((unsigned char)R12);
    if (v0_2) goto L_C2D00D0;
    if (((int)v0_0 >= (int)0x28)) goto L_C2D00D0;
    v0_3 = (((short)((short)(unsigned char)R11 * (short)0x32) + R8));
    v0_0 = (v0_1);
    L_C2D009E:;
    v0_4 = *(signed char *)((((v0_3 + 0x1) + (unsigned char)v0_0) + 0x0));
    v0_2 = (v0_4);
    v0_5 = ((unsigned char)v0_0);
    if ((v0_4 == 58)) goto L_C2D00BC;
    v0_2 = v0_2 == (unsigned char)(*(signed char *)((R9 + v0_5)));
    if (!(v0_2)) goto L_C2D00BC;
    v0_0 = ((v0_0 + 0x1));
    goto L_C2D009E;
    L_C2D00BC:;
    v0_0 = (*(signed char *)(((v0_3 + 0x1) + (unsigned char)v0_0))) != 58;
    if (v0_0) goto L_C2D00D0;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = R11;
    v0_0 = (0x1);
    goto L_C2D00DC;
    L_C2D00D0:;
    R11 = ((R11 + 0x1));
    goto L_C2D00D2;
    L_C2D004E:;
    R12 = ((R12 + 0x1));
    goto L_C2D0050;
}

int FUN_0c2d423e(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC8D25F0)->v);
    if (((*(signed char *)(((t0 + 0x38) + 0x0))) & 128) != 0) {
        (((struct o0_uint *)0xC8D2680)->v) = (((((struct o0_int *)0xC8D2680)->v)) + 0x1);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x40);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xDF);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xEF);
        t1 = (((struct o0_int *)0xC8D25F0)->v);
        (((struct o14_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x14) + 0x0))) & 0x7F);
        FUN_0c2e93ac();
        if (((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x48))) & 0xE0) == 0xE0) {
            (((struct oA_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FA) | 0x80);
        } else {
            if (((unsigned char)(*(signed char *)((0x48 + ((((struct o0_int *)0xC8D25F0)->v))))) & 0xF0) == 0x90) {
                (((struct o9_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F9) | 0x1);
            }
        }
        FUN_0c2d52d4();
        (((struct oE_uchar *)0xC8D25F0)->v) = 0x0;
        t1 = 0x1;
    } else {
        t1 = 0x0;
        if (((*(signed char *)(((t0 + 0x38) + 0x0))) & 32) != 0) {
            (((struct o4_uint *)0xC8D2680)->v) = (((((struct o4_int *)0xC8D2680)->v)) + 0x1);
            (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xBF);
            (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x20);
            (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xFB);
            (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xF7);
            (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xDF);
            (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xFD);
            FUN_0c2d52d4();
            (((struct oE_uchar *)0xC8D25F0)->v) = 0x0;
            t1 = 0x2;
        }
    }
    return t1;
}

int FUN_0c178350(int a4, int a5, int a6, int a7)
{
    register int t7;
    register int t8;
    register int t13;
    register int t3;

    if ((*(int *)0xC83CF94) == 1) {
        t3 = (FUN_0c177f40(a4, a5, a6, a7));
    } else {
        t3 = (FUN_0c1777c0());
    }
    nlSysInitStripContextBG(0xC8A2EB0);
    nlSysInitStripContextVtx(0xC8A64E0);
    (((struct o0_uint *)0xC8A6AE0)->v) = 0xC8A64E0;
    (((struct o4_uint *)0xC8A6AE0)->v) = 0x0;
    t7 = (((struct o2_short *)0xC8A6CA8)->v);
    t8 = (((struct o0_short *)0xC8A6CA8)->v);
    if (0x0 != 0) {
        t13 = (short)t7;
        if (((((struct o6_short *)0xC8A6CA8)->v)) == 1) {
            t13 = ((short)t7 + (short)t7);
            if ((int)((short)t7 + (short)t7) > (int)0x1E0) {
                t13 = 0x1E0;
            }
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t8, (float)t13);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t8, (float)(short)t7);
    }
    setCullingThreshold((*(float *)0xC178488));
    (((struct o0_uint *)0xFF000038)->v) = 0xC;
    (((struct o4_uint *)0xFF000038)->v) = 0xC;
    kmSetWaitVsyncCount(((((struct o18_int *)0xC83CFDC)->v)));
    if (((((struct o4_int *)0xC83CFDC)->v)) == 0) {
        kmBeginScene(0xC83CD8C);
        kmBeginPass(0xC8A2E90);
        (((struct o0_uint *)0xC83CFDC)->v) = (*(int *)0xC8A2E90);
    }
    return t3;
}

int FUN_0c193fc0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    *(unsigned short *)(((int)stk + 16)) = v0_0;
    v0_2 = FUN_0c184000(0x4117, (((int)stk + 0) + 0x10), (((int)stk + 0) + 0x8));
    v0_1 = (v0_1);
    v0_0 = (v0_2);
    if (((short)v0_2 == 0)) goto L_C193FF0;
    return v0_0;
    L_C193FF0:;
    v0_2 = *(short *)(((int)stk + 8));
    v0_3 = ((unsigned short)v0_2);
    v0_0 = (0x0);
    if (((unsigned short)v0_2 == 0)) goto L_C194026;
    if ((v0_3 == 1)) goto L_C194060;
    if ((v0_3 == 2)) goto L_C194064;
    if ((v0_3 == 3)) goto L_C194068;
    if ((v0_3 == 4)) goto L_C19406C;
    if ((v0_3 == 5)) goto L_C194070;
    if ((v0_3 == 6)) goto L_C194074;
    if ((v0_3 == 7)) goto L_C194078;
    if ((v0_3 == 8)) goto L_C19407C;
    if ((v0_3 == 9)) goto L_C194080;
    if (!((v0_3 == 10))) goto L_C19408A;
    v0_2 = (0xA);
    goto L_C194088;
    L_C19408A:;
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C194094;
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_0;
    L_C194094:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_C1940A0;
    *(unsigned short *)(((*(int *)(((int)stk + 4))) + 0x0)) = (*(short *)(((int)stk + 12)));
    L_C1940A0:;
    if ((a8 == 0)) goto L_C1940AC;
    *(unsigned short *)((a8 + 0x0)) = (*(short *)(((int)stk + 14)));
    L_C1940AC:;
    return 0x0;
    L_C194088:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_2;
    goto L_C19408A;
    L_C194080:;
    v0_2 = (0x9);
    L_C194082:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_2;
    goto L_C19408A;
    L_C19407C:;
    v0_2 = (0x8);
    goto L_C194088;
    L_C194078:;
    v0_2 = (0x7);
    goto L_C194082;
    L_C194074:;
    v0_2 = (0x6);
    goto L_C194088;
    L_C194070:;
    v0_2 = (0x5);
    goto L_C194082;
    L_C19406C:;
    v0_2 = (0x4);
    goto L_C194088;
    L_C194068:;
    v0_2 = (0x3);
    goto L_C194082;
    L_C194064:;
    v0_2 = (0x2);
    goto L_C194088;
    L_C194060:;
    v0_2 = (0x1);
    goto L_C194082;
    L_C194026:;
    *(unsigned short *)((v0_1 + 0x0)) = v0_0;
    goto L_C19408A;
}

int FUN_0c2c1ae8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t0;
    register int t42;
    register int t36;
    register int t5;
    register int t30;
    register int t8;
    register int t10;
    register int t11;
    register int t13;
    register int t31;

    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = vmsfs_diskfree(a4, 0x1);
    t42 = t0;
    if ((int)t0 >= 0) {
        t36 = 0xFFFFFF04;
        if ((unsigned int)t0 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                *(int *)((int)stk + 4) = a9;
                *(int *)((int)stk + 0) = a8;
                t31 = (FUN_0c2c1bfc(a4, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))), a7, a8, a9));
            } else {
                t5 = vmsfs_xcreate(a4, (*(int *)(((int)stk + 16))), a8, ((int)stk + 8));
                t30 = t5;
                if ((int)t5 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 8))) + 0x1)) = a9;
                    t11 = *(int *)(((int)stk + 12));
                    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
                    t8 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x34)) = ((*(int *)((((((t8 << 2) + t8) << 2) << 2) + 0xC303C68))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t10 = 0x0;
                        for (;;) {
                            t13 = vmsfs_xwrite1((*(int *)(((int)stk + 8))), t11);
                            if ((int)t13 >= 0) {
                                t10 = (t10 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t10 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                            return t13;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 8))), 0x0);
                    t30 = 0x0;
                }
                t31 = t30;
            }
            t36 = t31;
        }
        t42 = t36;
    }
    return t42;
}

int FUN_0c19f57e(int a4, int a5, int a6)
{
    int stk[2];

    register int R1;
    register int R9;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_4 = a4;
    v0_5 = a5;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    v0_0 = ((*(short *)((v0_5 + 0x2))));
    v0_1 = ((*(int *)((v0_4 + 0x30))));
    if (((*(signed char *)((v0_5 + 0x1))) != (*(signed char *)((v0_4 + 0x1))))) goto L_C19F612;
    L_C19F64A:;
    if (((int)v0_0 <= 0)) goto L_C19F65E;
    v0_2 = (short)(FUN_0c19d250(((int)stk + 0), (((int)stk + 0) + 0x4))) != -1;
    if (!(v0_2)) goto L_C19F65E;
    v0_3 = *(signed char *)(((int)stk + 1));
    v0_2 = (int)(v0_0 - (unsigned char)v0_3) < 0;
    v0_0 = ((v0_0 - (unsigned char)v0_3));
    v0_5 = (v0_3);
    if (v0_2) goto L_C19F612;
    v0_7 = *(signed char *)(((int)stk + 0));
    v0_2 = (0x1);
    v0_3 = (0x8);
    v0_6 = (((((struct o28_short *)(v0_1))->v)));
    v0_4 = ((unsigned char)v0_7);
    if (((int)(unsigned char)v0_7 >= (int)0x8)) goto L_C19F5D0;
    v0_4 = (v0_4);
    goto L_C19F5E4;
    L_C19F65E:;
    v0_5 = (0x0);
    L_C19F660:;
    return v0_5;
    L_C19F5E4:;
    if (((v0_6 & ((int)v0_2 << (int)v0_4)) == 0)) goto L_C19F612;
    v0_4 = (((unsigned char)v0_5 - 2));
    L_C19F616:;
    v0_5 = (int)(short)v0_4 > 0;
    v0_4 = ((v0_4 - 1));
    if (v0_5) goto L_C19F5F2;
    v0_6 = *(signed char *)(((int)stk + 0));
    v0_5 = (0x28);
    v0_4 = ((unsigned char)v0_6);
    if (((int)(unsigned char)v0_6 >= (int)v0_3)) goto L_C19F62C;
    v0_4 = (v0_4);
    L_C19F640:;
    *(unsigned short *)((v0_1 + v0_5)) = ((*(short *)((v0_1 + v0_5))) & (~((int)v0_2 << (int)v0_4)));
    goto L_C19F64A;
    L_C19F62C:;
    if (((int)v0_4 < (int)0x80)) goto L_C19F63E;
    if (((int)v0_4 >= (int)0x90)) goto L_C19F63E;
    v0_4 = ((v0_4 - 120));
    goto L_C19F640;
    L_C19F63E:;
    v0_4 = (0x0);
    goto L_C19F640;
    L_C19F5F2:;
    v0_5 = (short)(FUN_0c1a02cc((((int)stk + 0) + 0x4), 0xC8B6060, 0x1)) == 1;
    if (v0_5) goto L_C19F608;
    v0_5 = (0xFFFFFFFF);
    L_C19F60E:;
    if ((v0_5 != -1)) goto L_C19F616;
    L_C19F612:;
    v0_5 = (0xFFFFFFFF);
    goto L_C19F660;
    L_C19F608:;
    v0_5 = ((unsigned char)(*(signed char *)0xC8B6060));
    goto L_C19F60E;
    L_C19F5D0:;
    if (((int)v0_4 < (int)0x80)) goto L_C19F5E2;
    if (((int)v0_4 >= (int)0x90)) goto L_C19F5E2;
    v0_4 = ((v0_4 - 120));
    goto L_C19F5E4;
    L_C19F5E2:;
    v0_4 = (0x0);
    goto L_C19F5E4;
}

int FUN_0c2e423c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)0xC8D6784;
    if (((unsigned char)t0 & 1) == 0) {
        t1 = *(signed char *)0xC8D6788;
        if (((unsigned char)t1 & 128) != 0) {
            *(unsigned char *)0xC8D660C = 0x2;
            *(unsigned char *)0xC8D6498 = 0x5;
            t2 = (unsigned char)t1;
        } else {
            t1 = *(signed char *)0xC8D677E;
            if (((unsigned char)t1 & 8) == 0) {
                *(unsigned char *)0xC8D6498 = 0x3;
                t2 = (unsigned char)t1;
            } else {
                if ((unsigned char)a4 != 0) {
                    if ((int)(unsigned char)(*(signed char *)0xC8D65EE) >= (int)0x2) {
                        t4 = *(signed char *)0xC8D677B;
                        if (((unsigned char)t4 & 64) == 0) {
                            t5 = *(signed char *)0xC8D677B;
                            if (((unsigned char)t5 & 64) != 0) {
                                *(unsigned char *)0xC8D6498 = 0x2;
                            }
                            *(unsigned char *)0xC8D65A0 = 0x4;
                            *(unsigned char *)0xC8D6498 = 0x5;
                            t6 = (unsigned char)t5;
                        } else {
                            *(unsigned char *)0xC8D6498 = 0x2;
                            t6 = (unsigned char)t4;
                        }
                        t4 = t6;
                    } else {
                        *(unsigned char *)0xC8D6498 = 0x2;
                        t4 = (unsigned char)t1;
                    }
                    t1 = t4;
                } else {
                    FUN_0c2ed436();
                    FUN_0c2e783e();
                    FUN_0c2ebeae();
                    thunk_FUN_0c2e6fa2();
                    FUN_0c2e7e3e();
                    *(unsigned char *)0xC8D677F = ((*(signed char *)0xC8D677F) & 0xFE);
                    *(unsigned char *)0xC8D6526 = (*(signed char *)0xC8D6443);
                    *(unsigned char *)0xC8D6498 = 0x5;
                    t1 = 0xC8D6526;
                }
                t2 = t1;
            }
        }
        t1 = t2;
    } else {
        *(unsigned char *)0xC8D6498 = 0x2;
        t1 = (unsigned char)t0;
    }
    return t1;
}

int FUN_0c2f3e28(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t9;
    register int t12;
    register int t16;
    register int t33;
    register int t35;
    register int t38;
    register int t49;
    register int t60;
    int t15;

    if ((*(signed char *)0xC8DFFDF) != 0) {
        if ((*(signed char *)0xC8DFFE0) == 0) {
            FUN_0c2f6db2();
            if (((unsigned char)(*(signed char *)0xC8D6791) & 8) != 0) {
            } else {
                t9 = ((int (*)(void))(FUN_0c2f6eea))();
            }
        } else {
            t12 = *(short *)0xC8DFFE2;
            if ((0x2 & (unsigned short)t12) == 0) {
                FUN_0c2f6db2();
            } else {
                if ((((unsigned short)t12 & 0x1) == 0) && (t15 = *(signed char *)0xC8D6791, ((unsigned char)t15 & 8) == 0)) {
                    t16 = ((int (*)(int, int, int, int))(FUN_0c2f6eea))((unsigned short)t12, a5, a6, a7);
                }
            }
        }
        if ((*(signed char *)0xC8DA0F8) == 1) {
            t33 = FUN_0c2eec44();
            if ((signed char)t33 != 0) {
                t35 = FUN_0c2ec430(((((struct o4_int *)0xC8DA0F8)->v)));
                if ((signed char)t35 != 0) {
                    (((struct o0_uchar *)0xC8DA0F8)->v) = 0x0;
                    FUN_0c2ec67a(0x9);
                    FUN_0c2f5ac0();
                    t38 = FUN_0c2f3f1c();
                    if ((*(signed char *)0xC8DA0F8) == 0) {
                        FUN_0c2f40d2(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
                        FUN_0c2f5ac0();
                        FUN_0c2f4194();
                        FUN_0c2f5ac0();
                        FUN_0c2f430c();
                        FUN_0c2f5ac0();
                        FUN_0c2f6d04();
                        FUN_0c2f5ac0();
                        FUN_0c2f3f9c();
                        *(unsigned char *)0xC8DFF90 = 0x1;
                        return FUN_0c2f5ac0();
                    }
                    return t38;
                }
                return (signed char)t35;
            }
            return (signed char)t33;
        }
        t49 = FUN_0c2f3f1c();
        if ((*(signed char *)0xC8DA0F8) == 0) {
            FUN_0c2f40d2(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c2f5ac0();
            FUN_0c2f4194();
            FUN_0c2f5ac0();
            FUN_0c2f430c();
            FUN_0c2f5ac0();
            FUN_0c2f6d04();
            FUN_0c2f5ac0();
            FUN_0c2f3f9c();
            *(unsigned char *)0xC8DFF90 = 0x1;
            return FUN_0c2f5ac0();
        }
        return t49;
    }
    (((struct o0_uchar *)0xC8DA0F8)->v) = 0x0;
    (((struct o4_uint *)0xC8DA0F8)->v) = 0x0;
    (((struct o0_uchar *)0xC8DFFDF)->v) = 0x1;
    t60 = *(signed char *)0xC8DFFA6;
    if ((unsigned char)t60 == 1) {
        FUN_0c2f46d4();
        return FUN_0c2f5ac0();
    }
    return (unsigned char)t60;
}

int FUN_0c17fb00(float f4, float f5, float f6, float f7)
{
    register float u3;
    register float u8;
    register float u13;
    register float u18;
    register int t20;
    register int t22;
    register int t24;
    register int t26;

    u3 = (f4 * 255.0f);
    if ((f4 * 255.0f) > 2.14748365e+09f) {
        u3 = (((f4 * 255.0f)) + -4.2949673e+09f);
    }
    u8 = (f5 * 255.0f);
    if ((f5 * 255.0f) > 2.14748365e+09f) {
        u8 = (((f5 * 255.0f)) + -4.2949673e+09f);
    }
    u13 = (f6 * 255.0f);
    if ((f6 * 255.0f) > 2.14748365e+09f) {
        u13 = (((f6 * 255.0f)) + -4.2949673e+09f);
    }
    u18 = (f7 * 255.0f);
    if ((f7 * 255.0f) > 2.14748365e+09f) {
        u18 = (((f7 * 255.0f)) + -4.2949673e+09f);
    }
    t20 = (int)u3;
    if ((unsigned int)(int)u3 > (unsigned int)0xFF) {
        t20 = 0xFF;
    }
    t22 = (int)u8;
    if ((unsigned int)(int)u8 > (unsigned int)0xFF) {
        t22 = 0xFF;
    }
    t24 = (int)u13;
    if ((unsigned int)(int)u13 > (unsigned int)0xFF) {
        t24 = 0xFF;
    }
    t26 = (int)u18;
    if ((unsigned int)(int)u18 > (unsigned int)0xFF) {
        t26 = 0xFF;
    }
    return ((((((t20 << 8) | t22) << 8) | t24) << 8) | t26);
}

int FUN_0c2eac88(void)
{
    register int t67;
    register int t24;
    register int t25;
    register int t78;
    register int t79;
    int t2;
    register int t3;
    int t71;
    register int t72;
    register int t82;

    t67 = 0x0;
    if (((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C))) != 0x84) && (t2 = (((struct o0_int *)0xC8D25F0)->v), t3 = *(signed char *)((t2 + 0x5C)), (unsigned char)t3 != 0x85)) {
    } else {
        if (((*(signed char *)0xC8D25FC) & 2) == 0) {
            FUN_0c2ec410(0xC8D6744, 0xC8);
            (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) | 0x2);
            (((struct o0_uchar *)0xC8D6721)->v) = (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)));
            t67 = 0x0;
        } else {
            if ((*(signed char *)0xC8D6721) == (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)))) {
                t24 = FUN_0c2ec430((*(int *)0xC8D6744));
                if ((signed char)t24 != 0) {
                    t25 = FUN_0c2d4768(0x45, 0x1);
                    FUN_0c2d487c(0x45, (0x20 | (unsigned char)t25), 0x1);
                    t67 = 0x1;
                } else {
                    if ((*(signed char *)0xC8D6721) != (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)))) {
                        FUN_0c2ec410(0xC8D6744, 0xC8);
                        (((struct o0_uchar *)0xC8D6721)->v) = (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)));
                    }
                    t67 = 0x0;
                }
            } else {
                if ((*(signed char *)0xC8D6721) != (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)))) {
                    FUN_0c2ec410(0xC8D6744, 0xC8);
                    (((struct o0_uchar *)0xC8D6721)->v) = (*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x5C)));
                }
                t67 = 0x0;
            }
        }
    }
    if (((signed char)t67 != 1) && (t71 = (((struct o0_int *)0xC8D25F0)->v), t72 = *(signed char *)((0x5C + t71)), ((unsigned char)t72 & 0xF0) != 32)) {
        t82 = ((unsigned char)t72 & 0xF0);
    } else {
        FUN_0c2e93ac();
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x4);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x40);
        (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xDF);
        (((struct oC_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25FC) & 0xFD);
        t78 = *(signed char *)0xC8D25F4;
        t82 = t78;
        if ((t78 & 8) != 0) {
            t79 = *(signed char *)0xC8D25F4;
            (((struct o4_uchar *)0xC8D25F0)->v) = (t79 | 0x10);
            t82 = (t79 | 0x10);
        }
    }
    return t82;
}

int FUN_0c2c19f8(int a4, int a5, int a6, int a7, int a8, int a9)
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
    v0_2 = vmsfs_fcreate(v0_6, (*(int *)(((int)stk + 4))), a8, ((int)stk + 0));
    v0_0 = (v0_0);
    v0_5 = (v0_2);
    v0_1 = (v0_6);
    if (((int)v0_2 < 0)) goto L_C2C1AD2;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x1)) = a9;
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x30)) = 0x1;
    v0_2 = *(int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x4));
    *(unsigned int *)((((v0_1 * 0x148) + 0xC8C4604) + 0x34)) = ((v0_0 << 1) + (*(int *)((((((v0_2 << 2) + v0_2) << 2) << 2) + 0xC303C68))));
    v0_2 = (0x0);
    v0_4 = (v0_3);
    v0_3 = (0x200);
    v0_6 = (((v0_1 * 0x148) + 0xC8C4604));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C2C1A72;
    L_C2C1A5C:;
    v0_6 = vmsfs_fwrite1((*(int *)(((int)stk + 0))), v0_4);
    v0_5 = (v0_6);
    if (((int)v0_6 < 0)) goto L_C2C1ACA;
    v0_5 = (unsigned int)(v0_2 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + v0_3));
    if (v0_5) goto L_C2C1A5C;
    L_C2C1A72:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    v0_2 = vmsfs_fopen(v0_1, (*(int *)(((int)stk + 4))), ((int)stk + 0));
    v0_5 = (v0_2);
    if (((int)v0_2 < 0)) goto L_C2C1AD2;
    v0_2 = ((*(int *)(((int)stk + 8))));
    v0_4 = (0x0);
    v0_6 = (((((v0_1 << 8) << 2) << 1) + 0xC8C5064));
    if (((unsigned int)0x0 >= (unsigned int)v0_0)) goto L_C2C1AC8;
    v0_1 = (0xFFFFFF10);
    L_C2C1AA2:;
    v0_7 = vmsfs_fread1((*(int *)(((int)stk + 0))), v0_6);
    v0_5 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C2C1ACA;
    v0_5 = (vmsfs_memcmp(v0_6, v0_2)) == 0;
    if (v0_5) goto L_C2C1AC0;
    v0_5 = (v0_1);
    L_C2C1ACA:;
    vmsfs_fclose((*(int *)(((int)stk + 0))), 0x0);
    L_C2C1AD2:;
    return v0_5;
    L_C2C1AC0:;
    v0_5 = (unsigned int)(v0_4 + 0x1) < (unsigned int)v0_0;
    v0_2 = ((v0_2 + v0_3));
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C2C1AA2;
    L_C2C1AC8:;
    v0_5 = (0x0);
    goto L_C2C1ACA;
}

int FUN_0c2d401c(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t5;
    register int t12;
    register int t18;
    register int t23;
    register int t30;
    register int t32;
    register int t33;
    register int t36;

    *(unsigned char *)(((int)stk + 24)) = a4;
    *(unsigned char *)(((int)stk + 32)) = a5;
    *(unsigned char *)(((int)stk + 20)) = a6;
    *(unsigned char *)(((int)stk + 28)) = a7;
    t0 = FUN_0c2d4768(0x680, 0x1);
    (((struct o1C_uchar *)(((int)stk + 8)))->v) = t0;
    FUN_0c2d487c(0x680, ((unsigned char)t0 & 0xFFDF), 0x1);
    FUN_0c2d52d4();
    FUN_0c2d28e8((((int)stk + 8) + 0x4), (((int)stk + 8) + 0x8), (((int)stk + 8) + 0x8));
    *(int *)((int)stk + 4) = ((int)stk + 8);
    t5 = (*(signed char *)(((int)stk + 28)));
    *(int *)((int)stk + 0) = t5;
    FUN_0c2d1b2e((*(int *)(((int)stk + 12))), (*(signed char *)(((int)stk + 24))), (*(signed char *)(((int)stk + 32))), (*(signed char *)(((int)stk + 20))), t5, ((int)stk + 8));
    (((struct oE_uchar *)0xC8D25F0)->v) = 0x0;
    *(unsigned int *)0xC8D2678 = ((*(int *)0xC8D2678) + 0x1);
    t12 = (((struct o0_int *)0xC8D25F0)->v);
    if ((unsigned char)((*(signed char *)(((t12 + 0x54) + 0x0))) & 0x1) == 0) {
        (((struct o48_uchar *)(t12))->v) = (*(signed char *)(((int)stk + 8)));
    }
    t18 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o20_uchar *)(t18))->v) = ((*(signed char *)(((t18 + 0x20) + 0x0))) | 0x2);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x40);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) & 0xDF);
    (((struct o4_uchar *)0xC8D25F0)->v) = ((*(signed char *)0xC8D25F4) | 0x10);
    t23 = (((struct o0_int *)0xC8D25F0)->v);
    (((struct o14_uchar *)(t23))->v) = ((*(signed char *)(((t23 + 0x14) + 0x0))) & 0x7F);
    FUN_0c2e93ac();
    if (((unsigned char)(*(signed char *)((((((struct o0_int *)0xC8D25F0)->v)) + 0x48))) & 0xE0) == 0xE0) {
        t30 = *(signed char *)0xC8D25FA;
        (((struct oA_uchar *)0xC8D25F0)->v) = (t30 | 0x80);
        t36 = (t30 | 0x80);
    } else {
        t32 = *(signed char *)((0x48 + ((((struct o0_int *)0xC8D25F0)->v))));
        t36 = ((unsigned char)t32 & 0xF0);
        if (((unsigned char)t32 & 0xF0) == 0x90) {
            t33 = *(signed char *)0xC8D25F9;
            (((struct o9_uchar *)0xC8D25F0)->v) = (t33 | 0x1);
            t36 = (t33 | 0x1);
        }
    }
    return t36;
}

int FUN_0c2efae8(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC8D678D;
    t1 = *(int *)0xC8D67BC;
    if (((unsigned char)t0 & 1) != 0) {
        if ((unsigned int)(unsigned char)(((unsigned char)(*(signed char *)0xC8D6836) << 1) + (*(int *)0xC8D7028)) > (unsigned int)t1) {
            *(unsigned int *)0xC8D7028 = t1;
            return (unsigned char)t0;
        }
        if (1) {
            (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xFE);
        }
    }
    if (((unsigned char)(*(signed char *)0xC8D678D) & 2) != 0) {
        t0 = *(signed char *)0xC8D708A;
        t1 = *(signed char *)(((((unsigned short)(*(short *)((((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2728) + 0x2))) - 1) + (((short)((short)(unsigned char)t0 * (short)0x8C) + 0xC8D2728) + 0x4)) + 0x0));
        t0 = FUN_0c2cf374(t1);
        if ((signed char)t0 == 0) {
            t2 = FUN_0c2cf374(t1);
            if ((signed char)t2 == 0) {
                (((struct o0_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D6786) & 0xFC);
                (((struct o7_uchar *)0xC8D6786)->v) = ((*(signed char *)0xC8D678D) & 0xE0);
                t1 = *(signed char *)0xC8D6786;
                (((struct o0_uchar *)0xC8D6786)->v) = (t1 | 0x1);
                return (t1 | 0x1);
            }
            if (((unsigned char)(*(signed char *)0xC8D6786) & 2) != 0) {
                if (((unsigned char)(*(signed char *)0xC8D678D) & 8) != 0) {
                    return FUN_0c2efbd8();
                }
                *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
                t1 = *(signed char *)0xC8D678D;
                (((struct o7_uchar *)0xC8D6786)->v) = (t1 | 0x1C);
                return (t1 | 0x1C);
            }
            if (((unsigned char)(*(signed char *)0xC8D6786) & 1) != 0) {
                t1 = ((*(signed char *)0xC8D6786) | 0x2);
            } else {
                t1 = ((*(signed char *)0xC8D6786) | 0x1);
            }
            (((struct o0_uchar *)0xC8D6786)->v) = t1;
            return t1;
        }
        return (signed char)t0;
    }
    if (((unsigned char)(*(signed char *)0xC8D6786) & 2) != 0) {
        if (((unsigned char)(*(signed char *)0xC8D678D) & 8) != 0) {
            return FUN_0c2efbd8();
        }
        *(unsigned int *)0xC8D7028 = (*(int *)0xC8D67BC);
        t0 = *(signed char *)0xC8D678D;
        (((struct o7_uchar *)0xC8D6786)->v) = (t0 | 0x1C);
        return (t0 | 0x1C);
    }
    if (((unsigned char)(*(signed char *)0xC8D6786) & 1) != 0) {
        t0 = ((*(signed char *)0xC8D6786) | 0x2);
    } else {
        t0 = ((*(signed char *)0xC8D6786) | 0x1);
    }
    (((struct o0_uchar *)0xC8D6786)->v) = t0;
    return t0;
}

int FUN_0c1935ce(void)
{
    int stk[33];
    register int t0;
    register int t2;
    register int t3;
    register int t10;
    register int t14;
    register int t34;
    register int t35;
    register int t36;
    register int t1;
    register int t4;
    register int t16;

    *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0xC8B1664;
    t0 = 0xC8B1664;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((*(signed char *)((t3 + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))))) == 0) {
            break;
        }
        t4 = 0x0;
        for (;;) {
            if ((*(int *)((0xC2AE7B4 + (t4 << 2)))) == 0) {
                t16 = t0; break;
            }
            t1 = t4;
            t1 = (t1 << 2);
            t1 = (t1 + 0xC2AE7B4);
            t10 = strlen((*(int *)((t1 + 0x0))));
            t14 = FUN_0c187d98((*(int *)((t1 + 0x0))), ((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + t3), t10);
            if (t14 != 0) {
                t4 = (t4 + 0x1);
                continue;
            }
            break;
        }
        t4 = (t4 << 2);
        t0 = t16;
        t1 = t4;
        if ((*(int *)((0xC2AE7B4 + t4))) == 0) {
            t0 = t2;
            t0 = (t0 + (((int)stk + 0) + 0x4));
            t2 = (t2 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = (*(signed char *)((t3 + (*(int *)(((*(int *)(((int)stk + 0))) + 0x0))))));
            t3 = (t3 + 0x1);
        } else {
            t4 = 0xC8B15F8;
            t0 = 0xC187D24;
            t4 = (t4 + t1);
            FUN_0c187d24((t2 + (((int)stk + 0) + 0x4)), (*(int *)((t4 + 0x0))));
            t2 = (t2 + (strlen((*(int *)((t4 + 0x0))))));
            t3 = (t3 + (strlen((*(int *)((0xC2AE7B4 + t1))))));
        }
    }
    *(unsigned char *)(((((int)stk + 0) + 0x4) + t2)) = 0x0;
    FUN_0c1931c0();
    t34 = strlen((((int)stk + 0) + 0x4));
    t35 = FUN_0c191a84((((int)stk + 0) + 0x4), t34);
    t36 = 0x0;
    if ((short)t35 != 0) {
        t36 = 0x4;
    }
    return t36;
}


int FUN_0c19d2b4(int a4, int a5, int a6, int a7)
{
    int stk[72];

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
    v0_3 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_4 = a7;
    v0_0 = ((*(int *)((v0_3 + 0xC))));
    v0_1 = (v0_3);
    v0_2 = (v0_4);
    if ((v0_4 != 0)) goto L_C19D2DA;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = ((((int)stk + 0) + 0x8) + 0x98);
    *(unsigned short *)(((((int)stk + 0) + 0x8) + 0x4)) = 0x0;
    v0_2 = ((((int)stk + 0) + 0x8));
    L_C19D2DA:;
    *(unsigned char *)(((int)stk + 4)) = v0_5;
    v0_4 = ((unsigned char)v0_5);
    v0_3 = ((unsigned char)v0_5);
    if (((unsigned char)v0_5 == 1)) goto L_C19D312;
    if ((v0_4 == 5)) goto L_C19D312;
    if ((v0_4 == 9)) goto L_C19D312;
    if ((v0_4 == 8)) goto L_C19D316;
    if ((v0_4 == 11)) goto L_C19D316;
    if ((v0_4 == 2)) goto L_C19D322;
    if ((v0_4 == 3)) goto L_C19D322;
    if ((v0_4 == 4)) goto L_C19D322;
    if ((v0_4 == 6)) goto L_C19D322;
    if ((v0_4 == 7)) goto L_C19D322;
    if ((v0_4 == 10)) goto L_C19D322;
    L_C19D35E:;
    v0_4 = (0xFFFFFFFF);
    L_C19D392:;
    return v0_4;
    L_C19D322:;
    *(unsigned char *)(((int)stk + 5)) = v0_6;
    L_C19D326:;
    v0_4 = (v0_3);
    if ((v0_3 == 9)) goto L_C19D338;
    if ((v0_4 == 10)) goto L_C19D338;
    if ((v0_4 == 11)) goto L_C19D338;
    L_C19D346:;
    *(unsigned short *)(((int)stk + 6)) = ((FUN_0c1a02a6(v0_2)) + 0x4);
    v0_2 = FUN_0c19d1d0((((int)stk + 0) + 0x4), v0_2);
    v0_4 = (v0_2);
    if ((v0_2 != 0)) goto L_C19D370;
    goto L_C19D35E;
    L_C19D370:;
    v0_2 = *(signed char *)(((*(int *)((v0_1 + 0x2C))) + 0x8));
    *(unsigned short *)(((((unsigned char)v0_2 << 1) + (0xE4 + v0_0)) + 0x0)) = ((*(short *)(((((unsigned char)v0_2 << 1) + (0xE4 + v0_0)) + 0x0))) + 0x1);
    v0_4 = ((FUN_0c19274e(0x0, 0x0, (*(short *)(((*(int *)((v0_1 + 0x2C))) + 0x4))), v0_4)));
    goto L_C19D392;
    L_C19D338:;
    v0_3 = *(int *)((v0_1 + 0x30));
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    FUN_0c19c8e4((*(int *)((v0_2 + 0x0))), (*(int *)((v0_3 + 0x28))));
    goto L_C19D346;
    L_C19D316:;
    v0_4 = *(signed char *)((v0_0 + 0x1));
    *(unsigned char *)((v0_0 + 0x1)) = (v0_4 + 0x1);
    *(unsigned char *)(((int)stk + 5)) = ((v0_4 + 0x1) - 1);
    goto L_C19D326;
    L_C19D312:;
    *(unsigned char *)((v0_1 + 0x1)) = (*(signed char *)((v0_0 + 0x1)));
    goto L_C19D316;
}

int kmGetCurrentScanline(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u10;
    register float u15;
    register int t20;
    register int t21;
    register int t26;
    register int t29;
    register int t5;
    register int t18;
    register float u19;
    register int t13;

    t0 = kmiReadRegister(0x10C);
    t1 = (((struct o34_int *)0xC8D0614)->v);
    t2 = *(int *)0xC8D0658;
    t3 = (((struct o2C_int *)0xC8D0614)->v);
    if ((((*(int *)0xC8D05CC) & 0x1) != 1) && ((t5 = *(int *)0xC8D05CC, (t5 & 44) != 0) && (0x1 != 0))) {
        u10 = 0.5f;
        if (((*(int *)0xC8D05CC) & 32) != 0) {
            u10 = 1.0f;
        }
        t18 = ((t2 + t1) + (t2 + t1));
        u19 = u10;
    } else {
        u15 = 1.0f;
        if (((((((*(int *)0xC8D05CC) == 0)) ? 1 : 0) & 32) != 0) && ((t13 = *(int *)0xC8D05CC, (t13 & 0x1) == 1) && (0x1 != 0))) {
            u15 = 0.5f;
        }
        t18 = (t2 + t1);
        u19 = u15;
    }
    t20 = (((struct o0_int *)0xC8D0614)->v);
    t21 = *(int *)0xC8D05CC;
    t26 = (t21 & 0x1);
    t29 = (0x3FF & t0);
    if ((t21 & 0x1) != 1) {
        t26 = *(int *)0xC8D05CC;
        t29 = (0x3FF & t0);
        if (((t26 & 44) != 0) && ((0x1 != 0) && ((t0 & 0x40000) != 0))) {
            t29 = ((0x3FF & t0) + 0x1);
        }
    }
    if ((int)(int)((float)(t29 - t18) * u19) <= (int)t3) {
        *(unsigned int *)((a4 + 0x0)) = (int)((float)(t29 - t18) * u19);
    } else {
        *(unsigned int *)((a4 + 0x0)) = ((int)((float)(t29 - t18) * u19) - ((unsigned int)t20 >> 16));
    }
    return t26;
}


int FUN_0c2f57f4(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    (((struct o31_uchar *)0xC8DFF72)->v) = 0x0;
    t2 = *(signed char *)0xC8DFF93;
    if ((unsigned char)t2 != 0) {
        t3 = *(signed char *)0xC8DFF92;
        if (t3 != 0) {
            t4 = FUN_0c2f6bcc();
            if ((*(signed char *)0xC8DFFA4) == 0) {
                (((struct o1E_uchar *)0xC8DFF72)->v) = 0x2;
                (((struct o1F_uchar *)0xC8DFF72)->v) = 0x1;
            } else {
                (((struct o1E_uchar *)0xC8DFF72)->v) = 0x3;
                (((struct o1F_uchar *)0xC8DFF72)->v) = 0x5;
            }
            (((struct o23_uchar *)0xC8DFF72)->v) = 0x0;
            (((struct o22_uchar *)0xC8DFF72)->v) = 0x1;
            t5 = t4;
        } else {
            t4 = t3;
            if (((unsigned char)t2 == 0) && (t0 = *(signed char *)0xC8DFF92, t0 != 0)) {
                t0 = 0xC8DFFA1;
                if ((*(signed char *)0xC8DFFA1) != 0) {
                    (((struct o0_uchar *)0xC8DFF72)->v) = (*(signed char *)0xC8DFF70);
                    (((struct o2F_uchar *)0xC8DFF72)->v) = 0x0;
                    t0 = 0xC8DFF72;
                }
                t4 = t0;
            }
            t5 = t4;
        }
        t0 = t5;
    } else {
        if (((unsigned char)t2 == 0) && (t1 = *(signed char *)0xC8DFF92, t1 != 0)) {
            t1 = 0xC8DFFA1;
            if ((*(signed char *)0xC8DFFA1) != 0) {
                (((struct o0_uchar *)0xC8DFF72)->v) = (*(signed char *)0xC8DFF70);
                (((struct o2F_uchar *)0xC8DFF72)->v) = 0x0;
                t1 = 0xC8DFF72;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    t1 = t0;
    if ((*(signed char *)0xC8DFFA1) == 0) {
        t0 = 0xC8DFFA0;
        if ((*(signed char *)0xC8DFFA0) == 0) {
            (((struct o1A_uchar *)0xC8DFF72)->v) = 0x0;
            if ((*(signed char *)0xC8DFF71) != (*(signed char *)0xC8DFF72)) {
                (((struct o1A_uchar *)0xC8DFF72)->v) = 0x1;
                *(unsigned int *)0xC8DFF80 = (*(int *)0xC8D67BC);
            }
            t0 = 0xC8DFF72;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c2fb486(void)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t7;
    register int t9;
    register int t12;
    register int t25;

    t0 = 0x1F4;
    for (;;) {
        t1 = FUN_0c2d54a0(((int)stk + 0));
        if ((signed char)t1 == 0) {
            return (signed char)t1;
        }
        t7 = (unsigned short)t0 == 0;
        t0 = (t0 - 1);
        if (t7) {
            break;
        }
        t9 = *(signed char *)0xC8D7068;
        if ((unsigned char)t9 != 2) {
            if ((unsigned char)t9 == 8) {
                FUN_0c2eef70();
                if ((unsigned char)(*(signed char *)0xC8D7081) == 1) {
                    t12 = (((struct o8_int *)0xC8D7068)->v);
                    (((struct o8_uint *)0xC8D7068)->v) = (t12 + 0x1);
                    *(unsigned char *)((((t12 + 0x1) - 0x1) + 0x0)) = (*(signed char *)(((int)stk + 0)));
                    (((struct o4_ushort *)0xC8D7068)->v) = (((((struct o4_short *)0xC8D7068)->v)) + 0x1);
                    (((struct o0_uchar *)0xC8D7068)->v) = 0x2;
                } else {
                    *(unsigned int *)0xC8E095C = ((*(int *)0xC8E095C) + 0x1);
                }
            }
        } else {
            *(unsigned short *)0xC8D67C2 = 0x0;
            t25 = (((struct o8_int *)0xC8D7068)->v);
            (((struct o8_uint *)0xC8D7068)->v) = (t25 + 0x1);
            *(unsigned char *)((((t25 + 0x1) - 0x1) + 0x0)) = (*(signed char *)(((int)stk + 0)));
            (((struct o4_ushort *)0xC8D7068)->v) = (((((struct o4_short *)0xC8D7068)->v)) + 0x1);
            if (((((struct o4_short *)0xC8D7068)->v)) == (*(short *)0xC8E0330)) {
                FUN_0c2ef050();
                (((struct o0_uchar *)0xC8D7068)->v) = 0x8;
            }
        }
    }
    return (FUN_0c2d65ae(0x1414));
}

int FUN_0c1942e6(int a4, int a5, int a6)
{
    int stk[13];
    register int t0;
    register int t8;
    register int t1;
    register int t6;

    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned short *)(((int)stk + 20)) = a6;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x14);
    t0 = ((int (*)(int, int, int, int))(FUN_0c193fc0))(a4, (((int)stk + 0) + 0x8), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10));
    t8 = t0;
    if ((unsigned short)t0 == 0) {
        for (;;) {
            *(int *)((int)stk + 0) = (((int)stk + 4) + 0x8);
            t1 = ((int (*)(int, int, int, int, int))(FUN_0c193fc0))(a4, (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x10), (((int)stk + 4) + 0x8));
            if ((int)(unsigned short)(*(short *)(((int)stk + 4))) < (int)0x4) {
                FUN_0c183140(0x1);
                if ((unsigned short)t1 != 0) {
                    break;
                }
                continue;
            }
            *(unsigned short *)(((int)stk + 32)) = a4;
            *(unsigned char *)(((int)stk + 40)) = 0x0;
            *(unsigned char *)(((int)stk + 41)) = 0x1;
            (((struct o28_ushort *)(((int)stk + 4)))->v) = (*(short *)(((int)stk + 20)));
            *(unsigned int *)(((int)stk + 48)) = (*(int *)(((int)stk + 28)));
            *(unsigned int *)(((int)stk + 36)) = 0x0;
            t6 = FUN_0c184000(0x4118, (((int)stk + 4) + 0x1C), 0x0);
            if ((short)t6 == 0) {
                return (*(short *)(((int)stk + 20)));
            }
            if ((short)t6 == -1) {
                return 0x0;
            }
            return t6;
        }
        t8 = t1;
    }
    return t8;
}
