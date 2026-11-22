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
int FUN_0c1a15dc(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1a2120(int, int, int);
int FUN_0c2c30aa(int, int, int, int, int);
int FUN_0c2e3040(int, int);
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
int FUN_0c2b1424(int a4);
int FUN_0c05b9f4(int a4, int a5, int a6, int a7);
int FUN_0c18d890(int a4, int a5, int a6, int a7);
int FUN_0c2c7da0(int a4, int a5);
int FUN_0c19f672(int a4);
int FUN_0c187cac(int a4, Stk3 s);
int FUN_0c187ce8(int a4, Stk3 s);
int FUN_0c2b48a8(int a4, int a5, int a6, int a7);
int FUN_0c2d93a0(void);
int FUN_0c2d95f0(void);
void FUN_0c2c6be4(int a4, int a5, int a6, int a7);
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

int FUN_0c18d522(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c18da58();
    t1 = *(signed char *)((a4 + 0xA));
    *(unsigned int *)((t0 + 0x0)) = t1;
    *(unsigned int *)((t0 + 0x4)) = 0x0;
    if ((unsigned int)((t1 << 2) << 1) > (unsigned int)0x0) {
        t2 = 0x0;
        t3 = ((t1 << 2) << 1);
        for (;;) {
            t3 = (t3 - 8);
            FUN_0c18dcfa((((t0 + 0x8) + t2) + 0x4), (*(int *)((((a4 + 0xC) + t3) + 0x4))));
            *(unsigned short *)((((t0 + 0x8) + t2) + 0x0)) = (*(short *)((((a4 + 0xC) + t3) + 0x0)));
            *(unsigned int *)((t0 + 0x4)) = ((*(int *)((t0 + 0x4))) + (*(short *)((((t0 + 0x8) + t2) + 0x0))));
            t2 = (t2 + 0xC);
            if ((unsigned int)t3 <= (unsigned int)0x0) {
                break;
            }
        }
    }
    t1 = FUN_0c19c348(t0, (*(int *)((a4 + 0x4))), (*(short *)((a4 + 0x8))), (0x7F & (*(short *)((a4 + 0x0)))));
    FUN_0c18da86(t0);
    t0 = 0x0;
    if (t1 != 0) {
        t0 = 0xFFF0;
    }
    return t0;
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

int ADXPD_ExecHndl(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(int *)((a4 + 0xC))) == 1) {
        *(unsigned int *)((a4 + 0xC)) = 0x2;
    }
    t0 = *(int *)((a4 + 0xC));
    t1 = t0;
    if (t0 == 2) {
        if ((*(int *)((a4 + 0x14))) == 1) {
            t0 = ADX_DecodeMonoFloat((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), (((((struct o30_short *)(a4))->v))), ((*(short *)(((a4 + 0x30) + 0x2)))));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t1 = t0;
        } else {
            t0 = ADX_DecodeSteFloat((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), ((*(int *)((a4 + 0x24)))), ((a4 + 0x28) + 0x4), (((((struct o30_short *)(a4))->v))), ((*(short *)(((a4 + 0x30) + 0x2)))));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t3 = (t0 & 0x1);
            }
            t0 = t3;
            if (t3 == 1) {
                t0 = (FUN_0c2f1db8());
            }
            t1 = t0;
        }
        *(unsigned int *)((a4 + 0xC)) = 0x3;
    }
    return t1;
}

