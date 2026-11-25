/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3790_float { char p[0x3790]; float v; };
struct o37E8_float { char p[0x37E8]; float v; };
struct o37EC_float { char p[0x37EC]; float v; };
struct o37F0_float { char p[0x37F0]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o3858_uint { char p[0x3858]; unsigned int v; };
struct o385C_uint { char p[0x385C]; unsigned int v; };
struct o3860_uint { char p[0x3860]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o420_short { char p[0x420]; short v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
int FUN_0c07d1fc(int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int);
float math_cos_angle16(int);
int math_mat_get_translate(int, int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0a3e66(int a4);
int FUN_0c0e3dec(int a4, int a5, int a6, int a7);
int FUN_0c06f4e8(int a4);
int FUN_0c0b7322(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };


int FUN_0c0a3e66(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    float u2;

    t1 = FUN_0c064f80(((((struct o3760_int *)(a4))->v)));
    if ((t1 != 0) && ((t0 = (((struct o3760_int *)(a4))->v), u0 = (((struct o2C_float *)(a4))->v), u1 = (((struct o2C_float *)(t0))->v), u0 > u1) && (u2 = (((struct o3780_float *)(a4))->v), 200.0f > u2))) {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((((struct o28_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o28_float *)(a4))->v))) / 6.0f));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((((struct o30_float *)(((((struct o3760_int *)(a4))->v))))->v)) - ((((struct o30_float *)(a4))->v))) / 6.0f));
    }
    if (42.0f > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) {
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
    } else {
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    }
    if ((*(signed char *)((a4 + 0x131))) != 0) {
        t0 = FUN_0c07d1fc(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x6);
            (((struct o4C_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x38))))) * 6.0f));
            (((struct o54_float *)(a4))->v) = (-((math_cos_angle16((*(int *)((a4 + 0x38))))) * 6.0f));
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            (((struct o50_float *)(a4))->v) = 30.0f;
            (((struct o5C_float *)(a4))->v) = -1.79999995f;
            return 0x5C;
        }
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            (((struct o15_uchar *)(a4))->v) = 0x5;
            FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x7);
            return FUN_0c07daea(a4);
        }
        return t0;
    }
    return 0x50;
}

int FUN_0c0e3dec(int a4, int a5, int a6, int a7)
{
    int stk[3];

    int v0_0;
    int v0_2;
    int v0_1;
    int v0_3;
    int v0_4;
    int v0_5;
    int R1;
    int T_;
    int R5;
    int R3;
    int R2;
    v0_1 = a4;
    v0_4 = a6;
    v0_5 = *(signed char *)(v0_1 + 0x15);
    v0_2 = (v0_5);
    v0_3 = (0x0);
    v0_0 = (v0_1);
    v0_1 = (0xC2738B8);
    if ((v0_5 == 0)) goto L_C0E3E22;
    if ((v0_2 == 1)) goto L_C0E3E72;
    if ((v0_2 == 2)) goto L_C0E3E84;
    if ((v0_2 == 3)) goto L_C0E3ED8;
    if ((v0_2 == 4)) goto L_C0E3F00;
    if ((v0_2 == 5)) goto L_C0E3F0C;
    if ((v0_2 != 6)) goto L_C0E3E1E;
    (((struct oA8_uchar *)(v0_0))->v) = (((((((struct o1C_short *)(v0_0))->v)) & 0x4) >> 1) >> 1);
    v0_3 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_3 - 1);
    v0_2 = ((short)(v0_3 - 1));
    if (((int)(short)(v0_3 - 1) > 0)) goto L_C0E3F68;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    v0_2 = *(signed char *)(v0_0 + 0x41C);
    (((struct o420_ushort *)(v0_0))->v) = (*(short *)(((v0_1 + ((unsigned short)(unsigned char)v0_2 * (unsigned short)0x34)) + 0x1A)));
    v0_1 = ((v0_1 + ((unsigned short)(unsigned char)v0_2 * (unsigned short)0x34)));
    L_C0E3F5C:;
    v0_2 = ((FUN_0c0c2d56(v0_0, 0x2, (*(signed char *)(v0_0 + 0x1)), a7)));
    L_C0E3F68:;
    return v0_2;
    L_C0E3E1E:;
    goto L_C0E3F68;
    L_C0E3F0C:;
    v0_1 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_1 - 1);
    v0_2 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0E3F68;
    (((struct o1C_ushort *)(v0_0))->v) = 0x78;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    v0_2 = (0x15);
    goto L_C0E3F68;
    L_C0E3F00:;
    (((struct o1C_ushort *)(v0_0))->v) = 0x1E0;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    goto L_C0E3F0C;
    L_C0E3ED8:;
    v0_4 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_4 - 1);
    v0_2 = ((short)(v0_4 - 1));
    if (((int)(short)(v0_4 - 1) > 0)) goto L_C0E3F68;
    (((struct o420_ushort *)(v0_0))->v) = (*(short *)(((v0_1 + ((unsigned short)(unsigned char)(*(signed char *)(v0_0 + 0x41C)) * (unsigned short)0x34)) + 0x1A)));
    (((struct o15_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0x15);
    goto L_C0E3F68;
    L_C0E3E84:;
    v0_3 = (((struct o34_int *)(v0_0))->v);
    v0_1 = (v0_3);
    if (((int)v0_3 >= (int)0x838E)) goto L_C0E3EA4;
    if (((int)v0_1 <= (int)0x7C71)) goto L_C0E3EA4;
    (((struct o34_uint *)(v0_0))->v) = 0x8000;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)(v0_0 + 0x15)) + 0x1);
    (((struct o1C_ushort *)(v0_0))->v) = 0x12C;
    v0_2 = (0x12C);
    goto L_C0E3F68;
    L_C0E3EA4:;
    (((struct o34_uint *)(v0_0))->v) = (unsigned short)(((((struct o34_int *)(v0_0))->v)) + 0x222);
    goto L_C0E3F68;
    L_C0E3E72:;
    v0_4 = (((struct o34_int *)(v0_0))->v);
    v0_1 = (v0_4);
    if (((int)v0_4 >= (int)0x38E)) goto L_C0E3EA4;
    if (((int)v0_1 <= (int)0xFFFFFC72)) goto L_C0E3EA4;
    (((struct o34_uint *)(v0_0))->v) = v0_3;
    goto L_C0E3F5C;
    L_C0E3E22:;
    FUN_0c0c2ab6(v0_0, 0x15);
    if (((*(signed char *)(v0_0 + 0x3)) != 3)) goto L_C0E3E3C;
    (((struct o15_uchar *)(v0_0))->v) = 0x4;
    (((struct oA8_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0xA8);
    goto L_C0E3F68;
    L_C0E3E3C:;
    if (((int)((((struct o420_short *)(v0_0))->v)) <= 0)) goto L_C0E3E4C;
    (((struct o15_uchar *)(v0_0))->v) = 0x1;
    L_C0E3E52:;
    math_mat_get_translate((v0_0 + 0x64), ((int)stk + 0));
    thunk_FUN_0c05abb2(0x47, (v0_0 + 0x28));
    v0_2 = ((thunk_FUN_0c05abb2(0x48, ((int)stk + 0))));
    goto L_C0E3F68;
    L_C0E3E4C:;
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    goto L_C0E3E52;
}


