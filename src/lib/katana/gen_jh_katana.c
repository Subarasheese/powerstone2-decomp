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


int FUN_0c2e5464(int a4, int a5)
{
    int stk[13];
    register int t4;
    register int t5;
    register int t16;

    *(unsigned char *)(((int)stk + 16)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    FUN_0c2e55bc();
    FUN_0c2e7200(0xC3011B4);
    FUN_0c2e55bc();
    t4 = (*(signed char *)(((int)stk + 16)));
    for (;;) {
        t5 = *(signed char *)(((int)stk + 12));
        if ((int)(unsigned char)t4 > (int)(unsigned char)t5) {
            break;
        }
        FUN_0c2fa4cc((((unsigned char)t4 << 1) + 0xC), 0x2, ((int)stk + 0));
        FUN_0c2fa4cc(((((unsigned char)t4 + 0x1) << 1) + 0xC), 0x2, (((int)stk + 0) + 0x8));
        FUN_0c2e7200(0xC3011C4);
        FUN_0c2e76c8((unsigned char)t4, 0xA, 0x1, (((int)stk + 0) + 0x14));
        FUN_0c2e7200((((int)stk + 0) + 0x14));
        FUN_0c2e7200(0xC3011C8);
        for (;;) {
            if ((unsigned int)(*(short *)(((int)stk + 0))) >= (unsigned int)(*(short *)(((int)stk + 8)))) {
                break;
            }
            t16 = *(short *)(((int)stk + 0));
            *(unsigned short *)(((int)stk + 0)) = (t16 + 0x1);
            FUN_0c2fa4cc(((t16 + 0x1) - 1), 0x1, (((int)stk + 0) + 0x4));
            FUN_0c2e715e((*(signed char *)(((int)stk + 4))));
        }
        t4 = (t4 + 0x1);
    }
    return (unsigned char)t5;
}


int FUN_0c2e5514(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t10;
    register int t11;
    register int t13;
    register int t19;
    register int t21;
    register int t24;
    register int t30;
    register int t20;

    *(unsigned char *)(((int)stk + 4)) = a5;
    *(unsigned char *)(((int)stk + 0)) = a6;
    t0 = *(signed char *)0xC8D64A2;
    if ((int)(unsigned char)t0 > (int)0x4A) {
        *(unsigned char *)0xC8D64A2 = 0x0;
        FUN_0c2e55bc();
    } else {
        t10 = (unsigned char)t0;
    }
    t11 = a4;
    for (;;) {
        if ((*(signed char *)((t11 + 0x0))) == 0) {
            break;
        }
        t13 = *(signed char *)((t11 + 0x0));
        t11 = (t11 + 0x1);
        FUN_0c2e715e(t13);
        t10 = (*(signed char *)0xC8D64A2);
        t10 = (t10 + 0x1);
        *(unsigned char *)0xC8D64A2 = t10;
    }
    t19 = (FUN_0c2e76c8((unsigned char)(*(signed char *)(((int)stk + 4))), 0xA, (*(signed char *)(((int)stk + 0))), (((int)stk + 0) + 0x8)));
    t21 = (((int)stk + 0) + 0x8);
    for (;;) {
        if ((*(signed char *)((t21 + 0x0))) == 0) {
            break;
        }
        t24 = *(signed char *)((t21 + 0x0));
        t21 = (t21 + 0x1);
        t19 = (FUN_0c2e715e(t24));
        t20 = (*(signed char *)0xC8D64A2);
        t20 = (t20 + 0x1);
        *(unsigned char *)0xC8D64A2 = t20;
    }
    t30 = t19;
    if ((int)(unsigned char)(*(signed char *)0xC8D64A2) <= (int)0x4A) {
        t30 = FUN_0c2e715e(0x20);
        *(unsigned char *)0xC8D64A2 = ((*(signed char *)0xC8D64A2) + 0x1);
    }
    return t30;
}


int FUN_0c2ec67a(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t33;
    register int t34;
    register int t35;
    register int t27;
    register int t28;
    register int t29;
    int t6;

    *(unsigned char *)(((int)stk + 12)) = (*(signed char *)0xC8D67B5);
    if ((unsigned char)a4 == 0) {
        t28 = 0x0;
        if ((((unsigned char)(*(signed char *)0xC8D67A4) & 64) != 0) && (t6 = *(signed char *)0xC8D6795, ((unsigned char)t6 & 16) == 0)) {
            t28 = 0x2;
            if (((unsigned char)(*(signed char *)0xC8D67A4) & 128) != 0) {
                t28 = 0x4;
            }
        }
        t33 = 0x0;
        if (((unsigned char)(*(signed char *)0xC8D679A) & 0x4) != 0) {
            t33 = 0x1;
        }
        t27 = 0x10;
        t29 = a4;
    } else {
        t27 = 0xFE;
        t29 = 0x0;
        if ((unsigned char)a4 == 101) {
        } else {
            t27 = 0xFF;
            t29 = 0x0;
            if ((unsigned char)a4 == 100) {
            } else {
                t27 = ((*(signed char *)0xC8D679F) & 0x18);
                t29 = a4;
            }
        }
        t28 = 0x0;
        t33 = 0x0;
    }
    *(int *)((int)stk + 8) = t33;
    t34 = *(signed char *)0xC8D67A8;
    *(int *)((int)stk + 4) = (t34 & 0x7F);
    t35 = *(signed char *)0xC8D67A7;
    *(int *)((int)stk + 0) = (t35 & 0x7F);
    return (FUN_0c2ee992(t29, (*(signed char *)(((int)stk + 12))), t27, t28, (t35 & 0x7F), (t34 & 0x7F), t33));
}


int FUN_0c2cf99e(int a4)
{
    int stk[3];
    register int t1;
    register int t16;
    register int t2;

    t1 = (((struct o90_short *)((*(int *)0xC8D66E8)))->v);
    t16 = (unsigned short)t1;
    if (((unsigned short)t1 & 128) == 0) {
        t2 = ((int (*)(int))(FUN_0c2e732c))(a4);
        FUN_0c2e7200(0xC300390);
        FUN_0c2e76c8((*(signed char *)0xC8D25B1), 0xA, 0x2, ((int)stk + 0));
        FUN_0c2e7200(((int)stk + 0));
        FUN_0c2e7200(0xC30039C);
        FUN_0c2e76c8((*(signed char *)0xC8D25B2), 0xA, 0x2, ((int)stk + 0));
        FUN_0c2e7200(((int)stk + 0));
        FUN_0c2e7200(0xC30039C);
        FUN_0c2e76c8((*(signed char *)0xC8D25B3), 0xA, 0x2, ((int)stk + 0));
        FUN_0c2e7200(((int)stk + 0));
        t16 = (((int (*)(void))(FUN_0c2e732c))());
    }
    return t16;
}


int FUN_0c2d65ae(int a4)
{
    int stk[8];
    register int t4;
    register int t5;

    FUN_0c2e76c8(a4, 0x10, 0x8, ((int)stk + 0));
    FUN_0c2e7200(0xC300624);
    FUN_0c2e7200(((int)stk + 0));
    FUN_0c2e732c();
    t4 = 0x0;
    for (;;) {
        t5 = *(int *)((0xC303FD4 + ((unsigned char)t4 << 2)));
        if (t5 == 0) {
            if (0x0 == 0) {
                *(unsigned char *)0xC303FD1 = 0x1;
                return ((unsigned char)t4 << 2);
            }
            return ((unsigned char)t4 << 2);
        }
        if (t5 == a4) {
            break;
        }
        t4 = (t4 + 0x1);
    }
    if (0x1 == 0) {
        *(unsigned char *)0xC303FD1 = 0x1;
    }
    return ((unsigned char)t4 << 2);
}


int pdExitPeripheral(int a4)
{
    register int t7;
    register int t8;
    register int t9;

    if ((*(int *)0xC8B9824) != 0) {
        kdExitSystem();
    }
    memset(0xC8B982C, 0x0, 0x4E0);
    t7 = 0xC8B9D0C;
    t8 = 0xC8B982C;
    for (;;) {
        t9 = _pd_peripheral_set_null(t8);
        t8 = (t8 + 0x34);
        *(unsigned int *)((t7 + 0x0)) = 0x0;
        t7 = (t7 + 0x4);
        if ((unsigned int)t8 >= (unsigned int)0xC8B9D0C) {
            break;
        }
    }
    return t9;
}


int kmyFreeSmallVQArea(int a4, int a5)
{
    int stk[12];
    register int t3;
    register int t5;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    kmytex_GetSmallVQprofile((((int)stk + 20) + 0x8), (*(int *)(((int)stk + 24))));
    t3 = *(int *)(((((int)stk + 20) + 0x8) + 0x4));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = t3;
    t5 = *(int *)(((((int)stk + 20) + 0x8) + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x8)));
    *(unsigned int *)(((int)stk + 12)) = t5;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x10)));
    return (VQFBfree((*(int *)(((int)stk + 20))), *(Stk5 *)((int)stk + 0)));
}