int FUN_0c1a14dc(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t15;
    register int t16;
    register int t11;

    t0 = *(int *)(((a4 + 0x10) + 0x0));
    t1 = *(int *)(((a4 + 0x10) + 0x0));
    *(unsigned int *)(((a4 + 0x10) + 0x0)) = (t1 + ((a6 << 2) << 1));
    if ((unsigned int)(t1 + ((a6 << 2) << 1)) < (unsigned int)((a6 << 2) << 1)) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
    }
    *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + ((unsigned int)a6 >> 29));
    t15 = (0x3F & ((unsigned int)((unsigned int)t0 >> 2) >> 1));
    t16 = 0x0;
    if ((unsigned int)a6 >= (unsigned int)(0x40 - (0x3F & ((unsigned int)((unsigned int)t0 >> 2) >> 1)))) {
        FUN_0c1a2120(((a4 + 0x18) + (0x3F & ((unsigned int)((unsigned int)t0 >> 2) >> 1))), a5, (0x40 - (0x3F & ((unsigned int)((unsigned int)t0 >> 2) >> 1))));
        FUN_0c1a15dc(a4, (a4 + 0x18), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t11 = (0x40 - (0x3F & ((unsigned int)((unsigned int)t0 >> 2) >> 1)));
        for (;;) {
            if ((unsigned int)(t11 + 0x3F) >= (unsigned int)a6) {
                break;
            }
            FUN_0c1a15dc(a4, (a5 + t11), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t11 = (t11 + 0x40);
        }
        t15 = 0x0;
        t16 = t11;
    }
    return FUN_0c1a2120(((a4 + 0x18) + t15), (a5 + t16), (a6 - t16));
}

float nlSprPutPosSet(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[9];
    register int t0;
    register float u7;
    register float u8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u22;
    register float u23;
    register float u20;
    register float u21;
    register float u29;
    register float u30;
    register float u25;
    register float u26;
    register float u27;
    register float u28;
    register float u14;
    register float u15;

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 0) + 0x4)) = *(struct mv8 *)(0xC205F10); }
    t0 = *(int *)((a4 + 0x34));
    u7 = 1.0f;
    u8 = 1.0f;
    if ((t0 & 15) == 0) {
    } else {
        *(unsigned int *)(((int)stk + 0)) = t0;
        u7 = (float)(t0 & 0x3);
        u8 = (float)((((*(int *)(((int)stk + 0))) >> 1) >> 1) & 0x3);
    }
    t10 = 0x4;
    t11 = a5;
    t12 = a6;
    t13 = (((int)stk + 0) + 0x4);
    for (;;) {
        u16 = *(float *)((t13 + 0x0));
        t13 = (t13 + 0x4);
        u17 = *(float *)((t13 + 0x0));
        t13 = (t13 + 0x4);
        u18 = (((struct o4_float *)(a4))->v);
        u19 = (((struct o8_float *)(a4))->v);
        u22 = u18;
        u23 = u19;
        if ((u16 - u7) != 0.0f) {
            u15 = (f4 * f6);
            u15 = (u15 * (u16 - u7));
            u14 = (u16 - u7);
            u20 = (f4 * f7);
            u21 = u18;
            u21 = u21 + u14 * u20;
            u15 = (-u15);
            u22 = u21;
            u23 = (u19 + u15);
        }
        u29 = u22;
        u30 = u23;
        if ((u17 - u8) != 0.0f) {
            u14 = (u17 - u8);
            u25 = (f5 * f7);
            u26 = u23;
            u26 = u26 + u14 * u25;
            u27 = (f5 * f6);
            u28 = u22;
            u28 = u28 + u14 * u27;
            u29 = u28;
            u30 = u26;
        }
        t10 = (t10 - 1);
        *(float *)((t11 + 0x0)) = u29;
        *(float *)((t12 + 0x0)) = u30;
        t12 = (t12 + 0x4);
        t11 = (t11 + 0x4);
        if (t10 == 0) {
            break;
        }
    }
    return u14;
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

int FUN_0c17feb6(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    nlsndG2Write((a4 + 0x5F800000), 0xA0800090);
    nlsndG2Write((a5 + 0x5F800000), 0xA0800094);
    nlsndG2Write(a6, 0xA0800098);
    t0 = 0x0;
    for (;;) {
        t1 = nlsndG2Read(0xA0800098);
        if (t1 == 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x400000) {
                break;
            }
            continue;
        }
        t0 = 0x2000A0;
        t1 = 0x0;
        for (;;) {
            t2 = FUN_0c180d72(t0);
            if (t2 != 0) {
                t1 = (t1 + 0x1);
                if ((int)t1 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFF00;
    }
    return 0xFFFFFF00;
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

int FUN_0c19106c(void)
{
    register int t0;
    register int t1;

    t0 = ((int (*)(void))(FUN_0c18c9fc))();
    t0 = FUN_0c19126a();
    t1 = 0x1;
    if ((short)t0 == 0) {
        t0 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC20A5DC, 0xC20A5EC, 0x3A);
        t0 = FUN_0c192e82();
        t1 = 0x1;
        if ((short)t0 != 0) {
        } else {
            t0 = ((int (*)(int, ...))(FUN_0c18c9fc))(0xC20A5DC, 0xC20A5EC, 0x3E);
            t1 = 0x0;
        }
    }
    return t1;
}

int FUN_0c1912dc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[6];
    register int t1;

    *(unsigned short *)(((int)stk + 12)) = a5;
    *(unsigned short *)(((int)stk + 20)) = a6;
    *(unsigned short *)(((int)stk + 16)) = a7;
    *(int *)((int)stk + 8) = 0xA5;
    *(int *)((int)stk + 4) = 0xC20A60C;
    *(int *)((int)stk + 0) = 0xC20A5FC;
    FUN_0c18c9fc(0xC20A5FC, 0xC20A60C, 0xA5);
    t1 = 0xC8A97F0;
    for (;;) {
        *(unsigned char *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x14);
        if ((unsigned int)t1 >= (unsigned int)0xC8A9890) {
            break;
        }
    }
    *(int *)((int)stk + 8) = ((short)(a9 >> 0));
    *(unsigned short *)(((int)stk + 12)) = (FUN_0c19194c((*(short *)(((int)stk + 12))), (*(short *)(((int)stk + 20))), (*(short *)(((int)stk + 16))), ((short)(a8 >> 0)), ((short)(a9 >> 0))));
    FUN_0c192e04(0x82);
    return (*(short *)(((int)stk + 12)));
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

int FUN_0c19e678(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)(((a4 + 0x4) + 0xC)) = a4;
    *(unsigned int *)(((a4 + 0x4) + 0x2C)) = 0xC20AB80;
    *(unsigned int *)(((a4 + 0x4) + 0x30)) = 0xC8B5F5C;
    { struct mv6 { int w[6]; }; *(struct mv6 *)(0xC8B5F60) = *(struct mv6 *)(0xC2AE81C); }
    (((struct o0_ushort *)0xC8B5F5C)->v) = (*(short *)0xC2AE834);
    { struct mv6 { int w[6]; }; *(struct mv6 *)(0xC8B5F94) = *(struct mv6 *)(0xC2AE81C); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)(0xC8B5FAC) = *(struct mv6 *)(0xC2AE81C); }
    (((struct o34_ushort *)0xC8B5F5C)->v) = (*(short *)0xC2AE834);
    return FUN_0c19daa0((a4 + 0x4), 0xC2AE81C, 0xC2AE834, a7);
}

