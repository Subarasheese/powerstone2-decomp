/* Straight-line functions with calls and guards (batch gen_jj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o37CC_float { char p[0x37CC]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3824_short { char p[0x3824]; short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c038958(int, int);
int FUN_0c064f80(int);
int FUN_0c070642(int);
int FUN_0c07075c(int);
int FUN_0c071774(int);
int FUN_0c072c34(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c081ee8(int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c09e38c(int, int, int, int);
int FUN_0c09e8de(int, int, int, int);
int FUN_0c0b7562(int);
int FUN_0c0b7612(int);
int FUN_0c0b76e0(int);
int FUN_0c0b7bb2(int);
int FUN_0c0b7f88(int);
int FUN_0c0b81e4(int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int nlWaitVSync(void);
int ai_clear_op_state(void);
int ai_script_branch(int, int);
int dbg_printf(int, ...);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int nlLocate(void);
int FUN_0c084d14(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0bfe78(int a4);
int FUN_0c0888b0(int a4);
int FUN_0c08cab0(int a4, int a5, int a6, int a7);
int FUN_0c0b8484(int a4, int a5, int a6, int a7);
int FUN_0c087138(int a4);
int FUN_0c0866c8(int a4);
int FUN_0c08a518(int a4);
int FUN_0c089ea8(int a4);
int FUN_0c089c64(int a4);
int FUN_0c08868c(int a4);
int FUN_0c0c0e34(int a4);
int FUN_0c0bdc7c(int a4, int a5);
int FUN_0c2bc09c(int a4);
int FUN_0c09e944(int a4, int a5, int a6, int a7);
int FUN_0c010080(int a4, int a5, int a6);
int FUN_0c0be1c0(int a4);
int FUN_0c2bc0d6(int a4);
int FUN_0c0bdf18(void);
int FUN_0c0f2fe8(int a4);
int FUN_0c2bc0f0(void);


int FUN_0c2bc09c(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = a4;
    if (((unsigned short)a4 != 0) && (((unsigned short)a4 != 1) && (((unsigned short)a4 != 2) && (((unsigned short)a4 != 3) && ((unsigned short)a4 != 4))))) {
        t1 = 0x2;
    }
    t2 = *(volatile signed char *)0xFFD80004;
    t3 = *(volatile signed char *)0xFFD80004;
    *(volatile unsigned char *)0xFFD80004 = (t3 & 0xFB);
    t4 = *(volatile short *)0xFFD80028;
    *(volatile unsigned short *)0xFFD80028 = ((t4 & 0xFFFFFFF8) | t1);
    *(volatile unsigned char *)0xFFD80004 = t2;
    return (t3 & 0xFB);
}


int FUN_0c2bc0d6(int a4)
{
    register int t0;
    register int t1;

    t0 = *(volatile signed char *)0xFFD80004;
    t1 = *(volatile signed char *)0xFFD80004;
    *(volatile unsigned char *)0xFFD80004 = (t1 & 0xFB);
    *(volatile unsigned int *)0xFFD80020 = 0xFFFFFFFF;
    *(volatile unsigned int *)0xFFD80024 = (-a4);
    *(volatile unsigned char *)0xFFD80004 = t0;
    return (t1 & 0xFB);
}


int FUN_0c2bc0f0(void)
{
    register int t0;

    t0 = *(volatile int *)0xFFD80024;
    return (0xFFFFFFFF - t0);
}
