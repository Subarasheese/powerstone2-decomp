/* game/player: functions 0C07AC90-0C07BB64, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c0735f4(int, int);
int FUN_0c073744(int);
int FUN_0c073ed0(int, int, int);
int FUN_0c07b008(int);
extern int FUN_0c07b038();
extern int FUN_0c07b0ca();
extern int FUN_0c07b1a0();
int FUN_0c07b56c(int);
int FUN_0c07d2c4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c080320(int, float);
extern int FUN_0c085cac();
int FUN_0c085d0c(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c07b1ee(int a4, int a5, int a6);
int FUN_0c07b5f4(int a4, int a5, int a6, int a7);
int FUN_0c07b6c6(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };


int FUN_0c07b1ee(int a4, int a5, int a6)
{
    unsigned int s0;

    int v0_0;
    int v0_4;
    int v0_1;
    float w0_0;
    int v0_2;
    int v0_5;
    int v0_3;
    int R1;
    float F0;
    float F3;
    float F4;
    int T_;
    float F15;
    float F12;
    int R12;
    int R11;
    int R10;
    int R3;
    int R2;
    v0_4 = a4;
    v0_2 = a5;
    v0_3 = a6;
    v0_0 = (v0_4);
    if (((*(signed char *)((((((struct o3770_int *)(v0_4))->v)) + 0x3728))) == 0)) goto L_C07B21A;
    return FUN_0c073744(v0_0);
    L_C07B21A:;
    v0_1 = (0x1);
    if (!(((*(signed char *)(v0_0 + 0x3728)) != 2))) goto L_C07B370;
    if (((*(signed char *)((0x371D + ((((struct o3770_int *)(v0_0))->v))))) == 1)) goto L_C07B304;
    if (((*(signed char *)((0x3715 + ((((struct o3770_int *)(v0_0))->v))))) == 26)) goto L_C07B244;
    goto L_C07B340;
    L_C07B370:;
    v0_4 = *(signed char *)(v0_0 + 0x16);
    v0_5 = (v0_4);
    if ((v0_4 == 0)) goto L_C07B388;
    if ((v0_5 == 1)) goto L_C07B390;
    if ((v0_5 == 2)) goto L_C07B398;
    if (!((v0_5 == 3))) goto L_C07B3A4;
    v0_2 = ((int (*)(int, int, int))(FUN_0c07b1a0))(v0_0, v0_2, v0_3);
    goto L_C07B3A4;
    L_C07B3A4:;
    v0_4 = (0x0);
    if (((*(signed char *)(v0_0 + 0x3728)) == 2)) goto L_C07B3C4;
    (((struct o12A_ushort *)(v0_0))->v) = v0_4;
    (((struct o12C_ushort *)(v0_0))->v) = v0_4;
    (((struct o12E_ushort *)(v0_0))->v) = v0_4;
    (((struct o3770_uint *)(((((struct o3770_int *)(v0_0))->v))))->v) = v0_0;
    v0_5 = (0x3770);
    L_C07B3DC:;
    return v0_5;
    L_C07B3C4:;
    (((struct o3830_ushort *)(v0_0))->v) = (((((struct o12E_short *)(v0_0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(v0_0))->v) = v0_1;
    (((struct o382E_ushort *)(v0_0))->v) = v0_4;
    (((struct o374A_uchar *)(v0_0))->v) = v0_1;
    v0_5 = (0x374A);
    goto L_C07B3DC;
    L_C07B398:;
    v0_2 = ((int (*)(int, int, int))(FUN_0c07b0ca))(v0_0, v0_2, v0_3);
    goto L_C07B3A4;
    L_C07B390:;
    v0_2 = ((int (*)(int, int, int))(FUN_0c07b038))(v0_0, v0_2, v0_3);
    goto L_C07B3A4;
    L_C07B388:;
    FUN_0c07b008(v0_0);
    goto L_C07B3A4;
    L_C07B340:;
    return ((int (*)(int, int, int))(FUN_0c085cac))(v0_0, 0x10, 0x8);
    L_C07B244:;
    (((struct o38_uint *)(v0_0))->v) = (unsigned short)((*(int *)((((((struct o3770_int *)(v0_0))->v)) + 0x38))) + 0x8000);
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(v0_0 + 0x1)) * (short)0x3938) + 0xC532564))) + 0x28), (v0_0 + 0x28));
    v0_1 = (((struct o3770_int *)(v0_0))->v);
    s0 = v0_1;
    w0_0 = ((((struct o28_float *)(v0_1))->v));
    w0_0 = w0_0 + 10.0f * (math_sin_angle16(((((struct o38_int *)(v0_1))->v))));
    (((struct o28_float *)(v0_0))->v) = w0_0;
    v0_1 = (((struct o3770_int *)(v0_0))->v);
    s0 = v0_1;
    w0_0 = ((((struct o30_float *)(v0_1))->v));
    w0_0 = w0_0 + 10.0f * (math_cos_angle16(((((struct o38_int *)(v0_1))->v))));
    (((struct o30_float *)(v0_0))->v) = w0_0;
    return FUN_0c073ed0(((((struct o3770_int *)(v0_0))->v)), (*(signed char *)(v0_0 + 0x1)), ((*(int *)0xC25AD1C) + 0x1B8));
    L_C07B304:;
    if (((int)(*(signed char *)(v0_0 + 0x16)) <= (int)v0_1)) goto L_C07B370;
    s0 = (unsigned char)(*(signed char *)(((0x3744 + v0_0) + 0x0)));
    FUN_0c07d2c4(v0_0, (0x3744 + v0_0));
    if ((((*(int *)&s0)) == (unsigned char)(*(signed char *)(v0_0 + 0x3744)))) goto L_C07B336;
    FUN_0c080320(v0_0, (1.0f + 1.0f));
    (((struct o1C_ushort *)(v0_0))->v) = 0x14;
    L_C07B336:;
    if (((int)(unsigned char)(*(signed char *)(v0_0 + 0x3744)) > 0)) goto L_C07B356;
    goto L_C07B340;
    L_C07B356:;
    if ((((((struct o1C_short *)(v0_0))->v)) == 0)) goto L_C07B370;
    v0_4 = (((struct o1C_short *)(v0_0))->v);
    (((struct o1C_ushort *)(v0_0))->v) = (v0_4 - 1);
    if (((short)(v0_4 - 1) != 0)) goto L_C07B370;
    FUN_0c080320(v0_0, 1.0f);
    goto L_C07B370;
}

int FUN_0c07b5f4(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t10;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    FUN_0c037bf6(a4);
    if (!((*(float *)0xC07B77C) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)))) {
        (((struct o20_ushort *)(a4))->v) = 0x6;
        t6 = *(signed char *)((0x3721 + ((((struct o3770_int *)(a4))->v))));
        t10 = 0xA0;
        if ((unsigned char)t6 != 49) {
            t10 = 0xA1;
            if ((unsigned char)t6 != 0xCE) {
                t10 = 0xA0;
            }
        }
        FUN_0c0735f4(a4, ((*(int *)0xC25AD18) + (((t10 << 2) + t10) << 2)));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return FUN_0c038362(a4);
}

int FUN_0c07b6c6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    if (((((struct o20_short *)(a4))->v)) == 6) {
        FUN_0c07b56c(((((struct o3770_int *)(a4))->v)));
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    t1 = 0x20;
    if ((short)(t0 - 1) == 0) {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x92, 0xFFFFFFFF, 0x3, 0x92);
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = (((struct o118_int *)(a4))->v);
        t2 = *(int *)(((0x118 + a4) + 0x4));
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        FUN_0c037bf6(a4);
        (((struct o20_ushort *)(a4))->v) = 0xE;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