int FUN_0c19f896(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)(((a4 + 0x6C) + 0xC)) = a4;
    *(unsigned int *)(((a4 + 0x6C) + 0x2C)) = 0xC20AC54;
    *(unsigned int *)(((a4 + 0x6C) + 0x30)) = 0xC8B6064;
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC8B6068) = *(struct mv9 *)(0xC2AE840); }
    *(unsigned short *)0xC8B6064 = (*(short *)0xC2AE864);
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC8B60B4) = *(struct mv9 *)(0xC2AE840); }
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC8B60D8) = *(struct mv9 *)(0xC2AE840); }
    *(unsigned short *)0xC8B60B0 = (*(short *)0xC2AE864);
    return FUN_0c19daa0((a4 + 0x6C), 0xC2AE840, 0xC2AE864, a7);
}

int nlInitMatrix(int a4, int a5)
{
    register int t2;

    nlInitMatrixStack(0xC86878C, 0xC8687A4, 0x3);
    nlInitMatrixStack(0xC868798, 0xC868864, 0x3);
    t2 = nlInitMatrixStack(0xC868780, a4, (a5 + 0x1));
    *(unsigned char *)0xC868770 = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC868774) = *(struct mv3 *)(0xC868780); }
    return t2;
}

int nlSelectMatrixStack(int a4)
{
    register int t0;

    nlStoreMatrix(0x0);
    t0 = *(signed char *)0xC868770;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC868774)) = *(struct mv3 *)(0xC868774); }
    (((struct o0_uchar *)0xC868770)->v) = a4;
    t0 = *(signed char *)0xC868770;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC868774) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC868774)); }
    return FUN_0c17b1a0(((((struct oC_int *)0xC868770)->v)));
}

int FUN_0c1a3198(int a4, int a5, int a6)
{
    register int t10;
    register int t0;
    register int t1;
    register int t3;

    if ((short)(0x8 - a6) != 0) {
        t10 = 0x0;
        if ((unsigned int)((a5 - 1) + a4) >= (unsigned int)a4) {
            t0 = ((a5 - 1) + a4);
            t1 = 0x0;
            for (;;) {
                t3 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = ((unsigned int)(*(signed char *)((t0 + 0x0))) << (int)(short)a6);
                *(unsigned char *)((t0 + 0x0)) = ((*(signed char *)((t0 + 0x0))) | t1);
                t0 = (t0 - 1);
                t1 = (unsigned char)(t3 & ((int)0xFF << (int)(short)(0x8 - a6)));
                t1 = ((unsigned int)t1 << (int)(-(short)(0x8 - a6)));
                if ((unsigned int)t0 < (unsigned int)a4) {
                    break;
                }
            }
            t10 = t1;
        }
        if ((unsigned char)t10 != 0) {
            return 0x1;
        }
        return 0x0;
    }
    return 0;
}

int FUN_0c19e46e(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    if (((*(short *)((t0 + 0x4))) & 32) != 0) {
        *(unsigned int *)((t0 + 0x10)) = ((*(int *)((t0 + 0x10))) + (FUN_0c191e30()));
    }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((t0 + 0x1C)) = *(struct mv6 *)((t0 + 0x4)); }
    *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) | (*(short *)((t0 + 0x4))));
    (((struct o50_ushort *)(t0))->v) = 0x0;
    (((struct o34_ushort *)(t0))->v) = (((((struct o34_short *)(t0))->v)) | ((((struct o38_short *)(t0))->v)));
    return 0x34;
}

