/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
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
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_short { char p[0x6]; short v; };
struct o60_float { char p[0x60]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA_short { char p[0xA]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c059df2(int, int);
int FUN_0c067438(int);
int FUN_0c067734(int);
int FUN_0c0733b0(int);
int FUN_0c07d666(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c080d2a(int);
int FUN_0c081dfc(int);
int FUN_0c081e68(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0a8c84(int);
int FUN_0c0a8cea(int);
int FUN_0c0a8de0(int);
int FUN_0c0a8ef8(int, int, int);
int FUN_0c0a908c(int);
int FUN_0c0a90b8(int);
int FUN_0c1016e8(void);
int FUN_0c101b30(void);
int FUN_0c10b7be(int, int, int, int);
int FUN_0c10b7e2(int, int, int, int);
int FUN_0c10b808(int);
int FUN_0c10b97c(int, int, int, int);
int FUN_0c10b9d6(int, int, int, int);
int FUN_0c10bbb8(int, int, int);
int FUN_0c10bda2(int);
int FUN_0c10bdfc(int, int, int, int);
int FUN_0c10be56(int);
int FUN_0c160d32(int, int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c163116(int, int, int);
int FUN_0c16498c(int, int, int, int);
int FUN_0c166190(int, int, int);
int FUN_0c16757a(int, int, int);
int FUN_0c16844c(int, int, int);
int FUN_0c168978(int, int, int);
int FUN_0c16b9ec(int, int, int, int);
int FUN_0c16c150(int, int, int, int);
int FUN_0c16d2b4(int, int, int);
int FUN_0c17a4c0(int, int);
int FUN_0c17a550(int);
int FUN_0c187798(int, int, int);
int dbg_printf(int, ...);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int FUN_0c083e00(int a4, int a5, int a6);
float FUN_0c0f3398(int a4, int a5, int a6);
int FUN_0c101000(void);
int FUN_0c0a91ce(int a4, int a5, int a6, int a7);
int FUN_0c10bea8(int a4, int a5, int a6, int a7);



int FUN_0c101000(void)
{
    int stk[35];
    register float u12;
    register float u16;
    register int t49;
    register int t321;
    register int t137;
    register int t206;
    register int t207;
    register int t211;
    register int t225;
    register int t231;
    register int t232;
    register int t236;
    register int t250;
    register int t265;
    register int t266;
    register int t279;
    register int t305;

    if (((unsigned short)(*(short *)0xC5428B4) & 0x800) != 0) {
        (((struct o1C_uint *)0xC5324B4)->v) = (((((struct o1C_int *)0xC5324B4)->v)) + 0x200);
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x400) != 0) {
        (((struct o1C_uint *)0xC5324B4)->v) = (((((struct o1C_int *)0xC5324B4)->v)) - 0x200);
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x2000) != 0) {
        *(int *)((int)stk + 116) = 0xC5324C0;
        u12 = ((((struct oC_float *)0xC5324B4)->v));
        u12 = u12 + 1.0f * (math_sin_angle16(((((struct o1C_int *)0xC5324B4)->v))));
        (((struct oC_float *)0xC5324B4)->v) = u12;
        *(int *)((int)stk + 116) = 0xC5324C8;
        u16 = ((((struct o14_float *)0xC5324B4)->v));
        u16 = u16 + 1.0f * (math_cos_angle16(((((struct o1C_int *)0xC5324B4)->v))));
        (((struct o14_float *)0xC5324B4)->v) = u16;
    }
    if (((unsigned short)(*(short *)0xC5428B4) & 0x1000) != 0) {
        *(int *)((int)stk + 116) = 0xC5324C0;
        (((struct oC_float *)0xC5324B4)->v) = (((((struct oC_float *)0xC5324B4)->v)) + ((-((math_sin_angle16(((((struct o1C_int *)0xC5324B4)->v)))) * 1.0f))));
        *(int *)((int)stk + 116) = 0xC5324C8;
        (((struct o14_float *)0xC5324B4)->v) = (((((struct o14_float *)0xC5324B4)->v)) + ((-((math_cos_angle16(((((struct o1C_int *)0xC5324B4)->v)))) * 1.0f))));
    }
    if (((unsigned short)(*(short *)0xC542868) & 128) != 0) {
        *(unsigned int *)0xC290750 = ((*(int *)0xC290750) + 0x1);
    }
    if ((int)(*(int *)0xC290750) > (int)0x3) {
        *(unsigned int *)0xC290750 = 0x0;
    }
    t49 = *(int *)0xC290750;
    t321 = 0x0;
    if (t49 == 0) {
    } else {
        if (t49 != 1) {
            if (t49 == 2) {
                FUN_0c1016e8();
                t305 = 0x1;
            } else {
                t305 = t49;
                if (t49 == 3) {
                    FUN_0c101b30();
                    t305 = 0x1;
                }
            }
        } else {
            FUN_0c17a4c0(0x4, 0x0);
            FUN_0c17a550(0xFFFF0000);
            *(int *)((int)stk + 116) = (unsigned char)(*(signed char *)0xC541F43);
            *(int *)((int)stk + 112) = 0xC1FBC50;
            dbg_printf(0xC1FBC50);
            *(int *)((int)stk + 108) = (((((struct o0_short *)0xC541F50)->v)));
            *(int *)((int)stk + 104) = 0xC1FBC64;
            dbg_printf(0xC1FBC64);
            *(int *)((int)stk + 100) = (unsigned char)(*(signed char *)0xC541F44);
            *(int *)((int)stk + 96) = 0xC1FBC78;
            dbg_printf(0xC1FBC78);
            *(int *)((int)stk + 92) = (unsigned char)(*(signed char *)0xC541F45);
            *(int *)((int)stk + 88) = 0xC1FBC8C;
            dbg_printf(0xC1FBC8C);
            *(int *)((int)stk + 84) = (unsigned char)(*(signed char *)0xC541F46);
            *(int *)((int)stk + 80) = 0xC1FBCA0;
            dbg_printf(0xC1FBCA0);
            *(int *)((int)stk + 76) = (unsigned char)(*(signed char *)0xC541F47);
            *(int *)((int)stk + 72) = 0xC1FBCB4;
            dbg_printf(0xC1FBCB4);
            *(int *)((int)stk + 68) = (unsigned char)(*(signed char *)0xC541F48);
            *(int *)((int)stk + 64) = 0xC1FBCC8;
            dbg_printf(0xC1FBCC8);
            *(int *)((int)stk + 60) = (((((struct o4_short *)0xC541F50)->v)));
            *(int *)((int)stk + 56) = 0xC1FBCDC;
            dbg_printf(0xC1FBCDC);
            *(int *)((int)stk + 52) = (((((struct o6_short *)0xC541F50)->v)));
            *(int *)((int)stk + 48) = 0xC1FBCF0;
            dbg_printf(0xC1FBCF0);
            *(int *)((int)stk + 44) = (((((struct o8_short *)0xC541F50)->v)));
            *(int *)((int)stk + 40) = 0xC1FBD04;
            dbg_printf(0xC1FBD04);
            *(int *)((int)stk + 36) = (((((struct oA_short *)0xC541F50)->v)));
            *(int *)((int)stk + 32) = 0xC1FBD18;
            dbg_printf(0xC1FBD18);
            *(int *)((int)stk + 28) = ((*(signed char *)0xC535BAD));
            *(int *)((int)stk + 24) = 0xC1FBD2C;
            dbg_printf(0xC1FBD2C);
            *(int *)((int)stk + 20) = ((*(signed char *)0xC535BAE));
            *(int *)((int)stk + 16) = 0xC1FBD40;
            dbg_printf(0xC1FBD40);
            *(int *)((int)stk + 12) = ((*(signed char *)0xC5324AC));
            *(int *)((int)stk + 8) = 0xC1FBD54;
            dbg_printf(0xC1FBD54);
            *(int *)((int)stk + 4) = ((*(signed char *)0xC5324AD));
            *(int *)((int)stk + 0) = 0xC1FBD68;
            dbg_printf(0xC1FBD68);
            *(int *)((int)stk + 116) = ((*(signed char *)0xC5324AE));
            *(int *)((int)stk + 112) = 0xC1FBD7C;
            dbg_printf(0xC1FBD7C);
            *(int *)((int)stk + 108) = (((((struct o0_short *)0xC5324B4)->v)));
            *(int *)((int)stk + 104) = 0xC1FBD90;
            dbg_printf(0xC1FBD90);
            *(float *)(((int)stk + 100)) = ((((struct oC_float *)0xC5324B4)->v));
            *(int *)((int)stk + 96) = 0xC1FBDA4;
            dbg_printf(0xC1FBDA4);
            *(float *)(((int)stk + 92)) = ((((struct o10_float *)0xC5324B4)->v));
            *(int *)((int)stk + 88) = 0xC1FBDB8;
            dbg_printf(0xC1FBDB8);
            *(float *)(((int)stk + 84)) = ((((struct o14_float *)0xC5324B4)->v));
            *(int *)((int)stk + 80) = 0xC1FBDCC;
            dbg_printf(0xC1FBDCC);
            *(float *)(((int)stk + 76)) = ((((struct o30_float *)0xC5324B4)->v));
            *(int *)((int)stk + 72) = 0xC1FBDE0;
            dbg_printf(0xC1FBDE0);
            *(float *)(((int)stk + 68)) = ((((struct o34_float *)0xC5324B4)->v));
            *(int *)((int)stk + 64) = 0xC1FBDB8;
            dbg_printf(0xC1FBDB8);
            *(float *)(((int)stk + 60)) = ((((struct o38_float *)0xC5324B4)->v));
            *(int *)((int)stk + 56) = 0xC1FBDCC;
            dbg_printf(0xC1FBDCC);
            *(float *)(((int)stk + 52)) = ((((struct o8C_float *)((*(int *)0xC5325B0)))->v));
            *(int *)((int)stk + 48) = 0xC1FBDF4;
            dbg_printf(0xC1FBDF4);
            *(int *)((int)stk + 44) = (((((struct o1C_int *)0xC5324B4)->v)));
            *(int *)((int)stk + 40) = 0xC1FBE08;
            dbg_printf(0xC1FBE08);
            FUN_0c17a550(0xFFFFFFFF);
            FUN_0c17a550(0xFF00FF00);
            t137 = 0x0;
            for (;;) {
                if ((*(int *)((0xC290694 + (t137 << 2)))) == 0) {
                    break;
                }
                if ((*(int *)((0xC474B8C + (t137 << 2)))) != 0) {
                    *(int *)((int)stk + 116) = ((*(int *)((0xC290694 + (t137 << 2)))));
                    *(int *)((int)stk + 112) = 0xC1FBE1C;
                    dbg_printf(0xC1FBE1C);
                }
                t137 = (t137 + 0x1);
            }
            FUN_0c17a4c0(0x20, 0x0);
            FUN_0c17a550(0xFF00FFFF);
            *(int *)((int)stk + 116) = (((((struct o24_int *)0xC474714)->v)));
            *(int *)((int)stk + 112) = 0xC1FBE20;
            dbg_printf(0xC1FBE20);
            *(int *)((int)stk + 108) = (((((struct o8_int *)0xC474714)->v)));
            *(int *)((int)stk + 104) = 0xC1FBE38;
            dbg_printf(0xC1FBE38);
            *(int *)((int)stk + 100) = (((((struct o18_int *)0xC474714)->v)));
            *(int *)((int)stk + 96) = 0xC1FBE50;
            dbg_printf(0xC1FBE50);
            *(int *)((int)stk + 92) = (((((struct o1C_int *)0xC474714)->v)));
            *(int *)((int)stk + 88) = 0xC1FBE68;
            dbg_printf(0xC1FBE68);
            *(int *)((int)stk + 84) = (((((struct oC_int *)0xC474714)->v)));
            *(int *)((int)stk + 80) = 0xC1FBE80;
            dbg_printf(0xC1FBE80);
            *(int *)((int)stk + 76) = (((((struct o10_int *)0xC474714)->v)));
            *(int *)((int)stk + 72) = 0xC1FBE98;
            dbg_printf(0xC1FBE98);
            FUN_0c17a550(0xFF00FF00);
            *(int *)((int)stk + 68) = (((((struct o0_int *)0xC474714)->v)));
            *(int *)((int)stk + 64) = 0xC1FBEB0;
            dbg_printf(0xC1FBEB0);
            *(int *)((int)stk + 60) = (((((struct o0_int *)0xC474404)->v)));
            *(int *)((int)stk + 56) = 0xC1FBEC8;
            dbg_printf(0xC1FBEC8);
            *(int *)((int)stk + 52) = (((((struct o4_int *)0xC474404)->v)));
            *(int *)((int)stk + 48) = 0xC1FBEE0;
            dbg_printf(0xC1FBEE0);
            *(int *)((int)stk + 44) = (((((struct o8_int *)0xC474404)->v)));
            *(int *)((int)stk + 40) = 0xC1FBEF8;
            dbg_printf(0xC1FBEF8);
            FUN_0c17a550(0xFFFF0000);
            *(int *)((int)stk + 36) = ((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))));
            *(int *)((int)stk + 32) = 0xC1FBF10;
            dbg_printf(0xC1FBF10);
            *(int *)((int)stk + 28) = ((*(signed char *)((((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
            *(int *)((int)stk + 24) = 0xC1FBF28;
            dbg_printf(0xC1FBF28);
            *(int *)((int)stk + 20) = ((*(signed char *)((((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
            *(int *)((int)stk + 16) = 0xC1FBF40;
            dbg_printf(0xC1FBF40);
            *(int *)((int)stk + 12) = ((*(int *)((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) << 2) + 0xC473D04))));
            *(int *)((int)stk + 8) = 0xC1FBF58;
            dbg_printf(0xC1FBF58);
            *(int *)((int)stk + 4) = ((*(int *)((((*(int *)(((((((struct o0_int *)0xC474404)->v)) << 2) + 0xC474410))) << 2) + 0xC474104))));
            *(int *)((int)stk + 0) = 0xC1FBF70;
            dbg_printf(0xC1FBF70);
            t206 = (FUN_0c17a550(0xFFFF00FF));
            t207 = 0x0;
            for (;;) {
                if ((int)t207 >= (int)0x2) {
                    break;
                }
                t206 = 0xC1FBF88;
                *(unsigned int *)(((int)stk + 120)) = ((t207 << 2) + 0xC473CC0);
                *(int *)((int)stk + 116) = ((*(int *)((((t207 << 2) + 0xC473CC0) + 0x0))));
                *(int *)((int)stk + 112) = (t207);
                t211 = t206;
                *(int *)((int)stk + 108) = t211;
                t206 = (dbg_printf(t211));
                t206 = (*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3)));
                *(int *)((int)stk + 104) = (t206);
                *(int *)((int)stk + 100) = 0xC1FBF28;
                t206 = (dbg_printf(0xC1FBF28));
                t206 = 0x10;
                *(int *)((int)stk + 96) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + t206))));
                *(int *)((int)stk + 92) = 0xC1FBF40;
                t206 = (dbg_printf(0xC1FBF40));
                t206 = (*(int *)(((int)stk + 120)));
                t206 = (*(int *)((t206 + 0x0)));
                if (t206 != -1) {
                    t206 = 0xC473CC0;
                    t225 = *(int *)(((t207 << 2) + t206));
                    t206 = 0xC473D04;
                    *(int *)((int)stk + 116) = ((*(int *)(((t225 << 2) + t206))));
                    *(int *)((int)stk + 112) = 0xC1FBFA4;
                    t206 = (dbg_printf(0xC1FBFA4));
                } else {
                    *(int *)((int)stk + 116) = 0xC1FBFBC;
                    t206 = (dbg_printf(0xC1FBFBC));
                }
                t207 = (t207 + 0x1);
            }
            t231 = t206;
            t232 = 0x0;
            for (;;) {
                if ((int)t232 < (int)0x4) {
                    t231 = 0xC1FBFD4;
                    *(unsigned int *)(((int)stk + 120)) = ((t232 << 2) + 0xC473CCC);
                    *(int *)((int)stk + 116) = ((*(int *)((((t232 << 2) + 0xC473CCC) + 0x0))));
                    *(int *)((int)stk + 112) = (t232);
                    t236 = t231;
                    *(int *)((int)stk + 108) = t236;
                    t231 = (dbg_printf(t236));
                    t231 = (*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3)));
                    *(int *)((int)stk + 104) = (t231);
                    *(int *)((int)stk + 100) = 0xC1FBF28;
                    t231 = (dbg_printf(0xC1FBF28));
                    t231 = 0x10;
                    *(int *)((int)stk + 96) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + t231))));
                    *(int *)((int)stk + 92) = 0xC1FBF40;
                    t231 = (dbg_printf(0xC1FBF40));
                    t231 = (*(int *)(((int)stk + 120)));
                    t231 = (*(int *)((t231 + 0x0)));
                    if (t231 != -1) {
                        t231 = 0xC473CCC;
                        t250 = *(int *)(((t232 << 2) + t231));
                        t231 = 0xC473D04;
                        *(int *)((int)stk + 116) = ((*(int *)(((t250 << 2) + t231))));
                        *(int *)((int)stk + 112) = 0xC1FBFA4;
                        t231 = (dbg_printf(0xC1FBFA4));
                    } else {
                        *(int *)((int)stk + 116) = 0xC1FBFBC;
                        t231 = (dbg_printf(0xC1FBFBC));
                    }
                    t232 = (t232 + 0x1);
                    continue;
                }
                break;
            }
            FUN_0c17a550(0xFF00FF00);
            *(int *)((int)stk + 116) = (((((struct o0_int *)0xC473CE4)->v)));
            *(int *)((int)stk + 112) = 0xC1FBFF0;
            dbg_printf(0xC1FBFF0);
            *(int *)((int)stk + 108) = (((((struct o10_int *)0xC473CE4)->v)));
            *(int *)((int)stk + 104) = 0xC1FC008;
            dbg_printf(0xC1FC008);
            FUN_0c17a550(0xFFFF0000);
            t265 = *(int *)(((((((struct o30_int *)0xC474714)->v)) << 2) + 0xC473C74));
            t266 = (((struct o30_int *)0xC474714)->v);
            t279 = t265;
            if (t266 != 0) {
                t279 = (t265 + 0x80);
                if (t266 != 1) {
                    t279 = (t265 + 0x96);
                    if (t266 != 2) {
                        t279 = (t265 + 0xA0);
                        if (t266 != 3) {
                            t279 = t265;
                        }
                    }
                }
            }
            FUN_0c17a550(0xFF00FFFF);
            *(unsigned int *)(((int)stk + 124)) = (t279 << 2);
            *(unsigned int *)(((int)stk + 120)) = ((t279 << 2) + 0xC474410);
            *(int *)((int)stk + 116) = ((*(int *)((((t279 << 2) + 0xC474410) + 0x0))));
            *(int *)((int)stk + 112) = 0xC1FC020;
            dbg_printf(0xC1FC020);
            *(int *)((int)stk + 108) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x3))));
            *(int *)((int)stk + 104) = 0xC1FBF28;
            dbg_printf(0xC1FBF28);
            *(int *)((int)stk + 100) = ((*(signed char *)((((((*(int *)(((*(int *)(((int)stk + 120))) + 0x0))) + 0x1) * 0x34) + 0xC2738B8) + 0x10))));
            *(int *)((int)stk + 96) = 0xC1FBF40;
            dbg_printf(0xC1FBF40);
            if (t279 != -1) {
                *(int *)((int)stk + 116) = ((*(int *)((((*(int *)(((*(int *)(((int)stk + 124))) + 0xC474410))) << 2) + 0xC473D04))));
                *(int *)((int)stk + 112) = 0xC1FBFA4;
                dbg_printf(0xC1FBFA4);
            } else {
                *(int *)((int)stk + 116) = 0xC1FBFBC;
                dbg_printf(0xC1FBFBC);
            }
            FUN_0c17a550(0xFFFFFFFF);
            t305 = 0x0;
        }
        t321 = t305;
    }
    return t321;
}

int FUN_0c0a91ce(int a4, int a5, int a6, int a7)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    return FUN_0c0a90b8(a4);
                }
                return FUN_0c0a908c(a4);
            }
            return FUN_0c0a8ef8(a4, a5, a6);
        }
        return FUN_0c0a8de0(a4);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0a8cea(a4);
            }
            return FUN_0c0a8c84(a4);
        }
        return ((int (*)(int, int, int, int))(0xC0A8B60))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A8A7C))(a4, a5, a6, a7);
}

int FUN_0c10bea8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 6) {
                                if (t0 != 7) {
                                    if (t0 != 99) {
                                        return t0;
                                    }
                                    return FUN_0c10be56(a4);
                                }
                                return FUN_0c10bdfc(a4, a5, a6, a7);
                            }
                            return FUN_0c10bda2(a4);
                        }
                        return FUN_0c10bbb8(a4, a5, a6);
                    }
                    return FUN_0c10b9d6(a4, a5, a6, a7);
                }
                return FUN_0c10b97c(a4, a5, a6, a7);
            }
            return FUN_0c10b7e2(a4, a5, a6, a7);
        }
        return FUN_0c10b808(a4);
    }
    return FUN_0c10b7be(a4, a5, a6, a7);
}
