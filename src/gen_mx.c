/* Straight-line functions with calls and guards (batch gen_mx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10C_int { char p[0x10C]; int v; };
struct o125_uchar { char p[0x125]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o6CC_int { char p[0x6CC]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c02ee3e(void);
extern int FUN_0c02f6da();
int FUN_0c03744a(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05879c(int, int, int, float);
int FUN_0c064f8e(int, int);
int FUN_0c06d540(int);
int FUN_0c06d570(int, int, int, int);
int FUN_0c06d78c(int);
int FUN_0c06d850(int);
int FUN_0c06d880(int);
int FUN_0c06d950(int);
int FUN_0c07e328(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0bc25e(void);
int FUN_0c0c213c(int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0ef0cc(int);
int FUN_0c0ef102(int);
int FUN_0c0ef162(int, int, int);
int FUN_0c0ef1d8(int, int);
int FUN_0c0ef24a(int);
int FUN_0c0ef70e(int);
int FUN_0c0f3d1c(int);
int FUN_0c0f3db8(int, int, int);
int FUN_0c0f3dc8(int, int);
int FUN_0c0f3e66(int, float);
int FUN_0c0f3e9e(int);
int FUN_0c15b478(int, int, int, int, int, int, int, int);
int FUN_0c1679c2(int, int, int);
int FUN_0c167a28(int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
float math_cos_angle16(int);
float math_signed_sqrt(float);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int mdl_vtx_get_pos(int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_set_pos(int);
int thunk_FUN_0c05abb2(int, int);
int vsprintf(int, int, int);
int FUN_0c0bffbc(int a4);
int FUN_0c0c56d2(int a4, int a5, int a6, int a7);
int FUN_0c0eab4c(int a4, int a5, int a6, int a7);
int FUN_0c0ef828(int a4, int a5, int a6);
int FUN_0c117a6e(Stk3 s);
int FUN_0c122714(int a4);
int FUN_0c12d170(int a4, int a5, int a6, int a7, float f4);
int FUN_0c1363a4(int a4);
int FUN_0c167e80(int a4, int a5, int a6);
int FUN_0c07f720(int a4, int a5, int a6);
int FUN_0c0f3f68(int a4);
int FUN_0c13e518(int a4, int a5, int a6, int a7);
float FUN_0c060290(int a4, int a5);
int FUN_0c06d980(int a4, int a5, int a6, int a7);

int FUN_0c0bffbc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    float u0;
    register float u1;

    t1 = *(signed char *)0xC472462;
    t2 = *(signed char *)0xC542237;
    if (((signed char)t2 == 1) && ((t0 = *(signed char *)0xC54223C, t0 == 1) && (u0 = (((struct o0_float *)0xC0C00F8)->v), u1 = (((struct o2C_float *)(a4))->v), u0 > u1))) {
        (((struct o6C_float *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o4_float *)0xC0C00F8)->v));
        (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o8_float *)0xC0C00F8)->v));
        (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((float)(((int)((int)(FUN_0c179ac0()) % (int)0xA0)) - 80) * ((((struct o14_float *)0xC0C00F8)->v)));
    } else {
        t0 = *(int *)((((signed char)t2 << 2) + 0xC25E220));
        t2 = *(signed char *)0xC54223C;
        (((struct o6C_float *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v) = (*(float *)((((((t2 << 1) + t2) << 2) + t0) + 0x0)));
        (((struct o70_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o4_float *)(((((t2 << 1) + t2) << 2) + t0)))->v));
        (((struct o74_float *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x264) + 0xC471ACC)))->v) = ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + t0)))->v));
    }
    (((struct o4_ushort *)0xC47245C)->v) = 0x1;
    FUN_0c0bc25e();
    t0 = *(signed char *)0xC472462;
    *(unsigned int *)(((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC) + 0x8)) = ((((struct o0_int *)0xC47245C)->v));
    return (((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC);
}

int FUN_0c0c56d2(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
        if (t1 != 1) {
        } else {
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134))) == 0) {
                (((struct o125_uchar *)(a4))->v) = 0x0;
            }
        }
    } else {
        t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x134));
        if ((t1 != 0) && ((signed char)t1 != 1)) {
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CB))), a6, a7);
            if ((*(signed char *)((a4 + 0x41F))) == 0) {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
            } else {
                t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
            }
            FUN_0c07e328(a4, t1);
            FUN_0c0c213c(a4);
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    t1 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
    if (t1 != 33) {
        t2 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715));
        if (t2 != 8) {
            return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
        }
        return t2;
    }
    return t1;
}

int FUN_0c0eab4c(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (v0_0);
    v0_0 = (0x0);
    if ((v0_3 == 0)) goto L_C0EAB64;
    if ((v0_2 == 1)) goto L_C0EABA4;
    return FUN_0c03f346(v0_1, R5, a6, a7);
    L_C0EABA4:;
    if (((*(short *)((v0_1 + 0x1C))) == 0)) goto L_C0EABC6;
    *(unsigned short *)((v0_1 + 0x1C)) = ((*(short *)((v0_1 + 0x1C))) - 1);
    (((struct o6C_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = (((((struct o4C_float *)(v0_1))->v)) + -24.0f);
    L_C0EABD2:;
    if (((*(short *)((v0_1 + 0x1C))) != 0)) goto L_C0EABDC;
    v0_2 = (0xFFFFFFEF);
    L_C0EABDE:;
    (((struct o12C_ushort *)(v0_1))->v) = v0_2;
    v0_2 = (0x132);
    if (((*(signed char *)((v0_1 + 0x132))) == 0)) goto L_C0EAC0C;
    v0_3 = *(short *)((v0_1 + 0x1C));
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C0EAC0C;
    (((struct o132_uchar *)(v0_1))->v) = v0_0;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x1E;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) ^ 0x1);
    v0_2 = ((thunk_FUN_0c05abb2(0x46, (v0_1 + 0x28))));
    L_C0EAC0C:;
    v0_3 = *(signed char *)0xC54098D;
    v0_0 = (v0_3);
    if (((int)v0_3 < (int)0x8)) goto L_C0EAC30;
    v0_2 = (0xE);
    if (((int)v0_0 > (int)0xE)) goto L_C0EAC30;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C0EAC30:;
    return v0_2;
    L_C0EABDC:;
    v0_2 = (0x0);
    goto L_C0EABDE;
    L_C0EABC6:;
    (((struct o6C_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = ((((struct o4C_float *)(v0_1))->v));
    goto L_C0EABD2;
    L_C0EAB64:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oAC_ushort *)(v0_1))->v) = 0x1;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    v0_2 = (0x1B);
    if (((int)(*(signed char *)((v0_1 + 0x1B))) < 0)) goto L_C0EAB8E;
    (((struct oA4_uint *)(v0_1))->v) = ((*(int *)((((*(signed char *)((v0_1 + v0_2))) << 2) + 0xC540D94))) + 0x64);
    L_C0EAB8E:;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    (((struct o4C_float *)(v0_1))->v) = ((((struct o6C_float *)(((((struct oC4_int *)(v0_1))->v))))->v));
    (((struct o12E_ushort *)(v0_1))->v) = v0_0;
    goto L_C0EABA4;
}

int FUN_0c0ef828(int a4, int a5, int a6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R11;
    register int R12;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_3 = a6;
    v0_4 = *(signed char *)((v0_1 + 0x15));
    v0_2 = (v0_4);
    v0_0 = (v0_1);
    v0_1 = (0x0);
    if ((v0_4 == 0)) goto L_C0EF854;
    if ((v0_2 == 1)) goto L_C0EF868;
    if ((v0_2 == 2)) goto L_C0EF8D6;
    if ((v0_2 == 3)) goto L_C0EF8FA;
    FUN_0c0ef1d8(v0_0, a5);
    L_C0EF90A:;
    return FUN_0c0ef0cc(v0_0);
    L_C0EF8FA:;
    FUN_0c0ef162(v0_0, 0x0, v0_3);
    FUN_0c0ef102(v0_0);
    goto L_C0EF90A;
    L_C0EF8D6:;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0EF8EE;
    (((struct o15_uchar *)(v0_0))->v) = 0x63;
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    L_C0EF8F2:;
    return FUN_0c0ef102(v0_0);
    L_C0EF8EE:;
    FUN_0c0ef70e(v0_0);
    goto L_C0EF8F2;
    L_C0EF868:;
    v0_3 = *(signed char *)((v0_0 + 0x16));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0EF878;
    if ((v0_2 == 1)) goto L_C0EF88C;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    (((struct o16_uchar *)(v0_0))->v) = v0_1;
    (((struct o12A_ushort *)(v0_0))->v) = 0xF;
    (((struct o12C_ushort *)(v0_0))->v) = 0xFFFFFFEF;
    L_C0EF8CE:;
    return FUN_0c0ef24a(v0_0);
    L_C0EF88C:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) + ((((struct o50_float *)(v0_0))->v)));
    v0_1 = *(short *)((v0_0 + 0x1E));
    *(unsigned short *)((v0_0 + 0x1E)) = (v0_1 - 1);
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0EF8CE;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o50_float *)(v0_0))->v) = 0.0f;
    goto L_C0EF8CE;
    L_C0EF878:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1E)) = 0x1E;
    (((struct o50_float *)(v0_0))->v) = (1.0f + 1.0f);
    goto L_C0EF88C;
    L_C0EF854:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0x1A4;
    (((struct o5C_float *)(v0_0))->v) = -1.0f;
    goto L_C0EF868;
}

int FUN_0c117a6e(Stk3 s)
{
    int stk[19];
    register int t3;
    register int t5;
    register int t7;
    register int t11;
    register int t12;
    register int t17;
    register int t23;
    register int t24;
    register int t4;

    stk[8] = s.w[0];
    stk[9] = s.w[1];
    stk[10] = s.w[2];
    (((struct o4_uint *)0xC474720)->v) = ((((struct o0_int *)0xC474720)->v));
    (((struct o0_uint *)0xC474720)->v) = s.w[0];
    FUN_0c02ee3e();
    if (s.w[0] == -1) {
        *(int *)((int)stk + 16) = 0xC1FC7EC;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x18;
        t24 = (((int (*)(int, int, int, int, int, int, int))(FUN_0c02f6da))(0x0, 0x0, 0x0, 0x18, 0x18, 0x0, 0xC1FC7EC));
    } else {
        t3 = 0x0;
        t5 = 0x0;
        for (;;) {
            t7 = *(short *)((((t3 << 2) << 2) + (*(int *)((0xC295DFC + (s.w[0] << 2))))));
            if (t7 == -1) {
                break;
            }
            t11 = *(int *)((((*(int *)((0xC295DFC + (s.w[0] << 2)))) + t5) + 0x8));
            t12 = ((((int)stk + 20) + 0x20) + 0x4);
            if ((0x3 & ((((int)stk + 20) + 0x20) + 0x4)) != 0) {
                t12 = ((((int)stk + 20) + 0x20) + 0x8);
            }
            t4 = 0xC473A44;
            t4 = (t4 + (vsprintf(0xC473A44, t11, t12)));
            *(unsigned char *)((t4 + 0x0)) = 0x0;
            *(int *)((int)stk + 16) = 0xC473A44;
            *(int *)((int)stk + 12) = 0xC1FC7F0;
            t4 = (*(int *)((0xC295DFC + (s.w[0] << 2))));
            t4 = (t4 + t5);
            t17 = (*(short *)((t4 + 0x6)));
            *(int *)((int)stk + 8) = t17;
            *(int *)((int)stk + 4) = 0x18;
            t23 = ((int (*)(int, int, int, int, int, int, int, int))(FUN_0c02f6da))((int)(((((struct o0_float *)0xC2A0CB0)->v)) + (float)(*(short *)((t4 + 0x0)))), (int)(((((struct o4_float *)0xC2A0CB0)->v)) + (float)(*(short *)((t4 + 0x2)))), (*(short *)((t4 + 0x4))), 0x18, 0x18, t17, 0xC1FC7F0, 0xC473A44);
            t5 = (t5 + 0x10);
            t3 = (t3 + 0x1);
        }
        t24 = t7;
    }
    return t24;
}

int FUN_0c122714(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o0_float *)0xC122848)->v);
    u1 = (((struct o4_float *)0xC122848)->v);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0x24);
    (((struct o78_uint *)(a4))->v) = (int)(((float)(((t0 << 2) + t0) << 1) * u0) / u1);
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0x24);
    (((struct o7C_uint *)(a4))->v) = (int)(((float)(((t0 << 2) + t0) << 1) * u0) / u1);
    (((struct o80_uint *)(a4))->v) = 0x0;
    t0 = (int)((int)(FUN_0c179ac0()) % (int)0xC8);
    u0 = (((struct o10_float *)0xC122848)->v);
    u1 = math_sin_angle16(((((struct o7C_int *)(a4))->v)));
    u2 = (u1 * (math_cos_angle16(((((struct o78_int *)(a4))->v)))));
    u1 = (u2 * ((float)t0 + u0));
    u1 = -u1;
    (((struct o6C_float *)(a4))->v) = u1;
    u1 = math_cos_angle16(((((struct o7C_int *)(a4))->v)));
    u2 = (u1 * (math_cos_angle16(((((struct o78_int *)(a4))->v)))));
    u1 = (u2 * ((float)t0 + u0));
    u1 = -u1;
    (((struct o74_float *)(a4))->v) = u1;
    (((struct o70_float *)(a4))->v) = ((math_sin_angle16(((((struct o78_int *)(a4))->v)))) * ((float)t0 + u0));
    *(unsigned char *)((a4 + 0x2)) = (((int)((int)(FUN_0c179ac0()) % (int)0xA)) + 0xA);
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    return 0x8C;
}

int FUN_0c12d170(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
    *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
    (((struct o12A_ushort *)(a4))->v) = 0x0;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
                t1 = t0;
                if (t0 != 2) {
                } else {
                    t0 = *(short *)((a4 + 0x1C));
                    (((struct o20_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)t0 / 10.0f);
                    if (!(((float)t0 / 10.0f) > 0.0f)) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                    }
                    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    t0 = (((struct oC4_int *)(a4))->v);
                    u0 = (((struct o20_float *)(t0))->v);
                    (((struct o1C_float *)(t0))->v) = u0;
                    (((struct o18_float *)(t0))->v) = u0;
                    t1 = 0x18;
                }
                t0 = t1;
            } else {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0700000003f);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.0700000003f);
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0700000003f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t2 = 0x15;
                }
                t0 = t2;
            }
            t1 = t0;
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t1 = t2;
        }
        return t1;
    }
    return FUN_0c03f346(a4, (0x12A + a4), a6, a7);
}

int FUN_0c1363a4(int a4)
{
    int stk[4];
    register int t1;
    register int t9;
    register float u14;

    *(unsigned int *)(((int)stk + 0)) = ((((struct oC4_int *)(a4))->v));
    t1 = *(int *)(((0x41C + a4) + 0x8));
    *(unsigned int *)(((0x41C + a4) + 0x8)) = (t1 + 0xE38);
    *(unsigned int *)(((0x41C + a4) + 0xC)) = (t1 + 0xE38);
    *(unsigned int *)(((0x41C + a4) + 0x4)) = 0x0;
    mdl_vtx_iter_begin((*(int *)((((((struct o10C_int *)((*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC)))))->v)) + 0x0))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))));
    for (;;) {
        t9 = mdl_vtx_iter_next();
        if (t9 != 0) {
            break;
        }
        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
        u14 = (*(float *)(((int)stk + 8)));
        u14 = u14 + 30.0f * (math_sin_angle16((*(int *)(((0x41C + a4) + 0xC)))));
        *(float *)(((int)stk + 8)) = u14;
        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
        if ((*(int *)(((0x41C + a4) + 0x4))) != 0) {
            *(unsigned int *)(((0x41C + a4) + 0xC)) = ((*(int *)(((0x41C + a4) + 0xC))) + 0x2AAA);
        }
        *(unsigned int *)(((0x41C + a4) + 0x4)) = ((-(*(int *)(((0x41C + a4) + 0x4)))) + 0x1);
    }
    return t9;
}

int FUN_0c167e80(int a4, int a5, int a6)
{
    int stk[23];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t9;
    register int t23;
    register int t4;
    register int t7;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t1 = ((int (*)(void))(FUN_0c187798))();
    t2 = ((int (*)(void))(FUN_0c187798))();
    t3 = ((int (*)(void))(FUN_0c187798))();
    t5 = ((int (*)(int, int, int))(FUN_0c187798))(0xC2A35B0, 0x0, t4);
    *(unsigned int *)(((int)stk + 84)) = ((*(int *)(((int)stk + 84))) + (*(int *)((t7 + 0x0))));
    t9 = FUN_0c167a28(a4, 0x0, (((int)stk + 32) + 0x30), 0x1);
    t23 = t9;
    if (t9 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t9))->v)), 0x5, 0x52, (*(int *)0xC4B40CC));
        *(unsigned char *)((t9 + 0x1)) = a4;
        *(unsigned int *)((t9 + 0x4)) = 0xC167B36;
        *(int *)((int)stk + 28) = (((int)stk + 32) + 0x18);
        *(int *)((int)stk + 24) = (((int)stk + 28) + 0x28);
        *(int *)((int)stk + 20) = 0x68;
        *(int *)((int)stk + 16) = 0x64;
        FUN_0c15b478(a4, (t9 + 0x64), t9, (*(int *)((((((struct o6CC_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), 0x64, 0x68, (((int)stk + 28) + 0x28), (((int)stk + 32) + 0x18));
        *(int *)((int)stk + 12) = (((int)stk + 16) + 0x10);
        *(int *)((int)stk + 8) = (((int)stk + 12) + 0x20);
        *(int *)((int)stk + 4) = 0x68;
        *(int *)((int)stk + 0) = 0x64;
        FUN_0c15b478(a4, (t9 + 0x64), t9, (*(int *)((((((struct o6CC_int *)((*(int *)0xC4B40CC)))->v)) + 0x0))), 0x64, 0x68, (((int)stk + 12) + 0x20), (((int)stk + 16) + 0x10));
        t23 = (FUN_0c1679c2((*(signed char *)((t9 + 0x1))), (t9 + 0x28), (t9 + 0x34)));
    }
    return t23;
}

int FUN_0c07f720(int a4, int a5, int a6)
{
    int stk[10];
    int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u11;
    register float u43;
    register float u20;
    register int t47;
    register int t1;
    register float u9;
    register float u10;
    register float u12;
    register int t13;
    register int t14;
    register int t15;
    register int t38;
    register int t40;
    register int t41;
    register int t42;
    int t23;
    register int t24;
    register float u37;
    int t27;
    register int t28;
    register float u35;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = 0xC07F810;
    t2 = 0xC532498;
    t3 = a5;
    t4 = a6;
    t5 = 0xC532498;
    t6 = 0x0;
    t7 = 0xC532498;
    t8 = 0xC532498;
    u11 = 99999.0f;
    for (;;) {
        u43 = u9;
        if ((a4 != ((t6 * 0x3938) + 0xC532498)) && ((t0 = 0x3719, t13 = *(signed char *)((((t6 * 0x3938) + 0xC532498) + t0)), t1 = t13, t14 = *(signed char *)((a4 + t0)), t14 != t1) && (t0 = 0x3714, t15 = *(signed char *)((((t6 * 0x3938) + 0xC532498) + t0)), t15 != 0))) {
            t0 = 0x28;
            u10 = (*(float *)((a4 + t0)));
            u9 = (*(float *)((t8 + t0)));
            t0 = 0x30;
            u12 = (*(float *)((a4 + t0)));
            u10 = (u10 - u9);
            u12 = (u12 - (*(float *)((t8 + t0))));
            u9 = u12;
            u9 = (u9 * u12);
            u20 = u9;
            u20 = u20 + u10 * u10;
            u9 = u20;
            t1 = 0xC064F8E;
            t3 = ((int)stk + 0);
            u12 = (math_signed_sqrt(u9));
            t3 = (t3 + 0x8);
            t2 = a4;
            t0 = (FUN_0c064f8e(t2, t3));
            if ((t0 != 0) && (t23 = *(signed char *)(((int)stk + 9)), t24 = (t0 == 0), t0 = t23, t0 == 2)) {
                t0 = 0x1C;
                u9 = (*(float *)((((int)stk + 0) + t0)));
                t3 = ((int)stk + 0);
                t3 = (t3 + 0x8);
                u12 = (u12 - u9);
                t2 = t5;
                t0 = (FUN_0c064f8e(t2, t3));
                if ((t0 != 0) && (t27 = *(signed char *)(((int)stk + 9)), t28 = (t0 == 0), t0 = t27, t0 == 2)) {
                    t0 = 0x1C;
                    u9 = (*(float *)((((int)stk + 0) + t0)));
                    u12 = (u12 - u9);
                    if (u11 > u12) {
                        t0 = (*(signed char *)((t7 + 0x1)));
                        t1 = (*(int *)(((int)stk + 0)));
                        u11 = u12;
                        *(unsigned int *)((t1 + 0x0)) = t0;
                        t38 = t1;
                    }
                    u35 = u9;
                }
                u37 = u35;
            }
            u43 = u37;
        } else {
            t38 = t1;
            t40 = t2;
            t41 = t3;
            t42 = t4;
        }
        u9 = u43;
        t1 = t38;
        t2 = t40;
        t3 = t41;
        t4 = t42;
        t6 = (t6 + 0x1);
        t7 = (t7 + 0x3938);
        t5 = (t5 + 0x3938);
        t8 = (t8 + 0x3938);
        if ((int)t6 >= (int)0x4) {
            break;
        }
    }
    t47 = 0x0;
    if (u11 == 99999.0f) {
    } else {
        *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u11;
        t47 = 0x1;
    }
    return t47;
}

int FUN_0c0f3f68(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            t0 = *(signed char *)(((0x41C + a4) + 0x3));
            FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
            t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
            if (t0 == 0) {
                t0 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    FUN_0c0f3db8(a4, 0x5, 0x0);
                }
            } else {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t0 = FUN_0c179ac0();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        FUN_0c0f3dc8(a4, t1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = *(signed char *)(((0x41C + a4) + 0x3));
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
        t0 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
        if (t0 == 0) {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0f3db8(a4, 0x5, 0x0);
            }
        } else {
            FUN_0c0f3db8(a4, 0x5, 0x0);
        }
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        return FUN_0c0f3e9e(a4);
    }
    return t0;
}

int FUN_0c13e518(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = ((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC532498));
    if ((v0_3 == 0)) goto L_C13E536;
    if ((v0_2 == 1)) goto L_C13E546;
    return FUN_0c03f346(v0_0, v0_1, a6, a7);
    L_C13E546:;
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x71C);
    if (((*(signed char *)((v0_1 + 0x3715))) != 26)) goto L_C13E562;
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C13E56A;
    L_C13E562:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C13E56A:;
    v0_3 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_3);
    w0_0 = (0.00999999978f);
    w0_1 = (0.800000012f);
    w0_2 = (1.20000005f);
    if ((v0_3 == 0)) goto L_C13E586;
    if (!((v0_2 == 1))) goto L_C13E5E2;
    w0_3 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_3 - w0_0);
    v0_2 = (0x40);
    if (((w0_3 - w0_0) > w0_1)) goto L_C13E5CC;
    *(float *)((v0_0 + v0_2)) = w0_1;
    (((struct o15_uchar *)(v0_0))->v) = 0x0;
    goto L_C13E5CC;
    L_C13E5E2:;
    *(volatile int *)((v0_0 + 0x10));
    v0_2 = ((FUN_0c187798(v0_0, v0_1, a6)));
    return v0_2;
    L_C13E5CC:;
    (((struct o48_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    v0_2 = (0x44);
    if ((((((struct o44_float *)(v0_0))->v)) > w0_2)) goto L_C13E5E2;
    *(float *)((v0_0 + v0_2)) = ((*(float *)((v0_0 + v0_2))) + w0_0);
    goto L_C13E5E2;
    L_C13E586:;
    w0_3 = (((struct o40_float *)(v0_0))->v);
    (((struct o40_float *)(v0_0))->v) = (w0_3 + w0_0);
    v0_2 = (0x40);
    if ((w0_2 > (w0_3 + w0_0))) goto L_C13E59E;
    *(float *)((v0_0 + v0_2)) = w0_2;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C13E59E:;
    (((struct o48_float *)(v0_0))->v) = ((((struct o40_float *)(v0_0))->v));
    v0_2 = (0x44);
    if ((w0_1 > ((((struct o44_float *)(v0_0))->v)))) goto L_C13E5E2;
    *(float *)((v0_0 + v0_2)) = ((*(float *)((v0_0 + v0_2))) - w0_0);
    goto L_C13E5E2;
    L_C13E536:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    *(unsigned short *)((v0_0 + 0x1C)) = 0xB4;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x3C;
    goto L_C13E546;
}

float FUN_0c060290(int a4, int a5)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(signed char *)((a5 + 0x1));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
                u0 = (((struct o4_float *)((t0 + 0x28)))->v);
                u1 = (((struct o8_float *)((t0 + 0x28)))->v);
                u2 = (((struct o28_float *)(t0))->v);
                u3 = (u1 * u1);
                u3 = u3 + u0 * u0;
                u0 = u3;
                u0 = u0 + u2 * u2;
                u1 = math_signed_sqrt(u0);
                (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u1);
                u0 = u1;
            } else {
                t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
                u1 = (((struct o4_float *)((t0 + 0x28)))->v);
                u2 = (((struct o8_float *)((t0 + 0x28)))->v);
                u3 = (((struct o28_float *)(t0))->v);
                u4 = (u2 * u2);
                u4 = u4 + u1 * u1;
                u1 = u4;
                u1 = u1 + u3 * u3;
                u2 = math_signed_sqrt(u1);
                (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u2);
                (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * u2);
                u0 = u2;
            }
            u1 = u0;
        } else {
            t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
            u0 = (((struct o4_float *)((t0 + 0x28)))->v);
            u2 = (((struct o8_float *)((t0 + 0x28)))->v);
            u3 = (((struct o28_float *)(t0))->v);
            u4 = (u2 * u2);
            u4 = u4 + u0 * u0;
            u0 = u4;
            u0 = u0 + u3 * u3;
            u2 = math_signed_sqrt(u0);
            (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u2);
            (((struct o18_float *)(a5))->v) = (((((struct o18_float *)(a5))->v)) * u2);
            (((struct o1C_float *)(a5))->v) = (((((struct o1C_float *)(a5))->v)) * u2);
            u1 = u2;
        }
        u0 = u1;
    } else {
        t0 = *(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0));
        u1 = (((struct o4_float *)((t0 + 0x28)))->v);
        u2 = (((struct o8_float *)((t0 + 0x28)))->v);
        u3 = (((struct o28_float *)(t0))->v);
        u4 = (u2 * u2);
        u4 = u4 + u1 * u1;
        u1 = u4;
        u1 = u1 + u3 * u3;
        u2 = math_signed_sqrt(u1);
        (((struct o14_float *)(a5))->v) = (((((struct o14_float *)(a5))->v)) * u2);
        u0 = u2;
    }
    return u0;
}

int FUN_0c06d980(int a4, int a5, int a6, int a7)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x3741));
    if ((t0 != 0) && (t0 != 4)) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 5)) {
                switch (t0) {
                case 3:
                    FUN_0c06d850(a4);
                    break;
                case 6:
                    FUN_0c06d880(a4);
                    break;
                case 7:
                    FUN_0c06d950(a4);
                    break;
                }
            } else {
                FUN_0c06d78c(a4);
            }
        } else {
            FUN_0c06d570(a4, a5, a6, a7);
        }
    } else {
        FUN_0c06d540(a4);
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                (((struct o3717_uchar *)(a4))->v) = 0x6;
                (((struct o3718_uchar *)(a4))->v) = 0x1;
                return FUN_0c085cac(a4, 0x6, 0x1);
            }
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = (*(float *)0xC06DB08);
        }
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    return 0x50;
}
