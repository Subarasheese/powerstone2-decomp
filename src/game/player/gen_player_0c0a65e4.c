/* game/player: functions 0C0A65E4-0C0A6C9C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059ef6(int, int);
int FUN_0c059f20(int, int);
int FUN_0c07035a(int, float, float, float, float);
int FUN_0c07262e(int);
int FUN_0c07d1fc(int, int, int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d774(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f56a(int);
int FUN_0c080320(int, float);
int FUN_0c085cac(int, int, int, int);
extern int FUN_0c085d0c();
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c1366b0(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a65e4(int a4, int a5, int a6, int a7);
int FUN_0c0a68a2(int a4, int a5, int a6, int a7);
int FUN_0c0a68b2(int a4);
int FUN_0c0a6a14(int a4);
int FUN_0c0a6a9e(int a4);
int FUN_0c0a6c22(int a4);

int FUN_0c0a65e4(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        *(volatile signed char *)((a4 + 0x3728));
        
        return ((int (*)(int, int, int, int))(0xC0A6588))(a4, a5, a6, a7);
    }
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0A63A0))(a4, a5, a6, a7);
}

int FUN_0c0a68a2(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        return ((int (*)(int, int, int, int))(0xC0A6604))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A667C))(a4, a5, a6, a7);
}

int FUN_0c0a68b2(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            return FUN_0c037bf6(a4);
        }
        return t0;
    }
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        t0 = *(signed char *)((a4 + 0x17));
        switch (t0) {
        case 0:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xA, (t0), 0x6, 0xA);
            break;
        case 1:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xA, (t0), 0x6, 0xA);
            break;
        case 2:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x8, (t0), 0x6, 0x8);
            break;
        case 3:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x8, (t0), 0x6, 0x8);
            break;
        }
    } else {
        t0 = *(signed char *)((a4 + 0x17));
        switch (t0) {
        case 0:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xE, (t0), 0x6, 0xE);
            break;
        case 1:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0xF, (t0), 0x6, 0xF);
            break;
        case 2:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x4, (t0), 0x6, 0x4);
            break;
        case 3:
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x6, 0x11, (t0), 0x6, 0x11);
            break;
        }
    }
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
    return FUN_0c037bf6(a4);
}

int FUN_0c0a6a14(int a4)
{
    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x1A);
    } else {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x1E);
        FUN_0c080320(a4, ((((struct o8_float *)0xC25D3B4)->v)));
        FUN_0c07e2f4(a4, 0x28);
    }
    FUN_0c037bf6(a4);
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    FUN_0c07035a(a4, ((((struct o0_float *)0xC25D3B4)->v)), ((((struct o4_float *)0xC25D3B4)->v)), ((((struct o4_float *)0xC0A6B74)->v)), ((((struct o0_float *)0xC0A6B74)->v)));
    return FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x1);
}

int FUN_0c0a6a9e(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R12;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x17));
    v0_2 = (v0_3);
    v0_0 = (v0_1);
    if ((v0_3 == 0)) goto L_C0A6AB8;
    if ((v0_2 != 1)) goto L_C0A6AB4;
    if (((*(signed char *)((v0_0 + 0x371C))) != 0)) goto L_C0A6C06;
    w0_0 = (((struct o8C_float *)(((((struct o118_int *)(v0_0))->v))))->v);
    v0_1 = ((int)w0_0);
    FPUL_ = ((int)w0_0);
    if (((int)w0_0 != 0)) goto L_C0A6C06;
    FUN_0c059f20((*(signed char *)((v0_0 + 0x1))), (*(signed char *)((v0_0 + 0x135))));
    L_C0A6C06:;
    v0_1 = FUN_0c037bf6(v0_0);
    v0_2 = ((unsigned char)v0_1);
    if (((unsigned char)v0_1 == 0)) goto L_C0A6C1C;
    return FUN_0c085d0c(v0_0, R5, R6, R7);
    L_C0A6C1C:;
    return v0_2;
    L_C0A6AB4:;
    goto L_C0A6C1C;
    L_C0A6AB8:;
    FUN_0c037bf6(v0_0);
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C0A6AFC;
    v0_1 = (FUN_0c07d1fc(v0_0, R5, R6, R7)) == 0;
    if (v0_1) goto L_C0A6AFC;
    (((struct o131_uchar *)(v0_0))->v) = 0x0;
    v0_2 = FUN_0c07f56a(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0A6AFC;
    (((struct o372A_uchar *)(v0_0))->v) = (v0_1 - 1);
    (((struct o3728_uchar *)(v0_0))->v) = 0x0;
    return FUN_0c085cac(v0_0, 0x21, 0x0, R7);
    L_C0A6AFC:;
    if ((((((struct o50_float *)(v0_0))->v)) > 0.0f)) goto L_C0A6BC2;
    v0_1 = (FUN_0c07ecc6(v0_0, 0x0, 0x0)) == 0;
    if (v0_1) goto L_C0A6BC2;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    if (((*(signed char *)((v0_0 + 0x371C))) == 0)) goto L_C0A6B98;
    FUN_0c0a3058(v0_0, (*(signed char *)((v0_0 + 0x1))), 0x0, 0x27);
    v0_1 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    v0_1 = (((struct o11C_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 5.0f;
    (((struct o94_float *)(v0_1))->v) = 5.0f;
    L_C0A6BB2:;
    return FUN_0c1366b0((*(signed char *)((v0_0 + 0x1))), (v0_0 + 0x28), R6);
    L_C0A6B98:;
    FUN_0c0a3058(v0_0, (*(signed char *)((v0_0 + 0x1))), 0x2, 0xD);
    FUN_0c059f20((*(signed char *)((v0_0 + 0x1))), 0x0);
    goto L_C0A6BB2;
    L_C0A6BC2:;
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    return math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
}

int FUN_0c0a6c22(int a4)
{
    register int t4;

    if ((*(signed char *)((a4 + 0x371C))) != 0) {
        return FUN_0c07262e(a4);
    }
    if (((((struct o3768_int *)(a4))->v)) != 0) {
        t4 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x3, a4);
        if (t4 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (math_angle_between_points_xz((a4 + 0x28), (((((struct o3768_int *)(a4))->v)) + 0x28)));
            (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(((((struct o3768_int *)(a4))->v))))->v));
            (((struct o30_float *)(a4))->v) = ((((struct o30_float *)(((((struct o3768_int *)(a4))->v))))->v));
        }
    }
    (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0x40);
    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c0a3058(a4, 0xFFFFFFFF, 0x2, 0x1E);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    return 0x14;
}