int ADXT_SetOutPan(int a4, int a5, int a6, int a7)
{
    *(unsigned short *)((((a5 << 1) + (a4 + 0x42)) + 0x0)) = a6;
    if ((int)a5 < (int)(*(signed char *)((a4 + 0x3)))) {
        return thunk_FUN_0c2c5bd0((*(int *)((a4 + 0xC))), a5, a6, a7);
    }
    return (FUN_0c2c30aa(a4, a5, a6, a7, 0xC2FEF34));
}

int FUN_0c2d93a0(void)
{
    int stk[1];
    register int t2;

    for (;;) {
        syG2AicaFifoIsEmpty(((int)stk + 0));
        if ((*(int *)(((int)stk + 0))) != 1) continue;
        t2 = *(int *)0xC304080;
        (((struct o110_uint *)(t2))->v) = (((((struct o110_int *)(t2))->v)) + 0x1);
        if ((*(int *)(((int)stk + 0))) == 1) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c2d95f0(void)
{
    int stk[1];
    register int t2;

    for (;;) {
        syG2FifoIsEmpty(((int)stk + 0));
        if ((*(int *)(((int)stk + 0))) != 1) continue;
        t2 = *(int *)0xC304080;
        (((struct o10C_uint *)(t2))->v) = (((((struct o10C_int *)(t2))->v)) + 0x1);
        if ((*(int *)(((int)stk + 0))) == 1) {
            break;
        }
    }
    return 0x0;
}

void SJ_SplitChunk(int a4, int a5, int a6, int a7)
{
    { struct mv2 { int w[2]; }; *(struct mv2 *)(a6) = *(struct mv2 *)(a4); }
    *(unsigned int *)((a7 + 0x4)) = (*(int *)((a6 + 0x4)));
    if ((int)(*(int *)((a6 + 0x4))) > (int)a5) {
        *(unsigned int *)((a6 + 0x4)) = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a6 + 0x0))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a7 + 0x4)) = ((*(int *)((a7 + 0x4))) - (*(int *)((a6 + 0x4))));
}


int FUN_0c2eba12(int a4, int a5, int a6)
{
    (((struct o0_uchar *)0xC8D67F2)->v) = 0x0;
    if ((*(signed char *)0xC2EB974) == 0) {
        (((struct o8_uchar *)0xC8D67F2)->v) = 0x2;
        return FUN_0c2eb978(0x2, 0xC2EB974, a6);
    }
    (((struct o8_uchar *)0xC8D67F2)->v) = 0x3;
    return FUN_0c2eb978(0x3, 0xC2EB974, a6);
}

int FUN_0c2f8c84(void)
{
    return (FUN_0c2f8d7c(0xC8E00E8, 0xC8E00EC, 0xC8E00ED, 0xC8E00EE, 0xC8E00EF, 0x0));
}

