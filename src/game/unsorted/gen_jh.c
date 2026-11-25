/* Straight-line functions with calls and guards (batch gen_jh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[5]; } Stk5;
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10C_int { char p[0x10C]; int v; };
struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_short { char p[0x30]; short v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o378C_float { char p[0x378C]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_short { char p[0x50]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o54_int { char p[0x54]; int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_short { char p[0x90]; short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
int ADX_DecodeMonoFloat(int, int, int, int, int, int);
int ADX_DecodeSteFloat(int, int, int, int, int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int FUN_0c038f70(void);
int FUN_0c03f40c(int);
int FUN_0c05aab6(int, int);
int FUN_0c05b80c(void);
int FUN_0c05b8cc(int, int, int, int);
int FUN_0c05b900(int, int, int, int);
int FUN_0c05b978(void);
int FUN_0c05ee84(void);
extern int FUN_0c05eeb0();
int FUN_0c05f22c(int);
int FUN_0c060c00(void);
int FUN_0c063f24(void);
int FUN_0c067a58(void);
int FUN_0c07c25a(void);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0fb712(void);
int FUN_0c0fc776(void);
int FUN_0c0fe530(void);
int FUN_0c100526(void);
int FUN_0c101c2c(void);
int FUN_0c10208a(void);
int FUN_0c10527c(int, int, int);
int FUN_0c106744(int);
int FUN_0c106760(int);
int FUN_0c108568(int, int);
int FUN_0c1086d8(int);
int FUN_0c117944(int, ...);
int FUN_0c17b1a0(int);
int FUN_0c17b860(int);
int FUN_0c180d72(int);
int FUN_0c18c9fc(int, ...);
int FUN_0c18da58(void);
int FUN_0c18da86(int);
int FUN_0c18dcfa(int, int);
int FUN_0c19126a(void);
int FUN_0c19194c(int, int, int, int, int);
int FUN_0c191e30(void);
int FUN_0c192e04(int);
int FUN_0c192e82(void);
int FUN_0c194d80(int, int, int, int, int);
int FUN_0c197e54(int, int, int, int, int, int);
int FUN_0c19c348(int, int, int, int);
int FUN_0c19daa0(int, int, int, int);
int MD5Transform(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1a2120(int, int, int);
int FUN_0c2c30aa(int, int, int, int, int);
int kmytex_GetSmallVQprofile(int, int);
int FUN_0c2e55bc(void);
int FUN_0c2e715e(int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2eb978(int, int, int);
int FUN_0c2ee992(int, int, int, int, int, int, int);
int FUN_0c2f1db8(void);
int FUN_0c2f8d7c(int, int, int, int, int, int);
int FUN_0c2fa4cc(int, int, int);
int VQFBfree(int, Stk5);
int _pd_peripheral_set_null(int);
int kdExitSystem(void);
float math_cos_angle16(int);
float math_sin_angle16(int);
int memset(int, int, int);
int nlInitMatrixStack(int, int, int);
int nlMultiMatrix(int);
int nlMultiPushedMatrix(void);
int nlPushMatrix(int);
int nlStoreMatrix(int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int printf_format_core(int, int, int, int, int);
int res_cockpit_faces_release_all(void);
int syG2AicaFifoIsEmpty(int);
int syG2FifoIsEmpty(int);
int thunk_FUN_0c066b82(void);
int thunk_FUN_0c2c5bd0(int, int, int, int);
int FUN_0c0c83dc(int a4);
int FUN_0c2e5464(int a4, int a5);
int FUN_0c106d40(int a4);
int FUN_0c2e5514(int a4, int a5, int a6);
int FUN_0c18d522(int a4);
int FUN_0c2ec67a(int a4, int a5, int a6, int a7);
int ADXPD_ExecHndl(int a4);
int FUN_0c1a14dc(int a4, int a5, int a6);
float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c046042(void);
int FUN_0c2cf99e(int a4);
int FUN_0c077f36(int a4);
int FUN_0c17feb6(int a4, int a5, int a6);
int FUN_0c2d65ae(int a4);
int FUN_0c19106c(void);
int FUN_0c1912dc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c05ee00(int a4, int a5, int a6, int a7);
int FUN_0c19e678(int a4, int a5, int a6, int a7);
int FUN_0c19f896(int a4, int a5, int a6, int a7);
int nlInitMatrix(int a4, int a5);
int nlSelectMatrixStack(int a4);
int FUN_0c1a3198(int a4, int a5, int a6);
int FUN_0c19e46e(int a4);
int pdExitPeripheral(int a4);
int FUN_0c05b9f4(int a4, int a5, int a6, int a7);
int FUN_0c18d890(int a4, int a5, int a6, int a7);
int kmyFreeSmallVQArea(int a4, int a5);
int FUN_0c19f672(int a4);
int FUN_0c187cac(int a4, Stk3 s);
int FUN_0c187ce8(int a4, Stk3 s);
int ADXT_SetOutPan(int a4, int a5, int a6, int a7);
int FUN_0c2d93a0(void);
int FUN_0c2d95f0(void);
void SJ_SplitChunk(int a4, int a5, int a6, int a7);
int nlMakeFastModelProjectMatrixVM(void);
int vsprintf(int a4, int a5, int a6);
int FUN_0c2eba12(int a4, int a5, int a6);
int FUN_0c2f8c84(void);
int FUN_0c1918f2(int a4);

int FUN_0c0c83dc(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct oA4_uint *)(a4))->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
    u0 = *(float *)0xC0C84F0;
    u1 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u2 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u3 = (u1 * u2);
    u1 = ((((struct o28_float *)(a4))->v));
    u1 = u1 + u0 * u3;
    (((struct o28_float *)(a4))->v) = u1;
    u1 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u2 = (((struct o378C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v);
    u3 = (u1 * u2);
    u1 = ((((struct o30_float *)(a4))->v));
    u1 = u1 + u0 * u3;
    (((struct o30_float *)(a4))->v) = u1;
    (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    return FUN_0c0c2d56(a4, 0x9, (*(signed char *)((a4 + 0x1))));
}


int FUN_0c106d40(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o0_uint *)0xC474404)->v) = (FUN_0c10527c(((((struct o0_int *)0xC474404)->v)), 0x0, (((((struct o0_int *)0xC474714)->v)) - 1)));
        t0 = FUN_0c05f22c(0x101);
        if (t0 != 0) {
            t0 = FUN_0c108568(((((struct o0_int *)0xC474404)->v)), 0x2);
            if (t0 != 0) {
                (((struct o20_uint *)0xC474714)->v) = 0x104;
                FUN_0c1086d8(((((struct o8_int *)0xC474404)->v)));
                FUN_0c05aab6(0x0, 0x3);
                *(unsigned short *)((a4 + 0x1C)) = 0x1;
                return FUN_0c106760(a4);
            }
        }
        t0 = FUN_0c05f22c(0x40);
        t1 = t0;
        if (t0 != 0) {
            FUN_0c05aab6(0x0, 0x4);
            FUN_0c106744(a4);
            (((struct o15_uchar *)(a4))->v) = 0x4;
            t1 = 0x15;
        }
        return t1;
    }
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    t0 = FUN_0c117944(0x2C);
    (((struct o20_uint *)0xC474714)->v) = 0x104;
    (((struct o0_uint *)0xC474404)->v) = 0x0;
    (((struct o4_uint *)0xC474404)->v) = 0x0;
    (((struct o8_uint *)0xC474404)->v) = 0x0;
    return t0;
}


int FUN_0c046042(void)
{
    *(unsigned int *)0xC542260 = ((*(int *)0xC542260) + 0x1);
    FUN_0c067a58();
    FUN_0c03f40c(0x2);
    FUN_0c03f40c(0x1);
    FUN_0c03f40c(0x5);
    FUN_0c03f40c(0x6);
    FUN_0c03f40c(0x8);
    res_cockpit_faces_release_all();
    FUN_0c038e88(0x2);
    FUN_0c038e88(0x1);
    FUN_0c038f70();
    FUN_0c038e88(0x5);
    FUN_0c038e88(0x6);
    FUN_0c038e88(0x8);
    FUN_0c060c00();
    thunk_FUN_0c066b82();
    FUN_0c063f24();
    FUN_0c038566();
    FUN_0c038548(0x2);
    FUN_0c038548(0x1);
    FUN_0c038548(0x5);
    FUN_0c038548(0x6);
    res_cockpit_faces_release_all();
    FUN_0c038e88(0x2);
    return (FUN_0c038e88(0x1));
}


int FUN_0c077f36(int a4)
{
    register int t0;
    register int t1;

    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x40, 0xFFFFFFFF, 0x4, 0x40);
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
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37C4 + a4)) = *(struct mv3 *)((a4 + 0x28)); }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}


int FUN_0c05ee00(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 3) {
                if ((unsigned char)t0 != 2) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            if ((unsigned char)t0 != 6) {
                                if ((unsigned char)t0 != 7) {
                                    return (unsigned char)t0;
                                }
                                return FUN_0c101c2c();
                            }
                            return FUN_0c100526();
                        }
                        return FUN_0c0fe530();
                    }
                    return FUN_0c0fc776();
                }
                return FUN_0c0fb712();
            }
            return FUN_0c10208a();
        }
        return ((int (*)(int, int, int, int))(FUN_0c05eeb0))(a4, a5, a6, a7);
    }
    FUN_0c05ee84();
    return ((int (*)(void))(FUN_0c05eeb0))();
}


int FUN_0c05b9f4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC5429B4;
    switch (t0) {
    case 0:
        FUN_0c05b80c();
        break;
    case 1:
        FUN_0c05b8cc(a4, a5, a6, a7);
        break;
    case 2:
        FUN_0c05b900(a4, a5, a6, a7);
        break;
    case 4:
        FUN_0c05b978();
        break;
    }
    return FUN_0c07c25a();
}


