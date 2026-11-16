/* Straight-line functions with calls and guards (batch gen_mc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o37C4_float { char p[0x37C4]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o41C_int { char p[0x41C]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c070320(int);
int FUN_0c073eb8(int, int, int);
int FUN_0c0752a8(int);
int FUN_0c075328(int);
int FUN_0c07a6aa(int);
int FUN_0c07d666(int, int);
int FUN_0c07da48(int);
int FUN_0c07db58(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c081dfc(int);
int FUN_0c085256(int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c14f8aa(int, int, int);
int FUN_0c16f890(int, int, int, int, int);
int FUN_0c175cac(void);
int FUN_0c17623e(void);
int FUN_0c1766e6(int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c17a4c0(int, int);
extern int FUN_0c187798();
int FUN_0c187d74(int, int);
int dbg_printf(int, ...);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c13f398(int a4);
int FUN_0c162348(int a4);
int FUN_0c011974(int a4);
int FUN_0c07a428(int a4);
int FUN_0c085398(int a4, int a5);
int FUN_0c09beb4(int a4);
int FUN_0c0a797c(int a4, int a5, int a6);
int FUN_0c16fd4a(int a4, int a5);
int FUN_0c176890(void);
int FUN_0c011b04(int a4);

int FUN_0c13f398(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC13F4A0;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c03733c(t1, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        FUN_0c187798();
        thunk_FUN_0c058310(((*(int *)(((((*(int *)0xC2A2220) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t1 + 0x28));
        u0 = *(float *)0xC13F4F0;
        u1 = math_sin_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000));
        u2 = (((struct o28_float *)(t1))->v);
        u3 = (u1 * (math_cos_angle16(((-(*(int *)((t1 + 0x38)))) + 0x14000))));
        u1 = u2;
        u1 = u1 + u0 * u3;
        (((struct o28_float *)(t1))->v) = u1;
        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) - (((math_cos_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000))) * u0)));
        u1 = math_sin_angle16(((-(*(int *)((t1 + 0x34)))) + 0x14000));
        u2 = (((struct o30_float *)(t1))->v);
        u3 = (u1 * (math_sin_angle16(((-(*(int *)((t1 + 0x38)))) + 0x14000))));
        u1 = u2;
        u1 = u1 + u0 * u3;
        (((struct o30_float *)(t1))->v) = u1;
    } else {
        t0 = t1;
    }
    return t0;
}

int FUN_0c162348(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = math_sin_angle16((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0x14)) * 0x71C));
    u1 = 4.0f;
    u1 = u1 + 0.5f * u0;
    (((struct o40_float *)(a4))->v) = u1;
    (((struct o44_float *)(a4))->v) = u1;
    (((struct o48_float *)(a4))->v) = u1;
    u0 = math_sin_angle16((*(short *)((a4 + 0x1E))));
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + (int)(((float)(((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 0x4) * 65536.0f) / 360.0f));
    u1 = math_sin_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u3 = ((((struct o28_float *)(a4))->v));
    u3 = u3 + u2 * u1;
    (((struct o28_float *)(a4))->v) = u3;
    u1 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x4000));
    u2 = (u0 * 4.5f);
    u0 = ((((struct o30_float *)(a4))->v));
    u0 = u0 + u2 * u1;
    (((struct o30_float *)(a4))->v) = u0;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 2.5f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c011974(int a4)
{
    int stk[16];
    register int t15;
    register int t21;
    register int t36;

    FUN_0c17a4c0(0x3, 0x9);
    *(int *)((int)stk + 28) = (unsigned char)(*(signed char *)((a4 + 0x3)));
    *(int *)((int)stk + 24) = 0xC1A5BC8;
    dbg_printf(0xC1A5BC8);
    FUN_0c17a4c0(0x3, 0xA);
    *(int *)((int)stk + 20) = ((*(signed char *)0xC30985A));
    *(int *)((int)stk + 16) = 0xC1A5BE8;
    dbg_printf(0xC1A5BE8);
    FUN_0c17a4c0(0x3, 0xB);
    *(int *)((int)stk + 12) = ((*(signed char *)0xC30985B));
    *(int *)((int)stk + 8) = 0xC1A5C08;
    dbg_printf(0xC1A5C08);
    FUN_0c17a4c0(0x3, 0xC);
    *(int *)((int)stk + 4) = ((*(signed char *)0xC305416));
    *(int *)((int)stk + 0) = 0xC1A5C28;
    dbg_printf(0xC1A5C28);
    t15 = *(signed char *)((a4 + 0x3));
    if ((unsigned char)t15 != 0) {
        
        t36 = (unsigned char)t15;
    } else {
        (((struct o0_uint *)0xC304414)->v) = 0x20;
        FUN_0c036de8(0x20, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        *(unsigned char *)0xC30985A = 0x0;
        FUN_0c02bad0();
        FUN_0c02bae6();
        (((struct o0_uchar *)0xC30A346)->v) = 0x2;
        (((struct o3_uchar *)0xC30A346)->v) = 0x6;
        (((struct o4_uint *)0xC304414)->v) = 0x0;
        t21 = 0xC30A346;
        for (;;) {
            if ((int)((((struct o4_int *)0xC304414)->v)) >= (int)((*(signed char *)0xC30A349) + 0x1)) {
                break;
            }
            t21 = ((((struct o4_int *)0xC304414)->v));
            t21 = (*(signed char *)((0xC20BA88 + t21)));
            *(unsigned char *)((((((((struct o4_int *)0xC304414)->v)) * 0x86) + 0xC309E0A) + 0x2)) = t21;
            t21 = ((((struct o4_int *)0xC304414)->v));
            t21 = (t21 << 1);
            t21 = (*(short *)((0xC20BA68 + t21)));
            *(unsigned short *)((((((((struct o4_int *)0xC304414)->v)) * 0x86) + 0xC309E0A) + 0x4)) = t21;
            t21 = 0xC20BA98;
            t21 = (FUN_0c187d74((((((((struct o4_int *)0xC304414)->v)) * 0x86) + 0xC309E0A) + 0x6), (*(int *)(((((((struct o4_int *)0xC304414)->v)) << 2) + t21)))));
            (((struct o4_uint *)0xC304414)->v) = (((((struct o4_int *)0xC304414)->v)) + 0x1);
        }
        t36 = t21;
    }
    return t36;
}

int FUN_0c07a428(int a4)
{
    register int t0;

    t0 = FUN_0c075328(a4);
    if ((signed char)t0 != 0) {
        return FUN_0c073eb8(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0x190));
    }
    FUN_0c037bf6(a4);
    t0 = FUN_0c0752a8(a4);
    if (t0 != 1) {
        if (t0 != 2) {
        } else {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0xC000);
            FUN_0c07a6aa(a4);
        }
    } else {
        if ((*(short *)((a4 + 0x1C))) == 0) {
            FUN_0c073eb8(a4, (*(signed char *)((a4 + 0x1))), ((*(int *)0xC25AD1C) + 0x190));
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x2) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0xC000);
            return FUN_0c085cac(a4, 0xE, 0x0);
        }
        (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC07A5AC)->v));
        (((struct o37C4_float *)(a4))->v) = ((((struct o4_float *)0xC07A5AC)->v));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * ((((struct o37C4_float *)(a4))->v)));
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * ((((struct o37C4_float *)(a4))->v)));
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}


int FUN_0c09beb4(int a4)
{
    int t0;
    register int t1;

    FUN_0c037bf6(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
        FUN_0c07db58(a4);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
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
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a797c(int a4, int a5, int a6)
{
    int stk[7];
    register int t1;
    register float u3;
    register float u6;
    register float u10;
    register int t13;
    register float u17;
    register float u21;
    register float u32;
    register int t40;
    register int t41;
    register int t51;
    register int t53;

    if (((*(int *)0xC542260) & 3) == 0) {
        t1 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        u3 = *(float *)0xC0A7AB4;
        u6 = (*(float *)(((int)stk + 0)));
        u6 = u6 + u3 * (math_sin_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 0)) = u6;
        u10 = (*(float *)(((int)stk + 8)));
        u10 = u10 + u3 * (math_cos_angle16(((*(int *)((a4 + 0x38))) + 0x4000)));
        *(float *)(((int)stk + 8)) = u10;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
        t13 = ((int (*)(void))(FUN_0c187798))();
        u17 = (*(float *)(((int)stk + 0)));
        u17 = u17 + u3 * (math_sin_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 0)) = u17;
        u21 = (*(float *)(((int)stk + 8)));
        u21 = u21 + u3 * (math_cos_angle16(((*(int *)((a4 + 0x38))) - 16384)));
        *(float *)(((int)stk + 8)) = u21;
        FUN_0c14f8aa((*(signed char *)((a4 + 0x1))), ((int)stk + 0), 0x2);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    u32 = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    if ((int)(int)u32 <= (int)0x2F) {
        t40 = (a4 + 0x28);
        t41 = (a4 + 0x4C);
        if ((int)(int)u32 < (int)(*(int *)0xC25D3CC)) {
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            t40 = (a4 + 0x4C);
            t41 = (a4 + 0x58);
        }
        math_vec3_accumulate(t40, t41);
    }
    t51 = FUN_0c037bf6(a4);
    t53 = (unsigned char)t51;
    if ((unsigned char)t51 != 0) {
        t53 = (FUN_0c085d0c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t53;
}

int FUN_0c16fd4a(int a4, int a5)
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
    v0_2 = a4;
    v0_3 = a5;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_1 = *(int *)0xC475AA0;
    v0_0 = (0xC475A64);
    v0_2 = (v0_1);
    if ((v0_1 != 0)) goto L_C16FD66;
    v0_5 = (0x8C);
    L_C16FD68:;
    v0_1 = (*(int *)((v0_0 + v0_5)));
    v0_5 = (v0_2);
    v0_1 = v0_1;
    v0_6 = (0xC4B40DC);
    if ((v0_2 == 0)) goto L_C16FD88;
    if ((v0_5 == 1)) goto L_C16FD8C;
    if ((v0_5 == 2)) goto L_C16FD92;
    if ((v0_5 == 3)) goto L_C16FDAC;
    if (!((v0_5 == 4))) goto L_C16FDCC;
    v0_3 = *(signed char *)0xC53249A;
    v0_2 = (v0_3);
    if ((v0_3 == 12)) goto L_C16FDC4;
    if ((v0_2 != 13)) goto L_C16FDC8;
    goto L_C16FDC4;
    L_C16FDCC:;
    v0_2 = (*(int *)(((int)stk + 4))) != 0;
    v0_4 = ((FUN_0c037320(((((struct o40_int *)(v0_0))->v)), v0_3)));
    if (v0_2) goto L_C16FDF0;
    *(int *)((int)stk + 0) = 0x1;
    v0_2 = FUN_0c16f890(0xC475AA8, 0xFFFFFFFF, v0_4, 0x1, 0x1);
    v0_5 = (v0_2);
    if ((v0_2 == 0)) goto L_C16FE44;
    L_C16FDF0:;
    v0_3 = (((struct o44_int *)(v0_0))->v);
    v0_5 = (v0_3);
    v0_2 = (0x0);
    v0_6 = (0x1);
    if ((v0_3 != -1)) goto L_C16FE1A;
    v0_3 = (v0_2);
    v0_7 = (v0_2);
    if (((int)v0_4 <= 0)) goto L_C16FE44;
    L_C16FE04:;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + v0_3) + 0x0))) + 0x0)) = v0_6;
    v0_0 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x4));
    v0_7 = ((v0_7 + 0x1));
    if (v0_0) goto L_C16FE04;
    L_C16FE44:;
    return v0_5;
    L_C16FE1A:;
    v0_3 = (v0_2);
    v0_7 = (v0_2);
    if (((int)v0_4 <= 0)) goto L_C16FE34;
    L_C16FE22:;
    *(unsigned char *)(((*(int *)((((0xC4 + v0_1) + v0_3) + 0x0))) + 0x0)) = v0_2;
    v0_5 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_3 = ((v0_3 + 0x4));
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C16FE22;
    L_C16FE34:;
    *(unsigned char *)(((*(int *)((((((((struct o44_int *)(v0_0))->v)) << 2) + (0xC4 + v0_1)) + 0x0))) + 0x0)) = v0_6;
    v0_5 = (0x44);
    goto L_C16FE44;
    L_C16FDC4:;
    v0_3 = ((*(int *)((v0_6 + 0x4))));
    goto L_C16FDCC;
    L_C16FDC8:;
    v0_3 = (((((struct o30_int *)0xC4B40CC)->v)));
    goto L_C16FDCC;
    L_C16FDAC:;
    v0_3 = (((((struct o0_int *)0xC4B40CC)->v)));
    goto L_C16FDCC;
    L_C16FD92:;
    v0_3 = (((((struct oC_int *)0xC4B40CC)->v)));
    goto L_C16FDCC;
    L_C16FD8C:;
    v0_3 = ((*(int *)0xC4B410C));
    goto L_C16FDCC;
    L_C16FD88:;
    v0_3 = ((*(int *)((v0_6 + 0x0))));
    goto L_C16FDCC;
    L_C16FD66:;
    v0_5 = (0x90);
    goto L_C16FD68;
}

int FUN_0c176890(void)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t32;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0xC5426C4;
    for (;;) {
        (((struct o64_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
        if ((unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10))) != ((((struct o68_int *)((0xC475F28 + (t0 * 0x74))))->v))) {
            (((struct o64_uint *)((0xC475F28 + (t0 * 0x74))))->v) = (unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10)));
            (((struct o6C_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
            (((struct o70_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
        } else {
            if ((int)((((struct o6C_int *)((0xC475F28 + (t0 * 0x74))))->v)) > (int)0x14) {
                (((struct o70_uint *)((0xC475F28 + (t0 * 0x74))))->v) = (((((struct o70_int *)((0xC475F28 + (t0 * 0x74))))->v)) + 0x1);
                if ((int)((((struct o70_int *)((0xC475F28 + (t0 * 0x74))))->v)) > (int)0x2) {
                    (((struct o70_uint *)((0xC475F28 + (t0 * 0x74))))->v) = 0x0;
                    (((struct o64_uint *)((0xC475F28 + (t0 * 0x74))))->v) = (unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10)));
                }
            } else {
                (((struct o6C_uint *)((0xC475F28 + t2)))->v) = (((((struct o6C_int *)((0xC475F28 + t2)))->v)) + 0x1);
            }
        }
        t0 = (t0 + 0x1);
        t32 = (0x68 + (0xC475F28 + t1));
        t1 = (t1 + 0x74);
        *(unsigned int *)((t32 + 0x0)) = (unsigned short)(*(short *)((t3 + 0x10)));
        t3 = (t3 + 0x28);
        t2 = (t2 + 0x74);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    if (((unsigned short)(*(short *)0xC5426FC) & 128) != 0) {
        *(unsigned int *)0xC2A5C50 = 0x5;
    } else {
        *(unsigned int *)0xC2A5C50 = 0x1;
    }
    FUN_0c17623e();
    FUN_0c1766e6(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    return FUN_0c175cac();
}

int FUN_0c011b04(int a4)
{
    register int t1;
    register int t16;
    register int t31;
    register int t39;
    register int t40;

    t1 = (((struct o41C_int *)(a4))->v);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
        (((struct o28_float *)(a4))->v) = -120.0f;
        (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20BAD4 + ((*(signed char *)(((0x41C + a4) + 0x6))) << 2))));
        *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
    }
    if ((*(signed char *)((t1 + 0xA))) == (unsigned char)(*(signed char *)(((0x41C + a4) + 0x7)))) {
        if ((*(signed char *)((t1 + 0x8))) == 4) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        t16 = *(signed char *)((a4 + 0xA8));
        if (t16 == 1) {
            if ((*(signed char *)(((0x41C + a4) + 0x6))) != (*(signed char *)((t1 + 0x8)))) {
                *(unsigned char *)(((0x41C + a4) + 0x6)) = (*(signed char *)((t1 + 0x8)));
                if ((*(signed char *)(((0x41C + a4) + 0x6))) != 4) {
                    (((struct o2C_float *)(a4))->v) = (*(float *)((0xC20BAD4 + ((*(signed char *)(((0x41C + a4) + 0x6))) << 2))));
                }
            }
            t31 = *(signed char *)((t1 + 0xB));
            if (t31 == 1) {
                if ((*(signed char *)((t1 + 0xB))) != (unsigned char)(*(signed char *)(((0x41C + a4) + 0x8)))) {
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = (*(signed char *)((t1 + 0xB)));
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                t39 = FUN_0c01c62a(a4);
                t40 = (signed char)t39;
                if ((signed char)t39 != 0) {
                    *(unsigned char *)((t1 + 0xB)) = 0x2;
                    *(unsigned char *)(((0x41C + a4) + 0x8)) = 0x0;
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    t40 = 0x44;
                }
                return t40;
            }
            if (t31 == 0) {
                return FUN_0c012c34(a4);
            }
            return t31;
        }
        return t16;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x0;
    return 0xA8;
}
