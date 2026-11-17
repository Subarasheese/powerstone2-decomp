/* game/player: functions 0C06C4DC-0C06CACA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3727_uchar { char p[0x3727]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o42C_short { char p[0x42C]; short v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c043064(void);
int FUN_0c059df2(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
extern int FUN_0c07e868();
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ed90(int, int);
int FUN_0c080320(int, float);
int FUN_0c081378(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c06c4dc(int a4, int a5);
int FUN_0c06c580(int a4, int a5, int a6, int a7, float f4);
int FUN_0c06c9c4(int a4);

int FUN_0c06c4dc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = FUN_0c07ebd0(a4);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)));
        t1 = FUN_0c07eaf4(a4);
        t3 = *(int *)((a4 + 0x38));
        t4 = (unsigned short)((t0 + t1) - t3);
        if ((0x8000 & (unsigned short)((t0 + t1) - t3)) != 0) {
            t4 = ((unsigned short)((t0 + t1) - t3) | 0xFFFF0000);
        }
        if ((int)t4 <= (int)(-a5)) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - a5);
        } else {
            if ((int)t4 >= (int)a5) {
                t0 = ((*(int *)((a4 + 0x38))) + a5);
            } else {
                t0 = ((*(int *)((a4 + 0x38))) + (((int)((unsigned int)((int)((unsigned int)t4 + (unsigned int)0x0)) + ((((int)0x0 > (int)t4)) ? 1u : 0u))) >> 1));
            }
            *(unsigned int *)((a4 + 0x38)) = t0;
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
    }
    return t1;
}

int FUN_0c06c580(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register float F1;
    register float F2;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_5 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_2 = a7;
    w0_0 = f4;
    v0_0 = (0xC037BF6);
    v0_0 = (0xC17C110);
    v0_0 = (v0_5);
    if (((*(signed char *)((v0_5 + 0x3723))) != 6)) goto L_C06C5D6;
    v0_4 = (unsigned char)(FUN_0c037bf6(v0_0)) == 0;
    if (v0_4) goto L_C06C5BE;
    return FUN_0c085d0c(v0_0, v0_3, v0_1, v0_2);
    L_C06C5BE:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    v0_5 = ((math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58))));
    return v0_5;
    L_C06C5D6:;
    if (((*(signed char *)((v0_0 + 0x3721))) != 0)) goto L_C06C60A;
    if (((*(signed char *)((v0_0 + 0x389C))) != 0)) goto L_C06C60A;
    if (((*(signed char *)((v0_0 + 0x2))) != 10)) goto L_C06C5F4;
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C06C60A;
    L_C06C5F4:;
    if (!(((*(signed char *)((v0_0 + 0x2))) == 14))) goto L_C06C922;
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C06C60A;
    goto L_C06C922;
    L_C06C922:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    L_C06C936:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 0x30F)) goto L_C06C964;
    FUN_0c037bf6(v0_0);
    FUN_0c07ed90(v0_0, 0x0);
    return FUN_0c06c4dc(v0_0, 0x444);
    L_C06C964:;
    FUN_0c037bf6(v0_0);
    return FUN_0c07ed90(v0_0, (*(signed char *)((v0_0 + 0x3723))));
    L_C06C60A:;
    v0_6 = *(signed char *)((v0_0 + 0x3721));
    v0_3 = (0x1);
    v0_4 = (0x2);
    v0_5 = ((unsigned char)v0_6);
    w0_0 = (0.0f);
    if (((unsigned char)v0_6 == 25)) goto L_C06C630;
    if ((v0_5 == 26)) goto L_C06C630;
    if ((v0_5 == 27)) goto L_C06C630;
    if (((*(signed char *)((v0_0 + 0x3721))) != 0)) goto L_C06C7E6;
    if (((unsigned char)(*(signed char *)((v0_0 + 0x389C))) == 74)) goto L_C06C7B0;
    if (((*(signed char *)((v0_0 + 0x2))) != 14)) goto L_C06C7F6;
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C06C7E6;
    L_C06C7B0:;
    if ((0.0f > ((((struct o50_float *)(v0_0))->v)))) goto L_C06C7BE;
    goto L_C06C922;
    L_C06C7BE:;
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x100) != 0)) goto L_C06C7CE;
    goto L_C06C922;
    L_C06C7CE:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 5.0f);
    FUN_0c06c4dc(v0_0, 0x444);
    goto L_C06C936;
    L_C06C7E6:;
    if (((*(signed char *)((v0_0 + 0x2))) != 14)) goto L_C06C7F6;
    v0_5 = (FUN_0c043064()) == 0;
    if (v0_5) goto L_C06C800;
    L_C06C7F6:;
    if (((*(signed char *)((v0_0 + 0x2))) == 10)) goto L_C06C800;
    goto L_C06C922;
    L_C06C800:;
    if (((*(signed char *)((v0_0 + 0x371A))) == 0)) goto L_C06C80C;
    goto L_C06C922;
    L_C06C80C:;
    if (((*(signed char *)((v0_0 + 0x3721))) == 0)) goto L_C06C818;
    goto L_C06C922;
    L_C06C818:;
    v0_6 = *(signed char *)((v0_0 + 0x3727));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C06C82C;
    if ((v0_5 == 1)) goto L_C06C880;
    if ((v0_5 == 2)) goto L_C06C90A;
    goto L_C06C936;
    L_C06C90A:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    L_C06C914:;
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    goto L_C06C936;
    L_C06C880:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 39)) goto L_C06C922;
    if ((((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)) != 10.0f)) goto L_C06C8A8;
    (((struct o446_uchar *)(v0_0))->v) = v0_4;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0xF);
    L_C06C8A8:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) != 39)) goto L_C06C922;
    if ((!(((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)) > 10.0f))) goto L_C06C922;
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x100) != 0)) goto L_C06C8EA;
    v0_1 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c07e868))(v0_0, 0x9, v0_1, v0_2, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o37A0_float *)(v0_0))->v));
    (((struct o446_uchar *)(v0_0))->v) = v0_3;
    (((struct o3727_uchar *)(v0_0))->v) = v0_4;
    L_C06C8EA:;
    if (((*(signed char *)((v0_0 + 0x2))) != 14)) goto L_C06C8FA;
    v0_5 = (0x2C);
    w0_1 = (3.14285707f);
    FPUL_ = (0x40492492);
    L_C06C902:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) - w0_1);
    goto L_C06C936;
    L_C06C8FA:;
    v0_5 = (0x2C);
    w0_1 = (2.53846169f);
    FPUL_ = (0x40227628);
    goto L_C06C902;
    L_C06C82C:;
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C06C922;
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x100) == 0)) goto L_C06C922;
    *(int *)((int)stk + 8) = 0x27;
    *(int *)((int)stk + 4) = 0x0;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_2 = v0_1;
    *(int *)((int)stk + 0) = v0_2;
    FUN_0c07e79c(v0_0, v0_1, 0x0, 0x27, v0_2, 0x0, 0x27);
    (((struct o3727_uchar *)(v0_0))->v) = v0_3;
    goto L_C06C922;
    L_C06C630:;
    v0_6 = *(signed char *)((v0_0 + 0x3727));
    v0_5 = (v0_6);
    if ((v0_6 == 0)) goto L_C06C660;
    if ((v0_5 == 1)) goto L_C06C6B4;
    if ((v0_5 != 2)) goto L_C06C644;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    goto L_C06C914;
    L_C06C644:;
    goto L_C06C936;
    L_C06C6B4:;
    if (((unsigned short)((((struct o3818_short *)(v0_0))->v)) == 0x30F)) goto L_C06C6C4;
    goto L_C06C922;
    L_C06C6C4:;
    if ((((((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v)) > 30.0f)) goto L_C06C6D8;
    goto L_C06C922;
    L_C06C6D8:;
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x100) != 0)) goto L_C06C6FC;
    v0_1 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c07e868))(v0_0, 0x9, v0_1, v0_2, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    (((struct o50_float *)(v0_0))->v) = w0_0;
    (((struct o5C_float *)(v0_0))->v) = ((((struct o37A0_float *)(v0_0))->v));
    (((struct o3727_uchar *)(v0_0))->v) = v0_4;
    L_C06C6FC:;
    v0_1 = *(signed char *)((v0_0 + 0x3721));
    v0_5 = ((unsigned char)v0_1);
    w0_0 = (60.0f);
    if (((unsigned char)v0_1 == 26)) goto L_C06C716;
    if ((v0_5 == 25)) goto L_C06C720;
    if ((v0_5 == 27)) goto L_C06C72A;
    goto L_C06C936;
    L_C06C72A:;
    v0_5 = (0x2C);
    w0_1 = (15.0f);
    FPUL_ = (0x41700000);
    L_C06C732:;
    *(float *)((v0_0 + v0_5)) = ((*(float *)((v0_0 + v0_5))) - ((-((((((struct o5C_float *)(v0_0))->v)) / w0_1) * w0_0))));
    goto L_C06C936;
    L_C06C720:;
    v0_5 = (0x2C);
    w0_1 = (27.0f);
    FPUL_ = (0x41D80000);
    goto L_C06C732;
    L_C06C716:;
    v0_5 = (0x2C);
    w0_1 = (33.0f);
    FPUL_ = (0x42040000);
    goto L_C06C732;
    L_C06C660:;
    if ((0.0f > ((((struct o50_float *)(v0_0))->v)))) goto L_C06C66E;
    goto L_C06C922;
    L_C06C66E:;
    if ((((unsigned short)((((struct o42C_short *)(v0_0))->v)) & 0x100) != 0)) goto L_C06C67E;
    goto L_C06C922;
    L_C06C67E:;
    *(int *)((int)stk + 8) = 0xF;
    *(int *)((int)stk + 4) = 0x3;
    *(int *)((int)stk + 0) = 0xFFFFFFFF;
    FUN_0c07e79c(v0_0, 0xFFFFFFFF, 0x3, 0xF, 0xFFFFFFFF, 0x3, 0xF);
    FUN_0c080320(v0_0, 2.5f);
    (((struct o3727_uchar *)(v0_0))->v) = v0_3;
    FUN_0c059df2((*(signed char *)((v0_0 + 0x1))), 0xF);
    goto L_C06C922;
}

int FUN_0c06c9c4(int a4)
{
    int stk[2];
    register int t1;
    register int t4;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    t4 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        *(volatile signed char *)((a4 + 0x16));
        FUN_0c081378(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t4 = 0x15;
    }
    return t4;
}