int FUN_0c2b1424(int a4)
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

int FUN_0c18d890(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 16)) = a7;
    if ((*(int *)(((int)stk + 12))) != 0) {
        *(int *)((int)stk + 4) = 0x0;
        t2 = (*(int *)(((int)stk + 20)));
        *(int *)((int)stk + 0) = t2;
        FUN_0c197e54((*(int *)(((int)stk + 12))), ((*(short *)(((((int)stk + 0) + 0x10) + 0x0))) | 0xC0), (*(int *)(((int)stk + 8))), (*(int *)(((*(int *)(((int)stk + 8))) + 0x4))), t2, 0x0);
    }
    return 0x0;
}

int FUN_0c2c7da0(int a4, int a5)
{
    int stk[12];
    register int t3;
    register int t5;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    FUN_0c2e3040((((int)stk + 20) + 0x8), (*(int *)(((int)stk + 24))));
    t3 = *(int *)(((((int)stk + 20) + 0x8) + 0x4));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = t3;
    t5 = *(int *)(((((int)stk + 20) + 0x8) + 0xC));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x8)));
    *(unsigned int *)(((int)stk + 12)) = t5;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((((int)stk + 20) + 0x8) + 0x10)));
    return (VQFBfree((*(int *)(((int)stk + 20))), *(Stk5 *)((int)stk + 0)));
}

int FUN_0c19f672(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x30));
    { struct mv9 { int w[9]; }; *(struct mv9 *)((t0 + 0x28)) = *(struct mv9 *)((t0 + 0x4)); }
    *(unsigned int *)((t0 + 0x30)) = ((((struct o54_int *)(t0))->v));
    *(unsigned short *)((t0 + 0x0)) = ((*(short *)((t0 + 0x0))) | (*(short *)((t0 + 0x4))));
    (((struct o74_ushort *)(t0))->v) = 0x0;
    (((struct o4C_ushort *)(t0))->v) = (((((struct o4C_short *)(t0))->v)) | ((((struct o50_short *)(t0))->v)));
    return 0x4C;
}

int FUN_0c187cac(int a4, Stk3 s)
{
    int stk[14];
    register int t2;

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    *(unsigned int *)(((int)stk + 8)) = a4;
    t2 = ((((int)stk + 8) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 8) + 0x8) + 0x4)) != 0) {
        t2 = ((((int)stk + 8) + 0x8) + 0x8);
    }
    *(int *)((int)stk + 4) = t2;
    return (printf_format_core(0x1, 0x0, (*(int *)(((int)stk + 8))), s.w[0], t2));
}

int FUN_0c187ce8(int a4, Stk3 s)
{
    int stk[14];
    register int t2;

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    stk[5] = s.w[2];
    *(unsigned int *)(((int)stk + 8)) = a4;
    t2 = ((((int)stk + 8) + 0x8) + 0x4);
    if ((0x3 & ((((int)stk + 8) + 0x8) + 0x4)) != 0) {
        t2 = ((((int)stk + 8) + 0x8) + 0x8);
    }
    *(int *)((int)stk + 4) = t2;
    return (FUN_0c194d80(0x1, 0x0, (*(int *)(((int)stk + 8))), s.w[0], t2));
}

int FUN_0c2b48a8(int a4, int a5, int a6, int a7)
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

void FUN_0c2c6be4(int a4, int a5, int a6, int a7)
{
    { struct mv2 { int w[2]; }; *(struct mv2 *)(a6) = *(struct mv2 *)(a4); }
    *(unsigned int *)((a7 + 0x4)) = (*(int *)((a6 + 0x4)));
    if ((int)(*(int *)((a6 + 0x4))) > (int)a5) {
        *(unsigned int *)((a6 + 0x4)) = a5;
    }
    *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a6 + 0x0))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a7 + 0x4)) = ((*(int *)((a7 + 0x4))) - (*(int *)((a6 + 0x4))));
}

int nlMakeFastModelProjectMatrixVM(void)
{
    nlPushMatrix(0xC8689A8);
    nlMultiMatrix(((((struct oC_int *)0xC868794)->v)));
    nlMultiMatrix(((((struct o0_int *)0xC868794)->v)));
    nlMultiPushedMatrix();
    return FUN_0c17b860(0x1);
}

int vsprintf(int a4, int a5, int a6)
{
    return (printf_format_core(0x1, 0x0, a4, a5, a6));
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

int FUN_0c1918f2(int a4)
{
    { struct mv7 { int w[7]; }; *(struct mv7 *)(a4) = *(struct mv7 *)(0xC8A9890); }
    return 0x0;
}
