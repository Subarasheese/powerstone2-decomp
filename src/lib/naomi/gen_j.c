/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o3C_uchar { char p[0x3C]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
int FUN_0c1772e0(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c188250(void);
extern int FUN_0c195b9c();
int FUN_0c1965cc(int, int, int);
int FUN_0c19c916(int);
int FUN_0c19f9ba(int);
int FUN_0c1a0254(int);
int FUN_0c1a02a6(int);
int FUN_0c1a02cc(int, int, int);
float FUN_0c1a042c(int, int, int, int);
int FUN_0c1a0ec4(int, int, int);
int FUN_0c1a11d0(int, int, int);
int FUN_0c1a2e68(float, float);
int FUN_0c1a3198(int, int, int);
int FUN_0c1a36ac(int, int, int, float, float);
int FUN_0c2d7890(void);
int FUN_0c2e5514(int, int, int);
int FUN_0c2e55bc(void);
int FUN_0c2e76c8(int, int);
int FUN_0c2ec430(int);
int FUN_0c2ef3c8(void);
int FUN_0c2f67cc(float, float, float, float, float, float, float);
int FUN_0c2f6c38(void);
int FUN_0c2fa4cc(int, int, int);
int FUN_0c2fbc38(void);
int _pow5(int, int);
int calcnpw(int, int, int, int);
int kmSetSystemConfiguration(int);
int kmiCreateDummyRegionforAvoidCacheBug(int);
int kmyCopyToFrameBuffer(int, int, int);
int nlLoadDummyTexture(void);
int nlLoadTextureMem(int, int, int);
int nlSearchPalette(int, int);
int nlSetDummyTextureParameter(int);
int nlSetPaletteData(int, int, int);
int nl_mesh_set_texture(int, int);
int nl_texture_slot_alloc(void);
int nl_texture_slot_finish(int);
int FUN_0c2e4f1c(int a4);
int FUN_0c195650(int a4, int a5, int a6, int a7);
int FUN_0c177f40(int a4, int a5, int a6, int a7);
int kmyGenerateRegionArray(int a4, int a5, int a6);
int FUN_0c1a26d8(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c17dcc0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2ee1da(int a4);
int FUN_0c2fa4f4(int a4, int a5, int a6, int a7);
int FUN_0c19fef8(int a4, int a5);
int FUN_0c2f4a04(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);


int FUN_0c195650(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R1;
    register int R2;
    register int R3;
    int R13;
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
    v0_3 = a5;
    v0_4 = a6;
    v0_6 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    v0_7 = (0x0);
    v0_0 = (v0_4);
    v0_9 = ((((int)stk + 0) + 0x28));
    v0_3 = ((((int)stk + 0) + 0x30));
    L_C195670:;
    *(unsigned char *)((v0_9 + 0x0)) = v0_7;
    v0_1 = (unsigned int)(v0_9 + 0x1) < (unsigned int)v0_3;
    v0_9 = ((v0_9 + 0x1));
    if (v0_1) goto L_C195670;
    *(unsigned int *)(((((int)stk + 0) + 0x20) + 0x0)) = v0_7;
    *(unsigned int *)(((((int)stk + 0) + 0x20) + 0x4)) = 0x7FF00000;
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x0)) = 0x7F800000;
    *(unsigned int *)(((int)stk + 0)) = v0_7;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    *(unsigned int *)(((int)stk + 28)) = v0_7;
    v0_1 = (v0_7);
    R13 = (0x1);
    v0_9 = ((((int)stk + 0) + 0x18));
    v0_2 = (v0_7);
    if ((((*(signed char *)((v0_0 + 0x3))) & 0x1) != 0)) goto L_C1956A6;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1956DE;
    L_C1956A6:;
    if (((*(signed char *)((v0_0 + 0x0))) == 43)) goto L_C1956B2;
    if (((*(signed char *)((v0_0 + 0x0))) != 45)) goto L_C1956CC;
    L_C1956B2:;
    v0_9 = (v0_0);
    if (((*(signed char *)((v0_0 + 0x0))) != 45)) goto L_C1956BE;
    *(unsigned int *)(((int)stk + 16)) = 0xFFFFFFFF;
    L_C1956BE:;
    v0_5 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_9, v0_3, v0_4, v0_6);
    L_C1956CC:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C1956D8;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1956DE;
    L_C1956D8:;
    if (!(((*(signed char *)((v0_0 + 0x0))) == 48))) goto L_C1956DE;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    v0_2 = (R13);
    goto L_C1956CC;
    L_C1956DE:;
    v0_8 = (0x11);
    v0_5 = ((((int)stk + 0) + 0x34));
    L_C195710:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C19571C;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1957A8;
    L_C19571C:;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & 4) != 0)) goto L_C1956E6;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C195736;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1957A8;
    L_C195736:;
    if (((*(signed char *)((v0_0 + 0x0))) != 46)) goto L_C1957A8;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    if ((v0_1 != 0)) goto L_C19578E;
    L_C195754:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C195760;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1957A8;
    L_C195760:;
    if (!(((*(signed char *)((v0_0 + 0x0))) == 48))) goto L_C19578E;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
    v0_2 = (R13);
    goto L_C195754;
    L_C19578E:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C19579A;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1957A8;
    L_C19579A:;
    if (!((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & 4) != 0))) goto L_C1957A8;
    v0_2 = (R13);
    if (((int)v0_1 >= (int)v0_8)) goto L_C195784;
    *(unsigned char *)((v0_5 + v0_1)) = (*(signed char *)((v0_0 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    goto L_C19578A;
    L_C1957A8:;
    if ((v0_1 != 0)) goto L_C195884;
    v0_1 = ((((int)stk + 0) + 0x28));
    if ((v0_2 != 1)) goto L_C19582A;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C1957C6;
    if (((int)(*(int *)((v0_0 + 0xC))) > 0)) goto L_C1957C6;
    L_C195A86:;
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_C195AA2;
    v0_0 = *(signed char *)((v0_0 + 0x1));
    v0_10 = (v0_0);
    if ((v0_0 != 76)) goto L_C195A9A;
    *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(float *)((v0_1 + 0x0)));
    L_C195AA2:;
    return (((v0_2 == 0)) ? 1 : 0);
    L_C195A9A:;
    *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(float *)((v0_1 + 0x0)));
    goto L_C195AA2;
    L_C1957C6:;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & R13) == 0)) goto L_C1957DA;
    v0_10 = (((*(signed char *)((v0_0 + 0x0))) + 0x20));
    L_C1957DC:;
    if ((v0_10 != 101)) goto L_C19582A;
    v0_5 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C1957F4;
    if (((int)(*(int *)((v0_0 + 0xC))) > 0)) goto L_C1957F4;
    goto L_C195A86;
    L_C1957F4:;
    if (((*(signed char *)((v0_0 + 0x0))) == 43)) goto L_C195800;
    if (((*(signed char *)((v0_0 + 0x0))) != 45)) goto L_C19580C;
    L_C195800:;
    v0_5 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    L_C19580C:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C19581C;
    if (((int)(*(int *)((v0_0 + 0xC))) > 0)) goto L_C19581C;
    goto L_C195A86;
    L_C19581C:;
    if (!((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & 4) != 0))) goto L_C19582A;
    v0_5 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    goto L_C19580C;
    L_C19582A:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C19583A;
    if (((int)(*(int *)((v0_0 + 0xC))) > 0)) goto L_C19583A;
    goto L_C195A86;
    L_C19583A:;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & R13) == 0)) goto L_C195858;
    v0_10 = (((*(signed char *)((v0_0 + 0x0))) + 0x20));
    L_C19585A:;
    if ((v0_10 == 102)) goto L_C19587C;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & R13) == 0)) goto L_C195872;
    v0_10 = (((*(signed char *)((v0_0 + 0x0))) + 0x20));
    L_C195874:;
    if ((v0_10 == 108)) goto L_C19587C;
    goto L_C195A86;
    L_C19587C:;
    v0_3 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    goto L_C195A86;
    L_C195872:;
    v0_10 = ((*(signed char *)((v0_0 + 0x0))));
    goto L_C195874;
    L_C195858:;
    v0_10 = ((*(signed char *)((v0_0 + 0x0))));
    goto L_C19585A;
    L_C1957DA:;
    v0_10 = ((*(signed char *)((v0_0 + 0x0))));
    goto L_C1957DC;
    L_C195884:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C195894;
    if (((int)(*(int *)((v0_0 + 0xC))) > 0)) goto L_C195894;
    L_C1959C4:;
    *(unsigned char *)(((int)stk + 36)) = 0x2;
    L_C1959CA:;
    if (((*(int *)(((int)stk + 28))) != 0)) goto L_C195A34;
    v0_9 = (0x30);
    if (((int)v0_1 >= (int)v0_8)) goto L_C1959E0;
    L_C1959D6:;
    v0_3 = (int)(v0_1 + 0x1) < (int)v0_8;
    *(unsigned char *)((v0_5 + v0_1)) = v0_9;
    v0_1 = ((v0_1 + 0x1));
    if (v0_3) goto L_C1959D6;
    L_C1959E0:;
    v0_9 = ((((int)stk + 0) + 0x30));
    v0_3 = (v0_7);
    v0_4 = (v0_7);
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C195A08;
    L_C1959EE:;
    v0_6 = (int)(v0_4 + 0x1) < (int)(*(int *)(((int)stk + 0)));
    v0_3 = (((*(signed char *)((v0_9 + 0x0))) + (((v0_3 << 2) + v0_3) << 1)) - 48);
    v0_9 = ((v0_9 + 0x1));
    v0_3 = v0_3;
    v0_4 = ((v0_4 + 0x1));
    if (v0_6) goto L_C1959EE;
    L_C195A08:;
    if (((*(int *)(((int)stk + 12))) != -1)) goto L_C195A10;
    v0_3 = ((-v0_3));
    L_C195A10:;
    v0_4 = *(int *)(((int)stk + 4));
    v0_6 = (int)(v0_3 + (v0_4 - 1)) < (int)0x3E8;
    v0_9 = (0x4B6);
    v0_3 = ((v0_3 + (v0_4 - 1)));
    if (v0_6) goto L_C195A26;
    *(unsigned int *)0xC8B57A4 = v0_9;
    *(unsigned int *)(((int)stk + 28)) = R13;
    L_C195A34:;
    v0_4 = *(int *)(((int)stk + 28));
    v0_10 = (v0_4);
    v0_9 = (0x80);
    if ((v0_4 == 1)) goto L_C195A48;
    if ((v0_10 == -1)) goto L_C195A5C;
    if ((v0_10 == 0)) goto L_C195A6E;
    goto L_C195A86;
    L_C195A6E:;
    *(volatile signed char *)((v0_0 + 0x1));
    w0_0 = FUN_0c1a042c((*(int *)(((int)stk + 16))), v0_5, v0_3, (*(signed char *)(((int)stk + 36))));
    *(float *)(((int)stk + 20)) = w0_0;
    v0_1 = ((((int)stk + 0) + 0x14));
    w0_0 = (w0_0);
    goto L_C195A86;
    L_C195A5C:;
    v0_1 = ((((int)stk + 0) + 0x28));
    if (((*(int *)(((int)stk + 16))) != -1)) goto L_C195A86;
    *(unsigned char *)((v0_1 + 0x7)) = ((*(signed char *)((v0_1 + 0x7))) | v0_9);
    goto L_C195A86;
    L_C195A48:;
    *(volatile signed char *)((v0_0 + 0x1));
    v0_1 = ((((int)stk + 0) + 0x18));
    if (((*(int *)(((int)stk + 16))) != -1)) goto L_C195A86;
    *(unsigned char *)((v0_1 + 0x7)) = ((*(signed char *)((v0_1 + 0x7))) | v0_9);
    goto L_C195A86;
    L_C195A26:;
    if (((int)v0_3 > (int)0xFFFFFC18)) goto L_C195A34;
    *(unsigned int *)0xC8B57A4 = v0_9;
    *(unsigned int *)(((int)stk + 28)) = 0xFFFFFFFF;
    goto L_C195A34;
    L_C195894:;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & R13) == 0)) goto L_C1958A8;
    v0_10 = (((*(signed char *)((v0_0 + 0x0))) + 0x20));
    L_C1958AA:;
    if ((v0_10 != 101)) goto L_C195948;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C1958C2;
    if (((int)(*(int *)((v0_0 + 0xC))) > 0)) goto L_C1958C2;
    goto L_C1959C4;
    L_C1958C2:;
    if (((*(signed char *)((v0_0 + 0x0))) == 43)) goto L_C1958CE;
    if (((*(signed char *)((v0_0 + 0x0))) != 45)) goto L_C1958E6;
    L_C1958CE:;
    v0_9 = (v0_0);
    if (((*(signed char *)((v0_0 + 0x0))) != 45)) goto L_C1958DA;
    *(unsigned int *)(((int)stk + 12)) = 0xFFFFFFFF;
    L_C1958DA:;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_9, v0_3, v0_4, v0_6);
    L_C1958E6:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C1958F2;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1959C4;
    L_C1958F2:;
    if (!(((*(signed char *)((v0_0 + 0x0))) == 48))) goto L_C19592E;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    goto L_C1958E6;
    L_C19592E:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C19593A;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1959C4;
    L_C19593A:;
    if (!((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & 4) != 0))) goto L_C195948;
    v0_9 = (v0_0);
    if (((int)(*(int *)(((int)stk + 0))) >= (int)0x3)) goto L_C195920;
    v0_10 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_10 + 0x1);
    *(unsigned char *)(((((v0_10 + 0x1) - 1) + (((int)stk + 0) + 0x30)) + 0x0)) = (*(signed char *)((v0_0 + 0x0)));
    goto L_C19592A;
    L_C195948:;
    if ((((*(signed char *)((v0_0 + 0x3))) & R13) != 0)) goto L_C195954;
    if (((int)(*(int *)((v0_0 + 0xC))) <= 0)) goto L_C1959C4;
    L_C195954:;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & R13) == 0)) goto L_C195968;
    v0_10 = (((*(signed char *)((v0_0 + 0x0))) + 0x20));
    L_C19596A:;
    if ((v0_10 == 102)) goto L_C195988;
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)(*(signed char *)((v0_0 + 0x0)))))) & R13) == 0)) goto L_C195982;
    v0_10 = (((*(signed char *)((v0_0 + 0x0))) + 0x20));
    L_C195984:;
    if ((v0_10 != 108)) goto L_C1959C4;
    L_C195988:;
    v0_10 = *(signed char *)((v0_0 + 0x0));
    v0_9 = (v0_10);
    if ((((unsigned char)(*(signed char *)((0xC206298 + (unsigned char)v0_10))) & R13) == 0)) goto L_C19599C;
    v0_10 = ((v0_9 + 0x20));
    L_C19599E:;
    v0_9 = (v0_0);
    if ((v0_10 != 108)) goto L_C1959AC;
    *(unsigned char *)(((int)stk + 36)) = 0x3;
    L_C1959B0:;
    v0_4 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_9, v0_3, v0_4, v0_6);
    goto L_C1959CA;
    L_C1959AC:;
    *(unsigned char *)(((int)stk + 36)) = R13;
    goto L_C1959B0;
    L_C19599C:;
    v0_10 = (v0_9);
    goto L_C19599E;
    L_C195982:;
    v0_10 = ((*(signed char *)((v0_0 + 0x0))));
    goto L_C195984;
    L_C195968:;
    v0_10 = ((*(signed char *)((v0_0 + 0x0))));
    goto L_C19596A;
    L_C19592A:;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_9, v0_3, v0_4, v0_6);
    goto L_C19592E;
    L_C195920:;
    *(unsigned int *)0xC8B57A4 = 0x4B4;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 12)));
    goto L_C19592A;
    L_C1958A8:;
    v0_10 = ((*(signed char *)((v0_0 + 0x0))));
    goto L_C1958AA;
    L_C19578A:;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    goto L_C19578E;
    L_C195784:;
    *(unsigned int *)0xC8B57A4 = 0x4B2;
    goto L_C19578A;
    L_C1956E6:;
    v0_2 = (R13);
    if (((int)v0_1 >= (int)v0_8)) goto L_C195700;
    *(unsigned char *)((v0_5 + v0_1)) = (*(signed char *)((v0_0 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    L_C195706:;
    v0_9 = ((int (*)(int, int, int, int))(FUN_0c195b9c))(v0_0, v0_3, v0_4, v0_6);
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    goto L_C195710;
    L_C195700:;
    *(unsigned int *)0xC8B57A4 = 0x4B2;
    goto L_C195706;
}

int FUN_0c177f40(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t21;
    register float u28;
    register int t30;
    register float u33;
    register float u37;
    register float u41;
    register float u46;
    register int t68;
    register int t69;
    register int t70;
    register int t71;
    register int t72;
    register float u73;
    register int t76;
    register int t78;
    register int t80;
    register int t82;
    register int t86;
    register int t87;
    register int t88;
    int t89;
    register int t90;
    register int t91;
    register int t92;
    register float u93;
    register float u94;
    register float u95;
    register int t145;
    register int t58;
    register float u61;
    register float u62;
    register float u63;
    register float u55;
    register float u50;

    t0 = (((struct o4_int *)0xC83CF8C)->v);
    *(unsigned int *)(((int)stk + 8)) = (((a5 + a6) + a7) + t0);
    t21 = (((((a4 + a5) + a6) + a7) + t0) + ((((a4 + a5) + a6) + a7) + t0));
    if (((((struct o0_int *)0xC83CF8C)->v)) == 3) {
    } else {
        if (((((struct o14_int *)0xC83CDBC)->v)) == 0) {
            t21 = (*(int *)(((int)stk + 8)));
        } else {
            t21 = (((a4 + a5) + a7) + t0);
            if (((((struct o14_int *)0xC83CDBC)->v)) == 2) {
            } else {
                if (((((struct o14_int *)0xC83CDBC)->v)) == 4) {
                    t21 = (((a4 + a5) + a6) + a7);
                }
            }
        }
    }
    (((struct o0_uint *)0xC83CDBC)->v) = (t21 << 2);
    *(float *)(((int)stk + 0)) = ((float)a4 * 100.0f);
    *(float *)(((int)stk + 4)) = ((float)t0 * 100.0f);
    if (((((struct o0_int *)0xC83CF8C)->v)) == 3) {
        u28 = *(float *)(((int)stk + 0));
        t30 = (int)((unsigned int)((int)((unsigned int)t21 + (unsigned int)0x0)) + ((((int)0x0 > (int)t21)) ? 1u : 0u));
        (((struct o18_float *)0xC83CDBC)->v) = (u28 / (float)(t30 >> 1));
        (((struct o1C_float *)0xC83CDBC)->v) = (((float)a5 * 100.0f) / (float)(t30 >> 1));
        (((struct o20_float *)0xC83CDBC)->v) = (((float)a6 * 100.0f) / (float)(t30 >> 1));
        (((struct o24_float *)0xC83CDBC)->v) = (((float)a7 * 100.0f) / (float)(t30 >> 1));
        u33 = *(float *)(((int)stk + 4));
        (((struct o28_float *)0xC83CDBC)->v) = (u33 / (float)(t30 >> 1));
        t58 = (t30 >> 1);
        u61 = (u28 / (float)(t30 >> 1));
        u62 = (u33 / (float)(t30 >> 1));
        u63 = (float)(t30 >> 1);
    } else {
        if (((((struct o14_int *)0xC83CDBC)->v)) == 0) {
            (((struct o18_float *)0xC83CDBC)->v) = 0.0f;
            (((struct o1C_float *)0xC83CDBC)->v) = (((float)a5 * 100.0f) / (float)t21);
            (((struct o20_float *)0xC83CDBC)->v) = (((float)a6 * 100.0f) / (float)t21);
            (((struct o24_float *)0xC83CDBC)->v) = (((float)a7 * 100.0f) / (float)t21);
            u37 = *(float *)(((int)stk + 4));
            (((struct o28_float *)0xC83CDBC)->v) = (u37 / (float)t21);
            u55 = (u37 / (float)t21);
        } else {
            if (((((struct o14_int *)0xC83CDBC)->v)) == 2) {
                (((struct o18_float *)0xC83CDBC)->v) = ((*(float *)(((int)stk + 0))) / (float)t21);
                (((struct o1C_float *)0xC83CDBC)->v) = (((float)a5 * 100.0f) / (float)t21);
                (((struct o20_float *)0xC83CDBC)->v) = 0.0f;
                (((struct o24_float *)0xC83CDBC)->v) = (((float)a7 * 100.0f) / (float)t21);
                u41 = *(float *)(((int)stk + 4));
                (((struct o28_float *)0xC83CDBC)->v) = (u41 / (float)t21);
                u50 = (u41 / (float)t21);
            } else {
                u46 = ((float)a4 * 100.0f);
                if (((((struct o14_int *)0xC83CDBC)->v)) == 4) {
                    (((struct o18_float *)0xC83CDBC)->v) = ((*(float *)(((int)stk + 0))) / (float)t21);
                    (((struct o1C_float *)0xC83CDBC)->v) = (((float)a5 * 100.0f) / (float)t21);
                    (((struct o20_float *)0xC83CDBC)->v) = (((float)a6 * 100.0f) / (float)t21);
                    (((struct o24_float *)0xC83CDBC)->v) = (((float)a7 * 100.0f) / (float)t21);
                    (((struct o28_float *)0xC83CDBC)->v) = 0.0f;
                    u46 = (((float)a7 * 100.0f) / (float)t21);
                }
                u50 = u46;
            }
            u55 = u50;
        }
        t58 = t21;
        u61 = (float)t21;
        u62 = u55;
        u63 = 100.0f;
    }
    if (((((struct o0_int *)0xC83CFE0)->v)) != 0) {
        t68 = (((struct o0_int *)0xC83CF8C)->v);
        if (t68 == 3) {
            t69 = t68;
            t70 = a5;
            t71 = 0x1;
            t72 = a7;
            u73 = u62;
            for (;;) {
                if ((unsigned int)t71 >= (unsigned int)((((struct o4_int *)0xC83CDBC)->v))) {
                    break;
                }
                t72 = 0xC83CD8C;
                t69 = 0x10;
                t72 = (t72 + 0x38);
                u73 = (*(float *)((t72 + t69)));
                t70 = (t71 * 0x38);
                t76 = t72;
                t72 = 0xC83CD8C;
                t72 = (t72 + 0x38);
                *(float *)(((t76 + t70) + t69)) = u73;
                t69 = 0x14;
                u73 = (*(float *)((t72 + t69)));
                t78 = (t72 + t70);
                t72 = 0xC83CD8C;
                *(float *)((t78 + t69)) = u73;
                t69 = 0x18;
                t72 = (t72 + 0x38);
                u73 = (*(float *)((t72 + t69)));
                t80 = (t72 + t70);
                t72 = 0xC83CD8C;
                *(float *)((t80 + t69)) = u73;
                t69 = 0x1C;
                t72 = (t72 + 0x38);
                u73 = (*(float *)((t72 + t69)));
                t82 = t72;
                t72 = 0xC83CD8C;
                t72 = (t72 + 0x38);
                *(float *)(((t82 + t70) + t69)) = u73;
                t69 = 0x20;
                u73 = (*(float *)((t72 + t69)));
                t70 = (t70 + t72);
                t71 = (t71 + 0x1);
                *(float *)((t70 + t69)) = u73;
            }
        } else {
            *(unsigned int *)(((int)stk + 12)) = (((a4 + a5) + a7) + t0);
            *(unsigned int *)(((int)stk + 16)) = (((a4 + a5) + a6) + a7);
            t86 = t68;
            t87 = (((a4 + a5) + a6) + a7);
            t88 = 0xC83CFE0;
            t89 = 0x0;
            t90 = 0x0;
            t91 = t58;
            t92 = 0xC83CD8C;
            u93 = u61;
            u94 = u62;
            u95 = u63;
            for (;;) {
                if ((unsigned int)t90 < (unsigned int)((((struct o4_int *)0xC83CDBC)->v))) {
                    t92 = (t90 * 0x38);
                    t88 = (*(int *)(((0xC83CDC4 + t92) + 0xC)));
                    if (t88 == 0) {
                        t91 = (*(int *)(((int)stk + 8)));
                        u93 = ((float)a5 * 100.0f);
                        t86 = 0x10;
                        *(float *)(((0xC83CDC4 + t92) + t86)) = 0.0f;
                        u94 = (float)t91;
                        t86 = 0x14;
                        u93 = (u93 / u94);
                        u95 = u94;
                        u94 = ((float)a6 * 100.0f);
                        u94 = (u94 / u95);
                        *(float *)(((0xC83CDC4 + t92) + t86)) = u93;
                        t86 = 0x18;
                        *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                        u94 = ((float)a7 * 100.0f);
                        u94 = (u94 / u95);
                        t86 = 0x1C;
                        *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                        t86 = 0x4;
                        u94 = (*(float *)((((int)stk + 0) + t86)));
                        t86 = 0x20;
                        u94 = (u94 / u95);
                        *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                        t89 = (t89 | 0x1);
                    } else {
                        t86 = 0xC83CD8C;
                        t86 = (t86 + 0x38);
                        t86 = (t86 + t92);
                        t86 = (*(int *)((t86 + 0xC)));
                        if (t86 == 2) {
                            t91 = (*(int *)(((int)stk + 12)));
                            u93 = (*(float *)(((int)stk + 0)));
                            t88 = 0x10;
                            t86 = t88;
                            t89 = (t89 | t88);
                            u94 = (float)t91;
                            u93 = (u93 / u94);
                            u95 = u94;
                            u94 = ((float)a5 * 100.0f);
                            u94 = (u94 / u95);
                            *(float *)(((0xC83CDC4 + t92) + t86)) = u93;
                            t86 = 0x14;
                            *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                            u94 = ((float)a7 * 100.0f);
                            u94 = (u94 / u95);
                            t86 = 0x18;
                            *(float *)(((0xC83CDC4 + t92) + t86)) = 0.0f;
                            t86 = 0x1C;
                            *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                            t86 = 0x4;
                            u94 = (*(float *)((((int)stk + 0) + t86)));
                            u94 = (u94 / u95);
                            t87 = (0xC83CDC4 + t92);
                            t87 = (t87 + 0x10);
                            t88 = (t88 + t87);
                            *(float *)((t88 + 0x0)) = u94;
                        } else {
                            if (t86 == 4) {
                                t91 = (*(int *)(((int)stk + 16)));
                                u93 = (*(float *)(((int)stk + 0)));
                                t86 = 0x10;
                                t88 = 0x100;
                                u94 = (float)t91;
                                t89 = (t89 | t88);
                                u93 = (u93 / u94);
                                u95 = u94;
                                u94 = ((float)a5 * 100.0f);
                                u94 = (u94 / u95);
                                *(float *)(((0xC83CDC4 + t92) + t86)) = u93;
                                t86 = 0x14;
                                *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                                u94 = ((float)a6 * 100.0f);
                                u94 = (u94 / u95);
                                t86 = 0x18;
                                *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                                u94 = ((float)a7 * 100.0f);
                                u94 = (u94 / u95);
                                t86 = 0x1C;
                                *(float *)(((0xC83CDC4 + t92) + t86)) = u94;
                                t86 = 0x20;
                                *(float *)(((0xC83CDC4 + t92) + t86)) = 0.0f;
                            }
                        }
                    }
                    t90 = (t90 + 0x1);
                    continue;
                }
                break;
            }
            if ((t89 != 1) && ((t89 != 16) && (t89 != 0x100))) {
                (((struct o0_uint *)0xC83CDBC)->v) = ((((a6 + (a4 + a5)) + a7) + t0) << 2);
            } else {
                (((struct o0_uint *)0xC83CDBC)->v) = (t91 << 2);
            }
        }
    }
    t145 = kmSetSystemConfiguration(0xC83CD8C);
    if (t145 != 0) {
        _builtin_trapa(65);
    }
    *(unsigned int *)(((*(int *)0xC8A2E94) + 0x0)) = 0x800000;
    if (((((struct o34_int *)0xC83CFE0)->v)) == 0) {
        nlLoadDummyTexture();
        (((struct o34_uint *)0xC83CFE0)->v) = 0x1;
    }
    return t145;
}

int kmyGenerateRegionArray(int a4, int a5, int a6)
{
    int stk[234];
    register int t32;
    register int t33;
    register int t3;
    register int t6;
    register int t8;
    register int t9;
    register int t10;
    register int t15;
    register int t57;
    register int t64;
    int t65;
    int t66;
    register int t69;
    register int t76;
    register int t77;
    register int t78;
    register int t152;
    register int t153;
    register int t179;
    register int t183;
    register int t185;
    register int t186;
    register int t49;
    register int t50;
    register int t51;

    *(unsigned int *)(((int)stk + 0)) = (a4 + 0x18);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)((a4 + 0x4))) * (*(int *)((a4 + 0x8))));
    t32 = a5;
    t33 = a6;
    if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0xC)))) {
        t3 = 0x0;
        for (;;) {
            t6 = *(int *)(((((t3 << 2) << 1) + ((*(int *)(((int)stk + 0))) + 0x30)) + 0x0));
            *(unsigned int *)(((int)stk + 8)) = t6;
            *(unsigned int *)((((t3 * 0x54) + (0x108 + ((int)stk + 0))) + 0x0)) = (t6 & 0x7F000000);
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 16)) = ((t3 << 2) << 1);
            t8 = (((t3 * 0x54) + (0x108 + ((int)stk + 0))) + 0x18);
            t9 = 0x0;
            for (;;) {
                t10 = *(int *)(((int)stk + 8));
                *(unsigned int *)((t8 + 0x4)) = ((*(int *)(((((*(int *)(((int)stk + 0))) + 0x30) + (*(int *)(((int)stk + 16)))) + 0x4))) + (*(int *)(((int)stk + 4))));
                t15 = *(int *)((((0x3 & ((unsigned int)t10 << (int)(-t9))) << 2) + 0xC300074));
                *(unsigned int *)((t8 + 0x8)) = (t15 << 2);
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + ((t15 << 2) * (*(int *)(((int)stk + 12)))));
                if ((0x3 & ((unsigned int)t10 << (int)(-t9))) == 0) {
                    *(unsigned int *)((t8 + 0x0)) = 0x80000000;
                } else {
                    *(unsigned int *)((t8 + 0x0)) = 0x0;
                }
                t8 = (t8 + 0xC);
                t9 = (t9 + 0x4);
                if ((unsigned int)t8 >= (unsigned int)(((t3 * 0x54) + (0x108 + ((int)stk + 0))) + 0x54)) {
                    break;
                }
            }
            t3 = (t3 + 0x1);
            if ((unsigned int)t3 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
                break;
            }
        }
        t32 = t8;
        t33 = t9;
        t51 = t3;
    } else {
        t51 = 0x0;
    }
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0xC)));
    if (((*(int *)0xC8D0CA0) & 128) != 0) {
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (kmiCreateDummyRegionforAvoidCacheBug((*(int *)(((*(int *)(((int)stk + 0))) + 0xC))))));
    } else {
        t49 = t32;
        t50 = t33;
    }
    *(unsigned int *)(((int)stk + 52)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 56)) = (*(int *)((a4 + 0x8)));
    *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 12))) - 1);
    if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 12)))) {
        t57 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 40)) = t57;
            *(unsigned int *)(((int)stk + 60)) = 0x0;
            *(unsigned int *)(((int)stk + 64)) = 0x0;
            if (t57 == (*(int *)(((int)stk + 36)))) {
                (((struct o40_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 64))) | 0x1);
            }
            t64 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x14)))))((((int)stk + 0) + 0x28), t49, t50, t51, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t65 = *(int *)(((int)stk + 44));
            t66 = *(int *)(((int)stk + 48));
            *(unsigned int *)(((int)stk + 16)) = (((0x3F & t66) << 8) | ((0x3F & t65) << 2));
            *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 52))) * t66) + t65);
            if ((unsigned int)0x0 >= (unsigned int)(*(int *)((a4 + 0xC)))) {
            } else {
                t69 = 0x0;
                for (;;) {
                    t76 = *(int *)(((int)stk + 16));
                    *(unsigned int *)(((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x0)) = ((*(int *)((((t69 * 0x54) + (0x108 + ((int)stk + 0))) + 0x0))) | t76);
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    t77 = (((t69 * 0x54) + (0x108 + ((int)stk + 0))) + 0x18);
                    t78 = ((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4);
                    for (;;) {
                        if ((*(int *)(((int)stk + 60))) != 1) {
                            t76 = (*(int *)((t77 + 0x0)));
                            *(unsigned int *)(((int)stk + 0)) = t76;
                        } else {
                            *(unsigned int *)(((int)stk + 0)) = 0x80000000;
                        }
                        t76 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t78 + 0x0)) = (((t76 * (*(int *)((t77 + 0x8)))) + (*(int *)((t77 + 0x4)))) | (*(int *)(((int)stk + 0))));
                        t76 = (*(int *)(((int)stk + 4)));
                        t78 = (t78 + 0x4);
                        t76 = (t76 + 0x1);
                        *(unsigned int *)(((int)stk + 4)) = t76;
                        t77 = (t77 + 0xC);
                        if ((int)t76 >= (int)0x5) {
                            break;
                        }
                    }
                    if (((*(int *)((((t69 << 2) << 1) + (a4 + 0x48)))) & 64) != 0) {
                        *(unsigned int *)(((int)stk + 32)) = (((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48));
                        *(unsigned int *)((((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4) + 0x4)) = (*(int *)((((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4) + 0xC)));
                    }
                    if (((*(int *)((((a4 + 0x48) + ((t69 << 2) << 1)) + 0x0))) & 0x4000) != 0) {
                        *(unsigned int *)(((int)stk + 28)) = (((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48));
                        *(unsigned int *)((((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4) + 0xC)) = (*(int *)((((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4) + 0x4)));
                    }
                    if (((*(int *)((((a4 + 0x48) + ((t69 << 2) << 1)) + 0x0))) & 0x40000) != 0) {
                        *(unsigned int *)(((int)stk + 24)) = (((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48));
                        *(unsigned int *)((((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4) + 0x10)) = (*(int *)((((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x4) + 0x8)));
                    }
                    if ((int)t69 > 0) {
                        if (((*(int *)((((t69 << 2) << 1) + (a4 + 0x48)))) & 128) != 0) {
                            *(unsigned int *)(((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x8)) = (*(int *)((((((((t69 - 1) << 1) + (t69 - 1)) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x8)));
                        }
                        if (((*(int *)(((((t69 << 2) << 1) + (a4 + 0x48)) + 0x0))) & 0x8000) != 0) {
                            *(unsigned int *)(((((((t69 << 1) + t69) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x10)) = (*(int *)((((((((t69 - 1) << 1) + (t69 - 1)) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x10)));
                        }
                    }
                    t69 = (t69 + 0x1);
                    if ((unsigned int)t69 < (unsigned int)(*(int *)((a4 + 0xC)))) continue;
                    break;
                }
            }
            if ((((((struct o40_int *)(((int)stk + 0)))->v)) & 1) == 0) {
                t152 = *(int *)((a4 + 0xC));
                *(unsigned int *)(((int)stk + 0)) = t152;
                t153 = *(int *)(((int)stk + 0));
                kmyCopyToFrameBuffer(((((((t57 * t153) << 1) + (t57 * t153)) << 2) << 1) + (*(int *)(((int)stk + 20)))), (((int)stk + 0) + 0x48), ((((t152 << 1) + t152) << 2) << 1));
                t57 = (t57 + 0x1);
                if ((unsigned int)t57 < (unsigned int)(*(int *)(((int)stk + 12)))) continue;
                break;
            }
            break;
        }
    }
    t179 = *(int *)((a4 + 0xC));
    *(unsigned int *)((((((((t179 - 1) << 1) + (t179 - 1)) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x0)) = ((*(int *)((((((((t179 - 1) << 1) + (t179 - 1)) << 2) << 1) + (((int)stk + 0) + 0x48)) + 0x0))) | 0x80000000);
    t183 = *(int *)((a4 + 0xC));
    *(unsigned int *)(((int)stk + 0)) = t183;
    t185 = *(int *)(((int)stk + 40));
    t186 = *(int *)(((int)stk + 0));
    return (kmyCopyToFrameBuffer(((((((t185 * t186) << 1) + (t185 * t186)) << 2) << 1) + (*(int *)(((int)stk + 20)))), (((int)stk + 0) + 0x48), ((((t183 << 1) + t183) << 2) << 1)));
}

int FUN_0c1a26d8(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[15];
    register int t10;
    register int t33;

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
    register float w0_0;
    register float w0_1;
    v0_7 = a4;
    v0_8 = a5;
    v0_0 = a6;
    v0_2 = a7;
    w0_0 = f4;
    w0_1 = f5;
    (((struct o34_float *)(((int)stk + 0)))->v) = w0_1;
    (((struct o38_float *)(((int)stk + 0)))->v) = w0_0;
    *(unsigned int *)(((int)stk + 8)) = 0x8;
    *(unsigned short *)(((int)stk + 16)) = 0x0;
    v0_0 = (v0_0);
    v0_1 = (v0_8);
    v0_5 = ((((int)stk + 0) + 0x34));
    v0_6 = (v0_2);
    v0_3 = (0x0);
    v0_2 = (((((int)stk + 0) + 0x34) + 0x7));
    v0_4 = (v0_7);
    if ((((unsigned char)(*(signed char *)((((((int)stk + 0) + 0x34) + 0x7) + 0x0))) & 127) != 0)) goto L_C1A274C;
    v0_7 = 1;
    for (t10 = 0; t10 < (int)0x7; t10++) { if (*(unsigned char *)(v0_5 + t10) != 0) { v0_7 = 0; break; } }
    if ((v0_7 == 0)) goto L_C1A274C;
    v0_7 = (v0_1);
    v0_8 = ((v0_1 + 0x8));
    L_C1A2730:;
    if (((unsigned int)v0_7 < (unsigned int)v0_8)) goto L_C1A272C;
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    if ((((unsigned char)(*(signed char *)((v0_2 + 0x0))) & 128) == 0)) goto L_C1A2744;
    *(unsigned char *)((v0_6 + 0x0)) = 0xFFFFFFFF;
    L_C1A29B4:;
    v0_5 = (0x0);
    L_C1A29B6:;
    return v0_5;
    L_C1A2744:;
    *(unsigned char *)((v0_6 + 0x0)) = 0x1;
    goto L_C1A29B4;
    L_C1A272C:;
    *(unsigned char *)((v0_7 + 0x0)) = v0_3;
    v0_7 = ((v0_7 + 0x1));
    goto L_C1A2730;
    L_C1A274C:;
    w0_0 = *(float *)(((int)stk + 52));
    w0_1 = *(float *)(((int)stk + 56));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c1a36ac(v0_6, ((int)stk + 0), (((int)stk + 0) + 0x2C), w0_1, w0_0);
    v0_2 = ((((int)stk + 0) + 0x2C));
    if (((*(signed char *)((v0_6 + 0x0))) != -1)) goto L_C1A277A;
    *(unsigned char *)(((((int)stk + 0) + 0x34) + 0x7)) = ((*(signed char *)(((((int)stk + 0) + 0x34) + 0x7))) & 0x7F);
    L_C1A277A:;
    if (((*(short *)(((int)stk + 0))) != 0x7FF)) goto L_C1A27C8;
    if (((unsigned char)(*(signed char *)((v0_5 + 0x6))) != 0xF0)) goto L_C1A27B2;
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    v0_7 = 1;
    for (t33 = 0; t33 < (int)0x6; t33++) { if (*(unsigned char *)(v0_5 + t33) != 0) { v0_7 = 0; break; } }
    if ((v0_7 == 0)) goto L_C1A27B2;
    v0_6 = *(signed char *)((v0_6 + 0x0));
    v0_5 = (v0_6);
    if ((v0_6 != 1)) goto L_C1A27AA;
    v0_5 = (0x1);
    goto L_C1A29B6;
    L_C1A27AA:;
    if ((v0_5 != -1)) goto L_C1A27C8;
    v0_5 = (0xFFFFFFFF);
    goto L_C1A29B6;
    L_C1A27C8:;
    v0_5 = *(short *)(((int)stk + 0));
    *(unsigned short *)(((int)stk + 0)) = (v0_5 - 0x3FF);
    if (((int)(short)(v0_5 - 0x3FF) < 0)) goto L_C1A27FC;
    w0_0 = *(float *)(((int)stk + 52));
    w0_1 = *(float *)(((int)stk + 56));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    v0_7 = ((FUN_0c1a2e68(w0_1, w0_0)));
    L_C1A2816:;
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    *(unsigned char *)((v0_2 + 0x7)) = v0_3;
    *(unsigned int *)((v0_0 + 0x0)) = ((v0_7 - v0_4) + 0x1);
    _pow5(v0_4, (((int)stk + 0) + 0x24));
    v0_9 = (int)((int)v0_4 / (int)(*(int *)(((int)stk + 8))));
    v0_5 = (v0_9);
    v0_6 = ((((int)stk + 0) + 0x24));
    v0_7 = (v0_3);
    v0_8 = ((0x8 - v0_9));
    if (((int)(0x8 - v0_9) <= 0)) goto L_C1A285A;
    L_C1A2848:;
    v0_9 = (int)(v0_7 + 0x1) < (int)v0_8;
    *(unsigned char *)((v0_6 + v0_7)) = (*(signed char *)((((v0_7 + v0_5) + v0_6) + 0x0)));
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C1A2848;
    L_C1A285A:;
    v0_9 = (unsigned int)(v0_7 + v0_6) >= (unsigned int)(v0_6 + 0x8);
    v0_7 = ((v0_7 + v0_6));
    v0_8 = ((v0_6 + 0x8));
    if (v0_9) goto L_C1A286C;
    L_C1A2864:;
    *(unsigned char *)((v0_7 + 0x0)) = v0_3;
    v0_9 = (unsigned int)(v0_7 + 0x1) < (unsigned int)v0_8;
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C1A2864;
    L_C1A286C:;
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c1a3198(v0_6, 0x8, (v0_4 - ((v0_5 << 2) << 1)));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    *(unsigned int *)(((int)stk + 12)) = (v0_4 - 1);
    _pow5((v0_4 - 1), (((int)stk + 0) + 0x1C));
    v0_9 = (int)((int)(*(int *)(((int)stk + 12))) / (int)(*(int *)(((int)stk + 8))));
    *(unsigned int *)(((int)stk + 4)) = v0_9;
    v0_5 = ((((int)stk + 0) + 0x1C));
    v0_7 = (v0_3);
    v0_8 = ((0x8 - v0_9));
    if (((int)(0x8 - v0_9) <= 0)) goto L_C1A28C2;
    L_C1A28B0:;
    v0_9 = (int)(v0_7 + 0x1) < (int)v0_8;
    *(unsigned char *)((v0_5 + v0_7)) = (*(signed char *)(((((*(int *)(((int)stk + 4))) + v0_7) + v0_5) + 0x0)));
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C1A28B0;
    L_C1A28C2:;
    v0_9 = (unsigned int)(v0_7 + v0_5) >= (unsigned int)(v0_5 + 0x8);
    v0_7 = ((v0_7 + v0_5));
    v0_8 = ((v0_5 + 0x8));
    if (v0_9) goto L_C1A28D4;
    L_C1A28CC:;
    *(unsigned char *)((v0_7 + 0x0)) = v0_3;
    v0_9 = (unsigned int)(v0_7 + 0x1) < (unsigned int)v0_8;
    v0_7 = ((v0_7 + 0x1));
    if (v0_9) goto L_C1A28CC;
    L_C1A28D4:;
    v0_3 = *(int *)(((int)stk + 4));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c1a3198(v0_5, 0x8, ((v0_4 - ((v0_3 << 2) << 1)) - 1));
    L_C1A28F0:;
    v0_3 = *(int *)((v0_0 + 0x0));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    calcnpw((*(short *)(((int)stk + 0))), v0_2, v0_3, v0_1);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c187a88((((int)stk + 0) + 0x14), v0_1, 0x8);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    v0_7 = (int)(FUN_0c1965cc((((int)stk + 0) + 0x14), v0_6, 0x8)) <= 0;
    v0_3 = ((((int)stk + 0) + 0x14));
    v0_4 = (0xC1965CC);
    if (v0_7) goto L_C1A293C;
    *(unsigned short *)(((int)stk + 16)) = 0x1;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    goto L_C1A28F0;
    L_C1A293C:;
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c187a88(v0_3, v0_1, 0x8);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    v0_4 = (FUN_0c1965cc(v0_3, v0_6, 0x8)) != 0;
    if (v0_4) goto L_C1A2980;
    v0_3 = *(int *)((v0_0 + 0x0));
    v0_4 = _builtin_get_fpscr();
    *(unsigned int *)((v0_0 + 0x0)) = (v0_3 + 0x1);
    _builtin_set_fpscr((v0_4 & 0xFFE7FFFF));
    calcnpw((*(short *)(((int)stk + 0))), v0_2, (v0_3 + 0x1), v0_1);
    goto L_C1A29B4;
    L_C1A2980:;
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    FUN_0c187a88(v0_3, v0_1, 0x8);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    v0_3 = (int)(FUN_0c1965cc(v0_3, v0_5, 0x8)) >= 0;
    if (v0_3) goto L_C1A29B4;
    if (((*(short *)(((int)stk + 16))) != 0)) goto L_C1A29B4;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) - 1);
    goto L_C1A28F0;
    L_C1A27FC:;
    w0_0 = *(float *)(((int)stk + 52));
    w0_1 = *(float *)(((int)stk + 56));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    v0_7 = (((FUN_0c1a2e68(w0_1, w0_0)) - 1));
    goto L_C1A2816;
    L_C1A27B2:;
    v0_5 = (0x2);
    goto L_C1A29B6;
}

int FUN_0c17dcc0(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];

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
    v0_6 = a4;
    v0_4 = a5;
    v0_5 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    v0_0 = (v0_0);
    v0_1 = (0x0);
    if ((v0_5 != 0)) goto L_C17DD10;
    if (((int)(*(int *)((v0_6 + 0x0))) < 0)) goto L_C17DCF0;
    if (((*(int *)((v0_6 + 0x18))) != 0)) goto L_C17DD00;
    L_C17DCF0:;
    v0_0 = (0x0);
    L_C17DF5E:;
    return v0_0;
    L_C17DD00:;
    v0_2 = ((v0_6 + 0x18));
    L_C17DD12:;
    v0_6 = *(int *)((v0_2 + 0x20));
    v0_3 = v0_2;
    v0_4 = (v0_6);
    v0_2 = ((v0_2 + 0x50));
    v0_5 = (v0_6);
    v0_3 = v0_3;
    if (((int)v0_6 < 0)) goto L_C17DDB2;
    if ((a8 != 1)) goto L_C17DD30;
    v0_5 = ((*(int *)(((((v0_5 << 2) << 2) + (*(int *)(((int)stk + 12)))) + 0xC))));
    L_C17DD30:;
    v0_7 = *(int *)0xC8A6C9C;
    *(unsigned int *)(((int)stk + 4)) = (((v0_5 + v0_7) << 2) << 1);
    v0_6 = (0xC83CD40);
    if (((*(int *)((((((v0_5 + v0_7) << 2) << 1) + (*(int *)0xC83CD40)) + 0x0))) != 0)) goto L_C17DD5E;
    v0_5 = *(int *)(((int)stk + 4));
    v0_7 = *(int *)((v0_6 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + (v0_5 + v0_7));
    *(unsigned int *)(((0x4 + (v0_5 + v0_7)) + 0x0)) = (nl_texture_slot_alloc());
    L_C17DD5E:;
    v0_5 = *(int *)(((int)stk + 4));
    v0_7 = *(int *)((v0_6 + 0x0));
    *(unsigned int *)(((v0_5 + v0_7) + 0x0)) = ((*(int *)(((v0_5 + v0_7) + 0x0))) + 0x1);
    v0_7 = *(int *)((((*(int *)(((int)stk + 4))) + (*(int *)((v0_6 + 0x0)))) + 0x4));
    v0_8 = *(int *)0xC8A64D8;
    v0_6 = (((v0_7 * 0x3C) + v0_8));
    v0_5 = (v0_7);
    if (((*(int *)((((v0_7 * 0x3C) + v0_8) + 0x2C))) != 0)) goto L_C17DDAC;
    v0_7 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (((v0_4 << 2) << 2) + v0_7);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | (nlLoadTextureMem((((v0_4 << 2) << 2) + v0_7), v0_5, (*(int *)(((((v0_4 << 2) << 2) + v0_7) + 0x8))))));
    nl_texture_slot_finish(v0_5);
    *(unsigned int *)((v0_6 + 0x38)) = v0_5;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    L_C17DDAC:;
    *(unsigned int *)((v0_6 + 0x2C)) = ((*(int *)((v0_6 + 0x2C))) + 0x1);
    L_C17DDB2:;
    if (((int)v0_4 >= 0)) goto L_C17DDC4;
    *(unsigned int *)((v0_3 + 0x0)) = ((*(int *)((v0_3 + 0x0))) | 0x1);
    *(unsigned int *)((v0_3 + 0x4)) = ((*(int *)((v0_3 + 0x4))) | 0x400000);
    L_C17DDC4:;
    *(unsigned int *)((v0_3 + 0x0)) = (((*(int *)((v0_3 + 0x0))) & 0xFFFCFFFF) | ((((((struct o8_int *)0xC2A6078)->v)) << 16) | 0x8C0000));
    if (((int)v0_5 < 0)) goto L_C17DDF0;
    nl_mesh_set_texture(v0_3, v0_5);
    L_C17DDF6:;
    v0_6 = (0x7);
    if ((((((struct o0_int *)0xC2A6078)->v)) == 0)) goto L_C17DE04;
    v0_4 = *(int *)((v0_3 + 0xC));
    v0_5 = (v0_6 & ((unsigned int)v0_4 >> 27)) == 5;
    v0_6 = ((v0_6 & ((unsigned int)v0_4 >> 27)));
    if (v0_5) goto L_C17DF24;
    if ((v0_6 != 6)) goto L_C17DF34;
    L_C17DF24:;
    *(unsigned int *)((v0_3 + 0xC)) = (((*(int *)((v0_3 + 0xC))) & 0xF81FFFFF) | ((*(int *)((v0_3 + 0x3C))) << 21));
    L_C17DF34:;
    FUN_0c188250();
    v0_4 = (((struct o4C_int *)(v0_3))->v);
    v0_3 = *(int *)(((v0_2 + v0_4) + 0x0));
    v0_2 = ((v0_2 + v0_4));
    v0_6 = (v0_3);
    if ((v0_3 != 0)) goto L_C17DF50;
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    L_C17DF5C:;
    v0_0 = ((*(int *)(((int)stk + 16))));
    goto L_C17DF5E;
    L_C17DF50:;
    if (((*(int *)(((int)stk + 8))) != 0)) goto L_C17DF5A;
    goto L_C17DD12;
    L_C17DF5A:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_2;
    goto L_C17DF5C;
    L_C17DE04:;
    v0_5 = *(int *)0xC868B7C;
    v0_6 = ((v0_6 & ((unsigned int)(*(int *)((v0_3 + 0xC))) >> 27)));
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C17DE18;
    goto L_C17DF34;
    L_C17DE18:;
    if ((v0_6 == 5)) goto L_C17DE28;
    if ((v0_6 == 6)) goto L_C17DE28;
    goto L_C17DF34;
    L_C17DE28:;
    v0_7 = *(int *)((v0_3 + 0x3C));
    v0_6 = (v0_7);
    v0_5 = (0xC8B85C0);
    if (((int)v0_7 < (int)(*(short *)0xC8B85C4))) goto L_C17DE36;
    goto L_C17DF34;
    L_C17DE36:;
    v0_7 = *(int *)((v0_5 + 0x18));
    v0_4 = (((((v0_6 << 1) + v0_6) << 2) + v0_4));
    v0_5 = ((v0_7 + ((v0_6 << 2) << 1)));
    if (((*(short *)(((v0_7 + ((v0_6 << 2) << 1)) + 0x4))) == 0)) goto L_C17DE60;
    *(unsigned short *)((v0_5 + 0x4)) = ((*(short *)((v0_5 + 0x4))) + 0x1);
    v0_6 = ((*(short *)((v0_5 + 0x0))));
    L_C17DEB2:;
    *(unsigned int *)((v0_3 + 0xC)) = (((*(int *)((v0_3 + 0xC))) & 0xF81FFFFF) | (v0_6 << 21));
    goto L_C17DF34;
    L_C17DE60:;
    *(unsigned char *)((v0_5 + 0x2)) = (*(signed char *)((v0_4 + 0x2)));
    *(unsigned char *)((v0_5 + 0x3)) = ((int)((*(int *)((v0_4 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((v0_5 + 0x4)) = 0x1;
    *(unsigned short *)((v0_5 + 0x6)) = v0_6;
    v0_6 = *(int *)((v0_4 + 0x8));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_7 = nlSearchPalette((*(short *)((v0_4 + 0x2))), v0_6);
    v0_6 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C17DEB0;
    *(unsigned short *)((v0_5 + 0x0)) = v0_6;
    FUN_0c1772e0(v0_6, (*(int *)(((int)stk + 4))));
    nlSetPaletteData(((v0_6 << 2) << 2), (*(int *)((v0_4 + 0x4))), (*(int *)(((int)stk + 4))));
    goto L_C17DEB2;
    L_C17DEB0:;
    v0_6 = (v0_1);
    goto L_C17DEB2;
    L_C17DDF0:;
    nlSetDummyTextureParameter(v0_3);
    goto L_C17DDF6;
    L_C17DD10:;
    v0_2 = (v0_5);
    goto L_C17DD12;
}

int FUN_0c2ee1da(int a4)
{
    if (a4 == 0) {
        return 0x0;
    }
    if (a4 == 0xDAC0) {
        return 0x38;
    }
    if ((unsigned int)a4 >= (unsigned int)0xD58A) {
        return 0x37;
    }
    if ((unsigned int)a4 >= (unsigned int)0xD2F0) {
        return 0x36;
    }
    if ((unsigned int)a4 >= (unsigned int)0xD055) {
        return 0x35;
    }
    if ((unsigned int)a4 >= (unsigned int)0xCB20) {
        return 0x34;
    }
    if ((unsigned int)a4 >= (unsigned int)0xC5EA) {
        return 0x33;
    }
    if ((unsigned int)a4 >= (unsigned int)0xC350) {
        return 0x32;
    }
    if ((unsigned int)a4 >= (unsigned int)0xC0B5) {
        return 0x31;
    }
    if ((unsigned int)a4 >= (unsigned int)0xBB80) {
        return 0x30;
    }
    if ((unsigned int)a4 >= (unsigned int)0xB64A) {
        return 0x2F;
    }
    if ((unsigned int)a4 >= (unsigned int)0xB3B0) {
        return 0x2E;
    }
    if ((unsigned int)a4 >= (unsigned int)0xB115) {
        return 0x2D;
    }
    if ((unsigned int)a4 >= (unsigned int)0xABE0) {
        return 0x2C;
    }
    if ((unsigned int)a4 >= (unsigned int)0xA6AA) {
        return 0x2B;
    }
    if ((unsigned int)a4 >= (unsigned int)0xA410) {
        return 0x2A;
    }
    if ((unsigned int)a4 >= (unsigned int)0xA175) {
        return 0x29;
    }
    if ((unsigned int)a4 >= (unsigned int)0x9C40) {
        return 0x28;
    }
    if ((unsigned int)a4 >= (unsigned int)0x970A) {
        return 0x27;
    }
    if ((unsigned int)a4 >= (unsigned int)0x9470) {
        return 0x25;
    }
    if ((unsigned int)a4 >= (unsigned int)0x91D5) {
        return 0x24;
    }
    if ((unsigned int)a4 >= (unsigned int)0x8CA0) {
        return 0x23;
    }
    if ((unsigned int)a4 >= (unsigned int)0x876A) {
        return 0x22;
    }
    if ((unsigned int)a4 >= (unsigned int)0x84D0) {
        return 0x21;
    }
    if ((unsigned int)a4 >= (unsigned int)0x8340) {
        return 0x20;
    }
    if ((unsigned int)a4 >= (unsigned int)0x8235) {
        return 0x1F;
    }
    if ((unsigned int)a4 >= (unsigned int)0x7D00) {
        return 0x1E;
    }
    if ((unsigned int)a4 >= (unsigned int)0x79E0) {
        return 0x1D;
    }
    if ((unsigned int)a4 >= (unsigned int)0x77CA) {
        return 0x1C;
    }
    if ((unsigned int)a4 >= (unsigned int)0x7295) {
        return 0x1A;
    }
    if ((unsigned int)a4 >= (unsigned int)0x7080) {
        return 0x19;
    }
    if ((unsigned int)a4 >= (unsigned int)0x6D60) {
        return 0x18;
    }
    if ((unsigned int)a4 >= (unsigned int)0x6720) {
        return 0x17;
    }
    if ((unsigned int)a4 >= (unsigned int)0x5DC0) {
        return 0x16;
    }
    if ((unsigned int)a4 >= (unsigned int)0x5460) {
        return 0x15;
    }
    if ((unsigned int)a4 >= (unsigned int)0x4B00) {
        return 0xE;
    }
    if ((unsigned int)a4 >= (unsigned int)0x41A0) {
        return 0xD;
    }
    if ((unsigned int)a4 >= (unsigned int)0x3840) {
        return 0xC;
    }
    if ((unsigned int)a4 >= (unsigned int)0x2EE0) {
        return 0xB;
    }
    if ((unsigned int)a4 >= (unsigned int)0x2580) {
        return 0x8;
    }
    if ((unsigned int)a4 >= (unsigned int)0x1C20) {
        return 0x7;
    }
    if ((unsigned int)a4 >= (unsigned int)0x12C0) {
        return 0x6;
    }
    if ((unsigned int)a4 >= (unsigned int)0x960) {
        return 0x5;
    }
    if ((unsigned int)a4 >= (unsigned int)0x4B0) {
        return 0x4;
    }
    if ((unsigned int)a4 >= (unsigned int)0x258) {
        return 0x3;
    }
    if ((unsigned int)a4 >= (unsigned int)0x12C) {
        return 0x2;
    }
    if ((unsigned int)a4 >= (unsigned int)0x4B) {
        return 0x1;
    }
    return 0xFF;
}

int FUN_0c2fa4f4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;

    t2 = (*(signed char *)0xC8E0302);
    t3 = (*(signed char *)0xC8E0303);
    t4 = a4;
    t5 = 0x0;
    for (;;) {
        t6 = a5;
        t7 = a6;
        t8 = (*(signed char *)0xC8E0304);
        for (;;) {
            if ((unsigned char)t4 != 0) {
                if ((unsigned char)t2 != 0) {
                    if ((unsigned char)t2 != 1) {
                        if ((unsigned char)t2 == 2) {
                            t9 = (unsigned char)t4;
                            t6 = (unsigned char)t8;
                            if ((int)t9 >= (int)(unsigned char)t3) {
                                t10 = (unsigned char)t3;
                                t10 = (-t10);
                                t6 = ((int)t6 << (int)(0x20 - (unsigned char)t3));
                                t5 = ((unsigned int)t5 << (int)t10);
                                t5 = (t5 | t6);
                                t4 = (t4 - t3);
                                t2 = 0x1;
                            } else {
                                t11 = t9;
                                t9 = (-t9);
                                t10 = (unsigned char)t4;
                                t10 = (-t10);
                                t9 = (t9 + 0x20);
                                t8 = (unsigned char)t8;
                                t6 = ((int)t6 << (int)t9);
                                t5 = ((unsigned int)t5 << (int)t10);
                                t8 = ((unsigned int)t8 << (int)(-t11));
                                t3 = (t3 - t4);
                                t5 = (t5 | t6);
                                t4 = 0x0;
                            }
                        } else {
                            if ((unsigned char)t2 == 3) {
                                t9 = 0xC8D7064;
                                t5 = ((unsigned int)t5 >> 1);
                                t4 = (t4 - 1);
                                t11 = FUN_0c2ec430((*(int *)((t9 + 0x0))));
                                if ((signed char)t11 != 0) {
                                    (((struct o6_uchar *)0xC8D705C)->v) = 0xFF;
                                    t2 = 0x1;
                                }
                            }
                        }
                    } else {
                        t9 = 0xC8E0313;
                        if ((*(signed char *)((t9 + 0x0))) == 0) {
                            t5 = ((unsigned int)t5 >> 1);
                            t5 = (t5 | 0x80000000);
                            t4 = (t4 - 1);
                        } else {
                            t10 = 0xC8E0313;
                            *(unsigned char *)((t10 + 0x0)) = 0x0;
                            (((struct o20_ushort *)0xC8D705C)->v) = 0x0;
                        }
                        t9 = (*(signed char *)0xC8E0314);
                        t9 = (t9 - 1);
                        (((struct o12_uchar *)0xC8E0302)->v) = t9;
                        if ((*(signed char *)0xC8E0314) != 0) {
                        } else {
                            t6 = 0xC8D7056;
                            (((struct o12_uchar *)0xC8E0302)->v) = (*(signed char *)((t6 + 0x0)));
                            t10 = 0xC8D7062;
                            t9 = (*(signed char *)((t10 + 0x0)));
                            if (t9 == 0) {
                                t2 = 0x3;
                            } else {
                                t11 = *(signed char *)0xC8E0311;
                                if (((unsigned char)t11 != 22) && (((unsigned char)t11 != 23) && (((unsigned char)t11 != 24) && (((unsigned char)t11 != 25) && (t7 = 0xC8D7076, t0 = *(signed char *)((t7 + 0x0)), t0 != 0))))) {
                                    t6 = 0xC8D7075;
                                    if ((*(signed char *)((t6 + 0x0))) == 0) {
                                        t6 = 0xC8D7035;
                                    } else {
                                        t6 = 0xC8D7034;
                                    }
                                    t8 = (*(signed char *)((t6 + 0x0)));
                                    t2 = 0x0;
                                    *(unsigned char *)((t7 + 0x0)) = 0x0;
                                }
                                t7 = 0xC8D7060;
                                t6 = (*(signed char *)((t7 + 0x0)));
                                t11 = (unsigned char)t6 != 1;
                                t6 = (unsigned char)t6;
                                if (t11 && (t9 = 0xC8E0312, t1 = *(signed char *)((t9 + 0x0)), t1 != 0)) {
                                    if (t6 == 0) {
                                        t11 = (-(unsigned char)t4);
                                        t4 = (unsigned char)t4;
                                        t9 = 0x20;
                                        t5 = ((unsigned int)t5 << (int)t11);
                                        t9 = (t9 - t4);
                                        t5 = (t5 | ((unsigned int)0xFFFFFFFF << (int)t9));
                                        t4 = 0x0;
                                    }
                                } else {
                                    t10 = 0xC8D7058;
                                    if ((*(short *)((t10 + 0x0))) != 0) {
                                        t8 = ((((struct o0_int *)0xC8D705C)->v));
                                        t8 = (t8 + 0x1);
                                        (((struct o0_uint *)0xC8D705C)->v) = t8;
                                        t8 = (t8 - 1);
                                        t8 = (*(signed char *)((t8 + 0x0)));
                                        *(unsigned short *)((t10 + 0x0)) = ((*(short *)((t10 + 0x0))) - 1);
                                        t9 = 0xC8D707C;
                                        *(unsigned short *)((t9 + 0x0)) = ((*(short *)((t9 + 0x0))) + 0x1);
                                        t2 = 0x0;
                                        if ((unsigned char)(*(signed char *)0xC8E0311) != 18) {
                                        } else {
                                            t9 = 0xC2EF3C8;
                                            t11 = FUN_0c2ef3c8();
                                            if ((int)(unsigned short)t11 < (int)0x3) {
                                            } else {
                                                t9 = 0xC8D707C;
                                                t10 = (*(short *)((t9 + 0x0)));
                                                t10 = (unsigned short)t10;
                                                if ((int)t10 < (int)(unsigned char)(*(signed char *)0xC8D707F)) {
                                                } else {
                                                    t10 = 0xC8E0313;
                                                    *(unsigned char *)((t10 + 0x0)) = 0x1;
                                                }
                                            }
                                        }
                                    } else {
                                        t6 = (*(signed char *)0xC8E0311);
                                        t11 = (unsigned char)t6 != 1;
                                        t6 = (unsigned char)t6;
                                        if (t11 && (t6 != 2)) {
                                            if ((unsigned char)(*(signed char *)0xC8D7061) == 1) {
                                                t9 = 0xC8E0324;
                                                t10 = (*(int *)((t9 + 0x0)));
                                                t11 = ((int (*)(int, int, int, int))(t10))(0xC8E0311, t6, t7, a7);
                                                (((struct o5_uchar *)0xC8D705C)->v) = 0x0;
                                            } else {
                                                t11 = t9;
                                                t12 = 0xC8E0311;
                                                t13 = t6;
                                                t14 = t7;
                                            }
                                            t10 = 0xC8E0320;
                                            t9 = t11;
                                            t6 = t13;
                                            t7 = t14;
                                            t9 = (*(int *)((t10 + 0x0)));
                                            t11 = ((int (*)(int, int, int, int))(t9))(t12, t6, t7, a7);
                                            if ((unsigned char)(*(signed char *)0xC8D7061) == 2) {
                                                t2 = 0x3;
                                            } else {
                                                t10 = 0xC8D7058;
                                                t9 = (*(short *)((t10 + 0x0)));
                                                if (t9 != 0) {
                                                    t9 = 0xC8D705C;
                                                    t8 = (*(int *)((t9 + 0x0)));
                                                    t8 = (t8 + 0x1);
                                                    *(unsigned int *)((t9 + 0x0)) = t8;
                                                    t8 = (t8 - 1);
                                                    t9 = (*(short *)((t10 + 0x0)));
                                                    t8 = (*(signed char *)((t8 + 0x0)));
                                                    t9 = (t9 - 1);
                                                    *(unsigned short *)((t10 + 0x0)) = t9;
                                                    t2 = 0x0;
                                                } else {
                                                    t10 = (-(unsigned char)t4);
                                                    t4 = (unsigned char)t4;
                                                    t9 = 0x20;
                                                    t5 = ((unsigned int)t5 << (int)t10);
                                                    t9 = (t9 - t4);
                                                    t5 = (t5 | ((unsigned int)0xFFFFFFFF << (int)t9));
                                                    t4 = 0x0;
                                                }
                                            }
                                        } else {
                                            t9 = 0xC2D7890;
                                            t6 = 0xC8E0302;
                                            t10 = FUN_0c2d7890();
                                            if ((signed char)t10 != 0) {
                                                break;
                                            }
                                            t10 = (-(unsigned char)t4);
                                            t4 = (unsigned char)t4;
                                            t9 = 0x20;
                                            t5 = ((unsigned int)t5 << (int)t10);
                                            t9 = (t9 - t4);
                                            t5 = (t5 | ((unsigned int)0xFFFFFFFF << (int)t9));
                                            t4 = 0x0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    t5 = ((unsigned int)t5 >> 1);
                    t4 = (t4 - 1);
                    t3 = (*(signed char *)0xC8D7080);
                    t2 = 0x2;
                }
                continue;
            }
            (((struct o0_uchar *)0xC8E0302)->v) = t2;
            (((struct o1_uchar *)0xC8E0302)->v) = t3;
            (((struct o2_uchar *)0xC8E0302)->v) = t8;
            return t5;
        }
        t2 = (*(signed char *)0xC8E0302);
    }
}

int FUN_0c19fef8(int a4, int a5)
{

    register int R1;
    register int R6;
    register int R7;
    register int R8;
    int R9;
    int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_1 = a4;
    v0_0 = a5;
    v0_3 = R13;
    v0_4 = R12;
    v0_5 = R11;
    v0_6 = R10;
    v0_7 = R9;
    *(unsigned int *)((v0_1 + 0x2C)) = ((*(int *)((v0_1 + 0x2C))) + 0x1);
    v0_2 = (int)(short)(FUN_0c1a02a6((*(int *)((v0_0 + 0x0))))) >= (int)0x3;
    R13 = (v0_1);
    v0_0 = (v0_0);
    if (v0_2) goto L_C19FF26;
    *(unsigned int *)((R13 + 0x30)) = ((*(int *)((R13 + 0x30))) + 0x1);
    L_C1A0016:;
    v0_1 = (0x0);
    L_C1A018A:;
    return v0_1;
    L_C19FF26:;
    if ((v0_0 == 0)) goto L_C19FF54;
    v0_1 = (*(int *)((v0_0 + 0x0))) == 0;
    if (v0_1) goto L_C19FF54;
    v0_1 = (int)(unsigned short)(*(short *)(((*(int *)((v0_0 + 0x0))) + 0x4))) <= (int)0x1;
    if (v0_1) goto L_C19FF54;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned short *)((v0_1 + 0x4)) = ((*(short *)((v0_1 + 0x4))) - 1);
    v0_1 = *(int *)((v0_0 + 0x0));
    v0_2 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_2 + 0x1);
    v0_1 = *(signed char *)((((v0_2 + 0x1) - 1) + 0x0));
    v0_1 = ((unsigned char)v0_1);
    L_C19FF6E:;
    R10 = ((short)v0_1);
    R9 = (0x1);
    if (((0x40 & (short)v0_1) == 0)) goto L_C19FFFE;
    if ((v0_0 == 0)) goto L_C19FFC4;
    v0_1 = (*(int *)((v0_0 + 0x0))) == 0;
    if (v0_1) goto L_C19FFC4;
    v0_1 = (int)(unsigned short)(*(short *)(((*(int *)((v0_0 + 0x0))) + 0x4))) <= (int)0x1;
    if (v0_1) goto L_C19FFC4;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned short *)((v0_1 + 0x4)) = ((*(short *)((v0_1 + 0x4))) - 1);
    v0_1 = *(int *)((v0_0 + 0x0));
    v0_2 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_2 + 0x1);
    v0_1 = *(signed char *)((((v0_2 + 0x1) - 1) + 0x0));
    v0_1 = ((unsigned char)v0_1);
    L_C19FFDE:;
    if (((int)v0_1 >= 0)) goto L_C19FFE6;
    L_C1A0172:;
    *(unsigned int *)((R13 + 0x30)) = ((*(int *)((R13 + 0x30))) + 0x1);
    return FUN_0c1a0254(R13);
    L_C19FFE6:;
    v0_2 = (int)v0_1 <= (int)(unsigned char)(*(signed char *)((R13 + 0x9)));
    if (v0_2) goto L_C19FFF2;
    goto L_C1A0172;
    L_C19FFF2:;
    *(unsigned char *)((R13 + 0xD)) = ((*(signed char *)((R13 + 0xD))) & 0xFE);
    *(unsigned char *)((R13 + 0xC)) = v0_1;
    L_C1A0006:;
    v0_1 = (unsigned int)(*(signed char *)((R13 + 0xC))) <= (unsigned int)(*(signed char *)((R13 + 0x9)));
    if (!(v0_1)) goto L_C1A0010;
    v0_1 = *(signed char *)((R13 + 0xC));
    v0_2 = *(int *)((R13 + 0x4));
    v0_3 = (short)(FUN_0c1a02cc(v0_0, 0xC8B6100, 0x2)) == 2;
    R11 = ((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x8C) + v0_2));
    R12 = (((((unsigned short)(unsigned char)v0_1 * (unsigned short)0x8C) + v0_2) + 0x48));
    if (v0_3) goto L_C1A0040;
    v0_1 = (0xFFFFFFFF);
    goto L_C1A004A;
    L_C1A0010:;
    *(unsigned int *)((R13 + 0x34)) = ((*(int *)((R13 + 0x34))) + 0x1);
    goto L_C1A0016;
    L_C1A004A:;
    if ((v0_1 != -1)) goto L_C1A0054;
    goto L_C1A0172;
    L_C1A0054:;
    *(unsigned short *)((R12 + 0xE)) = v0_1;
    if (((0x10 & R10) == 0)) goto L_C1A0062;
    v0_1 = (0x1);
    L_C1A0064:;
    (((struct o17_uchar *)(R12))->v) = v0_1;
    v0_1 = ((0xF & R10));
    if (((0xF & R10) == 11)) goto L_C1A0078;
    if ((v0_1 == 15)) goto L_C1A0094;
    if (((R10 & R9) == 0)) goto L_C1A00DA;
    (((struct o15_uchar *)(R12))->v) = R9;
    v0_2 = FUN_0c19f9ba(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C1A0172;
    *(unsigned short *)((R12 + 0x10)) = v0_1;
    L_C1A00E0:;
    if (((0x2 & R10) == 0)) goto L_C1A00F6;
    v0_2 = FUN_0c19f9ba(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C1A0172;
    *(unsigned short *)((R12 + 0xC)) = ((*(short *)((R12 + 0xC))) + v0_1);
    L_C1A00F6:;
    if (((0x4 & R10) == 0)) goto L_C1A010C;
    v0_2 = FUN_0c19f9ba(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C1A0172;
    *(unsigned int *)((R12 + 0x8)) = ((*(int *)((R12 + 0x8))) + v0_1);
    L_C1A010C:;
    if (((0x8 & R10) == 0)) goto L_C1A0122;
    v0_2 = FUN_0c19f9ba(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C1A0172;
    *(unsigned int *)((R12 + 0x4)) = ((*(int *)((R12 + 0x4))) + v0_1);
    L_C1A0122:;
    if (((0x20 & R10) == 0)) goto L_C1A0138;
    v0_2 = FUN_0c19f9ba(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == -1)) goto L_C1A0172;
    v0_2 = *(short *)((R11 + 0x12));
    v0_1 = ((v0_2 + v0_1));
    L_C1A013C:;
    *(unsigned short *)((R11 + 0x12)) = v0_1;
    v0_1 = FUN_0c1a02a6((*(int *)((v0_0 + 0x0))));
    v0_2 = *(signed char *)(((0x1F + R11) + 0x0));
    *(unsigned short *)((R11 + 0x10)) = (((unsigned char)v0_2 + v0_1) + 0x28);
    v0_3 = FUN_0c1a11d0(R12, (*(int *)((v0_0 + 0x0))), 0x0);
    *(unsigned int *)((v0_0 + 0x0)) = v0_3;
    *(unsigned int *)((v0_0 + 0x0)) = (FUN_0c1a0ec4((R11 + 0x8), v0_3, 0x0));
    v0_1 = ((((unsigned char)v0_2 + v0_1) + 0x28));
    goto L_C1A018A;
    L_C1A0138:;
    v0_1 = *(short *)((R11 + 0x12));
    v0_1 = ((v0_1 + 0x1));
    goto L_C1A013C;
    L_C1A00DA:;
    (((struct o15_uchar *)(R12))->v) = 0x0;
    goto L_C1A00E0;
    L_C1A0094:;
    v0_1 = *(short *)((R11 + 0x10));
    v0_2 = *(int *)((R12 + 0x4));
    v0_3 = *(signed char *)(((0x1F + R11) + 0x0));
    v0_2 = ((v0_2 + (((unsigned short)v0_1 - (unsigned char)v0_3) - 40)));
    L_C1A00A8:;
    *(unsigned int *)((R12 + 0x4)) = v0_2;
    goto L_C1A0122;
    L_C1A0078:;
    v0_1 = *(short *)((R11 + 0x10));
    v0_3 = *(signed char *)((R11 + 0x1F));
    *(unsigned int *)((R12 + 0x8)) = ((*(int *)((R12 + 0x8))) + (short)(v0_1 - ((unsigned char)v0_3 + 0x28)));
    v0_2 = *(int *)((R12 + 0x4));
    v0_2 = ((v0_2 + (short)(v0_1 - ((unsigned char)v0_3 + 0x28))));
    v0_1 = ((v0_1 - ((unsigned char)v0_3 + 0x28)));
    goto L_C1A00A8;
    L_C1A0062:;
    v0_1 = (0x0);
    goto L_C1A0064;
    L_C1A0040:;
    v0_1 = FUN_0c19c916(0xC8B6100);
    v0_1 = ((unsigned short)v0_1);
    goto L_C1A004A;
    L_C19FFC4:;
    v0_1 = (short)(FUN_0c1a02cc(v0_0, 0xC8B6104, 0x1)) == 1;
    if (v0_1) goto L_C19FFD8;
    v0_1 = (0xFFFFFFFF);
    goto L_C19FFDE;
    L_C19FFD8:;
    v0_1 = *(signed char *)0xC8B6104;
    v0_1 = ((unsigned char)v0_1);
    goto L_C19FFDE;
    L_C19FFFE:;
    v0_1 = ((unsigned char)(*(signed char *)((R13 + 0xD))) & R9) != 0;
    if (v0_1) goto L_C1A0010;
    goto L_C1A0006;
    L_C19FF54:;
    v0_1 = (short)(FUN_0c1a02cc(v0_0, 0xC8B6104, 0x1)) == 1;
    if (v0_1) goto L_C19FF68;
    v0_1 = (0xFFFFFFFF);
    goto L_C19FF6E;
    L_C19FF68:;
    v0_1 = *(signed char *)0xC8B6104;
    v0_1 = ((unsigned char)v0_1);
    goto L_C19FF6E;
}

